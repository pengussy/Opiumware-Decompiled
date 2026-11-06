/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3965c8:70aa8398c5
 */

ulong FUN_003965c8(long param_1,int *param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_100 [56];
  int aiStack_c8 [2];
  long lStack_c0;
  undefined1 auStack_b5 [5];
  int aiStack_b0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_3 == 1) {
    lVar9 = *(long *)((long)&dylib_command_00001020.cmd + param_1);
    lVar11 = *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      param_1 + 0x20);
    lVar10 = *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
/* wm:if you paid for this, you were scammed */
                      param_1 + 0x28);
    if ((lVar9 == 0) && (*(long *)((long)&dylib_command_00001020.dylib.name.offset + param_1) == 0))
    {
      func_0x004464bc();
      uVar7 = 0x74;
      goto LAB_00396660;
    }
    if (param_2[1] != 0x15) {
      iVar4 = (int)param_4;
      if (*(long *)((long)&dylib_command_00001020.dylib.name.offset + param_1) != 0) {
        uVar6 = func_0x0045c5ec();
        if (iVar4 == 0) goto LAB_00396708;
LAB_003966d0:
        lVar13 = uVar6 - 7;
        if (uVar6 < 7 || lVar13 == 0) goto LAB_003966d8;
LAB_0039672c:
        lVar12 = uVar6 - 8;
        _memcpy(lVar10,lVar11,lVar12);
        *(byte *)(lVar10 + lVar12) = *(byte *)(param_1 + 0x1000) ^ *(byte *)(lVar11 + lVar12);
        *(byte *)(lVar10 + lVar13) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x29]
             ^ *(byte *)(lVar11 + lVar13);
/*  stripping the watermark breaks the license  */
        *(byte *)(lVar10 + (uVar6 - 6)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2a]
             ^ *(byte *)(lVar11 + (uVar6 - 6));
        *(byte *)(lVar10 + (uVar6 - 5)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2b]
             ^ *(byte *)(lVar11 + (uVar6 - 5));
        *(byte *)(lVar10 + (uVar6 - 4)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2c]
             ^ *(byte *)(lVar11 + (uVar6 - 4));
        *(byte *)(lVar10 + (uVar6 - 3)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2d]
             ^ *(byte *)(lVar11 + (uVar6 - 3));
        *(byte *)(lVar10 + (uVar6 - 2)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2e]
             ^ *(byte *)(lVar11 + (uVar6 - 2));
        *(byte *)(lVar10 + (uVar6 - 1)) =
             "/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore"[param_1 + 0x2f]
             ^ *(byte *)(lVar11 + (uVar6 - 1));
        uVar5 = func_0x0039af18(param_1);
        if ((int)uVar5 != 0) {
          iVar2 = func_0x019ebb80(auStack_100,auStack_b5,5,0);
          if (((((iVar2 == 0) ||
                (iVar2 = func_0x019ec0a0(auStack_100,(long)param_2[1],1), iVar2 == 0)) ||
               (iVar2 = func_0x019ec0a0(auStack_100,(long)*param_2,2), iVar2 == 0)) ||
              ((iVar2 = func_0x019ec0a0(auStack_100,
                                        *(long *)(
                                                 "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                                 + param_1 + 0x38) + *(long *)(param_2 + 2),2),
               iVar2 == 0 || (iVar2 = func_0x019ec1d8(auStack_100,&lStack_c0), iVar2 == 0)))) ||
             ((lStack_c0 != 5 || (iVar2 = func_0x004765c8(auStack_100), iVar2 == 0)))) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                            ,0xb4,"tls13_cipher");
            func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
            func_0x0047680c(auStack_100);
            goto LAB_0039667c;
/* do not claim this as your own - github.com/pengussy */
          }
          if (*(long *)((long)&dylib_command_00001020.dylib.name.offset + param_1) == 0) {
            lVar11 = func_0x00440550(lVar9);
            if (lVar11 == 0) {
              func_0x004464bc();
              uVar7 = 0xd5;
            }
            else {
              iVar2 = func_0x004553d8();
              iVar3 = func_0x019e9b88(lVar9,0,0,0,lVar10,param_4);
              if ((iVar3 < 1) ||
                 ((iVar4 == 0 &&
                  (iVar3 = func_0x00452c6c(lVar9,0x11,
                                           *(undefined4 *)
                                            (
                                            "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                            + param_1 + 0x38),
/* more drops soon - github.com/pengussy */
                                           *(long *)(param_2 + 8) + *(long *)(param_2 + 2)),
                  iVar3 < 1)))) {
                func_0x004464bc();
                uVar7 = 0xdc;
              }
              else {
                if ((((iVar2 == 7) &&
                     (iVar2 = func_0x00452688(lVar9,0,aiStack_b0,0,param_2[2]), iVar2 < 1)) ||
                    (iVar2 = func_0x00452688(lVar9,0,aiStack_b0,auStack_b5,5), iVar2 < 1)) ||
                   ((iVar2 = func_0x00452688(lVar9,*(undefined8 *)(param_2 + 8),aiStack_b0,
                                             *(undefined8 *)(param_2 + 10),param_2[2]), iVar2 < 1 ||
                    (iVar2 = func_0x00452698(lVar9,*(long *)(param_2 + 8) + (long)aiStack_b0[0],
                                             aiStack_c8), iVar2 < 1)))) goto LAB_0039667c;
                lVar10 = (long)aiStack_c8[0] + (long)aiStack_b0[0];
                uVar5 = (ulong)(*(long *)(param_2 + 2) == lVar10);
                if ((iVar4 == 0) || (*(long *)(param_2 + 2) != lVar10)) goto LAB_00396680;
                iVar4 = func_0x00452c6c(lVar9,0x10,
                                        *(undefined4 *)
                                         (
                                         "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                         + param_1 + 0x38),*(long *)(param_2 + 8) + lVar10);
                if (0 < iVar4) {
                  *(long *)(param_2 + 2) =
                       *(long *)(param_2 + 2) +
                       *(long *)(
                                "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                + param_1 + 0x38);
                  goto LAB_00396640;
                }
// WM - chat: discord.gg/sdkhDjTex
                func_0x004464bc();
                uVar7 = 0xf7;
              }
            }
            goto LAB_00396660;
          }
          lVar9 = func_0x0045c4f8();
          if (((lVar9 == 0) || (iVar2 = func_0x0045c708(lVar9,lVar10,uVar6), iVar2 == 0)) ||
             ((iVar2 = func_0x0045c708(lVar9,auStack_b5,5), iVar2 == 0 ||
              ((iVar2 = func_0x0045c708(lVar9,*(undefined8 *)(param_2 + 10),
                                        *(undefined8 *)(param_2 + 2)), iVar2 == 0 ||
               (iVar2 = func_0x0045c714(lVar9,aiStack_b0,aiStack_c8,
                                        *(undefined8 *)
                                         (
                                         "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                         + param_1 + 0x38)), iVar2 == 0)))))) {
            func_0x004464bc();
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                            ,0xc1,"tls13_cipher");
            func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
LAB_003969b4:
            uVar5 = 0;
          }
          else {
            if (iVar4 == 0) {
              iVar4 = func_0x0046eb60(aiStack_b0,*(long *)(param_2 + 8) + *(long *)(param_2 + 2),
                                      *(undefined8 *)
                                       (
                                       "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                       + param_1 + 0x38));
              if (iVar4 != 0) goto LAB_003969b4;
            }
            else {
              _memcpy(*(long *)(param_2 + 8) + *(long *)(param_2 + 2),aiStack_b0);
              *(long *)(param_2 + 2) =
                   *(long *)(param_2 + 2) +
                   *(long *)(
                            "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                            + param_1 + 0x38);
            }
/* watermarked copy - do not remove - github.com/pengussy */
            uVar5 = 1;
          }
          func_0x0045c4a8(lVar9);
        }
        goto LAB_00396680;
      }
      uVar1 = func_0x00455298(lVar9);
      if ((int)uVar1 < 0) {
        func_0x004464bc();
        uVar7 = 0x8c;
        goto LAB_00396660;
      }
      uVar6 = (ulong)uVar1;
      if (iVar4 != 0) goto LAB_003966d0;
LAB_00396708:
      if (*(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                   param_1 + 0x38) + 1U <= *(ulong *)(param_2 + 2)) {
        *(ulong *)(param_2 + 2) =
             *(ulong *)(param_2 + 2) -
             *(long *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      param_1 + 0x38);
        lVar13 = uVar6 - 7;
        if (uVar6 < 7 || lVar13 == 0) {
LAB_003966d8:
          func_0x004464bc();
          uVar7 = 0x9f;
          goto LAB_00396660;
/*  thanks for reading - discord.gg/sdkhDjTex  */
        }
        goto LAB_0039672c;
      }
      goto LAB_0039667c;
    }
    _memmove(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 10),*(undefined8 *)(param_2 + 2)
            );
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 8);
LAB_00396640:
    uVar5 = 1;
  }
  else {
    func_0x004464bc();
    uVar7 = 0x6b;
LAB_00396660:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
// reversing this took months of machine time
                    ,uVar7,"tls13_cipher");
    func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
LAB_0039667c:
    uVar5 = 0;
  }
LAB_00396680:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar5;
  }
  auVar14 = ___stack_chk_fail(uVar5);
  piVar8 = auVar14._8_8_;
  lVar9 = auVar14._0_8_;
  iVar4 = piVar8[1];
  if (iVar4 != 0x17) {
    if (iVar4 == 0x15) {
      iVar4 = *(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                      lVar9 + 0x30);
    }
    else {
      if (iVar4 != 0x14) goto code_r0x00396ba0;
      iVar4 = *(int *)(
                      "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                      + lVar9 + 0x10);
    }
    if (iVar4 == 0) {
code_r0x00396ba0:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                      ,0x107,&UNK_01c39804);
      func_0x00397da4(lVar9,10,0x1bb,0);
      return 0;
    }
  }
  if (*piVar8 != 0x303) {
    func_0x004464bc();
/* unlicensed copy if this notice is missing */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                    ,0x10c,&UNK_01c39804);
    func_0x00397da4(lVar9,0x32,0x10b,0);
    return 0;
  }
  if (*(undefined **)(piVar8 + 2) < &UNK_00004101) {
    return 1;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls13_meth.c"
                  ,0x112,&UNK_01c39804);
  func_0x00397da4(lVar9,0x16,0x96,0);
  return 0;
}

