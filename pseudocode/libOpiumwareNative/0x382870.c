/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x382870:35cf952a6b
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_00382870(int *param_1,code *param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  undefined2 uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  undefined8 uVar19;
  uint uStack_80;
  undefined4 uStack_7c;
  byte bStack_78;
  byte bStack_77;
  char cStack_76;
  undefined1 uStack_75;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
// WM - thanks for reading - discord.gg/sdkhDjTex
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((*(byte *)(param_1 + 0x16) >> 4 & 1) == 0) {
    iVar17 = -1;
  }
  else {
    iVar17 = param_1[0x10];
  }
  do {
    if ((param_4 & 1) == 0) {
      uStack_80 = 0;
      uStack_7c._0_2_ = 0;
      uStack_7c._2_2_ = 0;
      bStack_78 = 0;
      bStack_77 = 0;
      cStack_76 = '\0';
      uStack_75 = 0;
      uStack_74 = 0;
/*  if you paid for this, you were scammed  */
      (**(code **)(param_1 + 10))(&uStack_80,*(undefined8 *)(param_1 + 0xc),0);
      bVar3 = *(byte *)(param_1 + 0x16);
      *(byte *)(param_1 + 0x16) = bVar3 & 0xfc | bStack_78 & 1 | (bStack_77 & 1) << 1;
      *(ulong *)(param_1 + 8) = CONCAT26(uStack_7c._2_2_,CONCAT24((undefined2)uStack_7c,uStack_80));
      if (((cStack_76 != '\0') && ((bVar3 >> 4 & 1) != 0)) && (*(long *)(param_1 + 0x14) != 0)) {
        if ((bVar3 >> 5 & 1) == 0) {
          func_0x0039b808(param_1 + 0x10);
          *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) | 0x20;
        }
        do {
          func_0x004dfc5c(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0xe));
        } while ((*(byte *)(param_1 + 0x16) >> 5 & 1) != 0);
      }
    }
    else {
      param_4 = 0;
    }
    puVar5 = (undefined8 *)(*param_2)(param_3);
    if ((int)puVar5 != 0) goto LAB_00382bac;
    bVar3 = *(byte *)(param_1 + 0x16);
    uVar18 = *(ulong *)(param_1 + 8);
    if ((bVar3 & 3) == 0 && uVar18 == 0xffffffffffffffff) break;
    lVar10 = *(long *)(param_1 + 0x14);
    *(long *)(param_1 + 0x14) = lVar10 + 1;
    lVar15 = *(long *)(param_1 + 0xe);
    if (*param_1 == 0) {
      uVar14 = 0xffffffff;
      iVar11 = param_1[4];
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      if (iVar11 != 0) goto LAB_003829dc;
LAB_00382a10:
      uVar12 = 0xffffffff;
LAB_00382a14:
      uVar1 = bVar3 & 1;
      uStack_74 = 0;
      uStack_70 = 0;
      bVar4 = bVar3 >> 1;
      uStack_7c._2_2_ = 0;
      bStack_78 = 0;
      bStack_77 = 0;
      cStack_76 = '\0';
      uStack_75 = 0;
      uStack_6c = 0;
      uStack_80 = uVar14;
      if (uVar14 == uVar12) {
        uVar1 = uVar1 | (bVar4 & 1) << 2;
        uStack_7c._0_2_ = (undefined2)uVar1;
        uVar16 = (ulong)(uVar14 < 0x80000000 && uVar1 != 0);
        if (iVar17 < 0) goto LAB_00382a50;
LAB_00382ac8:
        (&uStack_7c)[uVar16 * 2 + -1] = iVar17;
        *(undefined2 *)(&uStack_7c + uVar16 * 2) = 1;
        uVar16 = uVar16 + 1;
      }
      else {
        uStack_7c._0_2_ = (undefined2)uVar1;
        uVar13 = 0;
        if ((bVar4 & 1) != 0) {
          uVar13 = 4;
        }
        uVar1 = uVar1 & uVar14 < 0x80000000;
        lVar2 = 8;
        if (uVar1 == 0) {
          lVar2 = 0;
        }
// reversing this took months of machine time
        *(uint *)((long)&uStack_80 + lVar2) = uVar12;
        lVar2 = 0xc;
        if (uVar1 == 0) {
          lVar2 = 4;
        }
        *(undefined2 *)((long)&uStack_80 + lVar2) = uVar13;
        uVar16 = 1;
        if (uVar1 != 0) {
          uVar16 = 2;
        }
        uVar7 = (ulong)uVar1;
        if ((bVar4 & 1) != 0) {
          uVar7 = uVar16;
        }
        uVar16 = (ulong)uVar1;
        if ((uVar12 & 0x80000000) == 0) {
          uVar16 = uVar7;
        }
        if (-1 < iVar17) goto LAB_00382ac8;
LAB_00382a50:
        if ((uVar16 == 0) && (uVar18 == 0xffffffffffffffff)) {
          uVar14 = 1;
          *(long *)(param_1 + 0x14) = lVar10;
          goto joined_r0x00382a6c;
        }
      }
      if (lVar15 != 0) {
        func_0x004dfb80(lVar15);
      }
      if (uVar18 == 0xffffffffffffffff) {
        do {
          uVar7 = _poll(&uStack_80,uVar16,0xffffffff);
          if ((int)uVar7 != -1) goto LAB_00382b58;
          piVar8 = (int *)___error();
        } while (*piVar8 == 4);
      }
      else {
        do {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          uVar6 = func_0x0048058c();
          uVar7 = 0;
          if (uVar6 <= uVar18) {
            uVar7 = uVar18 - uVar6;
          }
          uVar7 = _poll(&uStack_80,uVar16,uVar7 / 1000000);
          if ((int)uVar7 != -1) goto LAB_00382b58;
          piVar8 = (int *)___error();
        } while (*piVar8 == 4);
      }
      uVar7 = 0xffffffff;
LAB_00382b58:
      if (lVar15 != 0) {
        func_0x004dfb50(lVar15);
      }
      uVar14 = (uint)(uVar7 >> 0x1f) & 1;
      bVar3 = *(byte *)(param_1 + 0x16);
      lVar10 = *(long *)(param_1 + 0x14) + -1;
      *(long *)(param_1 + 0x14) = lVar10;
    }
    else {
      if ((*param_1 == 1) && (uVar14 = param_1[2], uVar14 != 0xffffffff)) {
        iVar11 = param_1[4];
        if (iVar11 == 0) goto LAB_00382a10;
LAB_003829dc:
        if ((iVar11 == 1) && (uVar12 = param_1[6], uVar12 != 0xffffffff)) goto LAB_00382a14;
/* wm:donate: donate/README.md */
      }
      uVar14 = 1;
      *(long *)(param_1 + 0x14) = lVar10;
    }
joined_r0x00382a6c:
    if (((bVar3 ^ 0xff) & 0x30) == 0) {
      if (lVar10 == 0) {
        func_0x0039b854(param_1 + 0x10);
        *(byte *)(param_1 + 0x16) = *(byte *)(param_1 + 0x16) & 0xdf;
        func_0x004dfcb8(*(undefined8 *)(param_1 + 0x12));
      }
      else {
        do {
          func_0x004dfc5c(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0xe));
        } while ((*(byte *)(param_1 + 0x16) >> 5 & 1) != 0);
      }
    }
  } while (uVar14 == 0);
  puVar5 = (undefined8 *)0x0;
LAB_00382bac:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return puVar5;
  }
  puVar5 = (undefined8 *)___stack_chk_fail(puVar5);
  if ((puVar5[2] == 0) || (puVar5[4] == 0)) {
    return (undefined8 *)0x0;
  }
  puVar9 = (undefined8 *)
           func_0x019eb5a0(0x440,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_rx.c"
                           ,0xca);
  if (puVar9 != (undefined8 *)0x0) {
    uVar19 = puVar5[5];
    puVar9[0x13] = puVar5[6];
    puVar9[0x12] = uVar19;
    puVar9[0x14] = puVar5[7];
    uVar19 = *puVar5;
// stripping the watermark breaks the license
    puVar9[1] = puVar5[1];
    *puVar9 = uVar19;
    puVar9[2] = puVar5[2];
    *(undefined1 *)(puVar9 + 0x84) = *(undefined1 *)(puVar5 + 8);
    uVar19 = puVar5[3];
    puVar9[4] = puVar5[4];
    puVar9[3] = uVar19;
  }
  return puVar9;
}

