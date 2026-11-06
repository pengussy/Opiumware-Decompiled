/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2a4c38:5111dede4d
 */

/* WARNING: Possible PIC construction at 0x002a5698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x002a569c) */
/* WARNING: Removing unreachable block (ram,0x002a56a8) */
/* WARNING: Removing unreachable block (ram,0x002a56f0) */
/* WARNING: Removing unreachable block (ram,0x002a56b4) */
/* WARNING: Removing unreachable block (ram,0x002a5494) */
/* WARNING: Removing unreachable block (ram,0x002a54c0) */
/* WARNING: Removing unreachable block (ram,0x002a54d4) */
/* WARNING: Removing unreachable block (ram,0x002a56d8) */
/* WARNING: Removing unreachable block (ram,0x002a54d8) */
/* WARNING: Removing unreachable block (ram,0x002a5748) */
/* WARNING: Removing unreachable block (ram,0x002a54fc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_002a4c38(long param_1,byte *param_2,long param_3,ulong param_4,ulong param_5,int param_6,
                   undefined8 param_7,dword *param_8)

{
  ulong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  bool bVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  dword *pdVar14;
  dword *pdVar15;
  int *piVar16;
  ulong uVar17;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  byte *pbVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  uint uVar25;
  int iVar26;
  dword *pdVar27;
  ushort *puVar28;
  int iVar29;
  ulong uVar30;
  ulong *puVar31;
  ulong uVar32;
  undefined1 (*pauVar33) [16];
  byte *pbVar34;
  int iVar35;
  uint *puVar36;
  long lVar37;
  int iVar38;
  uint uVar39;
  long lVar40;
/*  donate: donate/README.md  */
  ulong uVar41;
  long lVar42;
  long lVar43;
  dword *pdVar44;
  int iVar45;
  byte *pbVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar58;
  undefined1 auVar57 [16];
/*  reversing this took months of machine time  */
  long lVar59;
  long lVar61;
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  long lVar76;
  long lVar77;
  long lVar78;
  long lVar79;
  long lVar80;
  long lVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  byte *pbStack_2d0;
  ulong uStack_2c8;
  byte *pbStack_2c0;
  long lStack_2b8;
  int iStack_2b0;
  uint uStack_2ac;
  int iStack_2a8;
  undefined8 *puStack_2a0;
  int *piStack_298;
  int iStack_290;
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int aiStack_1c8 [34];
  long lStack_140;
  uint uStack_138;
  uint uStack_134;
  uint uStack_130;
  long lStack_a0;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_01f20200;
  pdVar14 = *(dword **)(param_1 + 0xca0);
  uVar1 = param_1 + 0xf0;
/* wm:watermarked copy - do not remove */
  uVar17 = *(ulong *)(param_1 + 0xdd8);
  pbVar18 = *(byte **)(param_1 + 0xde0);
  piVar16 = aiStack_1c8;
  uVar23 = uVar1;
  pbVar10 = (byte *)func_0x0029d64c(param_1 + 0x3d0,*(undefined8 *)(param_1 + 0xc98),pdVar14,uVar1,
                                    piVar16);
  if ((byte *)0xffffffffffffff88 < pbVar10) goto LAB_002a589c;
  lVar19 = *(long *)(param_1 + 0xc98);
  lVar20 = *(long *)(param_1 + 0xca0);
  iVar45 = *(int *)(param_1 + 8);
  pdVar44 = *(dword **)(param_1 + 0x3d0);
  puVar36 = *(uint **)(param_1 + 0x3d8);
  piVar16 = *(int **)(param_1 + 0x3e0);
  piVar21 = *(int **)(param_1 + 1000);
  uVar49 = (long)piVar21 - (long)piVar16;
  uVar22 = *(ulong *)(param_1 + 0x128);
  if (uVar22 < 0x53d) {
    uVar22 = 0x53c;
  }
  uVar25 = (uint)(aiStack_1c8[0] == 2);
  pbVar18 = *(byte **)(param_1 + 0x3f0);
  param_8 = *(dword **)(param_1 + 0x3f8);
  pbVar46 = *(byte **)(param_1 + 0x400);
  lVar42 = (long)puVar36 - (long)pdVar44;
  if (lVar42 == 0) {
    lVar42 = 0;
    uVar23 = 0;
// WM - unlicensed copy if this notice is missing
    goto joined_r0x002a5740;
  }
  pdVar14 = *(dword **)(param_1 + 0xdd8);
  uVar17 = *(ulong *)(param_1 + 0xde0);
  uVar47 = lVar42 >> 3;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0xff);
  uVar48 = uVar49;
  if (aiStack_1c8[0] - 2U < 2) {
    uVar23 = func_0x0029910c(pdVar14,&uStack_1d8,piVar16,uVar49,pdVar14,uVar17);
    if (uVar23 < 0xffffffffffffff89) {
      lVar43 = func_0x0029a970(lVar20,pdVar14,uStack_1d8 & 0xffffffff);
      if (aiStack_1c8[0] != 2) {
        lStack_140 = 0;
      }
      uVar48 = lVar43 + lStack_140 + 3;
    }
  }
  else if (aiStack_1c8[0] != 0) {
    if (aiStack_1c8[0] == 1) {
      uVar48 = 1;
    }
    else {
/* watermarked copy - do not remove */
      uVar48 = 0;
    }
  }
  uVar39 = uStack_134;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0x1f);
  func_0x00298b70(pdVar14,&uStack_1d8,pbVar46,uVar47,pdVar14,uVar17);
  if (uVar39 == 1) {
LAB_002a4eec:
    uVar11 = 0;
LAB_002a4ef0:
    pbVar10 = pbVar46 + uVar47;
    if (pbVar10 <= pbVar46 + 1) {
      pbVar10 = pbVar46 + 1;
    }
    uVar23 = (long)pbVar10 - (long)pbVar46;
    if (uVar23 < 8) {
/* WM - chat: discord.gg/sdkhDjTex */
      pbVar10 = pbVar46;
LAB_002a50cc:
      do {
        pbVar34 = pbVar10 + 1;
        uVar11 = uVar11 + *pbVar10;
        pbVar10 = pbVar34;
      } while (pbVar34 < pbVar46 + uVar47);
    }
    else if (uVar23 < 0x20) {
      uVar13 = 0;
LAB_002a5058:
      uVar12 = uVar23 & 0xfffffffffffffff8;
      pbVar10 = pbVar46 + uVar12;
      lVar37 = 0;
      lVar40 = 0;
      lVar50 = 0;
      lVar43 = uVar13 - uVar12;
      lVar51 = 0;
      lVar53 = 0;
      lVar54 = 0;
      lVar55 = 0;
      puVar31 = (ulong *)(pbVar46 + uVar13);
      do {
        auVar85._0_8_ = *puVar31;
        auVar85._8_8_ = 0;
        auVar5._8_8_ = _UNK_01adc5f8;
        auVar5._0_8_ = _UNK_01adc5f0;
        auVar60 = a64_TBL(ZEXT816(0),auVar85,auVar5);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        auVar84._8_8_ = _UNK_01adc608;
        auVar84._0_8_ = _UNK_01adc600;
        auVar57 = a64_TBL(ZEXT816(0),auVar85,auVar84);
        lVar54 = lVar54 + (auVar60._8_8_ & 0xffffffff);
        lVar55 = lVar55 + (auVar60._8_8_ >> 0x20);
        lVar37 = lVar37 + (auVar57._8_8_ & 0xffffffff);
        lVar40 = lVar40 + (auVar57._8_8_ >> 0x20);
        lVar51 = lVar51 + (ulong)auVar60._0_4_;
        lVar53 = lVar53 + (ulong)auVar60._4_4_;
        uVar11 = uVar11 + auVar57._0_4_;
        lVar50 = lVar50 + (ulong)auVar57._4_4_;
        lVar43 = lVar43 + 8;
        puVar31 = puVar31 + 1;
      } while (lVar43 != 0);
      uVar11 = uVar11 + lVar51 + lVar37 + lVar54 + lVar50 + lVar53 + lVar40 + lVar55;
      if (uVar23 != uVar12) goto LAB_002a50cc;
    }
    else {
      uVar13 = uVar23 & 0xffffffffffffffe0;
      lVar37 = 0;
      lVar40 = 0;
      lVar43 = 0;
      pauVar33 = (undefined1 (*) [16])(pbVar46 + 0x10);
      lVar50 = 0;
      lVar51 = 0;
      lVar55 = 0;
      lVar52 = 0;
      lVar53 = 0;
      lVar54 = 0;
      lVar59 = 0;
      lVar61 = 0;
      lVar56 = 0;
      lVar58 = 0;
      lVar66 = 0;
// donate: donate/README.md
      lVar67 = 0;
      lVar64 = 0;
      lVar65 = 0;
      lVar72 = 0;
      lVar73 = 0;
      lVar70 = 0;
      lVar71 = 0;
      lVar78 = 0;
      lVar79 = 0;
      lVar68 = 0;
      lVar69 = 0;
      lVar76 = 0;
      lVar77 = 0;
      lVar74 = 0;
      lVar75 = 0;
      lVar80 = 0;
// stripping the watermark breaks the license
      lVar81 = 0;
      uVar12 = uVar13;
      do {
        auVar60 = pauVar33[-1];
        auVar5 = *pauVar33;
        auVar57._8_8_ = _UNK_01adc5f8;
        auVar57._0_8_ = _UNK_01adc5f0;
        auVar84 = a64_TBL(ZEXT816(0),auVar60,auVar57);
        auVar62._8_8_ = _UNK_01adc608;
        auVar62._0_8_ = _UNK_01adc600;
        auVar85 = a64_TBL(ZEXT816(0),auVar60,auVar62);
        auVar82._8_8_ = _UNK_01adc618;
        auVar82._0_8_ = _UNK_01adc610;
        auVar57 = a64_TBL(ZEXT816(0),auVar60,auVar82);
        auVar6._8_8_ = _UNK_01adc628;
        auVar6._0_8_ = _UNK_01adc620;
        auVar82 = a64_TBL(ZEXT816(0),auVar60,auVar6);
        auVar60._8_8_ = _UNK_01adc5f8;
        auVar60._0_8_ = _UNK_01adc5f0;
        auVar60 = a64_TBL(ZEXT816(0),auVar5,auVar60);
        auVar63._8_8_ = _UNK_01adc608;
        auVar63._0_8_ = _UNK_01adc600;
        auVar62 = a64_TBL(ZEXT816(0),auVar5,auVar63);
        auVar83._8_8_ = _UNK_01adc618;
        auVar83._0_8_ = _UNK_01adc610;
        auVar63 = a64_TBL(ZEXT816(0),auVar5,auVar83);
        auVar7._8_8_ = _UNK_01adc628;
        auVar7._0_8_ = _UNK_01adc620;
        auVar83 = a64_TBL(ZEXT816(0),auVar5,auVar7);
        lVar37 = lVar37 + (auVar85._8_8_ & 0xffffffff);
        lVar40 = lVar40 + (auVar85._8_8_ >> 0x20);
        lVar55 = lVar55 + (auVar84._8_8_ & 0xffffffff);
/* proprietary - see LICENSE - do not sell */
        lVar52 = lVar52 + (auVar84._8_8_ >> 0x20);
        lVar50 = lVar50 + (ulong)auVar84._0_4_;
        lVar51 = lVar51 + (ulong)auVar84._4_4_;
        uVar11 = uVar11 + auVar85._0_4_;
        lVar43 = lVar43 + (ulong)auVar85._4_4_;
        lVar53 = lVar53 + (ulong)auVar57._0_4_;
        lVar54 = lVar54 + (ulong)auVar57._4_4_;
        lVar59 = lVar59 + (auVar57._8_8_ & 0xffffffff);
        lVar61 = lVar61 + (auVar57._8_8_ >> 0x20);
        lVar56 = lVar56 + (ulong)auVar82._0_4_;
        lVar58 = lVar58 + (ulong)auVar82._4_4_;
        lVar66 = lVar66 + (auVar82._8_8_ & 0xffffffff);
        lVar67 = lVar67 + (auVar82._8_8_ >> 0x20);
        lVar72 = lVar72 + (auVar62._8_8_ & 0xffffffff);
        lVar73 = lVar73 + (auVar62._8_8_ >> 0x20);
        lVar78 = lVar78 + (auVar60._8_8_ & 0xffffffff);
        lVar79 = lVar79 + (auVar60._8_8_ >> 0x20);
        lVar70 = lVar70 + (ulong)auVar60._0_4_;
        lVar71 = lVar71 + (ulong)auVar60._4_4_;
        lVar64 = lVar64 + (ulong)auVar62._0_4_;
        lVar65 = lVar65 + (ulong)auVar62._4_4_;
        lVar68 = lVar68 + (ulong)auVar63._0_4_;
        lVar69 = lVar69 + (ulong)auVar63._4_4_;
        lVar76 = lVar76 + (auVar63._8_8_ & 0xffffffff);
        lVar77 = lVar77 + (auVar63._8_8_ >> 0x20);
        lVar74 = lVar74 + (ulong)auVar83._0_4_;
        lVar75 = lVar75 + (ulong)auVar83._4_4_;
        pauVar33 = pauVar33 + 2;
// keep the notice, keep the source honest
        lVar80 = lVar80 + (auVar83._8_8_ & 0xffffffff);
        lVar81 = lVar81 + (auVar83._8_8_ >> 0x20);
        uVar12 = uVar12 - 0x20;
      } while (uVar12 != 0);
      uVar11 = lVar64 + uVar11 + lVar68 + lVar53 + lVar70 + lVar50 + lVar74 + lVar56 +
               lVar72 + lVar37 + lVar76 + lVar59 + lVar78 + lVar55 + lVar80 + lVar66 +
               lVar65 + lVar43 + lVar69 + lVar54 + lVar71 + lVar51 + lVar75 + lVar58 +
               lVar73 + lVar40 + lVar77 + lVar61 + lVar79 + lVar52 + lVar81 + lVar67;
      if (uVar23 != uVar13) {
        if ((uVar23 & 0x18) == 0) {
          pbVar10 = pbVar46 + uVar13;
          goto LAB_002a50cc;
        }
        goto LAB_002a5058;
      }
    }
    uVar11 = uVar11 >> 3;
  }
/* found on a paste site? it was re-uploaded illegally */
  else {
    if (uVar39 == 0) {
      if ((uint)uStack_1d8 < 0x1d) {
        uVar11 = func_0x002a3f0c(&UNK_01add754,5,pdVar14);
        goto joined_r0x002a4edc;
      }
    }
    else {
      if ((uVar39 & 0xfffffffe) != 2) goto LAB_002a4eec;
      uVar11 = func_0x002a3e70(lVar20 + 0x810,pdVar14,uStack_1d8 & 0xffffffff);
joined_r0x002a4edc:
      if (uVar11 < 0xffffffffffffff89) goto LAB_002a4ef0;
    }
    uVar11 = uVar47 * 10;
  }
  uVar39 = uStack_138;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0x23);
  func_0x00298b70(pdVar14,&uStack_1d8,pbVar18,uVar47,pdVar14,uVar17);
  if (uVar39 == 1) {
LAB_002a5184:
    uVar12 = 0;
LAB_002a5188:
    pbVar10 = pbVar18 + uVar47;
    if (pbVar10 <= pbVar18 + 1) {
      pbVar10 = pbVar18 + 1;
    }
    uVar23 = (long)pbVar10 - (long)pbVar18;
    if (uVar23 < 4) {
      pbVar10 = pbVar18;
LAB_002a5228:
      do {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        pbVar34 = pbVar10 + 1;
        uVar12 = uVar12 + (byte)(&UNK_01add78e)[*pbVar10];
        pbVar10 = pbVar34;
      } while (pbVar34 < pbVar18 + uVar47);
    }
    else {
      lVar43 = 0;
      lVar37 = 0;
      lVar40 = 0;
      uVar30 = uVar23 & 0xfffffffffffffffc;
      pbVar10 = pbVar18 + uVar30;
      pbVar34 = pbVar18 + 3;
      uVar13 = uVar30;
      do {
        uVar12 = uVar12 + (byte)(&UNK_01add78e)[pbVar34[-3]];
        lVar43 = lVar43 + (ulong)(byte)(&UNK_01add78e)[pbVar34[-2]];
        lVar37 = lVar37 + (ulong)(byte)(&UNK_01add78e)[pbVar34[-1]];
        lVar40 = lVar40 + (ulong)(byte)(&UNK_01add78e)[*pbVar34];
        uVar13 = uVar13 - 4;
        pbVar34 = pbVar34 + 4;
      } while (uVar13 != 0);
      uVar12 = lVar40 + lVar37 + lVar43 + uVar12;
      if (uVar23 != uVar30) goto LAB_002a5228;
    }
    uVar12 = uVar12 >> 3;
  }
  else {
/*  proprietary - see LICENSE - do not sell  */
    if (uVar39 == 0) {
      if ((uint)uStack_1d8 < 0x24) {
        uVar12 = func_0x002a3f0c(&UNK_01add7b2,6,pdVar14);
        goto joined_r0x002a5170;
      }
    }
    else {
      if ((uVar39 & 0xfffffffe) != 2) goto LAB_002a5184;
      uVar12 = func_0x002a3e70("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                               + lVar20 + 0x20,pdVar14,uStack_1d8 & 0xffffffff);
joined_r0x002a5170:
      if (uVar12 < 0xffffffffffffff89) goto LAB_002a5188;
    }
    uVar12 = uVar47 * 10;
  }
  uVar39 = uStack_130;
  uStack_1d8 = CONCAT44(uStack_1d8._4_4_,0x34);
  pdVar15 = param_8;
  uVar23 = uVar47;
  func_0x00298b70(pdVar14,&uStack_1d8,param_8,uVar47,pdVar14);
  if (uVar39 == 1) {
    uVar13 = 0;
    pdVar14 = pdVar15;
LAB_002a5330:
    puVar2 = (undefined1 *)(uVar47 + (long)param_8);
    if (puVar2 <= (undefined1 *)((long)param_8 + 1U)) {
      puVar2 = (undefined1 *)((long)param_8 + 1);
    }
    uVar30 = (long)puVar2 - (long)param_8;
    if (uVar30 < 4) {
      pdVar15 = param_8;
LAB_002a53cc:
      do {
        pdVar27 = (dword *)((long)pdVar15 + 1);
        uVar13 = uVar13 + (byte)(&UNK_01add7fa)[(byte)*pdVar15];
        pdVar15 = pdVar27;
// no support for modified copies
      } while (pdVar27 < (uint *)((long)param_8 + uVar47));
    }
    else {
      lVar43 = 0;
      lVar37 = 0;
      lVar40 = 0;
      uVar32 = uVar30 & 0xfffffffffffffffc;
      pdVar15 = (dword *)((long)param_8 + uVar32);
      pbVar10 = (byte *)((long)param_8 + 3);
      uVar41 = uVar32;
      do {
        pdVar14 = (dword *)(ulong)(byte)(&UNK_01add7fa)[pbVar10[-1]];
        uVar23 = (ulong)(byte)(&UNK_01add7fa)[*pbVar10];
        uVar13 = uVar13 + (byte)(&UNK_01add7fa)[pbVar10[-3]];
        lVar43 = lVar43 + (ulong)(byte)(&UNK_01add7fa)[pbVar10[-2]];
        lVar37 = lVar37 + (long)pdVar14;
        lVar40 = lVar40 + uVar23;
// if you paid for this, you were scammed
        uVar41 = uVar41 - 4;
        pbVar10 = pbVar10 + 4;
      } while (uVar41 != 0);
      uVar13 = lVar40 + lVar37 + lVar43 + uVar13;
      if (uVar30 != uVar32) goto LAB_002a53cc;
    }
    uVar13 = uVar13 >> 3;
  }
  else {
    if (uVar39 != 0) {
      if ((uVar39 & 0xfffffffe) == 2) {
        pdVar15 = (dword *)(uStack_1d8 & 0xffffffff);
        uVar13 = func_0x002a3e70(lVar20 + 0xb14,pdVar14);
        pdVar14 = pdVar15;
        if (0xffffffffffffff88 < uVar13) goto LAB_002a5318;
      }
      else {
        uVar13 = 0;
        pdVar14 = pdVar15;
      }
      goto LAB_002a5330;
    }
    uVar23 = uStack_1d8 & 0xffffffff;
    if ((uint)uStack_1d8 < 0x35) {
      uVar13 = func_0x002a3f0c(&UNK_01add830,6);
      pdVar15 = pdVar14;
      if (uVar13 < 0xffffffffffffff89) goto LAB_002a5330;
    }
LAB_002a5318:
    pdVar14 = pdVar15;
/* wm:stripping the watermark breaks the license */
    uVar13 = uVar47 * 10;
  }
  uVar11 = uVar48 + uVar11 + uVar12 + lStack_a0 + uVar13 + 6;
  if (piVar21 == piVar16) {
    uVar12 = 0x100;
  }
  else {
    uVar12 = 0;
    if (uVar49 != 0) {
      uVar12 = (uVar48 << 8) / uVar49;
    }
  }
  uVar13 = 0;
  if (uVar22 != 0) {
    uVar13 = (uVar11 + (uVar22 >> 1)) / uVar22;
  }
  if (uVar13 < 2) {
    uVar13 = 1;
  }
  if (param_5 < uVar11) {
LAB_002a5898:
    pbVar10 = (byte *)0x0;
LAB_002a589c:
    pdVar44 = pdVar14;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_90) {
      return pbVar10;
/* WM - more drops soon - github.com/pengussy */
    }
    auVar86 = ___stack_chk_fail();
  }
  else {
    uVar23 = uVar47;
    if (uVar13 == 1) {
joined_r0x002a5740:
      if (puVar36 == pdVar44) {
        lVar43 = 0;
      }
      else {
        lVar43 = 0;
        uVar17 = (long)pdVar44 - *(long *)(param_1 + 0x3d0);
        puVar28 = (ushort *)((long)pdVar44 + 6);
        uVar22 = uVar23;
        do {
          lVar37 = (ulong)*puVar28 + 3;
          lVar40 = lVar37;
          if ((*(int *)(param_1 + 0x41c) == (int)(uVar17 >> 3)) &&
             (lVar40 = (ulong)*puVar28 + 0x10003, *(int *)(param_1 + 0x418) != 2)) {
// WM - no support for modified copies
            lVar40 = lVar37;
          }
          lVar43 = lVar43 + lVar40;
          uVar17 = uVar17 + 8;
          uVar22 = uVar22 - 1;
          puVar28 = puVar28 + 4;
        } while (uVar22 != 0);
      }
      iStack_1cc = 0;
      piStack_298 = &iStack_1cc;
      puStack_2a0 = &uStack_1d8;
      bVar9 = true;
      iStack_2a8 = 1;
      pdVar14 = pdVar44;
      uVar17 = uVar49;
      pbVar10 = (byte *)func_0x002a5a24(lVar20,aiStack_1c8);
      pbStack_2d0 = pbVar46;
/*  origin: github.com/pengussy  */
      uStack_2c8 = uVar1;
      pbStack_2c0 = param_2;
      lStack_2b8 = param_3;
      iStack_2b0 = iVar45;
      uStack_2ac = uVar25;
      iStack_290 = param_6;
      if ((byte *)0xffffffffffffff88 < pbVar10) goto LAB_002a589c;
      pdVar15 = pdVar44;
      uVar22 = param_4;
      pbVar34 = param_2;
      if ((pbVar10 == (byte *)0x0) || ((byte *)(lVar43 + uVar49) <= pbVar10)) {
joined_r0x002a5818:
        if (uVar25 != 0) {
          pdVar14 = &section_000007d8.reloff;
          _memcpy(lVar20,lVar19);
        }
      }
      else {
        uVar22 = param_4 + (long)(lVar43 + uVar49);
        pbVar34 = param_2 + (long)pbVar10;
        bVar9 = iStack_1cc == 0;
        pdVar15 = (dword *)((long)pdVar44 + lVar42);
        if ((uint)uStack_1d8 == 0) goto joined_r0x002a5818;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      }
      if (bVar9) {
        if (1 < uStack_138 - 1) {
          if (1 < uStack_130 - 1) {
            if (uStack_134 - 3 < 0xfffffffe) goto LAB_002a5860;
          }
        }
        goto LAB_002a5898;
      }
LAB_002a5860:
      if (uVar22 < param_4 + param_5) {
        pdVar27 = (dword *)((param_4 + param_5) - uVar22);
        pbVar10 = (byte *)((long)pdVar27 + 3);
        pdVar14 = pdVar27;
        if (param_2 + (param_3 - (long)pbVar34) < pbVar10) {
          pbVar10 = (byte *)0xffffffffffffffba;
        }
        else {
          param_6 = param_6 + (int)pdVar27 * 8;
          *(short *)pbVar34 = (short)param_6;
          pbVar34[2] = (byte)((uint)param_6 >> 0x10);
          _memcpy(pbVar34 + 3,uVar22);
          if (pbVar10 < (byte *)0xffffffffffffff88 || pdVar27 == (dword *)0xffffffffffffff85) {
            pbVar34 = pbVar34 + (long)pbVar10;
            if (pdVar15 < puVar36) {
              uVar22 = *(ulong *)(&UNK_000015f0 + lVar19);
              uStack_1d8 = uVar22;
/* wm:no support for modified copies */
              uVar22 = uStack_1d8;
              iVar35 = *(int *)(&UNK_000015f8 + lVar19);
              iStack_1d0 = iVar35;
              if (pdVar44 < pdVar15) {
                uStack_1d8._4_4_ = (int)(uVar22 >> 0x20);
                uStack_1d8._0_4_ = (uint)uVar22;
                uVar49 = (long)pdVar44 - *(long *)(param_1 + 0x3d0);
                iVar29 = uStack_1d8._4_4_;
                iVar26 = (uint)uStack_1d8;
                uStack_1d8 = uVar22;
                do {
                  uVar4 = (ushort)pdVar44[1];
                  uVar39 = (uint)uVar4;
                  if (*(int *)(param_1 + 0x41c) == (int)(uVar49 >> 3)) {
                    uVar39 = uVar4 | 0x10000;
                    if (*(int *)(param_1 + 0x418) != 1) {
                      uVar39 = (uint)uVar4;
                    }
                  }
                  uVar3 = *pdVar44;
/* keep the notice, keep the source honest - github.com/pengussy */
                  if (uVar3 < 4) {
                    if (uVar39 == 0) {
                      uVar3 = uVar3 + 1;
                    }
                    uVar3 = uVar3 - 1;
                    iVar8 = iVar29;
                    if (uVar3 != 0) {
                      if (uVar3 == 3) {
                        iVar38 = iVar26 + -1;
                      }
                      else {
                        iVar38 = aiStack_1c8[(ulong)uVar3 - 4];
                      }
                      if (uVar3 != 1) {
                        iVar35 = iVar29;
                      }
                      iStack_1d0 = iVar35;
                      iVar29 = iVar35;
                      goto LAB_002a5988;
                    }
                  }
                  else {
                    iStack_1d0 = iVar29;
                    iVar38 = uVar3 - 3;
LAB_002a5988:
                    uStack_1d8 = CONCAT44(iVar26,iVar38);
                    iVar35 = iVar29;
// WM - stripping the watermark breaks the license
                    iVar8 = iVar26;
                    iVar26 = iVar38;
                    iStack_1d0 = iVar29;
                  }
                  iVar29 = iVar8;
                  pdVar44 = pdVar44 + 2;
                  uVar49 = uVar49 + 8;
                } while (pdVar44 < pdVar15);
              }
              *(ulong *)(&UNK_000015f0 + lVar20) = uStack_1d8;
              *(int *)(&UNK_000015f8 + lVar20) = iStack_1d0;
            }
            goto LAB_002a58fc;
          }
        }
      }
      else {
LAB_002a58fc:
        pbVar10 = pbVar34 + -(long)param_2;
      }
      goto LAB_002a589c;
    }
    uVar17 = 0;
    if (uVar47 != 0) {
      uVar17 = ((uVar11 - uVar48) * 0x100) / uVar47;
    }
    uVar22 = 0;
    if (uVar13 != 0) {
      uVar22 = (uVar11 * 0x100) / uVar13;
    }
    lVar42 = (long)puVar36 - (long)pdVar44;
    uVar48 = lVar42 >> 3;
    if (uVar48 < 2) {
// unlicensed copy if this notice is missing
      uVar23 = 1;
    }
    else {
      uVar49 = uVar17 + 0x7800 + uVar12 * (ushort)pdVar44[1];
      uVar23 = 1;
      if (uVar49 <= uVar22) {
        lVar43 = (ulong)(ushort)pdVar44[1] + (ulong)*(ushort *)((long)pdVar44 + 6) + 3;
        uVar23 = 1;
        puVar28 = (ushort *)((long)pdVar44 + 0xe);
        do {
          uVar49 = uVar49 + uVar17 + uVar12 * puVar28[-1];
          lVar43 = lVar43 + (ulong)puVar28[-1] + (ulong)*puVar28 + 3;
          if (uVar22 < uVar49 && uVar49 < (ulong)(lVar43 * 0x100)) goto LAB_002a5578;
          uVar23 = uVar23 + 1;
          puVar28 = puVar28 + 4;
        } while (uVar48 != uVar23);
        uVar23 = uVar48;
      }
    }
LAB_002a5578:
    if (pdVar44 + uVar23 * 2 == puVar36) {
      uVar49 = (long)piVar21 - (long)piVar16;
/* wm:proprietary - see LICENSE - do not sell */
      uVar23 = uVar48;
      goto joined_r0x002a5740;
    }
    uVar17 = 0;
    iStack_1cc = 0;
    uVar22 = (long)pdVar44 - *(long *)(param_1 + 0x3d0);
    lVar19 = 4;
    uVar49 = uVar23;
    do {
      uVar47 = (ulong)*(ushort *)((long)pdVar44 + lVar19);
      uVar48 = uVar47;
      if ((*(int *)(param_1 + 0x41c) == (int)(uVar22 >> 3)) &&
         (uVar48 = uVar47 | 0x10000, *(int *)(param_1 + 0x418) != 1)) {
        uVar48 = uVar47;
      }
      uVar17 = uVar17 + uVar48;
      uVar22 = uVar22 + 8;
      lVar19 = lVar19 + 8;
      uVar49 = uVar49 - 1;
    } while (uVar49 != 0);
/* wm:origin: github.com/pengussy */
    uVar22 = uVar23;
    do {
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
    iStack_290 = 0;
    piStack_298 = &iStack_1cc;
    puStack_2a0 = &uStack_1d8;
    iStack_2a8 = 1;
    auVar86._8_8_ = aiStack_1c8;
    auVar86._0_8_ = lVar20;
    pbStack_2d0 = pbVar46;
    uStack_2c8 = uVar1;
    pbStack_2c0 = param_2;
    lStack_2b8 = param_3;
    iStack_2b0 = iVar45;
    uStack_2ac = uVar25;
  }
/* thanks for reading - discord.gg/sdkhDjTex */
  piVar21 = auVar86._8_8_;
  lVar20 = auVar86._0_8_;
  pbVar10 = pbStack_2c0 + 3;
  lVar42 = lStack_2b8 + -3;
  lVar19 = 200;
  if (uStack_2ac == 0) {
    lVar19 = 0;
  }
  iVar45 = 3;
  uVar1 = 3;
  if (0x400U - lVar19 <= uVar17) {
    uVar1 = 4;
  }
  if (0x4000U - lVar19 <= uVar17) {
    uVar1 = uVar1 + 1;
  }
  if (uStack_2ac != 0) {
    iVar45 = *piVar21;
  }
  *(undefined4 *)puStack_2a0 = 0;
  if (uVar17 == 0) {
code_r0x002a5ad0:
    pbVar46 = (byte *)func_0x002a39e8(pbVar10,lVar42,piVar16,uVar17);
  }
  else {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    iVar35 = *piVar21;
    if (iVar35 == 1) {
      pbVar46 = (byte *)func_0x002a3a80(pbVar10,lVar42,piVar16,uVar17);
    }
    else {
      if (iVar35 == 0) goto code_r0x002a5ad0;
      lVar19 = 0;
      pbVar46 = pbVar10 + uVar1;
      if ((uStack_2ac != 0) && (iVar35 == 2)) {
        _memcpy(pbVar46,piVar21 + 1,*(undefined8 *)(piVar21 + 0x22));
        lVar19 = *(long *)(piVar21 + 0x22);
        pbVar46 = pbVar46 + lVar19;
      }
      if (uVar1 == 3) {
        lVar43 = func_0x0029acfc();
        if (0xffffffffffffff86 < lVar43 - 1U && lVar43 != -0x78) {
          return (byte *)0x0;
        }
      }
      else {
        lVar43 = func_0x0029c080(pbVar46,pbStack_2c0 + (lStack_2b8 - (long)pbVar46),piVar16,uVar17,
                                 lVar20,iStack_2b0 != 0);
        if (0xffffffffffffff86 < lVar43 - 1U && lVar43 != -0x78) {
          return (byte *)0x0;
        }
      }
      uVar22 = lVar43 + lVar19;
      if ((uStack_2ac != 0) || (uVar22 < uVar17)) {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        uVar49 = 3;
        if (0x3ff < uVar22) {
          uVar49 = 4;
        }
        if ((uVar22 & 0xffffffffffffc000) != 0) {
          uVar49 = uVar49 + 1;
        }
        if (uVar49 <= uVar1) {
          iVar35 = (int)uVar17 * 0x10;
          iVar29 = (int)uVar22;
          if (uVar1 == 5) {
            *(int *)(pbStack_2c0 + 3) = iVar45 + iVar35 + iVar29 * 0x400000 + 0xc;
            pbStack_2c0[7] = (byte)(uVar22 >> 10);
          }
          else {
            iVar45 = iVar45 + iVar35;
            if (uVar1 == 4) {
              *(int *)pbVar10 = iVar45 + iVar29 * 0x40000 + 8;
            }
            else {
              iVar45 = iVar45 + iVar29 * 0x4000;
              *(short *)(pbStack_2c0 + 3) = (short)iVar45;
              pbStack_2c0[5] = (byte)((uint)iVar45 >> 0x10);
            }
          }
          *(undefined4 *)puStack_2a0 = 1;
          pbVar46 = pbVar46 + (lVar43 - (long)pbVar10);
          goto joined_r0x002a5c74;
        }
      }
/*  if you paid for this, you were scammed  */
      pbVar46 = (byte *)func_0x002a39e8(pbVar10,lVar42,piVar16,uVar17);
    }
  }
joined_r0x002a5c74:
  if ((byte *)0xffffffffffffff88 < pbVar46) {
    return pbVar46;
  }
  if (pbVar46 == (byte *)0x0) {
    return (byte *)0x0;
  }
  bVar9 = 0x39 < *(uint *)(uStack_2c8 + 4);
  *piStack_298 = 0;
  if (lVar42 - (long)pbVar46 < 4) {
    return (byte *)0xffffffffffffffba;
  }
  pbVar10 = pbVar10 + (long)pbVar46;
  if (uVar23 < 0x80) {
    pbVar34 = pbVar10 + 1;
/* reversing this took months of machine time */
    *pbVar10 = (byte)uVar23;
    if (uVar23 == 0) {
      pbVar24 = (byte *)0x1;
      goto code_r0x002a5e64;
    }
    pbVar24 = pbVar10 + 2;
joined_r0x002a5dd8:
    if (iStack_2a8 != 0) goto code_r0x002a5cdc;
code_r0x002a5ddc:
    *pbVar34 = 0xfc;
    pbVar18 = (byte *)func_0x002a46e8(pbVar24,pbStack_2c0 + (lStack_2b8 - (long)pbVar24),
                                      lVar20 + 0xb14,param_8,lVar20 + 0x810,pbStack_2d0,
                                      "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                      + lVar20 + 0x20,pbVar18,pdVar44,uVar23,bVar9);
    if ((byte *)0xffffffffffffff88 < pbVar18) {
      return pbVar18;
    }
    pbVar24 = pbVar24 + (long)pbVar18;
// WM - proprietary - see LICENSE - do not sell
  }
  else {
    if (0x7e < uVar23 >> 8) {
      *pbVar10 = 0xff;
      *(short *)(pbVar10 + 1) = (short)uVar23 + -0x7f00;
      pbVar34 = pbVar10 + 3;
      pbVar24 = pbVar10 + 4;
      goto joined_r0x002a5dd8;
    }
    *pbVar10 = (byte)(uVar23 >> 8) | 0x80;
    pbVar10[1] = (byte)uVar23;
    pbVar34 = pbVar10 + 2;
    pbVar24 = pbVar10 + 3;
    if (iStack_2a8 == 0) goto code_r0x002a5ddc;
code_r0x002a5cdc:
    *pbVar34 = (char)piVar21[0x24] * '@' + (char)piVar21[0x25] * '\x10' +
               (char)piVar21[0x26] * '\x04';
    _memcpy(pbVar24,piVar21 + 0x27,*(undefined8 *)(piVar21 + 0x4a));
/* origin: github.com/pengussy */
    pbVar24 = pbVar24 + *(long *)(piVar21 + 0x4a);
    pbVar18 = (byte *)func_0x002a46e8(pbVar24,pbStack_2c0 + (lStack_2b8 - (long)pbVar24),
                                      lVar20 + 0xb14,param_8,lVar20 + 0x810,pbStack_2d0,
                                      "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                      + lVar20 + 0x20,pbVar18,pdVar44,uVar23,bVar9);
    if ((byte *)0xffffffffffffff88 < pbVar18) {
      return pbVar18;
    }
    pbVar24 = pbVar24 + (long)pbVar18;
    if ((*(long *)(piVar21 + 0x4c) != 0) && (pbVar18 + *(long *)(piVar21 + 0x4c) < (byte *)0x4)) {
      return (byte *)0x0;
    }
  }
  if (3 < (long)pbVar24 - (long)pbVar34) {
    *piStack_298 = 1;
    pbVar24 = pbVar24 + -(long)pbVar10;
    if ((byte *)0xffffffffffffff88 < pbVar24) {
      return pbVar24;
    }
    if (pbVar24 != (byte *)0x0) {
code_r0x002a5e64:
      iVar45 = iStack_290 + (int)(pbVar46 + (long)pbVar24 + 3) * 8 + -0x14;
      *(short *)pbStack_2c0 = (short)iVar45;
      pbStack_2c0[2] = (byte)((uint)iVar45 >> 0x10);
      return pbVar46 + (long)pbVar24 + 3;
    }
  }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  return (byte *)0x0;
}

