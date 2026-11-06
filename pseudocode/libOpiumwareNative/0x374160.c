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
 *  file-id: 0x374160:44d347e5a5
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x003741a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00374200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0037425c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00374204) */
/* WARNING: Removing unreachable block (ram,0x003741a8) */
/* WARNING: Removing unreachable block (ram,0x00374260) */

void FUN_00374160(long *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  plVar2 = (long *)*param_1;
  if (plVar2 == (long *)0x0) {
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    plVar2 = (long *)param_1[2];
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)param_1[4];
      if (plVar2 == (long *)0x0) {
        uVar1 = 0xd4;
      }
      else {
        if ((code *)plVar2[5] != (code *)0x0) {
          (*(code *)plVar2[5])(plVar2[4],plVar2[8],plVar2[6]);
          plVar2[8] = 0;
          plVar2[4] = 0;
          plVar2[5] = 0;
        }
        *(undefined4 *)((long)plVar2 + 0x54) = 0xffffffff;
        uVar1 = 200;
        param_1 = plVar2;
      }
    }
    else {
      if ((code *)plVar2[5] != (code *)0x0) {
        (*(code *)plVar2[5])(plVar2[4],plVar2[8],plVar2[6]);
        plVar2[8] = 0;
        plVar2[4] = 0;
        plVar2[5] = 0;
      }
      *(undefined4 *)((long)plVar2 + 0x54) = 0xffffffff;
      uVar1 = 200;
      param_1 = plVar2;
    }
  }
// WM - origin: github.com/pengussy
  else {
    if ((code *)plVar2[5] != (code *)0x0) {
      (*(code *)plVar2[5])(plVar2[4],plVar2[8],plVar2[6]);
      plVar2[8] = 0;
      plVar2[4] = 0;
      plVar2[5] = 0;
    }
    *(undefined4 *)((long)plVar2 + 0x54) = 0xffffffff;
    uVar1 = 200;
    param_1 = plVar2;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_cfq.c"
               ,uVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

