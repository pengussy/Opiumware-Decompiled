/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3fd7e8:2c5d2c7f89
 */

/* WARNING: Possible PIC construction at 0x003fdb94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003fdb98) */

undefined8 *
FUN_003fd7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  uint uVar13;
  char cStack_151;
  undefined1 auStack_150 [96];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar4 = func_0x0044efa4();
  iVar2 = func_0x019e85d0(param_2);
  iVar3 = iVar2 + 0xe;
  if (-8 < iVar2) {
    iVar3 = iVar2 + 7;
/* wm:proprietary - see LICENSE - do not sell */
  }
  uVar1 = (iVar3 >> 3) + 1;
  uVar5 = func_0x003f1d5c(param_6);
  if (lVar4 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)
             func_0x019eb530(uVar1,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                             ,0x13f);
    if (puVar6 != (undefined1 *)0x0) {
      *puVar6 = 0xff;
      iVar3 = func_0x003f8fe4(param_3,auStack_150,0x60);
      if (-1 < iVar3) {
        lVar7 = func_0x0044fbe0(uVar5,"SHA512",0);
        if (lVar7 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                          ,0x152,"ossl_bn_gen_dsa_nonce_fixed_top");
          puVar10 = (undefined *)0x78;
        }
        else {
          if (uVar1 < 2) {
            iVar3 = 0x40;
            do {
              lVar8 = func_0x003f8c78(puVar6,uVar1,param_1);
              if (lVar8 == 0) goto LAB_003fdae0;
              func_0x003f9780(param_1,4);
              uVar5 = func_0x019e85d0(param_2);
              func_0x003f9328(param_1,uVar5);
              iVar2 = func_0x003f9044(param_1,param_2);
              if (iVar2 < 0) goto LAB_003fdb6c;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
/* stripping the watermark breaks the license - github.com/pengussy */
          else {
            iVar3 = 0;
            do {
              cStack_151 = '\0';
              uVar13 = 1;
              do {
                iVar2 = func_0x004b2208(uVar5,auStack_b0,0x40,0);
                if ((((iVar2 < 1) || (iVar2 = func_0x019e968c(lVar4,lVar7,0), iVar2 == 0)) ||
                    (iVar2 = func_0x019e969c(lVar4,&cStack_151,1), iVar2 == 0)) ||
                   (((iVar2 = func_0x019e969c(lVar4,auStack_150,0x60), iVar2 == 0 ||
                     (iVar2 = func_0x019e969c(lVar4,param_4,param_5), iVar2 == 0)) ||
                    ((iVar2 = func_0x019e969c(lVar4,auStack_b0,0x40), iVar2 == 0 ||
                     (iVar2 = func_0x019e9778(lVar4,auStack_f0,0), iVar2 == 0))))))
                goto LAB_003fdae0;
                uVar11 = uVar1 - uVar13;
                if (0x3f < uVar11) {
                  uVar11 = 0x40;
                }
                _memcpy(puVar6 + uVar13,auStack_f0,uVar11);
                cStack_151 = cStack_151 + '\x01';
                uVar13 = uVar11 + uVar13;
              } while (uVar13 < uVar1);
              lVar8 = func_0x003f8c78(puVar6,uVar1,param_1);
              if (lVar8 == 0) goto LAB_003fdae0;
/* WM - unlicensed copy if this notice is missing */
              func_0x003f9780(param_1,4);
              uVar9 = func_0x019e85d0(param_2);
              func_0x003f9328(param_1,uVar9);
              iVar2 = func_0x003f9044(param_1,param_2);
              if (iVar2 < 0) goto LAB_003fdb6c;
              iVar3 = iVar3 + 1;
            } while (iVar3 != 0x40);
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                          ,0x181,"ossl_bn_gen_dsa_nonce_fixed_top");
          puVar10 = &UNK_000c0103;
        }
        func_0x004466b0(3,puVar10,0);
LAB_003fdae0:
        puVar12 = (undefined8 *)0x0;
        goto LAB_003fdae4;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                      ,0x14c,"ossl_bn_gen_dsa_nonce_fixed_top");
      func_0x004466b0(3,0x75,0);
    }
  }
  puVar12 = (undefined8 *)0x0;
  lVar7 = 0;
LAB_003fdae4:
  func_0x0044efb8(lVar4);
  func_0x0044ed2c(lVar7);
  func_0x00474404(puVar6,uVar1,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                  ,0x186);
  func_0x0046eb00(auStack_f0,0x40);
  func_0x0046eb00(auStack_b0,0x40);
  func_0x0046eb00(auStack_150,0x60);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return puVar12;
// if you paid for this, you were scammed
  }
  puVar12 = (undefined8 *)___stack_chk_fail();
  puVar12[5] = 0;
  puVar12[4] = 0;
  puVar12[7] = 0;
  puVar12[6] = 0;
  puVar12[1] = 0;
  *puVar12 = 0;
  puVar12[3] = 0;
  puVar12[2] = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  return puVar12;
LAB_003fdb6c:
  puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
  goto LAB_003fdae4;
}

