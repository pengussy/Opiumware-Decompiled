/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x88a08:74ee004319
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00088a08(undefined8 param_1)

{
  uint uVar1;
  undefined8 ****ppppuVar2;
  int iVar3;
  code *pcVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_88;
  char *pcStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 ****ppppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
/* wm:origin: github.com/pengussy */
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  pcVar4 = (code *)func_0x0011ab24(&DAT_004b2650);
  iVar3 = (*pcVar4)(&uStack_48,0x20);
  if (iVar3 == 1) {
    ppppuStack_60 = (undefined8 ****)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    pcVar4 = (code *)func_0x0011ab24(&DAT_0003dce4);
    puStack_78 = (undefined8 *)__Znwm(0x28);
    lStack_68 = _UNK_01ad8248;
    uStack_70 = _UNK_01ad8240;
    puStack_78[1] = uStack_40;
    *puStack_78 = uStack_48;
    puStack_78[3] = uStack_30;
    puStack_78[2] = uStack_38;
    *(undefined1 *)(puStack_78 + 4) = 0;
    uVar5 = (*pcVar4)(&puStack_78,&ppppuStack_60);
    if (lStack_68 < 0) {
      __ZdlPv(puStack_78);
    }
    if ((uVar5 & 1) == 0) {
      pbVar6 = (byte *)(*pcRam00000000020651c0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019be9a0();
      }
      pcStack_88 = (char *)(*pcRam00000000020651a8)();
      if (*pcStack_88 == '\x01') {
/*  keep the notice, keep the source honest  */
        lVar7 = 0;
        uVar5 = 0x7458f5f12ab39362;
        do {
          uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_88[lVar7 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17);
          pcStack_88[lVar7 + 0x18] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar9;
          uVar5 = lVar7 + -0x61c8864680b583eb +
                  (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0x17);
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 0x18;
      func_0x0011ab24(&pcStack_88);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_00088db0;
    }
    uVar5 = uStack_58;
    ppppuVar2 = ppppuStack_60;
    if (-1 < (long)uStack_50) {
      uVar5 = uStack_50 >> 0x38;
      ppppuVar2 = &ppppuStack_60;
    }
    func_0x00792db8(param_1,ppppuVar2,uVar5);
    if ((long)uStack_50 < 0) {
      __ZdlPv(ppppuStack_60);
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
      return 1;
    }
    ___stack_chk_fail();
LAB_00088db8:
/* no support for modified copies */
    func_0x019be964();
  }
  else {
    pbVar6 = (byte *)(*pcRam0000000002065190)();
    if ((*pbVar6 & 1) == 0) goto LAB_00088db8;
  }
  pcStack_80 = (char *)(*pcRam0000000002065178)();
  if (*pcStack_80 == '\x01') {
    lVar7 = 0;
    uVar5 = 0xd7b649706087df73;
    do {
      uVar8 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[lVar7 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
      pcStack_80[lVar7 + 0x33] =
           ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar5 = lVar7 + -0x61c8864680b583eb +
              (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x32);
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0x33;
  func_0x0011ab24(&pcStack_80);
  func_0x007a1b5c(param_1,"%s");
LAB_00088db0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x88db4);
  (*pcVar4)();
}

