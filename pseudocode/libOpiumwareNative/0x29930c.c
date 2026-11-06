/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x29930c:529b170c5b
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_0029930c(char *param_1,ulong param_2,byte *param_3,ulong param_4,int param_5,long param_6,
                  ulong param_7)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  byte *pbVar15;
  char *pcVar31;
  char *pcVar30;
  char *pcVar29;
  char *pcVar28;
  char *pcVar27;
  char *pcVar26;
  char *pcVar25;
  char *pcVar24;
  char *pcVar23;
  char *pcVar22;
  char *pcVar21;
  char *pcVar20;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  char *pcVar19;
  char *pcVar18;
  char *pcVar17;
  char *pcVar16;
  uint uVar32;
  undefined8 uVar33;
  uint uVar34;
  ulong uVar35;
  long lVar36;
  undefined1 *puVar37;
  long lVar38;
  ulong uVar39;
  char *pcVar40;
  ulong uVar41;
  ulong uVar42;
  ulong uVar43;
  undefined8 *puVar44;
  undefined4 *puVar45;
  ulong uVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar57;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar62;
  char cVar63;
  int iVar61;
  undefined8 uVar56;
  char cVar64;
// WM - chat: discord.gg/sdkhDjTex
  int iVar65;
  int iVar67;
  undefined8 uVar66;
  int iVar68;
  char cVar69;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar76;
  char cVar77;
  int iVar75;
  undefined8 uVar70;
  char cVar78;
  char cVar79;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar86;
  char cVar87;
  int iVar85;
  undefined8 uVar80;
  char cVar88;
  char cVar89;
/* wm:proprietary - see LICENSE - do not sell */
  char cVar91;
  char cVar92;
  char cVar93;
  char cVar94;
  char cVar96;
  char cVar97;
  int iVar95;
  undefined8 uVar90;
  char cVar98;
  char cVar99;
  char cVar101;
  char cVar102;
  char cVar103;
  char cVar104;
  char cVar106;
  char cVar107;
  int iVar105;
  undefined8 uVar100;
  char cVar108;
  char cVar109;
  char cVar111;
  char cVar112;
  char cVar113;
  char cVar114;
  char cVar116;
  char cVar117;
  int iVar115;
  undefined8 uVar110;
  char cVar118;
  char cVar119;
  char cVar121;
  char cVar122;
  char cVar123;
/*  found on a paste site? it was re-uploaded illegally  */
  char cVar124;
  char cVar126;
  char cVar127;
  int iVar125;
  undefined8 uVar120;
  char cVar128;
  char cVar129;
  char cVar130;
  char cVar131;
  char cVar132;
  char cVar133;
  char cVar134;
  char cVar135;
  char cVar136;
  char cVar137;
  char cVar138;
  char cVar139;
  char cVar140;
  char cVar141;
  char cVar142;
  char cVar143;
  char cVar144;
  char cVar145;
  char cVar146;
  char cVar147;
  char cVar148;
  char cVar149;
  char cVar150;
  char cVar151;
  char cVar152;
  undefined1 uVar153;
  char cVar154;
  undefined1 uVar155;
  char cVar156;
  undefined1 uVar157;
  char cVar158;
  undefined1 uVar159;
  char cVar160;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  undefined1 uVar161;
  char cVar162;
  undefined1 uVar163;
  char cVar164;
  undefined1 uVar165;
  char cVar166;
  undefined1 uVar167;
  char cVar168;
  char cVar169;
  char cVar170;
  char cVar171;
  char cVar172;
  char cVar173;
  char cVar174;
  char cVar175;
  char cVar176;
  char cVar177;
  char cVar178;
  char cVar179;
  char cVar180;
  char cVar181;
  char cVar182;
  char cVar183;
  char cVar184;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined4 uStack_64;
  
  uVar35 = (ulong)(uint)-(int)param_6 & 3;
/*  keep the notice, keep the source honest  */
  lVar1 = param_6 + uVar35;
  uVar46 = 0;
  if (uVar35 <= param_7) {
    uVar46 = param_7 - uVar35;
  }
  lVar2 = 0;
  if (uVar35 <= param_7) {
    lVar2 = lVar1;
  }
  if (uVar46 < 0x2ec) {
    return 0xffffffffffffffff;
  }
  uVar34 = (uint)param_4;
  if (0xff < uVar34) {
    return 0xffffffffffffffd2;
  }
  *(undefined1 *)(lVar2 + 0x1e0) = 0;
  uVar33 = _UNK_01adc5b0;
  uVar32 = param_5 + 1;
  if (1 < uVar32) {
/* wm:keep the notice, keep the source honest */
    if (uVar32 < 5) {
      uVar41 = 1;
    }
    else {
      uVar46 = (ulong)uVar32 - 1;
      if (uVar32 < 0x21) {
        uVar42 = 0;
        uVar41 = 1;
      }
      else {
        uVar42 = uVar46 & 0xffffffffffffffe0;
        uVar41 = uVar42 | 1;
        uVar153 = (undefined1)_UNK_01adc5b8;
        uVar155 = (undefined1)((ulong)_UNK_01adc5b8 >> 8);
        uVar157 = (undefined1)((ulong)_UNK_01adc5b8 >> 0x10);
        uVar159 = (undefined1)((ulong)_UNK_01adc5b8 >> 0x18);
        uVar161 = (undefined1)((ulong)_UNK_01adc5b8 >> 0x20);
        uVar163 = (undefined1)((ulong)_UNK_01adc5b8 >> 0x28);
        uVar165 = (undefined1)((ulong)_UNK_01adc5b8 >> 0x30);
        uVar167 = (undefined1)((ulong)_UNK_01adc5b8 >> 0x38);
        puVar44 = (undefined8 *)(lVar2 + 0x1e1);
        uVar39 = uVar42;
        uVar56 = _UNK_01adc570;
        uVar66 = _UNK_01adc578;
        uVar70 = _UNK_01adc580;
        uVar80 = _UNK_01adc588;
        uVar90 = _UNK_01adc590;
        uVar100 = _UNK_01adc598;
        uVar110 = _UNK_01adc5a0;
        uVar120 = _UNK_01adc5a8;
        do {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          auVar185._0_4_ = uVar32 - (int)uVar110;
          iVar115 = (int)((ulong)uVar110 >> 0x20);
          auVar185._4_4_ = uVar32 - iVar115;
          auVar185._8_4_ = uVar32 - (int)uVar120;
          iVar125 = (int)((ulong)uVar120 >> 0x20);
          auVar185._12_4_ = uVar32 - iVar125;
          auVar187._0_4_ = uVar32 - (int)uVar90;
          iVar95 = (int)((ulong)uVar90 >> 0x20);
          auVar187._4_4_ = uVar32 - iVar95;
          auVar187._8_4_ = uVar32 - (int)uVar100;
          iVar105 = (int)((ulong)uVar100 >> 0x20);
          auVar187._12_4_ = uVar32 - iVar105;
          iVar68 = uVar32 - (int)uVar70;
          iVar75 = (int)((ulong)uVar70 >> 0x20);
          iVar65 = uVar32 - iVar75;
          iVar4 = uVar32 - (int)uVar80;
          iVar85 = (int)((ulong)uVar80 >> 0x20);
          iVar5 = uVar32 - iVar85;
          iVar7 = uVar32 - (int)uVar56;
          iVar61 = (int)((ulong)uVar56 >> 0x20);
          iVar8 = uVar32 - iVar61;
          iVar9 = uVar32 - (int)uVar66;
          iVar67 = (int)((ulong)uVar66 >> 0x20);
          iVar10 = uVar32 - iVar67;
          auVar186[8] = uVar153;
          auVar186._0_8_ = uVar33;
          auVar186[9] = uVar155;
          auVar186[10] = uVar157;
          auVar186[0xb] = uVar159;
          auVar186[0xc] = uVar161;
          auVar186[0xd] = uVar163;
          auVar186[0xe] = uVar165;
          auVar186[0xf] = uVar167;
          auVar3[4] = (char)iVar65;
          auVar3._0_4_ = iVar68;
          auVar3[5] = (char)((uint)iVar65 >> 8);
          auVar3[6] = (char)((uint)iVar65 >> 0x10);
          auVar3[7] = (char)((uint)iVar65 >> 0x18);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
          auVar3[8] = (char)iVar4;
          auVar3[9] = (char)((uint)iVar4 >> 8);
          auVar3[10] = (char)((uint)iVar4 >> 0x10);
          auVar3[0xb] = (char)((uint)iVar4 >> 0x18);
          auVar3[0xc] = (char)iVar5;
          auVar3[0xd] = (char)((uint)iVar5 >> 8);
          auVar3[0xe] = (char)((uint)iVar5 >> 0x10);
          auVar3[0xf] = (char)((uint)iVar5 >> 0x18);
          auVar6[4] = (char)iVar8;
          auVar6._0_4_ = iVar7;
          auVar6[5] = (char)((uint)iVar8 >> 8);
          auVar6[6] = (char)((uint)iVar8 >> 0x10);
          auVar6[7] = (char)((uint)iVar8 >> 0x18);
          auVar6[8] = (char)iVar9;
          auVar6[9] = (char)((uint)iVar9 >> 8);
          auVar6[10] = (char)((uint)iVar9 >> 0x10);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          auVar6[0xb] = (char)((uint)iVar9 >> 0x18);
          auVar6[0xc] = (char)iVar10;
          auVar6[0xd] = (char)((uint)iVar10 >> 8);
          auVar6[0xe] = (char)((uint)iVar10 >> 0x10);
          auVar6[0xf] = (char)((uint)iVar10 >> 0x18);
          auVar186 = a64_TBL(ZEXT816(0),auVar185,auVar187,auVar3,auVar6,auVar186);
          auVar188[8] = uVar153;
          auVar188._0_8_ = uVar33;
          auVar188[9] = uVar155;
          auVar188[10] = uVar157;
          auVar188[0xb] = uVar159;
          auVar188[0xc] = uVar161;
          auVar188[0xd] = uVar163;
          auVar188[0xe] = uVar165;
          auVar188[0xf] = uVar167;
          auVar11._4_4_ = auVar185._4_4_ + -0x10;
          auVar11._0_4_ = auVar185._0_4_ + -0x10;
          auVar11._8_4_ = auVar185._8_4_ + -0x10;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          auVar11._12_4_ = auVar185._12_4_ + -0x10;
          auVar12._4_4_ = auVar187._4_4_ + -0x10;
          auVar12._0_4_ = auVar187._0_4_ + -0x10;
          auVar12._8_4_ = auVar187._8_4_ + -0x10;
          auVar12._12_4_ = auVar187._12_4_ + -0x10;
          auVar13._4_4_ = iVar65 + -0x10;
          auVar13._0_4_ = iVar68 + -0x10;
          auVar13._8_4_ = iVar4 + -0x10;
          auVar13._12_4_ = iVar5 + -0x10;
          auVar14._4_4_ = iVar8 + -0x10;
          auVar14._0_4_ = iVar7 + -0x10;
          auVar14._8_4_ = iVar9 + -0x10;
          auVar14._12_4_ = iVar10 + -0x10;
          auVar188 = a64_TBL(ZEXT816(0),auVar11,auVar12,auVar13,auVar14,auVar188);
          puVar44[1] = auVar186._8_8_;
          *puVar44 = auVar186._0_8_;
          puVar44[3] = auVar188._8_8_;
          puVar44[2] = auVar188._0_8_;
          uVar110 = CONCAT44(iVar115 + 0x20,(int)uVar110 + 0x20);
          uVar120 = CONCAT44(iVar125 + 0x20,(int)uVar120 + 0x20);
          uVar90 = CONCAT44(iVar95 + 0x20,(int)uVar90 + 0x20);
          uVar100 = CONCAT44(iVar105 + 0x20,(int)uVar100 + 0x20);
          uVar70 = CONCAT44(iVar75 + 0x20,(int)uVar70 + 0x20);
          uVar80 = CONCAT44(iVar85 + 0x20,(int)uVar80 + 0x20);
          uVar56 = CONCAT44(iVar61 + 0x20,(int)uVar56 + 0x20);
          uVar66 = CONCAT44(iVar67 + 0x20,(int)uVar66 + 0x20);
          uVar39 = uVar39 - 0x20;
          puVar44 = puVar44 + 4;
        } while (uVar39 != 0);
        if (uVar46 == uVar42) goto LAB_00299498;
        if ((uVar46 & 0x1c) == 0) goto LAB_00299480;
      }
      uVar39 = uVar46 & 0xfffffffffffffffc;
      iVar68 = (int)uVar41;
      uVar41 = uVar39 | 1;
      uVar33 = CONCAT44(iVar68 + (int)((ulong)_UNK_01adc5c0 >> 0x20),iVar68 + (int)_UNK_01adc5c0);
      iVar65 = iVar68 + (int)_UNK_01adc5c8;
/* wm:if you paid for this, you were scammed */
      iVar68 = iVar68 + (int)((ulong)_UNK_01adc5c8 >> 0x20);
      puVar45 = (undefined4 *)(uVar42 + lVar2 + 0x1e1);
      lVar38 = uVar42 - uVar39;
      do {
        cVar47 = (char)uVar32;
        *puVar45 = CONCAT13(cVar47 - (char)iVar68,
                            CONCAT12(cVar47 - (char)iVar65,
                                     CONCAT11(cVar47 - (char)((ulong)uVar33 >> 0x20),
                                              cVar47 - (char)uVar33)));
        puVar45 = puVar45 + 1;
        uVar33 = CONCAT44((int)((ulong)uVar33 >> 0x20) + 4,(int)uVar33 + 4);
        iVar65 = iVar65 + 4;
        iVar68 = iVar68 + 4;
        lVar38 = lVar38 + 4;
      } while (lVar38 != 0);
      if (uVar46 == uVar39) goto LAB_00299498;
    }
LAB_00299480:
    lVar38 = uVar32 - uVar41;
    puVar37 = (undefined1 *)(uVar41 + lVar2 + 0x1e0);
    do {
      *puVar37 = (char)lVar38;
      lVar38 = lVar38 + -1;
      puVar37 = puVar37 + 1;
    } while (lVar38 != 0);
  }
LAB_00299498:
  if (uVar34 != 0) {
    lVar38 = lVar2 + 0x1e0;
    if (uVar34 == 1) {
      lVar36 = 0;
    }
    else {
      lVar36 = 0;
/*  if you paid for this, you were scammed  */
      puVar37 = (undefined1 *)(uVar35 + param_6 + 0x1ee);
      pbVar15 = param_3;
      do {
        puVar37[-1] = *(undefined1 *)(lVar38 + (ulong)pbVar15[8]);
        *puVar37 = *(undefined1 *)(lVar38 + (ulong)pbVar15[0x10]);
        lVar36 = lVar36 + -2;
        puVar37 = puVar37 + 2;
        pbVar15 = pbVar15 + 0x10;
      } while (-lVar36 != (param_4 & 0xfe));
      lVar36 = -lVar36;
    }
    if ((param_4 & 1) != 0) {
      *(undefined1 *)(lVar1 + 0x1ed + lVar36) =
           *(undefined1 *)(lVar38 + (ulong)param_3[lVar36 * 8 + 8]);
    }
  }
  if (param_2 == 0) {
    return 0xffffffffffffffba;
  }
  uStack_64 = 0xc;
// WM - reversing this took months of machine time
  if ((-(int)lVar2 & 3U) != 0) {
    return 0xffffffffffffffff;
  }
  pcVar40 = param_1 + 1;
  pcVar31 = (char *)(lVar2 + 0x1ed);
  uVar46 = param_4 & 0xffffffff;
  if (1 < uVar34) {
    lVar38 = lVar2 + ((ulong)(uint)-(int)lVar2 & 3);
    uVar32 = func_0x002989e8(lVar38 + 400,&uStack_64,pcVar31,uVar46);
    if ((uVar34 != uVar32) && (uVar32 != 1)) {
      uVar33 = func_0x002980a4(6,uVar46,uStack_64);
      uVar35 = func_0x0029810c(lVar38 + 0x1c4,uVar33,lVar38 + 400,uVar46,uStack_64,0);
      if (0xffffffffffffff88 < uVar35) {
        return uVar35;
      }
      uVar35 = func_0x00297dd0(pcVar40,param_2 - 1,lVar38 + 0x1c4,uStack_64,uVar33);
      if (0xffffffffffffff88 < uVar35) {
        return uVar35;
/* found on a paste site? it was re-uploaded illegally */
      }
      uVar39 = func_0x002979e8(lVar38,lVar38 + 0x1c4,uStack_64,uVar33,lVar38 + 0xec,0xa4);
      if (0xffffffffffffff88 < uVar39) {
        return uVar39;
      }
      uVar39 = func_0x002985cc(pcVar40 + uVar35,(param_2 - 1) - uVar35,pcVar31,uVar46,lVar38);
      if (0xffffffffffffff88 < uVar39) {
        return uVar39;
      }
      uVar41 = 0;
      if (uVar39 != 0) {
        uVar41 = uVar39 + uVar35;
      }
      if (0xffffffffffffff88 < uVar41) {
        return uVar39 + uVar35;
      }
      if ((1 < uVar41) && (uVar41 < (param_4 >> 1 & 0x7fffffff))) {
        *param_1 = (char)uVar41;
        return uVar41 + 1;
      }
    }
  }
  if (0x80 < uVar34) {
    return 0xffffffffffffffff;
  }
  uVar35 = (ulong)((uVar34 + 1 >> 1) + 1);
  if (param_2 < uVar35) {
    return 0xffffffffffffffba;
  }
  *param_1 = (char)param_4 + '\x7f';
  pcVar31[uVar46] = '\0';
  if (uVar34 == 0) {
    return 1;
  }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  if ((uVar34 < 0xf) ||
     ((uVar39 = uVar46 - 1 >> 1,
      pcVar40 < (char *)(lVar2 + (uVar46 - 1 & 0xfffffffffffffffe) + 0x1ef) &&
      (pcVar31 < param_1 + uVar39 + 2)))) {
    uVar41 = 0;
  }
  else {
    uVar39 = uVar39 + 1;
    if (uVar34 < 0x7f) {
      uVar42 = 0;
    }
    else {
      cVar47 = *pcVar31;
      cVar55 = *(char *)(lVar2 + 0x1ee);
      cVar48 = *(char *)(lVar2 + 0x1ef);
      cVar57 = *(char *)(lVar2 + 0x1f0);
      cVar49 = *(char *)(lVar2 + 0x1f1);
      cVar58 = *(char *)(lVar2 + 0x1f2);
      cVar50 = *(char *)(lVar2 + 499);
      cVar59 = *(char *)(lVar2 + 500);
      cVar51 = *(char *)(lVar2 + 0x1f5);
      cVar60 = *(char *)(lVar2 + 0x1f6);
      cVar52 = *(char *)(lVar2 + 0x1f7);
      cVar62 = *(char *)(lVar2 + 0x1f8);
      cVar53 = *(char *)(lVar2 + 0x1f9);
      cVar63 = *(char *)(lVar2 + 0x1fa);
      cVar54 = *(char *)(lVar2 + 0x1fb);
      cVar64 = *(char *)(lVar2 + 0x1fc);
      cVar69 = *(char *)(lVar1 + 0x20d);
      cVar89 = *(char *)(lVar1 + 0x20e);
      cVar71 = *(char *)(lVar1 + 0x20f);
      cVar91 = *(char *)(lVar1 + 0x210);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      cVar72 = *(char *)(lVar1 + 0x211);
      cVar92 = *(char *)(lVar1 + 0x212);
      cVar73 = *(char *)(lVar1 + 0x213);
      cVar93 = *(char *)(lVar1 + 0x214);
      cVar74 = *(char *)(lVar1 + 0x215);
      cVar94 = *(char *)(lVar1 + 0x216);
      cVar76 = *(char *)(lVar1 + 0x217);
      cVar96 = *(char *)(lVar1 + 0x218);
      cVar77 = *(char *)(lVar1 + 0x219);
      cVar97 = *(char *)(lVar1 + 0x21a);
      cVar78 = *(char *)(lVar1 + 0x21b);
      cVar98 = *(char *)(lVar1 + 0x21c);
      cVar79 = *(char *)(lVar1 + 0x21d);
      cVar99 = *(char *)(lVar1 + 0x21e);
      cVar81 = *(char *)(lVar1 + 0x21f);
      cVar101 = *(char *)(lVar1 + 0x220);
      cVar82 = *(char *)(lVar1 + 0x221);
      cVar102 = *(char *)(lVar1 + 0x222);
      cVar83 = *(char *)(lVar1 + 0x223);
      cVar103 = *(char *)(lVar1 + 0x224);
      cVar84 = *(char *)(lVar1 + 0x225);
      cVar104 = *(char *)(lVar1 + 0x226);
      cVar86 = *(char *)(lVar1 + 0x227);
      cVar106 = *(char *)(lVar1 + 0x228);
      cVar87 = *(char *)(lVar1 + 0x229);
      cVar107 = *(char *)(lVar1 + 0x22a);
      cVar88 = *(char *)(lVar1 + 0x22b);
      cVar108 = *(char *)(lVar1 + 0x22c);
      uVar42 = uVar39 & 0xffffffffffffffc0;
      cVar109 = *(char *)(lVar1 + 0x22d);
      cVar129 = *(char *)(lVar1 + 0x22e);
      cVar111 = *(char *)(lVar1 + 0x22f);
      cVar130 = *(char *)(lVar1 + 0x230);
// WM - watermarked copy - do not remove
      cVar112 = *(char *)(lVar1 + 0x231);
      cVar131 = *(char *)(lVar1 + 0x232);
      cVar113 = *(char *)(lVar1 + 0x233);
      cVar132 = *(char *)(lVar1 + 0x234);
      cVar114 = *(char *)(lVar1 + 0x235);
      cVar133 = *(char *)(lVar1 + 0x236);
      cVar116 = *(char *)(lVar1 + 0x237);
      cVar134 = *(char *)(lVar1 + 0x238);
      cVar117 = *(char *)(lVar1 + 0x239);
      cVar135 = *(char *)(lVar1 + 0x23a);
      cVar118 = *(char *)(lVar1 + 0x23b);
      cVar136 = *(char *)(lVar1 + 0x23c);
      cVar119 = *(char *)(lVar1 + 0x23d);
      cVar137 = *(char *)(lVar1 + 0x23e);
      cVar121 = *(char *)(lVar1 + 0x23f);
      cVar138 = *(char *)(lVar1 + 0x240);
      cVar122 = *(char *)(lVar1 + 0x241);
      cVar139 = *(char *)(lVar1 + 0x242);
      cVar123 = *(char *)(lVar1 + 0x243);
      cVar140 = *(char *)(lVar1 + 0x244);
      cVar124 = *(char *)(lVar1 + 0x245);
      cVar141 = *(char *)(lVar1 + 0x246);
      cVar126 = *(char *)(lVar1 + 0x247);
      cVar142 = *(char *)(lVar1 + 0x248);
      cVar127 = *(char *)(lVar1 + 0x249);
      cVar143 = *(char *)(lVar1 + 0x24a);
      cVar128 = *(char *)(lVar1 + 0x24b);
      cVar144 = *(char *)(lVar1 + 0x24c);
      cVar145 = *(char *)(lVar1 + 0x24d);
      cVar169 = *(char *)(lVar1 + 0x24e);
      cVar146 = *(char *)(lVar1 + 0x24f);
      cVar170 = *(char *)(lVar1 + 0x250);
// if you paid for this, you were scammed
      cVar147 = *(char *)(lVar1 + 0x251);
      cVar171 = *(char *)(lVar1 + 0x252);
      cVar148 = *(char *)(lVar1 + 0x253);
      cVar172 = *(char *)(lVar1 + 0x254);
      cVar149 = *(char *)(lVar1 + 0x255);
      cVar173 = *(char *)(lVar1 + 0x256);
      cVar150 = *(char *)(lVar1 + 599);
      cVar174 = *(char *)(lVar1 + 600);
      cVar151 = *(char *)(lVar1 + 0x259);
      cVar175 = *(char *)(lVar1 + 0x25a);
      cVar152 = *(char *)(lVar1 + 0x25b);
      cVar176 = *(char *)(lVar1 + 0x25c);
      cVar154 = *(char *)(lVar1 + 0x25d);
      cVar177 = *(char *)(lVar1 + 0x25e);
      cVar156 = *(char *)(lVar1 + 0x25f);
      cVar178 = *(char *)(lVar1 + 0x260);
      cVar158 = *(char *)(lVar1 + 0x261);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      cVar179 = *(char *)(lVar1 + 0x262);
      cVar160 = *(char *)(lVar1 + 0x263);
      cVar180 = *(char *)(lVar1 + 0x264);
      cVar162 = *(char *)(lVar1 + 0x265);
      cVar181 = *(char *)(lVar1 + 0x266);
      cVar164 = *(char *)(lVar1 + 0x267);
      cVar182 = *(char *)(lVar1 + 0x268);
      cVar166 = *(char *)(lVar1 + 0x269);
      cVar183 = *(char *)(lVar1 + 0x26a);
      cVar168 = *(char *)(lVar1 + 0x26b);
      cVar184 = *(char *)(lVar1 + 0x26c);
      *(ulong *)(param_1 + 9) =
           CONCAT17(*(char *)(lVar2 + 0x20b) * '\x10' + *(char *)(lVar2 + 0x20c),
                    CONCAT16(*(char *)(lVar2 + 0x209) * '\x10' + *(char *)(lVar2 + 0x20a),
                             CONCAT15(*(char *)(lVar2 + 0x207) * '\x10' + *(char *)(lVar2 + 0x208),
                                      CONCAT14(*(char *)(lVar2 + 0x205) * '\x10' +
                                               *(char *)(lVar2 + 0x206),
                                               CONCAT13(*(char *)(lVar2 + 0x203) * '\x10' +
                                                        *(char *)(lVar2 + 0x204),
                                                        CONCAT12(*(char *)(lVar2 + 0x201) * '\x10' +
                                                                 *(char *)(lVar2 + 0x202),
                                                                 CONCAT11(*(char *)(lVar2 + 0x1ff) *
                                                                          '\x10' + *(char *)(lVar2 +
                                                                                            0x200),
                                                                          *(char *)(lVar2 + 0x1fd) *
/* reversing this took months of machine time - github.com/pengussy */
                                                                          '\x10' + *(char *)(lVar2 +
                                                                                            0x1fe)))
                                                       )))));
      *(ulong *)(param_1 + 1) =
           CONCAT17(cVar54 * '\x10' + cVar64,
                    CONCAT16(cVar53 * '\x10' + cVar63,
                             CONCAT15(cVar52 * '\x10' + cVar62,
                                      CONCAT14(cVar51 * '\x10' + cVar60,
                                               CONCAT13(cVar50 * '\x10' + cVar59,
                                                        CONCAT12(cVar49 * '\x10' + cVar58,
                                                                 CONCAT11(cVar48 * '\x10' + cVar57,
                                                                          cVar47 * '\x10' + cVar55))
                                                       )))));
      *(ulong *)(param_1 + 0x19) =
           CONCAT17(cVar88 * '\x10' + cVar108,
                    CONCAT16(cVar87 * '\x10' + cVar107,
                             CONCAT15(cVar86 * '\x10' + cVar106,
                                      CONCAT14(cVar84 * '\x10' + cVar104,
                                               CONCAT13(cVar83 * '\x10' + cVar103,
                                                        CONCAT12(cVar82 * '\x10' + cVar102,
                                                                 CONCAT11(cVar81 * '\x10' + cVar101,
                                                                          cVar79 * '\x10' + cVar99))
                                                       )))));
      *(ulong *)(param_1 + 0x11) =
           CONCAT17(cVar78 * '\x10' + cVar98,
                    CONCAT16(cVar77 * '\x10' + cVar97,
                             CONCAT15(cVar76 * '\x10' + cVar96,
                                      CONCAT14(cVar74 * '\x10' + cVar94,
                                               CONCAT13(cVar73 * '\x10' + cVar93,
                                                        CONCAT12(cVar72 * '\x10' + cVar92,
                                                                 CONCAT11(cVar71 * '\x10' + cVar91,
                                                                          cVar69 * '\x10' + cVar89))
                                                       )))));
/* unlicensed copy if this notice is missing */
      *(ulong *)(param_1 + 0x29) =
           CONCAT17(cVar128 * '\x10' + cVar144,
                    CONCAT16(cVar127 * '\x10' + cVar143,
                             CONCAT15(cVar126 * '\x10' + cVar142,
                                      CONCAT14(cVar124 * '\x10' + cVar141,
                                               CONCAT13(cVar123 * '\x10' + cVar140,
                                                        CONCAT12(cVar122 * '\x10' + cVar139,
                                                                 CONCAT11(cVar121 * '\x10' + cVar138
                                                                          ,cVar119 * '\x10' +
                                                                           cVar137)))))));
      *(ulong *)(param_1 + 0x21) =
           CONCAT17(cVar118 * '\x10' + cVar136,
                    CONCAT16(cVar117 * '\x10' + cVar135,
                             CONCAT15(cVar116 * '\x10' + cVar134,
                                      CONCAT14(cVar114 * '\x10' + cVar133,
                                               CONCAT13(cVar113 * '\x10' + cVar132,
                                                        CONCAT12(cVar112 * '\x10' + cVar131,
                                                                 CONCAT11(cVar111 * '\x10' + cVar130
                                                                          ,cVar109 * '\x10' +
                                                                           cVar129)))))));
      *(ulong *)(param_1 + 0x39) =
           CONCAT17(cVar168 * '\x10' + cVar184,
                    CONCAT16(cVar166 * '\x10' + cVar183,
                             CONCAT15(cVar164 * '\x10' + cVar182,
                                      CONCAT14(cVar162 * '\x10' + cVar181,
                                               CONCAT13(cVar160 * '\x10' + cVar180,
                                                        CONCAT12(cVar158 * '\x10' + cVar179,
                                                                 CONCAT11(cVar156 * '\x10' + cVar178
                                                                          ,cVar154 * '\x10' +
                                                                           cVar177)))))));
      *(ulong *)(param_1 + 0x31) =
           CONCAT17(cVar152 * '\x10' + cVar176,
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    CONCAT16(cVar151 * '\x10' + cVar175,
                             CONCAT15(cVar150 * '\x10' + cVar174,
                                      CONCAT14(cVar149 * '\x10' + cVar173,
                                               CONCAT13(cVar148 * '\x10' + cVar172,
                                                        CONCAT12(cVar147 * '\x10' + cVar171,
                                                                 CONCAT11(cVar146 * '\x10' + cVar170
                                                                          ,cVar145 * '\x10' +
                                                                           cVar169)))))));
      if (uVar39 == uVar42) {
        return uVar35;
      }
      if ((uVar39 & 0x38) == 0) {
        uVar41 = uVar42 << 1;
        goto LAB_00299700;
      }
    }
    uVar43 = uVar39 & 0xfffffffffffffff8;
    uVar41 = uVar43 << 1;
    pcVar31 = (char *)(lVar2 + uVar42 * 2 + 0x1ed);
    do {
      cVar47 = *pcVar31;
      pcVar16 = pcVar31 + 1;
      pcVar17 = pcVar31 + 2;
      pcVar18 = pcVar31 + 3;
      pcVar19 = pcVar31 + 4;
      pcVar20 = pcVar31 + 5;
/* WM - reversing this took months of machine time */
      pcVar21 = pcVar31 + 6;
      pcVar22 = pcVar31 + 7;
      pcVar23 = pcVar31 + 8;
      pcVar24 = pcVar31 + 9;
      pcVar25 = pcVar31 + 10;
      pcVar26 = pcVar31 + 0xb;
      pcVar27 = pcVar31 + 0xc;
      pcVar28 = pcVar31 + 0xd;
      pcVar29 = pcVar31 + 0xe;
      pcVar30 = pcVar31 + 0xf;
      pcVar31 = pcVar31 + 0x10;
      *(ulong *)(pcVar40 + (uVar42 & 0x7ffffffffffffff8)) =
           CONCAT17(*pcVar29 * '\x10' + *pcVar30,
                    CONCAT16(*pcVar27 * '\x10' + *pcVar28,
                             CONCAT15(*pcVar25 * '\x10' + *pcVar26,
                                      CONCAT14(*pcVar23 * '\x10' + *pcVar24,
                                               CONCAT13(*pcVar21 * '\x10' + *pcVar22,
                                                        CONCAT12(*pcVar19 * '\x10' + *pcVar20,
                                                                 CONCAT11(*pcVar17 * '\x10' +
                                                                          *pcVar18,cVar47 * '\x10' +
                                                                                   *pcVar16)))))));
      uVar42 = uVar42 + 8;
    } while (uVar43 != uVar42);
    if (uVar39 == uVar43) {
      return uVar35;
    }
  }
LAB_00299700:
/*  reversing this took months of machine time  */
  param_1 = param_1 + (uVar41 >> 1);
  pcVar40 = (char *)(uVar41 + lVar2 + 0x1ee);
  do {
    param_1 = param_1 + 1;
    *param_1 = *pcVar40 + pcVar40[-1] * '\x10';
    uVar41 = uVar41 + 2;
    pcVar40 = pcVar40 + 2;
  } while (uVar41 < uVar46);
  return uVar35;
}

