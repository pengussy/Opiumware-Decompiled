/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xf522c:b918a0528e
 */

undefined8 FUN_000f522c(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined8 *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  char cVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long unaff_x22;
  long unaff_x24;
  long unaff_x26;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  long lStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long **pplStack_90;
/* keep the notice, keep the source honest */
  long *plStack_88;
  long *plStack_80;
  long **pplStack_78;
  long *aplStack_70 [2];
  
  iVar4 = func_0x00791efc(param_1,1);
  if (iVar4 == 0) {
    pbVar6 = (byte *)(*pcRam000000000206beb0)();
    if ((*pbVar6 & 1) == 0) goto LAB_000f636c;
    goto LAB_000f5e64;
  }
  pcVar5 = (char *)func_0x007a25b0(param_1,1);
  pbVar6 = (byte *)(*pcRam000000000206bee0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c6e0c();
  }
  unaff_x24 = -0xae502812aa7333;
  unaff_x22 = -0x3b314601e57a13ad;
  unaff_x26 = -0x61c8864680b583eb;
  pcStack_c0 = (char *)(*pcRam000000000206bec8)();
  if (*pcStack_c0 == '\x01') {
    lVar14 = 0;
    uVar16 = 0xcb9f9a94d4fc26de;
    do {
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
// WM - if you paid for this, you were scammed
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c0[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar18 >> 0x17) ^ ((uint)(uVar17 >> 0x29) | 1);
      pcStack_c0[lVar14 + 0x11] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar18;
      uVar16 = lVar14 + -0x61c8864680b583eb +
               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_c0[lVar14 + 1]) << 0x11);
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x10);
    *pcStack_c0 = '\0';
  }
  pcStack_c0 = pcStack_c0 + 0x11;
  pcVar7 = (char *)func_0x0011ab24(&pcStack_c0);
  cVar13 = *pcVar5;
  if (cVar13 != '\0') {
    do {
      pcVar5 = pcVar5 + 1;
      if (cVar13 != *pcVar7) break;
// thanks for reading - discord.gg/sdkhDjTex
      pcVar7 = pcVar7 + 1;
      cVar13 = *pcVar5;
    } while (cVar13 != '\0');
  }
  if (cVar13 != *pcVar7) {
    do {
      pbVar6 = (byte *)(*pcRam000000000206bf10)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c6e48();
      }
      pcStack_c8 = (char *)(*pcRam000000000206bef8)();
      if (*pcStack_c8 == '\x01') {
        lVar14 = 0;
        uVar16 = (unaff_x24 * 0x21dce467dd67f32f ^ (ulong)(unaff_x24 * 0x21dce467dd67f32f) >> 0x21)
                 * unaff_x22;
        uVar16 = uVar16 ^ uVar16 >> 0x21;
        do {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * unaff_x24;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * unaff_x22;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_c8[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar18 >> 0x17);
          pcStack_c8[lVar14 + 0x33] =
               ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar17 >> 0x29) | 1) ^
               (byte)uVar18;
          uVar16 = lVar14 + unaff_x26 +
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_c8[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x32);
        *pcStack_c8 = '\0';
      }
      pcStack_c8 = pcStack_c8 + 0x33;
      func_0x0011ab24(&pcStack_c8);
      func_0x007a1b5c(param_1,"%s");
LAB_000f636c:
      func_0x019c6f38();
LAB_000f5e64:
      pcStack_e8 = (char *)(*pcRam000000000206be98)();
      if (*pcStack_e8 == '\x01') {
// WM - more drops soon - github.com/pengussy
        uVar1 = (byte)pcStack_e8[1] ^ 0x508e74dd;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x427fa761;
        pcStack_e8[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x1e;
        uVar16 = (((ulong)(byte)pcStack_e8[1] ^ 0xf8eae5c68fa86bac) << 0x11 | 0x1f1d5) +
                 0x9e3779b97f4a7c15;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_e8[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_e8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
/* reversing this took months of machine time - github.com/pengussy */
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_e8[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_e8[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
// WM - no support for modified copies
        uVar1 = (uint)(byte)pcStack_e8[6] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_e8[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[7] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_e8[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[8] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_e8[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_e8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar17 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcStack_e8[9] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
        pcStack_e8[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar17;
        *pcStack_e8 = '\0';
      }
      pcStack_e8 = pcStack_e8 + 10;
      uVar10 = func_0x0011ab24(&pcStack_e8);
      func_0x007a1ba8(param_1,1,uVar10);
    } while( true );
  }
  puVar8 = (undefined8 *)func_0x007926a8(param_1,1);
  plStack_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  plStack_98 = (long *)0x0;
  plVar19 = *(long **)(*(long *)*puVar8 + 0x60);
  plVar2 = *(long **)(*(long *)*puVar8 + 0x68);
  plVar15 = plStack_a0;
  if (plVar19 != plVar2) {
    do {
      while( true ) {
        lStack_b0 = plVar19[1];
        plVar15 = plStack_a0;
        if (lStack_b0 == 0) goto LAB_000f5470;
        lStack_b8 = *plVar19;
        if (lStack_b8 == 0) goto LAB_000f5470;
        pplStack_90 = aplStack_70;
        plStack_88 = &lStack_b8;
        plStack_80 = &lStack_b0;
        pplStack_78 = &plStack_a8;
/* watermarked copy - do not remove - github.com/pengussy */
        aplStack_70[0] = plStack_a0;
        if (plStack_98 <= plStack_a0) break;
        *plStack_a0 = lStack_b8;
        plStack_a0[1] = lStack_b0;
        plVar19 = plVar19 + 0xe;
        plVar15 = plStack_a0 + 2;
        plStack_a0 = plStack_a0 + 2;
        if (plVar19 == plVar2) goto LAB_000f5470;
      }
      func_0x0015044c(&pplStack_90);
      plStack_a0 = aplStack_70[0];
      plVar19 = plVar19 + 0xe;
      plVar15 = plStack_a0;
    } while (plVar19 != plVar2);
  }
LAB_000f5470:
  plStack_a0 = plVar15;
  func_0x00793bd0(param_1,0,0);
  plVar2 = plStack_a0;
  plVar19 = plStack_a8;
  if (plStack_a8 != plStack_a0) {
    pcVar5 = (char *)(*pcRam000000000206bf28)();
    pcVar7 = (char *)(*pcRam000000000206bf58)();
    pcVar9 = (char *)(*pcRam000000000206bf88)();
    pcVar3 = pcRam000000000206bf40;
    iVar4 = 1;
/* WM - found on a paste site? it was re-uploaded illegally */
    do {
      func_0x00793bd0(param_1,0,0);
      pbVar6 = (byte *)(*pcVar3)(0x206bf40);
      if ((*pbVar6 & 1) == 0) {
        func_0x019c6e84();
        cVar13 = *pcVar5;
      }
      else {
        cVar13 = *pcVar5;
      }
      if (cVar13 == '\x01') {
        uVar1 = (byte)pcVar5[1] ^ 0xa279718c;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x3221b45;
        pcVar5[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - 0x37 ^ 0x4f;
        uVar16 = (((ulong)(byte)pcVar5[1] ^ 0xc58951fe628d7457) << 0x11 | 0x18b12) +
                 0x9e3779b97f4a7c15;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar5[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
        pcVar5[7] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1)
                    ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar5[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
/* WM - more drops soon - github.com/pengussy */
        uVar1 = (uint)(byte)pcVar5[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
        pcVar5[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1)
                    ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar5[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar5[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
        pcVar5[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar17 >> 0x29) | 1)
                    ^ (byte)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar5[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar5[5] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar17 >> 0x17);
        pcVar5[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') -
                     ((byte)(uVar16 >> 0x29) | 1) ^ (byte)uVar17;
        *pcVar5 = '\0';
      }
      pcStack_d0 = pcVar5 + 6;
      uVar10 = func_0x0011ab24(&pcStack_d0);
      func_0x00792f00(param_1,uVar10);
      plVar15 = (long *)*plVar19;
      if (plVar15 == (long *)0x0) {
LAB_000f5788:
        pbVar6 = (byte *)(*pcRam000000000206bf70)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019c6ec0();
          cVar13 = *pcVar7;
        }
        else {
          cVar13 = *pcVar7;
        }
        if (cVar13 == '\x01') {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar1 = (byte)pcVar7[1] ^ 0x64b73949;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd980152d;
          pcVar7[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x8a;
          uVar16 = (((ulong)(byte)pcVar7[1] ^ 0xcee3ddee7df9d901) << 0x11 | 0x19dc7) +
                   0x9e3779b97f4a7c15;
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar7[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar7[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar7[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar7[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar7[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar7[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar7[4] ^ (uint)uVar18 ^ 0xffffffc3;
/* do not claim this as your own - github.com/pengussy */
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar7[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar7[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar7[5] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar7[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar7[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar7[6] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar7[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
/*  no support for modified copies  */
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar7[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcVar7[7] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcVar7[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar18;
          uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar7[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar1 = (uint)(byte)pcVar7[8] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar16 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
          pcVar7[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar17;
          *pcVar7 = '\0';
        }
        pcStack_d8 = pcVar7 + 9;
        plVar11 = (long *)func_0x0011ab24(&pcStack_d8);
        plVar15 = (long *)*plVar19;
        if (plVar15 != (long *)0x0) goto LAB_000f5af0;
LAB_000f5afc:
        lVar14 = _strlen(plVar11);
      }
      else {
        if (*(char *)((long)plVar15 + 0x17) < '\0') {
          if (plVar15[1] == 0) goto LAB_000f5788;
          plVar11 = (long *)*plVar15;
        }
        else {
          plVar11 = plVar15;
          if (*(char *)((long)plVar15 + 0x17) == '\0') goto LAB_000f5788;
        }
LAB_000f5af0:
        lVar14 = (long)*(char *)((long)plVar15 + 0x17);
        if (lVar14 < 0) {
          lVar14 = *(long *)((long)plVar15 + 8);
/* WM - origin: github.com/pengussy */
          if (lVar14 == 0) goto LAB_000f5afc;
        }
        else if (*(char *)((long)plVar15 + 0x17) == '\0') goto LAB_000f5afc;
      }
      func_0x00792db8(param_1,plVar11,lVar14);
      func_0x00794428(param_1,0xfffffffd);
      pbVar6 = (byte *)(*pcRam000000000206bfa0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c6efc();
        cVar13 = *pcVar9;
      }
      else {
        cVar13 = *pcVar9;
      }
      if (cVar13 == '\x01') {
        uVar1 = (byte)pcVar9[1] ^ 0x44d9eb13;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xa265188a ^ 0x5fd767;
        pcVar9[6] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x30;
        uVar16 = (((ulong)(byte)pcVar9[1] ^ 0xd05bc7c599845323) << 0x11 | 0x1a0b7) +
                 0x9e3779b97f4a7c15;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[2] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                ((uint)(uVar17 >> 0x29) | 1);
        pcVar9[7] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar9[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                ((uint)(uVar17 >> 0x29) | 1);
        pcVar9[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar9[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/* wm:chat: discord.gg/sdkhDjTex */
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[4] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                ((uint)(uVar17 >> 0x29) | 1);
        pcVar9[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar18;
        uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar9[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar16 ^ uVar16 >> 0x21;
        uVar1 = (uint)(byte)pcVar9[5] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar17 >> 0x17) ^
                ((uint)(uVar16 >> 0x29) | 1);
        pcVar9[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar17;
        *pcVar9 = '\0';
      }
      pcStack_e0 = pcVar9 + 6;
      uVar10 = func_0x0011ab24(&pcStack_e0);
      func_0x00792f00(param_1,uVar10);
      puVar12 = *(undefined8 **)(plVar19[1] + 8);
      lVar14 = (long)*(char *)((long)puVar12 + 0x17);
      puVar8 = puVar12;
      if (lVar14 < 0) {
        puVar8 = (undefined8 *)*puVar12;
        lVar14 = puVar12[1];
      }
      func_0x00792db8(param_1,puVar8,lVar14);
      func_0x00794428(param_1,0xfffffffd);
      func_0x00794504(param_1,0xfffffffe,iVar4);
      iVar4 = iVar4 + 1;
      plVar19 = plVar19 + 2;
    } while (plVar19 != plVar2);
// donate: donate/README.md
  }
  if (plStack_a8 != (long *)0x0) {
    plStack_a0 = plStack_a8;
    __ZdlPv(plStack_a8);
  }
  return 1;
}

