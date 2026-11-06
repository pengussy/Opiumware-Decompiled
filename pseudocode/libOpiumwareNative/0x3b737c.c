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
 *  file-id: 0x3b737c:be4892f3e2
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b737c(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50);
  if ((((uVar1 >> 3 & 1) == 0) && (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) &&
     (iVar2 != 0x10000)) {
    iVar2 = *(int *)(param_1 + 0xac);
    if (iVar2 < 0x28) {
      if (iVar2 - 0x1eU < 2) {
        if ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) &&
           (*(long *)(*(long *)(param_1 + 0x900) + 0x2c0) == 0)) {
          if (param_2 == 0x14) {
            *(undefined4 *)(param_1 + 0xac) = 0x24;
            return 1;
          }
        }
        else if (param_2 == 0xf) {
          *(undefined4 *)(param_1 + 0xac) = 0x21;
          return 1;
        }
      }
      else if (iVar2 == 1) {
        if (*(int *)(param_1 + 0xf0) != 0xb) {
          if ((param_2 == 0xb) && (*(int *)(param_1 + 0xd60) == 4)) {
            *(undefined4 *)(param_1 + 0xac) = 0x1e;
            return 1;
          }
          if ((param_2 == 0x18) && ((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0)) {
            *(undefined4 *)(param_1 + 0xac) = 0x30;
            return 1;
          }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        }
      }
      else if ((iVar2 == 0x21) && (param_2 == 0x14)) {
        *(undefined4 *)(param_1 + 0xac) = 0x24;
        return 1;
      }
      goto LAB_003b772c;
    }
    if ((iVar2 != 0x28) && (iVar2 != 0x35)) {
      if (iVar2 != 0x32) goto LAB_003b772c;
      if (*(int *)(param_1 + 0x8d0) == 1) {
        if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0xac) = 0x16;
          return 1;
        }
        goto LAB_003b772c;
      }
      if ((*(int *)(param_1 + 0xb20) == 2) && ((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0)) {
        if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0xac) = 0x35;
          return 1;
        }
        goto LAB_003b772c;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      }
    }
    if (*(int *)(param_1 + 0x398) == 0) {
      if (param_2 == 0x14) {
        *(undefined4 *)(param_1 + 0xac) = 0x24;
        return 1;
      }
    }
    else if (param_2 == 0xb) {
      *(undefined4 *)(param_1 + 0xac) = 0x1e;
      return 1;
    }
    goto LAB_003b772c;
  }
  uVar3 = *(uint *)(param_1 + 0xac);
  if ((int)uVar3 < 0x20) {
    if ((int)uVar3 < 0x1d) {
      if ((uVar3 < 2 || uVar3 == 0x17) && param_2 == 1) {
        *(undefined4 *)(param_1 + 0xac) = 0x16;
        return 1;
      }
    }
    else if (uVar3 == 0x1d) {
      if (param_2 == 0x10) {
        if (*(int *)(param_1 + 0x398) != 0) goto LAB_003b772c;
        goto LAB_003b74d8;
      }
      if ((param_2 == 0xb) && (*(int *)(param_1 + 0x398) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = 0x1e;
        return 1;
      }
    }
    else if ((uVar3 == 0x1e) && (param_2 == 0x10)) {
LAB_003b74d8:
      *(undefined4 *)(param_1 + 0xac) = 0x20;
/*  unlicensed copy if this notice is missing  */
      return 1;
    }
    goto LAB_003b7624;
  }
  if ((int)uVar3 < 0x22) {
    if (uVar3 == 0x20) {
      if (((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) &&
          (*(long *)(*(long *)(param_1 + 0x900) + 0x2c0) == 0)) || (*(int *)(param_1 + 200) != 0))
      goto LAB_003b750c;
      if (param_2 == 0xf) {
        *(undefined4 *)(param_1 + 0xac) = 0x21;
        return 1;
      }
    }
    else if (uVar3 == 0x21) {
LAB_003b750c:
      if (param_2 == 0x101) {
        *(undefined4 *)(param_1 + 0xac) = 0x23;
        return 1;
      }
      goto LAB_003b772c;
    }
  }
  else if (uVar3 == 0x22) {
LAB_003b7554:
    if (param_2 == 0x14) {
      *(undefined4 *)(param_1 + 0xac) = 0x24;
      return 1;
    }
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  else if (uVar3 == 0x23) {
    if (*(int *)(param_1 + 0x4b4) == 0) goto LAB_003b7554;
    if (param_2 == 0x43) {
      *(undefined4 *)(param_1 + 0xac) = 0x22;
      return 1;
    }
  }
  else if (uVar3 == 0x28) goto LAB_003b750c;
LAB_003b7624:
  if ((param_2 == 0x101) && ((uVar1 >> 3 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x68) = 3;
    uVar4 = func_0x0035a17c();
    func_0x003e9590(uVar4,0xf);
    func_0x003e95ac(uVar4,9);
    return 0;
  }
LAB_003b772c:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,0x146,"ossl_statem_server_read_transition");
  func_0x003a9570(param_1,10,0xf4,0);
  return 0;
// WM - proprietary - see LICENSE - do not sell
}

