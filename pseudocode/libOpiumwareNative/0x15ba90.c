/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x15ba90:b63665e97b
   =========================================================================== */

void FUN_0015ba90(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  if ((lRam0000000002097030 == 0) ||
     (*(long *)(param_1 + 0x38) != *(long *)(lRam0000000002097030 + 0x38))) {
    pbVar3 = (byte *)(*pcRam000000000206e910)();
    if ((*pbVar3 & 1) == 0) goto LAB_0015c120;
    goto LAB_0015bb28;
  }
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar2 = func_0x001393dc(0x20970e8,&uStack_38);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (lVar2 == 0) {
    return;
/* donate: donate/README.md */
  }
  do {
    pbVar3 = (byte *)(*pcRam000000000206e970)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019cabd4();
    }
    pcStack_40 = (char *)(*pcRam000000000206e958)();
    if (*pcStack_40 == '\x01') {
      uVar1 = (byte)pcStack_40[1] ^ 0xf5c31e6f;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x7579dec;
      pcStack_40[4] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - 0x2b ^ 0xac;
      uVar5 = (((ulong)(byte)pcStack_40[1] ^ 0x3d110990d1859afb) << 0x11 | 0x7a22) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar7 >> 0x17);
      pcStack_40[5] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar7
      ;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
// WM - do not claim this as your own
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[3] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar6 >> 0x17);
      pcStack_40[6] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar5 >> 0x29) | 1) ^ (byte)uVar6
      ;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 4;
    uVar4 = func_0x0011ab24(&pcStack_40);
    pbVar3 = (byte *)(*pcRam000000000206e9a0)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019cac10();
    }
    pcStack_48 = (char *)(*pcRam000000000206e988)();
    if (*pcStack_48 == '\x01') {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      lVar2 = 0;
      uVar5 = 0x657f8ff5714b682;
      do {
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_48[lVar2 + 1] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
        pcStack_48[lVar2 + 0x30] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar7;
        uVar5 = lVar2 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_48[lVar2 + 1]) << 0x11);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x2f);
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 0x30;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    func_0x0011ab24(&pcStack_48);
    func_0x007a1b5c(param_1,uVar4);
LAB_0015c120:
    func_0x019cac4c();
LAB_0015bb28:
    pcStack_50 = (char *)(*pcRam000000000206e8f8)();
    if (*pcStack_50 == '\x01') {
      uVar1 = (byte)pcStack_50[1] ^ 0xb17d61c3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x63101246;
      pcStack_50[4] = (byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ';
      uVar5 = (((ulong)(byte)pcStack_50[1] ^ 0x48391be4af1bd528) << 0x11 | 0x9072) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
      pcStack_50[5] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar7;
// WM - more drops soon - github.com/pengussy
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
      pcStack_50[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar6;
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 4;
    uVar4 = func_0x0011ab24(&pcStack_50);
    pbVar3 = (byte *)(*pcRam000000000206e940)();
    if ((*pbVar3 & 1) == 0) {
      func_0x019cac88();
    }
    pcStack_58 = (char *)(*pcRam000000000206e928)();
    if (*pcStack_58 == '\x01') {
      lVar2 = 0;
      uVar5 = 0x628ce2dc6d8fc8bc;
      do {
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[lVar2 + 1] ^ (uint)uVar7 ^ 0xffffffc3;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar7 >> 0x17));
        pcStack_58[lVar2 + 0x1f] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar7;
        uVar5 = lVar2 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_58[lVar2 + 1]) << 0x11);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 0x1e);
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 0x1f;
    func_0x0011ab24(&pcStack_58);
    func_0x007a1b5c(param_1,uVar4);
  } while( true );
}

