/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x184138:1ce77f7604
 *  --------------------------------------------------------------------------*/

bool FUN_00184138(undefined8 *param_1,undefined8 *param_2)

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
    FUN_0018425c(uVar2,0xd4,auStack_48,*param_1);
    ___cxa_throw(uVar2,&UNK_01dbfdf0,&DAT_00184420);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x184220);
    (*pcVar1)();
  }
  if (pcVar3 == (char *)0x0) {
    return true;
  }
  if (*pcVar3 == '\x02') {
    lVar4 = param_1[2];
    lVar5 = param_2[2];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
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

