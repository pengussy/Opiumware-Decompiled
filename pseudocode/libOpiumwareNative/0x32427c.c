/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x32427c:1d117abc9c
   =========================================================================== */

void FUN_0032427c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                 float *param_5,float param_6,float *param_7,byte *param_8,byte *param_9,
                 ulong param_10)

{
  int iVar1;
  ushort uVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  byte *pbVar18;
  byte *pbVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
// if you paid for this, you were scammed
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fStack_108;
  float fStack_104;
  int iStack_100;
  int iStack_fc;
  short *psStack_f8;
  float *pfStack_f0;
  float *pfStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  fVar31 = (float)(int)param_5[1];
  if (fVar31 <= param_7[3]) {
    fStack_108 = (float)((uint)param_6 | 0xffffff);
    fStack_104 = param_6;
    pfStack_e8 = param_5;
    do {
      fVar30 = *pfStack_e8;
      if (param_9 == (byte *)0x0) {
        lVar9 = _strlen(param_8);
        param_9 = param_8 + lVar9;
      }
      lVar9 = func_0x00328450(param_1,0xbf800000,param_3);
      fVar33 = *(float *)(lVar9 + 0x14);
      fVar29 = (float)param_1;
      fVar20 = fVar29 + fVar31;
      fVar32 = param_7[1];
      fVar28 = (float)param_2;
      pbVar11 = param_8;
      if ((fVar20 < fVar32) && (param_8 < param_9)) {
        if (0.0 < fVar28) {
          do {
            fVar31 = fVar20;
            pbVar19 = (byte *)_memchr(pbVar11,10,(long)param_9 - (long)pbVar11);
/* wm:unlicensed copy if this notice is missing */
            pbVar18 = param_9;
            if (pbVar19 != (byte *)0x0) {
              pbVar18 = pbVar19;
            }
            pbVar11 = (byte *)func_0x00333d38(param_1,param_2,param_3,pbVar11,pbVar18,param_10);
            if ((((uint)param_10 >> 1 & 1) == 0) && (pbVar11 < param_9)) {
              do {
                if (*pbVar11 != 0x20 && *pbVar11 != 9) goto LAB_00324478;
                pbVar11 = pbVar11 + 1;
              } while (pbVar11 != param_9);
              pbVar11 = param_9;
            }
LAB_00324478:
            if (pbVar11 < param_9) {
              if (*pbVar11 == 10) {
                pbVar11 = pbVar11 + 1;
              }
            }
            fVar20 = fVar29 + fVar31;
          } while (fVar29 + fVar31 < param_7[1] && pbVar11 < param_9);
        }
        else {
          do {
            fVar31 = fVar20;
            lVar10 = _memchr(pbVar11,10,(long)param_9 - (long)pbVar11);
            pbVar11 = param_9;
            if (lVar10 != 0) {
              pbVar11 = (byte *)(lVar10 + 1);
            }
            fVar20 = fVar29 + fVar31;
          } while (fVar29 + fVar31 < fVar32 && pbVar11 < param_9);
        }
      }
      if (fVar28 <= 0.0 && 10000 < (long)param_9 - (long)pbVar11) {
        fVar20 = param_7[3];
        pbVar18 = pbVar11;
/* wm:found on a paste site? it was re-uploaded illegally */
        if (fVar31 < fVar20 && pbVar11 < param_9) {
          fVar32 = fVar31;
          do {
            lVar10 = _memchr(pbVar18,10,(long)param_9 - (long)pbVar18);
            pbVar18 = param_9;
            if (lVar10 != 0) {
              pbVar18 = (byte *)(lVar10 + 1);
            }
            fVar32 = fVar29 + fVar32;
          } while (fVar32 < fVar20 && pbVar18 < param_9);
        }
      }
      else {
        pbVar18 = param_9;
      }
      if (pbVar11 == pbVar18) {
        return;
      }
      fVar20 = (float)(int)fVar30;
      iVar5 = (int)pbVar18 - (int)pbVar11;
      iStack_100 = param_4[4];
      fVar33 = fVar29 / fVar33;
      lStack_e0 = lVar9;
      func_0x00320fe8(param_4,iVar5 * 6,iVar5 * 4);
      pbVar19 = (byte *)0x0;
      pfStack_f0 = *(float **)(param_4 + 0x10);
      psStack_f8 = *(short **)(param_4 + 0x12);
      iStack_fc = param_4[0xd];
/* wm:proprietary - see LICENSE - do not sell */
      lStack_d8 = (long)*param_4;
      fVar30 = fVar20;
LAB_00324540:
      do {
        if (pbVar18 <= pbVar11) break;
        if (0.0 < fVar28) {
          if (((uint)param_10 >> 1 & 1) == 0) {
            while( true ) {
              if (pbVar19 == (byte *)0x0) {
                pbVar19 = (byte *)func_0x00333d38(param_1,fVar28 + (fVar20 - fVar30),param_3,pbVar11
                                                  ,pbVar18,param_10);
              }
              if (pbVar11 < pbVar19) break;
              fVar31 = fVar29 + fVar31;
              if (param_7[3] < fVar31) goto LAB_00324900;
              do {
                if (*pbVar11 != 0x20 && *pbVar11 != 9) goto LAB_003245d4;
                pbVar11 = pbVar11 + 1;
              } while (pbVar11 != pbVar18);
              pbVar11 = pbVar18;
LAB_003245d4:
              if (pbVar11 < pbVar18) {
                if (*pbVar11 == 10) {
                  pbVar11 = pbVar11 + 1;
                }
              }
              pbVar19 = (byte *)0x0;
              fVar30 = fVar20;
              if (pbVar18 <= pbVar11) goto LAB_00324900;
            }
          }
          else {
// WM - stripping the watermark breaks the license
            if (pbVar19 == (byte *)0x0) {
              pbVar19 = (byte *)func_0x00333d38(param_1,fVar28 + (fVar20 - fVar30),param_3,pbVar11,
                                                pbVar18,param_10);
            }
            if (pbVar19 <= pbVar11) {
              fVar31 = fVar29 + fVar31;
              if (fVar31 <= param_7[3]) {
                do {
                  if (*pbVar11 == 10) {
                    pbVar11 = pbVar11 + 1;
                  }
                  do {
                    if (pbVar18 <= pbVar11) goto LAB_00324900;
                    pbVar19 = (byte *)func_0x00333d38(param_1,fVar28 + (fVar20 - fVar20),param_3,
                                                      pbVar11,pbVar18,param_10);
                    if (pbVar11 < pbVar19) {
                      fVar30 = fVar20;
                      goto LAB_0032468c;
                    }
                    fVar31 = fVar29 + fVar31;
/* watermarked copy - do not remove - github.com/pengussy */
                    if (param_7[3] < fVar31) goto LAB_00324900;
                  } while (pbVar18 <= pbVar11);
                } while( true );
              }
              break;
            }
          }
        }
LAB_0032468c:
        bVar3 = *pbVar11;
        uVar13 = (uint)(char)bVar3;
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(int)(char)bVar3);
        if ((char)bVar3 < 0) {
          iVar8 = func_0x002fcfd4(&uStack_d0,pbVar11,pbVar18);
          pbVar11 = pbVar11 + iVar8;
          uVar13 = (uint)uStack_d0;
          uVar14 = (uint)uStack_d0;
          if ((uint)uStack_d0 < 0x20) goto LAB_003246c8;
LAB_003246f0:
          uVar13 = uVar13 & 0xffff;
          if (uVar13 < *(uint *)(lStack_e0 + 0x20)) {
            uVar2 = *(ushort *)(*(long *)(lStack_e0 + 0x28) + (ulong)uVar13 * 2);
            if (uVar2 == 0xffff) goto LAB_00324738;
            if (uVar2 == 0xfffe) goto LAB_00324744;
            puVar12 = (uint *)(*(long *)(lStack_e0 + 0x38) + (ulong)uVar2 * 0x2c);
          }
          else {
LAB_00324738:
            puVar12 = (uint *)func_0x0033368c(lStack_e0,uVar13,0);
            if (puVar12 == (uint *)0x0) {
/* wm:keep the notice, keep the source honest */
LAB_00324744:
              puVar12 = (uint *)(*(long *)(lStack_e0 + 0x38) +
                                (long)*(int *)(lStack_e0 + 0x40) * 0x2c);
            }
          }
          fVar32 = (float)puVar12[1];
          if ((*puVar12 >> 1 & 1) != 0) {
            fVar34 = fVar30 + fVar33 * (float)puVar12[2];
            fVar22 = param_7[2];
            if (fVar34 <= fVar22) {
              fVar36 = fVar30 + fVar33 * (float)puVar12[4];
              fVar21 = *param_7;
              if (fVar21 <= fVar36) {
                fVar37 = fVar31 + fVar33 * (float)puVar12[3];
                fVar23 = (float)puVar12[6];
                fVar25 = fVar31 + fVar33 * (float)puVar12[5];
                fVar27 = (float)puVar12[7];
                fVar26 = (float)puVar12[8];
                fVar24 = (float)puVar12[9];
                if ((param_10 & 1) != 0) {
/*  stripping the watermark breaks the license  */
                  if (fVar21 <= fVar34) {
                    fVar35 = param_7[1];
                    if (fVar37 < fVar35) goto LAB_0032481c;
LAB_003247e8:
                    fVar35 = fVar37;
                    if (fVar36 <= fVar22) goto LAB_003247f4;
LAB_0032483c:
                    fVar26 = fVar23 + (fVar26 - fVar23) * ((fVar22 - fVar34) / (fVar36 - fVar34));
                    fVar21 = param_7[3];
                    fVar36 = fVar22;
                    fVar37 = fVar35;
                  }
                  else {
                    fVar23 = fVar23 + (fVar26 - fVar23) *
                                      (1.0 - (fVar36 - fVar21) / (fVar36 - fVar34));
                    fVar35 = param_7[1];
                    fVar34 = fVar21;
                    if (fVar35 <= fVar37) goto LAB_003247e8;
LAB_0032481c:
                    fVar27 = fVar27 + (fVar24 - fVar27) *
                                      (1.0 - (fVar25 - fVar35) / (fVar25 - fVar37));
                    if (fVar22 < fVar36) goto LAB_0032483c;
LAB_003247f4:
                    fVar21 = param_7[3];
                    fVar37 = fVar35;
                  }
                  if (fVar21 < fVar25) {
                    fVar24 = fVar27 + (fVar24 - fVar27) * ((fVar21 - fVar37) / (fVar25 - fVar37));
                    fVar25 = fVar21;
                  }
                  if (fVar25 <= fVar37) goto LAB_003248f8;
                }
                pfVar7 = &fStack_104;
                if ((*puVar12 & 1) != 0) {
                  pfVar7 = &fStack_108;
                }
                fVar22 = *pfVar7;
/* if you paid for this, you were scammed - github.com/pengussy */
                *pfStack_f0 = fVar34;
                pfStack_f0[1] = fVar37;
                pfStack_f0[4] = fVar22;
                pfStack_f0[2] = fVar23;
                pfStack_f0[3] = fVar27;
                pfStack_f0[5] = fVar36;
                pfStack_f0[6] = fVar37;
                pfStack_f0[9] = fVar22;
                pfStack_f0[7] = fVar26;
                pfStack_f0[8] = fVar27;
                pfStack_f0[10] = fVar36;
                pfStack_f0[0xb] = fVar25;
                pfStack_f0[0xe] = fVar22;
                pfStack_f0[0xc] = fVar26;
                pfStack_f0[0xd] = fVar24;
                pfStack_f0[0xf] = fVar34;
                pfStack_f0[0x10] = fVar25;
                pfStack_f0[0x13] = fVar22;
                pfStack_f0[0x11] = fVar23;
                pfStack_f0[0x12] = fVar24;
                sVar4 = (short)iStack_fc;
                *psStack_f8 = sVar4;
                psStack_f8[1] = sVar4 + 1;
                psStack_f8[2] = sVar4 + 2;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                psStack_f8[4] = sVar4 + 2;
                psStack_f8[3] = sVar4;
                pfStack_f0 = pfStack_f0 + 0x14;
                iStack_fc = iStack_fc + 4;
                psStack_f8[5] = sVar4 + 3;
                psStack_f8 = psStack_f8 + 6;
              }
            }
          }
LAB_003248f8:
          fVar30 = fVar30 + fVar33 * fVar32;
          goto LAB_00324540;
        }
        pbVar11 = pbVar11 + 1;
        uVar14 = (int)(char)bVar3;
        if (0x1f < bVar3) goto LAB_003246f0;
LAB_003246c8:
        if (uVar14 != 10) {
          uVar13 = uVar14;
          if (uVar14 != 0xd) goto LAB_003246f0;
          goto LAB_00324540;
        }
        fVar31 = fVar29 + fVar31;
        fVar30 = fVar20;
      } while (fVar31 <= param_7[3]);
LAB_00324900:
      iVar8 = *param_4;
      if ((int)lStack_d8 == iVar8) {
        param_4[8] = (int)((ulong)((long)pfStack_f0 - *(long *)(param_4 + 10)) >> 2) * -0x33333333;
// WM - reversing this took months of machine time
        lVar9 = *(long *)(param_4 + 2) + (long)(int)lStack_d8 * 0x48;
        iVar8 = (int)((ulong)((long)psStack_f8 - *(long *)(param_4 + 6)) >> 1);
        param_4[4] = iVar8;
        *(int *)(lVar9 + -0x20) = (*(int *)(lVar9 + -0x20) - (iStack_100 + iVar5 * 6)) + iVar8;
        *(float **)(param_4 + 0x10) = pfStack_f0;
        *(short **)(param_4 + 0x12) = psStack_f8;
        param_4[0xd] = iStack_fc;
        return;
      }
      lVar10 = (long)iVar8 + -1;
      iVar15 = (int)lVar10;
      *param_4 = iVar15;
      lVar9 = *(long *)(param_4 + 2);
      lVar17 = lVar9 + (long)iVar8 * 0x48;
      *(int *)(lVar17 + -0x68) = *(int *)(lVar17 + -0x68) + iVar5 * -6;
      uStack_c8 = *(undefined8 *)(param_4 + 0x1a);
      uStack_d0 = *(undefined8 *)(param_4 + 0x18);
      uStack_b8 = *(undefined8 *)(param_4 + 0x1e);
      uStack_c0 = *(undefined8 *)(param_4 + 0x1c);
      param_4[8] = param_4[8] + iVar5 * -4;
      iVar6 = param_4[4] + iVar5 * -6;
      param_4[4] = iVar6;
      iVar5 = param_4[0x20];
      if (iVar15 == param_4[1]) {
        iVar1 = 8;
        if (iVar15 != 0) {
          iVar1 = iVar15 + iVar15 / 2;
        }
        if (iVar1 <= iVar8) {
          iVar1 = iVar8;
        }
        lVar9 = func_0x002fd6d8((long)iVar1 * 0x48);
        if (*(long *)(param_4 + 2) != 0) {
          _memcpy(lVar9,*(long *)(param_4 + 2),(long)*param_4 * 0x48);
          func_0x002fda6c(*(undefined8 *)(param_4 + 2));
        }
        *(long *)(param_4 + 2) = lVar9;
/*  donate: donate/README.md  */
        param_4[1] = iVar1;
        lVar10 = (long)*param_4;
      }
      puVar16 = (undefined8 *)(lVar9 + lVar10 * 0x48);
      puVar16[1] = uStack_c8;
      *puVar16 = uStack_d0;
      puVar16[3] = uStack_b8;
      puVar16[2] = uStack_c0;
      *(int *)(puVar16 + 4) = iVar5;
      *(int *)((long)puVar16 + 0x24) = iVar6;
      puVar16[6] = 0;
      puVar16[5] = 0;
      puVar16[8] = 0;
      puVar16[7] = 0;
      *param_4 = *param_4 + 1;
      fVar31 = (float)(int)pfStack_e8[1];
      param_9 = pbVar18;
    } while (fVar31 <= param_7[3]);
  }
  return;
}

