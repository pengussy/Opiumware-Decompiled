/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3d5844:e5f40aad6d
 */

ulong FUN_003d5844(undefined8 param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_78 [4];
  int iStack_74;
  ulong uStack_70;
  long lStack_68;
  
  lVar4 = func_0x00400364();
  if (lVar4 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_d2i_fp.c"
                    ,0x7d,"asn1_d2i_read_bio");
    func_0x004466b0(0xd,&UNK_00080007,0);
  }
  else {
    func_0x00446890();
    uVar12 = 0;
    uVar7 = 0;
    iVar13 = 0;
// more drops soon - github.com/pengussy
LAB_003d5890:
    do {
      uVar8 = 8;
      do {
        bVar1 = uVar8 < uVar12 - uVar7;
        uVar8 = uVar8 - (uVar12 - uVar7);
        if (bVar1) break;
        if ((CARRY8(uVar8,uVar12)) || (lVar5 = func_0x0040058c(lVar4,uVar8 + uVar12), lVar5 == 0)) {
          uVar11 = 0x8a;
          puVar9 = &UNK_00080007;
          goto LAB_003d5aa4;
        }
        uVar2 = func_0x003e9754(param_1,*(long *)(lVar4 + 8) + uVar12,uVar8);
        if ((uVar12 == uVar7) && ((int)uVar2 < 1)) {
          puVar9 = (undefined *)0x8e;
          uVar11 = 0x90;
          goto LAB_003d5aa4;
        }
        if ((int)uVar2 < 1) break;
        uVar6 = (ulong)uVar2;
        bVar1 = CARRY8(uVar12,uVar6);
        uVar12 = uVar12 + uVar6;
        if (bVar1) {
          puVar9 = (undefined *)0x9b;
/*  reversing this took months of machine time  */
          uVar11 = 0x96;
          goto LAB_003d5aa4;
        }
      } while (uVar6 < uVar8);
      lVar5 = *(long *)(lVar4 + 8) + uVar7;
      lStack_68 = lVar5;
      if (uVar12 == uVar7) goto LAB_003d5ad0;
      uVar2 = func_0x003dd2e4(&lStack_68,&uStack_70,&iStack_74,auStack_78,
                              (long)((int)uVar12 - (int)uVar7));
      if ((uVar2 >> 7 & 1) != 0) {
        uVar3 = func_0x00445ba8();
        uVar14 = 0x7fffff;
        if (0x7fffffff < uVar3) {
          uVar14 = 0x7fffffff;
        }
        if ((uVar14 & uVar3) != 0x9b) goto LAB_003d5ad0;
        func_0x004468d8();
        func_0x00446890();
      }
      uVar7 = (lStack_68 - lVar5) + uVar7;
      if ((uVar2 & 1) != 0) {
        if (iVar13 == -1) {
          puVar9 = (undefined *)0x7b;
          uVar11 = 0xb4;
          goto LAB_003d5aa4;
        }
        iVar13 = iVar13 + 1;
        goto LAB_003d5890;
      }
      if (((iVar13 == 0) || (uStack_70 != 0)) || (iStack_74 != 0)) {
        uVar8 = uStack_70 - (uVar12 - uVar7);
        if (uVar12 - uVar7 <= uStack_70 && uVar8 != 0) {
          puVar9 = (undefined *)0x9b;
          uVar11 = 200;
          if ((uVar8 >> 0x1f != 0) || (CARRY8(uVar12,uVar8))) goto LAB_003d5aa4;
/* wm:unlicensed copy if this notice is missing */
          uVar6 = 0x4000;
          do {
            uVar10 = uVar8;
            if (uVar6 <= uVar8) {
              uVar10 = uVar6;
            }
            lVar5 = func_0x0040058c(lVar4,uVar10 + uVar12);
            if (lVar5 == 0) {
              uVar11 = 0xd6;
              puVar9 = &UNK_00080007;
              goto LAB_003d5aa4;
            }
            uVar8 = uVar8 - uVar10;
            do {
              uVar2 = func_0x003e9754(param_1,*(long *)(lVar4 + 8) + uVar12,uVar10);
              if ((int)uVar2 < 1) {
                puVar9 = (undefined *)0x8e;
                uVar11 = 0xdd;
                goto LAB_003d5aa4;
              }
              uVar12 = uVar12 + uVar2;
              uVar10 = uVar10 - uVar2;
            } while (uVar10 != 0);
            uVar6 = uVar6 << (ulong)(uVar6 < 0x3fffffff);
          } while (uVar8 != 0);
        }
        bVar1 = CARRY8(uStack_70,uVar7);
        uVar7 = uStack_70 + uVar7;
        if (bVar1) {
          puVar9 = (undefined *)0x9b;
          uVar11 = 0xec;
          goto LAB_003d5aa4;
        }
        if (iVar13 == 0) break;
        goto LAB_003d5890;
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
/*  chat: discord.gg/sdkhDjTex  */
    if (uVar7 >> 0x1f == 0) {
      *param_2 = lVar4;
      func_0x00446a74();
      return uVar7;
    }
    puVar9 = (undefined *)0x9b;
    uVar11 = 0xf8;
LAB_003d5aa4:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_d2i_fp.c"
                    ,uVar11,"asn1_d2i_read_bio");
    func_0x004466b0(0xd,puVar9,0);
LAB_003d5ad0:
    func_0x00446a74();
    func_0x00400378(lVar4);
  }
  return 0xffffffff;
}

