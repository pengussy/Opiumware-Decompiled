/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b43ac:4597ae12e8
 */

ulong FUN_003b43ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  code *pcVar9;
  uint uVar10;
  ulong uVar11;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x260) == 0) {
    bVar3 = true;
    iVar4 = *(int *)(param_1 + 0x78);
  }
  else {
    bVar3 = *(long *)(param_1 + 0x2e8) == 0;
    iVar4 = *(int *)(param_1 + 0x78);
  }
  if (iVar4 != 0) {
    pcVar9 = *(code **)(*(long *)(param_1 + 0xe28) + 0x68);
    if (pcVar9 != (code *)0x0) {
      (*pcVar9)(*(undefined8 *)(param_1 + 0xe38),0);
    }
    if (*(int *)(param_1 + 0xd60) != 4) {
      *(undefined4 *)(param_1 + 0xc4) = 1;
    }
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
         (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) &&
       (uVar11 = func_0x003b4704(param_1), (int)uVar11 == 0)) {
      return uVar11;
/* if you paid for this, you were scammed */
    }
  }
  piVar7 = *(int **)(param_1 + 0x18);
  uVar10 = *(uint *)(*(long *)(piVar7 + 0x36) + 0x50);
  if ((((uVar10 >> 3 & 1) == 0) && (0x303 < *piVar7)) && (*piVar7 != 0x10000)) {
    iVar4 = func_0x00393d54(param_1 + 0xe10);
    if (iVar4 != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x35b,"tls_process_finished");
      uVar5 = 10;
      uVar6 = 0xb6;
      goto LAB_003b4584;
    }
    piVar7 = *(int **)(param_1 + 0x18);
    uVar10 = *(uint *)(*(long *)(piVar7 + 0x36) + 0x50);
  }
  if (((((uVar10 >> 3 & 1) != 0) || (*piVar7 < 0x304)) || (*piVar7 == 0x10000)) &&
/*  chat: discord.gg/sdkhDjTex  */
     (*(int *)(param_1 + 0x1b8) == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x361,"tls_process_finished");
    uVar5 = 10;
    uVar6 = 0x9a;
LAB_003b4584:
    func_0x003a9570(param_1,uVar5,uVar6,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  uVar11 = *(ulong *)(param_1 + 0x2e8);
  if (uVar11 != param_2[2]) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x369,"tls_process_finished");
    uVar5 = 0x32;
    uVar6 = 0x6f;
    goto LAB_003b4584;
  }
  iVar4 = func_0x0046eb60(*param_2,param_1 + 0x268,uVar11);
  if (iVar4 != 0) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x377,"tls_process_finished");
    uVar5 = 0x33;
    uVar6 = 0x95;
    goto LAB_003b4584;
  }
  if (0x40 < uVar11) {
    func_0x019e7c78(param_1);
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x78);
  lVar8 = 0x468;
  if (iVar4 != 0) {
    lVar8 = 0x420;
  }
  lVar1 = 0x4a8;
  if (iVar4 != 0) {
    lVar1 = 0x460;
  }
  _memcpy(param_1 + lVar8,param_1 + 0x268,uVar11);
  *(ulong *)(param_1 + lVar1) = uVar11;
  lVar8 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
  if ((((*(byte *)(lVar8 + 0x50) >> 3 & 1) == 0) &&
      (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    if (iVar4 == 0) {
      iVar4 = (**(code **)(lVar8 + 8))(param_1,param_1 + 0x5fc,param_1 + 0x5bc,0,auStack_48);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = func_0x0036cca8(param_1);
      if (iVar4 == 0) {
        return 0;
      }
      if (((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0) &&
/*  stripping the watermark breaks the license  */
         (iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0x111),
         iVar4 == 0)) {
        return 0;
      }
      iVar4 = func_0x003b0c9c(param_1);
    }
    else {
      if (*(int *)(param_1 + 0xd60) == 4) goto LAB_003b4618;
      iVar4 = (**(code **)(lVar8 + 0x10))(param_1,0x121);
    }
    if (!(bool)(iVar4 != 0 & bVar3)) {
      return (ulong)(iVar4 != 0);
    }
  }
  else {
LAB_003b4618:
    if (!bVar3) {
      return 1;
    }
  }
  if (((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) &&
     (pcVar9 = *(code **)(*(long *)(param_1 + 0xe28) + 0x70), pcVar9 != (code *)0x0)) {
    (*pcVar9)(*(undefined8 *)(param_1 + 0xe38),0);
  }
  return 1;
}

