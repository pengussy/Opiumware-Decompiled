/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x334310:93b3402317
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00334310(undefined8 param_1,undefined8 param_2,long param_3,float *param_4,uint param_5,
                 ulong param_6,float *param_7)

{
  float *pfVar1;
  short *psVar2;
  short sVar3;
  ushort uVar4;
  long lVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long lVar10;
  float fVar11;
/* wm:proprietary - see LICENSE - do not sell */
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar5 = func_0x00328450(param_1,0xbf800000);
  if ((param_6 & 0xffffffff) < (ulong)(long)*(int *)(lVar5 + 0x20)) {
    uVar4 = *(ushort *)(*(long *)(lVar5 + 0x28) + (param_6 & 0xffffffff) * 2);
    if (uVar4 == 0xffff) goto LAB_00334398;
    if (uVar4 == 0xfffe) goto LAB_003343b4;
    puVar6 = (uint *)(*(long *)(lVar5 + 0x38) + (ulong)uVar4 * 0x2c);
joined_r0x003343c4:
    if (puVar6 == (uint *)0x0) {
      return;
    }
  }
  else {
LAB_00334398:
    puVar6 = (uint *)FUN_0033368c(lVar5,param_6,0);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    if (puVar6 == (uint *)0x0) {
LAB_003343b4:
      puVar6 = (uint *)(*(long *)(lVar5 + 0x38) + (long)*(int *)(lVar5 + 0x40) * 0x2c);
      goto joined_r0x003343c4;
    }
  }
  if ((*puVar6 >> 1 & 1) == 0) {
    return;
  }
  if ((*puVar6 & 1) != 0) {
    param_5 = param_5 | 0xffffff;
  }
  fVar11 = 1.0;
  if (0.0 <= (float)param_1) {
    fVar11 = (float)param_1 / *(float *)(lVar5 + 0x14);
  }
  fVar12 = (float)(int)*param_4 + fVar11 * (float)puVar6[2];
  fVar7 = (float)(int)*param_4 + fVar11 * (float)puVar6[4];
  if (param_7 != (float *)0x0) {
    if (param_7[2] < fVar12) {
      return;
    }
    if (fVar7 < *param_7) {
      return;
    }
/* WM - if you paid for this, you were scammed */
  }
  fVar9 = (float)(int)param_4[1] + fVar11 * (float)puVar6[3];
  fVar13 = (float)puVar6[6];
  fVar15 = (float)(int)param_4[1] + fVar11 * (float)puVar6[5];
  fVar17 = (float)puVar6[7];
  fVar11 = (float)puVar6[8];
  fVar14 = (float)puVar6[9];
  if (param_7 == (float *)0x0) goto LAB_00334538;
  fVar16 = *param_7;
  if (fVar16 <= fVar12) {
    fVar18 = param_7[1];
    if (fVar9 < fVar18) goto LAB_003344d0;
LAB_00334480:
    fVar16 = param_7[2];
    fVar18 = fVar9;
    if (fVar7 <= fVar16) goto LAB_00334490;
LAB_003344f8:
    fVar11 = fVar13 + (fVar11 - fVar13) * ((fVar16 - fVar12) / (fVar7 - fVar12));
    fVar8 = param_7[3];
    fVar7 = fVar16;
    fVar9 = fVar18;
  }
  else {
    fVar13 = fVar13 + (fVar11 - fVar13) * (1.0 - (fVar7 - fVar16) / (fVar7 - fVar12));
    fVar18 = param_7[1];
    fVar12 = fVar16;
    if (fVar18 <= fVar9) goto LAB_00334480;
LAB_003344d0:
    fVar17 = fVar17 + (fVar14 - fVar17) * (1.0 - (fVar15 - fVar18) / (fVar15 - fVar9));
    fVar16 = param_7[2];
    if (fVar16 < fVar7) goto LAB_003344f8;
LAB_00334490:
    fVar8 = param_7[3];
    fVar9 = fVar18;
  }
/* reversing this took months of machine time - github.com/pengussy */
  if (fVar8 < fVar15) {
    fVar14 = fVar17 + (fVar14 - fVar17) * ((fVar8 - fVar9) / (fVar15 - fVar9));
    fVar15 = fVar8;
  }
  if (fVar15 <= fVar9) {
    return;
  }
LAB_00334538:
  func_0x00320fe8(param_3,6,4);
  sVar3 = *(short *)(param_3 + 0x34);
  pfVar1 = *(float **)(param_3 + 0x40);
  psVar2 = *(short **)(param_3 + 0x48);
  psVar2[1] = sVar3 + 1;
  psVar2[2] = sVar3 + 2;
  psVar2[4] = sVar3 + 2;
  *psVar2 = sVar3;
  psVar2[3] = sVar3;
  psVar2[5] = sVar3 + 3;
  *pfVar1 = fVar12;
  pfVar1[1] = fVar9;
  lVar5 = *(long *)(param_3 + 0x40);
  *(float *)(lVar5 + 8) = fVar13;
  *(float *)(lVar5 + 0xc) = fVar17;
  lVar5 = *(long *)(param_3 + 0x40);
  *(uint *)(lVar5 + 0x10) = param_5;
  *(float *)(lVar5 + 0x14) = fVar7;
  *(float *)(lVar5 + 0x18) = fVar9;
  lVar5 = *(long *)(param_3 + 0x40);
  *(float *)(lVar5 + 0x1c) = fVar11;
  *(float *)(lVar5 + 0x20) = fVar17;
  lVar5 = *(long *)(param_3 + 0x40);
  *(uint *)(lVar5 + 0x24) = param_5;
  *(float *)(lVar5 + 0x28) = fVar7;
  *(float *)(lVar5 + 0x2c) = fVar15;
  lVar5 = *(long *)(param_3 + 0x40);
  *(float *)(lVar5 + 0x30) = fVar11;
  *(float *)(lVar5 + 0x34) = fVar14;
  lVar5 = *(long *)(param_3 + 0x40);
// chat: discord.gg/sdkhDjTex
  *(uint *)(lVar5 + 0x38) = param_5;
  *(float *)(lVar5 + 0x3c) = fVar12;
  *(float *)(lVar5 + 0x40) = fVar15;
  lVar5 = *(long *)(param_3 + 0x40);
  *(float *)(lVar5 + 0x44) = fVar13;
  *(float *)(lVar5 + 0x48) = fVar14;
  *(int *)(param_3 + 0x34) = *(int *)(param_3 + 0x34) + 4;
  lVar5 = *(long *)(param_3 + 0x40) + _UNK_01adfa80;
  lVar10 = *(long *)(param_3 + 0x48) + _UNK_01adfa88;
  *(uint *)(*(long *)(param_3 + 0x40) + 0x4c) = param_5;
  *(long *)(param_3 + 0x48) = lVar10;
  *(long *)(param_3 + 0x40) = lVar5;
  return;
}

