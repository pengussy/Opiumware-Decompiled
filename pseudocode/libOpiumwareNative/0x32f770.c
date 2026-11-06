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
 *  file-id: 0x32f770:80a43f4a2f
 *  --------------------------------------------------------------------------*/

void FUN_0032f770(long param_1)

{
  int iVar1;
  char *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    plVar3 = *(long **)(param_1 + 0x48);
    lVar4 = (long)*(int *)(param_1 + 0x40) << 3;
    do {
      lVar5 = *plVar3;
      iVar1 = *(int *)(lVar5 + 4);
      if (iVar1 == 4) {
        if ((lRam00000000020973e0 != 0) && (((&UNK_0000286d)[lRam00000000020973e0] & 1) != 0)) {
          func_0x0011ab24(*(undefined8 *)(lVar5 + 0x10));
          pcVar2 = "[font] Texture #%03d: destroy %dx%d, texid=0x%llX, backend_data=%p\n";
          goto LAB_0032f7c0;
        }
      }
      else if (iVar1 == 3) {
        if ((lRam00000000020973e0 != 0) && (((&UNK_0000286d)[lRam00000000020973e0] & 1) != 0)) {
          func_0x0011ab24(*(undefined8 *)(lVar5 + 0x10));
          pcVar2 = "[font] Texture #%03d: update %d regions, texid=0x%llX, backend_data=0x%llX\n";
          goto LAB_0032f7c0;
        }
      }
      else if (((iVar1 == 2) && (lRam00000000020973e0 != 0)) &&
              (((&UNK_0000286d)[lRam00000000020973e0] & 1) != 0)) {
        pcVar2 = "[font] Texture #%03d: create %dx%d\n";
LAB_0032f7c0:
        func_0x002fd6a4(pcVar2);
      }
      plVar3 = plVar3 + 1;
/* WM - proprietary - see LICENSE - do not sell */
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}

