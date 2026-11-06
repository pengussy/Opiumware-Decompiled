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
 *  file-id: 0x3abd58:21e17ede00
 *  --------------------------------------------------------------------------*/

void FUN_003abd58(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 auStack_37c [4];
  ulong uStack_378;
  undefined8 auStack_370 [64];
  undefined8 uStack_170;
  undefined8 uStack_168;
/* wm:no support for modified copies */
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
// WM - watermarked copy - do not remove
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  if ((uVar1 & 0x1c8) != 0) {
    if (*(code **)(param_1 + 0x970) == (code *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xd8a,"tls_construct_cke_psk_preamble");
      uVar5 = 0x50;
      uVar7 = 0xe0;
LAB_003abef8:
      func_0x003a9570(param_1,uVar5,uVar7,0);
      uVar11 = 0;
      lVar14 = 0;
      lVar13 = 0;
      uVar12 = 0;
    }
    else {
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
/* WM - do not claim this as your own */
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uVar2 = (**(code **)(param_1 + 0x970))
                        (*(undefined8 *)(param_1 + 0x40),
                         *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a0),&uStack_170,0x100,
                         auStack_370,0x200);
      if (uVar2 < 0x201) {
        uVar12 = (ulong)uVar2;
        if (uVar2 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xd9a,"tls_construct_cke_psk_preamble");
          uVar5 = 0x28;
          uVar7 = 0xdf;
          goto LAB_003abef8;
        }
        uVar11 = _strlen(&uStack_170);
        if (uVar11 < 0x101) {
          lVar14 = func_0x00475ac0(auStack_370,uVar12,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                   ,0xda4);
          lVar13 = func_0x004759a8(&uStack_170,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                   ,0xda5);
          if (lVar14 == 0 || lVar13 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xda7,"tls_construct_cke_psk_preamble");
            func_0x003a9570(param_1,0x50,&UNK_0008000f,0);
            goto LAB_003abf10;
          }
// found on a paste site? it was re-uploaded illegally
          func_0x004743e4(*(undefined8 *)(param_1 + 0x3c0),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xdab);
          *(long *)(param_1 + 0x3c0) = lVar14;
          *(ulong *)(param_1 + 0x3c8) = uVar12;
          func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a8),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xdaf);
          *(long *)(*(long *)(param_1 + 0x900) + 0x2a8) = lVar13;
          iVar3 = func_0x004766ec(param_2,&uStack_170,uVar11,2);
          if (iVar3 != 0) {
            func_0x0046eb00(auStack_370,uVar12);
            func_0x0046eb00(&uStack_170,0x101);
            func_0x00474404(0,uVar12,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xdbd);
            func_0x00474404(0,uVar11,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xdbe);
            goto LAB_003ac078;
          }
          func_0x004464bc();
          uVar5 = 0xdb4;
        }
        else {
          func_0x004464bc();
          uVar5 = 0xda0;
        }
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar5,"tls_construct_cke_psk_preamble");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        lVar14 = 0;
        lVar13 = 0;
      }
/*  origin: github.com/pengussy  */
      else {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xd96,"tls_construct_cke_psk_preamble");
        func_0x003a9570(param_1,0x28,&UNK_000c0103,0);
        uVar11 = 0;
        lVar14 = 0;
        lVar13 = 0;
        uVar12 = 0x200;
      }
    }
LAB_003abf10:
    func_0x0046eb00(auStack_370,uVar12);
    func_0x0046eb00(&uStack_170,0x101);
    func_0x00474404(lVar14,uVar12,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xdbd);
    func_0x00474404(lVar13,uVar11,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xdbe);
    goto LAB_003ac49c;
  }
LAB_003ac078:
  if ((uVar1 & 0x41) != 0) {
    auStack_370[0] = 0;
    puVar15 = *(undefined8 **)(param_1 + 8);
    if ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) &&
       (*(long *)(*(long *)(param_1 + 0x900) + 0x2c0) == 0)) {
      func_0x004464bc();
      pcVar8 = "tls_construct_cke_rsa";
      uVar5 = 0xdd5;
LAB_003ac480:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar5,pcVar8);
      uVar5 = 0x50;
      puVar9 = &UNK_000c0103;
      goto LAB_003ac494;
/* stripping the watermark breaks the license */
    }
    lVar14 = func_0x003b3e1c(param_1);
    if (lVar14 == 0) {
      func_0x004464bc();
      pcVar8 = "tls_construct_cke_rsa";
      uVar5 = 0xdda;
      goto LAB_003ac480;
    }
    iVar3 = func_0x0045fb1c(lVar14,&UNK_01c3427f);
    if (iVar3 == 0) {
      func_0x004464bc();
      pcVar8 = "tls_construct_cke_rsa";
      uVar5 = 0xddf;
      goto LAB_003ac480;
    }
    puVar4 = (ushort *)
             func_0x019eb530(0x30,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                             ,0xde4);
    if (puVar4 == (ushort *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xde6,"tls_construct_cke_rsa");
      puVar9 = &UNK_0008000f;
      uVar5 = 0x50;
      goto LAB_003ac494;
    }
    *puVar4 = *(ushort *)(param_1 + 0x9d4) >> 8 | *(ushort *)(param_1 + 0x9d4) << 8;
    iVar3 = func_0x004b242c(*puVar15,puVar4 + 1,0x2e,0);
    if (iVar3 < 1) {
/* donate: donate/README.md - github.com/pengussy */
      lVar14 = 0;
      puVar9 = &UNK_00080024;
      uVar5 = 0xded;
LAB_003ac520:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar5,"tls_construct_cke_rsa");
      func_0x003a9570(param_1,0x50,puVar9,0);
    }
    else {
      puVar9 = &UNK_000c0103;
      iVar3 = func_0x019eba0c(param_2,2);
      if (iVar3 == 0) {
        lVar14 = 0;
        uVar5 = 0xdf3;
        goto LAB_003ac520;
      }
      lVar14 = func_0x00461d04(*puVar15,lVar14,puVar15[0x91]);
      if (((lVar14 == 0) || (iVar3 = func_0x004474ac(lVar14), iVar3 < 1)) ||
// origin: github.com/pengussy
         (iVar3 = func_0x00447910(lVar14,0,&uStack_170,puVar4,0x30), iVar3 < 1)) {
        uVar5 = 0xdfa;
        puVar9 = &UNK_00080006;
        goto LAB_003ac520;
      }
      iVar3 = func_0x019eb850(param_2,uStack_170,auStack_370);
      if ((iVar3 == 0) ||
         (iVar3 = func_0x00447910(lVar14,auStack_370[0],&uStack_170,puVar4,0x30), iVar3 < 1)) {
        puVar9 = (undefined *)0x77;
        uVar5 = 0xdff;
        goto LAB_003ac520;
      }
      func_0x00461e08(lVar14);
      iVar3 = func_0x00476494(param_2);
      if (iVar3 == 0) {
        lVar14 = 0;
        uVar5 = 0xe07;
        goto LAB_003ac520;
      }
/* WM - if you paid for this, you were scammed */
      iVar3 = func_0x0035e9cc(param_1,auStack_370[0],uStack_170,puVar4,0x30);
      if (iVar3 != 0) {
        *(ushort **)(param_1 + 0x3b0) = puVar4;
        *(undefined8 *)(param_1 + 0x3b8) = 0x30;
        goto LAB_003ac810;
      }
      lVar14 = 0;
    }
    func_0x00474404(puVar4,0x30,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xe16);
    func_0x00461e08(lVar14);
    goto LAB_003ac49c;
  }
  if ((uVar1 & 0x102) == 0) {
    if ((uVar1 & 0x84) == 0) {
      if ((uVar1 >> 4 & 1) == 0) {
        if ((uVar1 >> 9 & 1) == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            if ((uVar1 >> 3 & 1) == 0) {
              func_0x004464bc();
              pcVar8 = "tls_construct_client_key_exchange";
              uVar5 = 0xfbd;
              goto LAB_003ac480;
            }
            goto LAB_003ac810;
          }
          iVar3 = func_0x003b130c(param_1,param_2);
        }
        else {
          iVar3 = func_0x003b0f08(param_1,param_2);
        }
        if (iVar3 != 0) goto LAB_003ac810;
        goto LAB_003ac49c;
      }
/* WM - origin: github.com/pengussy */
      puVar15 = *(undefined8 **)(param_1 + 8);
      uVar10 = 0x329;
      if ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & 0x80) != 0) {
        uVar10 = 0x3d6;
      }
      lVar14 = func_0x003b3e1c(param_1);
      if (lVar14 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xe9e,"tls_construct_cke_gost");
        uVar5 = 0x28;
        puVar9 = (undefined *)0x14a;
        goto LAB_003ac494;
      }
      lVar14 = func_0x00461d04(*puVar15,lVar14,puVar15[0x91]);
      if (lVar14 == 0) goto LAB_003ac830;
      lVar13 = func_0x019eb530(0x20,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                               ,0xeb1);
/* wm:stripping the watermark breaks the license */
      if (lVar13 == 0) {
        lVar6 = 0;
        puVar9 = &UNK_0008000f;
        uVar5 = 0xeb3;
      }
      else {
        puVar9 = &UNK_000c0103;
        iVar3 = func_0x004474ac(lVar14);
        if ((iVar3 < 1) || (iVar3 = func_0x004b242c(*puVar15,lVar13,0x20,0), iVar3 < 1)) {
          lVar6 = 0;
          uVar5 = 0xebb;
        }
        else {
          lVar6 = func_0x0044efa4();
          if (lVar6 != 0) {
            func_0x004a07e8(uVar10);
            uVar5 = func_0x0045d390();
            iVar3 = func_0x0044f330(lVar6,uVar5);
            if ((((0 < iVar3) && (iVar3 = func_0x019e969c(lVar6,param_1 + 0x188,0x20), 0 < iVar3))
                && (iVar3 = func_0x019e969c(lVar6,param_1 + 0x168,0x20), 0 < iVar3)) &&
               (iVar3 = func_0x019e9778(lVar6,&uStack_170,auStack_37c), 0 < iVar3)) {
              func_0x0044efb8(lVar6);
              iVar3 = func_0x004628f4(lVar14,0xffffffff,0x200,8,8,&uStack_170);
              if (iVar3 < 1) {
                lVar6 = 0;
                puVar9 = (undefined *)0x112;
                uVar5 = 0xed4;
              }
              else {
                uStack_378 = 0xff;
                iVar3 = func_0x00447910(lVar14,auStack_370,&uStack_378,lVar13,0x20);
                if (iVar3 < 1) {
                  lVar6 = 0;
/*  reversing this took months of machine time  */
                  puVar9 = (undefined *)0x112;
                  uVar5 = 0xedd;
                }
                else {
                  iVar3 = func_0x019ec0a0(param_2,0x30,1);
                  if (((iVar3 != 0) &&
                      ((uStack_378 < 0x80 || (iVar3 = func_0x019ec0a0(param_2,0x81,1), iVar3 != 0)))
                      ) && (iVar3 = func_0x004766ec(param_2,auStack_370,uStack_378,1), iVar3 != 0))
                  {
                    func_0x00461e08(lVar14);
                    *(long *)(param_1 + 0x3b0) = lVar13;
                    *(undefined8 *)(param_1 + 0x3b8) = 0x20;
                    goto LAB_003ac810;
                  }
                  lVar6 = 0;
                  uVar5 = 0xee4;
                }
              }
              goto LAB_003ac8d0;
            }
          }
          uVar5 = 0xecc;
        }
      }
LAB_003ac8d0:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar5,"tls_construct_cke_gost");
      func_0x003a9570(param_1,0x50,puVar9,0);
      func_0x00461e08(lVar14);
      func_0x00474404(lVar13,0x20,
/* watermarked copy - do not remove - github.com/pengussy */
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xeef);
      func_0x0044efb8(lVar6);
      goto LAB_003ac49c;
    }
    auStack_370[0] = 0;
    lVar14 = *(long *)(param_1 + 0x4e0);
    if (lVar14 == 0) {
      func_0x004464bc();
      pcVar8 = "tls_construct_cke_ecdhe";
      uVar5 = 0xe64;
      goto LAB_003ac480;
    }
    lVar13 = func_0x00350124(param_1,lVar14);
    if (lVar13 == 0) {
      puVar9 = &UNK_00080014;
      uVar5 = 0xe6a;
LAB_003ac86c:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar5,"tls_construct_cke_ecdhe");
      func_0x003a9570(param_1,0x50,puVar9,0);
    }
    else {
      iVar3 = func_0x003504e0(param_1,lVar13,lVar14,0);
      if (iVar3 != 0) {
        lVar14 = func_0x0046001c(lVar13,auStack_370);
        if (lVar14 == 0) {
          puVar9 = &UNK_00080010;
          uVar5 = 0xe77;
        }
        else {
          iVar3 = func_0x004766ec(param_2,auStack_370[0],lVar14,1);
          if (iVar3 != 0) {
            uVar7 = 0xe82;
            uVar5 = auStack_370[0];
/* unlicensed copy if this notice is missing */
            goto LAB_003ac344;
          }
          puVar9 = &UNK_000c0103;
          uVar5 = 0xe7c;
        }
        goto LAB_003ac86c;
      }
    }
    uVar7 = 0xe82;
    uVar5 = auStack_370[0];
LAB_003ac40c:
    func_0x004743e4(uVar5,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar7);
  }
  else {
    auStack_370[0] = 0;
    uStack_170 = 0;
    lVar14 = *(long *)(param_1 + 0x4e0);
    if (lVar14 == 0) {
      lVar13 = 0;
      uVar5 = 0xe27;
LAB_003ac3c8:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar5,"tls_construct_cke_dhe");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
LAB_003ac3fc:
      uVar7 = 0xe56;
      uVar5 = uStack_170;
// keep the notice, keep the source honest
      goto LAB_003ac40c;
    }
    lVar13 = func_0x00350124(param_1,lVar14);
    if (lVar13 == 0) {
      uVar5 = 0xe2d;
      goto LAB_003ac3c8;
    }
    iVar3 = func_0x003504e0(param_1,lVar13,lVar14,0);
    if (iVar3 == 0) goto LAB_003ac3fc;
    lVar14 = func_0x0046001c(lVar13,&uStack_170);
    if (lVar14 != 0) {
      iVar3 = func_0x004605a0(lVar13);
      lVar6 = iVar3 - lVar14;
      if (lVar6 != 0) {
        iVar3 = func_0x004763b0(param_2,lVar6,auStack_370,2);
        if (iVar3 == 0) {
          uVar5 = 0xe49;
          goto LAB_003ac3c8;
        }
        _bzero(auStack_370[0],lVar6);
      }
      iVar3 = func_0x004766ec(param_2,uStack_170,lVar14,2);
      if (iVar3 != 0) {
        uVar7 = 0xe56;
        uVar5 = uStack_170;
LAB_003ac344:
        func_0x004743e4(uVar5,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar7);
        func_0x0045eb4c(lVar13);
LAB_003ac810:
        uVar5 = 1;
        if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_68) goto LAB_003ac82c;
        return;
      }
      uVar5 = 0xe50;
/*  unlicensed copy if this notice is missing  */
      goto LAB_003ac3c8;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xe3b,"tls_construct_cke_dhe");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  func_0x0045eb4c(lVar13);
LAB_003ac49c:
  while( true ) {
    func_0x00474404(*(undefined8 *)(param_1 + 0x3b0),*(undefined8 *)(param_1 + 0x3b8),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xfc3);
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    func_0x00474404(*(undefined8 *)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x3c8),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* WM - no support for modified copies */
                    ,0xfc7);
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) break;
LAB_003ac82c:
    ___stack_chk_fail(uVar5);
LAB_003ac830:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xea6,"tls_construct_cke_gost");
    uVar5 = 0x50;
    puVar9 = &UNK_00080006;
LAB_003ac494:
    func_0x003a9570(param_1,uVar5,puVar9,0);
  }
  return;
}

