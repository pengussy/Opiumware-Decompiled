/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2b3d18:a9621fe2e7
   =========================================================================== */

long FUN_002b3d18(long param_1,long *param_2,int *param_3,ulong *param_4,long param_5)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong *puVar19;
  int iVar20;
  ulong uVar21;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uint uVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  char *pcVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong *puVar31;
  undefined8 *puVar32;
  ulong uVar33;
  ulong *puVar34;
  int *piVar35;
  ulong *puVar36;
  int iVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  uint uVar41;
  ulong *puVar42;
  uint uVar43;
  int iVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  ulong uVar48;
  int iVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  ulong uVar53;
  ulong uVar54;
/* WM - more drops soon - github.com/pengussy */
  ulong uVar55;
  
  iVar45 = *(int *)(param_1 + 0x110);
  lVar47 = *(long *)(param_1 + 0x70);
  iVar37 = *(int *)(param_1 + 0x108);
  uVar9 = *(uint *)(param_1 + 0x114);
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar39 = (ulong)uVar9;
  lVar50 = *(long *)(param_1 + 8);
  uVar10 = *(uint *)(param_1 + 0x18);
  puVar3 = (ulong *)((long)param_4 + param_5);
  puVar19 = puVar3 + -1;
  iVar44 = *param_3;
  iVar20 = param_3[1];
  puVar23 = *(ulong **)(param_1 + 0xf8);
  uVar48 = puVar23[0xe];
  uVar11 = (uint)puVar23[3];
  puVar7 = (ulong *)*puVar23;
  uVar8 = puVar23[1];
  pcVar4 = (char *)(uVar8 + uVar11);
  uVar9 = uVar10 + ((int)uVar8 - (int)puVar7);
  pcVar5 = (char *)(lVar50 + (ulong)uVar10);
  iVar15 = (int)puVar7 + ((int)param_4 - (int)pcVar5);
  iVar16 = (int)pcVar4;
/* stripping the watermark breaks the license */
  uVar12 = (uint)puVar23[0x21];
  uVar24 = (ulong)uVar12;
  iVar13 = *(int *)(param_1 + 0x128);
  iVar49 = (int)lVar50;
  if (iVar45 == 5) {
    if ((iVar13 != 0) && (uVar12 < 0x3e)) {
      uVar33 = 0;
      do {
        Hint_Prefetch(uVar48 + uVar33,0,1,0);
        uVar33 = uVar33 + 0x40;
      } while (uVar33 < (ulong)(4L << (uVar24 & 0x3f)));
    }
    puVar23 = (ulong *)((long)param_4 + uVar39);
    if (puVar23 <= puVar19) {
      puVar36 = param_4;
      if (iVar15 == iVar16) {
        puVar36 = (ulong *)((long)param_4 + 1);
      }
      uVar24 = (ulong)(0x40 - iVar37);
      puVar42 = puVar3 + -4;
LAB_002b568c:
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar28 = *puVar36 * -0x30e4432345000000;
      uVar21 = uVar28 >> ((ulong)(0x38 - uVar12) & 0x3f);
      uVar25 = (ulong)*(uint *)(uVar48 + (uVar21 >> 8) * 4);
      uVar21 = uVar21 ^ uVar25;
      puVar34 = puVar36 + 0x20;
      uVar33 = uVar39;
      do {
        puVar30 = puVar23;
        uVar28 = uVar28 >> (uVar24 & 0x3f);
        uVar41 = *(uint *)(lVar47 + uVar28 * 4);
        uVar29 = (ulong)uVar41;
        uVar46 = (long)puVar36 - lVar50;
        iVar45 = (int)uVar46;
        uVar43 = (iVar45 - iVar44) + 1;
        uVar40 = *puVar30;
        *(int *)(lVar47 + uVar28 * 4) = iVar45;
        if (uVar43 - uVar10 < 0xfffffffd) {
          piVar35 = (int *)(uVar8 + (uVar43 - uVar9));
/* origin: github.com/pengussy - github.com/pengussy */
          if (uVar10 <= uVar43) {
            piVar35 = (int *)(lVar50 + (ulong)uVar43);
          }
          if (*piVar35 != *(int *)((long)puVar36 + 1)) goto LAB_002b56fc;
          puVar23 = (ulong *)((long)puVar36 + 1);
          puVar34 = puVar7;
          if (uVar10 <= uVar43) {
            puVar34 = puVar3;
          }
          lVar38 = func_0x002ad924((long)puVar36 + 5,piVar35 + 1,puVar3,puVar34,pcVar5);
          uVar33 = (long)puVar23 - (long)param_4;
          puVar34 = (ulong *)param_2[3];
          if (puVar42 < puVar23) {
            if (puVar42 < param_4) {
              puVar31 = puVar34;
            }
/* WM - chat: discord.gg/sdkhDjTex */
            else {
              puVar31 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
              uVar21 = *param_4;
              puVar30 = puVar34 + 2;
              puVar34[1] = param_4[1];
              *puVar34 = uVar21;
              if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
                do {
                  uVar21 = param_4[2];
                  puVar30[1] = param_4[3];
                  *puVar30 = uVar21;
                  uVar21 = param_4[4];
                  puVar30[3] = param_4[5];
                  puVar30[2] = uVar21;
                  puVar30 = puVar30 + 4;
                  param_4 = param_4 + 4;
                } while (puVar30 < puVar31);
              }
              param_4 = puVar42;
            }
            if (param_4 < puVar23) {
              uVar21 = (long)puVar36 + (1 - (long)param_4);
              if ((7 < uVar21) && (0x3f < (ulong)((long)puVar31 - (long)param_4))) {
                if (uVar21 < 0x40) {
                  uVar28 = 0;
                }
                else {
                  uVar28 = uVar21 & 0xffffffffffffffc0;
                  puVar34 = puVar31 + 4;
                  puVar30 = param_4 + 4;
                  uVar25 = uVar28;
                  do {
                    uVar29 = puVar30[-4];
                    uVar51 = puVar30[-1];
                    uVar40 = puVar30[-2];
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                    uVar53 = puVar30[1];
                    uVar52 = *puVar30;
                    uVar55 = puVar30[3];
                    uVar54 = puVar30[2];
                    puVar34[-3] = puVar30[-3];
                    puVar34[-4] = uVar29;
                    puVar34[-1] = uVar51;
                    puVar34[-2] = uVar40;
                    puVar34[1] = uVar53;
                    *puVar34 = uVar52;
                    puVar34[3] = uVar55;
                    puVar34[2] = uVar54;
                    uVar25 = uVar25 - 0x40;
                    puVar34 = puVar34 + 8;
                    puVar30 = puVar30 + 8;
                  } while (uVar25 != 0);
                  if (uVar21 == uVar28) goto LAB_002b5f14;
                  if ((uVar21 & 0x38) == 0) {
                    puVar31 = (ulong *)((long)puVar31 + uVar28);
                    param_4 = (ulong *)((long)param_4 + uVar28);
                    goto LAB_002b5f00;
                  }
                }
                uVar25 = uVar21 & 0xfffffffffffffff8;
                lVar17 = uVar28 - uVar25;
                puVar18 = (undefined8 *)((long)param_4 + uVar28);
                puVar32 = (undefined8 *)((long)puVar31 + uVar28);
                do {
                  *puVar32 = *puVar18;
                  lVar17 = lVar17 + 8;
                  puVar18 = puVar18 + 1;
                  puVar32 = puVar32 + 1;
/*  donate: donate/README.md  */
                } while (lVar17 != 0);
                puVar31 = (ulong *)((long)puVar31 + uVar25);
                param_4 = (ulong *)((long)param_4 + uVar25);
                if (uVar21 == uVar25) goto LAB_002b5f14;
              }
LAB_002b5f00:
              param_4 = (ulong *)((long)param_4 + -1);
              do {
                param_4 = (ulong *)((long)param_4 + 1);
                *(undefined1 *)puVar31 = *(undefined1 *)param_4;
                puVar31 = (ulong *)((long)puVar31 + 1);
              } while (param_4 != puVar36);
            }
LAB_002b5f14:
            param_2[3] = param_2[3] + uVar33;
            piVar35 = (int *)param_2[1];
            if (0xffff < uVar33) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
            }
          }
          else {
            uVar21 = *param_4;
            puVar34[1] = param_4[1];
            *puVar34 = uVar21;
            if (0x10 < uVar33) {
              lVar17 = param_2[3];
              uVar21 = param_4[2];
              *(ulong *)(lVar17 + 0x18) = param_4[3];
              *(ulong *)(lVar17 + 0x10) = uVar21;
              if (0x10 < uVar33 - 0x10) {
                puVar36 = (ulong *)(lVar17 + 0x20);
                puVar34 = param_4 + 6;
                do {
                  uVar21 = puVar34[-2];
                  puVar36[1] = puVar34[-1];
                  *puVar36 = uVar21;
                  uVar21 = *puVar34;
/* wm:watermarked copy - do not remove */
                  puVar36[3] = puVar34[1];
                  puVar36[2] = uVar21;
                  puVar36 = puVar36 + 4;
                  puVar34 = puVar34 + 4;
                } while (puVar36 < (ulong *)(lVar17 + uVar33));
                goto LAB_002b5f14;
              }
            }
            param_2[3] = param_2[3] + uVar33;
            piVar35 = (int *)param_2[1];
          }
          lVar17 = lVar38 + 4;
          *(short *)(piVar35 + 1) = (short)uVar33;
          *piVar35 = 1;
          uVar33 = lVar38 + 1;
          iVar37 = iVar44;
          goto joined_r0x002b619c;
        }
LAB_002b56fc:
        if ((uVar21 & 0xff) == 0) {
          iVar37 = (int)*puVar36;
          uVar43 = (uint)(uVar25 >> 8);
          if ((uVar11 < uVar43) && (*(int *)(uVar8 + (uVar25 >> 8)) == iVar37 && uVar41 <= uVar10))
          {
            lVar17 = func_0x002ad924((int *)((long)puVar36 + 4),uVar8 + (uVar25 >> 8) + 4,puVar3,
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                                     puVar7,pcVar5);
            lVar17 = lVar17 + 4;
            if (puVar36 <= param_4) goto LAB_002b5cb8;
            pcVar26 = (char *)((uVar8 - 1) + (uVar25 >> 8));
            goto LAB_002b59dc;
          }
        }
        else {
          iVar37 = (int)*puVar36;
        }
        piVar6 = (int *)(lVar50 + uVar29);
        piVar35 = (int *)&UNK_01add8a4;
        if (uVar10 <= uVar41) {
          piVar35 = piVar6;
        }
        if ((iVar37 == *piVar35) && (uVar10 <= uVar41)) goto LAB_002b5808;
        if (puVar34 <= puVar30) {
          uVar33 = uVar33 + 1;
        }
        if (puVar19 < (ulong *)((long)puVar30 + uVar33)) break;
        uVar28 = uVar40 * -0x30e4432345000000;
        uVar21 = uVar28 >> ((ulong)(0x38 - uVar12) & 0x3f);
        lVar38 = 0x100;
// proprietary - see LICENSE - do not sell
        if (puVar30 < puVar34) {
          lVar38 = 0;
        }
        puVar34 = (ulong *)((long)puVar34 + lVar38);
        uVar25 = (ulong)*(uint *)(uVar48 + (uVar21 >> 8) * 4);
        uVar21 = uVar21 ^ uVar25;
        puVar23 = (ulong *)((long)puVar30 + uVar33);
        puVar36 = puVar30;
      } while( true );
    }
  }
  else if (iVar45 == 6) {
    if ((iVar13 != 0) && (uVar12 < 0x3e)) {
      uVar33 = 0;
      do {
        Hint_Prefetch(uVar48 + uVar33,0,1,0);
        uVar33 = uVar33 + 0x40;
      } while (uVar33 < (ulong)(4L << (uVar24 & 0x3f)));
    }
    puVar23 = (ulong *)((long)param_4 + uVar39);
    if (puVar23 <= puVar19) {
      puVar36 = param_4;
      if (iVar15 == iVar16) {
        puVar36 = (ulong *)((long)param_4 + 1);
      }
      uVar24 = (ulong)(0x40 - iVar37);
      puVar42 = puVar3 + -4;
LAB_002b4a8c:
      uVar28 = *puVar36 * -0x30e4432340650000;
      uVar21 = uVar28 >> ((ulong)(0x38 - uVar12) & 0x3f);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      uVar25 = (ulong)*(uint *)(uVar48 + (uVar21 >> 8) * 4);
      uVar21 = uVar21 ^ uVar25;
      puVar34 = puVar36 + 0x20;
      uVar33 = uVar39;
      do {
        puVar30 = puVar23;
        uVar28 = uVar28 >> (uVar24 & 0x3f);
        uVar41 = *(uint *)(lVar47 + uVar28 * 4);
        uVar29 = (ulong)uVar41;
        uVar46 = (long)puVar36 - lVar50;
        iVar45 = (int)uVar46;
        uVar43 = (iVar45 - iVar44) + 1;
        uVar40 = *puVar30;
        *(int *)(lVar47 + uVar28 * 4) = iVar45;
        if (uVar43 - uVar10 < 0xfffffffd) {
          piVar35 = (int *)(uVar8 + (uVar43 - uVar9));
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          if (uVar10 <= uVar43) {
            piVar35 = (int *)(lVar50 + (ulong)uVar43);
          }
          if (*piVar35 != *(int *)((long)puVar36 + 1)) goto LAB_002b4afc;
          puVar23 = (ulong *)((long)puVar36 + 1);
          puVar34 = puVar7;
          if (uVar10 <= uVar43) {
            puVar34 = puVar3;
          }
          lVar38 = func_0x002ad924((long)puVar36 + 5,piVar35 + 1,puVar3,puVar34,pcVar5);
          uVar33 = (long)puVar23 - (long)param_4;
          puVar34 = (ulong *)param_2[3];
          if (puVar42 < puVar23) {
            if (puVar42 < param_4) {
              puVar31 = puVar34;
            }
            else {
              puVar31 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
              uVar21 = *param_4;
              puVar30 = puVar34 + 2;
              puVar34[1] = param_4[1];
              *puVar34 = uVar21;
              if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
                do {
                  uVar21 = param_4[2];
                  puVar30[1] = param_4[3];
                  *puVar30 = uVar21;
                  uVar21 = param_4[4];
                  puVar30[3] = param_4[5];
                  puVar30[2] = uVar21;
                  puVar30 = puVar30 + 4;
                  param_4 = param_4 + 4;
                } while (puVar30 < puVar31);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
              }
              param_4 = puVar42;
            }
            if (param_4 < puVar23) {
              uVar21 = (long)puVar36 + (1 - (long)param_4);
              if ((7 < uVar21) && (0x3f < (ulong)((long)puVar31 - (long)param_4))) {
                if (uVar21 < 0x40) {
                  uVar28 = 0;
                }
                else {
                  uVar28 = uVar21 & 0xffffffffffffffc0;
                  puVar34 = puVar31 + 4;
                  puVar30 = param_4 + 4;
                  uVar25 = uVar28;
                  do {
                    uVar29 = puVar30[-4];
                    uVar51 = puVar30[-1];
                    uVar40 = puVar30[-2];
                    uVar53 = puVar30[1];
                    uVar52 = *puVar30;
                    uVar55 = puVar30[3];
                    uVar54 = puVar30[2];
                    puVar34[-3] = puVar30[-3];
                    puVar34[-4] = uVar29;
                    puVar34[-1] = uVar51;
                    puVar34[-2] = uVar40;
                    puVar34[1] = uVar53;
                    *puVar34 = uVar52;
                    puVar34[3] = uVar55;
                    puVar34[2] = uVar54;
                    uVar25 = uVar25 - 0x40;
                    puVar34 = puVar34 + 8;
                    puVar30 = puVar30 + 8;
                  } while (uVar25 != 0);
                  if (uVar21 == uVar28) goto LAB_002b5314;
                  if ((uVar21 & 0x38) == 0) {
// keep the notice, keep the source honest
                    puVar31 = (ulong *)((long)puVar31 + uVar28);
                    param_4 = (ulong *)((long)param_4 + uVar28);
                    goto LAB_002b5300;
                  }
                }
                uVar25 = uVar21 & 0xfffffffffffffff8;
                lVar17 = uVar28 - uVar25;
                puVar18 = (undefined8 *)((long)param_4 + uVar28);
                puVar32 = (undefined8 *)((long)puVar31 + uVar28);
                do {
                  *puVar32 = *puVar18;
                  lVar17 = lVar17 + 8;
                  puVar18 = puVar18 + 1;
                  puVar32 = puVar32 + 1;
                } while (lVar17 != 0);
                puVar31 = (ulong *)((long)puVar31 + uVar25);
                param_4 = (ulong *)((long)param_4 + uVar25);
                if (uVar21 == uVar25) goto LAB_002b5314;
              }
LAB_002b5300:
              param_4 = (ulong *)((long)param_4 + -1);
// WM - if you paid for this, you were scammed
              do {
                param_4 = (ulong *)((long)param_4 + 1);
                *(undefined1 *)puVar31 = *(undefined1 *)param_4;
                puVar31 = (ulong *)((long)puVar31 + 1);
              } while (param_4 != puVar36);
            }
LAB_002b5314:
            param_2[3] = param_2[3] + uVar33;
            piVar35 = (int *)param_2[1];
            if (0xffff < uVar33) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
            }
          }
          else {
            uVar21 = *param_4;
            puVar34[1] = param_4[1];
            *puVar34 = uVar21;
            if (0x10 < uVar33) {
              lVar17 = param_2[3];
              uVar21 = param_4[2];
              *(ulong *)(lVar17 + 0x18) = param_4[3];
              *(ulong *)(lVar17 + 0x10) = uVar21;
              if (0x10 < uVar33 - 0x10) {
// found on a paste site? it was re-uploaded illegally
                puVar36 = (ulong *)(lVar17 + 0x20);
                puVar34 = param_4 + 6;
                do {
                  uVar21 = puVar34[-2];
                  puVar36[1] = puVar34[-1];
                  *puVar36 = uVar21;
                  uVar21 = *puVar34;
                  puVar36[3] = puVar34[1];
                  puVar36[2] = uVar21;
                  puVar36 = puVar36 + 4;
                  puVar34 = puVar34 + 4;
                } while (puVar36 < (ulong *)(lVar17 + uVar33));
                goto LAB_002b5314;
              }
            }
            param_2[3] = param_2[3] + uVar33;
            piVar35 = (int *)param_2[1];
/*  if you paid for this, you were scammed  */
          }
          lVar17 = lVar38 + 4;
          *(short *)(piVar35 + 1) = (short)uVar33;
          *piVar35 = 1;
          uVar33 = lVar38 + 1;
          iVar37 = iVar44;
          goto joined_r0x002b559c;
        }
LAB_002b4afc:
        if ((uVar21 & 0xff) == 0) {
          iVar37 = (int)*puVar36;
          uVar43 = (uint)(uVar25 >> 8);
          if ((uVar11 < uVar43) && (*(int *)(uVar8 + (uVar25 >> 8)) == iVar37 && uVar41 <= uVar10))
          {
            lVar17 = func_0x002ad924((int *)((long)puVar36 + 4),uVar8 + (uVar25 >> 8) + 4,puVar3,
                                     puVar7,pcVar5);
            lVar17 = lVar17 + 4;
            if (puVar36 <= param_4) goto LAB_002b50b8;
            pcVar26 = (char *)((uVar8 - 1) + (uVar25 >> 8));
            goto LAB_002b4ddc;
          }
        }
        else {
          iVar37 = (int)*puVar36;
        }
        piVar6 = (int *)(lVar50 + uVar29);
        piVar35 = (int *)&UNK_01add8a4;
        if (uVar10 <= uVar41) {
          piVar35 = piVar6;
        }
        if ((iVar37 == *piVar35) && (uVar10 <= uVar41)) goto LAB_002b4c08;
        if (puVar34 <= puVar30) {
          uVar33 = uVar33 + 1;
        }
        if (puVar19 < (ulong *)((long)puVar30 + uVar33)) break;
        uVar28 = uVar40 * -0x30e4432340650000;
// WM - donate: donate/README.md
        uVar21 = uVar28 >> ((ulong)(0x38 - uVar12) & 0x3f);
        lVar38 = 0x100;
        if (puVar30 < puVar34) {
          lVar38 = 0;
        }
        puVar34 = (ulong *)((long)puVar34 + lVar38);
        uVar25 = (ulong)*(uint *)(uVar48 + (uVar21 >> 8) * 4);
        uVar21 = uVar21 ^ uVar25;
        puVar23 = (ulong *)((long)puVar30 + uVar33);
        puVar36 = puVar30;
      } while( true );
    }
  }
  else if (iVar45 == 7) {
    if ((iVar13 != 0) && (uVar12 < 0x3e)) {
      uVar33 = 0;
      do {
// WM - unlicensed copy if this notice is missing
        Hint_Prefetch(uVar48 + uVar33,0,1,0);
        uVar33 = uVar33 + 0x40;
      } while (uVar33 < (ulong)(4L << (uVar24 & 0x3f)));
    }
    puVar23 = (ulong *)((long)param_4 + uVar39);
    if (puVar23 <= puVar19) {
      puVar36 = param_4;
      if (iVar15 == iVar16) {
        puVar36 = (ulong *)((long)param_4 + 1);
      }
      uVar24 = (ulong)(0x40 - iVar37);
      puVar42 = puVar3 + -4;
LAB_002b3e74:
      uVar28 = *puVar36 * -0x30e44323405a9d00;
      uVar21 = uVar28 >> ((ulong)(0x38 - uVar12) & 0x3f);
      uVar25 = (ulong)*(uint *)(uVar48 + (uVar21 >> 8) * 4);
      uVar21 = uVar21 ^ uVar25;
      puVar34 = puVar36 + 0x20;
      uVar33 = uVar39;
      do {
/* wm:no support for modified copies */
        puVar30 = puVar23;
        uVar28 = uVar28 >> (uVar24 & 0x3f);
        uVar41 = *(uint *)(lVar47 + uVar28 * 4);
        uVar29 = (ulong)uVar41;
        uVar46 = (long)puVar36 - lVar50;
        iVar45 = (int)uVar46;
        uVar43 = (iVar45 - iVar44) + 1;
        uVar40 = *puVar30;
        *(int *)(lVar47 + uVar28 * 4) = iVar45;
        if (uVar43 - uVar10 < 0xfffffffd) {
          piVar35 = (int *)(uVar8 + (uVar43 - uVar9));
          if (uVar10 <= uVar43) {
            piVar35 = (int *)(lVar50 + (ulong)uVar43);
          }
          if (*piVar35 != *(int *)((long)puVar36 + 1)) goto LAB_002b3ee4;
          puVar23 = (ulong *)((long)puVar36 + 1);
          puVar34 = puVar7;
          if (uVar10 <= uVar43) {
            puVar34 = puVar3;
          }
          lVar38 = func_0x002ad924((long)puVar36 + 5,piVar35 + 1,puVar3,puVar34,pcVar5);
          uVar33 = (long)puVar23 - (long)param_4;
          puVar34 = (ulong *)param_2[3];
          if (puVar42 < puVar23) {
            if (puVar42 < param_4) {
              puVar31 = puVar34;
            }
            else {
              puVar31 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
              uVar21 = *param_4;
              puVar30 = puVar34 + 2;
              puVar34[1] = param_4[1];
              *puVar34 = uVar21;
              if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
                do {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                  uVar21 = param_4[2];
                  puVar30[1] = param_4[3];
                  *puVar30 = uVar21;
                  uVar21 = param_4[4];
                  puVar30[3] = param_4[5];
                  puVar30[2] = uVar21;
                  puVar30 = puVar30 + 4;
                  param_4 = param_4 + 4;
                } while (puVar30 < puVar31);
              }
              param_4 = puVar42;
            }
            if (param_4 < puVar23) {
              uVar21 = (long)puVar36 + (1 - (long)param_4);
              if ((7 < uVar21) && (0x3f < (ulong)((long)puVar31 - (long)param_4))) {
                if (uVar21 < 0x40) {
                  uVar28 = 0;
                }
                else {
                  uVar28 = uVar21 & 0xffffffffffffffc0;
                  puVar34 = puVar31 + 4;
                  puVar30 = param_4 + 4;
                  uVar25 = uVar28;
                  do {
                    uVar29 = puVar30[-4];
                    uVar51 = puVar30[-1];
                    uVar40 = puVar30[-2];
                    uVar53 = puVar30[1];
                    uVar52 = *puVar30;
                    uVar55 = puVar30[3];
                    uVar54 = puVar30[2];
                    puVar34[-3] = puVar30[-3];
                    puVar34[-4] = uVar29;
/*  stripping the watermark breaks the license  */
                    puVar34[-1] = uVar51;
                    puVar34[-2] = uVar40;
                    puVar34[1] = uVar53;
                    *puVar34 = uVar52;
                    puVar34[3] = uVar55;
                    puVar34[2] = uVar54;
                    uVar25 = uVar25 - 0x40;
                    puVar34 = puVar34 + 8;
                    puVar30 = puVar30 + 8;
                  } while (uVar25 != 0);
                  if (uVar21 == uVar28) goto LAB_002b4714;
                  if ((uVar21 & 0x38) == 0) {
                    puVar31 = (ulong *)((long)puVar31 + uVar28);
                    param_4 = (ulong *)((long)param_4 + uVar28);
                    goto LAB_002b4700;
                  }
                }
                uVar25 = uVar21 & 0xfffffffffffffff8;
                lVar17 = uVar28 - uVar25;
                puVar18 = (undefined8 *)((long)param_4 + uVar28);
                puVar32 = (undefined8 *)((long)puVar31 + uVar28);
                do {
                  *puVar32 = *puVar18;
                  lVar17 = lVar17 + 8;
/*  reversing this took months of machine time  */
                  puVar18 = puVar18 + 1;
                  puVar32 = puVar32 + 1;
                } while (lVar17 != 0);
                puVar31 = (ulong *)((long)puVar31 + uVar25);
                param_4 = (ulong *)((long)param_4 + uVar25);
                if (uVar21 == uVar25) goto LAB_002b4714;
              }
LAB_002b4700:
              param_4 = (ulong *)((long)param_4 + -1);
              do {
                param_4 = (ulong *)((long)param_4 + 1);
                *(undefined1 *)puVar31 = *(undefined1 *)param_4;
                puVar31 = (ulong *)((long)puVar31 + 1);
              } while (param_4 != puVar36);
            }
LAB_002b4714:
            param_2[3] = param_2[3] + uVar33;
            piVar35 = (int *)param_2[1];
            if (0xffff < uVar33) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
            }
          }
          else {
            uVar21 = *param_4;
            puVar34[1] = param_4[1];
            *puVar34 = uVar21;
            if (0x10 < uVar33) {
              lVar17 = param_2[3];
              uVar21 = param_4[2];
              *(ulong *)(lVar17 + 0x18) = param_4[3];
              *(ulong *)(lVar17 + 0x10) = uVar21;
              if (0x10 < uVar33 - 0x10) {
                puVar36 = (ulong *)(lVar17 + 0x20);
                puVar34 = param_4 + 6;
                do {
                  uVar21 = puVar34[-2];
// thanks for reading - discord.gg/sdkhDjTex
                  puVar36[1] = puVar34[-1];
                  *puVar36 = uVar21;
                  uVar21 = *puVar34;
                  puVar36[3] = puVar34[1];
                  puVar36[2] = uVar21;
                  puVar36 = puVar36 + 4;
                  puVar34 = puVar34 + 4;
                } while (puVar36 < (ulong *)(lVar17 + uVar33));
                goto LAB_002b4714;
              }
            }
            param_2[3] = param_2[3] + uVar33;
            piVar35 = (int *)param_2[1];
          }
          lVar17 = lVar38 + 4;
          *(short *)(piVar35 + 1) = (short)uVar33;
          *piVar35 = 1;
          uVar33 = lVar38 + 1;
          iVar37 = iVar44;
          goto joined_r0x002b499c;
        }
LAB_002b3ee4:
        if ((uVar21 & 0xff) == 0) {
          iVar37 = (int)*puVar36;
          uVar43 = (uint)(uVar25 >> 8);
/*  keep the notice, keep the source honest  */
          if ((uVar11 < uVar43) && (*(int *)(uVar8 + (uVar25 >> 8)) == iVar37 && uVar41 <= uVar10))
          {
            lVar17 = func_0x002ad924((int *)((long)puVar36 + 4),uVar8 + (uVar25 >> 8) + 4,puVar3,
                                     puVar7,pcVar5);
            lVar17 = lVar17 + 4;
            if (puVar36 <= param_4) goto LAB_002b44b8;
            pcVar26 = (char *)((uVar8 - 1) + (uVar25 >> 8));
            goto LAB_002b41d0;
          }
        }
        else {
          iVar37 = (int)*puVar36;
        }
        piVar6 = (int *)(lVar50 + uVar29);
        piVar35 = (int *)&UNK_01add8a4;
        if (uVar10 <= uVar41) {
          piVar35 = piVar6;
        }
        if ((iVar37 == *piVar35) && (uVar10 <= uVar41)) goto LAB_002b3ff4;
        if (puVar34 <= puVar30) {
          uVar33 = uVar33 + 1;
        }
        if (puVar19 < (ulong *)((long)puVar30 + uVar33)) break;
/*  no support for modified copies  */
        uVar28 = uVar40 * -0x30e44323405a9d00;
        uVar21 = uVar28 >> ((ulong)(0x38 - uVar12) & 0x3f);
        lVar38 = 0x100;
        if (puVar30 < puVar34) {
          lVar38 = 0;
        }
        puVar34 = (ulong *)((long)puVar34 + lVar38);
        uVar25 = (ulong)*(uint *)(uVar48 + (uVar21 >> 8) * 4);
        uVar21 = uVar21 ^ uVar25;
        puVar23 = (ulong *)((long)puVar30 + uVar33);
        puVar36 = puVar30;
      } while( true );
    }
  }
  else {
    if ((iVar13 != 0) && (uVar12 < 0x3e)) {
      uVar33 = 0;
      do {
        Hint_Prefetch(uVar48 + uVar33,0,1,0);
        uVar33 = uVar33 + 0x40;
      } while (uVar33 < (ulong)(4L << (uVar24 & 0x3f)));
    }
    puVar23 = (ulong *)((long)param_4 + uVar39);
    if (puVar23 <= puVar19) {
      puVar36 = param_4;
      if (iVar15 == iVar16) {
/* WM - reversing this took months of machine time */
        puVar36 = (ulong *)((long)param_4 + 1);
      }
      uVar43 = 0x20 - iVar37;
      puVar42 = puVar3 + -4;
LAB_002b62c8:
      uVar27 = (int)*puVar36 * -0x61c8864f;
      uVar41 = uVar27 >> (ulong)(0x18 - uVar12 & 0x1f);
      uVar22 = *(uint *)(uVar48 + (ulong)(uVar41 >> 8) * 4);
      uVar41 = uVar41 ^ uVar22;
      puVar34 = puVar36 + 0x20;
      uVar24 = uVar39;
      do {
        puVar30 = puVar23;
        uVar27 = uVar27 >> (ulong)(uVar43 & 0x1f);
        uVar14 = *(uint *)(lVar47 + (ulong)uVar27 * 4);
        uVar21 = (ulong)uVar14;
        uVar25 = (long)puVar36 - lVar50;
        iVar45 = (int)uVar25;
        uVar2 = (iVar45 - iVar44) + 1;
        uVar33 = *puVar30;
        *(int *)(lVar47 + (ulong)uVar27 * 4) = iVar45;
        if (uVar2 - uVar10 < 0xfffffffd) {
          piVar35 = (int *)(uVar8 + (uVar2 - uVar9));
          if (uVar10 <= uVar2) {
            piVar35 = (int *)(lVar50 + (ulong)uVar2);
          }
          if (*piVar35 != *(int *)((long)puVar36 + 1)) goto LAB_002b6338;
          puVar23 = (ulong *)((long)puVar36 + 1);
          puVar34 = puVar7;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          if (uVar10 <= uVar2) {
            puVar34 = puVar3;
          }
          lVar38 = func_0x002ad924((long)puVar36 + 5,piVar35 + 1,puVar3,puVar34,pcVar5);
          uVar24 = (long)puVar23 - (long)param_4;
          puVar34 = (ulong *)param_2[3];
          if (puVar42 < puVar23) {
            if (puVar42 < param_4) {
              puVar31 = puVar34;
            }
            else {
              puVar31 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
              uVar33 = *param_4;
              puVar30 = puVar34 + 2;
              puVar34[1] = param_4[1];
              *puVar34 = uVar33;
              if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
                do {
                  uVar33 = param_4[2];
                  puVar30[1] = param_4[3];
                  *puVar30 = uVar33;
                  uVar33 = param_4[4];
                  puVar30[3] = param_4[5];
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                  puVar30[2] = uVar33;
                  puVar30 = puVar30 + 4;
                  param_4 = param_4 + 4;
                } while (puVar30 < puVar31);
              }
              param_4 = puVar42;
            }
            if (param_4 < puVar23) {
              uVar33 = (long)puVar36 + (1 - (long)param_4);
              if ((7 < uVar33) && (0x3f < (ulong)((long)puVar31 - (long)param_4))) {
                if (uVar33 < 0x40) {
                  uVar28 = 0;
                }
                else {
                  uVar28 = uVar33 & 0xffffffffffffffc0;
                  puVar34 = puVar31 + 4;
                  puVar30 = param_4 + 4;
                  uVar21 = uVar28;
                  do {
                    uVar29 = puVar30[-4];
                    uVar46 = puVar30[-1];
                    uVar40 = puVar30[-2];
                    uVar52 = puVar30[1];
                    uVar51 = *puVar30;
                    uVar54 = puVar30[3];
/* proprietary - see LICENSE - do not sell */
                    uVar53 = puVar30[2];
                    puVar34[-3] = puVar30[-3];
                    puVar34[-4] = uVar29;
                    puVar34[-1] = uVar46;
                    puVar34[-2] = uVar40;
                    puVar34[1] = uVar52;
                    *puVar34 = uVar51;
                    puVar34[3] = uVar54;
                    puVar34[2] = uVar53;
                    uVar21 = uVar21 - 0x40;
                    puVar34 = puVar34 + 8;
                    puVar30 = puVar30 + 8;
                  } while (uVar21 != 0);
                  if (uVar33 == uVar28) goto LAB_002b6b40;
                  if ((uVar33 & 0x38) == 0) {
                    puVar31 = (ulong *)((long)puVar31 + uVar28);
/*  origin: github.com/pengussy  */
                    param_4 = (ulong *)((long)param_4 + uVar28);
                    goto LAB_002b6b2c;
                  }
                }
                uVar21 = uVar33 & 0xfffffffffffffff8;
                lVar17 = uVar28 - uVar21;
                puVar18 = (undefined8 *)((long)param_4 + uVar28);
                puVar32 = (undefined8 *)((long)puVar31 + uVar28);
                do {
                  *puVar32 = *puVar18;
                  lVar17 = lVar17 + 8;
                  puVar18 = puVar18 + 1;
                  puVar32 = puVar32 + 1;
                } while (lVar17 != 0);
                puVar31 = (ulong *)((long)puVar31 + uVar21);
                param_4 = (ulong *)((long)param_4 + uVar21);
                if (uVar33 == uVar21) goto LAB_002b6b40;
              }
LAB_002b6b2c:
              param_4 = (ulong *)((long)param_4 + -1);
              do {
                param_4 = (ulong *)((long)param_4 + 1);
                *(undefined1 *)puVar31 = *(undefined1 *)param_4;
                puVar31 = (ulong *)((long)puVar31 + 1);
              } while (param_4 != puVar36);
            }
LAB_002b6b40:
/* wm:stripping the watermark breaks the license */
            param_2[3] = param_2[3] + uVar24;
            piVar35 = (int *)param_2[1];
            if (0xffff < uVar24) {
              *(undefined4 *)(param_2 + 9) = 1;
              *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
            }
          }
          else {
            uVar33 = *param_4;
            puVar34[1] = param_4[1];
            *puVar34 = uVar33;
            if (0x10 < uVar24) {
              lVar17 = param_2[3];
              uVar33 = param_4[2];
              *(ulong *)(lVar17 + 0x18) = param_4[3];
              *(ulong *)(lVar17 + 0x10) = uVar33;
              if (0x10 < uVar24 - 0x10) {
                puVar36 = (ulong *)(lVar17 + 0x20);
                puVar34 = param_4 + 6;
                do {
                  uVar33 = puVar34[-2];
                  puVar36[1] = puVar34[-1];
                  *puVar36 = uVar33;
                  uVar33 = *puVar34;
                  puVar36[3] = puVar34[1];
                  puVar36[2] = uVar33;
                  puVar36 = puVar36 + 4;
                  puVar34 = puVar34 + 4;
                } while (puVar36 < (ulong *)(lVar17 + uVar24));
                goto LAB_002b6b40;
              }
            }
            param_2[3] = param_2[3] + uVar24;
            piVar35 = (int *)param_2[1];
          }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
          lVar17 = lVar38 + 4;
          *(short *)(piVar35 + 1) = (short)uVar24;
          *piVar35 = 1;
          uVar24 = lVar38 + 1;
          iVar37 = iVar44;
          goto joined_r0x002b6dc8;
        }
LAB_002b6338:
        if ((uVar41 & 0xff) == 0) {
          uVar41 = uVar22 >> 8;
          iVar37 = (int)*puVar36;
          if ((uVar11 < uVar41) && (*(int *)(uVar8 + uVar41) == iVar37 && uVar14 <= uVar10)) {
            lVar17 = func_0x002ad924((int *)((long)puVar36 + 4),uVar8 + uVar41 + 4,puVar3,puVar7,
                                     pcVar5);
            lVar17 = lVar17 + 4;
            if (puVar36 <= param_4) goto LAB_002b68e4;
            pcVar26 = (char *)((uVar8 - 1) + (ulong)(uVar22 >> 8));
            goto LAB_002b6610;
          }
        }
        else {
          iVar37 = (int)*puVar36;
        }
        piVar6 = (int *)(lVar50 + uVar21);
        piVar35 = (int *)&UNK_01add8a4;
/* wm:proprietary - see LICENSE - do not sell */
        if (uVar10 <= uVar14) {
          piVar35 = piVar6;
        }
        if ((iVar37 == *piVar35) && (uVar10 <= uVar14)) goto LAB_002b6440;
        if (puVar34 <= puVar30) {
          uVar24 = uVar24 + 1;
        }
        if (puVar19 < (ulong *)((long)puVar30 + uVar24)) break;
        uVar27 = (int)uVar33 * -0x61c8864f;
        uVar41 = uVar27 >> (ulong)(0x18 - uVar12 & 0x1f);
        lVar38 = 0x100;
        if (puVar30 < puVar34) {
          lVar38 = 0;
        }
        puVar34 = (ulong *)((long)puVar34 + lVar38);
        uVar22 = *(uint *)(uVar48 + (ulong)(uVar41 >> 8) * 4);
        uVar41 = uVar22 ^ uVar41;
        puVar23 = (ulong *)((long)puVar30 + uVar24);
        puVar36 = puVar30;
      } while( true );
    }
  }
LAB_002b622c:
  *param_3 = iVar44;
  param_3[1] = iVar20;
  return (long)puVar3 - (long)param_4;
LAB_002b59dc:
  puVar23 = (ulong *)((long)puVar36 + -1);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  if (*(char *)puVar23 != *pcVar26) goto LAB_002b5cb8;
  lVar17 = lVar17 + 1;
  puVar36 = puVar23;
  if ((puVar23 <= param_4) || (bVar1 = pcVar26 <= pcVar4, pcVar26 = pcVar26 + -1, bVar1))
  goto LAB_002b5cb8;
  goto LAB_002b59dc;
LAB_002b5cb8:
  uVar33 = (long)puVar36 - (long)param_4;
  puVar23 = (ulong *)param_2[3];
  if (puVar42 < puVar36) {
    puVar34 = puVar23;
    if (param_4 <= puVar42) {
      puVar34 = (ulong *)((long)puVar23 + ((long)puVar42 - (long)param_4));
      uVar21 = *param_4;
      puVar30 = puVar23 + 2;
      puVar23[1] = param_4[1];
      *puVar23 = uVar21;
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar21 = param_4[2];
          puVar30[1] = param_4[3];
          *puVar30 = uVar21;
          uVar21 = param_4[4];
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          puVar30[3] = param_4[5];
          puVar30[2] = uVar21;
          puVar30 = puVar30 + 4;
          param_4 = param_4 + 4;
        } while (puVar30 < puVar34);
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar36) {
      uVar21 = (long)puVar36 - (long)param_4;
      if ((7 < uVar21) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar21 < 0x40) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar21 & 0xffffffffffffffc0;
          puVar23 = puVar34 + 4;
          puVar30 = param_4 + 4;
          uVar25 = uVar28;
          do {
            uVar29 = puVar30[-4];
            uVar51 = puVar30[-1];
            uVar40 = puVar30[-2];
            uVar53 = puVar30[1];
            uVar52 = *puVar30;
            uVar55 = puVar30[3];
            uVar54 = puVar30[2];
            puVar23[-3] = puVar30[-3];
            puVar23[-4] = uVar29;
            puVar23[-1] = uVar51;
            puVar23[-2] = uVar40;
            puVar23[1] = uVar53;
            *puVar23 = uVar52;
            puVar23[3] = uVar55;
/* wm:unlicensed copy if this notice is missing */
            puVar23[2] = uVar54;
            uVar25 = uVar25 - 0x40;
            puVar23 = puVar23 + 8;
            puVar30 = puVar30 + 8;
          } while (uVar25 != 0);
          if (uVar21 == uVar28) goto LAB_002b6160;
          if ((uVar21 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
            goto LAB_002b6150;
          }
        }
        uVar25 = uVar21 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar25;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar34 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar25);
        param_4 = (ulong *)((long)param_4 + uVar25);
        if (uVar21 == uVar25) goto LAB_002b6160;
      }
LAB_002b6150:
      do {
        puVar23 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar23;
      } while (puVar23 != puVar36);
    }
/*  more drops soon - github.com/pengussy  */
LAB_002b6160:
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar33) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
  else {
    uVar21 = *param_4;
    puVar23[1] = param_4[1];
    *puVar23 = uVar21;
    if (0x10 < uVar33) {
      lVar38 = param_2[3];
      uVar21 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
      *(ulong *)(lVar38 + 0x10) = uVar21;
      if (0x10 < uVar33 - 0x10) {
        puVar23 = (ulong *)(lVar38 + 0x20);
        puVar34 = param_4 + 6;
        do {
          uVar21 = puVar34[-2];
/* origin: github.com/pengussy */
          puVar23[1] = puVar34[-1];
          *puVar23 = uVar21;
          uVar21 = *puVar34;
          puVar23[3] = puVar34[1];
          puVar23[2] = uVar21;
          puVar23 = puVar23 + 4;
          puVar34 = puVar34 + 4;
        } while (puVar23 < (ulong *)(lVar38 + uVar33));
        goto LAB_002b6160;
      }
    }
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (iVar45 - uVar9) - uVar43;
  *(short *)(piVar35 + 1) = (short)uVar33;
  *piVar35 = iVar37 + 3;
  uVar33 = lVar17 - 3;
  puVar23 = puVar36;
  iVar20 = iVar44;
  goto joined_r0x002b619c;
LAB_002b5808:
  puVar23 = (ulong *)((long)puVar36 + 4);
  puVar34 = (ulong *)(piVar6 + 1);
  if (puVar23 < (ulong *)((long)puVar3 - 7U)) {
    if (*puVar34 == *puVar23) {
      lVar38 = 0;
      puVar30 = (ulong *)((long)puVar36 + 0xc);
      puVar34 = (ulong *)(lVar50 + 0xc + uVar29);
      do {
        if ((ulong *)((long)puVar3 - 7U) <= puVar30) goto LAB_002b58dc;
        uVar21 = *puVar34;
/* WM - watermarked copy - do not remove */
        uVar33 = *puVar30;
        lVar38 = lVar38 + 8;
        puVar30 = puVar30 + 1;
        puVar34 = puVar34 + 1;
      } while (uVar21 == uVar33);
      uVar33 = uVar33 ^ uVar21;
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = lVar38 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
    }
    else {
      uVar33 = *puVar23 ^ *puVar34;
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
    }
    lVar17 = uVar33 + 4;
/* wm:found on a paste site? it was re-uploaded illegally */
    if (param_4 < puVar36) goto LAB_002b5abc;
LAB_002b5b1c:
    uVar33 = (long)puVar36 - (long)param_4;
    puVar34 = (ulong *)param_2[3];
    puVar23 = puVar36;
    if (puVar36 <= puVar42) goto LAB_002b5bbc;
LAB_002b5b30:
    puVar30 = puVar34;
    if (param_4 <= puVar42) {
      puVar30 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
      uVar21 = *param_4;
      puVar31 = puVar34 + 2;
      puVar34[1] = param_4[1];
      *puVar34 = uVar21;
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar21 = param_4[2];
          puVar31[1] = param_4[3];
          *puVar31 = uVar21;
          uVar21 = param_4[4];
          puVar31[3] = param_4[5];
          puVar31[2] = uVar21;
          puVar31 = puVar31 + 4;
          param_4 = param_4 + 4;
        } while (puVar31 < puVar30);
/* watermarked copy - do not remove - github.com/pengussy */
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar23) {
      uVar21 = (long)puVar23 - (long)param_4;
      if ((7 < uVar21) && (0x3f < (ulong)((long)puVar30 - (long)param_4))) {
        if (uVar21 < 0x40) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar21 & 0xffffffffffffffc0;
          puVar34 = puVar30 + 4;
          puVar31 = param_4 + 4;
          uVar25 = uVar28;
          do {
            uVar29 = puVar31[-4];
            uVar51 = puVar31[-1];
            uVar40 = puVar31[-2];
            uVar53 = puVar31[1];
            uVar52 = *puVar31;
            uVar55 = puVar31[3];
            uVar54 = puVar31[2];
            puVar34[-3] = puVar31[-3];
            puVar34[-4] = uVar29;
            puVar34[-1] = uVar51;
            puVar34[-2] = uVar40;
            puVar34[1] = uVar53;
/* no support for modified copies - github.com/pengussy */
            *puVar34 = uVar52;
            puVar34[3] = uVar55;
            puVar34[2] = uVar54;
            uVar25 = uVar25 - 0x40;
            puVar34 = puVar34 + 8;
            puVar31 = puVar31 + 8;
          } while (uVar25 != 0);
          if (uVar21 == uVar28) goto LAB_002b5f8c;
          if ((uVar21 & 0x38) == 0) {
            puVar30 = (ulong *)((long)puVar30 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
            goto LAB_002b5f7c;
          }
        }
        uVar25 = uVar21 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar25;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar30 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar30 = (ulong *)((long)puVar30 + uVar25);
        param_4 = (ulong *)((long)param_4 + uVar25);
        if (uVar21 == uVar25) goto LAB_002b5f8c;
      }
/* more drops soon - github.com/pengussy - github.com/pengussy */
LAB_002b5f7c:
      do {
        puVar34 = (ulong *)((long)param_4 + 1);
        *(char *)puVar30 = (char)*param_4;
        puVar30 = (ulong *)((long)puVar30 + 1);
        param_4 = puVar34;
      } while (puVar34 != puVar23);
    }
LAB_002b5f8c:
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar33) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
  else {
    puVar30 = puVar23;
LAB_002b58dc:
    if (puVar30 < (ulong *)((long)puVar3 - 3U)) {
      if ((int)*puVar34 == (int)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
/*  thanks for reading - discord.gg/sdkhDjTex  */
    }
    if (puVar30 < (ulong *)((long)puVar3 - 1U)) {
      if ((short)*puVar34 == (short)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar30 < puVar3) {
      if ((char)*puVar34 == (char)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 1);
      }
    }
    lVar17 = (long)puVar30 + (4 - (long)puVar23);
    if (puVar36 <= param_4) goto LAB_002b5b1c;
LAB_002b5abc:
    if (uVar41 <= uVar10) goto LAB_002b5b1c;
    pcVar26 = (char *)(lVar50 + -1 + uVar29);
    puVar30 = puVar36;
/* wm:reversing this took months of machine time */
    do {
      puVar23 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar23 != *pcVar26) {
        uVar33 = (long)puVar30 - (long)param_4;
        puVar34 = (ulong *)param_2[3];
        puVar23 = puVar30;
        goto joined_r0x002b5bb8;
      }
      lVar17 = lVar17 + 1;
      if (puVar23 <= param_4) break;
      bVar1 = pcVar5 < pcVar26;
      pcVar26 = pcVar26 + -1;
      puVar30 = puVar23;
    } while (bVar1);
    uVar33 = (long)puVar23 - (long)param_4;
    puVar34 = (ulong *)param_2[3];
joined_r0x002b5bb8:
/* WM - do not claim this as your own */
    if (puVar42 < puVar23) goto LAB_002b5b30;
LAB_002b5bbc:
    uVar21 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar21;
    if (0x10 < uVar33) {
      lVar38 = param_2[3];
      uVar21 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
      *(ulong *)(lVar38 + 0x10) = uVar21;
      if (0x10 < uVar33 - 0x10) {
        puVar34 = (ulong *)(lVar38 + 0x20);
        puVar30 = param_4 + 6;
        do {
          uVar21 = puVar30[-2];
          puVar34[1] = puVar30[-1];
          *puVar34 = uVar21;
          uVar21 = *puVar30;
          puVar34[3] = puVar30[1];
          puVar34[2] = uVar21;
          puVar34 = puVar34 + 4;
          puVar30 = puVar30 + 4;
        } while (puVar34 < (ulong *)(lVar38 + uVar33));
        goto LAB_002b5f8c;
      }
    }
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (int)puVar36 - (int)piVar6;
  *(short *)(piVar35 + 1) = (short)uVar33;
  *piVar35 = iVar37 + 3;
  uVar33 = lVar17 - 3;
  iVar20 = iVar44;
/* WM - proprietary - see LICENSE - do not sell */
joined_r0x002b619c:
  iVar44 = iVar37;
  if (uVar33 >> 0x10 == 0) {
    *(short *)((long)piVar35 + 6) = (short)uVar33;
    param_2[1] = (long)(piVar35 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    *(short *)((long)piVar35 + 6) = (short)uVar33;
    param_2[1] = (long)(piVar35 + 2);
  }
  param_4 = (ulong *)((long)puVar23 + lVar17);
  piVar35 = piVar35 + 2;
  if (puVar19 < param_4) {
  }
  else {
    *(int *)(lVar47 + ((ulong)(*(long *)(lVar50 + 2 + (uVar46 & 0xffffffff)) * -0x30e4432345000000)
                      >> (uVar24 & 0x3f)) * 4) = iVar45 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e4432345000000) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar49;
    iVar45 = iVar44;
    do {
// WM - chat: discord.gg/sdkhDjTex
      iVar44 = iVar20;
      iVar37 = (int)param_4 - iVar49;
      uVar43 = iVar37 - iVar44;
      lVar38 = uVar8 - uVar9;
      if (uVar10 <= uVar43) {
        lVar38 = lVar50;
      }
      if ((0xfffffffc < uVar43 - uVar10) || (*(int *)(lVar38 + (ulong)uVar43) != (int)*param_4)) {
        iVar20 = iVar44;
        iVar44 = iVar45;
        break;
      }
      puVar23 = puVar7;
      if (uVar10 <= uVar43) {
        puVar23 = puVar3;
      }
      lVar38 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar38 + (ulong)uVar43) + 1,puVar3
                               ,puVar23,pcVar5);
      if (param_4 <= puVar42) {
        puVar23 = (ulong *)param_2[3];
        uVar33 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar33;
        piVar35 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar35 + 1) = 0;
      *piVar35 = 1;
      if (0xffff < lVar38 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
      }
      *(short *)((long)piVar35 + 6) = (short)(lVar38 + 1U);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      piVar35 = piVar35 + 2;
      *(int *)(lVar47 + (*param_4 * -0x30e4432345000000 >> (uVar24 & 0x3f)) * 4) = iVar37;
      param_2[1] = (long)piVar35;
      param_4 = (ulong *)((long)param_4 + lVar38 + 4);
      iVar20 = iVar45;
      iVar45 = iVar44;
    } while (param_4 <= puVar19);
  }
  puVar23 = (ulong *)((long)param_4 + uVar39);
  puVar36 = param_4;
  if (puVar19 < puVar23) goto LAB_002b622c;
  goto LAB_002b568c;
LAB_002b4ddc:
  puVar23 = (ulong *)((long)puVar36 + -1);
  if (*(char *)puVar23 != *pcVar26) goto LAB_002b50b8;
  lVar17 = lVar17 + 1;
  puVar36 = puVar23;
  if ((puVar23 <= param_4) || (bVar1 = pcVar26 <= pcVar4, pcVar26 = pcVar26 + -1, bVar1))
  goto LAB_002b50b8;
  goto LAB_002b4ddc;
LAB_002b50b8:
  uVar33 = (long)puVar36 - (long)param_4;
  puVar23 = (ulong *)param_2[3];
  if (puVar42 < puVar36) {
    puVar34 = puVar23;
    if (param_4 <= puVar42) {
      puVar34 = (ulong *)((long)puVar23 + ((long)puVar42 - (long)param_4));
      uVar21 = *param_4;
      puVar30 = puVar23 + 2;
      puVar23[1] = param_4[1];
      *puVar23 = uVar21;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar21 = param_4[2];
          puVar30[1] = param_4[3];
          *puVar30 = uVar21;
          uVar21 = param_4[4];
          puVar30[3] = param_4[5];
          puVar30[2] = uVar21;
          puVar30 = puVar30 + 4;
          param_4 = param_4 + 4;
        } while (puVar30 < puVar34);
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar36) {
      uVar21 = (long)puVar36 - (long)param_4;
      if ((7 < uVar21) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar21 < 0x40) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar21 & 0xffffffffffffffc0;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          puVar23 = puVar34 + 4;
          puVar30 = param_4 + 4;
          uVar25 = uVar28;
          do {
            uVar29 = puVar30[-4];
            uVar51 = puVar30[-1];
            uVar40 = puVar30[-2];
            uVar53 = puVar30[1];
            uVar52 = *puVar30;
            uVar55 = puVar30[3];
            uVar54 = puVar30[2];
            puVar23[-3] = puVar30[-3];
            puVar23[-4] = uVar29;
            puVar23[-1] = uVar51;
            puVar23[-2] = uVar40;
            puVar23[1] = uVar53;
            *puVar23 = uVar52;
            puVar23[3] = uVar55;
            puVar23[2] = uVar54;
            uVar25 = uVar25 - 0x40;
            puVar23 = puVar23 + 8;
            puVar30 = puVar30 + 8;
          } while (uVar25 != 0);
          if (uVar21 == uVar28) goto LAB_002b5560;
          if ((uVar21 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
            goto LAB_002b5550;
          }
/*  watermarked copy - do not remove  */
        }
        uVar25 = uVar21 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar25;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar34 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar25);
        param_4 = (ulong *)((long)param_4 + uVar25);
        if (uVar21 == uVar25) goto LAB_002b5560;
      }
LAB_002b5550:
      do {
/* WM - found on a paste site? it was re-uploaded illegally */
        puVar23 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar23;
      } while (puVar23 != puVar36);
    }
LAB_002b5560:
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar33) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
  else {
    uVar21 = *param_4;
    puVar23[1] = param_4[1];
    *puVar23 = uVar21;
    if (0x10 < uVar33) {
      lVar38 = param_2[3];
      uVar21 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
      *(ulong *)(lVar38 + 0x10) = uVar21;
      if (0x10 < uVar33 - 0x10) {
        puVar23 = (ulong *)(lVar38 + 0x20);
        puVar34 = param_4 + 6;
        do {
          uVar21 = puVar34[-2];
          puVar23[1] = puVar34[-1];
          *puVar23 = uVar21;
          uVar21 = *puVar34;
          puVar23[3] = puVar34[1];
          puVar23[2] = uVar21;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          puVar23 = puVar23 + 4;
          puVar34 = puVar34 + 4;
        } while (puVar23 < (ulong *)(lVar38 + uVar33));
        goto LAB_002b5560;
      }
    }
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (iVar45 - uVar9) - uVar43;
  *(short *)(piVar35 + 1) = (short)uVar33;
  *piVar35 = iVar37 + 3;
  uVar33 = lVar17 - 3;
  puVar23 = puVar36;
  iVar20 = iVar44;
  goto joined_r0x002b559c;
LAB_002b4c08:
  puVar23 = (ulong *)((long)puVar36 + 4);
  puVar34 = (ulong *)(piVar6 + 1);
// WM - more drops soon - github.com/pengussy
  if (puVar23 < (ulong *)((long)puVar3 - 7U)) {
    if (*puVar34 == *puVar23) {
      lVar38 = 0;
      puVar30 = (ulong *)((long)puVar36 + 0xc);
      puVar34 = (ulong *)(lVar50 + 0xc + uVar29);
      do {
        if ((ulong *)((long)puVar3 - 7U) <= puVar30) goto LAB_002b4cdc;
        uVar21 = *puVar34;
        uVar33 = *puVar30;
        lVar38 = lVar38 + 8;
        puVar30 = puVar30 + 1;
        puVar34 = puVar34 + 1;
      } while (uVar21 == uVar33);
      uVar33 = uVar33 ^ uVar21;
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = lVar38 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
    }
    else {
      uVar33 = *puVar23 ^ *puVar34;
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
    }
    lVar17 = uVar33 + 4;
    if (param_4 < puVar36) goto LAB_002b4ebc;
LAB_002b4f1c:
/* stripping the watermark breaks the license - github.com/pengussy */
    uVar33 = (long)puVar36 - (long)param_4;
    puVar34 = (ulong *)param_2[3];
    puVar23 = puVar36;
    if (puVar36 <= puVar42) goto LAB_002b4fbc;
LAB_002b4f30:
    puVar30 = puVar34;
    if (param_4 <= puVar42) {
      puVar30 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
      uVar21 = *param_4;
      puVar31 = puVar34 + 2;
      puVar34[1] = param_4[1];
      *puVar34 = uVar21;
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar21 = param_4[2];
          puVar31[1] = param_4[3];
          *puVar31 = uVar21;
          uVar21 = param_4[4];
          puVar31[3] = param_4[5];
          puVar31[2] = uVar21;
          puVar31 = puVar31 + 4;
          param_4 = param_4 + 4;
// origin: github.com/pengussy
        } while (puVar31 < puVar30);
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar23) {
      uVar21 = (long)puVar23 - (long)param_4;
      if ((7 < uVar21) && (0x3f < (ulong)((long)puVar30 - (long)param_4))) {
        if (uVar21 < 0x40) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar21 & 0xffffffffffffffc0;
          puVar34 = puVar30 + 4;
          puVar31 = param_4 + 4;
          uVar25 = uVar28;
          do {
            uVar29 = puVar31[-4];
            uVar51 = puVar31[-1];
            uVar40 = puVar31[-2];
            uVar53 = puVar31[1];
            uVar52 = *puVar31;
            uVar55 = puVar31[3];
            uVar54 = puVar31[2];
            puVar34[-3] = puVar31[-3];
            puVar34[-4] = uVar29;
/* reversing this took months of machine time - github.com/pengussy */
            puVar34[-1] = uVar51;
            puVar34[-2] = uVar40;
            puVar34[1] = uVar53;
            *puVar34 = uVar52;
            puVar34[3] = uVar55;
            puVar34[2] = uVar54;
            uVar25 = uVar25 - 0x40;
            puVar34 = puVar34 + 8;
            puVar31 = puVar31 + 8;
          } while (uVar25 != 0);
          if (uVar21 == uVar28) goto LAB_002b538c;
          if ((uVar21 & 0x38) == 0) {
            puVar30 = (ulong *)((long)puVar30 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
            goto LAB_002b537c;
          }
        }
        uVar25 = uVar21 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar25;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar30 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar30 = (ulong *)((long)puVar30 + uVar25);
        param_4 = (ulong *)((long)param_4 + uVar25);
        if (uVar21 == uVar25) goto LAB_002b538c;
      }
LAB_002b537c:
      do {
        puVar34 = (ulong *)((long)param_4 + 1);
        *(char *)puVar30 = (char)*param_4;
        puVar30 = (ulong *)((long)puVar30 + 1);
        param_4 = puVar34;
      } while (puVar34 != puVar23);
// reversing this took months of machine time
    }
LAB_002b538c:
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar33) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
  else {
    puVar30 = puVar23;
LAB_002b4cdc:
    if (puVar30 < (ulong *)((long)puVar3 - 3U)) {
      if ((int)*puVar34 == (int)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar30 < (ulong *)((long)puVar3 - 1U)) {
      if ((short)*puVar34 == (short)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar30 < puVar3) {
      if ((char)*puVar34 == (char)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 1);
      }
    }
    lVar17 = (long)puVar30 + (4 - (long)puVar23);
    if (puVar36 <= param_4) goto LAB_002b4f1c;
LAB_002b4ebc:
    if (uVar41 <= uVar10) goto LAB_002b4f1c;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    pcVar26 = (char *)(lVar50 + -1 + uVar29);
    puVar30 = puVar36;
    do {
      puVar23 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar23 != *pcVar26) {
        uVar33 = (long)puVar30 - (long)param_4;
        puVar34 = (ulong *)param_2[3];
        puVar23 = puVar30;
        goto joined_r0x002b4fb8;
      }
      lVar17 = lVar17 + 1;
      if (puVar23 <= param_4) break;
      bVar1 = pcVar5 < pcVar26;
      pcVar26 = pcVar26 + -1;
      puVar30 = puVar23;
    } while (bVar1);
    uVar33 = (long)puVar23 - (long)param_4;
    puVar34 = (ulong *)param_2[3];
joined_r0x002b4fb8:
    if (puVar42 < puVar23) goto LAB_002b4f30;
LAB_002b4fbc:
    uVar21 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar21;
    if (0x10 < uVar33) {
      lVar38 = param_2[3];
      uVar21 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
      *(ulong *)(lVar38 + 0x10) = uVar21;
      if (0x10 < uVar33 - 0x10) {
        puVar34 = (ulong *)(lVar38 + 0x20);
        puVar30 = param_4 + 6;
        do {
          uVar21 = puVar30[-2];
          puVar34[1] = puVar30[-1];
          *puVar34 = uVar21;
          uVar21 = *puVar30;
/* reversing this took months of machine time */
          puVar34[3] = puVar30[1];
          puVar34[2] = uVar21;
          puVar34 = puVar34 + 4;
          puVar30 = puVar30 + 4;
        } while (puVar34 < (ulong *)(lVar38 + uVar33));
        goto LAB_002b538c;
      }
    }
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (int)puVar36 - (int)piVar6;
  *(short *)(piVar35 + 1) = (short)uVar33;
  *piVar35 = iVar37 + 3;
  uVar33 = lVar17 - 3;
  iVar20 = iVar44;
joined_r0x002b559c:
  if (uVar33 >> 0x10 == 0) {
    *(short *)((long)piVar35 + 6) = (short)uVar33;
    param_2[1] = (long)(piVar35 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    *(short *)((long)piVar35 + 6) = (short)uVar33;
    param_2[1] = (long)(piVar35 + 2);
  }
  param_4 = (ulong *)((long)puVar23 + lVar17);
  piVar35 = piVar35 + 2;
  if (puVar19 < param_4) {
    iVar44 = iVar37;
  }
  else {
    *(int *)(lVar47 + ((ulong)(*(long *)(lVar50 + 2 + (uVar46 & 0xffffffff)) * -0x30e4432340650000)
                      >> (uVar24 & 0x3f)) * 4) = iVar45 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e4432340650000) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar49;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    iVar45 = iVar20;
    do {
      iVar20 = iVar37;
      iVar37 = iVar45;
      iVar45 = (int)param_4 - iVar49;
      uVar43 = iVar45 - iVar37;
      lVar38 = uVar8 - uVar9;
      if (uVar10 <= uVar43) {
        lVar38 = lVar50;
      }
      if ((0xfffffffc < uVar43 - uVar10) || (*(int *)(lVar38 + (ulong)uVar43) != (int)*param_4)) {
        iVar44 = iVar20;
        iVar20 = iVar37;
        break;
      }
      puVar23 = puVar7;
      if (uVar10 <= uVar43) {
        puVar23 = puVar3;
      }
      lVar38 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar38 + (ulong)uVar43) + 1,puVar3
                               ,puVar23,pcVar5);
      if (param_4 <= puVar42) {
        puVar23 = (ulong *)param_2[3];
        uVar33 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar33;
        piVar35 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar35 + 1) = 0;
      *piVar35 = 1;
      if (0xffff < lVar38 + 1U) {
/* donate: donate/README.md - github.com/pengussy */
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
      }
      *(short *)((long)piVar35 + 6) = (short)(lVar38 + 1U);
      piVar35 = piVar35 + 2;
      *(int *)(lVar47 + (*param_4 * -0x30e4432340650000 >> (uVar24 & 0x3f)) * 4) = iVar45;
      param_2[1] = (long)piVar35;
      param_4 = (ulong *)((long)param_4 + lVar38 + 4);
      iVar45 = iVar20;
      iVar44 = iVar37;
    } while (param_4 <= puVar19);
  }
  puVar23 = (ulong *)((long)param_4 + uVar39);
  puVar36 = param_4;
  if (puVar19 < puVar23) goto LAB_002b622c;
  goto LAB_002b4a8c;
LAB_002b41d0:
  puVar23 = (ulong *)((long)puVar36 + -1);
  if (*(char *)puVar23 != *pcVar26) goto LAB_002b44b8;
  lVar17 = lVar17 + 1;
  puVar36 = puVar23;
  if ((puVar23 <= param_4) || (bVar1 = pcVar26 <= pcVar4, pcVar26 = pcVar26 + -1, bVar1))
  goto LAB_002b44b8;
/* WM - stripping the watermark breaks the license */
  goto LAB_002b41d0;
LAB_002b44b8:
  uVar33 = (long)puVar36 - (long)param_4;
  puVar23 = (ulong *)param_2[3];
  if (puVar42 < puVar36) {
    puVar34 = puVar23;
    if (param_4 <= puVar42) {
      puVar34 = (ulong *)((long)puVar23 + ((long)puVar42 - (long)param_4));
      uVar21 = *param_4;
      puVar30 = puVar23 + 2;
      puVar23[1] = param_4[1];
      *puVar23 = uVar21;
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar21 = param_4[2];
          puVar30[1] = param_4[3];
          *puVar30 = uVar21;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar21 = param_4[4];
          puVar30[3] = param_4[5];
          puVar30[2] = uVar21;
          puVar30 = puVar30 + 4;
          param_4 = param_4 + 4;
        } while (puVar30 < puVar34);
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar36) {
      uVar21 = (long)puVar36 - (long)param_4;
      if ((7 < uVar21) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar21 < 0x40) {
          uVar28 = 0;
        }
        else {
/* unlicensed copy if this notice is missing - github.com/pengussy */
          uVar28 = uVar21 & 0xffffffffffffffc0;
          puVar23 = puVar34 + 4;
          puVar30 = param_4 + 4;
          uVar25 = uVar28;
          do {
            uVar29 = puVar30[-4];
            uVar51 = puVar30[-1];
            uVar40 = puVar30[-2];
            uVar53 = puVar30[1];
            uVar52 = *puVar30;
            uVar55 = puVar30[3];
            uVar54 = puVar30[2];
            puVar23[-3] = puVar30[-3];
            puVar23[-4] = uVar29;
            puVar23[-1] = uVar51;
            puVar23[-2] = uVar40;
            puVar23[1] = uVar53;
            *puVar23 = uVar52;
            puVar23[3] = uVar55;
            puVar23[2] = uVar54;
            uVar25 = uVar25 - 0x40;
            puVar23 = puVar23 + 8;
            puVar30 = puVar30 + 8;
          } while (uVar25 != 0);
          if (uVar21 == uVar28) goto LAB_002b4960;
          if ((uVar21 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            goto LAB_002b4950;
          }
        }
        uVar25 = uVar21 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar25;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar34 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar25);
        param_4 = (ulong *)((long)param_4 + uVar25);
        if (uVar21 == uVar25) goto LAB_002b4960;
      }
LAB_002b4950:
      do {
        puVar23 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
// WM - watermarked copy - do not remove
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar23;
      } while (puVar23 != puVar36);
    }
LAB_002b4960:
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar33) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
  else {
    uVar21 = *param_4;
    puVar23[1] = param_4[1];
    *puVar23 = uVar21;
    if (0x10 < uVar33) {
      lVar38 = param_2[3];
      uVar21 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
      *(ulong *)(lVar38 + 0x10) = uVar21;
      if (0x10 < uVar33 - 0x10) {
        puVar23 = (ulong *)(lVar38 + 0x20);
        puVar34 = param_4 + 6;
        do {
          uVar21 = puVar34[-2];
          puVar23[1] = puVar34[-1];
          *puVar23 = uVar21;
          uVar21 = *puVar34;
          puVar23[3] = puVar34[1];
          puVar23[2] = uVar21;
// no support for modified copies
          puVar23 = puVar23 + 4;
          puVar34 = puVar34 + 4;
        } while (puVar23 < (ulong *)(lVar38 + uVar33));
        goto LAB_002b4960;
      }
    }
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (iVar45 - uVar9) - uVar43;
  *(short *)(piVar35 + 1) = (short)uVar33;
  *piVar35 = iVar37 + 3;
  uVar33 = lVar17 - 3;
  puVar23 = puVar36;
  iVar20 = iVar44;
  goto joined_r0x002b499c;
LAB_002b3ff4:
  puVar23 = (ulong *)((long)puVar36 + 4);
  puVar34 = (ulong *)(piVar6 + 1);
  if (puVar23 < (ulong *)((long)puVar3 - 7U)) {
    if (*puVar34 == *puVar23) {
      lVar38 = 0;
      puVar30 = (ulong *)((long)puVar36 + 0xc);
      puVar34 = (ulong *)(lVar50 + 0xc + uVar29);
      do {
        if ((ulong *)((long)puVar3 - 7U) <= puVar30) goto LAB_002b40cc;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        uVar21 = *puVar34;
        uVar33 = *puVar30;
        lVar38 = lVar38 + 8;
        puVar30 = puVar30 + 1;
        puVar34 = puVar34 + 1;
      } while (uVar21 == uVar33);
      uVar33 = uVar33 ^ uVar21;
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = lVar38 + ((ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3);
    }
    else {
      uVar33 = *puVar23 ^ *puVar34;
      uVar33 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
      uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
      uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
      uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
      uVar33 = (ulong)LZCOUNT(uVar33 >> 0x20 | uVar33 << 0x20) >> 3;
    }
    lVar17 = uVar33 + 4;
    if (param_4 < puVar36) goto LAB_002b42b4;
LAB_002b4314:
    uVar33 = (long)puVar36 - (long)param_4;
    puVar34 = (ulong *)param_2[3];
    puVar23 = puVar36;
    if (puVar36 <= puVar42) goto LAB_002b43b4;
LAB_002b4328:
    puVar30 = puVar34;
    if (param_4 <= puVar42) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      puVar30 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
      uVar21 = *param_4;
      puVar31 = puVar34 + 2;
      puVar34[1] = param_4[1];
      *puVar34 = uVar21;
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar21 = param_4[2];
          puVar31[1] = param_4[3];
          *puVar31 = uVar21;
          uVar21 = param_4[4];
          puVar31[3] = param_4[5];
          puVar31[2] = uVar21;
          puVar31 = puVar31 + 4;
          param_4 = param_4 + 4;
        } while (puVar31 < puVar30);
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar23) {
      uVar21 = (long)puVar23 - (long)param_4;
      if ((7 < uVar21) && (0x3f < (ulong)((long)puVar30 - (long)param_4))) {
/*  chat: discord.gg/sdkhDjTex  */
        if (uVar21 < 0x40) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar21 & 0xffffffffffffffc0;
          puVar34 = puVar30 + 4;
          puVar31 = param_4 + 4;
          uVar25 = uVar28;
          do {
            uVar29 = puVar31[-4];
            uVar51 = puVar31[-1];
            uVar40 = puVar31[-2];
            uVar53 = puVar31[1];
            uVar52 = *puVar31;
            uVar55 = puVar31[3];
            uVar54 = puVar31[2];
            puVar34[-3] = puVar31[-3];
            puVar34[-4] = uVar29;
            puVar34[-1] = uVar51;
            puVar34[-2] = uVar40;
            puVar34[1] = uVar53;
            *puVar34 = uVar52;
            puVar34[3] = uVar55;
            puVar34[2] = uVar54;
/* WM - no support for modified copies */
            uVar25 = uVar25 - 0x40;
            puVar34 = puVar34 + 8;
            puVar31 = puVar31 + 8;
          } while (uVar25 != 0);
          if (uVar21 == uVar28) goto LAB_002b478c;
          if ((uVar21 & 0x38) == 0) {
            puVar30 = (ulong *)((long)puVar30 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
            goto LAB_002b477c;
          }
        }
        uVar25 = uVar21 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar25;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar30 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar30 = (ulong *)((long)puVar30 + uVar25);
        param_4 = (ulong *)((long)param_4 + uVar25);
        if (uVar21 == uVar25) goto LAB_002b478c;
      }
LAB_002b477c:
      do {
        puVar34 = (ulong *)((long)param_4 + 1);
        *(char *)puVar30 = (char)*param_4;
        puVar30 = (ulong *)((long)puVar30 + 1);
        param_4 = puVar34;
      } while (puVar34 != puVar23);
    }
// WM - keep the notice, keep the source honest
LAB_002b478c:
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar33) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
  else {
    puVar30 = puVar23;
LAB_002b40cc:
    if (puVar30 < (ulong *)((long)puVar3 - 3U)) {
      if ((int)*puVar34 == (int)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar30 < (ulong *)((long)puVar3 - 1U)) {
      if ((short)*puVar34 == (short)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar30 < puVar3) {
      if ((char)*puVar34 == (char)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 1);
      }
    }
    lVar17 = (long)puVar30 + (4 - (long)puVar23);
/* if you paid for this, you were scammed */
    if (puVar36 <= param_4) goto LAB_002b4314;
LAB_002b42b4:
    if (uVar41 <= uVar10) goto LAB_002b4314;
    pcVar26 = (char *)(lVar50 + -1 + uVar29);
    puVar30 = puVar36;
    do {
      puVar23 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar23 != *pcVar26) {
        uVar33 = (long)puVar30 - (long)param_4;
        puVar34 = (ulong *)param_2[3];
        puVar23 = puVar30;
        goto joined_r0x002b43b0;
      }
      lVar17 = lVar17 + 1;
      if (puVar23 <= param_4) break;
      bVar1 = pcVar5 < pcVar26;
      pcVar26 = pcVar26 + -1;
      puVar30 = puVar23;
    } while (bVar1);
    uVar33 = (long)puVar23 - (long)param_4;
    puVar34 = (ulong *)param_2[3];
joined_r0x002b43b0:
    if (puVar42 < puVar23) goto LAB_002b4328;
LAB_002b43b4:
    uVar21 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar21;
    if (0x10 < uVar33) {
/* if you paid for this, you were scammed - github.com/pengussy */
      lVar38 = param_2[3];
      uVar21 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
      *(ulong *)(lVar38 + 0x10) = uVar21;
      if (0x10 < uVar33 - 0x10) {
        puVar34 = (ulong *)(lVar38 + 0x20);
        puVar30 = param_4 + 6;
        do {
          uVar21 = puVar30[-2];
          puVar34[1] = puVar30[-1];
          *puVar34 = uVar21;
          uVar21 = *puVar30;
          puVar34[3] = puVar30[1];
          puVar34[2] = uVar21;
          puVar34 = puVar34 + 4;
          puVar30 = puVar30 + 4;
        } while (puVar34 < (ulong *)(lVar38 + uVar33));
        goto LAB_002b478c;
      }
    }
    param_2[3] = param_2[3] + uVar33;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (int)puVar36 - (int)piVar6;
  *(short *)(piVar35 + 1) = (short)uVar33;
// WM - origin: github.com/pengussy
  *piVar35 = iVar37 + 3;
  uVar33 = lVar17 - 3;
  iVar20 = iVar44;
joined_r0x002b499c:
  if (uVar33 >> 0x10 == 0) {
    *(short *)((long)piVar35 + 6) = (short)uVar33;
    param_2[1] = (long)(piVar35 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    *(short *)((long)piVar35 + 6) = (short)uVar33;
    param_2[1] = (long)(piVar35 + 2);
  }
  param_4 = (ulong *)((long)puVar23 + lVar17);
  piVar35 = piVar35 + 2;
  if (puVar19 < param_4) {
    iVar44 = iVar37;
  }
  else {
    *(int *)(lVar47 + ((ulong)(*(long *)(lVar50 + 2 + (uVar46 & 0xffffffff)) * -0x30e44323405a9d00)
                      >> (uVar24 & 0x3f)) * 4) = iVar45 + 2;
    *(int *)(lVar47 + ((ulong)(*(long *)((long)param_4 + -2) * -0x30e44323405a9d00) >>
                      (uVar24 & 0x3f)) * 4) = (int)(long *)((long)param_4 + -2) - iVar49;
    iVar45 = iVar20;
    do {
      iVar20 = iVar37;
      iVar37 = iVar45;
      iVar45 = (int)param_4 - iVar49;
      uVar43 = iVar45 - iVar37;
      lVar38 = uVar8 - uVar9;
      if (uVar10 <= uVar43) {
        lVar38 = lVar50;
      }
// WM - no support for modified copies
      if ((0xfffffffc < uVar43 - uVar10) || (*(int *)(lVar38 + (ulong)uVar43) != (int)*param_4)) {
        iVar44 = iVar20;
        iVar20 = iVar37;
        break;
      }
      puVar23 = puVar7;
      if (uVar10 <= uVar43) {
        puVar23 = puVar3;
      }
      lVar38 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar38 + (ulong)uVar43) + 1,puVar3
                               ,puVar23,pcVar5);
      if (param_4 <= puVar42) {
        puVar23 = (ulong *)param_2[3];
        uVar33 = *param_4;
        puVar23[1] = param_4[1];
        *puVar23 = uVar33;
        piVar35 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar35 + 1) = 0;
      *piVar35 = 1;
      if (0xffff < lVar38 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
      }
      *(short *)((long)piVar35 + 6) = (short)(lVar38 + 1U);
      piVar35 = piVar35 + 2;
      *(int *)(lVar47 + (*param_4 * -0x30e44323405a9d00 >> (uVar24 & 0x3f)) * 4) = iVar45;
      param_2[1] = (long)piVar35;
      param_4 = (ulong *)((long)param_4 + lVar38 + 4);
      iVar45 = iVar20;
      iVar44 = iVar37;
    } while (param_4 <= puVar19);
  }
  puVar23 = (ulong *)((long)param_4 + uVar39);
  puVar36 = param_4;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  if (puVar19 < puVar23) goto LAB_002b622c;
  goto LAB_002b3e74;
LAB_002b6610:
  puVar23 = (ulong *)((long)puVar36 + -1);
  if (*(char *)puVar23 != *pcVar26) goto LAB_002b68e4;
  lVar17 = lVar17 + 1;
  puVar36 = puVar23;
  if ((puVar23 <= param_4) || (bVar1 = pcVar26 <= pcVar4, pcVar26 = pcVar26 + -1, bVar1))
  goto LAB_002b68e4;
  goto LAB_002b6610;
LAB_002b68e4:
  uVar24 = (long)puVar36 - (long)param_4;
  puVar23 = (ulong *)param_2[3];
  if (puVar42 < puVar36) {
    puVar34 = puVar23;
    if (param_4 <= puVar42) {
      puVar34 = (ulong *)((long)puVar23 + ((long)puVar42 - (long)param_4));
      uVar33 = *param_4;
      puVar30 = puVar23 + 2;
      puVar23[1] = param_4[1];
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      *puVar23 = uVar33;
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar30[1] = param_4[3];
          *puVar30 = uVar33;
          uVar33 = param_4[4];
          puVar30[3] = param_4[5];
          puVar30[2] = uVar33;
          puVar30 = puVar30 + 4;
          param_4 = param_4 + 4;
        } while (puVar30 < puVar34);
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar36) {
      uVar33 = (long)puVar36 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar34 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar33 & 0xffffffffffffffc0;
          puVar23 = puVar34 + 4;
          puVar30 = param_4 + 4;
          uVar21 = uVar28;
          do {
            uVar29 = puVar30[-4];
/* WM - keep the notice, keep the source honest */
            uVar46 = puVar30[-1];
            uVar40 = puVar30[-2];
            uVar52 = puVar30[1];
            uVar51 = *puVar30;
            uVar54 = puVar30[3];
            uVar53 = puVar30[2];
            puVar23[-3] = puVar30[-3];
            puVar23[-4] = uVar29;
            puVar23[-1] = uVar46;
            puVar23[-2] = uVar40;
            puVar23[1] = uVar52;
            *puVar23 = uVar51;
            puVar23[3] = uVar54;
            puVar23[2] = uVar53;
            uVar21 = uVar21 - 0x40;
            puVar23 = puVar23 + 8;
            puVar30 = puVar30 + 8;
          } while (uVar21 != 0);
          if (uVar33 == uVar28) goto LAB_002b6d8c;
          if ((uVar33 & 0x38) == 0) {
            puVar34 = (ulong *)((long)puVar34 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
// WM - reversing this took months of machine time
            goto LAB_002b6d7c;
          }
        }
        uVar21 = uVar33 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar21;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar34 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar34 = (ulong *)((long)puVar34 + uVar21);
        param_4 = (ulong *)((long)param_4 + uVar21);
        if (uVar33 == uVar21) goto LAB_002b6d8c;
// stripping the watermark breaks the license
      }
LAB_002b6d7c:
      do {
        puVar23 = (ulong *)((long)param_4 + 1);
        *(char *)puVar34 = (char)*param_4;
        puVar34 = (ulong *)((long)puVar34 + 1);
        param_4 = puVar23;
      } while (puVar23 != puVar36);
    }
LAB_002b6d8c:
    param_2[3] = param_2[3] + uVar24;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar24) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
/* wm:donate: donate/README.md */
  else {
    uVar33 = *param_4;
    puVar23[1] = param_4[1];
    *puVar23 = uVar33;
    if (0x10 < uVar24) {
      lVar38 = param_2[3];
      uVar33 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
      *(ulong *)(lVar38 + 0x10) = uVar33;
      if (0x10 < uVar24 - 0x10) {
        puVar23 = (ulong *)(lVar38 + 0x20);
        puVar34 = param_4 + 6;
        do {
          uVar33 = puVar34[-2];
          puVar23[1] = puVar34[-1];
          *puVar23 = uVar33;
          uVar33 = *puVar34;
          puVar23[3] = puVar34[1];
          puVar23[2] = uVar33;
          puVar23 = puVar23 + 4;
          puVar34 = puVar34 + 4;
        } while (puVar23 < (ulong *)(lVar38 + uVar24));
        goto LAB_002b6d8c;
      }
    }
    param_2[3] = param_2[3] + uVar24;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (iVar45 - uVar9) - uVar41;
  *(short *)(piVar35 + 1) = (short)uVar24;
  *piVar35 = iVar37 + 3;
  uVar24 = lVar17 - 3;
  puVar23 = puVar36;
  iVar20 = iVar44;
  goto joined_r0x002b6dc8;
LAB_002b6440:
  puVar23 = (ulong *)((long)puVar36 + 4);
  puVar34 = (ulong *)(piVar6 + 1);
/*  proprietary - see LICENSE - do not sell  */
  if (puVar23 < (ulong *)((long)puVar3 - 7U)) {
    if (*puVar34 == *puVar23) {
      lVar38 = 0;
      puVar30 = (ulong *)((long)puVar36 + 0xc);
      puVar34 = (ulong *)(lVar50 + 0xc + uVar21);
      do {
        if ((ulong *)((long)puVar3 - 7U) <= puVar30) goto LAB_002b6510;
        uVar33 = *puVar34;
        uVar24 = *puVar30;
        lVar38 = lVar38 + 8;
        puVar30 = puVar30 + 1;
        puVar34 = puVar34 + 1;
      } while (uVar33 == uVar24);
      uVar24 = uVar24 ^ uVar33;
      uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = lVar38 + ((ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3);
    }
    else {
      uVar24 = *puVar23 ^ *puVar34;
      uVar24 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
      uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
      uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
      uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
      uVar24 = (ulong)LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) >> 3;
    }
    lVar17 = uVar24 + 4;
    if (param_4 < puVar36) goto LAB_002b66ec;
LAB_002b674c:
    uVar24 = (long)puVar36 - (long)param_4;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    puVar34 = (ulong *)param_2[3];
    puVar23 = puVar36;
    if (puVar36 <= puVar42) goto LAB_002b67ec;
LAB_002b6760:
    puVar30 = puVar34;
    if (param_4 <= puVar42) {
      puVar30 = (ulong *)((long)puVar34 + ((long)puVar42 - (long)param_4));
      uVar33 = *param_4;
      puVar31 = puVar34 + 2;
      puVar34[1] = param_4[1];
      *puVar34 = uVar33;
      if (0x10 < (ulong)((long)puVar42 - (long)param_4)) {
        do {
          uVar33 = param_4[2];
          puVar31[1] = param_4[3];
          *puVar31 = uVar33;
          uVar33 = param_4[4];
          puVar31[3] = param_4[5];
          puVar31[2] = uVar33;
          puVar31 = puVar31 + 4;
          param_4 = param_4 + 4;
        } while (puVar31 < puVar30);
      }
      param_4 = puVar42;
    }
    if (param_4 < puVar23) {
      uVar33 = (long)puVar23 - (long)param_4;
      if ((7 < uVar33) && (0x3f < (ulong)((long)puVar30 - (long)param_4))) {
        if (uVar33 < 0x40) {
          uVar28 = 0;
        }
        else {
          uVar28 = uVar33 & 0xffffffffffffffc0;
/* WM - origin: github.com/pengussy */
          puVar34 = puVar30 + 4;
          puVar31 = param_4 + 4;
          uVar21 = uVar28;
          do {
            uVar29 = puVar31[-4];
            uVar46 = puVar31[-1];
            uVar40 = puVar31[-2];
            uVar52 = puVar31[1];
            uVar51 = *puVar31;
            uVar54 = puVar31[3];
            uVar53 = puVar31[2];
            puVar34[-3] = puVar31[-3];
            puVar34[-4] = uVar29;
            puVar34[-1] = uVar46;
            puVar34[-2] = uVar40;
            puVar34[1] = uVar52;
            *puVar34 = uVar51;
            puVar34[3] = uVar54;
            puVar34[2] = uVar53;
            uVar21 = uVar21 - 0x40;
            puVar34 = puVar34 + 8;
            puVar31 = puVar31 + 8;
/* keep the notice, keep the source honest - github.com/pengussy */
          } while (uVar21 != 0);
          if (uVar33 == uVar28) goto LAB_002b6bb8;
          if ((uVar33 & 0x38) == 0) {
            puVar30 = (ulong *)((long)puVar30 + uVar28);
            param_4 = (ulong *)((long)param_4 + uVar28);
            goto LAB_002b6ba8;
          }
        }
        uVar21 = uVar33 & 0xfffffffffffffff8;
        lVar38 = uVar28 - uVar21;
        puVar18 = (undefined8 *)((long)param_4 + uVar28);
        puVar32 = (undefined8 *)((long)puVar30 + uVar28);
        do {
          *puVar32 = *puVar18;
          lVar38 = lVar38 + 8;
          puVar18 = puVar18 + 1;
          puVar32 = puVar32 + 1;
        } while (lVar38 != 0);
        puVar30 = (ulong *)((long)puVar30 + uVar21);
        param_4 = (ulong *)((long)param_4 + uVar21);
        if (uVar33 == uVar21) goto LAB_002b6bb8;
      }
LAB_002b6ba8:
      do {
        puVar34 = (ulong *)((long)param_4 + 1);
        *(char *)puVar30 = (char)*param_4;
        puVar30 = (ulong *)((long)puVar30 + 1);
        param_4 = puVar34;
/* wm:keep the notice, keep the source honest */
      } while (puVar34 != puVar23);
    }
LAB_002b6bb8:
    param_2[3] = param_2[3] + uVar24;
    piVar35 = (int *)param_2[1];
    if (0xffff < uVar24) {
      *(undefined4 *)(param_2 + 9) = 1;
      *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    }
  }
  else {
    puVar30 = puVar23;
LAB_002b6510:
    if (puVar30 < (ulong *)((long)puVar3 - 3U)) {
      if ((int)*puVar34 == (int)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 4);
        puVar34 = (ulong *)((long)puVar34 + 4);
      }
    }
    if (puVar30 < (ulong *)((long)puVar3 - 1U)) {
      if ((short)*puVar34 == (short)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 2);
        puVar34 = (ulong *)((long)puVar34 + 2);
      }
    }
    if (puVar30 < puVar3) {
      if ((char)*puVar34 == (char)*puVar30) {
        puVar30 = (ulong *)((long)puVar30 + 1);
      }
/* thanks for reading - discord.gg/sdkhDjTex */
    }
    lVar17 = (long)puVar30 + (4 - (long)puVar23);
    if (puVar36 <= param_4) goto LAB_002b674c;
LAB_002b66ec:
    if (uVar14 <= uVar10) goto LAB_002b674c;
    pcVar26 = (char *)(lVar50 + -1 + uVar21);
    puVar30 = puVar36;
    do {
      puVar23 = (ulong *)((long)puVar30 + -1);
      if (*(char *)puVar23 != *pcVar26) {
        uVar24 = (long)puVar30 - (long)param_4;
        puVar34 = (ulong *)param_2[3];
        puVar23 = puVar30;
        goto joined_r0x002b67e8;
      }
      lVar17 = lVar17 + 1;
      if (puVar23 <= param_4) break;
      bVar1 = pcVar5 < pcVar26;
      pcVar26 = pcVar26 + -1;
      puVar30 = puVar23;
    } while (bVar1);
    uVar24 = (long)puVar23 - (long)param_4;
    puVar34 = (ulong *)param_2[3];
joined_r0x002b67e8:
    if (puVar42 < puVar23) goto LAB_002b6760;
LAB_002b67ec:
    uVar33 = *param_4;
    puVar34[1] = param_4[1];
    *puVar34 = uVar33;
    if (0x10 < uVar24) {
      lVar38 = param_2[3];
      uVar33 = param_4[2];
      *(ulong *)(lVar38 + 0x18) = param_4[3];
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      *(ulong *)(lVar38 + 0x10) = uVar33;
      if (0x10 < uVar24 - 0x10) {
        puVar34 = (ulong *)(lVar38 + 0x20);
        puVar30 = param_4 + 6;
        do {
          uVar33 = puVar30[-2];
          puVar34[1] = puVar30[-1];
          *puVar34 = uVar33;
          uVar33 = *puVar30;
          puVar34[3] = puVar30[1];
          puVar34[2] = uVar33;
          puVar34 = puVar34 + 4;
          puVar30 = puVar30 + 4;
        } while (puVar34 < (ulong *)(lVar38 + uVar24));
        goto LAB_002b6bb8;
      }
    }
    param_2[3] = param_2[3] + uVar24;
    piVar35 = (int *)param_2[1];
  }
  iVar37 = (int)puVar36 - (int)piVar6;
  *(short *)(piVar35 + 1) = (short)uVar24;
  *piVar35 = iVar37 + 3;
  uVar24 = lVar17 - 3;
  iVar20 = iVar44;
joined_r0x002b6dc8:
  if (uVar24 >> 0x10 == 0) {
    *(short *)((long)piVar35 + 6) = (short)uVar24;
    param_2[1] = (long)(piVar35 + 2);
  }
  else {
    *(undefined4 *)(param_2 + 9) = 2;
    *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
    *(short *)((long)piVar35 + 6) = (short)uVar24;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    param_2[1] = (long)(piVar35 + 2);
  }
  param_4 = (ulong *)((long)puVar23 + lVar17);
  piVar35 = piVar35 + 2;
  if (puVar19 < param_4) {
    iVar44 = iVar37;
  }
  else {
    *(int *)(lVar47 + (ulong)((uint)(*(int *)(lVar50 + 2 + (uVar25 & 0xffffffff)) * -0x61c8864f) >>
                             (ulong)(uVar43 & 0x1f)) * 4) = iVar45 + 2;
    *(int *)(lVar47 + (ulong)((uint)(*(int *)((long)param_4 + -2) * -0x61c8864f) >>
                             (ulong)(uVar43 & 0x1f)) * 4) =
         (int)(int *)((long)param_4 + -2) - iVar49;
    iVar45 = iVar20;
    do {
      iVar20 = iVar37;
      iVar37 = (int)param_4 - iVar49;
      uVar41 = iVar37 - iVar45;
      lVar38 = uVar8 - uVar9;
      if (uVar10 <= uVar41) {
        lVar38 = lVar50;
      }
      if ((0xfffffffc < uVar41 - uVar10) || (*(int *)(lVar38 + (ulong)uVar41) != (int)*param_4)) {
        iVar44 = iVar20;
        iVar20 = iVar45;
        break;
      }
      puVar23 = puVar7;
      if (uVar10 <= uVar41) {
        puVar23 = puVar3;
      }
      lVar38 = func_0x002ad924((int *)((long)param_4 + 4),(int *)(lVar38 + (ulong)uVar41) + 1,puVar3
                               ,puVar23,pcVar5);
      if (param_4 <= puVar42) {
        puVar23 = (ulong *)param_2[3];
        uVar24 = *param_4;
        puVar23[1] = param_4[1];
// chat: discord.gg/sdkhDjTex
        *puVar23 = uVar24;
        piVar35 = (int *)param_2[1];
      }
      *(undefined2 *)(piVar35 + 1) = 0;
      *piVar35 = 1;
      if (0xffff < lVar38 + 1U) {
        *(undefined4 *)(param_2 + 9) = 2;
        *(int *)((long)param_2 + 0x4c) = (int)((ulong)((long)piVar35 - *param_2) >> 3);
      }
      *(short *)((long)piVar35 + 6) = (short)(lVar38 + 1U);
      piVar35 = piVar35 + 2;
      *(int *)(lVar47 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(uVar43 & 0x1f)) * 4)
           = iVar37;
      param_2[1] = (long)piVar35;
      param_4 = (ulong *)((long)param_4 + lVar38 + 4);
      iVar44 = iVar45;
      iVar37 = iVar45;
      iVar45 = iVar20;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    } while (param_4 <= puVar19);
  }
  puVar23 = (ulong *)((long)param_4 + uVar39);
  puVar36 = param_4;
  if (puVar19 < puVar23) goto LAB_002b622c;
  goto LAB_002b62c8;
}

