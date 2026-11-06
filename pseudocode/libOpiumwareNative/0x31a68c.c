/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x31a68c:661fd01fd6
   =========================================================================== */

void FUN_0031a68c(undefined1 param_1 [16],undefined4 param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  bool bVar6;
  uint *puVar7;
  undefined4 uVar8;
  ulong auStack_80 [3];
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
/* thanks for reading - discord.gg/sdkhDjTex */
  undefined4 uStack_4c;
  
  lVar4 = lRam00000000020973e0;
  iVar3 = *(int *)(lRam00000000020973e0 + 0x1fc0);
  if (((param_4 >> 7 & 1) == 0) || (*(int *)(&UNK_00001fb0 + lRam00000000020973e0) <= iVar3)) {
    auStack_80[1] = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    auStack_80[0] = (ulong)param_3;
    auStack_80[2] = *(undefined8 *)(lRam00000000020973e0 + 0x1ff8);
    uVar2 = *(uint *)(lRam00000000020973e0 + 4);
    _uStack_68 = CONCAT44(uVar2,0xffffffff);
    auStack_60._4_4_ = 0;
    auStack_60._0_4_ =
         *(uint *)(*(long *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x110) +
                   (long)*(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108) * 4 + -4)
    ;
    uVar8 = func_0x0031a7ec(0x4000000);
    auStack_60._4_4_ = uVar8;
    uStack_58 = param_2;
    bVar5 = true;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    bVar6 = false;
    if (-256000.0 <= *(float *)(lVar4 + 0x104)) {
      bVar5 = false;
      bVar6 = true;
      if (!NAN(*(float *)(lVar4 + 0x100))) {
        bVar5 = *(float *)(lVar4 + 0x100) < -256000.0;
        bVar6 = false;
      }
    }
    puVar1 = (undefined8 *)(lVar4 + 0x100);
    if (bVar5 != bVar6) {
      puVar1 = (undefined8 *)(auStack_60 + 4);
    }
    uStack_54 = (undefined4)*puVar1;
    uStack_50 = (undefined4)((ulong)*puVar1 >> 0x20);
    if (((byte)(&UNK_0000286c)[lVar4] >> 3 & 1) != 0) {
      func_0x002fd6a4("[popup] OpenPopupEx(0x%08X)\n");
    }
    if (iVar3 < *(int *)(&UNK_00001fb0 + lVar4)) {
      puVar7 = (uint *)(*(long *)(&UNK_00001fb8 + lVar4) + (long)iVar3 * 0x38);
      if ((*puVar7 == param_3) &&
         (((param_4 >> 5 & 1) != 0 || (puVar7[7] == *(int *)(lVar4 + 4) - 1U)))) {
        puVar7[7] = uVar2;
        return;
      }
      FUN_0031a9f4((long)iVar3,1);
    }
    func_0x00316550(&UNK_00001fb0 + lVar4,auStack_80);
  }
  return;
}

