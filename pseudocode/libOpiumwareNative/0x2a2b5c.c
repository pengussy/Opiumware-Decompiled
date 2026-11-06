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
 *  file-id: 0x2a2b5c:1f70b4de4d
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_002a2b5c(long *param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  byte *pbVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
/* watermarked copy - do not remove */
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar36;
  undefined1 auVar35 [16];
  long lVar37;
  long lVar39;
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
/* found on a paste site? it was re-uploaded illegally */
  long lVar57;
  long lVar58;
  long lVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  ulong uStack_90;
  undefined4 uStack_84;
  
  uVar7 = func_0x0029d64c(param_1,*(undefined8 *)(param_2 + 0xc98),*(undefined8 *)(param_2 + 0xca0),
                          param_2 + 0xf0,(long)&dylib_command_00001350.cmd + param_2,
                          *(undefined8 *)(param_2 + 0xdd8),*(undefined8 *)(param_2 + 0xde0));
  if (0xffffffffffffff88 < uVar7) {
    return uVar7;
  }
  uStack_90 = param_1[3] - param_1[2];
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  pbVar1 = (byte *)param_1[5];
  pbVar13 = (byte *)param_1[6];
  pbVar14 = (byte *)param_1[4];
  lVar24 = *param_1;
  lVar26 = param_1[1];
  uVar7 = lVar26 - lVar24 >> 3;
  lVar10 = *(long *)(param_2 + 0xca0);
  uVar27 = *(undefined8 *)(param_2 + 0xdd8);
  uVar9 = *(undefined8 *)(param_2 + 0xde0);
  iVar2 = *(int *)((long)&dylib_command_00001350.cmd + param_2);
  uStack_84 = 0xff;
  lVar22 = 3;
  if (0x3ff < uStack_90) {
    lVar22 = 4;
  }
  if ((uStack_90 & 0xffffffffffffc000) != 0) {
    lVar22 = lVar22 + 1;
  }
  if (iVar2 - 2U < 2) {
    uVar8 = func_0x0029910c(uVar27,&uStack_84,param_1[2],uStack_90,uVar27);
    if (uVar8 < 0xffffffffffffff89) {
      lVar23 = func_0x0029a970(lVar10,uVar27,uStack_84);
      if (iVar2 == 2) {
        lVar23 = *(long *)(&UNK_000013d8 + param_2) + lVar23;
      }
      if (0xff < uStack_90) {
        lVar23 = lVar23 + 6;
      }
      uStack_90 = lVar22 + lVar23;
    }
  }
  else if (iVar2 != 0) {
    if (iVar2 == 1) {
/*  if you paid for this, you were scammed  */
      uStack_90 = 1;
    }
    else {
      uStack_90 = 0;
    }
  }
  uVar3 = *(uint *)(&UNK_000013e4 + param_2);
  uStack_84 = 0x1f;
  func_0x00298b70(uVar27,&uStack_84,pbVar13,uVar7,uVar27,uVar9);
  if (uVar3 == 1) {
LAB_002a2d4c:
    uVar8 = 0;
LAB_002a2d54:
    if (lVar26 != lVar24) {
      pbVar12 = pbVar13 + uVar7;
      if (pbVar12 <= pbVar13 + 1) {
        pbVar12 = pbVar13 + 1;
      }
      uVar11 = (long)pbVar12 - (long)pbVar13;
      if (uVar11 < 8) {
        pbVar12 = pbVar13;
      }
      else {
        if (uVar11 < 0x20) {
          uVar16 = 0;
        }
        else {
          uVar16 = uVar11 & 0xffffffffffffffe0;
          lVar23 = 0;
          lVar25 = 0;
          lVar22 = 0;
          pauVar20 = (undefined1 (*) [16])(pbVar13 + 0x10);
/*  donate: donate/README.md  */
          lVar28 = 0;
          lVar29 = 0;
          lVar33 = 0;
          lVar30 = 0;
          lVar31 = 0;
          lVar32 = 0;
          lVar37 = 0;
          lVar39 = 0;
          lVar34 = 0;
          lVar36 = 0;
          lVar44 = 0;
          lVar45 = 0;
          lVar42 = 0;
          lVar43 = 0;
          lVar50 = 0;
          lVar51 = 0;
          lVar48 = 0;
// WM - do not claim this as your own
          lVar49 = 0;
          lVar56 = 0;
          lVar57 = 0;
          lVar46 = 0;
          lVar47 = 0;
          lVar54 = 0;
          lVar55 = 0;
          lVar52 = 0;
          lVar53 = 0;
          lVar58 = 0;
          lVar59 = 0;
          uVar15 = uVar16;
          do {
            auVar38 = pauVar20[-1];
            auVar4 = *pauVar20;
            auVar35._8_8_ = _UNK_01adc5f8;
            auVar35._0_8_ = _UNK_01adc5f0;
            auVar62 = a64_TBL(ZEXT816(0),auVar38,auVar35);
            auVar40._8_8_ = _UNK_01adc608;
            auVar40._0_8_ = _UNK_01adc600;
            auVar63 = a64_TBL(ZEXT816(0),auVar38,auVar40);
            auVar60._8_8_ = _UNK_01adc618;
            auVar60._0_8_ = _UNK_01adc610;
            auVar35 = a64_TBL(ZEXT816(0),auVar38,auVar60);
            auVar5._8_8_ = _UNK_01adc628;
// reversing this took months of machine time
            auVar5._0_8_ = _UNK_01adc620;
            auVar60 = a64_TBL(ZEXT816(0),auVar38,auVar5);
            auVar38._8_8_ = _UNK_01adc5f8;
            auVar38._0_8_ = _UNK_01adc5f0;
            auVar38 = a64_TBL(ZEXT816(0),auVar4,auVar38);
            auVar41._8_8_ = _UNK_01adc608;
            auVar41._0_8_ = _UNK_01adc600;
            auVar40 = a64_TBL(ZEXT816(0),auVar4,auVar41);
            auVar61._8_8_ = _UNK_01adc618;
            auVar61._0_8_ = _UNK_01adc610;
            auVar41 = a64_TBL(ZEXT816(0),auVar4,auVar61);
            auVar6._8_8_ = _UNK_01adc628;
            auVar6._0_8_ = _UNK_01adc620;
            auVar61 = a64_TBL(ZEXT816(0),auVar4,auVar6);
            lVar23 = lVar23 + (auVar63._8_8_ & 0xffffffff);
            lVar25 = lVar25 + (auVar63._8_8_ >> 0x20);
            lVar33 = lVar33 + (auVar62._8_8_ & 0xffffffff);
            lVar30 = lVar30 + (auVar62._8_8_ >> 0x20);
            lVar28 = lVar28 + (ulong)auVar62._0_4_;
            lVar29 = lVar29 + (ulong)auVar62._4_4_;
            uVar8 = uVar8 + auVar63._0_4_;
            lVar22 = lVar22 + (ulong)auVar63._4_4_;
            lVar31 = lVar31 + (ulong)auVar35._0_4_;
            lVar32 = lVar32 + (ulong)auVar35._4_4_;
/* WM - found on a paste site? it was re-uploaded illegally */
            lVar37 = lVar37 + (auVar35._8_8_ & 0xffffffff);
            lVar39 = lVar39 + (auVar35._8_8_ >> 0x20);
            lVar34 = lVar34 + (ulong)auVar60._0_4_;
            lVar36 = lVar36 + (ulong)auVar60._4_4_;
            lVar44 = lVar44 + (auVar60._8_8_ & 0xffffffff);
            lVar45 = lVar45 + (auVar60._8_8_ >> 0x20);
            lVar50 = lVar50 + (auVar40._8_8_ & 0xffffffff);
            lVar51 = lVar51 + (auVar40._8_8_ >> 0x20);
            lVar56 = lVar56 + (auVar38._8_8_ & 0xffffffff);
            lVar57 = lVar57 + (auVar38._8_8_ >> 0x20);
            lVar48 = lVar48 + (ulong)auVar38._0_4_;
            lVar49 = lVar49 + (ulong)auVar38._4_4_;
            lVar42 = lVar42 + (ulong)auVar40._0_4_;
            lVar43 = lVar43 + (ulong)auVar40._4_4_;
            lVar46 = lVar46 + (ulong)auVar41._0_4_;
            lVar47 = lVar47 + (ulong)auVar41._4_4_;
            lVar54 = lVar54 + (auVar41._8_8_ & 0xffffffff);
            lVar55 = lVar55 + (auVar41._8_8_ >> 0x20);
            lVar52 = lVar52 + (ulong)auVar61._0_4_;
            lVar53 = lVar53 + (ulong)auVar61._4_4_;
            pauVar20 = pauVar20 + 2;
            lVar58 = lVar58 + (auVar61._8_8_ & 0xffffffff);
            lVar59 = lVar59 + (auVar61._8_8_ >> 0x20);
            uVar15 = uVar15 - 0x20;
          } while (uVar15 != 0);
          uVar8 = lVar42 + uVar8 + lVar46 + lVar31 + lVar48 + lVar28 + lVar52 + lVar34 +
                  lVar50 + lVar23 + lVar54 + lVar37 + lVar56 + lVar33 + lVar58 + lVar44 +
                  lVar43 + lVar22 + lVar47 + lVar32 + lVar49 + lVar29 + lVar53 + lVar36 +
                  lVar51 + lVar25 + lVar55 + lVar39 + lVar57 + lVar30 + lVar59 + lVar45;
          if (uVar11 == uVar16) goto LAB_002a2f4c;
          if ((uVar11 & 0x18) == 0) {
            pbVar12 = pbVar13 + uVar16;
            goto LAB_002a2f38;
          }
        }
        uVar15 = uVar11 & 0xfffffffffffffff8;
        pbVar12 = pbVar13 + uVar15;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        lVar23 = 0;
        lVar25 = 0;
        lVar28 = 0;
        lVar22 = uVar16 - uVar15;
        lVar29 = 0;
        lVar31 = 0;
        lVar32 = 0;
        lVar33 = 0;
        puVar17 = (ulong *)(pbVar13 + uVar16);
        do {
          auVar63._0_8_ = *puVar17;
          auVar63._8_8_ = 0;
          auVar4._8_8_ = _UNK_01adc5f8;
          auVar4._0_8_ = _UNK_01adc5f0;
          auVar38 = a64_TBL(ZEXT816(0),auVar63,auVar4);
          auVar62._8_8_ = _UNK_01adc608;
          auVar62._0_8_ = _UNK_01adc600;
          auVar35 = a64_TBL(ZEXT816(0),auVar63,auVar62);
/* donate: donate/README.md - github.com/pengussy */
          lVar32 = lVar32 + (auVar38._8_8_ & 0xffffffff);
          lVar33 = lVar33 + (auVar38._8_8_ >> 0x20);
          lVar23 = lVar23 + (auVar35._8_8_ & 0xffffffff);
          lVar25 = lVar25 + (auVar35._8_8_ >> 0x20);
          lVar29 = lVar29 + (ulong)auVar38._0_4_;
          lVar31 = lVar31 + (ulong)auVar38._4_4_;
          uVar8 = uVar8 + auVar35._0_4_;
          lVar28 = lVar28 + (ulong)auVar35._4_4_;
          lVar22 = lVar22 + 8;
          puVar17 = puVar17 + 1;
        } while (lVar22 != 0);
        uVar8 = uVar8 + lVar29 + lVar23 + lVar32 + lVar28 + lVar31 + lVar25 + lVar33;
        if (uVar11 == uVar15) goto LAB_002a2f4c;
      }
LAB_002a2f38:
      do {
        pbVar21 = pbVar12 + 1;
        uVar8 = uVar8 + *pbVar12;
        pbVar12 = pbVar21;
      } while (pbVar21 < pbVar13 + uVar7);
    }
/*  keep the notice, keep the source honest  */
LAB_002a2f4c:
    uVar8 = uVar8 >> 3;
  }
  else {
    if (uVar3 == 0) {
      uVar8 = func_0x002a3f0c(&UNK_01adc738,5,uVar27,uStack_84);
    }
    else {
      if ((uVar3 & 0xfffffffe) != 2) goto LAB_002a2d4c;
      uVar8 = func_0x002a3e70(lVar10 + 0x810,uVar27,uStack_84);
    }
    if (uVar8 < 0xffffffffffffff89) goto LAB_002a2d54;
    uVar8 = uVar7 * 10;
  }
  uVar3 = *(uint *)(&UNK_000013e0 + param_2);
  uStack_84 = 0x23;
  func_0x00298b70(uVar27,&uStack_84,pbVar14,uVar7,uVar27,uVar9);
  if (uVar3 == 1) {
LAB_002a2fe0:
    uVar11 = 0;
LAB_002a2fe4:
    if (lVar26 != lVar24) {
      pbVar13 = pbVar14 + uVar7;
      if (pbVar13 <= pbVar14 + 1) {
        pbVar13 = pbVar14 + 1;
      }
      uVar15 = (long)pbVar13 - (long)pbVar14;
      if (uVar15 < 4) {
        pbVar13 = pbVar14;
      }
/* wm:do not claim this as your own */
      else {
        lVar22 = 0;
        lVar23 = 0;
        lVar25 = 0;
        uVar18 = uVar15 & 0xfffffffffffffffc;
        pbVar13 = pbVar14 + uVar18;
        pbVar12 = pbVar14 + 3;
        uVar16 = uVar18;
        do {
          uVar11 = uVar11 + (byte)(&UNK_01adc804)[pbVar12[-3]];
          lVar22 = lVar22 + (ulong)(byte)(&UNK_01adc804)[pbVar12[-2]];
          lVar23 = lVar23 + (ulong)(byte)(&UNK_01adc804)[pbVar12[-1]];
          lVar25 = lVar25 + (ulong)(byte)(&UNK_01adc804)[*pbVar12];
          uVar16 = uVar16 - 4;
          pbVar12 = pbVar12 + 4;
        } while (uVar16 != 0);
        uVar11 = lVar25 + lVar23 + lVar22 + uVar11;
        if (uVar15 == uVar18) goto LAB_002a3098;
      }
      do {
        pbVar12 = pbVar13 + 1;
        uVar11 = uVar11 + (byte)(&UNK_01adc804)[*pbVar13];
        pbVar13 = pbVar12;
      } while (pbVar12 < pbVar14 + uVar7);
    }
/* wm:reversing this took months of machine time */
LAB_002a3098:
    uVar11 = uVar11 >> 3;
  }
  else {
    if (uVar3 == 0) {
      uVar11 = func_0x002a3f0c(&UNK_01adc6f0,6,uVar27,uStack_84);
    }
    else {
      if ((uVar3 & 0xfffffffe) != 2) goto LAB_002a2fe0;
      uVar11 = func_0x002a3e70("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                               + lVar10 + 0x20,uVar27,uStack_84);
    }
    if (uVar11 < 0xffffffffffffff89) goto LAB_002a2fe4;
    uVar11 = uVar7 * 10;
  }
  uVar3 = *(uint *)(&UNK_000013e8 + param_2);
  uStack_84 = 0x34;
  func_0x00298b70(uVar27,&uStack_84,pbVar1,uVar7,uVar27,uVar9);
  if (uVar3 == 1) {
LAB_002a3130:
    uVar15 = 0;
  }
  else {
    if (uVar3 == 0) {
      uVar15 = func_0x002a3f0c(&UNK_01adc772,6,uVar27,uStack_84);
    }
    else {
      if ((uVar3 & 0xfffffffe) != 2) goto LAB_002a3130;
      uVar15 = func_0x002a3e70(lVar10 + 0xb14,uVar27,uStack_84);
    }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    if (0xffffffffffffff88 < uVar15) {
      uVar15 = uVar7 * 10;
      goto LAB_002a31f0;
    }
  }
  if (lVar26 != lVar24) {
    pbVar13 = pbVar1 + uVar7;
    if (pbVar13 <= pbVar1 + 1) {
      pbVar13 = pbVar1 + 1;
    }
    uVar16 = (long)pbVar13 - (long)pbVar1;
    if (uVar16 < 4) {
      pbVar13 = pbVar1;
    }
    else {
      lVar22 = 0;
      lVar24 = 0;
      lVar26 = 0;
      uVar19 = uVar16 & 0xfffffffffffffffc;
      pbVar13 = pbVar1 + uVar19;
      pbVar14 = pbVar1 + 3;
      uVar18 = uVar19;
/* wm:no support for modified copies */
      do {
        uVar15 = uVar15 + (byte)(&UNK_01adc828)[pbVar14[-3]];
        lVar22 = lVar22 + (ulong)(byte)(&UNK_01adc828)[pbVar14[-2]];
        lVar24 = lVar24 + (ulong)(byte)(&UNK_01adc828)[pbVar14[-1]];
        lVar26 = lVar26 + (ulong)(byte)(&UNK_01adc828)[*pbVar14];
        uVar18 = uVar18 - 4;
        pbVar14 = pbVar14 + 4;
      } while (uVar18 != 0);
      uVar15 = lVar26 + lVar24 + lVar22 + uVar15;
      if (uVar16 == uVar19) goto LAB_002a31ec;
    }
    do {
      pbVar14 = pbVar13 + 1;
      uVar15 = uVar15 + (byte)(&UNK_01adc828)[*pbVar13];
      pbVar13 = pbVar14;
    } while (pbVar14 < pbVar1 + uVar7);
  }
LAB_002a31ec:
  uVar15 = uVar15 >> 3;
LAB_002a31f0:
  lVar22 = 2;
  if (0x7f < uVar7) {
    lVar22 = 3;
  }
  lVar24 = 3;
  if (0x7e < uVar7 >> 8) {
    lVar24 = 4;
  }
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  return lVar24 + lVar22 + uStack_90 + uVar8 + uVar11 + *(long *)(&UNK_00001478 + param_2) + uVar15;
}

