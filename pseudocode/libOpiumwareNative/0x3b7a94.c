/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b7a94:03c05f7e38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003b7a94(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_1 + 0x18);
  uVar3 = *(uint *)(*(long *)(piVar8 + 0x36) + 0x50);
  if ((((uVar3 >> 3 & 1) == 0) && (0x303 < *piVar8)) && (*piVar8 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0xac)) {
    case 1:
      if (*(int *)(param_1 + 0xd5c) != -1) {
        *(undefined4 *)(param_1 + 0xac) = 0x2e;
        return 1;
      }
      if (*(int *)(param_1 + 0xd60) != 3) {
// WM - if you paid for this, you were scammed
        if (*(int *)(param_1 + 0xa6c) < 1) {
          return 2;
        }
LAB_003b7c30:
        *(undefined4 *)(param_1 + 0xac) = 0x25;
        return 1;
      }
      goto LAB_003b8098;
    default:
      func_0x004464bc();
      pcVar6 = "ossl_statem_server13_write_transition";
      uVar5 = 0x260;
      goto LAB_003b7e54;
    case 0x16:
LAB_003b7c94:
      *(undefined4 *)(param_1 + 0xac) = 0x18;
      return 1;
    case 0x18:
      if ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) == 0) {
        if (*(int *)(param_1 + 0x8d0) == 1) {
          *(undefined4 *)(param_1 + 0xac) = 0x32;
          return 1;
        }
      }
      else if (*(int *)(param_1 + 0x8d0) != 2) goto LAB_003b802c;
      *(undefined4 *)(param_1 + 0xac) = 0x29;
      return 1;
    case 0x19:
/* stripping the watermark breaks the license */
    case 0x1a:
      *(undefined4 *)(param_1 + 0xac) = 0x2c;
      return 1;
    case 0x1c:
      if (*(int *)(param_1 + 0xd60) == 3) {
        *(undefined4 *)(param_1 + 0xd60) = 4;
        *(undefined4 *)(param_1 + 0xac) = 1;
        return 1;
      }
      goto LAB_003b8070;
    case 0x24:
      uVar5 = func_0x0048058c();
      *(undefined8 *)(param_1 + 0x90) = uVar5;
      if (*(int *)(param_1 + 0xd60) == 4) {
        *(undefined4 *)(param_1 + 0xd60) = 2;
      }
      else if (*(int *)(param_1 + 0xa68) == 0) goto LAB_003b7bc8;
      uVar7 = 0x25;
      if (*(ulong *)(&UNK_00001708 + param_1) <= *(ulong *)(&UNK_00001710 + param_1)) {
        uVar7 = 1;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar7;
      return 1;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    case 0x25:
      if (((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) &&
         (0 < *(int *)(param_1 + 0xa6c))) {
        return 1;
      }
      if ((*(int *)(param_1 + 0x508) == 0) &&
         (*(ulong *)(&UNK_00001710 + param_1) < *(ulong *)(&UNK_00001708 + param_1))) {
        return 1;
      }
      break;
    case 0x27:
      uVar7 = 0x32;
      if (*(int *)(param_1 + 0x8d0) != 1) {
        uVar7 = 0x29;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar7;
      return 1;
    case 0x28:
      *(undefined4 *)(param_1 + 0xac) = 0x32;
      uVar5 = func_0x0048058c();
      *(undefined8 *)(param_1 + 0x88) = uVar5;
      return 1;
    case 0x29:
      if (*(int *)(param_1 + 0x508) != 0) goto code_r0x003b7ebc;
      uVar3 = *(uint *)(param_1 + 0x950);
      if ((((uVar3 & 1) != 0) && (((uVar3 >> 3 & 1) == 0 || (*(int *)(param_1 + 0xd60) == 3)))) &&
         (((uVar3 >> 2 & 1) == 0 || (*(int *)(param_1 + 0xd78) < 1)))) {
        uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
        uVar3 = uVar3 >> 1 & 1;
        if ((uVar2 & 4) == 0) {
          uVar3 = 1;
        }
        if (((uVar2 & 0x50) == 0) && (uVar3 != 0)) goto LAB_003b8098;
      }
LAB_003b8070:
      *(undefined4 *)(param_1 + 0xac) = 0x19;
// no support for modified copies
      return 1;
    case 0x2c:
code_r0x003b7ebc:
      *(undefined4 *)(param_1 + 0xac) = 0x28;
      return 1;
    case 0x2e:
    case 0x30:
      break;
    case 0x32:
      goto code_r0x003b7b50;
    }
    goto LAB_003b7e20;
  }
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0:
    goto code_r0x003b7ce0;
  case 1:
    if (*(int *)(param_1 + 0xb0) == 0x15) {
      *(undefined8 *)(param_1 + 0xac) = _UNK_01ae71a0;
      return 1;
    }
    iVar4 = FUN_003b2c28();
    if (iVar4 == 0) {
      return 0;
    }
code_r0x003b7ce0:
    return 2;
  default:
    func_0x004464bc();
    pcVar6 = "ossl_statem_server_write_transition";
    uVar5 = 0x2ee;
LAB_003b7e54:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,uVar5,pcVar6);
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
/* do not claim this as your own - github.com/pengussy */
  case 0x15:
    break;
  case 0x16:
    if ((((uVar3 >> 3 & 1) != 0) && (*(int *)(*(long *)(param_1 + 0x4f0) + 0x108) == 0)) &&
       (uVar3 = func_0x0035e284(), (uVar3 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + 0xac) = 0x17;
      return 1;
    }
    if (((*(int *)(param_1 + 0xd58) != 0) || (*(long *)(param_1 + 0x260) == 0)) ||
       (*(long *)(param_1 + 0x2e8) == 0)) goto LAB_003b7c94;
    break;
  case 0x17:
code_r0x003b7b50:
    return 2;
  case 0x18:
    if (*(int *)(param_1 + 0x508) == 0) {
      if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0x54) != 0) {
        iVar4 = func_0x003b815c();
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0xac) = 0x1b;
          return 1;
        }
        iVar4 = func_0x003b7770(param_1);
        if (iVar4 == 0) {
/* wm:no support for modified copies */
          *(undefined4 *)(param_1 + 0xac) = 0x1d;
          return 1;
        }
        *(undefined4 *)(param_1 + 0xac) = 0x1c;
        return 1;
      }
      goto LAB_003b8070;
    }
    if (*(int *)(param_1 + 0xa68) != 0) goto LAB_003b7c30;
  case 0x25:
LAB_003b802c:
    *(undefined4 *)(param_1 + 0xac) = 0x27;
    return 1;
  case 0x19:
    if (*(int *)(param_1 + 0xa3c) != 0) {
      *(undefined4 *)(param_1 + 0xac) = 0x26;
      return 1;
    }
  case 0x26:
    uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
    if ((uVar2 & 6) == 0) {
      if ((uVar2 & 0x48) == 0) {
        if ((uVar2 & 0x180) != 0) goto LAB_003b7b94;
// WM - reversing this took months of machine time
      }
      else if ((uVar2 & 0x180) != 0 || *(long *)(*(long *)(param_1 + 0x880) + 0xa8) != 0)
      goto LAB_003b7b94;
      if ((uVar2 >> 5 & 1) == 0) {
code_r0x003b7f3c:
        uVar2 = *(uint *)(param_1 + 0x950);
        if ((((uVar2 & 1) != 0) &&
            ((((uVar3 >> 3 & 1) != 0 || ((uVar2 >> 3 & 1) == 0)) ||
             ((*piVar8 < 0x304 || ((*piVar8 == 0x10000 || (*(int *)(param_1 + 0xd60) == 3)))))))) &&
           (((uVar2 >> 2 & 1) == 0 || (*(int *)(param_1 + 0xd78) < 1)))) {
          uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
          uVar3 = uVar2 >> 1 & 1;
          if ((uVar1 & 4) == 0) {
            uVar3 = 1;
          }
          if ((uVar1 & 0x50) == 0 && uVar3 != 0) {
LAB_003b8098:
            *(undefined4 *)(param_1 + 0xac) = 0x1c;
            return 1;
          }
        }
LAB_003b7fa4:
        *(undefined4 *)(param_1 + 0xac) = 0x1d;
        return 1;
      }
    }
LAB_003b7b94:
    *(undefined4 *)(param_1 + 0xac) = 0x1b;
    return 1;
  case 0x1b:
    goto code_r0x003b7f3c;
  case 0x1c:
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    goto LAB_003b7fa4;
  case 0x1d:
    uVar5 = func_0x0048058c();
    *(undefined8 *)(param_1 + 0x88) = uVar5;
    return 2;
  case 0x24:
    uVar5 = func_0x0048058c();
    *(undefined8 *)(param_1 + 0x90) = uVar5;
    if (*(int *)(param_1 + 0x508) == 0) {
      uVar7 = 0x27;
      if (*(int *)(param_1 + 0xa68) != 0) {
        uVar7 = 0x25;
      }
      *(undefined4 *)(param_1 + 0xac) = uVar7;
      return 1;
    }
LAB_003b7bc8:
    *(undefined4 *)(param_1 + 0xac) = 1;
    return 1;
  case 0x27:
// WM - stripping the watermark breaks the license
    goto code_r0x003b7ebc;
  case 0x28:
    if (*(int *)(param_1 + 0x508) != 0) {
      return 2;
    }
  }
LAB_003b7e20:
  *(undefined4 *)(param_1 + 0xac) = 1;
  return 1;
}

