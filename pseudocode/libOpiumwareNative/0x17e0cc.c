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
 *  file-id: 0x17e0cc:3dad7b61c0
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0017e0cc(long param_1)

{
  int iVar1;
  
  iVar1 = func_0x01995708();
  if (iVar1 == 0x2a) {
    while( true ) {
      do {
        iVar1 = func_0x01995708(param_1);
        if (iVar1 + 1U < 2) {
          *(char **)(param_1 + 0x68) = "invalid comment; missing closing \'*/\'";
          return 0;
        }
      } while (iVar1 != 0x2a);
      iVar1 = func_0x01995708(param_1);
      if (iVar1 == 0x2f) break;
      *(undefined1 *)(param_1 + 0x18) = 1;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
      if (*(long *)(param_1 + 0x28) == 0) {
        if (*(long *)(param_1 + 0x30) != 0) {
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
        }
      }
      else {
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      }
      if (*(int *)(param_1 + 0x14) != -1) {
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
      }
    }
    return 1;
  }
  if (iVar1 != 0x2f) {
    *(char **)(param_1 + 0x68) = "invalid comment; expecting \'/\' or \'*\' after \'/\'";
/* donate: donate/README.md - github.com/pengussy */
    return 0;
  }
  do {
    do {
      iVar1 = func_0x01995708(param_1);
    } while (0xe < iVar1 + 1U);
  } while ((0x4803U >> (ulong)(iVar1 + 1U & 0x1f) & 1) == 0);
  return 1;
}

