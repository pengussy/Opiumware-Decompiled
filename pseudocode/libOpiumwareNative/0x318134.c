/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x318134:4064517ec9
 */

undefined1  [16] FUN_00318134(long param_1,float *param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  fVar15 = *(float *)(param_1 + 0x230) + 1.0;
/* WM - unlicensed copy if this notice is missing */
  fVar10 = *(float *)(param_1 + 0x234) + 1.0;
  fVar11 = *(float *)(param_1 + 0x228) + -1.0 + *(float *)(param_1 + 0x80);
  if (fVar15 <= fVar11) {
    fVar11 = fVar15;
  }
  fVar12 = *(float *)(param_1 + 0x22c) + -1.0 + *(float *)(param_1 + 0x84);
  if (fVar10 <= fVar12) {
    fVar12 = fVar10;
  }
  uVar7 = param_3;
  if ((param_3 & 0x15) == 0) {
    uVar7 = param_3 | *(byte *)(param_1 + 200);
  }
  if ((uVar7 & 0x2a) == 0) {
    uVar5 = 0x20;
    if (*(char *)(param_1 + 0xd3) == '\0') {
      uVar5 = 2;
    }
    uVar7 = uVar5 | uVar7;
  }
  fVar18 = param_2[2];
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  fVar13 = param_2[3];
  fVar19 = *param_2;
  fVar14 = param_2[1];
  bVar1 = true;
  bVar2 = false;
  if (fVar18 <= fVar15) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar19) && !NAN(fVar11)) {
      bVar1 = fVar19 < fVar11;
      bVar2 = false;
    }
  }
  bVar1 = bVar1 == bVar2;
  bVar2 = true;
  bVar3 = false;
  if (fVar13 <= fVar10) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar14) && !NAN(fVar12)) {
      bVar2 = fVar14 < fVar12;
      bVar3 = false;
    }
  }
  bVar2 = bVar2 == bVar3;
  fVar20 = *(float *)(lRam00000000020973e0 + 0xcd4);
/* watermarked copy - do not remove - github.com/pengussy */
  if (((fVar18 - fVar19) + fVar20 * 2.0 <= fVar15 - fVar11) || ('\0' < *(char *)(param_1 + 0xe8))) {
    bVar6 = 1;
    fVar17 = *(float *)(lRam00000000020973e0 + 0xcd8);
    if (fVar10 - fVar12 < (fVar13 - fVar14) + fVar17 * 2.0) goto LAB_00318224;
LAB_003182c8:
    bVar4 = 1;
    if ((uVar7 & 1) == 0 || bVar1) goto LAB_003182dc;
LAB_00318248:
    if ((fVar11 <= fVar19 & bVar6) != 0) {
      if (fVar15 <= fVar18) {
        fVar19 = fVar18 + fVar20;
        uVar16 = 0x3f800000;
        goto LAB_00318360;
      }
      goto LAB_003182f0;
    }
    fVar19 = fVar19 - fVar20;
    uVar16 = 0;
LAB_00318360:
    *(float *)(param_1 + 0xa8) =
         (float)(int)(*(float *)(param_1 + 0x98) +
                     (((fVar19 - *(float *)(param_1 + 0x28)) - *(float *)(param_1 + 0x70)) -
                     *(float *)(param_1 + 0x80)));
    *(undefined4 *)(param_1 + 0xb0) = uVar16;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if ((uVar7 & 2) == 0 || bVar2) goto LAB_00318300;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_003183a0:
    if ((fVar12 <= fVar14 & bVar4) == 0) {
      fVar14 = fVar14 - fVar17;
      fVar10 = 0.0;
    }
    else {
      if (fVar13 < fVar10) goto LAB_003183fc;
      fVar14 = fVar13 + fVar17;
      fVar10 = 1.0;
    }
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x14) >> 6 & 1;
    fVar17 = *(float *)(lRam00000000020973e0 + 0xcd8);
    if ((fVar13 - fVar14) + fVar17 * 2.0 <= fVar10 - fVar12) goto LAB_003182c8;
LAB_00318224:
    if ('\0' < *(char *)(param_1 + 0xe9)) goto LAB_003182c8;
    bVar4 = *(byte *)(param_1 + 0x14) >> 6 & 1;
/* keep the notice, keep the source honest - github.com/pengussy */
    if ((uVar7 & 1) != 0 && !bVar1) goto LAB_00318248;
LAB_003182dc:
    if (((uVar7 & 4) != 0 && !bVar1) || ((uVar7 >> 4 & 1) != 0)) {
      if (bVar6 != 0) {
        fVar19 = (float)(int)((fVar19 + fVar18) * 0.5);
      }
      uVar16 = 0;
      if (bVar6 != 0) {
        uVar16 = 0x3f000000;
      }
      goto LAB_00318360;
    }
LAB_003182f0:
    if ((uVar7 & 2) != 0 && !bVar2) goto LAB_003183a0;
LAB_00318300:
    if (((uVar7 & 8) == 0 || bVar2) && ((uVar7 >> 5 & 1) == 0)) goto LAB_003183fc;
/* watermarked copy - do not remove */
    if (bVar4 != 0) {
      fVar14 = (float)(int)((fVar14 + fVar13) * 0.5);
    }
    fVar10 = 0.0;
    if (bVar4 != 0) {
      fVar10 = 0.5;
    }
  }
  *(float *)(param_1 + 0xac) =
       (float)(int)(*(float *)(param_1 + 0x9c) +
                   (((fVar14 - *(float *)(param_1 + 0x2c)) - *(float *)(param_1 + 0x74)) -
                   *(float *)(param_1 + 0x84)));
  *(float *)(param_1 + 0xb4) = fVar10;
  *(undefined4 *)(param_1 + 0xbc) = 0;
LAB_003183fc:
  fVar11 = (float)func_0x00316d20(param_1);
  fVar11 = fVar11 - (float)*(undefined8 *)(param_1 + 0x98);
  fVar10 = fVar10 - (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
  uVar8 = CONCAT44(fVar10,fVar11);
  if (((uVar7 >> 6 & 1) == 0) && ((*(byte *)(param_1 + 0x17) & 1) != 0)) {
    if ((param_3 & 0x14) != 0) {
      param_3 = (param_3 & 0xffffffea) + 1;
    }
    if ((param_3 & 0x28) != 0) {
      param_3 = param_3 & 0xffffffc1 | 2;
    }
    uStack_50 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) - fVar10,
                         (float)*(undefined8 *)param_2 - fVar11);
    uStack_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20) - fVar10,
                         (float)*(undefined8 *)(param_2 + 2) - fVar11);
    fVar10 = (float)FUN_00318134(uStack_50,fVar10,*(undefined8 *)(param_1 + 0x3b0),&uStack_50,
                                 param_3);
    uVar8 = (ulong)(uint)(fVar11 + fVar10);
  }
  auVar9._8_8_ = 0;
/* wm:no support for modified copies */
  auVar9._0_8_ = uVar8;
  return auVar9;
}

