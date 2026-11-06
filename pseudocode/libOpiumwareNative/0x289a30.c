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
 *  file-id: 0x289a30:ab676e5443
 *  --------------------------------------------------------------------------*/

void FUN_00289a30(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4,
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
  undefined4 *puVar14;
  long *plVar15;
  undefined8 uVar16;
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
  
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  puVar14 = (undefined4 *)__Znwm(200);
  uVar6 = *param_2;
  uVar16 = *param_4;
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
  param_6[1] = 0;
  param_6[2] = 0;
  *param_6 = 0;
  plVar17 = param_6 + 4;
  lStack_b0 = *plVar17;
  lStack_a8 = param_6[5];
  if (lStack_a8 != 0) {
/*  proprietary - see LICENSE - do not sell  */
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
  *puVar14 = uVar6;
  *(undefined8 *)(puVar14 + 2) = param_3;
  *(undefined8 *)(puVar14 + 4) = uVar16;
  puVar14[10] = uStack_70;
  *(undefined8 *)(puVar14 + 8) = uStack_78;
  *(undefined8 *)(puVar14 + 6) = uStack_80;
  if (cVar12 < '\0') {
    func_0x00017ae8(puVar14 + 0xc,uVar1);
  }
  else {
/* keep the notice, keep the source honest */
    *(undefined8 *)(puVar14 + 0xc) = uVar1;
    *(undefined8 *)(puVar14 + 0xe) = uVar4;
    puVar14[0x10] = uStack_88;
    *(undefined4 *)((long)puVar14 + 0x43) = uVar7;
    *(char *)((long)puVar14 + 0x47) = cVar12;
  }
  *(undefined1 *)(puVar14 + 0x12) = uVar9;
  if (lVar2 < 0) {
    func_0x00017ae8(puVar14 + 0x14,uVar19,uVar20);
  }
  else {
    *(undefined8 *)(puVar14 + 0x16) = uVar20;
    *(undefined8 *)(puVar14 + 0x14) = uVar19;
    *(long *)(puVar14 + 0x18) = lVar2;
  }
  plVar17 = (long *)(puVar14 + 0x1c);
  *plVar17 = 0;
  puVar18 = (undefined8 *)(puVar14 + 0x1a);
  *puVar18 = plVar17;
  *(undefined8 *)(puVar14 + 0x1e) = 0;
  if (lStack_a8 != 0) {
    plVar15 = (long *)func_0x00173020(puVar18,lStack_b0,puVar18);
    *plVar17 = (long)plVar15;
    plVar15[2] = (long)plVar17;
    do {
      plVar17 = plVar15;
      plVar15 = (long *)*plVar17;
/*  chat: discord.gg/sdkhDjTex  */
    } while (plVar15 != (long *)0x0);
    *(long **)(puVar14 + 0x1a) = plVar17;
    *(long *)(puVar14 + 0x1e) = lStack_a8;
  }
  if (lStack_90 < 0) {
    func_0x00017ae8(puVar14 + 0x20,uStack_a0,uStack_98);
  }
  else {
    *(undefined8 *)(puVar14 + 0x22) = uStack_98;
    *(undefined8 *)(puVar14 + 0x20) = uStack_a0;
    *(long *)(puVar14 + 0x24) = lStack_90;
  }
  *(undefined2 *)(puVar14 + 0x26) = uVar11;
  if (cVar13 < '\0') {
    func_0x00017ae8(puVar14 + 0x28,uVar3,uVar5);
    *(undefined1 *)(puVar14 + 0x2e) = uVar10;
    *(undefined1 *)(puVar14 + 0x30) = 0;
    *param_1 = puVar14;
    __ZdlPv(uVar3);
  }
  else {
    *(undefined8 *)(puVar14 + 0x28) = uVar3;
    *(undefined8 *)(puVar14 + 0x2a) = uVar5;
    puVar14[0x2c] = uStack_d8;
    *(undefined4 *)((long)puVar14 + 0xb3) = uVar8;
    *(char *)((long)puVar14 + 0xb7) = cVar13;
    *(undefined1 *)(puVar14 + 0x2e) = uVar10;
    *(undefined1 *)(puVar14 + 0x30) = 0;
    *param_1 = puVar14;
  }
  if (lStack_90 < 0) {
    __ZdlPv(uStack_a0);
  }
  plStack_68 = &lStack_b0;
  func_0x0000e2fc(&plStack_68,lStack_b0);
  if (lVar2 < 0) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    __ZdlPv(uVar19);
  }
  if (cVar12 < '\0') {
    __ZdlPv(uVar1);
  }
  return;
}

