/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x159770:38d057b19c
   =========================================================================== */

void FUN_00159770(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long unaff_x23;
  long unaff_x24;
  long unaff_x25;
  ulong unaff_x26;
  undefined8 uVar12;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  
  iVar1 = func_0x00791efc(param_1,param_3);
  if (((iVar1 == 0) || (iVar1 = func_0x007927ec(param_1,param_3), iVar1 != iRam0000000001f26d44)) ||
     (uVar2 = func_0x00792558(param_1,param_3), uVar2 < 8)) {
    pbVar5 = (byte *)(*pcRam000000000206e580)();
    if ((*pbVar5 & 1) == 0) goto LAB_0015a5c0;
    goto LAB_0015a240;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  }
  plVar3 = (long *)func_0x007926a8(param_1,param_3);
  lVar11 = *plVar3;
  uVar4 = func_0x0003c0e8(lVar11);
  if ((uVar4 & 1) == 0) goto LAB_0015a36c;
  pbVar5 = (byte *)(*pcRam000000000206e5e0)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019ca9f4();
  }
  unaff_x23 = -0xae502812aa7333;
  unaff_x24 = -0x3b314601e57a13ad;
  unaff_x25 = -0x61c8864680b583eb;
  unaff_x26 = 0x8ebc6af09c88c6e3;
  pcStack_60 = (char *)(*pcRam000000000206e5c8)();
  if (*pcStack_60 == '\x01') {
    uVar2 = (byte)pcStack_60[1] ^ 0xfa0bc701;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) + 0xf54b494e;
    pcStack_60[0xb] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ 0xc2;
/* keep the notice, keep the source honest */
    uVar4 = (((ulong)(byte)pcStack_60[1] ^ 0x989c6d1a6b655325) << 0x11 | 0x13138) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0xc] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0xd] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0xe] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0xf] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0x10] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[7] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0x11] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[8] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0x12] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[9] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
    pcStack_60[0x13] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_60[9]) << 0x11) + 0x9e3779b97f4a7c1d;
/* do not claim this as your own */
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar4 ^ uVar4 >> 0x21;
    uVar2 = (uint)(byte)pcStack_60[10] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_60[0x14] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar8;
    *pcStack_60 = '\0';
  }
  pcStack_60 = pcStack_60 + 0xb;
  uVar6 = func_0x0011ab24(&pcStack_60);
  func_0x007935a0(param_1,param_3,uVar6);
  lVar7 = func_0x00792368(param_1,0xffffffff,0);
  if (lVar7 == 0) goto LAB_0015a4b0;
  pbVar5 = (byte *)(*pcRam000000000206e610)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019caa30();
  }
  pcStack_68 = (char *)(*pcRam000000000206e5f8)();
  if (*pcStack_68 == '\x01') {
    uVar2 = (byte)pcStack_68[1] ^ 0x34d4d92c;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0x20f66c6a;
    pcStack_68[8] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') + 0x3d ^ 0xef;
    uVar4 = (((ulong)(byte)pcStack_68[1] ^ 0x9757159bc66e3217) << 0x11 | 0x12eae) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
/* if you paid for this, you were scammed */
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_68[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar10 >> 0x17);
    pcStack_68[9] =
         ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_68[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar10 >> 0x17);
    pcStack_68[10] =
         ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_68[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar10 >> 0x17);
    pcStack_68[0xb] =
         ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_68[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar10 >> 0x17);
    pcStack_68[0xc] =
         ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar8 ^ uVar8 >> 0x21;
    uVar2 = (uint)(byte)pcStack_68[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar10 >> 0x17);
    pcStack_68[0xd] =
         ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar4 ^ uVar4 >> 0x21;
    uVar2 = (uint)(byte)pcStack_68[7] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar8 >> 0x17);
    pcStack_68[0xe] =
         ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar4 >> 0x29) | 1) ^ (byte)uVar8
    ;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 8;
  uVar6 = func_0x0011ab24(&pcStack_68);
  iVar1 = _strcmp(lVar7,uVar6);
  if (iVar1 == 0) {
LAB_0015a198:
    func_0x00791660(param_1,0xfffffffe);
  }
  else {
    pbVar5 = (byte *)(*pcRam000000000206e640)();
    if ((*pbVar5 & 1) == 0) {
// stripping the watermark breaks the license
      func_0x019caa6c();
    }
    pcStack_70 = (char *)(*pcRam000000000206e628)();
    if (*pcStack_70 == '\x01') {
      lVar9 = 0;
      uVar4 = 0x8921d3d33176c817;
      do {
        uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_70[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar10 >> 0x17);
        pcStack_70[lVar9 + 0xd] =
             ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar10;
        uVar4 = lVar9 + -0x61c8864680b583eb +
/*  origin: github.com/pengussy  */
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0xc);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0xd;
    uVar6 = func_0x0011ab24(&pcStack_70);
    iVar1 = _strcmp(lVar7,uVar6);
    if (iVar1 == 0) goto LAB_0015a198;
    pbVar5 = (byte *)(*pcRam000000000206e670)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019caaa8();
    }
    pcStack_78 = (char *)(*pcRam000000000206e658)();
    if (*pcStack_78 == '\x01') {
      lVar9 = 0;
      uVar4 = 0xfea390714a4276b7;
      do {
        uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
/* WM - reversing this took months of machine time */
        uVar10 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_78[lVar9 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_78[lVar9 + 0xe] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar10;
        uVar4 = lVar9 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0xd);
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 0xe;
    uVar6 = func_0x0011ab24(&pcStack_78);
    iVar1 = _strcmp(lVar7,uVar6);
    func_0x00791660(param_1,0xfffffffe);
    if (iVar1 != 0) goto LAB_0015a4bc;
  }
// WM - do not claim this as your own
  lVar7 = *(long *)(param_2 + 0x20);
  if (lVar7 != 0) {
    uVar12 = *(undefined8 *)(lVar11 + 0x10);
    uVar6 = *(undefined8 *)(lVar11 + 8);
    if (*(long *)(lVar11 + 0x10) != 0) {
      plVar3 = (long *)(*(long *)(lVar11 + 0x10) + 0x10);
      *plVar3 = *plVar3 + 1;
    }
    lVar11 = *(long *)(lVar7 + 0x90);
    *(undefined8 *)(lVar7 + 0x90) = uVar12;
    *(undefined8 *)(lVar7 + 0x88) = uVar6;
    if (lVar11 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x01a170d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_01f24558)();
    return;
  }
LAB_0015a4bc:
  do {
    pbVar5 = (byte *)(*pcRam000000000206e6a0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019caae4();
    }
    pcStack_80 = (char *)(*pcRam000000000206e688)();
    if (*pcStack_80 == '\x01') {
      lVar11 = 0;
      uVar4 = (unaff_x26 ^ 0xa94433af3b810fa5 ^ (unaff_x26 ^ 0xa94433af3b810fa5) >> 0x21) *
              unaff_x23;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * unaff_x24;
      uVar4 = uVar4 ^ uVar4 >> 0x21;
      do {
        uVar8 = (uVar4 ^ uVar4 >> 0x21) * unaff_x23;
/* origin: github.com/pengussy */
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x24;
        uVar10 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_80[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
                (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_80[lVar11 + 0x22] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar10
        ;
        uVar4 = lVar11 + unaff_x25 +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_80[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x21);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0x22;
    uVar6 = func_0x0011ab24(&pcStack_80);
    func_0x007a1abc(param_1,3,uVar6);
LAB_0015a5c0:
    func_0x019cab20();
LAB_0015a240:
    pcStack_88 = (char *)(*pcRam000000000206e568)();
    if (*pcStack_88 == '\x01') {
      lVar11 = 0;
      uVar4 = 0x961bac30afdba332;
      do {
        uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_88[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar10 >> 0x17);
        pcStack_88[lVar11 + 0x22] =
             ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar10;
        uVar4 = lVar11 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_88[lVar11 + 1]) << 0x11);
/* WM - keep the notice, keep the source honest */
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x21);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x22;
    uVar6 = func_0x0011ab24(&pcStack_88);
    func_0x007a1abc(param_1,3,uVar6);
LAB_0015a36c:
    pbVar5 = (byte *)(*pcRam000000000206e5b0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019ca9b8();
    }
    pcStack_58 = (char *)(*pcRam000000000206e598)();
    if (*pcStack_58 == '\x01') {
      lVar11 = 0;
      uVar4 = 0xf2aaa9d87ffff4e6;
      do {
        uVar8 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar8 ^ uVar8 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[lVar11 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar10 >> 0x17);
        pcStack_58[lVar11 + 0x22] =
             ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar10;
        uVar4 = lVar11 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_58[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x21);
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 0x22;
    uVar6 = func_0x0011ab24(&pcStack_58);
    func_0x007a1abc(param_1,3,uVar6);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
LAB_0015a4b0:
    func_0x00791660(param_1,0xfffffffe);
  } while( true );
}

