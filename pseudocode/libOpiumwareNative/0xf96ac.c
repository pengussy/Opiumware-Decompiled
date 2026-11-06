/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xf96ac:31e3fc9fb1
 */

/* WARNING: Removing unreachable block (ram,0x000fa980) */
/* WARNING: Removing unreachable block (ram,0x000fa998) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000f96ac(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *******pppppppuVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
/* wm:chat: discord.gg/sdkhDjTex */
  ulong uVar12;
  long lVar13;
  ulong extraout_x8;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iStack_fc;
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
  undefined8 *******pppppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 *******pppppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
/* stripping the watermark breaks the license */
  
  pbVar5 = (byte *)(*pcRam000000000206c3f0)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019c75e4();
  }
  pcStack_a8 = (char *)(*pcRam000000000206c3d8)();
  if (*pcStack_a8 == '\x01') {
    uVar1 = (byte)pcStack_a8[1] ^ 0xe38974cb;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xd6373fc8 ^ 0x72ca73;
    pcStack_a8[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - 8;
    uVar12 = (((ulong)(byte)pcStack_a8[1] ^ 0xfb6664400a8a2105) << 0x11 | 0x1f6cc) +
             0x9e3779b97f4a7c15;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar17 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
/* WM - unlicensed copy if this notice is missing */
    pcStack_a8[7] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar17 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
    pcStack_a8[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar17 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1);
    pcStack_a8[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar12 ^ uVar12 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar12 >> 0x29) | 1);
/* wm:do not claim this as your own */
    pcStack_a8[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
    *pcStack_a8 = '\0';
  }
  pcStack_a8 = pcStack_a8 + 6;
  uVar6 = func_0x0011ab24(&pcStack_a8);
  func_0x007935a0(param_1,0xffffd8ee,uVar6);
  pbVar5 = (byte *)(*pcRam000000000206c420)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019c7620();
  }
  pcStack_b0 = (char *)(*pcRam000000000206c408)();
  if (*pcStack_b0 == '\x01') {
    uVar1 = (byte)pcStack_b0[1] ^ 0x6ed332bd;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x162f52de;
    pcStack_b0[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 0x8b ^ 0x7e;
    uVar12 = (((ulong)(byte)pcStack_b0[1] ^ 0xfb8c614b2ca257e) << 0x11 | 0x1f71) +
             0x9e3779b97f4a7c15;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0xd] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
/*  found on a paste site? it was re-uploaded illegally  */
    pcStack_b0[0xe] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0xf] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0x10] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[6] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0x11] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[7] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0x12] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[8] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0x13] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[9] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0x14] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
/* WM - more drops soon - github.com/pengussy */
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar11 ^ uVar11 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[10] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar17 >> 0x17);
    pcStack_b0[0x15] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
         (byte)uVar17;
    uVar12 = (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b0[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar12 ^ uVar12 >> 0x21;
    uVar1 = (uint)(byte)pcStack_b0[0xb] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar11 >> 0x17);
    pcStack_b0[0x16] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
         (byte)uVar11;
    *pcStack_b0 = '\0';
  }
// WM - origin: github.com/pengussy
  pcStack_b0 = pcStack_b0 + 0xc;
  uVar6 = func_0x0011ab24(&pcStack_b0);
  func_0x007935a0(param_1,0xffffffff,uVar6);
  func_0x00791ab0(param_1,0xfffffffe);
  pbVar5 = (byte *)(*pcRam000000000206c450)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019c765c();
  }
  pcStack_b8 = (char *)(*pcRam000000000206c438)();
  if (*pcStack_b8 == '\x01') {
    lVar13 = 0;
    uVar12 = 0x90338356c949d0f1;
    do {
      uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b8[lVar13 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar17 >> 0x17);
      pcStack_b8[lVar13 + 0xf] =
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar12 = lVar13 + -0x61c8864680b583eb +
               (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_b8[lVar13 + 1]) << 0x11);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0xe);
    *pcStack_b8 = '\0';
  }
  pcStack_b8 = pcStack_b8 + 0xf;
  uVar6 = func_0x0011ab24(&pcStack_b8);
  func_0x00792f00(param_1,uVar6);
  iVar4 = func_0x00794a14(param_1,2,1,0);
  if (iVar4 != 0) {
    pbVar5 = (byte *)(*pcRam000000000206c480)();
    if ((*pbVar5 & 1) == 0) goto LAB_000fae88;
    goto LAB_000faa40;
  }
  iVar4 = func_0x00791efc(param_1,0xffffffff);
  if (iVar4 != 0) {
    pbVar5 = (byte *)(*pcRam000000000206c4b0)();
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    if ((*pbVar5 & 1) == 0) {
      func_0x019c76d4();
    }
    pcStack_c8 = (char *)(*pcRam000000000206c498)();
    if (*pcStack_c8 == '\x01') {
      lVar13 = 0;
      uVar12 = 0xe6d3aa9228437fcb;
      do {
        uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c8[lVar13 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^ ((uint)(uVar11 >> 0x29) | 1)
        ;
        pcStack_c8[lVar13 + 0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar17;
        uVar12 = lVar13 + -0x61c8864680b583eb +
                 (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c8[lVar13 + 1]) << 0x11);
        lVar13 = lVar13 + 1;
      } while (lVar13 != 0x11);
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 0x12;
    uVar6 = func_0x0011ab24(&pcStack_c8);
    func_0x007935a0(param_1,0xffffffff,uVar6);
    iVar4 = func_0x00791efc(param_1,0xffffffff);
    if (iVar4 != 0) {
      plVar7 = (long *)func_0x007926a8(param_1,0xffffffff);
      lVar13 = *plVar7;
      func_0x00791660(param_1,0xfffffffd);
      if (lVar13 != 0) {
        lVar13 = *(long *)(lRam0000000001f267e0 + lVar13);
        if (lVar13 == 0) goto LAB_000fac58;
        plVar7 = *(long **)(lVar13 + 0x38);
        if (plVar7 == (long *)0x0) goto LAB_000fad70;
        if (((*plVar7 == 0) || (plVar7[1] == 0)) || (plVar7[2] == 0)) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          do {
            pbVar5 = (byte *)(*pcRam000000000206c540)();
            if ((*pbVar5 & 1) == 0) {
              func_0x019c77c4();
            }
            pcStack_e8 = (char *)(*pcRam000000000206c528)();
            if (*pcStack_e8 == '\x01') {
              lVar13 = 0;
              uVar12 = 0x82957e738813ae65;
              do {
                uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcStack_e8[lVar13 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar11 >> 0x29) | 1);
                pcStack_e8[lVar13 + 0x11] =
                     ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                uVar12 = lVar13 + -0x61c8864680b583eb +
/*  stripping the watermark breaks the license  */
                         (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_e8[lVar13 + 1]) << 0x11);
                lVar13 = lVar13 + 1;
              } while (lVar13 != 0x10);
              *pcStack_e8 = '\0';
            }
            pcStack_e8 = pcStack_e8 + 0x11;
            func_0x0011ab24(&pcStack_e8);
            func_0x007a1b5c(param_1,"%s");
LAB_000fac58:
            pbVar5 = (byte *)(*pcRam000000000206c4e0)();
            if ((*pbVar5 & 1) == 0) {
              func_0x019c783c();
            }
            pcStack_f8 = (char *)(*pcRam000000000206c4c8)();
            if (*pcStack_f8 == '\x01') {
              lVar13 = 0;
              uVar12 = 0x8e68600d957f6456;
              do {
                uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
/* do not claim this as your own */
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcStack_f8[lVar13 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar17 >> 0x17);
                pcStack_f8[lVar13 + 0x10] =
                     ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1)
                     ^ (byte)uVar17;
                uVar12 = lVar13 + -0x61c8864680b583eb +
                         (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_f8[lVar13 + 1]) << 0x11);
                lVar13 = lVar13 + 1;
              } while (lVar13 != 0xf);
              *pcStack_f8 = '\0';
            }
            pcStack_f8 = pcStack_f8 + 0x10;
            func_0x0011ab24(&pcStack_f8);
            func_0x007a1b5c(param_1,"%s");
LAB_000fad70:
            pbVar5 = (byte *)(*pcRam000000000206c510)();
            if ((*pbVar5 & 1) == 0) {
              func_0x019c7800();
            }
            pcStack_f0 = (char *)(*pcRam000000000206c4f8)();
            if (*pcStack_f0 == '\x01') {
              lVar13 = 0;
              uVar12 = 0x47790673c573281a;
              do {
                uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcStack_f0[lVar13 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar11 >> 0x29) | 1);
                pcStack_f0[lVar13 + 0x13] =
                     ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar17;
                uVar12 = lVar13 + -0x61c8864680b583eb +
                         (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_f0[lVar13 + 1]) << 0x11);
                lVar13 = lVar13 + 1;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              } while (lVar13 != 0x12);
              *pcStack_f0 = '\0';
            }
            pcStack_f0 = pcStack_f0 + 0x13;
            func_0x0011ab24(&pcStack_f0);
            func_0x007a1b5c(param_1,"%s");
LAB_000fae88:
            func_0x019c7698();
LAB_000faa40:
            pcStack_c0 = (char *)(*pcRam000000000206c468)();
            if (*pcStack_c0 == '\x01') {
              lVar13 = 0;
              uVar12 = 0x1e02b90ec40421b4;
              do {
                uVar11 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar11 ^ uVar11 >> 0x21;
// watermarked copy - do not remove
                uVar1 = (uint)(byte)pcStack_c0[lVar13 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar11 >> 0x29) | 1);
                pcStack_c0[lVar13 + 0x20] =
                     ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar17;
                uVar12 = lVar13 + -0x61c8864680b583eb +
                         (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_c0[lVar13 + 1]) << 0x11);
                lVar13 = lVar13 + 1;
              } while (lVar13 != 0x1f);
              *pcStack_c0 = '\0';
            }
            pcStack_c0 = pcStack_c0 + 0x20;
            func_0x0011ab24(&pcStack_c0);
            func_0x007a1b5c(param_1,"%s");
          } while( true );
        }
        func_0x00793bd0(param_1,0,0);
        if (plVar7[1] == 0) {
          return 1;
        }
        pcVar8 = (char *)(*pcRam000000000206c558)();
        pcVar9 = (char *)(*pcRam000000000206c588)();
        pcVar10 = (char *)(*pcRam000000000206c5b8)();
        uVar12 = 0;
        iStack_fc = 1;
        uVar11 = extraout_x8;
        do {
/*  chat: discord.gg/sdkhDjTex  */
          plVar16 = *(long **)(*plVar7 + uVar12 * 8);
          if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
            do {
              while( true ) {
                lVar19 = plVar16[2];
                lVar13 = plVar16[3];
                plVar16 = (long *)*plVar16;
                if (lVar19 != 0 && (int)lVar13 != 0) break;
                if (plVar16 == (long *)0x0) goto LAB_000fa130;
              }
              puVar14 = *(undefined8 **)(lVar19 + 8);
              if (*(char *)((long)puVar14 + 0x17) < '\0') {
                func_0x00017ae8(&pppppppuStack_80,*puVar14,puVar14[1]);
                plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 8);
                if (-1 < *(char *)((long)plVar15 + 0x17)) goto LAB_000fa1b0;
LAB_000fa1e4:
                func_0x00017ae8(&pppppppuStack_a0,*plVar15,plVar15[1]);
              }
              else {
                uStack_78 = puVar14[1];
                pppppppuStack_80 = (undefined8 *******)*puVar14;
                uStack_70 = puVar14[2];
                plVar15 = *(long **)(*(long *)(lVar19 + 0x30) + 8);
                if (*(char *)((long)plVar15 + 0x17) < '\0') goto LAB_000fa1e4;
LAB_000fa1b0:
                uStack_98 = plVar15[1];
                pppppppuStack_a0 = (undefined8 *******)*plVar15;
                uStack_90 = plVar15[2];
              }
              func_0x00793bd0(param_1,0,0);
              pbVar5 = (byte *)(*pcRam000000000206c570)();
              if ((*pbVar5 & 1) == 0) {
                func_0x019c7710();
// WM - found on a paste site? it was re-uploaded illegally
                cVar2 = *pcVar8;
              }
              else {
                cVar2 = *pcVar8;
              }
              if (cVar2 == '\x01') {
                uVar1 = (byte)pcVar8[1] ^ 0x24b5a36c;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x92c5004a ^ 0x121b4f;
                pcVar8[7] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x51;
                uVar11 = (((ulong)(byte)pcVar8[1] ^ 0x73667caee52d1a9d) << 0x11 | 0xe6cc) +
                         0x9e3779b97f4a7c15;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar8[2] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar8[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar8[2]) << 0x11) + 0x9e3779b97f4a7c16;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar8[3] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar8[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar8[3]) << 0x11) + 0x9e3779b97f4a7c17;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar8[4] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar8[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar8[4]) << 0x11) + 0x9e3779b97f4a7c18;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/* WM - donate: donate/README.md */
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar8[5] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar8[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar8[5]) << 0x11) + 0x9e3779b97f4a7c19;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcVar8[6] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar11 >> 0x29) | 1);
                pcVar8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar17;
                *pcVar8 = '\0';
              }
              pcStack_d0 = pcVar8 + 7;
              uVar6 = func_0x0011ab24(&pcStack_d0);
              func_0x00792f00(param_1,uVar6);
              uVar11 = uStack_78;
              pppppppuVar3 = pppppppuStack_80;
              if (-1 < (long)uStack_70) {
                uVar11 = uStack_70 >> 0x38;
// donate: donate/README.md
                pppppppuVar3 = &pppppppuStack_80;
              }
              func_0x00792db8(param_1,pppppppuVar3,uVar11);
              func_0x00794428(param_1,0xfffffffd);
              pbVar5 = (byte *)(*pcRam000000000206c5a0)();
              if ((*pbVar5 & 1) == 0) {
                func_0x019c774c();
                cVar2 = *pcVar9;
              }
              else {
                cVar2 = *pcVar9;
              }
              if (cVar2 == '\x01') {
                uVar1 = (byte)pcVar9[1] ^ 0x444c9df8;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xecdd9c89 ^ 0x7ec4c9;
                pcVar9[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - 0x3b;
                uVar11 = (((ulong)(byte)pcVar9[1] ^ 0x35a6a75ed2abc899) << 0x11 | 0x6b4d) +
                         0x9e3779b97f4a7c15;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[2] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar9[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar18;
/* unlicensed copy if this notice is missing - github.com/pengussy */
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar9[2]) << 0x11) + 0x9e3779b97f4a7c16;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[3] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar9[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar9[3]) << 0x11) + 0x9e3779b97f4a7c17;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[4] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar9[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar9[4]) << 0x11) + 0x9e3779b97f4a7c18;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[5] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar9[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar9[5]) << 0x11) + 0x9e3779b97f4a7c19;
                uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/*  more drops soon - github.com/pengussy  */
                uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                uVar18 = uVar17 ^ uVar17 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[6] ^ (uint)uVar18 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar18 >> 0x17) ^
                        ((uint)(uVar17 >> 0x29) | 1);
                pcVar9[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar18;
                uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar9[6]) << 0x11) + 0x9e3779b97f4a7c1a;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar11 ^ uVar11 >> 0x21;
                uVar1 = (uint)(byte)pcVar9[7] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar17 >> 0x17) ^
                        ((uint)(uVar11 >> 0x29) | 1);
                pcVar9[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar17;
                *pcVar9 = '\0';
              }
              pcStack_d8 = pcVar9 + 8;
              uVar6 = func_0x0011ab24(&pcStack_d8);
              func_0x00792f00(param_1,uVar6);
              uVar11 = uStack_98;
              pppppppuVar3 = pppppppuStack_a0;
              if (-1 < (long)uStack_90) {
                uVar11 = uStack_90 >> 0x38;
                pppppppuVar3 = &pppppppuStack_a0;
              }
              func_0x00792db8(param_1,pppppppuVar3,uVar11);
              func_0x00794428(param_1,0xfffffffd);
              pbVar5 = (byte *)(*pcRam000000000206c5d0)();
              if ((*pbVar5 & 1) == 0) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
                func_0x019c7788();
                cVar2 = *pcVar10;
              }
              else {
                cVar2 = *pcVar10;
              }
              if (cVar2 == '\x01') {
                lVar19 = 0;
                uVar11 = 0xf15909e8843c513;
                do {
                  uVar17 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
                  uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                  uVar18 = uVar17 ^ uVar17 >> 0x21;
                  uVar1 = (uint)(byte)pcVar10[lVar19 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17) ^
                          ((uint)(uVar17 >> 0x29) | 1);
                  pcVar10[lVar19 + 0xf] =
                       ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
                  uVar11 = lVar19 + -0x61c8864680b583eb +
                           (uVar11 >> 0x2f | (uVar11 ^ (byte)pcVar10[lVar19 + 1]) << 0x11);
                  lVar19 = lVar19 + 1;
                } while (lVar19 != 0xe);
                *pcVar10 = '\0';
              }
              pcStack_e0 = pcVar10 + 0xf;
// WM - watermarked copy - do not remove
              uVar6 = func_0x0011ab24(&pcStack_e0);
              func_0x00792f00(param_1,uVar6);
              func_0x00792bf4(param_1,(int)lVar13);
              func_0x00794428(param_1,0xfffffffd);
              func_0x00794504(param_1,0xfffffffe,iStack_fc);
              if ((long)uStack_90 < 0) {
                __ZdlPv(pppppppuStack_a0);
              }
              iStack_fc = iStack_fc + 1;
            } while (plVar16 != (long *)0x0);
LAB_000fa130:
            uVar11 = plVar7[1];
          }
          uVar12 = uVar12 + 1;
          if (uVar11 <= uVar12) {
            return 1;
          }
        } while( true );
      }
    }
  }
  func_0x007932d0(param_1,0);
  return 1;
}

