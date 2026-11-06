/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3d65a0:bb8f71a3c8
 */

long FUN_003d65a0(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  int iStack_44;
  
  uVar2 = FUN_003d66dc(0,0,*param_2,param_3);
  if (uVar2 != 0) {
    if ((param_1 == (long *)0x0) || (lVar4 = *param_1, lVar4 == 0)) {
      lVar4 = func_0x003e53ec();
      if (lVar4 == 0) {
        return 0;
      }
      *(undefined4 *)(lVar4 + 4) = 2;
    }
    if ((uVar2 >> 0x1f == 0) && (iVar1 = func_0x003dd758(lVar4,0,uVar2), iVar1 != 0)) {
      FUN_003d66dc(*(undefined8 *)(lVar4 + 8),&iStack_44,*param_2,param_3);
      uVar3 = 0;
      if (iStack_44 != 0) {
        uVar3 = 0x100;
      }
      *(uint *)(lVar4 + 4) = *(uint *)(lVar4 + 4) & 0xfffffeff | uVar3;
      *param_2 = *param_2 + param_3;
      if (param_1 == (long *)0x0) {
        return lVar4;
      }
      *param_1 = lVar4;
      return lVar4;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_int.c"
                    ,0x140,"ossl_c2i_ASN1_INTEGER");
    func_0x004466b0(0xd,&UNK_0008000d,0);
// WM - found on a paste site? it was re-uploaded illegally
    if ((param_1 == (long *)0x0) || (*param_1 != lVar4)) {
      func_0x003e53f4(lVar4);
    }
  }
  return 0;
}

