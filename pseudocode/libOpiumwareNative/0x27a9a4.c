/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x27a9a4:457206fbb8
 */

/* WARNING: Removing unreachable block (ram,0x0027aae4) */

long FUN_0027a9a4(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  code *pcVar9;
  char *pcStack_38;
  
  func_0x01a1aea0(param_1,param_2,bRam0000000002097054 ^ 1);
  lVar2 = _object_getClass(param_1);
  __ZNSt3__15mutex4lockEv(0x2057d30);
  do {
    if (lVar2 == 0) {
      __ZNSt3__15mutex6unlockEv(0x2057d30);
LAB_0027aa64:
      lVar2 = 0;
LAB_0027aa68:
      plVar3 = (long *)(*pcRam000000000207a0e8)();
      if (*plVar3 != lVar2) {
        if (*plVar3 != 0) {
          _objc_release();
        }
        if (lVar2 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = _objc_retain(lVar2);
        }
        *plVar3 = lVar4;
      }
/* origin: github.com/pengussy - github.com/pengussy */
      if (((lVar2 == 0) || (iRam0000000002093174 != 0)) || (2 < iRam0000000002093178)) {
        return lVar2;
      }
      iRam0000000002093178 = iRam0000000002093178 + 1;
      pbVar5 = (byte *)(*pcRam000000000207a118)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019df320();
      }
      pcStack_38 = (char *)(*pcRam000000000207a100)();
      if (*pcStack_38 == '\x01') {
        lVar4 = 0;
        uVar6 = 0x885246da978a952e;
        do {
          uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar8 = uVar7 ^ uVar7 >> 0x21;
          uVar1 = (uint)(byte)pcStack_38[lVar4 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17);
/* wm:stripping the watermark breaks the license */
          pcStack_38[lVar4 + 0xe] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
               (byte)uVar8;
          uVar6 = lVar4 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[lVar4 + 1]) << 0x11);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0xd);
        *pcStack_38 = '\0';
      }
      pcStack_38 = pcStack_38 + 0xe;
      func_0x0011ab24(&pcStack_38);
      FUN_0027a440();
      return lVar2;
    }
    for (plVar3 = plRam00000000020931a0; plVar3 != plRam00000000020931a8; plVar3 = plVar3 + 3) {
      if ((plVar3[1] == param_2) && (*plVar3 == lVar2)) {
        pcVar9 = (code *)plVar3[2];
        __ZNSt3__15mutex6unlockEv(0x2057d30);
        if (pcVar9 == (code *)0x0) goto LAB_0027aa64;
        lVar2 = (*pcVar9)(param_1,param_2);
        goto LAB_0027aa68;
      }
    }
    lVar2 = _class_getSuperclass();
  } while( true );
}

