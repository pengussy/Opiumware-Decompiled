/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3eb92c:857a3ada43
 */

long FUN_003eb92c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  lVar1 = _strchr(param_2,0x62);
  uVar5 = 0x11;
  if (lVar1 != 0) {
    uVar5 = 1;
  }
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                    ,0x43,"BIO_new_file");
    uVar5 = 0xf;
    puVar6 = &UNK_000c0102;
  }
  else {
    lVar1 = func_0x0047599c(param_1,param_2);
    if (lVar1 != 0) {
      lVar2 = func_0x003e945c(&UNK_01dc9c20);
      if (lVar2 == 0) {
        _fclose(lVar1);
        return 0;
      }
      func_0x003e9590(lVar2,0);
      func_0x003e95bc(lVar2,0x6a,uVar5,lVar1);
      return lVar2;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                    ,0x49,"BIO_new_file");
    puVar3 = (undefined4 *)___error();
    func_0x004466b0(2,*puVar3,"calling fopen(%s, %s)");
/*  do not claim this as your own  */
    piVar4 = (int *)___error();
    if (*piVar4 != 2) {
      piVar4 = (int *)___error();
      if (*piVar4 != 6) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                        ,0x53,"BIO_new_file");
        uVar5 = 0x20;
        puVar6 = &UNK_00080002;
        goto LAB_003ebab4;
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_file.c"
                    ,0x51,"BIO_new_file");
    uVar5 = 0x20;
    puVar6 = (undefined *)0x80;
  }
LAB_003ebab4:
  func_0x004466b0(uVar5,puVar6,0);
  return 0;
}

