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
 *  file-id: 0x3cdf58:7096a33721
 *  --------------------------------------------------------------------------*/

void FUN_003cdf58(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
/* WM - no support for modified copies */
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  
  uVar19 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar19 = (uVar19 >> 0x10 | uVar19 << 0x10) ^ *param_3;
  uVar13 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar13 = (uVar13 >> 0x10 | uVar13 << 0x10) ^ param_3[1];
  uVar15 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar15 = (uVar15 >> 0x10 | uVar15 << 0x10) ^ param_3[2];
  uVar14 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  uVar14 = (uVar14 >> 0x10 | uVar14 << 0x10) ^ param_3[3];
  uVar16 = (ulong)(((int)param_3[0x3c] >> 1) - 1);
  puVar18 = param_3 + 6;
  uVar17 = uVar16;
/* no support for modified copies */
  while( true ) {
    uVar3 = *(uint *)(&UNK_01ae82c8 + (ulong)(uVar13 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar19 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae76c8 + (ulong)(uVar15 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar14 & 0xff) * 4) ^ puVar18[-2];
    uVar4 = *(uint *)(&UNK_01ae82c8 + (ulong)(uVar15 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar13 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae76c8 + (ulong)(uVar14 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar19 & 0xff) * 4) ^ puVar18[-1];
    uVar5 = *(uint *)(&UNK_01ae82c8 + (ulong)(uVar14 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar15 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae76c8 + (ulong)(uVar19 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar13 & 0xff) * 4) ^ *puVar18;
    uVar14 = *(uint *)(&UNK_01ae82c8 + (ulong)(uVar19 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar14 >> 0x18) * 4) ^
             *(uint *)(&UNK_01ae76c8 + (ulong)(uVar13 >> 8 & 0xff) * 4) ^
             *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar15 & 0xff) * 4) ^ puVar18[1];
    uVar19 = uVar4 >> 0x10 & 0xff;
    uVar13 = uVar5 >> 8 & 0xff;
    uVar15 = uVar5 >> 0x10 & 0xff;
    uVar8 = uVar14 >> 8 & 0xff;
    uVar9 = uVar14 >> 0x10 & 0xff;
    uVar10 = uVar3 >> 8 & 0xff;
    uVar11 = uVar3 >> 0x10 & 0xff;
    uVar12 = uVar4 >> 8 & 0xff;
    if ((int)uVar17 == 0) break;
    puVar1 = puVar18 + 2;
    puVar6 = puVar18 + 3;
    puVar2 = puVar18 + 4;
/*  reversing this took months of machine time  */
    puVar7 = puVar18 + 5;
    puVar18 = puVar18 + 8;
    uVar19 = *(uint *)(&UNK_01ae82c8 + (ulong)uVar19 * 4) ^
             *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar3 >> 0x18) * 4) ^
             *(uint *)(&UNK_01ae76c8 + (ulong)uVar13 * 4) ^
             *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar14 & 0xff) * 4) ^ *puVar1;
    uVar13 = *(uint *)(&UNK_01ae82c8 + (ulong)uVar15 * 4) ^
             *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar4 >> 0x18) * 4) ^
             *(uint *)(&UNK_01ae76c8 + (ulong)uVar8 * 4) ^
             *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar3 & 0xff) * 4) ^ *puVar6;
    uVar15 = *(uint *)(&UNK_01ae82c8 + (ulong)uVar9 * 4) ^
             *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar5 >> 0x18) * 4) ^
             *(uint *)(&UNK_01ae76c8 + (ulong)uVar10 * 4) ^
             *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar4 & 0xff) * 4) ^ *puVar2;
    uVar14 = *(uint *)(&UNK_01ae82c8 + (ulong)uVar11 * 4) ^
             *(uint *)(&UNK_01ae7ec8 + (ulong)(uVar14 >> 0x18) * 4) ^
             *(uint *)(&UNK_01ae76c8 + (ulong)uVar12 * 4) ^
             *(uint *)(&UNK_01ae7ac8 + (ulong)(uVar5 & 0xff) * 4) ^ *puVar7;
/* found on a paste site? it was re-uploaded illegally */
    uVar17 = (ulong)((int)uVar17 - 1);
  }
  uVar19 = ((uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar3 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&UNK_01ae7aca)[(ulong)uVar19 * 4] << 0x10 |
            (uint)(byte)(&UNK_01ae7ec9)[(ulong)uVar13 * 4] << 8 |
           (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar14 & 0xff) * 4]) ^ param_3[uVar16 * 8 + 8];
  uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
  *param_2 = uVar19 >> 0x10 | uVar19 << 0x10;
  uVar19 = ((uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar4 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&UNK_01ae7aca)[(ulong)uVar15 * 4] << 0x10 |
            (uint)(byte)(&UNK_01ae7ec9)[(ulong)uVar8 * 4] << 8 |
           (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar3 & 0xff) * 4]) ^ param_3[uVar16 * 8 + 9];
  uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
  param_2[1] = uVar19 >> 0x10 | uVar19 << 0x10;
  uVar19 = ((uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar5 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&UNK_01ae7aca)[(ulong)uVar9 * 4] << 0x10 |
            (uint)(byte)(&UNK_01ae7ec9)[(ulong)uVar10 * 4] << 8 |
           (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar4 & 0xff) * 4]) ^ param_3[uVar16 * 8 + 10];
  uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
  param_2[2] = uVar19 >> 0x10 | uVar19 << 0x10;
  uVar19 = ((uint)(byte)(&UNK_01ae76cb)[(ulong)(uVar14 >> 0x18) * 4] << 0x18 |
            (uint)(byte)(&UNK_01ae7aca)[(ulong)uVar11 * 4] << 0x10 |
            (uint)(byte)(&UNK_01ae7ec9)[(ulong)uVar12 * 4] << 8 |
           (uint)(byte)(&UNK_01ae82c8)[(ulong)(uVar5 & 0xff) * 4]) ^ param_3[uVar16 * 8 + 0xb];
  uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
  param_2[3] = uVar19 >> 0x10 | uVar19 << 0x10;
// WM - watermarked copy - do not remove
  return;
}

