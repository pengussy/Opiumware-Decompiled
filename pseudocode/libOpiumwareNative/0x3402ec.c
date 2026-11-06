/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3402ec:f467c0d058
 */

void FUN_003402ec(float param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar1 = lRam00000000020973e0;
  lVar5 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar5 + 0xce) = 1;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  if ((*(byte *)(lVar5 + 0xd1) & 1) != 0) {
    return;
  }
  if ((param_2 >> 1 & 1) != 0) {
    fStack_6c = *(float *)(lVar5 + 0x11c);
    fStack_64 = fStack_6c + *(float *)(lVar5 + 0x144);
    fStack_70 = *(float *)(lVar5 + 0x118);
    fStack_68 = param_1 + fStack_70;
    fStack_74 = 0.0;
    fStack_78 = param_1;
    func_0x003154fc(0xbf800000,&fStack_78);
    iVar2 = FUN_00315614(&fStack_70,0,0,0);
    if (iVar2 == 0) {
      return;
    }
    uVar4 = *(undefined8 *)(lVar5 + 0x2c8);
    uVar3 = func_0x002febb0(0x3f800000,0x1c);
    func_0x00323668(0,uVar4,&fStack_70,&fStack_68,uVar3,0);
    if ((&UNK_000027e0)[lVar1] == '\x01') {
      func_0x0031c0a8(&UNK_01c30941);
      return;
    }
    return;
  }
  if ((param_2 & 1) == 0) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    return;
  }
  fVar8 = *(float *)(lVar5 + 0x118);
  fVar9 = *(float *)(lVar5 + 0x250);
  if ((param_2 >> 2 & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x1c8);
    if (lVar6 != 0) {
      fVar8 = *(float *)(lVar5 + 0x28) + *(float *)(lVar5 + 0x15c);
      fVar9 = *(float *)(lVar5 + 0x28) + *(float *)(lVar5 + 0x30);
      func_0x0033d534();
      bVar7 = false;
      goto LAB_00340434;
    }
  }
/* chat: discord.gg/sdkhDjTex */
  bVar7 = true;
LAB_00340434:
  fStack_6c = *(float *)(lVar5 + 0x11c);
  fStack_64 = param_1 + fStack_6c;
  fStack_78 = 0.0;
  fStack_74 = param_1;
  fStack_70 = fVar8;
  fStack_68 = fVar9;
  func_0x003154fc(0xbf800000,&fStack_78);
  iVar2 = FUN_00315614(&fStack_70,0,0,0);
  if (iVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar5 + 0x2c8);
    uVar3 = func_0x002febb0(0x3f800000,0x1c);
    func_0x00323668(0,uVar4,&fStack_70,&fStack_68,uVar3,0);
    if ((&UNK_000027e0)[lVar1] == '\x01') {
      FUN_002ff798(&fStack_70,"--------------------------------\n",0);
    }
  }
  if (!bVar7) {
    func_0x0033d5a0();
    *(undefined4 *)(lVar6 + 0x1c) = *(undefined4 *)(lVar5 + 0x11c);
  }
  return;
}

