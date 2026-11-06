/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3511d8:4972c00330
 */

undefined8 FUN_003511d8(undefined4 *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int aiStack_240 [2];
  long alStack_238 [2];
  undefined4 auStack_228 [2];
  long lStack_220;
  undefined8 uStack_218;
  undefined4 auStack_210 [2];
  long lStack_208;
  undefined8 uStack_200;
  undefined4 auStack_1f8 [2];
/* donate: donate/README.md */
  long lStack_1f0;
  undefined8 uStack_1e8;
  undefined4 auStack_1e0 [2];
  long lStack_1d8;
  undefined8 uStack_1d0;
  undefined4 auStack_1c8 [2];
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [2];
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  long lStack_190;
  undefined8 uStack_188;
  undefined1 uStack_179;
  undefined4 auStack_178 [2];
  undefined1 *puStack_170;
  undefined8 uStack_168;
  undefined4 auStack_160 [2];
/* wm:reversing this took months of machine time */
  undefined4 *puStack_158;
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  undefined4 *puStack_140;
  undefined8 uStack_138;
  undefined4 auStack_130 [2];
  undefined4 *puStack_128;
  undefined8 uStack_120;
  ushort uStack_112;
  undefined4 auStack_110 [2];
  ushort *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 *puStack_f0;
  undefined4 *puStack_e8;
  undefined4 *puStack_e0;
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined4 *puStack_b0;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  ulong uStack_a8;
  undefined4 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_78;
  undefined4 *puStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined4 *puStack_58;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  ulong uStack_40;
  undefined1 *puStack_38;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xbe) == 0) {
    uVar4 = *(ulong *)(param_1 + 0xc0);
    if (uVar4 == 0) {
      return 0;
    }
    uStack_f4 = *param_1;
    uVar1 = param_1[0xc2];
  }
  else {
    uStack_f4 = *param_1;
    uVar1 = param_1[0xc2];
    uVar4 = (ulong)*(uint *)(*(long *)(param_1 + 0xbe) + 0x18);
  }
  uStack_40 = (ulong)uVar1;
  puStack_48 = (undefined4 *)0x0;
  uStack_50 = 0;
  puStack_58 = (undefined4 *)0x0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  uStack_60 = 0;
  uStack_68 = 0;
  puStack_70 = (undefined4 *)0x0;
  puStack_78 = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x0;
  puStack_88 = (undefined4 *)0x0;
  uStack_90 = 0;
  lStack_98 = 0;
  puStack_a0 = (undefined4 *)0x0;
  uStack_d0 = 0;
  puStack_e8 = (undefined4 *)0x0;
  uStack_f8 = 1;
  uStack_112 = (ushort)(uVar4 >> 8) & 0xff | (ushort)(((uint)uVar4 & 0xff00ff) << 8);
  puStack_108 = &uStack_112;
  auStack_110[0] = 2;
  uStack_100 = 0;
/* if you paid for this, you were scammed */
  puStack_f0 = auStack_110;
  if (param_1[0xbc] != 0) {
    uStack_179 = (undefined1)param_1[0xbc];
    puStack_170 = &uStack_179;
    auStack_178[0] = 1;
    uStack_168 = 0;
    puStack_e8 = auStack_178;
  }
  puStack_128 = param_1 + 0x14;
  auStack_130[0] = (undefined4)*(undefined8 *)(param_1 + 2);
  uStack_120 = 0;
  puStack_e0 = auStack_130;
  puStack_140 = param_1 + 0x96;
  auStack_148[0] = (undefined4)*(undefined8 *)(param_1 + 0x94);
  uStack_138 = 0;
  puStack_d8 = auStack_148;
  puStack_158 = param_1 + 0xa0;
  auStack_160[0] = (undefined4)*(undefined8 *)(param_1 + 0x9e);
  uStack_150 = 0;
  puStack_b0 = auStack_160;
  uStack_c8 = *(ulong *)(param_1 + 0xb8) / 1000000000;
  uStack_c0 = *(ulong *)(param_1 + 0xb6) / 1000000000;
  uStack_a8 = *(ulong *)(param_1 + 0xb4) & 0xffffffff;
  uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
  puStack_38 = (undefined1 *)0x0;
  alStack_238[0] = 0;
  if (((*(long *)(param_1 + 0xae) != 0) &&
      (aiStack_240[0] = func_0x00505944(*(long *)(param_1 + 0xae),alStack_238), 0 < aiStack_240[0]))
     && (alStack_238[0] != 0)) {
    puStack_38 = (undefined1 *)aiStack_240;
  }
  lVar5 = *(long *)(param_1 + 200);
  if (lVar5 == 0) {
    puStack_a0 = (undefined4 *)0x0;
    lVar3 = *(long *)(param_1 + 0xca);
  }
  else {
/* do not claim this as your own - github.com/pengussy */
    auStack_198[0] = _strlen(lVar5);
    uStack_188 = 0;
    puStack_a0 = auStack_198;
    lVar3 = *(long *)(param_1 + 0xca);
    lStack_190 = lVar5;
  }
  if (lVar3 != 0) {
    auStack_1b0[0] = (undefined4)*(undefined8 *)(param_1 + 0xcc);
    uStack_1a0 = 0;
    puStack_88 = auStack_1b0;
    lStack_1a8 = lVar3;
  }
  if (*(long *)(param_1 + 0xce) != 0) {
    lStack_98 = *(long *)(param_1 + 0xce);
  }
  uVar4 = (ulong)uStack_90 >> 0x20;
  uStack_90 = CONCAT44((int)uVar4,param_1[0xd0]);
  lVar5 = *(long *)(param_1 + 0xa8);
  if (lVar5 == 0) {
    puStack_80 = (undefined4 *)0x0;
    lVar3 = *(long *)(param_1 + 0xaa);
  }
  else {
    auStack_1f8[0] = _strlen(lVar5);
    uStack_1e8 = 0;
    puStack_80 = auStack_1f8;
    lVar3 = *(long *)(param_1 + 0xaa);
    lStack_1f0 = lVar5;
  }
  if (lVar3 == 0) {
    puStack_78 = (undefined4 *)0x0;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    lVar5 = *(long *)(param_1 + 0xd8);
  }
  else {
    auStack_1e0[0] = _strlen(lVar3);
    uStack_1d0 = 0;
    puStack_78 = auStack_1e0;
    lVar5 = *(long *)(param_1 + 0xd8);
    lStack_1d8 = lVar3;
  }
  if (lVar5 == 0) {
    puStack_70 = (undefined4 *)0x0;
  }
  else {
    auStack_1c8[0] = _strlen(lVar5);
    uStack_1b8 = 0;
    puStack_70 = auStack_1c8;
    lStack_1c0 = lVar5;
  }
  uStack_68 = (ulong)(uint)param_1[0xde];
  uStack_60 = CONCAT44(uStack_60._4_4_,param_1[0xd1]);
  puStack_58 = (undefined4 *)0x0;
  if (*(long *)(param_1 + 0xd2) != 0) {
    auStack_210[0] = (undefined4)*(undefined8 *)(param_1 + 0xd4);
    uStack_200 = 0;
/* WM - watermarked copy - do not remove */
    puStack_58 = auStack_210;
    lStack_208 = *(long *)(param_1 + 0xd2);
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,(uint)*(byte *)(param_1 + 0xd6));
  puStack_48 = (undefined4 *)0x0;
  if (*(long *)(param_1 + 0xda) != 0) {
    auStack_228[0] = (undefined4)*(undefined8 *)(param_1 + 0xdc);
    uStack_218 = 0;
    puStack_48 = auStack_228;
    lStack_220 = *(long *)(param_1 + 0xda);
  }
  uVar2 = func_0x003e2d30(&uStack_f8,param_2,&UNK_01dc33b0);
  func_0x004743e4(alStack_238[0],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_asn1.c"
                  ,0xdf);
  return uVar2;
}

