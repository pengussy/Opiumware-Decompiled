/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x175480:91fb48c789
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00175564) */

undefined8 FUN_00175480(long param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  char *pcStack_80;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  
  uVar9 = *param_2;
  plVar12 = (long *)(param_1 + 8);
  lVar13 = *plVar12;
  __ZNSt3__15mutex4lockEv(lVar13 + 0x28);
  lVar16 = *plVar12;
  lVar10 = *(long *)(lVar16 + 0x10);
  iVar3 = *(int *)(lVar16 + 0xdc);
  puVar14 = *(undefined8 **)(lVar16 + 0xc0);
  puVar15 = *(undefined8 **)(lVar16 + 200);
  if (puVar14 == puVar15) {
    if (puVar14 == puVar15) {
LAB_001754d4:
      *(undefined8 **)(lVar16 + 200) = puVar14;
      *(undefined1 *)(lVar16 + 0xbd) = 1;
      __ZNSt3__15mutex6unlockEv(lVar13 + 0x28);
/* wm:if you paid for this, you were scammed */
      pcVar2 = pcRam0000000001f26db0;
      goto joined_r0x00175588;
    }
  }
  else {
    do {
      uStack_68 = puVar14[1];
      uStack_70 = *puVar14;
      lStack_60 = puVar14[2];
      puVar14[1] = 0;
      puVar14[2] = 0;
      *puVar14 = 0;
      func_0x00173f34(plVar12,&uStack_70,*(undefined1 *)(puVar14 + 3));
      if (lStack_60 < 0) {
        __ZdlPv(uStack_70);
      }
      puVar14 = puVar14 + 4;
    } while (puVar14 != puVar15);
    lVar16 = *plVar12;
    puVar14 = *(undefined8 **)(lVar16 + 0xc0);
    puVar15 = *(undefined8 **)(lVar16 + 200);
    if (puVar14 == puVar15) goto LAB_001754d4;
  }
  do {
    puVar15 = puVar15 + -4;
  } while (puVar15 != puVar14);
  lVar5 = *plVar12;
  *(undefined8 **)(lVar16 + 200) = puVar14;
  *(undefined1 *)(lVar5 + 0xbd) = 1;
  __ZNSt3__15mutex6unlockEv(lVar13 + 0x28);
  pcVar2 = pcRam0000000001f26db0;
joined_r0x00175588:
  pcRam0000000001f26db0 = pcVar2;
  if ((lVar10 == 0) || (iVar3 == 0)) {
    pbVar4 = (byte *)(*pcRam0000000002074610)();
/* origin: github.com/pengussy - github.com/pengussy */
    if ((*pbVar4 & 1) == 0) {
      func_0x019caf1c();
    }
    pcStack_80 = (char *)(*pcRam00000000020745f8)();
    if (*pcStack_80 == '\x01') {
      lVar10 = 0;
      uVar6 = 0x139f723cfb9f09eb;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[lVar10 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^
                ((uint)(uVar7 >> 0x29) | 1);
        pcStack_80[lVar10 + 0x15] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
        uVar6 = lVar10 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x14);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0x15;
    uVar9 = func_0x0011ab24(&pcStack_80);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    (*pcVar2)(2,uVar9);
    uVar11 = 0;
  }
  else {
    func_0x00793928(lVar10,0xffffd8f0,iVar3);
    iVar3 = func_0x00791be4(lVar10,0xffffffff);
    if (iVar3 == 7) {
      func_0x007932d0(lVar10,1);
      pbVar4 = (byte *)(*pcRam0000000002074640)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019caee0();
      }
      pcStack_78 = (char *)(*pcRam0000000002074628)();
      if (*pcStack_78 == '\x01') {
        uVar1 = (byte)pcStack_78[1] ^ 0xa5bdf1fa;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x5b62bb4c;
        pcStack_78[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - 0x27 ^ 0x39;
        uVar6 = (((ulong)(byte)pcStack_78[1] ^ 0x44d2d1c171033c84) << 0x11 | 0x89a5) +
                0x9e3779b97f4a7c15;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0xc] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0xd] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0xe] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar8 ^ 0xffffffc3;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0xf] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[6] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0x10] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0x11] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[8] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0x12] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[9] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_78[0x13] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_78[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[10] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17);
        pcStack_78[0x14] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar7;
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 0xb;
      uVar11 = func_0x0011ab24(&pcStack_78);
      func_0x00794260(lVar10,0xfffffffe,uVar11);
    }
    uVar11 = 1;
    func_0x00791230(lVar10,uVar9,1);
  }
  return uVar11;
// chat: discord.gg/sdkhDjTex
}

