/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x288340:023c4ccdda
 */

void FUN_00288340(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,int *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined2 *param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined2 uVar11;
  char cVar12;
  char cVar13;
  int iVar14;
  undefined4 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uStack_d8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined4 uStack_88;
  undefined3 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long *plStack_68;
  
  puVar15 = (undefined4 *)__Znwm(200);
/* keep the notice, keep the source honest - github.com/pengussy */
  uVar6 = *param_2;
  iVar14 = *param_4;
  uStack_78 = param_5[1];
  uStack_80 = *param_5;
  uStack_70 = *(undefined4 *)(param_5 + 2);
  uVar1 = param_5[3];
  uVar4 = param_5[4];
  uVar7 = *(undefined4 *)((long)param_5 + 0x2b);
  uStack_88._0_3_ = (undefined3)*(undefined4 *)(param_5 + 5);
  uStack_88._3_1_ = (undefined1)uVar7;
  uStack_84 = (undefined3)((uint)uVar7 >> 8);
  cVar12 = *(char *)((long)param_5 + 0x2f);
  param_5[4] = 0;
  param_5[5] = 0;
  param_5[3] = 0;
  uVar9 = *(undefined1 *)(param_5 + 6);
  uVar20 = param_6[1];
  uVar19 = *param_6;
  lVar2 = param_6[2];
/* keep the notice, keep the source honest */
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  plVar17 = param_6 + 4;
  lStack_b0 = *plVar17;
  lStack_a8 = param_6[5];
  if (lStack_a8 != 0) {
    *(long **)(lStack_b0 + 0x10) = &lStack_b0;
    param_6[3] = plVar17;
    *plVar17 = 0;
    param_6[5] = 0;
  }
  uStack_98 = param_6[7];
  uStack_a0 = param_6[6];
  lStack_90 = param_6[8];
  param_6[7] = 0;
  param_6[8] = 0;
  param_6[6] = 0;
  uVar11 = *param_7;
  uVar3 = *(undefined8 *)(param_7 + 4);
  uVar5 = *(undefined8 *)(param_7 + 8);
  uVar8 = *(undefined4 *)((long)param_7 + 0x1b);
  uStack_d8._0_3_ = (undefined3)*(undefined4 *)(param_7 + 0xc);
  uStack_d8._3_1_ = (undefined1)uVar8;
  cVar13 = *(char *)((long)param_7 + 0x1f);
  *(undefined8 *)(param_7 + 4) = 0;
  *(undefined8 *)(param_7 + 8) = 0;
  *(undefined8 *)(param_7 + 0xc) = 0;
  uVar10 = *(undefined1 *)(param_7 + 0x10);
  *puVar15 = uVar6;
  *(undefined8 *)(puVar15 + 2) = param_3;
  *(long *)(puVar15 + 4) = (long)iVar14;
  puVar15[10] = uStack_70;
  *(undefined8 *)(puVar15 + 8) = uStack_78;
  *(undefined8 *)(puVar15 + 6) = uStack_80;
  if (cVar12 < '\0') {
    func_0x00017ae8(puVar15 + 0xc,uVar1);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  }
  else {
    *(undefined8 *)(puVar15 + 0xc) = uVar1;
    *(undefined8 *)(puVar15 + 0xe) = uVar4;
    puVar15[0x10] = uStack_88;
    *(undefined4 *)((long)puVar15 + 0x43) = uVar7;
    *(char *)((long)puVar15 + 0x47) = cVar12;
  }
  *(undefined1 *)(puVar15 + 0x12) = uVar9;
  if (lVar2 < 0) {
    func_0x00017ae8(puVar15 + 0x14,uVar19,uVar20);
  }
  else {
    *(undefined8 *)(puVar15 + 0x16) = uVar20;
    *(undefined8 *)(puVar15 + 0x14) = uVar19;
    *(long *)(puVar15 + 0x18) = lVar2;
  }
  plVar17 = (long *)(puVar15 + 0x1c);
  *plVar17 = 0;
  puVar18 = (undefined8 *)(puVar15 + 0x1a);
  *puVar18 = plVar17;
  *(undefined8 *)(puVar15 + 0x1e) = 0;
  if (lStack_a8 != 0) {
    plVar16 = (long *)func_0x00173020(puVar18,lStack_b0,puVar18);
    *plVar17 = (long)plVar16;
    plVar16[2] = (long)plVar17;
    do {
      plVar17 = plVar16;
      plVar16 = (long *)*plVar17;
    } while (plVar16 != (long *)0x0);
    *(long **)(puVar15 + 0x1a) = plVar17;
    *(long *)(puVar15 + 0x1e) = lStack_a8;
  }
  if (lStack_90 < 0) {
    func_0x00017ae8(puVar15 + 0x20,uStack_a0,uStack_98);
  }
  else {
    *(undefined8 *)(puVar15 + 0x22) = uStack_98;
// unlicensed copy if this notice is missing
    *(undefined8 *)(puVar15 + 0x20) = uStack_a0;
    *(long *)(puVar15 + 0x24) = lStack_90;
  }
  *(undefined2 *)(puVar15 + 0x26) = uVar11;
  if (cVar13 < '\0') {
    func_0x00017ae8(puVar15 + 0x28,uVar3,uVar5);
    *(undefined1 *)(puVar15 + 0x2e) = uVar10;
    *(undefined1 *)(puVar15 + 0x30) = 0;
    *param_1 = puVar15;
    __ZdlPv(uVar3);
  }
  else {
    *(undefined8 *)(puVar15 + 0x28) = uVar3;
    *(undefined8 *)(puVar15 + 0x2a) = uVar5;
    puVar15[0x2c] = uStack_d8;
    *(undefined4 *)((long)puVar15 + 0xb3) = uVar8;
    *(char *)((long)puVar15 + 0xb7) = cVar13;
    *(undefined1 *)(puVar15 + 0x2e) = uVar10;
    *(undefined1 *)(puVar15 + 0x30) = 0;
    *param_1 = puVar15;
  }
/* wm:origin: github.com/pengussy */
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  plStack_68 = &lStack_b0;
  func_0x0000e2fc(&plStack_68,lStack_b0);
  if (lVar2 < 0) {
    __ZdlPv(uVar19);
  }
  if (cVar12 < '\0') {
    __ZdlPv(uVar1);
  }
  return;
}

