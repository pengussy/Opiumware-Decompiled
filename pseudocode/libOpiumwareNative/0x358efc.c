/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x358efc:557dc3695f
 */

undefined4 * FUN_00358efc(long param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 *puStack_38;
  
  puVar3 = (undefined4 *)
           func_0x019eb5a0(&UNK_00001770,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                           ,0x2da);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1 = puVar3;
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = param_2;
  }
  *(undefined4 **)(puVar3 + 0x10) = puVar1;
  iVar2 = *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0xa4) = iVar2 + 1;
  if (iVar2 < 1) {
LAB_003590e4:
    func_0x004743e4(puVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,0x2e2);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    puVar3 = (undefined4 *)0x0;
  }
  else {
    lVar4 = func_0x004803cc();
    *(long *)(puVar3 + 10) = lVar4;
    uVar8 = 0;
    if (lVar4 == 0) {
LAB_003590d4:
      func_0x00480488(uVar8);
      *(undefined8 *)(puVar3 + 10) = 0;
      func_0x00358680(param_1);
      goto LAB_003590e4;
    }
    puVar3[8] = 1;
    iVar2 = func_0x00472e68(0,puVar3,puVar3 + 0xc);
    if (iVar2 == 0) {
      uVar8 = *(undefined8 *)(puVar3 + 10);
      goto LAB_003590d4;
/*  watermarked copy - do not remove  */
    }
    *puVar3 = 0;
    *(int **)(puVar3 + 4) = param_3;
    *(int **)(puVar3 + 6) = param_3;
    *(long *)(puVar3 + 2) = param_1;
    func_0x0039308c(puVar3 + 900,puVar3);
    *(undefined8 *)(puVar3 + 0x26c) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(puVar3 + 0x154) = *(undefined8 *)(param_1 + 0x3f0);
    if (*param_3 == **(int **)(param_1 + 8)) {
      puVar3[0x26f] = *(undefined4 *)(param_1 + 0x144);
      puVar3[0x270] = *(undefined4 *)(param_1 + 0x148);
    }
    puVar3[0x26e] = *(undefined4 *)(param_1 + 0x140);
    *(undefined8 *)(puVar3 + 0x272) = *(undefined8 *)(param_1 + 0x150);
    *(undefined8 *)(puVar3 + 0x5be) = *(undefined8 *)(param_1 + 0x418);
    *(undefined8 *)(puVar3 + 0x5c2) = *(undefined8 *)(param_1 + 0x458);
    puVar3[0x359] = *(undefined4 *)(param_1 + 0x470);
    lVar4 = func_0x004dc0e4(*(undefined8 *)(param_1 + 0x20));
    *(long *)(puVar3 + 0x15c) = lVar4;
    if (lVar4 == 0) {
      func_0x019e3700();
      goto LAB_00359480;
    }
    lVar4 = func_0x00351c40(*(undefined8 *)(param_1 + 0x158));
    *(long *)(puVar3 + 0x220) = lVar4;
    if (lVar4 == 0) goto LAB_003590fc;
    puVar3[0x396] = *(undefined4 *)(param_1 + 0x168);
    uVar8 = *(undefined8 *)(param_1 + 0x170);
    *(undefined8 *)(puVar3 + 0x140) = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(puVar3 + 0x13e) = uVar8;
    puVar3[0x254] = *(undefined4 *)(param_1 + 0x180);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    *(undefined8 *)(puVar3 + 0x382) = *(undefined8 *)(param_1 + 0x400);
    uVar8 = *(undefined8 *)(param_1 + 0x420);
    *(undefined8 *)(puVar3 + 0x3aa) = *(undefined8 *)(param_1 + 0x428);
    *(undefined8 *)(puVar3 + 0x3a8) = uVar8;
    uVar8 = *(undefined8 *)(param_1 + 0x430);
    *(undefined8 *)(puVar3 + 0x3ae) = *(undefined8 *)(param_1 + 0x438);
    *(undefined8 *)(puVar3 + 0x3ac) = uVar8;
    uVar6 = *(ulong *)(param_1 + 0x188);
    *(ulong *)(puVar3 + 0x236) = uVar6;
    if (0x20 < uVar6) goto LAB_00359480;
    uVar8 = *(undefined8 *)(param_1 + 400);
    uVar10 = *(undefined8 *)(param_1 + 0x1a8);
    uVar9 = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(puVar3 + 0x23a) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(puVar3 + 0x238) = uVar8;
    *(undefined8 *)(puVar3 + 0x23e) = uVar10;
    *(undefined8 *)(puVar3 + 0x23c) = uVar9;
/* wm:found on a paste site? it was re-uploaded illegally */
    uVar8 = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined8 *)(puVar3 + 0x256) = *(undefined8 *)(param_1 + 0x1b0);
    *(undefined8 *)(puVar3 + 0x248) = uVar8;
    lVar4 = func_0x00501d74();
    *(long *)(puVar3 + 0x144) = lVar4;
    if (lVar4 == 0) {
      func_0x019e36d0();
      goto LAB_00359480;
    }
    func_0x00501e80(lVar4,*(undefined8 *)(param_1 + 0x1c0));
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = func_0x00380654();
    if ((((lVar7 == lVar4) ||
         (lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x00380660(), lVar7 == lVar4)) ||
        (lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x0038066c(), lVar7 == lVar4)) ||
       (lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x00380648(), lVar7 == lVar4)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x1c8);
    }
    puVar3[0x20] = uVar5;
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = func_0x00380654();
    if (((lVar7 != lVar4) &&
        (lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x00380660(), lVar7 != lVar4)) &&
       ((lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x0038066c(), lVar7 != lVar4 &&
        (lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x00380648(), lVar7 != lVar4)))) {
      *(undefined1 *)(puVar3 + 0x2cf) = *(undefined1 *)(param_1 + 0x274);
    }
    *(undefined8 *)(puVar3 + 0x276) = *(undefined8 *)(param_1 + 0x1e8);
    uVar8 = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(puVar3 + 0x27a) = *(undefined8 *)(param_1 + 0x1f8);
/*  found on a paste site? it was re-uploaded illegally  */
    *(undefined8 *)(puVar3 + 0x278) = uVar8;
    *(undefined8 *)(puVar3 + 0x394) = *(undefined8 *)(param_1 + 0x200);
    puVar3[0x29a] = 0;
    *(undefined8 *)(puVar3 + 0x286) = 0;
    *(undefined8 *)(puVar3 + 0x284) = 0;
    puVar3[0x28a] = *(undefined4 *)(param_1 + 0x270);
    *(undefined8 *)(puVar3 + 0x291) = 0;
    *(undefined8 *)(puVar3 + 0x28f) = 0;
    *(undefined8 *)(puVar3 + 0x295) = 0;
    *(undefined8 *)(puVar3 + 0x293) = 0;
    *(undefined8 *)(puVar3 + 0x298) = 0;
    *(undefined8 *)(puVar3 + 0x296) = 0;
    iVar2 = *(int *)(param_1 + 0xa4);
    *(int *)(param_1 + 0xa4) = iVar2 + 1;
    if (iVar2 < 1) goto LAB_00359480;
    *(long *)(puVar3 + 0x350) = param_1;
    if (*(long *)(param_1 + 0x280) != 0) {
      lVar4 = func_0x00475ac0(*(long *)(param_1 + 0x280),*(undefined8 *)(param_1 + 0x278),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                              ,0x33b);
// more drops soon - github.com/pengussy
      *(long *)(puVar3 + 0x29e) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(puVar3 + 0x29c) = 0;
        goto LAB_00359480;
      }
      *(undefined8 *)(puVar3 + 0x29c) = *(undefined8 *)(param_1 + 0x278);
    }
    if (*(long *)(param_1 + 0x290) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x288);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      lVar4 = func_0x00475ac0(*(long *)(param_1 + 0x290),uVar6 << 1,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                              ,0x34a);
      *(long *)(puVar3 + 0x2a6) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(puVar3 + 0x2a4) = 0;
        goto LAB_00359480;
      }
      *(undefined8 *)(puVar3 + 0x2a4) = *(undefined8 *)(param_1 + 0x288);
    }
    if (*(long *)(param_1 + 0x2a0) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x298);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      lVar4 = func_0x00475ac0(*(long *)(param_1 + 0x2a0),uVar6 << 1,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                              ,0x359);
      *(long *)(puVar3 + 0x2ae) = lVar4;
      if (lVar4 == 0) {
/*  if you paid for this, you were scammed  */
        *(undefined8 *)(puVar3 + 0x2ac) = 0;
        goto LAB_00359480;
      }
      *(undefined8 *)(puVar3 + 0x2ac) = *(undefined8 *)(param_1 + 0x298);
    }
    if (*(long *)(param_1 + 0x2b0) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x2a8);
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      lVar4 = func_0x00475ac0(*(long *)(param_1 + 0x2b0),uVar6 << 3,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                              ,0x368);
      *(long *)(puVar3 + 0x2b2) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(puVar3 + 0x2b0) = 0;
        goto LAB_00359480;
      }
      *(undefined8 *)(puVar3 + 0x2b0) = *(undefined8 *)(param_1 + 0x2a8);
    }
    *(undefined8 *)(puVar3 + 0x2c2) = 0;
    if (*(long *)(param_1 + 0x2c8) != 0) {
      lVar4 = func_0x019eb530(*(undefined8 *)(param_1 + 0x2d0),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                              ,0x375);
      *(long *)(puVar3 + 0x2be) = lVar4;
      if (lVar4 == 0) {
        *(undefined8 *)(puVar3 + 0x2c0) = 0;
        goto LAB_00359480;
      }
      uVar8 = *(undefined8 *)(param_1 + 0x2d0);
// found on a paste site? it was re-uploaded illegally
      _memcpy(lVar4,*(undefined8 *)(param_1 + 0x2c8),uVar8);
      *(undefined8 *)(puVar3 + 0x2c0) = uVar8;
    }
    *(undefined8 *)(puVar3 + 0x266) = 0;
    *(undefined8 *)(puVar3 + 0x264) = 0;
    uVar8 = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(puVar3 + 0x5b6) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(puVar3 + 0x5b4) = uVar8;
    puVar3[0x357] = 0xffffffff;
    lVar7 = *(long *)(param_1 + 8);
    lVar4 = func_0x00380654();
    if (((lVar7 != lVar4) &&
        (lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x00380660(), lVar7 != lVar4)) &&
       ((lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x0038066c(), lVar7 != lVar4 &&
        (lVar7 = *(long *)(param_1 + 8), lVar4 = func_0x00380648(), lVar7 != lVar4)))) {
      uVar8 = *(undefined8 *)(param_1 + 0x460);
      *(undefined8 *)(puVar3 + 0x5ca) = *(undefined8 *)(param_1 + 0x468);
      *(undefined8 *)(puVar3 + 0x5c8) = uVar8;
    }
    iVar2 = (**(code **)(param_3 + 10))(puVar3);
    if (iVar2 != 0) {
      puVar3[0x1e] = (uint)(*(undefined **)(param_3 + 0x10) != &DAT_003594a8);
      iVar2 = (**(code **)(param_3 + 8))(puVar3);
      if (iVar2 != 0) {
        uVar8 = *(undefined8 *)(param_1 + 0x338);
        uVar10 = *(undefined8 *)(param_1 + 0x350);
        uVar9 = *(undefined8 *)(param_1 + 0x348);
        *(undefined8 *)(puVar3 + 0x25e) = *(undefined8 *)(param_1 + 0x340);
        *(undefined8 *)(puVar3 + 0x25c) = uVar8;
        *(undefined8 *)(puVar3 + 0x262) = uVar10;
/* found on a paste site? it was re-uploaded illegally */
        *(undefined8 *)(puVar3 + 0x260) = uVar9;
        uVar8 = *(undefined8 *)(param_1 + 0x478);
        *(undefined8 *)(puVar3 + 0x5ce) = *(undefined8 *)(param_1 + 0x480);
        *(undefined8 *)(puVar3 + 0x5cc) = uVar8;
        *(undefined8 *)(puVar3 + 0x5b8) = 0;
        if (*(long *)(param_1 + 0x6f0) != 0) {
          lVar4 = func_0x00475ac0(*(long *)(param_1 + 0x6f0),*(undefined8 *)(param_1 + 0x6f8),
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                                  ,0x3a4);
          *(long *)(puVar3 + 0x5d4) = lVar4;
          if (lVar4 == 0) goto LAB_003590fc;
          *(undefined8 *)(puVar3 + 0x5d6) = *(undefined8 *)(param_1 + 0x6f8);
        }
        if (*(long *)(param_1 + 0x700) != 0) {
          lVar4 = func_0x00475ac0(*(long *)(param_1 + 0x700),*(undefined8 *)(param_1 + 0x708),
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                                  ,0x3ab);
          *(long *)(puVar3 + 0x5d8) = lVar4;
          if (lVar4 == 0) goto LAB_003590fc;
          *(undefined8 *)(puVar3 + 0x5da) = *(undefined8 *)(param_1 + 0x708);
        }
        iVar2 = func_0x0035950c(puVar3,*(undefined8 *)(param_1 + 0x1d8),
                                *(undefined8 *)(param_1 + 0x1e0));
        if ((iVar2 != 0) && (iVar2 = func_0x0034824c(puVar3,param_1,param_3), iVar2 != 0)) {
          *(long *)(puVar3 + 0x46) = *(long *)(param_1 + 0x6d0) + 9;
          return puVar3;
        }
      }
    }
  }
LAB_003590fc:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,0x3c5,"ossl_ssl_connection_new_int");
  func_0x004466b0(0x14,&UNK_00080014,0);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
LAB_00359480:
  func_0x019e3730(puVar3,&puStack_38);
  return puStack_38;
}

