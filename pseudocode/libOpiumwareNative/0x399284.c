/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x399284:ee19887817
 */

undefined8 FUN_00399284(long param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 uStack_21;
  
  uVar2 = *(int *)(param_2 + 4) - 0x15;
  if (uVar2 < 3) {
    if (*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20)
        != (code *)0x0) {
      uStack_21 = (undefined1)*(int *)(param_2 + 4);
      (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20))
                (0,*(undefined4 *)(param_1 + 0x14),0x101,&uStack_21,1,
                 *(undefined8 *)
                  ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x10));
      uVar2 = *(int *)(param_2 + 4) - 0x15;
    }
    if ((1 < uVar2) || (*(long *)(param_2 + 8) != 0)) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x424,"tls13_common_post_process_record");
    uVar1 = 0x10f;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,0x413,"tls13_common_post_process_record");
    uVar1 = 0x1bb;
  }
  func_0x00397da4(param_1,10,uVar1,0);
  return 0;
}

