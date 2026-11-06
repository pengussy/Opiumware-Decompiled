/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x399378:7eabcf79d0
 */

undefined8
FUN_00399378(long param_1,long *param_2,undefined4 *param_3,undefined1 *param_4,long *param_5,
            undefined8 *param_6,undefined2 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  while( true ) {
    uVar2 = *(ulong *)(param_1 + 0xfd8);
    if (uVar2 < *(ulong *)(param_1 + 0xfd0)) {
      lVar3 = param_1 + uVar2 * 0x48;
      *(ulong *)(param_1 + 0xfd8) = uVar2 + 1;
      *param_2 = lVar3 + 0x6d0;
      *param_3 = *(undefined4 *)(lVar3 + 0x6d0);
      *param_4 = (char)*(undefined4 *)(lVar3 + 0x6d4);
      *param_5 = *(long *)(lVar3 + 0x6f0) + *(long *)(lVar3 + 0x6e8);
      *param_6 = *(undefined8 *)(lVar3 + 0x6d8);
      if (*(int *)(param_1 + 0x10) != 0) {
        *param_7 = *(undefined2 *)(lVar3 + 0x708);
/* WM - watermarked copy - do not remove */
        *param_8 = *(undefined8 *)(lVar3 + 0x70a);
      }
      return 1;
    }
    if (*(ulong *)(param_1 + 0xfe0) != *(ulong *)(param_1 + 0xfd0)) break;
    uVar1 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x28))(param_1);
    if ((int)uVar1 != 1) {
      return uVar1;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,0x43b,"tls_read_record");
  func_0x00397da4(param_1,0x50,0x141,0);
  return 0xfffffffe;
}

