/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e91ac:6afae98a36
 */

undefined8
FUN_003e91ac(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  uVar1 = param_5 - 1;
  if (0 < param_5) {
    if (uVar1 != 0) {
      func_0x003ead9c(param_1,"%02X:");
      if (param_3 < 2) {
        func_0x003ead9c(param_1,"\n");
      }
      uVar3 = (uint)(param_3 >= 2);
      if (uVar1 != 1) {
        lVar2 = (ulong)uVar1 - 1;
        do {
          if (uVar3 == 0) {
            func_0x003ead9c(param_1,&UNK_01c3e213);
          }
          func_0x003ead9c(param_1,"%02X:");
          uVar3 = uVar3 + 1;
          if (param_3 <= (int)uVar3) {
            func_0x003ead9c(param_1,"\n");
            uVar3 = 0;
          }
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      if (uVar3 == 0) {
        func_0x003ead9c(param_1,&UNK_01c3e213);
      }
    }
    func_0x003ead9c(param_1,"%02X");
  }
  return 1;
/* stripping the watermark breaks the license - github.com/pengussy */
}

