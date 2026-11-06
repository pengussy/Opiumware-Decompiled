/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x188180:ca2179a449
 */

bool FUN_00188180(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_48 [24];
  
  pcVar3 = (char *)*param_1;
  if (pcVar3 != (char *)*param_2) {
    uVar2 = ___cxa_allocate_exception(0x20);
    func_0x0000e100(auStack_48,"cannot compare iterators of different containers");
    FUN_001882a4(uVar2,0xd4,auStack_48,*param_1);
    ___cxa_throw(uVar2,&UNK_01dbfdf0,&DAT_00184420);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x188268);
    (*pcVar1)();
  }
  if (pcVar3 == (char *)0x0) {
    return true;
  }
  if (*pcVar3 == '\x02') {
    lVar4 = param_1[2];
    lVar5 = param_2[2];
  }
  else if (*pcVar3 == '\x01') {
    lVar4 = param_1[1];
    lVar5 = param_2[1];
  }
  else {
    lVar4 = param_1[3];
    lVar5 = param_2[3];
  }
  return lVar4 == lVar5;
}

