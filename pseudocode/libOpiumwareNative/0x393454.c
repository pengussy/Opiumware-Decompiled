/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x393454:c2ac6c8621
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00393454(long param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                 undefined8 param_14,undefined4 param_15,undefined8 param_16,long param_17,
                 undefined8 param_18)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 *puStack_330;
  long *plStack_320;
  undefined8 uStack_2e0;
  uint uStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  uint uStack_28c;
  undefined8 uStack_288;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  undefined8 auStack_280 [4];
  undefined8 auStack_260 [7];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 auStack_208 [25];
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
/* wm:chat: discord.gg/sdkhDjTex */
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_288 = 0;
  puVar5 = *(undefined8 **)(param_1 + 8);
  iStack_290 = 0;
  iStack_294 = 0;
  if (param_3 == 1) {
    iStack_298 = func_0x0035f01c(param_1);
    if (param_17 != 0) goto LAB_003934cc;
/* reversing this took months of machine time - github.com/pengussy */
LAB_003934ec:
    uStack_2e0 = 0;
    puStack_330 = *(undefined8 **)(param_1 + 0xe18);
    if (puStack_330 != (undefined8 *)0x0) goto LAB_0039356c;
LAB_003934f8:
    if (param_4 == 0) {
      puStack_330 = (undefined8 *)&UNK_01dc72c0;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
        puStack_330 = (undefined8 *)&UNK_01dc7048;
      }
      goto LAB_0039356c;
    }
    bVar1 = param_3 != 0;
    lVar11 = 0xe28;
    if (bVar1) {
      lVar11 = 0xe30;
    }
    plStack_320 = (long *)(param_1 + lVar11);
    puStack_330 = (undefined8 *)*plStack_320;
    lVar11 = 0xe38;
    if (bVar1) {
/* wm:reversing this took months of machine time */
      lVar11 = 0xe40;
    }
    lVar3 = 0x50;
    if (bVar1) {
      lVar3 = 0x58;
    }
    if (puStack_330 == (undefined8 *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                      ,0x4fe,"ssl_set_new_record_layer");
      func_0x004466b0(0x14,&UNK_000c0103,0);
      goto LAB_00393c94;
    }
  }
  else {
    iStack_298 = 0x4000;
    if (param_17 == 0) goto LAB_003934ec;
LAB_003934cc:
    uStack_2e0 = *(undefined8 *)(param_17 + 0x10);
    puStack_330 = *(undefined8 **)(param_1 + 0xe18);
    if (puStack_330 == (undefined8 *)0x0) goto LAB_003934f8;
/*  if you paid for this, you were scammed  */
LAB_0039356c:
    bVar1 = param_3 != 0;
    lVar11 = 0xe28;
    if (bVar1) {
      lVar11 = 0xe30;
    }
    plStack_320 = (long *)(param_1 + lVar11);
    lVar11 = 0xe38;
    if (bVar1) {
      lVar11 = 0xe40;
    }
    lVar3 = 0x50;
    if (bVar1) {
      lVar3 = 0x58;
    }
  }
  bVar1 = param_3 == 0;
// chat: discord.gg/sdkhDjTex
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  func_0x00479158(auStack_280 + 10,"options",param_1 + 0x9b0);
  uStack_138 = uStack_228;
  uStack_140 = auStack_260[6];
  uStack_128 = uStack_218;
  uStack_130 = uStack_220;
  uStack_120 = uStack_210;
  func_0x004784a8(auStack_280 + 10,"mode",param_1 + 0x9b8);
  uStack_110 = uStack_228;
  uStack_118 = auStack_260[6];
  uStack_100 = uStack_218;
  uStack_108 = uStack_220;
  uStack_f8 = uStack_210;
  if (bVar1) {
    func_0x00479158(auStack_280 + 10,"read_buffer_len",param_1 + 0xe50);
    uStack_e8 = uStack_228;
    uStack_f0 = auStack_260[6];
    uStack_d8 = uStack_218;
    uStack_e0 = uStack_220;
    uStack_d0 = uStack_210;
    func_0x00477f7c(auStack_280 + 10,"read_ahead",param_1 + 0xe58);
    uStack_c0 = uStack_228;
    uStack_c8 = auStack_260[6];
    uStack_b0 = uStack_218;
    uStack_b8 = uStack_220;
    uStack_a8 = uStack_210;
    func_0x00479f78(auStack_280 + 10);
    uStack_28c = *(uint *)(param_1 + 0x160) >> 8;
    if ((*(uint *)(param_1 + 0x578) & 1) != 0) {
      iStack_290 = 1;
    }
    uVar4 = *(uint *)(param_1 + 0x578) >> 2;
  }
  else {
    func_0x00479158(auStack_280 + 10,"block_padding",param_1 + 0xeb0);
    uStack_e8 = uStack_228;
    uStack_f0 = auStack_260[6];
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    uStack_d8 = uStack_218;
    uStack_e0 = uStack_220;
    uStack_d0 = uStack_210;
    func_0x00479158(auStack_280 + 10,"hs_padding",param_1 + 0xeb8);
    uStack_c0 = uStack_228;
    uStack_c8 = auStack_260[6];
    uStack_b0 = uStack_218;
    uStack_b8 = uStack_220;
    uStack_a8 = uStack_210;
    func_0x00479f78(auStack_280 + 10);
    uStack_28c = *(uint *)(param_1 + 0x160) >> 10;
    if ((*(uint *)(param_1 + 0x578) >> 1 & 1) != 0) {
      iStack_290 = 1;
    }
    uVar4 = *(uint *)(param_1 + 0x578) >> 3;
  }
  uStack_28c = uStack_28c & 1;
  if ((uVar4 & 1) != 0) {
    iStack_294 = 1;
  }
  puVar10 = auStack_280 + 10;
  if (uStack_28c != 0) {
    puVar10 = auStack_208;
    func_0x00477f7c(auStack_280,"use_etm",&uStack_28c);
    uStack_228 = auStack_280[1];
    auStack_260[6] = auStack_280[0];
    uStack_218 = auStack_280[3];
    uStack_220 = auStack_280[2];
    uStack_210 = auStack_260[0];
  }
  puVar12 = puVar10;
  if (iStack_290 != 0) {
    puVar12 = puVar10 + 5;
    func_0x00477f7c(auStack_280,"stream_mac",&iStack_290);
    puVar10[1] = auStack_280[1];
    *puVar10 = auStack_280[0];
// WM - watermarked copy - do not remove
    puVar10[3] = auStack_280[3];
    puVar10[2] = auStack_280[2];
    puVar10[4] = auStack_260[0];
  }
  puVar10 = puVar12;
  if (iStack_294 != 0) {
    puVar10 = puVar12 + 5;
    func_0x00477f7c(auStack_280,"tlstree",&iStack_294);
    puVar12[4] = auStack_260[0];
    puVar12[1] = auStack_280[1];
    *puVar12 = auStack_280[0];
    puVar12[3] = auStack_280[3];
    puVar12[2] = auStack_280[2];
  }
  if (((!bVar1) || (*(long *)(param_1 + 0x900) == 0)) ||
     (uVar4 = (uint)*(byte *)(*(long *)(param_1 + 0x900) + 0x358), 3 < uVar4 - 1)) {
    if (iStack_298 != 0x4000) goto LAB_003937f4;
  }
  else {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    iStack_298 = 0x100 << (ulong)(uVar4 & 0x1f);
LAB_003937f4:
    func_0x004784a8(auStack_280,"max_frag_len",&iStack_298);
    puVar10[4] = auStack_260[0];
    puVar10[1] = auStack_280[1];
    *puVar10 = auStack_280[0];
    puVar10[3] = auStack_280[3];
    puVar10[2] = auStack_280[2];
    puVar10 = puVar10 + 5;
  }
  if (*(int *)(param_1 + 0x78) == 0 || !bVar1) {
    if (((param_3 != 1) || (param_4 != 1)) || (*(int *)(param_1 + 0x78) != 0)) goto LAB_003938ec;
    uVar4 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344);
    if ((uVar4 == 0) &&
       ((*(long *)(param_1 + 0x908) == 0 ||
        (uVar4 = *(uint *)(*(long *)(param_1 + 0x908) + 0x344), uVar4 == 0)))) {
      func_0x019e6cdc(param_1,&uStack_29c);
      goto LAB_003938ec;
    }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    uStack_29c = uVar4;
  }
  else {
    if (1 < param_4 - 1U) goto LAB_003938ec;
    uStack_29c = *(uint *)(&UNK_000016fc + param_1);
    if (*(int *)(param_1 + 0xb20) == 2) {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344);
      if (uVar4 <= uStack_29c) {
        uStack_29c = uVar4;
      }
    }
    if (uStack_29c == 0) goto LAB_003938ec;
  }
  func_0x004784a8(auStack_280,"max_early_data",&uStack_29c);
  puVar10[4] = auStack_260[0];
  puVar10[1] = auStack_280[1];
  *puVar10 = auStack_280[0];
  puVar10[3] = auStack_280[3];
  puVar10[2] = auStack_280[2];
  puVar10 = puVar10 + 5;
LAB_003938ec:
  func_0x00479f78(auStack_280);
  puVar10[4] = auStack_260[0];
  puVar10[1] = auStack_280[1];
  *puVar10 = auStack_280[0];
  puVar10[3] = auStack_280[3];
  puVar10[2] = auStack_280[2];
  if (!bVar1) goto LAB_00393970;
LAB_003939ec:
  uVar15 = 0;
// WM - more drops soon - github.com/pengussy
  uVar13 = *(undefined8 *)(param_1 + 0xe48);
  uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
  if ((param_4 != 0) && ((uVar4 >> 3 & 1) != 0)) {
    uVar15 = func_0x0039301c(param_1,1);
    uVar4 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
  }
  if ((uVar4 >> 3 & 1) == 0) {
    func_0x003ec13c();
    lVar3 = func_0x003e945c();
  }
  else {
    func_0x003eb034();
    lVar3 = func_0x003e945c();
  }
  if (lVar3 == 0) {
    uVar13 = 0x569;
LAB_00393c5c:
    puVar14 = &UNK_000c0103;
LAB_00393c64:
    while( true ) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                      ,uVar13,"ssl_set_new_record_layer");
LAB_00393c8c:
      func_0x003a9570(param_1,0x50,puVar14,0);
LAB_00393c94:
      uVar6 = 0;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) break;
LAB_00393c40:
      ___stack_chk_fail(uVar6);
LAB_00393c44:
      puVar14 = (undefined *)0x139;
      uVar13 = 0x592;
    }
    return;
  }
  *(long *)(param_1 + 0xe48) = lVar3;
/* unlicensed copy if this notice is missing */
LAB_00393a4c:
  auStack_280[1] = _UNK_01dc7000;
  auStack_280[0] = _UNK_01dc6ff8;
  if (*(long *)(param_1 + 0x4f8) == 0) goto LAB_003939c0;
  do {
    lVar7 = 2;
    puVar10 = auStack_280 + 4;
    puVar12 = puStack_330;
    while( true ) {
      _UNK_01dc7000 = auStack_280[1];
      _UNK_01dc6ff8 = auStack_280[0];
      lVar9 = lVar7 + 1;
      puVar10[1] = _UNK_01dc7020;
      *puVar10 = _UNK_01dc7018;
      if (*(long *)(param_1 + 0xea0) != 0) {
        auStack_280[lVar9 * 2 + 1] = _UNK_01dc7030;
        auStack_280[lVar9 * 2] = _UNK_01dc7028;
        lVar9 = lVar7 + 2;
      }
      auStack_280[lVar9 * 2] = 0;
// WM - donate: donate/README.md
      auStack_280[lVar9 * 2 + 1] = 0;
      iVar2 = (*(code *)*puVar12)(*puVar5,puVar5[0x91],param_2,*(undefined4 *)(param_1 + 0x78),
                                  param_3,param_4,uVar15,param_5,param_6,param_7,param_8,param_9,
                                  param_10,param_11,param_12,param_13,param_14,param_15,param_16,
                                  uStack_2e0,param_18,uVar13,uVar6,lVar3,0,0,auStack_280 + 10,
                                  &uStack_140,auStack_280,param_1,*(undefined8 *)(param_1 + 0xe20),
                                  &uStack_288);
      func_0x003e9468(uVar13);
      if (iVar2 != -1) {
        if (iVar2 == -2) goto LAB_00393c44;
        if (iVar2 == 1) {
          if (((((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0 || bVar1)
               || (lVar3 = func_0x0034d3f0(*(undefined8 *)(*(long *)(param_1 + 0x4f0) + 0x120)),
                  lVar3 == 0)) && (*plStack_320 != 0)) &&
             (iVar2 = (**(code **)(*plStack_320 + 8))(*(undefined8 *)(param_1 + lVar11)), iVar2 == 0
             )) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/rec_layer_s3.c"
                            ,0x5b7,"ssl_set_new_record_layer");
            puVar14 = &UNK_000c0103;
            goto LAB_00393c8c;
          }
          *(undefined8 *)(param_1 + lVar11) = uStack_288;
          *plStack_320 = (long)puVar12;
          lVar11 = 0xe28;
/* wm:if you paid for this, you were scammed */
          if (!bVar1) {
            lVar11 = 0xe30;
          }
          lVar3 = 0xe38;
          if (!bVar1) {
            lVar3 = 0xe40;
          }
          uVar6 = *(undefined8 *)(param_1 + lVar3);
          lVar11 = *(long *)(param_1 + lVar11);
          if (((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) &&
             (pcVar8 = *(code **)(lVar11 + 0x70), pcVar8 != (code *)0x0)) {
            (*pcVar8)(uVar6,1);
          }
          if ((*(long *)(param_1 + 0x9e8) != 0) &&
             (pcVar8 = *(code **)(lVar11 + 0x78), pcVar8 != (code *)0x0)) {
            (*pcVar8)(uVar6);
/* WM - no support for modified copies */
          }
          uVar6 = 1;
          if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_78) goto LAB_00393c40;
          return;
        }
        uVar13 = 0x5a6;
        goto LAB_00393c5c;
      }
      puStack_330 = (undefined8 *)*plStack_320;
      puVar14 = (undefined *)0x142;
      uVar13 = 0x59e;
      if ((puStack_330 == puVar12) || (puStack_330 == (undefined8 *)0x0)) goto LAB_00393c64;
      if (bVar1) goto LAB_003939ec;
LAB_00393970:
      uVar13 = 0;
      uVar15 = (ulong)bVar1;
      if (param_4 == 0) {
        lVar7 = *(long *)(param_1 + 0x4f8);
        auStack_280[1] = _UNK_01dc7000;
        auStack_280[0] = _UNK_01dc6ff8;
      }
      else {
        lVar3 = 0;
        if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0)
        goto LAB_00393a4c;
        uVar15 = func_0x0039301c(param_1,2);
        lVar7 = *(long *)(param_1 + 0x4f8);
        auStack_280[1] = _UNK_01dc7000;
        auStack_280[0] = _UNK_01dc6ff8;
      }
      lVar3 = 0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar13 = 0;
      if (lVar7 != 0) break;
LAB_003939c0:
      lVar7 = 1;
      puVar10 = auStack_280 + 2;
      puVar12 = puStack_330;
    }
  } while( true );
}

