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
 *  file-id: 0x3817a8:666101a33e
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_003817a8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,char *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  undefined8 uVar14;
  dword *pdVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  byte *pbVar21;
  undefined1 auVar22 [16];
  dword *pdStack_ad0;
  int iStack_ac8;
  undefined4 uStack_ac4;
  byte bStack_ab9;
  ulong uStack_ab8;
  byte abStack_ab0 [160];
  ulong uStack_a10;
  undefined8 uStack_a08;
  undefined5 uStack_a00;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  undefined3 uStack_9fb;
  undefined5 uStack_9f8;
  byte bStack_9f3;
  undefined2 uStack_9f2;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  ulong uStack_9d8;
  long lStack_9d0;
  undefined8 uStack_9c8;
  long lStack_9b8;
  ulong uStack_940;
  long lStack_938;
  undefined1 auStack_930 [8];
  undefined1 auStack_928 [56];
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined5 uStack_8e0;
  undefined3 uStack_8db;
  undefined5 uStack_8d8;
  undefined3 uStack_8d3;
  undefined5 uStack_8d0;
  undefined3 uStack_8cb;
  undefined2 uStack_8c8;
  undefined3 uStack_8c6;
  undefined3 uStack_8c3;
  undefined2 uStack_8c0;
  undefined6 uStack_8be;
  long lStack_8b8;
  long lStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  undefined8 uStack_898;
  undefined5 uStack_890;
  undefined3 uStack_88b;
  undefined5 uStack_888;
  undefined3 uStack_883;
  undefined5 uStack_880;
  undefined3 uStack_87b;
  undefined2 uStack_878;
  undefined3 uStack_876;
  undefined3 uStack_873;
  undefined2 uStack_870;
  undefined6 uStack_86e;
  dword *pdStack_868;
  ulong uStack_860;
  undefined8 uStack_858;
  dword *pdStack_850;
  dword adStack_845 [49];
  undefined1 auStack_780 [512];
  undefined1 *puStack_580;
  undefined1 auStack_578 [8];
  undefined8 uStack_570;
  undefined8 uStack_568;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  undefined8 uStack_560;
  long lStack_558;
  undefined4 uStack_4f4;
  undefined1 auStack_4f0 [56];
  qword qStack_4b8;
  undefined8 uStack_4b0;
  undefined5 uStack_4a8;
  undefined3 uStack_4a3;
  undefined5 uStack_4a0;
  undefined8 uStack_49b;
  undefined5 uStack_493;
  undefined3 uStack_48e;
  undefined3 uStack_48b;
  undefined2 uStack_488;
  undefined6 uStack_486;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined4 *puStack_468;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  undefined1 auStack_460 [1024];
  undefined1 *puStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_486 = 0;
  uStack_480 = 0;
  uStack_4b0 = *(undefined8 *)(param_3 + 0x1d);
  uStack_4a8 = (undefined5)*(undefined8 *)(param_3 + 0x25);
  uStack_4a3 = (undefined3)*(undefined8 *)(param_3 + 0x2a);
  uStack_4a0 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x2a) >> 0x18);
  uStack_48b = (undefined3)((ulong)*(undefined8 *)(param_3 + 0x15) >> 0x18);
  uStack_488 = (undefined2)((ulong)*(undefined8 *)(param_3 + 0x15) >> 0x30);
  uStack_49b = *(undefined8 *)(param_3 + 8);
  uStack_493 = (undefined5)*(undefined8 *)(param_3 + 0x10);
  uStack_48e = (undefined3)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x28);
  uStack_4f4 = 1;
  qStack_4b8 = _UNK_01ae6c40;
  uStack_478 = 0;
  uStack_470 = 4;
  puStack_468 = &uStack_4f4;
  puStack_60 = auStack_460;
  uStack_48 = 0;
  uStack_40 = 0;
/* origin: github.com/pengussy */
  pcVar13 = (char *)&section_000003d8.size;
  pdVar15 = (dword *)0x0;
  uStack_50 = param_2;
  uVar7 = func_0x019ebb80(auStack_4f0,auStack_460);
  if ((int)uVar7 != 0) {
    pcVar13 = (char *)&qStack_4b8;
    pdVar15 = (dword *)0x0;
    uVar7 = func_0x019e5c2c(auStack_4f0,*(undefined1 *)(param_3 + 8));
    if ((int)uVar7 != 0) {
      pcVar13 = (char *)&MACH_HEADER.cputype;
      uVar7 = func_0x019ec0a0(auStack_4f0,uStack_4f4);
      if ((((int)uVar7 != 0) && (uVar7 = func_0x019ec1d8(auStack_4f0,auStack_58), (int)uVar7 != 0))
         && (uVar7 = func_0x004765c8(auStack_4f0), (int)uVar7 != 0)) {
        pcVar13 = segment_command_00000020.segname;
        pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
        param_5 = (char *)0x0;
// origin: github.com/pengussy
        uVar7 = func_0x003e9d54(*(undefined8 *)(param_1 + 0x38),&puStack_60);
        if ((int)uVar7 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                          ,0x52f,"port_send_version_negotiation");
          pcVar13 = "port version negotiation send failed";
          uVar7 = func_0x004466b0(0x14,0x183);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar7;
  }
  auVar22 = ___stack_chk_fail();
  uVar7 = auVar22._8_8_;
  puVar8 = auVar22._0_8_;
  puVar16 = &uStack_940;
  lStack_558 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_8b8 = 0;
  uStack_8c0 = 0;
  uStack_8be = 0;
  uStack_8a8 = 0;
  lStack_8b0 = 0;
  uStack_8d8 = 0;
  uStack_8d3 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  uStack_8e0 = 0;
  uStack_8db = 0;
  uStack_8c8 = 0;
  uStack_8c6 = 0;
  uStack_8c3 = 0;
  uStack_8d0 = 0;
  uStack_8cb = 0;
  uStack_8e8 = 0;
  uStack_8f0 = 0;
  uStack_898 = 0;
  uStack_8a0 = 0;
  uStack_888 = 0;
  uStack_883 = 0;
  uStack_890 = 0;
  uStack_88b = 0;
  uStack_878 = 0;
  uStack_876 = 0;
  uStack_873 = 0;
  uStack_880 = 0;
  uStack_87b = 0;
/*  origin: github.com/pengussy  */
  pdStack_868 = (dword *)0x0;
  uStack_870 = 0;
  uStack_86e = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  pdStack_850 = (dword *)0x0;
  uStack_890 = (undefined5)*(undefined8 *)((long)pcVar13 + 0x25);
  uStack_88b = (undefined3)((ulong)*(undefined8 *)((long)pcVar13 + 0x25) >> 0x28);
  uStack_898 = *(undefined8 *)((long)pcVar13 + 0x1d);
  uStack_88b = (undefined3)*(undefined8 *)((long)pcVar13 + 0x2a);
  uStack_888 = (undefined5)((ulong)*(undefined8 *)((long)pcVar13 + 0x2a) >> 0x18);
  iVar3 = func_0x003802bc(puVar8[0x10],&uStack_883);
  if (iVar3 != 0) {
    lStack_8b8 = 0;
    uStack_8c0 = 0;
    uStack_8be = 0;
    uStack_8a8 = 0;
    lStack_8b0 = 0;
    uStack_8e0 = (undefined5)*(undefined8 *)((long)pcVar13 + 0x10);
    uStack_8db = (undefined3)((ulong)*(undefined8 *)((long)pcVar13 + 0x10) >> 0x28);
/* thanks for reading - discord.gg/sdkhDjTex */
    uStack_8e8 = *(undefined8 *)((long)pcVar13 + 8);
    uStack_8db = (undefined3)*(undefined8 *)((long)pcVar13 + 0x15);
    uStack_8d8 = (undefined5)((ulong)*(undefined8 *)((long)pcVar13 + 0x15) >> 0x18);
    uStack_8cb = uStack_87b;
    uStack_8c8 = uStack_878;
    uStack_8d3 = uStack_883;
    uStack_8d0 = uStack_880;
    uStack_8c6 = uStack_876;
    uStack_8c3 = uStack_873;
    uStack_8c0 = uStack_870;
    uStack_8a8 = 1;
    uStack_8f0 = func_0x0048058c();
    lStack_8b0 = 0;
    iVar3 = func_0x003e8dd8(uVar7,0,&lStack_8b8);
    if (((iVar3 == 0) || (lStack_8b8 == 0)) ||
       ((lStack_8b0 = func_0x019eb530(lStack_8b8,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                      ,0x38c), lStack_8b0 == 0 ||
        (iVar3 = func_0x003e8dd8(uVar7,lStack_8b0,&lStack_8b8), iVar3 == 0)))) {
      func_0x004743e4(lStack_8b0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x372);
    }
    else {
      iVar3 = func_0x003823e8(&uStack_8f0,auStack_780,&lStack_938);
      lVar9 = lStack_938;
      if (((iVar3 != 0) && (uVar4 = func_0x00455ca4(puVar8[0x14]), 0 < (int)uVar4)) &&
         ((uVar5 = func_0x00455298(puVar8[0x14]), 0 < (int)uVar5 &&
          (uStack_940 = lVar9 + (ulong)uVar4 + (ulong)uVar5 + 0x10, uStack_940 < 0xc6)))) {
        pdVar15 = adStack_845;
        iVar3 = func_0x00382534(puVar8,auStack_780,lStack_938);
// more drops soon - github.com/pengussy
        param_5 = (char *)puVar16;
        if ((iVar3 != 0) && (0xf < uStack_940)) {
          puVar18 = (undefined8 *)((ulong)&uStack_8a0 | 8);
          *(undefined8 *)((long)puVar18 + 0xd) = *(undefined8 *)((long)pcVar13 + 0x2a);
          uVar14 = *(undefined8 *)((long)pcVar13 + 0x1d);
          puVar18[1] = *(undefined8 *)((long)pcVar13 + 0x25);
          *puVar18 = uVar14;
          uStack_8a0 = CONCAT44(1,(uint)uStack_8a0 & 0xffffff00 | 0x8004);
          pdStack_850 = adStack_845;
          uStack_858 = uStack_940;
          param_5 = (char *)((long)adStack_845 + (uStack_940 - 0x10));
          pdVar15 = (dword *)((long)pcVar13 + 8);
          iVar3 = FUN_003927a8(*(undefined8 *)*puVar8,((undefined8 *)*puVar8)[1],&uStack_8a0);
          if (iVar3 != 0) {
            pdStack_868 = pdStack_850;
            uStack_860 = uStack_858;
            puStack_580 = auStack_780;
            uStack_568 = 0;
            uStack_560 = 0;
            pdVar15 = (dword *)0x0;
            uStack_570 = uVar7;
            iVar3 = func_0x019ebb80(auStack_928,auStack_780,0x200);
            if (iVar3 != 0) {
              pdVar15 = (dword *)0x0;
              iVar3 = func_0x019e5c2c(auStack_928,(char)*(dword *)((long)pcVar13 + 8),&uStack_8a0);
              if (((iVar3 != 0) && (iVar3 = func_0x019ec1d8(auStack_928,auStack_578), iVar3 != 0))
                 && (iVar3 = func_0x004765c8(auStack_928), iVar3 != 0)) {
                pdVar15 = (dword *)((long)&MACH_HEADER.magic + 1);
                param_5 = (char *)0x0;
                iVar3 = func_0x003e9d54(puVar8[7],&puStack_580,0x28,1,0,auStack_930);
                if (iVar3 == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                  ,0x4d3,"port_send_retry");
/* WM - watermarked copy - do not remove */
                  func_0x004466b0(0x14,0x183,"port retry send failed due to network BIO I/O error");
                }
              }
            }
          }
        }
      }
    }
  }
  uVar14 = 0x372;
  uVar7 = func_0x004743e4(lStack_8b0,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                          ,0x372);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_558) {
    return uVar7;
  }
  auVar22 = ___stack_chk_fail();
  lVar12 = auVar22._8_8_;
  lVar9 = auVar22._0_8_;
  lStack_9b8 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_9d8 = 0;
  uStack_9e0 = 0;
  uStack_9c8 = 0;
  lStack_9d0 = 0;
  uStack_9f8 = 0;
  bStack_9f3 = 0;
  uStack_9f2 = 0;
  uStack_a00 = 0;
/* WM - if you paid for this, you were scammed */
  uStack_9fb = 0;
  uStack_9e8 = 0;
  uStack_9f0 = 0;
  uStack_a08 = 0;
  uStack_a10 = 0;
  uVar10 = func_0x0048058c();
  *param_5 = '\0';
  uVar19 = *(ulong *)(lVar9 + 0x40);
  iVar3 = func_0x00455ca4(*(undefined8 *)(lVar12 + 0xa0));
  if ((0 < iVar3) && (iVar6 = func_0x00455298(*(undefined8 *)(lVar12 + 0xa0)), 0 < iVar6)) {
    uVar7 = 0;
    lVar20 = 0;
    pdStack_ad0 = pdVar15;
    if (0xc5 < uVar19) goto code_r0x00381fa4;
    if (uVar19 < (uint)(iVar6 + iVar3)) goto code_r0x00381fa4;
    if (0xa9 < uVar19 - (uint)(iVar6 + iVar3)) goto code_r0x00381fa4;
    lVar20 = *(long *)(lVar9 + 0x38);
    uVar19 = *(ulong *)(lVar9 + 0x40);
    iStack_ac8 = 0;
    uVar11 = func_0x00455ca4(*(undefined8 *)(lVar12 + 0xa0));
    if (((0 < (int)uVar11) &&
        (uVar4 = func_0x00455298(*(undefined8 *)(lVar12 + 0xa0)), 0 < (int)uVar4)) &&
       ((uVar19 < 0xc6 &&
        ((uVar4 + (int)uVar11 <= uVar19 &&
         (iVar3 = func_0x019e9e54(*(undefined8 *)(lVar12 + 0xa0),0,0,0,lVar20), iVar3 != 0)))))) {
      uVar17 = uVar19 - ((uVar11 & 0xffffffff) + (ulong)uVar4);
      iVar3 = func_0x019e9cd0(*(undefined8 *)(lVar12 + 0xa0),&bStack_ab9,&iStack_ac8,
                              lVar20 + (ulong)uVar4);
      if ((iVar3 != 0) &&
         ((iVar3 = func_0x00452c6c(*(undefined8 *)(lVar12 + 0xa0),0x11,uVar11,
                                   (lVar20 + uVar19) - (uVar11 & 0xffffffff)), iVar3 != 0 &&
          (iVar3 = func_0x0045283c(*(undefined8 *)(lVar12 + 0xa0),
                                   abStack_ab0 + (long)iStack_ac8 + -9,&iStack_ac8), iVar3 != 0))))
      {
        lStack_9d0 = 0;
        if (0 < (long)uVar17) {
          uStack_9c8 = CONCAT71(uStack_9c8._1_7_,bStack_ab9);
// no support for modified copies
          lVar20 = uVar17 - 9;
          if ((8 < uVar17) && (bStack_ab9 < 2)) {
            uStack_a10 = uStack_ab8;
            if (bStack_ab9 == 0) {
              pbVar21 = abStack_ab0;
code_r0x00381e48:
              if (lVar20 != 0) {
                uVar19 = (ulong)*pbVar21;
                if ((((uVar19 <= lVar20 - 1U) && (uStack_9d8 = uVar19, *pbVar21 != 0)) &&
                    (lStack_9d0 = func_0x019eb530(uVar19,
                                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                                  ,0x455), lStack_9d0 != 0)) &&
                   ((uStack_9d8 <= uVar19 &&
                    (_memcpy(lStack_9d0,pbVar21 + 1), lVar20 - 1U == uVar19)))) {
                  bVar2 = uStack_a10 <= uVar10;
                  uVar10 = uVar10 - uStack_a10;
                  if ((((bVar2) && (((char)uStack_9c8 == '\0' || (uVar10 < 11000000000)))) &&
                      (((char)uStack_9c8 != '\0' || (uVar10 < 0x3466c536a00)))) &&
                     ((iVar3 = func_0x003e8dd8(uVar14,0,&iStack_ac8), iVar3 != 0 &&
                      (CONCAT44(uStack_ac4,iStack_ac8) == uStack_9d8)))) {
                    lVar20 = func_0x019eb530(CONCAT44(uStack_ac4,iStack_ac8),
                                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                             ,0x57d);
                    if ((lVar20 != 0) &&
                       ((iVar3 = func_0x003e8dd8(uVar14,lVar20,&iStack_ac8), iVar3 != 0 &&
                        (iVar3 = _memcmp(lVar20,lStack_9d0,CONCAT44(uStack_ac4,iStack_ac8)),
                        iVar3 == 0)))) {
                      if ((char)uStack_9c8 == '\0') goto code_r0x0038200c;
// keep the notice, keep the source honest
                      if ((bStack_9f3 == *(byte *)(lVar9 + 8)) &&
                         (iVar3 = _memcmp(&uStack_9f2,lVar9 + 9), iVar3 == 0)) {
                        *(ulong *)(pdVar15 + 2) = CONCAT35(uStack_9fb,uStack_a00);
                        *(undefined8 *)pdVar15 = uStack_a08;
                        *(ulong *)((long)pdVar15 + 0xd) = CONCAT53(uStack_9f8,uStack_9fb);
                        goto code_r0x00382044;
                      }
                    }
                    goto code_r0x00381fa0;
                  }
                  goto code_r0x00381f9c;
                }
              }
            }
            else if (lVar20 != 0) {
              uVar19 = (ulong)abStack_ab0[0];
              uVar17 = uVar17 - 10;
              if (uVar19 <= uVar17) {
                uStack_a08 = CONCAT71(uStack_a08._1_7_,abStack_ab0[0]);
                if (abStack_ab0[0] < 0x15) {
                  ___memcpy_chk((ulong)&uStack_a10 | 9,abStack_ab0 + 1,uVar19,0x47);
                  if (uVar17 != uVar19) {
                    bVar1 = (abStack_ab0 + 1)[uVar19];
                    uVar11 = (ulong)bVar1;
                    lVar20 = (uVar17 + ~uVar19) - uVar11;
                    if ((uVar11 <= uVar17 + ~uVar19) && (bStack_9f3 = bVar1, bVar1 < 0x15)) {
                      pbVar21 = abStack_ab0 + uVar19 + 2 + uVar11;
                      ___memcpy_chk(&uStack_9f2,abStack_ab0 + uVar19 + 2,uVar11,0x32);
                      goto code_r0x00381e48;
                    }
                  }
                }
/*  chat: discord.gg/sdkhDjTex  */
              }
            }
          }
        }
        func_0x004743e4(lStack_9d0,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                        ,0x372);
      }
    }
  }
code_r0x00381f9c:
  lVar20 = 0;
code_r0x00381fa0:
  do {
    uVar7 = 0;
code_r0x00381fa4:
/* if you paid for this, you were scammed */
    while( true ) {
      param_5 = 
      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
      ;
      func_0x004743e4(lStack_9d0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x372);
      func_0x004743e4(lVar20,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x5b1);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_9b8) {
        return uVar7;
      }
      ___stack_chk_fail();
code_r0x0038200c:
      iVar3 = func_0x003802bc(*(undefined8 *)(lVar12 + 0x80),pdStack_ad0);
      if (iVar3 == 0) break;
      if (((char)uStack_9c8 != '\0') || (uVar7 = 1, 0x2f29aa759ff < uVar10)) {
code_r0x00382044:
        uVar7 = 1;
        *param_5 = '\x01';
      }
    }
  } while( true );
}

