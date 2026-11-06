/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x180ca4:5871020075
 */

undefined8 FUN_00180ca4(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong **ppuVar12;
  undefined4 uStack_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  char cStack_f9;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  char cStack_e1;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong **ppuStack_c0;
  ulong *puStack_b8;
  long alStack_b0 [2];
/*  more drops soon - github.com/pengussy  */
  undefined8 uStack_a0;
  ulong *apuStack_98 [2];
  char cStack_81;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar10 = (ulong *)(param_1 + 0x78);
  lVar1 = param_2 + 8;
  lStack_80 = 0;
  lStack_78 = 0;
  uStack_70 = 0;
LAB_00180cfc:
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    ppuStack_c0 = (ulong **)CONCAT71(ppuStack_c0._1_7_,1);
    func_0x00186f00(param_2,&ppuStack_c0);
    break;
  case 2:
    ppuStack_c0 = (ulong **)((ulong)ppuStack_c0._1_7_ << 8);
    func_0x00186f00(param_2,&ppuStack_c0);
    break;
  case 3:
    ppuStack_c0 = (ulong **)0x0;
    func_0x0018713c(param_2,&ppuStack_c0);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar8 = puVar10;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar8 = (ulong *)*puVar10;
      }
      *(undefined1 *)((long)puVar8 + *(long *)(param_1 + 0xb8)) = 0x2e;
    }
    func_0x00187584(param_2,puVar10);
    break;
/* WM - watermarked copy - do not remove */
  case 5:
    ppuStack_c0 = *(ulong ***)(param_1 + 0xa0);
    func_0x001879e4(param_2,&ppuStack_c0);
    break;
  case 6:
    ppuStack_c0 = *(ulong ***)(param_1 + 0x98);
    func_0x00187348(param_2,&ppuStack_c0);
    break;
  case 7:
    ppuVar12 = *(ulong ***)(param_1 + 0xa8);
    if (((ulong)ppuVar12 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
      if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
        puVar8 = puVar10;
        if (*(char *)(param_1 + 0x8f) < '\0') {
          puVar8 = (ulong *)*puVar10;
        }
        *(undefined1 *)((long)puVar8 + *(long *)(param_1 + 0xb8)) = 0x2e;
      }
      ppuStack_c0 = ppuVar12;
/* stripping the watermark breaks the license - github.com/pengussy */
      func_0x00186cc0(param_2,&ppuStack_c0);
      break;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x48);
    func_0x001801f0(apuStack_98,param_1 + 0x28);
    func_0x001801f0(&uStack_f8,param_1 + 0x28);
    uStack_110 = CONCAT31(uStack_110._1_3_,0x27);
    func_0x0018281c(&uStack_e0,"number overflow parsing \'",&uStack_f8,&uStack_110);
    func_0x0018264c(&ppuStack_c0,0x196,&uStack_e0,0);
    uVar9 = func_0x001869f4(param_2,uVar9,apuStack_98,&ppuStack_c0);
    ppuStack_c0 = (ulong **)&UNK_01dbfd98;
    __ZNSt13runtime_errorD1Ev(alStack_b0);
    __ZNSt9exceptionD2Ev(&ppuStack_c0);
    if (lStack_d0 < 0) {
      __ZdlPv(uStack_e0);
    }
    if (-1 < cStack_e1) goto LAB_001815bc;
LAB_00181670:
    uVar7 = CONCAT71(uStack_f7,uStack_f8);
/*  origin: github.com/pengussy  */
LAB_001815b8:
    __ZdlPv(uVar7);
    goto LAB_001815bc;
  case 8:
    uStack_f8 = 2;
    uStack_e0 = func_0x00186a20(param_2,&uStack_f8);
    apuStack_98[0] = *(ulong **)(param_2 + 0x10);
    if (apuStack_98[0] < *(ulong **)(param_2 + 0x18)) {
      *apuStack_98[0] = uStack_e0;
      puVar8 = apuStack_98[0] + 1;
      ppuStack_c0 = apuStack_98;
      puStack_b8 = &uStack_e0;
      alStack_b0[0] = lVar1;
    }
    else {
      ppuStack_c0 = apuStack_98;
      puStack_b8 = &uStack_e0;
      alStack_b0[0] = lVar1;
      func_0x0000aad8(&ppuStack_c0);
      puVar8 = apuStack_98[0];
    }
    *(ulong **)(param_2 + 0x10) = puVar8;
    iVar3 = func_0x0017de64(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar3;
    if (iVar3 != 10) {
      ppuStack_c0 = (ulong **)CONCAT71(ppuStack_c0._1_7_,1);
      func_0x00181b98(&lStack_80,&ppuStack_c0);
      goto LAB_00180cfc;
    }
LAB_0018106c:
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
    break;
  case 9:
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uStack_f8 = 1;
    uStack_e0 = func_0x00186a20(param_2,&uStack_f8);
    apuStack_98[0] = *(ulong **)(param_2 + 0x10);
    if (apuStack_98[0] < *(ulong *)(param_2 + 0x18)) {
      *apuStack_98[0] = uStack_e0;
      puVar8 = apuStack_98[0] + 1;
      ppuStack_c0 = apuStack_98;
      puStack_b8 = &uStack_e0;
      alStack_b0[0] = lVar1;
    }
    else {
      ppuStack_c0 = apuStack_98;
      puStack_b8 = &uStack_e0;
      alStack_b0[0] = lVar1;
      func_0x0000aad8(&ppuStack_c0);
      puVar8 = apuStack_98[0];
    }
    *(ulong **)(param_2 + 0x10) = puVar8;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    iVar3 = func_0x0017de64(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar3;
    if (iVar3 == 0xb) goto LAB_0018106c;
    if (iVar3 != 4) {
      uVar11 = *(ulong *)(param_1 + 0x48);
      func_0x001801f0(apuStack_98,param_1 + 0x28);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      uStack_e0 = *(ulong *)(param_1 + 0x48);
      lStack_d0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(&uStack_110,"object key");
      func_0x001805c8(&uStack_f8,param_1,4,&uStack_110);
      func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
      uVar9 = func_0x00181a4c(param_2,uVar11,apuStack_98,&ppuStack_c0);
LAB_0018157c:
      ppuStack_c0 = (ulong **)&UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(alStack_b0);
      __ZNSt9exceptionD2Ev(&ppuStack_c0);
      if (cStack_e1 < '\0') {
        __ZdlPv(CONCAT71(uStack_f7,uStack_f8));
      }
      if (cStack_f9 < '\0') {
        uVar7 = CONCAT26(uStack_10a,CONCAT24(uStack_10c,uStack_110));
        goto LAB_001815b8;
      }
      goto LAB_001815bc;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar8 = puVar10;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar8 = (ulong *)*puVar10;
      }
      *(undefined1 *)((long)puVar8 + *(long *)(param_1 + 0xb8)) = 0x2e;
/* WM - found on a paste site? it was re-uploaded illegally */
    }
    ppuStack_c0 = *(ulong ***)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8);
    apuStack_98[0] = puVar10;
    lVar5 = func_0x00184e14(&ppuStack_c0,puVar10,&UNK_01bd2568,apuStack_98,&uStack_e0);
    *(long *)(param_2 + 0x20) = lVar5 + 0x38;
    iVar3 = func_0x0017de64(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar3;
    if (iVar3 != 0xc) {
      uVar11 = *(ulong *)(param_1 + 0x48);
      func_0x001801f0(apuStack_98,param_1 + 0x28);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      uStack_e0 = *(ulong *)(param_1 + 0x48);
      lStack_d0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(&uStack_110,"object separator");
      func_0x001805c8(&uStack_f8,param_1,0xc,&uStack_110);
      func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
      uVar9 = func_0x00181a4c(param_2,uVar11,apuStack_98,&ppuStack_c0);
      goto LAB_0018157c;
    }
    ppuStack_c0 = (ulong **)((ulong)ppuStack_c0 & 0xffffffffffffff00);
    func_0x00181b98(&lStack_80,&ppuStack_c0);
    uVar4 = func_0x0017de64(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    goto LAB_00180cfc;
  default:
    goto LAB_001810ec;
// found on a paste site? it was re-uploaded illegally
  case 0xe:
    func_0x001801f0(apuStack_98,param_1 + 0x28);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    uStack_e0 = *(ulong *)(param_1 + 0x48);
    lStack_d0 = *(long *)(param_1 + 0x58);
    cStack_f9 = '\x05';
    uStack_110 = 0x756c6176;
    uStack_10c = 0x65;
    func_0x001805c8(&uStack_f8,param_1,0,&uStack_110);
    func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
    *(undefined1 *)(param_2 + 0x28) = 1;
    if (*(char *)(param_2 + 0x29) != '\x01') goto LAB_00181324;
    puVar6 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar6 = &UNK_01dbfd98;
    *(undefined4 *)(puVar6 + 1) = puStack_b8._0_4_;
    __ZNSt13runtime_errorC1ERKS_(puVar6 + 2,alStack_b0);
    *puVar6 = &UNK_01dbfe98;
    puVar6[4] = uStack_a0;
    ___cxa_throw(puVar6,&UNK_01dbfe70,&DAT_00180c74);
    goto LAB_00181854;
  case 0xf:
    puVar10 = (ulong *)(param_1 + 0x48);
    if (*puVar10 != 1) {
      func_0x001801f0(apuStack_98,param_1 + 0x28);
      uStack_d8 = *(undefined8 *)(param_1 + 0x50);
      uStack_e0 = *puVar10;
      lStack_d0 = *(long *)(param_1 + 0x58);
      cStack_f9 = '\x05';
      uStack_110 = 0x756c6176;
      uStack_10c = 0x65;
      func_0x001805c8(&uStack_f8,param_1,0x10,&uStack_110);
      func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
      *(undefined1 *)(param_2 + 0x28) = 1;
      if (*(char *)(param_2 + 0x29) != '\x01') goto LAB_00181324;
      puVar6 = (undefined8 *)___cxa_allocate_exception(0x28);
      *puVar6 = &UNK_01dbfd98;
      *(undefined4 *)(puVar6 + 1) = puStack_b8._0_4_;
      __ZNSt13runtime_errorC1ERKS_(puVar6 + 2,alStack_b0);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      *puVar6 = &UNK_01dbfe98;
      puVar6[4] = uStack_a0;
      ___cxa_throw(puVar6,&UNK_01dbfe70,&DAT_00180c74);
      goto LAB_00181854;
    }
    func_0x001801f0(apuStack_98,param_1 + 0x28);
    uStack_d8 = *(undefined8 *)(param_1 + 0x50);
    uStack_e0 = *puVar10;
    lStack_d0 = *(long *)(param_1 + 0x58);
    func_0x0000e100(&uStack_f8,
                    "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                   );
    func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
    uVar9 = func_0x00181a4c(param_2,1,apuStack_98,&ppuStack_c0);
    ppuStack_c0 = (ulong **)&UNK_01dbfd98;
    __ZNSt13runtime_errorD1Ev(alStack_b0);
    __ZNSt9exceptionD2Ev(&ppuStack_c0);
    if (cStack_e1 < '\0') goto LAB_00181670;
LAB_001815bc:
    if (cStack_81 < '\0') {
      __ZdlPv(apuStack_98[0]);
    }
    goto LAB_001810bc;
  }
  if (lStack_78 != 0) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    do {
      if ((*(ulong *)(lStack_80 + (lStack_78 - 1U >> 6) * 8) >> (lStack_78 - 1U & 0x3f) & 1) == 0) {
        iVar3 = func_0x0017de64(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = iVar3;
        if (iVar3 == 0xd) {
          iVar3 = func_0x0017de64(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = iVar3;
          if (iVar3 != 4) {
            uVar11 = *(ulong *)(param_1 + 0x48);
            func_0x001801f0(apuStack_98,param_1 + 0x28);
            uStack_d8 = *(undefined8 *)(param_1 + 0x50);
            uStack_e0 = *(ulong *)(param_1 + 0x48);
            lStack_d0 = *(long *)(param_1 + 0x58);
            func_0x0000e100(&uStack_110,"object key");
            func_0x001805c8(&uStack_f8,param_1,4,&uStack_110);
            func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
            uVar9 = func_0x00181a4c(param_2,uVar11,apuStack_98,&ppuStack_c0);
            goto LAB_0018157c;
          }
          if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
            puVar8 = puVar10;
            if (*(char *)(param_1 + 0x8f) < '\0') {
              puVar8 = (ulong *)*puVar10;
            }
            *(undefined1 *)((long)puVar8 + *(long *)(param_1 + 0xb8)) = 0x2e;
          }
          ppuStack_c0 = *(ulong ***)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 8);
          apuStack_98[0] = puVar10;
/* reversing this took months of machine time */
          lVar5 = func_0x00184e14(&ppuStack_c0,puVar10,&UNK_01bd2568,apuStack_98,&uStack_e0);
          *(long *)(param_2 + 0x20) = lVar5 + 0x38;
          iVar3 = func_0x0017de64(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = iVar3;
          if (iVar3 == 0xc) {
            uVar4 = func_0x0017de64(param_1 + 0x28);
            *(undefined4 *)(param_1 + 0x20) = uVar4;
            goto LAB_00180cfc;
          }
          uVar11 = *(ulong *)(param_1 + 0x48);
          func_0x001801f0(apuStack_98,param_1 + 0x28);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          uStack_e0 = *(ulong *)(param_1 + 0x48);
          lStack_d0 = *(long *)(param_1 + 0x58);
          func_0x0000e100(&uStack_110,"object separator");
          func_0x001805c8(&uStack_f8,param_1,0xc,&uStack_110);
          func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
          uVar9 = func_0x00181a4c(param_2,uVar11,apuStack_98,&ppuStack_c0);
          goto LAB_0018157c;
        }
        if (iVar3 != 0xb) {
          uVar11 = *(ulong *)(param_1 + 0x48);
          func_0x001801f0(apuStack_98,param_1 + 0x28);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          uStack_e0 = *(ulong *)(param_1 + 0x48);
          lStack_d0 = *(long *)(param_1 + 0x58);
          func_0x0000e100(&uStack_110,"object");
          func_0x001805c8(&uStack_f8,param_1,0xb,&uStack_110);
          func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
          uVar9 = func_0x00181a4c(param_2,uVar11,apuStack_98,&ppuStack_c0);
          goto LAB_0018157c;
        }
      }
      else {
        iVar3 = func_0x0017de64(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = iVar3;
        if (iVar3 == 0xd) goto LAB_00180f78;
        if (iVar3 != 10) {
/* wm:no support for modified copies */
          uVar11 = *(ulong *)(param_1 + 0x48);
          func_0x001801f0(apuStack_98,param_1 + 0x28);
          uStack_d8 = *(undefined8 *)(param_1 + 0x50);
          uStack_e0 = *(ulong *)(param_1 + 0x48);
          lStack_d0 = *(long *)(param_1 + 0x58);
          func_0x0000e100(&uStack_110,"array");
          func_0x001805c8(&uStack_f8,param_1,10,&uStack_110);
          func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
          uVar9 = func_0x00181a4c(param_2,uVar11,apuStack_98,&ppuStack_c0);
          goto LAB_0018157c;
        }
      }
      *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -8;
      lStack_78 = lStack_78 + -1;
      if (lStack_78 == 0) break;
    } while( true );
  }
  uVar9 = 1;
  goto LAB_001810bc;
LAB_00180f78:
  uVar4 = func_0x0017de64(param_1 + 0x28);
// WM - do not claim this as your own
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  goto LAB_00180cfc;
LAB_001810ec:
  func_0x001801f0(apuStack_98,param_1 + 0x28);
  uStack_d8 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = *(ulong *)(param_1 + 0x48);
  lStack_d0 = *(long *)(param_1 + 0x58);
  cStack_f9 = '\x05';
  uStack_110 = 0x756c6176;
  uStack_10c = 0x65;
  func_0x001805c8(&uStack_f8,param_1,0x10,&uStack_110);
  func_0x00180380(&ppuStack_c0,0x65,&uStack_e0,&uStack_f8,0);
  *(undefined1 *)(param_2 + 0x28) = 1;
  if (*(char *)(param_2 + 0x29) == '\x01') {
    puVar6 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar6 = &UNK_01dbfd98;
    *(undefined4 *)(puVar6 + 1) = puStack_b8._0_4_;
    __ZNSt13runtime_errorC1ERKS_(puVar6 + 2,alStack_b0);
    *puVar6 = &UNK_01dbfe98;
    puVar6[4] = uStack_a0;
    ___cxa_throw(puVar6,&UNK_01dbfe70,&DAT_00180c74);
LAB_00181854:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x181858);
    (*pcVar2)();
  }
LAB_00181324:
  ppuStack_c0 = (ulong **)&UNK_01dbfd98;
  __ZNSt13runtime_errorD1Ev(alStack_b0);
  __ZNSt9exceptionD2Ev(&ppuStack_c0);
  if (cStack_e1 < '\0') {
    __ZdlPv(CONCAT71(uStack_f7,uStack_f8));
  }
  if (cStack_f9 < '\0') {
// chat: discord.gg/sdkhDjTex
    __ZdlPv(CONCAT26(uStack_10a,CONCAT24(uStack_10c,uStack_110)));
  }
  if (cStack_81 < '\0') {
    __ZdlPv(apuStack_98[0]);
  }
  uVar9 = 0;
LAB_001810bc:
  if (lStack_80 != 0) {
    __ZdlPv();
  }
  return uVar9;
}

