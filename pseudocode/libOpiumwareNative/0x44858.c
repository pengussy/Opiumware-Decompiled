/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x44858:3e8caedfaf
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00045b80) */

undefined8 FUN_00044858(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined8 ****ppppuVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x20;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  ulong unaff_x27;
  undefined8 uVar17;
  char *pcStack_108;
  char *pcStack_100;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  int aiStack_c0 [6];
  long *plStack_a8;
  long *plStack_a0;
  undefined8 ****ppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 == 10) {
    iVar3 = func_0x00791e54(param_1,2);
    if (iVar3 == 0) goto LAB_00045f0c;
    pbVar7 = (byte *)func_0x00792874(param_1,1);
    unaff_x20 = func_0x00792368(param_1,2,0);
    uVar8 = _strlen();
    if (uVar8 < 0x7ffffffffffffff7) {
      if (uVar8 < 0x17) {
        uStack_70 = CONCAT17((char)uVar8,(undefined7)uStack_70);
        ppppuVar9 = &ppppuStack_80;
      }
      else {
        uVar14 = (uVar8 & 0x7ffffffffffffff8) + 8;
        uVar16 = 0x19;
        if (uVar14 != 0x18) {
          uVar16 = uVar14;
        }
        ppppuVar9 = (undefined8 ****)__Znwm(uVar16);
        uStack_70 = uVar16 | 0x8000000000000000;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        ppppuStack_80 = ppppuVar9;
        uStack_78 = uVar8;
      }
      _memmove(ppppuVar9,unaff_x20,uVar8);
      *(undefined1 *)((long)ppppuVar9 + uVar8) = 0;
      iVar4 = func_0x00791650(param_1);
      iVar3 = iVar4;
      if (iVar4 < 3) {
        iVar3 = 2;
      }
      if (*(ulong *)(*(long *)(pbVar7 + 0x38) + 0x48) <= *(ulong *)(*(long *)(pbVar7 + 0x38) + 0x50)
         ) {
        func_0x00819f9c(pbVar7,1);
      }
      if ((*pbVar7 >> 2 & 1) != 0) {
        func_0x0081b5c4(pbVar7,pbVar7,pbVar7 + 0x28);
      }
      unaff_x20 = func_0x007914c4(pbVar7);
      uVar5 = func_0x00796158(pbVar7,0xffffffff);
      func_0x00791660(pbVar7,0xfffffffe);
      lVar15 = *(long *)(pbVar7 + 0x20);
/* wm:donate: donate/README.md */
      lVar13 = *(long *)(unaff_x20 + 0x20);
      uVar17 = *(undefined8 *)(lVar15 + 0x48);
      uVar11 = *(undefined8 *)(lVar15 + 0x40);
      if (*(long *)(lVar15 + 0x48) != 0) {
        plVar12 = (long *)(*(long *)(lVar15 + 0x48) + 0x10);
        *plVar12 = *plVar12 + 1;
      }
      lVar15 = *(long *)(lVar13 + 0x48);
      *(undefined8 *)(lVar13 + 0x48) = uVar17;
      *(undefined8 *)(lVar13 + 0x40) = uVar11;
      if (lVar15 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      func_0x00832c50(unaff_x20);
      *(undefined4 *)(*(long *)(unaff_x20 + 0x20) + 0x60) = 8;
      ppppuStack_98 = (undefined8 ****)CONCAT44(ppppuStack_98._4_4_,8);
      uVar8 = (*pcRam0000000001f26d48)(&ppppuStack_98);
      *(ulong *)(*(long *)(unaff_x20 + 0x20) + 0x80) = uVar8 | 0x3fffffffffff00;
      puVar10 = (undefined4 *)(*pcRam0000000001f26d50)(unaff_x20);
      lVar13 = *(long *)(unaff_x20 + 0x20);
      *puVar10 = *(undefined4 *)(lVar13 + 0x60);
      *(undefined8 *)(puVar10 + 0xc) = *(undefined8 *)(lVar13 + 0x80);
      *(undefined1 *)
       (*(long *)(*(long *)(lVar13 + 0x18) + 0x10) + lRam0000000001f26810 + lRam0000000001f26830) =
           1;
      func_0x00046494(unaff_x20);
      unaff_x24 = -0xae502812aa7333;
      unaff_x25 = -0x3b314601e57a13ad;
      unaff_x26 = -0x61c8864680b583eb;
      if ((lRam0000000002097088 == 0) ||
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
         (lVar13 = func_0x0013b76c(0x2097070,unaff_x20 + 0x80), lVar13 == 0)) {
        ppppuStack_98 = (undefined8 ****)0x2097070;
        func_0x0016e5c8(&ppppuStack_98,unaff_x20 + 0x80,unaff_x20 + 0x80);
        pbVar7 = (byte *)(*pcRam0000000002062af0)();
        if ((*pbVar7 & 1) == 0) {
          func_0x01996a54();
        }
        pcStack_d0 = (char *)(*pcRam0000000002062ad8)();
        if (*pcStack_d0 == '\x01') {
          uVar1 = (byte)pcStack_d0[1] ^ 0x1409e51;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x89d44e03;
          pcStack_d0[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x75 ^ 0x92;
          uVar8 = (((ulong)(byte)pcStack_d0[1] ^ 0x54f8a8d9e578743a) << 0x11 | 0xa9f1) +
                  0x9e3779b97f4a7c15;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17);
          pcStack_d0[7] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17);
          pcStack_d0[8] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
/* if you paid for this, you were scammed */
               (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar16 >> 0x17);
          pcStack_d0[9] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d0[5] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar14 >> 0x17);
          pcStack_d0[10] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar14;
          *pcStack_d0 = '\0';
        }
        pcStack_d0 = pcStack_d0 + 6;
        uVar11 = func_0x0011ab24(&pcStack_d0);
        func_0x007935a0(unaff_x20,0xffffd8ee,uVar11);
        pbVar7 = (byte *)(*pcRam0000000002062b20)();
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if ((*pbVar7 & 1) == 0) {
          func_0x01996a90();
        }
        pcStack_d8 = (char *)(*pcRam0000000002062b08)();
        if (*pcStack_d8 == '\x01') {
          uVar1 = (byte)pcStack_d8[1] ^ 0x8ace645a;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xf49f384f;
          pcStack_d8[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0x99;
          uVar8 = (((ulong)(byte)pcStack_d8[1] ^ 0x4e7f6ec7d69ef0e4) << 0x11 | 0x9cfe) +
                  0x9e3779b97f4a7c15;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[2] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[3] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[4] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[5] ^ (uint)uVar16 ^ 0xffffffc3;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[6] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[7] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[8] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0x13] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[9] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0x14] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[10] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
          pcStack_d8[0x15] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_d8[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_d8[0xb] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
          pcStack_d8[0x16] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
          *pcStack_d8 = '\0';
        }
        pcStack_d8 = pcStack_d8 + 0xc;
        uVar11 = func_0x0011ab24(&pcStack_d8);
        func_0x007a21e4(unaff_x20,0xffffffff,uVar11);
        plVar12 = (long *)func_0x00790f58(unaff_x20,0xffffffff);
        lVar13 = *plVar12;
        if (lRam0000000002097158 == 0) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          lRam0000000002097158 = *(long *)(lVar13 + 0x18);
        }
        func_0x00791660(unaff_x20,0xfffffffd);
        *(undefined **)(lVar13 + 0x18) = &DAT_000406a4;
        pbVar7 = (byte *)(*pcRam0000000002062b50)();
        if ((*pbVar7 & 1) == 0) {
          func_0x01996acc();
        }
        pcStack_e0 = (char *)(*pcRam0000000002062b38)();
        if (*pcStack_e0 == '\x01') {
          uVar1 = (byte)pcStack_e0[1] ^ 0x7f3d617b;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xd26544ff;
          pcStack_e0[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x99 ^ 0xb8;
          uVar8 = (((ulong)(byte)pcStack_e0[1] ^ 0x8c8b8b851aa045f4) << 0x11 | 0x11917) +
                  0x9e3779b97f4a7c15;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e0[2] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17);
          pcStack_e0[7] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
/* WM - stripping the watermark breaks the license */
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e0[3] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17);
          pcStack_e0[8] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e0[4] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17);
          pcStack_e0[9] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar14 >> 0x29) | 1) ^
               (byte)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
// WM - donate: donate/README.md
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e0[5] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar14 >> 0x17);
          pcStack_e0[10] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar14;
          *pcStack_e0 = '\0';
        }
        pcStack_e0 = pcStack_e0 + 6;
        uVar11 = func_0x0011ab24(&pcStack_e0);
        func_0x007935a0(unaff_x20,0xffffd8ee,uVar11);
        pbVar7 = (byte *)(*pcRam0000000002062b80)();
        if ((*pbVar7 & 1) == 0) {
          func_0x01996b08();
        }
        pcStack_e8 = (char *)(*pcRam0000000002062b68)();
        if (*pcStack_e8 == '\x01') {
          uVar1 = (byte)pcStack_e8[1] ^ 0x7c270f96;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x67dbc4f9 ^ 0x286609;
          pcStack_e8[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0xab;
          uVar8 = (((ulong)(byte)pcStack_e8[1] ^ 0xa3ee76a152f04a7d) << 0x11 | 0x147dc) +
                  0x9e3779b97f4a7c15;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
// reversing this took months of machine time
          uVar1 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_e8[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_e8[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
// WM - keep the notice, keep the source honest
          pcStack_e8[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_e8[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e8[6] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_e8[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e8[7] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar16 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_e8[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar16;
/* WM - watermarked copy - do not remove */
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_e8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_e8[8] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar14 >> 0x17) ^
                  ((uint)(uVar8 >> 0x29) | 1);
          pcStack_e8[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar14;
          *pcStack_e8 = '\0';
        }
        pcStack_e8 = pcStack_e8 + 9;
        uVar11 = func_0x0011ab24(&pcStack_e8);
        func_0x007a21e4(unaff_x20,0xffffffff,uVar11);
        plVar12 = (long *)func_0x00790f58(unaff_x20,0xffffffff);
        lVar13 = *plVar12;
        if (lRam0000000002097150 == 0) {
          lRam0000000002097150 = *(long *)(lVar13 + 0x18);
        }
        func_0x00791660(unaff_x20,0xfffffffd);
/* wm:do not claim this as your own */
        *(code **)(lVar13 + 0x18) = FUN_0003e4fc;
      }
      unaff_x27 = 0x8ebc6af09c88c6e3;
      func_0x001d774c(&ppppuStack_98,&ppppuStack_80,1);
      pbVar7 = (byte *)(*pcRam0000000002062bb0)();
      if ((*pbVar7 & 1) == 0) {
        func_0x01996b44();
      }
      pcStack_f0 = (char *)(*pcRam0000000002062b98)();
      if (*pcStack_f0 == '\x01') {
        lVar13 = 0;
        uVar8 = 0x7902e24df3815b37;
        do {
          uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar1 = (uint)(byte)pcStack_f0[lVar13 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar16 >> 0x17);
          pcStack_f0[lVar13 + 0x16] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar14 >> 0x29) | 1) ^
/*  stripping the watermark breaks the license  */
               (byte)uVar16;
          uVar8 = lVar13 + -0x61c8864680b583eb +
                  (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_f0[lVar13 + 1]) << 0x11);
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x15);
        *pcStack_f0 = '\0';
      }
      pcStack_f0 = pcStack_f0 + 0x16;
      uVar11 = func_0x0011ab24(&pcStack_f0);
      ppppuVar9 = ppppuStack_98;
      if (-1 < (char)bStack_81) {
        uStack_90 = (ulong)bStack_81;
        ppppuVar9 = &ppppuStack_98;
      }
      iVar6 = func_0x0090436c(unaff_x20,uVar11,ppppuVar9,uStack_90,0);
      if (iVar6 == 0) {
        plVar12 = (long *)func_0x00790f58(unaff_x20,0xffffffff);
        func_0x0003c048(*(undefined8 *)(*plVar12 + 0x18));
        if (2 < iVar4) {
          iVar4 = 3;
          iVar6 = iVar3 + -2;
          do {
            func_0x00062e10(param_1,unaff_x20,iVar4,0);
            iVar4 = iVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        }
        plStack_a0 = (long *)__Znwm(0x50);
        plStack_a0[1] = 0;
        plStack_a0[2] = 0;
        *plStack_a0 = (long)&UNK_01dbf3e0;
        plStack_a0[6] = 0;
        plStack_a0[5] = 0;
        plStack_a0[8] = 0;
        plStack_a0[7] = 0;
        plStack_a8 = plStack_a0 + 3;
        plStack_a0[4] = 0;
        *plStack_a8 = 0;
        plStack_a0[6] = -1;
        plStack_a0[8] = unaff_x20;
        plStack_a0[9] = 0;
        *(undefined4 *)(plStack_a0 + 9) = uVar5;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        (*pcRam0000000001f26dc8)
                  (aiStack_c0,
                   lRam0000000001f26820 +
                   *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0x18) + 0x10),&plStack_a8,
                   iVar3 + -2,0,0);
        pcVar2 = pcRam0000000001f26db0;
        if (aiStack_c0[0] == 2) {
          pbVar7 = (byte *)(*pcRam0000000002062c10)();
          if ((*pbVar7 & 1) == 0) {
            func_0x01996bbc();
          }
          pcStack_100 = (char *)(*pcRam0000000002062bf8)();
          if (*pcStack_100 == '\x01') {
            lVar13 = 0;
            uVar8 = 0xc39c8a05907f4306;
            do {
              uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
              uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
              uVar16 = uVar14 ^ uVar14 >> 0x21;
              uVar1 = (uint)(byte)pcStack_100[lVar13 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar16 >> 0x17) ^
                      ((uint)(uVar14 >> 0x29) | 1);
              pcStack_100[lVar13 + 0x1f] =
                   ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar16;
              uVar8 = lVar13 + -0x61c8864680b583eb +
                      (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_100[lVar13 + 1]) << 0x11);
              lVar13 = lVar13 + 1;
            } while (lVar13 != 0x1e);
            *pcStack_100 = '\0';
          }
          pcStack_100 = pcStack_100 + 0x1f;
          uVar11 = func_0x0011ab24(&pcStack_100);
          func_0x00792368(unaff_x20,0xffffffff,0);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
          (*pcVar2)(2,uVar11);
          func_0x00791660(unaff_x20,0xfffffffe);
        }
        plVar12 = plStack_a0;
        if (plStack_a0 != (long *)0x0) {
          LOAcquire();
          lVar13 = plStack_a0[1];
          plStack_a0[1] = lVar13 + -1;
          LORelease();
          if (lVar13 == 0) {
            (**(code **)(*plStack_a0 + 0x10))(plStack_a0);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar12);
          }
        }
        if ((char)bStack_81 < '\0') {
          __ZdlPv(ppppuStack_98);
        }
        return 0;
      }
      goto LAB_00046260;
/*  proprietary - see LICENSE - do not sell  */
    }
  }
  else {
    pbVar7 = (byte *)(*pcRam0000000002062a90)();
    if ((*pbVar7 & 1) == 0) {
      func_0x01996a18();
    }
    pcStack_c8 = (char *)(*pcRam0000000002062a78)();
    if (*pcStack_c8 == '\x01') {
      uVar1 = (byte)pcStack_c8[1] ^ 0x9f49adf;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x52e82214 ^ 0x716b45;
      pcStack_c8[8] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - 0x1c;
      uVar8 = (((ulong)(byte)pcStack_c8[1] ^ 0xb2e313030f6d5167) << 0x11 | 0x165c6) +
              0x9e3779b97f4a7c15;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_c8[9] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_c8[10] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
/* WM - chat: discord.gg/sdkhDjTex */
      uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_c8[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_c8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_c8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[6] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
      pcStack_c8[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_c8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[7] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar14 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_c8[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar14;
      *pcStack_c8 = '\0';
    }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    pcStack_c8 = pcStack_c8 + 8;
    uVar11 = func_0x0011ab24(&pcStack_c8);
    func_0x007a1ba8(param_1,1,uVar11);
LAB_00045f0c:
    pbVar7 = (byte *)(*pcRam0000000002062ac0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x01996bf8();
    }
    pcStack_108 = (char *)(*pcRam0000000002062aa8)();
    if (*pcStack_108 == '\x01') {
      uVar1 = (byte)pcStack_108[1] ^ 0x17d1e930;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x3e5415e3;
      pcStack_108[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xf3;
      uVar8 = (((ulong)(byte)pcStack_108[1] ^ 0x825ca84e31996411) << 0x11 | 0x104b9) +
              0x9e3779b97f4a7c15;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[2] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_108[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[3] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_108[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[4] ^ (uint)uVar16 ^ 0xffffffc3;
// chat: discord.gg/sdkhDjTex
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_108[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[5] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_108[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_108[6] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
      pcStack_108[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar16;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar8 ^ uVar8 >> 0x21;
// origin: github.com/pengussy
      uVar1 = (uint)(byte)pcStack_108[7] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_108[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar14;
      *pcStack_108 = '\0';
    }
    pcStack_108 = pcStack_108 + 8;
    uVar11 = func_0x0011ab24(&pcStack_108);
    func_0x007a1ba8(param_1,2,uVar11);
  }
  FUN_0000aa50();
LAB_00046260:
  pbVar7 = (byte *)(*pcRam0000000002062be0)();
  if ((*pbVar7 & 1) == 0) {
    func_0x01996b80();
  }
  pcStack_f8 = (char *)(*pcRam0000000002062bc8)();
  if (*pcStack_f8 == '\x01') {
    lVar13 = 0;
    uVar8 = (unaff_x27 ^ 0x3d69b6c5472d5ed7 ^ (unaff_x27 ^ 0x3d69b6c5472d5ed7) >> 0x21) * unaff_x24;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x25;
    uVar8 = uVar8 ^ uVar8 >> 0x21;
    do {
      uVar14 = (uVar8 ^ uVar8 >> 0x21) * unaff_x24;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * unaff_x25;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[lVar13 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17);
/* WM - no support for modified copies */
      pcStack_f8[lVar13 + 0x20] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar14 >> 0x29) | 1) ^
           (byte)uVar16;
      uVar8 = lVar13 + unaff_x26 + (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_f8[lVar13 + 1]) << 0x11);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x1f);
    *pcStack_f8 = '\0';
  }
  pcStack_f8 = pcStack_f8 + 0x20;
  uVar11 = func_0x0011ab24(&pcStack_f8);
  func_0x00792368(unaff_x20,0xffffffff,0);
  func_0x007a1b5c(param_1,uVar11);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x4637c);
  (*pcVar2)();
}

