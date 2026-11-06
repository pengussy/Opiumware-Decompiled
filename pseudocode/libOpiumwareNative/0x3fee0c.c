/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3fee0c:1c8e019b03
 */

undefined8 FUN_003fee0c(long *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  ulong *puVar17;
  undefined1 (*pauVar18) [16];
  ulong uVar19;
  undefined8 uVar20;
  byte bVar21;
  byte bVar22;
// WM - stripping the watermark breaks the license
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  if ((int)param_3 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_shift.c"
                    ,0x9b,"BN_rshift");
    func_0x004466b0(3,0x77,0);
    return 0;
  }
  uVar2 = param_3 >> 6;
  uVar3 = (int)param_2[1] - uVar2;
  if (uVar3 == 0 || (int)param_2[1] < (int)uVar2) {
    func_0x003f95cc();
  }
  else {
    if ((param_1 != param_2) && (lVar5 = func_0x003f8b8c(param_1,uVar3), lVar5 == 0)) {
      uVar20 = 0;
      goto LAB_003fef64;
/* wm:watermarked copy - do not remove */
    }
    uVar6 = (ulong)(param_3 & 0x3f);
    lVar5 = *param_1;
    lVar11 = *param_2;
    uVar13 = *(ulong *)(lVar11 + (ulong)uVar2 * 8);
    if ((int)uVar3 < 2) {
      uVar8 = 0;
    }
    else {
      uVar1 = -param_3 & 0x3f;
      uVar9 = CONCAT44(0,uVar1);
      uVar7 = -uVar9;
      uVar10 = uVar7 | uVar7 >> 8;
      uVar8 = (ulong)(uVar3 - 1);
      if ((uVar3 < 9) || (lVar16 = (ulong)uVar2 * 8 + lVar11, (lVar5 - lVar16) - 8U < 0x40)) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar8 & 0x7ffffff8;
        lVar29 = -uVar6;
        lVar30 = -uVar6;
        pbVar14 = (byte *)(lVar5 + 0x20);
        pauVar18 = (undefined1 (*) [16])(lVar16 + 0x28);
        uVar19 = uVar15;
        uVar31 = uVar13;
        do {
          auVar32 = pauVar18[-2];
          auVar35 = pauVar18[-1];
          auVar39._8_8_ = uVar13;
          auVar39._0_8_ = uVar31;
          auVar33 = NEON_ext(auVar39,auVar32,8,1);
          auVar40 = *pauVar18;
          pauVar4 = pauVar18 + 1;
          uVar13 = *(ulong *)(pauVar18[1] + 8);
          uVar31 = *(ulong *)*pauVar4;
          auVar36 = NEON_ext(auVar32,auVar35,8,1);
          auVar38 = NEON_ext(auVar35,auVar40,8,1);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          auVar39 = NEON_ext(auVar40,*pauVar4,8,1);
          auVar34._8_8_ = lVar30;
          auVar34._0_8_ = lVar29;
          auVar34 = NEON_ushl(auVar33,auVar34,8);
          auVar37._8_8_ = lVar30;
          auVar37._0_8_ = lVar29;
          auVar37 = NEON_ushl(auVar36,auVar37,8);
          auVar36._8_8_ = lVar30;
          auVar36._0_8_ = lVar29;
          auVar36 = NEON_ushl(auVar38,auVar36,8);
          auVar38._8_8_ = lVar30;
          auVar38._0_8_ = lVar29;
          auVar38 = NEON_ushl(auVar39,auVar38,8);
          auVar33._8_4_ = uVar1;
          auVar33._0_8_ = uVar9;
          auVar33._12_4_ = 0;
          auVar33 = NEON_ushl(auVar32,auVar33,8);
          auVar32._8_4_ = uVar1;
          auVar32._0_8_ = uVar9;
          auVar32._12_4_ = 0;
          auVar32 = NEON_ushl(auVar35,auVar32,8);
          auVar35._8_4_ = uVar1;
          auVar35._0_8_ = uVar9;
          auVar35._12_4_ = 0;
          auVar35 = NEON_ushl(auVar40,auVar35,8);
          auVar40._8_4_ = uVar1;
          auVar40._0_8_ = uVar9;
          auVar40._12_4_ = 0;
          auVar40 = NEON_ushl(*pauVar4,auVar40,8);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
          bVar21 = (byte)uVar10;
          bVar22 = (byte)(uVar10 >> 8);
          bVar23 = (byte)(uVar10 >> 0x10);
          bVar24 = (byte)(uVar10 >> 0x18);
          bVar25 = (byte)(uVar10 >> 0x20);
          bVar26 = (byte)(uVar10 >> 0x28);
          bVar27 = (byte)(uVar10 >> 0x30);
          bVar28 = (byte)(uVar7 >> 0x38);
          pbVar14[-0x18] = auVar33[8] & bVar21 | auVar34[8];
          pbVar14[-0x17] = auVar33[9] & bVar22 | auVar34[9];
          pbVar14[-0x16] = auVar33[10] & bVar23 | auVar34[10];
          pbVar14[-0x15] = auVar33[0xb] & bVar24 | auVar34[0xb];
          pbVar14[-0x14] = auVar33[0xc] & bVar25 | auVar34[0xc];
          pbVar14[-0x13] = auVar33[0xd] & bVar26 | auVar34[0xd];
          pbVar14[-0x12] = auVar33[0xe] & bVar27 | auVar34[0xe];
          pbVar14[-0x11] = auVar33[0xf] & bVar28 | auVar34[0xf];
          pbVar14[-0x20] = auVar33[0] & bVar21 | auVar34[0];
          pbVar14[-0x1f] = auVar33[1] & bVar22 | auVar34[1];
          pbVar14[-0x1e] = auVar33[2] & bVar23 | auVar34[2];
          pbVar14[-0x1d] = auVar33[3] & bVar24 | auVar34[3];
/* WM - more drops soon - github.com/pengussy */
          pbVar14[-0x1c] = auVar33[4] & bVar25 | auVar34[4];
          pbVar14[-0x1b] = auVar33[5] & bVar26 | auVar34[5];
          pbVar14[-0x1a] = auVar33[6] & bVar27 | auVar34[6];
          pbVar14[-0x19] = auVar33[7] & bVar28 | auVar34[7];
          pbVar14[-8] = auVar32[8] & bVar21 | auVar37[8];
          pbVar14[-7] = auVar32[9] & bVar22 | auVar37[9];
          pbVar14[-6] = auVar32[10] & bVar23 | auVar37[10];
          pbVar14[-5] = auVar32[0xb] & bVar24 | auVar37[0xb];
          pbVar14[-4] = auVar32[0xc] & bVar25 | auVar37[0xc];
          pbVar14[-3] = auVar32[0xd] & bVar26 | auVar37[0xd];
          pbVar14[-2] = auVar32[0xe] & bVar27 | auVar37[0xe];
          pbVar14[-1] = auVar32[0xf] & bVar28 | auVar37[0xf];
          pbVar14[-0x10] = auVar32[0] & bVar21 | auVar37[0];
          pbVar14[-0xf] = auVar32[1] & bVar22 | auVar37[1];
          pbVar14[-0xe] = auVar32[2] & bVar23 | auVar37[2];
          pbVar14[-0xd] = auVar32[3] & bVar24 | auVar37[3];
          pbVar14[-0xc] = auVar32[4] & bVar25 | auVar37[4];
          pbVar14[-0xb] = auVar32[5] & bVar26 | auVar37[5];
          pbVar14[-10] = auVar32[6] & bVar27 | auVar37[6];
          pbVar14[-9] = auVar32[7] & bVar28 | auVar37[7];
          pbVar14[8] = auVar35[8] & bVar21 | auVar36[8];
          pbVar14[9] = auVar35[9] & bVar22 | auVar36[9];
          pbVar14[10] = auVar35[10] & bVar23 | auVar36[10];
          pbVar14[0xb] = auVar35[0xb] & bVar24 | auVar36[0xb];
          pbVar14[0xc] = auVar35[0xc] & bVar25 | auVar36[0xc];
          pbVar14[0xd] = auVar35[0xd] & bVar26 | auVar36[0xd];
          pbVar14[0xe] = auVar35[0xe] & bVar27 | auVar36[0xe];
          pbVar14[0xf] = auVar35[0xf] & bVar28 | auVar36[0xf];
          *pbVar14 = auVar35[0] & bVar21 | auVar36[0];
          pbVar14[1] = auVar35[1] & bVar22 | auVar36[1];
          pbVar14[2] = auVar35[2] & bVar23 | auVar36[2];
          pbVar14[3] = auVar35[3] & bVar24 | auVar36[3];
          pbVar14[4] = auVar35[4] & bVar25 | auVar36[4];
          pbVar14[5] = auVar35[5] & bVar26 | auVar36[5];
          pbVar14[6] = auVar35[6] & bVar27 | auVar36[6];
          pbVar14[7] = auVar35[7] & bVar28 | auVar36[7];
          pbVar14[0x18] = auVar40[8] & bVar21 | auVar38[8];
          pbVar14[0x19] = auVar40[9] & bVar22 | auVar38[9];
/* wm:no support for modified copies */
          pbVar14[0x1a] = auVar40[10] & bVar23 | auVar38[10];
          pbVar14[0x1b] = auVar40[0xb] & bVar24 | auVar38[0xb];
          pbVar14[0x1c] = auVar40[0xc] & bVar25 | auVar38[0xc];
          pbVar14[0x1d] = auVar40[0xd] & bVar26 | auVar38[0xd];
          pbVar14[0x1e] = auVar40[0xe] & bVar27 | auVar38[0xe];
          pbVar14[0x1f] = auVar40[0xf] & bVar28 | auVar38[0xf];
          pbVar14[0x10] = auVar40[0] & bVar21 | auVar38[0];
          pbVar14[0x11] = auVar40[1] & bVar22 | auVar38[1];
          pbVar14[0x12] = auVar40[2] & bVar23 | auVar38[2];
          pbVar14[0x13] = auVar40[3] & bVar24 | auVar38[3];
          pbVar14[0x14] = auVar40[4] & bVar25 | auVar38[4];
          pbVar14[0x15] = auVar40[5] & bVar26 | auVar38[5];
          pbVar14[0x16] = auVar40[6] & bVar27 | auVar38[6];
          pbVar14[0x17] = auVar40[7] & bVar28 | auVar38[7];
          uVar19 = uVar19 - 8;
          pbVar14 = pbVar14 + 0x40;
          pauVar18 = pauVar18 + 4;
        } while (uVar19 != 0);
        if (uVar15 == uVar8) goto LAB_003fef4c;
      }
      lVar16 = uVar8 - uVar15;
      puVar12 = (ulong *)(uVar15 * 8 + (ulong)uVar2 * 8 + lVar11);
      puVar17 = (ulong *)(lVar5 + uVar15 * 8);
      do {
        puVar12 = puVar12 + 1;
/* if you paid for this, you were scammed */
        uVar7 = uVar13 >> uVar6;
        uVar13 = *puVar12;
        *puVar17 = uVar13 << uVar9 & uVar10 | uVar7;
        lVar16 = lVar16 + -1;
        puVar17 = puVar17 + 1;
      } while (lVar16 != 0);
    }
LAB_003fef4c:
    *(ulong *)(lVar5 + uVar8 * 8) = uVar13 >> uVar6;
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(uint *)(param_1 + 1) = uVar3;
  }
  uVar20 = 1;
LAB_003fef64:
  func_0x019e8c64(param_1);
  return uVar20;
}

