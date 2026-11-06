/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xd05ac:ed38b8d22e
 */

ulong FUN_000d05ac(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    uVar3 = __ZNSt3__115recursive_mutex6unlockEv(*param_1);
    *(undefined1 *)(param_1 + 1) = 0;
    return uVar3;
  }
  uVar4 = __ZNSt3__120__throw_system_errorEiPKc(1,"unique_lock::unlock: not locked");
  lVar9 = lRam0000000002097038;
  if (lRam0000000002097038 == 0) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
    uVar3 = 0;
  }
  else {
    pbVar5 = (byte *)(*pcRam0000000002069930)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c3fe0();
    }
    pcStack_68 = (char *)(*pcRam0000000002069918)();
    if (*pcStack_68 == '\x01') {
      uVar1 = (byte)pcStack_68[1] ^ 0xb55e2ab2;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x5634a706;
      pcStack_68[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x71;
      uVar3 = (((ulong)(byte)pcStack_68[1] ^ 0xb656d9f2221ab937) << 0x11 | 0x16cad) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_68[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_68[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17))
      ;
      pcStack_68[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
      uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar3 ^ uVar3 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar3 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_68[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      *pcStack_68 = '\0';
    }
    pcStack_68 = pcStack_68 + 6;
    uVar6 = func_0x0011ab24(&pcStack_68);
    func_0x007935a0(uVar4,0xffffd8ee,uVar6);
    uVar3 = func_0x00791efc(uVar4,0xffffffff);
    if ((int)uVar3 != 0) {
      iVar2 = func_0x007927ec(uVar4,0xffffffff);
      if ((iVar2 == iRam0000000001f26d44) &&
         (plVar7 = (long *)func_0x007926a8(uVar4,0xffffffff), *plVar7 == lVar9)) {
        pbVar5 = (byte *)(*pcRam0000000002069960)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019c401c();
        }
        pcStack_70 = (char *)(*pcRam0000000002069948)();
        if (*pcStack_70 == '\x01') {
          uVar1 = (byte)pcStack_70[1] ^ 0x86122b97;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xe8230f26;
/* wm:unlicensed copy if this notice is missing */
          pcStack_70[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x54;
          uVar3 = (((ulong)(byte)pcStack_70[1] ^ 0xb60ef237fb05846c) << 0x11 | 0x16c1d) +
                  0x9e3779b97f4a7c15;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
/*  unlicensed copy if this notice is missing  */
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[7] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
/* WM - chat: discord.gg/sdkhDjTex */
          uVar1 = (uint)(byte)pcStack_70[8] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[9] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[10] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_70[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
          uVar3 = (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_70[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar3 = (uVar3 ^ uVar3 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar3 ^ uVar3 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[0xb] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar3 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_70[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar10;
          *pcStack_70 = '\0';
        }
        pcStack_70 = pcStack_70 + 0xc;
        uVar6 = func_0x0011ab24(&pcStack_70);
        func_0x007935a0(uVar4,0xffffffff,uVar6);
        iVar2 = func_0x00791be4(uVar4,0xffffffff);
        if (iVar2 == 8) {
          func_0x00791ab0(uVar4,0xfffffffe);
          pbVar5 = (byte *)(*pcRam0000000002069990)();
          if ((*pbVar5 & 1) == 0) {
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
            func_0x019c4058();
          }
          pcStack_78 = (char *)(*pcRam0000000002069978)();
          if (*pcStack_78 == '\x01') {
            lVar8 = 0;
            uVar3 = 0x4a945faa4bc82885;
            do {
              uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
              uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
              uVar11 = uVar10 ^ uVar10 >> 0x21;
              uVar1 = (uint)(byte)pcStack_78[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar11 >> 0x17);
              pcStack_78[lVar8 + 0xf] =
                   ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
                   (byte)uVar11;
              uVar3 = lVar8 + -0x61c8864680b583eb +
                      (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_78[lVar8 + 1]) << 0x11);
              lVar8 = lVar8 + 1;
            } while (lVar8 != 0xe);
            *pcStack_78 = '\0';
          }
          pcStack_78 = pcStack_78 + 0xf;
          uVar6 = func_0x0011ab24(&pcStack_78);
          func_0x00792f00(uVar4,uVar6);
          func_0x007948e0(uVar4,2,1);
          uVar3 = func_0x00791efc(uVar4,0xffffffff);
          if ((int)uVar3 == 0) {
/* WM - origin: github.com/pengussy */
            return uVar3;
          }
          iVar2 = func_0x007927ec(uVar4,0xffffffff);
          if (iVar2 == iRam0000000001f26d44) {
            plVar7 = (long *)func_0x007926a8(uVar4,0xffffffff);
            lVar8 = *plVar7;
            if ((lVar8 != 0) && (*(long *)(lRam0000000001f26730 + lVar8) == lVar9)) {
              pbVar5 = (byte *)(*pcRam00000000020699c0)();
              if ((*pbVar5 & 1) == 0) {
                func_0x019c4094();
              }
              pcStack_80 = (char *)(*pcRam00000000020699a8)();
              if (*pcStack_80 == '\x01') {
                lVar9 = 0;
                uVar3 = 0x4af32fedb5b8050;
                do {
                  uVar10 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
                  uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                  uVar11 = uVar10 ^ uVar10 >> 0x21;
                  uVar1 = (uint)(byte)pcStack_80[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
                  uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^
                          ((uint)(uVar10 >> 0x29) | 1);
                  pcStack_80[lVar9 + 0x12] =
                       ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
                  uVar3 = lVar9 + -0x61c8864680b583eb +
                          (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_80[lVar9 + 1]) << 0x11);
                  lVar9 = lVar9 + 1;
                } while (lVar9 != 0x11);
                *pcStack_80 = '\0';
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              }
              pcStack_80 = pcStack_80 + 0x12;
              uVar6 = func_0x0011ab24(&pcStack_80);
              func_0x007935a0(uVar4,0xffffffff,uVar6);
              uVar3 = func_0x00791efc(uVar4,0xffffffff);
              if ((int)uVar3 == 0) {
                return uVar3;
              }
              iVar2 = func_0x007927ec(uVar4,0xffffffff);
              if (iVar2 == iRam0000000001f26d44) {
                plVar7 = (long *)func_0x007926a8(uVar4,0xffffffff);
                plVar7 = (long *)*plVar7;
                if ((plVar7 != (long *)0x0) && (*plVar7 == lRam0000000001f26b70)) {
                  return (ulong)(*(long *)(lRam0000000001f26730 + (long)plVar7) == lVar8);
                }
              }
            }
          }
        }
      }
      return 0;
    }
  }
  return uVar3;
}

