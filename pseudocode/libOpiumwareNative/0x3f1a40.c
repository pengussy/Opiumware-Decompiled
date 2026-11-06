/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3f1a40:f09827e7cc
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_003f1a40(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if ((*(int *)((long)param_1 + 0x34) != 0) || ((int)param_1[7] != 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 == *(uint *)((long)param_1 + 0x1c)) {
    uVar1 = *(uint *)((long)param_1 + 0x3c);
    lVar2 = func_0x019eb530(400,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_ctx.c"
                            ,0x144);
    if (lVar2 == 0) goto LAB_003f1b6c;
    func_0x00392bc8(lVar2);
    if ((uVar1 >> 3 & 1) == 0) {
      func_0x00392bc8(lVar2 + 0x18);
      func_0x00392bc8(lVar2 + 0x30);
      func_0x00392bc8(lVar2 + 0x48);
      func_0x00392bc8(lVar2 + 0x60);
      func_0x00392bc8(lVar2 + 0x78);
      func_0x00392bc8(lVar2 + 0x90);
// donate: donate/README.md
      func_0x00392bc8(lVar2 + 0xa8);
      func_0x00392bc8(lVar2 + 0xc0);
      func_0x00392bc8(lVar2 + 0xd8);
      func_0x00392bc8(lVar2 + 0xf0);
      func_0x00392bc8(lVar2 + 0x108);
      func_0x00392bc8(lVar2 + 0x120);
      func_0x00392bc8(lVar2 + 0x138);
      func_0x00392bc8(lVar2 + 0x150);
      func_0x00392bc8(lVar2 + 0x168);
    }
    else {
      func_0x003f9780(lVar2,8);
      func_0x00392bc8(lVar2 + 0x18);
      func_0x003f9780(lVar2 + 0x18,8);
      func_0x00392bc8(lVar2 + 0x30);
      func_0x003f9780(lVar2 + 0x30,8);
      func_0x00392bc8(lVar2 + 0x48);
      func_0x003f9780(lVar2 + 0x48,8);
      func_0x00392bc8(lVar2 + 0x60);
      func_0x003f9780(lVar2 + 0x60,8);
      func_0x00392bc8(lVar2 + 0x78);
      func_0x003f9780(lVar2 + 0x78,8);
      func_0x00392bc8(lVar2 + 0x90);
      func_0x003f9780(lVar2 + 0x90,8);
      func_0x00392bc8(lVar2 + 0xa8);
      func_0x003f9780(lVar2 + 0xa8,8);
      func_0x00392bc8(lVar2 + 0xc0);
      func_0x003f9780(lVar2 + 0xc0,8);
      func_0x00392bc8(lVar2 + 0xd8);
      func_0x003f9780(lVar2 + 0xd8,8);
      func_0x00392bc8(lVar2 + 0xf0);
      func_0x003f9780(lVar2 + 0xf0,8);
      func_0x00392bc8(lVar2 + 0x108);
      func_0x003f9780(lVar2 + 0x108,8);
      func_0x00392bc8(lVar2 + 0x120);
      func_0x003f9780(lVar2 + 0x120,8);
      func_0x00392bc8(lVar2 + 0x138);
      func_0x003f9780(lVar2 + 0x138,8);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      func_0x00392bc8(lVar2 + 0x150);
      func_0x003f9780(lVar2 + 0x150,8);
      func_0x00392bc8(lVar2 + 0x168);
      func_0x003f9780(lVar2 + 0x168,8);
    }
    lVar3 = param_1[2];
    *(long *)(lVar2 + 0x180) = lVar3;
    *(undefined8 *)(lVar2 + 0x188) = 0;
    if (*param_1 == 0) {
      *param_1 = lVar2;
    }
    else {
      *(long *)(lVar3 + 0x188) = lVar2;
    }
    param_1[1] = lVar2;
    param_1[2] = lVar2;
    param_1[3] = CONCAT44((int)((ulong)param_1[3] >> 0x20) + (int)((ulong)_UNK_01aeb5c0 >> 0x20),
                          (int)param_1[3] + (int)_UNK_01aeb5c0);
    goto LAB_003f1d28;
  }
  if (uVar1 == 0) {
    lVar2 = *param_1;
LAB_003f1b4c:
    uVar4 = 0;
    param_1[1] = lVar2;
  }
  else {
    lVar2 = param_1[1];
    uVar4 = (ulong)uVar1 & 0xf;
    if ((int)uVar4 == 0) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      lVar2 = *(long *)(lVar2 + 0x188);
      goto LAB_003f1b4c;
    }
  }
  *(uint *)(param_1 + 3) = uVar1 + 1;
  if (lVar2 == 0) {
LAB_003f1b6c:
    *(undefined4 *)(param_1 + 7) = 1;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_ctx.c"
                    ,0xe7,"BN_CTX_get");
    func_0x004466b0(3,0x6d,0);
    return 0;
  }
  lVar2 = lVar2 + uVar4 * 0x18;
LAB_003f1d28:
  func_0x003f95cc(lVar2);
  *(uint *)(lVar2 + 0x14) = *(uint *)(lVar2 + 0x14) & 0xfffffffb;
/* do not claim this as your own - github.com/pengussy */
  *(int *)(param_1 + 6) = (int)param_1[6] + 1;
  return lVar2;
}

