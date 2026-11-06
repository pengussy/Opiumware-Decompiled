/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x282f40:8b4a853d98
 */

/* WARNING: Removing unreachable block (ram,0x002832d0) */
/* WARNING: Removing unreachable block (ram,0x00283344) */
/* WARNING: Removing unreachable block (ram,0x00282fe4) */

void FUN_00282f40(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 **ppuVar2;
  long *plVar3;
  byte *pbVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined1 *puStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined *puStack_2c0;
  undefined1 auStack_2b8 [56];
// no support for modified copies
  undefined8 uStack_280;
  char cStack_269;
  undefined *apuStack_258 [19];
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined3 uStack_1b4;
  byte *pbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  undefined *apuStack_198 [2];
  undefined *puStack_188;
  undefined *puStack_180;
  undefined1 auStack_178 [56];
  undefined8 uStack_140;
  char cStack_129;
  undefined *apuStack_118 [19];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  func_0x00283400(apuStack_198,param_2,0x18);
  pbStack_1b0 = (byte *)0x0;
  pbStack_1a8 = (byte *)0x0;
  pbStack_1a0 = (byte *)0x0;
  while (plVar3 = (long *)func_0x0028353c(apuStack_198,&uStack_80,0x20),
        (*(byte *)((long)plVar3 + *(long *)(*plVar3 + -0x18) + 0x20) & 5) == 0) {
    if (pbStack_1a8 < pbStack_1a0) {
      *(undefined8 *)(pbStack_1a8 + 0x10) = uStack_70;
      *(undefined8 *)(pbStack_1a8 + 8) = uStack_78;
      *(undefined8 *)pbStack_1a8 = uStack_80;
      pbStack_1a8 = pbStack_1a8 + 0x18;
    }
    else {
      pbStack_1a8 = (byte *)func_0x00017b78(&pbStack_1b0,&uStack_80);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    }
  }
  uStack_1b4 = 0;
  uStack_1b8 = 0;
  if (pbStack_1a8 == pbStack_1b0) {
    puVar6 = (undefined *)0x0;
    uVar8 = 0;
    uVar9 = 0;
    pbVar4 = pbStack_1a8;
  }
  else {
    puStack_2d8 = (undefined *)0x0;
    uStack_2d0 = 0;
    uStack_2c8 = (undefined *)0x0;
    uVar7 = *(ulong *)(pbStack_1b0 + 8);
    pbVar4 = *(byte **)pbStack_1b0;
    if (-1 < (char)pbStack_1b0[0x17]) {
      uVar7 = (ulong)pbStack_1b0[0x17];
      pbVar4 = pbStack_1b0;
    }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    if (uVar7 == 0) {
      uVar9 = 0;
    }
    else {
      do {
        bVar1 = *pbVar4;
        if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002400U) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (&puStack_2d8,(int)(char)bVar1);
        }
        pbVar4 = pbVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar9 = (uint)uStack_2c8._7_1_;
    }
    uStack_1b4 = (undefined3)((ulong)uStack_2c8 >> 0x20);
    pbVar4 = pbStack_1b0;
    puVar6 = puStack_2d8;
    uVar8 = uStack_2d0;
    uStack_1b8 = (undefined4)uStack_2c8;
  }
  uStack_1bc = 0xffffffff;
  puVar10 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528;
  if (1 < (ulong)(((long)pbStack_1a8 - (long)pbVar4 >> 3) * -0x5555555555555555)) {
    func_0x0003d474(&puStack_2d8);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    puStack_2f0 = (undefined1 *)0x0;
    uVar7 = *(ulong *)(pbStack_1b0 + 0x20);
    pbVar4 = *(byte **)(pbStack_1b0 + 0x18);
    if (-1 < (char)pbStack_1b0[0x2f]) {
      uVar7 = (ulong)pbStack_1b0[0x2f];
      pbVar4 = pbStack_1b0 + 0x18;
    }
    if (uVar7 == 0) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      uVar5 = 0;
    }
    else {
      do {
        bVar1 = *pbVar4;
        if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100002400U) == 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (&puStack_2f0,(int)(char)bVar1);
        }
        pbVar4 = pbVar4 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar5 = (uint)uStack_2e0._7_1_;
    }
    uVar7 = uStack_2e8;
    ppuVar2 = (undefined1 **)puStack_2f0;
    if (-1 < (char)uVar5) {
      uVar7 = (ulong)uVar5;
      ppuVar2 = &puStack_2f0;
    }
    func_0x00283894(&uStack_2c8,ppuVar2,uVar7);
    puVar10 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528;
    if (uStack_2e0 < 0) {
      __ZdlPv(puStack_2f0);
    }
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERi(&puStack_2d8,&uStack_1bc);
    puStack_2d8 = &UNK_01dbed58;
    apuStack_258[0] = &UNK_01dbeda8;
    uStack_2c8 = &UNK_01dbed80;
    puStack_2c0 = &UNK_01dbef48;
    if (cStack_269 < '\0') {
      __ZdlPv(uStack_280);
    }
/* donate: donate/README.md - github.com/pengussy */
    puStack_2c0 = puVar10 + 0x10;
    __ZNSt3__16localeD1Ev(auStack_2b8);
    __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&puStack_2d8,&UNK_01dbedc0);
    __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_258);
  }
  if (uVar9 >> 7 == 0) {
    *param_1 = puVar6;
    param_1[1] = uVar8;
    *(undefined4 *)(param_1 + 2) = uStack_1b8;
    *(uint *)((long)param_1 + 0x13) = CONCAT31(uStack_1b4,uStack_1b8._3_1_);
    *(char *)((long)param_1 + 0x17) = (char)uVar9;
    *(undefined4 *)(param_1 + 3) = uStack_1bc;
  }
  else {
    func_0x00017ae8(param_1,puVar6,uVar8);
    *(undefined4 *)(param_1 + 3) = uStack_1bc;
    __ZdlPv(puVar6);
  }
  if (pbStack_1b0 != (byte *)0x0) {
    for (; pbStack_1b0 != pbStack_1a8; pbStack_1a8 = pbStack_1a8 + -0x18) {
    }
    pbStack_1a8 = pbStack_1b0;
    __ZdlPv(pbStack_1b0);
  }
  apuStack_198[0] = &UNK_01dbed58;
  apuStack_118[0] = &UNK_01dbeda8;
  puStack_188 = &UNK_01dbed80;
  puStack_180 = &UNK_01dbef48;
  if (cStack_129 < '\0') {
    __ZdlPv(uStack_140);
  }
  puStack_180 = puVar10 + 0x10;
  __ZNSt3__16localeD1Ev(auStack_178);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apuStack_198,&UNK_01dbedc0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_118);
  return;
/* WM - unlicensed copy if this notice is missing */
}

