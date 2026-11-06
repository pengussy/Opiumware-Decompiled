/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x81f44:8aa14f3763
 */

/* WARNING: Removing unreachable block (ram,0x00083460) */

void FUN_00081f44(undefined8 *param_1,undefined8 *****param_2,long *param_3,long *param_4,
                 undefined8 *****param_5,undefined8 *param_6)

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
  undefined8 uVar13;
  long lVar14;
  undefined8 *****pppppuVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
/* donate: donate/README.md */
  undefined8 *****pppppuVar21;
  ulong uVar22;
  undefined8 *****pppppuVar23;
  undefined8 *****pppppuVar24;
  undefined8 ****ppppuVar25;
  undefined8 ****ppppuVar26;
  undefined8 ****ppppuVar27;
  undefined8 ****ppppuVar28;
  undefined8 ****ppppuVar29;
  undefined8 ****ppppuVar30;
  undefined8 ****ppppuVar31;
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  undefined8 uStack_a0;
  undefined8 *****pppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 *****pppppuStack_88;
  undefined1 auStack_80 [16];
  long alStack_70 [2];
  
  alStack_70[0] = *(long *)PTR____stack_chk_guard_01f20200;
  pbVar8 = (byte *)(*pcRam0000000002064950)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019bdf14();
  }
  pppppuVar23 = (undefined8 *****)0xc4ceb9fe1a85ec53;
  pcStack_a8 = (char *)(*pcRam0000000002064938)();
  if (*pcStack_a8 == '\x01') {
    uVar3 = (byte)pcStack_a8[1] ^ 0x15bbcd79;
    uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) + 0xdccb302c;
    pcStack_a8[5] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) + 0x33 ^ 0xba;
    uVar18 = (((ulong)(byte)pcStack_a8[1] ^ 0x9bedfe595a01211e) << 0x11 | 0x137db) +
             0x9e3779b97f4a7c15;
    uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar17 ^ uVar17 >> 0x21;
    uVar3 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar22 >> 0x17);
// WM - stripping the watermark breaks the license
    pcStack_a8[6] =
         ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar22;
    uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar22 = uVar17 ^ uVar17 >> 0x21;
    uVar3 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar22 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar22 >> 0x17);
    pcStack_a8[7] =
         ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar22;
    uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
    uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar18 ^ uVar18 >> 0x21;
    uVar3 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar17 >> 0x17);
    pcStack_a8[8] =
         ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar18 >> 0x29) | 1) ^
         (byte)uVar17;
    *pcStack_a8 = '\0';
  }
  pcStack_a8 = pcStack_a8 + 5;
  uVar9 = func_0x0011ab24(&pcStack_a8);
  lVar10 = _strlen();
  if ((long)*(char *)((long)param_6 + 0x17) < 0) {
    if (lVar10 == param_6[1]) {
      if (lVar10 == -1) {
        FUN_0001c430();
        goto LAB_00084594;
      }
      iVar7 = _memcmp(*param_6,uVar9);
      if (iVar7 == 0) goto LAB_00082b68;
    }
LAB_0008220c:
    pbVar8 = (byte *)(*pcRam0000000002064980)();
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    if ((*pbVar8 & 1) == 0) {
      func_0x019bdf50();
    }
    pcStack_b0 = (char *)(*pcRam0000000002064968)();
    if (*pcStack_b0 == '\x01') {
      uVar3 = (byte)pcStack_b0[1] ^ 0x4b145c67;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0xa2c22e97;
      pcStack_b0[5] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') + 0xb1 ^ 0xa4;
      uVar18 = (((ulong)(byte)pcStack_b0[1] ^ 0x703715a700263d40) << 0x11 | 0xe06e) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar22 >> 0x17);
      pcStack_b0[6] =
           ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar22 >> 0x17);
      pcStack_b0[7] =
           ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar22;
/*  proprietary - see LICENSE - do not sell  */
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar17 >> 0x17);
      pcStack_b0[8] =
           ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar17;
      *pcStack_b0 = '\0';
    }
    pcStack_b0 = pcStack_b0 + 5;
    uVar9 = func_0x0011ab24(&pcStack_b0);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == param_6[1]) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_00084594;
        }
        iVar7 = _memcmp(*param_6,uVar9);
        goto joined_r0x00082468;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x00082468:
      if (iVar7 == 0) {
        puVar11 = &DAT_00450748;
        goto LAB_00082e30;
      }
    }
    pbVar8 = (byte *)(*pcRam00000000020649b0)();
// WM - proprietary - see LICENSE - do not sell
    if ((*pbVar8 & 1) == 0) {
      func_0x019bdf8c();
    }
    pcStack_b8 = (char *)(*pcRam0000000002064998)();
    if (*pcStack_b8 == '\x01') {
      uVar3 = (byte)pcStack_b8[1] ^ 0xccd5e360;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0x626e819a;
      pcStack_b8[5] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) + 0x9b ^ 0xa3;
      uVar18 = (((ulong)(byte)pcStack_b8[1] ^ 0x6e1bd3858e61cdec) << 0x11 | 0xdc37) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar22 >> 0x17);
      pcStack_b8[6] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_b8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar22 >> 0x17);
      pcStack_b8[7] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_b8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar17 >> 0x17);
      pcStack_b8[8] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar18 >> 0x29) | 1) ^
/* wm:if you paid for this, you were scammed */
           (byte)uVar17;
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 5;
    uVar9 = func_0x0011ab24(&pcStack_b8);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == param_6[1]) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_00084594;
        }
        iVar7 = _memcmp(*param_6,uVar9);
        goto joined_r0x000826c8;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x000826c8:
      if (iVar7 == 0) {
        puVar11 = &DAT_0045073c;
        goto LAB_00082e30;
      }
    }
    pbVar8 = (byte *)(*pcRam00000000020649e0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bdfc8();
    }
/* WM - no support for modified copies */
    pcStack_c0 = (char *)(*pcRam00000000020649c8)();
    if (*pcStack_c0 == '\x01') {
      uVar3 = (byte)pcStack_c0[1] ^ 0xc95b01be;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) + 0x9bf16993 ^ 0x6f5903;
      pcStack_c0[5] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) + 0x83;
      uVar18 = (((ulong)(byte)pcStack_c0[1] ^ 0x318b81c84448e88a) << 0x11 | 0x6317) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1)
      ;
      pcStack_c0[6] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1)
      ;
/*  no support for modified copies  */
      pcStack_c0[7] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_c0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c0[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar17 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1)
      ;
      pcStack_c0[8] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar17;
      *pcStack_c0 = '\0';
    }
    pcStack_c0 = pcStack_c0 + 5;
    uVar9 = func_0x0011ab24(&pcStack_c0);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == param_6[1]) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_00084594;
        }
        iVar7 = _memcmp(*param_6,uVar9);
// WM - watermarked copy - do not remove
        goto joined_r0x00082928;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x00082928:
      if (iVar7 == 0) {
        puVar11 = &DAT_0045076c;
        goto LAB_00082e30;
      }
    }
    pbVar8 = (byte *)(*pcRam0000000002064a10)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be004();
    }
    pcStack_c8 = (char *)(*pcRam00000000020649f8)();
    if (*pcStack_c8 == '\x01') {
      uVar3 = (byte)pcStack_c8[1] ^ 0x9ce557fd;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0xd1feeb3a;
      pcStack_c8[5] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) + 0x7f ^ 0x3e;
      uVar18 = (((ulong)(byte)pcStack_c8[1] ^ 0x4671e18621d2fe82) << 0x11 | 0x8ce3) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar22 >> 0x17);
      pcStack_c8[6] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar22 >> 0x17);
      pcStack_c8[7] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar17 >> 0x17);
      pcStack_c8[8] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar17;
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 5;
    uVar9 = func_0x0011ab24(&pcStack_c8);
    lVar10 = _strlen();
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == param_6[1]) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_00084594;
        }
        iVar7 = _memcmp(*param_6,uVar9);
        goto joined_r0x00082b94;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x00082b94:
      if (iVar7 == 0) {
        puVar11 = &DAT_00450730;
        goto LAB_00082e30;
      }
    }
    pbVar8 = (byte *)(*pcRam0000000002064a40)();
/* watermarked copy - do not remove - github.com/pengussy */
    if ((*pbVar8 & 1) == 0) {
      func_0x019be040();
    }
    pcStack_d0 = (char *)(*pcRam0000000002064a28)();
    if (*pcStack_d0 == '\x01') {
      uVar3 = (byte)pcStack_d0[1] ^ 0xe138cb9e;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0x72b48fc3 ^ 0x78e353;
      pcStack_d0[5] = ((byte)(uVar3 >> 6) & 3 | (byte)(uVar3 << 2)) + 0xa3;
      uVar18 = (((ulong)(byte)pcStack_d0[1] ^ 0xd39f08d815b39bf1) << 0x11 | 0x1a73e) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
      pcStack_d0[6] = ((byte)(uVar3 >> 6) & 3 | (byte)(uVar3 << 2)) - (char)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar22 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
/* proprietary - see LICENSE - do not sell */
      pcStack_d0[7] = ((byte)(uVar3 >> 6) & 3 | (byte)(uVar3 << 2)) - (char)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar17 >> 0x17) ^ ((uint)(uVar18 >> 0x29) | 1);
      pcStack_d0[8] = ((byte)(uVar3 >> 6) & 3 | (byte)(uVar3 << 2)) - (char)uVar17;
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 5;
    uVar9 = func_0x0011ab24(&pcStack_d0);
    lVar10 = _strlen();
    if ((long)*(char *)((long)param_6 + 0x17) < 0) {
      if (lVar10 == param_6[1]) {
        if (lVar10 == -1) {
          FUN_0001c430();
          goto LAB_00084594;
        }
        iVar7 = _memcmp(*param_6,uVar9);
        goto joined_r0x00082e00;
      }
    }
    else if (lVar10 == *(char *)((long)param_6 + 0x17)) {
      iVar7 = _memcmp(param_6,uVar9);
joined_r0x00082e00:
      if (iVar7 == 0) {
        puVar11 = &DAT_00450790;
        goto LAB_00082e30;
      }
    }
LAB_00083dc4:
    pbVar8 = (byte *)(*pcRam0000000002064a70)();
// WM - keep the notice, keep the source honest
    if ((*pbVar8 & 1) == 0) {
      func_0x019be07c();
    }
    pcStack_d8 = (char *)(*pcRam0000000002064a58)();
    if (*pcStack_d8 == '\x01') {
      uVar18 = (long)pppppuVar23 * -0x349265f212e7dd9b;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      bVar4 = pcStack_d8[1];
      cVar6 = func_0x00168368((ulong)bVar4,uVar17);
      pcStack_d8[0x16] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar17 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c15;
      bVar4 = pcStack_d8[2];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x17] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c16;
      bVar4 = pcStack_d8[3];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x18] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c17;
      bVar4 = pcStack_d8[4];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x19] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c18;
      bVar4 = pcStack_d8[5];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x1a] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c19;
      bVar4 = pcStack_d8[6];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x1b] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1a;
      bVar4 = pcStack_d8[7];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x1c] = cVar6;
/* found on a paste site? it was re-uploaded illegally */
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1b;
      bVar4 = pcStack_d8[8];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x1d] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1c;
      bVar4 = pcStack_d8[9];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x1e] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1d;
      bVar4 = pcStack_d8[10];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x1f] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1e;
      bVar4 = pcStack_d8[0xb];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x20] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1f;
      bVar4 = pcStack_d8[0xc];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x21] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c20;
      bVar4 = pcStack_d8[0xd];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x22] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c21;
      bVar4 = pcStack_d8[0xe];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x23] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c22;
      bVar4 = pcStack_d8[0xf];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x24] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c23;
      bVar4 = pcStack_d8[0x10];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x25] = cVar6;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c24;
      bVar4 = pcStack_d8[0x11];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x26] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c25;
      bVar4 = pcStack_d8[0x12];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x27] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c26;
      bVar4 = pcStack_d8[0x13];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x28] = cVar6;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c27;
      bVar4 = pcStack_d8[0x14];
      cVar6 = func_0x00168368((ulong)bVar4,uVar18);
      pcStack_d8[0x29] = cVar6;
      cVar6 = func_0x00168368(pcStack_d8[0x15],
                              (uVar18 >> 0x2f | (uVar18 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c28);
      pcStack_d8[0x2a] = cVar6;
/* keep the notice, keep the source honest */
      *pcStack_d8 = '\0';
    }
    pcStack_d8 = pcStack_d8 + 0x16;
    func_0x0011ab24(&pcStack_d8);
    func_0x007a1b5c(param_2,"%s");
LAB_00084168:
    FUN_0000abb4();
  }
  else {
    if ((lVar10 != *(char *)((long)param_6 + 0x17)) || (iVar7 = _memcmp(param_6,uVar9), iVar7 != 0))
    goto LAB_0008220c;
LAB_00082b68:
    puVar11 = &DAT_00450724;
LAB_00082e30:
    pcVar12 = (code *)func_0x0011ab24(puVar11);
    uVar9 = (*pcVar12)();
    pbVar8 = (byte *)(*pcRam0000000002064ad0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be0b8();
    }
    pcStack_e0 = (char *)(*pcRam0000000002064ab8)();
    if (*pcStack_e0 == '\x01') {
      lVar10 = 0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      uVar18 = 0x94a5aaf09663542b;
      do {
        uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar17 ^ uVar17 >> 0x21;
        uVar3 = (uint)(byte)pcStack_e0[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
        pcStack_e0[lVar10 + 0xf] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) ^ (byte)uVar22;
        uVar18 = lVar10 + -0x61c8864680b583eb +
                 (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_e0[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0xe);
      *pcStack_e0 = '\0';
    }
    pcStack_e0 = pcStack_e0 + 0xf;
    uVar13 = func_0x0011ab24(&pcStack_e0);
    func_0x00084694(param_2,param_4,uVar13);
    pbVar8 = (byte *)(*pcRam0000000002064b00)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019be0f4();
    }
    pcStack_e8 = (char *)(*pcRam0000000002064ae8)();
    if (*pcStack_e8 == '\x01') {
      uVar3 = (byte)pcStack_e8[1] ^ 0xe615bd16;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) + 0x515f7fcd;
      pcStack_e8[5] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) + 0x57 ^ 0xd5;
      uVar18 = (((ulong)(byte)pcStack_e8[1] ^ 0x3a8dea8d6ac6b64e) << 0x11 | 0x751b) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar22 >> 0x17);
      pcStack_e8[6] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
/* no support for modified copies - github.com/pengussy */
           (byte)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar22 = uVar17 ^ uVar17 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar22 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar22 >> 0x17);
      pcStack_e8[7] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar22;
      uVar18 = (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
      uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar18 ^ uVar18 >> 0x21;
      uVar3 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar17 >> 0x17);
      pcStack_e8[8] =
           ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar18 >> 0x29) | 1) ^
           (byte)uVar17;
      *pcStack_e8 = '\0';
    }
    pcStack_e8 = pcStack_e8 + 5;
    uVar13 = func_0x0011ab24(&pcStack_e8);
    lVar10 = _strlen();
    if (-1 < (long)*(char *)((long)param_6 + 0x17)) {
// WM - unlicensed copy if this notice is missing
      puVar16 = param_6;
      if (lVar10 == *(char *)((long)param_6 + 0x17)) goto LAB_000831b8;
LAB_000831f4:
      bVar5 = false;
      lVar10 = func_0x00084810(param_6);
      if (lVar10 == 0) goto LAB_000831dc;
LAB_00083208:
      if (-1 < lVar10) {
        lVar14 = __Znwm(lVar10);
        _bzero(lVar14,lVar10);
        ppppuVar25 = param_5[1];
        if (-1 < (char)*(byte *)((long)param_5 + 0x17)) {
          ppppuVar25 = (undefined8 ****)(ulong)*(byte *)((long)param_5 + 0x17);
        }
        if (ppppuVar25 == (undefined8 ****)0x0) {
          pcVar12 = (code *)func_0x0011ab24(&DAT_004b2650);
          iVar7 = (*pcVar12)(lVar14,lVar10);
          if (iVar7 != 1) {
            pbVar8 = (byte *)(*pcRam0000000002064b90)();
            if ((*pbVar8 & 1) == 0) {
              func_0x019be16c();
            }
            pcStack_f8 = (char *)(*pcRam0000000002064b78)();
            if (*pcStack_f8 == '\x01') {
              lVar10 = 0;
              uVar18 = 0x508c517c7452f2d9;
              do {
                uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar22 = uVar17 ^ uVar17 >> 0x21;
                uVar3 = (uint)(byte)pcStack_f8[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
                uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                        (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
                pcStack_f8[lVar10 + 0x17] =
                     ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar22;
                uVar18 = lVar10 + -0x61c8864680b583eb +
                         (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_f8[lVar10 + 1]) << 0x11);
                lVar10 = lVar10 + 1;
              } while (lVar10 != 0x16);
              *pcStack_f8 = '\0';
            }
            pcStack_f8 = pcStack_f8 + 0x17;
            func_0x0011ab24(&pcStack_f8);
            func_0x007a1b5c(param_2,"%s");
            goto LAB_00084594;
          }
          func_0x0012851c(param_5,lVar14,lVar10);
        }
        else {
          func_0x00081c0c(&pppppuStack_98,param_5);
          pbVar8 = (byte *)(*pcRam0000000002064bf0)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019be130();
          }
          pcStack_f0 = (char *)(*pcRam0000000002064bd8)();
          if (*pcStack_f0 == '\x01') {
            lVar19 = 0;
            uVar18 = 0xb8f88475157e366c;
            do {
              uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar17 ^ uVar17 >> 0x21;
              uVar3 = (uint)(byte)pcStack_f0[lVar19 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar17 >> 0x29) | 1);
/* wm:reversing this took months of machine time */
              pcStack_f0[lVar19 + 0xf] =
                   ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar22;
              uVar18 = lVar19 + -0x61c8864680b583eb +
                       (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_f0[lVar19 + 1]) << 0x11);
              lVar19 = lVar19 + 1;
            } while (lVar19 != 0xe);
            *pcStack_f0 = '\0';
          }
          pcStack_f0 = pcStack_f0 + 0xf;
          uVar13 = func_0x0011ab24(&pcStack_f0);
          func_0x00084d84(param_2,&pppppuStack_98,lVar10,uVar13);
          pcVar12 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
          (*pcVar12)(lVar14,&pppppuStack_98,lVar10);
          if ((undefined8 ******)param_5 != &pppppuStack_98) {
            if (*(char *)((long)param_5 + 0x17) < '\0') {
              pppppuVar23 = pppppuStack_90;
              pppppuVar24 = pppppuStack_98;
              if (-1 < (long)pppppuStack_88) {
                pppppuVar23 = (undefined8 *****)((ulong)pppppuStack_88 >> 0x38);
                pppppuVar24 = &pppppuStack_98;
              }
              func_0x001286c0(param_5,pppppuVar24,pppppuVar23);
            }
            else if ((long)pppppuStack_88 < 0) {
              func_0x001287e0(param_5,pppppuStack_98,pppppuStack_90);
            }
            else {
              param_5[1] = pppppuStack_90;
              *param_5 = pppppuStack_98;
              param_5[2] = pppppuStack_88;
            }
          }
        }
        goto LAB_00083468;
      }
      goto LAB_00084168;
    }
/* stripping the watermark breaks the license - github.com/pengussy */
    if (lVar10 != param_6[1]) goto LAB_000831f4;
    if (lVar10 == -1) {
      FUN_0001c430();
      goto LAB_00084594;
    }
    puVar16 = (undefined8 *)*param_6;
LAB_000831b8:
    iVar7 = _memcmp(puVar16,uVar13);
    bVar5 = iVar7 == 0;
    lVar10 = func_0x00084810(param_6);
    if (lVar10 != 0) goto LAB_00083208;
LAB_000831dc:
    if (*(char *)((long)param_5 + 0x17) < '\0') {
      lVar14 = 0;
      *(undefined1 *)*param_5 = 0;
      param_5[1] = (undefined8 ****)0x0;
    }
    else {
      lVar14 = 0;
      *(undefined1 *)param_5 = 0;
      *(undefined1 *)((long)param_5 + 0x17) = 0;
    }
LAB_00083468:
    pcVar12 = (code *)func_0x0011ab24(&SUB_00451f08);
    lVar19 = (*pcVar12)();
/* origin: github.com/pengussy */
    if (lVar19 == 0) {
      pbVar8 = (byte *)(*pcRam0000000002064c20)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019be2d4();
      }
      pcStack_128 = (char *)(*pcRam0000000002064c08)();
      if (*pcStack_128 == '\x01') {
        lVar10 = 0;
        uVar18 = 0xc8ad3760c565fe36;
        do {
          uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar22 = uVar17 ^ uVar17 >> 0x21;
          uVar3 = (uint)(byte)pcStack_128[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
          pcStack_128[lVar10 + 0x21] =
               ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar22;
          uVar18 = lVar10 + -0x61c8864680b583eb +
                   (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_128[lVar10 + 1]) << 0x11);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x20);
        *pcStack_128 = '\0';
      }
      pcStack_128 = pcStack_128 + 0x21;
      func_0x0011ab24(&pcStack_128);
      func_0x007a1b5c(param_2,"%s");
      goto LAB_00084594;
    }
    uVar18 = param_3[1];
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar18 = (ulong)*(byte *)((long)param_3 + 0x17);
    }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    pppppuStack_90 = (undefined8 *****)0x0;
    pppppuStack_88 = (undefined8 *****)0x0;
    pppppuStack_98 = (undefined8 *****)0x0;
    lVar1 = uVar18 + 0x20;
    if (lVar1 == 0) {
      pppppuVar23 = (undefined8 *****)0x0;
LAB_000834dc:
      pppppuVar24 = pppppuStack_90;
      uStack_a0 = 0;
      pcVar12 = (code *)func_0x0011ab24(&SUB_019e9e3c);
      if (bVar5) {
        iVar7 = (*pcVar12)(lVar19,uVar9,0,0,0);
        if (iVar7 == 1) {
          pcVar12 = (code *)func_0x0011ab24(&SUB_00452c6c);
          iVar7 = (*pcVar12)(lVar19,9,lVar10,0);
          if (iVar7 == 1) {
            pcVar12 = (code *)func_0x0011ab24(&SUB_019e9e3c);
            plVar2 = (long *)*param_4;
            if (-1 < *(char *)((long)param_4 + 0x17)) {
              plVar2 = param_4;
            }
            iVar7 = (*pcVar12)(lVar19,0,0,plVar2,lVar14);
            if (iVar7 == 1) goto LAB_00083700;
          }
        }
        pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
        (*pcVar12)(lVar19);
        pbVar8 = (byte *)(*pcRam0000000002064c50)();
        if ((*pbVar8 & 1) == 0) {
/*  watermarked copy - do not remove  */
          func_0x019be1e4();
        }
        pcStack_108 = (char *)(*pcRam0000000002064c38)();
        if (*pcStack_108 == '\x01') {
          lVar10 = 0;
          uVar18 = 0x541e078f5ba5e258;
          do {
            uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar17 ^ uVar17 >> 0x21;
            uVar3 = (uint)(byte)pcStack_108[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
            pcStack_108[lVar10 + 0x21] =
                 ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') ^ (byte)uVar22;
            uVar18 = lVar10 + -0x61c8864680b583eb +
                     (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_108[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x20);
          *pcStack_108 = '\0';
        }
        pcStack_108 = pcStack_108 + 0x21;
        func_0x0011ab24(&pcStack_108);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_00084594;
      }
      plVar2 = (long *)*param_4;
      if (-1 < *(char *)((long)param_4 + 0x17)) {
        plVar2 = param_4;
      }
      iVar7 = (*pcVar12)(lVar19,uVar9,0,plVar2,lVar14);
/* WM - chat: discord.gg/sdkhDjTex */
      if (iVar7 != 1) {
        pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
        (*pcVar12)(lVar19);
        pbVar8 = (byte *)(*pcRam0000000002064c80)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019be1a8();
        }
        pcStack_100 = (char *)(*pcRam0000000002064c68)();
        if (*pcStack_100 == '\x01') {
          lVar10 = 0;
          uVar18 = 0x461faac66c195a70;
          do {
            uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar17 ^ uVar17 >> 0x21;
            uVar3 = (uint)(byte)pcStack_100[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
            pcStack_100[lVar10 + 0x21] =
                 ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') ^ (byte)uVar22;
            uVar18 = lVar10 + -0x61c8864680b583eb +
                     (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_100[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x20);
/*  stripping the watermark breaks the license  */
          *pcStack_100 = '\0';
        }
        pcStack_100 = pcStack_100 + 0x21;
        func_0x0011ab24(&pcStack_100);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_00084594;
      }
LAB_00083700:
      pcVar12 = (code *)func_0x0011ab24(&SUB_019e9ba0);
      plVar2 = (long *)*param_3;
      iVar7 = (int)param_3[1];
      if (-1 < *(char *)((long)param_3 + 0x17)) {
        plVar2 = param_3;
        iVar7 = (int)*(char *)((long)param_3 + 0x17);
      }
      iVar7 = (*pcVar12)(lVar19,pppppuVar23,(long)&uStack_a0 + 4,plVar2,iVar7);
      if (iVar7 != 1) {
        pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
        (*pcVar12)(lVar19);
        pbVar8 = (byte *)(*pcRam0000000002064cb0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019be220();
        }
        pcStack_110 = (char *)(*pcRam0000000002064c98)();
        if (*pcStack_110 == '\x01') {
          lVar10 = 0;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          uVar18 = 0x30681a4e4823c89c;
          do {
            uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar17 ^ uVar17 >> 0x21;
            uVar3 = (uint)(byte)pcStack_110[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar22 >> 0x17) ^
                    ((uint)(uVar17 >> 0x29) | 1);
            pcStack_110[lVar10 + 0x1a] =
                 ((byte)(uVar3 >> 7) & 1 | (byte)(uVar3 << 1)) - (char)uVar22;
            uVar18 = lVar10 + -0x61c8864680b583eb +
                     (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_110[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x19);
          *pcStack_110 = '\0';
        }
        pcStack_110 = pcStack_110 + 0x1a;
        func_0x0011ab24(&pcStack_110);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_00084594;
// do not claim this as your own
      }
      pcVar12 = (code *)func_0x0011ab24(&DAT_004526a8);
      iVar7 = (*pcVar12)(lVar19,(undefined1 *)((long)pppppuVar23 + (long)uStack_a0._4_4_),&uStack_a0
                        );
      pppppuVar23 = pppppuStack_98;
      if (iVar7 != 1) {
        pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
        (*pcVar12)(lVar19);
        pbVar8 = (byte *)(*pcRam0000000002064ce0)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019be25c();
        }
        pcStack_118 = (char *)(*pcRam0000000002064cc8)();
        if (*pcStack_118 == '\x01') {
          lVar10 = 0;
          uVar18 = 0x7cbbe2efbaa77863;
          do {
            uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar17 ^ uVar17 >> 0x21;
/* WM - donate: donate/README.md */
            uVar3 = (uint)(byte)pcStack_118[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar22 >> 0x17);
            pcStack_118[lVar10 + 0x1f] =
                 ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
                 (byte)uVar22;
            uVar18 = lVar10 + -0x61c8864680b583eb +
                     (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_118[lVar10 + 1]) << 0x11);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x1e);
          *pcStack_118 = '\0';
        }
        pcStack_118 = pcStack_118 + 0x1f;
        func_0x0011ab24(&pcStack_118);
        func_0x007a1b5c(param_2,"%s");
        goto LAB_00084594;
      }
      uVar18 = (long)(int)uStack_a0 + (long)uStack_a0._4_4_;
      uVar17 = (long)pppppuVar24 - (long)pppppuStack_98;
      if (uVar18 < uVar17 || uVar18 - uVar17 == 0) {
        if (uVar18 < uVar17) {
          pppppuVar24 = (undefined8 *****)((long)pppppuStack_98 + uVar18);
          pppppuStack_90 = pppppuVar24;
        }
      }
      else {
        if ((int)uVar18 < 0) {
          FUN_0000abb4();
          goto LAB_00084594;
        }
        uVar22 = uVar17 * 2;
        if (uVar17 * 2 <= uVar18) {
// WM - do not claim this as your own
          uVar22 = uVar18;
        }
        if (0x3ffffffffffffffe < uVar17) {
          uVar22 = 0x7fffffffffffffff;
        }
        pppppuVar15 = (undefined8 *****)__Znwm(uVar22);
        pppppuVar24 = (undefined8 *****)((long)pppppuVar15 + uVar18);
        _bzero((undefined1 *)((long)pppppuVar15 + uVar17),uVar18 - uVar17);
        _memcpy(pppppuVar15,pppppuVar23,uVar17);
        pppppuStack_98 = pppppuVar15;
        pppppuStack_90 = pppppuVar24;
        pppppuStack_88 = (undefined8 *****)((long)pppppuVar15 + uVar22);
        if (pppppuVar23 != (undefined8 *****)0x0) {
          __ZdlPv(pppppuVar23);
        }
      }
      if (bVar5) {
        pcVar12 = (code *)func_0x0011ab24(&SUB_00452c6c);
        iVar7 = (*pcVar12)(lVar19,0x10,0x10,auStack_80);
        if (iVar7 != 1) {
          pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
          (*pcVar12)(lVar19);
          pbVar8 = (byte *)(*pcRam0000000002064d10)();
          if ((*pbVar8 & 1) == 0) {
            func_0x019be298();
          }
          pcStack_120 = (char *)(*pcRam0000000002064cf8)();
          if (*pcStack_120 == '\x01') {
            lVar10 = 0;
            uVar18 = 0x8bebff739c532938;
/* wm:chat: discord.gg/sdkhDjTex */
            do {
              uVar17 = (uVar18 ^ uVar18 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar17 ^ uVar17 >> 0x21;
              uVar3 = (uint)(byte)pcStack_120[lVar10 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar17 >> 0x29) | 1);
              pcStack_120[lVar10 + 0x26] =
                   ((byte)(uVar3 >> 7) & 1 | (byte)(uVar3 << 1)) - (char)uVar22;
              uVar18 = lVar10 + -0x61c8864680b583eb +
                       (uVar18 >> 0x2f | (uVar18 ^ (byte)pcStack_120[lVar10 + 1]) << 0x11);
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0x25);
            *pcStack_120 = '\0';
          }
          pcStack_120 = pcStack_120 + 0x26;
          func_0x0011ab24(&pcStack_120);
          func_0x007a1b5c(param_2,"%s");
          goto LAB_00084594;
        }
        func_0x0012fc58(&pppppuStack_98,pppppuVar24,auStack_80,alStack_70,0x10);
      }
      pcVar12 = (code *)func_0x0011ab24(&SUB_00451f38);
      (*pcVar12)(lVar19);
      pppppuVar23 = pppppuStack_90;
      pppppuVar15 = pppppuStack_98;
      uVar18 = (long)pppppuStack_90 - (long)pppppuStack_98;
      if (0x7ffffffffffffff6 < uVar18) {
        FUN_0000aa50();
        goto LAB_00084594;
      }
      if (uVar18 < 0x17) {
        *(char *)((long)param_1 + 0x17) = (char)uVar18;
/*  origin: github.com/pengussy  */
        puVar16 = param_1;
        if (pppppuStack_98 == pppppuStack_90) goto LAB_00083914;
LAB_00083890:
        if ((0x3f < uVar18) && (0x3f < (ulong)((long)puVar16 - (long)pppppuVar15))) {
          uVar22 = uVar18 & 0x7fffffffffffffc0;
          puVar20 = (undefined8 *)((long)puVar16 + uVar22);
          puVar16 = puVar16 + 4;
          pppppuVar21 = pppppuVar15 + 4;
          uVar17 = uVar22;
          do {
            ppppuVar25 = pppppuVar21[-4];
            ppppuVar27 = pppppuVar21[-1];
            ppppuVar26 = pppppuVar21[-2];
            ppppuVar29 = pppppuVar21[1];
            ppppuVar28 = *pppppuVar21;
            ppppuVar31 = pppppuVar21[3];
            ppppuVar30 = pppppuVar21[2];
            puVar16[-3] = pppppuVar21[-3];
            puVar16[-4] = ppppuVar25;
            puVar16[-1] = ppppuVar27;
            puVar16[-2] = ppppuVar26;
/* if you paid for this, you were scammed */
            puVar16[1] = ppppuVar29;
            *puVar16 = ppppuVar28;
            puVar16[3] = ppppuVar31;
            puVar16[2] = ppppuVar30;
            uVar17 = uVar17 - 0x40;
            puVar16 = puVar16 + 8;
            pppppuVar21 = pppppuVar21 + 8;
          } while (uVar17 != 0);
          puVar16 = puVar20;
          pppppuVar15 = (undefined8 *****)((long)pppppuVar15 + uVar22);
          if (uVar18 == uVar22) goto LAB_00083934;
        }
        do {
          pppppuVar21 = (undefined8 *****)((long)pppppuVar15 + 1);
          *(undefined1 *)puVar16 = *(undefined1 *)pppppuVar15;
          puVar20 = (undefined8 *)((long)puVar16 + 1);
          puVar16 = (undefined8 *)((long)puVar16 + 1);
          pppppuVar15 = pppppuVar21;
        } while (pppppuVar21 != pppppuVar23);
      }
/* WM - more drops soon - github.com/pengussy */
      else {
        uVar17 = (uVar18 & 0x7ffffffffffffff8) + 8;
        uVar22 = 0x19;
        if (uVar17 != 0x18) {
          uVar22 = uVar17;
        }
        puVar16 = (undefined8 *)__Znwm(uVar22);
        *param_1 = puVar16;
        param_1[1] = uVar18;
        param_1[2] = uVar22 | 0x8000000000000000;
        if (pppppuVar15 != pppppuVar23) goto LAB_00083890;
LAB_00083914:
        puVar20 = puVar16;
      }
LAB_00083934:
      *(undefined1 *)puVar20 = 0;
      if (pppppuStack_98 != (undefined8 *****)0x0) {
        pppppuStack_90 = pppppuStack_98;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        __ZdlPv();
      }
      if (lVar14 != 0) {
        __ZdlPv(lVar14);
      }
      if (*(long *)PTR____stack_chk_guard_01f20200 == alStack_70[0]) {
        return;
      }
      ___stack_chk_fail();
      param_2 = pppppuVar24;
      goto LAB_00083dc4;
    }
    if (-1 < lVar1) {
      pppppuVar23 = (undefined8 *****)__Znwm(lVar1);
      pppppuStack_98 = pppppuVar23;
      pppppuStack_88 = (undefined8 *****)((long)pppppuVar23 + lVar1);
      _bzero(pppppuVar23,lVar1);
      pppppuStack_90 = (undefined8 *****)((long)pppppuVar23 + lVar1);
      goto LAB_000834dc;
    }
  }
  FUN_0000abb4();
LAB_00084594:
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x84598);
  (*pcVar12)();
}

