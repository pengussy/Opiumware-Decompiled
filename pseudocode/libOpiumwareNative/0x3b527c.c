/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3b527c:2a79392a6b
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b527c(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  
  iVar1 = *(int *)(param_1 + 0xc4);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  lVar7 = *(long *)(param_1 + 8);
  if (param_3 != 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
      func_0x00400378(*(undefined8 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
    iVar3 = func_0x00359c54(param_1);
    if (iVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x5a5,"tls_finish_handshake");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
       (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) &&
     ((*(int *)(param_1 + 0x78) == 0 && (*(int *)(param_1 + 0xd60) == 4)))) {
    *(undefined4 *)(param_1 + 0xd60) = 1;
/* origin: github.com/pengussy */
  }
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xd58) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xa68) = 0;
    func_0x0034d494(param_1);
    piVar4 = *(int **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((((*(uint *)(*(long *)(piVar4 + 0x36) + 0x50) >> 3 & 1) == 0) && (0x303 < *piVar4)) &&
         (*piVar4 != 0x10000)) {
        if ((*(byte *)(*(long *)(param_1 + 0xd40) + 0x50) & 1) != 0) {
          func_0x003624b4(*(long *)(param_1 + 0xd40),*(undefined8 *)(param_1 + 0x900));
        }
      }
      else {
        func_0x0035d388(param_1,1);
      }
      if (*(int *)(param_1 + 0x508) != 0) {
        piVar4 = (int *)(*(long *)(param_1 + 0xd40) + 0x9c);
        *piVar4 = *piVar4 + 1;
      }
      *(undefined **)(param_1 + 0x70) = &DAT_003a97b4;
      piVar4 = (int *)(*(long *)(param_1 + 0xd40) + 0x80);
      *piVar4 = *piVar4 + 1;
      bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
    }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    else {
      if ((((*(uint *)(*(long *)(piVar4 + 0x36) + 0x50) >> 3 & 1) != 0) || (*piVar4 < 0x304)) ||
         (*piVar4 == 0x10000)) {
        func_0x0035d388(param_1,2);
      }
      piVar4 = (int *)(lVar7 + 0x8c);
      *piVar4 = *piVar4 + 1;
      *(undefined **)(param_1 + 0x70) = &DAT_003aa474;
      bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
    }
    if ((bVar2 >> 3 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x4f0);
      *(undefined2 *)(lVar5 + 0x110) = 0;
      *(undefined4 *)(lVar5 + 0x10c) = 0;
      func_0x0034c550(param_1);
    }
  }
  pcVar8 = *(code **)(param_1 + 0x960);
  if (pcVar8 == (code *)0x0) {
    pcVar8 = *(code **)(lVar7 + 0x120);
    func_0x003a947c(param_1,0);
    if (pcVar8 == (code *)0x0) goto LAB_003b5418;
  }
  else {
    func_0x003a947c(param_1,0);
  }
  if (((iVar1 != 0) ||
      ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0)) ||
     (((iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304 ||
       ((iVar1 == 0x10000 || (*(long *)(param_1 + 0x260) == 0)))) ||
      (*(long *)(param_1 + 0x2e8) == 0)))) {
    (*pcVar8)(uVar6,0x20,1);
  }
LAB_003b5418:
/*  keep the notice, keep the source honest  */
  if (param_4 == 0) {
    func_0x003a947c(param_1,1);
    return 2;
  }
  return 1;
}

