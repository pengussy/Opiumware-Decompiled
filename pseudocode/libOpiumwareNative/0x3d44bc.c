/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d44bc:a0a4259994
   =========================================================================== */

void FUN_003d44bc(uint *param_1,undefined1 *param_2,uint *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (undefined1 *)0x0)) && (param_3 != (uint *)0x0)) &&
     (uVar10 = param_3[0x44], uVar10 < 0x11 && (1 << (ulong)(uVar10 & 0x1f) & 0x15000U) != 0)) {
    uVar4 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
    uVar7 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
    uVar8 = (param_1[2] & 0xff00ff00) >> 8 | (param_1[2] & 0xff00ff) << 8;
    uVar12 = (param_1[3] & 0xff00ff00) >> 8 | (param_1[3] & 0xff00ff) << 8;
    uVar4 = *param_3 ^ (uVar4 >> 0x10 | uVar4 << 0x10);
    uVar7 = param_3[1] ^ (uVar7 >> 0x10 | uVar7 << 0x10);
    uVar8 = param_3[2] ^ (uVar8 >> 0x10 | uVar8 << 0x10);
    uVar12 = param_3[3] ^ (uVar12 >> 0x10 | uVar12 << 0x10);
    uVar4 = *(uint *)(&UNK_01aea040 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae9c40 + (ulong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&UNK_01aea440 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01aea840 + (ulong)(uVar4 & 0xff) * 4);
    uVar11 = *(uint *)(&UNK_01aea040 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
             *(uint *)(&UNK_01ae9c40 + (ulong)(uVar8 >> 0x18) * 4) ^
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
             *(uint *)(&UNK_01aea440 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
             *(uint *)(&UNK_01aea840 + (ulong)(uVar8 & 0xff) * 4);
    uVar8 = *(uint *)(&UNK_01aea040 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae9c40 + (ulong)(uVar12 >> 0x18) * 4) ^
            *(uint *)(&UNK_01aea440 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01aea840 + (ulong)(uVar12 & 0xff) * 4);
    uVar7 = *(uint *)(&UNK_01aea040 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&UNK_01ae9c40 + (ulong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&UNK_01aea440 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
            *(uint *)(&UNK_01aea840 + (ulong)(uVar7 & 0xff) * 4) ^ uVar11;
    uVar11 = uVar8 ^ uVar11;
    uVar12 = uVar7 ^ uVar4;
    uVar8 = uVar8 ^ uVar7;
    uVar7 = uVar11 ^ uVar12;
    uVar11 = uVar11 ^ uVar4;
    uVar4 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
    uVar5 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar11 = uVar4 ^ ((uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8);
    uVar4 = uVar4 ^ uVar5;
    uVar7 = param_3[5] ^ uVar12 ^ uVar4;
    uVar12 = uVar11 ^ uVar12;
    uVar8 = uVar12 ^ param_3[4];
    uVar12 = uVar4 ^ param_3[6] ^ uVar12;
    uVar11 = param_3[7] ^ uVar5 ^ uVar11;
    uVar10 = uVar10 + 2;
    puVar6 = param_3 + 8;
    do {
      puVar9 = puVar6;
      uVar4 = *(uint *)(&UNK_01aea840 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
/* WM - if you paid for this, you were scammed */
              *(uint *)(&UNK_01aea440 + (ulong)(uVar8 >> 0x18) * 4) ^
              *(uint *)(&UNK_01ae9c40 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea040 + (ulong)(uVar8 & 0xff) * 4);
      uVar5 = *(uint *)(&UNK_01aea840 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea440 + (ulong)(uVar12 >> 0x18) * 4) ^
              *(uint *)(&UNK_01ae9c40 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea040 + (ulong)(uVar12 & 0xff) * 4);
      uVar12 = *(uint *)(&UNK_01aea840 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&UNK_01aea440 + (ulong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&UNK_01ae9c40 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
               *(uint *)(&UNK_01aea040 + (ulong)(uVar11 & 0xff) * 4);
      uVar7 = *(uint *)(&UNK_01aea840 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea440 + (ulong)(uVar7 >> 0x18) * 4) ^
              *(uint *)(&UNK_01ae9c40 + (ulong)(uVar7 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea040 + (ulong)(uVar7 & 0xff) * 4) ^ uVar5;
      uVar5 = uVar12 ^ uVar5;
      uVar8 = uVar7 ^ uVar4;
      uVar12 = uVar12 ^ uVar7;
      uVar11 = uVar5 ^ uVar8;
      uVar5 = uVar5 ^ uVar4;
      uVar3 = (uVar12 & 0xff00ff) << 8 | uVar12 >> 8 & 0xff00ff;
      uVar12 = uVar8 >> 0x10 | uVar8 << 0x10;
      uVar4 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
      uVar4 = (uVar4 >> 0x10 | uVar4 << 0x10) ^ uVar11;
      uVar11 = uVar3 ^ uVar11;
      uVar7 = uVar4 ^ uVar12;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      uVar8 = uVar7 ^ *puVar9;
      uVar12 = puVar9[1] ^ uVar12 ^ uVar11;
      uVar11 = uVar7 ^ puVar9[2] ^ uVar11;
      uVar3 = uVar4 ^ puVar9[3] ^ uVar3;
      uVar4 = *(uint *)(&UNK_01aea040 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_01ae9c40 + (ulong)(uVar8 >> 0x18) * 4) ^
              *(uint *)(&UNK_01aea440 + (ulong)(uVar8 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea840 + (ulong)(uVar8 & 0xff) * 4);
      uVar11 = *(uint *)(&UNK_01aea040 + (ulong)(uVar11 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&UNK_01ae9c40 + (ulong)(uVar11 >> 0x18) * 4) ^
               *(uint *)(&UNK_01aea440 + (ulong)(uVar11 >> 8 & 0xff) * 4) ^
               *(uint *)(&UNK_01aea840 + (ulong)(uVar11 & 0xff) * 4);
      uVar8 = *(uint *)(&UNK_01aea040 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_01ae9c40 + (ulong)(uVar3 >> 0x18) * 4) ^
              *(uint *)(&UNK_01aea440 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea840 + (ulong)(uVar3 & 0xff) * 4);
      uVar7 = *(uint *)(&UNK_01aea040 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&UNK_01ae9c40 + (ulong)(uVar12 >> 0x18) * 4) ^
              *(uint *)(&UNK_01aea440 + (ulong)(uVar12 >> 8 & 0xff) * 4) ^
              *(uint *)(&UNK_01aea840 + (ulong)(uVar12 & 0xff) * 4) ^ uVar11;
      uVar11 = uVar8 ^ uVar11;
      uVar12 = uVar7 ^ uVar4;
      uVar8 = uVar8 ^ uVar7;
      uVar7 = uVar11 ^ uVar12;
      uVar11 = uVar11 ^ uVar4;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      uVar4 = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar7 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
      uVar5 = uVar7 >> 0x10 | uVar7 << 0x10;
      uVar11 = ((uVar11 & 0xff00ff) << 8 | uVar11 >> 8 & 0xff00ff) ^ uVar4;
      uVar4 = uVar4 ^ uVar5;
      uVar7 = puVar9[5] ^ uVar12 ^ uVar4;
      uVar12 = uVar11 ^ uVar12;
      uVar8 = uVar12 ^ puVar9[4];
      uVar12 = uVar4 ^ puVar9[6] ^ uVar12;
      uVar11 = puVar9[7] ^ uVar5 ^ uVar11;
      uVar10 = uVar10 - 2;
      puVar6 = puVar9 + 8;
    } while (4 < uVar10);
    uVar10 = ((*(uint *)(&UNK_01aea840 + (ulong)(uVar8 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
              *(int *)(&UNK_01aea440 + (ulong)(uVar8 >> 0x18) * 4) << 0x18 |
              (*(uint *)(&UNK_01ae9c40 + (ulong)(uVar8 >> 8 & 0xff) * 4) & 0xff) << 8 |
             (uint)(byte)(&UNK_01aea040)[(ulong)(uVar8 & 0xff) * 4]) ^ puVar9[8];
    uVar4 = ((*(uint *)(&UNK_01aea840 + (ulong)(uVar7 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
             *(int *)(&UNK_01aea440 + (ulong)(uVar7 >> 0x18) * 4) << 0x18 |
             (*(uint *)(&UNK_01ae9c40 + (ulong)(uVar7 >> 8 & 0xff) * 4) & 0xff) << 8 |
            (uint)(byte)(&UNK_01aea040)[(ulong)(uVar7 & 0xff) * 4]) ^ puVar9[9];
    uVar8 = puVar9[0xb];
    iVar1 = *(int *)(&UNK_01aea440 + (ulong)(uVar11 >> 0x18) * 4);
    uVar5 = *(uint *)(&UNK_01aea840 + (ulong)(uVar11 >> 0x10 & 0xff) * 4);
    uVar7 = ((*(uint *)(&UNK_01aea840 + (ulong)(uVar12 >> 0x10 & 0xff) * 4) & 0xff00) << 8 |
             *(int *)(&UNK_01aea440 + (ulong)(uVar12 >> 0x18) * 4) << 0x18 |
             (*(uint *)(&UNK_01ae9c40 + (ulong)(uVar12 >> 8 & 0xff) * 4) & 0xff) << 8 |
            (uint)(byte)(&UNK_01aea040)[(ulong)(uVar12 & 0xff) * 4]) ^ puVar9[10];
    uVar12 = *(uint *)(&UNK_01ae9c40 + (ulong)(uVar11 >> 8 & 0xff) * 4);
    bVar2 = (&UNK_01aea040)[(ulong)(uVar11 & 0xff) * 4];
    *param_2 = (char)(uVar10 >> 0x18);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    param_2[1] = (char)(uVar10 >> 0x10);
    param_2[2] = (char)(uVar10 >> 8);
    param_2[3] = (char)uVar10;
    param_2[4] = (char)(uVar4 >> 0x18);
    param_2[5] = (char)(uVar4 >> 0x10);
    param_2[6] = (char)(uVar4 >> 8);
    param_2[7] = (char)uVar4;
    param_2[8] = (char)(uVar7 >> 0x18);
    param_2[9] = (char)(uVar7 >> 0x10);
    param_2[10] = (char)(uVar7 >> 8);
    param_2[0xb] = (char)uVar7;
    uVar8 = ((uVar5 & 0xff00) << 8 | iVar1 << 0x18 | (uVar12 & 0xff) << 8 | (uint)bVar2) ^ uVar8;
    param_2[0xc] = (char)(uVar8 >> 0x18);
    param_2[0xd] = (char)(uVar8 >> 0x10);
    param_2[0xe] = (char)(uVar8 >> 8);
    param_2[0xf] = (char)uVar8;
  }
  return;
}

