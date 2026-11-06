/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f11e8:a310d77443
   =========================================================================== */

long FUN_003f11e8(long *param_1,char *param_2)

{
  bool bVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_2 != (char *)0x0) {
    if (*param_2 == '\0') {
      return 0;
    }
/* WM - unlicensed copy if this notice is missing */
    lVar10 = 0;
    bVar3 = *param_2 == '-';
    if (bVar3) {
      param_2 = param_2 + 1;
    }
    uVar5 = 0x3f;
    do {
      iVar4 = func_0x00472024((long)*param_2,0x10);
      if (iVar4 == 0) {
        if (lVar10 == 0) {
          return 0;
        }
        lVar7 = (ulong)bVar3 - lVar10;
        if (param_1 == (long *)0x0) {
          return lVar7;
        }
        plVar8 = (long *)*param_1;
        if (plVar8 == (long *)0x0) {
          plVar8 = (long *)func_0x003f8b2c();
          if (plVar8 == (long *)0x0) {
            return 0;
          }
        }
        else {
          iVar4 = func_0x003f8a9c(plVar8,2);
          if (iVar4 != 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
                            ,0x97,"BN_hex2bn");
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            func_0x004466b0(3,&UNK_00080106,0);
            return 0;
          }
          func_0x003f95cc(plVar8);
        }
        if ((0x1fffffef < (ulong)-lVar10 && lVar10 != -0x1ffffff0) ||
           ((*(int *)((long)plVar8 + 0xc) < (int)(uVar5 >> 6) &&
            (lVar6 = func_0x019e875c(plVar8), lVar6 == 0)))) {
          if (*param_1 == 0) {
            func_0x003f8aa8(plVar8);
            return 0;
          }
          return 0;
        }
        uVar11 = -lVar10;
        lVar10 = 0;
        do {
          uVar12 = 0;
          uVar2 = uVar11;
          if (0xf < uVar11) {
            uVar2 = 0x10;
          }
/*  chat: discord.gg/sdkhDjTex  */
          uVar13 = uVar2 + 1;
          pcVar9 = param_2 + -uVar2;
          do {
            uVar5 = func_0x00475d4c(*pcVar9);
            uVar12 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) | uVar12 << 4;
            uVar13 = uVar13 - 1;
            pcVar9 = pcVar9 + 1;
          } while (1 < uVar13);
          lVar6 = lVar10 + 1;
          *(ulong *)(*plVar8 + lVar10 * 8) = uVar12;
          param_2 = param_2 + -0x10;
          uVar2 = uVar11 - 0x10;
          bVar1 = 0xf < (long)uVar11;
          uVar11 = uVar2;
          lVar10 = lVar6;
        } while (uVar2 != 0 && bVar1);
        *(int *)(plVar8 + 1) = (int)lVar6;
        func_0x019e8c64(plVar8);
        *param_1 = (long)plVar8;
        if ((int)plVar8[1] == 0) {
          return lVar7;
        }
        *(uint *)(plVar8 + 2) = (uint)bVar3;
        return lVar7;
/* origin: github.com/pengussy */
      }
      param_2 = param_2 + 1;
      lVar10 = lVar10 + -1;
      uVar5 = uVar5 + 4;
    } while (lVar10 != -0x20000000);
  }
  return 0;
}

