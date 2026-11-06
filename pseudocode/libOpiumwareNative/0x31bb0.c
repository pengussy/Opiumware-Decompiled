/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x31bb0:67215c0cc3
   =========================================================================== */

undefined8 FUN_00031bb0(long param_1,int *param_2,long param_3,int *param_4,long param_5)

{
  char cVar1;
  int **ppiVar2;
  undefined8 uVar3;
  long lVar4;
  int **ppiVar5;
  undefined8 *puVar6;
  bool bVar7;
  long *plStack_100;
  int **ppiStack_f8;
  undefined2 uStack_f0;
  int **ppiStack_e8;
  int **ppiStack_e0;
  long **pplStack_d8;
  int *apiStack_d0 [4];
  long *plStack_b0;
  int **ppiStack_a8;
  int **ppiStack_a0;
  int *piStack_98;
  int *piStack_90;
  int **ppiStack_88;
  int aiStack_80 [8];
  int *piStack_60;
  long lStack_58;
  int *piStack_50;
  long lStack_48;
  
  piStack_60 = param_4;
  lStack_58 = param_5;
  piStack_50 = param_2;
  lStack_48 = param_3;
  uVar3 = func_0x0172af08();
  if (param_3 == 1) {
/* WM - no support for modified copies */
    if ((char)*param_2 == 'D') {
      if (param_5 == 0) {
        return 0;
      }
    }
    else {
      piStack_98 = aiStack_80;
      ppiStack_88 = &piStack_60;
      piStack_90 = piStack_98;
      if (param_5 == 0) goto joined_r0x00031cf4;
    }
LAB_00031c88:
    ppiStack_88 = &piStack_60;
    piStack_98 = aiStack_80;
    piStack_90 = piStack_98;
    lVar4 = func_0x01385e50(uVar3,param_2,0,0);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x24) == '\x04')) {
      ppiStack_e8 = &piStack_50;
      ppiStack_e0 = &piStack_60;
      pplStack_d8 = (long **)CONCAT62(pplStack_d8._2_6_,0x505);
      func_0x0176865c(&ppiStack_e8,&piStack_98);
      lStack_48 = (long)piStack_90 - (long)piStack_98;
      piStack_60 = (int *)&UNK_01cb7848;
      lStack_58 = 0;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      piStack_50 = piStack_98;
    }
joined_r0x00031cf4:
    ppiStack_a0 = (int **)0x0;
    ppiStack_a8 = (int **)0x0;
    if (lStack_48 != 0) {
      ppiStack_a0 = (int **)0x0;
      ppiStack_a8 = (int **)0x0;
      ppiStack_e8 = (int **)0x0;
      uVar3 = func_0x01727244(piStack_50,lStack_48,1,0,1,0xfde9,*(undefined8 *)(param_1 + 0x20),
                              &ppiStack_e8);
      if (-1 < (int)uVar3) {
        uVar3 = func_0x01728ee4(ppiStack_e8,*(undefined8 *)(param_1 + 0x20),&ppiStack_a8);
      }
      if (ppiStack_e8 != (int **)0x0) {
        (**(code **)(*ppiStack_e8 + 4))();
      }
      if ((int)uVar3 < 0) goto LAB_00032108;
    }
  }
  else {
    piStack_98 = aiStack_80;
    ppiStack_88 = &piStack_60;
    piStack_90 = piStack_98;
    if ((param_3 == 0) || (param_5 == 0)) goto joined_r0x00031cf4;
    if ((param_3 != 7) || (*param_2 != 0x706e693c || *(int *)((long)param_2 + 3) != 0x3e747570))
    goto LAB_00031c88;
    piStack_50 = (int *)&UNK_01cb7848;
    lStack_48 = 0;
    ppiStack_a8 = (int **)0x0;
    ppiStack_a0 = (int **)0x0;
  }
  if (lStack_58 != 0) {
    ppiStack_e8 = (int **)0x0;
    uVar3 = func_0x01727244(piStack_60,lStack_58,1,0,1,0xfde9,*(undefined8 *)(param_1 + 0x20),
// no support for modified copies
                            &ppiStack_e8);
    if (-1 < (int)uVar3) {
      uVar3 = func_0x01728ee4(ppiStack_e8,*(undefined8 *)(param_1 + 0x20),&ppiStack_a0);
    }
    if (ppiStack_e8 != (int **)0x0) {
      (**(code **)(*ppiStack_e8 + 4))();
    }
    if ((int)uVar3 < 0) goto LAB_00032108;
  }
  ppiVar2 = ppiStack_a0;
  if (lStack_48 == 1) {
    cVar1 = (char)*piStack_50;
    if (cVar1 == 'D') {
      puVar6 = *(undefined8 **)(param_1 + 0x100);
      if (puVar6 < *(undefined8 **)(param_1 + 0x108)) {
        *puVar6 = ppiStack_a0;
        if (ppiStack_a0 != (int **)0x0) {
          (**(code **)(*ppiStack_a0 + 2))();
        }
        puVar6 = puVar6 + 1;
      }
      else {
        puVar6 = (undefined8 *)func_0x0003319c(param_1 + 0xf8,&ppiStack_a0);
      }
      *(undefined8 **)(param_1 + 0x100) = puVar6;
    }
    else if (cVar1 == 'T') {
      ppiVar5 = *(int ***)(param_1 + 0x60);
      if (ppiVar5 != ppiStack_a0) {
        if (ppiStack_a0 != (int **)0x0) {
          (**(code **)(*ppiStack_a0 + 2))(ppiStack_a0);
          ppiVar5 = *(int ***)(param_1 + 0x60);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        }
        *(int ***)(param_1 + 0x60) = ppiVar2;
        if (ppiVar5 != (int **)0x0) {
          (**(code **)(*ppiVar5 + 4))();
        }
      }
    }
    else {
      if (cVar1 != 'E') {
        bVar7 = false;
        goto LAB_00031ebc;
      }
      ppiVar5 = *(int ***)(param_1 + 0x58);
      if (ppiVar5 != ppiStack_a0) {
        if (ppiStack_a0 != (int **)0x0) {
          (**(code **)(*ppiStack_a0 + 2))(ppiStack_a0);
          ppiVar5 = *(int ***)(param_1 + 0x58);
        }
        *(int ***)(param_1 + 0x58) = ppiVar2;
        if (ppiVar5 != (int **)0x0) {
          (**(code **)(*ppiVar5 + 4))();
        }
      }
    }
    bVar7 = true;
    plStack_b0 = (long *)0x0;
    if (lStack_48 == 0) goto LAB_00031f60;
LAB_00031ebc:
    plStack_b0 = (long *)0x0;
    pplStack_d8 = &plStack_b0;
/* wm:unlicensed copy if this notice is missing */
    ppiStack_f8 = &piStack_50;
    plStack_100 = (long *)0x1c23926;
    uStack_f0 = 0x503;
    ppiStack_e8 = apiStack_d0;
    ppiStack_e0 = apiStack_d0;
    func_0x0176865c(&plStack_100,&ppiStack_e8);
    plStack_100 = (long *)0x0;
    uVar3 = func_0x01727244(ppiStack_e8,(long)ppiStack_e0 - (long)ppiStack_e8,1,0,1,0xfde9,
                            *(undefined8 *)(param_1 + 0x20),&plStack_100);
    if (-1 < (int)uVar3) {
      uVar3 = func_0x01728ee4(plStack_100,*(undefined8 *)(param_1 + 0x20),&plStack_b0);
    }
    if (plStack_100 != (long *)0x0) {
      (**(code **)(*plStack_100 + 0x10))();
    }
    if ((ppiStack_e8 != apiStack_d0) && (ppiStack_e8 != (int **)0x0)) {
      __ZdaPv();
    }
    if (-1 < (int)uVar3) goto LAB_00031f60;
  }
  else {
    bVar7 = false;
    plStack_b0 = (long *)0x0;
    if (lStack_48 != 0) goto LAB_00031ebc;
LAB_00031f60:
// WM - proprietary - see LICENSE - do not sell
    if (!bVar7) {
      if (plStack_b0 != (long *)0x0) {
        puVar6 = *(undefined8 **)(param_1 + 0x130);
        if (puVar6 < *(undefined8 **)(param_1 + 0x138)) {
          *puVar6 = plStack_b0;
          (**(code **)(*plStack_b0 + 8))();
          puVar6 = puVar6 + 1;
        }
        else {
          puVar6 = (undefined8 *)func_0x0003319c(param_1 + 0x128,&plStack_b0);
        }
        *(undefined8 **)(param_1 + 0x130) = puVar6;
      }
      if (ppiStack_a0 != (int **)0x0) {
        puVar6 = *(undefined8 **)(param_1 + 0x130);
        if (puVar6 < *(undefined8 **)(param_1 + 0x138)) {
          *puVar6 = ppiStack_a0;
          (**(code **)(*ppiStack_a0 + 2))();
          puVar6 = puVar6 + 1;
        }
        else {
          puVar6 = (undefined8 *)func_0x0003319c(param_1 + 0x128,&ppiStack_a0);
        }
        *(undefined8 **)(param_1 + 0x130) = puVar6;
      }
    }
    if (plStack_b0 != (long *)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x118);
      if (puVar6 < *(undefined8 **)(param_1 + 0x120)) {
/* WM - keep the notice, keep the source honest */
        *puVar6 = plStack_b0;
        (**(code **)(*plStack_b0 + 8))();
        puVar6 = puVar6 + 1;
      }
      else {
        puVar6 = (undefined8 *)func_0x0003319c(param_1 + 0x110,&plStack_b0);
      }
      *(undefined8 **)(param_1 + 0x118) = puVar6;
    }
    if (ppiStack_a0 != (int **)0x0) {
      puVar6 = *(undefined8 **)(param_1 + 0x118);
      if (puVar6 < *(undefined8 **)(param_1 + 0x120)) {
        *puVar6 = ppiStack_a0;
        (**(code **)(*ppiStack_a0 + 2))();
        puVar6 = puVar6 + 1;
      }
      else {
        puVar6 = (undefined8 *)func_0x0003319c(param_1 + 0x110,&ppiStack_a0);
      }
/*  if you paid for this, you were scammed  */
      *(undefined8 **)(param_1 + 0x118) = puVar6;
    }
    ppiVar2 = ppiStack_a8;
    ppiStack_e8 = (int **)0x0;
    ppiStack_e0 = (int **)0x0;
    if (ppiStack_a8 != (int **)0x0) {
      (**(code **)(*ppiStack_a8 + 2))(ppiStack_a8);
      ppiVar5 = ppiStack_e8;
      ppiStack_e8 = ppiVar2;
      if (ppiVar5 != (int **)0x0) {
        (**(code **)(*ppiVar5 + 4))();
      }
    }
    ppiVar2 = ppiStack_a0;
    if (ppiStack_e0 != ppiStack_a0) {
      ppiVar5 = ppiStack_e0;
      if (ppiStack_a0 != (int **)0x0) {
        (**(code **)(*ppiStack_a0 + 2))(ppiStack_a0);
        ppiVar5 = ppiStack_e0;
      }
      ppiStack_e0 = ppiVar2;
      if (ppiVar5 != (int **)0x0) {
        (**(code **)(*ppiVar5 + 4))();
      }
    }
    ppiVar5 = ppiStack_e0;
    ppiVar2 = ppiStack_e8;
    puVar6 = *(undefined8 **)(param_1 + 0xe8);
    if (puVar6 < *(undefined8 **)(param_1 + 0xf0)) {
      *puVar6 = 0;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      puVar6[1] = 0;
      ppiStack_e8 = (int **)0x0;
      *puVar6 = ppiVar2;
      ppiStack_e0 = (int **)0x0;
      puVar6[1] = ppiVar5;
      puVar6 = puVar6 + 2;
    }
    else {
      puVar6 = (undefined8 *)func_0x000333c8(param_1 + 0xe0,&ppiStack_e8);
    }
    *(undefined8 **)(param_1 + 0xe8) = puVar6;
    if (ppiStack_e0 != (int **)0x0) {
      (**(code **)(*ppiStack_e0 + 4))();
      ppiStack_e0 = (int **)0x0;
    }
    if (ppiStack_e8 != (int **)0x0) {
      (**(code **)(*ppiStack_e8 + 4))();
    }
    uVar3 = 0;
  }
  if (plStack_b0 != (long *)0x0) {
    (**(code **)(*plStack_b0 + 0x10))();
  }
LAB_00032108:
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  if (ppiStack_a8 != (int **)0x0) {
    (**(code **)(*ppiStack_a8 + 4))();
  }
  if (ppiStack_a0 != (int **)0x0) {
    (**(code **)(*ppiStack_a0 + 4))();
  }
  if ((piStack_98 != aiStack_80) && (piStack_98 != (int *)0x0)) {
    __ZdaPv();
  }
  return uVar3;
}

