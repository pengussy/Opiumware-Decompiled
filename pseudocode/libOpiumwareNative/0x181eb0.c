/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x181eb0:1139e42fe7
 */

undefined8 FUN_00181eb0(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  char cStack_109;
  ulong uStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_f1;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_b0 [32];
  byte *pbStack_90;
  long *plStack_88;
  long *plStack_80;
  long lStack_78;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  byte *pbStack_70;
  long *plStack_68;
  long *plStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  if (*(long *)(*(long *)(param_1 + 0x10) + -8) != 0) {
    pbStack_70 = (byte *)CONCAT44(pbStack_70._4_4_,
                                  (int)((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8))
                                       >> 3) + -1);
    pbStack_90 = (byte *)CONCAT71(pbStack_90._1_7_,1);
    plVar4 = *(long **)(param_1 + 0x78);
    if (plVar4 == (long *)0x0) {
      func_0x001717b4();
      auVar14 = func_0x00006858();
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      puVar9 = auVar14._8_8_;
      lVar7 = auVar14._0_8_;
      puStack_100 = (undefined8 *)0x0;
      uStack_108 = 3;
      puVar8 = (undefined8 *)__Znwm(0x18);
      if (*(char *)((long)puVar9 + 0x17) < '\0') {
        func_0x00017ae8(puVar8,*puVar9,puVar9[1]);
      }
      else {
        uVar12 = *puVar9;
        puVar8[1] = puVar9[1];
        *puVar8 = uVar12;
        puVar8[2] = puVar9[2];
      }
      uStack_e8 = CONCAT44(uStack_e8._4_4_,
                           (int)((ulong)(*(long *)(lVar7 + 0x10) - *(long *)(lVar7 + 8)) >> 3));
      puStack_f0 = (undefined8 *)CONCAT71(puStack_f0._1_7_,4);
      plVar4 = *(long **)(lVar7 + 0x78);
      puStack_100 = puVar8;
      if (plVar4 == (long *)0x0) {
        func_0x001717b4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x182278);
        (*pcVar2)();
      }
      cStack_109 = (**(code **)(*plVar4 + 0x30))(plVar4,&uStack_e8,&puStack_f0,&uStack_108);
      func_0x00181b98(lVar7 + 0x38,&cStack_109);
      if ((cStack_109 == '\x01') && (*(long *)(*(long *)(lVar7 + 0x10) + -8) != 0)) {
/* wm:reversing this took months of machine time */
        func_0x0018358c(auStack_120,lVar7 + 0x88);
        uStack_e8 = *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x10) + -8) + 8);
        puStack_f0 = puVar9;
        lVar11 = func_0x00184e14(&uStack_e8,puVar9,&UNK_01bd2568,&puStack_f0,&uStack_f1);
        puVar10 = (undefined1 *)(lVar11 + 0x38);
        uVar1 = *puVar10;
        *puVar10 = auStack_120[0];
        uVar12 = *(undefined8 *)(lVar11 + 0x40);
        *(undefined8 *)(lVar11 + 0x40) = uStack_118;
        *(undefined1 **)(lVar7 + 0x50) = puVar10;
        auStack_120[0] = uVar1;
        uStack_118 = uVar12;
        FUN_00183bbc(&uStack_118);
      }
      FUN_00183bbc(&puStack_100,uStack_108 & 0xff);
      return 1;
    }
    uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,&pbStack_70,&pbStack_90);
    if ((uVar5 & 1) == 0) {
      func_0x0018358c(auStack_50,param_1 + 0x88);
      puVar10 = *(undefined1 **)(*(long *)(param_1 + 0x10) + -8);
      uVar1 = *puVar10;
      *puVar10 = auStack_50[0];
      uVar12 = *(undefined8 *)(puVar10 + 8);
      *(undefined8 *)(puVar10 + 8) = uStack_48;
      auStack_50[0] = uVar1;
      uStack_48 = uVar12;
      FUN_00183bbc(&uStack_48);
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  lVar11 = lVar7 + -8;
  *(long *)(param_1 + 0x10) = lVar11;
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  if (((*(long *)(param_1 + 8) != lVar11) &&
      (pbStack_70 = *(byte **)(lVar7 + -0x10), pbStack_70 != (byte *)0x0)) && (*pbStack_70 - 1 < 2))
  {
    plStack_68 = (long *)0x0;
// WM - donate: donate/README.md
    plStack_60 = (long *)0x0;
    lStack_58 = -0x8000000000000000;
    if (*pbStack_70 == 1) {
      plStack_68 = (long *)**(long **)(pbStack_70 + 8);
    }
    else {
      plStack_60 = (long *)**(long **)(pbStack_70 + 8);
    }
    while( true ) {
      pbStack_90 = *(byte **)(lVar11 + -8);
      plStack_88 = (long *)0x0;
      plStack_80 = (long *)0x0;
      lStack_78 = 0x8000000000000000;
      if (*pbStack_90 == 2) {
        plStack_80 = *(long **)(*(long *)(pbStack_90 + 8) + 8);
        uVar5 = FUN_00184138(&pbStack_70,&pbStack_90);
      }
      else if (*pbStack_90 == 1) {
        plStack_88 = (long *)(*(long *)(pbStack_90 + 8) + 8);
        uVar5 = FUN_00184138(&pbStack_70,&pbStack_90);
      }
/* WM - reversing this took months of machine time */
      else {
        lStack_78 = 1;
        uVar5 = FUN_00184138(&pbStack_70,&pbStack_90);
      }
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      pcVar6 = (char *)FUN_00183168(&pbStack_70);
      if (*pcVar6 == '\t') break;
      if (*pbStack_70 == 2) {
        lVar11 = *(long *)(param_1 + 0x10);
        plStack_60 = plStack_60 + 2;
      }
      else if (*pbStack_70 == 1) {
        plVar4 = (long *)plStack_68[1];
        if ((long *)plStack_68[1] == (long *)0x0) {
          do {
            plVar13 = (long *)plStack_68[2];
            bVar3 = plStack_68 != (long *)*plVar13;
            plStack_68 = plVar13;
          } while (bVar3);
        }
        else {
          do {
            plVar13 = plVar4;
/* WM - do not claim this as your own */
            plVar4 = (long *)*plVar13;
          } while ((long *)*plVar13 != (long *)0x0);
        }
        lVar11 = *(long *)(param_1 + 0x10);
        plStack_68 = plVar13;
      }
      else {
        lStack_58 = lStack_58 + 1;
        lVar11 = *(long *)(param_1 + 0x10);
      }
    }
    pbStack_90 = pbStack_70;
    plStack_80 = plStack_60;
    plStack_88 = plStack_68;
    lStack_78 = lStack_58;
    FUN_00183268(auStack_b0,*(undefined8 *)(*(long *)(param_1 + 0x10) + -8),&pbStack_90);
  }
  return 1;
}

