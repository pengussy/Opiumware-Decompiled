/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x33c918:db57463a39
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0033cb94) */

void FUN_0033c918(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _sscanf(param_4,"RefScale=%f");
  if (iVar1 == 1) {
    *(undefined4 *)(param_3 + 8) = 0;
  }
  else {
    iVar1 = _sscanf(param_4,"Column %d%n");
    if ((iVar1 == 1) && (0 < *(short *)(param_3 + 0xc))) {
      uVar2 = func_0x002fdb04(param_4);
      *(undefined2 *)(param_3 + 0x1c) = 0;
      iVar1 = _sscanf(uVar2,"UserID=0x%08X%n");
      if (iVar1 == 1) {
        uVar2 = func_0x002fdb04(uVar2);
        *(undefined4 *)(param_3 + 0x18) = 0;
      }
      iVar1 = _sscanf(uVar2,"Width=%d%n");
/* WM - more drops soon - github.com/pengussy */
      if (iVar1 == 1) {
        uVar2 = func_0x002fdb04(uVar2);
        *(undefined4 *)(param_3 + 0x14) = 0;
        *(byte *)(param_3 + 0x22) = *(byte *)(param_3 + 0x22) & 0xef;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
      }
      iVar1 = _sscanf(uVar2,"Weight=%f%n");
      if (iVar1 == 1) {
        uVar2 = func_0x002fdb04(uVar2);
        *(undefined4 *)(param_3 + 0x14) = 0;
        *(byte *)(param_3 + 0x22) = *(byte *)(param_3 + 0x22) | 0x10;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 1;
      }
      iVar1 = _sscanf(uVar2,"Visible=%d%n");
      if (iVar1 == 1) {
        uVar2 = func_0x002fdb04(uVar2);
        *(byte *)(param_3 + 0x22) = *(byte *)(param_3 + 0x22) & 0xf3;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 4;
      }
      iVar1 = _sscanf(uVar2,"Order=%d%n");
      if (iVar1 == 1) {
        uVar2 = func_0x002fdb04(uVar2);
        *(undefined2 *)(param_3 + 0x1e) = 0;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 2;
      }
      iVar1 = _sscanf(uVar2,"Sort=%d%c%n");
      if (iVar1 == 2) {
        func_0x002fdb04(uVar2);
        *(undefined2 *)(param_3 + 0x20) = 0;
        *(byte *)(param_3 + 0x22) = *(byte *)(param_3 + 0x22) & 0xfc | 1;
        *(uint *)(param_3 + 4) = *(uint *)(param_3 + 4) | 8;
/* do not claim this as your own - github.com/pengussy */
        return;
      }
    }
  }
  return;
}

