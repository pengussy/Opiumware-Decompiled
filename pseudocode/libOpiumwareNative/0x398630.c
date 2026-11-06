/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x398630:95ebe96b37
 */

/* WARNING: Possible PIC construction at 0x00398de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00398e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00398de8) */
/* WARNING: Removing unreachable block (ram,0x00398e2c) */
/* WARNING: Removing unreachable block (ram,0x00398e30) */

undefined8 FUN_00398630(long param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long *plVar23;
  long lVar24;
  undefined1 *puVar25;
  undefined1 auVar26 [16];
/* keep the notice, keep the source honest */
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [64];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  if (*(long *)(param_1 + 0x6a0) != 0) {
LAB_00398678:
    lVar17 = param_1 + 0x6d0;
    lVar10 = 0;
    lVar12 = 0;
    lVar18 = 0;
    if (*(long *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x38) !=
        0) {
      lVar18 = *(long *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                        param_1 + 0x38) + -1;
    }
    do {
      lVar19 = lVar12;
      lVar15 = lVar10;
      puVar2 = (uint *)(param_1 + lVar15 + 0x6d0);
      if ((*(int *)(param_1 + 0xfe8) != 0xf1) || (*(ulong *)(param_1 + 0xff8) < 5)) {
        param_3 = *(long *)(param_1 + 0x6b0);
        uVar9 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x20))
                          (param_1,5,param_3,0,lVar19 == 0,auStack_b0);
        iVar8 = (int)param_3;
        if ((int)uVar9 < 1) goto LAB_00398b7c;
        *(undefined4 *)(param_1 + 0xfe8) = 0xf1;
        uVar16 = *(ulong *)(param_1 + 0xff8);
        if ((long)uVar16 < 0) {
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0x250,"tls_get_more_records");
          uVar9 = 0x50;
        }
        else {
          pbVar14 = *(byte **)(param_1 + 0xff0);
          if (((uVar16 != 0) && (2 < uVar16)) && (1 < uVar16 - 3)) {
            bVar4 = *pbVar14;
            uVar5 = *(ushort *)(pbVar14 + 1);
            lVar10 = param_1 + lVar15;
            *(ulong *)(lVar10 + 0x6d8) =
                 (ulong)((uint)(*(ushort *)(pbVar14 + 3) >> 8) |
                        (*(ushort *)(pbVar14 + 3) & 0xff00ff) << 8);
            *(uint *)(lVar10 + 0x6d4) = (uint)bVar4;
            *puVar2 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
            if (*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                          param_1 + 0x20) != (code *)0x0) {
/* donate: donate/README.md */
              param_3 = 0x100;
              (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                          param_1 + 0x20))(0);
            }
            iVar6 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x30))
                              (param_1,puVar2);
            iVar8 = (int)param_3;
            if (iVar6 == 0) goto LAB_00398b78;
            if (*(ulong *)(lVar10 + 0x6d8) <= *(long *)(param_1 + 0x6b0) - 5U) goto LAB_00398788;
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                            ,0x26a,"tls_get_more_records");
            uVar9 = 0x16;
            iVar8 = 0xc6;
            goto LAB_00398b70;
          }
// thanks for reading - discord.gg/sdkhDjTex
          if (*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                        param_1 + 0x20) != (code *)0x0) {
            (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                        param_1 + 0x20))
                      (0,0,0x100,pbVar14,5,
                       *(undefined8 *)
                        ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                        param_1 + 0x10));
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0x25a,"tls_get_more_records");
          uVar9 = 0x32;
        }
        iVar8 = 0xc0103;
        goto LAB_00398b70;
      }
LAB_00398788:
      uVar7 = *puVar2;
      lVar10 = param_1 + lVar15;
      lVar12 = *(long *)(lVar10 + 0x6d8) + -3;
      if (uVar7 != 2) {
        lVar12 = *(long *)(lVar10 + 0x6d8);
      }
      if (lVar12 != 0) {
        uVar9 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x20))
                          (param_1,lVar12,lVar12,1,0,auStack_b0);
        iVar8 = (int)lVar12;
        if ((int)uVar9 < 1) goto LAB_00398b7c;
        uVar7 = *puVar2;
        param_3 = lVar12;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      }
      iVar8 = (int)param_3;
      *(undefined4 *)(param_1 + 0xfe8) = 0xf0;
      lVar12 = 2;
      if (uVar7 != 2) {
        lVar12 = 5;
      }
      lVar12 = *(long *)(param_1 + 0xff0) + lVar12;
      *(long *)(lVar10 + 0x6f8) = lVar12;
      *(long *)(lVar10 + 0x6f0) = lVar12;
      *(undefined8 *)(lVar10 + 0x6e0) = *(undefined8 *)(lVar10 + 0x6d8);
      *(undefined8 *)(param_1 + 0xff8) = 0;
      pcVar1 = "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
               param_1 + 0x34;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      if (lVar18 == lVar19) goto LAB_003988b0;
      if (*(int *)(param_1 + lVar15 + 0x6d4) != 0x17) goto LAB_003988ac;
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 < 0xfefd) {
// WM - proprietary - see LICENSE - do not sell
        if ((1 < iVar6 - 0x302U) && (iVar6 != 0x100)) goto LAB_003988ac;
      }
      else if ((iVar6 != 0xfeff) && (iVar6 != 0xfefd)) goto LAB_003988ac;
      if (*(long *)((long)&dylib_command_00001020.cmd + param_1) == 0) goto LAB_003988ac;
      func_0x00440550();
      uVar7 = func_0x00440340();
      iVar8 = (int)param_3;
      if ((((uVar7 >> 0x17 & 1) == 0) || (*(long *)(param_1 + 0x6a0) == 0)) ||
         ((*(ulong *)(param_1 + 0x6c0) < 5 ||
          (pcVar1 = (char *)(*(long *)(param_1 + 0x6a0) + *(long *)(param_1 + 0x6b8)),
          *pcVar1 != '\x17')))) goto LAB_003988ac;
      uVar5 = *(ushort *)(pcVar1 + 3);
      lVar10 = lVar15 + 0x48;
      lVar12 = lVar19 + 1;
      if (*(ulong *)(param_1 + 0x6c0) < (ulong)((uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8) + 5)
      goto LAB_003988ac;
    } while( true );
  }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  iVar6 = func_0x00398220(param_1);
  iVar8 = (int)param_3;
  if (iVar6 != 0) goto LAB_00398678;
LAB_00398b78:
  uVar9 = 0xfffffffe;
  goto LAB_00398b7c;
LAB_003988ac:
  lVar18 = lVar19;
LAB_003988b0:
  if ((((lVar18 == 0) && (lVar15 = param_1 + lVar15, *(int *)(lVar15 + 0x6d4) == 0x14)) &&
      (*(int *)(param_1 + 0x14) == 0x304)) &&
     (*(int *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
              param_1 + 0x10) != 0)) {
    if ((*(long *)(lVar15 + 0x6d8) == 1) && (**(char **)(lVar15 + 0x6f0) == '\x01')) {
      if (*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20)
          != (code *)0x0) {
        iVar8 = 0x14;
/* WM - if you paid for this, you were scammed */
        (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x20)
        )(0,0x304,0x14,*(char **)(lVar15 + 0x6f0),1,
          *(undefined8 *)
           ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x10));
      }
      *(undefined4 *)(lVar15 + 0x6d4) = 0x16;
      lVar17 = *(long *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                        param_1 + 0x38);
      *(ulong *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                param_1 + 0x38) = lVar17 + 1U;
      if (lVar17 + 1U < 0x21) {
        *(undefined8 *)(param_1 + 0xfe0) = 0;
        *(undefined8 *)(param_1 + 0xfd8) = 0;
        *(undefined8 *)(param_1 + 0xfd0) = 0;
        uVar9 = 1;
        goto LAB_00398b7c;
/* wm:chat: discord.gg/sdkhDjTex */
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x2c7,"tls_get_more_records");
      uVar9 = 10;
      iVar8 = 0x106;
    }
    else {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x2ba,"tls_get_more_records");
      uVar9 = 10;
      iVar8 = 0x104;
    }
LAB_00398b70:
    func_0x00397da4(param_1,uVar9,iVar8,0);
    goto LAB_00398b78;
  }
  if ((*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
                param_1) == 0) || (lVar10 = func_0x00440550(), lVar10 == 0)) {
    puVar21 = (undefined1 *)0x0;
    if (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                param_1 + 0x10) == 0) {
LAB_00398a0c:
      if (puVar21 == (undefined1 *)0x0) goto LAB_00398aa8;
      plVar11 = (long *)func_0x0046f1f4(lVar19 + 1,0x10,
                                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                                        ,0x2fd);
      if (plVar11 == (long *)0x0) {
        func_0x004464bc();
// WM - unlicensed copy if this notice is missing
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                        ,0x2ff,"tls_get_more_records");
        uVar9 = 0x50;
        iVar8 = 0x8000f;
        goto LAB_00398b70;
      }
    }
    else {
LAB_003989a0:
      lVar10 = lVar19 + 1;
      if (*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                   + param_1) == 0) goto LAB_00398a0c;
      lVar12 = lVar17;
      do {
        lVar15 = (long)*(undefined1 **)(lVar12 + 8) - (long)puVar21;
        if (*(undefined1 **)(lVar12 + 8) < puVar21) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0x2e9,"tls_get_more_records");
          uVar9 = 0x32;
          iVar8 = 0xa0;
          goto LAB_00398b70;
        }
        *(long *)(lVar12 + 8) = lVar15;
        lVar24 = *(long *)(lVar12 + 0x20);
        iVar6 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x10))
                          (param_1,lVar12,auStack_a8,0);
        if ((iVar6 == 0) ||
           (iVar6 = func_0x0046eb60(auStack_a8,lVar24 + lVar15,puVar21), iVar6 != 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                          ,0x2f1,"tls_get_more_records");
          uVar9 = 0x14;
          iVar8 = 0x119;
          goto LAB_00398b70;
        }
        lVar12 = lVar12 + 0x48;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      puVar21 = (undefined1 *)0x0;
LAB_00398aa8:
      plVar11 = (long *)0x0;
    }
    puVar20 = (undefined1 *)(lVar19 + 1);
    func_0x00446890();
    puVar13 = puVar20;
    iVar6 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 8))
                      (param_1,lVar17,puVar20,0,plVar11,puVar21);
    iVar8 = (int)puVar13;
    if (iVar6 == 0) {
      if (*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                  param_1 + 0x30) == -1) {
        if (((lVar18 == 0) &&
            (*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                       param_1 + 0x18) != (code *)0x0)) &&
           (iVar6 = (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                                param_1 + 0x18))
                              (*(undefined8 *)
                                ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                                param_1 + 0x10)), iVar6 != 0)) {
          func_0x004468d8();
          lVar17 = *(long *)(param_1 + 0x6d8);
          iVar8 = 0x68;
          goto code_r0x00398f2c;
        }
// stripping the watermark breaks the license
        func_0x00446a74();
        func_0x004464bc();
        uVar9 = 0x334;
LAB_00398cb0:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                        ,uVar9,"tls_get_more_records");
        uVar9 = 0x14;
        iVar8 = 0x119;
LAB_00398db0:
        func_0x00397da4(param_1,uVar9,iVar8,0);
        uVar9 = 0xfffffffe;
      }
      else {
        func_0x00446a74();
        uVar9 = 0xfffffffe;
      }
    }
    else {
      func_0x00446a74();
      puVar22 = puVar20;
      if (((*(long *)((long)&dylib_command_00001020.cmd + param_1) == 0) ||
          (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                   param_1 + 0x10) != 0)) ||
// WM - watermarked copy - do not remove
         (lVar18 = func_0x00440550(*(undefined8 *)
                                    (
                                    "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                    + param_1)), lVar18 == 0)) {
LAB_00398d14:
        do {
          iVar6 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x38))
                            (param_1,lVar17);
          iVar8 = (int)puVar13;
          if (iVar6 == 0) goto LAB_00398e84;
          uVar7 = *(uint *)(
                           "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                           + param_1 + 0x14);
          uVar16 = *(ulong *)(lVar17 + 8);
          if ((uVar7 != 0x4000 && uVar7 <= uVar16) && (uVar7 == 0x4000 || uVar16 != uVar7)) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                            ,0x37c,"tls_get_more_records");
            uVar9 = 0x16;
            iVar8 = 0x92;
            goto LAB_00398db0;
          }
          *(undefined8 *)(lVar17 + 0x18) = 0;
          if (uVar16 == 0) {
            lVar18 = *(long *)(
                              "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"
                              + param_1 + 0x38);
            *(ulong *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                      param_1 + 0x38) = lVar18 + 1U;
            if (0x20 < lVar18 + 1U) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                              ,0x38d,"tls_get_more_records");
              uVar9 = 10;
              iVar8 = 0x12a;
              goto LAB_00398db0;
            }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          }
          else {
            pcVar1 = "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                     param_1 + 0x38;
            pcVar1[0] = '\0';
            pcVar1[1] = '\0';
            pcVar1[2] = '\0';
            pcVar1[3] = '\0';
            pcVar1[4] = '\0';
            pcVar1[5] = '\0';
            pcVar1[6] = '\0';
            pcVar1[7] = '\0';
          }
          lVar17 = lVar17 + 0x48;
          puVar22 = puVar22 + -1;
        } while (puVar22 != (undefined1 *)0x0);
        if ((*(int *)(param_1 + 0x20) == 1) && (*(int *)(param_1 + 0x6d4) == 0x17)) {
          lVar17 = *(long *)(param_1 + 0x6d8);
          iVar8 = 0;
          goto code_r0x00398f2c;
        }
        *(undefined1 **)(param_1 + 0xfd0) = puVar20;
        *(undefined8 *)(param_1 + 0xfe0) = 0;
        *(undefined8 *)(param_1 + 0xfd8) = 0;
        uVar9 = 1;
      }
      else {
        if (plVar11 == (long *)0x0) {
          puVar21 = puVar20;
/* WM - keep the notice, keep the source honest */
          do {
            puVar13 = auStack_a8;
            (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x10))
                      (param_1,lVar17,puVar13,0);
            iVar8 = (int)puVar13;
            lVar17 = lVar17 + 0x48;
            puVar21 = puVar21 + -1;
          } while (puVar21 != (undefined1 *)0x0);
        }
        else {
          lVar18 = lVar17;
          plVar23 = plVar11;
          puVar25 = puVar20;
          do {
            puVar13 = auStack_a8;
            iVar8 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x10))
                              (param_1,lVar18,puVar13,0);
            if ((iVar8 == 0) || (*plVar23 == 0)) {
LAB_00398c34:
              iVar6 = 0;
            }
            else {
              puVar13 = puVar21;
              iVar8 = func_0x0046eb60(auStack_a8);
              if (iVar8 != 0) goto LAB_00398c34;
            }
            iVar8 = (int)puVar13;
            iVar3 = 0;
            if (*(undefined1 **)(lVar18 + 8) <= puVar21 + 0x4400) {
              iVar3 = iVar6;
            }
            lVar18 = lVar18 + 0x48;
            plVar23 = plVar23 + 2;
            puVar25 = puVar25 + -1;
            iVar6 = iVar3;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          } while (puVar25 != (undefined1 *)0x0);
          if (iVar3 != 0) goto LAB_00398d14;
        }
        if (*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                    param_1 + 0x30) == -1) {
          func_0x004464bc();
          uVar9 = 0x364;
          goto LAB_00398cb0;
        }
LAB_00398e84:
        uVar9 = 0xfffffffe;
      }
    }
    if (plVar11 != (long *)0x0) {
      plVar23 = plVar11 + 1;
      do {
        if ((int)*plVar23 != 0) {
          func_0x004743e4(plVar23[-1],
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0x3a6);
        }
        puVar20 = puVar20 + -1;
        plVar23 = plVar23 + 2;
      } while (puVar20 != (undefined1 *)0x0);
      iVar8 = 0x3a8;
      func_0x004743e4(plVar11,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                     );
    }
  }
  else {
    uVar7 = func_0x00455f40();
    if (uVar7 - 1 < 0x40) {
      puVar21 = (undefined1 *)(ulong)uVar7;
      if (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  param_1 + 0x10) != 0) goto LAB_003989a0;
      goto LAB_00398a0c;
    }
/* chat: discord.gg/sdkhDjTex */
    func_0x019e7080(param_1);
    uVar9 = 0xfffffffe;
  }
LAB_00398b7c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar9;
  }
  auVar26 = ___stack_chk_fail(uVar9);
  lVar17 = auVar26._8_8_;
  param_1 = auVar26._0_8_;
code_r0x00398f2c:
  if (*(int *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
              param_1 + 0x18) == 0) {
    func_0x004464bc();
    uVar9 = 0x1f8;
  }
  else {
    if ((ulong)(*(long *)(
                         "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                         + param_1 + 0x20) + lVar17) <=
        (ulong)(uint)(*(int *)(
                              "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                              + param_1 + 0x18) + iVar8)) {
      *(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
               param_1 + 0x20) =
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
           *(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                    + param_1 + 0x20) + lVar17;
      return 1;
    }
    func_0x004464bc();
    uVar9 = 0x201;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,uVar9,&UNK_01c39bed);
  func_0x00397da4(param_1,10,0xa4,0);
  return 0;
}

