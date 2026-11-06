/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3aaa2c:51f25c8f2e
   =========================================================================== */

undefined8 FUN_003aaa2c(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  uVar1 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50);
  if ((((uVar1 >> 3 & 1) == 0) && (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) &&
     (iVar2 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0xac)) {
    case 1:
      if (*(int *)(param_1 + 0xd5c) == -1) {
        return 2;
      }
      *(undefined4 *)(param_1 + 0xac) = 0x2f;
      return 1;
    default:
      func_0x004464bc();
      pcVar4 = "ossl_statem_client13_write_transition";
      uVar3 = 0x1c0;
      goto LAB_003aad44;
    case 8:
      if (*(int *)(param_1 + 0xd60) != 4) {
        if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
          func_0x019e75a0();
          return 0;
        }
        goto LAB_003aae28;
      }
      if ((*(char *)(param_1 + 0xb58) == '\0') && (*(int *)(param_1 + 0xb44) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = 0xf;
        return 1;
      }
      goto LAB_003aad84;
/* WM - proprietary - see LICENSE - do not sell */
    case 10:
    case 0x14:
    case 0x2f:
    case 0x31:
      goto LAB_003aae28;
    case 0xc:
      if ((*(uint *)(param_1 + 0xf0) | 4) == 7) {
        uVar5 = 0x33;
      }
      else if (((*(byte *)(param_1 + 0x9b2) >> 4 & 1) == 0) || (*(int *)(param_1 + 0x8d0) != 0)) {
        if (*(int *)(param_1 + 0x340) == 0) {
          uVar5 = 0x14;
        }
        else if ((*(char *)(param_1 + 0xb58) == '\0') && (*(int *)(param_1 + 0xb44) != 0)) {
          uVar5 = 0xf;
        }
        else {
          uVar5 = 0xe;
        }
      }
      else {
        uVar5 = 0x12;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar5;
      uVar3 = func_0x0048058c();
      *(undefined8 *)(param_1 + 0x90) = uVar3;
/* do not claim this as your own */
      return 1;
    case 0xe:
    case 0xf:
      uVar5 = 0x11;
      if (*(int *)(param_1 + 0x340) != 1) {
        uVar5 = 0x14;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar5;
      return 1;
    case 0x11:
      goto LAB_003aae08;
    case 0x12:
    case 0x34:
      goto LAB_003aacc4;
    case 0x33:
      goto code_r0x003aac98;
    }
  }
/* WM - donate: donate/README.md */
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0:
  case 2:
    break;
  case 1:
    if (*(int *)(param_1 + 0xd58) == 0) {
      return 2;
    }
    break;
  case 3:
    if (((*(byte *)(param_1 + 0x9b2) >> 4 & 1) == 0) || (*(int *)(param_1 + 0xf0) == 7)) {
      *(undefined4 *)(param_1 + 0xac) = 0xd;
      return 1;
    }
  case 0x11:
LAB_003aabb8:
    *(undefined4 *)(param_1 + 0xac) = 0x12;
    return 1;
  default:
    func_0x004464bc();
    pcVar4 = "ossl_statem_client_write_transition";
    uVar3 = 0x229;
LAB_003aad44:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar3,pcVar4);
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  case 9:
    uVar3 = func_0x0048058c();
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    uVar5 = 0x10;
    if (*(int *)(param_1 + 0x340) != 0) {
      uVar5 = 0xe;
    }
    goto LAB_003aabf0;
  case 0xc:
    if (*(int *)(param_1 + 0x508) == 0) goto LAB_003aae28;
/* wm:do not claim this as your own */
    goto LAB_003aabb8;
  case 0xd:
    if ((*(int *)(param_1 + 0xf0) == 2) && ((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0)) {
      uVar5 = 0x32;
      if ((*(ulong *)(param_1 + 0x9b0) & 0x100000) != 0) {
        uVar5 = 0x12;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar5;
      return 1;
    }
  case 0x32:
    uVar3 = func_0x0048058c();
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    return 2;
  case 0xe:
    *(undefined4 *)(param_1 + 0xac) = 0x10;
    return 1;
  case 0x10:
    uVar5 = 0x11;
    if (*(int *)(param_1 + 0x340) != 1 || (*(ulong *)(param_1 + 0x160) & 0x10) != 0) {
      uVar5 = 0x12;
    }
    *(undefined4 *)(param_1 + 0xac) = uVar5;
    return 1;
  case 0x12:
    if (*(int *)(param_1 + 0x8d0) != 1) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
      if (*(int *)(param_1 + 0xf0) == 2) {
        *(undefined4 *)(param_1 + 0xac) = 0x32;
        return 1;
      }
      if (((uVar1 >> 3 & 1) == 0) && (*(int *)(param_1 + 0x4b4) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = 0x13;
        return 1;
      }
      goto LAB_003aae08;
    }
    break;
  case 0x13:
    goto LAB_003aae08;
  case 0x14:
    if (*(int *)(param_1 + 0x508) == 0) {
      return 2;
    }
LAB_003aae28:
    *(undefined4 *)(param_1 + 0xac) = 1;
    return 1;
  case 0x2d:
    iVar2 = func_0x0034fca0(param_1,1);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xac) = 1;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      return 1;
    }
    uVar3 = FUN_003b2c28(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar5 = 0xd;
LAB_003aabf0:
    *(undefined4 *)(param_1 + 0xac) = uVar5;
    return 1;
  }
  *(undefined4 *)(param_1 + 0xac) = 0xd;
  return 1;
code_r0x003aac98:
  if ((*(int *)(param_1 + 0xb20) == 2) && ((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xac) = 0x34;
    return 1;
  }
LAB_003aacc4:
  if (*(int *)(param_1 + 0x340) != 0) {
    if ((*(char *)(param_1 + 0xb58) == '\0') && (*(int *)(param_1 + 0xb44) != 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0xf;
      return 1;
    }
LAB_003aad84:
    *(undefined4 *)(param_1 + 0xac) = 0xe;
// WM - no support for modified copies
    return 1;
  }
LAB_003aae08:
  *(undefined4 *)(param_1 + 0xac) = 0x14;
  return 1;
}

