/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x340c48:b79e0935c6
 */

undefined8
FUN_00340c48(undefined1 param_1 [16],float param_2,undefined8 param_3,long param_4,ulong param_5)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_d0;
  float fStack_c4;
  float fStack_c0;
  undefined1 uStack_ba;
  char cStack_b9;
  ulong uStack_b8;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  float fStack_a0;
  float fStack_9c;
  undefined8 uStack_98;
  
  lVar2 = lRam00000000020973e0;
  uVar5 = 0;
  lVar11 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar11 + 0xce) = 1;
  uVar1 = *(undefined4 *)(&UNK_00001ed0 + lVar2);
  *(undefined4 *)(&UNK_00001ed0 + lVar2) = 0;
/*  no support for modified copies  */
  if ((*(byte *)(lVar11 + 0xd1) & 1) == 0) {
    uVar6 = func_0x003053a4(lVar11,param_3,0);
    fVar14 = 0.0;
    fVar12 = 0.0;
    uVar10 = (uint)param_5;
    if ((uVar10 >> 5 & 1) == 0) {
      fVar12 = (float)func_0x0031a410();
    }
    uVar7 = func_0x002ff5c8(param_3,0);
    fVar13 = (float)func_0x002ffe24(0xbf800000,param_3,uVar7,0);
    if ((param_4 != 0) && ((uVar10 >> 7 & 1) != 0)) {
      fVar14 = (float)func_0x002ffe24(0xbf800000,param_4,0,0);
    }
    fVar15 = fVar12;
    if ((uVar10 >> 6 & 1) == 0) {
      if ((uVar10 >> 7 & 1) == 0) {
        fVar15 = (float)func_0x0031a378();
      }
      else {
        fVar15 = fVar12 + fVar14 + *(float *)(lVar2 + 0xcc4) * 2.0;
      }
    }
    fStack_a0 = fVar15 + *(float *)(lVar11 + 0x118);
    fStack_9c = param_2 + *(float *)(lVar2 + 0xcc8) * 2.0 + *(float *)(lVar11 + 0x11c);
/* donate: donate/README.md - github.com/pengussy */
    uStack_b8 = *(ulong *)(lVar11 + 0x118);
    fStack_b0 = 0.0;
    if (0.0 < fVar13) {
      fStack_b0 = fVar13 + *(float *)(lVar2 + 0xcdc);
    }
    fStack_b0 = fStack_b0 + fStack_a0;
    fStack_ac = fStack_9c + 0.0;
    uStack_98 = CONCAT44(fStack_ac - (float)(uStack_b8 >> 0x20),fStack_b0 - (float)uStack_b8);
    uStack_a8 = uStack_b8;
    func_0x003154fc(&uStack_98);
    iVar3 = FUN_00315614(&uStack_b8,uVar6,&uStack_a8,0);
    uVar5 = 0;
    if (iVar3 != 0) {
      iVar3 = func_0x0033e04c(&uStack_a8,uVar6,&cStack_b9,&uStack_ba,0);
      uVar8 = func_0x002fdd28("##ComboPopup",0,uVar6);
      uVar4 = func_0x00307864(uVar8,0);
      if ((iVar3 != 0) && ((uVar4 & 1) == 0)) {
        func_0x0031a68c(uVar8 & 0xffffffff,0);
        uVar4 = 1;
      }
      uVar9 = 7;
      if (cStack_b9 != '\0') {
        uVar9 = 8;
      }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      uVar5 = func_0x002febb0(0x3f800000,uVar9);
      fVar14 = (float)uStack_a8;
      if ((float)uStack_a8 < fStack_a0 - fVar12) {
        fVar14 = fStack_a0 - fVar12;
      }
      func_0x003006a0(&uStack_a8,uVar6,0);
      if ((uVar10 >> 6 & 1) == 0) {
        uStack_98 = CONCAT44(fStack_9c,fVar14);
        uVar9 = 0x50;
        if ((param_5 & 0x20) != 0) {
          uVar9 = 0xf0;
        }
        func_0x00323668(*(undefined4 *)(lVar2 + 0xccc),*(undefined8 *)(lVar11 + 0x2c8),&uStack_a8,
                        &uStack_98,uVar5,uVar9);
      }
      if ((uVar10 >> 5 & 1) == 0) {
        uVar9 = 0x16;
// found on a paste site? it was re-uploaded illegally
        if (uVar4 != 0 || cStack_b9 != '\0') {
          uVar9 = 0x17;
        }
        uVar5 = func_0x002febb0(0x3f800000,uVar9);
        uVar6 = func_0x002febb0(0x3f800000,0);
        uStack_98 = CONCAT44(uStack_a8._4_4_,fVar14);
        uVar9 = 0xf0;
        if (fVar12 < fVar15) {
          uVar9 = 0xa0;
        }
        func_0x00323668(*(undefined4 *)(lVar2 + 0xccc),*(undefined8 *)(lVar11 + 0x2c8),&uStack_98,
                        &fStack_a0,uVar5,uVar9);
        if ((fVar12 + fVar14) - *(float *)(lVar2 + 0xcc4) <= fStack_a0) {
          func_0x00334608(fVar14 + *(float *)(lVar2 + 0xcc8),
                          *(float *)(lVar2 + 0xcc8) + uStack_a8._4_4_,0x3f800000,
                          *(undefined8 *)(lVar11 + 0x2c8),uVar6,3);
        }
      }
      func_0x003004d8(uStack_a8 & 0xffffffff,uStack_a8._4_4_,fStack_a0,fStack_9c,
                      *(undefined4 *)(lVar2 + 0xccc));
      if ((uVar10 >> 0x14 & 1) == 0) {
        if ((param_4 != 0) && ((uVar10 >> 6 & 1) == 0)) {
          if ((&UNK_000027e0)[lVar2] == '\x01') {
            func_0x0031c2c4(&UNK_01c30973,&UNK_01c30975);
          }
          uStack_98 = CONCAT44((float)(uStack_a8 >> 0x20) +
                               (float)((ulong)*(undefined8 *)(lVar2 + 0xcc4) >> 0x20),
                               (float)uStack_a8 + (float)*(undefined8 *)(lVar2 + 0xcc4));
          fStack_c0 = fStack_9c;
          uStack_d0 = 0;
          fStack_c4 = fVar14;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          func_0x002ffefc(&uStack_98,&fStack_c4,param_4,0,0,&uStack_d0,0);
        }
      }
      else {
        *(ulong *)(&UNK_000025fc + lVar2) = uStack_a8;
        *(float *)(&UNK_00002604 + lVar2) = fVar14;
        *(float *)(&UNK_00002608 + lVar2) = fStack_9c;
      }
      if (0.0 < fVar13) {
        func_0x002ff610(fStack_a0 + *(float *)(lVar2 + 0xcdc),
                        uStack_a8._4_4_ + *(float *)(lVar2 + 0xcc8),param_3,uVar7,0);
      }
      if (uVar4 == 0) {
        uVar5 = 0;
      }
      else {
        *(undefined4 *)(&UNK_00001ed0 + lVar2) = uVar1;
        uVar5 = func_0x00341060(uVar8 & 0xffffffff,&uStack_a8,param_5);
      }
    }
  }
  return uVar5;
}

