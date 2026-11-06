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
 *  file-id: 0x3633bc:06409ee106
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003633bc(long param_1,segment_command **param_2,undefined8 param_3,segment_command **param_4,
            segment_command *param_5,long param_6,char *param_7,long param_8,undefined8 param_9,
            undefined8 param_10,long param_11,undefined8 param_12,undefined *param_13,uint param_14)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  segment_command **ppsVar8;
  segment_command *psVar9;
  segment_command *psVar10;
  long lVar11;
  char *pcVar12;
  int iVar13;
  long unaff_x23;
  ulong uVar14;
  undefined8 uVar15;
/* WM - proprietary - see LICENSE - do not sell */
  undefined8 uVar16;
  undefined1 auVar17 [16];
  segment_command *psStack_310;
  segment_command *apsStack_308 [16];
  long lStack_288;
  ulong uStack_280;
  long lStack_278;
  char *pcStack_270;
  segment_command **ppsStack_268;
  long lStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  undefined *puStack_248;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  uint uStack_21c;
  long lStack_218;
  long lStack_210;
  char *pcStack_208;
  segment_command *psStack_200;
  segment_command *psStack_1f8;
  segment_command *psStack_1f0;
  segment_command *psStack_1e8;
  segment_command *psStack_1e0;
  segment_command *apsStack_1d8 [5];
  segment_command *psStack_1b0;
  segment_command *psStack_1a8;
  segment_command *psStack_1a0;
  segment_command *psStack_198;
  segment_command *psStack_190;
  segment_command *psStack_188;
  segment_command *psStack_180;
  segment_command *psStack_178;
  segment_command *psStack_170;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  segment_command *psStack_168;
  segment_command *psStack_160;
  segment_command *psStack_158;
  segment_command *psStack_150;
  segment_command *psStack_148;
  segment_command *psStack_140;
  segment_command *psStack_138;
  segment_command *psStack_130;
  segment_command *psStack_128;
  segment_command *psStack_120;
  segment_command *psStack_118;
  segment_command *psStack_110;
  segment_command *psStack_108;
  segment_command *psStack_100;
  segment_command *psStack_f8;
  segment_command *psStack_f0;
  segment_command *psStack_e8;
  segment_command *psStack_e0;
  segment_command *psStack_d8;
  segment_command *psStack_d0;
  segment_command *psStack_c8;
  segment_command *psStack_c0;
  segment_command *psStack_b8;
  segment_command *psStack_b0;
  segment_command *psStack_a8;
  segment_command *psStack_a0;
  segment_command *apsStack_98 [5];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  uVar14 = (ulong)param_14;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  ppsVar8 = param_4;
  psVar9 = param_5;
  lVar11 = param_6;
  pcVar12 = param_7;
  lVar4 = param_8;
  pcVar3 = (char *)func_0x003542e4();
  iVar13 = (int)lVar4;
  if (pcVar3 == (char *)0x0) {
    func_0x004464bc();
    pcVar3 = param_7;
    param_11 = unaff_x23;
    if (param_14 == 0) {
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                      ,0x2e,"tls1_PRF");
      puVar7 = (undefined *)0x0;
      func_0x004466b0(0x14,&UNK_000c0103);
    }
    else {
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                      ,0x2c,"tls1_PRF");
      puVar7 = &UNK_000c0103;
      ppsVar8 = (segment_command **)0x0;
      func_0x003a9570(param_1,0x50);
    }
LAB_003636d4:
    uVar5 = 0;
  }
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  else {
    pcStack_208 = param_7;
    lVar4 = func_0x00458b30(**(undefined8 **)(param_1 + 8),"TLS1-PRF",
                            (*(undefined8 **)(param_1 + 8))[0x91]);
    if (lVar4 == 0) {
      param_8 = 0;
LAB_00363654:
      func_0x004464bc();
      if ((int)uVar14 == 0) {
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                        ,0x5b,"tls1_PRF");
        puVar7 = (undefined *)0x0;
        func_0x004466b0(0x14,&UNK_000c0103);
      }
      else {
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                        ,0x59,"tls1_PRF");
        puVar7 = &UNK_000c0103;
        ppsVar8 = (segment_command **)0x0;
        func_0x003a9570(param_1,0x50);
      }
      func_0x0045889c(param_8);
/* more drops soon - github.com/pengussy - github.com/pengussy */
      param_11 = unaff_x23;
      goto LAB_003636d4;
    }
    lStack_210 = param_8;
    param_8 = func_0x00458774();
    func_0x00458ea4(lVar4);
    unaff_x23 = lVar4;
    if (param_8 == 0) goto LAB_00363654;
    uStack_21c = param_14;
    puStack_228 = param_13;
    uStack_230 = param_12;
    uStack_238 = param_9;
    lStack_218 = param_8;
    uVar5 = func_0x00455ed0(pcVar3);
    func_0x0047992c(apsStack_1d8,"digest",uVar5,0);
    func_0x00479984(&psStack_200,"secret",param_10,param_11);
    psStack_1a8 = psStack_1f8;
    psStack_1b0 = psStack_200;
    psStack_198 = psStack_1e8;
    psStack_1a0 = psStack_1f0;
    psStack_190 = psStack_1e0;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    pcVar3 = "seed";
    func_0x00479984(&psStack_200,"seed",param_2,param_3);
    psStack_180 = psStack_1f8;
    psStack_188 = psStack_200;
    psStack_170 = psStack_1e8;
    psStack_178 = psStack_1f0;
    psStack_168 = psStack_1e0;
    func_0x00479984(&psStack_200,"seed",param_4,param_5);
    psStack_158 = psStack_1f8;
    psStack_160 = psStack_200;
    psStack_148 = psStack_1e8;
    psStack_150 = psStack_1f0;
    psStack_140 = psStack_1e0;
    func_0x00479984(&psStack_200,"seed",param_6,pcStack_208);
    psStack_130 = psStack_1f8;
    psStack_138 = psStack_200;
    psStack_120 = psStack_1e8;
    psStack_128 = psStack_1f0;
    psStack_118 = psStack_1e0;
    func_0x00479984(&psStack_200,"seed",lStack_210,uStack_238);
    psStack_108 = psStack_1f8;
    psStack_110 = psStack_200;
    psStack_f8 = psStack_1e8;
    psStack_100 = psStack_1f0;
    psStack_f0 = psStack_1e0;
    ppsVar8 = &psStack_c0;
    func_0x00479984(&psStack_200,"seed",0,0);
    psStack_e0 = psStack_1f8;
    psStack_e8 = psStack_200;
    psStack_d0 = psStack_1e8;
    psStack_d8 = psStack_1f0;
    psStack_c8 = psStack_1e0;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x488);
    param_2 = apsStack_1d8;
    if (lVar4 != 0) {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      ppsVar8 = apsStack_98;
      func_0x0047992c(&psStack_200,"properties",lVar4,0);
      psStack_b8 = psStack_1f8;
      psStack_c0 = psStack_200;
      psStack_a8 = psStack_1e8;
      psStack_b0 = psStack_1f0;
      psStack_a0 = psStack_1e0;
      param_2 = ppsVar8;
    }
    func_0x00479f78(&psStack_200);
    param_8 = lStack_218;
    ppsVar8[1] = psStack_1f8;
    *ppsVar8 = psStack_200;
    ppsVar8[3] = psStack_1e8;
    ppsVar8[2] = psStack_1f0;
    ppsVar8[4] = psStack_1e0;
    ppsVar8 = apsStack_1d8;
    puVar7 = puStack_228;
    iVar2 = func_0x00458ae4(lStack_218,uStack_230);
    uVar14 = (ulong)uStack_21c;
    unaff_x23 = param_11;
    if (iVar2 == 0) goto LAB_00363654;
    func_0x0045889c(param_8);
    uVar5 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar5;
  }
  lVar4 = ___stack_chk_fail(uVar5);
  puStack_248 = &DAT_00363714;
  lStack_288 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_280 = uVar14;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  lStack_278 = param_11;
  pcStack_270 = pcVar3;
  ppsStack_268 = param_2;
  lStack_260 = param_8;
  lStack_258 = param_1;
  puStack_250 = auStack_68 + 0x58;
  if ((*(byte *)(*(long *)(lVar4 + 0x900) + 0x378) & 1) == 0) {
    ppsVar8 = (segment_command **)(lVar4 + 0x188);
    iVar13 = (int)lVar4 + 0x168;
    puVar7 = (undefined *)0xd;
    psVar10 = &segment_command_00000020;
    lVar11 = 0;
    pcVar12 = (char *)0x0;
    uVar5 = FUN_003633bc(lVar4,&UNK_01c3566d,0xd,ppsVar8);
    if ((int)uVar5 != 0) {
code_r0x00363820:
      psVar9->cmd = 0x30;
      psVar9->cmdsize = 0;
      uVar5 = 1;
/* unlicensed copy if this notice is missing */
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_288) {
      return uVar5;
    }
  }
  else {
    psVar10 = psVar9;
    iVar2 = func_0x0034d670(lVar4,1);
    if (iVar2 != 0) {
      ppsVar8 = &psStack_310;
      puVar7 = (undefined *)0x80;
      iVar2 = func_0x0035e10c(lVar4,apsStack_308,0x80,ppsVar8);
      if (iVar2 != 0) {
        ppsVar8 = apsStack_308;
        puVar7 = (undefined *)0x16;
        lVar11 = 0;
        pcVar12 = (char *)0x0;
        iVar13 = 0;
        psVar10 = psStack_310;
        iVar2 = FUN_003633bc(lVar4,&UNK_01c35656,0x16,ppsVar8);
        if (iVar2 != 0) {
          func_0x0046eb00(apsStack_308,psStack_310);
          goto code_r0x00363820;
        }
      }
    }
    uVar5 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_288) {
      return 0;
    }
  }
  auVar17 = ___stack_chk_fail(uVar5);
  lVar4 = auVar17._0_8_;
  if ((char *)0xffff < pcVar12) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                    ,0x1c6,&UNK_01c3567b);
    func_0x004466b0(0x14,&UNK_00080106,0);
/* stripping the watermark breaks the license */
    return 0;
  }
  pcVar3 = (char *)0x0;
  if (iVar13 != 0) {
    pcVar3 = pcVar12 + 2;
  }
  plVar6 = (long *)func_0x019eb530(pcVar3 + (long)(psVar10->segname + 0x38),
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                                   ,0x1d4);
  if (plVar6 != (long *)0x0) {
    _memcpy(plVar6,ppsVar8,psVar10);
    puVar1 = (undefined8 *)((long)plVar6 + (long)psVar10);
    uVar5 = *(undefined8 *)(lVar4 + 0x188);
    uVar16 = *(undefined8 *)(lVar4 + 0x1a0);
    uVar15 = *(undefined8 *)(lVar4 + 0x198);
    puVar1[1] = *(undefined8 *)(lVar4 + 400);
    *puVar1 = uVar5;
    puVar1[3] = uVar16;
    puVar1[2] = uVar15;
    uVar5 = *(undefined8 *)(lVar4 + 0x168);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    uVar16 = *(undefined8 *)(lVar4 + 0x180);
    uVar15 = *(undefined8 *)(lVar4 + 0x178);
    puVar1[5] = *(undefined8 *)(lVar4 + 0x170);
    puVar1[4] = uVar5;
    puVar1[7] = uVar16;
    puVar1[6] = uVar15;
    if ((iVar13 != 0) &&
       ((*(ushort *)(puVar1 + 8) =
              (ushort)((ulong)pcVar12 >> 8) & 0xff | (ushort)(((uint)pcVar12 & 0xff00ff) << 8),
        lVar11 != 0 || (pcVar12 != (char *)0x0)))) {
      _memcpy((long)puVar1 + 0x42,lVar11,pcVar12);
    }
    if ((((*plVar6 != 0x6620746e65696c63 || *(long *)((long)plVar6 + 7) != 0x64656873696e6966) &&
         (*plVar6 != 0x6620726576726573 || *(long *)((long)plVar6 + 7) != 0x64656873696e6966)) &&
        (*plVar6 != 0x732072657473616d || *(long *)((long)plVar6 + 5) != 0x7465726365732072)) &&
       (((*plVar6 != 0x6465646e65747865 || plVar6[1] != 0x2072657473616d20) ||
         *(long *)((long)plVar6 + 0xe) != 0x7465726365732072 &&
        (*plVar6 != 0x617078652079656b || *(long *)((long)plVar6 + 5) != 0x6e6f69736e617078)))) {
      uVar5 = FUN_003633bc(lVar4,plVar6,pcVar3 + (long)(psVar10->segname + 0x38),0,0,0,0,0,0,
                           *(long *)(lVar4 + 0x900) + 0x50,
                           *(undefined8 *)(*(long *)(lVar4 + 0x900) + 8),auVar17._8_8_,puVar7,0);
      goto code_r0x00363aec;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                    ,0x20e,&UNK_01c3567b);
    func_0x004466b0(0x14,0x16f,0);
  }
  uVar5 = 0;
code_r0x00363aec:
  func_0x00474404(plVar6,pcVar3 + (long)(psVar10->segname + 0x38),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                  ,0x210);
  return uVar5;
}

