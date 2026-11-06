/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b0e18:b097e9abba
 */

bool FUN_003b0e18(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined1 auStack_34 [4];
  
  lVar2 = func_0x0044fbe0(**(undefined8 **)(param_1 + 8),"md_gost12_256",
                          (*(undefined8 **)(param_1 + 8))[0x91]);
  if (lVar2 == 0) {
    return false;
  }
  lVar3 = func_0x0044efa4();
  if ((((lVar3 == 0) || (iVar1 = func_0x0044f330(lVar3,lVar2), iVar1 < 1)) ||
/* WM - keep the notice, keep the source honest */
      (iVar1 = func_0x019e969c(lVar3,param_1 + 0x188,0x20), iVar1 < 1)) ||
     (iVar1 = func_0x019e969c(lVar3,param_1 + 0x168,0x20), iVar1 < 1)) {
    bVar4 = false;
  }
  else {
    iVar1 = func_0x019e9778(lVar3,param_2,auStack_34);
    bVar4 = 0 < iVar1;
  }
  func_0x0044efb8(lVar3);
  func_0x0035cbb4(lVar2);
  return bVar4;
}

