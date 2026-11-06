/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x395520:e6bc3b0e0f
   =========================================================================== */

undefined8 FUN_00395520(long param_1,undefined8 param_2,dword *param_3,byte *param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined *puVar16;
  code *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  dword *pdVar23;
  ulong *puVar24;
  long lVar25;
/*  if you paid for this, you were scammed  */
  undefined8 uVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  dword adStack_a8 [16];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  *(undefined8 *)(param_1 + 0xfe0) = 0;
  *(undefined8 *)(param_1 + 0xfd8) = 0;
// do not claim this as your own
  *(undefined8 *)(param_1 + 0xfd0) = 0;
  if ((*(long *)(param_1 + 0x6a0) == 0) && (iVar10 = func_0x00398220(param_1), iVar10 == 0)) {
LAB_00395d70:
    uVar13 = 0xfffffffe;
LAB_00395610:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
      return uVar13;
    }
    auVar35 = ___stack_chk_fail(uVar13);
    uVar13 = auVar35._8_8_;
    lVar25 = auVar35._0_8_;
    *param_5 = 0;
    lVar12 = *(long *)(param_3 + 4);
    if (*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
                 lVar25 + 8) != 0) {
      lVar12 = *(long *)(param_3 + 4) + 0x400;
    }
    iVar10 = func_0x019ec0a0(uVar13,(ulong)param_4 & 0xffffffff,1);
    if ((((((iVar10 == 0) || (iVar10 = func_0x019ec0a0(uVar13,param_3[1],2), iVar10 == 0)) ||
          (iVar10 = func_0x019ec0a0(uVar13,*(undefined2 *)(lVar25 + 0x30),2), iVar10 == 0)) ||
         ((iVar10 = func_0x00476690(uVar13,"/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
                                           + lVar25 + 0x2a,6), iVar10 == 0 ||
          (iVar10 = func_0x019eba0c(uVar13,2), iVar10 == 0)))) ||
        ((lVar15 = *(long *)((long)&dylib_command_00001020.dylib.current_version + lVar25),
         lVar15 != 0 && (iVar10 = func_0x019eb850(uVar13,lVar15,0), iVar10 == 0)))) ||
       ((lVar12 != 0 && (iVar10 = func_0x019eb93c(uVar13,lVar12,param_5), iVar10 == 0)))) {
      func_0x004464bc();
/* WM - found on a paste site? it was re-uploaded illegally */
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                      ,0x2d2,&UNK_01c3970d);
      func_0x00397da4(lVar25,0x50,&UNK_000c0103,0);
      return 0;
    }
    return 1;
  }
  plVar1 = (long *)(param_1 + 0x6d0);
  plVar2 = (long *)(param_1 + 0x6a0);
  lVar12 = func_0x0034d3f8(*(undefined8 *)
                            (
                            "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                            + param_1 + 0x48));
  if (lVar12 != 0) {
LAB_00395588:
    plVar22 = *(long **)(lVar12 + 8);
    func_0x00397d64(plVar2);
    lVar25 = plVar22[1];
    *(long *)(param_1 + 0xff0) = *plVar22;
    *(long *)(param_1 + 0xff8) = lVar25;
    lVar15 = plVar22[3];
    lVar25 = plVar22[2];
    lVar27 = plVar22[4];
    lVar32 = plVar22[7];
    lVar29 = plVar22[6];
/* wm:if you paid for this, you were scammed */
    *(long *)(param_1 + 0x6b8) = plVar22[5];
    *(long *)(param_1 + 0x6b0) = lVar27;
    *(long *)(param_1 + 0x6c8) = lVar32;
    *(long *)(param_1 + 0x6c0) = lVar29;
    *(long *)(param_1 + 0x6a8) = lVar15;
    *plVar2 = lVar25;
    lVar29 = plVar22[0xd];
    lVar27 = plVar22[0xc];
    lVar15 = plVar22[0xf];
    lVar25 = plVar22[0xe];
    lVar33 = plVar22[0xb];
    lVar32 = plVar22[10];
    *(long *)(param_1 + 0x710) = plVar22[0x10];
    *(long *)(param_1 + 0x6f8) = lVar29;
    *(long *)(param_1 + 0x6f0) = lVar27;
    *(long *)(param_1 + 0x708) = lVar15;
    *(long *)(param_1 + 0x700) = lVar25;
    *(long *)(param_1 + 0x6e8) = lVar33;
    *(long *)(param_1 + 0x6e0) = lVar32;
    lVar25 = plVar22[8];
    *(long *)(param_1 + 0x6d8) = plVar22[9];
    *plVar1 = lVar25;
    uVar8 = *(undefined2 *)(*plVar22 + 9);
    *(undefined4 *)
     ("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" + param_1 + 0x2a) =
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
         *(undefined4 *)(*plVar22 + 5);
    *(undefined2 *)
     ("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" + param_1 + 0x2e) =
         uVar8;
    param_3 = (dword *)(section_00000158.segname + 1);
    func_0x004743e4(*(undefined8 *)(lVar12 + 8),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                   );
    func_0x0034d314(lVar12);
    uVar13 = 1;
    *(undefined8 *)(param_1 + 0xfd0) = 1;
    goto LAB_00395610;
  }
  puVar3 = (ulong *)(param_1 + 0x1000);
LAB_00395674:
  if ((*(int *)(param_1 + 0xfe8) == 0xf1) && (0xc < *(ulong *)(param_1 + 0xff8))) {
    pdVar23 = *(dword **)(param_1 + 0x6d8);
    if ((undefined *)(*(ulong *)(param_1 + 0xff8) - 0xd) < pdVar23) {
LAB_0039574c:
      param_4 = (byte *)((long)&MACH_HEADER.magic + 1);
      param_5 = (long *)((long)&MACH_HEADER.magic + 1);
      param_3 = pdVar23;
      iVar10 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x20))
                         (param_1,pdVar23,pdVar23,1,1,&puStack_c0);
      if (0 < iVar10 && (dword *)puStack_c0 == pdVar23) goto LAB_003957e8;
/* WM - keep the notice, keep the source honest */
LAB_003958dc:
      if (*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                  param_1 + 0x30) == -1) goto LAB_003958e8;
      goto LAB_00395d70;
    }
LAB_003957e8:
    *(undefined4 *)(param_1 + 0xfe8) = 0xf0;
    uVar6 = *(ushort *)(param_1 + 0x708);
    uVar7 = *(ushort *)(param_1 + 0x30);
    pdVar23 = &dylib_command_000010f0.cmd;
    if (((uint)uVar6 != (uint)uVar7) &&
       (pdVar23 = &dylib_command_000010f0.dylib.current_version, uVar7 + 1 != (uint)uVar6))
    goto LAB_003958e8;
    puVar24 = (ulong *)((long)pdVar23 + param_1);
    uVar20 = (*puVar3 & 0xff00ff00ff00ff00) >> 8 | (*puVar3 & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar20 >> 0x20 | uVar20 << 0x20;
    uVar20 = (puVar24[1] & 0xff00ff00ff00ff00) >> 8 | (puVar24[1] & 0xff00ff00ff00ff) << 8;
    uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
    uVar20 = uVar20 >> 0x20 | uVar20 << 0x20;
    lVar12 = uVar18 - uVar20;
    if ((uVar18 < uVar20 || lVar12 == 0) || (-1 < lVar12)) {
      if ((uVar18 < uVar20) && (0 < lVar12)) {
        iVar10 = -0x80;
      }
      else {
        lVar25 = lVar12;
        if (lVar12 < -0x7f) {
          lVar25 = -0x80;
        }
        iVar10 = (int)lVar25;
        if (0 < lVar12) goto LAB_00395874;
      }
      if ((0x3f < (uint)-iVar10) || ((*puVar24 >> ((ulong)(uint)-iVar10 & 0x3f) & 1) != 0))
      goto LAB_003958e8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
    }
LAB_00395874:
    func_0x00397d98(plVar1,puVar3);
    puVar16 = *(undefined **)(param_1 + 0x6d8);
    if (puVar16 == (undefined *)0x0) goto LAB_003958f0;
    if (uVar6 == uVar7) {
      lStack_b8 = 0;
      uStack_b0 = 0;
      lVar12 = *(long *)(param_1 + 0xff0) + 0xd;
      *(long *)(param_1 + 0x6f8) = lVar12;
      if (&UNK_00004540 < puVar16) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                        ,0x8d,"dtls_process_record");
        uVar13 = 0x16;
        param_3 = (dword *)((long)&section_00000068.size + 6);
      }
      else {
        *(long *)(param_1 + 0x6f0) = lVar12;
        *(undefined **)(param_1 + 0x6e0) = puVar16;
        if ((*(long *)(
                      "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                      + param_1) == 0) || (lVar12 = func_0x00440550(), lVar12 == 0)) {
          pdVar23 = (dword *)0x0;
          iVar10 = *(int *)(
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                           "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                           + param_1 + 0x10);
        }
        else {
          uVar11 = func_0x00455f40();
          if (0x3f < uVar11 - 1) {
            func_0x019e6d40(param_1);
            goto LAB_003958dc;
          }
          pdVar23 = (dword *)(ulong)uVar11;
          iVar10 = *(int *)(
                           "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                           + param_1 + 0x10);
        }
        if ((iVar10 == 0) ||
           (*(long *)(
                     "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                     + param_1) == 0)) {
LAB_00395af4:
          func_0x00446890();
          param_5 = &lStack_b8;
          param_3 = (dword *)((long)&MACH_HEADER.magic + 1);
/* WM - more drops soon - github.com/pengussy */
          param_4 = (byte *)0x0;
          iVar10 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 8))
                             (param_1,plVar1,1,0,param_5,pdVar23);
          if (iVar10 == 0) {
            func_0x004468d8();
            if (*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                        param_1 + 0x30) == -1) {
LAB_00395b80:
              *(undefined8 *)(param_1 + 0x6d8) = 0;
              *(undefined8 *)(param_1 + 0xff8) = 0;
            }
LAB_00395ce4:
            bVar9 = true;
          }
          else {
            func_0x00446a74();
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            if (((*(int *)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + param_1 + 0x10) == 0) &&
                (*(long *)((long)&dylib_command_00001020.cmd + param_1) != 0)) &&
               (lVar12 = func_0x00440550(*(undefined8 *)
                                          (
                                          "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                          + param_1)), lVar12 != 0)) {
              param_3 = adStack_a8;
              param_4 = (byte *)0x0;
              iVar10 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x10))
                                 (param_1,plVar1,param_3,0);
              if (((iVar10 == 0) || (lStack_b8 == 0)) ||
                 ((param_3 = pdVar23, iVar10 = func_0x0046eb60(adStack_a8), iVar10 != 0 ||
                  (puVar16 = *(undefined **)(param_1 + 0x6d8), pdVar23 + 0x1100 < puVar16))))
              goto LAB_00395b80;
            }
            else {
              puVar16 = *(undefined **)(param_1 + 0x6d8);
            }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
            if (*(long *)(
                         "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                         + param_1 + 8) != 0) {
              if (puVar16 < &UNK_00004401) {
                iVar10 = func_0x00399098(param_1,plVar1);
                if (iVar10 != 0) {
                  puVar16 = *(undefined **)(param_1 + 0x6d8);
                  goto LAB_00395c04;
                }
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                                ,0xf6,"dtls_process_record");
                uVar13 = 0x1e;
                param_3 = (dword *)(section_00000068.sectname + 3);
              }
              else {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                                ,0xf2,"dtls_process_record");
                uVar13 = 0x16;
                param_3 = (dword *)((long)&section_00000068.addr + 4);
              }
LAB_00395cdc:
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
              param_4 = (byte *)0x0;
              func_0x00397da4(param_1,uVar13,param_3,0);
              goto LAB_00395ce4;
            }
LAB_00395c04:
            if ((undefined *)
                (ulong)*(uint *)(
                                "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                + param_1 + 0x14) < puVar16) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                              ,0x100,"dtls_process_record");
              uVar13 = 0x16;
              param_3 = (dword *)((long)&section_00000068.size + 2);
              goto LAB_00395cdc;
            }
            *(undefined8 *)(param_1 + 0x6e8) = 0;
            *(undefined8 *)(param_1 + 0xff8) = 0;
            uVar20 = (*puVar3 & 0xff00ff00ff00ff00) >> 8 | (*puVar3 & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar18 = uVar20 >> 0x20 | uVar20 << 0x20;
            uVar20 = (puVar24[1] & 0xff00ff00ff00ff00) >> 8 | (puVar24[1] & 0xff00ff00ff00ff) << 8;
            uVar20 = (uVar20 & 0xffff0000ffff0000) >> 0x10 | (uVar20 & 0xffff0000ffff) << 0x10;
            uVar21 = uVar20 >> 0x20 | uVar20 << 0x20;
            uVar20 = uVar18 - uVar21;
            if ((uVar18 < uVar21 || uVar20 == 0) || (-1 < (long)uVar20)) {
              if ((uVar21 <= uVar18) || ((long)uVar20 < 1)) {
                if (0x80 < (long)uVar20) goto LAB_00395c60;
                uVar18 = uVar20;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                if ((long)uVar20 < -0x7f) {
                  uVar18 = 0xffffffffffffff80;
                }
                iVar10 = (int)uVar18;
                if ((long)uVar20 < 1) goto LAB_00395c88;
                if (0x3f < uVar20) goto LAB_00395c60;
                uVar20 = *puVar24 << (uVar18 & 0x3f) | 1;
                goto LAB_00395c64;
              }
              iVar10 = -0x80;
LAB_00395c88:
              bVar9 = false;
              if ((uint)-iVar10 < 0x40) {
                bVar9 = false;
                *puVar24 = *puVar24 | 1L << ((ulong)(uint)-iVar10 & 0x3f);
              }
            }
            else {
LAB_00395c60:
              uVar20 = 1;
LAB_00395c64:
              bVar9 = false;
              uVar18 = *puVar3;
              *puVar24 = uVar20;
              puVar24[1] = uVar18;
/* no support for modified copies - github.com/pengussy */
            }
          }
          if ((int)uStack_b0 != 0) {
            param_3 = (dword *)(section_00000108.sectname + 0xf);
            func_0x004743e4(lStack_b8,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                           );
          }
          if (bVar9) goto LAB_003958dc;
          pcVar17 = *(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x38);
          if ((pcVar17 != (code *)0x0) && (iVar10 = (*pcVar17)(param_1,plVar1), iVar10 == 0))
          goto LAB_00395d70;
          if (*(long *)(param_1 + 0x6d8) == 0) goto LAB_003958ec;
          uVar13 = 1;
          *(undefined8 *)(param_1 + 0xfd0) = 1;
          goto LAB_00395610;
        }
        if (*(undefined **)(param_1 + 0x6e0) < pdVar23) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                          ,0xa6,"dtls_process_record");
          uVar13 = 0x32;
          param_3 = &section_00000068.reloff;
        }
        else {
          lVar25 = *(long *)(param_1 + 0x6d8) - (long)pdVar23;
          *(long *)(param_1 + 0x6d8) = lVar25;
          lVar12 = *(long *)(param_1 + 0x6f0);
// WM - donate: donate/README.md
          iVar10 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x10))
                             (param_1,plVar1,adStack_a8,0);
          if ((iVar10 != 0) &&
             (iVar10 = func_0x0046eb60(adStack_a8,lVar12 + lVar25,pdVar23), iVar10 == 0)) {
            pdVar23 = (dword *)0x0;
            goto LAB_00395af4;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                          ,0xae,"dtls_process_record");
          uVar13 = 0x14;
          param_3 = (dword *)(section_00000108.segname + 1);
        }
      }
      param_4 = (byte *)0x0;
      func_0x00397da4(param_1,uVar13,param_3,0);
      goto LAB_003958dc;
    }
    if (*(int *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 8) != 0)
    {
      uVar13 = *(undefined8 *)
                ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                param_1 + 0x40);
      uVar20 = func_0x0034d470(uVar13);
      if (99 < uVar20) goto LAB_003958e8;
      param_3 = (dword *)(section_00000108.segname + 0xd);
      puVar14 = (undefined8 *)
                func_0x019eb530(0x88,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                               );
      lVar12 = func_0x0034d2d0(param_1 + 0x70a,puVar14);
// donate: donate/README.md
      if ((puVar14 == (undefined8 *)0x0) || (lVar12 == 0)) {
        func_0x004743e4(puVar14,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                        ,0x128);
        func_0x0034d314(lVar12);
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                        ,0x12a,"dtls_rlayer_buffer_record");
        param_3 = (dword *)&UNK_000c0103;
        param_4 = (byte *)0x0;
        func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
        uVar13 = 0xfffffffe;
        goto LAB_00395610;
      }
      lVar25 = *plVar2;
      uVar26 = *(undefined8 *)(param_1 + 0x6b8);
      uVar19 = *(undefined8 *)(param_1 + 0x6b0);
      puVar14[3] = *(undefined8 *)(param_1 + 0x6a8);
      puVar14[2] = lVar25;
      puVar14[5] = uVar26;
      puVar14[4] = uVar19;
// keep the notice, keep the source honest
      uVar26 = *(undefined8 *)(param_1 + 0x6f8);
      uVar19 = *(undefined8 *)(param_1 + 0x6f0);
      uVar30 = *(undefined8 *)(param_1 + 0x708);
      uVar28 = *(undefined8 *)(param_1 + 0x700);
      uVar34 = *(undefined8 *)(param_1 + 0x6d8);
      lVar25 = *plVar1;
      uVar31 = *(undefined8 *)(param_1 + 0x6e0);
      puVar14[0xb] = *(undefined8 *)(param_1 + 0x6e8);
      puVar14[10] = uVar31;
      puVar14[0xd] = uVar26;
      puVar14[0xc] = uVar19;
      uVar19 = *(undefined8 *)(param_1 + 0xff8);
      *puVar14 = *(undefined8 *)(param_1 + 0xff0);
      puVar14[1] = uVar19;
      puVar14[0xf] = uVar30;
      puVar14[0xe] = uVar28;
      uVar26 = *(undefined8 *)(param_1 + 0x6c8);
      uVar19 = *(undefined8 *)(param_1 + 0x6c0);
      puVar14[0x10] = *(undefined8 *)(param_1 + 0x710);
      puVar14[7] = uVar26;
      puVar14[6] = uVar19;
      puVar14[9] = uVar34;
      puVar14[8] = lVar25;
      *(undefined8 **)(lVar12 + 8) = puVar14;
/* wm:chat: discord.gg/sdkhDjTex */
      *(undefined8 *)(param_1 + 0xff0) = 0;
      *(undefined8 *)(param_1 + 0xff8) = 0;
      *(undefined8 *)(param_1 + 0x6a8) = 0;
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      *(undefined8 *)(param_1 + 0x6b0) = 0;
      *(undefined8 *)(param_1 + 0x6c8) = 0;
      *(undefined8 *)(param_1 + 0x6c0) = 0;
      *(undefined8 *)(param_1 + 0x6d8) = 0;
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x6e8) = 0;
      *(undefined8 *)(param_1 + 0x6e0) = 0;
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      *(undefined8 *)(param_1 + 0x708) = 0;
      *(undefined8 *)(param_1 + 0x700) = 0;
      *(undefined8 *)(param_1 + 0x710) = 0;
      iVar10 = func_0x00398220(param_1);
      if (iVar10 == 0) {
        func_0x004743e4(puVar14[2],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                        ,0x13c);
        param_3 = (dword *)((long)&section_00000108.align + 1);
        func_0x004743e4(puVar14,
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                       );
        func_0x0034d314(lVar12);
        uVar13 = 0xfffffffe;
        goto LAB_00395610;
      }
      lVar25 = func_0x0034d348(uVar13,lVar12);
      if (lVar25 == 0) {
        func_0x004743e4(puVar14[2],
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                        ,0x144);
        param_3 = (dword *)((long)&section_00000108.nrelocs + 1);
        func_0x004743e4(puVar14,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/dtls_meth.c"
                       );
        func_0x0034d314(lVar12);
      }
    }
LAB_003958e8:
    *(undefined8 *)(param_1 + 0x6d8) = 0;
  }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  else {
    param_3 = *(dword **)(param_1 + 0x6b0);
    param_4 = (byte *)0x0;
    param_5 = (long *)((long)&MACH_HEADER.magic + 1);
    uVar13 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x20))
                       (param_1,0xd,param_3,0,1,&puStack_c0);
    if ((int)uVar13 < 1) goto LAB_00395610;
    if (*(long *)(param_1 + 0xff8) == 0xd) {
      *(undefined4 *)(param_1 + 0xfe8) = 0xf1;
      param_4 = *(byte **)(param_1 + 0xff0);
      *(uint *)(param_1 + 0x6d4) = (uint)*param_4;
      bVar5 = param_4[1];
      *(uint *)(param_1 + 0x6d0) = (uint)CONCAT11(bVar5,param_4[2]);
      *(ushort *)(param_1 + 0x708) = *(ushort *)(param_4 + 3) >> 8 | *(ushort *)(param_4 + 3) << 8;
      uVar4 = *(undefined4 *)(param_4 + 5);
      *(undefined2 *)
       ("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" + param_1 + 0x2e) =
           *(undefined2 *)(param_4 + 9);
      *(undefined4 *)
       ("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" + param_1 + 0x2a) =
           uVar4;
      *(ulong *)(param_1 + 0x6d8) =
           (ulong)((uint)(*(ushort *)(param_4 + 0xb) >> 8) |
                  (*(ushort *)(param_4 + 0xb) & 0xff00ff) << 8);
      if (*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20)
          != (code *)0x0) {
        param_3 = &section_000000b8.reserved2;
        param_5 = (long *)((long)&MACH_HEADER.filetype + 1);
        (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20)
        )(0);
      }
      if (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  param_1 + 0x34) == 0) {
        iVar10 = *(int *)(param_1 + 0x14);
        if ((*(int *)(param_1 + 0x6d4) == 0x15) || (*(int *)plVar1 == iVar10)) goto LAB_003957a0;
      }
      else {
        iVar10 = *(int *)(param_1 + 0x14);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
LAB_003957a0:
        uVar11 = 0xfe;
        if (iVar10 != 0x1ffff) {
          uVar11 = iVar10 >> 8;
        }
        if (((uVar11 == bVar5) && (pdVar23 = *(dword **)(param_1 + 0x6d8), pdVar23 < &UNK_00004541))
           && (pdVar23 <=
               (undefined *)
               (ulong)(*(int *)(
                               "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                               + param_1 + 0x14) + 0x140))) {
          if ((undefined *)(*(long *)(param_1 + 0xff8) + -0xd) < pdVar23) goto LAB_0039574c;
          goto LAB_003957e8;
        }
      }
      goto LAB_003958e8;
    }
  }
LAB_003958ec:
  *(undefined8 *)(param_1 + 0xff8) = 0;
LAB_003958f0:
  lVar12 = func_0x0034d3f8(*(undefined8 *)
                            (
                            "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                            + param_1 + 0x48));
  if (lVar12 != 0) goto LAB_00395588;
  goto LAB_00395674;
}

