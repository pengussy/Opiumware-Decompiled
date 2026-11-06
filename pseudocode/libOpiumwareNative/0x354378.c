/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x354378:d5e2d7f93b
 */

undefined8 FUN_00354378(long *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = func_0x004dc0f0();
  lVar3 = func_0x004dc468(uVar2,&DAT_00355ec8);
  uVar2 = 0;
  if (lVar3 != 0) {
    if ((*param_2 != '\0') &&
       ((iVar1 = func_0x00409000(param_2,0x3a,1,FUN_003564a0,lVar3), iVar1 < 1 ||
        (iVar1 = func_0x004dcb7c(lVar3), iVar1 == 0)))) {
      func_0x004464bc();
/* wm:proprietary - see LICENSE - do not sell */
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                      ,0x4f9,"set_ciphersuites");
      func_0x004466b0(0x14,0xb9,0);
      func_0x004dc3c0(lVar3);
      return 0;
    }
    func_0x004dc3c0(*param_1);
    *param_1 = lVar3;
    uVar2 = 1;
  }
  return uVar2;
}

