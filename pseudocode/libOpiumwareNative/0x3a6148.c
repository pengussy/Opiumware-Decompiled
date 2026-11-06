/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a6148:d580f27634
   =========================================================================== */

void FUN_003a6148(void)

{
  ushort *puVar1;
  byte *pbVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined *puVar10;
  long unaff_x19;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ushort *puVar16;
  undefined1 auVar17 [16];
  ulong uStack_11c8;
// WM - if you paid for this, you were scammed
  undefined1 auStack_11c0 [8];
  undefined8 uStack_11b8;
  long lStack_11b0;
  undefined1 auStack_11a8 [56];
  ushort *puStack_1170;
  long lStack_1168;
  ulong uStack_1160;
  undefined1 auStack_1154 [4300];
  undefined1 auStack_88 [32];
  long lStack_68;
  
  auVar17 = (*(code *)PTR____chkstk_darwin_01f201f8)();
  plVar9 = auVar17._8_8_;
  lVar11 = auVar17._0_8_;
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar15 = *(undefined8 **)(lVar11 + 8);
  if ((puVar15[0x1d] == 0) || ((*(byte *)(lVar11 + 0x161) >> 3 & 1) == 0)) {
LAB_003a61a0:
    uVar5 = 1;
    lVar11 = unaff_x19;
LAB_003a6240:
    while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_68) {
/* WM - keep the notice, keep the source honest */
      ___stack_chk_fail(uVar5);
LAB_003a6748:
      func_0x0047680c(auStack_11a8);
      func_0x004464bc();
      uVar5 = 0x488;
LAB_003a63c8:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                      ,uVar5,"tls_parse_ctos_cookie");
      uVar5 = 0x50;
      puVar10 = &UNK_000c0103;
LAB_003a6234:
      func_0x003a9570(lVar11,uVar5,puVar10,0);
      uVar5 = 0;
    }
    return;
  }
  if (1 < (ulong)plVar9[2]) {
    puVar16 = (ushort *)*plVar9;
    uVar12 = (ulong)((uint)(*puVar16 >> 8) | (*puVar16 & 0xff00ff) << 8);
    if (plVar9[2] - 2U == uVar12) {
      lStack_1168 = plVar9[1];
      puVar1 = puVar16 + 1;
      *plVar9 = (long)puVar1 + uVar12;
      plVar9[2] = 0;
      puStack_1170 = puVar1;
      if (uVar12 < 0x20) {
        func_0x004464bc();
/* no support for modified copies */
        uVar5 = 0x406;
        goto LAB_003a6224;
      }
      lVar6 = func_0x0044efa4();
      lVar7 = func_0x0045ed5c(*puVar15,"HMAC",puVar15[0x91],*(long *)(lVar11 + 0xd40) + 0x2f8,0x20);
      if ((lVar6 == 0) || (lVar7 == 0)) {
        func_0x0044efb8(lVar6);
        func_0x0045eb4c(lVar7);
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x414,"tls_parse_ctos_cookie");
        uVar5 = 0x50;
        puVar10 = &UNK_00080006;
        goto LAB_003a6234;
      }
      lStack_11b0 = 0x20;
// WM - chat: discord.gg/sdkhDjTex
      iVar4 = func_0x0045b25c(lVar6,0,"SHA2-256",*puVar15,puVar15[0x91],lVar7,0);
      if (((iVar4 < 1) ||
          (iVar4 = func_0x0045be74(lVar6,auStack_88,&lStack_11b0,puVar1,uVar12 - 0x20), iVar4 < 1))
         || (lStack_11b0 != 0x20)) {
        func_0x0044efb8(lVar6);
        func_0x0045eb4c(lVar7);
        func_0x004464bc();
        uVar5 = 0x422;
        goto LAB_003a63c8;
      }
      func_0x0044efb8(lVar6);
      func_0x0045eb4c(lVar7);
      iVar4 = func_0x0046eb60(auStack_88,(long)puVar1 + (uVar12 - 0x20),0x20);
      if (iVar4 != 0) {
        func_0x004464bc();
        uVar5 = 0x42a;
LAB_003a634c:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,uVar5,"tls_parse_ctos_cookie");
        uVar5 = 0x2f;
        puVar10 = (undefined *)0x134;
        goto LAB_003a6234;
      }
      unaff_x19 = lVar11;
      if ((ushort)(puVar16[1] >> 8 | puVar16[1] << 8) == 1) {
        if ((ushort)(puVar16[2] >> 8 | puVar16[2] << 8) != 0x304) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                          ,0x442,"tls_parse_ctos_cookie");
/* WM - unlicensed copy if this notice is missing */
          uVar5 = 0x2f;
          puVar10 = (undefined *)0x74;
          goto LAB_003a6234;
        }
        if ((*(ushort *)(lVar11 + 0x4de) != (ushort)(puVar16[3] >> 8 | puVar16[3] << 8)) ||
           (lVar7 = *(long *)(lVar11 + 0x300), lVar6 = func_0x00355fa4(lVar11,puVar16 + 4,0),
           lVar7 != lVar6)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                          ,0x457,"tls_parse_ctos_cookie");
          uVar5 = 0x2f;
          puVar10 = (undefined *)0xba;
          goto LAB_003a6234;
        }
        uVar3 = puVar16[5];
        puStack_1170 = (ushort *)((long)puVar16 + 0xb);
        uStack_1160 = uVar12 - 9;
        iVar4 = func_0x003a6810(&puStack_1170,&uStack_11c8);
        if ((iVar4 != 0) && (uVar8 = uStack_1160 - 2, 1 < uStack_1160)) {
          uVar13 = (ulong)((uint)(*puStack_1170 >> 8) | (*puStack_1170 & 0xff00ff) << 8);
          if ((uVar13 <= uVar8) && (uVar8 != uVar13)) {
            puVar16 = puStack_1170 + 1;
            pbVar2 = (byte *)((long)puVar16 + uVar13);
            uVar14 = (ulong)*pbVar2;
            if ((uVar14 <= uVar8 + ~uVar13) && ((uVar8 + ~uVar13) - uVar14 == 0x20)) {
              uVar8 = _time(0);
              uVar5 = 1;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
              if ((uStack_11c8 <= uVar8) && (uVar8 - uStack_11c8 < 0x259)) {
                iVar4 = (*(code *)puVar15[0x1d])(*(undefined8 *)(lVar11 + 0x40),pbVar2 + 1,uVar14);
                if (iVar4 == 0) {
                  func_0x004464bc();
                  uVar5 = 0x470;
                  goto LAB_003a634c;
                }
                iVar4 = func_0x019ebb80(auStack_11a8,auStack_1154,"ework/Versions/A/CoreGraphics",0)
                ;
                if (iVar4 == 0) {
                  func_0x004464bc();
                  uVar5 = 0x47a;
                  goto LAB_003a63c8;
                }
                iVar4 = func_0x019ec0a0(auStack_11a8,2,1);
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = func_0x019eba0c(auStack_11a8,3);
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = func_0x019ec0a0(auStack_11a8,0x303,2);
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = func_0x00476690(auStack_11a8,&UNK_01ae6ff4,0x20);
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = func_0x004766ec(auStack_11a8,lVar11 + 0x928,*(undefined8 *)(lVar11 + 0x948),
                                        1);
/*  no support for modified copies  */
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = (**(code **)(*(long *)(lVar11 + 0x18) + 0xb0))
                                  (*(undefined8 *)(lVar11 + 0x300),auStack_11a8,auStack_11c0);
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = func_0x019ec0a0(auStack_11a8,0,1);
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = func_0x019eba0c(auStack_11a8,2);
                if (iVar4 == 0) goto LAB_003a6748;
                iVar4 = func_0x019ec0a0(auStack_11a8,0x2b,2);
                if ((((iVar4 == 0) || (iVar4 = func_0x019eba0c(auStack_11a8,2), iVar4 == 0)) ||
                    (iVar4 = func_0x019ec0a0(auStack_11a8,(long)*(int *)(lVar11 + 0x48),2),
                    iVar4 == 0)) || (iVar4 = func_0x00476494(auStack_11a8), iVar4 == 0)) {
                  func_0x0047680c(auStack_11a8);
                  func_0x004464bc();
                  uVar5 = 0x490;
                  goto LAB_003a63c8;
                }
                if (((char)uVar3 != '\0') &&
                   (((iVar4 = func_0x019ec0a0(auStack_11a8,0x33,2), iVar4 == 0 ||
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                     (iVar4 = func_0x019eba0c(auStack_11a8,2), iVar4 == 0)) ||
                    ((iVar4 = func_0x019ec0a0(auStack_11a8,*(undefined2 *)(lVar11 + 0x4de),2),
                     iVar4 == 0 || (iVar4 = func_0x00476494(auStack_11a8), iVar4 == 0)))))) {
                  func_0x0047680c(auStack_11a8);
                  func_0x004464bc();
                  uVar5 = 0x499;
                  goto LAB_003a63c8;
                }
                iVar4 = func_0x019ec0a0(auStack_11a8,0x2c,2);
                if (((iVar4 == 0) || (iVar4 = func_0x019eba0c(auStack_11a8,2), iVar4 == 0)) ||
                   (((iVar4 = func_0x004766ec(auStack_11a8,puVar1,uVar12,2), iVar4 == 0 ||
                     (((iVar4 = func_0x00476494(auStack_11a8), iVar4 == 0 ||
                       (iVar4 = func_0x00476494(auStack_11a8), iVar4 == 0)) ||
                      (iVar4 = func_0x00476494(auStack_11a8), iVar4 == 0)))) ||
                    ((iVar4 = func_0x019ec1d8(auStack_11a8,&uStack_11b8), iVar4 == 0 ||
                     (iVar4 = func_0x004765c8(auStack_11a8), iVar4 == 0)))))) {
                  func_0x0047680c(auStack_11a8);
                  func_0x004464bc();
/* WM - more drops soon - github.com/pengussy */
                  uVar5 = 0x4a6;
                  goto LAB_003a63c8;
                }
                uVar5 = func_0x003b6b88(lVar11,puVar16,uVar13,auStack_1154,uStack_11b8);
                if ((int)uVar5 != 0) {
                  uVar5 = 1;
                  *(undefined4 *)(lVar11 + 0x8d0) = 1;
                  *(undefined4 *)(lVar11 + 0xb38) = 1;
                }
              }
              goto LAB_003a6240;
            }
          }
        }
        func_0x004464bc();
        uVar5 = 0x460;
        goto LAB_003a6224;
      }
      goto LAB_003a61a0;
    }
  }
  func_0x004464bc();
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  uVar5 = 0x3fd;
LAB_003a6224:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar5,"tls_parse_ctos_cookie");
  uVar5 = 0x32;
  puVar10 = (undefined *)0x9f;
  goto LAB_003a6234;
}

