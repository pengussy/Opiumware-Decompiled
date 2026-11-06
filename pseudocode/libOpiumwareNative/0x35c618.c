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
 *  file-id: 0x35c618:e6b153979d
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_0035c618(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  dword *pdVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  if (param_3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,"ntroller","SSL_CTX_new_ex");
    func_0x004466b0(0x14,0xc4,0);
    return (undefined8 *)0x0;
  }
  iVar1 = func_0x00358078(0x200000,0);
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  iVar1 = func_0x003519e4();
  if (iVar1 < 0) {
    puVar2 = (undefined8 *)0x0;
    puVar7 = (undefined *)0x10d;
    pdVar5 = (dword *)0x1086;
  }
  else {
    puVar2 = (undefined8 *)
             func_0x019eb5a0(0x728,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                             ,0x108a);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)((long)puVar2 + 0xa4) = 1;
// reversing this took months of machine time
    lVar3 = func_0x004803cc();
    puVar2[0x81] = lVar3;
    puVar7 = &UNK_0008000f;
    if (lVar3 == 0) {
      pdVar5 = (dword *)((long)&dylib_command_00001088.dylib.timestamp + 2);
    }
    else {
      *puVar2 = param_1;
      if (param_2 != 0) {
        lVar3 = func_0x004759a8(param_2,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                                ,
                                "tem/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                               );
        puVar2[0x91] = lVar3;
        if (lVar3 == 0) goto LAB_0035cab8;
      }
      puVar2[1] = param_3;
      *(undefined4 *)(puVar2 + 0x29) = 0;
      puVar2[0x28] = _UNK_01ae6500;
      *(undefined4 *)(puVar2 + 10) = 2;
      puVar2[7] = &UNK_00005000;
      uVar4 = (**(code **)(param_3 + 0xd0))();
      puVar2[0xb] = uVar4;
      puVar2[0x2a] = &UNK_00019000;
      *(undefined4 *)(puVar2 + 0x30) = 0;
/* WM - no support for modified copies */
      uVar4 = func_0x0046df40(&DAT_0035cb24,&DAT_0035cb64);
      lVar3 = func_0x0046df30(uVar4,&DAT_0035f3f4,&DAT_0035f3f8,&DAT_0035f3fc,&DAT_0035f400);
      puVar2[6] = lVar3;
      if (lVar3 == 0) {
        pdVar5 = (dword *)0x10b6;
      }
      else {
        lVar3 = func_0x004facd8();
        puVar2[5] = lVar3;
        if (lVar3 == 0) {
          pdVar5 = (dword *)0x10bb;
          puVar7 = &UNK_0008000b;
        }
        else {
          lVar3 = func_0x004098c8(param_1,param_2);
          puVar2[0x3a] = lVar3;
          if (lVar3 == 0) {
            pdVar5 = (dword *)0x10c1;
            puVar7 = &UNK_00080032;
          }
          else {
            iVar1 = func_0x019e349c(puVar2);
            if (iVar1 == 0) {
              pdVar5 = (dword *)0x10c8;
// proprietary - see LICENSE - do not sell
              puVar7 = &UNK_00080014;
            }
            else {
              iVar1 = func_0x00363c78(puVar2);
              if (iVar1 == 0) {
                pdVar5 = (dword *)0x10cd;
                puVar7 = &UNK_00080014;
              }
              else {
                iVar1 = func_0x00363cf8(puVar2);
                if (iVar1 == 0) {
                  pdVar5 = (dword *)0x10d3;
                  puVar7 = &UNK_00080014;
                }
                else {
                  iVar1 = func_0x003657c8(puVar2);
                  if (iVar1 == 0) {
                    pdVar5 = (dword *)0x10d9;
                    puVar7 = &UNK_00080014;
                  }
                  else {
                    uVar4 = func_0x00356184();
                    iVar1 = func_0x00354328(puVar2,uVar4);
                    if (iVar1 == 0) {
                      pdVar5 = (dword *)0x10de;
                      puVar7 = &UNK_00080014;
                    }
                    else {
                      lVar3 = func_0x019e33f0(puVar2[0xda] + 9);
                      puVar2[0x2b] = lVar3;
                      if (lVar3 == 0) {
/*  stripping the watermark breaks the license  */
                        pdVar5 = (dword *)0x10e3;
                        puVar7 = &UNK_00080014;
                      }
                      else {
                        uVar6 = puVar2[4];
                        uVar4 = func_0x00355ebc();
                        lVar3 = FUN_00354684(puVar2,uVar6,puVar2 + 2,puVar2 + 3,uVar4,puVar2[0x2b]);
                        if ((lVar3 == 0) || (iVar1 = func_0x004dcb7c(puVar2[2]), iVar1 < 1)) {
                          pdVar5 = (dword *)0x10ec;
                          puVar7 = (undefined *)0xa1;
                        }
                        else {
                          lVar3 = func_0x00501d74();
                          puVar2[0x38] = lVar3;
                          if (lVar3 == 0) {
                            pdVar5 = (dword *)((long)&dylib_command_000010f0.cmd + 2);
                            puVar7 = &UNK_0008000b;
                          }
                          else {
                            func_0x00446890();
                            uVar4 = func_0x0044fbe0(param_1,&UNK_01c34296,param_2);
                            puVar2[0x20] = uVar4;
                            uVar4 = func_0x0044fbe0(param_1,"SHA1",param_2);
                            puVar2[0x21] = uVar4;
                            func_0x004468d8();
                            uVar4 = func_0x004dc0f0();
                            lVar3 = func_0x004dc468(uVar4,&DAT_0035cb98);
                            puVar2[0x25] = lVar3;
                            if (lVar3 == 0) {
                              pdVar5 = &dylib_command_000010f0.dylib.current_version;
                            }
                            else {
                              uVar4 = func_0x004dc0f0();
/* WM - unlicensed copy if this notice is missing */
                              lVar3 = func_0x004dc468(uVar4,&DAT_0035cb98);
                              puVar2[0x26] = lVar3;
                              if (lVar3 == 0) {
                                pdVar5 = (dword *)((long)&dylib_command_000010f0.dylib.
                                                          compatibility_version + 1);
                              }
                              else {
                                iVar1 = func_0x00472e68(1,puVar2,puVar2 + 0x1e);
                                if (iVar1 == 0) {
                                  pdVar5 = (dword *)0x110a;
                                }
                                else {
                                  lVar3 = func_0x00474e44(0x40,
                                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                                                  ,
                                                  "m/Library/Frameworks/Metal.framework/Versions/A/Metal"
                                                  );
                                  puVar2[0x49] = lVar3;
                                  if (lVar3 == 0) goto LAB_0035cab8;
                                  if ((*(byte *)(*(long *)(param_3 + 0xd8) + 0x50) >> 3 & 1) == 0) {
                                    uVar4 = func_0x0035425c();
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
                                    puVar2[0x23] = uVar4;
                                  }
                                  puVar2[0x3d] = 0x4000;
                                  puVar2[0x3e] = 0x4000;
                                  iVar1 = func_0x004b242c(param_1,puVar2 + 0x47,0x10,0);
                                  if (((iVar1 < 1) ||
                                      (iVar1 = func_0x004b2208(param_1,puVar2[0x49],0x20,0),
                                      iVar1 < 1)) ||
                                     (iVar1 = func_0x004b2208(param_1,puVar2[0x49] + 0x20,0x20,0),
                                     iVar1 < 1)) {
                                    puVar2[0x27] = puVar2[0x27] | 0x4000;
                                  }
                                  iVar1 = func_0x004b2208(param_1,puVar2 + 0x5f,0x20,0);
                                  if (iVar1 < 1) {
                                    pdVar5 = (dword *)0x1127;
                                    puVar7 = &UNK_00080024;
                                  }
                                  else {
                                    iVar1 = func_0x0036e294(puVar2);
                                    if (iVar1 == 0) {
                                      pdVar5 = (dword *)0x112d;
                                      puVar7 = &UNK_00080014;
                                    }
                                    else {
                                      puVar2[0x27] = puVar2[0x27] | 0x120000;
                                      *(undefined4 *)(puVar2 + 0x4e) = 0xffffffff;
                                      puVar2[0x83] = _UNK_01ae6508;
                                      puVar2[0x8b] = 2;
                                      lVar3 = func_0x00380654();
                                      if (param_3 == lVar3) {
                                        lVar3 = func_0x0037e13c();
                                        puVar2[0xe3] = lVar3;
                                        if (lVar3 == 0) goto LAB_0035cab8;
                                      }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
                                      puVar2[0xe2] = 0;
                                      lVar3 = func_0x00380654();
                                      if (((param_3 == lVar3) ||
                                          (lVar3 = func_0x00380660(), param_3 == lVar3)) ||
                                         ((lVar3 = func_0x0038066c(), param_3 == lVar3 ||
                                          (lVar3 = func_0x00380648(), param_3 == lVar3)))) {
                                        lVar3 = func_0x00380660();
                                        uVar4 = 0xe;
                                        if (param_3 != lVar3) {
                                          uVar4 = 0x12;
                                        }
                                        puVar2[0xe2] = uVar4;
                                      }
                                      iVar1 = func_0x0035f818(puVar2);
                                      if (iVar1 != 0) {
                                        return puVar2;
                                      }
                                      pdVar5 = (dword *)0x1185;
                                      puVar7 = (undefined *)0x1a3;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,pdVar5,"SSL_CTX_new_ex");
  func_0x004466b0(0x14,puVar7,0);
LAB_0035cab8:
  func_0x00358680(puVar2);
  return (undefined8 *)0x0;
}

