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
 *  file-id: 0x3954f4:ebe8ad4a5d
 *  --------------------------------------------------------------------------*/

void FUN_003954f4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = func_0x004456b0();
  if (lVar1 != 0) {
    lVar4 = (long)*(int *)(lVar1 + 0x380);
    lVar3 = lVar1 + 0x240;
    func_0x004743e4(*(undefined8 *)(lVar3 + lVar4 * 8),&UNK_01c45fc1,0x49);
    if (s_________________________Users_no_01c39558[0] == '\0') {
      *(undefined8 *)(lVar3 + lVar4 * 8) = 0;
    }
    else {
      lVar2 = _strlen(
                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                     );
      lVar2 = func_0x019eb530(lVar2 + 1,0,0);
      *(long *)(lVar3 + lVar4 * 8) = lVar2;
      if (lVar2 != 0) {
        _strcpy(lVar2,
                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
               );
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      }
    }
    *(undefined4 *)(lVar1 + lVar4 * 4 + 0x2c0) = 0x84;
    lVar1 = lVar1 + 0x300;
    func_0x004743e4(*(undefined8 *)(lVar1 + lVar4 * 8),&UNK_01c45fc1,0x53);
    if (s_ossl_get_max_early_data_01c39682[0] == '\0') {
      *(undefined8 *)(lVar1 + lVar4 * 8) = 0;
    }
    else {
      lVar3 = _strlen("ossl_get_max_early_data");
      lVar3 = func_0x019eb530(lVar3 + 1,0,0);
      *(long *)(lVar1 + lVar4 * 8) = lVar3;
      if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a1805c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__strcpy_01f24f78)(lVar3,"ossl_get_max_early_data");
        return;
      }
    }
  }
  return;
}

