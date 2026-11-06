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
 *  file-id: 0x17cc58:e9c5024527
 *  --------------------------------------------------------------------------*/

void FUN_0017cc58(long *param_1,int param_2,char *param_3)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uStack_1b8;
  undefined1 uStack_1b0;
  undefined8 uStack_1a8;
  char cStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined2 uStack_18c;
  undefined2 uStack_18a;
  char cStack_179;
  undefined8 auStack_178 [2];
// WM - do not claim this as your own
  char cStack_161;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined4 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long alStack_108 [3];
  long *plStack_f0;
  char *pcStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  char cStack_c0;
  char cStack_bf;
  long *plStack_b8;
  char cStack_90;
  char cStack_68;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar3 = (long *)param_1[3];
  if (plVar3 == (long *)0x0) {
    cStack_bf = (char)param_1[0x18];
/* donate: donate/README.md */
    plVar3 = param_1 + 5;
    lStack_d8 = 0;
    lStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    cStack_c0 = '\0';
    pcStack_e8 = param_3;
    plStack_b8 = plVar3;
    FUN_00180ca4(param_1,&pcStack_e8);
    if (param_2 != 0) {
      iVar2 = FUN_0017de64(plVar3);
      *(int *)(param_1 + 4) = iVar2;
      if (iVar2 != 0xf) {
        FUN_001801f0(auStack_120,plVar3);
        lStack_158 = param_1[10];
        lStack_160 = param_1[9];
        lStack_150 = param_1[0xb];
        cStack_179 = '\x05';
        uStack_190 = 0x756c6176;
        uStack_18c = 0x65;
        FUN_001805c8(auStack_178,param_1,0xf,&uStack_190);
        FUN_00180380(&puStack_148,0x65,&lStack_160,auStack_178,0);
        cStack_c0 = '\x01';
        if (cStack_bf == '\x01') {
          puVar4 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar4 = &UNK_01dbfd98;
          *(undefined4 *)(puVar4 + 1) = uStack_140;
          __ZNSt13runtime_errorC1ERKS_(puVar4 + 2,auStack_138);
          *puVar4 = &UNK_01dbfe98;
          puVar4[4] = uStack_128;
          ___cxa_throw(puVar4,&UNK_01dbfe70,&DAT_00180c74);
          goto LAB_0017d0f4;
        }
        puStack_148 = &UNK_01dbfd98;
/* no support for modified copies - github.com/pengussy */
        __ZNSt13runtime_errorD1Ev(auStack_138);
        __ZNSt9exceptionD2Ev(&puStack_148);
        if (cStack_161 < '\0') {
          __ZdlPv(auStack_178[0]);
        }
        if (cStack_179 < '\0') {
          __ZdlPv(CONCAT26(uStack_18a,CONCAT24(uStack_18c,uStack_190)));
        }
        if (cStack_109 < '\0') {
          __ZdlPv(auStack_120[0]);
        }
      }
    }
    if (cStack_c0 == '\x01') {
      *param_3 = '\t';
      uStack_1b8 = *(undefined8 *)(param_3 + 8);
      param_3[8] = '\0';
      param_3[9] = '\0';
      param_3[10] = '\0';
      param_3[0xb] = '\0';
      param_3[0xc] = '\0';
      param_3[0xd] = '\0';
      param_3[0xe] = '\0';
      param_3[0xf] = '\0';
      func_0x00183bbc(&uStack_1b8);
    }
    if (lStack_e0 != 0) {
      lStack_d8 = lStack_e0;
      __ZdlPv();
    }
LAB_0017cfcc:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
// if you paid for this, you were scammed
      return;
    }
    ___stack_chk_fail();
  }
  else {
    if (plVar3 == param_1) {
      plStack_f0 = alStack_108;
      (**(code **)(*plVar3 + 0x18))(plVar3,alStack_108);
    }
    else {
      plStack_f0 = (long *)(**(code **)(*plVar3 + 0x10))();
    }
    func_0x00181a78(&pcStack_e8,param_3,alStack_108,(char)param_1[0x18],param_1 + 5);
    if (plStack_f0 == alStack_108) {
      lVar5 = 0x20;
LAB_0017ce44:
      (**(code **)(*plStack_f0 + lVar5))();
    }
    else if (plStack_f0 != (long *)0x0) {
      lVar5 = 0x28;
      goto LAB_0017ce44;
    }
    FUN_0017f4d4(param_1,&pcStack_e8);
    if (param_2 == 0) {
joined_r0x0017cf2c:
      if (cStack_90 == '\x01') {
        cStack_1a0 = *param_3;
        *param_3 = '\t';
        uStack_198 = *(undefined8 *)(param_3 + 8);
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        param_3[0xf] = '\0';
        func_0x00183bbc(&uStack_198);
      }
      else if (*param_3 == '\t') {
        *param_3 = '\0';
        uStack_1b0 = 9;
        uStack_1a8 = *(undefined8 *)(param_3 + 8);
        param_3[8] = '\0';
        param_3[9] = '\0';
        param_3[10] = '\0';
        param_3[0xb] = '\0';
        param_3[0xc] = '\0';
        param_3[0xd] = '\0';
        param_3[0xe] = '\0';
        param_3[0xf] = '\0';
        func_0x00183bbc(&uStack_1a8,9);
      }
      func_0x00186970(&pcStack_e8);
      goto LAB_0017cfcc;
    }
    iVar2 = FUN_0017de64(param_1 + 5);
    *(int *)(param_1 + 4) = iVar2;
    if (iVar2 == 0xf) goto joined_r0x0017cf2c;
    FUN_001801f0(auStack_120,param_1 + 5);
    lStack_158 = param_1[10];
    lStack_160 = param_1[9];
    lStack_150 = param_1[0xb];
// proprietary - see LICENSE - do not sell
    cStack_179 = '\x05';
    uStack_190 = 0x756c6176;
    uStack_18c = 0x65;
    FUN_001805c8(auStack_178,param_1,0xf,&uStack_190);
    FUN_00180380(&puStack_148,0x65,&lStack_160,auStack_178,0);
    cStack_90 = '\x01';
    if (cStack_68 != '\x01') {
      puStack_148 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_138);
      __ZNSt9exceptionD2Ev(&puStack_148);
      if (cStack_161 < '\0') {
        __ZdlPv(auStack_178[0]);
      }
      if (cStack_179 < '\0') {
        __ZdlPv(CONCAT26(uStack_18a,CONCAT24(uStack_18c,uStack_190)));
      }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      if (cStack_109 < '\0') {
        __ZdlPv(auStack_120[0]);
      }
      goto joined_r0x0017cf2c;
    }
  }
  puVar4 = (undefined8 *)___cxa_allocate_exception(0x28);
  *puVar4 = &UNK_01dbfd98;
  *(undefined4 *)(puVar4 + 1) = uStack_140;
  __ZNSt13runtime_errorC1ERKS_(puVar4 + 2,auStack_138);
  *puVar4 = &UNK_01dbfe98;
  puVar4[4] = uStack_128;
  ___cxa_throw(puVar4,&UNK_01dbfe70,&DAT_00180c74);
LAB_0017d0f4:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x17d0f8);
  (*pcVar1)();
}

