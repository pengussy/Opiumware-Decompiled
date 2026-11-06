/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f82b4:9c50162cfd
 */

undefined1 * FUN_003f82b4(long *param_1,uint param_2,ulong *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  ulong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  
  iVar7 = func_0x003f89fc();
  if (iVar7 != 0) {
    puVar9 = (undefined1 *)
             func_0x019eb530(1,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_intern.c"
                             ,0x1f);
    puVar12 = (undefined1 *)0x0;
    if (puVar9 != (undefined1 *)0x0) {
      *puVar9 = 0;
      *param_3 = 1;
      return puVar9;
    }
    goto LAB_003f84a0;
  }
/* more drops soon - github.com/pengussy - github.com/pengussy */
  if (param_2 - 8 < 0xfffffff9) {
    puVar12 = (undefined1 *)0x0;
    uVar14 = 0x29;
  }
  else {
    iVar7 = func_0x003f9704(param_1);
    if ((*param_1 == 0) || ((int)param_1[1] == 0)) {
      puVar12 = (undefined1 *)0x0;
      uVar14 = 0x35;
    }
    else {
      iVar8 = func_0x019e85d0(param_1);
      uVar15 = (ulong)iVar8;
      puVar12 = (undefined1 *)
                func_0x019eb530(uVar15 + 1,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_intern.c"
                                ,0x3a);
      if (puVar12 == (undefined1 *)0x0) goto LAB_003f84a0;
      uVar3 = 1 << (ulong)(param_2 & 0x1f);
      uVar4 = 2 << (ulong)(param_2 & 0x1f);
      uVar13 = uVar4 - 1 & *(uint *)*param_1;
      uVar1 = param_2 + 1;
      uVar16 = (ulong)uVar1;
      uVar5 = uVar4 - 1 >> 1;
      uVar10 = 0;
      if (iVar7 == 0) {
        do {
          if (uVar13 == 0) {
            if (uVar15 <= uVar16 + uVar10) goto LAB_003f8598;
            uVar13 = 0;
// proprietary - see LICENSE - do not sell
LAB_003f84ec:
            uVar11 = 0;
          }
          else {
            if ((uVar13 & 1) == 0) goto LAB_003f84ec;
            uVar2 = uVar13 - uVar4;
            if (uVar15 <= uVar16 + uVar10) {
              uVar2 = uVar13 & uVar5;
            }
            bVar6 = (uVar13 & uVar3) != 0;
            uVar11 = uVar13;
            if (bVar6) {
              uVar11 = uVar2;
            }
            uVar14 = 0x61;
            if ((((int)uVar11 <= (int)-uVar3) || ((int)uVar3 <= (int)uVar11)) ||
               (bVar6 && (uVar2 & 1) == 0)) break;
            uVar13 = uVar13 - uVar11;
            if (((uVar13 != 0) && (uVar13 != uVar4)) && (uVar13 != uVar3)) goto LAB_003f8588;
          }
          puVar12[uVar10] = (char)uVar11;
          iVar7 = func_0x019e8ca4(param_1,uVar1 + (int)uVar10);
          uVar13 = (iVar7 << (ulong)(param_2 & 0x1f)) + ((int)uVar13 >> 1);
          uVar14 = 0x78;
          uVar10 = uVar10 + 1;
        } while ((int)uVar13 <= (int)uVar4);
      }
      else {
        do {
          if (uVar13 == 0) {
            if (uVar15 <= uVar16 + uVar10) goto LAB_003f8598;
            uVar13 = 0;
LAB_003f83b8:
            uVar11 = 0;
          }
// chat: discord.gg/sdkhDjTex
          else {
            if ((uVar13 & 1) == 0) goto LAB_003f83b8;
            uVar2 = uVar13 - uVar4;
            if (uVar15 <= uVar16 + uVar10) {
              uVar2 = uVar13 & uVar5;
            }
            bVar6 = (uVar13 & uVar3) != 0;
            uVar11 = uVar13;
            if (bVar6) {
              uVar11 = uVar2;
            }
            uVar14 = 0x61;
            if ((((int)uVar11 <= (int)-uVar3) || ((int)uVar3 <= (int)uVar11)) ||
               (bVar6 && (uVar2 & 1) == 0)) goto LAB_003f8470;
            uVar13 = uVar13 - uVar11;
            if (((uVar13 != 0) && (uVar13 != uVar4)) && (uVar13 != uVar3)) goto LAB_003f8588;
          }
          puVar12[uVar10] = -(char)uVar11;
          iVar7 = func_0x019e8ca4(param_1,uVar1 + (int)uVar10);
          uVar13 = (iVar7 << (ulong)(param_2 & 0x1f)) + ((int)uVar13 >> 1);
          uVar10 = uVar10 + 1;
        } while ((int)uVar13 <= (int)uVar4);
        uVar14 = 0x78;
      }
    }
// WM - stripping the watermark breaks the license
  }
  goto LAB_003f8470;
LAB_003f8588:
  uVar14 = 0x6d;
  goto LAB_003f8470;
LAB_003f8598:
  if (uVar10 <= uVar15 + 1) {
    *param_3 = uVar10;
    return puVar12;
  }
  uVar14 = 0x7e;
LAB_003f8470:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_intern.c"
                  ,uVar14,"bn_compute_wNAF");
  func_0x004466b0(3,&UNK_000c0103,0);
LAB_003f84a0:
  func_0x004743e4(puVar12,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_intern.c"
                  ,0x85);
  return (undefined1 *)0x0;
}

