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
 *  file-id: 0x342920:542436bdc7
 *  --------------------------------------------------------------------------*/

undefined8
FUN_00342920(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,char *param_4,
            char *param_5,undefined8 param_6,ulong param_7)

{
  ushort uVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
/*  do not claim this as your own  */
  float fVar16;
  float fVar17;
  float fStack_a8;
  undefined4 uStack_a4;
  
  lVar3 = lRam00000000020973e0;
  lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar9 + 0xce) = 1;
  if ((*(byte *)(lVar9 + 0xd1) & 1) == 0) {
    fVar14 = *(float *)(lVar9 + 0x118);
    fVar16 = *(float *)(lVar9 + 0x11c);
    uVar6 = func_0x002ff5c8(param_3,0);
    uVar5 = func_0x002ffe24(0xbf800000,param_3,uVar6,0);
    if ((((*(int *)(lRam00000000020973e0 + 0x1fc0) < *(int *)(&UNK_00001fb0 + lRam00000000020973e0))
         && (lVar7 = *(long *)(&UNK_000014a8 + lRam00000000020973e0),
            (*(byte *)(lVar7 + 0x17) >> 4 & 1) == 0)) &&
        (lVar8 = *(long *)(&UNK_00001fb8 + lRam00000000020973e0) +
                 (long)*(int *)(lRam00000000020973e0 + 0x1fc0) * 0x38,
        *(int *)(lVar7 + 0x170) == *(int *)(lVar8 + 0x18))) &&
       (((lVar8 = *(long *)(lVar8 + 8), lVar8 != 0 && ((*(byte *)(lVar8 + 0x17) >> 4 & 1) != 0)) &&
        (iVar4 = func_0x00317ac4(lVar8,lVar7,1), iVar4 != 0)))) {
      bVar2 = true;
      func_0x00317968(0x2000,1);
    }
    else {
      bVar2 = false;
    }
    func_0x00318944(param_3);
    if ((param_7 & 1) == 0) {
      func_0x003179ec(1);
    }
    if (*(int *)(lVar9 + 0x1d4) == 0) {
      fVar16 = *(float *)(lVar3 + 0xcd4);
/* if you paid for this, you were scammed - github.com/pengussy */
      fVar14 = *(float *)(lVar9 + 0x118) + (float)(int)(fVar16 * 0.5);
      *(float *)(lVar9 + 0x118) = fVar14;
      uVar1 = *(ushort *)(lVar9 + 400);
      fVar12 = *(float *)(lVar9 + 0x11c);
      fVar10 = *(float *)(lVar9 + 0x150);
      FUN_002ff488(fVar16 + fVar16,0xe);
      fStack_a8 = (float)uVar5;
      uStack_a4 = 0;
      uVar5 = FUN_003412d0(&UNK_01cb7848,param_6,0x2800000,&fStack_a8);
      FUN_002ff504(1);
      if (((&UNK_00001e89)[lVar3] & 1) != 0) {
        func_0x002ff610(fVar14 + (float)uVar1,fVar12 + fVar10,param_3,uVar6,0);
      }
      *(float *)(lVar9 + 0x118) =
           *(float *)(lVar9 + 0x118) + (float)(int)(*(float *)(lVar3 + 0xcd4) * -0.5);
    }
    else {
      uVar13 = 0;
      uVar15 = 0;
      if ((param_4 != (char *)0x0) && (*param_4 != '\0')) {
        uVar15 = func_0x002ffe24(0xbf800000,param_4,0,0);
      }
      if ((param_5 != (char *)0x0) && (*param_5 != '\0')) {
        uVar13 = func_0x002ffe24(0xbf800000,param_5,0,0);
      }
      fVar10 = (float)func_0x003426d0(uVar15,uVar5,uVar13,
                                      (float)(int)(*(float *)(
                                                  "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                                  + lVar3) * 1.2),lVar9 + 0x184);
      fVar11 = (float)func_0x003150d8();
      fVar17 = *(float *)(lVar9 + 0x150);
      fVar12 = 0.0;
      if (0.0 < fVar11 - fVar10) {
        fVar12 = fVar11 - fVar10;
      }
      fStack_a8 = fVar10;
      uStack_a4 = param_2;
// WM - chat: discord.gg/sdkhDjTex
      uVar5 = FUN_003412d0(&UNK_01cb7848,0,0x3800000,&fStack_a8);
      if (((&UNK_00001e89)[lVar3] & 1) != 0) {
        fVar16 = fVar16 + fVar17;
        fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 400));
        fVar11 = fVar16 + 0.0;
        func_0x002ff610(fVar14 + fVar10,fVar11,param_3,uVar6,0);
        if (0.0 < (float)uVar15) {
          fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 0x18e));
          func_0x002ff610(fVar14 + fVar10,fVar11,param_4,0,1);
        }
        if (0.0 < (float)uVar13) {
          func_0x002fefa0(0,lVar3 + 0xdc0);
          func_0x0031c2c4(&UNK_01c30a4c,&UNK_01c87452);
          fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 0x192));
          func_0x002ff610(fVar14 + fVar12 + fVar10,fVar11,param_5,0,0);
          FUN_002ff010(1);
        }
        if ((int)param_6 != 0) {
          uVar15 = *(undefined8 *)(lVar9 + 0x2c8);
          fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(lVar9 + 0x194));
          fVar11 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                             lVar3);
          uVar6 = func_0x002febb0(0x3f800000,0);
          func_0x00334818(fVar14 + fVar12 + fVar10 + fVar11 * 0.4,fVar16 + fVar11 * 0.134 * 0.5,
                          *(float *)(
                                    "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                    + lVar3) * 0.866,uVar15,uVar6);
        }
      }
    }
    if ((((*(int *)(&UNK_0000151c + lVar3) == *(int *)(&UNK_00001e80 + lVar3)) &&
         (*(int *)(&UNK_00001504 + lVar3) != *(int *)(&UNK_00001e80 + lVar3))) &&
        (*(int *)(&UNK_0000153c + lVar3) == 1)) &&
       (iVar4 = func_0x00319a00(0xbf800000,0), iVar4 != 0)) {
      func_0x00305fb0();
/* stripping the watermark breaks the license */
      func_0x00319c24(0x290,0xffffffff,0);
    }
    if ((param_7 & 1) == 0) {
      FUN_00317a64();
    }
    FUN_00318a2c();
    if (bVar2) {
      FUN_003179b4();
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

