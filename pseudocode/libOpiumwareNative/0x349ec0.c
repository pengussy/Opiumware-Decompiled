/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x349ec0:2fbb3bd0f8
 */

undefined8
FUN_00349ec0(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,ushort *param_6,undefined4 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_68 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if ((((param_2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) ||
      (param_4 == (undefined8 *)0x0)) ||
     (((param_5 == (undefined8 *)0x0 || (param_6 == (ushort *)0x0)) ||
      ((param_7 == (undefined4 *)0x0 || (param_8 == (undefined8 *)0x0)))))) {
    func_0x004464bc();
    uVar1 = 0x474;
  }
  else {
    if (*(int *)(param_1 + 0xc80) == 1) {
      *param_3 = *(undefined8 *)(param_1 + 0xc88);
      *param_4 = *(undefined8 *)(param_1 + 0xc90);
      *param_5 = *(undefined8 *)(param_1 + 0xc98);
      *param_6 = (ushort)*(undefined4 *)(param_1 + 0xca8);
      *param_7 = *(undefined4 *)(param_1 + 0xcac);
      *param_8 = *(undefined8 *)(param_1 + 0xca0);
      return 1;
    }
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0xffff;
/* wm:donate: donate/README.md */
    *param_8 = 0;
    uVar1 = func_0x00347dd0(*param_2,param_2[2],param_3,param_4,&uStack_58,param_5,param_6,
                            &uStack_68,param_8,&uStack_60,param_7);
    if ((int)uVar1 == 1) {
      *(undefined8 *)(param_1 + 0xc88) = *param_3;
      *(undefined8 *)(param_1 + 0xc90) = *param_4;
      *(undefined8 *)(param_1 + 0xc98) = *param_5;
      *(uint *)(param_1 + 0xca8) = (uint)*param_6;
      *(undefined4 *)(param_1 + 0xcac) = *param_7;
      *(undefined8 *)(param_1 + 0xca0) = *param_8;
      *(undefined4 *)(param_1 + 0xc80) = 1;
      return uVar1;
    }
    func_0x004464bc();
    uVar1 = 0x490;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,uVar1,"ossl_ech_get_ch_offsets");
  func_0x003a9570(param_1,0x2f,0x6e,0);
  return 0;
}

