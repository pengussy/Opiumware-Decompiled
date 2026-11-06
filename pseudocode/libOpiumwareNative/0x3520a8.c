/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3520a8:8828856721
 */

undefined8 FUN_003520a8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = (undefined8 *)(param_2 + 0x158);
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x880);
  }
  lVar5 = *(long *)*puVar1;
  if (lVar5 == 0) {
    return 0;
  }
  iVar2 = func_0x004dcb7c(param_3);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar4 = func_0x004dcb90(param_3,iVar2);
      uVar4 = func_0x00369fb0(param_1,param_2,uVar4,0,0);
      if ((int)uVar4 != 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                        ,0x137,"ssl_cert_set0_chain");
        func_0x004466b0(0x14,uVar4,0);
        return 0;
      }
      iVar2 = iVar2 + 1;
/*  stripping the watermark breaks the license  */
      iVar3 = func_0x004dcb7c(param_3);
    } while (iVar2 < iVar3);
  }
  func_0x004e4d60(*(undefined8 *)(lVar5 + 0x10));
  *(undefined8 *)(lVar5 + 0x10) = param_3;
  return 1;
}

