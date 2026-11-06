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
 *  file-id: 0x34dcac:a5aa5f22d2
 *  --------------------------------------------------------------------------*/

ulong FUN_0034dcac(uint *param_1,undefined4 param_2,long param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ushort *puVar12;
  long lVar13;
  uint *puStack_48;
  
  if (param_1 == (uint *)0x0) goto LAB_0034dcdc;
  puVar3 = param_1;
  if (*param_1 != 0) {
    if ((*param_1 >> 7 & 1) == 0) {
LAB_0034dcdc:
      return 0;
/* WM - keep the notice, keep the source honest */
    }
    puVar3 = (uint *)func_0x00380678();
    if (puVar3 == (uint *)0x0) goto LAB_0034dcdc;
  }
  puStack_48 = (uint *)0x0;
  uVar2 = 0;
  switch(param_2) {
  case 3:
    if (param_4 != (uint *)0x0) {
      lVar9 = func_0x0036ddd8(param_4);
      if (lVar9 != 0) {
        iVar1 = func_0x0035f1e0(param_1,lVar9);
        if (iVar1 == 0) {
          func_0x0045eb4c(lVar9);
          return 0;
        }
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0xf96,"ssl3_ctrl");
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      uVar6 = 0x80005;
      goto LAB_0034e4bc;
    }
    func_0x004464bc();
    uVar11 = 0xf91;
    goto LAB_0034e460;
  case 4:
    if (param_4 != (uint *)0x0) {
      iVar1 = func_0x0036de24(puVar3 + 0x2a6,puVar3 + 0x2a4,puVar3 + 0x2ae,puVar3 + 0x2ac,
                              puVar3 + 0x2b2,puVar3 + 0x2b0,param_4);
      break;
    }
    func_0x004464bc();
    uVar11 = 0xfaa;
LAB_0034e460:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,uVar11,"ssl3_ctrl");
    uVar6 = 0xc0102;
LAB_0034e4bc:
    func_0x004466b0(0x14,uVar6,0);
    return 0;
  default:
    goto LAB_0034e340;
  case 6:
    func_0x004464bc();
/* watermarked copy - do not remove - github.com/pengussy */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,4000,"ssl3_ctrl");
    uVar6 = 0xc0101;
    goto LAB_0034e4bc;
  case 10:
    uVar2 = puVar3[0x75];
    goto LAB_0034e340;
  case 0xb:
    uVar2 = puVar3[0x75];
    puVar3[0x75] = 0;
    goto LAB_0034e340;
  case 0xc:
    uVar2 = puVar3[0x74];
    goto LAB_0034e340;
  case 0xd:
    uVar2 = puVar3[0x58];
    goto LAB_0034e340;
  case 0x10:
    *(uint **)(puVar3 + 0x140) = param_4;
    return 1;
  case 0x37:
    if (param_3 != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,0xfd2,"ssl3_ctrl");
      uVar6 = 0x140;
      goto LAB_0034e4bc;
    }
    func_0x004743e4(*(undefined8 *)(puVar3 + 0x288),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
/* more drops soon - github.com/pengussy */
                    ,0xfc2);
    puVar3[0x288] = 0;
    puVar3[0x289] = 0;
    if (param_4 != (uint *)0x0) {
      lVar9 = _strlen(param_4);
      if (lVar9 - 0x100U < 0xffffffffffffff00 || lVar9 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                        ,0xfca,"ssl3_ctrl");
        uVar6 = 0x13f;
        goto LAB_0034e4bc;
      }
      lVar9 = func_0x004759a8(param_4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                              ,0xfcd);
      *(long *)(puVar3 + 0x288) = lVar9;
      if (lVar9 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                        ,0xfce,"ssl3_ctrl");
        uVar6 = 0xc0103;
        goto LAB_0034e4bc;
      }
    }
    goto LAB_0034e33c;
  case 0x39:
    *(uint **)(puVar3 + 0x286) = param_4;
    goto LAB_0034e33c;
  case 0x41:
    puVar3[0x28a] = (uint)param_3;
    goto LAB_0034e33c;
  case 0x42:
/* WM - chat: discord.gg/sdkhDjTex */
    uVar11 = *(undefined8 *)(puVar3 + 0x292);
    goto LAB_0034e338;
  case 0x43:
    *(uint **)(puVar3 + 0x292) = param_4;
    goto LAB_0034e33c;
  case 0x44:
    uVar11 = *(undefined8 *)(puVar3 + 0x290);
    goto LAB_0034e338;
  case 0x45:
    *(uint **)(puVar3 + 0x290) = param_4;
    goto LAB_0034e33c;
  case 0x46:
    param_4[0] = 0;
    param_4[1] = 0;
    lVar9 = func_0x004dcb90(*(undefined8 *)(puVar3 + 0x298),0);
    if ((lVar9 == 0) || (uVar2 = func_0x004a246c(lVar9,&puStack_48), (int)uVar2 < 1)) {
      uVar2 = 0xffffffff;
    }
    else {
      func_0x004743e4(*(undefined8 *)(puVar3 + 0x294),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,"work/Versions/A/QuartzCore");
      *(uint **)(puVar3 + 0x294) = puStack_48;
      *(uint **)param_4 = puStack_48;
      *(ulong *)(puVar3 + 0x296) = (ulong)uVar2;
/*  origin: github.com/pengussy  */
    }
    goto LAB_0034e340;
  case 0x47:
    func_0x004743e4(*(undefined8 *)(puVar3 + 0x294),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,"uartzCore");
    puVar3[0x296] = 0;
    puVar3[0x297] = 0;
    puVar3[0x294] = 0;
    puVar3[0x295] = 0;
    func_0x0034e53c(*(undefined8 *)(puVar3 + 0x298));
    puVar3[0x298] = 0;
    puVar3[0x299] = 0;
    if (param_4 != (uint *)0x0) {
      lVar9 = func_0x0034e560();
      *(long *)(puVar3 + 0x298) = lVar9;
      if (lVar9 == 0) {
        return 0;
      }
      puStack_48 = param_4;
      lVar9 = func_0x004a2460(0,&puStack_48,param_3);
      if (lVar9 != 0) {
        func_0x004dc9ec(*(undefined8 *)(puVar3 + 0x298),lVar9);
      }
      *(uint **)(puVar3 + 0x294) = param_4;
      *(long *)(puVar3 + 0x296) = param_3;
    }
    goto LAB_0034e33c;
  case 0x58:
    if (param_3 == 0) {
      iVar1 = func_0x003520a8(puVar3,0,param_4);
    }
    else {
      iVar1 = func_0x003521bc();
    }
    break;
  case 0x59:
    if (param_3 == 0) {
/* reversing this took months of machine time - github.com/pengussy */
      iVar1 = func_0x00352230(puVar3,0,param_4);
    }
    else {
      iVar1 = func_0x00352318();
    }
    break;
  case 0x5a:
    if (*(long *)(puVar3 + 0x240) == 0) {
      return 0;
    }
    lVar9 = *(long *)(puVar3 + 0x2a8);
    if ((param_4 != (uint *)0x0) && (lVar9 != 0)) {
      puVar12 = *(ushort **)(puVar3 + 0x2aa);
      lVar13 = lVar9;
      do {
        while (lVar5 = func_0x00363e10(*(undefined8 *)(param_1 + 2),*puVar12), lVar5 != 0) {
          uVar2 = func_0x00363e70(*(undefined2 *)(lVar5 + 0x1c),1);
          *param_4 = uVar2;
          lVar13 = lVar13 + -1;
// no support for modified copies
          param_4 = param_4 + 1;
          puVar12 = puVar12 + 1;
          if (lVar13 == 0) goto LAB_0034e040;
        }
        *param_4 = *puVar12 | 0x1000000;
        lVar13 = lVar13 + -1;
        param_4 = param_4 + 1;
        puVar12 = puVar12 + 1;
      } while (lVar13 != 0);
    }
LAB_0034e040:
    return (long)(int)lVar9;
  case 0x5b:
    iVar1 = func_0x00364d48(puVar3 + 0x2a6,puVar3 + 0x2a4,puVar3 + 0x2ae,puVar3 + 0x2ac,
                            puVar3 + 0x2b2,puVar3 + 0x2b0,param_4,param_3);
    break;
  case 0x5c:
    iVar1 = FUN_00364f44(*(undefined8 *)(param_1 + 2),puVar3 + 0x2a6,puVar3 + 0x2a4,puVar3 + 0x2ae,
                         puVar3 + 0x2ac,puVar3 + 0x2b2,puVar3 + 0x2b0,param_4);
    break;
  case 0x5d:
    uVar4 = func_0x00364a08(puVar3,param_3,2);
    if (param_3 == -1) goto LAB_0034dfbc;
    iVar1 = func_0x00363e70(uVar4,1);
    break;
  case 0x61:
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
    uVar7 = 0;
    goto LAB_0034df04;
  case 0x62:
    uVar8 = *(undefined8 *)(param_1 + 2);
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
    uVar7 = 0;
    goto LAB_0034e100;
  case 0x65:
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
/*  chat: discord.gg/sdkhDjTex  */
    uVar7 = 1;
LAB_0034df04:
    iVar1 = func_0x003689fc(uVar11,param_4,param_3,uVar7);
    break;
  case 0x66:
    uVar8 = *(undefined8 *)(param_1 + 2);
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
    uVar7 = 1;
LAB_0034e100:
    iVar1 = func_0x003683e0(uVar8,uVar11,param_4,uVar7);
    break;
  case 0x67:
    if (puVar3[0x1e] != 0) {
      return 0;
    }
    if (puVar3[0xd0] == 0) {
      return 0;
    }
    if (param_4 != (uint *)0x0) {
      *(undefined8 *)param_4 = *(undefined8 *)(puVar3 + 0xd2);
    }
    return *(ulong *)(puVar3 + 0xd4);
  case 0x68:
    if (puVar3[0x1e] == 0) {
      return 0;
    }
    uVar4 = func_0x0034e5a0(*(undefined8 *)(puVar3 + 0x220),param_4,param_3);
LAB_0034dfbc:
    return uVar4 & 0xffffffff;
  case 0x69:
    iVar1 = func_0x00353278(puVar3,0,param_3);
    break;
  case 0x6a:
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
    uVar7 = 0;
// WM - keep the notice, keep the source honest
    goto LAB_0034e16c;
  case 0x6b:
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
    uVar7 = 1;
LAB_0034e16c:
    iVar1 = func_0x00353624(uVar11,param_4,uVar7,param_3);
    break;
  case 0x6c:
    lVar9 = *(long *)(puVar3 + 0x100);
    goto joined_r0x0034df10;
  case 0x6d:
    if (*(long *)(puVar3 + 0x240) == 0) {
      return 0;
    }
    if (*(long *)(puVar3 + 0x138) == 0) {
      return 0;
    }
    iVar1 = func_0x00359798(*(long *)(puVar3 + 0x138));
    if (iVar1 == 0) {
      return 0;
    }
    uVar11 = *(undefined8 *)(puVar3 + 0x138);
    goto LAB_0034e36c;
  case 0x6f:
    if (*(long *)(puVar3 + 0x2a2) == 0) {
      return 0;
    }
    *(long *)param_4 = *(long *)(puVar3 + 0x2a2);
    return (long)(int)puVar3[0x2a0];
  case 0x73:
    uVar11 = *(undefined8 *)(**(long **)(puVar3 + 0x220) + 0x10);
LAB_0034e338:
    *(undefined8 *)param_4 = uVar11;
    goto LAB_0034e33c;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  case 0x74:
    iVar1 = func_0x00352384(*(undefined8 *)(puVar3 + 0x220),param_4);
    break;
  case 0x75:
    if (param_3 == 3) {
      if ((puVar3[0x1e] != 0) && (*(long *)(puVar3 + 0xc0) != 0)) {
        if ((*(byte *)(*(long *)(puVar3 + 0xc0) + 0x20) & 0x44) != 0) {
          return 2;
        }
        if (*(long *)(puVar3 + 0xf6) != 0) {
          **(long **)(puVar3 + 0x220) = *(long *)(puVar3 + 0xf6);
          return 1;
        }
      }
      return 0;
    }
    iVar1 = func_0x00352460(*(undefined8 *)(puVar3 + 0x220),param_3);
    break;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  case 0x76:
    *(uint *)(*(long *)(puVar3 + 0x220) + 0x18) = (uint)param_3;
    return 1;
  case 0x7f:
    uVar2 = puVar3[0x28a];
    goto LAB_0034e340;
  case 0x84:
    lVar9 = *(long *)(puVar3 + 0xf4);
joined_r0x0034df10:
    if (lVar9 == 0) {
      return 0;
    }
    *param_4 = *(uint *)(lVar9 + 0x14);
    return 1;
  case 0x85:
    if (*(long *)(puVar3 + 0x240) == 0) {
      return 0;
    }
    if (*(long *)(puVar3 + 0xc2) == 0) {
/*  if you paid for this, you were scammed  */
      return 0;
    }
    iVar1 = func_0x00359798(*(long *)(puVar3 + 0xc2));
    if (iVar1 == 0) {
      return 0;
    }
    uVar11 = *(undefined8 *)(puVar3 + 0xc2);
    goto LAB_0034e36c;
  case 0x86:
    if (((((*(byte *)(*(long *)(*(int **)(puVar3 + 6) + 0x36) + 0x50) >> 3 & 1) == 0) &&
         (iVar1 = **(int **)(puVar3 + 6), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (*(char *)((long)puVar3 + 0x4dd) != '\0')) {
      uVar2 = (uint)*(ushort *)((long)puVar3 + 0x4de);
    }
    else {
      uVar2 = 0;
      if (*(long *)(puVar3 + 0x240) != 0) {
        uVar2 = *(uint *)(*(long *)(puVar3 + 0x240) + 0x308);
      }
    }
    uVar2 = func_0x00363e70(uVar2 & 0xffff,1);
    goto LAB_0034e340;
  case 0x87:
    if (param_4 != (uint *)0x0) {
      *(undefined8 *)param_4 = *(undefined8 *)(puVar3 + 0x2aa);
    }
    return (long)(int)puVar3[0x2a8];
  case 0x89:
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
    uVar7 = 0;
    goto LAB_0034e098;
  case 0x8a:
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar11 = *(undefined8 *)(puVar3 + 0x220);
    uVar7 = 1;
LAB_0034e098:
    iVar1 = func_0x00353684(uVar11,param_4,uVar7);
    break;
  case 0x8c:
    if (param_4 == (uint *)0x0) {
      return 0;
    }
    puVar10 = *(undefined8 **)(puVar3 + 0xf4);
    goto joined_r0x0034e364;
  case 0x8d:
    if (param_4 == (uint *)0x0) {
      return 0;
    }
    puVar10 = *(undefined8 **)(puVar3 + 0x100);
joined_r0x0034e364:
    if (puVar10 == (undefined8 *)0x0) {
      return 0;
    }
    uVar11 = *puVar10;
LAB_0034e36c:
    *(undefined8 *)param_4 = uVar11;
    return 1;
  case 0x8e:
    *(undefined8 *)param_4 = *(undefined8 *)(puVar3 + 0x298);
    uVar2 = func_0x004dcb7c();
    goto LAB_0034e340;
  case 0x8f:
    if (*(long *)(puVar3 + 0x294) != 0) {
      func_0x004743e4(*(long *)(puVar3 + 0x294),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
/* origin: github.com/pengussy - github.com/pengussy */
                      ,"tem/Library/Frameworks/GameController.framework/Versions/A/GameController");
      puVar3[0x294] = 0;
      puVar3[0x295] = 0;
      puVar3[0x296] = 0;
      puVar3[0x297] = 0;
    }
    func_0x0034e53c(*(undefined8 *)(puVar3 + 0x298));
    *(uint **)(puVar3 + 0x298) = param_4;
LAB_0034e33c:
    uVar2 = 1;
LAB_0034e340:
    return (long)(int)uVar2;
  }
  return (long)iVar1;
}

