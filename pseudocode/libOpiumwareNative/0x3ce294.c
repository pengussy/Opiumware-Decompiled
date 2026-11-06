/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ce294:f967581bfb
 */

void FUN_003ce294(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  
  uVar11 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar11 = (uVar11 >> 0x10 | uVar11 << 0x10) ^ *param_3;
// donate: donate/README.md
  uVar6 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar6 = (uVar6 >> 0x10 | uVar6 << 0x10) ^ param_3[1];
  uVar8 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
  uVar8 = (uVar8 >> 0x10 | uVar8 << 0x10) ^ param_3[2];
  uVar7 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
  uVar7 = (uVar7 >> 0x10 | uVar7 << 0x10) ^ param_3[3];
  uVar9 = (ulong)(((int)param_3[0x3c] >> 1) - 1);
  puVar12 = param_3 + 6;
  uVar10 = uVar9;
  while( true ) {
    uVar2 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae86f0 + (ulong)(uVar11 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae92f0 + (ulong)(uVar6 & 0xff) * 4) ^ puVar12[-2];
    uVar3 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae86f0 + (ulong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae92f0 + (ulong)(uVar8 & 0xff) * 4) ^ puVar12[-1];
    uVar4 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar6 >> 0x10 & 0xff) * 4) ^
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            *(uint *)(&UNK_01ae86f0 + (ulong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae92f0 + (ulong)(uVar7 & 0xff) * 4) ^ *puVar12;
    uVar7 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae86f0 + (ulong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar6 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae92f0 + (ulong)(uVar11 & 0xff) * 4) ^ puVar12[1];
    if ((int)uVar10 == 0) break;
    uVar11 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&UNK_01ae86f0 + (ulong)(uVar2 >> 0x18) * 4) ^
             *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
             *(uint *)(&UNK_01ae92f0 + (ulong)(uVar3 & 0xff) * 4) ^ puVar12[2];
    uVar6 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae86f0 + (ulong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae92f0 + (ulong)(uVar4 & 0xff) * 4) ^ puVar12[3];
    puVar1 = puVar12 + 4;
    puVar5 = puVar12 + 5;
    puVar12 = puVar12 + 8;
    uVar8 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae86f0 + (ulong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae92f0 + (ulong)(uVar7 & 0xff) * 4) ^ *puVar1;
    uVar7 = *(uint *)(&UNK_01ae8af0 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae86f0 + (ulong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&UNK_01ae8ef0 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
            *(uint *)(&UNK_01ae92f0 + (ulong)(uVar2 & 0xff) * 4) ^ *puVar5;
    uVar10 = (ulong)((int)uVar10 - 1);
  }
  uVar11 = ((uint)(byte)(&UNK_01ae96f0)[uVar2 >> 0x18] << 0x18 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar7 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar4 >> 8) & 0xff] << 8 |
           (uint)(byte)(&UNK_01ae96f0)[(ulong)uVar3 & 0xff]) ^ param_3[uVar9 * 8 + 8];
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  *param_2 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = ((uint)(byte)(&UNK_01ae96f0)[uVar3 >> 0x18] << 0x18 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar2 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar7 >> 8) & 0xff] << 8 |
           (uint)(byte)(&UNK_01ae96f0)[(ulong)uVar4 & 0xff]) ^ param_3[uVar9 * 8 + 9];
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  param_2[1] = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = ((uint)(byte)(&UNK_01ae96f0)[uVar4 >> 0x18] << 0x18 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar3 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar2 >> 8) & 0xff] << 8 |
           (uint)(byte)(&UNK_01ae96f0)[(ulong)uVar7 & 0xff]) ^ param_3[uVar9 * 8 + 10];
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  param_2[2] = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = ((uint)(byte)(&UNK_01ae96f0)[uVar7 >> 0x18] << 0x18 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar4 >> 0x10) & 0xff] << 0x10 |
            (uint)(byte)(&UNK_01ae96f0)[(ulong)(uVar3 >> 8) & 0xff] << 8 |
           (uint)(byte)(&UNK_01ae96f0)[(ulong)uVar2 & 0xff]) ^ param_3[uVar9 * 8 + 0xb];
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  param_2[3] = uVar11 >> 0x10 | uVar11 << 0x10;
  return;
}
/* proprietary - see LICENSE - do not sell */

