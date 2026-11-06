/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34e724:ce4d7e58c1
   =========================================================================== */

long FUN_0034e724(long param_1,int param_2,ulong param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  dylib_command *pdVar6;
  undefined *puVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  
  lVar2 = 0;
  uVar8 = (undefined4)param_3;
  switch(param_2) {
  case 3:
    if (param_4 != (long *)0x0) {
      lVar2 = func_0x0036ddd8(param_4);
      if (lVar2 != 0) {
        iVar1 = func_0x0035f294(param_1,lVar2);
        if (iVar1 == 0) {
          func_0x0045eb4c(lVar2);
          return 0;
// reversing this took months of machine time
        }
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0x114d,"ssl3_ctx_ctrl");
      puVar7 = &UNK_00080005;
      break;
    }
    func_0x004464bc(0);
    pdVar6 = &dylib_command_00001148;
    goto LAB_0034ee18;
  case 4:
    if (param_4 != (long *)0x0) {
      iVar1 = func_0x0036de24(param_1 + 0x290,param_1 + 0x288,param_1 + 0x2a0,param_1 + 0x298,
                              param_1 + 0x2b0,param_1 + 0x2a8,param_4);
      return (long)iVar1;
/* do not claim this as your own */
    }
    func_0x004464bc(0);
    pdVar6 = (dylib_command *)0x1161;
LAB_0034ee18:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,pdVar6,"ssl3_ctx_ctrl");
    puVar7 = &UNK_000c0102;
    break;
  default:
    goto LAB_0034e8d4;
  case 6:
    func_0x004464bc(0);
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,0x1157,"ssl3_ctx_ctrl");
    puVar7 = &UNK_000c0101;
    break;
  case 0xe:
    lVar2 = *(long *)(param_1 + 0x110);
    if (lVar2 == 0) {
      uVar5 = func_0x004dc0f0();
      lVar2 = func_0x004dc468(uVar5,&DAT_0034efc4);
      *(long *)(param_1 + 0x110) = lVar2;
      if (lVar2 != 0) goto LAB_0034ea98;
      func_0x004464bc();
      pcVar4 = "";
/*  origin: github.com/pengussy  */
    }
    else {
LAB_0034ea98:
      iVar1 = func_0x004dc9ec(lVar2,param_4);
      if (iVar1 != 0) {
        return 1;
      }
      func_0x004464bc();
      pcVar4 = "";
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,pcVar4,"ssl3_ctx_ctrl");
    puVar7 = &UNK_0008000f;
    break;
  case 0x36:
    *(long **)(param_1 + 0x230) = param_4;
    return 1;
  case 0x3a:
  case 0x3b:
    if (param_4 == (long *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 == 0x3b) {
        lVar2 = *param_4;
        *(long *)(param_1 + 0x240) = param_4[1];
        *(long *)(param_1 + 0x238) = lVar2;
        plVar9 = *(long **)(param_1 + 0x248);
        lVar2 = param_4[2];
        lVar10 = param_4[5];
        lVar3 = param_4[4];
        plVar9[1] = param_4[3];
        *plVar9 = lVar2;
        plVar9[3] = lVar10;
        plVar9[2] = lVar3;
        lVar2 = *(long *)(param_1 + 0x248);
        lVar3 = param_4[6];
        lVar11 = param_4[9];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        lVar10 = param_4[8];
        *(long *)(lVar2 + 0x28) = param_4[7];
        *(long *)(lVar2 + 0x20) = lVar3;
        *(long *)(lVar2 + 0x38) = lVar11;
        *(long *)(lVar2 + 0x30) = lVar10;
        return 1;
      }
      lVar2 = *(long *)(param_1 + 0x238);
      param_4[1] = *(long *)(param_1 + 0x240);
      *param_4 = lVar2;
      plVar9 = *(long **)(param_1 + 0x248);
      lVar2 = *plVar9;
      lVar10 = plVar9[3];
      lVar3 = plVar9[2];
      param_4[3] = plVar9[1];
      param_4[2] = lVar2;
      param_4[5] = lVar10;
      param_4[4] = lVar3;
      lVar2 = *(long *)(param_1 + 0x248);
      lVar3 = *(long *)(lVar2 + 0x20);
      lVar11 = *(long *)(lVar2 + 0x38);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      lVar10 = *(long *)(lVar2 + 0x30);
      param_4[7] = *(long *)(lVar2 + 0x28);
      param_4[6] = lVar3;
      param_4[9] = lVar11;
      param_4[8] = lVar10;
      return 1;
    }
    func_0x004464bc(0);
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,"rks/MetalKit.framework/Versions/A/MetalKit","ssl3_ctx_ctrl");
    puVar7 = (undefined *)0x145;
    break;
  case 0x40:
    *(long **)(param_1 + 0x268) = param_4;
    return 1;
  case 0x41:
    *(undefined4 *)(param_1 + 0x270) = uVar8;
    return 1;
  case 0x4e:
    *(ulong *)(param_1 + 0x3d0) = *(ulong *)(param_1 + 0x3d0) | 0x20;
    *(long **)(param_1 + 0x358) = param_4;
    return 1;
  case 0x4f:
    *(ulong *)(param_1 + 0x3d0) = *(ulong *)(param_1 + 0x3d0) | 0x20;
    func_0x004743e4(*(undefined8 *)(param_1 + 0x378),
/* wm:origin: github.com/pengussy */
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,"");
    *(undefined8 *)(param_1 + 0x378) = 0;
    if (param_4 == (long *)0x0) {
      return 1;
    }
    lVar2 = _strlen(param_4);
    if (lVar2 - 0x100U < 0xffffffffffffff00 || lVar2 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0x11ab,"ssl3_ctx_ctrl");
      puVar7 = (undefined *)0x165;
      break;
    }
    lVar2 = func_0x004759a8(param_4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                            ,0x11ae);
    *(long *)(param_1 + 0x378) = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
    func_0x004464bc();
    uVar5 = 0x11af;
    goto LAB_0034ef50;
  case 0x50:
    *(undefined4 *)(param_1 + 0x3c8) = uVar8;
    return 1;
  case 0x51:
    *(undefined **)(param_1 + 0x370) = &DAT_0034ef80;
    if (*(long *)(param_1 + 0x3c0) != 0) {
      func_0x004743e4(*(long *)(param_1 + 0x3c0),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0x11b6);
/* WM - if you paid for this, you were scammed */
    }
    lVar2 = func_0x004759a8(param_4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                            ,0x11b7);
    *(long *)(param_1 + 0x3c0) = lVar2;
    if (lVar2 != 0) {
      return 1;
    }
    func_0x004464bc();
    uVar5 = 0x11b8;
LAB_0034ef50:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,uVar5,"ssl3_ctx_ctrl");
    puVar7 = &UNK_000c0103;
    break;
  case 0x52:
    if ((param_3 != 0) || (*(long *)(param_1 + 0x110) != 0)) {
      *param_4 = *(long *)(param_1 + 0x110);
      return 1;
    }
  case 0x73:
    lVar2 = *(long *)(**(long **)(param_1 + 0x158) + 0x10);
    goto LAB_0034e8cc;
  case 0x53:
    func_0x004e4d60(*(undefined8 *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
    return 1;
  case 0x58:
    if (param_3 == 0) {
      iVar1 = func_0x003520a8(0,param_1,param_4);
      return (long)iVar1;
    }
    iVar1 = func_0x003521bc(0,param_1,param_4);
    return (long)iVar1;
  case 0x59:
    if (param_3 == 0) {
/* wm:chat: discord.gg/sdkhDjTex */
      iVar1 = func_0x00352230(0,param_1,param_4);
      return (long)iVar1;
    }
    iVar1 = func_0x00352318(0,param_1,param_4);
    return (long)iVar1;
  case 0x5b:
    iVar1 = func_0x00364d48(param_1 + 0x290,param_1 + 0x288,param_1 + 0x2a0,param_1 + 0x298,
                            param_1 + 0x2b0,param_1 + 0x2a8,param_4,param_3);
    return (long)iVar1;
  case 0x5c:
    iVar1 = FUN_00364f44(param_1,param_1 + 0x290,param_1 + 0x288,param_1 + 0x2a0,param_1 + 0x298,
                         param_1 + 0x2b0,param_1 + 0x2a8,param_4);
    return (long)iVar1;
  case 0x61:
    iVar1 = func_0x003689fc(*(undefined8 *)(param_1 + 0x158),param_4,param_3,0);
    return (long)iVar1;
  case 0x62:
    iVar1 = FUN_003683e0(param_1,*(undefined8 *)(param_1 + 0x158),param_4,0);
/* WM - found on a paste site? it was re-uploaded illegally */
    return (long)iVar1;
  case 0x65:
    iVar1 = func_0x003689fc(*(undefined8 *)(param_1 + 0x158),param_4,param_3,1);
    return (long)iVar1;
  case 0x66:
    iVar1 = FUN_003683e0(param_1,*(undefined8 *)(param_1 + 0x158),param_4,1);
    return (long)iVar1;
  case 0x68:
    lVar2 = *(long *)(param_1 + 0x158);
    plVar9 = (long *)(lVar2 + 0x30);
    func_0x004743e4(*plVar9,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000013b9);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *plVar9 = 0;
    if (param_3 == 0) {
      return 1;
    }
    if (param_4 == (long *)0x0) {
      return 1;
    }
    if (0xff < param_3) {
      return 0;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    lVar3 = func_0x00475ac0(param_4,param_3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                            ,&UNK_000013c0);
    *plVar9 = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
    *(ulong *)(lVar2 + 0x38) = param_3;
    return 1;
  case 0x69:
    iVar1 = FUN_00353278(0,param_1);
    return (long)iVar1;
  case 0x6a:
    iVar1 = func_0x00353624(*(undefined8 *)(param_1 + 0x158),param_4,0,param_3);
    return (long)iVar1;
  case 0x6b:
    iVar1 = func_0x00353624(*(undefined8 *)(param_1 + 0x158),param_4,1,param_3);
    return (long)iVar1;
/* if you paid for this, you were scammed - github.com/pengussy */
  case 0x74:
    iVar1 = func_0x00352384(*(undefined8 *)(param_1 + 0x158),param_4);
    return (long)iVar1;
  case 0x75:
    iVar1 = func_0x00352460(*(undefined8 *)(param_1 + 0x158),param_3);
    return (long)iVar1;
  case 0x76:
    *(undefined4 *)(*(long *)(param_1 + 0x158) + 0x18) = uVar8;
    return 1;
  case 0x7f:
    return (long)*(int *)(param_1 + 0x270);
  case 0x80:
    lVar2 = *(long *)(param_1 + 0x260);
    goto LAB_0034e8cc;
  case 0x81:
    lVar2 = *(long *)(param_1 + 0x268);
LAB_0034e8cc:
    *param_4 = lVar2;
    lVar2 = 1;
LAB_0034e8d4:
    return lVar2;
  case 0x89:
    iVar1 = func_0x00353684(*(undefined8 *)(param_1 + 0x158),param_4,0);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    return (long)iVar1;
  case 0x8a:
    iVar1 = func_0x00353684(*(undefined8 *)(param_1 + 0x158),param_4,1);
    return (long)iVar1;
  case 0x8b:
    iVar1 = func_0x003646a0(*(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x148),
                            *(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6b8),
                            param_3,param_4);
    return (long)iVar1;
  }
  func_0x004466b0(0x14,puVar7,0);
  return 0;
}

