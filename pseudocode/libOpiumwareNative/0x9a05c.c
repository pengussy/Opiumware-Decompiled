/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x9a05c:36268ae614
   =========================================================================== */

undefined8 FUN_0009a05c(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  char *pcStack_40;
  char *pcStack_38;
  
  iVar1 = func_0x00791be4(param_1,1);
  if (iVar1 != 8) {
    pbVar3 = (byte *)(*pcRam0000000002066450)();
    if ((*pbVar3 & 1) == 0) goto LAB_0009a64c;
    goto LAB_0009a118;
  }
  plVar2 = (long *)func_0x00790f58(param_1,1);
  lVar9 = *plVar2;
  if (*(char *)(lVar9 + 3) == '\0') {
    func_0x00793bd0(param_1,0,0);
    if (*(char *)(lVar9 + 4) != '\0') {
      uVar8 = 0;
      do {
        uVar8 = uVar8 + 1;
        func_0x00795ba0(param_1,1,uVar8);
/* watermarked copy - do not remove - github.com/pengussy */
        func_0x00794504(param_1,0xfffffffe,uVar8);
      } while (uVar8 < *(byte *)(lVar9 + 4));
    }
    return 1;
  }
  do {
    pbVar3 = (byte *)(*pcRam0000000002066480)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019bfe04();
    }
    pcStack_40 = (char *)(*pcRam0000000002066468)();
    if (*pcStack_40 == '\x01') {
      lVar9 = 0;
      uVar5 = 0x1045d2206c3a6fa7;
      do {
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
        uVar8 = (uint)(byte)pcStack_40[lVar9 + 1] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar7 >> 0x17);
        pcStack_40[lVar9 + 0x21] =
             ((byte)(uVar8 >> 4) & 0xf | (char)uVar8 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar7;
        uVar5 = lVar9 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[lVar9 + 1]) << 0x11);
        lVar9 = lVar9 + 1;
      } while (lVar9 != 0x20);
      *pcStack_40 = '\0';
    }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    pcStack_40 = pcStack_40 + 0x21;
    uVar4 = func_0x0011ab24(&pcStack_40);
    func_0x007a1abc(param_1,1,uVar4);
LAB_0009a64c:
    func_0x019bfdc8();
LAB_0009a118:
    pcStack_38 = (char *)(*pcRam0000000002066438)();
    if (*pcStack_38 == '\x01') {
      uVar8 = (byte)pcStack_38[1] ^ 0x6336ed16;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) + 0x92eac6c7;
      pcStack_38[10] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') + 0xbb ^ 0xd5;
      uVar5 = (((ulong)(byte)pcStack_38[1] ^ 0xa473de0cb78b471b) << 0x11 | 0x148e7) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar7 >> 0x17);
      pcStack_38[0xb] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar7 >> 0x17);
      pcStack_38[0xc] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[4] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar7 >> 0x17);
      pcStack_38[0xd] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[5] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar7 >> 0x17);
      pcStack_38[0xe] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[6] ^ (uint)uVar7 ^ 0xffffffc3;
/* WM - reversing this took months of machine time */
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar7 >> 0x17);
      pcStack_38[0xf] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[7] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar7 >> 0x17);
      pcStack_38[0x10] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/*  watermarked copy - do not remove  */
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[8] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar7 >> 0x17);
      pcStack_38[0x11] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[9] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 6 & 3 | uVar8 << 2) - (int)(uVar6 >> 0x17);
      pcStack_38[0x12] =
           ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar6
      ;
      *pcStack_38 = '\0';
    }
// proprietary - see LICENSE - do not sell
    pcStack_38 = pcStack_38 + 10;
    uVar4 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar4);
  } while( true );
}

