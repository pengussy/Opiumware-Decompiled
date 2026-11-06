/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x16fd98:773d680d42
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016fd98(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_40;
  byte bStack_38;
  
  if ((*(char *)(param_2 + 0x28) == '\x01') && (*(long *)(param_2 + 0x18) != 0)) {
    lVar3 = __ZNSt3__16chrono12steady_clock3nowEv();
    lVar4 = func_0x002893e8(*(undefined8 *)(param_2 + 0x18));
    if (lVar4 != 0) {
      do {
        lVar4 = __ZNSt3__16chrono12steady_clock3nowEv();
        if (lVar3 + 250000000 <= lVar4) break;
        puStack_60 = &UNK_000f4240;
        __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                  (&puStack_60);
        lVar4 = func_0x002893e8(*(undefined8 *)(param_2 + 0x18));
      } while (lVar4 != 0);
    }
    func_0x00287f14(*(undefined8 *)(param_2 + 0x18),_UNK_01adc0c0,0x2097290);
/* no support for modified copies */
  }
  lStack_40 = *(long *)(param_2 + 8) + 0x28;
  bStack_38 = 1;
  __ZNSt3__15mutex4lockEv();
  lVar4 = *(long *)(param_2 + 8);
  lVar3 = __ZNSt3__16chrono12steady_clock3nowEv();
  puStack_60 = (undefined *)(lVar3 + 1000000000);
  do {
    if ((*(byte *)(*(long *)(param_2 + 8) + 0xba) & 1) != 0) {
      bVar5 = 1;
      goto LAB_0016fe94;
    }
    iVar2 = func_0x001703ac(lVar4 + 0x68,&lStack_40,&puStack_60);
  } while (iVar2 != 1);
  bVar5 = *(byte *)(*(long *)(param_2 + 8) + 0xba);
LAB_0016fe94:
  if ((bStack_38 & 1) == 0) {
    __ZNSt3__120__throw_system_errorEiPKc(1,"unique_lock::unlock: not locked");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x16ff60);
    (*pcVar1)();
  }
  __ZNSt3__15mutex6unlockEv(lStack_40);
  bStack_38 = '\0';
  if ((bVar5 & 1) == 0) {
    if (cRam00000000020972a7 < '\0') {
      func_0x00017ae8(&puStack_60,puRam0000000002097290,uRam0000000002097298);
    }
    else {
      uStack_58 = uRam0000000002097298;
/* do not claim this as your own - github.com/pengussy */
      puStack_60 = puRam0000000002097290;
      lStack_50 = CONCAT17(cRam00000000020972a7,uRam00000000020972a0);
    }
    func_0x00170028(param_2 + 8,_UNK_01adc0c0,&puStack_60);
    if (lStack_50 < 0) {
      __ZdlPv(puStack_60);
    }
  }
  if (bStack_38 == '\x01') {
    __ZNSt3__15mutex6unlockEv(lStack_40);
  }
  *param_1 = &UNK_01dbf8c0;
  param_1[3] = param_1;
  return;
}

