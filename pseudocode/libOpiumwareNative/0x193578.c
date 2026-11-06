/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x193578:ae95b37cc4
 */

undefined8 FUN_00193578(long param_1,long param_2)

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
  long lStack_b0;
  undefined *puStack_a8;
  undefined4 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 auStack_80 [2];
  char cStack_69;
  long lStack_68;
  long lStack_60;
/* unlicensed copy if this notice is missing */
  undefined8 uStack_58;
  
  lStack_68 = 0;
  lStack_60 = 0;
  uStack_58 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x78);
LAB_001935bc:
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    puStack_a8 = (undefined *)CONCAT71(puStack_a8._1_7_,1);
    func_0x001966fc(param_2,&puStack_a8,0);
    break;
  case 2:
    puStack_a8 = (undefined *)((ulong)puStack_a8._1_7_ << 8);
    func_0x001966fc(param_2,&puStack_a8,0);
    break;
  case 3:
    puStack_a8 = (undefined *)0x0;
    func_0x00196910(param_2,&puStack_a8,0);
    break;
  case 4:
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar6 = puVar5;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar6 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
    }
    func_0x00196d2c(param_2,puVar5,0);
    break;
  case 5:
    puStack_a8 = *(undefined **)(param_1 + 0xa0);
    func_0x00196fa0(param_2,&puStack_a8,0);
    break;
/* WM - do not claim this as your own */
  case 6:
    puStack_a8 = *(undefined **)(param_1 + 0x98);
    func_0x00196b1c(param_2,&puStack_a8,0);
    break;
  case 7:
    puVar10 = *(undefined **)(param_1 + 0xa8);
    if (0x7fefffffffffffff < ((ulong)puVar10 & 0x7fffffffffffffff)) {
      uVar7 = *(undefined8 *)(param_1 + 0x48);
      func_0x00194268(auStack_80,param_1 + 0x28);
      func_0x00194268(auStack_d8,param_1 + 0x28);
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
      if (cStack_c1 < '\0') {
LAB_00193de4:
        __ZdlPv(auStack_d8[0]);
      }
LAB_00193de8:
      if (cStack_69 < '\0') {
        __ZdlPv(auStack_80[0]);
      }
      goto LAB_001938ec;
/* wm:proprietary - see LICENSE - do not sell */
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar6 = puVar5;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar6 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
    }
    puStack_a8 = puVar10;
    func_0x001964e4(param_2,&puStack_a8,0);
    break;
  case 8:
    iVar2 = func_0x00195f98(param_2,0xffffffffffffffff);
    if (iVar2 == 0) goto LAB_00193b88;
    iVar2 = func_0x00191050(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 10) {
      puStack_a8 = (undefined *)CONCAT71(puStack_a8._1_7_,1);
      func_0x00181b98(&lStack_68,&puStack_a8);
      goto LAB_001935bc;
    }
    uVar4 = func_0x0019619c(param_2);
// reversing this took months of machine time
LAB_00193750:
    if ((uVar4 & 1) == 0) goto LAB_00193b88;
    break;
  case 9:
    uVar4 = func_0x0019596c(param_2,0xffffffffffffffff);
    if ((uVar4 & 1) == 0) goto LAB_00193b88;
    iVar2 = func_0x00191050(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 == 0xb) {
      uVar4 = func_0x00195b68(param_2);
      goto LAB_00193750;
    }
    if (iVar2 != 4) {
      lVar9 = *(long *)(param_1 + 0x48);
      func_0x00194268(auStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_c0 = *(long *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(&uStack_f0,"object key");
      func_0x001943f8(auStack_d8,param_1,4,&uStack_f0);
      func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
      uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
LAB_00193da8:
      puStack_a8 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_98);
      __ZNSt9exceptionD2Ev(&puStack_a8);
      if (cStack_c1 < '\0') {
        __ZdlPv(auStack_d8[0]);
      }
      if (cStack_d9 < '\0') {
        auStack_d8[0] = CONCAT26(uStack_ea,CONCAT24(uStack_ec,uStack_f0));
        goto LAB_00193de4;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      goto LAB_00193de8;
    }
    if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
      puVar6 = puVar5;
      if (*(char *)(param_1 + 0x8f) < '\0') {
        puVar6 = (undefined8 *)*puVar5;
      }
      *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
    }
    iVar2 = func_0x00195dd4(param_2,puVar5);
    if (iVar2 == 0) goto LAB_00193b88;
    iVar2 = func_0x00191050(param_1 + 0x28);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 0xc) {
      lVar9 = *(long *)(param_1 + 0x48);
      func_0x00194268(auStack_80,param_1 + 0x28);
/* WM - proprietary - see LICENSE - do not sell */
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_c0 = *(long *)(param_1 + 0x48);
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(&uStack_f0,"object separator");
      func_0x001943f8(auStack_d8,param_1,0xc,&uStack_f0);
      func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
      uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
      goto LAB_00193da8;
    }
    puStack_a8 = (undefined *)((ulong)puStack_a8 & 0xffffffffffffff00);
    func_0x00181b98(&lStack_68,&puStack_a8);
    uVar3 = func_0x00191050(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    goto LAB_001935bc;
  default:
    goto LAB_00193918;
  case 0xe:
    func_0x00194268(auStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
    lStack_c0 = *(long *)(param_1 + 0x48);
    lStack_b0 = *(long *)(param_1 + 0x58);
    cStack_d9 = '\x05';
    uStack_f0 = 0x756c6176;
/* origin: github.com/pengussy - github.com/pengussy */
    uStack_ec = 0x65;
    func_0x001943f8(auStack_d8,param_1,0,&uStack_f0);
    func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x80) != '\x01') goto LAB_00193b50;
    puVar5 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar5 = &UNK_01dbfd98;
    *(undefined4 *)(puVar5 + 1) = uStack_a0;
    __ZNSt13runtime_errorC1ERKS_(puVar5 + 2,auStack_98);
    *puVar5 = &UNK_01dbfe98;
    puVar5[4] = uStack_88;
    ___cxa_throw(puVar5,&UNK_01dbfe70,&DAT_00180c74);
    goto LAB_00194070;
  case 0xf:
    plVar8 = (long *)(param_1 + 0x48);
    if (*plVar8 == 1) {
      func_0x00194268(auStack_80,param_1 + 0x28);
      uStack_b8 = *(undefined8 *)(param_1 + 0x50);
      lStack_c0 = *plVar8;
      lStack_b0 = *(long *)(param_1 + 0x58);
      func_0x0000e100(auStack_d8,
                      "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                     );
      func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
      uVar7 = func_0x001801c4(param_2,1,auStack_80,&puStack_a8);
      func_0x019cb7f8(&puStack_a8,auStack_d8,auStack_80,&lStack_c0);
      goto LAB_001938ec;
    }
    func_0x00194268(auStack_80,param_1 + 0x28);
    uStack_b8 = *(undefined8 *)(param_1 + 0x50);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    lStack_c0 = *plVar8;
    lStack_b0 = *(long *)(param_1 + 0x58);
    cStack_d9 = '\x05';
    uStack_f0 = 0x756c6176;
    uStack_ec = 0x65;
    func_0x001943f8(auStack_d8,param_1,0x10,&uStack_f0);
    func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
    *(undefined1 *)(param_2 + 0x58) = 1;
    if (*(char *)(param_2 + 0x80) != '\x01') goto LAB_00193b50;
    puVar5 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar5 = &UNK_01dbfd98;
    *(undefined4 *)(puVar5 + 1) = uStack_a0;
    __ZNSt13runtime_errorC1ERKS_(puVar5 + 2,auStack_98);
    *puVar5 = &UNK_01dbfe98;
    puVar5[4] = uStack_88;
    ___cxa_throw(puVar5,&UNK_01dbfe70,&DAT_00180c74);
    goto LAB_00194070;
  }
  if (lStack_60 != 0) {
    do {
      if ((*(ulong *)(lStack_68 + (lStack_60 - 1U >> 6) * 8) >> (lStack_60 - 1U & 0x3f) & 1) == 0) {
        iVar2 = func_0x00191050(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) {
          iVar2 = func_0x00191050(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 4) {
            lVar9 = *(long *)(param_1 + 0x48);
            func_0x00194268(auStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            lStack_c0 = *(long *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x0000e100(&uStack_f0,"object key");
            func_0x001943f8(auStack_d8,param_1,4,&uStack_f0);
            func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
// unlicensed copy if this notice is missing
            uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
            goto LAB_00193da8;
          }
          if ((*(int *)(param_1 + 0xb0) != 0x2e) && (*(long *)(param_1 + 0xb8) != -1)) {
            puVar6 = puVar5;
            if (*(char *)(param_1 + 0x8f) < '\0') {
              puVar6 = (undefined8 *)*puVar5;
            }
            *(undefined1 *)((long)puVar6 + *(long *)(param_1 + 0xb8)) = 0x2e;
          }
          iVar2 = func_0x00195dd4(param_2,puVar5);
          if (iVar2 == 0) goto LAB_00193b88;
          iVar2 = func_0x00191050(param_1 + 0x28);
          *(int *)(param_1 + 0x20) = iVar2;
          if (iVar2 != 0xc) {
            lVar9 = *(long *)(param_1 + 0x48);
            func_0x00194268(auStack_80,param_1 + 0x28);
            uStack_b8 = *(undefined8 *)(param_1 + 0x50);
            lStack_c0 = *(long *)(param_1 + 0x48);
            lStack_b0 = *(long *)(param_1 + 0x58);
            func_0x0000e100(&uStack_f0,"object separator");
            func_0x001943f8(auStack_d8,param_1,0xc,&uStack_f0);
            func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
            uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
            goto LAB_00193da8;
          }
          uVar3 = func_0x00191050(param_1 + 0x28);
          *(undefined4 *)(param_1 + 0x20) = uVar3;
          goto LAB_001935bc;
        }
        if (iVar2 != 0xb) {
          lVar9 = *(long *)(param_1 + 0x48);
          func_0x00194268(auStack_80,param_1 + 0x28);
/* unlicensed copy if this notice is missing - github.com/pengussy */
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_c0 = *(long *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x0000e100(&uStack_f0,"object");
          func_0x001943f8(auStack_d8,param_1,0xb,&uStack_f0);
          func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
          uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
          goto LAB_00193da8;
        }
        uVar4 = func_0x00195b68(param_2);
      }
      else {
        iVar2 = func_0x00191050(param_1 + 0x28);
        *(int *)(param_1 + 0x20) = iVar2;
        if (iVar2 == 0xd) goto LAB_001937d8;
        if (iVar2 != 10) {
          lVar9 = *(long *)(param_1 + 0x48);
          func_0x00194268(auStack_80,param_1 + 0x28);
          uStack_b8 = *(undefined8 *)(param_1 + 0x50);
          lStack_c0 = *(long *)(param_1 + 0x48);
          lStack_b0 = *(long *)(param_1 + 0x58);
          func_0x0000e100(&uStack_f0,"array");
          func_0x001943f8(auStack_d8,param_1,10,&uStack_f0);
          func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
          uVar7 = func_0x001801c4(param_2,lVar9,auStack_80,&puStack_a8);
          goto LAB_00193da8;
        }
        uVar4 = func_0x0019619c(param_2);
      }
      if ((uVar4 & 1) == 0) goto LAB_00193b88;
/* WM - chat: discord.gg/sdkhDjTex */
      lStack_60 = lStack_60 + -1;
      if (lStack_60 == 0) break;
    } while( true );
  }
  uVar7 = 1;
  goto LAB_001938ec;
LAB_001937d8:
  uVar3 = func_0x00191050(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  goto LAB_001935bc;
LAB_00193918:
  func_0x00194268(auStack_80,param_1 + 0x28);
  uStack_b8 = *(undefined8 *)(param_1 + 0x50);
  lStack_c0 = *(long *)(param_1 + 0x48);
  lStack_b0 = *(long *)(param_1 + 0x58);
  cStack_d9 = '\x05';
  uStack_f0 = 0x756c6176;
  uStack_ec = 0x65;
  func_0x001943f8(auStack_d8,param_1,0x10,&uStack_f0);
  func_0x00180380(&puStack_a8,0x65,&lStack_c0,auStack_d8,0);
  *(undefined1 *)(param_2 + 0x58) = 1;
  if (*(char *)(param_2 + 0x80) == '\x01') {
    puVar5 = (undefined8 *)___cxa_allocate_exception(0x28);
// WM - origin: github.com/pengussy
    *puVar5 = &UNK_01dbfd98;
    *(undefined4 *)(puVar5 + 1) = uStack_a0;
    __ZNSt13runtime_errorC1ERKS_(puVar5 + 2,auStack_98);
    *puVar5 = &UNK_01dbfe98;
    puVar5[4] = uStack_88;
    ___cxa_throw(puVar5,&UNK_01dbfe70,&DAT_00180c74);
LAB_00194070:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x194074);
    (*pcVar1)();
  }
LAB_00193b50:
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
LAB_00193b88:
  uVar7 = 0;
LAB_001938ec:
  if (lStack_68 != 0) {
    __ZdlPv();
  }
  return uVar7;
}

