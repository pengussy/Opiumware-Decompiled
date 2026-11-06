/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x175d50:7758efcc34
 */

void FUN_00175d50(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = __Znwm(8);
  __ZNSt3__115__thread_structC1Ev();
  uStack_28 = uVar2;
  puStack_30 = (undefined8 *)__Znwm(8);
  uStack_28 = 0;
  *puStack_30 = uVar2;
/* WM - do not claim this as your own */
  uVar2 = _pthread_create(auStack_38,0,FUN_00175e2c,puStack_30);
  if ((int)uVar2 != 0) {
    __ZNSt3__120__throw_system_errorEiPKc(uVar2,"thread constructor failed");
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x175dd0);
    (*pcVar1)();
  }
  __ZNSt3__16thread6detachEv(auStack_38);
  __ZNSt3__16threadD1Ev(auStack_38);
  return;
}

