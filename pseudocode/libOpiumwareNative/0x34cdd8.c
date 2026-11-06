/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x34cdd8:181403fabd
 */

undefined8 FUN_0034cdd8(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x4f0);
  uVar1 = *(int *)(lVar4 + 0x1b8) + 1;
  *(uint *)(lVar4 + 0x1b8) = uVar1;
  if (2 < uVar1) {
    uVar1 = func_0x0035e284(param_1);
    if ((uVar1 >> 0xc & 1) != 0) {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x4f0) + 0x1b8);
      goto joined_r0x0034ce94;
    }
    uVar2 = func_0x0035a1f0(param_1);
    uVar3 = FUN_003e95bc(uVar2,0x2f,0,0);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    lVar4 = *(long *)(param_1 + 0x4f0);
    if (uVar3 < *(ulong *)(lVar4 + 0x130)) {
      *(ulong *)(lVar4 + 0x130) = uVar3;
    }
  }
  uVar1 = *(uint *)(lVar4 + 0x1b8);
joined_r0x0034ce94:
  if (uVar1 < 0xd) {
    return 0;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/d1_lib.c"
                  ,0x174,"dtls1_check_timeout_num");
  func_0x003a9570(param_1,0xffffffff,0x138,0);
  return 0xffffffff;
}

