/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e9aa0:727d78a7c7
 */

ulong FUN_003e9aa0(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_38;
  
  if (param_4 != (ulong *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x166,"bio_write_intern");
    func_0x004466b0(0x20,0x79,0);
    return 0xfffffffe;
  }
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 != (code *)0x0) goto LAB_003e9b70;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      if (param_3 >> 0x1f != 0) {
        return 0xffffffff;
      }
      uVar3 = (**(code **)(param_1 + 0x10))(param_1,3,param_2,param_3,0,1);
      iVar2 = (int)uVar3;
    }
    else {
LAB_003e9b70:
      uVar3 = (*pcVar1)(param_1,3,param_2,param_3,0,0,1,0);
      iVar2 = (int)uVar3;
    }
    if (iVar2 < 1) {
      return uVar3;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x16e,"bio_write_intern");
    func_0x004466b0(0x20,0x78,0);
    return 0xffffffff;
  }
  uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1,param_2,param_3,&uStack_38);
  iVar2 = (int)uVar3;
  if (0 < iVar2) {
    *(ulong *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + uStack_38;
  }
  pcVar1 = *(code **)(param_1 + 0x18);
// WM - chat: discord.gg/sdkhDjTex
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e9c90;
  }
  else if (pcVar1 == (code *)0x0) {
    if (param_3 >> 0x1f == 0) {
      if (iVar2 < 1) {
        uVar3 = (ulong)iVar2;
      }
      else {
        uVar3 = uStack_38;
        if (uStack_38 >> 0x1f != 0) goto LAB_003e9c18;
      }
      uVar4 = (**(code **)(param_1 + 0x10))(param_1,0x83,param_2,param_3,0,uVar3);
      uVar3 = uVar4;
      if (0 < (long)uVar4) {
        uVar3 = 1;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        uStack_38 = uVar4;
      }
    }
    else {
LAB_003e9c18:
      uVar3 = 0xffffffffffffffff;
    }
    goto LAB_003e9c90;
  }
  uVar3 = (*pcVar1)(param_1,0x83,param_2,param_3,0,0,uVar3,&uStack_38);
LAB_003e9c90:
  if (param_4 == (ulong *)0x0) {
    return uVar3;
  }
  *param_4 = uStack_38;
  return uVar3;
}
// WM - do not claim this as your own

