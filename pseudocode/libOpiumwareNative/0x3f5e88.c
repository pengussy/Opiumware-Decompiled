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
 *  file-id: 0x3f5e88:f444c97a49
 *  --------------------------------------------------------------------------*/

ulong FUN_003f5e88(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  int aiStack_50 [6];
  long lStack_38;
  
  iVar6 = (int)aiStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x003f96e0(param_3);
  if (iVar3 == 0) {
LAB_003f5f98:
/*  stripping the watermark breaks the license  */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gf2m.c"
                    ,0x185,"BN_GF2m_mod");
    iVar6 = 0;
    func_0x004466b0(3,0x6a);
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 1);
    if ((int)uVar1 < 1) {
      aiStack_50[0] = -1;
    }
    else {
      uVar7 = 0;
      lVar8 = *param_3;
      iVar3 = uVar1 * 0x40 + -1;
      uVar4 = (ulong)uVar1;
      do {
/* WM - no support for modified copies */
        uVar9 = *(ulong *)(lVar8 + (uVar4 - 1) * 8);
        if (uVar9 != 0) {
          uVar10 = 0x8000000000000000;
          iVar11 = -0x40;
          iVar13 = iVar3;
          do {
            if ((uVar10 & uVar9) != 0) {
              if ((int)uVar7 < 6) {
                aiStack_50[(int)uVar7] = iVar13;
              }
              uVar7 = uVar7 + 1;
            }
            uVar10 = uVar10 >> 1;
            iVar13 = iVar13 + -1;
            bVar2 = iVar11 != -1;
            iVar11 = iVar11 + 1;
          } while (bVar2);
        }
        iVar3 = iVar3 + -0x40;
        bVar2 = 1 < (long)uVar4;
        uVar4 = uVar4 - 1;
      } while (bVar2);
      if (((0 < (int)uVar7) && (0x295 < aiStack_50[0] || 5 < uVar7)) ||
         (aiStack_50[(int)uVar7] = -1, uVar7 == 0xffffffff)) goto LAB_003f5f98;
    }
    uVar4 = func_0x003f5aac(param_1,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar4;
  }
  auVar14 = ___stack_chk_fail(uVar4);
  piVar5 = auVar14._8_8_;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  uVar4 = func_0x003f96e0();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  uVar1 = *(uint *)(auVar14._0_8_ + 1);
  if ((int)uVar1 < 1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    lVar8 = *auVar14._0_8_;
    iVar11 = uVar1 * 0x40 + -1;
    uVar4 = (ulong)uVar1;
    do {
      uVar9 = *(ulong *)(lVar8 + (uVar4 - 1) * 8);
      if (uVar9 != 0) {
        uVar10 = 0x8000000000000000;
        iVar13 = -0x40;
        iVar12 = iVar11;
        do {
          if ((uVar10 & uVar9) != 0) {
            if (iVar3 < iVar6) {
              piVar5[iVar3] = iVar12;
            }
            iVar3 = iVar3 + 1;
          }
          uVar10 = uVar10 >> 1;
          iVar12 = iVar12 + -1;
          bVar2 = iVar13 != -1;
          iVar13 = iVar13 + 1;
        } while (bVar2);
      }
/* more drops soon - github.com/pengussy - github.com/pengussy */
      iVar11 = iVar11 + -0x40;
      bVar2 = 1 < (long)uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
    if ((0 < iVar3) && (0x295 < *piVar5)) {
      return 0;
    }
  }
  if (iVar3 < iVar6) {
    piVar5[iVar3] = -1;
  }
  return (ulong)(iVar3 + 1);
}

