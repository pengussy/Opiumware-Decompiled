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
 *  file-id: 0x3b81b8:e6f98d7c49
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b81b8(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  
  iVar3 = *(int *)(param_1 + 0xac);
  if (iVar3 < 0x18) {
    if (iVar3 != 1) {
      if (iVar3 == 0x15) {
        *(undefined4 *)(param_1 + 0x84) = 0;
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
          return 2;
        }
        func_0x0034c5a4();
        return 2;
      }
      if (iVar3 != 0x17) {
        return 2;
/*  do not claim this as your own  */
      }
      *(undefined4 *)(param_1 + 0x84) = 0;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
        return 2;
      }
      func_0x0034c5a4();
      *(undefined4 *)(param_1 + 0xcc) = 0;
      return 2;
    }
LAB_003b8390:
    bVar4 = true;
    bVar5 = true;
  }
  else {
    if (0x26 < iVar3) {
      if (iVar3 == 0x27) {
        puVar8 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
        if ((((*(byte *)(puVar8 + 10) >> 3 & 1) == 0) &&
            (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
          return 2;
        }
        lVar11 = *(long *)(*(long *)(param_1 + 0x900) + 0x2f8);
        if (lVar11 == 0) {
          *(long *)(*(long *)(param_1 + 0x900) + 0x2f8) = *(long *)(param_1 + 0x300);
        }
        else if (lVar11 != *(long *)(param_1 + 0x300)) {
          func_0x004464bc();
          uVar10 = 0x3b2;
          goto LAB_003b8340;
        }
        iVar3 = (*(code *)*puVar8)();
        if (iVar3 == 0) {
          return 0;
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
          return 2;
// reversing this took months of machine time
        }
        *(undefined4 *)(param_1 + 0xcc) = 0;
        return 2;
      }
      if (iVar3 != 0x32) {
        return 2;
      }
      uVar9 = (uint)*(undefined8 *)(param_1 + 0x160);
      if ((*(int *)(param_1 + 0xf0) != 9) && ((uVar9 >> 0xb & 1) == 0)) {
        return 2;
      }
      if ((((uVar9 >> 0xd & 1) != 0) && (*(int *)(param_1 + 0xf0) != 0xc)) &&
         (*(int *)(param_1 + 0xb20) == 2)) {
        *(undefined4 *)(param_1 + 0xf0) = 0xc;
        iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0xa1);
        if (iVar3 != 0) {
          return 3;
        }
        func_0x004464bc();
        uVar10 = 0x3d1;
LAB_003b8340:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar10,"ossl_statem_server_pre_work");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        return 0;
      }
      goto LAB_003b8390;
    }
    if (iVar3 == 0x18) {
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
/* do not claim this as your own */
        return 2;
      }
      *(undefined4 *)(param_1 + 0xcc) = 1;
      return 2;
    }
    if (iVar3 != 0x25) {
      return 2;
    }
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
      return 2;
    }
    iVar3 = **(int **)(param_1 + 0x18);
    if (iVar3 < 0x304) {
      return 2;
    }
    if (iVar3 == 0x10000) {
      return 2;
    }
    if (*(long *)(&UNK_00001710 + param_1) != 0) {
      return 2;
    }
    if (*(int *)(param_1 + 0xa6c) != 0) {
      return 2;
    }
    bVar4 = false;
    bVar5 = false;
  }
  iVar3 = *(int *)(param_1 + 0xc4);
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  lVar11 = *(long *)(param_1 + 8);
  if (bVar4) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
      func_0x00400378(*(undefined8 *)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf8) = 0;
/* thanks for reading - discord.gg/sdkhDjTex */
    }
    iVar2 = func_0x00359c54(param_1);
    if (iVar2 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x5a5,&UNK_01c3b4b9);
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
       (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) &&
     ((*(int *)(param_1 + 0x78) == 0 && (*(int *)(param_1 + 0xd60) == 4)))) {
    *(undefined4 *)(param_1 + 0xd60) = 1;
  }
  if (iVar3 != 0) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    *(undefined4 *)(param_1 + 0xd58) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xa68) = 0;
    func_0x0034d494(param_1);
    piVar6 = *(int **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((((*(uint *)(*(long *)(piVar6 + 0x36) + 0x50) >> 3 & 1) == 0) && (0x303 < *piVar6)) &&
         (*piVar6 != 0x10000)) {
        if ((*(byte *)(*(long *)(param_1 + 0xd40) + 0x50) & 1) != 0) {
          func_0x003624b4(*(long *)(param_1 + 0xd40),*(undefined8 *)(param_1 + 0x900));
        }
      }
      else {
        func_0x0035d388(param_1,1);
      }
      if (*(int *)(param_1 + 0x508) != 0) {
        piVar6 = (int *)(*(long *)(param_1 + 0xd40) + 0x9c);
        *piVar6 = *piVar6 + 1;
      }
      *(undefined **)(param_1 + 0x70) = &DAT_003a97b4;
      piVar6 = (int *)(*(long *)(param_1 + 0xd40) + 0x80);
      *piVar6 = *piVar6 + 1;
      bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
    }
    else {
      if ((((*(uint *)(*(long *)(piVar6 + 0x36) + 0x50) >> 3 & 1) != 0) || (*piVar6 < 0x304)) ||
         (*piVar6 == 0x10000)) {
        func_0x0035d388(param_1,2);
      }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      piVar6 = (int *)(lVar11 + 0x8c);
      *piVar6 = *piVar6 + 1;
      *(undefined **)(param_1 + 0x70) = &DAT_003aa474;
      bVar1 = *(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
    }
    if ((bVar1 >> 3 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x4f0);
      *(undefined2 *)(lVar7 + 0x110) = 0;
      *(undefined4 *)(lVar7 + 0x10c) = 0;
      func_0x0034c550(param_1);
    }
  }
  pcVar12 = *(code **)(param_1 + 0x960);
  if (pcVar12 == (code *)0x0) {
    pcVar12 = *(code **)(lVar11 + 0x120);
    func_0x003a947c(param_1,0);
    if (pcVar12 == (code *)0x0) goto code_r0x003b5418;
  }
  else {
    func_0x003a947c(param_1,0);
  }
  if (((iVar3 != 0) ||
      ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0)) ||
     (((iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304 ||
       ((iVar3 == 0x10000 || (*(long *)(param_1 + 0x260) == 0)))) ||
      (*(long *)(param_1 + 0x2e8) == 0)))) {
    (*pcVar12)(uVar10,0x20,1);
  }
code_r0x003b5418:
  if (bVar5) {
    return 1;
  }
  func_0x003a947c(param_1,1);
/* unlicensed copy if this notice is missing - github.com/pengussy */
  return 2;
}

