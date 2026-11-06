/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ba260:c65f5ebb38
 */

void FUN_003ba260(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined *puVar13;
  char *pcVar14;
  uint uVar15;
  code *pcVar16;
  int *piVar17;
  char *unaff_x21;
  ulong unaff_x22;
  undefined8 *puVar18;
  long lVar19;
  long lStack_f8;
  undefined4 uStack_ec;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  int iStack_d0;
  int iStack_cc;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  long lStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar19 = *(long *)(param_1 + 0xd40);
  uStack_ec = 0;
  uVar6 = unaff_x22;
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar5 = **(int **)(param_1 + 0x18), 0x303 < iVar5)) && (iVar5 != 0x10000)) {
    unaff_x21 = (char *)func_0x003542a0(param_1);
    uVar6 = func_0x00455f40();
    if ((int)uVar6 < 1) {
      func_0x019e7cb4(param_1);
      uVar6 = unaff_x22;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      goto LAB_003ba7fc;
    }
    if ((*(long *)(&UNK_00001710 + param_1) == 0) && (*(int *)(param_1 + 0x508) == 0)) {
      uVar8 = func_0x003614bc(param_1,*(undefined8 *)(param_1 + 0x900));
      iVar5 = (int)uVar8;
    }
    else {
      lVar7 = func_0x003614a0(*(undefined8 *)(param_1 + 0x900),0);
      uVar8 = 0;
      if (lVar7 == 0) goto LAB_003ba800;
      func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
      *(long *)(param_1 + 0x900) = lVar7;
      uVar8 = func_0x003614bc(param_1,lVar7);
      iVar5 = (int)uVar8;
    }
    if (iVar5 == 0) goto LAB_003ba800;
    iVar5 = func_0x004b242c(**(undefined8 **)(param_1 + 8),&uStack_ec,4,0);
    if (iVar5 < 1) {
      func_0x004464bc();
      pcVar12 = "tls_construct_new_session_ticket";
      pcVar14 = "m/Library/Frameworks/Security.framework/Versions/A/Security";
      goto LAB_003ba678;
    }
    uVar6 = uVar6 & 0xffffffff;
    lVar7 = *(long *)(param_1 + 0x900);
    *(undefined4 *)(lVar7 + 0x340) = uStack_ec;
    uVar2 = (*(ulong *)(&UNK_00001718 + param_1) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(&UNK_00001718 + param_1) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uStack_98 = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar8 = func_0x0036c47c(param_1,unaff_x21,param_1 + 0x63c,&UNK_01ae7296,10,&uStack_98,8,
                            lVar7 + 0x50,uVar6,1);
    if ((int)uVar8 == 0) goto LAB_003ba800;
    unaff_x21 = *(char **)(param_1 + 0x900);
/* wm:watermarked copy - do not remove */
    *(ulong *)(unaff_x21 + 8) = uVar6;
    uVar8 = func_0x0048058c();
    *(undefined8 *)(unaff_x21 + 0x2e0) = uVar8;
    func_0x00361100(*(undefined8 *)(param_1 + 0x900));
    lVar7 = *(long *)(param_1 + 0x900);
    if (*(long *)(param_1 + 0x4b8) == 0) {
LAB_003ba410:
      *(undefined4 *)(lVar7 + 0x344) = *(undefined4 *)(&UNK_000016f8 + param_1);
      goto LAB_003ba418;
    }
    unaff_x21 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
    ;
    func_0x004743e4(*(undefined8 *)(lVar7 + 0x348),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,"ity.framework/Versions/A/Security");
    lVar9 = func_0x00475ac0(*(undefined8 *)(param_1 + 0x4b8),*(undefined8 *)(param_1 + 0x4c0),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,"ty.framework/Versions/A/Security");
    lVar7 = *(long *)(param_1 + 0x900);
    *(long *)(lVar7 + 0x348) = lVar9;
    if (lVar9 != 0) {
      *(undefined8 *)(lVar7 + 0x350) = *(undefined8 *)(param_1 + 0x4c0);
      goto LAB_003ba410;
    }
    *(undefined8 *)(lVar7 + 0x350) = 0;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,"framework/Versions/A/Security","tls_construct_new_session_ticket");
    uVar1 = 0x8000f;
/* found on a paste site? it was re-uploaded illegally */
  }
  else {
LAB_003ba418:
    pcVar16 = *(code **)(lVar19 + 0x440);
    if ((pcVar16 == (code *)0x0) ||
       (iVar5 = (*pcVar16)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar19 + 0x450)),
       iVar5 != 0)) {
      uVar1 = uStack_ec;
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
          ((iVar5 = **(int **)(param_1 + 0x18), iVar5 < 0x304 || (iVar5 == 0x10000)))) ||
         ((uVar15 = (uint)*(undefined8 *)(param_1 + 0x9b0), (uVar15 >> 0xe & 1) == 0 &&
          (((uVar15 >> 0x18 & 1) != 0 || (*(int *)(&UNK_000016f8 + param_1) == 0)))))) {
        lVar19 = *(long *)(param_1 + 0xd40);
        uVar8 = *(undefined8 *)(param_1 + 0x40);
        puVar18 = *(undefined8 **)(param_1 + 8);
        iVar5 = func_0x003511d8(*(undefined8 *)(param_1 + 0x900),0);
        if ((iVar5 == 0) || (0xff00 < iVar5)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,"eGraphics.framework/Versions/A/CoreGraphics",
                          "construct_stateless_ticket");
          uVar1 = 0xc0103;
LAB_003ba6c4:
          func_0x003a9570(param_1,0x50,uVar1,0);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          uVar6 = 0;
          unaff_x21 = (char *)0x0;
          lVar19 = 0;
          goto LAB_003ba7dc;
        }
        lVar7 = func_0x019eb530((long)iVar5,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,"aphics.framework/Versions/A/CoreGraphics");
        if (lVar7 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,"hics.framework/Versions/A/CoreGraphics","construct_stateless_ticket");
          uVar1 = 0x8000f;
          goto LAB_003ba6c4;
        }
        unaff_x21 = (char *)func_0x00451f08();
        lStack_f8 = lVar7;
        if (unaff_x21 == (char *)0x0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,"ramework/Versions/A/CoreGraphics","construct_stateless_ticket");
          func_0x003a9570(param_1,0x50,&UNK_00080006,0);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
          uVar6 = 0;
          goto LAB_003ba7d8;
        }
        uVar6 = func_0x00367a40(lVar19);
        if (uVar6 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,"ork/Versions/A/CoreGraphics","construct_stateless_ticket");
          puVar13 = &UNK_00080014;
          goto LAB_003ba7d0;
        }
        lStack_a0 = lVar7;
        iVar3 = func_0x003511d8(*(undefined8 *)(param_1 + 0x900),&lStack_a0);
        if (iVar3 == 0) {
          func_0x004464bc();
          pcVar14 = "rsions/A/CoreGraphics";
          goto LAB_003ba7bc;
        }
        lStack_c8 = lVar7;
        lVar9 = func_0x00351510(0,&lStack_c8,(long)iVar5,*puVar18,puVar18[0x91]);
        if (lVar9 == 0) {
          func_0x004464bc();
          pcVar14 = "reGraphics";
          goto LAB_003ba7bc;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        }
        uVar10 = func_0x003511d8(lVar9,0);
        iVar3 = (int)uVar10;
        if ((iVar3 == 0) || (iVar5 < iVar3)) {
          func_0x004464bc();
          pcVar14 = "ics";
LAB_003ba8a0:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,pcVar14,"construct_stateless_ticket");
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
          func_0x00361b60(lVar9);
          goto LAB_003ba7d8;
        }
        lStack_a0 = lVar7;
        iVar5 = func_0x003511d8(lVar9,&lStack_a0);
        if (iVar5 == 0) {
          func_0x004464bc();
          pcVar14 = "";
          goto LAB_003ba8a0;
        }
        func_0x00361b60(lVar9);
        pcVar16 = *(code **)(lVar19 + 600);
        if (pcVar16 == (code *)0x0) {
          pcVar16 = *(code **)(lVar19 + 0x250);
          if (pcVar16 == (code *)0x0) {
            lVar9 = func_0x004535cc(*puVar18,"AES-256-CBC",puVar18[0x91]);
            if (lVar9 == 0) {
              func_0x003a94e4(param_1,0x50);
              goto LAB_003ba7d8;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
            }
            iVar5 = func_0x00455c98();
            if ((((iVar5 < 0) || (iVar4 = func_0x004b242c(*puVar18,auStack_80,iVar5,0), iVar4 < 1))
                || (iVar4 = func_0x019e9e3c(unaff_x21,lVar9,0,*(long *)(lVar19 + 0x248) + 0x20,
                                            auStack_80), iVar4 == 0)) ||
               (iVar4 = func_0x00367b08(uVar6,*(undefined8 *)(lVar19 + 0x248),0x20,"SHA256"),
               iVar4 == 0)) {
              func_0x00451e8c(lVar9);
              func_0x004464bc();
              pcVar14 = "s/A/Metal";
              goto LAB_003ba7bc;
            }
            func_0x00451e8c(lVar9);
            uStack_88 = *(undefined8 *)(lVar19 + 0x240);
            uStack_90 = *(undefined8 *)(lVar19 + 0x238);
            iVar4 = func_0x003be48c(param_1,param_2,uVar1,&uStack_98);
            goto joined_r0x003babac;
          }
          uVar11 = func_0x002f78b4(uVar6);
        }
        else {
          uVar11 = func_0x0034d3f0(uVar6);
        }
/* proprietary - see LICENSE - do not sell */
        iVar5 = (*pcVar16)(uVar8,&uStack_90,auStack_80,unaff_x21,uVar11,1);
        if (iVar5 == 0) {
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0)
          goto LAB_003baa5c;
          iVar5 = **(int **)(param_1 + 0x18);
          if (iVar5 < 0x304) goto LAB_003baa5c;
          if (iVar5 == 0x10000) goto LAB_003baa5c;
          func_0x004743e4(lVar7,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,"rary/Frameworks/MetalKit.framework/Versions/A/MetalKit");
          func_0x00451f38(unaff_x21);
          func_0x00367c5c(uVar6);
          *(long *)(&UNK_00001718 + param_1) = *(long *)(&UNK_00001718 + param_1) + 1;
          *(long *)(&UNK_00001710 + param_1) = *(long *)(&UNK_00001710 + param_1) + 1;
          if (0 < *(int *)(param_1 + 0xa6c)) {
            *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + -1;
          }
          uVar8 = 2;
// WM - proprietary - see LICENSE - do not sell
          if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_003baa58;
          return;
        }
        if (iVar5 < 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,"rks/Metal.framework/Versions/A/Metal","construct_stateless_ticket");
          puVar13 = (undefined *)0xea;
          goto LAB_003ba7d0;
        }
        iVar5 = func_0x00455298(unaff_x21);
        if (iVar5 < 0) {
          func_0x004464bc();
          pcVar14 = "etal.framework/Versions/A/Metal";
          goto LAB_003ba7bc;
        }
        iVar4 = func_0x003be48c(param_1,param_2,uVar1,&uStack_98);
joined_r0x003babac:
        if (iVar4 == 0) goto LAB_003ba7d8;
        iVar4 = func_0x019ec1d8(param_2,&lStack_e0);
        if (((iVar4 != 0) && (iVar4 = func_0x00476690(param_2,&uStack_90,0x10), iVar4 != 0)) &&
           (iVar5 = func_0x00476690(param_2,auStack_80,iVar5), iVar5 != 0)) {
          iVar5 = func_0x019eb93c(param_2,(long)(iVar3 + 0x20),&lStack_a8);
          if ((((iVar5 != 0) &&
               (iVar5 = func_0x019e9ba0(unaff_x21,lStack_a8,&iStack_cc,lVar7,uVar10), iVar5 != 0))
              && ((((iVar5 = func_0x019eb850(param_2,(long)iStack_cc,&lStack_b0), iVar5 != 0 &&
                    (((((lStack_a8 == lStack_b0 &&
                        (iVar5 = func_0x004529d0(unaff_x21,lStack_a8 + iStack_cc,&iStack_d0),
/*  do not claim this as your own  */
                        iVar5 != 0)) &&
                       (iVar5 = func_0x019eb850(param_2,(long)iStack_d0,&lStack_b0), iVar5 != 0)) &&
                      ((lStack_a8 + iStack_cc == lStack_b0 &&
                       (iStack_d0 + iStack_cc <= iVar3 + 0x20)))) &&
                     (iVar5 = func_0x019ec1d8(param_2,&lStack_e8), iVar5 != 0)))) &&
                   ((iVar5 = func_0x00367c14(uVar6,*(long *)(*(long *)(param_1 + 0xf8) + 8) +
                                                   lStack_e0,lStack_e8 - lStack_e0), iVar5 != 0 &&
                    (iVar5 = func_0x019eb93c(param_2,0x40,&lStack_b8), iVar5 != 0)))) &&
                  (iVar5 = func_0x00367c38(uVar6,lStack_b8,&uStack_d8,0x40), iVar5 != 0)))) &&
             (((uStack_d8 < 0x41 &&
               (iVar5 = func_0x019eb850(param_2,uStack_d8,&lStack_c0), iVar5 != 0)) &&
              (lStack_b8 == lStack_c0)))) {
            iVar5 = func_0x00476494(param_2);
            if (iVar5 == 0) {
              func_0x004464bc();
              pcVar14 = "em/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit";
              goto LAB_003ba7bc;
            }
            pcVar14 = "rary/Frameworks/MetalKit.framework/Versions/A/MetalKit";
            goto LAB_003baa88;
          }
        }
        func_0x004464bc();
        pcVar14 = (char *)((long)&dylib_command_00001148.dylib.compatibility_version + 3);
        goto LAB_003ba7bc;
      }
      uVar8 = func_0x003be48c(param_1,param_2,uStack_ec,&uStack_98);
      if ((int)uVar8 == 0) goto LAB_003ba800;
      iVar5 = func_0x00476690(param_2,*(long *)(param_1 + 0x900) + 600,
                              *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x250));
      if ((iVar5 != 0) && (iVar5 = func_0x00476494(param_2), iVar5 != 0)) {
        piVar17 = *(int **)(param_1 + 0x18);
        if ((*(byte *)(*(long *)(piVar17 + 0x36) + 0x50) >> 3 & 1) != 0) goto LAB_003ba518;
        goto LAB_003ba4b4;
// chat: discord.gg/sdkhDjTex
      }
      func_0x004464bc();
      pcVar12 = "construct_stateful_ticket";
      pcVar14 = "talKit.framework/Versions/A/MetalKit";
    }
    else {
      func_0x004464bc();
      pcVar12 = "tls_construct_new_session_ticket";
      pcVar14 = "/Versions/A/Security";
    }
LAB_003ba678:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,pcVar14,pcVar12);
    uVar1 = 0xc0103;
  }
  func_0x003a9570(param_1,0x50,uVar1,0);
LAB_003ba7fc:
  do {
    uVar8 = 0;
LAB_003ba800:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return;
    }
LAB_003baa58:
    while( true ) {
      ___stack_chk_fail(uVar8);
LAB_003baa5c:
      iVar5 = func_0x019ec0a0(param_2,0,4);
      if ((iVar5 == 0) || (iVar5 = func_0x019ec0a0(param_2,0,2), iVar5 == 0)) break;
      pcVar14 = "rameworks/Metal.framework/Versions/A/Metal";
LAB_003baa88:
      func_0x004743e4(lStack_f8,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,pcVar14);
      func_0x00451f38(unaff_x21);
      func_0x00367c5c(uVar6);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      piVar17 = *(int **)(param_1 + 0x18);
      if ((*(byte *)(*(long *)(piVar17 + 0x36) + 0x50) >> 3 & 1) == 0) {
LAB_003ba4b4:
        uVar8 = 1;
        if (((*piVar17 < 0x304) || (*piVar17 == 0x10000)) ||
           (uVar8 = func_0x0039c5c8(param_1,param_2,0x2000,0,0), (int)uVar8 == 0))
        goto LAB_003ba800;
        *(long *)(&UNK_00001718 + param_1) = *(long *)(&UNK_00001718 + param_1) + 1;
        *(long *)(&UNK_00001710 + param_1) = *(long *)(&UNK_00001710 + param_1) + 1;
        if (0 < *(int *)(param_1 + 0xa6c)) {
          *(int *)(param_1 + 0xa6c) = *(int *)(param_1 + 0xa6c) + -1;
        }
        func_0x0035d388(param_1,2);
      }
LAB_003ba518:
      uVar8 = 1;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
        return;
      }
    }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x004464bc();
    pcVar14 = "y/Frameworks/Metal.framework/Versions/A/Metal";
LAB_003ba7bc:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,pcVar14,"construct_stateless_ticket");
    puVar13 = &UNK_000c0103;
LAB_003ba7d0:
    func_0x003a9570(param_1,0x50,puVar13,0);
LAB_003ba7d8:
    lVar19 = lStack_f8;
LAB_003ba7dc:
    func_0x004743e4(lVar19,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,"rary/Frameworks/MetalKit.framework/Versions/A/MetalKit");
    func_0x00451f38(unaff_x21);
    func_0x00367c5c(uVar6);
  } while( true );
}

