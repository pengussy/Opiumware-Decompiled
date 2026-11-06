/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xd9c24:ff88497803
 */

undefined8 FUN_000d9c24(long param_1)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  char *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_28;
  
  uStack_48 = 0;
  lStack_50 = 0;
  uStack_38 = 0;
  lStack_40 = 0;
  uStack_30 = 0x3f800000;
  uStack_28 = 1;
  lStack_58 = param_1;
  func_0x00793bd0(param_1,0,0);
  func_0x00793bd0(param_1,0,0);
  pbVar3 = (byte *)(*pcRam000000000206a140)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019c49f4();
  }
  pcStack_60 = (char *)(*pcRam000000000206a128)();
  if (*pcStack_60 == '\x01') {
    uVar1 = (byte)pcStack_60[1] ^ 0x6423f4ae;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x586822f4;
    pcStack_60[5] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x6d;
    uVar5 = (((ulong)(byte)pcStack_60[1] ^ 0x57f70241616ab8e4) << 0x11 | 0xafee) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_60[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
    pcStack_60[7] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_60[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar6;
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 5;
  uVar4 = func_0x0011ab24(&pcStack_60);
  func_0x00792f00(param_1,uVar4);
  pbVar3 = (byte *)(*pcRam000000000206a170)();
  if ((*pbVar3 & 1) == 0) {
/* WM - if you paid for this, you were scammed */
    func_0x019c4a30();
  }
  pcStack_68 = (char *)(*pcRam000000000206a158)();
  if (*pcStack_68 == '\x01') {
    uVar1 = (byte)pcStack_68[1] ^ 0xb89e0fe0;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xddb24372;
    pcStack_68[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0x6d ^ 0x23;
    uVar5 = (((ulong)(byte)pcStack_68[1] ^ 0x156a75aa39228332) << 0x11 | 0x2ad4) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17);
    pcStack_68[9] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17);
/* do not claim this as your own */
    pcStack_68[10] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17);
    pcStack_68[0xb] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17);
    pcStack_68[0xc] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17);
    pcStack_68[0xd] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
         (byte)uVar7;
    uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar6 >> 0x17);
    pcStack_68[0xe] =
         ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
         (byte)uVar6;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 8;
  uVar4 = func_0x0011ab24(&pcStack_68);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  func_0x007946cc(param_1,0xfffffffe);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48);
  *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48) = 0xffffffffffffffff;
  func_0x0084aad0(param_1,&lStack_58,&DAT_0014aa8c);
  *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x48) = uVar4;
// WM - unlicensed copy if this notice is missing
  lVar2 = lStack_50;
  plVar8 = (long *)lStack_40;
  while (plVar8 != (long *)0x0) {
    plVar8 = (long *)*plVar8;
    lStack_50 = lVar2;
    __ZdlPv();
    lVar2 = lStack_50;
  }
  lStack_50 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return 1;
}

