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
 *  file-id: 0x34a05c:28e618fb14
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0034a05c(long param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  short *psVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  short *psVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lStack_c8;
  short sStack_ba;
  long lStack_b8;
  long lStack_b0;
/*  watermarked copy - do not remove  */
  ulong auStack_a8 [5];
  long lStack_80;
  ulong uStack_78;
  short *psStack_70;
  int iStack_64;
  
  iStack_64 = -1;
  psStack_70 = (short *)0x0;
  auStack_a8[2] = 0;
  auStack_a8[3] = 0;
  auStack_a8[0] = 0;
  auStack_a8[1] = 0;
  lStack_b8 = 0;
  lStack_b0 = 0;
  sStack_ba = -1;
  lStack_c8 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 == (long *)0x0) || (param_3 == (long *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x7ab,"ossl_ech_early_decrypt");
    uVar6 = 0x50;
LAB_0034a150:
    func_0x003a9570(param_1,uVar6,0x6e,0);
    return 0;
  }
/* reversing this took months of machine time */
  uVar6 = func_0x00349ec0(param_1,param_2,auStack_a8 + 2,auStack_a8 + 1,auStack_a8,&sStack_ba,
                          &iStack_64,&lStack_b0);
  uVar11 = auStack_a8[0];
  if ((int)uVar6 == 0) {
    return uVar6;
  }
  if (auStack_a8[0] == 0) {
    return 1;
  }
  if (sStack_ba != -499) {
    return 1;
  }
  if (iStack_64 == 1) {
    func_0x004464bc(1);
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x7b9,"ossl_ech_early_decrypt");
    uVar6 = 0x2f;
    goto LAB_0034a150;
  }
  *(undefined4 *)(param_1 + 0xc18) = 1;
  *(undefined2 *)(param_1 + 0xc20) = 0xfe0d;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  bVar3 = *(int *)(param_1 + 0x8d0) == 1;
  uVar12 = param_2[2];
  lVar13 = *param_2;
  uVar8 = (ulong)*(byte *)(lVar13 + auStack_a8[2]);
  *(ulong *)(param_1 + 0x948) = uVar8;
  if ((uVar8 < 0x21) && (auStack_a8[2] + 1 + uVar8 <= uVar12)) {
    _memcpy(param_1 + 0x928,lVar13 + auStack_a8[2] + 1);
    if (lStack_b0 != 0) {
      iVar5 = func_0x0034a740(param_1,&lStack_c8,lVar13,uVar12);
      if (iVar5 != 0) {
        if (lStack_c8 == 0) {
          func_0x004464bc();
          uVar6 = 0x7ce;
          goto LAB_0034a1e4;
        }
        uVar11 = auStack_a8[0];
        goto LAB_0034a264;
      }
      goto LAB_0034a1fc;
    }
LAB_0034a264:
/*  reversing this took months of machine time  */
    if (uVar12 - 4 < uVar11) {
      func_0x004464bc();
      uVar6 = 0x7d6;
LAB_0034a2b8:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,uVar6,"ossl_ech_early_decrypt");
      uVar6 = 0x32;
      goto LAB_0034a1f0;
    }
    uVar1 = *(ushort *)(lVar13 + uVar11 + 2);
    uVar8 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
    if ((uVar12 - 4) - uVar11 < uVar8) {
      func_0x004464bc();
      uVar6 = 0x7dc;
      goto LAB_0034a2b8;
    }
    auStack_a8[4] = lVar13 + uVar11 + 4;
    lStack_80 = auStack_a8[4];
    uStack_78 = uVar8;
    iVar5 = func_0x0034a850(param_1,auStack_a8 + 4,&psStack_70,&lStack_b8);
    psVar2 = psStack_70;
    if (iVar5 == 0) {
      func_0x004743e4(0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x869);
      if (psVar2 != (short *)0x0) goto LAB_0034a528;
LAB_0034a560:
      lVar17 = 0;
      goto LAB_0034a214;
    }
    lVar17 = auStack_a8[0] + lStack_b8 + 6;
    lVar15 = *(long *)(psStack_70 + 0xc);
// reversing this took months of machine time
    lStack_b8 = lVar17;
    if (uVar12 < (ulong)(lVar15 + lVar17)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x7ef,"ossl_ech_early_decrypt");
      uVar6 = 0x32;
      puVar9 = (undefined *)0x6e;
LAB_0034a50c:
      func_0x003a9570(param_1,uVar6,puVar9,0);
      lVar7 = 0;
LAB_0034a518:
      func_0x004743e4(lVar7,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x869);
LAB_0034a528:
      func_0x004743e4(*(undefined8 *)(psVar2 + 8),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x4ac);
      func_0x004743e4(*(undefined8 *)(psVar2 + 0x10),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x4ad);
      func_0x004743e4(psVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x86c);
      goto LAB_0034a560;
    }
    lVar7 = func_0x00475ac0(lVar13,uVar12,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x7f2);
    if (lVar7 == 0) {
      func_0x004464bc();
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x7f4,"ossl_ech_early_decrypt");
      uVar6 = 0x50;
      puVar9 = &UNK_000c0103;
      goto LAB_0034a50c;
    }
    _bzero(lVar7 + lVar17,lVar15);
    *(undefined4 *)(param_1 + 0xc3c) = 0xffffffff;
    plVar14 = *(long **)(param_1 + 0xb60);
    if (plVar14 == (long *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x7fd,"ossl_ech_early_decrypt");
      func_0x003a9570(param_1,0x2f,0x6e,0);
      goto LAB_0034a518;
    }
    if ((*plVar14 == 0) || (iVar5 = func_0x004dcb7c(), iVar5 == 0)) {
      lVar17 = 0;
    }
    else {
      iVar16 = 0;
      do {
        lVar17 = func_0x004dcb90(*plVar14,iVar16);
        if ((char)psVar2[2] == *(char *)(lVar17 + 0x31)) {
          uVar11 = (ulong)*(uint *)(lVar17 + 0x20);
          bVar4 = false;
          if (*(uint *)(lVar17 + 0x20) != 0) {
            psVar10 = (short *)(*(long *)(lVar17 + 0x28) + 4);
            do {
              uVar11 = uVar11 - 1;
              if (psVar10[-1] == *psVar2) {
                bVar4 = *psVar10 == psVar2[1];
              }
              else {
                bVar4 = false;
              }
            } while ((!bVar4) && (psVar10 = psVar10 + 3, uVar11 != 0));
/*  origin: github.com/pengussy  */
          }
        }
        else {
          bVar4 = false;
        }
        iVar16 = iVar16 + 1;
      } while ((iVar16 != iVar5) && (!bVar4));
      if (bVar4) {
        lVar17 = func_0x0034acb8(param_1,lVar17,psVar2,uVar12,lVar7,bVar3,auStack_a8 + 3);
        if (lVar17 != 0) goto LAB_0034a5b8;
        *(undefined4 *)(param_1 + 0xc3c) = 1;
      }
      if ((*(byte *)(param_1 + 0x9b4) >> 6 & 1) != 0) {
        iVar16 = 0;
        do {
          uVar6 = func_0x004dcb90(*plVar14,iVar16);
          lVar17 = func_0x0034acb8(param_1,uVar6,psVar2,uVar12,lVar7,bVar3,auStack_a8 + 3);
          if (lVar17 != 0) {
/* WM - donate: donate/README.md */
            *(undefined4 *)(param_1 + 0xc3c) = 0;
            goto LAB_0034a5b8;
          }
          iVar16 = iVar16 + 1;
        } while (iVar5 != iVar16);
      }
      lVar17 = 0;
    }
LAB_0034a5b8:
    func_0x004743e4(lVar7,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x82c);
    *(undefined4 *)(param_1 + 0xc1c) = 1;
    *(undefined4 *)(param_1 + 0xc3c) = 1;
    *(undefined4 *)(param_1 + 0xc30) = 0;
    if (lVar17 != 0) {
      *(undefined4 *)(param_1 + 0xc3c) = 0;
      *(undefined4 *)(param_1 + 0xc30) = 1;
    }
    func_0x0034b050(psVar2);
    func_0x004743e4(psVar2,
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x845);
    psStack_70 = (short *)0x0;
    if (*(int *)(param_1 + 0xc3c) == 1) {
      func_0x004743e4(lVar17,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x848);
      return 1;
    }
    iVar5 = func_0x0034b09c(param_1,lVar13,uVar12,lVar17,auStack_a8[3]);
    if (iVar5 != 0) {
      func_0x004743e4(lVar17,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,0x850);
      uVar11 = *(ulong *)(param_1 + 0xbb0);
      if ((long)uVar11 < 0) {
        func_0x004464bc();
        uVar6 = 0x859;
      }
      else {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        lVar13 = *(long *)(param_1 + 0xba8);
        *param_3 = lVar13;
        param_3[1] = lVar13;
        param_3[2] = uVar11;
        if (uVar11 < 4) {
          func_0x004464bc();
          uVar6 = 0x85e;
        }
        else {
          *param_3 = lVar13 + 4;
          param_3[2] = uVar11 - 4;
          iVar5 = func_0x0034b4ec(param_1,lVar13,uVar11,0);
          if (iVar5 != 0) {
            return 1;
          }
          func_0x004464bc();
          uVar6 = 0x864;
        }
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                      ,uVar6,"ossl_ech_early_decrypt");
      uVar6 = 0x50;
      puVar9 = &UNK_000c0103;
      goto LAB_0034a1f4;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
// WM - keep the notice, keep the source honest
                    ,0x84d,"ossl_ech_early_decrypt");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  else {
    func_0x004464bc(1);
    uVar6 = 0x7c5;
LAB_0034a1e4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,uVar6,"ossl_ech_early_decrypt");
    uVar6 = 0x2f;
LAB_0034a1f0:
    puVar9 = (undefined *)0x6e;
LAB_0034a1f4:
    func_0x003a9570(param_1,uVar6,puVar9,0);
LAB_0034a1fc:
    lVar17 = 0;
  }
  func_0x004743e4(0,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,0x869);
/*  stripping the watermark breaks the license  */
LAB_0034a214:
  func_0x004743e4(lVar17,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,0x86e);
  return 0;
}

