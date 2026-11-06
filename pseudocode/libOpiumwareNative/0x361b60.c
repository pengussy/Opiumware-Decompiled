/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x361b60:492e378613
 */

void FUN_00361b60(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x398);
  *(int *)(param_1 + 0x398) = iVar1 + -1;
  LORelease();
  if (iVar1 == 1) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar1) {
    return;
  }
  func_0x0047320c(2,param_1,param_1 + 0x310);
  func_0x0046eb00(param_1 + 0x50,0x200);
  func_0x0046eb00(param_1 + 600,0x20);
  func_0x00506714(*(undefined8 *)(param_1 + 0x2c0));
  func_0x0045eb4c(*(undefined8 *)(param_1 + 0x2b8));
  func_0x004e4d60(*(undefined8 *)(param_1 + 0x2c8));
  func_0x004743e4(*(undefined8 *)(param_1 + 800),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x35d);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x328),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x35e);
/* donate: donate/README.md - github.com/pengussy */
  func_0x004743e4(*(undefined8 *)(param_1 + 0x2a0),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x360);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x2a8),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x361);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x360),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x364);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x348),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x366);
  func_0x004743e4(*(undefined8 *)(param_1 + 0x368),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x367);
  if (param_1 == 0) {
    return;
  }
  func_0x0046eb00();
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0047445c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)
            (param_1,
             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
             ,0x369);
  return;
}

