/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f23d4:d83ea6ea42
 */

/* WARNING: Possible PIC construction at 0x003f2580: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003f2718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003f2698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003f271c) */
/* WARNING: Removing unreachable block (ram,0x003f2720) */
/* WARNING: Removing unreachable block (ram,0x003f2584) */
/* WARNING: Removing unreachable block (ram,0x003f2588) */
/* WARNING: Removing unreachable block (ram,0x003f25a4) */
/* WARNING: Removing unreachable block (ram,0x003f269c) */
/* WARNING: Removing unreachable block (ram,0x003f26a0) */

undefined8
FUN_003f23d4(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,
            undefined8 param_5,long param_6)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_80 [4];
  uint uStack_7c;
  long lStack_78;
  undefined8 *puStack_70;
  undefined4 uStack_64;
  
  puVar1 = auStack_80 + 0x70;
  iVar7 = func_0x003f8a9c(param_3,4);
  if ((iVar7 != 0) || (iVar7 = func_0x003f8a9c(param_4,4), iVar7 != 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_exp.c"
                    ,0x4a3,"BN_mod_exp_mont_word");
    puVar12 = &UNK_000c0101;
LAB_003f2454:
    func_0x004466b0(3,puVar12,0);
    return 0;
  }
  iVar7 = func_0x003f96e0(param_4);
  if (iVar7 == 0) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_exp.c"
                    ,0x4ab,"BN_mod_exp_mont_word");
    puVar12 = (undefined *)0x66;
    goto LAB_003f2454;
  }
  if (*(int *)(param_4 + 1) == 1) {
    uVar13 = *(ulong *)*param_4;
    uVar15 = 0;
    if (uVar13 != 0) {
      uVar15 = param_2 / uVar13;
    }
    param_2 = param_2 - uVar15 * uVar13;
  }
  iVar7 = func_0x019e85d0(param_3);
  if (iVar7 == 0) {
    iVar7 = func_0x003f95d8(param_4,1);
    if (iVar7 != 0) goto LAB_003f2544;
    uVar15 = 1;
    goto code_r0x003f8c08;
  }
  if (param_2 == 0) {
LAB_003f2544:
    func_0x003f95cc(param_1);
    return 1;
  }
  func_0x003f1890(param_5);
  puVar9 = (undefined8 *)func_0x003f1a40(param_5);
  puVar10 = (undefined8 *)func_0x003f1a40(param_5);
  if (puVar10 == (undefined8 *)0x0) {
    lVar11 = 0;
    puVar10 = puStack_70;
// do not claim this as your own
joined_r0x003f26d8:
    uVar14 = 0;
    puStack_70 = puVar10;
joined_r0x003f26d8:
    if (param_6 != 0) goto LAB_003f2800;
  }
  else {
    lVar11 = param_6;
    puStack_70 = puVar10;
    if ((param_6 != 0) ||
       ((lVar11 = func_0x003fa76c(), lVar11 != 0 &&
        (iVar8 = func_0x003fa820(lVar11,param_4,param_5), iVar8 != 0)))) {
      unaff_x19 = param_5;
      unaff_x20 = param_6;
      unaff_x29 = puVar1;
      if (iVar7 < 2) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        if (param_2 == 1) {
LAB_003f2710:
          uVar15 = 1;
          unaff_x30 = 0x3f271c;
          register0x00000008 = (BADSPACEBASE *)auStack_80;
code_r0x003f8c08:
          *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          if ((*(int *)((long)param_1 + 0xc) < 1) &&
             (lVar11 = func_0x019e875c(param_1,1), lVar11 == 0)) {
            return 0;
          }
          *(undefined4 *)(param_1 + 2) = 0;
          *(ulong *)*param_1 = uVar15;
          *(uint *)(param_1 + 1) = (uint)(uVar15 != 0);
          return 1;
        }
LAB_003f276c:
        iVar7 = func_0x003f8c08(puVar9,param_2);
        if (iVar7 != 0) {
          iVar7 = func_0x003f9714(puVar9,puVar9,lVar11,param_5);
          goto joined_r0x003f27ec;
        }
      }
      else {
        uStack_64 = iVar7 + -1;
        bVar6 = true;
// found on a paste site? it was re-uploaded illegally
        uVar15 = param_2;
        lStack_78 = lVar11;
        do {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = uVar15;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar15;
          if (SUB168(auVar2 * auVar4,8) == 0) {
            uVar15 = uVar15 * uVar15;
            if (!bVar6) {
              puVar16 = puVar9;
              puVar9 = puStack_70;
              goto LAB_003f25f8;
            }
            uStack_7c = 0;
            puVar10 = puVar9;
          }
          else {
            if (bVar6) {
              unaff_x30 = 0x3f2584;
              register0x00000008 = (BADSPACEBASE *)auStack_80;
              param_1 = puVar9;
              goto code_r0x003f8c08;
            }
            iVar7 = func_0x00400274();
            puVar16 = puStack_70;
            if ((iVar7 == 0) ||
               (iVar7 = func_0x003f1d68(0,puStack_70,puVar9,param_4,param_5), iVar7 == 0))
            goto LAB_003f280c;
            uVar15 = 1;
LAB_003f25f8:
            iVar7 = func_0x003fa204(puVar16,puVar16,puVar16,lStack_78,param_5);
            bVar6 = false;
            lVar11 = lStack_78;
            puVar10 = puStack_70;
            if (iVar7 == 0) goto joined_r0x003f26d8;
            uStack_7c = 1;
/* wm:stripping the watermark breaks the license */
            puVar10 = puVar16;
            puStack_70 = puVar9;
          }
          uStack_64 = uStack_64 + -1;
          iVar7 = func_0x019e8ca4(param_3);
          if (iVar7 == 0) {
LAB_003f2558:
            puVar9 = puVar10;
          }
          else {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = param_2;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = uVar15;
            if (SUB168(auVar3 * auVar5,8) == 0) {
              uVar15 = param_2 * uVar15;
              goto LAB_003f2558;
            }
            if ((uStack_7c & 1) == 0) {
              unaff_x30 = 0x3f269c;
              register0x00000008 = (BADSPACEBASE *)auStack_80;
              param_1 = puVar10;
              goto code_r0x003f8c08;
            }
            iVar7 = func_0x00400274(puVar10,uVar15);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
            puVar9 = puStack_70;
            if (iVar7 == 0) goto LAB_003f280c;
            iVar7 = func_0x003f1d68(0,puStack_70,puVar10,param_4,param_5);
            bVar6 = false;
            uVar15 = param_2;
            puStack_70 = puVar10;
            lVar11 = lStack_78;
            if (iVar7 == 0) goto joined_r0x003f26d8;
          }
        } while (0 < uStack_64);
        lVar11 = lStack_78;
        if (uVar15 == 1) {
          if (bVar6) goto LAB_003f2710;
        }
        else {
          if (bVar6) {
            param_2 = uVar15;
            goto LAB_003f276c;
          }
          iVar7 = func_0x00400274(puVar9,uVar15);
          puVar10 = puStack_70;
          if (iVar7 == 0) {
LAB_003f280c:
            uVar14 = 0;
// WM - no support for modified copies
            lVar11 = lStack_78;
            goto joined_r0x003f26d8;
          }
          iVar7 = func_0x003f1d68(0,puStack_70,puVar9,param_4,param_5);
          lVar11 = lStack_78;
          puVar9 = puVar10;
joined_r0x003f27ec:
          if (iVar7 == 0) goto LAB_003f27f0;
        }
        iVar7 = func_0x003fa650(param_1,puVar9,lVar11,param_5);
        if (iVar7 != 0) {
          uVar14 = 1;
          goto joined_r0x003f26d8;
        }
      }
LAB_003f27f0:
// origin: github.com/pengussy
      uVar14 = 0;
      goto joined_r0x003f26d8;
    }
    uVar14 = 0;
  }
  func_0x003fa7c8(lVar11);
LAB_003f2800:
  func_0x003f19bc(param_5);
  return uVar14;
}

