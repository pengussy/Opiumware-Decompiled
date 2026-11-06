/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2027cc:9adfb57512
   =========================================================================== */

undefined8 FUN_002027cc(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 ****ppppuVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcStack_150;
  char *pcStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined8 ****ppppuStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 ****ppppuStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 ****ppppuStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 ****ppppuStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 ****ppppuStack_c8;
  ulong uStack_c0;
/* origin: github.com/pengussy - github.com/pengussy */
  undefined8 uStack_b8;
  undefined8 ****ppppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long alStack_88 [3];
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x00791efc(param_1,1);
  iVar5 = 1;
  if (iVar3 != 0) {
    iVar5 = 2;
  }
  iVar3 = func_0x00791e54(param_1,iVar5);
  if (iVar3 == 0) {
    pbVar8 = (byte *)(*pcRam0000000002076230)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019d7e54();
    }
    pcStack_150 = (char *)(*pcRam0000000002076218)();
    if (*pcStack_150 == '\x01') {
      uVar1 = (byte)pcStack_150[1] ^ 0x6fa30825;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xef88b0e0;
// unlicensed copy if this notice is missing
      pcStack_150[8] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - 0x1d ^ 0xe6;
      uVar10 = (((ulong)(byte)pcStack_150[1] ^ 0x1a7fed4189ffce4b) << 0x11 | 0x34ff) +
               0x9e3779b97f4a7c15;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_150[9] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_150[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_150[10] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
/* wm:thanks for reading - discord.gg/sdkhDjTex */
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_150[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_150[0xb] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_150[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_150[0xc] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_150[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
      pcStack_150[0xd] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar12 >> 0x29) | 1) ^
/*  donate: donate/README.md  */
           (byte)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_150[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_150[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar12 >> 0x17);
      pcStack_150[0xe] =
           ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar12;
      *pcStack_150 = '\0';
    }
    pcStack_150 = pcStack_150 + 8;
    uVar6 = func_0x0011ab24(&pcStack_150);
    func_0x007a1ba8(param_1,iVar5,uVar6);
LAB_00203168:
/* wm:if you paid for this, you were scammed */
    pbVar8 = (byte *)(*pcRam0000000002076260)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019d7e18();
    }
    pcStack_148 = (char *)(*pcRam0000000002076248)();
    if (*pcStack_148 == '\x01') {
      uVar1 = (byte)pcStack_148[1] ^ 0x1e52cf8f;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x3a9a043d ^ 0x42b159;
      pcStack_148[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0xb4;
      uVar10 = (((ulong)(byte)pcStack_148[1] ^ 0x3518985cf2f7c231) << 0x11 | 0x6a31) +
               0x9e3779b97f4a7c15;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_148[2] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_148[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_148[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_148[3] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_148[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
/* WM - more drops soon - github.com/pengussy */
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_148[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_148[4] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_148[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_148[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_148[5] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_148[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_148[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar12 ^ uVar12 >> 0x21;
      uVar1 = (uint)(byte)pcStack_148[6] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
              ((uint)(uVar12 >> 0x29) | 1);
      pcStack_148[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_148[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
// do not claim this as your own
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_148[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_148[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
      *pcStack_148 = '\0';
    }
    pcStack_148 = pcStack_148 + 8;
    uVar6 = func_0x0011ab24(&pcStack_148);
    func_0x007a1ba8(param_1,iVar5 + 1,uVar6);
  }
  else {
    iVar3 = func_0x00791e54(param_1,iVar5 + 1);
    if (iVar3 == 0) goto LAB_00203168;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar6 = func_0x00792368(param_1,iVar5,&uStack_90);
    uVar7 = func_0x00792368(param_1,iVar5 + 1,&uStack_98);
    uVar10 = uStack_90;
    if (uStack_90 < 0x7ffffffffffffff7) {
      if (uStack_90 < 0x17) {
        uStack_a0 = CONCAT17((char)uStack_90,(undefined7)uStack_a0);
        ppppuVar9 = &ppppuStack_b0;
      }
      else {
        uVar12 = (uStack_90 & 0x7ffffffffffffff8) + 8;
        uVar13 = 0x19;
        if (uVar12 != 0x18) {
          uVar13 = uVar12;
        }
        ppppuVar9 = (undefined8 ****)__Znwm(uVar13);
        uStack_a0 = uVar13 | 0x8000000000000000;
        uStack_a8 = uVar10;
/*  unlicensed copy if this notice is missing  */
        ppppuStack_b0 = ppppuVar9;
      }
      _memmove(ppppuVar9,uVar6,uVar10);
      *(undefined1 *)((long)ppppuVar9 + uVar10) = 0;
      uVar10 = uStack_98;
      if (uStack_98 < 0x7ffffffffffffff7) {
        if (uStack_98 < 0x17) {
          uStack_b8 = CONCAT17((char)uStack_98,(undefined7)uStack_b8);
          ppppuVar9 = &ppppuStack_c8;
        }
        else {
          uVar12 = (uStack_98 & 0x7ffffffffffffff8) + 8;
          uVar13 = 0x19;
          if (uVar12 != 0x18) {
            uVar13 = uVar12;
          }
          ppppuVar9 = (undefined8 ****)__Znwm(uVar13);
          uStack_b8 = uVar13 | 0x8000000000000000;
          uStack_c0 = uVar10;
          ppppuStack_c8 = ppppuVar9;
        }
        _memmove(ppppuVar9,uVar7,uVar10);
/* keep the notice, keep the source honest */
        *(undefined1 *)((long)ppppuVar9 + uVar10) = 0;
        pbVar8 = (byte *)(*pcRam0000000002076290)();
        if ((*pbVar8 & 1) == 0) goto LAB_00202e10;
        do {
          pcStack_138 = (char *)(*pcRam0000000002076278)();
          if (*pcStack_138 == '\x01') {
            uVar1 = (byte)pcStack_138[1] ^ 0x413c2a7e;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x52e34683 ^ 0x422b47;
            pcStack_138[5] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x43;
            uVar10 = (((ulong)(byte)pcStack_138[1] ^ 0x4c244ce98954dc6b) << 0x11 | 0x9848) +
                     0x9e3779b97f4a7c15;
            uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_138[2] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar12 >> 0x29) | 1);
            pcStack_138[6] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
            uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_138[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
            uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar1 = (uint)(byte)pcStack_138[3] ^ (uint)uVar13 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^
                    ((uint)(uVar12 >> 0x29) | 1);
            pcStack_138[7] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar13;
// WM - watermarked copy - do not remove
            uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_138[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_138[4] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar12 >> 0x17) ^
                    ((uint)(uVar10 >> 0x29) | 1);
            pcStack_138[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar12;
            *pcStack_138 = '\0';
          }
          pcStack_138 = pcStack_138 + 5;
          uVar6 = func_0x0011ab24(&pcStack_138);
          uVar10 = _strlen();
          if (0x7ffffffffffffff6 < uVar10) {
            FUN_0000aa50();
            goto LAB_00203820;
          }
          if (uVar10 < 0x17) {
            uStack_d0 = CONCAT17((char)uVar10,(undefined7)uStack_d0);
            ppppuVar9 = &ppppuStack_e0;
          }
          else {
            uVar12 = (uVar10 & 0x7ffffffffffffff8) + 8;
            uVar13 = 0x19;
            if (uVar12 != 0x18) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
              uVar13 = uVar12;
            }
            ppppuVar9 = (undefined8 ****)__Znwm(uVar13);
            uStack_d0 = uVar13 | 0x8000000000000000;
            ppppuStack_e0 = ppppuVar9;
            uStack_d8 = uVar10;
          }
          _memmove(ppppuVar9,uVar6,uVar10);
          *(undefined1 *)((long)ppppuVar9 + uVar10) = 0;
          iVar4 = func_0x00791e54(param_1,iVar5 + 2);
          iVar3 = iVar5 + 3;
          if (iVar4 != 0) {
            iVar3 = iVar5 + 2;
          }
          iVar5 = func_0x00791be4(param_1,iVar3);
          if (0 < iVar5) {
            iVar5 = func_0x00791e54(param_1,iVar3);
            if (iVar5 == 0) {
              pbVar8 = (byte *)(*pcRam00000000020762c0)();
              if ((*pbVar8 & 1) == 0) {
                func_0x019d7ddc();
              }
              pcStack_140 = (char *)(*pcRam00000000020762a8)();
              if (*pcStack_140 == '\x01') {
                uVar1 = (byte)pcStack_140[1] ^ 0x2bcfb9ad;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xcd10d658 ^ 0x11ccbb;
                pcStack_140[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x92;
                uVar10 = (((ulong)(byte)pcStack_140[1] ^ 0xa2a7b4cc6ad66f2e) << 0x11 | 0x1454f) +
                         0x9e3779b97f4a7c15;
                uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
                uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar12 ^ uVar12 >> 0x21;
                uVar1 = (uint)(byte)pcStack_140[2] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17) ^
                        ((uint)(uVar12 >> 0x29) | 1);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                pcStack_140[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[2]) << 0x11) +
                         0x9e3779b97f4a7c16;
                uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
                uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar12 ^ uVar12 >> 0x21;
                uVar1 = (uint)(byte)pcStack_140[3] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17) ^
                        ((uint)(uVar12 >> 0x29) | 1);
                pcStack_140[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[3]) << 0x11) +
                         0x9e3779b97f4a7c17;
                uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
                uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar12 ^ uVar12 >> 0x21;
                uVar1 = (uint)(byte)pcStack_140[4] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17) ^
                        ((uint)(uVar12 >> 0x29) | 1);
                pcStack_140[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[4]) << 0x11) +
                         0x9e3779b97f4a7c18;
                uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
                uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar12 ^ uVar12 >> 0x21;
                uVar1 = (uint)(byte)pcStack_140[5] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17) ^
                        ((uint)(uVar12 >> 0x29) | 1);
                pcStack_140[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[5]) << 0x11) +
                         0x9e3779b97f4a7c19;
                uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
                uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar12 ^ uVar12 >> 0x21;
                uVar1 = (uint)(byte)pcStack_140[6] ^ (uint)uVar13 ^ 0xffffffc3;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17) ^
                        ((uint)(uVar12 >> 0x29) | 1);
                pcStack_140[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
                uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_140[6]) << 0x11) +
                         0x9e3779b97f4a7c1a;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar12 = uVar10 ^ uVar10 >> 0x21;
                uVar1 = (uint)(byte)pcStack_140[7] ^ (uint)uVar12 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar12 >> 0x17) ^
                        ((uint)(uVar10 >> 0x29) | 1);
                pcStack_140[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar12;
                *pcStack_140 = '\0';
              }
              pcStack_140 = pcStack_140 + 8;
              uVar6 = func_0x0011ab24(&pcStack_140);
              func_0x007a1ba8(param_1,iVar3,uVar6);
              goto LAB_00203820;
            }
            alStack_88[0] = 0;
            uVar6 = func_0x00792368(param_1,iVar3,alStack_88);
            func_0x0012851c(&ppppuStack_e0,uVar6,alStack_88[0]);
          }
          uVar10 = uStack_a0;
          iVar5 = (int)uStack_a0._7_1_;
          if ((long)uStack_a0 < 0) {
/* watermarked copy - do not remove */
            func_0x00017ae8(&ppppuStack_130,ppppuStack_b0,uStack_a8);
          }
          else {
            uStack_128 = uStack_a8;
            ppppuStack_130 = ppppuStack_b0;
            uStack_120 = uStack_a0;
          }
          uVar12 = uStack_b8;
          if ((long)uStack_b8 < 0) {
            func_0x00017ae8(&ppppuStack_118,ppppuStack_c8,uStack_c0);
          }
          else {
            uStack_110 = uStack_c0;
            ppppuStack_118 = ppppuStack_c8;
            uStack_108 = uStack_b8;
          }
          if ((long)uStack_d0 < 0) {
            func_0x00017ae8(&ppppuStack_100,ppppuStack_e0,uStack_d8);
          }
          else {
            uStack_f8 = uStack_d8;
            ppppuStack_100 = ppppuStack_e0;
            uStack_f0 = uStack_d0;
          }
          plStack_70 = (long *)0x0;
          plStack_70 = (long *)__Znwm(0x50);
          *plStack_70 = (long)&UNK_01dc08e8;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          plStack_70[2] = uStack_128;
          plStack_70[1] = (long)ppppuStack_130;
          plStack_70[3] = uStack_120;
          ppppuStack_130 = (undefined8 ****)0x0;
          uStack_128 = 0;
          uStack_120 = 0;
          plStack_70[5] = uStack_110;
          plStack_70[4] = (long)ppppuStack_118;
          plStack_70[6] = uStack_108;
          ppppuStack_118 = (undefined8 ****)0x0;
          uStack_110 = 0;
          uStack_108 = 0;
          plStack_70[8] = uStack_f8;
          plStack_70[7] = (long)ppppuStack_100;
          plStack_70[9] = uStack_f0;
          ppppuStack_100 = (undefined8 ****)0x0;
/* do not claim this as your own - github.com/pengussy */
          uStack_f8 = 0;
          uStack_f0 = 0;
          param_1 = func_0x001e7c24(param_1,alStack_88);
          if (plStack_70 == alStack_88) {
            lVar11 = 0x20;
LAB_00202d34:
            (**(code **)(*plStack_70 + lVar11))();
          }
          else if (plStack_70 != (long *)0x0) {
            lVar11 = 0x28;
            goto LAB_00202d34;
          }
          if ((long)uStack_f0 < 0) {
            __ZdlPv(ppppuStack_100);
            if (-1 < (long)uStack_108) goto LAB_00202d50;
LAB_00202db4:
            __ZdlPv(ppppuStack_118);
            if (-1 < (long)uStack_120) goto LAB_00202d58;
LAB_00202dc4:
            __ZdlPv(ppppuStack_130);
            if (-1 < (long)uStack_d0) goto LAB_00202d60;
/*  no support for modified copies  */
LAB_00202dd4:
            __ZdlPv(ppppuStack_e0);
            if (-1 < (long)uVar12) goto LAB_00202d64;
LAB_00202de0:
            __ZdlPv(ppppuStack_c8);
            if (-1 < (long)uVar10) goto LAB_00202d68;
LAB_00202dec:
            __ZdlPv(ppppuStack_b0);
            if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
              return param_1;
            }
          }
          else {
            if ((long)uStack_108 < 0) goto LAB_00202db4;
LAB_00202d50:
            if ((long)uStack_120 < 0) goto LAB_00202dc4;
LAB_00202d58:
            if ((long)uStack_d0 < 0) goto LAB_00202dd4;
LAB_00202d60:
            if ((long)uVar12 < 0) goto LAB_00202de0;
LAB_00202d64:
            if ((long)uVar10 < 0) goto LAB_00202dec;
LAB_00202d68:
// proprietary - see LICENSE - do not sell
            if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
              return param_1;
            }
          }
          ___stack_chk_fail();
LAB_00202e10:
          func_0x019d7da0();
        } while( true );
      }
      FUN_0000aa50();
      goto LAB_00203820;
    }
  }
  FUN_0000aa50();
LAB_00203820:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x203824);
  (*pcVar2)();
}

