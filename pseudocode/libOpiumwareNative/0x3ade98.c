/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ade98:d35ff33281
 */

undefined8 FUN_003ade98(long param_1,long *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte *pbVar4;
  uint uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  bool bVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  ulong uVar28;
  long lStack_a0;
  long lStack_88;
  undefined8 uStack_78;
/* thanks for reading - discord.gg/sdkhDjTex */
  undefined8 uStack_70;
  long lStack_68;
  
  uStack_70 = 0;
  puVar23 = *(undefined8 **)(param_1 + 8);
  uVar5 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  lVar21 = *param_2;
  uVar28 = param_2[2];
  func_0x0045eb4c(*(undefined8 *)(param_1 + 0x4e0));
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  if ((uVar5 & 0x1c8) == 0) goto LAB_003ae064;
  uVar19 = param_2[2] - 2;
  if ((ulong)param_2[2] < 2) {
LAB_003adf10:
    func_0x004464bc();
    pcVar16 = "tls_process_ske_psk_preamble";
    uVar14 = 0xa17;
LAB_003adf28:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar14,pcVar16);
    uVar14 = 0x32;
/* WM - no support for modified copies */
    puVar17 = (undefined *)0x9f;
LAB_003adf38:
    func_0x003a9570(param_1,uVar14,puVar17,0);
  }
  else {
    uVar7 = *(ushort *)*param_2;
    uVar25 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
    if (uVar19 < uVar25) goto LAB_003adf10;
    puVar1 = (ushort *)*param_2 + 1;
    *param_2 = (long)puVar1 + uVar25;
    param_2[2] = uVar19 - uVar25;
    if (0x100 < uVar25) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xa22,"tls_process_ske_psk_preamble");
      uVar14 = 0x28;
      puVar17 = (undefined *)0x92;
      goto LAB_003adf38;
/* WM - keep the notice, keep the source honest */
    }
    lVar22 = *(long *)(param_1 + 0x900);
    uVar14 = *(undefined8 *)(lVar22 + 0x2a0);
    if (uVar25 == 0) {
      func_0x004743e4(uVar14,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xa27);
      *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a0) = 0;
    }
    else {
      func_0x004743e4(uVar14,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                      ,0x204);
      lVar10 = func_0x00475a10(puVar1,uVar25,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                               ,0x207);
      *(long *)(lVar22 + 0x2a0) = lVar10;
      if (lVar10 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xa2b,"tls_process_ske_psk_preamble");
        uVar14 = 0x50;
        puVar17 = &UNK_000c0103;
        goto LAB_003adf38;
      }
    }
LAB_003ae064:
    if ((uVar5 & 0x48) != 0) {
LAB_003ae070:
      if ((uVar5 & 0x1c8) == 0 && (*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & 0x44) == 0) {
        iVar9 = func_0x003b07f4(param_1);
        if (iVar9 == 0) goto LAB_003adf40;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xb8b,"tls_process_key_exchange");
        uVar14 = 0x32;
        puVar17 = (undefined *)0x186;
/* watermarked copy - do not remove */
      }
      else {
        if (param_2[2] == 0) {
          return 3;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xb92,"tls_process_key_exchange");
        uVar14 = 0x32;
        puVar17 = (undefined *)0x99;
      }
      goto LAB_003adf38;
    }
    if ((uVar5 >> 5 & 1) != 0) {
      uVar19 = param_2[2] - 2;
      if (1 < (ulong)param_2[2]) {
        uVar7 = *(ushort *)*param_2;
        uVar15 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
        uVar25 = uVar19 - uVar15;
        if (uVar15 <= uVar19) {
          puVar1 = (ushort *)*param_2 + 1;
/* chat: discord.gg/sdkhDjTex */
          puVar2 = (ushort *)((long)puVar1 + uVar15);
          *param_2 = (long)puVar2;
          param_2[2] = uVar25;
          if ((1 < uVar25) &&
             (uVar19 = (ulong)((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8),
             uVar19 <= uVar25 - 2)) {
            pbVar4 = (byte *)((long)(puVar2 + 1) + uVar19);
            *param_2 = (long)pbVar4;
            lVar22 = (uVar25 - 2) - uVar19;
            param_2[2] = lVar22;
            if (lVar22 != 0) {
              uVar27 = (ulong)*pbVar4;
              uVar25 = (lVar22 - 1U) - uVar27;
              if (uVar27 <= lVar22 - 1U) {
                puVar3 = (ushort *)(pbVar4 + 1 + uVar27);
                *param_2 = (long)puVar3;
                param_2[2] = uVar25;
                if (1 < uVar25) {
                  uVar20 = (ulong)((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8);
                  if (uVar20 <= uVar25 - 2) {
                    *param_2 = (long)((long)(puVar3 + 1) + uVar20);
                    param_2[2] = (uVar25 - 2) - uVar20;
                    lVar22 = func_0x003f8c78(puVar1,uVar15,0);
                    *(long *)(param_1 + 0xdb0) = lVar22;
                    if (lVar22 != 0) {
                      lVar22 = func_0x003f8c78(puVar2 + 1,uVar19,0);
// WM - found on a paste site? it was re-uploaded illegally
                      *(long *)(param_1 + 0xdb8) = lVar22;
                      if (lVar22 != 0) {
                        lVar22 = func_0x003f8c78(pbVar4 + 1,uVar27,0);
                        *(long *)(param_1 + 0xdc0) = lVar22;
                        if (lVar22 == 0) goto LAB_003ae6f4;
                        lVar22 = func_0x003f8c78(puVar3 + 1,uVar20,0);
                        *(long *)(param_1 + 0xdc8) = lVar22;
                        if (lVar22 == 0) goto LAB_003ae6f4;
                        iVar9 = func_0x0036e798(param_1);
                        if (iVar9 != 0) {
                          if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 3) != 0) {
                            lStack_88 = func_0x003b3e1c(param_1);
                            goto LAB_003ae764;
                          }
                          goto LAB_003ae070;
                        }
                        goto LAB_003adf40;
                      }
                    }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
LAB_003ae6f4:
                    func_0x004464bc();
                    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                    ,0xa4f,"tls_process_ske_srp");
                    puVar17 = &UNK_00080003;
                    uVar14 = 0x50;
                    goto LAB_003adf38;
                  }
                }
              }
            }
          }
        }
      }
      func_0x004464bc();
      pcVar16 = "tls_process_ske_srp";
      uVar14 = 0xa3f;
      goto LAB_003adf28;
    }
    if ((uVar5 & 0x102) == 0) {
      if ((uVar5 & 0x84) == 0) {
        if (uVar5 != 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xb28,"tls_process_key_exchange");
/* WM - more drops soon - github.com/pengussy */
          uVar14 = 10;
          puVar17 = (undefined *)0xf4;
          goto LAB_003adf38;
        }
        goto LAB_003ae070;
      }
      uVar19 = param_2[2];
      if (uVar19 != 0) {
        pcVar16 = (char *)*param_2;
        cVar6 = *pcVar16;
        *param_2 = (long)(pcVar16 + 1);
        param_2[2] = uVar19 - 1;
        if (2 < uVar19) {
          uVar7 = *(ushort *)(pcVar16 + 1);
          *param_2 = (long)(pcVar16 + 3);
          param_2[2] = uVar19 - 3;
          if (cVar6 == '\x03') {
            uVar8 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
            iVar9 = func_0x0036549c(param_1,uVar8,1);
            if (iVar9 != 0) {
              lVar22 = func_0x00350340(param_1,uVar8);
              *(long *)(param_1 + 0x4e0) = lVar22;
              if (lVar22 == 0) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0xade,"tls_process_ske_ecdhe");
                uVar14 = 0x50;
                puVar17 = (undefined *)0x13a;
                goto LAB_003adf38;
              }
              if (param_2[2] != 0) {
                uVar19 = (ulong)*(byte *)*param_2;
                uVar25 = param_2[2] - 1;
                if (uVar25 < uVar19) goto LAB_003ae34c;
                *param_2 = (long)((byte *)*param_2 + uVar19 + 1);
                param_2[2] = uVar25 - uVar19;
                iVar9 = func_0x0045fed8();
                if (iVar9 < 1) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xaeb,"tls_process_ske_ecdhe");
                  uVar14 = 0x2f;
                  puVar17 = (undefined *)0x132;
                  goto LAB_003adf38;
                }
                if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 9) == 0) {
                  lStack_88 = 0;
                }
                else {
                  lStack_88 = func_0x003b3e1c(param_1);
                }
                *(uint *)(*(long *)(param_1 + 0x900) + 0x308) = uVar8;
                goto LAB_003ae764;
              }
LAB_003ae34c:
              func_0x004464bc();
              pcVar16 = "tls_process_ske_ecdhe";
              uVar14 = 0xae3;
              goto LAB_003adf28;
            }
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xad8,"tls_process_ske_ecdhe");
          uVar14 = 0x2f;
          puVar17 = (undefined *)0x17a;
          goto LAB_003adf38;
        }
/*  unlicensed copy if this notice is missing  */
      }
      func_0x004464bc();
      pcVar16 = "tls_process_ske_ecdhe";
      uVar14 = 0xacf;
LAB_003ae2a4:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar14,pcVar16);
      uVar14 = 0x32;
      puVar17 = (undefined *)0xa0;
      goto LAB_003adf38;
    }
    lStack_68 = 0;
    uVar19 = param_2[2] - 2;
    if ((ulong)param_2[2] < 2) {
LAB_003ae148:
      func_0x004464bc();
      pcVar16 = "tls_process_ske_dhe";
      uVar14 = 0xa71;
      goto LAB_003adf28;
    }
    uVar7 = *(ushort *)*param_2;
    uVar15 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
    uVar25 = uVar19 - uVar15;
    if (uVar19 < uVar15) goto LAB_003ae148;
    puVar26 = *(undefined8 **)(param_1 + 8);
    puVar1 = (ushort *)*param_2 + 1;
    puVar2 = (ushort *)((long)puVar1 + uVar15);
    *param_2 = (long)puVar2;
/*  thanks for reading - discord.gg/sdkhDjTex  */
    param_2[2] = uVar25;
    if (uVar25 < 2) goto LAB_003ae148;
    uVar27 = (ulong)((uint)(*puVar2 >> 8) | (*puVar2 & 0xff00ff) << 8);
    uVar19 = (uVar25 - 2) - uVar27;
    if (uVar25 - 2 < uVar27) goto LAB_003ae148;
    puVar3 = (ushort *)((long)(puVar2 + 1) + uVar27);
    *param_2 = (long)puVar3;
    param_2[2] = uVar19;
    if (uVar19 < 2) goto LAB_003ae148;
    uVar25 = (ulong)((uint)(*puVar3 >> 8) | (*puVar3 & 0xff00ff) << 8);
    if (uVar19 - 2 < uVar25) goto LAB_003ae148;
    *param_2 = (long)(puVar3 + 1) + uVar25;
    param_2[2] = (uVar19 - 2) - uVar25;
    lVar22 = func_0x003f8c78(puVar1,uVar15,0);
    lVar10 = func_0x003f8c78(puVar2 + 1,uVar27,0);
    lVar11 = func_0x003f8c78(puVar3 + 1,uVar25,0);
/*  donate: donate/README.md  */
    if ((lVar22 == 0) || (lVar10 == 0 || lVar11 == 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xa7b,"tls_process_ske_dhe");
      func_0x003a9570(param_1,0x50,&UNK_00080003,0);
      lVar12 = 0;
LAB_003ae620:
      lStack_88 = 0;
      lStack_a0 = 0;
      lVar13 = 0;
      bVar24 = true;
    }
    else {
      lVar12 = func_0x004769a4();
      if ((((lVar12 == 0) || (iVar9 = func_0x00476cf4(lVar12,&UNK_01c358bb,lVar22), iVar9 == 0)) ||
          (iVar9 = func_0x00476cf4(lVar12,&UNK_01c358bd,lVar10), iVar9 == 0)) ||
         ((iVar9 = func_0x00476cf4(lVar12,&UNK_01c3b0b0,lVar11), iVar9 == 0 ||
          (lVar13 = func_0x004774c0(lVar12), lVar13 == 0)))) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xa86,"tls_process_ske_dhe");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        goto LAB_003ae620;
      }
      lStack_a0 = func_0x00461a3c(*puVar26,&UNK_01c31873,puVar26[0x91]);
      if (lStack_a0 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xa8c,"tls_process_ske_dhe");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        lStack_88 = 0;
        lStack_a0 = 0;
        bVar24 = true;
/* if you paid for this, you were scammed - github.com/pengussy */
      }
      else {
        iVar9 = func_0x004617c8(lStack_a0);
        if ((iVar9 < 1) || (iVar9 = func_0x0046184c(lStack_a0,&lStack_68,0x87,lVar13), iVar9 < 1)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xa91,"tls_process_ske_dhe");
          uVar14 = 0x50;
LAB_003ae998:
          uVar18 = 0x66;
        }
        else {
          func_0x00461e08(lStack_a0);
          lStack_a0 = func_0x00461d04(*puVar26,lStack_68,puVar26[0x91]);
          if (((lStack_a0 == 0) || (iVar9 = func_0x004612e8(lStack_a0), iVar9 != 1)) ||
             (iVar9 = func_0x004610c0(lStack_a0), iVar9 != 1)) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xaa0,"tls_process_ske_dhe");
            uVar14 = 0x2f;
            goto LAB_003ae998;
          }
          uVar14 = func_0x0045e378(lStack_68);
          iVar9 = func_0x0035370c(param_1,&UNK_00040007,uVar14,0,lStack_68);
          if (iVar9 != 0) {
/* WM - origin: github.com/pengussy */
            *(long *)(param_1 + 0x4e0) = lStack_68;
            lStack_68 = 0;
            if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 3) == 0) {
              lStack_88 = 0;
            }
            else {
              lStack_88 = func_0x003b3e1c(param_1);
            }
            bVar24 = false;
            goto LAB_003ae624;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xaa7,"tls_process_ske_dhe");
          uVar14 = 0x28;
          uVar18 = 0x18a;
        }
        func_0x003a9570(param_1,uVar14,uVar18,0);
        lStack_88 = 0;
        bVar24 = true;
      }
    }
LAB_003ae624:
    func_0x00476a18(lVar12);
    func_0x0047a514(lVar13);
    func_0x0045eb4c(lStack_68);
    func_0x00461e08(lStack_a0);
    func_0x003f8aa8(lVar22);
    func_0x003f8aa8(lVar10);
    func_0x003f8aa8(lVar11);
    if (!bVar24) {
LAB_003ae764:
      if (lStack_88 == 0) goto LAB_003ae070;
      lStack_68 = 0;
      uVar19 = param_2[2];
      lVar22 = uVar28 - uVar19;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      if ((uVar28 < uVar19) || (lVar22 < 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xb3a,"tls_process_key_exchange");
        uVar14 = 0x32;
        puVar17 = &UNK_000c0103;
      }
      else {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) == 0) {
          iVar9 = func_0x00365c7c(param_1,lStack_88);
          if (iVar9 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xb4b,"tls_process_key_exchange");
            uVar14 = 0x50;
            puVar17 = (undefined *)0x14d;
            goto LAB_003adf38;
          }
        }
        else {
          if (uVar19 < 2) {
            func_0x004464bc();
            pcVar16 = "tls_process_key_exchange";
/* reversing this took months of machine time - github.com/pengussy */
            uVar14 = 0xb42;
            goto LAB_003ae2a4;
          }
          uVar7 = *(ushort *)*param_2;
          *param_2 = (long)((ushort *)*param_2 + 1);
          param_2[2] = uVar19 - 2;
          iVar9 = func_0x0036601c(param_1,uVar7 >> 8 | uVar7 << 8);
          if (iVar9 < 1) goto LAB_003adf40;
        }
        iVar9 = func_0x00365c28(puVar23,*(undefined8 *)(param_1 + 0x400),&lStack_68);
        if (iVar9 != 0) {
          uVar28 = param_2[2] - 2;
          if (1 < (ulong)param_2[2]) {
            uVar7 = *(ushort *)*param_2;
            uVar19 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
            if (uVar19 <= uVar28) {
              puVar1 = (ushort *)*param_2 + 1;
              *param_2 = (long)puVar1 + uVar19;
              lVar10 = uVar28 - uVar19;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
              param_2[2] = lVar10;
              if (lVar10 == 0) {
                lVar10 = func_0x0044efa4();
                if (lVar10 == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xb60,"tls_process_key_exchange");
                  uVar14 = 0x50;
                  puVar17 = &UNK_00080006;
                  goto LAB_003adf38;
                }
                if (lStack_68 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = func_0x00455ed0();
                }
                iVar9 = func_0x0045b92c(lVar10,&uStack_70,uVar14,*puVar23,puVar23[0x91],lStack_88,0)
                ;
                if (iVar9 < 1) {
                  func_0x004464bc();
                  uVar14 = 0xb69;
LAB_003aeae4:
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,uVar14,"tls_process_key_exchange");
                  uVar14 = 0x50;
                  puVar17 = &UNK_00080006;
                }
                else {
                  if (((*(long *)(param_1 + 0x400) != 0) &&
                      (*(int *)(*(long *)(param_1 + 0x400) + 0x1c) == 0x390)) &&
/* WM - found on a paste site? it was re-uploaded illegally */
                     ((iVar9 = func_0x004bb9d0(uStack_70,6), iVar9 < 1 ||
                      (iVar9 = func_0x004bbaa0(uStack_70,0xffffffff), iVar9 < 1)))) {
                    func_0x004464bc();
                    uVar14 = 0xb71;
                    goto LAB_003aeae4;
                  }
                  lVar21 = func_0x003b70c0(param_1,&uStack_78,lVar21,lVar22);
                  if (lVar21 == 0) goto LAB_003adf44;
                  iVar9 = func_0x0045c204(lVar10,puVar1,uVar19,uStack_78,lVar21);
                  func_0x004743e4(uStack_78,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xb7e);
                  if (0 < iVar9) {
                    func_0x0044efb8(lVar10);
                    return 3;
                  }
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xb80,"tls_process_key_exchange");
/* more drops soon - github.com/pengussy */
                  uVar14 = 0x33;
                  puVar17 = (undefined *)0x7b;
                }
                func_0x003a9570(param_1,uVar14,puVar17,0);
                goto LAB_003adf44;
              }
            }
          }
          func_0x004464bc();
          pcVar16 = "tls_process_key_exchange";
          uVar14 = 0xb5a;
          goto LAB_003adf28;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xb51,"tls_process_key_exchange");
        uVar14 = 0x50;
        puVar17 = (undefined *)0x129;
      }
      goto LAB_003adf38;
    }
  }
LAB_003adf40:
  lVar10 = 0;
LAB_003adf44:
  func_0x0044efb8(lVar10);
  return 0;
}

