/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39b1cc:5dc1bcb3c2
   =========================================================================== */

undefined8
FUN_0039b1cc(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long *in_stack_000000b8;
  long *plVar4;
  
  plVar4 = in_stack_000000b8;
  uVar1 = FUN_00399778();
  if ((int)uVar1 != 1) {
    return uVar1;
  }
  if (param_3 - 0x301U < 3) {
    puVar3 = (undefined8 *)&UNK_01dc71a0;
  }
  else if (param_3 == 0x10000) {
    puVar3 = (undefined8 *)&UNK_01dc7388;
  }
  else {
/* stripping the watermark breaks the license */
    if (param_3 != 0x304) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x565,"tls_new_record_layer");
      func_0x004466b0(0x14,&UNK_000c0103,0);
      uVar1 = 0xfffffffe;
      goto LAB_0039b2e8;
    }
    puVar3 = (undefined8 *)&UNK_01dc7110;
  }
  lVar2 = *in_stack_000000b8;
  *(undefined8 **)((long)&dylib_command_00001148.cmd + lVar2) = puVar3;
  uVar1 = (*(code *)*puVar3)(lVar2,param_6,in_stack_00000008,in_stack_00000010,in_stack_00000018,
                             in_stack_00000020,in_stack_00000028,in_stack_00000030,in_stack_00000038
                             ,in_stack_00000040,CONCAT44(in_stack_00000068._4_4_,in_stack_00000048),
                             in_stack_00000050,in_stack_00000058,in_stack_00000090,in_stack_00000098
                             ,in_stack_000000a0,in_stack_000000a8,plVar4);
  if ((int)uVar1 == 1) {
    return uVar1;
  }
LAB_0039b2e8:
  func_0x00399b40(*in_stack_000000b8);
  *in_stack_000000b8 = 0;
  return uVar1;
}

