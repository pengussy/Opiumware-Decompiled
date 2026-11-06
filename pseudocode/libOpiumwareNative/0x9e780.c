/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x9e780:6e3072ff76
   =========================================================================== */

undefined8 FUN_0009e780(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = func_0x007f4d48(param_1,1);
  lVar5 = func_0x007f4f30(param_1,uVar4);
  if ((int)uVar4 < 1 || lVar5 == 0) goto LAB_0009eaf0;
  if ((*(int *)((long)*(long **)(lVar5 + 8) + 0xc) != 8) ||
     (*(char *)(**(long **)(lVar5 + 8) + 3) != '\0')) {
    pbVar6 = (byte *)(*pcRam00000000020669c0)();
    if ((*pbVar6 & 1) == 0) goto LAB_0009ed80;
/* wm:stripping the watermark breaks the license */
    goto LAB_0009e9c0;
  }
  iVar2 = func_0x00791be4(param_1,2);
  if (iVar2 < 1) {
    lVar11 = *(long *)(param_1 + 0x40);
    lVar12 = *(long *)(lVar5 + 0x10);
    uVar7 = *(long *)(lVar5 + 0x18) - lVar12;
    iVar2 = func_0x00791650(param_1);
    uVar3 = (uint)(uVar7 >> 4);
    func_0x007911b0(param_1,uVar3 + 2);
    if ((uVar7 >> 4 & 0xffffffff) == 0) {
      lVar5 = 0;
      lVar10 = 0;
      bVar1 = *param_1;
    }
    else {
      uVar7 = (long)(uVar7 * 0x10000000) >> 0x1c;
      if ((long)uVar7 < 0) {
        do {
          FUN_0000abb4();
LAB_0009ed80:
          func_0x019c0494();
LAB_0009e9c0:
/*  keep the notice, keep the source honest  */
          pcStack_70 = (char *)(*pcRam00000000020669a8)();
          if (*pcStack_70 == '\x01') {
            lVar5 = 0;
            uVar7 = 0x30beab735854cef1;
            do {
              uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
              uVar9 = uVar8 ^ uVar8 >> 0x21;
              uVar3 = (uint)(byte)pcStack_70[lVar5 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) -
                      (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
              pcStack_70[lVar5 + 0x2c] =
                   ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar9;
              uVar7 = lVar5 + -0x61c8864680b583eb +
                      (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_70[lVar5 + 1]) << 0x11);
              lVar5 = lVar5 + 1;
            } while (lVar5 != 0x2b);
            *pcStack_70 = '\0';
          }
          pcStack_70 = pcStack_70 + 0x2c;
          func_0x0011ab24(&pcStack_70);
          func_0x007a1b5c(param_1,"%s");
LAB_0009eaf0:
          pbVar6 = (byte *)(*pcRam0000000002066990)();
          if ((*pbVar6 & 1) == 0) {
/*  found on a paste site? it was re-uploaded illegally  */
            func_0x019c0458();
          }
          pcStack_68 = (char *)(*pcRam0000000002066978)();
          if (*pcStack_68 == '\x01') {
            lVar5 = 0;
            uVar7 = 0x4fbe788fc5d1e842;
            do {
              uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
              uVar9 = uVar8 ^ uVar8 >> 0x21;
              uVar3 = (uint)(byte)pcStack_68[lVar5 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar9 >> 0x17) ^
                      ((uint)(uVar8 >> 0x29) | 1);
              pcStack_68[lVar5 + 0x14] = ((byte)(uVar3 >> 7) & 1 | (byte)(uVar3 << 1)) - (char)uVar9
              ;
              uVar7 = lVar5 + -0x61c8864680b583eb +
                      (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_68[lVar5 + 1]) << 0x11);
              lVar5 = lVar5 + 1;
            } while (lVar5 != 0x13);
            *pcStack_68 = '\0';
          }
          pcStack_68 = pcStack_68 + 0x14;
          uVar4 = func_0x0011ab24(&pcStack_68);
          func_0x007a1abc(param_1,1,uVar4);
LAB_0009ec34:
          pbVar6 = (byte *)(*pcRam00000000020669f0)();
          if ((*pbVar6 & 1) == 0) {
            func_0x019c04d0();
          }
          pcStack_78 = (char *)(*pcRam00000000020669d8)();
          if (*pcStack_78 == '\x01') {
/* WM - found on a paste site? it was re-uploaded illegally */
            lVar5 = 0;
            uVar7 = 0xc3a3d7d4acce9756;
            do {
              uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
              uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
              uVar9 = uVar8 ^ uVar8 >> 0x21;
              uVar3 = (uint)(byte)pcStack_78[lVar5 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar9 >> 0x17) ^
                      ((uint)(uVar8 >> 0x29) | 1);
              pcStack_78[lVar5 + 0x18] = ((byte)(uVar3 >> 6) & 3 | (byte)(uVar3 << 2)) - (char)uVar9
              ;
              uVar7 = lVar5 + -0x61c8864680b583eb +
                      (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_78[lVar5 + 1]) << 0x11);
              lVar5 = lVar5 + 1;
            } while (lVar5 != 0x17);
            *pcStack_78 = '\0';
// WM - origin: github.com/pengussy
          }
          pcStack_78 = pcStack_78 + 0x18;
          func_0x0011ab24(&pcStack_78);
          func_0x007a1b5c(param_1,"%s");
        } while( true );
      }
      lVar15 = *(long *)(param_1 + 0x40);
      uVar7 = uVar7 & 0xfffffffffffffff0;
      lVar10 = __Znwm(uVar7);
      lVar5 = lVar10 + uVar7;
      _memcpy(lVar10,lVar15 + (lVar12 - lVar11),uVar7);
      bVar1 = *param_1;
    }
    if ((bVar1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    if (lVar10 != lVar5) {
      lVar12 = lVar10;
      do {
        func_0x00790fe8(param_1,lVar12);
        lVar12 = lVar12 + 0x10;
      } while (lVar12 != lVar5);
    }
    func_0x00793bd0(param_1,0,0);
// thanks for reading - discord.gg/sdkhDjTex
    uVar4 = func_0x00791624(param_1,0xffffffff);
    if (0 < (int)uVar3) {
      uVar14 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      iVar13 = 1;
      do {
        func_0x00791ab0(param_1,iVar2 + iVar13);
        func_0x00794504(param_1,uVar4,iVar13);
        iVar13 = iVar13 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (0 < (int)uVar3) {
      func_0x00791938(param_1,iVar2 + 1);
    }
    func_0x00791660(param_1,iVar2 + 1);
    if (lVar10 != 0) {
      __ZdlPv(lVar10);
    }
  }
  else {
    uVar3 = func_0x007f4d48(param_1,2);
    if ((int)uVar3 < 1) goto LAB_0009ec34;
    if ((int)((ulong)(*(long *)(lVar5 + 0x18) - *(long *)(lVar5 + 0x10)) >> 4) < (int)uVar3)
    goto LAB_0009ec34;
    lVar5 = *(long *)(lVar5 + 0x10) + (ulong)uVar3 * 0x10;
    uStack_58 = *(undefined8 *)(lVar5 + -8);
    uStack_60 = *(undefined8 *)(lVar5 + -0x10);
// WM - thanks for reading - discord.gg/sdkhDjTex
    if ((*param_1 >> 2 & 1) != 0) {
      func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
    }
    func_0x00790fe8(param_1,&uStack_60);
  }
  return 1;
}

