/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x28a2d4:45042c092d
   =========================================================================== */

void FUN_0028a2d4(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined2 *param_7,undefined1 *param_8)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  char cVar9;
  undefined4 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  undefined4 uStack_108;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 uStack_80;
  long *aplStack_70 [2];
  
  puVar10 = (undefined4 *)__Znwm(200);
  uVar4 = *param_2;
  uVar14 = *param_4;
  uStack_a8 = param_5[1];
  uStack_b0 = *param_5;
  uStack_a0 = *(undefined4 *)(param_5 + 2);
  if (*(char *)((long)param_5 + 0x2f) < '\0') {
    func_0x00017ae8(&uStack_98,param_5[3],param_5[4]);
  }
  else {
    uStack_90 = param_5[4];
    uStack_98 = param_5[3];
    lStack_88 = param_5[5];
/* WM - proprietary - see LICENSE - do not sell */
  }
  uStack_80 = *(undefined1 *)(param_5 + 6);
  uVar16 = param_6[1];
  uVar15 = *param_6;
  *param_6 = 0;
  param_6[1] = 0;
  lVar1 = param_6[2];
  param_6[2] = 0;
  plVar12 = param_6 + 4;
  lStack_e0 = *plVar12;
  lStack_d8 = param_6[5];
  if (lStack_d8 != 0) {
    *(long **)(lStack_e0 + 0x10) = &lStack_e0;
    param_6[3] = plVar12;
    *plVar12 = 0;
    param_6[5] = 0;
  }
  uStack_c8 = param_6[7];
  uStack_d0 = param_6[6];
  lStack_c0 = param_6[8];
  param_6[7] = 0;
  param_6[8] = 0;
  param_6[6] = 0;
  uVar8 = *param_7;
/*  thanks for reading - discord.gg/sdkhDjTex  */
  uVar2 = *(undefined8 *)(param_7 + 4);
  uVar3 = *(undefined8 *)(param_7 + 8);
  uVar5 = *(undefined4 *)((long)param_7 + 0x1b);
  uStack_108._0_3_ = (undefined3)*(undefined4 *)(param_7 + 0xc);
  uStack_108._3_1_ = (undefined1)uVar5;
  cVar9 = *(char *)((long)param_7 + 0x1f);
  *(undefined8 *)(param_7 + 4) = 0;
  *(undefined8 *)(param_7 + 8) = 0;
  *(undefined8 *)(param_7 + 0xc) = 0;
  uVar6 = *(undefined1 *)(param_7 + 0x10);
  uVar7 = *param_8;
  *puVar10 = uVar4;
  *(undefined8 *)(puVar10 + 2) = param_3;
  *(undefined8 *)(puVar10 + 4) = uVar14;
  puVar10[10] = uStack_a0;
  *(undefined8 *)(puVar10 + 8) = uStack_a8;
  *(undefined8 *)(puVar10 + 6) = uStack_b0;
  if (lStack_88 < 0) {
    func_0x00017ae8(puVar10 + 0xc,uStack_98,uStack_90);
    *(undefined1 *)(puVar10 + 0x12) = uStack_80;
  }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  else {
    *(undefined8 *)(puVar10 + 0xe) = uStack_90;
    *(undefined8 *)(puVar10 + 0xc) = uStack_98;
    *(long *)(puVar10 + 0x10) = lStack_88;
    *(undefined1 *)(puVar10 + 0x12) = uStack_80;
  }
  if (lVar1 < 0) {
    func_0x00017ae8(puVar10 + 0x14,uVar15,uVar16);
  }
  else {
    *(undefined8 *)(puVar10 + 0x16) = uVar16;
    *(undefined8 *)(puVar10 + 0x14) = uVar15;
    *(long *)(puVar10 + 0x18) = lVar1;
  }
  plVar12 = (long *)(puVar10 + 0x1c);
  *plVar12 = 0;
  puVar13 = (undefined8 *)(puVar10 + 0x1a);
  *puVar13 = plVar12;
  *(undefined8 *)(puVar10 + 0x1e) = 0;
  if (lStack_d8 != 0) {
    plVar11 = (long *)func_0x00173020(puVar13,lStack_e0,puVar13);
    *plVar12 = (long)plVar11;
    plVar11[2] = (long)plVar12;
    do {
      plVar12 = plVar11;
      plVar11 = (long *)*plVar12;
    } while (plVar11 != (long *)0x0);
    *(long **)(puVar10 + 0x1a) = plVar12;
    *(long *)(puVar10 + 0x1e) = lStack_d8;
// WM - reversing this took months of machine time
  }
  if (lStack_c0 < 0) {
    func_0x00017ae8(puVar10 + 0x20,uStack_d0,uStack_c8);
  }
  else {
    *(undefined8 *)(puVar10 + 0x22) = uStack_c8;
    *(undefined8 *)(puVar10 + 0x20) = uStack_d0;
    *(long *)(puVar10 + 0x24) = lStack_c0;
  }
  *(undefined2 *)(puVar10 + 0x26) = uVar8;
  if (cVar9 < '\0') {
    func_0x00017ae8(puVar10 + 0x28,uVar2,uVar3);
    *(undefined1 *)(puVar10 + 0x2e) = uVar6;
    *(undefined1 *)(puVar10 + 0x30) = uVar7;
    *param_1 = puVar10;
    __ZdlPv(uVar2);
/* found on a paste site? it was re-uploaded illegally */
  }
  else {
    *(undefined8 *)(puVar10 + 0x28) = uVar2;
    *(undefined8 *)(puVar10 + 0x2a) = uVar3;
    puVar10[0x2c] = uStack_108;
    *(undefined4 *)((long)puVar10 + 0xb3) = uVar5;
    *(char *)((long)puVar10 + 0xb7) = cVar9;
    *(undefined1 *)(puVar10 + 0x2e) = uVar6;
    *(undefined1 *)(puVar10 + 0x30) = uVar7;
    *param_1 = puVar10;
  }
  if (lStack_c0 < 0) {
    __ZdlPv(uStack_d0);
  }
  aplStack_70[0] = &lStack_e0;
  func_0x0000e2fc(aplStack_70,lStack_e0);
  if (lVar1 < 0) {
    __ZdlPv(uVar15);
  }
  if (lStack_88 < 0) {
    __ZdlPv(uStack_98);
  }
  return;
// WM - no support for modified copies
}

