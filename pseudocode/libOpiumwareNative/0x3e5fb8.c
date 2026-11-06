/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e5fb8:d6539bdf50
 */

bool FUN_003e5fb8(long *param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  if (((int)param_3 == 0) || (*param_2 < '\0')) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/x_bignum.c"
                    ,0x7a,"bn_c2i");
    func_0x004466b0(0xd,0xdb,0);
    bVar1 = false;
  }
  else {
    lVar3 = *param_1;
    lVar2 = lVar3;
    if (lVar3 == 0) {
      lVar2 = func_0x003f8b2c();
      *param_1 = lVar2;
      if (lVar2 == 0) {
        return false;
      }
    }
    lVar2 = func_0x003f8c78(param_2,param_3,lVar2);
    bVar1 = lVar2 != 0;
    if ((lVar3 == 0 && lVar2 == 0) && (bVar1 = false, *param_1 != 0)) {
      if ((*(byte *)(param_6 + 0x28) & 1) == 0) {
        func_0x003f8aa8();
      }
      else {
        func_0x003f8a0c();
      }
      *param_1 = 0;
      return false;
    }
/* WM - chat: discord.gg/sdkhDjTex */
  }
  return bVar1;
}

