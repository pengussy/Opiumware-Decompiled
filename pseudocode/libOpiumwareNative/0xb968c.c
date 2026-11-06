/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xb968c:a714ceb2e7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b968c(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_54 [4];
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_39;
  
/* unlicensed copy if this notice is missing - github.com/pengussy */
  cStack_39 = '\f';
  uStack_50 = s__dev_urandom_01c2c55b._0_8_;
  uStack_48 = CONCAT35(uStack_48._5_3_,0x6d6f646e);
  __ZNSt3__113random_deviceC1ERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEE
            (auStack_54,&uStack_50);
  if (cStack_39 < '\0') {
    __ZdlPv(uStack_50);
  }
  uStack_48 = _UNK_01ad8258;
  uStack_50 = _UNK_01ad8250;
  uStack_68 = _UNK_01ad8268;
  uStack_70 = _UNK_01ad8260;
  uVar4 = func_0x0014451c(&uStack_50,auStack_54,&uStack_50);
  puRam000000000208fca8 = (undefined1 *)0x0;
  uRam000000000208fcb0 = 0;
  uRam000000000208fcb8 = 0;
  if (0x7ffffffffffffff6 < uVar4) {
    func_0x0000aa50();
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0xb97c4);
    (*pcVar3)();
  }
  if (uVar4 < 0x17) {
    if (uVar4 == 0) goto LAB_000b97a0;
  }
  else {
    uVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar1 != 0x18) {
      uVar2 = uVar1;
    }
    puVar5 = (undefined1 *)__Znwm(uVar2);
    uRam000000000208fcb8 = uVar2 | 0x8000000000000000;
    *puVar5 = puRam000000000208fca8._0_1_;
    uRam000000000208fcb0 = 0;
    puRam000000000208fca8 = puVar5;
  }
  do {
    lVar6 = func_0x0014451c(&uStack_70,auStack_54,&uStack_70);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (0x208fca8,
               (long)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"[lVar6]);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
LAB_000b97a0:
  __ZNSt3__113random_deviceD1Ev(auStack_54);
  return;
}

