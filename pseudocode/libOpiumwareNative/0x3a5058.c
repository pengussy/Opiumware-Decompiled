/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3a5058:27c3d48ec9
 */

undefined8 FUN_003a5058(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ushort *puVar5;
  ushort *puStack_38;
  long lStack_30;
  ulong uStack_28;
  
  if (1 < (ulong)param_2[2]) {
    puVar5 = (ushort *)*param_2 + 1;
    uVar1 = *(ushort *)*param_2;
    uVar4 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
    if (param_2[2] - 2U == uVar4) {
      lStack_30 = param_2[1];
      *param_2 = (long)puVar5 + uVar4;
      param_2[2] = 0;
      puStack_38 = puVar5;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      uStack_28 = uVar4;
      if (uVar4 != 0) {
        if ((*(int *)(param_1 + 0x78) != 0) && (*(int *)(param_1 + 0x508) != 0)) {
          return 1;
        }
        iVar2 = func_0x003681f4(param_1,&puStack_38,0);
        if (iVar2 != 0) {
          return 1;
        }
        func_0x004464bc();
        uVar3 = 0x148;
        goto LAB_003a50e4;
      }
    }
  }
  func_0x004464bc();
  uVar3 = 0x13d;
LAB_003a50e4:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar3,"tls_parse_ctos_sig_algs");
  func_0x003a9570(param_1,0x32,0x6e,0);
  return 0;
/*  if you paid for this, you were scammed  */
}

