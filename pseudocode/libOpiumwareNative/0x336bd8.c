/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x336bd8:ba09a504e6
 */

ulong FUN_00336bd8(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  ushort uVar7;
  short sVar8;
  undefined2 uVar10;
  undefined2 uVar9;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  byte bVar18;
  undefined2 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  long lVar26;
  ulong uVar27;
  ushort *puVar28;
  ushort *puVar29;
  byte bVar30;
  uint uVar31;
  byte bVar32;
  int iVar33;
/*  unlicensed copy if this notice is missing  */
  byte *pbVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  short *psVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  short sVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
/*  donate: donate/README.md  */
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long alStack_d0 [6];
  undefined8 uStack_a0;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar13 = (int)param_2;
    if ((iVar13 < *(int *)(param_1 + 0x14)) && (*(int *)(param_1 + 0x3c) < 2)) {
      lVar26 = *(long *)(param_1 + 8);
      lVar15 = lVar26 + *(int *)(param_1 + 0x18);
      if (*(int *)(param_1 + 0x3c) == 0) {
        pbVar3 = (byte *)(lVar15 + (long)iVar13 * 2);
        uVar14 = (uint)*pbVar3 << 9 | (uint)pbVar3[1] << 1;
        if (uVar14 == ((uint)pbVar3[2] << 9 | (uint)pbVar3[3] << 1)) goto LAB_00337100;
      }
      else {
        puVar2 = (uint *)(lVar15 + (long)iVar13 * 4);
        uVar14 = *puVar2;
        uVar25 = puVar2[1];
        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
        uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
        uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8;
        if (uVar14 == (uVar25 >> 0x10 | uVar25 << 0x10)) goto LAB_00337100;
      }
      uVar14 = uVar14 + *(int *)(param_1 + 0x20);
      *param_3 = 0;
      if ((int)uVar14 < 0) {
        return 0;
      }
      pbVar3 = (byte *)(lVar26 + (ulong)uVar14);
      uVar14 = (uint)CONCAT11(*pbVar3,pbVar3[1]);
      if (0 < (int)uVar14) {
        uVar16 = (ulong)uVar14 & 0xffff;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar14 = (uint)(uVar16 * 2) & 0xfffe;
        pbVar34 = pbVar3 + uVar16 * 2 + 10;
        bVar18 = *pbVar34;
        bVar4 = pbVar34[1];
        uVar25 = (uint)(*(ushort *)(pbVar34 + -2) >> 8) |
                 (*(ushort *)(pbVar34 + -2) & 0xff00ff) << 8;
        lVar15 = func_0x002fd6d8((uVar25 + uVar14) * 0xe + 0xe);
        if (lVar15 == 0) {
          return 0;
        }
        bVar30 = 0;
        bVar32 = 0;
        puVar29 = (ushort *)(pbVar34 + (ulong)CONCAT11(bVar18,bVar4) + 2);
        uVar27 = (ulong)(uVar25 + 1);
        lVar26 = uVar16 * 0x1c + 0xc;
        uVar40 = uVar27;
        do {
          if (bVar32 == 0) {
            bVar30 = (byte)*puVar29;
            if ((bVar30 >> 3 & 1) == 0) {
              bVar32 = 0;
              puVar29 = (ushort *)((long)puVar29 + 1);
            }
/* WM - no support for modified copies */
            else {
              bVar32 = *(byte *)((long)puVar29 + 1);
              puVar29 = puVar29 + 1;
            }
          }
          else {
            bVar32 = bVar32 - 1;
          }
          *(byte *)(lVar15 + lVar26) = bVar30;
          lVar26 = lVar26 + 0xe;
          uVar40 = uVar40 - 1;
        } while (uVar40 != 0);
        sVar43 = 0;
        psVar39 = (short *)(lVar15 + uVar16 * 0x1c);
        uVar40 = uVar27;
        do {
          bVar18 = *(byte *)(psVar39 + 6);
          if ((bVar18 >> 1 & 1) == 0) {
            puVar28 = puVar29;
            if ((bVar18 >> 4 & 1) == 0) {
              puVar28 = puVar29 + 1;
              sVar43 = sVar43 + (*puVar29 >> 8 | *puVar29 << 8);
            }
          }
          else {
            puVar28 = (ushort *)((long)puVar29 + 1);
            uVar5 = -(ushort)(byte)*puVar29;
            if ((bVar18 & 0x10) != 0) {
// WM - stripping the watermark breaks the license
              uVar5 = (ushort)(byte)*puVar29;
            }
            sVar43 = uVar5 + sVar43;
          }
          *psVar39 = sVar43;
          uVar40 = uVar40 - 1;
          puVar29 = puVar28;
          psVar39 = psVar39 + 7;
        } while (uVar40 != 0);
        sVar43 = 0;
        pbVar34 = (byte *)(lVar15 + uVar16 * 0x1c + 0xc);
        do {
          bVar18 = *pbVar34;
          if ((bVar18 >> 2 & 1) == 0) {
            puVar29 = puVar28;
            if ((bVar18 >> 5 & 1) == 0) {
              puVar29 = puVar28 + 1;
              sVar43 = sVar43 + (*puVar28 >> 8 | *puVar28 << 8);
            }
          }
          else {
            puVar29 = (ushort *)((long)puVar28 + 1);
            uVar5 = -(ushort)(byte)*puVar28;
            if ((bVar18 & 0x20) != 0) {
              uVar5 = (ushort)(byte)*puVar28;
            }
            sVar43 = uVar5 + sVar43;
          }
          *(short *)(pbVar34 + -10) = sVar43;
          pbVar34 = pbVar34 + 0xe;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          uVar27 = uVar27 - 1;
          puVar28 = puVar29;
        } while (uVar27 != 0);
        iVar33 = 0;
        iVar13 = 0;
        uVar20 = 0;
        uVar22 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar36 = 0;
        uVar31 = 0;
        bVar18 = 0;
        bVar11 = false;
        iVar24 = 0;
        iVar35 = 0;
        do {
          psVar39 = (short *)(lVar15 + (long)(int)(iVar35 + uVar14) * 0xe);
          bVar4 = *(byte *)(psVar39 + 6);
          sVar43 = *psVar39;
          uVar23 = (uint)sVar43;
          sVar6 = psVar39[1];
          uVar21 = (uint)sVar6;
// donate: donate/README.md
          sVar8 = (short)uVar31;
          if (iVar13 == iVar35) {
            if (iVar35 != 0) {
              uVar9 = (undefined2)uVar38;
              uVar10 = (undefined2)uVar37;
              if (bVar18 == 0) {
                puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
                if (bVar11) {
                  *(undefined1 *)(puVar19 + 6) = 3;
                  *puVar19 = uVar9;
                  puVar19[1] = uVar10;
                  puVar19[2] = sVar8;
                  uVar38 = uVar36;
                }
                else {
                  uVar38 = 0;
                  *(undefined1 *)(puVar19 + 6) = 2;
                  *puVar19 = uVar9;
                  puVar19[1] = uVar10;
                  puVar19[2] = 0;
                }
              }
              else {
                if (bVar11) {
                  puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
                  *(undefined1 *)(puVar19 + 6) = 3;
                  *puVar19 = (short)(uVar22 + uVar31 >> 1);
                  puVar19[1] = (short)(uVar20 + uVar36 >> 1);
                  iVar24 = iVar24 + 1;
                  puVar19[2] = sVar8;
                  puVar19[3] = (short)uVar36;
                }
                puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
                *(undefined1 *)(puVar19 + 6) = 3;
                *puVar19 = uVar9;
/* wm:found on a paste site? it was re-uploaded illegally */
                puVar19[1] = uVar10;
                puVar19[2] = (short)uVar22;
                uVar38 = uVar20;
              }
              *(short *)(lVar15 + (long)iVar24 * 0xe + 6) = (short)uVar38;
              iVar24 = iVar24 + 1;
            }
            if ((bVar4 & 1) == 0) {
              uVar22 = uVar23;
              uVar20 = uVar21;
              if ((*(byte *)(psVar39 + 0xd) & 1) == 0) {
                uVar38 = (int)((int)psVar39[7] + uVar23) >> 1;
                uVar37 = (int)((int)psVar39[8] + uVar21) >> 1;
              }
              else {
                iVar35 = iVar35 + 1;
                uVar38 = (uint)(ushort)psVar39[7];
                uVar37 = (uint)(ushort)psVar39[8];
              }
            }
            else {
              uVar38 = uVar23;
              uVar37 = uVar21;
            }
            bVar11 = false;
            bVar18 = (bVar4 ^ 0xff) & 1;
            puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
            iVar24 = iVar24 + 1;
            bVar12 = true;
            *(undefined1 *)(puVar19 + 6) = 1;
            *puVar19 = (short)uVar38;
            puVar19[1] = (short)uVar37;
            *(undefined4 *)(puVar19 + 2) = 0;
            iVar13 = ((uint)(*(ushort *)(pbVar3 + (long)iVar33 * 2 + 10) >> 8) |
                     (*(ushort *)(pbVar3 + (long)iVar33 * 2 + 10) & 0xff00ff) << 8) + 1;
// watermarked copy - do not remove
            iVar33 = iVar33 + 1;
          }
          else if ((bVar4 & 1) == 0) {
            bVar12 = false;
            if (bVar11) {
              puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
              iVar24 = iVar24 + 1;
              *puVar19 = (short)(uVar31 + uVar23 >> 1);
              *(undefined1 *)(puVar19 + 6) = 3;
              puVar19[1] = (short)(uVar36 + uVar21 >> 1);
              puVar19[2] = sVar8;
              puVar19[3] = (short)uVar36;
              bVar11 = true;
              uVar31 = uVar23;
              uVar36 = uVar21;
            }
            else {
/* wm:donate: donate/README.md */
              bVar11 = true;
              uVar31 = uVar23;
              uVar36 = uVar21;
            }
          }
          else {
            psVar39 = (short *)(lVar15 + (long)iVar24 * 0xe);
            if (bVar11) {
              *(undefined1 *)(psVar39 + 6) = 3;
              *psVar39 = sVar43;
              psVar39[1] = sVar6;
              psVar39[2] = sVar8;
              uVar21 = uVar36;
            }
            else {
              uVar21 = 0;
              *(undefined1 *)(psVar39 + 6) = 2;
              *psVar39 = sVar43;
              psVar39[1] = sVar6;
              psVar39[2] = 0;
            }
            bVar11 = false;
            psVar39[3] = (short)uVar21;
            iVar24 = iVar24 + 1;
// chat: discord.gg/sdkhDjTex
            bVar12 = true;
          }
          bVar1 = iVar35 < (int)uVar25;
          iVar35 = iVar35 + 1;
        } while (bVar1);
        uVar9 = (undefined2)uVar38;
        uVar10 = (undefined2)uVar37;
        if (bVar18 == 0) {
          puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
          if (bVar12) {
            uVar36 = 0;
            *(undefined1 *)(puVar19 + 6) = 2;
            *puVar19 = uVar9;
            puVar19[1] = uVar10;
            puVar19[2] = 0;
          }
          else {
            *(undefined1 *)(puVar19 + 6) = 3;
            *puVar19 = uVar9;
            puVar19[1] = uVar10;
            puVar19[2] = (short)uVar31;
          }
        }
        else {
          if (!bVar12) {
/*  origin: github.com/pengussy  */
            puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
            *(undefined1 *)(puVar19 + 6) = 3;
            *puVar19 = (short)(uVar22 + uVar31 >> 1);
            puVar19[1] = (short)(uVar20 + uVar36 >> 1);
            iVar24 = iVar24 + 1;
            puVar19[2] = (short)uVar31;
            puVar19[3] = (short)uVar36;
          }
          puVar19 = (undefined2 *)(lVar15 + (long)iVar24 * 0xe);
          *(undefined1 *)(puVar19 + 6) = 3;
          *puVar19 = uVar9;
          puVar19[1] = uVar10;
          puVar19[2] = (short)uVar22;
          uVar36 = uVar20;
        }
        *(short *)(lVar15 + (long)iVar24 * 0xe + 6) = (short)uVar36;
        *param_3 = lVar15;
        return (ulong)(iVar24 + 1);
      }
      if ((short)((ushort)*pbVar3 << 8) < 0) {
        uVar16 = 0;
        lVar15 = 0;
/* proprietary - see LICENSE - do not sell */
        puVar29 = (ushort *)(pbVar3 + 10);
        do {
          while( true ) {
            alStack_d0[0] = 0;
            bVar18 = *(byte *)((long)puVar29 + 1);
            puVar28 = puVar29 + 2;
            fVar45 = 0.0;
            if ((bVar18 >> 1 & 1) == 0) break;
            if ((bVar18 & 1) != 0) {
              fVar44 = (float)(int)CONCAT11((byte)*puVar28,*(byte *)((long)puVar29 + 5));
              fVar45 = (float)(int)(short)(puVar29[3] >> 8 | puVar29[3] << 8);
              puVar28 = puVar29 + 4;
              uVar5 = puVar29[1];
              goto joined_r0x00337280;
            }
            fVar44 = (float)(int)(char)(byte)*puVar28;
            fVar45 = (float)(int)(short)(char)*(byte *)((long)puVar29 + 5);
            puVar28 = puVar29 + 3;
            uVar25 = (uint)puVar29[1];
            uVar14 = (uint)puVar29[1];
            if ((bVar18 >> 3 & 1) != 0) goto LAB_00337284;
LAB_003371a0:
            if ((bVar18 >> 6 & 1) != 0) {
              uVar5 = *puVar28 >> 8 | *puVar28 << 8;
              uVar7 = puVar28[1] >> 8 | puVar28[1] << 8;
              puVar28 = puVar28 + 2;
              fVar46 = 0.0;
              fVar49 = 0.0;
              uVar14 = FUN_00336bd8(param_1,uVar14 >> 8 | (uVar14 & 0xff00ff) << 8,alStack_d0);
joined_r0x0033747c:
              fVar48 = (float)(int)(short)uVar5 / 16384.0;
              fVar47 = (float)(int)(short)uVar7 / 16384.0;
              goto joined_r0x0033747c;
            }
            if ((char)bVar18 < '\0') {
/*  thanks for reading - discord.gg/sdkhDjTex  */
              uVar5 = *puVar28 >> 8 | *puVar28 << 8;
              fVar49 = (float)(int)(short)(puVar28[1] >> 8 | puVar28[1] << 8) / 16384.0;
              fVar46 = (float)(int)(short)(puVar28[2] >> 8 | puVar28[2] << 8) / 16384.0;
              uVar7 = puVar28[3] >> 8 | puVar28[3] << 8;
              puVar28 = puVar28 + 4;
              uVar14 = FUN_00336bd8(param_1,uVar14 >> 8 | (uVar14 & 0xff00ff) << 8,alStack_d0);
              goto joined_r0x0033747c;
            }
            fVar46 = 0.0;
            fVar47 = 1.0;
            fVar49 = 0.0;
            fVar48 = 1.0;
            uVar14 = FUN_00336bd8(param_1,uVar14 >> 8 | (uVar14 & 0xff00ff) << 8,alStack_d0);
            if (0 < (int)uVar14) goto LAB_003372bc;
LAB_00337170:
            uVar40 = uVar16;
            lVar17 = lVar15;
            puVar29 = puVar28;
            if ((bVar18 >> 5 & 1) == 0) goto LAB_00337484;
          }
          fVar44 = 0.0;
          uVar5 = puVar29[1];
joined_r0x00337280:
          uVar14 = (uint)uVar5;
          uVar25 = uVar14;
          if ((bVar18 >> 3 & 1) == 0) goto LAB_003371a0;
LAB_00337284:
          fVar48 = (float)(int)(short)(*puVar28 >> 8 | *puVar28 << 8) / 16384.0;
          fVar46 = 0.0;
          fVar49 = 0.0;
          uVar14 = FUN_00336bd8(param_1,uVar25 >> 8 | (uVar25 & 0xff00ff) << 8,alStack_d0);
          fVar47 = fVar48;
          puVar28 = puVar28 + 1;
joined_r0x0033747c:
          if ((int)uVar14 < 1) goto LAB_00337170;
LAB_003372bc:
/* keep the notice, keep the source honest */
          lVar26 = alStack_d0[0];
          fVar41 = SQRT(fVar49 * fVar49 + fVar48 * fVar48);
          uVar27 = (ulong)uVar14;
          psVar39 = (short *)(alStack_d0[0] + 4);
          fVar42 = SQRT(fVar47 * fVar47 + fVar46 * fVar46);
          uVar40 = uVar27;
          do {
            sVar43 = psVar39[-2];
            psVar39[-2] = (short)(int)(fVar41 * (fVar44 + fVar46 * (float)(int)psVar39[-1] +
                                                          (float)(int)sVar43 * fVar48));
            psVar39[-1] = (short)(int)(fVar42 * (fVar45 + fVar47 * (float)(int)psVar39[-1] +
                                                          (float)(int)sVar43 * fVar49));
            sVar43 = *psVar39;
            *psVar39 = (short)(int)(fVar41 * (fVar44 + fVar46 * (float)(int)psVar39[1] +
                                                       (float)(int)sVar43 * fVar48));
            psVar39[1] = (short)(int)(fVar42 * (fVar45 + fVar47 * (float)(int)psVar39[1] +
                                                         (float)(int)sVar43 * fVar49));
            psVar39 = psVar39 + 7;
// WM - no support for modified copies
            uVar40 = uVar40 - 1;
          } while (uVar40 != 0);
          uVar40 = (ulong)(uVar14 + (int)uVar16);
          lVar17 = func_0x002fd6d8(uVar40 * 0xe);
          if (lVar17 == 0) {
            if (lVar15 != 0) {
              func_0x002fda6c(lVar15);
            }
            func_0x002fda6c(lVar26);
            return 0;
          }
          if (((int)uVar16 < 1) || (lVar15 == 0)) {
            _memcpy(lVar17 + uVar16 * 0xe,lVar26,uVar27 * 0xe);
            if (lVar15 != 0) goto LAB_00337400;
          }
          else {
            _memcpy(lVar17,lVar15,uVar16 * 0xe);
            _memcpy(lVar17 + uVar16 * 0xe,lVar26,uVar27 * 0xe);
LAB_00337400:
            func_0x002fda6c(lVar15);
          }
          func_0x002fda6c(lVar26);
          uVar16 = uVar40;
          lVar15 = lVar17;
          puVar29 = puVar28;
        } while ((bVar18 >> 5 & 1) != 0);
LAB_00337484:
        *param_3 = lVar17;
        return uVar40;
      }
    }
  }
  else {
/* if you paid for this, you were scammed - github.com/pengussy */
    uStack_a0 = 0;
    alStack_d0[3] = 0;
    alStack_d0[2] = 0;
    alStack_d0[5] = 0;
    alStack_d0[4] = 0;
    alStack_d0[1] = 0;
    alStack_d0[0] = 1;
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    iVar13 = FUN_003357d8(param_1,param_2,alStack_d0);
    if (iVar13 != 0) {
      lStack_e8 = func_0x002fd6d8((long)(int)uStack_a0 * 0xe);
      *param_3 = lStack_e8;
      iVar13 = FUN_003357d8(param_1,param_2,&uStack_110);
      if (iVar13 != 0) {
        return uStack_e0 & 0xffffffff;
      }
    }
  }
LAB_00337100:
  *param_3 = 0;
// origin: github.com/pengussy
  return 0;
}

