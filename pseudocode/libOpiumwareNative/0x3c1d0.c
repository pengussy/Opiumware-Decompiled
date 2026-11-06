/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3c1d0:8f1597ce70
 */

long * FUN_0003c1d0(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  long *plVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  long lStack_78;
  undefined8 ****appppuStack_70 [2];
  undefined8 uStack_60;
  ulong uStack_58;
  
  iVar3 = func_0x007927ec(param_1,1);
  if (iVar3 == iRam0000000001f26d44) {
    uVar4 = func_0x00792368(param_1,2,&uStack_58);
    if (0x7ffffffffffffff6 < uStack_58) goto LAB_0003c5ac;
    if (uStack_58 < 0x17) {
      uStack_60 = CONCAT17((char)uStack_58,(undefined7)uStack_60);
      ppppuVar5 = appppuStack_70;
    }
    else {
      uVar9 = (uStack_58 & 0x7ffffffffffffff8) + 8;
      uVar10 = 0x19;
      if (uVar9 != 0x18) {
// WM - do not claim this as your own
        uVar10 = uVar9;
      }
      ppppuVar5 = (undefined8 ****)__Znwm(uVar10);
      uStack_60 = uVar10 | 0x8000000000000000;
      appppuStack_70[0] = ppppuVar5;
    }
    _memmove(ppppuVar5,uVar4,uStack_58);
    *(undefined1 *)((long)ppppuVar5 + uStack_58) = 0;
    lStack_78 = (*pcRam0000000001f26d60)(uVar4);
    if (lStack_78 != 0) {
      plVar6 = (long *)(*pcRam0000000001f26d68)
                                 (lRam0000000001f267c0 + *(long *)(lRam0000000001f26720 + param_2),
                                  &lStack_78);
      if ((plVar6 != (long *)0x0) && (plVar12 = (long *)*plVar6, plVar12 != (long *)0x0)) {
        if ((long)uStack_60 < 0) {
          __ZdlPv(appppuStack_70[0]);
        }
        if (param_3 == 0) {
          plVar6 = plVar12;
        }
        return plVar6;
      }
      pbVar7 = (byte *)(*pcRam0000000002062340)();
      if ((*pbVar7 & 1) == 0) {
        func_0x01995fa8();
      }
      pcStack_88 = (char *)(*pcRam0000000002062328)();
      if (*pcStack_88 == '\x01') {
        lVar8 = 0;
        uVar9 = 0x235e190331afd91;
        do {
          uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
/* chat: discord.gg/sdkhDjTex */
          pcStack_88[lVar8 + 0x19] =
               ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar11;
          uVar9 = lVar8 + -0x61c8864680b583eb +
                  (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x18);
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 0x19;
      func_0x0011ab24(&pcStack_88);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_0003c6f8;
    }
  }
  else {
    pbVar7 = (byte *)(*pcRam00000000020622e0)();
    if ((*pbVar7 & 1) == 0) {
      func_0x01995f6c();
    }
    pcStack_80 = (char *)(*pcRam00000000020622c8)();
    if (*pcStack_80 == '\x01') {
      lVar8 = 0;
      uVar9 = 0xcd9c826099955351;
      do {
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
// WM - chat: discord.gg/sdkhDjTex
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_80[lVar8 + 0x12] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar11;
        uVar9 = lVar8 + -0x61c8864680b583eb +
                (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_80[lVar8 + 1]) << 0x11);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x11);
      *pcStack_80 = '\0';
    }
    pcStack_80 = pcStack_80 + 0x12;
    func_0x0011ab24(&pcStack_80);
    func_0x007a1b5c(param_1,"%s");
LAB_0003c5ac:
    FUN_0000aa50();
  }
  pbVar7 = (byte *)(*pcRam0000000002062310)();
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  if ((*pbVar7 & 1) == 0) {
    func_0x01995fe4();
  }
  pcStack_90 = (char *)(*pcRam00000000020622f8)();
  if (*pcStack_90 == '\x01') {
    lVar8 = 0;
    uVar9 = 0x6b9bca352ec22791;
    do {
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_90[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
      pcStack_90[lVar8 + 0x19] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar9 = lVar8 + -0x61c8864680b583eb +
              (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x18);
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 0x19;
  func_0x0011ab24(&pcStack_90);
  func_0x007a1b5c(param_1,"%s");
LAB_0003c6f8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x3c6fc);
  (*pcVar2)();
}

