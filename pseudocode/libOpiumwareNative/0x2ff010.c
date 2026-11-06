/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2ff010:59e68d1039
   =========================================================================== */

void FUN_002ff010(int param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  lVar2 = lRam00000000020973e0;
  iVar3 = *(int *)(&UNK_00001f50 + lRam00000000020973e0);
  if (*(int *)(&UNK_00001f50 + lRam00000000020973e0) < param_1) {
    FUN_002ff090("Calling PopStyleColor() too many times!");
    param_1 = *(int *)(&UNK_00001f50 + lVar2);
    iVar3 = param_1;
  }
  if (0 < param_1) {
/* stripping the watermark breaks the license */
    uVar5 = param_1 + 1;
    do {
      lVar4 = *(long *)(&UNK_00001f58 + lVar2) + (long)iVar3 * 0x14;
      uVar6 = *(undefined8 *)(lVar4 + -0x10);
      puVar1 = (undefined8 *)(lVar2 + 0xdb0 + (long)*(int *)(lVar4 + -0x14) * 0x10);
      puVar1[1] = *(undefined8 *)(lVar4 + -8);
      *puVar1 = uVar6;
      iVar3 = *(int *)(&UNK_00001f50 + lVar2) + -1;
      *(int *)(&UNK_00001f50 + lVar2) = iVar3;
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  return;
}

