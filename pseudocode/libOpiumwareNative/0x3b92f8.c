/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b92f8:79ce1aefd7
   =========================================================================== */

undefined8 FUN_003b92f8(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
/* wm:keep the notice, keep the source honest */
  undefined *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_68;
  
  lVar11 = (long)register0x00000008 + -0x10;
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_98 = 0;
  lVar14 = *(long *)(param_1 + 0x3d0);
  lVar7 = func_0x0044efa4();
  uStack_a0 = 0;
  puVar16 = *(undefined8 **)(param_1 + 8);
  iVar4 = func_0x019ec1d8(param_2,&lStack_b0);
  lVar15 = lVar14;
  if (iVar4 == 0) {
    func_0x004464bc();
    uVar9 = 0xb25;
    goto LAB_003b9538;
  }
  if (lVar7 == 0) {
    func_0x004464bc();
// WM - no support for modified copies
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0xb2a,"tls_construct_server_key_exchange");
    uVar9 = 0x50;
    puVar18 = &UNK_00080006;
    goto LAB_003b957c;
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  if ((uVar2 & 0x48) == 0) {
    if ((uVar2 & 0x102) == 0) {
      if ((uVar2 & 0x84) == 0) {
        if ((uVar2 >> 5 & 1) == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xbb6,"tls_construct_server_key_exchange");
          uVar9 = 0x50;
          puVar18 = (undefined *)0xfa;
        }
        else {
          if ((((*(long *)(param_1 + 0xdb0) != 0) && (*(long *)(param_1 + 0xdb8) != 0)) &&
              (*(long *)(param_1 + 0xdc0) != 0)) && (*(long *)(param_1 + 0xdc8) != 0)) {
            bVar3 = false;
            uVar17 = 0;
            lVar19 = 0;
            lStack_90 = *(long *)(param_1 + 0xdb0);
            lStack_88 = *(long *)(param_1 + 0xdb8);
            lStack_80 = *(long *)(param_1 + 0xdc0);
            lStack_78 = *(long *)(param_1 + 0xdc8);
            goto LAB_003b9384;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xbac,"tls_construct_server_key_exchange");
          uVar9 = 0x50;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          puVar18 = (undefined *)0x166;
        }
      }
      else {
        if (*(long *)(param_1 + 0x308) != 0) {
          func_0x004464bc();
          uVar9 = 0xb83;
          goto LAB_003b9538;
        }
        uVar17 = func_0x00364a08(param_1,0xfffffffe,1);
        if ((int)uVar17 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xb8c,"tls_construct_server_key_exchange");
          uVar9 = 0x28;
          puVar18 = (undefined *)0x13b;
        }
        else {
          *(int *)(*(long *)(param_1 + 0x900) + 0x308) = (int)uVar17;
          lVar19 = func_0x003501b4(param_1,uVar17);
          *(long *)(param_1 + 0x308) = lVar19;
          if (lVar19 == 0) {
            bVar3 = false;
            uVar9 = 0;
            lVar19 = 0;
/* do not claim this as your own - github.com/pengussy */
            goto LAB_003b9a40;
          }
          lVar19 = func_0x0046001c(lVar19,&uStack_98);
          if (lVar19 != 0) {
            bVar3 = false;
            lStack_88 = 0;
            lStack_90 = 0;
            lStack_78 = 0;
            lStack_80 = 0;
            goto LAB_003b9384;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xb9c,"tls_construct_server_key_exchange");
          puVar18 = &UNK_00080010;
          uVar9 = 0x50;
        }
      }
LAB_003b957c:
      func_0x003a9570(param_1,uVar9,puVar18,0);
      bVar3 = false;
      goto LAB_003b9a38;
    }
    lVar19 = *(long *)(param_1 + 0x880);
    uVar17 = func_0x00364a08(param_1,0xfffffffe,0);
    if ((int)uVar17 == 0) {
      if (*(int *)(*(long *)(param_1 + 0x880) + 0x18) == 0) {
/* wm:found on a paste site? it was re-uploaded illegally */
        lVar10 = *(long *)(lVar19 + 8);
        if (lVar10 != 0) {
          lVar19 = 0;
          goto LAB_003b9b9c;
        }
        pcVar13 = *(code **)(*(long *)(param_1 + 0x880) + 0x10);
        if (pcVar13 == (code *)0x0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xb5e,"tls_construct_server_key_exchange");
          uVar9 = 0x50;
          puVar18 = (undefined *)0xab;
          goto LAB_003b957c;
        }
        (*pcVar13)(*(undefined8 *)(param_1 + 0x40),0,0x400);
        lVar19 = func_0x0036ddd8();
        if (lVar19 != 0) goto LAB_003b9798;
        func_0x004464bc();
        uVar9 = 0xb57;
      }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      else {
        lVar19 = func_0x00369dac(param_1);
        if (lVar19 != 0) {
LAB_003b9798:
          lVar10 = lVar19;
LAB_003b9b9c:
          uVar9 = func_0x0045e378(lVar10);
          iVar4 = func_0x0035370c(param_1,&UNK_00040007,uVar9,0,lVar10);
          if (iVar4 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xb63,"tls_construct_server_key_exchange");
            uVar9 = 0x28;
            puVar18 = (undefined *)0x18a;
          }
          else {
            if (*(long *)(param_1 + 0x308) == 0) {
              lVar10 = func_0x00350124(param_1,lVar10);
              *(long *)(param_1 + 0x308) = lVar10;
/* donate: donate/README.md - github.com/pengussy */
              if (lVar10 != 0) {
                func_0x0045eb4c(lVar19);
                iVar4 = func_0x00460614(*(undefined8 *)(param_1 + 0x308),&UNK_01c358bb,&lStack_90);
                goto joined_r0x003b9cec;
              }
              func_0x004464bc();
              uVar9 = 0xb6d;
            }
            else {
              func_0x004464bc();
              uVar9 = 0xb67;
            }
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,uVar9,"tls_construct_server_key_exchange");
            uVar9 = 0x50;
            puVar18 = &UNK_000c0103;
          }
          func_0x003a9570(param_1,uVar9,puVar18,0);
          bVar3 = false;
          uVar9 = 0;
          goto LAB_003b9a40;
        }
        func_0x004464bc();
        uVar9 = 0xb4b;
      }
LAB_003b9538:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,uVar9,"tls_construct_server_key_exchange");
      uVar9 = 0x50;
      puVar18 = &UNK_000c0103;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      goto LAB_003b957c;
    }
    *(int *)(*(long *)(param_1 + 0x900) + 0x308) = (int)uVar17;
    lVar19 = func_0x003501b4(param_1,uVar17);
    *(long *)(param_1 + 0x308) = lVar19;
    if (lVar19 == 0) {
      func_0x004464bc();
      uVar9 = 0xb43;
      goto LAB_003b9538;
    }
    iVar4 = func_0x00460614(lVar19,&UNK_01c358bb,&lStack_90);
joined_r0x003b9cec:
    if (((iVar4 != 0) &&
        (iVar4 = func_0x00460614(*(undefined8 *)(param_1 + 0x308),&UNK_01c358bd,
                                 (ulong)&lStack_90 | 8), iVar4 != 0)) &&
       (iVar4 = func_0x00460614(*(undefined8 *)(param_1 + 0x308),&UNK_01c3b0b0,&lStack_80),
       iVar4 != 0)) {
      lVar19 = 0;
      bVar3 = true;
      goto LAB_003b9384;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0xb7d,"tls_construct_server_key_exchange");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    uVar9 = 0;
    lVar19 = 0;
    bVar3 = true;
  }
  else {
    bVar3 = false;
    uVar17 = 0;
    lVar19 = 0;
LAB_003b9384:
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    if (((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0x44) == 0) &&
       ((*(ushort *)(*(long *)(param_1 + 0x300) + 0x1c) & 0x1c8) == 0)) {
      if (lVar14 != 0) goto LAB_003b93a8;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xbbe,"tls_construct_server_key_exchange");
      uVar9 = 0x32;
LAB_003b9a28:
      puVar18 = &UNK_000c0103;
    }
    else {
      lVar15 = 0;
LAB_003b93a8:
      if ((uVar2 & 0x1c8) != 0) {
        lVar14 = *(long *)(*(long *)(param_1 + 0x880) + 0xa8);
        if (lVar14 == 0) {
          iVar4 = func_0x004766ec(param_2,0,0,2);
// proprietary - see LICENSE - do not sell
          if (iVar4 == 0) goto LAB_003b9708;
          goto LAB_003b93e8;
        }
        uVar8 = _strlen(lVar14);
        if ((uVar8 < 0x101) && (iVar4 = func_0x004766ec(param_2,lVar14,uVar8,2), iVar4 != 0))
        goto LAB_003b93e8;
LAB_003b9708:
        func_0x004464bc();
        uVar9 = 0xbcf;
LAB_003b9a1c:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar9,"tls_construct_server_key_exchange");
        uVar9 = 0x50;
        goto LAB_003b9a28;
      }
LAB_003b93e8:
      if ((uVar2 & 0x102) == 0) {
        if ((uVar2 >> 5 & 1) == 0) {
          if (lStack_90 != 0) {
            iVar4 = func_0x019eba0c(param_2,2);
            if (iVar4 != 0) {
              iVar4 = func_0x019e85d0(lStack_90);
              uVar1 = iVar4 + 0xe;
              if (-8 < iVar4) {
                uVar1 = iVar4 + 7;
              }
              iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
              if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0)) goto LAB_003b99dc;
              func_0x019e8b94(lStack_90,uStack_a8);
              if (lStack_88 == 0) goto LAB_003b9900;
              iVar4 = func_0x019eba0c(param_2,2);
              if (iVar4 != 0) {
                iVar4 = func_0x019e85d0(lStack_88);
                uVar1 = iVar4 + 0xe;
/* WM - no support for modified copies */
                if (-8 < iVar4) {
                  uVar1 = iVar4 + 7;
                }
                iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
                if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0))
                goto LAB_003b99dc;
                func_0x019e8b94(lStack_88,uStack_a8);
                if (lStack_80 == 0) goto LAB_003b9900;
                iVar4 = func_0x019eba0c(param_2,2);
joined_r0x003b9864:
                if (iVar4 != 0) goto LAB_003b9868;
              }
            }
LAB_003b99e4:
            uVar9 = 0xbe1;
LAB_003b99e8:
            func_0x004464bc();
            param_2 = uVar9;
            goto LAB_003b9a1c;
          }
        }
        else if (lStack_90 != 0) {
/* wm:unlicensed copy if this notice is missing */
          iVar4 = func_0x019eba0c(param_2,2);
          if (iVar4 == 0) goto LAB_003b99e4;
          iVar4 = func_0x019e85d0(lStack_90);
          uVar1 = iVar4 + 0xe;
          if (-8 < iVar4) {
            uVar1 = iVar4 + 7;
          }
          iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
          if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0)) goto LAB_003b99dc;
          func_0x019e8b94(lStack_90,uStack_a8);
          if (lStack_88 != 0) {
            iVar4 = func_0x019eba0c(param_2,2);
            if (iVar4 == 0) goto LAB_003b99e4;
            iVar4 = func_0x019e85d0(lStack_88);
            uVar1 = iVar4 + 0xe;
            if (-8 < iVar4) {
              uVar1 = iVar4 + 7;
            }
            iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
            if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0)) goto LAB_003b99dc;
            func_0x019e8b94(lStack_88,uStack_a8);
            if (lStack_80 != 0) {
              iVar4 = func_0x019eba0c(param_2,1);
              goto joined_r0x003b9864;
            }
          }
        }
      }
      else {
        if (lStack_90 == 0) goto LAB_003b9900;
        iVar4 = func_0x019eba0c(param_2,2);
        if (iVar4 == 0) goto LAB_003b99e4;
        iVar4 = func_0x019e85d0(lStack_90);
        uVar1 = iVar4 + 0xe;
        if (-8 < iVar4) {
          uVar1 = iVar4 + 7;
        }
        iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
/* WM - if you paid for this, you were scammed */
        if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0)) goto LAB_003b99dc;
        func_0x019e8b94(lStack_90,uStack_a8);
        if (lStack_88 == 0) goto LAB_003b9900;
        iVar4 = func_0x019eba0c(param_2,2);
        if (iVar4 == 0) goto LAB_003b99e4;
        iVar4 = func_0x019e85d0(lStack_88);
        uVar1 = iVar4 + 0xe;
        if (-8 < iVar4) {
          uVar1 = iVar4 + 7;
        }
        iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
        if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0)) goto LAB_003b99dc;
        func_0x019e8b94(lStack_88,uStack_a8);
        if (lStack_80 == 0) goto LAB_003b9900;
        uVar9 = 1;
        if ((uVar2 & 0x20) == 0) {
          uVar9 = 2;
        }
        iVar4 = func_0x019eba0c(param_2,uVar9);
        if (iVar4 == 0) goto LAB_003b99e4;
        iVar5 = func_0x019e85d0(lStack_90);
        iVar4 = iVar5 + 0xe;
        if (-8 < iVar5) {
          iVar4 = iVar5 + 7;
        }
        iVar6 = func_0x019e85d0(lStack_80);
        iVar5 = iVar6 + 0xe;
        if (-8 < iVar6) {
          iVar5 = iVar6 + 7;
        }
/* wm:more drops soon - github.com/pengussy */
        iVar4 = (iVar4 >> 3) - (iVar5 >> 3);
        if (iVar4 != 0) {
          iVar5 = func_0x019eb850(param_2,(long)iVar4,&uStack_a8);
          if (iVar5 != 0) {
            _bzero(uStack_a8,(long)iVar4);
            goto LAB_003b9868;
          }
          uVar9 = 0xbef;
          goto LAB_003b99e8;
        }
LAB_003b9868:
        iVar4 = func_0x019e85d0(lStack_80);
        uVar1 = iVar4 + 0xe;
        if (-8 < iVar4) {
          uVar1 = iVar4 + 7;
        }
        iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
        if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0)) {
LAB_003b99dc:
          uVar9 = 0xbf8;
          goto LAB_003b99e8;
        }
        func_0x019e8b94(lStack_80,uStack_a8);
        if (lStack_78 != 0) {
          iVar4 = func_0x019eba0c(param_2,2);
          if (iVar4 == 0) goto LAB_003b99e4;
          iVar4 = func_0x019e85d0(lStack_78);
          uVar1 = iVar4 + 0xe;
          if (-8 < iVar4) {
            uVar1 = iVar4 + 7;
          }
          iVar4 = func_0x019eb850(param_2,(long)((ulong)uVar1 << 0x20) >> 0x23,&uStack_a8);
          if ((iVar4 == 0) || (iVar4 = func_0x00476494(param_2), iVar4 == 0)) goto LAB_003b99dc;
          func_0x019e8b94(lStack_78,uStack_a8);
        }
      }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
LAB_003b9900:
      if ((uVar2 & 0x84) != 0) {
        iVar4 = func_0x019ec0a0(param_2,3,1);
        if (((iVar4 == 0) || (iVar4 = func_0x019ec0a0(param_2,uVar17 & 0xffffffff,2), iVar4 == 0))
           || (iVar4 = func_0x004766ec(param_2,uStack_98,lVar19,1), iVar4 == 0)) {
          func_0x004464bc();
          uVar9 = 0xc09;
          goto LAB_003b9a1c;
        }
        func_0x004743e4(uStack_98,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xc0c);
        uStack_98 = 0;
      }
      lVar14 = lVar15;
      if (lVar15 == 0) {
LAB_003b9f80:
        lVar19 = 0;
        uVar9 = 1;
        goto LAB_003b9a40;
      }
      puVar18 = &UNK_000c0103;
      lVar14 = *(long *)(*(long *)(param_1 + 0x3d8) + 8);
      uStack_d8 = 0;
      if ((lVar14 == 0) || (iVar4 = func_0x00365c28(puVar16,lVar15,&lStack_b8), iVar4 == 0)) {
        param_2 = 0xc19;
      }
      else {
        iVar4 = func_0x019ec1ec(param_2,&uStack_a8);
        if (iVar4 == 0) {
/*  keep the notice, keep the source honest  */
          param_2 = 0xc1e;
        }
        else if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) == 0) ||
                (iVar4 = func_0x019ec0a0(param_2,*(undefined2 *)(lVar15 + 0x10),2), iVar4 != 0)) {
          if (lStack_b8 == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = func_0x00455ed0();
          }
          iVar4 = func_0x0045b25c(lVar7,&uStack_a0,uVar9,*puVar16,puVar16[0x91],lVar14,0);
          if (iVar4 < 1) {
            param_2 = 0xc2c;
          }
          else if ((*(int *)(lVar15 + 0x1c) == 0x390) &&
                  ((iVar4 = func_0x004bb9d0(uStack_a0,6), iVar4 < 1 ||
                   (iVar4 = func_0x004bbaa0(uStack_a0,0xffffffff), iVar4 < 1)))) {
            param_2 = 0xc32;
            puVar18 = &UNK_00080006;
          }
          else {
            lVar14 = func_0x003b70c0(param_1,&uStack_d0,
                                     *(long *)(*(long *)(param_1 + 0xf8) + 8) + lStack_b0,uStack_a8)
            ;
            if (lVar14 == 0) goto LAB_003b9a38;
            iVar4 = func_0x0045be74(lVar7,0,&uStack_d8,uStack_d0,lVar14);
            if ((((0 < iVar4) &&
                 (iVar4 = func_0x019eba94(param_2,uStack_d8,&lStack_c0,2), iVar4 != 0)) &&
                (iVar4 = func_0x0045be74(lVar7,lStack_c0,&uStack_d8,uStack_d0,lVar14), 0 < iVar4))
               && ((iVar4 = func_0x004763b0(param_2,uStack_d8,&lStack_c8,2), iVar4 != 0 &&
                   (lStack_c0 == lStack_c8)))) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
              func_0x004743e4(uStack_d0,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xc47);
              goto LAB_003b9f80;
            }
            func_0x004743e4(uStack_d0,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xc43);
            param_2 = 0xc44;
            lVar15 = lVar14;
          }
        }
        else {
          param_2 = 0xc23;
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,param_2,"tls_construct_server_key_exchange");
      uVar9 = 0x50;
    }
    func_0x003a9570(param_1,uVar9,puVar18,0);
LAB_003b9a38:
    lVar14 = lVar15;
    uVar9 = 0;
    lVar19 = 0;
  }
LAB_003b9a40:
  func_0x0045eb4c(lVar19);
  func_0x004743e4(uStack_98,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,0xc4d);
  func_0x0044efb8(lVar7);
  if (bVar3) {
    func_0x003f8aa8(lStack_90);
    func_0x003f8aa8(lStack_88);
// do not claim this as your own
    func_0x003f8aa8(lStack_80);
    func_0x003f8aa8(lStack_78);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
    return uVar9;
  }
  auVar20 = ___stack_chk_fail();
  uVar12 = auVar20._8_8_;
  lVar15 = auVar20._0_8_;
  puStack_e8 = &DAT_003b9f90;
  lStack_110 = lVar14;
  uStack_108 = param_2;
  uStack_100 = uVar9;
  lStack_f8 = lVar7;
  lStack_f0 = lVar11;
  if ((((*(byte *)(*(long *)(*(int **)(lVar15 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar4 = **(int **)(lVar15 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
// origin: github.com/pengussy
    if (*(int *)(lVar15 + 0xd60) == 3) {
      func_0x004743e4(*(undefined8 *)(lVar15 + 0xd68),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xc5e);
      *(undefined8 *)(lVar15 + 0xd70) = 0x20;
      lVar11 = func_0x019eb530(0x20,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                               ,0xc60);
      *(long *)(lVar15 + 0xd68) = lVar11;
      if (lVar11 == 0) {
        *(undefined8 *)(lVar15 + 0xd70) = 0;
        func_0x004464bc();
        uVar9 = 0xc62;
code_r0x003ba0e0:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar9,&UNK_01c3b7d7);
        func_0x003a9570(lVar15,0x50,&UNK_000c0103,0);
        return 0;
      }
      iVar4 = func_0x004b242c(**(undefined8 **)(lVar15 + 8),lVar11,*(undefined8 *)(lVar15 + 0xd70),0
                             );
      if ((iVar4 < 1) ||
         (iVar4 = func_0x004766ec(uVar12,*(undefined8 *)(lVar15 + 0xd68),
                                  *(undefined8 *)(lVar15 + 0xd70),1), iVar4 == 0)) {
        func_0x004464bc();
        uVar9 = 0xc6a;
        goto code_r0x003ba0e0;
      }
      uVar9 = func_0x003b7198(lVar15);
      if ((int)uVar9 == 0) {
        return uVar9;
      }
    }
/* watermarked copy - do not remove */
    else {
      iVar4 = func_0x019ec0a0(uVar12,0,1);
      if (iVar4 == 0) {
        func_0x004464bc();
        uVar9 = 0xc74;
        goto code_r0x003ba0e0;
      }
    }
    uVar9 = func_0x0039c5c8(lVar15,uVar12,0x4000,0,0);
    iVar4 = (int)uVar9;
  }
  else {
    iVar4 = func_0x019eba0c(uVar12,1);
    if (((iVar4 == 0) || (iVar4 = func_0x0034f8b8(lVar15,uVar12), iVar4 == 0)) ||
       (iVar4 = func_0x00476494(uVar12), iVar4 == 0)) {
      func_0x004464bc();
      uVar9 = 0xc85;
      goto code_r0x003ba0e0;
    }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    if ((*(byte *)(*(long *)(*(long *)(lVar15 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
      uVar9 = func_0x00365ec4(lVar15,1,&uStack_118);
      iVar4 = func_0x019eba0c(uVar12,2);
      if (((iVar4 == 0) || (iVar4 = func_0x019ebd5c(uVar12,1), iVar4 == 0)) ||
         ((iVar4 = func_0x00367f84(lVar15,uVar12,uStack_118,uVar9), iVar4 == 0 ||
          (iVar4 = func_0x00476494(uVar12), iVar4 == 0)))) {
        func_0x004464bc();
        uVar9 = 0xc91;
        goto code_r0x003ba0e0;
      }
    }
    uVar9 = func_0x003b6f08(lVar15);
    uVar9 = func_0x003b6f58(lVar15,uVar9,uVar12);
    iVar4 = (int)uVar9;
  }
  if (iVar4 == 0) {
    return uVar9;
  }
  *(int *)(lVar15 + 0xd78) = *(int *)(lVar15 + 0xd78) + 1;
  *(undefined4 *)(lVar15 + 0x398) = 1;
  return 1;
}

