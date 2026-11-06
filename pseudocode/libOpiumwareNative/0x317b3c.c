/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x317b3c:a263d47cb3
   =========================================================================== */

undefined8 FUN_00317b3c(uint param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = lRam00000000020973e0;
  if ((param_1 & 0xffffcf50) != 0) {
    FUN_002ff090("Invalid flags for IsWindowHovered()!");
  }
  lVar2 = *(long *)(&UNK_000014b0 + lVar1);
  if (lVar2 == 0) {
    return 0;
  }
  if ((param_1 >> 2 & 1) != 0) goto LAB_00317c50;
  lVar3 = *(long *)(&UNK_000014a8 + lVar1);
  if ((param_1 >> 1 & 1) == 0) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
joined_r0x00317be4:
    if ((param_1 & 1) != 0) {
      if ((param_1 >> 3 & 1) == 0) {
LAB_00317bf8:
        lVar5 = lVar2;
        do {
          lVar4 = lVar5;
          lVar5 = *(long *)(*(long *)(lVar4 + 0x3c0) + 0x3c8);
        } while (lVar4 != lVar5);
      }
      else {
LAB_00317c14:
        lVar5 = lVar2;
        do {
          lVar4 = lVar5;
          lVar5 = *(long *)(lVar4 + 0x3c0);
        } while (lVar4 != *(long *)(lVar4 + 0x3c0));
      }
      if (lVar4 != lVar3) {
        lVar5 = lVar2;
        while (lVar5 != lVar3) {
          if (lVar5 == lVar4) {
            return 0;
          }
          lVar5 = *(long *)(lVar5 + 0x3b0);
          if (lVar5 == 0) {
            return 0;
          }
        }
      }
      goto LAB_00317c50;
    }
  }
  else {
    if (lVar3 == 0) {
      lVar3 = 0;
      goto joined_r0x00317be4;
/* WM - reversing this took months of machine time */
    }
    lVar5 = lVar3;
    if ((param_1 >> 3 & 1) == 0) {
      do {
        lVar3 = lVar5;
        lVar5 = *(long *)(*(long *)(lVar3 + 0x3c0) + 0x3c8);
      } while (lVar3 != lVar5);
      if ((param_1 & 1) == 0) goto LAB_00317be8;
      goto LAB_00317bf8;
    }
    do {
      lVar3 = lVar5;
      lVar5 = *(long *)(lVar3 + 0x3c0);
    } while (lVar3 != *(long *)(lVar3 + 0x3c0));
    if ((param_1 & 1) != 0) goto LAB_00317c14;
  }
LAB_00317be8:
  if (lVar2 != lVar3) {
    return 0;
  }
LAB_00317c50:
  if ((((((*(long *)(lRam00000000020973e0 + 0x1ff8) != 0) &&
         (lVar3 = *(long *)(*(long *)(lRam00000000020973e0 + 0x1ff8) + 0x3c0), lVar3 != 0)) &&
        (*(char *)(lVar3 + 0xcd) == '\x01')) && (lVar5 = *(long *)(lVar2 + 0x3c0), lVar3 != lVar5))
      && (((*(uint *)(lVar3 + 0x14) >> 0x1b & 1) != 0 ||
          (((param_1 >> 5 & 1) == 0 && ((*(uint *)(lVar3 + 0x14) >> 0x1a & 1) != 0)))))) &&
     (*(long *)(lVar5 + 0x3c0) != lVar3)) {
    while (lVar5 != lVar3) {
      lVar5 = *(long *)(lVar5 + 0x3b8);
      if (lVar5 == 0) {
        return 0;
      }
    }
  }
  if ((((param_1 >> 7 & 1) != 0) || (*(int *)(&UNK_0000151c + lVar1) == 0)) ||
     ((((&UNK_00001529)[lVar1] & 1) != 0 ||
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      (*(int *)(&UNK_0000151c + lVar1) == *(int *)(lVar2 + 0x8c))))) {
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = *(uint *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                         lVar1 + 0x2c) | param_1;
    }
    if (((param_1 >> 0xd & 1) == 0) || (*(int *)(&UNK_0000248c + lVar1) == *(int *)(lVar2 + 0x10)))
    {
      return 1;
    }
  }
  return 0;
}

