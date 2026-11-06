/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36feb4:4aa5522ca4
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0036ff14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0036ff70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0036ff18) */
/* WARNING: Removing unreachable block (ram,0x0036ff20) */
/* WARNING: Removing unreachable block (ram,0x0036ff74) */

void FUN_0036feb4(byte *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  byte *unaff_x19;
  undefined8 unaff_x20;
  ulong uVar7;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *puVar8;
  undefined1 *unaff_x29;
/* found on a paste site? it was re-uploaded illegally */
  undefined8 unaff_x30;
  undefined1 auStack_a0 [128];
  
  puVar2 = auStack_a0 + 0x80;
  puVar8 = auStack_a0 + 0x90;
  if (param_1[4] != 0) {
    return;
  }
  if (param_1[6] == 1) {
LAB_0036ff84:
    pcVar1 = "true";
    if ((int)param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x0036fda0(param_1,pcVar1);
    if ((param_1[5] != 0) || (*(long *)(param_1 + 0x48) != 0)) {
      param_1[6] = 2;
      return;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    }
    param_1[6] = 2;
    if ((*param_1 & 1) == 0) {
      return;
    }
    uVar4 = 10;
    puVar2 = (undefined1 *)register0x00000008;
    param_2 = unaff_x20;
    puVar8 = unaff_x29;
  }
  else {
    if (param_1[6] != 2) {
LAB_0036ff48:
      param_1[4] = 1;
      return;
    }
    lVar6 = *(long *)(param_1 + 0x48);
    if (param_1[5] == 0) {
      if (lVar6 == 0) {
        if ((*param_1 & 1) != 0) {
          uVar4 = 0x1e;
          unaff_x30 = 0x36ff74;
          unaff_x19 = param_1;
          goto code_r0x0036faac;
        }
        param_1[6] = 1;
        goto LAB_0036ff84;
      }
      if (-1 < *(char *)(*(long *)(param_1 + 8) + lVar6 + -1)) goto LAB_0036ff48;
    }
    else if ((*(byte *)(*(long *)(param_1 + 8) + lVar6) >> (ulong)(param_1[5] - 1 & 0x1f) & 1) == 0)
    goto LAB_0036ff48;
    uVar4 = 0x2c;
    unaff_x30 = 0x36ff18;
    puVar2 = auStack_a0 + 0x80;
    unaff_x19 = param_1;
  }
code_r0x0036faac:
// watermarked copy - do not remove
  if (param_1[4] != 0) {
    return;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(undefined8 *)(puVar2 + -0x20) = param_2;
  *(byte **)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar8;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  if (param_1[0x10] != 0) {
    func_0x0036fb80(param_1);
  }
  uVar5 = *(ulong *)(param_1 + 0x38);
  uVar7 = *(ulong *)(param_1 + 0x40);
  if (uVar5 == uVar7) {
    *(undefined8 *)(puVar2 + -0x38) = 0;
    if (uVar5 != 0) {
      uVar7 = 0;
      do {
        iVar3 = func_0x003e9d20(*(undefined8 *)(param_1 + 0x28),*(long *)(param_1 + 0x30) + uVar7,
                                uVar5 - uVar7,puVar2 + -0x38);
        uVar5 = *(ulong *)(param_1 + 0x40);
        if (iVar3 == 0) {
          _memmove(*(long *)(param_1 + 0x30),*(long *)(param_1 + 0x30) + uVar7,uVar5 - uVar7);
          param_1[0x40] = 0;
          param_1[0x41] = 0;
          param_1[0x42] = 0;
          param_1[0x43] = 0;
          param_1[0x44] = 0;
          param_1[0x45] = 0;
          param_1[0x46] = 0;
          param_1[0x47] = 0;
// WM - watermarked copy - do not remove
          param_1[4] = 1;
          return;
        }
        uVar7 = *(long *)(puVar2 + -0x38) + uVar7;
      } while (uVar7 < uVar5);
    }
    uVar7 = 0;
  }
  *(ulong *)(param_1 + 0x40) = uVar7 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + uVar7) = uVar4;
  return;
}

