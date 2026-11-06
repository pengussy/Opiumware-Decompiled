/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34a740:2dab02b125
 */

undefined8 FUN_0034a740(long param_1,undefined8 *param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  int iVar2;
  char *pcStack_38;
  char *pcStack_30;
  ulong uStack_28;
  
  uVar1 = param_4 - param_5;
  if ((((param_4 < param_5 || uVar1 == 0) || ((long)uVar1 < 2)) ||
      ((uVar1 & 0x7ffffffffffffffe) == 2)) ||
     ((pcStack_30 = (char *)(param_3 + param_5), pcStack_30[1] != '\0' || *pcStack_30 != '\0' ||
      (uStack_28 = (ulong)((uint)(*(ushort *)(pcStack_30 + 2) >> 8) |
                          (*(ushort *)(pcStack_30 + 2) & 0xff00ff) << 8), uVar1 - 4 < uStack_28))))
  {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x4c7,"ech_get_outer_sni");
    func_0x003a9570(param_1,0x32,0x6e,0);
    return 0;
  }
  pcStack_38 = pcStack_30 + 4;
  iVar2 = FUN_003a4928(param_1,&pcStack_38,0,0,0);
  if (iVar2 == 1) {
    func_0x004743e4(*(undefined8 *)(param_1 + 0xb70),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x4cd);
    *(undefined8 *)(param_1 + 0xb70) = *(undefined8 *)(param_1 + 0xa20);
    *param_2 = *(undefined8 *)(param_1 + 0xa20);
    *(undefined8 *)(param_1 + 0xa20) = 0;
    *(undefined4 *)(param_1 + 0xd18) = 0;
    return 1;
  }
  return 0;
// WM - proprietary - see LICENSE - do not sell
}

