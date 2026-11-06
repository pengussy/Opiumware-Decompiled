/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x379f20:5f91d9eff6
 */

/* WARNING: Possible PIC construction at 0x00379f58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00379f5c) */
/* WARNING: Removing unreachable block (ram,0x00379f64) */

long FUN_00379f20(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *unaff_x20;
  long *plVar14;
  long *unaff_x21;
  long *unaff_x22;
  undefined *puVar15;
  undefined1 auVar16 [16];
/* chat: discord.gg/sdkhDjTex */
  undefined1 auStack_59d [21];
  long lStack_588;
  long *plStack_580;
  long *plStack_578;
  char *pcStack_570;
  long *plStack_568;
  undefined8 *puStack_560;
  undefined *puStack_558;
  ulong uStack_550;
  undefined8 uStack_548;
  undefined8 auStack_540 [159];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_1[0xb] == 0) {
    unaff_x22 = param_1 + 8;
    plVar6 = unaff_x21;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    if ((ulong)param_1[10] < 0x20) {
      unaff_x20 = 
      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_demux.c"
      ;
      do {
        plVar6 = (long *)param_1[2];
        if (((long *)0xfffffffffffffede < plVar6) ||
           (puVar8 = (undefined8 *)
                     func_0x019eb530(plVar6 + 0x24,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_demux.c"
                                     ,0xa2), puVar8 == (undefined8 *)0x0)) goto LAB_0037a1fc;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = plVar6;
        puVar9 = (undefined8 *)param_1[9];
/*  unlicensed copy if this notice is missing  */
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = puVar8;
        }
        *puVar8 = 0;
        puVar8[1] = puVar9;
        param_1[9] = (long)puVar8;
        if (param_1[8] == 0) {
          *unaff_x22 = (long)puVar8;
        }
        lVar10 = param_1[10];
        param_1[10] = lVar10 + 1U;
        *(undefined1 *)((long)puVar8 + 0x119) = 0;
      } while (lVar10 + 1U < 0x20);
    }
    if (*param_1 == 0) {
      lVar10 = 0xffffffff;
    }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    else {
      unaff_x20 = (char *)0x0;
      puVar8 = &uStack_548;
      plVar6 = unaff_x22;
      do {
        while( true ) {
          if (*plVar6 == 0) {
            unaff_x21 = plVar6;
            if (unaff_x20 == (char *)0x0) goto LAB_0037a1fc;
            goto LAB_0037a0ac;
          }
          unaff_x21 = (long *)func_0x019e40c4(param_1,*plVar6,param_1[2]);
          if (unaff_x21 == (long *)0x0) goto LAB_0037a1fc;
          puVar8[4] = 0;
          puVar8[1] = 0;
          *puVar8 = 0;
          puVar8[3] = 0;
          puVar8[2] = 0;
          lVar10 = unaff_x21[3];
          *puVar8 = unaff_x21 + 0x24;
          puVar8[1] = lVar10;
          puVar8[2] = unaff_x21 + 7;
          func_0x003e8dbc();
          plVar6 = unaff_x21;
          if ((char)param_1[0xe] == '\0') break;
          puVar8[3] = (long)unaff_x21 + 0xa4;
          unaff_x20 = unaff_x20 + 1;
          puVar8 = puVar8 + 5;
          if (unaff_x20 == "\x19") goto LAB_0037a0ac;
        }
        func_0x003e8dbc();
        unaff_x20 = unaff_x20 + 1;
        puVar8 = puVar8 + 5;
      } while (unaff_x20 != "\x19");
LAB_0037a0ac:
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x00446890();
      iVar2 = FUN_003e9f90(*param_1,&uStack_548,0x28,unaff_x20,0,&uStack_550);
      if (iVar2 != 0) {
        func_0x00446a74();
        if ((code *)param_1[4] == (code *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = (*(code *)param_1[4])(param_1[5]);
        }
        if (uStack_550 != 0) {
          uVar5 = 0;
          puVar8 = auStack_540;
          puVar9 = (undefined8 *)param_1[8];
          do {
            puVar11 = (undefined8 *)*puVar9;
            puVar9[2] = *puVar8;
            puVar9[0x22] = uVar3;
// found on a paste site? it was re-uploaded illegally
            lVar10 = param_1[3];
            param_1[3] = lVar10 + 1;
            puVar9[6] = lVar10;
            if ((undefined8 *)param_1[8] == puVar9) {
              *unaff_x22 = (long)puVar11;
              puVar13 = (undefined8 *)param_1[9];
              puVar12 = (undefined8 *)puVar9[1];
            }
            else {
              puVar13 = (undefined8 *)param_1[9];
              puVar12 = (undefined8 *)puVar9[1];
            }
            if (puVar13 == puVar9) {
              param_1[9] = (long)puVar12;
            }
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = puVar11;
            }
            if (puVar11 != (undefined8 *)0x0) {
              puVar11[1] = puVar12;
            }
            param_1[10] = param_1[10] + -1;
            *puVar9 = 0;
            puVar9[1] = 0;
            puVar12 = (undefined8 *)param_1[0xc];
            if (puVar12 != (undefined8 *)0x0) {
              *puVar12 = puVar9;
            }
            *puVar9 = 0;
            puVar9[1] = puVar12;
            param_1[0xc] = (long)puVar9;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
            if (param_1[0xb] == 0) {
              param_1[0xb] = (long)puVar9;
            }
            param_1[0xd] = param_1[0xd] + 1;
            *(undefined1 *)((long)puVar9 + 0x119) = 1;
            uVar5 = uVar5 + 1;
            puVar8 = puVar8 + 5;
            puVar9 = puVar11;
          } while (uVar5 < uStack_550);
        }
        goto LAB_00379f54;
      }
      func_0x00445ba8();
      iVar2 = func_0x003eab20();
      plVar6 = unaff_x21;
      if (iVar2 == 0) {
        func_0x00446a74();
LAB_0037a1fc:
        lVar10 = 0xfffffffe;
// WM - no support for modified copies
      }
      else {
        func_0x004468d8();
        lVar10 = 0xffffffff;
      }
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return lVar10;
    }
    puVar15 = &SUB_0037a208;
    plVar4 = (long *)___stack_chk_fail(lVar10);
  }
  else {
LAB_00379f54:
    puVar15 = (undefined *)0x379f5c;
    plVar4 = param_1;
    plVar6 = unaff_x21;
  }
  lStack_588 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar14 = (long *)plVar4[0xb];
  plStack_580 = unaff_x22;
/* keep the notice, keep the source honest - github.com/pengussy */
  plStack_578 = plVar6;
  pcStack_570 = unaff_x20;
  plStack_568 = param_1;
  puStack_560 = auStack_540 + 0xa6;
  puStack_558 = puVar15;
  if (plVar14 != (long *)0x0) {
code_r0x0037a264:
    do {
      iVar2 = func_0x00392514(plVar14 + 0x24,plVar14[2],plVar4[1],auStack_59d);
      if ((long *)plVar4[0xb] == plVar14) {
        plVar4[0xb] = *plVar14;
        plVar6 = (long *)plVar14[1];
        if ((long *)plVar4[0xc] == plVar14) goto code_r0x0037a314;
code_r0x0037a294:
        lVar10 = *plVar14;
      }
      else {
        plVar6 = (long *)plVar14[1];
        if ((long *)plVar4[0xc] != plVar14) goto code_r0x0037a294;
code_r0x0037a314:
        plVar4[0xc] = (long)plVar6;
        lVar10 = *plVar14;
      }
      if (plVar6 != (long *)0x0) {
        *plVar6 = lVar10;
      }
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar6;
      }
      plVar4[0xd] = plVar4[0xd] + -1;
      *plVar14 = 0;
      plVar14[1] = 0;
      pcVar7 = (code *)plVar4[6];
      if (pcVar7 == (code *)0x0) {
        puVar8 = (undefined8 *)plVar4[9];
        if (puVar8 != (undefined8 *)0x0) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          *puVar8 = plVar14;
        }
        *plVar14 = 0;
        plVar14[1] = (long)puVar8;
        plVar4[9] = (long)plVar14;
        if (plVar4[8] == 0) {
          plVar4[8] = (long)plVar14;
        }
        plVar4[10] = plVar4[10] + 1;
        *(undefined1 *)((long)plVar14 + 0x119) = 0;
        plVar14 = (long *)plVar4[0xb];
        if (plVar14 == (long *)0x0) break;
        goto code_r0x0037a264;
      }
      *(undefined1 *)((long)plVar14 + 0x119) = 2;
      puVar1 = (undefined1 *)0x0;
      if (iVar2 != 0) {
        puVar1 = auStack_59d;
      }
      (*pcVar7)(plVar14,plVar4[7],puVar1);
      plVar14 = (long *)plVar4[0xb];
// WM - thanks for reading - discord.gg/sdkhDjTex
    } while (plVar14 != (long *)0x0);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_588) {
    return 1;
  }
  auVar16 = ___stack_chk_fail();
  puVar8 = auVar16._8_8_;
  lVar10 = auVar16._0_8_;
  puVar9 = *(undefined8 **)(lVar10 + 0x48);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = puVar8;
  }
  *puVar8 = 0;
  puVar8[1] = puVar9;
  *(undefined8 **)(lVar10 + 0x48) = puVar8;
  if (*(long *)(lVar10 + 0x40) == 0) {
    *(undefined8 **)(lVar10 + 0x40) = puVar8;
    *(long *)(lVar10 + 0x50) = *(long *)(lVar10 + 0x50) + 1;
    *(undefined1 *)((long)puVar8 + 0x119) = 0;
    return lVar10;
  }
  *(long *)(lVar10 + 0x50) = *(long *)(lVar10 + 0x50) + 1;
  *(undefined1 *)((long)puVar8 + 0x119) = 0;
  return lVar10;
}

