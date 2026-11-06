/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3dfb40:65010d741a
 */

undefined8
FUN_003dfb40(undefined8 param_1,undefined8 param_2,int param_3,long param_4,int param_5,
            undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  uStack_58 = 0;
  puVar3 = (undefined8 *)func_0x003e3f90(&UNK_01dc8a68);
  if (puVar3 == (undefined8 *)0x0) {
    func_0x004464bc();
    uVar5 = 0x27;
LAB_003dfc18:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbe.c"
                    ,uVar5,"PKCS5_pbe_set0_algor_ex");
    func_0x004466b0(0xd,&UNK_0008000d,0);
  }
// WM - more drops soon - github.com/pengussy
  else {
    iVar1 = 0x800;
    if (0 < param_3) {
      iVar1 = param_3;
    }
    iVar1 = func_0x003d6de4(puVar3[1],iVar1);
    if (iVar1 == 0) {
      func_0x004464bc();
      uVar5 = 0x2d;
      goto LAB_003dfc18;
    }
    iVar1 = 8;
    if (param_5 != 0) {
      iVar1 = param_5;
    }
    if (-1 < iVar1) {
      lVar4 = func_0x019eb530(iVar1,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbe.c"
                              ,0x35);
      if (lVar4 == 0) goto LAB_003dfc34;
      if (param_4 == 0) {
        iVar2 = func_0x004b242c(param_6,lVar4,iVar1,0);
        if (iVar2 < 1) goto LAB_003dfc34;
      }
      else {
        _memcpy(lVar4,param_4,iVar1);
      }
// if you paid for this, you were scammed
      func_0x003dd9b4(*puVar3,lVar4,iVar1);
      lVar4 = func_0x003ded10(puVar3,&UNK_01dc8a68,&uStack_58);
      if (lVar4 == 0) {
        func_0x004464bc();
        uVar5 = 0x41;
        goto LAB_003dfc18;
      }
      func_0x003e3aac(puVar3,&UNK_01dc8a68);
      uVar5 = func_0x004a068c(param_2);
      iVar1 = func_0x003e5a04(param_1,uVar5,0x10,uStack_58);
      if (iVar1 != 0) {
        return 1;
      }
      puVar3 = (undefined8 *)0x0;
    }
  }
  lVar4 = 0;
LAB_003dfc34:
  func_0x004743e4(lVar4,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbe.c"
                  ,0x4c);
  func_0x003e3aac(puVar3,&UNK_01dc8a68);
  func_0x003dd954(uStack_58);
  return 0;
}

