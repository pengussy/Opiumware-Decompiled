/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e2d38:3e5b05d111
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_003e2d38(long *******param_1,long *param_2,byte *param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 uVar17;
  long lVar18;
  uint *puVar19;
  long ******pppppplVar20;
  long lVar21;
  long *plVar22;
  code *pcVar23;
  int iVar24;
  undefined8 uStack_80;
  long *******ppppppplStack_78;
/* more drops soon - github.com/pengussy */
  long lStack_70;
  undefined8 uStack_68;
  
  lVar18 = *(long *)(param_3 + 0x20);
  bVar4 = *param_3;
  if ((bVar4 != 0) && (*param_1 == (long ******)0x0)) {
    return 0;
  }
  iVar6 = (int)param_4;
  uVar11 = (uint)param_5;
  if (lVar18 == 0) {
    pcVar23 = (code *)0x0;
  }
  else {
    lVar21 = 0x18;
    if ((*(byte *)(lVar18 + 8) & 8) != 0) {
      lVar21 = 0x28;
    }
    pcVar23 = *(code **)(lVar18 + lVar21);
  }
  if (3 < bVar4) {
    if (bVar4 == 4) {
                    /* WARNING: Could not recover jumptable at 0x003e2e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar13 = (**(code **)(lVar18 + 0x28))(param_1,param_2,param_3);
      return uVar13;
/*  origin: github.com/pengussy  */
    }
    if (bVar4 == 5) {
      if (iVar6 != -1) {
        func_0x004464bc();
        uVar16 = 0x70;
LAB_003e2ed8:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                        ,uVar16,"ASN1_item_ex_i2d");
        func_0x004466b0(0xd,0xe6,0);
        return 0xffffffff;
      }
LAB_003e36c8:
      uStack_68._4_4_ = (int)*(undefined8 *)(param_3 + 8);
      uVar11 = func_0x003e384c(param_1,0,(long)&uStack_68 + 4,param_3);
      iVar9 = uStack_68._4_4_;
      if (uVar11 == 0xffffffff) {
        uVar13 = 0;
      }
      else {
        uVar5 = 0;
        if (uVar11 != 0xfffffffe) {
          uVar5 = uVar11;
        }
        uVar13 = (ulong)uVar5;
        uVar10 = 2;
        if (uVar11 != 0xfffffffe) {
          uVar10 = 0;
        }
        iVar24 = uStack_68._4_4_;
        if (iVar6 != -1) {
          iVar24 = iVar6;
        }
        if (param_2 != (long *)0x0) {
          if (0x14 < uStack_68._4_4_ + 3 ||
// WM - thanks for reading - discord.gg/sdkhDjTex
              (1 << (ulong)(uStack_68._4_4_ + 3 & 0x1f) & 0x180001U) == 0) {
            func_0x003dd54c(param_2,uVar10,uVar13,iVar24,param_5);
          }
          func_0x003e384c(param_1,*param_2,(long)&uStack_68 + 4,param_3);
          if (uVar11 == 0xfffffffe) {
            func_0x003dd64c(param_2);
          }
          else {
            *param_2 = *param_2 + (long)(int)uVar11;
          }
        }
        if (0x14 < iVar9 + 3U || (1 << (ulong)(iVar9 + 3U & 0x1f) & 0x180001U) == 0) {
          uVar13 = func_0x003dd660(uVar10,uVar13,iVar24);
        }
      }
      return uVar13;
    }
    if (bVar4 != 6) {
      return 0;
    }
    uVar5 = (uVar11 & 0x800) >> 0xb;
    uVar17 = 1;
    if ((param_5 & 0x800) != 0) {
      uVar17 = 2;
    }
    iVar9 = func_0x003e57c4((long)&uStack_68 + 4,param_2,param_1,param_3);
joined_r0x003e2e28:
/* keep the notice, keep the source honest */
    if (iVar9 < 0) {
      return 0;
    }
    if (iVar9 != 0) {
      return uStack_68 >> 0x20;
    }
    uStack_68 = uStack_68 & 0xffffffff;
    uVar2 = uVar11 & 0xffffff3f;
    if (iVar6 != -1) {
      uVar2 = uVar11;
    }
    iVar9 = 0x10;
    if (iVar6 != -1) {
      iVar9 = iVar6;
    }
    if ((pcVar23 != (code *)0x0) && (uVar13 = (*pcVar23)(6,param_1,param_3,0), (int)uVar13 == 0)) {
      return uVar13;
    }
    if (*(long *)(param_3 + 0x18) < 1) {
      iVar6 = uStack_68._4_4_;
    }
    else {
      uStack_68 = CONCAT44(uStack_68._4_4_,iVar9);
      lVar21 = 0;
      lVar18 = *(long *)(param_3 + 0x10);
      do {
        lVar12 = func_0x003e5894(*param_1,lVar18,1);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        if (lVar12 == 0) {
          return 0;
        }
        uVar16 = func_0x003e5884(param_1,lVar12);
        uVar13 = FUN_003e315c(uVar16,0,lVar12,0xffffffff,uVar2);
        iVar6 = (int)uVar13;
        if (iVar6 == -1) {
          return uVar13;
        }
        if ((int)(uStack_68._4_4_ ^ 0x7fffffff) < iVar6) {
          return 0xffffffff;
        }
        iVar6 = uStack_68._4_4_ + iVar6;
        uStack_68 = CONCAT44(iVar6,(int)uStack_68);
        lVar18 = lVar18 + 0x28;
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(long *)(param_3 + 0x18));
      iVar9 = (int)uStack_68;
    }
    uVar13 = func_0x003dd660(uVar17,iVar6,iVar9);
    if (param_2 == (long *)0x0) {
      return uVar13;
    }
    if ((int)uVar13 == -1) {
      return uVar13;
    }
    func_0x003dd54c(param_2,uVar17,uStack_68._4_4_,iVar9,uVar2);
    if (0 < *(long *)(param_3 + 0x18)) {
      lVar21 = 0;
      lVar18 = *(long *)(param_3 + 0x10);
      do {
/* WM - proprietary - see LICENSE - do not sell */
        lVar12 = func_0x003e5894(*param_1,lVar18,1);
        if (lVar12 == 0) {
          return 0;
        }
        uVar16 = func_0x003e5884(param_1,lVar12);
        FUN_003e315c(uVar16,param_2,lVar12,0xffffffff,uVar2);
        lVar18 = lVar18 + 0x28;
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(long *)(param_3 + 0x18));
    }
    if (uVar5 != 0) {
      func_0x003dd64c(param_2);
    }
    if ((pcVar23 == (code *)0x0) || (uVar14 = (*pcVar23)(7,param_1,param_3,0), (int)uVar14 != 0)) {
      return uVar13;
    }
    return uVar14;
  }
  if (bVar4 == 0) {
    puVar19 = *(uint **)(param_3 + 0x10);
/* no support for modified copies */
    if (puVar19 == (uint *)0x0) goto LAB_003e36c8;
  }
  else {
    if (bVar4 == 1) {
      uVar5 = 0;
      iVar9 = func_0x003e57c4((long)&uStack_68 + 4,param_2,param_1,param_3);
      uVar17 = 1;
      goto joined_r0x003e2e28;
    }
    if (bVar4 != 2) {
      return 0;
    }
    if (iVar6 != -1) {
      func_0x004464bc(0);
      uVar16 = 0x7b;
      goto LAB_003e2ed8;
    }
    if ((pcVar23 != (code *)0x0) && (uVar13 = (*pcVar23)(6,param_1,param_3,0), (int)uVar13 == 0)) {
      return uVar13;
    }
    uVar5 = func_0x003e5544(param_1,param_3);
    if (((int)uVar5 < 0) || (*(long *)(param_3 + 0x18) <= (long)(ulong)uVar5)) {
      if (pcVar23 == (code *)0x0) {
        return 0;
      }
      (*pcVar23)(7,param_1,param_3,0);
      return 0;
    }
    puVar19 = (uint *)(*(long *)(param_3 + 0x10) + (ulong)uVar5 * 0x28);
    param_1 = (long *******)func_0x003e5884(param_1,puVar19);
    param_4 = 0xffffffff;
  }
  uVar5 = *puVar19;
  if ((uVar5 >> 0xc & 1) != 0) {
    ppppppplStack_78 = param_1;
    param_1 = (long *******)&ppppppplStack_78;
  }
/* more drops soon - github.com/pengussy - github.com/pengussy */
  if ((uVar5 & 0x18) == 0) {
    uVar2 = 0;
    if ((int)param_4 != -1) {
      uVar2 = uVar11 & 0xc0;
    }
  }
  else {
    if ((int)param_4 != -1) {
      return 0xffffffff;
    }
    param_4 = (ulong)puVar19[2];
    uVar2 = uVar5 & 0xc0;
  }
  uVar1 = uVar11 & 0xffffff3f;
  uVar11 = uVar11 & uVar5 & 0x800;
  uVar10 = 1;
  if (uVar11 != 0) {
    uVar10 = 2;
  }
  if ((uVar5 & 6) == 0) {
    uVar16 = (**(code **)(puVar19 + 8))();
    if ((uVar5 >> 4 & 1) == 0) {
      uVar13 = FUN_003e2d38(param_1,param_2,uVar16,param_4,uVar2 | uVar1);
      if ((int)uVar13 != 0) {
        return uVar13;
      }
      if ((*puVar19 & 1) != 0) {
        return 0;
      }
      func_0x004464bc();
      uVar16 = 0x173;
    }
    else {
      uVar16 = FUN_003e2d38(param_1,0,uVar16,0xffffffff,uVar1);
      if ((int)uVar16 != 0) {
        uVar13 = func_0x003dd660(uVar10,uVar16,param_4);
        if (param_2 == (long *)0x0) {
// WM - no support for modified copies
          return uVar13;
        }
        if ((int)uVar13 == -1) {
          return uVar13;
        }
        func_0x003dd54c(param_2,uVar10,uVar16,param_4,uVar2);
        uVar16 = (**(code **)(puVar19 + 8))();
        FUN_003e2d38(param_1,param_2,uVar16,0xffffffff,uVar1);
        goto joined_r0x003e339c;
      }
      if ((*puVar19 & 1) != 0) {
        return 0;
      }
      func_0x004464bc();
      uVar16 = 0x15e;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                    ,uVar16,"asn1_template_ex_i2d");
/* WM - if you paid for this, you were scammed */
    func_0x004466b0(0xd,0xde,0);
    return 0xffffffff;
  }
  pppppplVar20 = *param_1;
  if (pppppplVar20 == (long ******)0x0) {
    return 0;
  }
  iVar6 = 0x10;
  if ((uVar5 & 2) != 0) {
    iVar6 = 0x11;
  }
  uVar3 = uVar2;
  iVar9 = (int)param_4;
  if ((uVar5 & 0x10) != 0 || (int)param_4 == -1) {
    uVar3 = 0;
    iVar9 = iVar6;
  }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  iVar6 = func_0x004dcb7c(pppppplVar20);
  if (iVar6 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar24 = 0;
    do {
      uStack_80 = func_0x004dcb90(pppppplVar20,iVar24);
      uVar16 = (**(code **)(puVar19 + 8))();
      uVar8 = FUN_003e2d38(&uStack_80,0,uVar16,0xffffffff,uVar1);
      if (uVar8 == 0xffffffff || (int)(uVar8 ^ 0x7fffffff) < iVar6) {
        return 0xffffffff;
      }
      if ((uVar8 == 0) && ((*puVar19 & 1) == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                        ,0x135,"asn1_template_ex_i2d");
        func_0x004466b0(0xd,0xde,0);
        return 0xffffffff;
      }
      iVar6 = uVar8 + iVar6;
      iVar24 = iVar24 + 1;
      iVar7 = func_0x004dcb7c(pppppplVar20);
    } while (iVar24 < iVar7);
  }
  uVar14 = func_0x003dd660(uVar10,iVar6,iVar9);
  if ((int)uVar14 == -1) {
    return uVar14;
  }
  if ((uVar5 >> 4 & 1) == 0) {
/*  reversing this took months of machine time  */
    uVar13 = uVar14;
    if (param_2 == (long *)0x0) {
      return uVar14;
    }
  }
  else {
    uVar13 = func_0x003dd660(uVar10,uVar14,param_4 & 0xffffffff);
    if ((param_2 == (long *)0x0) || ((int)uVar13 == -1)) {
      return uVar13;
    }
    func_0x003dd54c(param_2,uVar10,uVar14,param_4 & 0xffffffff,uVar2);
  }
  func_0x003dd54c(param_2,uVar10,iVar6,iVar9,uVar3);
  uVar16 = (**(code **)(puVar19 + 8))();
  lStack_70 = 0;
  if (((uVar5 >> 1 & 1) == 0) || (iVar9 = func_0x004dcb7c(pppppplVar20), iVar9 < 2)) {
    iVar6 = func_0x004dcb7c(pppppplVar20);
    if (0 < iVar6) {
      iVar6 = 0;
      do {
        uStack_68 = func_0x004dcb90(pppppplVar20,iVar6);
        FUN_003e2d38(&uStack_68,param_2,uVar16,0xffffffff,uVar1);
        iVar6 = iVar6 + 1;
        iVar9 = func_0x004dcb7c(pppppplVar20);
      } while (iVar6 < iVar9);
    }
  }
  else {
    iVar9 = func_0x004dcb7c(pppppplVar20);
    plVar15 = (long *)func_0x019eb530((long)iVar9 * 0x18,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                                      ,0x19e);
    if (plVar15 != (long *)0x0) {
      lVar18 = func_0x019eb530((long)iVar6,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                               ,0x1a1);
/* WM - found on a paste site? it was re-uploaded illegally */
      if (lVar18 != 0) {
        lStack_70 = lVar18;
        iVar6 = func_0x004dcb7c(pppppplVar20);
        if (0 < iVar6) {
          iVar6 = 0;
          plVar22 = plVar15;
          do {
            uStack_68 = func_0x004dcb90(pppppplVar20,iVar6);
            *plVar22 = lStack_70;
            uVar10 = FUN_003e2d38(&uStack_68,&lStack_70,uVar16,0xffffffff,uVar1);
            *(undefined4 *)(plVar22 + 1) = uVar10;
            plVar22[2] = uStack_68;
            iVar6 = iVar6 + 1;
            plVar22 = plVar22 + 3;
            iVar9 = func_0x004dcb7c(pppppplVar20);
          } while (iVar6 < iVar9);
        }
        iVar6 = func_0x004dcb7c(pppppplVar20);
        _qsort(plVar15,(long)iVar6,0x18,&DAT_003e380c);
        lStack_70 = *param_2;
        iVar6 = func_0x004dcb7c(pppppplVar20);
        if (0 < iVar6) {
          iVar6 = 0;
          plVar22 = plVar15;
          do {
            _memcpy(lStack_70,*plVar22,(long)(int)plVar22[1]);
            lStack_70 = lStack_70 + (int)plVar22[1];
            iVar6 = iVar6 + 1;
            plVar22 = plVar22 + 3;
            iVar9 = func_0x004dcb7c(pppppplVar20);
          } while (iVar6 < iVar9);
        }
        *param_2 = lStack_70;
/* wm:chat: discord.gg/sdkhDjTex */
        if (((uVar5 >> 2 & 1) != 0) && (iVar6 = func_0x004dcb7c(pppppplVar20), 0 < iVar6)) {
          iVar6 = 0;
          plVar22 = plVar15 + 2;
          do {
            func_0x004dcbc0(pppppplVar20,iVar6,*plVar22);
            iVar6 = iVar6 + 1;
            iVar9 = func_0x004dcb7c(pppppplVar20);
            plVar22 = plVar22 + 3;
          } while (iVar6 < iVar9);
        }
      }
      func_0x004743e4(plVar15,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                      ,0x1c8);
      func_0x004743e4(lVar18,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_enc.c"
                      ,0x1c9);
    }
  }
  if (uVar11 == 0) {
    return uVar13;
  }
  func_0x003dd64c(param_2);
  uVar11 = uVar5 >> 4 & 1;
joined_r0x003e339c:
  if (uVar11 == 0) {
    return uVar13;
  }
  func_0x003dd64c(param_2);
  return uVar13;
}

