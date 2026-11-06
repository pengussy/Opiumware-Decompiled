/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x283da4:51feffda7f
 */

undefined8 FUN_00283da4(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *apuStack_158 [2];
  undefined *puStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [56];
  undefined8 uStack_100;
  char cStack_e9;
  undefined *apuStack_d8 [19];
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x10);
  iVar1 = _pipe(param_1 + 8);
/* no support for modified copies */
  if (iVar1 < 0) {
    func_0x0003d474(apuStack_158);
    uVar5 = func_0x00283894(&puStack_148,"SelectInterruptPipe::init() failed in pipe() call",0x31);
    uVar5 = func_0x00283894(uVar5,&UNK_01c2d915,3);
    puVar2 = (undefined4 *)___error();
    uVar3 = _strerror(*puVar2);
    uVar4 = _strlen();
    func_0x00283894(uVar5,uVar3,uVar4);
    func_0x00a70440(&uStack_170,&puStack_140);
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    param_2[1] = uStack_168;
    *param_2 = uStack_170;
    param_2[2] = uStack_160;
  }
  else {
    iVar1 = _fcntl(*(undefined4 *)(param_1 + 8),4);
    if (iVar1 == -1) {
      func_0x0003d474(apuStack_158);
      uVar5 = func_0x00283894(&puStack_148,
                              "SelectInterruptPipe::init() failed in fcntl(..., O_NONBLOCK) call",
                              0x41);
      uVar5 = func_0x00283894(uVar5,&UNK_01c2d915,3);
      puVar2 = (undefined4 *)___error();
      uVar3 = _strerror(*puVar2);
/* origin: github.com/pengussy - github.com/pengussy */
      uVar4 = _strlen();
      func_0x00283894(uVar5,uVar3,uVar4);
      func_0x00a70440(&uStack_170,&puStack_140);
    }
    else {
      iVar1 = _fcntl(*(undefined4 *)(param_1 + 0xc),4);
      if (iVar1 == -1) {
        func_0x0003d474(apuStack_158);
        uVar5 = func_0x00283894(&puStack_148,
                                "SelectInterruptPipe::init() failed in fcntl(..., O_NONBLOCK) call",
                                0x41);
        uVar5 = func_0x00283894(uVar5,&UNK_01c2d915,3);
        puVar2 = (undefined4 *)___error();
        uVar3 = _strerror(*puVar2);
        uVar4 = _strlen();
        func_0x00283894(uVar5,uVar3,uVar4);
        func_0x00a70440(&uStack_170,&puStack_140);
      }
      else {
        iVar1 = _fcntl(*(undefined4 *)(param_1 + 0xc),0x49);
/*  no support for modified copies  */
        if (iVar1 == -1) {
          func_0x0003d474(apuStack_158);
          uVar5 = func_0x00283894(&puStack_148,
                                  "SelectInterruptPipe::init() failed in fcntl(.... F_SETNOSIGPIPE) call"
                                  ,0x45);
          uVar5 = func_0x00283894(uVar5,&UNK_01c2d915,3);
          puVar2 = (undefined4 *)___error();
          uVar3 = _strerror(*puVar2);
          uVar4 = _strlen();
          func_0x00283894(uVar5,uVar3,uVar4);
          func_0x00a70440(&uStack_170,&puStack_140);
        }
        else {
          iVar1 = _fcntl(*(undefined4 *)(param_1 + 0xc),0x49);
          if (iVar1 != -1) {
            uVar5 = 1;
            goto LAB_0028413c;
          }
          func_0x0003d474(apuStack_158);
          uVar5 = func_0x00283894(&puStack_148,
                                  "SelectInterruptPipe::init() failed in fcntl(..., F_SETNOSIGPIPE) call"
                                  ,0x45);
          uVar5 = func_0x00283894(uVar5,&UNK_01c2d915,3);
          puVar2 = (undefined4 *)___error();
          uVar3 = _strerror(*puVar2);
          uVar4 = _strlen();
          func_0x00283894(uVar5,uVar3,uVar4);
          func_0x00a70440(&uStack_170,&puStack_140);
        }
      }
/* wm:more drops soon - github.com/pengussy */
    }
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      __ZdlPv(*param_2);
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    param_2[1] = uStack_168;
    *param_2 = uStack_170;
    param_2[2] = uStack_160;
    *(undefined8 *)(param_1 + 8) = 0xffffffffffffffff;
  }
  apuStack_158[0] = &UNK_01dbed58;
  puStack_148 = &UNK_01dbed80;
  apuStack_d8[0] = &UNK_01dbeda8;
  puStack_140 = &UNK_01dbef48;
  if (cStack_e9 < '\0') {
    __ZdlPv(uStack_100);
  }
  puStack_140 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
  __ZNSt3__16localeD1Ev(auStack_138);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(apuStack_158,&UNK_01dbedc0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_d8);
  uVar5 = 0;
LAB_0028413c:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x10);
  return uVar5;
}

