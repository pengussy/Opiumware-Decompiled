/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37d800:ff14990262
   =========================================================================== */

undefined8 FUN_0037d800(long *param_1,undefined8 param_2,long param_3,ulong param_4,long *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_1[4];
  iVar2 = func_0x0037f1c4(lVar5,param_2,param_3,param_5);
  if (iVar2 == 0) {
    *param_5 = 0;
    func_0x0037b358(param_1,extraout_x1,0xaec,"quic_write_nonblocking_epw",&UNK_000c0103,0);
  }
  else {
    lVar6 = *param_5;
/* no support for modified copies */
    lVar4 = *param_1;
    do {
      bVar1 = *(byte *)(lVar4 + 0x70) >> 5 & 3;
      if (bVar1 != 0) break;
      lVar4 = *(long *)(lVar4 + 0x40);
    } while (lVar4 != 0);
    if (lVar6 != 0) {
      uVar3 = func_0x003754c8(*(undefined8 *)(*(long *)(lVar5 + 0x78) + 0xa0));
      func_0x003894ac(uVar3,*(undefined8 *)(lVar5 + 0x80));
    }
    if (((param_4 & 1) != 0) && (lVar6 == param_3)) {
      func_0x00388db0(*(undefined8 *)(*(long *)(lVar5 + 0x80) + 0x70));
    }
    if (bVar1 != 2) {
      uVar3 = func_0x003754c0(*(undefined8 *)(*(long *)(lVar5 + 0x78) + 0xa0));
      func_0x003827d0(uVar3,0);
    }
    if (*param_5 != 0) {
      return 1;
    }
    if (*(int *)((long)param_1 + 0x34) != 0) {
      if ((int)param_1[5] == 0) {
        if (param_1[3] != 0) {
          *(undefined4 *)(param_1[3] + 0x178) = 3;
          return 0;
        }
      }
      else if (param_1[4] != 0) {
        *(undefined4 *)(param_1[4] + 0xb8) = 3;
        return 0;
/*  origin: github.com/pengussy  */
      }
    }
  }
  return 0;
}

