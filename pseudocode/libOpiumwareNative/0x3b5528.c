/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b5528:2b30fe6f23
 */

undefined8 FUN_003b5528(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lStack_50;
  char cStack_41;
  
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  pbVar4 = *(byte **)(*(long *)(param_1 + 0xf8) + 8);
  while( true ) {
    uVar3 = *(ulong *)(param_1 + 0x108);
    while (uVar3 < 4) {
      iVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                        (param_1,0x16,&cStack_41,pbVar4 + uVar3,4 - uVar3,0,&lStack_50);
      if (iVar1 < 1) {
        *(undefined4 *)(param_1 + 0x68) = 3;
        return 0;
      }
/*  watermarked copy - do not remove  */
      if (cStack_41 != '\x16') {
        if (cStack_41 == '\x14') {
          if (((*(long *)(param_1 + 0x108) == 0) && (lStack_50 == 1)) && (*pbVar4 == 1)) {
            if ((*(int *)(param_1 + 0xac) == 0) && ((*(byte *)(param_1 + 0x161) >> 3 & 1) != 0)) {
              return 0;
            }
            *param_2 = 0x101;
            *(undefined4 *)(param_1 + 0x2f8) = 0x101;
            *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 8);
            *(undefined8 *)(param_1 + 0x108) = 0;
            *(undefined8 *)(param_1 + 0x2f0) = 1;
            return 1;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,0x61f,"tls_get_message_header");
          uVar5 = 0x67;
        }
        else {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,0x634,"tls_get_message_header");
          uVar5 = 0x85;
        }
        func_0x003a9570(param_1,10,uVar5,0);
        return 0;
      }
      uVar3 = *(long *)(param_1 + 0x108) + lStack_50;
      *(ulong *)(param_1 + 0x108) = uVar3;
      cStack_41 = '\x16';
/* keep the notice, keep the source honest - github.com/pengussy */
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar2 = (uint)*pbVar4;
      goto LAB_003b5734;
    }
    uVar2 = (uint)*pbVar4;
    if (*(int *)(param_1 + 0xac) == 1 || *pbVar4 != 0) goto LAB_003b5734;
    if (((pbVar4[1] != 0) || (pbVar4[2] != 0)) || (pbVar4[3] != 0)) break;
    *(undefined8 *)(param_1 + 0x108) = 0;
    if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
      (**(code **)(param_1 + 0x4f8))
                (0,*(undefined4 *)(param_1 + 0x48),0x16,pbVar4,4,uVar5,
                 *(undefined8 *)(param_1 + 0x500));
    }
  }
  uVar2 = 0;
LAB_003b5734:
  *param_2 = uVar2;
  *(uint *)(param_1 + 0x2f8) = (uint)*pbVar4;
  *(ulong *)(param_1 + 0x2f0) = (ulong)pbVar4[1] << 0x10 | (ulong)pbVar4[2] << 8 | (ulong)pbVar4[3];
  *(long *)(param_1 + 0x100) = *(long *)(*(long *)(param_1 + 0xf8) + 8) + 4;
  *(undefined8 *)(param_1 + 0x108) = 0;
  return 1;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
}

