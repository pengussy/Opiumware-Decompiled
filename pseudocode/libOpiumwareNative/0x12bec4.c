/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x12bec4:b9fec6e97e
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0012e138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0012c040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0012e13c) */
/* WARNING: Removing unreachable block (ram,0x0012e1f0) */
/* WARNING: Removing unreachable block (ram,0x00794e08) */
/* WARNING: Removing unreachable block (ram,0x00794e6c) */
/* WARNING: Removing unreachable block (ram,0x00794e58) */
/* WARNING: Removing unreachable block (ram,0x00794e70) */
/* WARNING: Removing unreachable block (ram,0x00794ea0) */
/* WARNING: Removing unreachable block (ram,0x00794ea4) */
/* WARNING: Removing unreachable block (ram,0x00794ed4) */
/* WARNING: Removing unreachable block (ram,0x00794ee4) */
/* WARNING: Removing unreachable block (ram,0x00794eec) */
/* WARNING: Removing unreachable block (ram,0x00794ef4) */
/* WARNING: Removing unreachable block (ram,0x00794ea8) */
/* WARNING: Removing unreachable block (ram,0x00794ec4) */
/* WARNING: Removing unreachable block (ram,0x0012e140) */
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
/* WARNING: Removing unreachable block (ram,0x0012e1b8) */
/* WARNING: Removing unreachable block (ram,0x0012e1bc) */
/* WARNING: Removing unreachable block (ram,0x0012e218) */
/* WARNING: Removing unreachable block (ram,0x0012e224) */
/* WARNING: Removing unreachable block (ram,0x0012e22c) */
/* WARNING: Removing unreachable block (ram,0x0012e234) */
/* WARNING: Removing unreachable block (ram,0x0012e1c0) */
/* WARNING: Removing unreachable block (ram,0x0012c044) */
/* WARNING: Removing unreachable block (ram,0x0012c048) */
/* WARNING: Removing unreachable block (ram,0x0012c074) */
/* WARNING: Removing unreachable block (ram,0x0012c088) */
/* WARNING: Removing unreachable block (ram,0x0012c0ac) */
/* WARNING: Removing unreachable block (ram,0x00802478) */
/* WARNING: Removing unreachable block (ram,0x008024a4) */
/* WARNING: Removing unreachable block (ram,0x00802488) */
/* WARNING: Removing unreachable block (ram,0x0012c094) */
/* WARNING: Removing unreachable block (ram,0x008024b8) */
/* WARNING: Removing unreachable block (ram,0x008024d8) */
/* WARNING: Removing unreachable block (ram,0x008024c8) */

ulong FUN_0012bec4(byte *param_1,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  int iStack_48;
  
  lVar12 = *param_2;
  if (*(char *)(lVar12 + 0x49) == '\x01') {
    *(undefined4 *)(lVar12 + 0x38) = 2;
    func_0x0012dea0(param_1);
    func_0x00791660(param_1,1);
    uVar2 = *(uint *)(*param_2 + 0x44);
    func_0x007911b0(param_1,uVar2 + 1);
    func_0x00793928(param_1,1,7);
    uVar7 = func_0x00791624(param_1,0xffffffff);
    if (*(int *)(*param_2 + 0x40) != 0) {
/*  found on a paste site? it was re-uploaded illegally  */
      if (uVar2 != 0) goto LAB_0012c4f4;
      pbVar10 = (byte *)(*pcRam00000000020632a0)();
      if ((*pbVar10 & 1) == 0) goto LAB_0012caf0;
      goto LAB_0012c3c4;
    }
    if (0 < (int)uVar2) {
      iVar6 = 1;
      uVar20 = (ulong)uVar2;
      do {
        func_0x00793928(param_1,uVar7,iVar6);
        iVar6 = iVar6 + 1;
        uVar4 = (int)uVar20 - 1;
        uVar20 = (ulong)uVar4;
      } while (uVar4 != 0);
    }
    func_0x007917f4(param_1,uVar7);
    return (ulong)uVar2;
  }
  if (*(char *)(lVar12 + 0x48) == '\x01') {
    *(undefined4 *)(lVar12 + 0x38) = 1;
    func_0x00791660(param_1,1);
    func_0x00793928(param_1,1,5);
    uVar7 = func_0x00791624(param_1,0xffffffff);
    func_0x007911b0(param_1,*(int *)(*param_2 + 0x3c) + 4);
    func_0x00793928(param_1,uVar7,0xffffffff);
    iVar6 = func_0x00791e54(param_1,0xffffffff);
    if (iVar6 == 0) {
      uVar11 = 0;
    }
/* wm:watermarked copy - do not remove */
    else {
      puVar8 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
      uVar11 = *puVar8;
    }
    *(undefined8 *)(param_1 + 0x68) = uVar11;
    func_0x00791660(param_1,0xfffffffe);
    func_0x00793928(param_1,uVar7,0);
    if (0 < *(int *)(*param_2 + 0x3c)) {
      iVar6 = 0;
      do {
        iVar6 = iVar6 + 1;
        func_0x00793928(param_1,uVar7,iVar6);
      } while (iVar6 < *(int *)(*param_2 + 0x3c));
    }
    func_0x007917f4(param_1,uVar7);
    plVar9 = (long *)func_0x00790f58(param_1,2);
    lVar12 = *plVar9;
    if ((*(char *)(lVar12 + 3) != '\0') && (*(long **)(lVar12 + 0x20) == (long *)(lVar12 + 0x20))) {
      func_0x007911b0(param_1,0x14);
      if ((*param_1 >> 2 & 1) != 0) {
        func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
      }
      puVar8 = *(undefined8 **)(param_1 + 0x48);
      *puVar8 = **(undefined8 **)(*(long *)(param_1 + 0x30) + 8);
      *(undefined4 *)((long)puVar8 + 0xc) = 8;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
      func_0x00794504(param_1,1,8);
      func_0x007917f4(param_1,2);
      lVar13 = *(long *)(param_1 + 0x30);
      lVar21 = lVar13 - *(long *)(param_1 + 0x18);
/* WM - reversing this took months of machine time */
      lVar15 = *(long *)(param_1 + 0x50) + 0x10;
      *(undefined1 *)(*param_2 + 0x4f) = 1;
      lVar17 = *(long *)(param_1 + 0x40);
      lVar1 = *(long *)(param_1 + 0x48);
      *(long *)(param_1 + 0x50) = lVar15;
      *(long *)(lVar13 + 0x10) = lVar15;
      *(long *)(lVar13 + 0x18) = lVar1 + 0x140;
      if ((*param_1 >> 2 & 1) != 0) {
        func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
        lVar13 = *(long *)(param_1 + 0x30);
      }
      plVar9 = *(long **)(lVar13 + 8);
      *plVar9 = lVar12;
      *(undefined4 *)((long)plVar9 + 0xc) = 8;
      *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x20) = 0;
      *(uint *)(*(long *)(param_1 + 0x30) + 0x2c) = *(uint *)(*(long *)(param_1 + 0x30) + 0x2c) | 2;
      uStack_50 = *(undefined8 *)(lVar12 + 0x18);
      iStack_48 = 0;
      uVar7 = func_0x00802514(param_1,&DAT_0012e3b0,&uStack_50,lVar15 - lVar17,0);
      lVar12 = *(long *)(param_1 + 0x18);
      if ((*param_1 >> 2 & 1) != 0) {
        func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
      }
      puVar8 = (undefined8 *)func_0x008848ec(*(undefined8 *)(*param_2 + 0x18),8);
      puVar14 = *(undefined8 **)(lVar12 + lVar21 + 8);
      uVar11 = *puVar8;
      puVar14[1] = puVar8[1];
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      *puVar14 = uVar11;
      if (((int)uVar7 == 0) &&
         (((bVar3 = param_1[3], bVar3 == 1 || (bVar3 == 0x7f)) || (bVar3 == 6)))) {
        lVar12 = 0x50;
        if (bVar3 != 1) {
          lVar12 = 0x48;
        }
        *(long *)(*param_2 + 0x50) = *(long *)(param_1 + lVar12) - *(long *)(param_1 + 0x40);
        return 0xffffffff;
      }
      lVar12 = *param_2;
      iVar6 = iStack_48;
      if ((int)uVar7 != 0) {
        iVar6 = 1;
      }
      lVar15 = *(long *)(param_1 + 0x18) + *(long *)(lVar12 + 0x30) * 0x30;
      puVar8 = *(undefined8 **)(lVar15 + 0x10);
      if (0 < iVar6) {
        puVar14 = (undefined8 *)(*(long *)(param_1 + 0x48) + (long)iVar6 * -0x10);
        puVar16 = puVar8;
        lVar17 = (long)iVar6;
        do {
          uVar11 = *puVar14;
          puVar16[1] = puVar14[1];
          *puVar16 = uVar11;
          lVar17 = lVar17 + -1;
          puVar14 = puVar14 + 2;
          puVar16 = puVar16 + 2;
        } while (lVar17 != 0);
      }
      puVar14 = puVar8 + (long)iVar6 * 2;
      *(undefined8 **)(lVar15 + 0x10) = puVar8 + -2;
      *(undefined8 **)(param_1 + 0x48) = puVar14;
      *(undefined8 **)(param_1 + 0x50) = puVar8 + -2;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      *(uint *)(lVar15 + 0x2c) = *(uint *)(lVar15 + 0x2c) & 0xfffffffd;
      *(undefined1 *)(lVar12 + 0x4f) = 0;
      if (*(undefined8 **)(*(long *)(param_1 + 0x30) + 0x18) < puVar14) {
        *(undefined8 **)(*(long *)(param_1 + 0x30) + 0x18) = puVar14;
      }
      uVar20 = FUN_0006a5bc(param_1,uVar7);
      return uVar20;
    }
  }
  else if ((param_3 != 1) && (param_3 != 6)) {
    do {
      pbVar10 = (byte *)(*pcRam00000000020632d0)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019ca2b0();
      }
      pcStack_68 = (char *)(*pcRam00000000020632b8)();
      uVar7 = 0xc4ceb9fe1a85ec53;
/* WM - origin: github.com/pengussy */
      if (*pcStack_68 == '\x01') {
        uVar2 = (byte)pcStack_68[1] ^ 0xa07e69fe;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0x7fdc7146;
        pcStack_68[4] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ 0x3d;
        uVar20 = (((ulong)(byte)pcStack_68[1] ^ 0xd58cc64c44ec66f6) << 0x11 | 0x1ab19) +
                 0x9e3779b97f4a7c15;
        uVar18 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
        uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar18 ^ uVar18 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
        pcStack_68[5] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar19;
        uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
        uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar20 ^ uVar20 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[3] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                (((uint)(uVar20 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_68[6] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar18;
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 4;
      param_2 = (long *)func_0x0011ab24(&pcStack_68);
      pbVar10 = (byte *)(*pcRam0000000002063300)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019ca2ec();
      }
      pcStack_70 = (char *)(*pcRam00000000020632e8)();
      if (*pcStack_70 == '\x01') {
/* no support for modified copies */
        lVar12 = 0;
        uVar20 = 0xe90e6d4fb2c2b93b;
        do {
          uVar18 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar2 = (uint)(byte)pcStack_70[lVar12 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) -
                  (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_70[lVar12 + 0x25] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar19
          ;
          uVar20 = lVar12 + -0x61c8864680b583eb +
                   (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_70[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x24);
        *pcStack_70 = '\0';
      }
      pcStack_70 = pcStack_70 + 0x25;
      func_0x0011ab24(&pcStack_70);
      func_0x007a1b5c(param_1,param_2);
LAB_0012caf0:
      func_0x019ca328();
LAB_0012c3c4:
      pcStack_78 = (char *)(*pcRam0000000002063288)();
      if (*pcStack_78 == '\x01') {
        lVar12 = 0;
        uVar20 = 0x262e793d6c357285;
        do {
          uVar18 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar2 = (uint)(byte)pcStack_78[lVar12 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                  (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
          pcStack_78[lVar12 + 0x24] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar19
          ;
          uVar20 = lVar12 + -0x61c8864680b583eb +
                   (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_78[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x23);
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 0x24;
      uVar11 = func_0x0011ab24(&pcStack_78);
      func_0x00792f00(param_1,uVar11);
      func_0x00791198(param_1);
LAB_0012c4f4:
      func_0x00793928(param_1,uVar7,1);
      func_0x00791198(param_1);
      *(undefined1 *)(*param_2 + 0x4c) = 1;
      func_0x0012dea0(param_1);
      pbVar10 = (byte *)(*pcRam0000000002063330)();
/* wm:more drops soon - github.com/pengussy */
      if ((*pbVar10 & 1) == 0) {
        func_0x019ca238();
      }
      pcStack_58 = (char *)(*pcRam0000000002063318)();
      if (*pcStack_58 == '\x01') {
        uVar2 = (byte)pcStack_58[1] ^ 0x9e9f71e;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0xda43c414 ^ 0x79496f;
        pcStack_58[4] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) + 0x23;
        uVar20 = (((ulong)(byte)pcStack_58[1] ^ 0x24d5c03abe417f6) << 0x11 | 0x49a) +
                 0x9e3779b97f4a7c15;
        uVar18 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
        uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
        uVar19 = uVar18 ^ uVar18 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[2] ^ (uint)uVar19 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar19 >> 0x17) ^
                ((uint)(uVar18 >> 0x29) | 1);
        pcStack_58[5] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar19;
        uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
        uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar20 ^ uVar20 >> 0x21;
        uVar2 = (uint)(byte)pcStack_58[3] ^ (uint)uVar18 ^ 0xffffffc3;
/* do not claim this as your own - github.com/pengussy */
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar18 >> 0x17) ^
                ((uint)(uVar20 >> 0x29) | 1);
        pcStack_58[6] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar18;
        *pcStack_58 = '\0';
      }
      pcStack_58 = pcStack_58 + 4;
      uVar7 = func_0x0011ab24(&pcStack_58);
      pbVar10 = (byte *)(*pcRam0000000002063360)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019ca274();
      }
      pcStack_60 = (char *)(*pcRam0000000002063348)();
      if (*pcStack_60 == '\x01') {
        lVar12 = 0;
        uVar20 = 0xf7ad5f985a77a111;
        do {
          uVar18 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar2 = (uint)(byte)pcStack_60[lVar12 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_60[lVar12 + 0x2d] =
               ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar19;
          uVar20 = lVar12 + -0x61c8864680b583eb +
                   (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_60[lVar12 + 1]) << 0x11);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x2c);
        *pcStack_60 = '\0';
      }
      pcStack_60 = pcStack_60 + 0x2d;
      func_0x0011ab24(&pcStack_60);
      func_0x007a1b5c(param_1,uVar7);
    } while( true );
/* thanks for reading - discord.gg/sdkhDjTex */
  }
  bVar5 = *(ushort *)(param_1 + 8) == *(ushort *)(param_1 + 10);
  if (cRam0000000002097a08 == '\0') {
    bVar5 = *(ushort *)(param_1 + 8) <= *(ushort *)(param_1 + 10);
  }
  return (ulong)bVar5;
}

