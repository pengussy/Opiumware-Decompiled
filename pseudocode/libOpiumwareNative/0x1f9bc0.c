/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1f9bc0:6ab793a3e8
   =========================================================================== */

void FUN_001f9bc0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  undefined8 ***pppuVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  char acStack_58 [8];
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x00017ae8(&pppuStack_70,*param_2,param_2[1]);
  }
  else {
    uStack_68 = param_2[1];
    pppuStack_70 = (undefined8 ***)*param_2;
    uStack_60 = param_2[2];
  }
  __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE(acStack_58,param_2,0);
  func_0x00793bd0(param_1,0,0);
  pbVar3 = (byte *)(*pcRam0000000002075b70)();
/* WM - keep the notice, keep the source honest */
  if ((*pbVar3 & 1) == 0) {
    func_0x019d7404();
  }
  pcStack_78 = (char *)(*pcRam0000000002075b58)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0x4087c6c1;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x82ba5282 ^ 0x475f51;
    pcStack_78[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - 2;
    uVar6 = (((ulong)(byte)pcStack_78[1] ^ 0xac18cc14679e812a) << 0x11 | 0x15831) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_78[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_78[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_78[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
// WM - reversing this took months of machine time
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_78[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_78[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_78[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
// WM - donate: donate/README.md
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[8] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_78[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar5;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 9;
  uVar4 = func_0x0011ab24(&pcStack_78);
  uVar6 = uStack_68;
  pppuVar2 = pppuStack_70;
  if (-1 < (long)uStack_60) {
    uVar6 = uStack_60 >> 0x38;
    pppuVar2 = &pppuStack_70;
  }
  func_0x00792db8(param_1,pppuVar2,uVar6);
  func_0x007930d0(param_1,&DAT_001f7d80,uVar4,1,0);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  pbVar3 = (byte *)(*pcRam0000000002075ba0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d7440();
  }
  pcStack_80 = (char *)(*pcRam0000000002075b88)();
  if (*pcStack_80 == '\x01') {
    uVar1 = (byte)pcStack_80[1] ^ 0x498816cd;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xc5c6d294 ^ 0x104e8f;
/* wm:no support for modified copies */
    pcStack_80[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - 0xe;
    uVar6 = (((ulong)(byte)pcStack_80[1] ^ 0x5d8fe75509517d8e) << 0x11 | 0xbb1f) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    pcStack_80[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_80[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_80[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar5;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 8;
  uVar4 = func_0x0011ab24(&pcStack_80);
  uVar6 = uStack_68;
  pppuVar2 = pppuStack_70;
  if (-1 < (long)uStack_60) {
    uVar6 = uStack_60 >> 0x38;
    pppuVar2 = &pppuStack_70;
// WM - if you paid for this, you were scammed
  }
  func_0x00792db8(param_1,pppuVar2,uVar6);
  func_0x007930d0(param_1,&DAT_001f7fa4,uVar4,1,0);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  pbVar3 = (byte *)(*pcRam0000000002075bd0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d747c();
  }
  pcStack_88 = (char *)(*pcRam0000000002075bb8)();
  if (*pcStack_88 == '\x01') {
    uVar1 = (byte)pcStack_88[1] ^ 0x972fbd91;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xa48bb52f;
    pcStack_88[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x23 ^ 0x52;
    uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0x35d526611bbdf7e9) << 0x11 | 0x6baa) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_88[0xb] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
/* WM - chat: discord.gg/sdkhDjTex */
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_88[0xc] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_88[0xd] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
/* no support for modified copies */
    pcStack_88[0xe] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_88[0xf] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_88[0x10] =
/* reversing this took months of machine time */
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
    pcStack_88[0x11] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar7
    ;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar5 >> 0x17);
    pcStack_88[0x12] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar5
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    ;
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 10;
  uVar4 = func_0x0011ab24(&pcStack_88);
  uVar6 = uStack_68;
  pppuVar2 = pppuStack_70;
  if (-1 < (long)uStack_60) {
    uVar6 = uStack_60 >> 0x38;
    pppuVar2 = &pppuStack_70;
  }
  func_0x00792db8(param_1,pppuVar2,uVar6);
  func_0x007930d0(param_1,&DAT_001f80cc,uVar4,1,0);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  pbVar3 = (byte *)(*pcRam0000000002075c00)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019d74b8();
  }
  pcStack_90 = (char *)(*pcRam0000000002075be8)();
  if (*pcStack_90 == '\x01') {
    uVar1 = (byte)pcStack_90[1] ^ 0xb8c2be82;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x99e9e972 ^ 0x435985;
    pcStack_90[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0xbf;
    uVar6 = (((ulong)(byte)pcStack_90[1] ^ 0x62e9ed4c6b8f1202) << 0x11 | 0xc5d3) +
            0x9e3779b97f4a7c15;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
/* wm:if you paid for this, you were scammed */
    uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_90[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_90[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_90[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar7 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_90[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
    uVar7 = uVar5 ^ uVar5 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar7 ^ 0xffffffc3;
// WM - no support for modified copies
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
    pcStack_90[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
    uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar5 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar5 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    pcStack_90[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar5;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 8;
  uVar4 = func_0x0011ab24(&pcStack_90);
  uVar6 = uStack_68;
  pppuVar2 = pppuStack_70;
  if (-1 < (long)uStack_60) {
    uVar6 = uStack_60 >> 0x38;
    pppuVar2 = &pppuStack_70;
  }
  func_0x00792db8(param_1,pppuVar2,uVar6);
  func_0x007930d0(param_1,&DAT_001f81f4,uVar4,1,0);
  func_0x00794260(param_1,0xfffffffe,uVar4);
  if (acStack_58[0] == '\x02') {
    pbVar3 = (byte *)(*pcRam0000000002075c30)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d75a8();
    }
    pcStack_b0 = (char *)(*pcRam0000000002075c18)();
    if (*pcStack_b0 == '\x01') {
      uVar1 = (byte)pcStack_b0[1] ^ 0x978c693f;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x2ad2d530;
      pcStack_b0[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0xb5 ^ 0xfc;
      uVar6 = (((ulong)(byte)pcStack_b0[1] ^ 0x4f8df31f7c2a85f) << 0x11 | 0x9f1) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar7 ^ 0xffffffc3;
/* origin: github.com/pengussy - github.com/pengussy */
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17);
      pcStack_b0[7] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17);
      pcStack_b0[8] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar7 >> 0x17);
      pcStack_b0[9] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar5 >> 0x17);
      pcStack_b0[10] =
           ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
           (byte)uVar5;
      *pcStack_b0 = '\0';
    }
// WM - found on a paste site? it was re-uploaded illegally
    pcStack_b0 = pcStack_b0 + 6;
    uVar4 = func_0x0011ab24(&pcStack_b0);
    uVar6 = uStack_68;
    pppuVar2 = pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar6 = uStack_60 >> 0x38;
      pppuVar2 = &pppuStack_70;
    }
    func_0x00792db8(param_1,pppuVar2,uVar6);
    func_0x007930d0(param_1,&DAT_001f97f0,uVar4,1,0);
    func_0x00794260(param_1,0xfffffffe,uVar4);
    pbVar3 = (byte *)(*pcRam0000000002075c60)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d75e4();
    }
    pcStack_b8 = (char *)(*pcRam0000000002075c48)();
    if (*pcStack_b8 == '\x01') {
      uVar1 = (byte)pcStack_b8[1] ^ 0xd81f68c;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xaac2f2d9;
      pcStack_b8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x4f;
      uVar6 = (((ulong)(byte)pcStack_b8[1] ^ 0x362d9493ff0a76ca) << 0x11 | 0x6c5b) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      pcStack_b8[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar7 ^ 0xffffffc3;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0x13] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0x14] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[10] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_b8[0x15] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[0xb] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
      pcStack_b8[0x16] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar5;
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 0xc;
    uVar4 = func_0x0011ab24(&pcStack_b8);
// WM - more drops soon - github.com/pengussy
    uVar6 = uStack_68;
    pppuVar2 = pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar6 = uStack_60 >> 0x38;
      pppuVar2 = &pppuStack_70;
    }
    func_0x00792db8(param_1,pppuVar2,uVar6);
    func_0x007930d0(param_1,&DAT_001fbb5c,uVar4,1,0);
    func_0x00794260(param_1,0xfffffffe,uVar4);
  }
  else {
    pbVar3 = (byte *)(*pcRam0000000002075c90)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d74f4();
    }
    pcStack_98 = (char *)(*pcRam0000000002075c78)();
/* wm:found on a paste site? it was re-uploaded illegally */
    if (*pcStack_98 == '\x01') {
      uVar1 = (byte)pcStack_98[1] ^ 0x9a35aa43;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x81fd735 ^ 0x1dfdf9;
      pcStack_98[6] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 0x80;
      uVar6 = (((ulong)(byte)pcStack_98[1] ^ 0x891ae3ec7900c905) << 0x11 | 0x11235) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_98[7] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_98[8] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_98[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_98[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar5;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 6;
    uVar4 = func_0x0011ab24(&pcStack_98);
    uVar6 = uStack_68;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    pppuVar2 = pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar6 = uStack_60 >> 0x38;
      pppuVar2 = &pppuStack_70;
    }
    func_0x00792db8(param_1,pppuVar2,uVar6);
    func_0x007930d0(param_1,&DAT_001f84f8,uVar4,1,0);
    func_0x00794260(param_1,0xfffffffe,uVar4);
    pbVar3 = (byte *)(*pcRam0000000002075cc0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d7530();
    }
    pcStack_a0 = (char *)(*pcRam0000000002075ca8)();
    if (*pcStack_a0 == '\x01') {
      uVar1 = (byte)pcStack_a0[1] ^ 0xc9a05f0b;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xb68bf353;
      pcStack_a0[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 200;
      uVar6 = (((ulong)(byte)pcStack_a0[1] ^ 0x2490ec382a5bbdce) << 0x11 | 0x4921) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_a0[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_a0[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_a0[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_a0[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar5 >> 0x17));
      pcStack_a0[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar5;
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 7;
    uVar4 = func_0x0011ab24(&pcStack_a0);
    uVar6 = uStack_68;
    pppuVar2 = pppuStack_70;
    if (-1 < (long)uStack_60) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      uVar6 = uStack_60 >> 0x38;
      pppuVar2 = &pppuStack_70;
    }
    func_0x00792db8(param_1,pppuVar2,uVar6);
    func_0x007930d0(param_1,&DAT_001f8980,uVar4,1,0);
    func_0x00794260(param_1,0xfffffffe,uVar4);
    pbVar3 = (byte *)(*pcRam0000000002075cf0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019d756c();
    }
    pcStack_a8 = (char *)(*pcRam0000000002075cd8)();
    if (*pcStack_a8 == '\x01') {
      uVar1 = (byte)pcStack_a8[1] ^ 0xe91c8825;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xdcbbd7d3 ^ 0x3b08d1;
      pcStack_a8[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x1a;
      uVar6 = (((ulong)(byte)pcStack_a8[1] ^ 0xaabb00a325d0ef5e) << 0x11 | 0x15576) +
              0x9e3779b97f4a7c15;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_a8[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar7 ^ 0xffffffc3;
/* wm:origin: github.com/pengussy */
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_a8[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_a8[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_a8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* wm:stripping the watermark breaks the license */
      uVar5 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_a8[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar5 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar5 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar5 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_a8[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar5;
      *pcStack_a8 = '\0';
    }
    pcStack_a8 = pcStack_a8 + 8;
    uVar4 = func_0x0011ab24(&pcStack_a8);
    uVar6 = uStack_68;
    pppuVar2 = pppuStack_70;
    if (-1 < (long)uStack_60) {
      uVar6 = uStack_60 >> 0x38;
      pppuVar2 = &pppuStack_70;
    }
    func_0x00792db8(param_1,pppuVar2,uVar6);
    func_0x007930d0(param_1,&DAT_001f913c,uVar4,1,0);
    func_0x00794260(param_1,0xfffffffe,uVar4);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  }
  if ((long)uStack_60 < 0) {
    __ZdlPv(pppuStack_70);
  }
  return;
}

