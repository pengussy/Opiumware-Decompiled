/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b1484:7aecd812d9
 */

/* WARNING: Removing unreachable block (ram,0x003b1898) */
/* WARNING: Removing unreachable block (ram,0x003b19a4) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_003b1484(long param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  bool bVar10;
  int iVar11;
  undefined *puVar12;
  ulong *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  byte *pbVar20;
  undefined *unaff_x24;
  long lVar21;
  long lVar22;
  ulong uVar23;
  byte bVar24;
  undefined *puStack_1d8;
  ulong uStack_1d0;
  undefined *puStack_1c8;
  ulong uStack_1c0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  ulong uStack_1b8;
  undefined *puStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  char cStack_181;
  undefined *puStack_180;
  undefined8 auStack_178 [32];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar16 = *(long *)(param_1 + 0x4f0);
  *(undefined8 *)(lVar16 + 0x1a0) = 0;
  *(undefined8 *)(lVar16 + 0x198) = 0;
  *(undefined8 *)(lVar16 + 0x1b0) = 0;
  *(undefined8 *)(lVar16 + 0x1a8) = 0;
  *(undefined8 *)(lVar16 + 0x180) = 0;
  *(undefined8 *)(lVar16 + 0x178) = 0;
  *(undefined8 *)(lVar16 + 400) = 0;
  *(undefined8 *)(lVar16 + 0x188) = 0;
LAB_003b14e4:
  do {
    bVar24 = 0;
    uVar19 = *(undefined8 *)(param_1 + 0x40);
    pbVar20 = *(byte **)(*(long *)(param_1 + 0xf8) + 8);
/* no support for modified copies */
LAB_003b14f4:
    auStack_178[0] = func_0x0034d3f0(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x118));
    puVar12 = (undefined *)func_0x0034d454(auStack_178);
    if (puVar12 != (undefined *)0x0) {
      unaff_x24 = puVar12;
      do {
        lVar21 = *(long *)(unaff_x24 + 8);
        uVar6 = *(ushort *)(*(long *)(param_1 + 0x4f0) + 0x110);
        if (uVar6 <= *(ushort *)(lVar21 + 0x10)) {
          bVar10 = false;
          lVar17 = *(long *)(lVar21 + 0x48);
joined_r0x003b161c:
          if ((lVar17 == 0) &&
             (!(bool)(*(short *)(*(long *)(param_1 + 0x4f0) + 0x110) != *(short *)(lVar21 + 0x10) &
                     (bVar10 ^ 1U)))) {
            uVar19 = *(undefined8 *)(lVar21 + 0x20);
            func_0x0034d3f8(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x118));
            iVar11 = func_0x003b2834(param_1,lVar21);
            if (iVar11 == 0) {
              func_0x004743e4(*(undefined8 *)(lVar21 + 0x40),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                              ,0x6d);
              func_0x004743e4(*(undefined8 *)(lVar21 + 0x48),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
/*  no support for modified copies  */
                              ,0x6e);
              func_0x004743e4(lVar21,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                              ,0x6f);
              func_0x0034d314(unaff_x24);
              goto LAB_003b1c68;
            }
            if (*(long *)(lVar21 + 0x20) != 0) {
              _memcpy(*(long *)(*(long *)(param_1 + 0xf8) + 8) + *(long *)(lVar21 + 0x18) + 0xc,
                      *(undefined8 *)(lVar21 + 0x40));
            }
            func_0x004743e4(*(undefined8 *)(lVar21 + 0x40),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                            ,0x6d);
            func_0x004743e4(*(undefined8 *)(lVar21 + 0x48),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                            ,0x6e);
            func_0x004743e4(lVar21,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                            ,0x6f);
            func_0x0034d314(unaff_x24);
            if (bVar10) {
              *(undefined4 *)(*(long *)(param_1 + 0x4f0) + 0x10e) = 0;
            }
            *(undefined8 *)(param_1 + 0x108) = uVar19;
            goto LAB_003b1aa0;
          }
          break;
        }
        if (((uVar6 == 1 && *(ushort *)(lVar21 + 0x10) == 0) && *(int *)(param_1 + 0x78) != 0) &&
           (*(int *)(param_1 + 0xac) == 0x17)) {
          puVar12 = (undefined *)func_0x0034d454(auStack_178);
          if (puVar12 != (undefined *)0x0) {
            lVar22 = *(long *)(puVar12 + 8);
            if (*(short *)(lVar22 + 0x10) == *(short *)(*(long *)(param_1 + 0x4f0) + 0x110)) {
              func_0x0034d3f8(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x118));
              func_0x004743e4(*(undefined8 *)(lVar21 + 0x40),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                              ,0x6d);
              func_0x004743e4(*(undefined8 *)(lVar21 + 0x48),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                              ,0x6e);
              func_0x004743e4(lVar21,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                              ,0x6f);
              func_0x0034d314(unaff_x24);
              bVar10 = false;
              lVar17 = *(long *)(lVar22 + 0x48);
              lVar21 = lVar22;
              unaff_x24 = puVar12;
              goto joined_r0x003b161c;
            }
          }
/* do not claim this as your own - github.com/pengussy */
          bVar10 = true;
          lVar17 = *(long *)(lVar21 + 0x48);
          goto joined_r0x003b161c;
        }
        func_0x0034d3f8(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x118));
        func_0x004743e4(*(undefined8 *)(lVar21 + 0x40),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6d);
        func_0x004743e4(*(undefined8 *)(lVar21 + 0x48),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6e);
        func_0x004743e4(lVar21,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6f);
        func_0x0034d314(unaff_x24);
        unaff_x24 = (undefined *)func_0x0034d454(auStack_178);
      } while (unaff_x24 != (undefined *)0x0);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    }
    iVar11 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                       (param_1,0x16,&cStack_181,pbVar20,0xc,0,&puStack_1d8);
    if (iVar11 < 1) {
LAB_003b1a60:
      *(undefined4 *)(param_1 + 0x68) = 3;
      break;
    }
    if (cStack_181 == '\x14') {
      if (*pbVar20 == 1) {
        *(undefined **)(param_1 + 0x108) = puStack_1d8 + -1;
        *(long *)(param_1 + 0x100) = *(long *)(*(long *)(param_1 + 0xf8) + 8) + 1;
        *(undefined4 *)(param_1 + 0x2f8) = 0x101;
        *(undefined **)(param_1 + 0x2f0) = puStack_1d8 + -1;
        goto LAB_003b1aa0;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,0x358,"dtls_get_reassembled_message");
      uVar19 = 10;
      uVar14 = 0x67;
      goto LAB_003b1c60;
    }
    if (puStack_1d8 != (undefined *)0xc) {
      func_0x004464bc();
      uVar19 = 0x366;
LAB_003b1b50:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,uVar19,"dtls_get_reassembled_message");
      uVar19 = 10;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      uVar14 = 0xf4;
      goto LAB_003b1c60;
    }
    uStack_1a8 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    bVar5 = *pbVar20;
    uStack_1d0 = (ulong)bVar5;
    puVar12 = (undefined *)((ulong)pbVar20[1] << 0x10 | (ulong)pbVar20[2] << 8 | (ulong)pbVar20[3]);
    uVar6 = CONCAT11((byte)*(ushort *)(pbVar20 + 4),pbVar20[5]);
    uVar7 = (uint)uVar6;
    uStack_1c0 = (ulong)uVar6;
    uVar23 = (ulong)pbVar20[6] << 0x10 | (ulong)pbVar20[7] << 8 | (ulong)pbVar20[8];
    unaff_x24 = (undefined *)
                ((ulong)pbVar20[9] << 0x10 | (ulong)pbVar20[10] << 8 | (ulong)pbVar20[0xb]);
    puStack_1c8 = puVar12;
    uStack_1b8 = uVar23;
    puStack_1b0 = unaff_x24;
    if (*(undefined **)(param_1 + 0xef0 + *(long *)(param_1 + 0xec8) * 0x40) < unaff_x24) {
      func_0x004464bc();
      uVar19 = 0x376;
      goto LAB_003b1c24;
    }
    lVar21 = *(long *)(param_1 + 0x4f0);
    if ((uVar7 == *(ushort *)(lVar21 + 0x110)) ||
       ((((bVar24 = bVar5, *(ushort *)(lVar21 + 0x110) == 1 && (uVar7 == 0)) &&
         (*(int *)(param_1 + 0x78) != 0)) &&
        ((bVar5 == 1 && (bVar24 = 1, *(int *)(param_1 + 0xac) == 0x17)))))) {
      if ((unaff_x24 != (undefined *)0x0) && (unaff_x24 < puVar12)) goto LAB_003b1940;
/* wm:stripping the watermark breaks the license */
      if (((*(int *)(param_1 + 0x78) != 0) || (*(long *)(lVar21 + 400) != 0)) ||
         ((*(int *)(param_1 + 0xac) == 1 || (bVar5 != 0)))) {
        iVar11 = func_0x003b2834(param_1,&uStack_1d0);
        if (iVar11 == 0) goto LAB_003b1c68;
        if (unaff_x24 == (undefined *)0x0) goto LAB_003b1bfc;
        iVar11 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                           (param_1,0x16,0,*(long *)(*(long *)(param_1 + 0xf8) + 8) + uVar23 + 0xc,
                            unaff_x24,0,&puStack_1d8);
        if (0 < iVar11) {
          if (puStack_1d8 != unaff_x24) goto LAB_003b1c0c;
          goto LAB_003b1a48;
        }
        goto LAB_003b1a60;
      }
      if (((pbVar20[1] != 0) || (pbVar20[2] != 0)) || (pbVar20[3] != 0)) {
        func_0x004464bc();
        uVar19 = 0x3a9;
        goto LAB_003b1b50;
// found on a paste site? it was re-uploaded illegally
      }
      if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
        (**(code **)(param_1 + 0x4f8))
                  (0,*(undefined4 *)(param_1 + 0x48),0x16,pbVar20,0xc,uVar19,
                   *(undefined8 *)(param_1 + 0x500));
      }
      *(undefined8 *)(param_1 + 0x108) = 0;
      goto LAB_003b14f4;
    }
    if (puVar12 < unaff_x24 + uVar23) break;
    lStack_78 = (ulong)*(ushort *)(pbVar20 + 4) << 0x30;
    lVar21 = func_0x0034d410(*(undefined8 *)(lVar21 + 0x118),&lStack_78);
    uVar6 = *(ushort *)(*(long *)(param_1 + 0x4f0) + 0x110);
    if (((uVar7 <= uVar6) || (unaff_x24 == puVar12 && lVar21 != 0)) ||
       ((uVar6 + 10 < uVar7 || ((uVar6 == 0 && (bVar24 == 0x14)))))) goto joined_r0x003b1844;
    if (unaff_x24 == puVar12) {
      puVar18 = *(undefined **)(param_1 + 0x9c8);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      if (puVar18 < &UNK_0000454d) {
        puVar18 = &UNK_0000454c;
      }
      if (puVar18 < puVar12) break;
      puVar13 = (ulong *)func_0x019eb5a0(0x50,
                                         "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                                         ,0x4c);
      iVar11 = 0;
      if (puVar13 == (ulong *)0x0) goto LAB_003b194c;
      if (puVar12 == (undefined *)0x0) {
        puVar13[8] = 0;
        puVar13[9] = 0;
        puVar13[1] = (ulong)puStack_1c8;
        *puVar13 = uStack_1d0;
        puVar13[3] = uStack_1b8;
        puVar13[2] = uStack_1c0;
        puVar13[5] = uStack_1a8;
        puVar13[4] = (ulong)puStack_1b0;
        puVar13[7] = uStack_198;
        puVar13[6] = uStack_1a0;
LAB_003b1970:
        lVar21 = func_0x0034d2d0(&lStack_78,puVar13);
        if ((lVar21 != 0) &&
// WM - do not claim this as your own
           (lVar21 = func_0x0034d348(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x118),lVar21),
           lVar21 != 0)) goto LAB_003b14e4;
LAB_003b19a8:
        func_0x004743e4(puVar13[8],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6d);
        func_0x004743e4(puVar13[9],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                        ,0x6e);
        uVar19 = 0x6f;
      }
      else {
        uVar23 = func_0x019eb530(puVar12,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                                 ,0x50);
        if (uVar23 != 0) {
          puVar13[8] = uVar23;
          puVar13[9] = 0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          puVar13[1] = (ulong)puStack_1c8;
          *puVar13 = uStack_1d0;
          puVar13[3] = uStack_1b8;
          puVar13[2] = uStack_1c0;
          puVar13[5] = uStack_1a8;
          puVar13[4] = (ulong)puStack_1b0;
          puVar13[7] = uStack_198;
          puVar13[6] = uStack_1a0;
          iVar11 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                             (param_1,0x16,0,uVar23,puVar12,0,&puStack_180);
          if ((0 < iVar11) && (puStack_180 == puVar12)) goto LAB_003b1970;
          goto LAB_003b19a8;
        }
        uVar19 = 0x51;
      }
      func_0x004743e4(puVar13,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                      ,uVar19);
      break;
    }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
LAB_003b1940:
    iVar11 = func_0x003b24cc(param_1,&uStack_1d0);
LAB_003b194c:
  } while (iVar11 + 3U < 2);
LAB_003b1c6c:
  do {
    param_1 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return 0;
    }
    while( true ) {
      ___stack_chk_fail();
LAB_003b1bfc:
      puStack_1d8 = (undefined *)0x0;
      if (unaff_x24 != (undefined *)0x0) break;
LAB_003b1a48:
      if (bVar24 != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x4f0) + 0x10e) = 0;
      }
      *(undefined **)(param_1 + 0x108) = unaff_x24;
LAB_003b1aa0:
      iVar11 = *(int *)(param_1 + 0x2f8);
      *param_2 = iVar11;
      puVar15 = *(undefined1 **)(*(long *)(param_1 + 0xf8) + 8);
      if (iVar11 == 0x101) {
        puVar2 = (undefined8 *)(param_1 + 0x4f8);
        if ((code *)*puVar2 == (code *)0x0) goto LAB_003b1bdc;
        puVar1 = (undefined4 *)(param_1 + 0x48);
        puVar3 = (undefined8 *)(param_1 + 0x40);
        puVar4 = (undefined8 *)(param_1 + 0x500);
        param_1 = 1;
        (*(code *)*puVar2)(0,*puVar1,0x14,puVar15,1,*puVar3,*puVar4);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
          return 1;
        }
      }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      else {
        uVar19 = *(undefined8 *)(lVar16 + 0x180);
        *puVar15 = *(undefined1 *)(lVar16 + 0x178);
        uVar8 = (undefined1)((ulong)uVar19 >> 0x10);
        puVar15[1] = uVar8;
        uVar9 = (undefined1)((ulong)uVar19 >> 8);
        puVar15[2] = uVar9;
        puVar15[3] = (char)uVar19;
        puVar15[4] = *(undefined1 *)(lVar16 + 0x189);
        puVar15[5] = *(undefined1 *)(lVar16 + 0x188);
        *(undefined2 *)(puVar15 + 6) = 0;
        puVar15[8] = 0;
        puVar15[9] = uVar8;
        puVar15[10] = uVar9;
        puVar15[0xb] = (char)uVar19;
        *(undefined8 *)(lVar16 + 0x1a0) = 0;
        *(undefined8 *)(lVar16 + 0x198) = 0;
        *(undefined8 *)(lVar16 + 0x1b0) = 0;
        *(undefined8 *)(lVar16 + 0x1a8) = 0;
        *(undefined8 *)(lVar16 + 0x180) = 0;
        *(undefined8 *)(lVar16 + 0x178) = 0;
        *(undefined8 *)(lVar16 + 400) = 0;
        *(undefined8 *)(lVar16 + 0x188) = 0;
/* wm:no support for modified copies */
        *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) =
             *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) + 1;
        *(long *)(param_1 + 0x100) = *(long *)(*(long *)(param_1 + 0xf8) + 8) + 0xc;
LAB_003b1bdc:
        param_1 = 1;
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
          return 1;
        }
      }
    }
LAB_003b1c0c:
    func_0x004464bc();
    uVar19 = 0x3cc;
LAB_003b1c24:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                    ,uVar19,"dtls_get_reassembled_message");
    uVar19 = 0x2f;
    uVar14 = 0x10f;
LAB_003b1c60:
    func_0x003a9570(param_1,uVar19,uVar14,0);
LAB_003b1c68:
    *(undefined8 *)(param_1 + 0x108) = 0;
  } while( true );
joined_r0x003b1844:
  if (unaff_x24 == (undefined *)0x0) goto LAB_003b14e4;
  puVar12 = unaff_x24;
  if ((undefined *)0xff < unaff_x24) {
    puVar12 = (undefined *)0x100;
/* wm:found on a paste site? it was re-uploaded illegally */
  }
  iVar11 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                     (param_1,0x16,0,auStack_178,puVar12,0,&puStack_180);
  if (iVar11 < 1) goto LAB_003b1c6c;
  unaff_x24 = unaff_x24 + -(long)puStack_180;
  goto joined_r0x003b1844;
}

