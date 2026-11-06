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
 *  file-id: 0x396318:4ba5f317f7
 *  --------------------------------------------------------------------------*/

ulong FUN_00396318(undefined8 *param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,int param_11,long param_12)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_1d0 [56];
  int aiStack_198 [2];
  long lStack_190;
  undefined1 auStack_185 [5];
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  int aiStack_180 [16];
  long lStack_140;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  bVar1 = *(int *)((long)param_1 + 0x1c) == 1;
  puVar12 = (undefined1 *)((long)&segment_command_00000020.cmd + 1);
  puVar13 = param_4;
  lVar6 = func_0x019eb530(param_6,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                         );
  param_1[0x218] = lVar6;
  if (lVar6 == 0) {
LAB_0039658c:
    param_3 = puVar13;
    param_4 = puVar12;
    uVar9 = 0xfffffffe;
  }
  else {
    puVar12 = (undefined1 *)((long)&segment_command_00000020.cmdsize + 1);
    lVar6 = func_0x019eb530(param_6,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                           );
    param_1[0x219] = lVar6;
    if (lVar6 == 0) goto LAB_0039658c;
/*  do not claim this as your own  */
    _memcpy(param_1[0x218],param_5,param_6);
    iVar2 = func_0x004553ec(param_9,"NULL");
    if (((param_12 == 0) || (param_11 != 0x357)) || (iVar2 == 0)) {
      lVar6 = func_0x00451f08();
      param_1[0x204] = lVar6;
      if (lVar6 == 0) {
        func_0x004464bc();
        uVar8 = 0x41;
      }
      else {
        iVar2 = func_0x004553d8(param_9);
        puVar13 = (undefined1 *)0x0;
        iVar4 = func_0x019e9b88(lVar6,param_9,0,0,0,bVar1);
        if (0 < iVar4) {
          puVar13 = (undefined1 *)0x0;
          iVar4 = func_0x00452c6c(lVar6,9,param_6);
          if (0 < iVar4) {
            if (iVar2 == 7) {
              puVar13 = (undefined1 *)0x0;
              iVar2 = func_0x00452c6c(lVar6,0x11,param_10);
              if (iVar2 < 1) goto LAB_00396540;
            }
/* thanks for reading - discord.gg/sdkhDjTex */
            param_4 = (undefined1 *)0x0;
            iVar2 = func_0x019e9b88(lVar6,0,0,param_3,0,bVar1);
            puVar13 = param_3;
            if (0 < iVar2) goto LAB_00396518;
          }
        }
LAB_00396540:
        func_0x004464bc();
        uVar8 = 0x50;
      }
LAB_00396574:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                      ,uVar8,"tls13_set_crypto_state");
      puVar12 = (undefined1 *)0x0;
      func_0x004466b0(0x14,&UNK_000c0103);
      goto LAB_0039658c;
    }
    lVar6 = func_0x0045cd38(*param_1,"HMAC",param_1[1]);
    if (lVar6 == 0) {
LAB_00396520:
      func_0x0045d0c0(lVar6);
      func_0x004464bc();
      uVar8 = 0x31;
      goto LAB_00396574;
    }
    lVar7 = func_0x0045c3d0();
    param_1[0x205] = lVar7;
    if (lVar7 == 0) goto LAB_00396520;
    func_0x0045d0c0(lVar6);
    uVar8 = func_0x00455ed0(param_12);
    func_0x0047992c(auStack_a8,"digest",uVar8,0);
    func_0x00479f78(&uStack_d0);
    uStack_78 = uStack_c8;
    uStack_80 = uStack_d0;
    uStack_68 = uStack_b8;
/* WM - more drops soon - github.com/pengussy */
    uStack_70 = uStack_c0;
    uStack_60 = uStack_b0;
    puVar13 = auStack_a8;
    iVar2 = func_0x0045c6a8(lVar7,param_3);
    param_3 = puVar13;
    if (iVar2 == 0) {
      func_0x004464bc();
      uVar8 = 0x39;
      goto LAB_00396574;
    }
LAB_00396518:
    uVar9 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return uVar9;
  }
  auVar18 = ___stack_chk_fail(uVar9);
  piVar11 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
/* wm:stripping the watermark breaks the license */
  lStack_140 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    lVar7 = *(long *)((long)&dylib_command_00001020.cmd + lVar6);
    lVar15 = *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      lVar6 + 0x20);
    lVar14 = *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      lVar6 + 0x28);
    if ((lVar7 == 0) && (*(long *)((long)&dylib_command_00001020.dylib.name.offset + lVar6) == 0)) {
      func_0x004464bc();
      uVar8 = 0x74;
      goto code_r0x00396660;
    }
    if (piVar11[1] != 0x15) {
      iVar2 = (int)param_3;
      if (*(long *)((long)&dylib_command_00001020.dylib.name.offset + lVar6) != 0) {
        uVar9 = func_0x0045c5ec();
        if (iVar2 == 0) goto code_r0x00396708;
code_r0x003966d0:
        lVar17 = uVar9 - 7;
        if (uVar9 < 7 || lVar17 == 0) goto code_r0x003966d8;
code_r0x0039672c:
        lVar16 = uVar9 - 8;
        _memcpy(lVar14,lVar15,lVar16);
        *(byte *)(lVar14 + lVar16) = *(byte *)(lVar6 + 0x1000) ^ *(byte *)(lVar15 + lVar16);
        *(byte *)(lVar14 + lVar17) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[lVar6 + 0x29] ^
             *(byte *)(lVar15 + lVar17);
        *(byte *)(lVar14 + (uVar9 - 6)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[lVar6 + 0x2a] ^
             *(byte *)(lVar15 + (uVar9 - 6));
        *(byte *)(lVar14 + (uVar9 - 5)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[lVar6 + 0x2b] ^
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
             *(byte *)(lVar15 + (uVar9 - 5));
        *(byte *)(lVar14 + (uVar9 - 4)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[lVar6 + 0x2c] ^
             *(byte *)(lVar15 + (uVar9 - 4));
        *(byte *)(lVar14 + (uVar9 - 3)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[lVar6 + 0x2d] ^
             *(byte *)(lVar15 + (uVar9 - 3));
        *(byte *)(lVar14 + (uVar9 - 2)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[lVar6 + 0x2e] ^
             *(byte *)(lVar15 + (uVar9 - 2));
        *(byte *)(lVar14 + (uVar9 - 1)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[lVar6 + 0x2f] ^
             *(byte *)(lVar15 + (uVar9 - 1));
        uVar10 = func_0x0039af18(lVar6);
        if ((int)uVar10 != 0) {
          iVar4 = func_0x019ebb80(auStack_1d0,auStack_185,5,0);
          if (((iVar4 == 0) || (iVar4 = func_0x019ec0a0(auStack_1d0,(long)piVar11[1],1), iVar4 == 0)
              ) || ((iVar4 = func_0x019ec0a0(auStack_1d0,(long)*piVar11,2), iVar4 == 0 ||
                    ((((iVar4 = func_0x019ec0a0(auStack_1d0,
                                                *(long *)(
                                                  "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                                  + lVar6 + 0x38) + *(long *)(piVar11 + 2),2),
                       iVar4 == 0 || (iVar4 = func_0x019ec1d8(auStack_1d0,&lStack_190), iVar4 == 0))
                      || (lStack_190 != 5)) || (iVar4 = func_0x004765c8(auStack_1d0), iVar4 == 0))))
                   )) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                            ,0xb4,&UNK_01c397f7);
            func_0x00397da4(lVar6,0x50,&UNK_000c0103,0);
            func_0x0047680c(auStack_1d0);
            goto code_r0x0039667c;
          }
          if (*(long *)((long)&dylib_command_00001020.dylib.name.offset + lVar6) == 0) {
            lVar15 = func_0x00440550(lVar7);
            if (lVar15 == 0) {
              func_0x004464bc();
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
              uVar8 = 0xd5;
            }
            else {
              iVar4 = func_0x004553d8();
              iVar5 = func_0x019e9b88(lVar7,0,0,0,lVar14,param_3);
              if ((iVar5 < 1) ||
                 ((iVar2 == 0 &&
                  (iVar5 = func_0x00452c6c(lVar7,0x11,
                                           *(undefined4 *)
                                            (
                                            "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                            + lVar6 + 0x38),
                                           *(long *)(piVar11 + 8) + *(long *)(piVar11 + 2)),
                  iVar5 < 1)))) {
                func_0x004464bc();
                uVar8 = 0xdc;
              }
              else {
                if (((iVar4 == 7) &&
// WM - no support for modified copies
                    (iVar4 = func_0x00452688(lVar7,0,aiStack_180,0,piVar11[2]), iVar4 < 1)) ||
                   ((iVar4 = func_0x00452688(lVar7,0,aiStack_180,auStack_185,5), iVar4 < 1 ||
                    ((iVar4 = func_0x00452688(lVar7,*(undefined8 *)(piVar11 + 8),aiStack_180,
                                              *(undefined8 *)(piVar11 + 10),piVar11[2]), iVar4 < 1
                     || (iVar4 = func_0x00452698(lVar7,*(long *)(piVar11 + 8) + (long)aiStack_180[0]
                                                 ,aiStack_198), iVar4 < 1))))))
                goto code_r0x0039667c;
                lVar14 = (long)aiStack_198[0] + (long)aiStack_180[0];
                uVar10 = (ulong)(*(long *)(piVar11 + 2) == lVar14);
                if ((iVar2 == 0) || (*(long *)(piVar11 + 2) != lVar14)) goto code_r0x00396680;
                iVar2 = func_0x00452c6c(lVar7,0x10,
                                        *(undefined4 *)
                                         (
                                         "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                         + lVar6 + 0x38),*(long *)(piVar11 + 8) + lVar14);
                if (0 < iVar2) {
                  *(long *)(piVar11 + 2) =
                       *(long *)(piVar11 + 2) +
                       *(long *)(
                                "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                + lVar6 + 0x38);
                  goto code_r0x00396640;
                }
                func_0x004464bc();
                uVar8 = 0xf7;
              }
            }
            goto code_r0x00396660;
          }
          lVar7 = func_0x0045c4f8();
          if ((((lVar7 == 0) || (iVar4 = func_0x0045c708(lVar7,lVar14,uVar9), iVar4 == 0)) ||
              (iVar4 = func_0x0045c708(lVar7,auStack_185,5), iVar4 == 0)) ||
             ((iVar4 = func_0x0045c708(lVar7,*(undefined8 *)(piVar11 + 10),
                                       *(undefined8 *)(piVar11 + 2)), iVar4 == 0 ||
              (iVar4 = func_0x0045c714(lVar7,aiStack_180,aiStack_198,
                                       *(undefined8 *)
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                                        (
                                        "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                        + lVar6 + 0x38)), iVar4 == 0)))) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                            ,0xc1,&UNK_01c397f7);
            func_0x00397da4(lVar6,0x50,&UNK_000c0103,0);
code_r0x003969b4:
            uVar10 = 0;
          }
          else {
            if (iVar2 == 0) {
              iVar2 = func_0x0046eb60(aiStack_180,*(long *)(piVar11 + 8) + *(long *)(piVar11 + 2),
                                      *(undefined8 *)
                                       (
                                       "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                       + lVar6 + 0x38));
              if (iVar2 != 0) goto code_r0x003969b4;
            }
            else {
              _memcpy(*(long *)(piVar11 + 8) + *(long *)(piVar11 + 2),aiStack_180);
              *(long *)(piVar11 + 2) =
                   *(long *)(piVar11 + 2) +
                   *(long *)(
                            "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                            + lVar6 + 0x38);
            }
            uVar10 = 1;
          }
          func_0x0045c4a8(lVar7);
        }
        goto code_r0x00396680;
/*  reversing this took months of machine time  */
      }
      uVar3 = func_0x00455298(lVar7);
      if ((int)uVar3 < 0) {
        func_0x004464bc();
        uVar8 = 0x8c;
        goto code_r0x00396660;
      }
      uVar9 = (ulong)uVar3;
      if (iVar2 != 0) goto code_r0x003966d0;
code_r0x00396708:
      if (*(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                   lVar6 + 0x38) + 1U <= *(ulong *)(piVar11 + 2)) {
        *(ulong *)(piVar11 + 2) =
             *(ulong *)(piVar11 + 2) -
             *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      lVar6 + 0x38);
        lVar17 = uVar9 - 7;
        if (uVar9 < 7 || lVar17 == 0) {
code_r0x003966d8:
          func_0x004464bc();
          uVar8 = 0x9f;
          goto code_r0x00396660;
        }
        goto code_r0x0039672c;
      }
      goto code_r0x0039667c;
    }
    _memmove(*(undefined8 *)(piVar11 + 8),*(undefined8 *)(piVar11 + 10),*(undefined8 *)(piVar11 + 2)
            );
    *(undefined8 *)(piVar11 + 10) = *(undefined8 *)(piVar11 + 8);
code_r0x00396640:
    uVar10 = 1;
  }
  else {
// WM - unlicensed copy if this notice is missing
    func_0x004464bc();
    uVar8 = 0x6b;
code_r0x00396660:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                    ,uVar8,&UNK_01c397f7);
    func_0x00397da4(lVar6,0x50,&UNK_000c0103,0);
code_r0x0039667c:
    uVar10 = 0;
  }
code_r0x00396680:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_140) {
    return uVar10;
  }
  auVar18 = ___stack_chk_fail(uVar10);
  piVar11 = auVar18._8_8_;
  lVar6 = auVar18._0_8_;
  iVar2 = piVar11[1];
  if (iVar2 != 0x17) {
    if (iVar2 == 0x15) {
      iVar2 = *(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      lVar6 + 0x30);
    }
    else {
      if (iVar2 != 0x14) goto code_r0x00396ba0;
      iVar2 = *(int *)(
                      "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                      + lVar6 + 0x10);
    }
    if (iVar2 == 0) {
code_r0x00396ba0:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                      ,0x107,&UNK_01c39804);
      func_0x00397da4(lVar6,10,0x1bb,0);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      return 0;
    }
  }
  if (*piVar11 != 0x303) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                    ,0x10c,&UNK_01c39804);
    func_0x00397da4(lVar6,0x32,0x10b,0);
    return 0;
  }
  if (*(undefined **)(piVar11 + 2) < &UNK_00004101) {
    return 1;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                  ,0x112,&UNK_01c39804);
  func_0x00397da4(lVar6,0x16,0x96,0);
  return 0;
}

