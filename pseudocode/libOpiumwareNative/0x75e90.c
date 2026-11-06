/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x75e90:d8b37e958f
 */

undefined8 FUN_00075e90(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte *pbVar11;
  uint uVar12;
  uint extraout_w8;
  long lVar13;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
// WM - do not claim this as your own
  byte *pbVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  long alStack_70 [2];
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) goto LAB_00077748;
  iVar2 = func_0x00791db8(param_1,2);
  if (iVar2 == 0) goto LAB_00077b50;
  iVar2 = func_0x00791be4(param_1,3);
  if (iVar2 != 8) goto LAB_00077ea0;
  iVar2 = func_0x00791be4(param_1,4);
  if ((0 < iVar2) && (iVar2 = func_0x00791db8(param_1,4), iVar2 == 0)) goto LAB_00078580;
  plVar4 = (long *)func_0x00790f58(param_1,1);
  lVar20 = *plVar4;
/* WM - stripping the watermark breaks the license */
  uVar5 = func_0x00792168(param_1,2,0);
  plVar4 = (long *)func_0x00790f58(param_1,3);
  lVar25 = *plVar4;
  iVar2 = func_0x00791be4(param_1,4);
  if (iVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = func_0x00792168(param_1,4,0);
  }
  if (lVar20 == lVar25) {
    return 0;
  }
  alStack_70[0] = lVar20;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  func_0x001393dc(0x20970c0,alStack_70);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (*(char *)(alStack_70[0] + 3) != '\0') {
LAB_00076ba8:
    pbVar21 = (byte *)(*pcRam0000000002063ed0)();
    if ((*pbVar21 & 1) == 0) goto LAB_00078ec8;
    goto LAB_00076bc0;
  }
  alStack_70[0] = lVar25;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  func_0x001393dc(0x20970c0,alStack_70);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (*(char *)(alStack_70[0] + 3) != '\0') goto LAB_00076ba8;
  pbVar21 = *(byte **)(lVar20 + 0x18);
  lVar20 = *(long *)(lVar25 + 0x18);
  iVar2 = func_0x00078f98(pbVar21);
  if (iVar2 == 0) goto LAB_00076e80;
  uVar6 = func_0x00078f98(lVar20);
  if ((uVar6 & 1) == 0) goto LAB_00076e80;
/*  more drops soon - github.com/pengussy  */
  iVar2 = (int)uVar5;
  uVar6 = (ulong)(iVar2 - 1);
  if (iVar2 < 1) goto LAB_00077198;
  if (*(int *)(pbVar21 + 0xac) < iVar2) goto LAB_00077198;
  if (uVar3 == 0) {
    lVar22 = *(long *)(*(long *)(pbVar21 + 0x58) + uVar6 * 8);
    iVar2 = func_0x00078f98(lVar22);
  }
  else {
    if ((int)uVar3 < 1) goto LAB_000782a8;
    if (*(int *)(lVar20 + 0xac) < (int)uVar3) goto LAB_000782a8;
    lVar20 = *(long *)(*(long *)(lVar20 + 0x58) + (ulong)uVar3 * 8 + -8);
    lVar22 = *(long *)(*(long *)(pbVar21 + 0x58) + uVar6 * 8);
    iVar2 = func_0x00078f98(lVar22);
  }
  if (iVar2 == 0) goto LAB_00077470;
  uVar16 = func_0x00078f98(lVar20);
  if ((uVar16 & 1) == 0) goto LAB_00077470;
  bVar1 = *(byte *)(lVar22 + 3);
  uVar12 = (uint)bVar1;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  if (bVar1 != *(byte *)(lVar20 + 3)) goto LAB_000788d0;
  if (uVar3 != 0) {
    if (bVar1 == 0) goto LAB_0007638c;
    pbVar21 = (byte *)(*pcRam0000000002064170)();
    if ((*pbVar21 & 1) == 0) {
      func_0x019bd410();
    }
    pbVar21 = (byte *)0xff51afd7ed558ccd;
    uVar6 = 0xc4ceb9fe1a85ec53;
    uVar3 = 0x9c88c6e3;
    pcStack_e0 = (char *)(*pcRam0000000002064158)();
    if (*pcStack_e0 == '\x01') {
      uVar12 = (byte)pcStack_e0[1] ^ 0xd1e3ce60;
      uVar12 = (uVar12 >> 5 & 7 | uVar12 << 3) + 0x49bc55a4 ^ 0x46ad91;
      pcStack_e0[4] = ((byte)(uVar12 >> 1) & 0x7f | (byte)(uVar12 << 7)) + 0x5d;
      uVar16 = (((ulong)(byte)pcStack_e0[1] ^ 0x14f442806edfeab1) << 0x11 | 0x29e8) +
               0x9e3779b97f4a7c15;
      uVar19 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar19 ^ uVar19 >> 0x21;
      uVar12 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar18 ^ 0xffffffc3;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      uVar12 = (uVar12 >> 5 & 7 | uVar12 << 3) - (int)(uVar18 >> 0x17) ^
               ((uint)(uVar19 >> 0x29) | 1);
      pcStack_e0[5] = ((byte)(uVar12 >> 1) & 0x7f | (byte)(uVar12 << 7)) - (char)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar16 ^ uVar16 >> 0x21;
      uVar12 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar12 = (uVar12 >> 5 & 7 | uVar12 << 3) - (int)(uVar19 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_e0[6] = ((byte)(uVar12 >> 1) & 0x7f | (byte)(uVar12 << 7)) - (char)uVar19;
      *pcStack_e0 = '\0';
    }
    pcStack_e0 = pcStack_e0 + 4;
    uVar5 = func_0x0011ab24(&pcStack_e0);
    pbVar7 = (byte *)(*pcRam00000000020641a0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019bd44c();
/* do not claim this as your own - github.com/pengussy */
    }
    pcStack_e8 = (char *)(*pcRam0000000002064188)();
    if (*pcStack_e8 == '\x01') {
      lVar13 = 0;
      uVar16 = 0xbae52974fa0b274a;
      do {
        uVar19 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar19 ^ uVar19 >> 0x21;
        uVar12 = (uint)(byte)pcStack_e8[lVar13 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar12 = (uVar12 >> 2 & 0x3f | uVar12 << 6) - (int)(uVar18 >> 0x17);
        pcStack_e8[lVar13 + 0x2e] =
             ((byte)(uVar12 >> 2) & 0x3f | (char)uVar12 * '@') - ((byte)(uVar19 >> 0x29) | 1) ^
             (byte)uVar18;
        uVar16 = lVar13 + -0x61c8864680b583eb +
                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[lVar13 + 1]) << 0x11);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x2d);
      *pcStack_e8 = '\0';
    }
    pcStack_e8 = pcStack_e8 + 0x2e;
    func_0x0011ab24(&pcStack_e8);
    func_0x007a1b5c(param_1,uVar5);
    uVar12 = extraout_w8;
  }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  if (*(byte *)(lVar25 + 4) != uVar12) goto LAB_00078bb0;
LAB_0007638c:
  func_0x007911b0(param_1,1);
  pbVar7 = (byte *)func_0x0080e400(param_1);
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x48);
  *puVar14 = pbVar7;
  *(undefined4 *)((long)puVar14 + 0xc) = 0xf;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  pbVar7[7] = *(byte *)(lVar20 + 7);
  *(undefined4 *)(pbVar7 + 3) = *(undefined4 *)(lVar20 + 3);
  *(byte **)(pbVar7 + 0x70) = pbVar7 + *(long *)(lVar20 + 0x70) + (0x70 - (lVar20 + 0x70));
  *(undefined4 *)(pbVar7 + 0x9c) = *(undefined4 *)(lVar20 + 0x9c);
  *(undefined8 *)(pbVar7 + 0xa4) = *(undefined8 *)(lVar20 + 0xa4);
  *(undefined4 *)(pbVar7 + 0xcc) = *(undefined4 *)(lVar20 + 0xcc);
  *(undefined8 *)(pbVar7 + 0xe0) = *(undefined8 *)(lVar20 + 0xe0);
  pbVar11 = (byte *)(*(long *)(lVar20 + 0x30) - (lVar20 + 0x30));
  *(byte **)(pbVar7 + 0x30) = pbVar11 + (long)(pbVar7 + 0x30);
  if (((pbVar11 != (byte *)0x0) && ((*pbVar7 >> 2 & 1) != 0)) && ((*pbVar11 & 3) != 0)) {
    func_0x0081b3dc(param_1,pbVar7);
  }
  puVar15 = (ulong *)(lVar20 + 0x20);
  puVar17 = (ulong *)*puVar15;
  pbVar11 = (byte *)((ulong)puVar17 ^ (ulong)puVar15);
  *(ulong *)(pbVar7 + 0x20) = (ulong)pbVar11 ^ (ulong)(pbVar7 + 0x20);
  if (((puVar17 != puVar15) && ((*pbVar7 >> 2 & 1) != 0)) && ((*pbVar11 & 3) != 0)) {
    func_0x0081b3dc(param_1,pbVar7);
/* WM - more drops soon - github.com/pengussy */
  }
  if (0 < *(int *)(lVar20 + 0xbc)) {
    uVar16 = func_0x00848e80(param_1,*(int *)(lVar20 + 0xbc),pbVar7[2]);
    pcVar8 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
    (*pcVar8)(uVar16,*(ulong *)(lVar20 + 8U) ^ lVar20 + 8U,(long)*(int *)(lVar20 + 0xbc));
    *(ulong *)(pbVar7 + 8) = uVar16 ^ (ulong)(pbVar7 + 8);
    iVar2 = *(int *)(lVar20 + 0xbc);
    *(int *)(pbVar7 + 0xbc) = iVar2;
    if ((*(long *)(lVar20 + 0x78) + lVar20 + 0x78 != 0) &&
       (uVar19 = (long)*(int *)(lVar20 + 0xb8) + 3U & 0xfffffffffffffffc,
       uVar19 + 4 <= (ulong)(long)iVar2)) {
      *(ulong *)(pbVar7 + 0x78) = (uVar16 + uVar19) - (long)(pbVar7 + 0x78);
    }
  }
  if (0 < (int)*(uint *)(lVar20 + 0xa0)) {
    uVar16 = func_0x00848e80(param_1,(ulong)*(uint *)(lVar20 + 0xa0) * 0x18,pbVar7[2]);
    _memmove(uVar16,*(ulong *)(lVar20 + 0x60) ^ (ulong)(lVar20 + 0x60),
             (long)*(int *)(lVar20 + 0xa0) * 0x18);
    puVar15 = (ulong *)(pbVar7 + 0x60);
    *(ulong *)(pbVar7 + 0x60) = uVar16 ^ (ulong)puVar15;
    iVar2 = *(int *)(lVar20 + 0xa0);
    *(int *)(pbVar7 + 0xa0) = iVar2;
    if (0 < iVar2) {
      lVar23 = 0;
      lVar13 = 0;
      do {
        pbVar11 = *(byte **)((*puVar15 ^ (ulong)puVar15) + lVar23);
        if (((pbVar11 != (byte *)0x0) && ((*pbVar7 >> 2 & 1) != 0)) && ((*pbVar11 & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar7);
          iVar2 = *(int *)(pbVar7 + 0xa0);
        }
        lVar13 = lVar13 + 1;
        lVar23 = lVar23 + 0x18;
      } while (lVar13 < iVar2);
    }
/* do not claim this as your own */
  }
  if (0 < (int)*(uint *)(lVar20 + 0x98)) {
    lVar13 = func_0x00848e80(param_1,(ulong)*(uint *)(lVar20 + 0x98) << 3,pbVar7[2]);
    _memmove(lVar13,*(long *)(lVar20 + 0x10) + lVar20 + 0x10,(long)*(int *)(lVar20 + 0x98) << 3);
    pbVar11 = pbVar7 + 0x10;
    *(long *)(pbVar7 + 0x10) = lVar13 - (long)pbVar11;
    iVar2 = *(int *)(lVar20 + 0x98);
    *(int *)(pbVar7 + 0x98) = iVar2;
    if (0 < iVar2) {
      lVar13 = 0;
      do {
        if (((*(byte **)(pbVar11 + lVar13 * 8 + *(long *)pbVar11) != (byte *)0x0) &&
            ((*pbVar7 >> 2 & 1) != 0)) &&
           ((**(byte **)(pbVar11 + lVar13 * 8 + *(long *)pbVar11) & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar7);
          iVar2 = *(int *)(pbVar7 + 0x98);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar2);
    }
  }
  if (0 < *(int *)(lVar20 + 0xb4)) {
    lVar13 = func_0x00848e80(param_1,*(int *)(lVar20 + 0xb4),pbVar7[2]);
    pcVar8 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
    (*pcVar8)(lVar13,(lVar20 + 0x40) - *(long *)(lVar20 + 0x40),(long)*(int *)(lVar20 + 0xb4));
    *(byte **)(pbVar7 + 0x40) = pbVar7 + (0x40 - lVar13);
    *(undefined4 *)(pbVar7 + 0xb4) = *(undefined4 *)(lVar20 + 0xb4);
  }
  if ((int)*(uint *)(lVar20 + 0xb8) < 0) {
    do {
// WM - chat: discord.gg/sdkhDjTex
      func_0x00848e6c(param_1);
LAB_00078bb0:
      pbVar21 = (byte *)(*pcRam0000000002064110)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd488();
      }
      pcStack_f0 = (char *)(*pcRam00000000020640f8)();
      if (*pcStack_f0 == '\x01') {
        uVar3 = (byte)pcStack_f0[1] ^ 0x7d4248d6;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) + 0xa263fafb;
        pcStack_f0[4] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') + 0x99 ^ 0x15;
        uVar6 = (((ulong)(byte)pcStack_f0[1] ^ 0xe6aaffd695568e85) << 0x11 | 0x1cd55) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
/* wm:stripping the watermark breaks the license */
        uVar3 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar19 >> 0x17);
        pcStack_f0[5] =
             ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar16 >> 0x17);
        pcStack_f0[6] =
             ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar16;
        *pcStack_f0 = '\0';
      }
      pcStack_f0 = pcStack_f0 + 4;
      uVar5 = func_0x0011ab24(&pcStack_f0);
      pbVar21 = (byte *)(*pcRam0000000002064140)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd4c4();
      }
      pcStack_f8 = (char *)(*pcRam0000000002064128)();
      if (*pcStack_f8 == '\x01') {
        lVar20 = 0;
        uVar6 = 0x1322e0f9c6cf92;
        do {
          uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_f8[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar16 >> 0x29) | 1);
/*  proprietary - see LICENSE - do not sell  */
          pcStack_f8[lVar20 + 0x2c] = ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) - (char)uVar19;
          uVar6 = lVar20 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f8[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x2b);
        *pcStack_f8 = '\0';
      }
      pcStack_f8 = pcStack_f8 + 0x2c;
      func_0x0011ab24(&pcStack_f8);
      func_0x007a1b5c(param_1,uVar5);
LAB_00078ec8:
      func_0x019bd1b8();
LAB_00076bc0:
      pcStack_90 = (char *)(*pcRam0000000002063eb8)();
      if (*pcStack_90 == '\x01') {
        uVar3 = (byte)pcStack_90[1] ^ 0x15292072;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) + 0x28c72e2b;
        pcStack_90[4] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') + 0x31 ^ 0xb1;
        uVar6 = (((ulong)(byte)pcStack_90[1] ^ 0x4c0e07c01c612cb) << 0x11 | 0x981) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_90[2] ^ (uint)uVar19 ^ 0xffffffc3;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar19 >> 0x17);
        pcStack_90[5] =
             ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_90[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar16 >> 0x17);
        pcStack_90[6] =
             ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar16;
        *pcStack_90 = '\0';
      }
      pcStack_90 = pcStack_90 + 4;
/* reversing this took months of machine time */
      uVar5 = func_0x0011ab24(&pcStack_90);
      pbVar21 = (byte *)(*pcRam0000000002063f00)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd1f4();
      }
      pcStack_98 = (char *)(*pcRam0000000002063ee8)();
      if (*pcStack_98 == '\x01') {
        lVar20 = 0;
        uVar6 = 0xdba099841c051cd1;
        do {
          uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_98[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_98[lVar20 + 0x26] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') ^ (byte)uVar19;
          uVar6 = lVar20 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_98[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x25);
        *pcStack_98 = '\0';
      }
      pcStack_98 = pcStack_98 + 0x26;
      func_0x0011ab24(&pcStack_98);
      func_0x007a1b5c(param_1,uVar5);
LAB_00076e80:
      pbVar21 = (byte *)(*pcRam0000000002063f30)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd230();
      }
      pcStack_a0 = (char *)(*pcRam0000000002063f18)();
      if (*pcStack_a0 == '\x01') {
        uVar3 = (byte)pcStack_a0[1] ^ 0xfec0e166;
        uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0x2f87f9ff;
        pcStack_a0[4] = ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') ^ 0xa5;
        uVar6 = (((ulong)(byte)pcStack_a0[1] ^ 0x2a691f4453280237) << 0x11 | 0x54d2) +
                0x9e3779b97f4a7c15;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_a0[5] = ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_a0[6] = ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') ^ (byte)uVar16;
        *pcStack_a0 = '\0';
      }
      pcStack_a0 = pcStack_a0 + 4;
      uVar5 = func_0x0011ab24(&pcStack_a0);
      pbVar21 = (byte *)(*pcRam0000000002063f60)();
/* wm:found on a paste site? it was re-uploaded illegally */
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd26c();
      }
      pcStack_a8 = (char *)(*pcRam0000000002063f48)();
      if (*pcStack_a8 == '\x01') {
        lVar20 = 0;
        uVar6 = 0xcfea0484b3f5356;
        do {
          uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_a8[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
          pcStack_a8[lVar20 + 0x18] =
               ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') - ((byte)(uVar16 >> 0x29) | 1) ^
               (byte)uVar19;
          uVar6 = lVar20 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_a8[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x17);
// WM - reversing this took months of machine time
        *pcStack_a8 = '\0';
      }
      pcStack_a8 = pcStack_a8 + 0x18;
      func_0x0011ab24(&pcStack_a8);
      func_0x007a1b5c(param_1,uVar5);
LAB_00077198:
      pbVar21 = (byte *)(*pcRam0000000002063f90)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd500();
      }
      pcStack_100 = (char *)(*pcRam0000000002063f78)();
      if (*pcStack_100 == '\x01') {
        uVar3 = (byte)pcStack_100[1] ^ 0xd4fa8e74;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) + 0xeb983aa ^ 0x3cbc51;
        pcStack_100[4] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) + 0x49;
        uVar6 = (((ulong)(byte)pcStack_100[1] ^ 0xa860e0a682cba9b4) << 0x11 | 0x150c1) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_100[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcStack_100[5] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/* wm:no support for modified copies */
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_100[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
        pcStack_100[6] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar16;
        *pcStack_100 = '\0';
      }
      pcStack_100 = pcStack_100 + 4;
      uVar5 = func_0x0011ab24(&pcStack_100);
      pbVar21 = (byte *)(*pcRam0000000002063fc0)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd53c();
      }
      pcStack_108 = (char *)(*pcRam0000000002063fa8)();
      if (*pcStack_108 == '\x01') {
        lVar20 = 0;
        uVar6 = 0xb3cfb036ab02e7f;
        do {
          uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* wm:more drops soon - github.com/pengussy */
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_108[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar16 >> 0x29) | 1);
          pcStack_108[lVar20 + 0x21] =
               ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar19;
          uVar6 = lVar20 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_108[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x20);
        *pcStack_108 = '\0';
      }
      pcStack_108 = pcStack_108 + 0x21;
      func_0x0011ab24(&pcStack_108);
      func_0x007a1b5c(param_1,uVar5);
LAB_00077470:
      pbVar21 = (byte *)(*pcRam0000000002064050)();
/* thanks for reading - discord.gg/sdkhDjTex */
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd320();
      }
      pcStack_c0 = (char *)(*pcRam0000000002064038)();
      if (*pcStack_c0 == '\x01') {
        uVar3 = (byte)pcStack_c0[1] ^ 0xdc1ffd19;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0x9ebf4382;
        pcStack_c0[4] = ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') ^ 0xda;
        uVar6 = (((ulong)(byte)pcStack_c0[1] ^ 0x8b8583214a2f7cbb) << 0x11 | 0x1170b) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_c0[5] = ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_c0[6] = ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') ^ (byte)uVar16;
        *pcStack_c0 = '\0';
      }
      pcStack_c0 = pcStack_c0 + 4;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar5 = func_0x0011ab24(&pcStack_c0);
      pbVar21 = (byte *)(*pcRam0000000002064080)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd35c();
      }
      pcStack_c8 = (char *)(*pcRam0000000002064068)();
      if (*pcStack_c8 == '\x01') {
        lVar20 = 0;
        uVar6 = 0xf790b0d3acce24d5;
        do {
          uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_c8[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_c8[lVar20 + 0x18] =
               ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
          uVar6 = lVar20 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_c8[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x17);
        *pcStack_c8 = '\0';
      }
      pcStack_c8 = pcStack_c8 + 0x18;
      func_0x0011ab24(&pcStack_c8);
      func_0x007a1b5c(param_1,uVar5);
LAB_00077748:
      pbVar21 = (byte *)(*pcRam0000000002063e10)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd104();
      }
      pcStack_78 = (char *)(*pcRam0000000002063df8)();
      if (*pcStack_78 == '\x01') {
        uVar3 = (byte)pcStack_78[1] ^ 0xaca80e06;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0x7581c55a ^ 0x30629f;
        pcStack_78[10] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) + 0x3b;
// more drops soon - github.com/pengussy
        uVar6 = (((ulong)(byte)pcStack_78[1] ^ 0xab5595ac1a7f0cca) << 0x11 | 0x156ab) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_78[0xb] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_78[0xc] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_78[0xd] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/* WM - do not claim this as your own */
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[5] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_78[0xe] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[6] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_78[0xf] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[7] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_78[0x10] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[8] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_78[0x11] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_78[9] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar16 >> 0x17) ^
                ((uint)(uVar6 >> 0x29) | 1);
        pcStack_78[0x12] = ((byte)(uVar3 >> 4) & 0xf | (byte)(uVar3 << 4)) - (char)uVar16;
// stripping the watermark breaks the license
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 10;
      uVar5 = func_0x0011ab24(&pcStack_78);
      func_0x007a1ba8(param_1,1,uVar5);
LAB_00077b50:
      pbVar21 = (byte *)(*pcRam0000000002063e40)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd578();
      }
      pcStack_110 = (char *)(*pcRam0000000002063e28)();
      if (*pcStack_110 == '\x01') {
        uVar3 = (byte)pcStack_110[1] ^ 0xdfd7fe7c;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) + 0x7677e767;
        pcStack_110[8] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ 0xbf;
        uVar6 = (((ulong)(byte)pcStack_110[1] ^ 0x3fafe306df553afc) << 0x11 | 0x7f5f) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_110[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_110[9] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/* WM - reversing this took months of machine time */
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_110[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_110[10] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_110[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_110[0xb] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_110[5] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_110[0xc] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_110[6] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
/* unlicensed copy if this notice is missing - github.com/pengussy */
        pcStack_110[0xd] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_110[7] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_110[0xe] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar16;
        *pcStack_110 = '\0';
      }
      pcStack_110 = pcStack_110 + 8;
      uVar5 = func_0x0011ab24(&pcStack_110);
      func_0x007a1ba8(param_1,2,uVar5);
LAB_00077ea0:
      pbVar21 = (byte *)(*pcRam0000000002063e70)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd140();
      }
// WM - keep the notice, keep the source honest
      pcStack_80 = (char *)(*pcRam0000000002063e58)();
      if (*pcStack_80 == '\x01') {
        uVar3 = (byte)pcStack_80[1] ^ 0x1b6e6c54;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0x127a4037;
        pcStack_80[10] = ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') + 0x9f ^ 0x97;
        uVar6 = (((ulong)(byte)pcStack_80[1] ^ 0x3f570ff3029ae99) << 0x11 | 0x7ea) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
        pcStack_80[0xb] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
        pcStack_80[0xc] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
/* WM - unlicensed copy if this notice is missing */
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
        pcStack_80[0xd] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[5] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
        pcStack_80[0xe] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[6] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
        pcStack_80[0xf] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[7] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
        pcStack_80[0x10] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[7]) << 0x11) + 0x9e3779b97f4a7c1b;
/*  chat: discord.gg/sdkhDjTex  */
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[8] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
        pcStack_80[0x11] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar16 >> 0x29) | 1) ^
             (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_80[9] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar16 >> 0x17);
        pcStack_80[0x12] =
             ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar16;
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 10;
      uVar5 = func_0x0011ab24(&pcStack_80);
      func_0x007a1ba8(param_1,3,uVar5);
LAB_000782a8:
      pbVar21 = (byte *)(*pcRam0000000002063ff0)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd2a8();
      }
      pcStack_b0 = (char *)(*pcRam0000000002063fd8)();
      if (*pcStack_b0 == '\x01') {
        uVar3 = (byte)pcStack_b0[1] ^ 0x89c7f94c;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) + 0x50429514 ^ 0x42bef;
        pcStack_b0[4] = ((byte)(uVar3 >> 1) & 0x7f | (byte)(uVar3 << 7)) + 0x71;
        uVar6 = (((ulong)(byte)pcStack_b0[1] ^ 0x19760ed5c37aeeec) << 0x11 | 0x32ec) +
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar19 >> 0x17) ^ ((uint)(uVar16 >> 0x29) | 1)
        ;
        pcStack_b0[5] = ((byte)(uVar3 >> 1) & 0x7f | (byte)(uVar3 << 7)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
        pcStack_b0[6] = ((byte)(uVar3 >> 1) & 0x7f | (byte)(uVar3 << 7)) - (char)uVar16;
        *pcStack_b0 = '\0';
      }
      pcStack_b0 = pcStack_b0 + 4;
      uVar5 = func_0x0011ab24(&pcStack_b0);
      pbVar21 = (byte *)(*pcRam0000000002064020)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd2e4();
      }
      pcStack_b8 = (char *)(*pcRam0000000002064008)();
      if (*pcStack_b8 == '\x01') {
// WM - stripping the watermark breaks the license
        lVar20 = 0;
        uVar6 = 0xa3bd1356b6742072;
        do {
          uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_b8[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar16 >> 0x29) | 1);
          pcStack_b8[lVar20 + 0x1f] = ((byte)(uVar3 >> 6) & 3 | (byte)(uVar3 << 2)) - (char)uVar19;
          uVar6 = lVar20 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x1e);
        *pcStack_b8 = '\0';
      }
      pcStack_b8 = pcStack_b8 + 0x1f;
      func_0x0011ab24(&pcStack_b8);
      func_0x007a1b5c(param_1,uVar5);
LAB_00078580:
      pbVar21 = (byte *)(*pcRam0000000002063ea0)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd17c();
      }
      pcStack_88 = (char *)(*pcRam0000000002063e88)();
      if (*pcStack_88 == '\x01') {
        uVar3 = (byte)pcStack_88[1] ^ 0x92bcdfec;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) + 0x647c705b;
        pcStack_88[8] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ 0x2f;
        uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0xa544718800d9fb78) << 0x11 | 0x14a88) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
/*  found on a paste site? it was re-uploaded illegally  */
        uVar3 = (uint)(byte)pcStack_88[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_88[9] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_88[3] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_88[10] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_88[4] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_88[0xb] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_88[5] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_88[0xc] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_88[6] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_88[0xd] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/* WM - donate: donate/README.md */
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_88[7] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_88[0xe] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar16;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 8;
      uVar5 = func_0x0011ab24(&pcStack_88);
      func_0x007a1ba8(param_1,4,uVar5);
LAB_000788d0:
      pbVar21 = (byte *)(*pcRam00000000020640b0)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd398();
      }
      pcStack_d0 = (char *)(*pcRam0000000002064098)();
      if (*pcStack_d0 == '\x01') {
        uVar3 = (byte)pcStack_d0[1] ^ 0x1319fba;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) + 0x60841603 ^ 0x6d27df;
        pcStack_d0[4] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) + 0x87;
        uVar6 = (((ulong)(byte)pcStack_d0[1] ^ 0x83572ecf5d016b7d) << 0x11 | 0x106ae) +
                0x9e3779b97f4a7c15;
        uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar16 ^ uVar16 >> 0x21;
        uVar3 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcStack_d0[5] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar19;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar16 >> 0x17) ^
                ((uint)(uVar6 >> 0x29) | 1);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        pcStack_d0[6] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar16;
        *pcStack_d0 = '\0';
      }
      pcStack_d0 = pcStack_d0 + 4;
      uVar5 = func_0x0011ab24(&pcStack_d0);
      pbVar21 = (byte *)(*pcRam00000000020640e0)();
      if ((*pbVar21 & 1) == 0) {
        func_0x019bd3d4();
      }
      pcStack_d8 = (char *)(*pcRam00000000020640c8)();
      if (*pcStack_d8 == '\x01') {
        lVar20 = 0;
        uVar6 = 0x6c84105bbbe1dd1f;
        do {
          uVar16 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar16 ^ uVar16 >> 0x21;
          uVar3 = (uint)(byte)pcStack_d8[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_d8[lVar20 + 0x3a] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar19
          ;
          uVar6 = lVar20 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_d8[lVar20 + 1]) << 0x11);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x39);
        *pcStack_d8 = '\0';
      }
      pcStack_d8 = pcStack_d8 + 0x3a;
      func_0x0011ab24(&pcStack_d8);
      func_0x007a1b5c(param_1,uVar5);
    } while( true );
  }
  uVar9 = func_0x00848e80(param_1,(ulong)*(uint *)(lVar20 + 0xb8) << 2,pbVar7[2]);
  _memmove(uVar9,*(undefined8 *)(lVar20 + 0x88),(long)*(int *)(lVar20 + 0xb8) << 2);
/* reversing this took months of machine time - github.com/pengussy */
  *(undefined8 *)(pbVar7 + 0x88) = uVar9;
  iVar2 = *(int *)(lVar20 + 0xb8);
  *(int *)(pbVar7 + 0xb8) = iVar2;
  *(undefined8 *)(pbVar7 + 0x18) = uVar9;
  plVar4 = (long *)(lVar20 + 0x90);
  if ((long *)*plVar4 != plVar4) {
    uVar16 = func_0x00848e80(param_1,(long)iVar2,pbVar7[2]);
    pcVar8 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
    (*pcVar8)(uVar16,*(ulong *)(lVar20 + 0x90) ^ (ulong)plVar4,(long)*(int *)(lVar20 + 0xb8));
    *(ulong *)(pbVar7 + 0x90) = uVar16 ^ (ulong)(pbVar7 + 0x90);
  }
  if (*(uint *)(lVar20 + 200) != 0) {
    uVar9 = func_0x00848e80(param_1,(ulong)*(uint *)(lVar20 + 200) << 4,pbVar7[2]);
    _memmove(uVar9,*(undefined8 *)(lVar20 + 0xc0),(ulong)*(uint *)(lVar20 + 200) << 4);
    *(undefined8 *)(pbVar7 + 0xc0) = uVar9;
    *(undefined4 *)(pbVar7 + 200) = *(undefined4 *)(lVar20 + 200);
  }
  if (0 < (int)*(uint *)(lVar20 + 0xb0)) {
    uVar9 = func_0x00848e80(param_1,(ulong)*(uint *)(lVar20 + 0xb0) << 4,pbVar7[2]);
    _memmove(uVar9,*(undefined8 *)(lVar20 + 0x80),(long)*(int *)(lVar20 + 0xb0) << 4);
    *(undefined8 *)(pbVar7 + 0x80) = uVar9;
    iVar2 = *(int *)(lVar20 + 0xb0);
    *(int *)(pbVar7 + 0xb0) = iVar2;
    if (0 < iVar2) {
      lVar23 = 0;
      lVar13 = 0;
      do {
        if (((5 < *(int *)(*(long *)(pbVar7 + 0x80) + lVar23 + 0xc)) && ((*pbVar7 >> 2 & 1) != 0))
           && ((**(byte **)(*(long *)(pbVar7 + 0x80) + lVar23) & 3) != 0)) {
// if you paid for this, you were scammed
          func_0x0081b3dc(param_1,pbVar7);
          iVar2 = *(int *)(pbVar7 + 0xb0);
        }
        lVar13 = lVar13 + 1;
        lVar23 = lVar23 + 0x10;
      } while (lVar13 < iVar2);
    }
  }
  if (0 < (int)*(uint *)(lVar20 + 0xac)) {
    uVar9 = func_0x00848e80(param_1,(ulong)*(uint *)(lVar20 + 0xac) << 3,pbVar7[2]);
    _memmove(uVar9,*(undefined8 *)(lVar20 + 0x58),(long)*(int *)(lVar20 + 0xac) << 3);
    *(undefined8 *)(pbVar7 + 0x58) = uVar9;
    iVar2 = *(int *)(lVar20 + 0xac);
    *(int *)(pbVar7 + 0xac) = iVar2;
    if (0 < iVar2) {
      lVar20 = 0;
      do {
        if (((*pbVar7 >> 2 & 1) != 0) &&
           ((**(byte **)(*(long *)(pbVar7 + 0x58) + lVar20 * 8) & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar7);
          iVar2 = *(int *)(pbVar7 + 0xac);
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar2);
    }
  }
  pbVar11 = (byte *)func_0x0080e4c8(param_1,pbVar7[3],*(undefined8 *)(lVar25 + 0x10),pbVar7);
  if ((uVar3 == 0) && (*(char *)(lVar25 + 4) != '\0')) {
    uVar16 = 0;
    puVar14 = (undefined8 *)(lVar25 + 0x20);
/* wm:if you paid for this, you were scammed */
    pbVar24 = pbVar11 + 0x20;
    do {
      uVar9 = *puVar14;
      *(undefined8 *)(pbVar24 + 8) = puVar14[1];
      *(undefined8 *)pbVar24 = uVar9;
      if (((5 < *(int *)(pbVar24 + 0xc)) && ((*pbVar11 >> 2 & 1) != 0)) &&
         ((**(byte **)pbVar24 & 3) != 0)) {
        func_0x0081b3dc(param_1,pbVar11);
      }
      pbVar24 = pbVar24 + 0x10;
      uVar16 = uVar16 + 1;
      puVar14 = puVar14 + 2;
    } while (uVar16 < *(byte *)(lVar25 + 4));
  }
  if ((((*pbVar11 >> 2 & 1) != 0) &&
      (((**(byte **)(lVar25 + 0x10) & 3) == 0 ||
       (func_0x0081b3dc(param_1,pbVar11), (*pbVar11 >> 2 & 1) != 0)))) && ((*pbVar7 & 3) != 0)) {
    func_0x0081b3dc(param_1,pbVar11,pbVar7);
  }
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  lVar20 = *(long *)(param_1 + 0x48);
  *(byte **)(lVar20 + -0x10) = pbVar11;
  *(undefined4 *)(lVar20 + -4) = 8;
// watermarked copy - do not remove
  func_0x000790a8(param_1,pbVar21);
  uVar9 = func_0x00791650(param_1);
  func_0x000793a0(param_1,1);
  uVar10 = func_0x00791624(param_1,0xffffffff);
  func_0x007911b0(param_1,1);
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x48);
  *puVar14 = pbVar21;
  *(undefined4 *)((long)puVar14 + 0xc) = 0xf;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  func_0x00793880(param_1,uVar10);
  iVar2 = func_0x00791be4(param_1,0xffffffff);
  if (iVar2 != 7) {
    func_0x00791660(param_1,0xfffffffe);
    func_0x00793bd0(param_1,0,0);
    func_0x007911b0(param_1,1);
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    }
    puVar14 = *(undefined8 **)(param_1 + 0x48);
    *puVar14 = pbVar21;
    *(undefined4 *)((long)puVar14 + 0xc) = 0xf;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    func_0x00791ab0(param_1,0xfffffffe);
    func_0x00794428(param_1,uVar10);
  }
  func_0x00793928(param_1,0xffffffff,uVar5);
  lVar20 = func_0x00790f58(param_1,0xffffffff);
  iVar2 = *(int *)(lVar20 + 0xc);
  func_0x00791660(param_1,0xfffffffe);
  if (iVar2 != 0xf) {
    func_0x007911b0(param_1,1);
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    plVar4 = *(long **)(param_1 + 0x48);
    *plVar4 = lVar22;
    *(undefined4 *)((long)plVar4 + 0xc) = 0xf;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    func_0x00794504(param_1,0xfffffffe,uVar5);
  }
  func_0x00791660(param_1,uVar9);
/* unlicensed copy if this notice is missing */
  *(byte **)(*(long *)(pbVar21 + 0x58) + uVar6 * 8) = pbVar7;
  if (((*pbVar21 >> 2 & 1) != 0) && ((*pbVar7 & 3) != 0)) {
    func_0x0081b3dc(param_1,pbVar21,pbVar7);
  }
  return 1;
}

