/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e315c:3da977362b
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003e315c(long *******param_1,long *param_2,uint *param_3,ulong param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long *plVar13;
  long lVar14;
  long ******pppppplVar15;
  long *plVar16;
  int iVar17;
  undefined8 uStack_80;
  long *******ppppppplStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar4 = *param_3;
  if ((uVar4 >> 0xc & 1) != 0) {
    ppppppplStack_78 = param_1;
    param_1 = (long *******)&ppppppplStack_78;
  }
  if ((uVar4 & 0x18) == 0) {
    uVar5 = 0;
/* reversing this took months of machine time */
    if ((int)param_4 != -1) {
      uVar5 = param_5 & 0xc0;
    }
  }
  else {
    if ((int)param_4 != -1) {
      return 0xffffffff;
    }
    param_4 = (ulong)param_3[2];
    uVar5 = uVar4 & 0xc0;
  }
  uVar1 = param_5 & 0xffffff3f;
  uVar2 = param_5 & uVar4 & 0x800;
  uVar10 = 1;
  if (uVar2 != 0) {
    uVar10 = 2;
  }
  if ((uVar4 & 6) == 0) {
    uVar11 = (**(code **)(param_3 + 8))();
    if ((uVar4 >> 4 & 1) == 0) {
      uVar11 = func_0x003e2d38(param_1,param_2,uVar11,param_4,uVar5 | uVar1);
      if ((int)uVar11 != 0) {
        return uVar11;
      }
      if ((*param_3 & 1) != 0) {
        return 0;
      }
      func_0x004464bc();
      uVar11 = 0x173;
    }
    else {
      uVar11 = func_0x003e2d38(param_1,0,uVar11,0xffffffff,uVar1);
      if ((int)uVar11 != 0) {
        uVar12 = func_0x003dd660(uVar10,uVar11,param_4);
        if (param_2 == (long *)0x0) {
          return uVar12;
        }
        if ((int)uVar12 == -1) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
          return uVar12;
        }
        func_0x003dd54c(param_2,uVar10,uVar11,param_4,uVar5);
        uVar11 = (**(code **)(param_3 + 8))();
        func_0x003e2d38(param_1,param_2,uVar11,0xffffffff,uVar1);
        goto joined_r0x003e339c;
      }
      if ((*param_3 & 1) != 0) {
        return 0;
      }
      func_0x004464bc();
      uVar11 = 0x15e;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                    ,uVar11,"asn1_template_ex_i2d");
    func_0x004466b0(0xd,0xde,0);
    return 0xffffffff;
  }
  pppppplVar15 = *param_1;
  if (pppppplVar15 == (long ******)0x0) {
    return 0;
  }
  iVar6 = 0x10;
  if ((uVar4 & 2) != 0) {
    iVar6 = 0x11;
  }
/* WM - keep the notice, keep the source honest */
  uVar3 = uVar5;
  iVar9 = (int)param_4;
  if ((uVar4 & 0x10) != 0 || (int)param_4 == -1) {
    uVar3 = 0;
    iVar9 = iVar6;
  }
  iVar6 = func_0x004dcb7c(pppppplVar15);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar17 = 0;
    do {
      uStack_80 = func_0x004dcb90(pppppplVar15,iVar17);
      uVar11 = (**(code **)(param_3 + 8))();
      uVar8 = func_0x003e2d38(&uStack_80,0,uVar11,0xffffffff,uVar1);
      if (uVar8 == 0xffffffff || (int)(uVar8 ^ 0x7fffffff) < iVar6) {
        return 0xffffffff;
      }
      if ((uVar8 == 0) && ((*param_3 & 1) == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                        ,0x135,"asn1_template_ex_i2d");
        func_0x004466b0(0xd,0xde,0);
        return 0xffffffff;
      }
      iVar6 = uVar8 + iVar6;
      iVar17 = iVar17 + 1;
      iVar7 = func_0x004dcb7c(pppppplVar15);
    } while (iVar17 < iVar7);
  }
  uVar11 = func_0x003dd660(uVar10,iVar6,iVar9);
  if ((int)uVar11 == -1) {
    return uVar11;
  }
  if ((uVar4 >> 4 & 1) == 0) {
    uVar12 = uVar11;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    if (param_2 == (long *)0x0) {
      return uVar11;
    }
  }
  else {
    uVar12 = func_0x003dd660(uVar10,uVar11,param_4 & 0xffffffff);
    if ((param_2 == (long *)0x0) || ((int)uVar12 == -1)) {
      return uVar12;
    }
    func_0x003dd54c(param_2,uVar10,uVar11,param_4 & 0xffffffff,uVar5);
  }
  func_0x003dd54c(param_2,uVar10,iVar6,iVar9,uVar3);
  uVar11 = (**(code **)(param_3 + 8))();
  lStack_70 = 0;
  if (((uVar4 >> 1 & 1) == 0) || (iVar9 = func_0x004dcb7c(pppppplVar15), iVar9 < 2)) {
    iVar6 = func_0x004dcb7c(pppppplVar15);
    if (0 < iVar6) {
      iVar6 = 0;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      do {
        lStack_68 = func_0x004dcb90(pppppplVar15,iVar6);
        func_0x003e2d38(&lStack_68,param_2,uVar11,0xffffffff,uVar1);
        iVar6 = iVar6 + 1;
        iVar9 = func_0x004dcb7c(pppppplVar15);
      } while (iVar6 < iVar9);
    }
  }
  else {
    iVar9 = func_0x004dcb7c(pppppplVar15);
    plVar13 = (long *)func_0x019eb530((long)iVar9 * 0x18,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                                      ,0x19e);
    if (plVar13 != (long *)0x0) {
      lVar14 = func_0x019eb530((long)iVar6,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                               ,0x1a1);
      if (lVar14 != 0) {
        lStack_70 = lVar14;
        iVar6 = func_0x004dcb7c(pppppplVar15);
        if (0 < iVar6) {
          iVar6 = 0;
          plVar16 = plVar13;
          do {
            lStack_68 = func_0x004dcb90(pppppplVar15,iVar6);
            *plVar16 = lStack_70;
            uVar10 = func_0x003e2d38(&lStack_68,&lStack_70,uVar11,0xffffffff,uVar1);
            *(undefined4 *)(plVar16 + 1) = uVar10;
            plVar16[2] = lStack_68;
            iVar6 = iVar6 + 1;
            plVar16 = plVar16 + 3;
            iVar9 = func_0x004dcb7c(pppppplVar15);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          } while (iVar6 < iVar9);
        }
        iVar6 = func_0x004dcb7c(pppppplVar15);
        _qsort(plVar13,(long)iVar6,0x18,&DAT_003e380c);
        lStack_70 = *param_2;
        iVar6 = func_0x004dcb7c(pppppplVar15);
        if (0 < iVar6) {
          iVar6 = 0;
          plVar16 = plVar13;
          do {
            _memcpy(lStack_70,*plVar16,(long)(int)plVar16[1]);
            lStack_70 = lStack_70 + (int)plVar16[1];
            iVar6 = iVar6 + 1;
            plVar16 = plVar16 + 3;
            iVar9 = func_0x004dcb7c(pppppplVar15);
          } while (iVar6 < iVar9);
        }
        *param_2 = lStack_70;
        if (((uVar4 >> 2 & 1) != 0) && (iVar6 = func_0x004dcb7c(pppppplVar15), 0 < iVar6)) {
/* no support for modified copies - github.com/pengussy */
          iVar6 = 0;
          plVar16 = plVar13 + 2;
          do {
            func_0x004dcbc0(pppppplVar15,iVar6,*plVar16);
            iVar6 = iVar6 + 1;
            iVar9 = func_0x004dcb7c(pppppplVar15);
            plVar16 = plVar16 + 3;
          } while (iVar6 < iVar9);
        }
      }
      func_0x004743e4(plVar13,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                      ,0x1c8);
      func_0x004743e4(lVar14,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                      ,0x1c9);
    }
  }
  if (uVar2 == 0) {
    return uVar12;
  }
  func_0x003dd64c(param_2);
  uVar2 = uVar4 >> 4 & 1;
joined_r0x003e339c:
  if (uVar2 == 0) {
    return uVar12;
  }
  func_0x003dd64c(param_2);
  return uVar12;
}

