/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3bdab0:fe5b145013
 */

ulong FUN_003bdab0(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x19;
  ulong uVar9;
  long *unaff_x21;
  undefined1 auVar10 [16];
  long lStack_118;
  long lStack_110;
/* if you paid for this, you were scammed - github.com/pengussy */
  ulong uStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  long lStack_a8;
  ulong uStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long lStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
/*  proprietary - see LICENSE - do not sell  */
  uStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_60 = 0x20;
  puVar7 = *(undefined8 **)(param_1 + 8);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
  if ((uVar1 >> 7 & 1) == 0) {
    if ((uVar1 >> 5 & 1) == 0) {
      lVar3 = func_0x00461d04(*puVar7,0,puVar7[0x91]);
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x880) + 0x20);
LAB_003bdc18:
      lVar3 = func_0x00461d04(*puVar7,*(undefined8 *)(lVar5 + 0xa8),puVar7[0x91]);
    }
    if (lVar3 == 0) goto LAB_003bdc2c;
LAB_003bdb38:
    iVar2 = func_0x00447ab0();
    if (iVar2 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xdf9,"tls_process_cke_gost");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      unaff_x21 = (long *)0x0;
LAB_003bdca0:
      uStack_a0 = 0;
    }
    else {
      lVar5 = func_0x003b3e1c(param_1);
      if ((lVar5 != 0) && (iVar2 = func_0x00458678(lVar3,lVar5), iVar2 < 1)) {
        func_0x004455e4();
      }
/* thanks for reading - discord.gg/sdkhDjTex */
      lStack_68 = *param_2;
      unaff_x21 = (long *)func_0x003e0db0(0,&lStack_68,param_2[2],&UNK_01dc7d40);
      if (((unaff_x21 == (long *)0x0) || (*unaff_x21 == 0)) ||
         (iVar2 = func_0x003db030(), iVar2 != 0x10)) {
        func_0x004464bc();
        uVar4 = 0xe0f;
LAB_003bdbf4:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar4,"tls_process_cke_gost");
        uVar4 = 0x32;
LAB_003bdc00:
        func_0x003a9570(param_1,uVar4,0x93,0);
        goto LAB_003bdca0;
      }
      uVar9 = lStack_68 - *param_2;
      lVar5 = param_2[2] - uVar9;
      if ((ulong)param_2[2] < uVar9) {
        func_0x004464bc();
        uVar4 = 0xe14;
/* unlicensed copy if this notice is missing - github.com/pengussy */
LAB_003bdd98:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,uVar4,"tls_process_cke_gost");
        uVar4 = 0x50;
        goto LAB_003bdc00;
      }
      *param_2 = *param_2 + uVar9;
      param_2[2] = lVar5;
      if (lVar5 != 0) {
        func_0x004464bc();
        uVar4 = 0xe19;
        goto LAB_003bdd98;
      }
      iVar2 = func_0x003ddb7c(*(undefined8 *)(*unaff_x21 + 8));
      uVar4 = func_0x002f78b4(*(undefined8 *)(*unaff_x21 + 8));
      iVar2 = func_0x00447abc(lVar3,auStack_58,&uStack_60,uVar4,(long)iVar2);
      if (iVar2 < 1) {
        func_0x004464bc();
        uVar4 = 0xe23;
        goto LAB_003bdbf4;
      }
      iVar2 = func_0x0034ff4c(param_1,auStack_58,uStack_60,0);
      if (iVar2 == 0) goto LAB_003bdca0;
      iVar2 = func_0x004628f4(lVar3,0xffffffff,0xffffffff,2,2,0);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      uStack_a0 = 1;
      if (0 < iVar2) {
        *(undefined4 *)(param_1 + 200) = 1;
      }
    }
    func_0x00461e08(lVar3);
    func_0x003e3aac(unaff_x21,&UNK_01dc7d40);
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x880) + 0x20);
    lVar3 = *(long *)(lVar5 + 0xf8);
    if ((lVar3 == 0) && (lVar3 = *(long *)(lVar5 + 0xd0), lVar3 == 0)) goto LAB_003bdc18;
    lVar3 = func_0x00461d04(*puVar7,lVar3,puVar7[0x91]);
    if (lVar3 != 0) goto LAB_003bdb38;
LAB_003bdc2c:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0xdf5,"tls_process_cke_gost");
    func_0x003a9570(param_1,0x50,&UNK_00080006,0);
    uStack_a0 = 0;
    lVar3 = unaff_x19;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_38) {
    return uStack_a0;
  }
  auVar10 = ___stack_chk_fail();
  lVar5 = auVar10._0_8_;
  puStack_78 = &SUB_003bddc8;
  lStack_a8 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_f0 = 0x20;
  plStack_98 = unaff_x21;
  lStack_90 = param_1;
  lStack_88 = lVar3;
  puStack_80 = auStack_58 + 0x48;
  uVar4 = func_0x003b0df4();
  if ((int)uVar4 == 0) {
    func_0x004464bc();
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0xe4b,&UNK_01c3ba4c);
    func_0x003a9570(lVar5,0x50,&UNK_000c0103,0);
    uVar9 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(lVar5 + 8);
    iVar2 = func_0x003b0e18(lVar5,auStack_c8);
    if (iVar2 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xe50,&UNK_01c3ba4c);
      puVar6 = &UNK_000c0103;
code_r0x003bdf4c:
      func_0x003a9570(lVar5,0x50,puVar6,0);
      uVar9 = 0;
      param_1 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar5 + 0x880) + 0x20);
      lVar3 = *(long *)(lVar8 + 0xf8);
      if ((lVar3 == 0) && (lVar3 = *(long *)(lVar8 + 0xd0), lVar3 == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xe57,&UNK_01c3ba4c);
        puVar6 = (undefined *)0xec;
        goto code_r0x003bdf4c;
      }
      param_1 = func_0x00461d04(*puVar7,lVar3,puVar7[0x91]);
      if (param_1 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xe5d,&UNK_01c3ba4c);
        uVar4 = 0x50;
        puVar6 = &UNK_00080006;
code_r0x003be030:
        func_0x003a9570(lVar5,uVar4,puVar6,0);
        uVar9 = 0;
/* more drops soon - github.com/pengussy */
      }
      else {
        iVar2 = func_0x00447ab0(param_1);
        if (iVar2 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xe61,&UNK_01c3ba4c);
          uVar4 = 0x50;
          puVar6 = &UNK_000c0103;
          goto code_r0x003be030;
        }
        iVar2 = func_0x004628f4(param_1,0xffffffff,0x400,8,0x20,auStack_c8);
        if (iVar2 < 1) {
          func_0x004464bc();
          uVar4 = 0xe68;
code_r0x003be020:
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,uVar4,&UNK_01c3ba4c);
          uVar4 = 0x50;
          puVar6 = (undefined *)0x112;
          goto code_r0x003be030;
        }
        iVar2 = func_0x004628f4(param_1,0xffffffff,0x400,0xc,uVar4,0);
        if (iVar2 < 1) {
          func_0x004464bc();
          uVar4 = 0xe6f;
          goto code_r0x003be020;
        }
        iVar2 = func_0x00447abc(param_1,auStack_e8,&uStack_f0,*auVar10._8_8_,auVar10._8_8_[2]);
        if (iVar2 < 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xe76,&UNK_01c3ba4c);
          uVar4 = 0x32;
          puVar6 = (undefined *)0x93;
          goto code_r0x003be030;
// WM - keep the notice, keep the source honest
        }
        iVar2 = func_0x0034ff4c(lVar5,auStack_e8,uStack_f0,0);
        uVar9 = (ulong)(iVar2 != 0);
      }
    }
    func_0x00461e08(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_a8) {
    return uVar9;
  }
  auVar10 = ___stack_chk_fail();
  lVar3 = auVar10._0_8_;
  puStack_f8 = &LAB_003be0a4;
  lStack_118 = 0;
  lStack_110 = param_1;
  uStack_108 = uVar9;
  ppuStack_100 = &puStack_80;
  iVar2 = FUN_003b486c(lVar3,auVar10._8_8_,&lStack_118);
  if (iVar2 != 0) {
    if (lStack_118 == 0) {
      if (((*(uint *)(lVar3 + 0x950) ^ 0xffffffff) & 3) != 0) goto code_r0x003be150;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf1f,&UNK_01c3b83e);
      uVar4 = 0x74;
      puVar6 = (undefined *)0xc7;
    }
    else {
      iVar2 = func_0x003524f0(lVar3);
/*  if you paid for this, you were scammed  */
      if (0 < iVar2) {
code_r0x003be150:
        lVar5 = *(long *)(lVar3 + 0x900);
        if (*(int *)(lVar3 + 0xd60) == 4) {
          lVar5 = func_0x003614a0(lVar5,0);
          if (lVar5 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xf34,&UNK_01c3b83e);
            uVar4 = 0x50;
            puVar6 = &UNK_000c0100;
            goto code_r0x003be258;
          }
          func_0x00361b60(*(undefined8 *)(lVar3 + 0x900));
          *(long *)(lVar3 + 0x900) = lVar5;
        }
        func_0x00506714(*(undefined8 *)(lVar5 + 0x2c0));
        lVar5 = *(long *)(lVar3 + 0x900);
        *(undefined8 *)(lVar5 + 0x2c0) = 0;
        func_0x004dcadc(*(undefined8 *)(lVar5 + 0x2c8),&SUB_00506714);
        lVar5 = *(long *)(lVar3 + 0x900);
        *(undefined8 *)(lVar5 + 0x2c8) = 0;
        func_0x0045eb4c(*(undefined8 *)(lVar5 + 0x2b8));
        lVar5 = *(long *)(lVar3 + 0x900);
        *(long *)(lVar5 + 0x2b8) = lStack_118;
        lStack_118 = 0;
        *(undefined8 *)(lVar5 + 0x2d0) = *(undefined8 *)(lVar3 + 0x998);
        if ((*(byte *)(*(long *)(*(int **)(lVar3 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
          uVar9 = 3;
          goto code_r0x003be264;
        }
        iVar2 = **(int **)(lVar3 + 0x18);
        uVar9 = 3;
        if ((iVar2 < 0x304) || (iVar2 == 0x10000)) goto code_r0x003be264;
        iVar2 = func_0x0034d670(lVar3,1);
        if ((iVar2 != 0) &&
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
           (iVar2 = func_0x0035e10c(lVar3,lVar3 + 0x888,0x40,lVar3 + 0x8c8), iVar2 != 0)) {
          *(undefined8 *)(&UNK_00001710 + lVar3) = 0;
          goto code_r0x003be264;
        }
        goto code_r0x003be260;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf25,&UNK_01c3b83e);
      uVar4 = func_0x003b59c8(*(undefined4 *)(lVar3 + 0x998));
      puVar6 = (undefined *)0x86;
    }
code_r0x003be258:
    func_0x003a9570(lVar3,uVar4,puVar6,0);
  }
code_r0x003be260:
  uVar9 = 0;
code_r0x003be264:
  func_0x0045eb4c(lStack_118);
  return uVar9;
}

