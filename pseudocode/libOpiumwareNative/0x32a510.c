/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x32a510:e14d709249
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0032a510(byte *param_1)

{
  long lVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
/* do not claim this as your own */
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar31 [16];
  uint uVar36;
  uint uVar37;
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
/* WM - more drops soon - github.com/pengussy */
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar65;
  int iVar66;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
/* wm:stripping the watermark breaks the license */
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar78;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  float fVar86;
  float fVar87;
/* WM - if you paid for this, you were scammed */
  float fVar88;
  float fVar89;
  
  if ((*param_1 >> 2 & 1) != 0) {
    return;
  }
  lVar14 = *(long *)(param_1 + 0x38);
  lVar16 = *(long *)(param_1 + 0x2b0);
  uVar9 = *(uint *)(lVar16 + 0xf0);
  if ((uVar9 != 0xffffffff) && ((int)((ulong)uVar9 & 0x7ffff) < *(int *)(lVar16 + 0x70))) {
    uVar11 = *(uint *)(*(long *)(lVar16 + 0x78) + ((ulong)uVar9 & 0x7ffff) * 4);
    if (((uVar11 >> 0x1e & 1) != 0) &&
       ((((uVar11 ^ uVar9) & 0x3ff00000) == 0 && (*(long *)(lVar16 + 0x68) != 0)))) {
      puVar2 = (ushort *)(*(long *)(lVar16 + 0x68) + ((long)((ulong)uVar11 << 0x2c) >> 0x2c) * 8);
      uVar5 = puVar2[1];
      uVar9 = (uint)uVar5;
      iVar18 = uVar9 + 1;
      uVar6 = *puVar2;
      uVar11 = (uint)uVar6;
      iVar19 = uVar11 - 1;
      uVar7 = puVar2[2];
      uVar13 = (uint)uVar7;
      uVar21 = uVar13 + (int)_UNK_01adfae0;
      uVar32 = (uint)uVar7;
      uVar23 = uVar32 + (int)((ulong)_UNK_01adfae0 >> 0x20);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      uVar33 = (uint)uVar7;
      uVar24 = uVar33 + (int)_UNK_01adfae8;
      uVar34 = (uint)uVar7;
      uVar25 = uVar34 + (int)((ulong)_UNK_01adfae8 >> 0x20);
      auVar67._0_4_ = uVar21 >> 0x1f;
      auVar67._4_4_ = uVar23 >> 0x1f;
      auVar67._8_4_ = uVar24 >> 0x1f;
      auVar67._12_4_ = uVar25 >> 0x1f;
      auVar26._4_4_ = uVar23;
      auVar26._0_4_ = uVar21;
      auVar26._8_4_ = uVar24;
      auVar26._12_4_ = uVar25;
      auVar26 = NEON_shadd(auVar26,auVar67,4);
      auVar38._4_4_ = iVar19 + auVar26._4_4_;
      auVar38._0_4_ = iVar19 + auVar26._0_4_;
      auVar38._8_4_ = iVar19 + auVar26._8_4_;
      auVar38._12_4_ = iVar19 + auVar26._12_4_;
      auVar38 = NEON_scvtf(auVar38,4);
      uVar25 = (uint)uVar5;
      iVar65 = (int)((ulong)_UNK_01adc5c0 >> 0x20);
      uVar36 = (uint)uVar5;
      uVar37 = (uint)uVar5;
      iVar66 = (int)((ulong)_UNK_01adc5c8 >> 0x20);
      auVar52._4_4_ = uVar25 + iVar65;
      auVar52._0_4_ = uVar9 + (int)_UNK_01adc5c0;
      auVar52._8_4_ = uVar36 + (int)_UNK_01adc5c8;
      auVar52._12_4_ = uVar37 + iVar66;
      auVar67 = NEON_ucvtf(auVar52,4);
// chat: discord.gg/sdkhDjTex
      fVar22 = *(float *)(param_1 + 0x54);
      fVar27 = *(float *)(param_1 + 0x58);
      uVar21 = (uint)uVar6;
      uVar23 = (uint)uVar6;
      uVar24 = (uint)uVar6;
      auVar50._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adc5a0;
      auVar50._4_4_ = auVar26._4_4_ + uVar21 + (int)((ulong)_UNK_01adc5a0 >> 0x20);
      auVar50._8_4_ = auVar26._8_4_ + uVar23 + (int)_UNK_01adc5a8;
      auVar50._12_4_ = auVar26._12_4_ + uVar24 + (int)((ulong)_UNK_01adc5a8 >> 0x20);
      auVar26 = NEON_scvtf(auVar50,4);
      auVar51._0_4_ = iVar18 + (int)_UNK_01adc5c0;
      auVar51._4_4_ = iVar18 + iVar65;
      auVar51._8_4_ = iVar18 + (int)_UNK_01adc5c8;
      auVar51._12_4_ = iVar18 + iVar66;
      auVar52 = NEON_ucvtf(auVar51,4);
      fVar78 = (auVar67._0_4_ * fVar27 + auVar52._0_4_ * fVar27) * 0.5;
      fVar82 = (auVar67._4_4_ * fVar27 + auVar52._4_4_ * fVar27) * 0.5;
      fVar83 = (auVar67._8_4_ * fVar27 + auVar52._8_4_ * fVar27) * 0.5;
      fVar84 = (auVar67._12_4_ * fVar27 + auVar52._12_4_ * fVar27) * 0.5;
      *(float *)(param_1 + 0x88) = auVar38._0_4_ * fVar22;
      *(float *)(param_1 + 0x8c) = fVar78;
      *(float *)(param_1 + 0x90) = auVar26._0_4_ * fVar22;
      *(float *)(param_1 + 0x94) = fVar78;
      *(float *)(param_1 + 0x98) = auVar38._4_4_ * fVar22;
      *(float *)(param_1 + 0x9c) = fVar82;
      *(float *)(param_1 + 0xa0) = auVar26._4_4_ * fVar22;
      *(float *)(param_1 + 0xa4) = fVar82;
      *(float *)(param_1 + 0xa8) = auVar38._8_4_ * fVar22;
      *(float *)(param_1 + 0xac) = fVar83;
      *(float *)(param_1 + 0xb0) = auVar26._8_4_ * fVar22;
      *(float *)(param_1 + 0xb4) = fVar83;
      *(float *)(param_1 + 0xb8) = auVar38._12_4_ * fVar22;
      *(float *)(param_1 + 0xbc) = fVar84;
// watermarked copy - do not remove
      *(float *)(param_1 + 0xc0) = auVar26._12_4_ * fVar22;
      *(float *)(param_1 + 0xc4) = fVar84;
      auVar80._0_4_ = uVar13 + (int)_UNK_01adfaf0;
      auVar80._4_4_ = uVar32 + (int)((ulong)_UNK_01adfaf0 >> 0x20);
      auVar80._8_4_ = uVar33 + (int)_UNK_01adfaf8;
      auVar80._12_4_ = uVar34 + (int)((ulong)_UNK_01adfaf8 >> 0x20);
      auVar53._0_4_ = auVar80._0_4_ >> 0x1f;
      auVar53._4_4_ = auVar80._4_4_ >> 0x1f;
      auVar53._8_4_ = auVar80._8_4_ >> 0x1f;
      auVar53._12_4_ = auVar80._12_4_ >> 0x1f;
      auVar26 = NEON_shadd(auVar80,auVar53,4);
      auVar54._0_4_ = iVar19 + auVar26._0_4_;
      auVar54._4_4_ = iVar19 + auVar26._4_4_;
      auVar54._8_4_ = iVar19 + auVar26._8_4_;
      auVar54._12_4_ = iVar19 + auVar26._12_4_;
      auVar38 = NEON_scvtf(auVar54,4);
      auVar73._0_4_ = uVar9 + (int)_UNK_01ad8270;
      iVar65 = (int)((ulong)_UNK_01ad8270 >> 0x20);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      auVar73._4_4_ = uVar25 + iVar65;
      auVar73._8_4_ = uVar36 + (int)_UNK_01ad8278;
      iVar66 = (int)((ulong)_UNK_01ad8278 >> 0x20);
      auVar73._12_4_ = uVar37 + iVar66;
      auVar67 = NEON_ucvtf(auVar73,4);
      auVar39._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adc590;
      auVar39._4_4_ = auVar26._4_4_ + uVar21 + (int)((ulong)_UNK_01adc590 >> 0x20);
      auVar39._8_4_ = auVar26._8_4_ + uVar23 + (int)_UNK_01adc598;
      auVar39._12_4_ = auVar26._12_4_ + uVar24 + (int)((ulong)_UNK_01adc598 >> 0x20);
      auVar26 = NEON_scvtf(auVar39,4);
      auVar68._0_4_ = iVar18 + (int)_UNK_01ad8270;
      auVar68._4_4_ = iVar18 + iVar65;
      auVar68._8_4_ = iVar18 + (int)_UNK_01ad8278;
      auVar68._12_4_ = iVar18 + iVar66;
      auVar52 = NEON_ucvtf(auVar68,4);
      fVar78 = (auVar67._0_4_ * fVar27 + auVar52._0_4_ * fVar27) * 0.5;
      fVar82 = (auVar67._4_4_ * fVar27 + auVar52._4_4_ * fVar27) * 0.5;
      fVar83 = (auVar67._8_4_ * fVar27 + auVar52._8_4_ * fVar27) * 0.5;
      fVar84 = (auVar67._12_4_ * fVar27 + auVar52._12_4_ * fVar27) * 0.5;
      *(float *)(param_1 + 200) = auVar38._0_4_ * fVar22;
      *(float *)(param_1 + 0xcc) = fVar78;
      *(float *)(param_1 + 0xd0) = auVar26._0_4_ * fVar22;
      *(float *)(param_1 + 0xd4) = fVar78;
      *(float *)(param_1 + 0xd8) = auVar38._4_4_ * fVar22;
      *(float *)(param_1 + 0xdc) = fVar82;
      *(float *)(param_1 + 0xe0) = auVar26._4_4_ * fVar22;
      *(float *)(param_1 + 0xe4) = fVar82;
      *(float *)(param_1 + 0xe8) = auVar38._8_4_ * fVar22;
      *(float *)(param_1 + 0xec) = fVar83;
      *(float *)(param_1 + 0xf0) = auVar26._8_4_ * fVar22;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      *(float *)(param_1 + 0xf4) = fVar83;
      *(float *)(param_1 + 0xf8) = auVar38._12_4_ * fVar22;
      *(float *)(param_1 + 0xfc) = fVar84;
      *(float *)(param_1 + 0x100) = auVar26._12_4_ * fVar22;
      *(float *)(param_1 + 0x104) = fVar84;
      auVar40._0_4_ = uVar13 + (int)_UNK_01adfb00;
      auVar40._4_4_ = uVar32 + (int)((ulong)_UNK_01adfb00 >> 0x20);
      auVar40._8_4_ = uVar33 + (int)_UNK_01adfb08;
      auVar40._12_4_ = uVar34 + (int)((ulong)_UNK_01adfb08 >> 0x20);
      auVar55._0_4_ = auVar40._0_4_ >> 0x1f;
      auVar55._4_4_ = auVar40._4_4_ >> 0x1f;
      auVar55._8_4_ = auVar40._8_4_ >> 0x1f;
      auVar55._12_4_ = auVar40._12_4_ >> 0x1f;
      auVar26 = NEON_shadd(auVar40,auVar55,4);
      auVar56._0_4_ = iVar19 + auVar26._0_4_;
      auVar56._4_4_ = iVar19 + auVar26._4_4_;
      auVar56._8_4_ = iVar19 + auVar26._8_4_;
      auVar56._12_4_ = iVar19 + auVar26._12_4_;
      auVar38 = NEON_scvtf(auVar56,4);
      auVar74._0_4_ = uVar9 + (int)_UNK_01adfb10;
      iVar65 = (int)((ulong)_UNK_01adfb10 >> 0x20);
      auVar74._4_4_ = uVar25 + iVar65;
      auVar74._8_4_ = uVar36 + (int)_UNK_01adfb18;
      iVar66 = (int)((ulong)_UNK_01adfb18 >> 0x20);
      auVar74._12_4_ = uVar37 + iVar66;
      auVar67 = NEON_ucvtf(auVar74,4);
      auVar41._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adc580;
      auVar41._4_4_ = auVar26._4_4_ + uVar21 + (int)((ulong)_UNK_01adc580 >> 0x20);
      auVar41._8_4_ = auVar26._8_4_ + uVar23 + (int)_UNK_01adc588;
      auVar41._12_4_ = auVar26._12_4_ + uVar24 + (int)((ulong)_UNK_01adc588 >> 0x20);
/* chat: discord.gg/sdkhDjTex */
      auVar26 = NEON_scvtf(auVar41,4);
      auVar69._0_4_ = iVar18 + (int)_UNK_01adfb10;
      auVar69._4_4_ = iVar18 + iVar65;
      auVar69._8_4_ = iVar18 + (int)_UNK_01adfb18;
      auVar69._12_4_ = iVar18 + iVar66;
      auVar52 = NEON_ucvtf(auVar69,4);
      fVar78 = (auVar67._0_4_ * fVar27 + auVar52._0_4_ * fVar27) * 0.5;
      fVar82 = (auVar67._4_4_ * fVar27 + auVar52._4_4_ * fVar27) * 0.5;
      fVar83 = (auVar67._8_4_ * fVar27 + auVar52._8_4_ * fVar27) * 0.5;
      fVar84 = (auVar67._12_4_ * fVar27 + auVar52._12_4_ * fVar27) * 0.5;
      *(float *)(param_1 + 0x108) = auVar38._0_4_ * fVar22;
      *(float *)(param_1 + 0x10c) = fVar78;
      *(float *)(param_1 + 0x110) = auVar26._0_4_ * fVar22;
      *(float *)(param_1 + 0x114) = fVar78;
      *(float *)(param_1 + 0x118) = auVar38._4_4_ * fVar22;
      *(float *)(param_1 + 0x11c) = fVar82;
// WM - chat: discord.gg/sdkhDjTex
      *(float *)(param_1 + 0x120) = auVar26._4_4_ * fVar22;
      *(float *)(param_1 + 0x124) = fVar82;
      *(float *)(param_1 + 0x128) = auVar38._8_4_ * fVar22;
      *(float *)(param_1 + 300) = fVar83;
      *(float *)(param_1 + 0x130) = auVar26._8_4_ * fVar22;
      *(float *)(param_1 + 0x134) = fVar83;
      *(float *)(param_1 + 0x138) = auVar38._12_4_ * fVar22;
      *(float *)(param_1 + 0x13c) = fVar84;
      *(float *)(param_1 + 0x140) = auVar26._12_4_ * fVar22;
      *(float *)(param_1 + 0x144) = fVar84;
      auVar42._0_4_ = uVar13 + (int)_UNK_01adfb20;
      auVar42._4_4_ = uVar32 + (int)((ulong)_UNK_01adfb20 >> 0x20);
      auVar42._8_4_ = uVar33 + (int)_UNK_01adfb28;
      auVar42._12_4_ = uVar34 + (int)((ulong)_UNK_01adfb28 >> 0x20);
      auVar57._0_4_ = auVar42._0_4_ >> 0x1f;
      auVar57._4_4_ = auVar42._4_4_ >> 0x1f;
      auVar57._8_4_ = auVar42._8_4_ >> 0x1f;
      auVar57._12_4_ = auVar42._12_4_ >> 0x1f;
      auVar26 = NEON_shadd(auVar42,auVar57,4);
      auVar58._0_4_ = iVar19 + auVar26._0_4_;
      auVar58._4_4_ = iVar19 + auVar26._4_4_;
      auVar58._8_4_ = iVar19 + auVar26._8_4_;
      auVar58._12_4_ = iVar19 + auVar26._12_4_;
      auVar38 = NEON_scvtf(auVar58,4);
      auVar75._0_4_ = uVar9 + (int)_UNK_01adfb30;
      iVar65 = (int)((ulong)_UNK_01adfb30 >> 0x20);
      auVar75._4_4_ = uVar25 + iVar65;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      auVar75._8_4_ = uVar36 + (int)_UNK_01adfb38;
      iVar66 = (int)((ulong)_UNK_01adfb38 >> 0x20);
      auVar75._12_4_ = uVar37 + iVar66;
      auVar67 = NEON_ucvtf(auVar75,4);
      auVar43._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adc570;
      auVar43._4_4_ = auVar26._4_4_ + uVar21 + (int)((ulong)_UNK_01adc570 >> 0x20);
      auVar43._8_4_ = auVar26._8_4_ + uVar23 + (int)_UNK_01adc578;
      auVar43._12_4_ = auVar26._12_4_ + uVar24 + (int)((ulong)_UNK_01adc578 >> 0x20);
      auVar26 = NEON_scvtf(auVar43,4);
      auVar70._0_4_ = iVar18 + (int)_UNK_01adfb30;
      auVar70._4_4_ = iVar18 + iVar65;
      auVar70._8_4_ = iVar18 + (int)_UNK_01adfb38;
      auVar70._12_4_ = iVar18 + iVar66;
      auVar52 = NEON_ucvtf(auVar70,4);
      fVar78 = (auVar67._0_4_ * fVar27 + auVar52._0_4_ * fVar27) * 0.5;
      fVar82 = (auVar67._4_4_ * fVar27 + auVar52._4_4_ * fVar27) * 0.5;
      fVar83 = (auVar67._8_4_ * fVar27 + auVar52._8_4_ * fVar27) * 0.5;
      fVar84 = (auVar67._12_4_ * fVar27 + auVar52._12_4_ * fVar27) * 0.5;
      *(float *)(param_1 + 0x148) = auVar38._0_4_ * fVar22;
      *(float *)(param_1 + 0x14c) = fVar78;
      *(float *)(param_1 + 0x150) = auVar26._0_4_ * fVar22;
      *(float *)(param_1 + 0x154) = fVar78;
      *(float *)(param_1 + 0x158) = auVar38._4_4_ * fVar22;
      *(float *)(param_1 + 0x15c) = fVar82;
      *(float *)(param_1 + 0x160) = auVar26._4_4_ * fVar22;
      *(float *)(param_1 + 0x164) = fVar82;
      *(float *)(param_1 + 0x168) = auVar38._8_4_ * fVar22;
      *(float *)(param_1 + 0x16c) = fVar83;
      *(float *)(param_1 + 0x170) = auVar26._8_4_ * fVar22;
      *(float *)(param_1 + 0x174) = fVar83;
      *(float *)(param_1 + 0x178) = auVar38._12_4_ * fVar22;
      *(float *)(param_1 + 0x17c) = fVar84;
      *(float *)(param_1 + 0x180) = auVar26._12_4_ * fVar22;
      *(float *)(param_1 + 0x184) = fVar84;
      auVar44._0_4_ = uVar13 + (int)_UNK_01adfb40;
      auVar44._4_4_ = uVar32 + (int)((ulong)_UNK_01adfb40 >> 0x20);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      auVar44._8_4_ = uVar33 + (int)_UNK_01adfb48;
      auVar44._12_4_ = uVar34 + (int)((ulong)_UNK_01adfb48 >> 0x20);
      auVar59._0_4_ = auVar44._0_4_ >> 0x1f;
      auVar59._4_4_ = auVar44._4_4_ >> 0x1f;
      auVar59._8_4_ = auVar44._8_4_ >> 0x1f;
      auVar59._12_4_ = auVar44._12_4_ >> 0x1f;
      auVar26 = NEON_shadd(auVar44,auVar59,4);
      auVar60._0_4_ = iVar19 + auVar26._0_4_;
      auVar60._4_4_ = iVar19 + auVar26._4_4_;
      auVar60._8_4_ = iVar19 + auVar26._8_4_;
      auVar60._12_4_ = iVar19 + auVar26._12_4_;
      auVar38 = NEON_scvtf(auVar60,4);
      auVar76._0_4_ = uVar9 + (int)_UNK_01adfb50;
      iVar65 = (int)((ulong)_UNK_01adfb50 >> 0x20);
      auVar76._4_4_ = uVar25 + iVar65;
      auVar76._8_4_ = uVar36 + (int)_UNK_01adfb58;
      iVar66 = (int)((ulong)_UNK_01adfb58 >> 0x20);
      auVar76._12_4_ = uVar37 + iVar66;
      auVar67 = NEON_ucvtf(auVar76,4);
      auVar45._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adfb60;
      auVar45._4_4_ = auVar26._4_4_ + uVar21 + (int)((ulong)_UNK_01adfb60 >> 0x20);
      auVar45._8_4_ = auVar26._8_4_ + uVar23 + (int)_UNK_01adfb68;
      auVar45._12_4_ = auVar26._12_4_ + uVar24 + (int)((ulong)_UNK_01adfb68 >> 0x20);
      auVar26 = NEON_scvtf(auVar45,4);
      auVar71._0_4_ = iVar18 + (int)_UNK_01adfb50;
      auVar71._4_4_ = iVar18 + iVar65;
      auVar71._8_4_ = iVar18 + (int)_UNK_01adfb58;
      auVar71._12_4_ = iVar18 + iVar66;
      auVar52 = NEON_ucvtf(auVar71,4);
/* keep the notice, keep the source honest - github.com/pengussy */
      fVar78 = (auVar67._0_4_ * fVar27 + auVar52._0_4_ * fVar27) * 0.5;
      fVar82 = (auVar67._4_4_ * fVar27 + auVar52._4_4_ * fVar27) * 0.5;
      fVar83 = (auVar67._8_4_ * fVar27 + auVar52._8_4_ * fVar27) * 0.5;
      fVar84 = (auVar67._12_4_ * fVar27 + auVar52._12_4_ * fVar27) * 0.5;
      *(float *)(param_1 + 0x188) = auVar38._0_4_ * fVar22;
      *(float *)(param_1 + 0x18c) = fVar78;
      *(float *)(param_1 + 400) = auVar26._0_4_ * fVar22;
      *(float *)(param_1 + 0x194) = fVar78;
      *(float *)(param_1 + 0x198) = auVar38._4_4_ * fVar22;
      *(float *)(param_1 + 0x19c) = fVar82;
      *(float *)(param_1 + 0x1a0) = auVar26._4_4_ * fVar22;
      *(float *)(param_1 + 0x1a4) = fVar82;
      *(float *)(param_1 + 0x1a8) = auVar38._8_4_ * fVar22;
      *(float *)(param_1 + 0x1ac) = fVar83;
      *(float *)(param_1 + 0x1b0) = auVar26._8_4_ * fVar22;
      *(float *)(param_1 + 0x1b4) = fVar83;
      *(float *)(param_1 + 0x1b8) = auVar38._12_4_ * fVar22;
      *(float *)(param_1 + 0x1bc) = fVar84;
      *(float *)(param_1 + 0x1c0) = auVar26._12_4_ * fVar22;
      *(float *)(param_1 + 0x1c4) = fVar84;
      auVar46._0_4_ = uVar13 + (int)_UNK_01adfb70;
      auVar46._4_4_ = uVar32 + (int)((ulong)_UNK_01adfb70 >> 0x20);
      auVar46._8_4_ = uVar33 + (int)_UNK_01adfb78;
      auVar46._12_4_ = uVar34 + (int)((ulong)_UNK_01adfb78 >> 0x20);
      auVar61._0_4_ = auVar46._0_4_ >> 0x1f;
      auVar61._4_4_ = auVar46._4_4_ >> 0x1f;
      auVar61._8_4_ = auVar46._8_4_ >> 0x1f;
      auVar61._12_4_ = auVar46._12_4_ >> 0x1f;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      auVar26 = NEON_shadd(auVar46,auVar61,4);
      auVar62._0_4_ = iVar19 + auVar26._0_4_;
      auVar62._4_4_ = iVar19 + auVar26._4_4_;
      auVar62._8_4_ = iVar19 + auVar26._8_4_;
      auVar62._12_4_ = iVar19 + auVar26._12_4_;
      auVar38 = NEON_scvtf(auVar62,4);
      auVar77._0_4_ = uVar9 + (int)_UNK_01adfb80;
      iVar65 = (int)((ulong)_UNK_01adfb80 >> 0x20);
      auVar77._4_4_ = uVar25 + iVar65;
      auVar77._8_4_ = uVar36 + (int)_UNK_01adfb88;
      iVar66 = (int)((ulong)_UNK_01adfb88 >> 0x20);
      auVar77._12_4_ = uVar37 + iVar66;
      auVar67 = NEON_ucvtf(auVar77,4);
      auVar47._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adfb90;
      auVar47._4_4_ = auVar26._4_4_ + uVar21 + (int)((ulong)_UNK_01adfb90 >> 0x20);
      auVar47._8_4_ = auVar26._8_4_ + uVar23 + (int)_UNK_01adfb98;
      auVar47._12_4_ = auVar26._12_4_ + uVar24 + (int)((ulong)_UNK_01adfb98 >> 0x20);
      auVar26 = NEON_scvtf(auVar47,4);
      auVar72._0_4_ = iVar18 + (int)_UNK_01adfb80;
      auVar72._4_4_ = iVar18 + iVar65;
      auVar72._8_4_ = iVar18 + (int)_UNK_01adfb88;
      auVar72._12_4_ = iVar18 + iVar66;
      auVar52 = NEON_ucvtf(auVar72,4);
      fVar78 = (auVar67._0_4_ * fVar27 + auVar52._0_4_ * fVar27) * 0.5;
      fVar82 = (auVar67._4_4_ * fVar27 + auVar52._4_4_ * fVar27) * 0.5;
      fVar83 = (auVar67._8_4_ * fVar27 + auVar52._8_4_ * fVar27) * 0.5;
      fVar84 = (auVar67._12_4_ * fVar27 + auVar52._12_4_ * fVar27) * 0.5;
      *(float *)(param_1 + 0x1c8) = auVar38._0_4_ * fVar22;
      *(float *)(param_1 + 0x1cc) = fVar78;
      *(float *)(param_1 + 0x1d0) = auVar26._0_4_ * fVar22;
      *(float *)(param_1 + 0x1d4) = fVar78;
/* wm:more drops soon - github.com/pengussy */
      *(float *)(param_1 + 0x1d8) = auVar38._4_4_ * fVar22;
      *(float *)(param_1 + 0x1dc) = fVar82;
      *(float *)(param_1 + 0x1e0) = auVar26._4_4_ * fVar22;
      *(float *)(param_1 + 0x1e4) = fVar82;
      *(float *)(param_1 + 0x1e8) = auVar38._8_4_ * fVar22;
      *(float *)(param_1 + 0x1ec) = fVar83;
      *(float *)(param_1 + 0x1f0) = auVar26._8_4_ * fVar22;
      *(float *)(param_1 + 500) = fVar83;
      *(float *)(param_1 + 0x1f8) = auVar38._12_4_ * fVar22;
      *(float *)(param_1 + 0x1fc) = fVar84;
      *(float *)(param_1 + 0x200) = auVar26._12_4_ * fVar22;
      *(float *)(param_1 + 0x204) = fVar84;
      auVar48._0_4_ = uVar13 + (int)_UNK_01adfba0;
      auVar48._4_4_ = uVar32 + (int)((ulong)_UNK_01adfba0 >> 0x20);
      auVar48._8_4_ = uVar33 + (int)_UNK_01adfba8;
      auVar48._12_4_ = uVar34 + (int)((ulong)_UNK_01adfba8 >> 0x20);
      auVar63._0_4_ = auVar48._0_4_ >> 0x1f;
      auVar63._4_4_ = auVar48._4_4_ >> 0x1f;
      auVar63._8_4_ = auVar48._8_4_ >> 0x1f;
      auVar63._12_4_ = auVar48._12_4_ >> 0x1f;
      auVar26 = NEON_shadd(auVar48,auVar63,4);
      auVar49._0_4_ = iVar19 + auVar26._0_4_;
      auVar49._4_4_ = iVar19 + auVar26._4_4_;
      auVar49._8_4_ = iVar19 + auVar26._8_4_;
/* unlicensed copy if this notice is missing - github.com/pengussy */
      auVar49._12_4_ = iVar19 + auVar26._12_4_;
      auVar50 = NEON_scvtf(auVar49,4);
      auVar64._0_4_ = uVar9 + (int)_UNK_01adfbb0;
      iVar65 = (int)((ulong)_UNK_01adfbb0 >> 0x20);
      auVar64._4_4_ = uVar25 + iVar65;
      auVar64._8_4_ = uVar36 + (int)_UNK_01adfbb8;
      iVar66 = (int)((ulong)_UNK_01adfbb8 >> 0x20);
      auVar64._12_4_ = uVar37 + iVar66;
      auVar38 = NEON_ucvtf(auVar64,4);
      auVar79._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adfbc0;
      auVar79._4_4_ = auVar26._4_4_ + uVar21 + (int)((ulong)_UNK_01adfbc0 >> 0x20);
      auVar79._8_4_ = auVar26._8_4_ + uVar23 + (int)_UNK_01adfbc8;
      auVar79._12_4_ = auVar26._12_4_ + uVar24 + (int)((ulong)_UNK_01adfbc8 >> 0x20);
      auVar80 = NEON_scvtf(auVar79,4);
      auVar85._0_4_ = iVar18 + (int)_UNK_01adfbb0;
      auVar85._4_4_ = iVar18 + iVar65;
      auVar85._8_4_ = iVar18 + (int)_UNK_01adfbb8;
      auVar85._12_4_ = iVar18 + iVar66;
      auVar26 = NEON_ucvtf(auVar85,4);
/*  do not claim this as your own  */
      fVar78 = (auVar38._0_4_ * fVar27 + auVar26._0_4_ * fVar27) * 0.5;
      fVar82 = (auVar38._4_4_ * fVar27 + auVar26._4_4_ * fVar27) * 0.5;
      fVar83 = (auVar38._8_4_ * fVar27 + auVar26._8_4_ * fVar27) * 0.5;
      fVar84 = (auVar38._12_4_ * fVar27 + auVar26._12_4_ * fVar27) * 0.5;
      auVar31._0_4_ = uVar13 + (int)_UNK_01adfbd0;
      auVar31._4_4_ = (uint)uVar7 + (int)((ulong)_UNK_01adfbd0 >> 0x20);
      auVar31._8_4_ = (uint)uVar7 + (int)_UNK_01adfbd8;
      auVar31._12_4_ = (uint)uVar7 + (int)((ulong)_UNK_01adfbd8 >> 0x20);
      auVar81._0_4_ = auVar31._0_4_ >> 0x1f;
      auVar81._4_4_ = auVar31._4_4_ >> 0x1f;
      auVar81._8_4_ = auVar31._8_4_ >> 0x1f;
      auVar81._12_4_ = auVar31._12_4_ >> 0x1f;
      auVar26 = NEON_shadd(auVar31,auVar81,4);
      auVar30._0_4_ = iVar19 + auVar26._0_4_;
      auVar30._4_4_ = iVar19 + auVar26._4_4_;
      auVar30._8_4_ = iVar19 + auVar26._8_4_;
      auVar30._12_4_ = iVar19 + auVar26._12_4_;
      auVar52 = NEON_scvtf(auVar30,4);
      auVar35._0_4_ = uVar9 + (int)_UNK_01adfbe0;
      iVar65 = (int)((ulong)_UNK_01adfbe0 >> 0x20);
      auVar35._4_4_ = (uint)uVar5 + iVar65;
      auVar35._8_4_ = (uint)uVar5 + (int)_UNK_01adfbe8;
      iVar66 = (int)((ulong)_UNK_01adfbe8 >> 0x20);
/* WM - stripping the watermark breaks the license */
      auVar35._12_4_ = (uint)uVar5 + iVar66;
      auVar67 = NEON_ucvtf(auVar35,4);
      auVar29._0_4_ = auVar26._0_4_ + uVar11 + (int)_UNK_01adfbf0;
      auVar29._4_4_ = auVar26._4_4_ + (uint)uVar6 + (int)((ulong)_UNK_01adfbf0 >> 0x20);
      auVar29._8_4_ = auVar26._8_4_ + (uint)uVar6 + (int)_UNK_01adfbf8;
      auVar29._12_4_ = auVar26._12_4_ + (uint)uVar6 + (int)((ulong)_UNK_01adfbf8 >> 0x20);
      auVar38 = NEON_scvtf(auVar29,4);
      auVar28._0_4_ = iVar18 + (int)_UNK_01adfbe0;
      auVar28._4_4_ = iVar18 + iVar65;
      auVar28._8_4_ = iVar18 + (int)_UNK_01adfbe8;
      auVar28._12_4_ = iVar18 + iVar66;
      auVar26 = NEON_ucvtf(auVar28,4);
      fVar86 = (auVar67._0_4_ * fVar27 + auVar26._0_4_ * fVar27) * 0.5;
      fVar87 = (auVar67._4_4_ * fVar27 + auVar26._4_4_ * fVar27) * 0.5;
      fVar88 = (auVar67._8_4_ * fVar27 + auVar26._8_4_ * fVar27) * 0.5;
      fVar89 = (auVar67._12_4_ * fVar27 + auVar26._12_4_ * fVar27) * 0.5;
      iVar18 = (int)(uVar7 - 0x20) / 2;
      fVar27 = fVar27 * (float)(uVar5 + 0x20) + fVar27 * (float)(uVar5 + 0x21);
      *(float *)(param_1 + 0x208) = auVar50._0_4_ * fVar22;
      *(float *)(param_1 + 0x20c) = fVar78;
      *(float *)(param_1 + 0x210) = auVar80._0_4_ * fVar22;
      *(float *)(param_1 + 0x214) = fVar78;
      *(float *)(param_1 + 0x218) = auVar50._4_4_ * fVar22;
      *(float *)(param_1 + 0x21c) = fVar82;
      *(float *)(param_1 + 0x220) = auVar80._4_4_ * fVar22;
      *(float *)(param_1 + 0x224) = fVar82;
      *(float *)(param_1 + 0x228) = auVar50._8_4_ * fVar22;
      *(float *)(param_1 + 0x22c) = fVar83;
      *(float *)(param_1 + 0x230) = auVar80._8_4_ * fVar22;
      *(float *)(param_1 + 0x234) = fVar83;
      *(float *)(param_1 + 0x238) = auVar50._12_4_ * fVar22;
      *(float *)(param_1 + 0x23c) = fVar84;
      *(float *)(param_1 + 0x240) = auVar80._12_4_ * fVar22;
      *(float *)(param_1 + 0x244) = fVar84;
      *(ulong *)(param_1 + 0x290) =
           CONCAT44(fVar27 * 0.5,(float)(int)(iVar18 + (uint)uVar6 + 0x21) * fVar22);
      *(ulong *)(param_1 + 0x288) = CONCAT44(fVar27 * 0.5,(float)(iVar19 + iVar18) * fVar22);
      *(float *)(param_1 + 0x248) = auVar52._0_4_ * fVar22;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      *(float *)(param_1 + 0x24c) = fVar86;
      *(float *)(param_1 + 0x250) = auVar38._0_4_ * fVar22;
      *(float *)(param_1 + 0x254) = fVar86;
      *(float *)(param_1 + 600) = auVar52._4_4_ * fVar22;
      *(float *)(param_1 + 0x25c) = fVar87;
      *(float *)(param_1 + 0x260) = auVar38._4_4_ * fVar22;
      *(float *)(param_1 + 0x264) = fVar87;
      *(float *)(param_1 + 0x268) = auVar52._8_4_ * fVar22;
      *(float *)(param_1 + 0x26c) = fVar88;
      *(float *)(param_1 + 0x270) = auVar38._8_4_ * fVar22;
      *(float *)(param_1 + 0x274) = fVar88;
      *(float *)(param_1 + 0x278) = auVar52._12_4_ * fVar22;
      *(float *)(param_1 + 0x27c) = fVar89;
      *(float *)(param_1 + 0x280) = auVar38._12_4_ * fVar22;
      *(float *)(param_1 + 0x284) = fVar89;
      return;
    }
  }
  uVar9 = FUN_00327cac(param_1,0x22,0x21,0);
  if (uVar9 == 0xffffffff) {
    uVar11 = 0;
    uVar13 = 0;
    uVar20 = 0;
    goto LAB_0032aa94;
  }
  uVar21 = uVar9 & 0x7ffff;
  lVar10 = *(long *)(param_1 + 0x2b0);
  if (lVar10 == 0) {
    FUN_00326d54(param_1);
    lVar10 = *(long *)(param_1 + 0x2b0);
    if ((int)uVar21 < *(int *)(lVar10 + 0x70)) goto LAB_0032a9fc;
LAB_0032aa58:
    uVar23 = 0;
    uVar11 = 0;
    uVar20 = 0;
    uVar24 = 0;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar13 = 0;
    bVar4 = param_1[0x51];
  }
  else {
    if (*(int *)(lVar10 + 0x70) <= (int)uVar21) goto LAB_0032aa58;
LAB_0032a9fc:
    uVar20 = 0;
    uVar11 = *(uint *)(*(long *)(lVar10 + 0x78) + (ulong)uVar21 * 4);
    if ((uVar11 >> 0x1e & 1) == 0) {
      uVar24 = 0;
      uVar13 = 0;
      uVar23 = 0;
      uVar11 = 0;
      bVar4 = param_1[0x51];
    }
    else {
      if ((((uVar11 ^ uVar9) & 0x3ff00000) != 0) || (*(long *)(lVar10 + 0x68) == 0))
      goto LAB_0032aa58;
      puVar2 = (ushort *)(*(long *)(lVar10 + 0x68) + ((long)((ulong)uVar11 << 0x2c) >> 0x2c) * 8);
      uVar23 = (uint)*puVar2;
      uVar11 = (uint)*puVar2;
      uVar24 = (uint)puVar2[1];
      uVar13 = (uint)puVar2[1];
      uVar20 = (ulong)puVar2[2];
      bVar4 = param_1[0x51];
    }
  }
  if (bVar4 == 1) {
    puVar3 = (undefined2 *)
             (*(long *)(lVar10 + 0x68) +
             ((long)((ulong)*(uint *)(*(long *)(lVar10 + 0x78) + (ulong)uVar21 * 4) << 0x2c) >> 0x2c
             ) * 8);
    func_0x003266cc(*(undefined8 *)(param_1 + 0x38),*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    param_1[0x52] = 0;
    uVar11 = uVar23;
    uVar13 = uVar24;
  }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
LAB_0032aa94:
  *(uint *)(lVar16 + 0xf0) = uVar9;
  uVar8 = uVar20 >> 1;
  uVar21 = (uint)uVar20;
  iVar18 = (int)uVar8;
  uVar9 = uVar21 - iVar18;
  if (*(int *)(lVar14 + 0x18) == 1) {
    lVar16 = *(long *)(lVar14 + 0x28) +
             (long)(int)((uVar11 + *(int *)(lVar14 + 0x1c) * uVar13) * *(int *)(lVar14 + 0x24));
    if (1 < uVar21) {
      _bzero(lVar16,(ulong)(iVar18 - 1) + 1);
    }
    if (0 < (int)uVar9) {
      _bzero(lVar16 + uVar8,(ulong)uVar9);
    }
  }
  else if (*(int *)(lVar14 + 0x18) == 0) {
    lVar16 = *(long *)(lVar14 + 0x28) +
             (long)(int)((uVar11 + *(int *)(lVar14 + 0x1c) * uVar13) * *(int *)(lVar14 + 0x24));
    if (1 < uVar21) {
      _memset_pattern16(lVar16,&UNK_01adfcc0,(ulong)(iVar18 - 1) * 4 + 4);
    }
    if (0 < (int)uVar9) {
      _memset_pattern16(lVar16 + uVar8 * 4,&UNK_01adfcc0,(ulong)uVar9 << 2);
    }
  }
  lVar10 = 0;
  fVar22 = *(float *)(param_1 + 0x58) * (float)uVar13 +
           *(float *)(param_1 + 0x58) * (float)(uVar13 + 1);
  *(ulong *)(param_1 + 0x90) =
       CONCAT44(fVar22 * 0.5,*(float *)(param_1 + 0x54) * (float)(uVar11 + iVar18 + 1));
  *(ulong *)(param_1 + 0x88) =
       CONCAT44(fVar22 * 0.5,*(float *)(param_1 + 0x54) * (float)(int)(iVar18 + (uVar11 - 1)));
  lVar16 = 1;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  lVar15 = 4;
  uVar9 = uVar13;
  do {
    uVar9 = uVar9 + 1;
    uVar20 = uVar20 - 1;
    iVar18 = (int)uVar20 / 2;
    uVar8 = uVar20 + (uint)-iVar18;
    iVar19 = (int)lVar10;
    if (*(int *)(lVar14 + 0x18) == 0) {
      lVar12 = *(long *)(lVar14 + 0x28);
      iVar65 = *(int *)(lVar14 + 0x1c);
      uVar17 = (ulong)uVar13 + lVar10 + 1;
      iVar66 = *(int *)(lVar14 + 0x24);
      lVar1 = lVar12 + (int)((uVar11 + iVar65 * (int)uVar17) * iVar66);
      if (1 < (long)uVar20) {
        _memset_pattern16(lVar1,&UNK_01adfcc0,(ulong)(iVar18 - 1) * 4 + 4);
      }
      _memset(lVar1 + (long)iVar18 * 4,0xff,lVar15);
      if (0 < (int)uVar8) {
        _memset_pattern16(lVar12 + lVar15 +
                          (long)iVar18 * 4 + (long)(int)(iVar66 * (uVar11 + iVar65 * uVar9)),
                          &UNK_01adfcc0,uVar8 * 4 & 0x3fffffffc);
      }
    }
    else {
      uVar17 = lVar16 + (ulong)uVar13;
      if (*(int *)(lVar14 + 0x18) == 1) {
        lVar12 = *(long *)(lVar14 + 0x28);
        iVar65 = *(int *)(lVar14 + 0x1c);
        iVar66 = *(int *)(lVar14 + 0x24);
        lVar1 = lVar12 + (int)((iVar65 + iVar65 * (uVar13 + iVar19) + uVar11) * iVar66);
        if (1 < (long)uVar20) {
          _bzero(lVar1,(ulong)(iVar18 - 1) + 1);
        }
/* WM - no support for modified copies */
        _memset(lVar1 + iVar18,0xff,lVar10 + 1);
        if (0 < (int)uVar8) {
          _bzero(lVar12 + lVar10 + (long)iVar18 + (long)(int)(iVar66 * (uVar11 + iVar65 * uVar9)) +
                 1,uVar8 & 0xffffffff);
        }
      }
    }
    fVar27 = *(float *)(param_1 + 0x54);
    fVar22 = *(float *)(param_1 + 0x58) * (float)(uVar17 & 0xffffffff) +
             *(float *)(param_1 + 0x58) * (float)(uVar13 + iVar19 + 2);
    *(ulong *)(param_1 + lVar10 * 0x10 + 0x98 + 8) =
         CONCAT44(fVar22 * 0.5,fVar27 * (float)(int)(uVar11 + 2 + iVar19 + iVar18));
    *(ulong *)(param_1 + lVar10 * 0x10 + 0x98) =
         CONCAT44(fVar22 * 0.5,fVar27 * (float)(int)(iVar18 + (uVar11 - 1)));
    lVar16 = lVar16 + 1;
    lVar10 = lVar10 + 1;
    lVar15 = lVar15 + 4;
  } while (lVar10 != 0x20);
  return;
}

