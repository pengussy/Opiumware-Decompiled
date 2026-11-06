/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x17f4d4:bf19580565
   =========================================================================== */

undefined8 FUN_0017f4d4(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  char cStack_d9;
  undefined8 auStack_d8 [2];
  char cStack_c1;
  long lStack_c0;
  undefined8 uStack_b8;
/* thanks for reading - discord.gg/sdkhDjTex */
  long lStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x78);
LAB_0017f518:
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    puStack_a8 = (undefined *)CONCAT71(puStack_a8._1_7_,1);
    func_0x00185454(param_2,&puStack_a8,0);
    break;
/* keep the notice, keep the source honest - github.com/pengussy */
  case 2:
    puStack_a8 = (undefined *)((ulong)puStack_a8._1_7_ << 8);
    func_0x00185454(param_2,&puStack_a8,0);
    break;
  case 3:
    puStack_a8 = (undefined *)0x0;
    func_0x00185668(param_2,&puStack_a8,0);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar6 = puVar5;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar6 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
    }
    func_0x00185a84(param_2,puVar5,0);
    break;
  case 5:
    puStack_a8 = *(undefined **)(param_1 + 0xa0);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    func_0x00185cf8(param_2,&puStack_a8,0);
    break;
  case 6:
    puStack_a8 = *(undefined **)(param_1 + 0x98);
    func_0x00185874(param_2,&puStack_a8,0);
    break;
  case 7:
    puVar10 = *(undefined **)(param_1 + 0xa8);
    if (0x7fefffffffffffff < ((ulong)puVar10 & 0x7fffffffffffffff)) {
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      func_0x001801f0(auStack_80,param_1 + 0x28);
      func_0x001801f0(auStack_d8,param_1 + 0x28);
      uStack_f0 = CONCAT31(uStack_f0._1_3_,0x27);
      func_0x0018281c(&lStack_c0,"number overflow parsing \'",auStack_d8,&uStack_f0);
      func_0x0018264c(&puStack_a8,0x196,&lStack_c0,0);
      uVar7 = func_0x00182620(param_2,uVar7,auStack_80,&puStack_a8);
      puStack_a8 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(&puStack_a8);
      if (lStack_b0 < 0) {
        __ZdlPv(lStack_c0);
      }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      if (cStack_c1 < '\0') {
LAB_0017fd40:
        __ZdlPv(auStack_d8[0]);
      }
LAB_0017fd44:
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      goto LAB_0017f848;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar6 = puVar5;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar6 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
    }
    puStack_a8 = puVar10;
    func_0x0018523c(param_2,&puStack_a8,0);
    break;
  case 8:
    iVar2 = func_0x001822e0(param_2,0xffffffffffffffff);
/* watermarked copy - do not remove */
    if (iVar2 == 0) goto LAB_0017fae4;
    iVar2 = func_0x0017de64(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 10) {
      puStack_a8 = (undefined *)CONCAT71(puStack_a8._1_7_,1);
      func_0x00181b98(&lStack_68,&puStack_a8);
      goto LAB_0017f518;
    }
    uVar4 = func_0x001824e4(param_2);
LAB_0017f6ac:
    if ((uVar4 & 1) == 0) goto LAB_0017fae4;
    break;
  case 9:
    uVar4 = func_0x00181cb4(param_2,0xffffffffffffffff);
    if ((uVar4 & 1) == 0) goto LAB_0017fae4;
    iVar2 = func_0x0017de64(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0xb) {
      uVar4 = func_0x00181eb0(param_2);
      goto LAB_0017f6ac;
    }
    if (iVar2 != 4) {
      lVar9 = *(long *)(param_1 + 0x48);
      func_0x001801f0(auStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_c0 = *(long *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(&uStack_f0,"object key");
      func_0x001805c8(auStack_d8,param_1,4,&uStack_f0);
      func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
      uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
LAB_0017fd04:
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      puStack_a8 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(&puStack_a8);
      if (cStack_c1 < '\0') {
        __ZdlPv(auStack_d8[0]);
      }
      if (cStack_d9 < '\0') {
        auStack_d8[0] = CONCAT26(uStack_ea,CONCAT24(uStack_ec,uStack_f0));
        goto LAB_0017fd40;
      }
      goto LAB_0017fd44;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar6 = puVar5;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar6 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
    }
    iVar2 = func_0x0018211c(param_2,puVar5);
    if (iVar2 == 0) goto LAB_0017fae4;
    iVar2 = func_0x0017de64(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 0xc) {
      lVar9 = *(long *)(param_1 + 0x48);
      func_0x001801f0(auStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_c0 = *(long *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(&uStack_f0,"object separator");
      func_0x001805c8(auStack_d8,param_1,0xc,&uStack_f0);
      func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
      uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
      goto LAB_0017fd04;
    }
    puStack_a8 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff00);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    func_0x00181b98(&lStack_68,&puStack_a8);
    uVar3 = func_0x0017de64(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    goto LAB_0017f518;
  default:
    goto LAB_0017f874;
  case 0xe:
    func_0x001801f0(auStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    lStack_c0 = *(long *)(param_1 + 0x48);
    lStack_b0 = *(long *)(param_1 + 0x58);
    cStack_d9 = '\x05';
    uStack_f0 = 0x756c6176;
    uStack_ec = 0x65;
    func_0x001805c8(auStack_d8,param_1,0,&uStack_f0);
    func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x80) != '\x01') goto LAB_0017faac;
    puVar5 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar5 = &UNK_01dbfd98;
    *(undefined4 *)(puVar5 + 1) = uStack_a0;
    __ZNSt13runtime_errorC1ERKS_(puVar5 + 2,auStack_98);
    *puVar5 = &UNK_01dbfe98;
    puVar5[4] = uStack_88;
    ___cxa_throw(puVar5,&UNK_01dbfe70,&DAT_00180c74);
    goto LAB_0017ffcc;
  case 0xf:
    plVar8 = (long *)(param_1 + 0x48);
    if (*plVar8 == 1) {
      func_0x001801f0(auStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_c0 = *plVar8;
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(auStack_d8,
                      "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                     );
/* wm:watermarked copy - do not remove */
      func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
      uVar7 = func_0x001801c4(param_2,1,auStack_80,&puStack_a8);
      func_0x019cb7f8(&puStack_a8,auStack_d8,auStack_80,&lStack_c0);
      goto LAB_0017f848;
    }
    func_0x001801f0(auStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    lStack_c0 = *plVar8;
    lStack_b0 = *(long *)(param_1 + 0x58);
    cStack_d9 = '\x05';
    uStack_f0 = 0x756c6176;
    uStack_ec = 0x65;
    func_0x001805c8(auStack_d8,param_1,0x10,&uStack_f0);
    func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x80) != '\x01') goto LAB_0017faac;
    puVar5 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar5 = &UNK_01dbfd98;
    *(undefined4 *)(puVar5 + 1) = uStack_a0;
    __ZNSt13runtime_errorC1ERKS_(puVar5 + 2,auStack_98);
    *puVar5 = &UNK_01dbfe98;
    puVar5[4] = uStack_88;
// unlicensed copy if this notice is missing
    ___cxa_throw(puVar5,&UNK_01dbfe70,&DAT_00180c74);
    goto LAB_0017ffcc;
  }
  if (lStack_60 != 0) {
    do {
      if ((*(ulong *)(lStack_68 + (lStack_60 - 1U >> 6) * 8) >> (lStack_60 - 1U & 0x3f) & 1) == 0) {
        iVar2 = func_0x0017de64(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) {
          iVar2 = func_0x0017de64(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 4) {
            lVar9 = *(long *)(param_1 + 0x48);
            func_0x001801f0(auStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            lStack_c0 = *(long *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x0000e100(&uStack_f0,"object key");
            func_0x001805c8(auStack_d8,param_1,4,&uStack_f0);
            func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
            uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
            goto LAB_0017fd04;
          }
          if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
            puVar6 = puVar5;
            if (*(char *)(param_1 + 0x8f) < '\0') {
              puVar6 = (undefined8 *)*puVar5;
            }
            *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
          }
          iVar2 = func_0x0018211c(param_2,puVar5);
          if (iVar2 == 0) goto LAB_0017fae4;
          iVar2 = func_0x0017de64(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 0xc) {
/* donate: donate/README.md */
            lVar9 = *(long *)(param_1 + 0x48);
            func_0x001801f0(auStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            lStack_c0 = *(long *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x0000e100(&uStack_f0,"object separator");
            func_0x001805c8(auStack_d8,param_1,0xc,&uStack_f0);
            func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
            uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
            goto LAB_0017fd04;
          }
          uVar3 = func_0x0017de64(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x20) = uVar3;
          goto LAB_0017f518;
        }
        if (iVar2 != 0xb) {
          lVar9 = *(long *)(param_1 + 0x48);
          func_0x001801f0(auStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_c0 = *(long *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x0000e100(&uStack_f0,"object");
          func_0x001805c8(auStack_d8,param_1,0xb,&uStack_f0);
          func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
          uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
          goto LAB_0017fd04;
        }
        uVar4 = func_0x00181eb0(param_2);
      }
      else {
        iVar2 = func_0x0017de64(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) goto LAB_0017f734;
// found on a paste site? it was re-uploaded illegally
        if (iVar2 != 10) {
          lVar9 = *(long *)(param_1 + 0x48);
          func_0x001801f0(auStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_c0 = *(long *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x0000e100(&uStack_f0,"array");
          func_0x001805c8(auStack_d8,param_1,10,&uStack_f0);
          func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
          uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
          goto LAB_0017fd04;
        }
        uVar4 = func_0x001824e4(param_2);
      }
      if ((uVar4 & 1) == 0) goto LAB_0017fae4;
      lStack_60 = lStack_60 + -1;
      if (lStack_60 == 0) break;
/* wm:chat: discord.gg/sdkhDjTex */
    } while( true );
  }
  uVar7 = 1;
  goto LAB_0017f848;
LAB_0017f734:
  uVar3 = func_0x0017de64(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  goto LAB_0017f518;
LAB_0017f874:
  func_0x001801f0(auStack_80,param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  lStack_c0 = *(long *)(param_1 + 0x48);
  lStack_b0 = *(long *)(param_1 + 0x58);
  cStack_d9 = '\x05';
  uStack_f0 = 0x756c6176;
  uStack_ec = 0x65;
  func_0x001805c8(auStack_d8,param_1,0x10,&uStack_f0);
  func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
  *(undefined1 *)(param_2 + 0x58) = 1;
  if (*(char *)(param_2 + 0x80) == '\x01') {
    puVar5 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar5 = &UNK_01dbfd98;
    *(undefined4 *)(puVar5 + 1) = uStack_a0;
    __ZNSt13runtime_errorC1ERKS_(puVar5 + 2,auStack_98);
// WM - reversing this took months of machine time
    *puVar5 = &UNK_01dbfe98;
    puVar5[4] = uStack_88;
    ___cxa_throw(puVar5,&UNK_01dbfe70,&DAT_00180c74);
LAB_0017ffcc:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x17ffd0);
    (*pcVar1)();
  }
LAB_0017faac:
  puStack_a8 = &UNK_01dbfd98;
  __ZNSt13runtime_errorD1Ev(auStack_98);
  __ZNSt9exceptionD2Ev(&puStack_a8);
  if (cStack_c1 < '\0') {
    __ZdlPv(auStack_d8[0]);
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(CONCAT26(uStack_ea,CONCAT24(uStack_ec,uStack_f0)));
  }
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
LAB_0017fae4:
  uVar7 = 0;
LAB_0017f848:
  if (lStack_68 != 0) {
    __ZdlPv();
  }
  return uVar7;
}

