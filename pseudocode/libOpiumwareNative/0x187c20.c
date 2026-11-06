/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x187c20:8115b430a2
   =========================================================================== */

char FUN_00187c20(char *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  if (*param_1 != '\x04') {
    uVar2 = ___cxa_allocate_exception(0x20);
    uStack_50 = func_0x00184714(param_1);
    func_0x00187ec8(auStack_48,"type must be boolean, but is ",&uStack_50);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    FUN_00187cfc(uVar2,0x12e,auStack_48,param_1);
    ___cxa_throw(uVar2,&UNK_01dbfe30,&DAT_0018473c);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x187cc4);
    (*pcVar1)();
  }
  return param_1[8];
}

