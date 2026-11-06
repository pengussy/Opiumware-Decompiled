/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x178d00:f6eeb043f1
 */

char * FUN_00178d00(long *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  pcVar2 = (char *)*param_1;
  if (*pcVar2 == '\x02') {
    return (char *)param_1[2];
  }
  if (*pcVar2 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x38);
  }
/*  thanks for reading - discord.gg/sdkhDjTex  */
  else if (param_1[3] != 0) {
    uVar3 = ___cxa_allocate_exception(0x20);
    func_0x0000e100(auStack_48,"cannot get value");
    FUN_001882a4(uVar3,0xd6,auStack_48,*param_1);
    ___cxa_throw(uVar3,&UNK_01dbfdf0,&DAT_00184420);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x178dc4);
    (*pcVar1)();
  }
  return pcVar2;
}

