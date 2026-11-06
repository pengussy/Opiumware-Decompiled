/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x29c1e4:5d8f7c2581
   =========================================================================== */

ulong FUN_0029c1e4(ulong param_1,int param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7,uint param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  uint *puVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar25;
  long lVar24;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  int iVar26;
  int iVar28;
  long lVar27;
  int iVar29;
  int iVar31;
  long lVar30;
  int iVar32;
  int iVar34;
  long lVar33;
  int iVar35;
  int iVar37;
  long lVar36;
  int iVar38;
  int iVar40;
  long lVar39;
  int iVar41;
  int iVar43;
  long lVar42;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
/*  origin: github.com/pengussy  */
  
  iVar14 = (int)param_3;
  uVar15 = (uint)param_1;
  if ((param_8 >> 1 & 1) == 0) {
    uVar18 = 0x1e - (int)LZCOUNT(param_2 + -1);
    uVar7 = 0x20 - (int)LZCOUNT(param_2);
    uVar19 = 0x21 - (int)LZCOUNT(iVar14);
    if (uVar19 <= uVar7) {
      uVar7 = uVar19;
    }
    uVar19 = 0xb;
    if (uVar15 != 0) {
      uVar19 = uVar15;
    }
    if (uVar19 <= uVar18) {
      uVar18 = uVar19;
/* more drops soon - github.com/pengussy - github.com/pengussy */
    }
    if (uVar7 <= uVar18) {
      uVar7 = uVar18;
    }
    if (uVar7 < 6) {
      uVar7 = 5;
    }
    if (0xb < uVar7) {
      uVar7 = 0xc;
    }
    return (ulong)uVar7;
  }
  uVar18 = iVar14 + 1;
  uVar13 = (ulong)uVar18;
  if (iVar14 == -1) {
    uVar20 = 0;
    goto LAB_0029c260;
  }
  if (uVar18 < 4) {
    uVar2 = 0;
    iVar21 = 0;
LAB_0029c3c8:
    lVar10 = uVar13 - uVar2;
    piVar4 = (int *)(param_7 + uVar2 * 4);
    do {
      if (*piVar4 != 0) {
        iVar21 = iVar21 + 1;
      }
/*  thanks for reading - discord.gg/sdkhDjTex  */
      lVar10 = lVar10 + -1;
      piVar4 = piVar4 + 1;
    } while (lVar10 != 0);
  }
  else if (uVar18 < 0x10) {
    iVar21 = 0;
    uVar20 = 0;
LAB_0029c38c:
    uVar2 = uVar13 & 0xfffffffc;
    iVar23 = 0;
    iVar25 = 0;
    iVar22 = 0;
    lVar10 = uVar20 - uVar2;
    puVar8 = (undefined8 *)(param_7 + uVar20 * 4);
    do {
      iVar21 = iVar21 + (uint)((int)*puVar8 != 0);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      iVar22 = iVar22 + (uint)((int)((ulong)*puVar8 >> 0x20) != 0);
      iVar23 = iVar23 + (uint)((int)puVar8[1] != 0);
      iVar25 = iVar25 + (uint)((int)((ulong)puVar8[1] >> 0x20) != 0);
      lVar10 = lVar10 + 4;
      puVar8 = puVar8 + 2;
    } while (lVar10 != 0);
    iVar21 = iVar21 + iVar22 + iVar23 + iVar25;
    if (uVar2 != uVar13) goto LAB_0029c3c8;
  }
  else {
    uVar2 = uVar13 & 0xfffffff0;
    iVar21 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar25 = 0;
    iVar26 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar31 = 0;
    iVar32 = 0;
    iVar34 = 0;
    iVar35 = 0;
    iVar37 = 0;
    iVar38 = 0;
    iVar40 = 0;
    iVar41 = 0;
    iVar43 = 0;
    puVar8 = (undefined8 *)(param_7 + 0x20);
    uVar20 = uVar2;
    do {
      iVar21 = iVar21 + (uint)((int)puVar8[-4] != 0);
      iVar22 = iVar22 + (uint)((int)((ulong)puVar8[-4] >> 0x20) != 0);
      iVar23 = iVar23 + (uint)((int)puVar8[-3] != 0);
      iVar25 = iVar25 + (uint)((int)((ulong)puVar8[-3] >> 0x20) != 0);
      iVar26 = iVar26 + (uint)((int)puVar8[-2] != 0);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      iVar28 = iVar28 + (uint)((int)((ulong)puVar8[-2] >> 0x20) != 0);
      iVar29 = iVar29 + (uint)((int)puVar8[-1] != 0);
      iVar31 = iVar31 + (uint)((int)((ulong)puVar8[-1] >> 0x20) != 0);
      iVar32 = iVar32 + (uint)((int)*puVar8 != 0);
      iVar34 = iVar34 + (uint)((int)((ulong)*puVar8 >> 0x20) != 0);
      iVar35 = iVar35 + (uint)((int)puVar8[1] != 0);
      iVar37 = iVar37 + (uint)((int)((ulong)puVar8[1] >> 0x20) != 0);
      iVar38 = iVar38 + (uint)((int)puVar8[2] != 0);
      iVar40 = iVar40 + (uint)((int)((ulong)puVar8[2] >> 0x20) != 0);
      iVar41 = iVar41 + (uint)((int)puVar8[3] != 0);
      iVar43 = iVar43 + (uint)((int)((ulong)puVar8[3] >> 0x20) != 0);
      uVar20 = uVar20 - 0x10;
      puVar8 = puVar8 + 8;
    } while (uVar20 != 0);
    iVar21 = iVar38 + iVar32 + iVar26 + iVar21 + iVar40 + iVar34 + iVar28 + iVar22 +
             iVar41 + iVar35 + iVar29 + iVar23 + iVar43 + iVar37 + iVar31 + iVar25;
    if (uVar2 != uVar13) {
      uVar20 = uVar2;
      if ((uVar18 & 0xc) == 0) goto LAB_0029c3c8;
      goto LAB_0029c38c;
    }
  }
/*  keep the notice, keep the source honest  */
  uVar7 = 0x20 - (int)LZCOUNT(iVar21);
  uVar20 = (ulong)uVar7;
  if (uVar15 < uVar7) {
    return param_1;
  }
  if (-1 < iVar14) {
    uVar16 = uVar13 & 0xfffffff0;
    uVar1 = uVar13 & 0xfffffffe;
    uVar2 = 0xfffffffffffffffe;
    do {
      while( true ) {
        uVar3 = FUN_00299d8c(param_6,param_7,param_3,uVar20,param_4,param_5);
        uVar19 = (uint)uVar20;
        if (uVar3 < 0xffffffffffffff89) break;
LAB_0029c464:
        uVar20 = (ulong)(uVar19 + 1);
        if (uVar15 < uVar19 + 1) {
/* origin: github.com/pengussy */
          return param_1;
        }
      }
      if ((uVar3 < uVar20) && (uVar7 < uVar19)) {
        return param_1;
      }
      uVar20 = func_0x0029930c(param_4 + 0x2ec,param_5 + -0x2ec,param_6,param_3,uVar3,param_4,
                               param_5);
      if (0xffffffffffffff88 < uVar20) goto LAB_0029c464;
      if (iVar14 == 0) {
        uVar3 = 0;
        uVar5 = 0;
LAB_0029c678:
        lVar10 = uVar13 - uVar3;
        puVar11 = (uint *)(param_7 + uVar3 * 4);
        pbVar12 = (byte *)(param_6 + 8 + uVar3 * 8);
        do {
          uVar5 = uVar5 + (ulong)*pbVar12 * (ulong)*puVar11;
          lVar10 = lVar10 + -1;
          puVar11 = puVar11 + 1;
          pbVar12 = pbVar12 + 8;
        } while (lVar10 != 0);
      }
      else if (uVar18 < 0x10) {
        uVar5 = 0;
        uVar3 = 0;
LAB_0029c624:
        lVar24 = 0;
        lVar10 = uVar3 - uVar1;
        puVar9 = (ulong *)(param_7 + uVar3 * 4);
        puVar6 = (ulong *)(param_6 + 8 + uVar3 * 8);
        do {
          uVar5 = uVar5 + (*puVar6 & 0xff) * (*puVar9 & 0xffffffff);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          lVar24 = lVar24 + (puVar6[1] & 0xff) * (*puVar9 >> 0x20);
          lVar10 = lVar10 + 2;
          puVar9 = puVar9 + 1;
          puVar6 = puVar6 + 2;
        } while (lVar10 != 0);
        uVar5 = uVar5 + lVar24;
        uVar3 = uVar1;
        if (uVar1 != uVar13) goto LAB_0029c678;
      }
      else {
        lVar10 = 0;
        lVar24 = 0;
        lVar27 = 0;
        lVar30 = 0;
        lVar39 = 0;
        lVar42 = 0;
        lVar44 = 0;
        lVar45 = 0;
        lVar46 = 0;
        lVar47 = 0;
        lVar33 = 0;
        lVar36 = 0;
        lVar50 = 0;
        lVar51 = 0;
        lVar48 = 0;
        lVar49 = 0;
        puVar6 = (ulong *)(param_7 + 0x20);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        puVar9 = (ulong *)(param_6 + 0x48);
        uVar3 = uVar16;
        do {
          lVar27 = lVar27 + (ulong)((uint5)(uint)puVar9[-6] & 0xff000000ff) *
                            (puVar6[-3] & 0xffffffff);
          lVar30 = lVar30 + (puVar9[-5] & 0xff) * (puVar6[-3] >> 0x20);
          lVar10 = lVar10 + (puVar9[-8] & 0xff) * (puVar6[-4] & 0xffffffff);
          lVar24 = lVar24 + (puVar9[-7] & 0xff) * (puVar6[-4] >> 0x20);
          lVar44 = lVar44 + (ulong)((uint5)(uint)puVar9[-2] & 0xff000000ff) *
                            (puVar6[-1] & 0xffffffff);
          lVar45 = lVar45 + (puVar9[-1] & 0xff) * (puVar6[-1] >> 0x20);
          lVar39 = lVar39 + (puVar9[-4] & 0xff) * (puVar6[-2] & 0xffffffff);
          lVar42 = lVar42 + (puVar9[-3] & 0xff) * (puVar6[-2] >> 0x20);
          lVar33 = lVar33 + (ulong)((uint5)(uint)puVar9[2] & 0xff000000ff) *
                            (puVar6[1] & 0xffffffff);
          lVar36 = lVar36 + (puVar9[3] & 0xff) * (puVar6[1] >> 0x20);
          lVar46 = lVar46 + (*puVar9 & 0xff) * (*puVar6 & 0xffffffff);
          lVar47 = lVar47 + (puVar9[1] & 0xff) * (*puVar6 >> 0x20);
          lVar48 = lVar48 + (ulong)((uint5)(uint)puVar9[6] & 0xff000000ff) *
                            (puVar6[3] & 0xffffffff);
          lVar49 = lVar49 + (puVar9[7] & 0xff) * (puVar6[3] >> 0x20);
          lVar50 = lVar50 + (puVar9[4] & 0xff) * (puVar6[2] & 0xffffffff);
          lVar51 = lVar51 + (puVar9[5] & 0xff) * (puVar6[2] >> 0x20);
          puVar9 = puVar9 + 0x10;
          uVar3 = uVar3 - 0x10;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          puVar6 = puVar6 + 8;
        } while (uVar3 != 0);
        uVar5 = lVar50 + lVar46 + lVar39 + lVar10 + lVar48 + lVar33 + lVar44 + lVar27 +
                lVar51 + lVar47 + lVar42 + lVar24 + lVar49 + lVar36 + lVar45 + lVar30;
        if (uVar16 != uVar13) {
          uVar3 = uVar16;
          if ((uVar18 & 0xe) == 0) goto LAB_0029c678;
          goto LAB_0029c624;
        }
      }
      uVar20 = uVar20 + (uVar5 >> 3);
      if (uVar2 + 1 < uVar20) {
        return param_1;
      }
      uVar17 = uVar19;
      if (uVar2 <= uVar20) {
        uVar17 = (uint)param_1;
        uVar20 = uVar2;
      }
      uVar2 = uVar20;
      param_1 = (ulong)uVar17;
/* wm:if you paid for this, you were scammed */
      uVar20 = (ulong)(uVar19 + 1);
      if (uVar15 < uVar19 + 1) {
        return param_1;
      }
    } while( true );
  }
LAB_0029c260:
  uVar13 = 0xfffffffffffffffe;
  uVar2 = uVar20;
  do {
    uVar1 = FUN_00299d8c(param_6,param_7,param_3,uVar2,param_4,param_5);
    uVar18 = (uint)uVar2;
    if (uVar1 < 0xffffffffffffff89) {
      if ((uVar1 < uVar2) && ((uint)uVar20 < uVar18)) {
        return param_1;
      }
      uVar2 = func_0x0029930c(param_4 + 0x2ec,param_5 + -0x2ec,param_6,param_3,uVar1,param_4,param_5
                             );
      if (uVar2 < 0xffffffffffffff89) {
        if (uVar13 + 1 < uVar2) {
          return param_1;
        }
        uVar7 = uVar18;
        if (uVar13 <= uVar2) {
          uVar7 = (uint)param_1;
          uVar2 = uVar13;
        }
        uVar13 = uVar2;
        param_1 = (ulong)uVar7;
      }
    }
    uVar2 = (ulong)(uVar18 + 1);
    if (uVar15 < uVar18 + 1) {
      return param_1;
/* wm:proprietary - see LICENSE - do not sell */
    }
  } while( true );
}

