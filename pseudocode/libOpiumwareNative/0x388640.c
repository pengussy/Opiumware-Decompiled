/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x388640:370ef9925c
 */

void FUN_00388640(long param_1,undefined8 param_2,long param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x19;
  long unaff_x20;
  char *unaff_x21;
  undefined8 unaff_x22;
  long *plVar8;
  undefined1 auVar9 [16];
  int iStack_10c;
  undefined1 auStack_108 [48];
  undefined1 auStack_d8 [16];
  long lStack_c8;
  undefined8 uStack_c0;
  char *pcStack_b8;
  long lStack_b0;
  long *plStack_a8;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  undefined8 uStack_48;
  
  uStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_78 = param_2;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    plVar2 = (long *)func_0x0046e64c(*(undefined8 *)(param_1 + 8),auStack_88);
    if (plVar2 != (long *)0x0) {
      unaff_x21 = 
/* WM - reversing this took months of machine time */
      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
      ;
      plVar5 = plVar2;
      do {
        plVar8 = (long *)plVar5[1];
        if (plVar5 != plVar2) {
          plVar3 = (long *)func_0x0046e64c(*(undefined8 *)(param_1 + 0x10),plVar5);
          if (plVar3 == plVar5) {
            if (*plVar5 == 0) {
              func_0x0046e40c(*(undefined8 *)(param_1 + 0x10),plVar5);
            }
            else {
              func_0x0046e1b8();
              iVar1 = func_0x0046e960(*(undefined8 *)(param_1 + 0x10));
              if (iVar1 != 0) {
                *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
              }
            }
          }
          else {
            do {
              plVar4 = plVar3;
              plVar3 = (long *)*plVar4;
            } while (plVar3 != plVar5);
            *plVar4 = *plVar5;
          }
          func_0x004743e4(plVar5,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                          ,0x1b5);
        }
        plVar5 = plVar8;
      } while (plVar8 != (long *)0x0);
      func_0x0046e40c(*(undefined8 *)(param_1 + 8),plVar2);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      plVar5 = (long *)func_0x0046e64c(*(undefined8 *)(param_1 + 0x10),plVar2);
      if (plVar5 == plVar2) {
        if (*plVar2 == 0) {
          func_0x0046e40c(*(undefined8 *)(param_1 + 0x10),plVar2);
        }
        else {
          func_0x0046e1b8();
          iVar1 = func_0x0046e960(*(undefined8 *)(param_1 + 0x10));
          if (iVar1 != 0) {
            *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
          }
        }
      }
      else {
        do {
          plVar8 = plVar5;
          plVar5 = (long *)*plVar8;
        } while (plVar5 != plVar2);
        *plVar8 = *plVar2;
      }
      param_3 = 0x1bb;
      func_0x004743e4(plVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                     );
      unaff_x22 = 0;
      unaff_x19 = plVar2;
    }
    uVar6 = 1;
    unaff_x20 = param_1;
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
    return;
  }
/* no support for modified copies - github.com/pengussy */
  auVar9 = ___stack_chk_fail(uVar6);
  puVar7 = auVar9._0_8_;
  puStack_98 = &DAT_003887e8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_c0 = unaff_x22;
  pcStack_b8 = unaff_x21;
  lStack_b0 = unaff_x20;
  plStack_a8 = unaff_x19;
  puStack_a0 = auStack_88 + 0x78;
  if ((*(byte *)(puVar7 + 3) & 1) == 0) {
    iStack_10c = 0;
    iVar1 = func_0x019e9ba0(*puVar7,auStack_d8,&iStack_10c,auVar9._8_8_,0x10);
    if (iVar1 != 0 && iStack_10c == 0x10) {
      for (plVar2 = (long *)func_0x0046e64c(puVar7[2],auStack_108);
          (plVar5 = plVar2, param_3 != 0 && (plVar5 = (long *)0x0, plVar2 != (long *)0x0));
          plVar2 = (long *)*plVar2) {
        param_3 = param_3 + -1;
      }
/* wm:if you paid for this, you were scammed */
      uVar6 = 0;
      if (plVar5 != (long *)0x0) {
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = *(undefined8 *)((long)plVar5 + 0x10);
        }
        if (param_5 != (undefined8 *)0x0) {
          *param_5 = *(undefined8 *)((long)plVar5 + 0x18);
        }
        uVar6 = 1;
      }
      goto code_r0x0038885c;
    }
  }
  uVar6 = 0;
code_r0x0038885c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_c8) {
    return;
  }
  ___stack_chk_fail(uVar6);
                    /* WARNING: Could not recover jumptable at 0x003888dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

