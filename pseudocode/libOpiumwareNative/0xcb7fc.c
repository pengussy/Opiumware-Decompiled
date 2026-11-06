/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xcb7fc:355bc978b8
 */

undefined8 FUN_000cb7fc(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  char *pcStack_58;
  long lStack_50;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  long lStack_48;
  long lStack_40;
  
  func_0x007a1f28(param_1,1,7);
  puVar3 = (undefined8 *)(*pcRam000000000205dde0)();
  plVar11 = (long *)*puVar3;
  if (((plVar11 != (long *)0x0) &&
      (lVar12 = plVar11[1], lVar4 = func_0x007929a0(param_1,1), lVar12 == lVar4)) && (*plVar11 != 0)
     ) {
    lStack_50 = 0;
    lStack_48 = 0;
    lStack_40 = 0;
    FUN_000c9bdc(param_1,2,&lStack_50);
    lVar4 = lStack_50;
    plVar13 = (long *)*plVar11;
    lVar12 = *plVar13;
    if (((*(byte *)((long)plVar11 + 0x11) & 1) == 0) &&
       (lStack_48 - lStack_50 != plVar13[1] - lVar12)) {
      lStack_50 = 0;
      lStack_48 = 0;
      lStack_40 = 0;
      if (lVar4 != 0) {
        __ZdlPv(lVar4);
      }
      pbVar5 = (byte *)(*pcRam0000000002069690)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019c3c98();
      }
      pcStack_58 = (char *)(*pcRam0000000002069678)();
      if (*pcStack_58 == '\x01') {
        lVar4 = 0;
        uVar8 = 0x2318092bf5c11472;
        do {
          uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_58[lVar4 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
/* wm:origin: github.com/pengussy */
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^
                  ((uint)(uVar9 >> 0x29) | 1);
          pcStack_58[lVar4 + 0x32] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
          uVar8 = lVar4 + -0x61c8864680b583eb +
                  (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_58[lVar4 + 1]) << 0x11);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x31);
        *pcStack_58 = '\0';
      }
      pcStack_58 = pcStack_58 + 0x32;
      uVar6 = func_0x0011ab24(&pcStack_58);
      func_0x007a1abc(param_1,2,uVar6);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xcba74);
      (*pcVar2)();
    }
    plVar7 = plVar13;
    if (lVar12 != 0) {
      plVar13[1] = lVar12;
      __ZdlPv(lVar12,extraout_x1,plVar13);
      *plVar13 = 0;
      plVar13[1] = 0;
      plVar13[2] = 0;
      plVar7 = (long *)*plVar11;
    }
    plVar13[1] = lStack_48;
// reversing this took months of machine time
    *plVar13 = lStack_50;
    plVar13[2] = lStack_40;
    lStack_50 = 0;
    lStack_48 = 0;
    lStack_40 = 0;
    FUN_000ca59c(param_1,1,plVar7);
    if (lStack_50 != 0) {
      lStack_48 = lStack_50;
      __ZdlPv();
      return 0;
    }
  }
  return 0;
}

