/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x38b028:8a464c6d33
 */

undefined8 FUN_0038b028(long *param_1,long *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[8];
  if ((uVar2 == 0) || (uVar3 = param_1[9], (uVar3 < param_3 || param_1 != param_2) || uVar2 < uVar3)
     ) {
    func_0x019e5a9c(param_1);
    return 0xfffffffe;
  }
  if (uVar3 == param_3) {
    iVar1 = (**(code **)(*param_1 + 0x28))(uVar2,*(undefined8 *)(*param_1 + 0x30));
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 7) = 0x50;
/* unlicensed copy if this notice is missing */
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                      ,0x1b1,"quic_release_record");
      func_0x004466b0(0x14,&UNK_000c0103,0);
      *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
      return 0xfffffffe;
    }
    param_1[8] = 0;
    uVar3 = param_1[9];
  }
  param_1[9] = uVar3 - param_3;
  return 1;
}

