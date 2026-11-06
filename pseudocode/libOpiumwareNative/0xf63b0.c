/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xf63b0:19494fc734
   =========================================================================== */

undefined8 FUN_000f63b0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char cVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
/* wm:found on a paste site? it was re-uploaded illegally */
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long **pplStack_60;
  long *plStack_58;
  long **pplStack_50;
  long *plStack_48;
  
  iVar4 = func_0x00791efc(param_1,1);
  if (iVar4 == 0) {
    pbVar6 = (byte *)(*pcRam000000000206bfd0)();
    if ((*pbVar6 & 1) == 0) goto LAB_000f6bc0;
    goto LAB_000f6688;
  }
  pcVar5 = (char *)func_0x007a25b0(param_1,1);
  pbVar6 = (byte *)(*pcRam000000000206c000)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019c6f74();
  }
  pcStack_88 = (char *)(*pcRam000000000206bfe8)();
  if (*pcStack_88 == '\x01') {
    lVar12 = 0;
    uVar13 = 0x237c0b309b9ffe66;
// WM - if you paid for this, you were scammed
    do {
      uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[lVar12 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar15 >> 0x17);
      pcStack_88[lVar12 + 0x11] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
           (byte)uVar15;
      uVar13 = lVar12 + -0x61c8864680b583eb +
               (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_88[lVar12 + 1]) << 0x11);
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x10);
    *pcStack_88 = '\0';
  }
  pcStack_88 = pcStack_88 + 0x11;
  pcVar7 = (char *)func_0x0011ab24(&pcStack_88);
  cVar11 = *pcVar5;
  if (cVar11 != '\0') {
    do {
      pcVar5 = pcVar5 + 1;
      if (cVar11 != *pcVar7) break;
      pcVar7 = pcVar7 + 1;
      cVar11 = *pcVar5;
    } while (cVar11 != '\0');
  }
// stripping the watermark breaks the license
  if (cVar11 != *pcVar7) {
    do {
      pbVar6 = (byte *)(*pcRam000000000206c030)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c6fb0();
      }
      pcStack_90 = (char *)(*pcRam000000000206c018)();
      if (*pcStack_90 == '\x01') {
        lVar12 = 0;
        uVar13 = 0x3b7b583d6d297fd1;
        do {
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_90[lVar12 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
/* WM - origin: github.com/pengussy */
          pcStack_90[lVar12 + 0x33] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar15;
          uVar13 = lVar12 + -0x61c8864680b583eb +
                   (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_90[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x32);
        *pcStack_90 = '\0';
      }
      pcStack_90 = pcStack_90 + 0x33;
      func_0x0011ab24(&pcStack_90);
      func_0x007a1b5c(param_1,"%s");
LAB_000f6bc0:
      func_0x019c6fec();
LAB_000f6688:
      pcStack_98 = (char *)(*pcRam000000000206bfb8)();
      if (*pcStack_98 == '\x01') {
        uVar1 = (byte)pcStack_98[1] ^ 0x8f508b90;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x159b7b1f;
        pcStack_98[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') + 0x67 ^ 0x53;
        uVar13 = (((ulong)(byte)pcStack_98[1] ^ 0xd00d5a30c7b370e0) << 0x11 | 0x1a01a) +
                 0x9e3779b97f4a7c15;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
        pcStack_98[0xb] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar15 ^ 0xffffffc3;
/*  thanks for reading - discord.gg/sdkhDjTex  */
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
        pcStack_98[0xc] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
        pcStack_98[0xd] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
        pcStack_98[0xe] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
        pcStack_98[0xf] =
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
        pcStack_98[0x10] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar14 ^ uVar14 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar15 >> 0x17);
        pcStack_98[0x11] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar14 >> 0x17);
        pcStack_98[0x12] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar14;
        *pcStack_98 = '\0';
      }
      pcStack_98 = pcStack_98 + 10;
      uVar9 = func_0x0011ab24(&pcStack_98);
      func_0x007a1ba8(param_1,1,uVar9);
    } while( true );
  }
  puVar8 = (undefined8 *)func_0x007926a8(param_1,1);
  plStack_78 = (long *)0x0;
// proprietary - see LICENSE - do not sell
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  lVar12 = *(long *)(*(long *)*puVar8 + 0x60);
  lVar2 = *(long *)(*(long *)*puVar8 + 0x68);
  plVar3 = plStack_70;
  if (lVar12 != lVar2) {
    do {
      while( true ) {
        lStack_80 = *(long *)(lVar12 + 8);
        plVar3 = plStack_70;
        if (lStack_80 == 0) goto LAB_000f65dc;
        pplStack_60 = &plStack_48;
        plStack_58 = &lStack_80;
        pplStack_50 = &plStack_78;
        plStack_48 = plStack_70;
        if (plStack_68 <= plStack_70) break;
        *plStack_70 = lStack_80;
        lVar12 = lVar12 + 0x70;
        plVar3 = plStack_70 + 1;
        plStack_70 = plStack_70 + 1;
        if (lVar12 == lVar2) goto LAB_000f65dc;
      }
      func_0x0000aad8(&pplStack_60);
      plStack_70 = plStack_48;
      lVar12 = lVar12 + 0x70;
      plVar3 = plStack_70;
    } while (lVar12 != lVar2);
  }
LAB_000f65dc:
  plStack_70 = plVar3;
  func_0x00793bd0(param_1,0,0);
  plVar3 = plStack_70;
  if (plStack_78 != plStack_70) {
    iVar4 = 1;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    plVar16 = plStack_78;
    do {
      puVar10 = *(undefined8 **)(*plVar16 + 8);
      lVar12 = (long)*(char *)((long)puVar10 + 0x17);
      puVar8 = puVar10;
      if (lVar12 < 0) {
        puVar8 = (undefined8 *)*puVar10;
        lVar12 = puVar10[1];
      }
      func_0x00792db8(param_1,puVar8,lVar12);
      func_0x00794504(param_1,0xfffffffe,iVar4);
      iVar4 = iVar4 + 1;
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar3);
  }
  if (plStack_78 != (long *)0x0) {
    plStack_70 = plStack_78;
    __ZdlPv(plStack_78);
  }
  return 1;
}

