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
 *  file-id: 0x2fdba0:1ab4c748f0
 *  --------------------------------------------------------------------------*/

void FUN_002fdba0(long *param_1,long *param_2,char *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  lVar3 = lRam00000000020973e0;
  if (*param_3 == '%') {
    if (param_3[1] == '.') {
      if (((param_3[2] == '*') && (param_3[3] == 's')) && (param_3[4] == '\0')) {
        iVar1 = *param_4;
        iVar2 = iVar1;
        if (5 < iVar1) {
          iVar2 = 6;
        }
        pcVar4 = "(null)";
        if (*(char **)(param_4 + 2) != (char *)0x0) {
          iVar2 = iVar1;
          pcVar4 = *(char **)(param_4 + 2);
        }
        *param_1 = (long)pcVar4;
        pcVar4 = pcVar4 + iVar2;
        goto LAB_002fdc88;
      }
    }
    else if ((param_3[1] == 's') && (param_3[2] == '\0')) {
      pcVar4 = "(null)";
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      if (*(char **)param_4 != (char *)0x0) {
        pcVar4 = *(char **)param_4;
      }
      *param_1 = (long)pcVar4;
      if (param_2 == (long *)0x0) {
        return;
      }
      lVar3 = _strlen(pcVar4);
      pcVar4 = pcVar4 + lVar3;
      goto LAB_002fdc88;
    }
  }
  lVar5 = *(long *)(&UNK_00002a78 + lRam00000000020973e0);
  iVar1 = *(int *)(&UNK_00002a70 + lRam00000000020973e0);
  iVar2 = _vsnprintf(lVar5,(long)iVar1);
  if (lVar5 != 0) {
    if (iVar1 <= iVar2 || iVar2 == -1) {
      iVar2 = iVar1 + -1;
    }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    *(undefined1 *)(lVar5 + iVar2) = 0;
  }
  lVar3 = *(long *)(&UNK_00002a78 + lVar3);
  *param_1 = lVar3;
  if (param_2 == (long *)0x0) {
    return;
  }
  pcVar4 = (char *)(lVar3 + iVar2);
LAB_002fdc88:
  *param_2 = (long)pcVar4;
  return;
}

