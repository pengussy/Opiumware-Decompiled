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
 *  file-id: 0x39df90:588faa5c03
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039df90(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0xd58) == 0) {
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) &&
       ((0x303 < *(int *)(param_1 + 0x9bc) ||
        ((iVar1 = func_0x0035370c(param_1,9,0,0x301,0), iVar1 != 0 &&
         (*(int *)(param_1 + 0x9bc) < 0x302)))))) {
      return 2;
    }
    if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) || (*(long *)(param_1 + 0xb60) == 0)
        ) || ((*(int *)(param_1 + 0xc3c) != 0 ||
              (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
      iVar1 = func_0x019ec0a0(param_2,0xff01,2);
      if (((iVar1 != 0) &&
          ((iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0 &&
           (iVar1 = func_0x019ec0a0(param_2,0,1), iVar1 != 0)))) &&
         (iVar1 = func_0x00476494(param_2), iVar1 != 0)) {
        return 1;
      }
      uVar2 = 0x3a;
LAB_0039e0f0:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,uVar2,"tls_construct_ctos_renegotiate");
/* wm:origin: github.com/pengussy */
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
  }
  else if ((((param_3 != 0x80) || (*(int *)(param_1 + 0x78) != 0)) ||
           (*(long *)(param_1 + 0xb60) == 0)) ||
          ((*(int *)(param_1 + 0xc3c) != 0 ||
           (uVar2 = func_0x0039b9e0(param_1,param_2), 1 < (uint)uVar2)))) {
    iVar1 = func_0x019ec0a0(param_2,0xff01,2);
    if (((iVar1 == 0) ||
        ((iVar1 = func_0x019eba0c(param_2,2), iVar1 == 0 ||
         (iVar1 = func_0x004766ec(param_2,param_1 + 0x420,*(undefined8 *)(param_1 + 0x460),1),
         iVar1 == 0)))) || (iVar1 = func_0x00476494(param_2), iVar1 == 0)) {
      uVar2 = 0x4b;
      goto LAB_0039e0f0;
    }
// unlicensed copy if this notice is missing
    uVar2 = 1;
  }
  return uVar2;
}

