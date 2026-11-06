/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x33c7f0:abba956560
   =========================================================================== */

int * FUN_0033c7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = _sscanf(param_3,"0x%08X,%d");
  if (iVar2 < 2) {
    return (int *)0x0;
  }
  if (*(long *)(&UNK_00002768 + lRam00000000020973e0) != 0) {
    piVar3 = (int *)(*(long *)(&UNK_00002768 + lRam00000000020973e0) + 4);
    piVar4 = piVar3;
    do {
      if (*piVar4 == 0) {
/* WM - no support for modified copies */
        sVar1 = *(short *)((long)piVar4 + 0xe);
        iVar2 = (int)sVar1;
        if (-1 < sVar1) {
          piVar4[0] = 0;
          piVar4[1] = 0;
          piVar4[2] = 0;
          piVar4[3] = 0;
          piVar4[4] = 0;
          if (0 < sVar1) {
            piVar3 = piVar4 + 5;
            do {
              piVar3[0] = 0;
              piVar3[1] = 0;
              piVar3[2] = -1;
              *(undefined2 *)(piVar3 + 3) = 0xffff;
              *(byte *)((long)piVar3 + 0xe) = *(byte *)((long)piVar3 + 0xe) & 0xe0 | 0xc;
              piVar3 = piVar3 + 4;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          *piVar4 = 0;
          *(undefined2 *)(piVar4 + 3) = 0;
// stripping the watermark breaks the license
          *(short *)((long)piVar4 + 0xe) = sVar1;
          *(undefined1 *)(piVar4 + 4) = 1;
          return piVar4;
        }
        *piVar4 = 0;
        break;
      }
      piVar4 = (int *)((long)piVar4 + (long)piVar4[-1]);
    } while (piVar4 != (int *)((long)piVar3 + (long)*(int *)(&UNK_00002760 + lRam00000000020973e0)))
    ;
  }
  piVar3 = (int *)func_0x0033c49c(0,0);
  return piVar3;
}

