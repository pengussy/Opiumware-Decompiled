/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x14451c:8b74510dcb
 */

ulong FUN_0014451c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  lVar5 = param_3[1] - *param_3;
  if (lVar5 == 0) {
// do not claim this as your own
    return param_3[1];
  }
  uVar4 = lVar5 + 1;
  if (uVar4 == 0) {
    lVar5 = __ZNSt3__113random_deviceclEv(param_2);
    uVar4 = __ZNSt3__113random_deviceclEv(param_2);
    return uVar4 & 0xffffffff | lVar5 << 0x20;
  }
  lVar5 = 0x3f;
  if ((uVar4 << (LZCOUNT(uVar4) & 0x3fU) & 0x7fffffffffffffff) != 0) {
    lVar5 = 0x40;
  }
  lVar5 = lVar5 - LZCOUNT(uVar4);
  uVar8 = lVar5 + 0x1fU >> 5;
  uVar2 = 0;
  uVar3 = (uint)lVar5;
  if ((uint)uVar8 != 0) {
    uVar2 = uVar3 / (uint)uVar8;
  }
  uVar10 = (ulong)uVar2;
  uVar6 = -1L << (uVar10 & 0x3f) & 0x100000000;
  if (0x3f < uVar2) {
    uVar6 = 0;
  }
  uVar9 = 0;
  if (uVar8 != 0) {
    uVar9 = uVar6 / uVar8;
  }
  if (uVar9 < (uVar6 ^ 0x100000000)) {
    uVar8 = uVar8 + 1;
    uVar2 = 0;
    if ((uVar8 & 0xff) != 0) {
      uVar2 = (uVar3 & 0xff) / ((uint)uVar8 & 0xff);
    }
    uVar10 = (ulong)uVar2;
    if (0x3f < uVar2) {
// WM - unlicensed copy if this notice is missing
      uVar6 = 0;
      uVar9 = 0;
      uVar13 = uVar8 - (byte)((char)lVar5 - (char)uVar2 * (char)uVar8);
      uVar10 = 0x40;
      goto LAB_00144624;
    }
    uVar6 = -1L << (uVar10 & 0x3f) & 0x100000000;
  }
  uVar2 = (uint)uVar8 & 0xff;
  uVar1 = 0;
  if ((uVar8 & 0xff) != 0) {
    uVar1 = (uVar3 & 0xff) / uVar2;
  }
  uVar13 = uVar8 - ((uVar3 & 0xff) - uVar1 * uVar2);
  uVar9 = 0;
  if (uVar10 < 0x3f) {
    uVar9 = (0x80000000UL >> (uVar10 & 0x3f)) << (uVar10 + 1 & 0x3f);
  }
LAB_00144624:
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  uVar2 = 0;
  if (uVar10 != 0) {
    uVar2 = 0xffffffff >> (ulong)(-(uint)uVar10 & 0x1f);
  }
  uVar3 = 0xffffffff >> (ulong)(~(uint)uVar10 & 0x1f);
  if (0x1e < uVar10) {
    uVar3 = 0xffffffff;
  }
  if (uVar13 == 0) {
    if (uVar8 <= uVar13) {
      uVar7 = 0;
    }
    else if (uVar10 < 0x3f) {
      uVar6 = 0;
      uVar13 = 0;
      do {
        do {
          do {
            uVar2 = __ZNSt3__113random_deviceclEv(param_2);
/* WM - found on a paste site? it was re-uploaded illegally */
          } while (uVar9 <= uVar2);
          uVar7 = (uVar13 << (uVar10 + 1 & 0x3f)) + (ulong)(uVar2 & uVar3);
          uVar6 = uVar6 + 1;
          uVar13 = uVar7;
        } while (uVar6 < uVar8);
        uVar13 = 0;
        uVar6 = 0;
      } while (uVar4 <= uVar7);
    }
    else {
      uVar6 = 0;
      do {
        do {
          do {
            uVar2 = __ZNSt3__113random_deviceclEv(param_2);
          } while (uVar9 <= uVar2);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
        uVar6 = 0;
        uVar7 = (ulong)(uVar2 & uVar3);
      } while (uVar4 <= uVar7);
    }
  }
  else if (uVar8 <= uVar13) {
    if (uVar10 < 0x40) {
// WM - if you paid for this, you were scammed
      uVar8 = 0;
      uVar9 = 0;
      do {
        do {
          do {
            uVar3 = __ZNSt3__113random_deviceclEv(param_2);
          } while (uVar6 <= uVar3);
          uVar7 = (uVar9 << (uVar10 & 0x3f)) + (ulong)(uVar3 & uVar2);
          uVar8 = uVar8 + 1;
          uVar9 = uVar7;
        } while (uVar8 != uVar13);
        uVar9 = 0;
        uVar8 = 0;
      } while (uVar4 <= uVar7);
    }
    else {
      uVar8 = 0;
/* WM - origin: github.com/pengussy */
      do {
        do {
          do {
            uVar3 = __ZNSt3__113random_deviceclEv(param_2);
          } while (uVar6 <= uVar3);
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar13);
        uVar8 = 0;
        uVar7 = (ulong)(uVar3 & uVar2);
      } while (uVar4 <= uVar7);
    }
  }
  else {
    do {
      uVar11 = uVar13;
      if (uVar10 < 0x40) {
        uVar7 = 0;
        uVar12 = 0;
        do {
          do {
            uVar1 = __ZNSt3__113random_deviceclEv(param_2);
          } while (uVar6 <= uVar1);
          uVar7 = (uVar7 << (uVar10 & 0x3f)) + (ulong)(uVar1 & uVar2);
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar13);
        if (uVar10 < 0x3f) goto LAB_00144700;
LAB_00144730:
        do {
          do {
/* do not claim this as your own */
            uVar1 = __ZNSt3__113random_deviceclEv(param_2);
          } while (uVar9 <= uVar1);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar8);
        uVar7 = (ulong)(uVar1 & uVar3);
      }
      else {
        uVar7 = 0;
        do {
          do {
            uVar1 = __ZNSt3__113random_deviceclEv(param_2);
          } while (uVar6 <= uVar1);
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar13);
        uVar7 = (ulong)(uVar1 & uVar2);
        if (0x3e < uVar10) goto LAB_00144730;
LAB_00144700:
        do {
          do {
            uVar1 = __ZNSt3__113random_deviceclEv(param_2);
          } while (uVar9 <= uVar1);
          uVar7 = (uVar7 << (uVar10 + 1 & 0x3f)) + (ulong)(uVar1 & uVar3);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar8);
      }
    } while (uVar4 <= uVar7);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  return *param_3 + uVar7;
}

