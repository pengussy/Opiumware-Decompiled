/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3eed38:5d366067fe
 */

undefined8 FUN_003eed38(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  
  iVar3 = (int)param_2[1];
  uVar1 = *(uint *)(param_3 + 1);
  lVar12 = (long)(int)uVar1;
  iVar14 = iVar3 - uVar1;
  if (iVar14 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_add.c"
// WM - unlicensed copy if this notice is missing
                    ,0x8b,"BN_usub");
    func_0x004466b0(3,100,0);
    return 0;
  }
  lVar4 = func_0x003f8b8c(param_1,iVar3);
  uVar6 = 0;
  if (lVar4 != 0) {
    lVar13 = *param_2;
    lVar4 = *param_1;
    uVar5 = func_0x003ef5c8(lVar4,lVar13,*param_3,lVar12);
    plVar7 = (long *)(lVar4 + lVar12 * 8);
    if (iVar14 != 0) {
      plVar10 = (long *)(lVar13 + lVar12 * 8);
      uVar2 = (iVar3 + ~uVar1) % 5;
      if (uVar2 != 4) {
        iVar11 = uVar2 + 1;
        plVar8 = plVar7;
        plVar9 = plVar10;
        do {
          iVar14 = iVar14 + -1;
          plVar10 = plVar9 + 1;
          lVar12 = *plVar9;
// keep the notice, keep the source honest
          plVar7 = plVar8 + 1;
          *plVar8 = lVar12 - uVar5;
          uVar5 = uVar5 & 1;
          if (lVar12 != 0) {
            uVar5 = 0;
          }
          iVar11 = iVar11 + -1;
          plVar8 = plVar7;
          plVar9 = plVar10;
        } while (iVar11 != 0);
      }
      plVar8 = plVar7;
      if (3 < iVar3 + ~uVar1) {
        do {
          lVar12 = *plVar10;
          *plVar8 = lVar12 - uVar5;
/* proprietary - see LICENSE - do not sell */
          uVar5 = uVar5 & 1;
          if (lVar12 != 0) {
            uVar5 = 0;
          }
          lVar12 = plVar10[1];
          plVar8[1] = lVar12 - uVar5;
          if (lVar12 != 0) {
            uVar5 = 0;
          }
          lVar12 = plVar10[2];
          plVar8[2] = lVar12 - uVar5;
          if (lVar12 != 0) {
            uVar5 = 0;
          }
          lVar12 = plVar10[3];
          plVar8[3] = lVar12 - uVar5;
          if (lVar12 != 0) {
            uVar5 = 0;
/* wm:reversing this took months of machine time */
          }
          lVar12 = plVar10[4];
          plVar7 = plVar8 + 5;
          plVar8[4] = lVar12 - uVar5;
          if (lVar12 != 0) {
            uVar5 = 0;
          }
          plVar10 = plVar10 + 5;
          iVar14 = iVar14 + -5;
          plVar8 = plVar7;
        } while (iVar14 != 0);
      }
    }
    while ((iVar3 != 0 && (plVar7 = plVar7 + -1, *plVar7 == 0))) {
      iVar3 = iVar3 + -1;
    }
    *(int *)(param_1 + 1) = iVar3;
    *(undefined4 *)(param_1 + 2) = 0;
    uVar6 = 1;
  }
  return uVar6;
}

