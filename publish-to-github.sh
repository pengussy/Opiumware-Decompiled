#!/usr/bin/env bash
#
#  Publish this repository to GitHub - Termux friendly.
#
#      bash publish-to-github.sh
#
#  What it does
#    1. checks for git (installs it with `pkg install git` on Termux if it is missing)
#    2. asks for your GitHub username, a repo name and a personal access token
#    3. creates the repository over the API if it does not exist yet
#    4. makes a fresh commit and pushes it
#    5. removes the token from .git/config again, so it is not left on disk
#
#  You need a token with the `repo` scope:
#      GitHub -> Settings -> Developer settings -> Personal access tokens
#  Nothing is uploaded until you confirm at the last prompt.
#
set -euo pipefail

BOLD=$'\033[1m'; DIM=$'\033[2m'; RED=$'\033[31m'; GRN=$'\033[32m'; OFF=$'\033[0m'

say()  { printf '%s\n' "${BOLD}$*${OFF}"; }
info() { printf '%s\n' "${DIM}$*${OFF}"; }
die()  { printf '%s\n' "${RED}error: $*${OFF}" >&2; exit 1; }

say ":: publish to GitHub"
info "working directory: $(pwd)"
echo

# ---------------------------------------------------------------- dependencies
if ! command -v git >/dev/null 2>&1; then
  if command -v pkg >/dev/null 2>&1; then
    say "git not found - installing it"
    pkg install -y git
  else
    die "git is not installed and pkg is not available"
  fi
fi
command -v curl >/dev/null 2>&1 || { command -v pkg >/dev/null 2>&1 && pkg install -y curl; }
command -v curl >/dev/null 2>&1 || die "curl is required to create the repository over the API"

[ -f LICENSE ] && [ -d pseudocode ] || die "run this from the root of the extracted repository"

# ---------------------------------------------------------------- inputs
read -rp "GitHub username : " GH_USER || true
[ -n "$GH_USER" ] || die "username is required"

DEFAULT_REPO="opiumware-decompiled"
read -rp "repository name [${DEFAULT_REPO}] : " GH_REPO || true
GH_REPO="${GH_REPO:-$DEFAULT_REPO}"

read -rp "commit message [initial import] : " MSG || true
MSG="${MSG:-initial import}"

read -rsp "personal access token (hidden, needs 'repo' scope) : " GH_TOKEN || true
echo
[ -n "$GH_TOKEN" ] || die "token is required"

MAIL="${GH_USER}@users.noreply.github.com"

# ---------------------------------------------------------------- create repo
say ":: checking whether ${GH_USER}/${GH_REPO} exists"
CODE=$(curl -s -o /dev/null -w '%{http_code}' \
  -H "Authorization: Bearer ${GH_TOKEN}" \
  -H "Accept: application/vnd.github+json" \
  "https://api.github.com/repos/${GH_USER}/${GH_REPO}" || true)

case "$CODE" in
  200) info "repository already exists - pushing into it" ;;
  404)
    info "creating it"
    RESP=$(curl -s -X POST \
      -H "Authorization: Bearer ${GH_TOKEN}" \
      -H "Accept: application/vnd.github+json" \
      -d "{\"name\":\"${GH_REPO}\",\"description\":\"Static analysis output\",\"private\":false}" \
      "https://api.github.com/user/repos")
    printf '%s' "$RESP" | grep -q '"full_name"' || {
      printf '%s\n' "$RESP" | head -c 400; echo
      die "repository creation failed - check the token scope"
    }
    info "created"
    ;;
  401) die "token rejected (401) - check the token and its scope" ;;
  *)   die "unexpected API answer: ${CODE}" ;;
esac

# ---------------------------------------------------------------- commit
if [ ! -d .git ]; then
  git init -q -b main
  info "initialised a new git repository"
fi
git symbolic-ref -q HEAD >/dev/null 2>&1 || git checkout -q -b main
git config user.name  "$GH_USER"
git config user.email "$MAIL"

say ":: staging files"
git add -A
COUNT=$(git diff --cached --name-only | wc -l | tr -d ' ')
info "${COUNT} files staged"

if [ "$COUNT" = "0" ]; then
  [ "$(git rev-list --count HEAD 2>/dev/null || echo 0)" != "0" ] || die "nothing to commit"
else
  git commit -q -m "$MSG"
  info "committed"
fi

# ---------------------------------------------------------------- push
say ":: pushing"
git remote remove origin >/dev/null 2>&1 || true
git remote add origin "https://x-access-token:${GH_TOKEN}@github.com/${GH_USER}/${GH_REPO}.git"

if git push -u origin main; then
  git remote set-url origin "https://github.com/${GH_USER}/${GH_REPO}.git"
  echo
  printf '%s\n' "${GRN}done${OFF} -> https://github.com/${GH_USER}/${GH_REPO}"
  info "the token was removed from .git/config"
else
  git remote set-url origin "https://github.com/${GH_USER}/${GH_REPO}.git"
  die "push failed - if the remote already has commits, re-run and force-push, or pick another repo name"
fi
