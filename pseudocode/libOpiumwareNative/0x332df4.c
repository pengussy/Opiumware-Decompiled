/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x332df4:5ec9c4ec6c
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00332df4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ushort *param_5,
                 undefined1 (*param_6) [16],int param_7,uint param_8)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
// WM - no support for modified copies
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  uint uVar36;
  undefined1 (*pauVar37) [16];
  ulong uVar38;
  ushort uVar39;
  ushort uVar40;
  undefined8 *puVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint *puVar45;
  undefined1 (*pauVar46) [16];
  byte *pbVar47;
  uint uVar48;
  byte *pbVar49;
  ulong uVar50;
  int iVar51;
  long lVar52;
  ulong uVar53;
  long lVar54;
  ulong uVar55;
/* chat: discord.gg/sdkhDjTex */
  ulong uVar56;
  ulong uVar57;
  long lVar58;
  undefined8 *puVar59;
  long lVar60;
  ulong uVar61;
  long lVar62;
  uint uVar63;
  uint *puVar64;
  undefined1 uVar65;
  undefined1 auVar66 [16];
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
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined4 uVar85;
  ulong uVar87;
// WM - watermarked copy - do not remove
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar86;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  ulong uVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  
  uVar32 = _UNK_01adfad0;
  uVar31 = _UNK_01adc608;
  uVar30 = _UNK_01adc600;
  uVar29 = _UNK_01adc5b8;
  uVar28 = _UNK_01adc5b0;
  lVar62 = *(long *)(param_1 + 0x38);
  lVar58 = *(long *)(lVar62 + 0x28);
  iVar51 = *(int *)(lVar62 + 0x18);
  lVar60 = (long)(int)(((uint)*param_5 + *(int *)(lVar62 + 0x1c) * (uint)param_5[1]) *
                      *(int *)(lVar62 + 0x24));
  puVar64 = (uint *)(lVar58 + lVar60);
  uVar44 = *(int *)(lVar62 + 0x24) * *(int *)(lVar62 + 0x1c);
  uVar39 = param_5[2];
  uVar50 = (ulong)uVar39;
  uVar40 = param_5[3];
  uVar48 = (uint)uVar40;
  uVar43 = (uint)uVar39;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  if (param_7 == iVar51) {
    if (uVar40 != 0) {
      iVar51 = 4;
      if (param_7 != 0) {
        iVar51 = 0;
      }
      if (param_7 == 1) {
        iVar51 = 1;
      }
      uVar48 = uVar40 + 1;
      do {
        _memcpy(puVar64,param_6,iVar51 * uVar43);
        param_6 = (undefined1 (*) [16])(*param_6 + (int)param_8);
        puVar64 = (uint *)((long)puVar64 + (long)(int)uVar44);
        uVar48 = uVar48 - 1;
      } while (1 < uVar48);
    }
  }
  else {
    uVar42 = (uint)uVar39;
    if ((param_7 == 1) && (iVar51 == 0)) {
      if ((uVar48 != 0) && (uVar43 != 0)) {
/* no support for modified copies - github.com/pengussy */
        lVar52 = (long)(int)param_8;
        lVar54 = (long)(int)uVar44;
        bVar33 = puVar64 < *param_6 + (ulong)(uVar43 - 1) + lVar52 * (ulong)(uVar48 - 1) + 1;
        bVar34 = param_6 < (undefined1 (*) [16])
                           (lVar58 + lVar54 * (ulong)(uVar48 - 1) + (ulong)(uVar43 - 1) * 4 + lVar60
                           + 4);
        if (uVar43 < 4) {
          do {
            lVar58 = 0;
            iVar51 = uVar42 + 1;
            do {
              puVar64[lVar58] = (uint)(byte)(*param_6)[lVar58] << 0x18 | 0xffffff;
              iVar51 = iVar51 + -1;
              lVar58 = lVar58 + 1;
            } while (1 < iVar51);
            param_6 = (undefined1 (*) [16])(*param_6 + lVar52);
            puVar64 = (uint *)((long)puVar64 + lVar54);
            bVar33 = uVar48 != 0;
            uVar48 = uVar48 - 1;
          } while (bVar33 && uVar48 != 0);
        }
        else {
          uVar53 = uVar50 & 0xfff0;
          uVar56 = uVar50 & 0xfffc;
          auVar66._8_8_ = _UNK_01adc5f8;
          auVar66._0_8_ = _UNK_01adc5f0;
          auVar68._8_8_ = _UNK_01adc618;
          auVar68._0_8_ = _UNK_01adc610;
          auVar73._8_8_ = _UNK_01adc628;
          auVar73._0_8_ = _UNK_01adc620;
          do {
            puVar45 = puVar64;
            pauVar46 = param_6;
            uVar42 = (uint)uVar39;
            if (bVar33 && bVar34 || (int)(param_8 | uVar44) < 0) {
LAB_003330e0:
/*  chat: discord.gg/sdkhDjTex  */
              iVar51 = uVar42 + 1;
              do {
                *puVar45 = (uint)(byte)(*pauVar46)[0] << 0x18 | 0xffffff;
                iVar51 = iVar51 + -1;
                puVar45 = puVar45 + 1;
                pauVar46 = (undefined1 (*) [16])(*pauVar46 + 1);
              } while (1 < iVar51);
            }
            else if (uVar43 < 0x10) {
              uVar61 = 0;
LAB_00333090:
              puVar45 = puVar64 + uVar56;
              pauVar46 = (undefined1 (*) [16])(*param_6 + uVar56);
              lVar58 = uVar61 << 2;
              do {
                uVar85 = *(undefined4 *)(*param_6 + uVar61);
                auVar77._0_8_ =
                     CONCAT17((char)((uint)uVar85 >> 8),
                              CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,CONCAT13((char)uVar85,
                                                                                 0xffffff)))));
                auVar77[8] = 0xff;
                auVar77[9] = 0xff;
                auVar77[10] = 0xff;
                auVar77[0xb] = (char)((uint)uVar85 >> 0x10);
                auVar77[0xc] = 0xff;
                auVar77[0xd] = 0xff;
                auVar77[0xe] = 0xff;
                auVar77[0xf] = (char)((uint)uVar85 >> 0x18);
                ((undefined8 *)((long)puVar64 + lVar58))[1] = auVar77._8_8_;
/* wm:watermarked copy - do not remove */
                *(undefined8 *)((long)puVar64 + lVar58) = auVar77._0_8_;
                uVar61 = uVar61 + 4;
                lVar58 = lVar58 + 0x10;
              } while (uVar56 != uVar61);
              uVar42 = uVar43 - (int)uVar56;
              if (uVar56 != uVar50) goto LAB_003330e0;
            }
            else {
              lVar58 = 0;
              do {
                puVar59 = (undefined8 *)((long)puVar64 + lVar58);
                auVar92 = *pauVar46;
                auVar15._8_8_ = uVar31;
                auVar15._0_8_ = uVar30;
                auVar100 = a64_TBL(ZEXT816(0),auVar92,auVar15);
                auVar106 = a64_TBL(ZEXT816(0),auVar92,auVar66);
                auVar112 = a64_TBL(ZEXT816(0),auVar92,auVar68);
                auVar92 = a64_TBL(ZEXT816(0),auVar92,auVar73);
                auVar79._0_8_ =
                     CONCAT17(auVar100[4],
                              CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,CONCAT13(auVar100[0],
                                                                                 0xffffff)))));
                auVar79[8] = 0xff;
                auVar79[9] = 0xff;
                auVar79[10] = 0xff;
                auVar79[0xb] = auVar100[8];
// WM - do not claim this as your own
                auVar79[0xc] = 0xff;
                auVar79[0xd] = 0xff;
                auVar79[0xf] = auVar100[0xc];
                auVar79[0xe] = 0xff;
                auVar88._0_8_ =
                     CONCAT17(auVar106[4],
                              CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,CONCAT13(auVar106[0],
                                                                                 0xffffff)))));
                auVar88[8] = 0xff;
                auVar88[9] = 0xff;
                auVar88[10] = 0xff;
                auVar88[0xb] = auVar106[8];
                auVar88[0xc] = 0xff;
                auVar88[0xd] = 0xff;
                auVar88[0xf] = auVar106[0xc];
                auVar88[0xe] = 0xff;
                auVar98._0_8_ =
                     CONCAT17(auVar112[4],
                              CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,CONCAT13(auVar112[0],
                                                                                 0xffffff)))));
                auVar98[8] = 0xff;
/* WM - origin: github.com/pengussy */
                auVar98[9] = 0xff;
                auVar98[10] = 0xff;
                auVar98[0xb] = auVar112[8];
                auVar98[0xc] = 0xff;
                auVar98[0xd] = 0xff;
                auVar98[0xf] = auVar112[0xc];
                auVar98[0xe] = 0xff;
                auVar76._0_8_ =
                     CONCAT17(auVar92[4],
                              CONCAT16(0xff,CONCAT15(0xff,CONCAT14(0xff,CONCAT13(auVar92[0],0xffffff
                                                                                )))));
                auVar76[8] = 0xff;
                auVar76[9] = 0xff;
                auVar76[10] = 0xff;
                auVar76[0xb] = auVar92[8];
                auVar76[0xc] = 0xff;
                auVar76[0xd] = 0xff;
                auVar76[0xf] = auVar92[0xc];
                auVar76[0xe] = 0xff;
                puVar59[5] = auVar98._8_8_;
                puVar59[4] = auVar98._0_8_;
                puVar59[7] = auVar76._8_8_;
                puVar59[6] = auVar76._0_8_;
                puVar59[1] = auVar79._8_8_;
                *puVar59 = auVar79._0_8_;
                puVar59[3] = auVar88._8_8_;
                puVar59[2] = auVar88._0_8_;
                lVar58 = lVar58 + 0x40;
                pauVar46 = pauVar46 + 1;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
              } while ((uVar50 & 0xfff0) * 4 != lVar58);
              if (uVar53 != uVar50) {
                uVar61 = uVar53;
                if ((uVar39 & 0xc) == 0) {
                  puVar45 = puVar64 + uVar53;
                  pauVar46 = (undefined1 (*) [16])(*param_6 + uVar53);
                  uVar42 = uVar43 - (int)uVar53;
                  goto LAB_003330e0;
                }
                goto LAB_00333090;
              }
            }
            param_6 = (undefined1 (*) [16])(*param_6 + lVar52);
            puVar64 = (uint *)((long)puVar64 + lVar54);
            bVar35 = uVar48 != 0;
            uVar48 = uVar48 - 1;
          } while (bVar35 && uVar48 != 0);
        }
      }
    }
    else if ((param_7 == 0) && ((iVar51 == 1 && uVar48 != 0) && uVar42 != 0)) {
      lVar52 = (long)(int)param_8;
      lVar54 = (long)(int)uVar44;
      if (uVar43 < 8) {
        do {
          lVar58 = 0;
          iVar51 = uVar43 + 1;
          do {
            *(undefined1 *)((long)puVar64 + lVar58) = (*param_6)[lVar58 * 4 + 3];
            iVar51 = iVar51 + -1;
            lVar58 = lVar58 + 1;
          } while (1 < iVar51);
          param_6 = (undefined1 (*) [16])(*param_6 + lVar52);
          puVar64 = (uint *)((long)puVar64 + lVar54);
/* WM - if you paid for this, you were scammed */
          bVar33 = uVar48 != 0;
          uVar48 = uVar48 - 1;
        } while (bVar33 && uVar48 != 0);
      }
      else if ((param_6 < (undefined1 (*) [16])
                          (lVar58 + lVar54 * (ulong)(uVar48 - 1) + lVar60 + (ulong)(uVar42 - 1) + 1)
                && puVar64 < *param_6 + (ulong)(uVar42 - 1) * 4 + lVar52 * (ulong)(uVar48 - 1) + 4)
              || ((int)(param_8 | uVar44) < 0)) {
        do {
          lVar58 = 0;
          iVar51 = uVar42 + 1;
          do {
            *(undefined1 *)((long)puVar64 + lVar58) = (*param_6)[lVar58 * 4 + 3];
            iVar51 = iVar51 + -1;
            lVar58 = lVar58 + 1;
          } while (1 < iVar51);
          param_6 = (undefined1 (*) [16])(*param_6 + lVar52);
          puVar64 = (uint *)((long)puVar64 + lVar54);
          bVar33 = uVar48 != 0;
          uVar48 = uVar48 - 1;
        } while (bVar33 && uVar48 != 0);
      }
      else {
        uVar55 = uVar50 & 0xffc0;
/* reversing this took months of machine time */
        uVar57 = uVar50 & 0xfff8;
        puVar59 = (undefined8 *)(lVar60 + lVar58 + 0x20);
        pauVar46 = param_6 + 8;
        uVar65 = (undefined1)_UNK_01adfad8;
        uVar53 = (ulong)_UNK_01adfad8 >> 8;
        uVar56 = (ulong)_UNK_01adfad8 >> 0x10;
        uVar61 = (ulong)_UNK_01adfad8 >> 0x18;
        uVar87 = (ulong)_UNK_01adfad8 >> 0x20;
        uVar97 = (ulong)_UNK_01adfad8 >> 0x28;
        uVar26 = (ulong)_UNK_01adfad8 >> 0x30;
        uVar27 = (ulong)_UNK_01adfad8 >> 0x38;
        do {
          if (uVar42 < 0x40) {
            uVar38 = 0;
LAB_00333234:
            lVar58 = uVar38 << 2;
            do {
              puVar45 = (uint *)(*param_6 + lVar58);
              auVar74._0_4_ = puVar45[4] >> 0x18;
              auVar74._4_4_ = puVar45[5] >> 0x18;
              auVar74._8_4_ = puVar45[6] >> 0x18;
              auVar74._12_4_ = puVar45[7] >> 0x18;
              auVar69._0_4_ = *puVar45 >> 0x18;
              auVar69._4_4_ = puVar45[1] >> 0x18;
              auVar69._8_4_ = puVar45[2] >> 0x18;
              auVar69._12_4_ = puVar45[3] >> 0x18;
/* WM - unlicensed copy if this notice is missing */
              auVar3[8] = uVar65;
              auVar3._0_8_ = uVar32;
              auVar3[9] = (char)uVar53;
              auVar3[10] = (char)uVar56;
              auVar3[0xb] = (char)uVar61;
              auVar3[0xc] = (char)uVar87;
              auVar3[0xd] = (char)uVar97;
              auVar3[0xe] = (char)uVar26;
              auVar3[0xf] = (char)uVar27;
              auVar92 = a64_TBL(ZEXT816(0),auVar69,auVar74,auVar3);
              *(long *)((long)puVar64 + uVar38) = auVar92._0_8_;
              uVar38 = uVar38 + 8;
              lVar58 = lVar58 + 0x20;
            } while (uVar57 != uVar38);
            uVar38 = uVar57;
            if (uVar57 != uVar50) {
/*  unlicensed copy if this notice is missing  */
LAB_0033326c:
              iVar51 = (uVar42 + 1) - (int)uVar38;
              do {
                *(undefined1 *)((long)puVar64 + uVar38) = (*param_6)[uVar38 * 4 + 3];
                iVar51 = iVar51 + -1;
                uVar38 = uVar38 + 1;
              } while (1 < iVar51);
            }
          }
          else {
            pauVar37 = pauVar46;
            uVar38 = uVar55;
            puVar41 = puVar59;
            do {
              auVar89._0_4_ = (uint)*(undefined8 *)pauVar37[1] >> 0x18;
              auVar89._4_4_ = (uint)((ulong)*(undefined8 *)pauVar37[1] >> 0x38);
              auVar89._8_4_ = (uint)*(undefined8 *)(pauVar37[1] + 8) >> 0x18;
              auVar89._12_4_ = (uint)((ulong)*(undefined8 *)(pauVar37[1] + 8) >> 0x38);
              auVar80._0_4_ = *(uint *)*pauVar37 >> 0x18;
              auVar80._4_4_ = *(uint *)(*pauVar37 + 4) >> 0x18;
              auVar80._8_4_ = *(uint *)(*pauVar37 + 8) >> 0x18;
              auVar80._12_4_ = *(uint *)(*pauVar37 + 0xc) >> 0x18;
              auVar111._0_4_ = *(uint *)pauVar37[6] >> 0x18;
/* wm:origin: github.com/pengussy */
              auVar111._4_4_ = *(uint *)(pauVar37[6] + 4) >> 0x18;
              auVar111._8_4_ = *(uint *)(pauVar37[6] + 8) >> 0x18;
              auVar111._12_4_ = *(uint *)(pauVar37[6] + 0xc) >> 0x18;
              auVar105._0_4_ = *(uint *)pauVar37[5] >> 0x18;
              auVar105._4_4_ = *(uint *)(pauVar37[5] + 4) >> 0x18;
              auVar105._8_4_ = *(uint *)(pauVar37[5] + 8) >> 0x18;
              auVar105._12_4_ = *(uint *)(pauVar37[5] + 0xc) >> 0x18;
              auVar99._0_4_ = *(uint *)pauVar37[4] >> 0x18;
              auVar99._4_4_ = *(uint *)(pauVar37[4] + 4) >> 0x18;
              auVar99._8_4_ = *(uint *)(pauVar37[4] + 8) >> 0x18;
              auVar99._12_4_ = *(uint *)(pauVar37[4] + 0xc) >> 0x18;
              auVar92._8_8_ = uVar29;
              auVar92._0_8_ = uVar28;
              auVar109._4_4_ = *(uint *)(pauVar37[-8] + 4) >> 0x18;
              auVar109._0_4_ = *(uint *)pauVar37[-8] >> 0x18;
              auVar109._8_4_ = *(uint *)(pauVar37[-8] + 8) >> 0x18;
              auVar109._12_4_ = *(uint *)(pauVar37[-8] + 0xc) >> 0x18;
              auVar19._4_4_ = *(uint *)(pauVar37[-7] + 4) >> 0x18;
              auVar19._0_4_ = *(uint *)pauVar37[-7] >> 0x18;
              auVar19._8_4_ = *(uint *)(pauVar37[-7] + 8) >> 0x18;
              auVar19._12_4_ = *(uint *)(pauVar37[-7] + 0xc) >> 0x18;
              auVar20._4_4_ = *(uint *)(pauVar37[-6] + 4) >> 0x18;
              auVar20._0_4_ = *(uint *)pauVar37[-6] >> 0x18;
              auVar20._8_4_ = *(uint *)(pauVar37[-6] + 8) >> 0x18;
              auVar20._12_4_ = *(uint *)(pauVar37[-6] + 0xc) >> 0x18;
              auVar21._4_4_ = *(uint *)(pauVar37[-5] + 4) >> 0x18;
              auVar21._0_4_ = *(uint *)pauVar37[-5] >> 0x18;
              auVar21._8_4_ = *(uint *)(pauVar37[-5] + 8) >> 0x18;
              auVar21._12_4_ = *(uint *)(pauVar37[-5] + 0xc) >> 0x18;
              auVar92 = a64_TBL(ZEXT816(0),auVar109,auVar19,auVar20,auVar21,auVar92);
              auVar100._8_8_ = uVar29;
              auVar100._0_8_ = uVar28;
              auVar22._4_4_ = *(uint *)(pauVar37[-4] + 4) >> 0x18;
              auVar22._0_4_ = *(uint *)pauVar37[-4] >> 0x18;
              auVar22._8_4_ = *(uint *)(pauVar37[-4] + 8) >> 0x18;
/* WM - keep the notice, keep the source honest */
              auVar22._12_4_ = *(uint *)(pauVar37[-4] + 0xc) >> 0x18;
              auVar23._4_4_ = *(uint *)(pauVar37[-3] + 4) >> 0x18;
              auVar23._0_4_ = *(uint *)pauVar37[-3] >> 0x18;
              auVar23._8_4_ = *(uint *)(pauVar37[-3] + 8) >> 0x18;
              auVar23._12_4_ = *(uint *)(pauVar37[-3] + 0xc) >> 0x18;
              auVar24._4_4_ = *(uint *)(pauVar37[-2] + 4) >> 0x18;
              auVar24._0_4_ = *(uint *)pauVar37[-2] >> 0x18;
              auVar24._8_4_ = *(uint *)(pauVar37[-2] + 8) >> 0x18;
              auVar24._12_4_ = *(uint *)(pauVar37[-2] + 0xc) >> 0x18;
              auVar25._4_4_ = *(uint *)(pauVar37[-1] + 4) >> 0x18;
              auVar25._0_4_ = *(uint *)pauVar37[-1] >> 0x18;
              auVar25._8_4_ = *(uint *)(pauVar37[-1] + 8) >> 0x18;
              auVar25._12_4_ = *(uint *)(pauVar37[-1] + 0xc) >> 0x18;
              auVar100 = a64_TBL(ZEXT816(0),auVar22,auVar23,auVar24,auVar25,auVar100);
              auVar106._8_8_ = uVar29;
              auVar106._0_8_ = uVar28;
              auVar83._4_4_ = *(uint *)(pauVar37[2] + 4) >> 0x18;
              auVar83._0_4_ = *(uint *)pauVar37[2] >> 0x18;
// WM - origin: github.com/pengussy
              auVar83._8_4_ = *(uint *)(pauVar37[2] + 8) >> 0x18;
              auVar83._12_4_ = *(uint *)(pauVar37[2] + 0xc) >> 0x18;
              auVar95._4_4_ = (uint)((ulong)*(undefined8 *)pauVar37[3] >> 0x38);
              auVar95._0_4_ = (uint)*(undefined8 *)pauVar37[3] >> 0x18;
              auVar95._8_4_ = (uint)*(undefined8 *)(pauVar37[3] + 8) >> 0x18;
              auVar95._12_4_ = (uint)((ulong)*(undefined8 *)(pauVar37[3] + 8) >> 0x38);
              auVar106 = a64_TBL(ZEXT816(0),auVar80,auVar89,auVar83,auVar95,auVar106);
              auVar112._8_8_ = uVar29;
              auVar112._0_8_ = uVar28;
              auVar103._4_4_ = *(uint *)(pauVar37[7] + 4) >> 0x18;
              auVar103._0_4_ = *(uint *)pauVar37[7] >> 0x18;
              auVar103._8_4_ = *(uint *)(pauVar37[7] + 8) >> 0x18;
              auVar103._12_4_ = *(uint *)(pauVar37[7] + 0xc) >> 0x18;
              auVar112 = a64_TBL(ZEXT816(0),auVar99,auVar105,auVar111,auVar103,auVar112);
              puVar41[-3] = auVar92._8_8_;
              puVar41[-4] = auVar92._0_8_;
              puVar41[-1] = auVar100._8_8_;
              puVar41[-2] = auVar100._0_8_;
              puVar41[1] = auVar106._8_8_;
              *puVar41 = auVar106._0_8_;
              puVar41[3] = auVar112._8_8_;
              puVar41[2] = auVar112._0_8_;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
              pauVar37 = pauVar37 + 0x10;
              uVar38 = uVar38 - 0x40;
              puVar41 = puVar41 + 8;
            } while (uVar38 != 0);
            if (uVar55 != uVar50) {
              uVar38 = uVar55;
              if ((uVar39 & 0x38) != 0) goto LAB_00333234;
              goto LAB_0033326c;
            }
          }
          param_6 = (undefined1 (*) [16])(*param_6 + lVar52);
          puVar64 = (uint *)((long)puVar64 + lVar54);
          puVar59 = (undefined8 *)((long)puVar59 + lVar54);
          pauVar46 = (undefined1 (*) [16])(*pauVar46 + lVar52);
          bVar33 = uVar48 != 0;
          uVar48 = uVar48 - 1;
        } while (bVar33 && uVar48 != 0);
      }
    }
  }
  uVar39 = *param_5;
  uVar40 = param_5[1];
  uVar1 = param_5[2];
  uVar50 = (ulong)uVar1;
  uVar48 = (uint)uVar1;
  uVar2 = param_5[3];
  uVar44 = (uint)uVar2;
  fVar4 = *(float *)(param_3 + 0x6c);
/* wm:keep the notice, keep the source honest */
  if (fVar4 != 1.0) {
    lVar58 = (long)(int)(((uint)uVar39 + *(int *)(lVar62 + 0x1c) * (uint)uVar40) *
                        *(int *)(lVar62 + 0x24));
    pbVar47 = (byte *)(*(long *)(lVar62 + 0x28) + lVar58);
    iVar51 = *(int *)(lVar62 + 0x24) * *(int *)(lVar62 + 0x1c);
    if (*(int *)(lVar62 + 0x18) == 0) {
      if ((uVar2 != 0) && (uVar43 = (uint)uVar1, uVar43 != 0)) {
        uVar53 = uVar50 & 0xfff0;
        uVar56 = uVar50 & 0xfffc;
        pauVar46 = (undefined1 (*) [16])(lVar58 + *(long *)(lVar62 + 0x28) + 0x20);
        pbVar49 = pbVar47;
        uVar36 = uVar44;
        uVar42 = uVar48;
        if (uVar43 < 4) goto LAB_003335fc;
        do {
          uVar63 = uVar36;
          if (uVar43 < 0x10) {
            uVar61 = 0;
LAB_003335ac:
            pbVar47 = pbVar49 + uVar56 * 4;
            lVar58 = uVar61 << 2;
            lVar60 = uVar61 - uVar56;
/* more drops soon - github.com/pengussy - github.com/pengussy */
            do {
              auVar92 = *(undefined1 (*) [16])(pbVar49 + lVar58);
              auVar71._0_4_ = auVar92._0_4_ >> 0x18;
              auVar71._4_4_ = auVar92._4_4_ >> 0x18;
              auVar71._8_4_ = auVar92._8_4_ >> 0x18;
              auVar71._12_4_ = auVar92._12_4_ >> 0x18;
              auVar100 = NEON_ucvtf(auVar71,4);
              auVar72._0_4_ = (int)(auVar100._0_4_ * fVar4);
              auVar72._4_4_ = (int)(auVar100._4_4_ * fVar4);
              auVar72._8_4_ = (int)(auVar100._8_4_ * fVar4);
              auVar72._12_4_ = (int)(auVar100._12_4_ * fVar4);
              auVar10._8_8_ = 0xff000000ff;
              auVar10._0_8_ = 0xff000000ff;
              auVar100 = NEON_umin(auVar72,auVar10,4);
              auVar92 = NEON_sli(auVar92,auVar100,0x18,4);
              *(long *)(pbVar49 + lVar58 + 8) = auVar92._8_8_;
              *(long *)(pbVar49 + lVar58) = auVar92._0_8_;
              lVar58 = lVar58 + 0x10;
              lVar60 = lVar60 + 4;
            } while (lVar60 != 0);
            uVar42 = uVar43 - (int)uVar56;
            if (uVar56 != uVar50) goto LAB_003335fc;
          }
          else {
            pauVar37 = pauVar46;
            uVar61 = uVar53;
            do {
              auVar92 = pauVar37[-2];
              auVar100 = pauVar37[-1];
              auVar106 = *pauVar37;
              auVar112 = pauVar37[1];
              auVar82._0_4_ = auVar92._0_4_ >> 0x18;
              auVar82._4_4_ = auVar92._4_4_ >> 0x18;
              auVar82._8_4_ = auVar92._8_4_ >> 0x18;
              auVar82._12_4_ = auVar92._12_4_ >> 0x18;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
              auVar94._0_4_ = auVar100._0_4_ >> 0x18;
              auVar94._4_4_ = auVar100._4_4_ >> 0x18;
              auVar94._8_4_ = auVar100._8_4_ >> 0x18;
              auVar94._12_4_ = auVar100._12_4_ >> 0x18;
              auVar102._0_4_ = auVar106._0_4_ >> 0x18;
              auVar102._4_4_ = auVar106._4_4_ >> 0x18;
              auVar102._8_4_ = auVar106._8_4_ >> 0x18;
              auVar102._12_4_ = auVar106._12_4_ >> 0x18;
              auVar108._0_4_ = auVar112._0_4_ >> 0x18;
              auVar108._4_4_ = auVar112._4_4_ >> 0x18;
              auVar108._8_4_ = auVar112._8_4_ >> 0x18;
              auVar108._12_4_ = auVar112._12_4_ >> 0x18;
              auVar83 = NEON_ucvtf(auVar82,4);
              auVar95 = NEON_ucvtf(auVar94,4);
              auVar103 = NEON_ucvtf(auVar102,4);
              auVar109 = NEON_ucvtf(auVar108,4);
              auVar84._0_4_ = (int)(auVar83._0_4_ * fVar4);
              auVar84._4_4_ = (int)(auVar83._4_4_ * fVar4);
              auVar84._8_4_ = (int)(auVar83._8_4_ * fVar4);
              auVar84._12_4_ = (int)(auVar83._12_4_ * fVar4);
              auVar96._0_4_ = (int)(auVar95._0_4_ * fVar4);
              auVar96._4_4_ = (int)(auVar95._4_4_ * fVar4);
              auVar96._8_4_ = (int)(auVar95._8_4_ * fVar4);
/*  do not claim this as your own  */
              auVar96._12_4_ = (int)(auVar95._12_4_ * fVar4);
              auVar104._0_4_ = (int)(auVar103._0_4_ * fVar4);
              auVar104._4_4_ = (int)(auVar103._4_4_ * fVar4);
              auVar104._8_4_ = (int)(auVar103._8_4_ * fVar4);
              auVar104._12_4_ = (int)(auVar103._12_4_ * fVar4);
              auVar110._0_4_ = (int)(auVar109._0_4_ * fVar4);
              auVar110._4_4_ = (int)(auVar109._4_4_ * fVar4);
              auVar110._8_4_ = (int)(auVar109._8_4_ * fVar4);
              auVar110._12_4_ = (int)(auVar109._12_4_ * fVar4);
              auVar11._8_8_ = 0xff000000ff;
              auVar11._0_8_ = 0xff000000ff;
              auVar83 = NEON_umin(auVar84,auVar11,4);
              auVar12._8_8_ = 0xff000000ff;
              auVar12._0_8_ = 0xff000000ff;
              auVar95 = NEON_umin(auVar96,auVar12,4);
              auVar13._8_8_ = 0xff000000ff;
              auVar13._0_8_ = 0xff000000ff;
              auVar103 = NEON_umin(auVar104,auVar13,4);
              auVar14._8_8_ = 0xff000000ff;
              auVar14._0_8_ = 0xff000000ff;
              auVar109 = NEON_umin(auVar110,auVar14,4);
              auVar92 = NEON_sli(auVar92,auVar83,0x18,4);
              auVar100 = NEON_sli(auVar100,auVar95,0x18,4);
              auVar106 = NEON_sli(auVar106,auVar103,0x18,4);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
              *(long *)(pauVar37[-2] + 8) = auVar92._8_8_;
              *(long *)pauVar37[-2] = auVar92._0_8_;
              *(long *)(pauVar37[-1] + 8) = auVar100._8_8_;
              *(long *)pauVar37[-1] = auVar100._0_8_;
              auVar92 = NEON_sli(auVar112,auVar109,0x18,4);
              *(long *)(*pauVar37 + 8) = auVar106._8_8_;
              *(long *)*pauVar37 = auVar106._0_8_;
              *(long *)(pauVar37[1] + 8) = auVar92._8_8_;
              *(long *)pauVar37[1] = auVar92._0_8_;
              uVar61 = uVar61 - 0x10;
              pauVar37 = pauVar37 + 4;
            } while (uVar61 != 0);
            if (uVar53 != uVar50) {
              uVar61 = uVar53;
              if ((uVar1 & 0xc) == 0) {
                pbVar47 = pbVar49 + uVar53 * 4;
                uVar42 = uVar43 - (int)uVar53;
                goto LAB_003335fc;
              }
              goto LAB_003335ac;
            }
          }
          while( true ) {
            uVar36 = uVar63 - 1;
            if (uVar36 == 0 || (int)uVar63 < 1) goto LAB_00333660;
            pbVar47 = pbVar49 + iVar51;
            pauVar46 = (undefined1 (*) [16])(*pauVar46 + iVar51);
            pbVar49 = pbVar47;
            uVar42 = uVar48;
            if (3 < uVar43) break;
LAB_003335fc:
            uVar42 = uVar42 + 1;
            do {
              fVar86 = (float)NEON_ucvtf((uint)pbVar47[3]);
              uVar63 = (uint)(fVar4 * fVar86);
              if (0xfe < uVar63) {
                uVar63 = 0xff;
              }
// chat: discord.gg/sdkhDjTex
              pbVar47[3] = (byte)uVar63;
              pbVar47 = pbVar47 + 4;
              uVar42 = uVar42 - 1;
              uVar63 = uVar36;
            } while (1 < uVar42);
          }
        } while( true );
      }
    }
    else if (((*(int *)(lVar62 + 0x18) == 1) && (uVar2 != 0)) && (uVar1 != 0)) {
      uVar53 = uVar50 & 0xfff0;
      uVar56 = uVar50 & 0xfffc;
      auVar67._8_8_ = _UNK_01adc608;
      auVar67._0_8_ = _UNK_01adc600;
      auVar70._8_8_ = _UNK_01adc5f8;
      auVar70._0_8_ = _UNK_01adc5f0;
      auVar75._8_8_ = _UNK_01adc618;
      auVar75._0_8_ = _UNK_01adc610;
      uVar42 = (uint)uVar1;
      auVar78._8_8_ = _UNK_01adc628;
      auVar78._0_8_ = _UNK_01adc620;
      auVar81._8_8_ = _UNK_01adc5b8;
      auVar81._0_8_ = _UNK_01adc5b0;
      pbVar49 = pbVar47;
      uVar43 = uVar48;
      if (uVar42 < 4) goto LAB_00333470;
      do {
        uVar36 = uVar44;
        if (uVar42 < 0x10) {
          uVar61 = 0;
LAB_00333420:
          do {
            uVar85 = *(undefined4 *)(pbVar47 + uVar61);
            uVar65 = (undefined1)((uint)uVar85 >> 8);
            auVar91._6_2_ = 0;
            auVar91._0_6_ =
                 (uint6)CONCAT14(uVar65,(uint)CONCAT12(uVar65,(ushort)(byte)uVar85)) &
                 0xffff0000ffff;
/*  origin: github.com/pengussy  */
            auVar91[8] = (char)((uint)uVar85 >> 0x10);
            auVar91._9_3_ = 0;
            auVar91[0xc] = (char)((uint)uVar85 >> 0x18);
            auVar91._13_3_ = 0;
            auVar92 = NEON_ucvtf(auVar91,4);
            auVar93._0_4_ = (int)(auVar92._0_4_ * fVar4);
            auVar93._4_4_ = (int)(auVar92._4_4_ * fVar4);
            auVar93._8_4_ = (int)(auVar92._8_4_ * fVar4);
            auVar93._12_4_ = (int)(auVar92._12_4_ * fVar4);
            auVar5._8_8_ = 0xff000000ff;
            auVar5._0_8_ = 0xff000000ff;
            auVar92 = NEON_umin(auVar93,auVar5,4);
            *(uint *)(pbVar47 + uVar61) =
                 CONCAT13(auVar92[0xc],CONCAT12(auVar92[8],CONCAT11(auVar92[4],auVar92[0])));
            uVar61 = uVar61 + 4;
          } while (uVar56 != uVar61);
          pbVar49 = pbVar47 + uVar56;
          uVar43 = uVar42 - (int)uVar56;
          if (uVar56 != uVar50) goto LAB_00333470;
        }
        else {
          uVar61 = 0;
          do {
            auVar92 = *(undefined1 (*) [16])(pbVar47 + uVar61);
            auVar100 = a64_TBL(ZEXT816(0),auVar92,auVar67);
/* wm:if you paid for this, you were scammed */
            auVar106 = a64_TBL(ZEXT816(0),auVar92,auVar70);
            auVar112 = a64_TBL(ZEXT816(0),auVar92,auVar75);
            auVar92 = a64_TBL(ZEXT816(0),auVar92,auVar78);
            auVar92 = NEON_ucvtf(auVar92,4);
            auVar112 = NEON_ucvtf(auVar112,4);
            auVar106 = NEON_ucvtf(auVar106,4);
            auVar100 = NEON_ucvtf(auVar100,4);
            auVar90._0_4_ = (int)(auVar92._0_4_ * fVar4);
            auVar90._4_4_ = (int)(auVar92._4_4_ * fVar4);
            auVar90._8_4_ = (int)(auVar92._8_4_ * fVar4);
            auVar90._12_4_ = (int)(auVar92._12_4_ * fVar4);
            auVar6._8_8_ = 0xff000000ff;
            auVar6._0_8_ = 0xff000000ff;
            auVar92 = NEON_umin(auVar90,auVar6,4);
            auVar113._0_4_ = (int)(auVar112._0_4_ * fVar4);
            auVar113._4_4_ = (int)(auVar112._4_4_ * fVar4);
            auVar113._8_4_ = (int)(auVar112._8_4_ * fVar4);
            auVar113._12_4_ = (int)(auVar112._12_4_ * fVar4);
            auVar7._8_8_ = 0xff000000ff;
            auVar7._0_8_ = 0xff000000ff;
            auVar112 = NEON_umin(auVar113,auVar7,4);
            uVar87 = CONCAT26(auVar112._12_2_,
                              CONCAT24(auVar112._8_2_,CONCAT22(auVar112._4_2_,auVar112._0_2_))) &
                     0xff00ff00ff00ff;
            auVar107._0_4_ = (int)(auVar106._0_4_ * fVar4);
            auVar107._4_4_ = (int)(auVar106._4_4_ * fVar4);
            auVar107._8_4_ = (int)(auVar106._8_4_ * fVar4);
            auVar107._12_4_ = (int)(auVar106._12_4_ * fVar4);
            auVar8._8_8_ = 0xff000000ff;
/* wm:proprietary - see LICENSE - do not sell */
            auVar8._0_8_ = 0xff000000ff;
            auVar106 = NEON_umin(auVar107,auVar8,4);
            auVar101._0_4_ = (int)(auVar100._0_4_ * fVar4);
            auVar101._4_4_ = (int)(auVar100._4_4_ * fVar4);
            auVar101._8_4_ = (int)(auVar100._8_4_ * fVar4);
            auVar101._12_4_ = (int)(auVar100._12_4_ * fVar4);
            auVar9._8_8_ = 0xff000000ff;
            auVar9._0_8_ = 0xff000000ff;
            auVar100 = NEON_umin(auVar101,auVar9,4);
            uVar97 = CONCAT26(auVar100._12_2_,
                              CONCAT24(auVar100._8_2_,CONCAT22(auVar100._4_2_,auVar100._0_2_))) &
                     0xff00ff00ff00ff;
            auVar17._2_2_ = 0;
            auVar17._0_2_ = (ushort)uVar87;
            auVar114._2_2_ = 0;
            auVar114._0_2_ = (ushort)uVar97;
            auVar114._4_2_ = (short)(uVar97 >> 0x10);
            auVar114._6_2_ = 0;
            auVar114._8_2_ = (short)(uVar97 >> 0x20);
            auVar114._10_2_ = 0;
// origin: github.com/pengussy
            auVar114._12_2_ = (short)(uVar97 >> 0x30);
            auVar114._14_2_ = 0;
            auVar16._6_2_ = 0;
            auVar16._0_6_ = CONCAT24(auVar106._4_2_,(uint)(auVar106._0_2_ & 0xff)) & 0xffffffffff;
            auVar16._8_2_ = auVar106._8_2_ & 0xff;
            auVar16._10_2_ = 0;
            auVar16._12_2_ = auVar106._12_2_ & 0xff;
            auVar16._14_2_ = 0;
            auVar17._4_2_ = (short)(uVar87 >> 0x10);
            auVar17._6_2_ = 0;
            auVar17._8_2_ = (short)(uVar87 >> 0x20);
            auVar17._10_2_ = 0;
            auVar17._12_2_ = (short)(uVar87 >> 0x30);
            auVar17._14_2_ = 0;
            auVar18._6_2_ = 0;
            auVar18._0_6_ = CONCAT24(auVar92._4_2_,(uint)(auVar92._0_2_ & 0xff)) & 0xffffffffff;
            auVar18._8_2_ = auVar92._8_2_ & 0xff;
            auVar18._10_2_ = 0;
            auVar18._12_2_ = auVar92._12_2_ & 0xff;
            auVar18._14_2_ = 0;
            auVar92 = a64_TBL(ZEXT816(0),auVar114,auVar16,auVar17,auVar18,auVar81);
            *(long *)(pbVar47 + uVar61 + 8) = auVar92._8_8_;
            *(long *)(pbVar47 + uVar61) = auVar92._0_8_;
            uVar61 = uVar61 + 0x10;
          } while (uVar53 != uVar61);
          if (uVar53 != uVar50) {
            uVar61 = uVar53;
            if ((uVar1 & 0xc) == 0) {
              pbVar49 = pbVar47 + uVar53;
              uVar43 = (uint)uVar1 - (int)uVar53;
              goto LAB_00333470;
            }
            goto LAB_00333420;
          }
        }
        while( true ) {
          uVar44 = uVar36 - 1;
          if (uVar44 == 0 || (int)uVar36 < 1) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
            uVar39 = *param_5;
            uVar40 = param_5[1];
            uVar50 = (ulong)param_5[2];
            uVar44 = (uint)param_5[3];
            goto LAB_00333660;
          }
          pbVar47 = pbVar47 + iVar51;
          pbVar49 = pbVar47;
          uVar43 = uVar48;
          if (3 < uVar1) break;
LAB_00333470:
          uVar43 = uVar43 + 1;
          do {
            fVar86 = (float)NEON_ucvtf((uint)*pbVar49);
            uVar36 = (uint)(fVar4 * fVar86);
            if (0xfe < uVar36) {
              uVar36 = 0xff;
            }
            *pbVar49 = (byte)uVar36;
            uVar43 = uVar43 - 1;
            pbVar49 = pbVar49 + 1;
            uVar36 = uVar44;
          } while (1 < uVar43);
        }
      } while( true );
    }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
LAB_00333660:
  func_0x003266cc(lVar62,uVar39,uVar40,uVar50,uVar44);
  *(undefined1 *)(param_1 + 0x52) = 0;
  return;
}

