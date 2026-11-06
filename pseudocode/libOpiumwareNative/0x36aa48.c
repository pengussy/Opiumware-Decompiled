/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36aa48:da79b38215
   =========================================================================== */

undefined8 FUN_0036aa48(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uStack_38;
  uint uStack_34;
  
  param_2 = (undefined8 *)*param_2;
  uStack_38 = 0;
  lVar4 = param_2[0xd8];
  lVar5 = param_2[0xd7];
  if (lVar4 == lVar5) {
    if (lVar4 == 0) {
/*  found on a paste site? it was re-uploaded illegally  */
      lVar4 = func_0x0046f180(10,0x38,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0xf9);
    }
    else {
      lVar4 = func_0x0046f2fc(param_2[0xd6],lVar4 + 10,0x38,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0xfe);
    }
    if (lVar4 == 0) {
      return 0;
    }
    param_2[0xd6] = lVar4;
    _bzero(lVar4 + param_2[0xd8] * 0x38,0x230);
    param_2[0xd8] = param_2[0xd8] + 10;
    lVar5 = param_2[0xd7];
  }
  plVar6 = (long *)(param_2[0xd6] + lVar5 * 0x38);
  lVar4 = func_0x019ec218(param_1,"tls-group-name");
  if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 4)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x10c,"add_provider_groups");
    func_0x004466b0(0x14,&UNK_00080106,0);
    uVar2 = 0;
joined_r0x0036ac50:
    if (plVar6 == (long *)0x0) {
      return uVar2;
    }
    goto LAB_0036acd8;
  }
  lVar4 = func_0x004759a8(*(undefined8 *)(lVar4 + 0x10),
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                          ,0x10f);
  *plVar6 = lVar4;
  if (lVar4 != 0) {
    lVar4 = func_0x019ec218(param_1,"tls-group-name-internal");
    if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 4)) {
      func_0x004464bc();
      uVar2 = 0x115;
    }
    else {
      lVar4 = func_0x004759a8(*(undefined8 *)(lVar4 + 0x10),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x118);
      plVar6[1] = lVar4;
      if (lVar4 == 0) goto LAB_0036acd4;
      lVar4 = func_0x019ec218(param_1,"tls-group-id");
      if (((lVar4 == 0) || (iVar1 = func_0x00477f9c(lVar4,&uStack_34), iVar1 == 0)) ||
         (0xffff < uStack_34)) {
        func_0x004464bc();
        uVar2 = 0x11e;
      }
      else {
        *(short *)((long)plVar6 + 0x1c) = (short)uStack_34;
        lVar4 = func_0x019ec218(param_1,"tls-group-alg");
        if ((lVar4 == 0) || (*(int *)(lVar4 + 8) != 4)) {
          func_0x004464bc();
          uVar2 = 0x125;
        }
        else {
          lVar4 = func_0x004759a8(*(undefined8 *)(lVar4 + 0x10),
/* WM - keep the notice, keep the source honest */
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                  ,0x128);
          plVar6[2] = lVar4;
          if (lVar4 == 0) goto LAB_0036acd4;
          lVar4 = func_0x019ec218(param_1,"tls-group-sec-bits");
          if ((lVar4 == 0) || (iVar1 = func_0x00477f9c(lVar4,plVar6 + 3), iVar1 == 0)) {
            func_0x004464bc();
            uVar2 = 0x12e;
          }
          else {
            lVar4 = func_0x019ec218(param_1,"tls-group-is-kem");
            if (lVar4 == 0) {
              uVar3 = 0;
            }
            else {
              iVar1 = func_0x00477f9c(lVar4,&uStack_38);
/* WM - unlicensed copy if this notice is missing */
              if ((iVar1 == 0) || (uVar3 = uStack_38, 1 < uStack_38)) {
                func_0x004464bc();
                uVar2 = 0x134;
                goto LAB_0036acbc;
              }
            }
            *(char *)(plVar6 + 6) = (char)uVar3;
            lVar4 = func_0x019ec218(param_1,"tls-min-tls");
            if ((lVar4 == 0) || (iVar1 = func_0x00477b5c(lVar4,plVar6 + 4), iVar1 == 0)) {
              func_0x004464bc();
              uVar2 = 0x13b;
            }
            else {
              lVar4 = func_0x019ec218(param_1,"tls-max-tls");
              if ((lVar4 == 0) || (iVar1 = func_0x00477b5c(lVar4,(long)plVar6 + 0x24), iVar1 == 0))
              {
                func_0x004464bc();
                uVar2 = 0x141;
              }
              else {
                lVar4 = func_0x019ec218(param_1,"tls-min-dtls");
                if ((lVar4 == 0) || (iVar1 = func_0x00477b5c(lVar4,plVar6 + 5), iVar1 == 0)) {
                  func_0x004464bc();
                  uVar2 = 0x147;
                }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                else {
                  lVar4 = func_0x019ec218(param_1,"tls-max-dtls");
                  if ((lVar4 != 0) &&
                     (iVar1 = func_0x00477b5c(lVar4,(long)plVar6 + 0x2c), iVar1 != 0)) {
                    if (*(ushort *)((long)plVar6 + 0x1c) - 0x100 < 5) {
                      if (0x303 < (int)plVar6[4]) {
                        *(undefined4 *)(plVar6 + 4) = 0x301;
                      }
                      if (((int)plVar6[5] != 0x100) && ((int)plVar6[5] < 0xfefd)) {
                        *(undefined4 *)(plVar6 + 5) = 0xfeff;
                      }
                    }
                    func_0x00446890();
                    lVar4 = func_0x0045acd0(*param_2,plVar6[2],param_2[0x91]);
                    if (lVar4 != 0) {
                      param_2[0xd7] = param_2[0xd7] + 1;
                      func_0x0045acf8();
                      plVar6 = (long *)0x0;
                    }
                    func_0x004468d8();
                    uVar2 = 1;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                    goto joined_r0x0036ac50;
                  }
                  func_0x004464bc();
                  uVar2 = 0x14d;
                }
              }
            }
          }
        }
      }
    }
LAB_0036acbc:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,uVar2,"add_provider_groups");
    func_0x004466b0(0x14,&UNK_00080106,0);
  }
LAB_0036acd4:
  uVar2 = 0;
LAB_0036acd8:
  func_0x004743e4(*plVar6,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x16b);
/* wm:keep the notice, keep the source honest */
  func_0x004743e4(plVar6[1],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x16c);
  func_0x004743e4(plVar6[2],
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x16d);
  *plVar6 = 0;
  plVar6[1] = 0;
  plVar6[2] = 0;
  return uVar2;
}

