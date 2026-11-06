/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x340524:a1b834e95a
 */

void FUN_00340524(float param_1,float param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  float fVar1;
  long lVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
/* wm:found on a paste site? it was re-uploaded illegally */
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  lVar2 = lRam00000000020973e0;
  lVar6 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  fStack_84 = param_2;
  fVar7 = (float)func_0x002ffe24(0xbf800000,param_4,param_5,0);
  fVar1 = *(float *)(lVar6 + 0x118);
  fStack_a4 = *(float *)(lVar6 + 0x11c);
  fVar12 = *(float *)(lVar2 + 0xd88);
  fVar10 = *(float *)(lVar2 + 0xd7c);
  fStack_90 = param_1 + fVar7 + fVar12 * 2.0;
  fStack_8c = fStack_84 + *(float *)(lVar2 + 0xd8c) * 2.0;
  if (fStack_8c < fVar10) {
    fStack_8c = fVar10;
  }
  fStack_98 = *(float *)(lVar6 + 0x250);
  fStack_94 = fStack_8c + fStack_a4;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  fVar13 = (float)(int)(*(float *)(lVar2 + 0xd84) * ((fStack_94 - fStack_a4) - fStack_84) + 0.99999)
  ;
  fStack_a0 = fVar1;
  fStack_9c = fStack_a4;
  fStack_88 = fVar7;
  func_0x003154fc(fVar13,&fStack_90);
  iVar4 = FUN_00315614(&fStack_a0,param_3,0,0);
  fVar3 = fStack_98;
  if (iVar4 != 0) {
    fVar8 = (float)(int)((fStack_9c + fStack_94) * 0.5 + 0.99999);
    fVar9 = (fStack_98 - fVar1) + fVar12 * -2.0;
    fVar11 = 0.0;
    if (0.0 < fVar9) {
      fVar11 = fVar9;
    }
    fVar9 = *(float *)(lVar2 + 0xd80) * ((fVar11 - fVar7) - param_1);
    fVar11 = 0.0;
    if (0.0 < fVar9) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      fVar11 = fVar9;
    }
    fVar11 = fVar12 + fVar1 + fVar11;
    fStack_a4 = fStack_a4 + fVar13;
    *(float *)(lVar6 + 0x120) = fVar7 + fVar11;
    fStack_a8 = fVar11;
    uVar5 = func_0x002febb0(0x3f800000,0x1c);
    if (fVar7 <= 0.0) {
      if ((&UNK_000027e0)[lVar2] == '\x01') {
        func_0x0031c0a8(&UNK_01c30848);
      }
      if (0.0 < fVar10) {
        func_0x003232b4(fVar1,fVar3,fVar8,fVar10,*(undefined8 *)(lVar6 + 0x2c8),uVar5);
      }
    }
    else {
      fVar12 = *(float *)(lVar2 + 0xcd4);
      if ((0.0 < fVar10) && (fVar13 = fVar11 - fVar12, fVar1 < fVar13)) {
        func_0x003232b4(fVar1,fVar13,fVar8,fVar10,*(undefined8 *)(lVar6 + 0x2c8),uVar5);
      }
      if ((0.0 < fVar10) && (fVar12 = fVar12 + param_1 + fVar7 + fVar11, fVar12 < fVar3)) {
        func_0x003232b4(fVar12,fVar3,fVar8,fVar10,*(undefined8 *)(lVar6 + 0x2c8),uVar5);
      }
      if ((&UNK_000027e0)[lVar2] == '\x01') {
        func_0x0031c2c4(&UNK_01c30848,0);
      }
      fStack_ac = fStack_94 + *(float *)(lVar2 + 0xcd8);
      fStack_b0 = fStack_98;
      FUN_002fffd4(*(undefined8 *)(lVar6 + 0x2c8),&fStack_a8,&fStack_b0,param_4,param_5,&fStack_88);
/* thanks for reading - discord.gg/sdkhDjTex */
    }
  }
  return;
}

