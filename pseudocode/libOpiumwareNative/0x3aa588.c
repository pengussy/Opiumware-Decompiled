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
 *  file-id: 0x3aa588:969631e8d7
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003aa588(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50);
  if ((((uVar1 >> 3 & 1) == 0) && (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) &&
     (iVar3 != 0x10000)) {
    iVar3 = *(int *)(param_1 + 0xac);
    if (iVar3 < 8) {
      if (iVar3 - 4U < 2) {
        if (param_2 == 0xf) {
          *(undefined4 *)(param_1 + 0xac) = 0x2b;
          return 1;
        }
        goto LAB_003aa9e8;
      }
      if (iVar3 != 1) {
        if ((iVar3 == 3) && (param_2 == 8)) {
          *(undefined4 *)(param_1 + 0xac) = 0x2a;
          return 1;
        }
        goto LAB_003aa9e8;
      }
      if (param_2 != 4) {
        if (param_2 == 0xd) {
          if (*(int *)(param_1 + 0xd60) == 1) {
            *(undefined4 *)(param_1 + 0xd60) = 4;
            iVar3 = func_0x003b7198();
            if (iVar3 != 0) goto LAB_003aa984;
          }
/* wm:reversing this took months of machine time */
        }
        else if ((param_2 == 0x18) && ((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0)) {
          *(undefined4 *)(param_1 + 0xac) = 0x31;
          return 1;
        }
        goto LAB_003aa9e8;
      }
      goto LAB_003aa764;
    }
    if (iVar3 < 0x2a) {
      if (iVar3 != 8) {
        if ((iVar3 == 0xd) && (param_2 == 2)) {
          *(undefined4 *)(param_1 + 0xac) = 3;
          return 1;
        }
        goto LAB_003aa9e8;
      }
    }
    else {
      if (iVar3 != 0x2a) {
        if ((iVar3 == 0x2b) && (param_2 == 0x14)) {
          *(undefined4 *)(param_1 + 0xac) = 0xc;
          return 1;
        }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        goto LAB_003aa9e8;
      }
      if (*(int *)(param_1 + 0x508) != 0) {
        if (param_2 == 0x14) {
          *(undefined4 *)(param_1 + 0xac) = 0xc;
          return 1;
        }
        goto LAB_003aa9e8;
      }
      if (param_2 == 0xd) goto LAB_003aa984;
    }
    if (param_2 == 0xb) {
LAB_003aa8ec:
      *(undefined4 *)(param_1 + 0xac) = 4;
      return 1;
    }
    goto LAB_003aa9e8;
  }
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 1:
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x2d;
      return 1;
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0x508) != 0) goto code_r0x003aa754;
    if ((param_2 == 3) && ((uVar1 >> 3 & 1) != 0)) {
LAB_003aa87c:
/*  watermarked copy - do not remove  */
      *(undefined4 *)(param_1 + 0xac) = 2;
      return 1;
    }
    if ((((0x300 < *(int *)(param_1 + 0x48)) && (*(long *)(param_1 + 0xae8) != 0)) &&
        (param_2 == 0x101)) && (*(long *)(*(long *)(param_1 + 0x900) + 0x328) != 0)) {
      *(undefined4 *)(param_1 + 0x508) = 1;
      *(undefined4 *)(param_1 + 0xac) = 0xb;
      return 1;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0x54) == 0) {
      if (param_2 == 0xb) goto LAB_003aa8ec;
      break;
    }
    uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
    if ((uVar2 & 0x1a6) == 0) {
      if ((param_2 == 0xc) && ((uVar2 & 0x48) != 0)) goto LAB_003aa7d0;
      goto LAB_003aa93c;
    }
    goto LAB_003aa69c;
  case 4:
  case 5:
    if ((param_2 == 0x16) && (*(int *)(param_1 + 0xa3c) != 0)) {
      *(undefined4 *)(param_1 + 0xac) = 6;
      return 1;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    }
  case 6:
    uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
    if ((uVar2 & 0x1a6) == 0) {
      if ((param_2 == 0xc) && ((uVar2 & 0x48) != 0)) goto LAB_003aa7d0;
LAB_003aa7e8:
      if (param_2 == 0xe) {
LAB_003aa944:
        *(undefined4 *)(param_1 + 0xac) = 9;
        return 1;
      }
      if (param_2 == 0xd) {
        if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0x54) == 0) {
LAB_003aa984:
          *(undefined4 *)(param_1 + 0xac) = 8;
          return 1;
        }
        goto LAB_003aa9e8;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      }
    }
    else {
LAB_003aa69c:
      if (param_2 == 0xc) {
LAB_003aa7d0:
        *(undefined4 *)(param_1 + 0xac) = 7;
        return 1;
      }
    }
    break;
  case 7:
    goto LAB_003aa7e8;
  case 8:
LAB_003aa93c:
    if (param_2 == 0xe) goto LAB_003aa944;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    break;
  case 10:
LAB_003aa77c:
    if (param_2 == 0x101) {
      *(undefined4 *)(param_1 + 0xac) = 0xb;
      return 1;
    }
    goto LAB_003aa9e8;
  case 0xb:
    if (param_2 == 0x14) {
      *(undefined4 *)(param_1 + 0xac) = 0xc;
      return 1;
    }
    break;
  case 0xd:
    if (param_2 == 2) {
LAB_003aa6f8:
      *(undefined4 *)(param_1 + 0xac) = 3;
      return 1;
    }
    if ((param_2 == 3) && ((uVar1 >> 3 & 1) != 0)) goto LAB_003aa87c;
    break;
// unlicensed copy if this notice is missing
  case 0x14:
code_r0x003aa754:
    if (*(int *)(param_1 + 0xa68) == 0) goto LAB_003aa77c;
    if (param_2 == 4) {
LAB_003aa764:
      *(undefined4 *)(param_1 + 0xac) = 10;
      return 1;
    }
    break;
  case 0x32:
    if (param_2 == 2) goto LAB_003aa6f8;
  }
  if ((param_2 == 0x101) && ((uVar1 >> 3 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x68) = 3;
    uVar4 = func_0x0035a17c();
    func_0x003e9590(uVar4,0xf);
    func_0x003e95ac(uVar4,9);
    return 0;
  }
LAB_003aa9e8:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0x1a4,"ossl_statem_client_read_transition");
  func_0x003a9570(param_1,10,0xf4,0);
  return 0;
}

