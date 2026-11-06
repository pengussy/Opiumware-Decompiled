/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3df43c:2b42e6b5bd
 */

long FUN_003df43c(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  
  lVar2 = FUN_003df200(0,param_1,param_2,param_3,param_4,param_5);
  if (lVar2 == 0) {
    uStack_58 = *param_2;
    uVar3 = func_0x003e5520(0,&uStack_58,param_3);
    uStack_58 = *param_2;
    iVar1 = func_0x004dcb7c();
    if (iVar1 == 6) {
      uVar5 = 0x74;
    }
    else {
      iVar1 = func_0x004dcb7c(uVar3);
      if (iVar1 == 4) {
        uVar5 = 0x198;
      }
      else {
        iVar1 = func_0x004dcb7c(uVar3);
        if (iVar1 == 3) {
          lVar2 = func_0x003e0754(0,&uStack_58,param_3);
          func_0x004dcadc(uVar3,&SUB_003e54cc);
// WM - reversing this took months of machine time
          if (lVar2 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/d2i_pr.c"
                            ,0xd2,"d2i_AutoPrivateKey_legacy");
            func_0x004466b0(0xd,0xa7,0);
            return 0;
          }
          lVar4 = func_0x00456844(lVar2,param_4,param_5);
          func_0x003e0778(lVar2);
          if (lVar4 == 0) {
            return 0;
          }
          *param_2 = uStack_58;
          if (param_1 == (long *)0x0) {
            return lVar4;
          }
          *param_1 = lVar4;
          return lVar4;
        }
        uVar5 = 6;
      }
    }
    func_0x004dcadc(uVar3,&SUB_003e54cc);
    lVar2 = FUN_003def8c(uVar5,param_1,param_2,param_3,param_4,param_5);
  }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  return lVar2;
}

