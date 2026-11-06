/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x32f614:6724b84cfb
 *  --------------------------------------------------------------------------*/

void FUN_0032f614(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  char *pcVar6;
  uint uStack_48;
  uint uStack_44;
  
  if ((bRam000000000209336b & 3) != 0) {
    return;
  }
  uVar4 = 0;
  uVar5 = 0;
  do {
    lVar1 = (uVar5 >> 4) * 4;
    *(uint *)(lVar1 + 0x2093360) =
         *(uint *)(lVar1 + 0x2093360) & (3 << (ulong)(uVar4 & 0x1e) ^ 0xffffffffU) |
         2 << (ulong)(uVar4 & 0x1e);
    uVar2 = (int)uVar5 + 1;
    uVar5 = (ulong)uVar2;
    uVar4 = uVar4 + 2;
  } while (uVar2 != 0x80);
  pcVar6 = " \t";
  do {
    iVar3 = func_0x002fcfd4(&uStack_48,pcVar6,&UNK_01c2fa22);
    pcVar6 = pcVar6 + iVar3;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    uVar5 = (ulong)(uStack_48 >> 2) & 0x3ffffffc;
    *(uint *)(uVar5 + 0x2093360) =
         *(uint *)(uVar5 + 0x2093360) & (3 << (ulong)((uStack_48 & 0xf) << 1) ^ 0xffffffffU);
  } while (*pcVar6 != '\0');
  pcVar6 = ".,;!?\"";
  do {
    iVar3 = func_0x002fcfd4(&uStack_44,pcVar6,"");
    pcVar6 = pcVar6 + iVar3;
    uVar4 = (uStack_44 & 0xf) << 1;
    uVar5 = (ulong)(uStack_44 >> 2) & 0x3ffffffc;
    *(uint *)(uVar5 + 0x2093360) =
         *(uint *)(uVar5 + 0x2093360) & (3 << (ulong)uVar4 ^ 0xffffffffU) | 1 << (ulong)uVar4;
  } while (*pcVar6 != '\0');
  uRam0000000002093330 = uRam0000000002093330 & 0xc0000000 | 0x2aaaaa94;
  return;
}

