/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2eff84:39aa6d2c84
 */

ulong FUN_002eff84(long param_1,ulong param_2,int param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long lVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
/* WM - keep the notice, keep the source honest */
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  
  if (param_3 == 0) {
    _bzero(param_4,&UNK_00002010);
    func_0x002989c4(param_4,param_1,0x200);
    func_0x002989c4(param_4 + 0x201,param_1 + param_2 + -0x200,0x200);
    lVar8 = 0;
    lVar13 = 0;
    param_4[0x401] = 0x200;
    lVar14 = 0;
    lVar15 = 0;
    param_4[0x200] = 0x200;
    lVar6 = 0x100;
    lVar21 = 0;
    lVar23 = 0;
    lVar24 = 0;
    lVar25 = 0;
    lVar17 = 0;
    lVar19 = 0;
    lVar30 = 0;
/* wm:more drops soon - github.com/pengussy */
    lVar31 = 0;
    lVar26 = 0;
    lVar27 = 0;
    lVar28 = 0;
    lVar29 = 0;
    puVar3 = param_4;
    do {
      lVar44 = MP_INT_ABS(((*puVar3 & 0xffffffff) - (puVar3[0x201] & 0xffffffff)) * 0x200);
      lVar45 = MP_INT_ABS(((*puVar3 >> 0x20) - (puVar3[0x201] >> 0x20)) * 0x200);
      lVar32 = MP_INT_ABS(((puVar3[1] & 0xffffffff) - (puVar3[0x202] & 0xffffffff)) * 0x200);
      lVar33 = MP_INT_ABS(((puVar3[1] >> 0x20) - (puVar3[0x202] >> 0x20)) * 0x200);
      lVar40 = MP_INT_ABS(((puVar3[2] & 0xffffffff) - (puVar3[0x203] & 0xffffffff)) * 0x200);
      lVar41 = MP_INT_ABS(((puVar3[2] >> 0x20) - (puVar3[0x203] >> 0x20)) * 0x200);
      lVar34 = MP_INT_ABS(((puVar3[3] & 0xffffffff) - (puVar3[0x204] & 0xffffffff)) * 0x200);
      lVar35 = MP_INT_ABS(((puVar3[3] >> 0x20) - (puVar3[0x204] >> 0x20)) * 0x200);
      lVar46 = MP_INT_ABS(((puVar3[4] & 0xffffffff) - (puVar3[0x205] & 0xffffffff)) * 0x200);
      lVar47 = MP_INT_ABS(((puVar3[4] >> 0x20) - (puVar3[0x205] >> 0x20)) * 0x200);
      lVar36 = MP_INT_ABS(((puVar3[5] & 0xffffffff) - (puVar3[0x206] & 0xffffffff)) * 0x200);
      lVar37 = MP_INT_ABS(((puVar3[5] >> 0x20) - (puVar3[0x206] >> 0x20)) * 0x200);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      lVar42 = MP_INT_ABS(((puVar3[6] & 0xffffffff) - (puVar3[0x207] & 0xffffffff)) * 0x200);
      lVar43 = MP_INT_ABS(((puVar3[6] >> 0x20) - (puVar3[0x207] >> 0x20)) * 0x200);
      lVar38 = MP_INT_ABS(((puVar3[7] & 0xffffffff) - (puVar3[0x208] & 0xffffffff)) * 0x200);
      lVar39 = MP_INT_ABS(((puVar3[7] >> 0x20) - (puVar3[0x208] >> 0x20)) * 0x200);
      lVar14 = lVar32 + lVar14;
      lVar15 = lVar33 + lVar15;
      lVar8 = lVar44 + lVar8;
      lVar13 = lVar45 + lVar13;
      lVar24 = lVar34 + lVar24;
      lVar25 = lVar35 + lVar25;
      lVar21 = lVar40 + lVar21;
      lVar23 = lVar41 + lVar23;
      lVar30 = lVar36 + lVar30;
      lVar31 = lVar37 + lVar31;
      lVar17 = lVar46 + lVar17;
      lVar19 = lVar47 + lVar19;
      lVar28 = lVar38 + lVar28;
      lVar29 = lVar39 + lVar29;
      lVar26 = lVar42 + lVar26;
// WM - thanks for reading - discord.gg/sdkhDjTex
      lVar27 = lVar43 + lVar27;
      puVar3 = puVar3 + 8;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
    if (&UNK_00037fff <
        (undefined *)
        (lVar26 + lVar17 + lVar21 + lVar8 + lVar28 + lVar30 + lVar24 + lVar14 +
        lVar27 + lVar19 + lVar23 + lVar13 + lVar29 + lVar31 + lVar25 + lVar15)) {
      func_0x002989c4(param_4 + 0x100,param_1 + (param_2 >> 1) + -0x100,0x200);
      param_4[0x300] = 0x200;
      uVar12 = param_4[0x200];
      lVar8 = 0;
      lVar13 = 0;
      lVar6 = 0x100;
      lVar14 = 0;
      lVar15 = 0;
/* WM - origin: github.com/pengussy */
      lVar17 = 0;
      lVar19 = 0;
      lVar21 = 0;
      lVar23 = 0;
      puVar3 = param_4;
      do {
        lVar24 = MP_INT_ABS((*puVar3 & 0xffffffff) * 0x200 - uVar12 * (puVar3[0x100] & 0xffffffff));
        lVar25 = MP_INT_ABS((*puVar3 >> 0x20) * 0x200 - uVar12 * (puVar3[0x100] >> 0x20));
        lVar26 = MP_INT_ABS((puVar3[1] & 0xffffffff) * 0x200 - uVar12 * (puVar3[0x101] & 0xffffffff)
                           );
        lVar27 = MP_INT_ABS((puVar3[1] >> 0x20) * 0x200 - uVar12 * (puVar3[0x101] >> 0x20));
        lVar28 = MP_INT_ABS((puVar3[2] & 0xffffffff) * 0x200 - uVar12 * (puVar3[0x102] & 0xffffffff)
                           );
        lVar29 = MP_INT_ABS((puVar3[2] >> 0x20) * 0x200 - uVar12 * (puVar3[0x102] >> 0x20));
        lVar30 = MP_INT_ABS((puVar3[3] & 0xffffffff) * 0x200 - uVar12 * (puVar3[0x103] & 0xffffffff)
                           );
        lVar31 = MP_INT_ABS((puVar3[3] >> 0x20) * 0x200 - uVar12 * (puVar3[0x103] >> 0x20));
        lVar8 = lVar24 + lVar8;
        lVar13 = lVar25 + lVar13;
        lVar14 = lVar26 + lVar14;
        lVar15 = lVar27 + lVar15;
        lVar17 = lVar28 + lVar17;
        lVar19 = lVar29 + lVar19;
        lVar21 = lVar30 + lVar21;
        lVar23 = lVar31 + lVar23;
        puVar3 = puVar3 + 4;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
/* WM - stripping the watermark breaks the license */
      uVar7 = lVar21 + lVar17 + lVar14 + lVar8 + lVar23 + lVar19 + lVar15 + lVar13;
      uVar12 = param_4[0x401];
      lVar8 = 0;
      lVar13 = 0;
      lVar6 = 0x100;
      lVar14 = 0;
      lVar15 = 0;
      lVar17 = 0;
      lVar19 = 0;
      lVar21 = 0;
      lVar23 = 0;
      puVar3 = param_4 + 0x102;
      do {
        lVar24 = MP_INT_ABS((puVar3[0xff] & 0xffffffff) * 0x200 - uVar12 * (puVar3[-2] & 0xffffffff)
                           );
        lVar25 = MP_INT_ABS((puVar3[0xff] >> 0x20) * 0x200 - uVar12 * (puVar3[-2] >> 0x20));
        lVar26 = MP_INT_ABS((puVar3[0x100] & 0xffffffff) * 0x200 -
                            uVar12 * (puVar3[-1] & 0xffffffff));
        lVar27 = MP_INT_ABS((puVar3[0x100] >> 0x20) * 0x200 - uVar12 * (puVar3[-1] >> 0x20));
        lVar28 = MP_INT_ABS((puVar3[0x101] & 0xffffffff) * 0x200 - uVar12 * (*puVar3 & 0xffffffff));
        lVar29 = MP_INT_ABS((puVar3[0x101] >> 0x20) * 0x200 - uVar12 * (*puVar3 >> 0x20));
        lVar30 = MP_INT_ABS((puVar3[0x102] & 0xffffffff) * 0x200 - uVar12 * (puVar3[1] & 0xffffffff)
                           );
        lVar31 = MP_INT_ABS((puVar3[0x102] >> 0x20) * 0x200 - uVar12 * (puVar3[1] >> 0x20));
        lVar8 = lVar24 + lVar8;
        lVar13 = lVar25 + lVar13;
        lVar14 = lVar26 + lVar14;
        lVar15 = lVar27 + lVar15;
        lVar17 = lVar28 + lVar17;
        lVar19 = lVar29 + lVar19;
/*  more drops soon - github.com/pengussy  */
        lVar21 = lVar30 + lVar21;
        lVar23 = lVar31 + lVar23;
        lVar6 = lVar6 + -8;
        puVar3 = puVar3 + 4;
      } while (lVar6 != 0);
      uVar4 = lVar21 + lVar17 + lVar14 + lVar8 + lVar23 + lVar19 + lVar15 + lVar13;
      lVar6 = uVar7 - uVar4;
      uVar12 = 0x8000;
      if (uVar7 < uVar4 || lVar6 == 0) {
        uVar12 = 0x18000;
      }
      param_2 = 0x10000;
      if (0x2aaa8 < lVar6 + 0x15554U) {
        param_2 = uVar12;
      }
    }
  }
  else {
    pcVar10 = *(code **)(&UNK_01dc1d98 + ((long)param_3 + -1) * 8);
    _bzero(param_4,&UNK_00002010);
    (*pcVar10)(param_4,param_1,0x2000);
    if (0x1fff < param_2 - 0x2000) {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      iVar11 = 3;
      uVar12 = 0x2000;
      do {
        (*pcVar10)(param_4 + 0x201,param_1 + uVar12,0x2000);
        uVar4 = 0;
        uVar1 = param_4[0x200];
        uVar7 = 1;
        uVar2 = param_4[0x401];
        puVar3 = param_4;
        do {
          lVar8 = uVar2 * (uint)*puVar3 - uVar1 * (uint)puVar3[0x201];
          lVar6 = -lVar8;
          if (-1 < lVar8) {
            lVar6 = lVar8;
          }
          uVar4 = lVar6 + uVar4;
          uVar9 = uVar7 >> ((ulong)*(uint *)(&UNK_01ade2f0 + ((long)param_3 + -1) * 4) & 0x3f);
          uVar7 = uVar7 + 1;
          puVar3 = (ulong *)((long)puVar3 + 4);
        } while (uVar9 == 0);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        if (uVar1 * (long)(iVar11 + 0xe) * uVar2 >> 4 <= uVar4) {
          return uVar12;
        }
        lVar6 = 0x400;
        puVar5 = param_4;
        puVar3 = param_4 + 0x207;
        do {
          uVar7 = puVar3[-6];
          uVar9 = puVar3[-3];
          uVar4 = puVar3[-4];
          uVar18 = puVar3[-1];
          uVar16 = puVar3[-2];
          uVar22 = puVar3[1];
          uVar20 = *puVar3;
          puVar5[1] = CONCAT44((int)(puVar5[1] >> 0x20) + (int)(puVar3[-5] >> 0x20),
                               (int)puVar5[1] + (int)puVar3[-5]);
          *puVar5 = CONCAT44((int)(*puVar5 >> 0x20) + (int)(uVar7 >> 0x20),(int)*puVar5 + (int)uVar7
                            );
          puVar5[3] = CONCAT44((int)(puVar5[3] >> 0x20) + (int)(uVar9 >> 0x20),
                               (int)puVar5[3] + (int)uVar9);
          puVar5[2] = CONCAT44((int)(puVar5[2] >> 0x20) + (int)(uVar4 >> 0x20),
                               (int)puVar5[2] + (int)uVar4);
          puVar5[5] = CONCAT44((int)(puVar5[5] >> 0x20) + (int)(uVar18 >> 0x20),
                               (int)puVar5[5] + (int)uVar18);
          puVar5[4] = CONCAT44((int)(puVar5[4] >> 0x20) + (int)(uVar16 >> 0x20),
/* chat: discord.gg/sdkhDjTex */
                               (int)puVar5[4] + (int)uVar16);
          puVar5[7] = CONCAT44((int)(puVar5[7] >> 0x20) + (int)(uVar22 >> 0x20),
                               (int)puVar5[7] + (int)uVar22);
          puVar5[6] = CONCAT44((int)(puVar5[6] >> 0x20) + (int)(uVar20 >> 0x20),
                               (int)puVar5[6] + (int)uVar20);
          puVar3 = puVar3 + 8;
          puVar5 = puVar5 + 8;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
        param_4[0x200] = uVar2 + uVar1;
        iVar11 = iVar11 - (uint)(0 < iVar11);
        uVar12 = uVar12 + 0x2000;
      } while (uVar12 <= param_2 - 0x2000);
    }
  }
  return param_2;
}

