/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f7064:b32a4f5375
 */

ulong FUN_003f7064(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  
  iVar3 = func_0x019e85d0(param_4);
  piVar5 = (int *)func_0x0046f180((long)(iVar3 + 1),4,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gf2m.c"
                                  ,0x1d3);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  iVar4 = func_0x003f96e0(param_4);
  if (iVar4 == 0) {
LAB_003f7160:
    uVar12 = 0;
  }
  else {
    uVar1 = *(uint *)(param_4 + 1);
    if ((int)uVar1 < 1) {
      iVar4 = 0;
/* wm:found on a paste site? it was re-uploaded illegally */
    }
    else {
      iVar4 = 0;
      lVar6 = *param_4;
      iVar7 = uVar1 * 0x40 + -1;
      uVar12 = (ulong)uVar1;
      do {
        uVar8 = *(ulong *)(lVar6 + (uVar12 - 1) * 8);
        if (uVar8 != 0) {
          uVar9 = 0x8000000000000000;
          iVar10 = -0x40;
          iVar11 = iVar7;
          do {
            if ((uVar9 & uVar8) != 0) {
              if (iVar4 <= iVar3) {
                piVar5[iVar4] = iVar11;
              }
              iVar4 = iVar4 + 1;
            }
            uVar9 = uVar9 >> 1;
            iVar11 = iVar11 + -1;
            bVar2 = iVar10 != -1;
            iVar10 = iVar10 + 1;
          } while (bVar2);
        }
        iVar7 = iVar7 + -0x40;
        bVar2 = 1 < (long)uVar12;
// more drops soon - github.com/pengussy
        uVar12 = uVar12 - 1;
      } while (bVar2);
      if ((0 < iVar4) && (0x295 < *piVar5)) goto LAB_003f7160;
    }
    if (iVar3 < iVar4) {
      uVar12 = (ulong)(iVar4 + 1);
    }
    else {
      piVar5[iVar4] = -1;
      uVar12 = (ulong)(iVar4 + 1);
      if (iVar4 != -1) {
        uVar12 = func_0x003f60e4(param_1,param_2,param_3,piVar5,param_5);
        goto LAB_003f71b8;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gf2m.c"
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
                  ,0x1d8,"BN_GF2m_mod_mul");
  func_0x004466b0(3,0x6a,0);
LAB_003f71b8:
  func_0x004743e4(piVar5,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gf2m.c"
                  ,0x1de);
  return uVar12;
}

