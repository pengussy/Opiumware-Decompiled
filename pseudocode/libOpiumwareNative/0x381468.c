/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x381468:68b0e4bb93
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00381468(long param_1,undefined8 *param_2,byte *param_3,undefined8 param_4,char *param_5)

{
  byte bVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  char *pcVar15;
  undefined8 uVar16;
  dword *pdVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  char *pcVar22;
  byte *pbVar23;
  long lVar24;
  undefined1 auVar25 [16];
  dword *pdStack_c20;
  int iStack_c18;
  undefined4 uStack_c14;
  byte bStack_c09;
  ulong uStack_c08;
  byte abStack_c00 [160];
  ulong uStack_b60;
  undefined8 uStack_b58;
/* wm:chat: discord.gg/sdkhDjTex */
  undefined5 uStack_b50;
  undefined3 uStack_b4b;
  undefined5 uStack_b48;
  byte bStack_b43;
  undefined2 uStack_b42;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  ulong uStack_b28;
  long lStack_b20;
  undefined8 uStack_b18;
  long lStack_b08;
  ulong uStack_a90;
  long lStack_a88;
  undefined1 auStack_a80 [8];
  undefined1 auStack_a78 [56];
  undefined8 uStack_a40;
/* wm:no support for modified copies */
  undefined8 uStack_a38;
  undefined5 uStack_a30;
  undefined3 uStack_a2b;
  undefined5 uStack_a28;
  undefined3 uStack_a23;
  undefined5 uStack_a20;
  undefined3 uStack_a1b;
  undefined2 uStack_a18;
  undefined3 uStack_a16;
  undefined3 uStack_a13;
  undefined2 uStack_a10;
  undefined6 uStack_a0e;
  long lStack_a08;
  long lStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined5 uStack_9e0;
  undefined3 uStack_9db;
  undefined5 uStack_9d8;
  undefined3 uStack_9d3;
  undefined5 uStack_9d0;
  undefined3 uStack_9cb;
  undefined2 uStack_9c8;
  undefined3 uStack_9c6;
  undefined3 uStack_9c3;
  undefined2 uStack_9c0;
  undefined6 uStack_9be;
/* wm:stripping the watermark breaks the license */
  dword *pdStack_9b8;
  ulong uStack_9b0;
  undefined8 uStack_9a8;
  dword *pdStack_9a0;
  dword adStack_995 [49];
  undefined1 auStack_8d0 [512];
  undefined1 *puStack_6d0;
  undefined1 auStack_6c8 [8];
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined4 uStack_644;
  undefined1 auStack_640 [56];
  qword qStack_608;
  undefined8 uStack_600;
  undefined5 uStack_5f8;
  undefined3 uStack_5f3;
  undefined5 uStack_5f0;
  undefined8 uStack_5eb;
  undefined5 uStack_5e3;
  undefined3 uStack_5de;
  undefined3 uStack_5db;
  undefined2 uStack_5d8;
  undefined6 uStack_5d6;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined4 *puStack_5b8;
  undefined1 auStack_5b0 [1024];
  undefined1 *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
// origin: github.com/pengussy
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char cStack_f1;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
// WM - origin: github.com/pengussy
  long lStack_d0;
  undefined1 auStack_c5 [21];
  undefined8 uStack_b0;
  byte abStack_a8 [48];
  long lStack_78;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_f0 = 0;
  uStack_e8 = 0;
  cStack_f1 = '\0';
  uStack_100 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_150 = 0;
  uStack_148 = 0;
  pbVar14 = param_3;
  if ((*(ushort *)((long)param_2 + 0x9a) & 1) != 0) goto LAB_00381574;
  uStack_b0 = 0;
  if ((0x14 < *(ulong *)(param_1 + 0x10)) && ((*(byte *)(param_1 + 0x120) >> 6 & 1) != 0)) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    pbVar14 = (byte *)0x0;
    param_5 = (char *)0x0;
    iVar4 = func_0x003887e8(param_2[0x11],param_1 + 0x110 + *(ulong *)(param_1 + 0x10),0,&uStack_b0)
    ;
    if (iVar4 != 0) {
      pbVar23 = (byte *)((long)&MACH_HEADER.magic + 1);
      do {
        func_0x00377f7c(uStack_b0);
        param_5 = (char *)0x0;
        pbVar14 = pbVar23;
        iVar4 = func_0x003887e8(param_2[0x11],param_1 + 0x110 + *(long *)(param_1 + 0x10),pbVar23,
                                &uStack_b0);
        pbVar23 = pbVar23 + 1;
      } while (iVar4 != 0);
      if (pbVar23 != (byte *)((long)&MACH_HEADER.magic + 1)) goto LAB_00381574;
    }
  }
  if (param_3 == (byte *)0x0) {
LAB_00381560:
    if (((*(ushort *)((long)param_2 + 0x9a) >> 4 & 1) == 0) || (*(long *)(param_1 + 0x10) < 0x4b0))
    {
LAB_00381574:
      pcVar15 = (char *)0x0;
LAB_00381578:
      pcVar22 = (char *)0x0;
    }
    else {
      lStack_e0 = param_1 + 0x120;
/*  more drops soon - github.com/pengussy  */
      param_5 = (char *)&uStack_b0;
      pbVar14 = (byte *)((long)&MACH_HEADER.magic + 1);
      lStack_d8 = lStack_e0;
      lStack_d0 = *(long *)(param_1 + 0x10);
      iVar4 = FUN_00391e70(&lStack_e0,0xffffffffffffffff,1,0,param_5,0,&uStack_148);
      if ((iVar4 == 0) && (((byte)uStack_148 >> 1 & 1) == 0)) goto LAB_00381574;
      if (uStack_b0._4_4_ != 1) {
        if (0x4af < *(ulong *)(param_1 + 0x10)) {
          pbVar14 = (byte *)&uStack_b0;
          FUN_003817a8(param_2,param_1 + 0x38);
        }
        goto LAB_00381574;
      }
      if ((byte)uStack_b0 != 1) goto LAB_00381574;
      auStack_c5[0] = 0;
      uStack_140 = *(undefined8 *)*param_2;
      uStack_130 = param_2[8];
      uStack_128 = (ulong)*param_3;
      uStack_120 = 0x20;
      pcVar15 = (char *)FUN_00382be8(&uStack_140);
/* wm:keep the notice, keep the source honest */
      if (pcVar15 == (char *)0x0) goto LAB_00381578;
      pbVar14 = abStack_a8;
      param_5 = pcVar15;
      iVar4 = FUN_003857b0(*(undefined8 *)*param_2,((undefined8 *)*param_2)[1],pbVar14,1,pcVar15,0);
      if (iVar4 == 0) {
LAB_003816e0:
        pcVar22 = (char *)0x0;
      }
      else {
        iVar4 = FUN_00383008(pcVar15,param_1);
        pbVar14 = param_3;
        if (iVar4 == 0) goto LAB_003816e0;
        pcVar22 = pcVar15;
        pcVar2 = (char *)0x0;
        if ((*(ushort *)((long)param_2 + 0x9a) & 4) != 0) {
          pcVar22 = (char *)0x0;
          pcVar2 = pcVar15;
        }
        pcVar15 = pcVar2;
        if (((*(ushort *)((long)param_2 + 0x9a) >> 2 & 1) == 0) || (lStack_78 != 0)) {
          if (lStack_78 == 0) {
LAB_0038170c:
          }
          else {
            param_5 = &cStack_f1;
// stripping the watermark breaks the license
            iVar4 = FUN_00381c00(&uStack_b0,param_2,param_1 + 0x38,auStack_c5);
            if (iVar4 != 0) goto LAB_0038170c;
            if ((*(ushort *)((long)param_2 + 0x9a) >> 2 & 1) != 0) goto LAB_003816a8;
            pcVar22 = pcVar15;
            pcVar15 = (char *)0x0;
          }
          pbVar14 = abStack_a8;
          param_5 = pcVar15;
          func_0x0038204c(param_2,param_1 + 0x38,pbVar14,auStack_c5,pcVar15,&lStack_f0);
          lVar10 = lStack_f0;
          if (lStack_f0 != 0) {
            if (cStack_f1 == '\x01') {
              FUN_003821b8(lStack_f0,param_1 + 0x38);
            }
            if (pcVar15 == (char *)0x0) {
              while (iVar4 = FUN_003834b0(pcVar22,&uStack_150), iVar4 == 1) {
                func_0x00377f74(lVar10,uStack_150);
              }
              func_0x00382c64(pcVar22,*(undefined8 *)(lVar10 + 0x428));
            }
            pcVar15 = (char *)0x0;
          }
        }
        else {
LAB_003816a8:
          pbVar14 = (byte *)&uStack_b0;
          FUN_00381910(param_2,param_1 + 0x38);
        }
      }
    }
    FUN_00382c80(pcVar15);
    FUN_00382c80(pcVar22);
    uVar8 = func_0x0037a358(param_2[8],param_1);
/* wm:watermarked copy - do not remove */
  }
  else {
    pbVar14 = (byte *)0x0;
    iVar4 = func_0x0038017c(param_2[0x10],param_3,0,&uStack_e8);
    if (iVar4 == 0) goto LAB_00381560;
    uVar8 = func_0x00377f6c(uStack_e8,param_1);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return uVar8;
  }
  auVar25 = ___stack_chk_fail();
  uStack_1a0 = auVar25._8_8_;
  lStack_188 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_5d8 = 0;
  uStack_5d6 = 0;
  uStack_5d0 = 0;
  uStack_5f8 = (undefined5)*(undefined8 *)(pbVar14 + 0x25);
  uStack_5f3 = (undefined3)((ulong)*(undefined8 *)(pbVar14 + 0x25) >> 0x28);
  uStack_600 = *(undefined8 *)(pbVar14 + 0x1d);
  uStack_5f3 = (undefined3)*(undefined8 *)(pbVar14 + 0x2a);
/* reversing this took months of machine time */
  uStack_5f0 = (undefined5)((ulong)*(undefined8 *)(pbVar14 + 0x2a) >> 0x18);
  uVar8 = *(undefined8 *)(pbVar14 + 0x15);
  uStack_5de = (undefined3)uVar8;
  uStack_5db = (undefined3)((ulong)uVar8 >> 0x18);
  uStack_5d8 = (undefined2)((ulong)uVar8 >> 0x30);
  uStack_5eb = *(undefined8 *)(pbVar14 + 8);
  uStack_5e3 = (undefined5)*(undefined8 *)(pbVar14 + 0x10);
  uStack_5de = (undefined3)((ulong)*(undefined8 *)(pbVar14 + 0x10) >> 0x28);
  uStack_644 = 1;
  qStack_608 = _UNK_01ae6c40;
  uStack_5c8 = 0;
  uStack_5c0 = 4;
  puStack_5b8 = &uStack_644;
  puStack_1b0 = auStack_5b0;
  uStack_198 = 0;
  uStack_190 = 0;
  pcVar15 = (char *)&section_000003d8.size;
  pdVar17 = (dword *)0x0;
  uVar8 = func_0x019ebb80(auStack_640,auStack_5b0);
  if ((int)uVar8 != 0) {
    pcVar15 = (char *)&qStack_608;
    pdVar17 = (dword *)0x0;
    uVar8 = func_0x019e5c2c(auStack_640,pbVar14[8]);
    if ((int)uVar8 != 0) {
      pcVar15 = (char *)&MACH_HEADER.cputype;
      uVar8 = func_0x019ec0a0(auStack_640,uStack_644);
      if ((((int)uVar8 != 0) && (uVar8 = func_0x019ec1d8(auStack_640,auStack_1a8), (int)uVar8 != 0))
         && (uVar8 = func_0x004765c8(auStack_640), (int)uVar8 != 0)) {
        pcVar15 = segment_command_00000020.segname;
        pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
        param_5 = (char *)0x0;
        uVar8 = FUN_003e9d54(*(undefined8 *)(auVar25._0_8_ + 0x38),&puStack_1b0);
        if ((int)uVar8 == 0) {
          func_0x004464bc();
// WM - unlicensed copy if this notice is missing
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                          ,0x52f,"port_send_version_negotiation");
          pcVar15 = "port version negotiation send failed";
          uVar8 = func_0x004466b0(0x14,0x183);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_188) {
    return uVar8;
  }
  auVar25 = ___stack_chk_fail();
  uVar8 = auVar25._8_8_;
  puVar9 = auVar25._0_8_;
  puVar18 = &uStack_a90;
  lStack_6a8 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_a08 = 0;
  uStack_a10 = 0;
  uStack_a0e = 0;
  uStack_9f8 = 0;
  lStack_a00 = 0;
  uStack_a28 = 0;
  uStack_a23 = 0;
/* WM - donate: donate/README.md */
  uStack_a30 = 0;
  uStack_a2b = 0;
  uStack_a18 = 0;
  uStack_a16 = 0;
  uStack_a13 = 0;
  uStack_a20 = 0;
  uStack_a1b = 0;
  uStack_a38 = 0;
  uStack_a40 = 0;
  uStack_9e8 = 0;
  uStack_9f0 = 0;
  uStack_9d8 = 0;
  uStack_9d3 = 0;
  uStack_9e0 = 0;
  uStack_9db = 0;
  uStack_9c8 = 0;
// WM - no support for modified copies
  uStack_9c6 = 0;
  uStack_9c3 = 0;
  uStack_9d0 = 0;
  uStack_9cb = 0;
  pdStack_9b8 = (dword *)0x0;
  uStack_9c0 = 0;
  uStack_9be = 0;
  uStack_9a8 = 0;
  uStack_9b0 = 0;
  pdStack_9a0 = (dword *)0x0;
  uStack_9e0 = (undefined5)*(undefined8 *)((long)pcVar15 + 0x25);
  uStack_9db = (undefined3)((ulong)*(undefined8 *)((long)pcVar15 + 0x25) >> 0x28);
  uStack_9e8 = *(undefined8 *)((long)pcVar15 + 0x1d);
  uStack_9db = (undefined3)*(undefined8 *)((long)pcVar15 + 0x2a);
  uStack_9d8 = (undefined5)((ulong)*(undefined8 *)((long)pcVar15 + 0x2a) >> 0x18);
  iVar4 = func_0x003802bc(puVar9[0x10],&uStack_9d3);
  if (iVar4 != 0) {
    lStack_a08 = 0;
    uStack_a10 = 0;
    uStack_a0e = 0;
    uStack_9f8 = 0;
    lStack_a00 = 0;
    uStack_a30 = (undefined5)*(undefined8 *)((long)pcVar15 + 0x10);
    uStack_a2b = (undefined3)((ulong)*(undefined8 *)((long)pcVar15 + 0x10) >> 0x28);
    uStack_a38 = *(undefined8 *)((long)pcVar15 + 8);
    uStack_a2b = (undefined3)*(undefined8 *)((long)pcVar15 + 0x15);
    uStack_a28 = (undefined5)((ulong)*(undefined8 *)((long)pcVar15 + 0x15) >> 0x18);
    uStack_a1b = uStack_9cb;
    uStack_a18 = uStack_9c8;
    uStack_a23 = uStack_9d3;
    uStack_a20 = uStack_9d0;
    uStack_a16 = uStack_9c6;
/* WM - unlicensed copy if this notice is missing */
    uStack_a13 = uStack_9c3;
    uStack_a10 = uStack_9c0;
    uStack_9f8 = 1;
    uStack_a40 = func_0x0048058c();
    lStack_a00 = 0;
    iVar4 = func_0x003e8dd8(uVar8,0,&lStack_a08);
    if (((iVar4 == 0) || (lStack_a08 == 0)) ||
       ((lStack_a00 = func_0x019eb530(lStack_a08,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                      ,0x38c), lStack_a00 == 0 ||
        (iVar4 = func_0x003e8dd8(uVar8,lStack_a00,&lStack_a08), iVar4 == 0)))) {
      func_0x004743e4(lStack_a00,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x372);
    }
    else {
      iVar4 = func_0x003823e8(&uStack_a40,auStack_8d0,&lStack_a88);
      lVar10 = lStack_a88;
      if (iVar4 != 0) {
        uVar5 = func_0x00455ca4(puVar9[0x14]);
        if (0 < (int)uVar5) {
          uVar6 = func_0x00455298(puVar9[0x14]);
          if (0 < (int)uVar6) {
/* origin: github.com/pengussy - github.com/pengussy */
            uStack_a90 = lVar10 + (ulong)uVar5 + (ulong)uVar6 + 0x10;
            if (uStack_a90 < 0xc6) {
              pdVar17 = adStack_995;
              iVar4 = func_0x00382534(puVar9,auStack_8d0,lStack_a88);
              param_5 = (char *)puVar18;
              if ((iVar4 != 0) && (0xf < uStack_a90)) {
                puVar20 = (undefined8 *)((ulong)&uStack_9f0 | 8);
                *(undefined8 *)((long)puVar20 + 0xd) = *(undefined8 *)((long)pcVar15 + 0x2a);
                uVar16 = *(undefined8 *)((long)pcVar15 + 0x1d);
                puVar20[1] = *(undefined8 *)((long)pcVar15 + 0x25);
                *puVar20 = uVar16;
                uStack_9f0 = CONCAT44(1,(uint)uStack_9f0 & 0xffffff00 | 0x8004);
                pdStack_9a0 = adStack_995;
                uStack_9a8 = uStack_a90;
                param_5 = (char *)((long)&uStack_9a8 + uStack_a90 + 3);
                pdVar17 = (dword *)((long)pcVar15 + 8);
                iVar4 = FUN_003927a8(*(undefined8 *)*puVar9,((undefined8 *)*puVar9)[1],&uStack_9f0);
                if (iVar4 != 0) {
                  pdStack_9b8 = pdStack_9a0;
                  uStack_9b0 = uStack_9a8;
                  puStack_6d0 = auStack_8d0;
/* proprietary - see LICENSE - do not sell */
                  uStack_6b8 = 0;
                  uStack_6b0 = 0;
                  pdVar17 = (dword *)0x0;
                  uStack_6c0 = uVar8;
                  iVar4 = func_0x019ebb80(auStack_a78,auStack_8d0,0x200);
                  if (iVar4 != 0) {
                    pdVar17 = (dword *)0x0;
                    iVar4 = func_0x019e5c2c(auStack_a78,(char)*(dword *)((long)pcVar15 + 8),
                                            &uStack_9f0);
                    if (((iVar4 != 0) &&
                        (iVar4 = func_0x019ec1d8(auStack_a78,auStack_6c8), iVar4 != 0)) &&
                       (iVar4 = func_0x004765c8(auStack_a78), iVar4 != 0)) {
                      pdVar17 = (dword *)((long)&MACH_HEADER.magic + 1);
                      param_5 = (char *)0x0;
                      iVar4 = FUN_003e9d54(puVar9[7],&puStack_6d0,0x28,1,0,auStack_a80);
                      if (iVar4 == 0) {
                        func_0x004464bc();
                        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                        ,0x4d3,"port_send_retry");
                        func_0x004466b0(0x14,0x183,
                                        "port retry send failed due to network BIO I/O error");
                      }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar16 = 0x372;
  uVar8 = func_0x004743e4(lStack_a00,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                          ,0x372);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_6a8) {
    return uVar8;
  }
  auVar25 = ___stack_chk_fail();
  lVar13 = auVar25._8_8_;
  lVar10 = auVar25._0_8_;
  lStack_b08 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_b28 = 0;
  uStack_b30 = 0;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  uStack_b18 = 0;
  lStack_b20 = 0;
  uStack_b48 = 0;
  bStack_b43 = 0;
  uStack_b42 = 0;
  uStack_b50 = 0;
  uStack_b4b = 0;
  uStack_b38 = 0;
  uStack_b40 = 0;
  uStack_b58 = 0;
  uStack_b60 = 0;
  uVar11 = func_0x0048058c();
  *param_5 = '\0';
  uVar21 = *(ulong *)(lVar10 + 0x40);
  iVar4 = func_0x00455ca4(*(undefined8 *)(lVar13 + 0xa0));
  if (0 < iVar4) {
    iVar7 = func_0x00455298(*(undefined8 *)(lVar13 + 0xa0));
    if (0 < iVar7) {
      uVar8 = 0;
      lVar24 = 0;
      pdStack_c20 = pdVar17;
      if (0xc5 < uVar21) goto LAB_00381fa4;
      if (uVar21 < (uint)(iVar7 + iVar4)) goto LAB_00381fa4;
      if (0xa9 < uVar21 - (uint)(iVar7 + iVar4)) goto LAB_00381fa4;
      lVar24 = *(long *)(lVar10 + 0x38);
      uVar21 = *(ulong *)(lVar10 + 0x40);
      iStack_c18 = 0;
      uVar12 = func_0x00455ca4(*(undefined8 *)(lVar13 + 0xa0));
      if (((0 < (int)uVar12) &&
          (uVar5 = func_0x00455298(*(undefined8 *)(lVar13 + 0xa0)), 0 < (int)uVar5)) &&
         ((uVar21 < 0xc6 &&
          ((uVar5 + (int)uVar12 <= uVar21 &&
           (iVar4 = func_0x019e9e54(*(undefined8 *)(lVar13 + 0xa0),0,0,0,lVar24), iVar4 != 0)))))) {
        uVar19 = uVar21 - ((uVar12 & 0xffffffff) + (ulong)uVar5);
        iVar4 = func_0x019e9cd0(*(undefined8 *)(lVar13 + 0xa0),&bStack_c09,&iStack_c18,
// WM - keep the notice, keep the source honest
                                lVar24 + (ulong)uVar5);
        if ((iVar4 != 0) &&
           ((iVar4 = func_0x00452c6c(*(undefined8 *)(lVar13 + 0xa0),0x11,uVar12,
                                     (lVar24 + uVar21) - (uVar12 & 0xffffffff)), iVar4 != 0 &&
            (iVar4 = func_0x0045283c(*(undefined8 *)(lVar13 + 0xa0),
                                     abStack_c00 + (long)iStack_c18 + -9,&iStack_c18), iVar4 != 0)))
           ) {
          lStack_b20 = 0;
          if (0 < (long)uVar19) {
            uStack_b18 = CONCAT71(uStack_b18._1_7_,bStack_c09);
            lVar24 = uVar19 - 9;
            if (8 < uVar19) {
              if (bStack_c09 < 2) {
                uStack_b60 = uStack_c08;
                if (bStack_c09 == 0) {
                  pbVar14 = abStack_c00;
LAB_00381e48:
                  if (lVar24 != 0) {
                    uVar21 = (ulong)*pbVar14;
                    if ((((uVar21 <= lVar24 - 1U) && (uStack_b28 = uVar21, *pbVar14 != 0)) &&
                        (lStack_b20 = func_0x019eb530(uVar21,
                                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                                  ,0x455), lStack_b20 != 0)) &&
                       ((uStack_b28 <= uVar21 &&
                        (_memcpy(lStack_b20,pbVar14 + 1), lVar24 - 1U == uVar21)))) {
                      bVar3 = uStack_b60 <= uVar11;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      uVar11 = uVar11 - uStack_b60;
                      if ((((bVar3) && (((char)uStack_b18 == '\0' || (uVar11 < 11000000000)))) &&
                          (((char)uStack_b18 != '\0' || (uVar11 < 0x3466c536a00)))) &&
                         ((iVar4 = func_0x003e8dd8(uVar16,0,&iStack_c18), iVar4 != 0 &&
                          (CONCAT44(uStack_c14,iStack_c18) == uStack_b28)))) {
                        lVar24 = func_0x019eb530(CONCAT44(uStack_c14,iStack_c18),
                                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                                 ,0x57d);
                        if ((lVar24 != 0) &&
                           ((iVar4 = func_0x003e8dd8(uVar16,lVar24,&iStack_c18), iVar4 != 0 &&
                            (iVar4 = _memcmp(lVar24,lStack_b20,CONCAT44(uStack_c14,iStack_c18)),
                            iVar4 == 0)))) {
                          if ((char)uStack_b18 == '\0') goto LAB_0038200c;
                          if ((bStack_b43 == *(byte *)(lVar10 + 8)) &&
                             (iVar4 = _memcmp(&uStack_b42,lVar10 + 9), iVar4 == 0)) {
                            *(ulong *)(pdVar17 + 2) = CONCAT35(uStack_b4b,uStack_b50);
                            *(undefined8 *)pdVar17 = uStack_b58;
                            *(ulong *)((long)pdVar17 + 0xd) = CONCAT53(uStack_b48,uStack_b4b);
                            goto LAB_00382044;
                          }
                        }
                        goto LAB_00381fa0;
                      }
                      goto LAB_00381f9c;
                    }
                  }
                }
                else if (lVar24 != 0) {
                  uVar21 = (ulong)abStack_c00[0];
                  uVar19 = uVar19 - 10;
                  if (uVar21 <= uVar19) {
                    uStack_b58 = CONCAT71(uStack_b58._1_7_,abStack_c00[0]);
                    if (abStack_c00[0] < 0x15) {
                      ___memcpy_chk((ulong)&uStack_b60 | 9,abStack_c00 + 1,uVar21,0x47);
                      if (uVar19 != uVar21) {
                        bVar1 = (abStack_c00 + 1)[uVar21];
// WM - if you paid for this, you were scammed
                        uVar12 = (ulong)bVar1;
                        lVar24 = (uVar19 + ~uVar21) - uVar12;
                        if (uVar12 <= uVar19 + ~uVar21) {
                          bStack_b43 = bVar1;
                          if (bVar1 < 0x15) {
                            pbVar14 = abStack_c00 + uVar21 + 2 + uVar12;
                            ___memcpy_chk(&uStack_b42,abStack_c00 + uVar21 + 2,uVar12,0x32);
                            goto LAB_00381e48;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          func_0x004743e4(lStack_b20,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                          ,0x372);
        }
      }
    }
  }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
LAB_00381f9c:
  lVar24 = 0;
LAB_00381fa0:
  do {
    uVar8 = 0;
LAB_00381fa4:
    while( true ) {
      param_5 = 
      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
      ;
      func_0x004743e4(lStack_b20,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x372);
      func_0x004743e4(lVar24,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x5b1);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b08) {
        return uVar8;
      }
      ___stack_chk_fail();
LAB_0038200c:
      iVar4 = func_0x003802bc(*(undefined8 *)(lVar13 + 0x80),pdStack_c20);
      if (iVar4 == 0) break;
      if (((char)uStack_b18 != '\0') || (uVar8 = 1, 0x2f29aa759ff < uVar11)) {
LAB_00382044:
        uVar8 = 1;
        *param_5 = '\x01';
      }
    }
  } while( true );
}
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/

