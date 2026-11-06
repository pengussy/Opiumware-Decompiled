/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x33ef98:2fa9f08d81
 */

void FUN_0033ef98(undefined8 param_1)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  long lStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  lVar1 = lRam00000000020973e0;
  lVar7 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  iVar3 = (int)param_1;
  pcVar2 = "#SCROLLX";
  if (iVar3 != 0) {
    pcVar2 = "#SCROLLY";
  }
  uVar4 = func_0x003053a4(lVar7,pcVar2,0);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  fStack_60 = *(float *)(lVar7 + 0x28);
  lStack_70 = *(long *)(lVar7 + 0x28);
  fStack_68 = fStack_60 + *(float *)(lVar7 + 0x30);
  fStack_64 = *(float *)(lVar7 + 0x2c) + *(float *)(lVar7 + 0x34);
  fVar8 = *(float *)(lVar7 + ((long)iVar3 ^ 1U) * 4 + 0xc0);
  fVar9 = (float)(int)(*(float *)(lVar7 + 100) * 0.5 + 0.5);
  if ((*(uint *)(lVar7 + 0x14) >> 10 & 1) == 0) {
    fVar10 = 0.0;
    if ((*(uint *)(lVar7 + 0x14) & 1) != 0) {
      fVar10 = fVar9;
    }
  }
  else {
    fVar10 = (float)(int)(*(float *)(lRam00000000020973e0 + 0xcd0) * 0.5 + 0.5);
  }
  fVar11 = (fStack_68 - fVar9) - fVar8;
  if (fStack_60 < fVar11) {
    fStack_60 = fVar11;
  }
  fVar11 = *(float *)(lVar7 + 0x2c) + fVar9;
  fVar8 = (fStack_64 - fVar9) - fVar8;
  if (fVar11 < fVar8) {
    fVar11 = fVar8;
  }
  fStack_5c = *(float *)(lVar7 + 0x22c) + fVar10;
  fStack_58 = fStack_68 - fVar9;
  fStack_54 = *(float *)(lVar7 + 0x234) - fVar9;
  if (iVar3 == 0) {
/*  keep the notice, keep the source honest  */
    fStack_60 = *(float *)(lVar7 + 0x228) + fVar9;
    fStack_5c = fVar11;
    fStack_58 = *(float *)(lVar7 + 0x230) - fVar9;
    fStack_54 = fStack_64 - fVar9;
  }
  uVar5 = func_0x00334a3c(*(undefined4 *)(lVar1 + 0xc98),&fStack_60,&lStack_70);
  lVar6 = (long)iVar3 * 4;
  lVar1 = lVar7 + lVar6;
  lStack_70 = (long)*(float *)(lVar1 + 0x98);
  func_0x0033f148(&fStack_60,uVar4,param_1,&lStack_70,
                  (long)(*(float *)(lVar7 + 0x230 + lVar6) - *(float *)(lVar7 + 0x228 + lVar6)),
                  (long)(*(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0x58) * 2.0),uVar5);
  *(float *)(lVar1 + 0x98) = (float)lStack_70;
  return;
}

