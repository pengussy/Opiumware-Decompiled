/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a0434:9649791628
   =========================================================================== */

undefined8 FUN_003a0434(long param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 **ppuVar7;
  undefined8 *puVar8;
  code *pcVar9;
  byte *pbVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  ulong uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long lStack_390;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  undefined *puStack_388;
  undefined2 uStack_37a;
  int *piStack_378;
  ulong uStack_370;
  undefined8 *puStack_368;
  undefined1 auStack_360 [512];
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
/* WM - unlicensed copy if this notice is missing */
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = (long)register0x00000008 + -0x10;
  uStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_370 = 0;
  puStack_368 = (undefined8 *)0x0;
  piStack_378 = (int *)0x0;
  uVar13 = *(undefined8 *)(param_1 + 0x40);
// proprietary - see LICENSE - do not sell
  if ((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc14) != 0)) {
    if (*(int *)(param_1 + 0x8d0) == 1) {
      uVar4 = func_0x003542a0(param_1);
      pcVar9 = *(code **)(param_1 + 0x988);
      if (pcVar9 == (code *)0x0) goto LAB_003a0514;
LAB_003a04b4:
      ppuVar7 = &puStack_368;
      iVar3 = (*pcVar9)(uVar13,uVar4,ppuVar7,&uStack_370,&piStack_378);
      param_3 = (uint)ppuVar7;
      if (iVar3 != 0) {
        if (piStack_378 == (int *)0x0) goto LAB_003a0514;
        if (*piStack_378 != 0x304) goto LAB_003a04e4;
        goto LAB_003a06a4;
      }
LAB_003a04e4:
      func_0x00361b60();
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x407,"tls_construct_ctos_early_data");
      uVar13 = 0x50;
      param_3 = 0xdb;
LAB_003a0784:
      func_0x003a9570(param_1,uVar13,param_3,0);
    }
    else {
      uVar4 = 0;
      pcVar9 = *(code **)(param_1 + 0x988);
      if (pcVar9 != (code *)0x0) goto LAB_003a04b4;
LAB_003a0514:
      if (*(code **)(param_1 + 0x970) == (code *)0x0) {
LAB_003a06a4:
        func_0x00361b60(*(undefined8 *)(param_1 + 0x908));
        *(int **)(param_1 + 0x908) = piStack_378;
        if (piStack_378 != (int *)0x0) {
          func_0x004743e4(*(undefined8 *)(param_1 + 0x910),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                          ,0x43f);
          param_3 = 0x1c39f3b;
/* wm:keep the notice, keep the source honest */
          lVar5 = func_0x00475ac0(puStack_368,uStack_370,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                  ,0x440);
          *(long *)(param_1 + 0x910) = lVar5;
          if (lVar5 == 0) {
            *(undefined8 *)(param_1 + 0x918) = 0;
            func_0x004464bc();
            uVar13 = 0x443;
            goto LAB_003a0770;
          }
          *(ulong *)(param_1 + 0x918) = uStack_370;
        }
        if ((*(int *)(param_1 + 0xf0) != 2) ||
           ((piVar11 = *(int **)(param_1 + 0x900), (*(int **)(param_1 + 0x900))[0xd1] == 0 &&
            ((piStack_378 == (int *)0x0 || (piVar11 = piStack_378, piStack_378[0xd1] == 0)))))) {
          *(undefined4 *)(&UNK_000016f8 + param_1) = 0;
          uVar13 = 2;
          goto LAB_003a0790;
        }
        *(int *)(&UNK_000016f8 + param_1) = piVar11[0xd1];
        if ((*(long *)(piVar11 + 200) != 0) &&
           ((*(long *)(param_1 + 0xa20) == 0 || (iVar3 = _strcmp(), iVar3 != 0)))) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                          ,0x457,"tls_construct_ctos_early_data");
          uVar13 = 0x50;
          param_3 = 0xe7;
          goto LAB_003a0784;
        }
        pbVar10 = *(byte **)(param_1 + 0xaf8);
        if (pbVar10 == (byte *)0x0) {
// WM - more drops soon - github.com/pengussy
          if (*(long *)(piVar11 + 0xd2) == 0) goto LAB_003a08cc;
          func_0x004464bc();
          uVar13 = 0x45d;
        }
        else {
          if (*(long *)(piVar11 + 0xd2) == 0) {
LAB_003a08cc:
            param_3 = 2;
            iVar3 = func_0x019ec0a0(param_2,0x2a);
            if ((iVar3 == 0) ||
               ((iVar3 = func_0x019eba0c(param_2,2), iVar3 == 0 ||
                (iVar3 = func_0x00476494(param_2), iVar3 == 0)))) {
              func_0x004464bc();
              uVar13 = 0x47e;
              goto LAB_003a0770;
            }
            *(undefined8 *)(param_1 + 0xb20) = 0x100000001;
            goto LAB_003a0904;
          }
          lVar5 = *(long *)(param_1 + 0xb00);
          if (lVar5 < 0) {
            func_0x004464bc();
            uVar13 = 0x46a;
            goto LAB_003a0770;
          }
          while (lVar5 != 0) {
            uVar14 = (ulong)*pbVar10;
            uVar12 = lVar5 - 1;
            lVar5 = uVar12 - uVar14;
            if (uVar12 < uVar14) break;
            if ((*(ulong *)(piVar11 + 0xd4) == uVar14) &&
               (iVar3 = func_0x0046eb60(pbVar10 + 1,*(undefined8 *)(piVar11 + 0xd2),uVar14),
               iVar3 == 0)) goto LAB_003a08cc;
            pbVar10 = pbVar10 + 1 + uVar14;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          }
          func_0x004464bc();
          uVar13 = 0x476;
        }
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,uVar13,"tls_construct_ctos_early_data");
        uVar13 = 0x50;
        param_3 = 0xde;
        goto LAB_003a0784;
      }
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
/* reversing this took months of machine time - github.com/pengussy */
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
// WM - origin: github.com/pengussy
      uStack_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_60 = 0;
      puVar8 = &uStack_160;
      uVar2 = (**(code **)(param_1 + 0x970))(uVar13,0,puVar8,0x100,auStack_360,0x200);
      param_3 = (uint)puVar8;
      if (0x200 < uVar2) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x416,"tls_construct_ctos_early_data");
        uVar13 = 0x28;
LAB_003a077c:
        param_3 = 0xc0103;
        goto LAB_003a0784;
      }
      if (uVar2 == 0) goto LAB_003a06a4;
      uStack_37a = 0x113;
      uStack_370 = _strlen(&uStack_160);
      if (0x100 < uStack_370) {
// WM - found on a paste site? it was re-uploaded illegally
        func_0x004464bc();
        uVar13 = 0x41e;
LAB_003a0770:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,uVar13,"tls_construct_ctos_early_data");
        uVar13 = 0x50;
        goto LAB_003a077c;
      }
      puStack_368 = &uStack_160;
      lVar5 = func_0x00355ff0(param_1,&uStack_37a);
      if (lVar5 == 0) {
        func_0x004464bc();
        uVar13 = 0x42a;
        goto LAB_003a0770;
      }
      piStack_378 = (int *)func_0x00361168();
      if ((((piStack_378 != (int *)0x0) &&
/* thanks for reading - discord.gg/sdkhDjTex */
           (param_3 = uVar2, iVar3 = func_0x0035de88(piStack_378,auStack_360), iVar3 != 0)) &&
          (iVar3 = func_0x0036280c(piStack_378,lVar5), iVar3 != 0)) &&
         (iVar3 = func_0x003627f8(piStack_378,0x304), iVar3 != 0)) {
        func_0x0046eb00(auStack_360,uVar2);
        goto LAB_003a06a4;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x433,"tls_construct_ctos_early_data");
      param_3 = 0xc0103;
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      func_0x0046eb00(auStack_360,uVar2);
    }
    uVar13 = 0;
  }
  else if ((*(int *)(param_1 + 0xb20) == 1) && (*(int *)(param_1 + 0xb24) == 1)) {
    param_3 = 2;
    iVar3 = func_0x019ec0a0(param_2,0x2a);
    if (((iVar3 == 0) || (iVar3 = func_0x019eba0c(param_2,2), iVar3 == 0)) ||
       (iVar3 = func_0x00476494(param_2), iVar3 == 0)) {
      func_0x004464bc();
      uVar13 = 0x3f6;
      goto LAB_003a0770;
    }
LAB_003a0904:
    uVar13 = 1;
  }
  else {
/*  donate: donate/README.md  */
    uVar13 = 2;
  }
LAB_003a0790:
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_58) {
    return uVar13;
  }
  auVar15 = ___stack_chk_fail(uVar13);
  uVar13 = auVar15._8_8_;
  lVar5 = auVar15._0_8_;
  if ((*(byte *)(lVar5 + 0x9b0) >> 4 & 1) == 0) {
    return 2;
  }
  puStack_388 = &DAT_003a0964;
  uStack_3a0 = param_2;
  lStack_398 = param_1;
  lStack_390 = lVar6;
  if (((param_3 == 0x80) && (*(int *)(lVar5 + 0x78) == 0)) &&
     ((*(long *)(lVar5 + 0xb60) != 0 &&
      ((*(int *)(lVar5 + 0xc3c) == 0 && (uVar4 = func_0x0039b9e0(lVar5,uVar13), (uint)uVar4 < 2)))))
     ) {
    return uVar4;
  }
  iVar3 = func_0x019ec1d8(uVar13,&uStack_3b0);
// unlicensed copy if this notice is missing
  if (iVar3 == 0) {
    func_0x004464bc();
    uVar13 = 0x4b1;
code_r0x003a0ac8:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                    ,uVar13,&UNK_01c3a228);
    func_0x003a9570(lVar5,0x50,&UNK_000c0103,0);
    return 0;
  }
  piVar11 = *(int **)(lVar5 + 0x900);
  if ((((*piVar11 == 0x304) && (*(long *)(piVar11 + 0xcc) != 0)) && (*(long *)(piVar11 + 0xbe) != 0)
      ) && (lVar6 = func_0x00354280(*(undefined8 *)(lVar5 + 8),
                                    *(undefined4 *)(*(long *)(piVar11 + 0xbe) + 0x40)), lVar6 != 0))
  {
    iVar3 = func_0x00455f40();
    if (iVar3 < 1) {
      return 0;
    }
    uStack_3b0 = *(long *)(*(long *)(lVar5 + 0x900) + 0x330) + uStack_3b0 + (ulong)(iVar3 + 0xf);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  }
  if ((uStack_3b0 & 0xffffffffffffff00) == 0x100) {
    bVar1 = 0x1fc < uStack_3b0;
    uStack_3b0 = 0x1fc - uStack_3b0;
    if (bVar1 || uStack_3b0 == 0) {
      uStack_3b0 = 1;
    }
    iVar3 = func_0x019ec0a0(uVar13,0x15,2);
    if ((iVar3 == 0) || (iVar3 = func_0x004763b0(uVar13,uStack_3b0,&uStack_3a8,2), iVar3 == 0)) {
      func_0x004464bc();
      uVar13 = 0x4de;
      goto code_r0x003a0ac8;
    }
    _bzero(uStack_3a8,uStack_3b0);
  }
  return 1;
}

