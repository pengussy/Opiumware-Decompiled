/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x84f0c:4672f69876
 */

/* WARNING: Removing unreachable block (ram,0x00085e88) */
/* WARNING: Removing unreachable block (ram,0x000864dc) */

void FUN_00084f0c(undefined8 *param_1,undefined1 *param_2,long *param_3,long *param_4,
                 undefined8 param_5,short *param_6)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  code *pcVar12;
/* WM - unlicensed copy if this notice is missing */
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  short *psVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  ulong uVar26;
  long *plVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  char *pcStack_138;
  char *pcStack_130;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
// WM - proprietary - see LICENSE - do not sell
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  int iStack_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
/*  origin: github.com/pengussy  */
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  pbVar8 = (byte *)(*pcRam0000000002064d40)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019be400();
  }
  plVar27 = (long *)0xff51afd7ed558ccd;
  uVar25 = 0xc4ceb9fe1a85ec53;
  uVar26 = 0x9e3779b97f4a7c15;
  puVar28 = (undefined8 *)0x8ebc6af09c88c6e3;
  pcStack_c0 = (char *)(*pcRam0000000002064d28)();
  if (*pcStack_c0 == '\x01') {
    uVar3 = (byte)pcStack_c0[1] ^ 0xe248aeae;
    uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0x3366a2bc;
    pcStack_c0[5] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ 0x6d;
    uVar19 = (((ulong)(byte)pcStack_c0[1] ^ 0x25a5b36411bf3010) << 0x11 | 0x4b4b) +
             0x9e3779b97f4a7c15;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar23 = uVar18 ^ uVar18 >> 0x21;
    uVar3 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar23 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
    pcStack_c0[6] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar23;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar23 = uVar18 ^ uVar18 >> 0x21;
/*  stripping the watermark breaks the license  */
    uVar3 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar23 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
    pcStack_c0[7] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar23;
    uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar19 ^ uVar19 >> 0x21;
    uVar3 = (uint)(byte)pcStack_c0[4] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
    pcStack_c0[8] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar18;
    *pcStack_c0 = '\0';
  }
  pcStack_c0 = pcStack_c0 + 5;
  uVar9 = func_0x0011ab24(&pcStack_c0);
  lVar10 = _strlen();
  if ((long)*(char *)((long)param_6 + 0x17) < 0) {
    if (lVar10 == *(long *)(param_6 + 4)) {
      if (lVar10 == -1) {
        FUN_0001c430();
        goto LAB_000870d4;
      }
      iVar7 = _memcmp(*(undefined8 *)param_6,uVar9);
      if (iVar7 == 0) goto LAB_00085a6c;
    }
LAB_000851d0:
    pbVar8 = (byte *)(*pcRam0000000002064d70)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be43c();
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    pcStack_c8 = (char *)(*pcRam0000000002064d58)();
    if (*pcStack_c8 == '\x01') {
      uVar3 = (byte)pcStack_c8[1] ^ 0x51d16c7f;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0x7c15e97;
      pcStack_c8[5] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ 0xbc;
      uVar19 = (((ulong)(byte)pcStack_c8[1] ^ 0xc8e6efd0feed1dfe) << 0x11 | 0x191cd) +
               0x9e3779b97f4a7c15;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
              (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
      pcStack_c8[6] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
              (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar23 >> 0x17));
      pcStack_c8[7] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar19 ^ uVar19 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
              (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      pcStack_c8[8] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar18;
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 5;
    uVar9 = func_0x0011ab24(&pcStack_c8);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == *(long *)(param_6 + 4)) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_000870d4;
        }
        iVar7 = _memcmp(*(undefined8 *)param_6,uVar9);
        goto joined_r0x000853fc;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x000853fc:
      if (iVar7 == 0) {
        puVar11 = &DAT_00450748;
        goto LAB_00085d04;
      }
    }
    pbVar8 = (byte *)(*pcRam0000000002064da0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be478();
    }
    pcStack_d0 = (char *)(*pcRam0000000002064d88)();
    if (*pcStack_d0 == '\x01') {
      uVar3 = (byte)pcStack_d0[1] ^ 0x44314481;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) + 0x5de9e689 ^ 0x41a885;
      pcStack_d0[5] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) + 0xbe;
      uVar19 = (((ulong)(byte)pcStack_d0[1] ^ 0xde3f36d931fc803a) << 0x11 | 0x1bc7e) +
               0x9e3779b97f4a7c15;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
// if you paid for this, you were scammed
      uVar3 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar23 >> 0x17) ^
              ((uint)(uVar18 >> 0x29) | 1);
      pcStack_d0[6] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar23 >> 0x17) ^
              ((uint)(uVar18 >> 0x29) | 1);
      pcStack_d0[7] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar19 ^ uVar19 >> 0x21;
      uVar3 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar19 >> 0x29) | 1);
      pcStack_d0[8] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar18;
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 5;
    uVar9 = func_0x0011ab24(&pcStack_d0);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == *(long *)(param_6 + 4)) {
        if (lVar10 == -1) {
          FUN_0001c430();
/* wm:if you paid for this, you were scammed */
          goto LAB_000870d4;
        }
        iVar7 = _memcmp(*(undefined8 *)param_6,uVar9);
        goto joined_r0x0008562c;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x0008562c:
      if (iVar7 == 0) {
        puVar11 = &DAT_0045073c;
        goto LAB_00085d04;
      }
    }
    pbVar8 = (byte *)(*pcRam0000000002064dd0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be4b4();
    }
    pcStack_d8 = (char *)(*pcRam0000000002064db8)();
    if (*pcStack_d8 == '\x01') {
      uVar3 = (byte)pcStack_d8[1] ^ 0xb4c79463;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) + 0x6c59af6a;
      pcStack_d8[5] = ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') + 0x17 ^ 0xa0;
      uVar19 = (((ulong)(byte)pcStack_d8[1] ^ 0xd40f2928ad485f71) << 0x11 | 0x1a81e) +
               0x9e3779b97f4a7c15;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
// watermarked copy - do not remove
      uVar3 = (uint)(byte)pcStack_d8[2] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar23 >> 0x17);
      pcStack_d8[6] =
           ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_d8[3] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar23 >> 0x17);
      pcStack_d8[7] =
           ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_d8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar19 ^ uVar19 >> 0x21;
      uVar3 = (uint)(byte)pcStack_d8[4] ^ (uint)uVar18 ^ 0xffffffc3;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar18 >> 0x17);
      pcStack_d8[8] =
           ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') - ((byte)(uVar19 >> 0x29) | 1) ^
           (byte)uVar18;
      *pcStack_d8 = '\0';
    }
    pcStack_d8 = pcStack_d8 + 5;
    uVar9 = func_0x0011ab24(&pcStack_d8);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == *(long *)(param_6 + 4)) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_000870d4;
        }
        iVar7 = _memcmp(*(undefined8 *)param_6,uVar9);
        goto joined_r0x0008585c;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x0008585c:
      if (iVar7 == 0) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        puVar11 = &DAT_0045076c;
        goto LAB_00085d04;
      }
    }
    pbVar8 = (byte *)(*pcRam0000000002064e00)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be4f0();
    }
    pcStack_e0 = (char *)(*pcRam0000000002064de8)();
    if (*pcStack_e0 == '\x01') {
      uVar3 = (byte)pcStack_e0[1] ^ 0x2a31d48a;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) + 0xdddd455;
      pcStack_e0[5] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') + 0x77 ^ 0x49;
      uVar19 = (((ulong)(byte)pcStack_e0[1] ^ 0xd6155d83620c5ad7) << 0x11 | 0x1ac2a) +
               0x9e3779b97f4a7c15;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar23 >> 0x17);
      pcStack_e0[6] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar23 >> 0x17);
      pcStack_e0[7] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar18 >> 0x29) | 1) ^
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
           (byte)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar19 ^ uVar19 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e0[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar18 >> 0x17);
      pcStack_e0[8] =
           ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') - ((byte)(uVar19 >> 0x29) | 1) ^
           (byte)uVar18;
      *pcStack_e0 = '\0';
    }
    pcStack_e0 = pcStack_e0 + 5;
    uVar9 = func_0x0011ab24(&pcStack_e0);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == *(long *)(param_6 + 4)) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_000870d4;
        }
        iVar7 = _memcmp(*(undefined8 *)param_6,uVar9);
        goto joined_r0x00085a98;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x00085a98:
      if (iVar7 == 0) {
        puVar11 = &DAT_00450730;
        goto LAB_00085d04;
      }
    }
/* origin: github.com/pengussy */
    pbVar8 = (byte *)(*pcRam0000000002064e30)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be52c();
    }
    pcStack_e8 = (char *)(*pcRam0000000002064e18)();
    if (*pcStack_e8 == '\x01') {
      uVar3 = (byte)pcStack_e8[1] ^ 0x6d775dcc;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) + 0xdff60cdb ^ 0x5a4803;
      pcStack_e8[5] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - 0xf;
      uVar19 = (((ulong)(byte)pcStack_e8[1] ^ 0x159871b7044afa70) << 0x11 | 0x2b30) +
               0x9e3779b97f4a7c15;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar23 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1)
      ;
      pcStack_e8[6] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar18 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar23 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar23 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar23 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1)
      ;
      pcStack_e8[7] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar23;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
// WM - found on a paste site? it was re-uploaded illegally
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar19 ^ uVar19 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar19 >> 0x29) | 1)
      ;
      pcStack_e8[8] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar18;
      *pcStack_e8 = '\0';
    }
    pcStack_e8 = pcStack_e8 + 5;
    uVar9 = func_0x0011ab24(&pcStack_e8);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == *(long *)(param_6 + 4)) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_000870d4;
        }
        iVar7 = _memcmp(*(undefined8 *)param_6,uVar9);
        goto joined_r0x00085cd4;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x00085cd4:
      if (iVar7 == 0) {
        puVar11 = &DAT_00450790;
        goto LAB_00085d04;
      }
    }
LAB_00086928:
    pbVar8 = (byte *)(*pcRam0000000002064e60)();
/* no support for modified copies */
    if ((*pbVar8 & 1) == 0) {
      func_0x019be568();
    }
    pcStack_f0 = (char *)(*pcRam0000000002064e48)();
    if (*pcStack_f0 == '\x01') {
      uVar19 = ((ulong)puVar28 ^ 0xce1b520c533e94ed ^ ((ulong)puVar28 ^ 0xce1b520c533e94ed) >> 0x21)
               * (long)plVar27;
      uVar25 = (uVar19 ^ uVar19 >> 0x21) * uVar25;
      uVar19 = uVar25 ^ uVar25 >> 0x21;
      bVar4 = pcStack_f0[1];
      cVar6 = func_0x00167078((ulong)bVar4,uVar19);
      pcStack_f0[0x16] = cVar6;
      uVar25 = (uVar25 >> 0x2f | (uVar19 ^ bVar4) << 0x11) + uVar26;
      bVar4 = pcStack_f0[2];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x17] = cVar6;
// thanks for reading - discord.gg/sdkhDjTex
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 1;
      bVar4 = pcStack_f0[3];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x18] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 2;
      bVar4 = pcStack_f0[4];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x19] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 3;
      bVar4 = pcStack_f0[5];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x1a] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 4;
      bVar4 = pcStack_f0[6];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x1b] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 5;
      bVar4 = pcStack_f0[7];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x1c] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 6;
      bVar4 = pcStack_f0[8];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x1d] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 7;
      bVar4 = pcStack_f0[9];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x1e] = cVar6;
/* if you paid for this, you were scammed */
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 8;
      bVar4 = pcStack_f0[10];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x1f] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 9;
      bVar4 = pcStack_f0[0xb];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x20] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 10;
      bVar4 = pcStack_f0[0xc];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x21] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0xb;
      bVar4 = pcStack_f0[0xd];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x22] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0xc;
      bVar4 = pcStack_f0[0xe];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x23] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0xd;
      bVar4 = pcStack_f0[0xf];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x24] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0xe;
      bVar4 = pcStack_f0[0x10];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x25] = cVar6;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0xf;
      bVar4 = pcStack_f0[0x11];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x26] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0x10;
      bVar4 = pcStack_f0[0x12];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x27] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0x11;
      bVar4 = pcStack_f0[0x13];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x28] = cVar6;
      uVar25 = uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0x12;
      bVar4 = pcStack_f0[0x14];
      cVar6 = func_0x00167078((ulong)bVar4,uVar25);
      pcStack_f0[0x29] = cVar6;
      cVar6 = func_0x00167078(pcStack_f0[0x15],
                              uVar26 + (uVar25 >> 0x2f | (uVar25 ^ bVar4) << 0x11) + 0x13);
      pcStack_f0[0x2a] = cVar6;
      *pcStack_f0 = '\0';
/* proprietary - see LICENSE - do not sell */
    }
    pcStack_f0 = pcStack_f0 + 0x16;
    func_0x0011ab24(&pcStack_f0);
    func_0x007a1b5c(param_2,"%s");
  }
  else {
    if ((lVar10 != *(char *)((long)param_6 + 0x17)) || (iVar7 = _memcmp(param_6,uVar9), iVar7 != 0))
    goto LAB_000851d0;
LAB_00085a6c:
    puVar11 = &DAT_00450724;
LAB_00085d04:
    pcVar12 = (code *)func_0x0011ab24(puVar11);
    uVar9 = (*pcVar12)();
    pbVar8 = (byte *)(*pcRam0000000002064e90)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be5a4();
    }
    pcStack_f8 = (char *)(*pcRam0000000002064e78)();
    if (*pcStack_f8 == '\x01') {
      lVar10 = 0;
      uVar26 = 0xab2259e30f932cc2;
      do {
        uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
        uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar25 ^ uVar25 >> 0x21;
        uVar3 = (uint)(byte)pcStack_f8[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_f8[lVar10 + 0xf] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar19;
        uVar26 = lVar10 + -0x61c8864680b583eb +
                 (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_f8[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xe);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 0xf;
    uVar13 = func_0x0011ab24(&pcStack_f8);
    func_0x00084694(param_2,param_4,uVar13);
    if (*(char *)((long)param_6 + 0x17) < '\0') {
      if (*(long *)(param_6 + 4) != 3) goto LAB_00085fc0;
      psVar20 = *(short **)param_6;
LAB_00085e3c:
      bVar5 = *psVar20 == 0x4347 && (char)psVar20[1] == 'M';
      lVar10 = func_0x00084810(param_6);
      if (lVar10 == 0) goto LAB_00085fdc;
LAB_00085e70:
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      func_0x00081c0c(&uStack_90,param_5);
      uStack_a8 = uStack_88;
      uStack_b0 = uStack_90;
      uStack_a0 = uStack_80;
      pbVar8 = (byte *)(*pcRam0000000002064ec0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019be5e0();
      }
      pcStack_100 = (char *)(*pcRam0000000002064ea8)();
      if (*pcStack_100 == '\x01') {
        lVar14 = 0;
        uVar26 = 0x3b54b7f96d70c7ee;
        do {
          uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
          uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar25 ^ uVar25 >> 0x21;
          uVar3 = (uint)(byte)pcStack_100[lVar14 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) -
                  (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_100[lVar14 + 0xf] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar19
/* do not claim this as your own */
          ;
          uVar26 = lVar14 + -0x61c8864680b583eb +
                   (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_100[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0xe);
        *pcStack_100 = '\0';
      }
      pcStack_100 = pcStack_100 + 0xf;
      uVar13 = func_0x0011ab24(&pcStack_100);
      puVar28 = &uStack_b0;
      func_0x00084d84(param_2,&uStack_b0,lVar10,uVar13);
    }
    else {
      psVar20 = param_6;
      if (*(char *)((long)param_6 + 0x17) == '\x03') goto LAB_00085e3c;
LAB_00085fc0:
      bVar5 = false;
      lVar10 = func_0x00084810(param_6);
      if (lVar10 != 0) goto LAB_00085e70;
LAB_00085fdc:
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      puVar28 = (undefined8 *)0x0;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    }
    pcVar12 = (code *)func_0x0011ab24(&SUB_00451f08);
    lVar14 = (*pcVar12)();
    if (lVar14 == 0) {
      pbVar8 = (byte *)(*pcRam0000000002064ef0)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019be784();
      }
      pcStack_138 = (char *)(*pcRam0000000002064ed8)();
      if (*pcStack_138 == '\x01') {
        lVar10 = 0;
        uVar26 = 0x1a73171dee381036;
        do {
          uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
          uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar25 ^ uVar25 >> 0x21;
          uVar3 = (uint)(byte)pcStack_138[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
                  (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_138[lVar10 + 0x21] =
               ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar19;
          uVar26 = lVar10 + -0x61c8864680b583eb +
                   (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_138[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
/* keep the notice, keep the source honest */
        *pcStack_138 = '\0';
      }
      pcStack_138 = pcStack_138 + 0x21;
      func_0x0011ab24(&pcStack_138);
      func_0x007a1b5c(param_2,"%s");
      goto LAB_000870d4;
    }
    uVar26 = (ulong)*(char *)((long)param_3 + 0x17);
    if ((long)uVar26 < 0) {
      plVar27 = (long *)*param_3;
      uVar26 = param_3[1];
      if (bVar5) goto LAB_00086018;
    }
    else {
      plVar27 = param_3;
      if (bVar5) {
LAB_00086018:
        if (uVar26 < 0x10) {
          pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
          (*pcVar12)(lVar14);
          pbVar8 = (byte *)(*pcRam0000000002064f20)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019be748();
          }
          pcStack_130 = (char *)(*pcRam0000000002064f08)();
          if (*pcStack_130 == '\x01') {
            lVar10 = 0;
            uVar26 = 0xfcc3953e118f492b;
            do {
              uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar25 ^ uVar25 >> 0x21;
              uVar3 = (uint)(byte)pcStack_130[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                      (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
              pcStack_130[lVar10 + 0x34] =
                   ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar19;
              uVar26 = lVar10 + -0x61c8864680b583eb +
                       (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_130[lVar10 + 1]) << 0x11);
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0x33);
            *pcStack_130 = '\0';
          }
          pcStack_130 = pcStack_130 + 0x34;
          func_0x0011ab24(&pcStack_130);
          func_0x007a1b5c(param_2,"%s");
          goto LAB_000870d4;
        }
        uVar26 = uVar26 - 0x10;
        pcVar12 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
        plVar2 = (long *)*param_3;
        if (-1 < *(char *)((long)param_3 + 0x17)) {
          plVar2 = param_3;
        }
        (*pcVar12)(&uStack_90,(long)plVar2 + uVar26,0x10);
      }
    }
/* WM - reversing this took months of machine time */
    lVar1 = uVar26 + 0x20;
    if (lVar1 == 0) {
      puVar16 = (undefined1 *)0x0;
      puVar15 = (undefined1 *)0x0;
LAB_00086088:
      iStack_b4 = 0;
      iStack_b8 = 0;
      pcVar12 = (code *)func_0x0011ab24(&SUB_019e9e54);
      if (bVar5) {
        iVar7 = (*pcVar12)(lVar14,uVar9,0,0,0);
        if (iVar7 == 1) {
          pcVar12 = (code *)func_0x0011ab24(&SUB_00452c6c);
          iVar7 = (*pcVar12)(lVar14,9,lVar10,0);
          if (iVar7 == 1) {
            pcVar12 = (code *)func_0x0011ab24(&SUB_019e9e54);
            plVar2 = (long *)*param_4;
            if (-1 < *(char *)((long)param_4 + 0x17)) {
              plVar2 = param_4;
            }
            iVar7 = (*pcVar12)(lVar14,0,0,plVar2,puVar28);
            if (iVar7 == 1) goto LAB_000862b4;
          }
        }
        pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
        (*pcVar12)(lVar14);
        pbVar8 = (byte *)(*pcRam0000000002064f50)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019be658();
        }
        pcStack_110 = (char *)(*pcRam0000000002064f38)();
        if (*pcStack_110 == '\x01') {
          lVar10 = 0;
          uVar26 = 0xbbade61bef95d91;
          do {
            uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
            uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar25 ^ uVar25 >> 0x21;
            uVar3 = (uint)(byte)pcStack_110[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
/* WM - more drops soon - github.com/pengussy */
            uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar19 >> 0x17);
            pcStack_110[lVar10 + 0x21] =
                 ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar25 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar26 = lVar10 + -0x61c8864680b583eb +
                     (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_110[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x20);
          *pcStack_110 = '\0';
        }
        pcStack_110 = pcStack_110 + 0x21;
        func_0x0011ab24(&pcStack_110);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_000870d4;
      }
      plVar2 = (long *)*param_4;
      if (-1 < *(char *)((long)param_4 + 0x17)) {
        plVar2 = param_4;
      }
      iVar7 = (*pcVar12)(lVar14,uVar9,0,plVar2,puVar28);
      if (iVar7 != 1) {
        pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
        (*pcVar12)(lVar14);
/*  more drops soon - github.com/pengussy  */
        pbVar8 = (byte *)(*pcRam0000000002064f80)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019be61c();
        }
        pcStack_108 = (char *)(*pcRam0000000002064f68)();
        if (*pcStack_108 == '\x01') {
          lVar10 = 0;
          uVar26 = 0xc519a6929f23a84e;
          do {
            uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
            uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar25 ^ uVar25 >> 0x21;
            uVar3 = (uint)(byte)pcStack_108[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar19 >> 0x17);
            pcStack_108[lVar10 + 0x21] =
                 ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar25 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar26 = lVar10 + -0x61c8864680b583eb +
                     (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_108[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x20);
          *pcStack_108 = '\0';
        }
        pcStack_108 = pcStack_108 + 0x21;
        func_0x0011ab24(&pcStack_108);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_000870d4;
      }
LAB_000862b4:
      pcVar12 = (code *)func_0x0011ab24(&SUB_019e9cd0);
      iVar7 = (*pcVar12)(lVar14,puVar15,&iStack_b4,plVar27,uVar26);
      if (iVar7 != 1) {
        pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
        (*pcVar12)(lVar14);
/* WM - proprietary - see LICENSE - do not sell */
        pbVar8 = (byte *)(*pcRam0000000002064fb0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019be694();
        }
        pcStack_118 = (char *)(*pcRam0000000002064f98)();
        if (*pcStack_118 == '\x01') {
          lVar10 = 0;
          uVar26 = 0x1abbf63b8dec67b6;
          do {
            uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
            uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar25 ^ uVar25 >> 0x21;
            uVar3 = (uint)(byte)pcStack_118[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                    (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_118[lVar10 + 0x1a] =
/* more drops soon - github.com/pengussy - github.com/pengussy */
                 ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') ^ (byte)uVar19;
            uVar26 = lVar10 + -0x61c8864680b583eb +
                     (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_118[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x19);
          *pcStack_118 = '\0';
        }
        pcStack_118 = pcStack_118 + 0x1a;
        func_0x0011ab24(&pcStack_118);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_000870d4;
      }
      if (bVar5) {
        pcVar12 = (code *)func_0x0011ab24(&SUB_00452c6c);
        iVar7 = (*pcVar12)(lVar14,0x11,0x10,&uStack_90);
        if (iVar7 != 1) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
          pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
          (*pcVar12)(lVar14);
          pbVar8 = (byte *)(*pcRam0000000002064fe0)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019be6d0();
          }
          pcStack_120 = (char *)(*pcRam0000000002064fc8)();
          if (*pcStack_120 == '\x01') {
            lVar10 = 0;
            uVar26 = 0xf64a2968da92e214;
            do {
              uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
              uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
              uVar19 = uVar25 ^ uVar25 >> 0x21;
              uVar3 = (uint)(byte)pcStack_120[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                      (((uint)(uVar25 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
              pcStack_120[lVar10 + 0x26] =
                   ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar19;
              uVar26 = lVar10 + -0x61c8864680b583eb +
                       (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_120[lVar10 + 1]) << 0x11);
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0x25);
            *pcStack_120 = '\0';
          }
          pcStack_120 = pcStack_120 + 0x26;
          func_0x0011ab24(&pcStack_120);
          func_0x007a1b5c(param_2,"%s");
/* wm:watermarked copy - do not remove */
          goto LAB_000870d4;
        }
      }
      pcVar12 = (code *)func_0x0011ab24(&SUB_0045283c);
      iVar7 = (*pcVar12)(lVar14,puVar15 + iStack_b4,&iStack_b8);
      pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
      if (iVar7 != 1) {
        (*pcVar12)(lVar14);
        pbVar8 = (byte *)(*pcRam0000000002065010)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019be70c();
        }
        pcStack_128 = (char *)(*pcRam0000000002064ff8)();
        if (*pcStack_128 == '\x01') {
          lVar10 = 0;
          uVar26 = 0x6917eecf6f840b4;
          do {
            uVar25 = (uVar26 ^ uVar26 >> 0x21) * -0xae502812aa7333;
            uVar25 = (uVar25 ^ uVar25 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar25 ^ uVar25 >> 0x21;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
            uVar3 = (uint)(byte)pcStack_128[lVar10 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar19 >> 0x17);
            pcStack_128[lVar10 + 0x3b] =
                 ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') - ((byte)(uVar25 >> 0x29) | 1) ^
                 (byte)uVar19;
            uVar26 = lVar10 + -0x61c8864680b583eb +
                     (uVar26 >> 0x2f | (uVar26 ^ (byte)pcStack_128[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x3a);
          *pcStack_128 = '\0';
        }
        pcStack_128 = pcStack_128 + 0x3b;
        func_0x0011ab24(&pcStack_128);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_000870d4;
      }
      (*pcVar12)(lVar14);
      uVar25 = (long)iStack_b8 + (long)iStack_b4;
      uVar19 = (long)puVar16 - (long)puVar15;
      if (uVar25 < uVar19 || uVar25 - uVar19 == 0) {
        param_2 = puVar15 + uVar25;
        if (uVar25 >= uVar19) {
          param_2 = puVar16;
/* wm:more drops soon - github.com/pengussy */
        }
        uVar25 = (long)param_2 - (long)puVar15;
        puVar16 = puVar15;
      }
      else {
        if ((int)uVar25 < 0) {
          FUN_0000abb4();
          goto LAB_000870d4;
        }
        uVar18 = uVar19 * 2;
        if (uVar19 * 2 <= uVar25) {
          uVar18 = uVar25;
        }
        if (0x3ffffffffffffffe < uVar19) {
          uVar18 = 0x7fffffffffffffff;
        }
        puVar16 = (undefined1 *)__Znwm(uVar18);
        param_2 = puVar16 + uVar25;
        _bzero(puVar16 + uVar19,uVar25 - uVar19);
        _memcpy(puVar16,puVar15,uVar19);
        if (puVar15 != (undefined1 *)0x0) {
          __ZdlPv(puVar15);
        }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        uVar25 = (long)param_2 - (long)puVar16;
      }
      if (0x7ffffffffffffff6 < uVar25) {
        FUN_0000aa50();
        goto LAB_000870d4;
      }
      if (uVar25 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar25;
        puVar17 = param_1;
        if (puVar16 == param_2) goto LAB_000864a4;
LAB_00086420:
        if ((uVar25 < 0x40) || ((ulong)((long)puVar17 - (long)puVar16) < 0x40)) {
          puVar15 = puVar16;
        }
        else {
          uVar18 = uVar25 & 0x7fffffffffffffc0;
          puVar21 = (undefined8 *)((long)puVar17 + uVar18);
          puVar17 = puVar17 + 4;
          puVar24 = (undefined8 *)(puVar16 + 0x20);
          uVar19 = uVar18;
          do {
            uVar9 = puVar24[-4];
            uVar29 = puVar24[-1];
            uVar13 = puVar24[-2];
            uVar31 = puVar24[1];
            uVar30 = *puVar24;
            uVar33 = puVar24[3];
            uVar32 = puVar24[2];
            puVar17[-3] = puVar24[-3];
            puVar17[-4] = uVar9;
            puVar17[-1] = uVar29;
            puVar17[-2] = uVar13;
            puVar17[1] = uVar31;
            *puVar17 = uVar30;
            puVar17[3] = uVar33;
            puVar17[2] = uVar32;
            uVar19 = uVar19 - 0x40;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
            puVar17 = puVar17 + 8;
            puVar24 = puVar24 + 8;
          } while (uVar19 != 0);
          puVar17 = puVar21;
          puVar15 = puVar16 + uVar18;
          if (uVar25 == uVar18) goto LAB_000864c4;
        }
        do {
          puVar22 = puVar15 + 1;
          *(undefined1 *)puVar17 = *puVar15;
          puVar21 = (undefined8 *)((long)puVar17 + 1);
          puVar17 = (undefined8 *)((long)puVar17 + 1);
          puVar15 = puVar22;
        } while (puVar22 != param_2);
      }
      else {
        uVar19 = (uVar25 & 0x7ffffffffffffff8) + 8;
// chat: discord.gg/sdkhDjTex
        uVar18 = 0x19;
        if (uVar19 != 0x18) {
          uVar18 = uVar19;
        }
        puVar17 = (undefined8 *)__Znwm(uVar18);
        *param_1 = puVar17;
        param_1[1] = uVar25;
        param_1[2] = uVar18 | 0x8000000000000000;
        if (puVar16 != param_2) goto LAB_00086420;
LAB_000864a4:
        puVar21 = puVar17;
      }
LAB_000864c4:
      *(undefined1 *)puVar21 = 0;
      if (puVar16 != (undefined1 *)0x0) {
        __ZdlPv(puVar16);
      }
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
        return;
      }
      ___stack_chk_fail();
      goto LAB_00086928;
/*  thanks for reading - discord.gg/sdkhDjTex  */
    }
    if (-1 < lVar1) {
      puVar15 = (undefined1 *)__Znwm(lVar1);
      puVar16 = puVar15 + lVar1;
      _bzero(puVar15,lVar1);
      goto LAB_00086088;
    }
  }
  FUN_0000abb4();
LAB_000870d4:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x870d8);
  (*pcVar12)();
}

