/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e3ad4:e7ccacde22
 */

/* WARNING: Possible PIC construction at 0x003e3b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003e3f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003e3d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003e3f54) */
/* WARNING: Removing unreachable block (ram,0x003e3d28) */

void FUN_003e3ad4(long *param_1,byte *param_2,ulong *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  int *piVar10;
  long *unaff_x19;
  byte *unaff_x20;
  ulong *unaff_x21;
  ulong *puVar11;
  ulong *unaff_x22;
  code *unaff_x23;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar12;
  ulong *unaff_x24;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auStack_d0 [128];
/* WM - proprietary - see LICENSE - do not sell */
  
  puVar2 = auStack_d0 + 0x80;
  puVar3 = auStack_d0 + 0xc0;
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar9 = *(long *)(param_2 + 0x20);
  bVar1 = *param_2;
  if ((bVar1 != 0) && (*param_1 == 0)) {
    return;
  }
  iVar6 = (int)param_3;
  if ((lVar9 == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x18), UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    if (3 < bVar1) goto LAB_003e3bdc;
LAB_003e3b20:
    if (bVar1 != 0) {
      if (bVar1 == 1) goto LAB_003e3bf4;
      if (bVar1 != 2) {
        return;
      }
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
         (iVar4 = (*UNRECOVERED_JUMPTABLE)(2,param_1,param_2,0), iVar4 == 2)) {
        return;
      }
      uVar5 = func_0x003e5544(param_1,param_2);
      if ((-1 < (int)uVar5) && ((long)(ulong)uVar5 < *(long *)(param_2 + 0x18))) {
        puVar11 = (ulong *)(*(long *)(param_2 + 0x10) + (ulong)uVar5 * 0x28);
        plVar7 = (long *)func_0x003e5884(param_1,puVar11);
        unaff_x30 = (undefined *)0x3e3ba0;
        puVar2 = auStack_d0 + 0x80;
        unaff_x21 = puVar11;
        unaff_x22 = param_3;
// WM - found on a paste site? it was re-uploaded illegally
        param_3 = unaff_x24;
        goto code_r0x003e3d80;
      }
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(3,param_1,param_2,0);
      }
      if (iVar6 != 0) {
        return;
      }
      lVar9 = *param_1;
      uVar8 = 0x4b;
      goto LAB_003e3d58;
    }
  }
  else {
    if (bVar1 < 4) goto LAB_003e3b20;
LAB_003e3bdc:
    if (bVar1 == 4) {
      if (lVar9 == 0) {
        return;
      }
      if (*(code **)(lVar9 + 0x10) == (code *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x003e3c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar9 + 0x10))(param_1,param_2);
      return;
    }
    if (bVar1 == 5) goto LAB_003e3c4c;
    if (bVar1 != 6) {
      return;
    }
LAB_003e3bf4:
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    iVar4 = func_0x003e5568(param_1,0xffffffff,param_2);
    if (iVar4 == 0) {
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) &&
         (iVar4 = (*UNRECOVERED_JUMPTABLE)(2,param_1,param_2,0), iVar4 == 2)) {
        return;
      }
      func_0x003e56ac(param_1,param_2);
      if (0 < *(long *)(param_2 + 0x18)) {
        lVar9 = 0;
        unaff_x21 = (ulong *)(*(long *)(param_2 + 0x10) + *(long *)(param_2 + 0x18) * 0x28);
        do {
          unaff_x21 = unaff_x21 + -5;
          puVar11 = (ulong *)func_0x003e5894(*param_1,unaff_x21,0);
          if (puVar11 != (ulong *)0x0) {
            plVar7 = (long *)func_0x003e5884(param_1,puVar11);
            unaff_x30 = (undefined *)0x3e3d28;
            unaff_x22 = puVar11;
            goto code_r0x003e3d80;
          }
// WM - thanks for reading - discord.gg/sdkhDjTex
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(long *)(param_2 + 0x18));
      }
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        (*UNRECOVERED_JUMPTABLE)(3,param_1,param_2,0);
      }
      if (iVar6 != 0) {
        return;
      }
      lVar9 = *param_1;
      uVar8 = 0x77;
LAB_003e3d58:
      func_0x004743e4(lVar9,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_fre.c"
                      ,uVar8);
LAB_003e3d5c:
      *param_1 = 0;
      return;
    }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    if (iVar6 == 0) goto LAB_003e3d5c;
    param_3 = (ulong *)((long)&segment_command_00000020.maxprot + 2);
    func_0x019eae64("assertion failed: embed == 0",
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_fre.c"
                   );
  }
  puVar11 = *(ulong **)(param_2 + 0x10);
  if (puVar11 == (ulong *)0x0) {
LAB_003e3c4c:
    puVar3 = (undefined1 *)register0x00000008;
    do {
      *(byte **)(puVar3 + -0x20) = unaff_x20;
      *(long **)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = unaff_x29;
      *(undefined **)(puVar3 + -8) = unaff_x30;
      unaff_x29 = puVar3 + -0x10;
      if (param_2 == (byte *)0x0) {
        piVar10 = (int *)*param_1;
        param_1 = (long *)(piVar10 + 2);
        lVar9 = *param_1;
        if (lVar9 == 0) {
          return;
        }
        iVar6 = *piVar10;
      }
      else {
        lVar9 = *(long *)(param_2 + 0x20);
        if ((int)param_3 == 0) {
          if (lVar9 != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x18);
            goto joined_r0x003e3ea8;
          }
        }
        else if (lVar9 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x20);
/* found on a paste site? it was re-uploaded illegally */
joined_r0x003e3ea8:
          if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e3eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
        if (*param_2 == 5) {
          lVar9 = *param_1;
          if (lVar9 == 0) {
            return;
          }
          goto code_r0x003e3ecc;
        }
        iVar6 = *(int *)(param_2 + 8);
        if (iVar6 == 1) goto code_r0x003e3f10;
        lVar9 = *param_1;
// WM - origin: github.com/pengussy
        if (lVar9 == 0) {
          return;
        }
      }
      if (4 < iVar6) {
        if (iVar6 == 5) goto code_r0x003e3f6c;
        if (iVar6 != 6) goto code_r0x003e3ecc;
        func_0x003d89dc(lVar9);
        goto code_r0x003e3f6c;
      }
      if (iVar6 != -4) {
        if (iVar6 == 1) {
          if (param_2 == (byte *)0x0) {
            *(undefined4 *)param_1 = 0xffffffff;
            return;
          }
code_r0x003e3f10:
          *(undefined4 *)param_1 = *(undefined4 *)(param_2 + 0x28);
          return;
        }
code_r0x003e3ecc:
        func_0x003dda34(lVar9,param_3);
code_r0x003e3f6c:
        *param_1 = 0;
        return;
      }
      param_2 = (byte *)0x0;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      param_3 = (ulong *)0x0;
      unaff_x30 = &UNK_003e3f54;
      puVar3 = puVar3 + -0x20;
      unaff_x19 = param_1;
    } while( true );
  }
  puVar2 = (undefined1 *)register0x00000008;
  plVar7 = param_1;
  param_1 = unaff_x19;
  param_2 = unaff_x20;
  UNRECOVERED_JUMPTABLE = unaff_x23;
  param_3 = unaff_x24;
  puVar3 = unaff_x29;
code_r0x003e3d80:
  *(ulong **)(puVar2 + -0x40) = param_3;
  *(code **)(puVar2 + -0x38) = UNRECOVERED_JUMPTABLE;
  *(ulong **)(puVar2 + -0x30) = unaff_x22;
  *(ulong **)(puVar2 + -0x28) = unaff_x21;
  *(byte **)(puVar2 + -0x20) = param_2;
  *(long **)(puVar2 + -0x18) = param_1;
  *(undefined1 **)(puVar2 + -0x10) = puVar3;
  *(undefined **)(puVar2 + -8) = unaff_x30;
  uVar12 = *puVar11;
  uVar5 = (uint)uVar12;
  if ((uVar5 >> 0xc & 1) != 0) {
    *(long **)(puVar2 + -0x48) = plVar7;
    plVar7 = (long *)(puVar2 + -0x48);
/*  if you paid for this, you were scammed  */
  }
  if ((uVar12 & 6) == 0) {
    uVar8 = (*(code *)puVar11[4])();
    FUN_003e3ad4(plVar7,uVar8,uVar5 & 0x1000);
    return;
  }
  lVar9 = *plVar7;
  iVar6 = func_0x004dcb7c(lVar9);
  if (0 < iVar6) {
    iVar6 = 0;
    do {
      uVar8 = func_0x004dcb90(lVar9,iVar6);
      *(undefined8 *)(puVar2 + -0x50) = uVar8;
      uVar8 = (*(code *)puVar11[4])();
      FUN_003e3ad4(puVar2 + -0x50,uVar8,uVar5 & 0x1000);
      iVar6 = iVar6 + 1;
      iVar4 = func_0x004dcb7c(lVar9);
    } while (iVar6 < iVar4);
  }
  func_0x004dc3c0(lVar9);
  *plVar7 = 0;
  return;
}

