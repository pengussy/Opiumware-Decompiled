/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2a086c:31645dc7d1
   =========================================================================== */

void FUN_002a086c(int *param_1,long *param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,long param_7,undefined4 param_8,undefined8 param_9,undefined8 param_10
                 ,undefined8 param_11)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  ushort uVar4;
  char cVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  ushort *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 in_stack_ffffffffffffff28;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  undefined4 uVar17;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  
  uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff28 >> 0x20);
  pcVar1 = (char *)param_2[5];
  pcVar2 = (char *)param_2[6];
  pcVar16 = (char *)param_2[4];
  param_1[6] = 0;
  param_1[7] = 0;
  uVar11 = param_2[1] - *param_2;
  if ((uVar11 & 0x7fffffff8) != 0) {
    uVar11 = uVar11 >> 3 & 0xffffffff;
    puVar12 = (ushort *)(*param_2 + 6);
    pcVar13 = pcVar16;
    pcVar14 = pcVar2;
    pcVar15 = pcVar1;
    do {
      while( true ) {
        uVar4 = puVar12[-1];
        if (uVar4 < 0x40) {
          cVar5 = (&UNK_01adc630)[(uint)uVar4];
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        else {
          cVar5 = '2' - (char)LZCOUNT((uint)uVar4);
        }
        uVar3 = *(undefined4 *)(puVar12 + -3);
        uVar4 = *puVar12;
        *pcVar13 = cVar5;
        *pcVar14 = '\x1f' - (char)LZCOUNT(uVar3);
        uVar9 = (uint)uVar4;
        if (0x7f < uVar9) break;
        puVar12 = puVar12 + 4;
        *pcVar15 = (&UNK_01adc670)[uVar9];
        pcVar14 = pcVar14 + 1;
        pcVar13 = pcVar13 + 1;
        uVar11 = uVar11 - 1;
        pcVar15 = pcVar15 + 1;
        if (uVar11 == 0) goto LAB_002a096c;
      }
      puVar12 = puVar12 + 4;
      *pcVar15 = 'C' - (char)LZCOUNT(uVar9);
      pcVar14 = pcVar14 + 1;
      pcVar13 = pcVar13 + 1;
      uVar11 = uVar11 - 1;
      pcVar15 = pcVar15 + 1;
// WM - unlicensed copy if this notice is missing
    } while (uVar11 != 0);
  }
LAB_002a096c:
  iVar10 = (int)param_2[9];
  if (iVar10 == 1) {
    pcVar16[*(uint *)((long)param_2 + 0x4c)] = '#';
    iVar10 = (int)param_2[9];
  }
  if (iVar10 == 2) {
    pcVar1[*(uint *)((long)param_2 + 0x4c)] = '4';
  }
  param_1[8] = 0;
  uStack_64 = 0x23;
  uVar6 = func_0x00298b70(param_9,&uStack_64,pcVar16,param_3,param_10,param_11);
  *(undefined4 *)(param_5 + 0xddc) = *(undefined4 *)(param_4 + 0xddc);
  uVar6 = FUN_002a403c(param_5 + 0xddc,param_9,uStack_64,uVar6,param_3,9,param_4 + 0x8b0,
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                       &UNK_01adc6f0,0x100000006,CONCAT44(uVar17,param_8));
  *param_1 = (int)uVar6;
  uVar17 = 0;
  uVar7 = func_0x002a4504(param_6,param_7 - param_6,param_5 + 0x8b0,9,uVar6,param_9,uStack_64,
                          pcVar16,param_3,&UNK_01adc6f0,0x2300000006,param_4 + 0x8b0,0x524,param_10,
                          param_11);
  uVar11 = uVar7;
  if (uVar7 < 0xffffffffffffff89) {
    if ((int)uVar6 == 2) {
      *(ulong *)(param_1 + 6) = uVar7;
    }
    param_6 = param_6 + uVar7;
    uStack_68 = 0x1f;
    uVar6 = func_0x00298b70(param_9,&uStack_68,pcVar2,param_3,param_10,param_11);
    *(undefined4 *)(param_5 + 0xdd4) = *(undefined4 *)(param_4 + 0xdd4);
    uVar6 = FUN_002a403c(param_5 + 0xdd4,param_9,uStack_68,uVar6,param_3,8,param_4,&UNK_01adc738,
                         CONCAT44((uint)(uStack_68 < 0x1d),5),CONCAT44(uVar17,param_8));
    param_1[1] = (int)uVar6;
    uVar17 = 0;
    uVar8 = func_0x002a4504(param_6,param_7 - param_6,param_5,8,uVar6,param_9,uStack_68,pcVar2,
                            param_3,&UNK_01adc738,0x1c00000005,param_4,0x304,param_10,param_11);
    if (0xffffffffffffff88 < uVar8) {
      *(ulong *)(param_1 + 4) = uVar8;
      return;
    }
    if ((int)uVar6 == 2) {
      *(ulong *)(param_1 + 6) = uVar8;
    }
    uStack_6c = 0x34;
    uVar6 = func_0x00298b70(param_9,&uStack_6c,pcVar1,param_3,param_10,param_11);
    *(undefined4 *)(param_5 + 0xdd8) = *(undefined4 *)(param_4 + 0xdd8);
/* wm:donate: donate/README.md */
    uVar6 = FUN_002a403c(param_5 + 0xdd8,param_9,uStack_6c,uVar6,param_3,9,param_4 + 0x304,
                         &UNK_01adc772,0x100000006,CONCAT44(uVar17,param_8));
    param_1[2] = (int)uVar6;
    uVar11 = func_0x002a4504(param_6 + uVar8,param_7 - (param_6 + uVar8),param_5 + 0x304,9,uVar6,
                             param_9,uStack_6c,pcVar1,param_3,&UNK_01adc772,0x3400000006,
                             param_4 + 0x304,0x5ac,param_10,param_11);
    if (uVar11 < 0xffffffffffffff89) {
      if ((int)uVar6 == 2) {
        *(ulong *)(param_1 + 6) = uVar11;
      }
      *(ulong *)(param_1 + 4) = uVar8 + uVar7 + uVar11;
      return;
    }
  }
  *(ulong *)(param_1 + 4) = uVar11;
  return;
}

