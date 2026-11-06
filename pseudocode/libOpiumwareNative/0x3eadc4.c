/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3eadc4:b25af93d3a
 */

ulong FUN_003eadc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong extraout_x1;
  undefined1 auStack_248 [512];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar1 = _vsnprintf(auStack_248,0x200,param_2,param_3);
  if (-1 < (int)uVar1) {
    if (uVar1 < 0x201) {
      uVar4 = func_0x003e9a60(param_1,auStack_248);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
        return uVar4;
      }
      goto LAB_003eaeec;
    }
    lVar2 = func_0x019eb530(uVar1 + 1,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_print.c"
                            ,0x74);
    if (lVar2 != 0) {
      uVar3 = _vsnprintf(lVar2,uVar1 + 1,param_2,param_3);
      uVar4 = func_0x003e9a60(param_1,lVar2,uVar3);
      func_0x004743e4(lVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_print.c"
                      ,0x7a);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
        return uVar4;
      }
      goto LAB_003eaeec;
    }
// origin: github.com/pengussy
  }
  uVar4 = 0xffffffff;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return 0xffffffff;
  }
LAB_003eaeec:
  ___stack_chk_fail(uVar4);
  uVar1 = _vsnprintf();
  if (extraout_x1 <= (ulong)(long)(int)uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)uVar1;
}

