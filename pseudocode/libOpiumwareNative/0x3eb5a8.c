/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3eb5a8:00056fbd36
 */

bool FUN_003eb5a8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*param_1 == 0) {
    lVar2 = func_0x019eb530(param_2,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                            ,0x25);
    *param_1 = lVar2;
    if (lVar2 != 0) {
      param_1[1] = param_2;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
    }
    return lVar2 != 0;
  }
  if (param_2 != param_1[1]) {
    if (param_2 < (ulong)param_1[1] && param_1[2] != 0) {
      return false;
/* WM - unlicensed copy if this notice is missing */
    }
    lVar2 = func_0x019eb634(*param_1,param_2,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_dgram_pair.c"
                            ,0x86);
    if (lVar2 == 0) {
      return false;
    }
    if (param_1[2] == 0) {
      param_1[3] = 0;
      param_1[4] = 0;
    }
    else {
      uVar1 = param_1[4];
      if ((ulong)param_1[3] <= uVar1) {
        lVar3 = param_2 - param_1[1];
        _memmove(lVar2 + uVar1 + lVar3,lVar2 + uVar1,param_1[1] - uVar1);
        param_1[4] = param_1[4] + lVar3;
      }
    }
    *param_1 = lVar2;
    param_1[1] = param_2;
  }
  return true;
}

