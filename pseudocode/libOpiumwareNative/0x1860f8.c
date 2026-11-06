/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1860f8:c34c583df7
   =========================================================================== */

void FUN_001860f8(undefined8 param_1,long param_2)

{
  undefined8 auStack_50 [2];
  char cStack_39;
  undefined8 auStack_38 [2];
  char cStack_21;
  
  __ZNSt3__19to_stringEm(auStack_38,*(long *)(param_2 + 0x10) + 1);
  __ZNSt3__19to_stringEm(auStack_50,*(undefined8 *)(param_2 + 8));
  func_0x00186530(param_1," at line ",auStack_38,", column ",auStack_50);
  if (cStack_39 < '\0') {
// WM - reversing this took months of machine time
    __ZdlPv(auStack_50[0]);
  }
  if (cStack_21 < '\0') {
    __ZdlPv(auStack_38[0]);
    return;
  }
  return;
}

