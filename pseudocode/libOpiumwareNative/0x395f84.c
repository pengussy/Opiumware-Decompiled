/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x395f84:4ad8aa431d
 */

undefined8
FUN_00395f84(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,undefined2 param_7,undefined8 param_8,undefined8 param_9,
            undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
            undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
            undefined4 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
            undefined8 param_22)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000b8;
  long *plVar6;
  
  plVar6 = in_stack_000000b8;
  uVar2 = FUN_00399778();
  if ((int)uVar2 != 1) {
    return uVar2;
  }
  uVar2 = func_0x0034d324();
  *(undefined8 *)
   ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
   *in_stack_000000b8 + 0x40) = uVar2;
  lVar3 = func_0x0034d324();
  lVar4 = *in_stack_000000b8;
  *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
// unlicensed copy if this notice is missing
           lVar4 + 0x48) = lVar3;
  if ((*(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                lVar4 + 0x40) == 0) || (lVar3 == 0)) {
    func_0x00396160();
    *in_stack_000000b8 = 0;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                    ,0x296,"dtls_new_record_layer");
    func_0x004466b0(0x14,&UNK_00080014,0);
    return 0xfffffffe;
  }
  *(undefined4 *)(lVar4 + 0x10) = 1;
  *(undefined2 *)(lVar4 + 0x30) = param_7;
  pcVar1 = "/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + lVar4 + 8;
  pcVar1[0] = '\x01';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  pcVar1[3] = '\0';
  if (param_3 < 0xfeff) {
    if ((param_3 != 0x100) && (param_3 != 0xfefd)) {
LAB_00396050:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                      ,0x2a9,"dtls_new_record_layer");
      func_0x004466b0(0x14,&UNK_000c0103,0);
      uVar2 = 0xfffffffe;
      goto LAB_00396128;
    }
LAB_003960e0:
    puVar5 = (undefined8 *)&UNK_01dc7230;
  }
  else {
    if (param_3 != 0x1ffff) {
      if (param_3 != 0xfeff) goto LAB_00396050;
      goto LAB_003960e0;
    }
    puVar5 = (undefined8 *)&UNK_01dc7418;
  }
  *(undefined8 **)((long)&dylib_command_00001148.cmd + lVar4) = puVar5;
  uVar2 = (*(code *)*puVar5)(lVar4,param_6,param_10,param_11,param_12,param_13,param_14,param_15,
                             param_16,param_17,CONCAT44(param_22._4_4_,param_18),param_19,param_20,
                             in_stack_00000090,in_stack_00000098,in_stack_000000a0,in_stack_000000a8
                             ,plVar6);
  if ((int)uVar2 == 1) {
    return uVar2;
/* wm:unlicensed copy if this notice is missing */
  }
LAB_00396128:
  func_0x00396160(*in_stack_000000b8);
  *in_stack_000000b8 = 0;
  return uVar2;
}

