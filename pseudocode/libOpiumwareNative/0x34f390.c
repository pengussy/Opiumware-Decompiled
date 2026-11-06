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
 *  file-id: 0x34f390:b7750366bc
 *  --------------------------------------------------------------------------*/

long FUN_0034f390(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  long *plVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lStack_70;
  ulong uStack_68;
  
  lStack_70 = param_2;
  if ((*(byte *)(*(long *)(param_1 + 0x880) + 0x1e) & 3) == 0) {
    uVar16 = (uint)*(undefined8 *)(param_1 + 0x9b0);
    if ((uVar16 >> 0x16 & 1) == 0) {
      lVar21 = 0;
      piVar17 = *(int **)(param_1 + 0x18);
      bVar5 = *(byte *)(*(long *)(piVar17 + 0x36) + 0x50);
      lStack_70 = param_3;
/* no support for modified copies - github.com/pengussy */
      param_3 = param_2;
    }
    else {
      if ((uVar16 >> 0x15 & 1) == 0) goto LAB_0034f3c8;
      iVar10 = func_0x004dcb7c(param_2);
      if ((0 < iVar10) && (lVar12 = func_0x004dcb90(param_2,0), *(int *)(lVar12 + 0x24) == 0x80000))
      {
        uVar14 = func_0x004dcb7c(param_3);
        iVar10 = (int)uVar14;
        if (0 < iVar10) {
          iVar11 = 0;
LAB_0034f454:
          lVar12 = func_0x004dcb90(param_3,iVar11);
          if (*(int *)(lVar12 + 0x24) != 0x80000) goto code_r0x0034f46c;
          uVar14 = func_0x004dc124(0,uVar14);
          lVar21 = func_0x004dc474(uVar14,&DAT_0034f8a8);
          if (lVar21 != 0) {
            func_0x004dc9ec(lVar21,lVar12);
            iVar11 = iVar11 + 1;
            if (iVar11 < iVar10) {
              do {
                lVar12 = func_0x004dcb90(param_3,iVar11);
                if (*(int *)(lVar12 + 0x24) == 0x80000) {
                  func_0x004dc9ec(lVar21,lVar12);
                }
                iVar11 = iVar11 + 1;
              } while (iVar10 != iVar11);
            }
            iVar11 = 0;
            do {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
              lVar12 = func_0x004dcb90(param_3,iVar11);
              if (*(int *)(lVar12 + 0x24) != 0x80000) {
                func_0x004dc9ec(lVar21,lVar12);
              }
              iVar11 = iVar11 + 1;
            } while (iVar10 != iVar11);
            piVar17 = *(int **)(param_1 + 0x18);
            bVar5 = *(byte *)(*(long *)(piVar17 + 0x36) + 0x50);
            param_3 = lVar21;
            goto joined_r0x0034f680;
          }
          goto LAB_0034f47c;
        }
      }
LAB_0034f478:
      lVar21 = 0;
LAB_0034f47c:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      piVar17 = *(int **)(param_1 + 0x18);
      bVar5 = *(byte *)(*(long *)(piVar17 + 0x36) + 0x50);
    }
joined_r0x0034f680:
    if ((bVar5 >> 3 & 1) == 0) goto LAB_0034f490;
LAB_0034f684:
    func_0x00369cc0(param_1);
    func_0x0035cc40(param_1);
  }
  else {
LAB_0034f3c8:
    lVar21 = 0;
    piVar17 = *(int **)(param_1 + 0x18);
    if ((*(byte *)(*(long *)(piVar17 + 0x36) + 0x50) >> 3 & 1) != 0) goto LAB_0034f684;
LAB_0034f490:
    if ((*piVar17 < 0x304) || (*piVar17 == 0x10000)) goto LAB_0034f684;
    if (*(long *)(param_1 + 0x978) != 0) {
      uVar19 = *(ulong *)(param_1 + 0x118);
      if (uVar19 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0;
        do {
          if ((-1 < (int)uVar20) && ((int)uVar20 < (int)uVar19)) {
            puVar1 = &UNK_00001750;
            if (*(int *)(param_1 + 0x78) != 0) {
              puVar1 = &UNK_00001760;
            }
            if (*(long *)(puVar1 + param_1) == 0) {
              plVar18 = (long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                                (uVar20 & 0x7fffffff) * 0x28);
              lVar12 = *plVar18;
joined_r0x0034f55c:
              if (lVar12 == 0) goto LAB_0034f4e8;
            }
            else {
              puVar2 = &UNK_00001758;
// no support for modified copies
              if (*(int *)(param_1 + 0x78) != 0) {
                puVar2 = &UNK_00001768;
              }
              lVar12 = _memchr(*(long *)(puVar1 + param_1),2,*(undefined8 *)(puVar2 + param_1));
              if (lVar12 == 0) {
                plVar18 = (long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                                  (uVar20 & 0x7fffffff) * 0x28);
                lVar12 = *plVar18;
                goto joined_r0x0034f55c;
              }
              plVar18 = (long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                                (uVar20 & 0x7fffffff) * 0x28);
            }
            if (plVar18[1] != 0) goto LAB_0034f570;
          }
LAB_0034f4e8:
          uVar20 = uVar20 + 1;
        } while (uVar19 != uVar20);
/* wm:keep the notice, keep the source honest */
        uVar20 = uVar19;
      }
LAB_0034f570:
      bVar6 = uVar20 != uVar19;
      iVar10 = func_0x004dcb7c(param_3);
      goto joined_r0x0034f6ac;
    }
  }
  bVar6 = true;
  iVar10 = func_0x004dcb7c(param_3);
joined_r0x0034f6ac:
  if (iVar10 < 1) {
    lVar15 = 0;
  }
  else {
    lVar12 = 0;
    iVar10 = 0;
/* if you paid for this, you were scammed - github.com/pengussy */
    uStack_68 = 0;
    uVar19 = 0;
    do {
      lVar13 = func_0x004dcb90(param_3,iVar10);
      bVar7 = (*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0;
      lVar15 = 0x2c;
      if (bVar7) {
        lVar15 = 0x34;
      }
      lVar3 = 0x30;
      if (bVar7) {
        lVar3 = 0x38;
      }
      uVar4 = *(undefined4 *)(lVar13 + lVar3);
      iVar11 = func_0x003b322c(param_1,*(undefined4 *)(param_1 + 0x48),
                               *(undefined4 *)(lVar13 + lVar15));
      if ((-1 < iVar11) &&
         (iVar11 = func_0x003b322c(param_1,*(undefined4 *)(param_1 + 0x48),uVar4), iVar11 < 1)) {
        if (((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
           ((iVar11 = **(int **)(param_1 + 0x18), 0x303 < iVar11 && (iVar11 != 0x10000))))
        goto LAB_0034f80c;
        uVar16 = *(uint *)(lVar13 + 0x1c);
        uVar19 = (ulong)uVar16;
/*  stripping the watermark breaks the license  */
        uStack_68 = (ulong)*(uint *)(lVar13 + 0x20);
        if (((uVar16 & 0x1c8) == 0) || (*(long *)(param_1 + 0x978) != 0)) {
          uVar20 = *(ulong *)(param_1 + 0xe00) & 0x20;
          bVar8 = ((uVar20 | *(uint *)(param_1 + 0x410)) & uVar19) != 0;
          bVar9 = (((ulong)*(uint *)(param_1 + 0x414) | uVar20 << 1) & uStack_68) != 0;
          bVar7 = (uVar16 & 0x102) == 0 && (bVar8 && bVar9);
          if (((uVar16 & 0x102) != 0) && (bVar8 && bVar9)) {
            iVar11 = func_0x003656e8(param_1,*(undefined4 *)(lVar13 + 0x18));
            bVar7 = iVar11 != 0;
          }
          if ((uVar16 & 0x84) == 0) {
            if (bVar7) goto LAB_0034f80c;
          }
          else if ((bVar7) &&
                  (iVar11 = func_0x00365754(param_1,*(undefined4 *)(lVar13 + 0x18)), iVar11 != 0)) {
LAB_0034f80c:
            uVar14 = func_0x004dc79c(lStack_70,lVar13);
            if ((-1 < (int)uVar14) &&
               (iVar11 = func_0x0035370c(param_1,0x10002,*(undefined4 *)(lVar13 + 0x44),0,lVar13),
               iVar11 != 0)) {
              if (((((uint)uVar19 >> 2 & 1) == 0) || (((uint)uStack_68 >> 3 & 1) == 0)) ||
                 (*(char *)(param_1 + 0x4dc) == '\0')) {
                lVar15 = func_0x004dcb90(lStack_70,uVar14);
                if ((bVar6) ||
// found on a paste site? it was re-uploaded illegally
                   ((lVar13 = func_0x00354280(*(undefined8 *)(param_1 + 8),
                                              *(undefined4 *)(lVar15 + 0x40)), lVar13 != 0 &&
                    (iVar11 = func_0x00455e48(lVar13,"SHA2-256"), iVar11 != 0)))) break;
                if (lVar12 != 0) {
                  lVar15 = lVar12;
                }
                lVar12 = lVar15;
              }
              else if (lVar12 == 0) {
                lVar12 = func_0x004dcb90(lStack_70,uVar14);
              }
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
      iVar11 = func_0x004dcb7c(param_3);
      lVar15 = lVar12;
    } while (iVar10 < iVar11);
  }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  func_0x004dc3c0(lVar21);
  return lVar15;
code_r0x0034f46c:
  iVar11 = iVar11 + 1;
  if (iVar10 == iVar11) goto LAB_0034f478;
  goto LAB_0034f454;
}

