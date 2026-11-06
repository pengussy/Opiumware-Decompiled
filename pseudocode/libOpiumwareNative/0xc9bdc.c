/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xc9bdc:c6505b98d3
 */

void FUN_000c9bdc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  double dVar14;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  undefined1 uStack_81;
  undefined1 **ppuStack_80;
  undefined1 *puStack_78;
  long *plStack_70;
  undefined1 *puStack_68;
  
  param_3[1] = *param_3;
  iVar1 = func_0x00791be4();
  if (iVar1 == 0xb) {
    ppuStack_80 = (undefined1 **)0x0;
    lVar5 = func_0x007928f8(param_1,param_2,&ppuStack_80);
    if (ppuStack_80 <= &UNK_00100000) goto LAB_000c9db0;
    pbVar6 = (byte *)(*pcRam0000000002069480)();
    if ((*pbVar6 & 1) == 0) {
// origin: github.com/pengussy
      func_0x019c3b30();
    }
    pcStack_b8 = (char *)(*pcRam0000000002069468)();
    if (*pcStack_b8 == '\x01') {
      lVar5 = 0;
      uVar11 = 0xe7a3c2ca818c1601;
      do {
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar2 = (uint)(byte)pcStack_b8[lVar5 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_b8[lVar5 + 0x15] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar13;
        uVar11 = lVar5 + -0x61c8864680b583eb +
                 (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b8[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x14);
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 0x15;
    uVar7 = func_0x0011ab24(&pcStack_b8);
    func_0x007a1abc(param_1,param_2,uVar7);
  }
  iVar1 = func_0x00791e54(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = func_0x00791be4(param_1,param_2);
    if (iVar1 != 7) goto LAB_000ca2e4;
/*  reversing this took months of machine time  */
    uVar2 = func_0x00792558(param_1,param_2);
    if (0x100000 < uVar2) goto LAB_000ca428;
    uVar11 = (ulong)uVar2;
    lVar5 = *param_3;
    if ((ulong)(param_3[2] - lVar5) < uVar11) {
      lVar9 = param_3[1];
      lVar8 = __Znwm(uVar11);
      _memcpy(lVar8,lVar5,lVar9 - lVar5);
      *param_3 = lVar8;
      param_3[1] = lVar8 + (lVar9 - lVar5);
      param_3[2] = lVar8 + uVar11;
      if (lVar5 != 0) {
        __ZdlPv(lVar5);
      }
    }
    if (uVar2 == 0) {
      return;
    }
    iVar1 = 1;
    do {
      func_0x00793928(param_1,param_2,iVar1);
      iVar3 = func_0x00791db8(param_1,0xffffffff);
      if (iVar3 == 0) goto LAB_000ca05c;
      uVar4 = func_0x00792168(param_1,0xffffffff,0);
      if ((0xff < uVar4) ||
         (dVar14 = (double)func_0x007920a4(param_1,0xffffffff,0), dVar14 != (double)uVar4)) {
        pbVar6 = (byte *)(*pcRam0000000002069570)();
        if ((*pbVar6 & 1) == 0) goto LAB_000ca56c;
        goto LAB_000c9f30;
      }
      uStack_81 = (undefined1)uVar4;
      puStack_68 = (undefined1 *)param_3[1];
      ppuStack_80 = &puStack_68;
      puStack_78 = &uStack_81;
      plStack_70 = param_3;
      if (puStack_68 < (undefined1 *)param_3[2]) {
        *puStack_68 = uStack_81;
        puVar10 = puStack_68 + 1;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      }
      else {
        func_0x0003b960(&ppuStack_80);
        puVar10 = puStack_68;
      }
      param_3[1] = (long)puVar10;
      func_0x00791660(param_1,0xfffffffe);
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    return;
  }
  ppuStack_80 = (undefined1 **)0x0;
  lVar5 = func_0x00792368(param_1,param_2,&ppuStack_80);
  if (&UNK_00100000 < ppuStack_80) {
    do {
      pbVar6 = (byte *)(*pcRam00000000020694b0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c3a04();
      }
      pcStack_90 = (char *)(*pcRam0000000002069498)();
      if (*pcStack_90 == '\x01') {
        lVar5 = 0;
        uVar11 = 0x2cea89ccdecbb887;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar2 = (uint)(byte)pcStack_90[lVar5 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
// WM - watermarked copy - do not remove
          uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar13 >> 0x17);
          pcStack_90[lVar5 + 0x15] =
               ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = lVar5 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_90[lVar5 + 1]) << 0x11);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x14);
        *pcStack_90 = '\0';
      }
      pcStack_90 = pcStack_90 + 0x15;
      uVar7 = func_0x0011ab24(&pcStack_90);
      func_0x007a1abc(param_1,param_2,uVar7);
LAB_000ca2e4:
      pbVar6 = (byte *)(*pcRam00000000020694e0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c3a40();
      }
      pcStack_98 = (char *)(*pcRam00000000020694c8)();
/* found on a paste site? it was re-uploaded illegally */
      if (*pcStack_98 == '\x01') {
        lVar5 = 0;
        uVar11 = 0x1f3ad13915ac1c29;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar2 = (uint)(byte)pcStack_98[lVar5 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar13 >> 0x17);
          pcStack_98[lVar5 + 0x1a] =
               ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = lVar5 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_98[lVar5 + 1]) << 0x11);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x19);
        *pcStack_98 = '\0';
      }
      pcStack_98 = pcStack_98 + 0x1a;
      uVar7 = func_0x0011ab24(&pcStack_98);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x007a1ba8(param_1,param_2,uVar7);
LAB_000ca428:
      pbVar6 = (byte *)(*pcRam0000000002069510)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c3a7c();
      }
      pcStack_a0 = (char *)(*pcRam00000000020694f8)();
      if (*pcStack_a0 == '\x01') {
        lVar5 = 0;
        uVar11 = 0xb3d2eca9c6e006cd;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar2 = (uint)(byte)pcStack_a0[lVar5 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar13 >> 0x17);
          pcStack_a0[lVar5 + 0x15] =
               ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = lVar5 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a0[lVar5 + 1]) << 0x11);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x14);
        *pcStack_a0 = '\0';
      }
/* wm:origin: github.com/pengussy */
      pcStack_a0 = pcStack_a0 + 0x15;
      uVar7 = func_0x0011ab24(&pcStack_a0);
      func_0x007a1abc(param_1,param_2,uVar7);
LAB_000ca56c:
      func_0x019c3ab8();
LAB_000c9f30:
      pcStack_a8 = (char *)(*pcRam0000000002069558)();
      if (*pcStack_a8 == '\x01') {
        lVar5 = 0;
        uVar11 = 0xce6cc28558121ff9;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar2 = (uint)(byte)pcStack_a8[lVar5 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
                  (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
          pcStack_a8[lVar5 + 0x21] = ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar13;
          uVar11 = lVar5 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_a8[lVar5 + 1]) << 0x11);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x20);
        *pcStack_a8 = '\0';
      }
      pcStack_a8 = pcStack_a8 + 0x21;
      uVar7 = func_0x0011ab24(&pcStack_a8);
      func_0x007a1abc(param_1,param_2,uVar7);
LAB_000ca05c:
      pbVar6 = (byte *)(*pcRam0000000002069540)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019c3af4();
/* stripping the watermark breaks the license - github.com/pengussy */
      }
      pcStack_b0 = (char *)(*pcRam0000000002069528)();
      if (*pcStack_b0 == '\x01') {
        lVar5 = 0;
        uVar11 = 0x2bc9b061f7e80c7b;
        do {
          uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar2 = (uint)(byte)pcStack_b0[lVar5 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar13 >> 0x17);
          pcStack_b0[lVar5 + 0x21] =
               ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar11 = lVar5 + -0x61c8864680b583eb +
                   (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_b0[lVar5 + 1]) << 0x11);
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0x20);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        *pcStack_b0 = '\0';
      }
      pcStack_b0 = pcStack_b0 + 0x21;
      uVar7 = func_0x0011ab24(&pcStack_b0);
      func_0x007a1abc(param_1,param_2,uVar7);
    } while( true );
  }
LAB_000c9db0:
  if (ppuStack_80 != (undefined1 **)0x0) {
    func_0x001481e0(param_3,lVar5,(undefined *)(lVar5 + (long)ppuStack_80));
  }
  return;
}

