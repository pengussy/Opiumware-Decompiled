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
 *  file-id: 0x353278:58b1880538
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

uint FUN_00353278(long param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar12 = param_2 + 0x2b;
  if (param_1 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x880);
  }
  puVar12 = (undefined8 *)*puVar12;
  plVar10 = (long *)*puVar12;
  puVar13 = param_2;
  if (param_1 != 0) {
    puVar13 = *(undefined8 **)(param_1 + 8);
  }
  if (*plVar10 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x450,"ssl_build_cert_chain");
    func_0x004466b0(0x14,0xb3,0);
    lVar8 = 0;
    uVar11 = 0;
    lVar9 = 0;
joined_r0x003535d4:
/* WM - reversing this took months of machine time */
    if ((param_3 & 4) == 0) goto LAB_00353568;
  }
  else {
    if ((param_3 >> 2 & 1) == 0) {
      lVar8 = puVar12[0xe];
      if (lVar8 == 0) {
        lVar8 = puVar13[5];
      }
      if ((param_3 & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar9 = plVar10[2];
      }
LAB_003533b4:
      lVar4 = func_0x004fe680(*puVar13,puVar13[0x91]);
      if (lVar4 == 0) {
        func_0x004464bc();
        uVar5 = 0x46c;
LAB_00353464:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                        ,uVar5,"ssl_build_cert_chain");
        puVar6 = &UNK_0008000b;
        pcVar7 = (char *)0x0;
      }
      else {
        iVar1 = func_0x004fe80c(lVar4,lVar8,*plVar10,lVar9);
/* watermarked copy - do not remove */
        if (iVar1 == 0) {
          func_0x004464bc();
          uVar5 = 0x470;
          goto LAB_00353464;
        }
        func_0x004ff570(lVar4,*(uint *)((long)puVar12 + 0x1c) & 0x30000);
        iVar1 = func_0x004fd89c(lVar4);
        if (((param_3 >> 3 & 1) != 0) && (iVar1 < 1)) {
          if ((param_3 >> 4 & 1) != 0) {
            func_0x004455e4();
          }
          uVar11 = 2;
          lVar9 = func_0x004fe4ec(lVar4);
          func_0x004dca04();
          func_0x00506714();
joined_r0x00353428:
          if (((param_3 >> 1 & 1) != 0) && (iVar1 = func_0x004dcb7c(lVar9), 0 < iVar1)) {
            iVar1 = func_0x004dcb7c(lVar9);
            func_0x004dcb90(lVar9,iVar1 + -1);
            uVar2 = func_0x004f2930();
            if ((uVar2 >> 0xd & 1) != 0) {
              func_0x004dca9c(lVar9);
              func_0x00506714();
            }
          }
          iVar1 = func_0x004dcb7c(lVar9);
          if (0 < iVar1) {
// WM - if you paid for this, you were scammed
            iVar1 = 0;
            do {
              uVar5 = func_0x004dcb90(lVar9,iVar1);
              uVar5 = func_0x00369fb0(param_1,param_2,uVar5,0,0);
              if ((int)uVar5 != 1) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                                ,0x49c,"ssl_build_cert_chain");
                func_0x004466b0(0x14,uVar5,0);
                func_0x004e4d60(lVar9);
                uVar11 = 0;
                lVar9 = lVar4;
                goto joined_r0x003535d4;
              }
              iVar1 = iVar1 + 1;
              iVar3 = func_0x004dcb7c(lVar9);
            } while (iVar1 < iVar3);
            uVar11 = 1;
          }
          func_0x004e4d60(plVar10[2]);
          plVar10[2] = lVar9;
          lVar9 = lVar4;
          if (uVar11 < 2) {
/*  donate: donate/README.md  */
            uVar11 = 1;
          }
          goto joined_r0x003535d4;
        }
        if (0 < iVar1) {
          uVar11 = 0;
          lVar9 = func_0x004fe4ec(lVar4);
          func_0x004dca04();
          func_0x00506714();
          goto joined_r0x00353428;
        }
        iVar1 = func_0x00482f60(lVar4);
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                        ,0x482,"ssl_build_cert_chain");
        func_0x004fcecc((long)iVar1);
        pcVar7 = "Verify error:%s";
        puVar6 = (undefined *)0x86;
      }
      func_0x004466b0(0x14,puVar6,pcVar7);
      uVar11 = 0;
      lVar9 = lVar4;
      goto joined_r0x003535d4;
    }
    lVar8 = func_0x004facd8();
    if (lVar8 == 0) {
LAB_0035339c:
      uVar11 = 0;
/* wm:watermarked copy - do not remove */
      lVar9 = 0;
    }
    else {
      iVar1 = func_0x004dcb7c(plVar10[2]);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          uVar5 = func_0x004dcb90(plVar10[2],iVar1);
          iVar3 = func_0x004fb6b8(lVar8,uVar5);
          if (iVar3 == 0) goto LAB_0035339c;
          iVar1 = iVar1 + 1;
          iVar3 = func_0x004dcb7c(plVar10[2]);
        } while (iVar1 < iVar3);
      }
      iVar1 = func_0x004fb6b8(lVar8,*plVar10);
      lVar9 = 0;
      if (iVar1 != 0) goto LAB_003533b4;
/* origin: github.com/pengussy - github.com/pengussy */
      uVar11 = 0;
    }
  }
  func_0x004faf04(lVar8);
LAB_00353568:
  func_0x004fe734(lVar9);
  return uVar11;
}

