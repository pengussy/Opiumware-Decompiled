/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x381910:a7c179185d
   =========================================================================== */

undefined8
FUN_00381910(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 *param_4,char *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
// thanks for reading - discord.gg/sdkhDjTex
  undefined1 auVar19 [16];
  undefined8 *puStack_5d0;
  int iStack_5c8;
  undefined4 uStack_5c4;
  byte bStack_5b9;
  ulong uStack_5b8;
  byte abStack_5b0 [160];
  ulong uStack_510;
  undefined8 uStack_508;
  undefined5 uStack_500;
  undefined3 uStack_4fb;
  undefined5 uStack_4f8;
  byte bStack_4f3;
  undefined2 uStack_4f2;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  ulong uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  long lStack_4b8;
  ulong uStack_440;
  long lStack_438;
  undefined1 auStack_430 [8];
  undefined1 auStack_428 [56];
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined5 uStack_3e0;
  undefined3 uStack_3db;
// WM - chat: discord.gg/sdkhDjTex
  undefined5 uStack_3d8;
  undefined3 uStack_3d3;
  undefined5 uStack_3d0;
  undefined3 uStack_3cb;
  undefined2 uStack_3c8;
  undefined3 uStack_3c6;
  undefined3 uStack_3c3;
  undefined2 uStack_3c0;
  undefined6 uStack_3be;
  long lStack_3b8;
  long lStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined5 uStack_390;
  undefined3 uStack_38b;
  undefined5 uStack_388;
  undefined3 uStack_383;
  undefined5 uStack_380;
  undefined3 uStack_37b;
  undefined2 uStack_378;
  undefined3 uStack_376;
  undefined3 uStack_373;
  undefined2 uStack_370;
  undefined6 uStack_36e;
  undefined8 *puStack_368;
  ulong uStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 auStack_345 [24];
  undefined1 auStack_280 [512];
  undefined1 *puStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
// WM - do not claim this as your own
  puVar13 = &uStack_440;
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3be = 0;
  uStack_3a8 = 0;
  lStack_3b0 = 0;
  uStack_3d8 = 0;
  uStack_3d3 = 0;
  uStack_3e0 = 0;
  uStack_3db = 0;
  uStack_3c8 = 0;
  uStack_3c6 = 0;
  uStack_3c3 = 0;
  uStack_3d0 = 0;
  uStack_3cb = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  uStack_3a0 = 0;
  uStack_383 = 0;
  uStack_378 = 0;
  uStack_376 = 0;
  uStack_373 = 0;
  uStack_380 = 0;
  uStack_37b = 0;
  puStack_368 = (undefined8 *)0x0;
  uStack_370 = 0;
  uStack_36e = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puStack_350 = (undefined8 *)0x0;
  uStack_398 = *(undefined8 *)(param_3 + 0x1d);
  uStack_390 = (undefined5)*(undefined8 *)(param_3 + 0x25);
/* more drops soon - github.com/pengussy - github.com/pengussy */
  uStack_38b = (undefined3)*(undefined8 *)(param_3 + 0x2a);
  uStack_388 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x2a) >> 0x18);
  iVar3 = func_0x003802bc(param_1[0x10],&uStack_383);
  if (iVar3 != 0) {
    lStack_3b8 = 0;
    uStack_3be = 0;
    lStack_3b0 = 0;
    uStack_3e8 = *(undefined8 *)(param_3 + 8);
    uStack_3e0 = (undefined5)*(undefined8 *)(param_3 + 0x10);
    uStack_3db = (undefined3)*(undefined8 *)(param_3 + 0x15);
    uStack_3d8 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0x15) >> 0x18);
    uStack_3cb = uStack_37b;
    uStack_3c8 = uStack_378;
    uStack_3d3 = uStack_383;
    uStack_3d0 = uStack_380;
    uStack_3c6 = uStack_376;
    uStack_3c3 = uStack_373;
    uStack_3c0 = uStack_370;
    uStack_3a8 = 1;
    uStack_3f0 = func_0x0048058c();
    lStack_3b0 = 0;
    iVar3 = func_0x003e8dd8(param_2,0,&lStack_3b8);
    if ((((iVar3 == 0) || (lStack_3b8 == 0)) ||
        (lStack_3b0 = func_0x019eb530(lStack_3b8,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                      ,0x38c), lStack_3b0 == 0)) ||
       (iVar3 = func_0x003e8dd8(param_2,lStack_3b0,&lStack_3b8), iVar3 == 0)) {
      func_0x004743e4(lStack_3b0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x372);
    }
/* if you paid for this, you were scammed */
    else {
      iVar3 = func_0x003823e8(&uStack_3f0,auStack_280,&lStack_438);
      lVar8 = lStack_438;
      if (((iVar3 != 0) && (uVar4 = func_0x00455ca4(param_1[0x14]), 0 < (int)uVar4)) &&
         ((uVar5 = func_0x00455298(param_1[0x14]), 0 < (int)uVar5 &&
          (uStack_440 = lVar8 + (ulong)uVar4 + (ulong)uVar5 + 0x10, uStack_440 < 0xc6)))) {
        param_4 = auStack_345;
        iVar3 = func_0x00382534(param_1,auStack_280,lStack_438);
        param_5 = (char *)puVar13;
        if ((iVar3 != 0) && (0xf < uStack_440)) {
          puVar15 = (undefined8 *)((ulong)&uStack_3a0 | 8);
          *(undefined8 *)((long)puVar15 + 0xd) = *(undefined8 *)(param_3 + 0x2a);
          uVar7 = *(undefined8 *)(param_3 + 0x1d);
          puVar15[1] = *(undefined8 *)(param_3 + 0x25);
          *puVar15 = uVar7;
          uStack_3a0 = CONCAT44(1,(uint)uStack_3a0 & 0xffffff00 | 0x8004);
          puStack_350 = auStack_345;
          uStack_358 = uStack_440;
          param_5 = (char *)((long)auStack_345 + (uStack_440 - 0x10));
          param_4 = (undefined8 *)(param_3 + 8);
          iVar3 = FUN_003927a8(*(undefined8 *)*param_1,((undefined8 *)*param_1)[1],&uStack_3a0);
          if (iVar3 != 0) {
            puStack_368 = puStack_350;
            uStack_360 = uStack_358;
            puStack_80 = auStack_280;
            uStack_68 = 0;
            uStack_60 = 0;
            param_4 = (undefined8 *)0x0;
            uStack_70 = param_2;
// found on a paste site? it was re-uploaded illegally
            iVar3 = func_0x019ebb80(auStack_428,auStack_280,0x200);
            if (iVar3 != 0) {
              param_4 = (undefined8 *)0x0;
              iVar3 = func_0x019e5c2c(auStack_428,*(undefined1 *)(param_3 + 8),&uStack_3a0);
              if (((iVar3 != 0) && (iVar3 = func_0x019ec1d8(auStack_428,auStack_78), iVar3 != 0)) &&
                 (iVar3 = func_0x004765c8(auStack_428), iVar3 != 0)) {
                param_4 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
                param_5 = (char *)0x0;
                iVar3 = func_0x003e9d54(param_1[7],&puStack_80,0x28,1,0,auStack_430);
                if (iVar3 == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                  ,0x4d3,"port_send_retry");
                  func_0x004466b0(0x14,0x183,"port retry send failed due to network BIO I/O error");
                }
              }
            }
          }
        }
      }
    }
  }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  uVar12 = 0x372;
  uVar7 = func_0x004743e4(lStack_3b0,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                          ,0x372);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return uVar7;
  }
  auVar19 = ___stack_chk_fail();
  lVar11 = auVar19._8_8_;
  lVar8 = auVar19._0_8_;
  lStack_4b8 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_4d8 = 0;
  uStack_4e0 = 0;
  uStack_4c8 = 0;
  lStack_4d0 = 0;
  uStack_4f8 = 0;
  bStack_4f3 = 0;
  uStack_4f2 = 0;
  uStack_500 = 0;
  uStack_4fb = 0;
/* origin: github.com/pengussy */
  uStack_4e8 = 0;
  uStack_4f0 = 0;
  uStack_508 = 0;
  uStack_510 = 0;
  uVar9 = func_0x0048058c();
  *param_5 = '\0';
  uVar16 = *(ulong *)(lVar8 + 0x40);
  iVar3 = func_0x00455ca4(*(undefined8 *)(lVar11 + 0xa0));
  if ((0 < iVar3) && (iVar6 = func_0x00455298(*(undefined8 *)(lVar11 + 0xa0)), 0 < iVar6)) {
    uVar7 = 0;
    lVar17 = 0;
    puStack_5d0 = param_4;
    if (0xc5 < uVar16) goto code_r0x00381fa4;
    if (uVar16 < (uint)(iVar6 + iVar3)) goto code_r0x00381fa4;
    if (0xa9 < uVar16 - (uint)(iVar6 + iVar3)) goto code_r0x00381fa4;
    lVar17 = *(long *)(lVar8 + 0x38);
    uVar16 = *(ulong *)(lVar8 + 0x40);
    iStack_5c8 = 0;
    uVar10 = func_0x00455ca4(*(undefined8 *)(lVar11 + 0xa0));
/* wm:chat: discord.gg/sdkhDjTex */
    if (((0 < (int)uVar10) &&
        (uVar4 = func_0x00455298(*(undefined8 *)(lVar11 + 0xa0)), 0 < (int)uVar4)) &&
       ((uVar16 < 0xc6 &&
        ((uVar4 + (int)uVar10 <= uVar16 &&
         (iVar3 = func_0x019e9e54(*(undefined8 *)(lVar11 + 0xa0),0,0,0,lVar17), iVar3 != 0)))))) {
      uVar14 = uVar16 - ((uVar10 & 0xffffffff) + (ulong)uVar4);
      iVar3 = func_0x019e9cd0(*(undefined8 *)(lVar11 + 0xa0),&bStack_5b9,&iStack_5c8,
                              lVar17 + (ulong)uVar4);
      if ((iVar3 != 0) &&
         ((iVar3 = func_0x00452c6c(*(undefined8 *)(lVar11 + 0xa0),0x11,uVar10,
                                   (lVar17 + uVar16) - (uVar10 & 0xffffffff)), iVar3 != 0 &&
          (iVar3 = func_0x0045283c(*(undefined8 *)(lVar11 + 0xa0),
                                   abStack_5b0 + (long)iStack_5c8 + -9,&iStack_5c8), iVar3 != 0))))
      {
        lStack_4d0 = 0;
        if (0 < (long)uVar14) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          uStack_4c8 = CONCAT71(uStack_4c8._1_7_,bStack_5b9);
          lVar17 = uVar14 - 9;
          if ((8 < uVar14) && (bStack_5b9 < 2)) {
            uStack_510 = uStack_5b8;
            if (bStack_5b9 == 0) {
              pbVar18 = abStack_5b0;
code_r0x00381e48:
              if (lVar17 != 0) {
                uVar16 = (ulong)*pbVar18;
                if ((((uVar16 <= lVar17 - 1U) && (uStack_4d8 = uVar16, *pbVar18 != 0)) &&
                    (lStack_4d0 = func_0x019eb530(uVar16,
                                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                                  ,0x455), lStack_4d0 != 0)) &&
                   ((uStack_4d8 <= uVar16 &&
                    (_memcpy(lStack_4d0,pbVar18 + 1), lVar17 - 1U == uVar16)))) {
                  bVar2 = uStack_510 <= uVar9;
                  uVar9 = uVar9 - uStack_510;
                  if ((((bVar2) && (((char)uStack_4c8 == '\0' || (uVar9 < 11000000000)))) &&
                      (((char)uStack_4c8 != '\0' || (uVar9 < 0x3466c536a00)))) &&
                     ((iVar3 = func_0x003e8dd8(uVar12,0,&iStack_5c8), iVar3 != 0 &&
                      (CONCAT44(uStack_5c4,iStack_5c8) == uStack_4d8)))) {
                    lVar17 = func_0x019eb530(CONCAT44(uStack_5c4,iStack_5c8),
                                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                             ,0x57d);
                    if ((lVar17 != 0) &&
                       ((iVar3 = func_0x003e8dd8(uVar12,lVar17,&iStack_5c8), iVar3 != 0 &&
                        (iVar3 = _memcmp(lVar17,lStack_4d0,CONCAT44(uStack_5c4,iStack_5c8)),
                        iVar3 == 0)))) {
                      if ((char)uStack_4c8 == '\0') goto code_r0x0038200c;
                      if ((bStack_4f3 == *(byte *)(lVar8 + 8)) &&
                         (iVar3 = _memcmp(&uStack_4f2,lVar8 + 9), iVar3 == 0)) {
/*  unlicensed copy if this notice is missing  */
                        param_4[1] = CONCAT35(uStack_4fb,uStack_500);
                        *param_4 = uStack_508;
                        *(ulong *)((long)param_4 + 0xd) = CONCAT53(uStack_4f8,uStack_4fb);
                        goto code_r0x00382044;
                      }
                    }
                    goto code_r0x00381fa0;
                  }
                  goto code_r0x00381f9c;
                }
              }
            }
            else if (lVar17 != 0) {
              uVar16 = (ulong)abStack_5b0[0];
              uVar14 = uVar14 - 10;
              if (uVar16 <= uVar14) {
                uStack_508 = CONCAT71(uStack_508._1_7_,abStack_5b0[0]);
                if (abStack_5b0[0] < 0x15) {
                  ___memcpy_chk((ulong)&uStack_510 | 9,abStack_5b0 + 1,uVar16,0x47);
                  if (uVar14 != uVar16) {
                    bVar1 = (abStack_5b0 + 1)[uVar16];
                    uVar10 = (ulong)bVar1;
                    lVar17 = (uVar14 + ~uVar16) - uVar10;
                    if ((uVar10 <= uVar14 + ~uVar16) && (bStack_4f3 = bVar1, bVar1 < 0x15)) {
                      pbVar18 = abStack_5b0 + uVar16 + 2 + uVar10;
                      ___memcpy_chk(&uStack_4f2,abStack_5b0 + uVar16 + 2,uVar10,0x32);
                      goto code_r0x00381e48;
                    }
                  }
                }
// WM - proprietary - see LICENSE - do not sell
              }
            }
          }
        }
        func_0x004743e4(lStack_4d0,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                        ,0x372);
      }
    }
  }
code_r0x00381f9c:
  lVar17 = 0;
code_r0x00381fa0:
  do {
    uVar7 = 0;
code_r0x00381fa4:
    while( true ) {
      param_5 = 
      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
      ;
      func_0x004743e4(lStack_4d0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x372);
      func_0x004743e4(lVar17,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x5b1);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_4b8) {
        return uVar7;
      }
      ___stack_chk_fail();
code_r0x0038200c:
      iVar3 = func_0x003802bc(*(undefined8 *)(lVar11 + 0x80),puStack_5d0);
      if (iVar3 == 0) break;
      if (((char)uStack_4c8 != '\0') || (uVar7 = 1, 0x2f29aa759ff < uVar9)) {
code_r0x00382044:
        uVar7 = 1;
        *param_5 = '\x01';
      }
    }
  } while( true );
}

