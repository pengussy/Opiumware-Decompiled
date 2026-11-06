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
 *  file-id: 0x9f400:1cb455b32e
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0009f400(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar1 = func_0x00791be4(param_1,1);
  if (iVar1 != 8) goto LAB_0009f650;
  iVar1 = func_0x00791db8(param_1,2);
  if (iVar1 == 0) goto LAB_0009fa58;
  func_0x007a1f70(param_1,3);
  plVar3 = (long *)func_0x00790f58(param_1,1);
  lVar9 = *plVar3;
  if (*(char *)(lVar9 + 3) != '\0') goto LAB_0009fda8;
  uVar2 = func_0x00792168(param_1,2,0);
  if ((0 < (int)uVar2) &&
     (pbVar10 = *(byte **)(lVar9 + 0x18), (int)uVar2 <= *(int *)(pbVar10 + 0xb0))) {
    lVar9 = *(long *)(pbVar10 + 0x80) + (ulong)uVar2 * 0x10;
    if ((1 < *(int *)(lVar9 + -4) - 7U) &&
       (puVar4 = (undefined8 *)func_0x00790f58(param_1,3),
       *(int *)(lVar9 + -4) == *(int *)((long)puVar4 + 0xc))) {
      uVar5 = *puVar4;
      *(undefined8 *)(lVar9 + -8) = puVar4[1];
      *(undefined8 *)(lVar9 + -0x10) = uVar5;
      if ((5 < *(int *)(lVar9 + -4)) && ((*pbVar10 >> 2 & 1) != 0)) {
        if ((**(byte **)(lVar9 + -0x10) & 3) != 0) {
/* reversing this took months of machine time */
          func_0x0081b3dc(param_1,pbVar10);
        }
      }
    }
    return 0;
  }
  pbVar10 = (byte *)(*pcRam0000000002066b70)();
  if ((*pbVar10 & 1) == 0) goto LAB_0009feec;
  do {
    pcStack_48 = (char *)(*pcRam0000000002066b58)();
    if (*pcStack_48 == '\x01') {
      lVar9 = 0;
      uVar6 = 0x987a7398f8ab9d2a;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_48[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
        pcStack_48[lVar9 + 0x1d] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar8;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_48[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x1c);
      *pcStack_48 = '\0';
    }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    pcStack_48 = pcStack_48 + 0x1d;
    uVar5 = func_0x0011ab24(&pcStack_48);
    func_0x007a1abc(param_1,2,uVar5);
LAB_0009f650:
    pbVar10 = (byte *)(*pcRam0000000002066ae0)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019c05fc();
    }
    pcStack_38 = (char *)(*pcRam0000000002066ac8)();
    if (*pcStack_38 == '\x01') {
      uVar2 = (byte)pcStack_38[1] ^ 0xb4834971;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0x563acd17;
      pcStack_38[10] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ 0xb2;
      uVar6 = (((ulong)(byte)pcStack_38[1] ^ 0xd391ff66a40a4303) << 0x11 | 0x1a723) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_38[0xb] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_38[0xc] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
// WM - origin: github.com/pengussy
      ;
      pcStack_38[0xd] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_38[0xe] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_38[0xf] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_38[0x10] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[8] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
      ;
      pcStack_38[0x11] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
// WM - no support for modified copies
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar2 = (uint)(byte)pcStack_38[9] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17))
      ;
      pcStack_38[0x12] = ((byte)(uVar2 >> 1) & 0x7f | (char)uVar2 * -0x80) ^ (byte)uVar7;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 10;
    uVar5 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar5);
LAB_0009fa58:
    pbVar10 = (byte *)(*pcRam0000000002066b10)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019c06b0();
    }
    pcStack_50 = (char *)(*pcRam0000000002066af8)();
    if (*pcStack_50 == '\x01') {
      uVar2 = (byte)pcStack_50[1] ^ 0x256ed342;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xcbcf382;
      pcStack_50[8] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ 0x81;
      uVar6 = (((ulong)(byte)pcStack_50[1] ^ 0x7509f6a6b9bb3b1c) << 0x11 | 0xea13) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_50[9] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_50[10] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar8;
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[4] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_50[0xb] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[5] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_50[0xc] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[6] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_50[0xd] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar8;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// proprietary - see LICENSE - do not sell
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar2 = (uint)(byte)pcStack_50[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_50[0xe] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar7;
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 8;
    uVar5 = func_0x0011ab24(&pcStack_50);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_0009fda8:
    pbVar10 = (byte *)(*pcRam0000000002066b40)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019c0638();
    }
/* more drops soon - github.com/pengussy */
    pcStack_40 = (char *)(*pcRam0000000002066b28)();
    if (*pcStack_40 == '\x01') {
      lVar9 = 0;
      uVar6 = 0x62b204f3ce48cfee;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar2 = (uint)(byte)pcStack_40[lVar9 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_40[lVar9 + 0x21] = ((byte)(uVar2 >> 4) & 0xf | (char)uVar2 * '\x10') ^ (byte)uVar8;
        uVar6 = lVar9 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_40[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 0x21;
    uVar5 = func_0x0011ab24(&pcStack_40);
    func_0x007a1abc(param_1,1,uVar5);
LAB_0009feec:
    func_0x019c0674();
  } while( true );
}

