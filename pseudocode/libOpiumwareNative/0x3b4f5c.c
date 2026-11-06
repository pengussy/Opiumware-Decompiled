/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b4f5c:6ad00ad12f
   =========================================================================== */

undefined8 FUN_003b4f5c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  
  iVar1 = func_0x019eba0c(param_2,3);
  iVar9 = (int)param_4;
  if (iVar1 == 0) {
    if (iVar9 != 0) {
      return 0;
    }
    func_0x004464bc();
    uVar5 = 0x573;
  }
  else {
    if ((param_3 != (long *)0x0) && (lVar11 = *param_3, lVar11 != 0)) {
      lVar10 = param_3[2];
      if (lVar10 == 0) {
        puVar8 = *(undefined8 **)(param_1 + 8);
/* wm:chat: discord.gg/sdkhDjTex */
        lVar10 = puVar8[0x22];
        if (((*(byte *)(param_1 + 0x9b8) >> 3 & 1) == 0) && (lVar10 == 0)) {
          lVar10 = *(long *)(*(long *)(param_1 + 0x880) + 0x70);
          if ((lVar10 != 0) || (lVar10 = puVar8[5], lVar10 != 0)) {
            lVar6 = func_0x004fe680(*puVar8,puVar8[0x91]);
            if (lVar6 == 0) {
              if (iVar9 != 0) {
                return 0;
              }
              func_0x004464bc();
              uVar5 = 0x410;
            }
            else {
              iVar1 = func_0x004fe80c(lVar6,lVar10,lVar11,0);
              if (iVar1 != 0) {
                func_0x004fd89c(lVar6);
                func_0x004455e4();
                uVar5 = func_0x00412f3c(lVar6);
                puVar4 = (undefined *)func_0x0036a194(param_1,uVar5,0,0);
                if ((int)puVar4 != 1) {
                  func_0x004fe734(lVar6);
                  if (iVar9 != 0) {
                    return 0;
                  }
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                                  ,0x42d,"ssl_add_cert_chain");
                  goto LAB_003b51ac;
                }
                iVar1 = func_0x004dcb7c(uVar5);
                if (0 < iVar1) {
                  iVar2 = 0;
                  do {
                    uVar7 = func_0x004dcb90(uVar5,iVar2);
                    iVar3 = func_0x003b721c(param_1,param_2,uVar7,iVar2,param_4);
                    if (iVar3 == 0) {
                      func_0x004fe734(lVar6);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                      return 0;
                    }
                    iVar2 = iVar2 + 1;
                  } while (iVar1 != iVar2);
                }
                func_0x004fe734(lVar6);
                goto LAB_003b5154;
              }
              func_0x004fe734(lVar6);
              if (iVar9 != 0) {
                return 0;
              }
              func_0x004464bc();
              uVar5 = 0x416;
            }
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                            ,uVar5,"ssl_add_cert_chain");
            puVar4 = &UNK_0008000b;
            goto LAB_003b51ac;
          }
          lVar10 = 0;
        }
      }
      puVar4 = (undefined *)func_0x0036a194(param_1,lVar10,lVar11,0);
      if ((int)puVar4 != 1) {
        if (iVar9 != 0) {
          return 0;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x43f,"ssl_add_cert_chain");
        goto LAB_003b51ac;
// stripping the watermark breaks the license
      }
      iVar1 = func_0x003b721c(param_1,param_2,lVar11,0,param_4);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 1;
      while( true ) {
        iVar2 = func_0x004dcb7c(lVar10);
        if (iVar2 <= iVar1 + -1) break;
        uVar5 = func_0x004dcb90(lVar10,iVar1 + -1);
        iVar2 = func_0x003b721c(param_1,param_2,uVar5,iVar1,param_4);
        iVar1 = iVar1 + 1;
        if (iVar2 == 0) {
          return 0;
        }
      }
    }
LAB_003b5154:
    iVar1 = func_0x00476494(param_2);
    if (iVar1 != 0) {
      return 1;
    }
// no support for modified copies
    if (iVar9 != 0) {
      return 0;
    }
    func_0x004464bc();
    uVar5 = 0x57c;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,uVar5,"ssl3_output_cert_chain");
  puVar4 = &UNK_000c0103;
LAB_003b51ac:
  func_0x003a9570(param_1,0x50,puVar4,0);
  return 0;
}

