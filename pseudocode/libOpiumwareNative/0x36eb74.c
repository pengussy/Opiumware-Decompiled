/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36eb74:8c5d3108e1
   =========================================================================== */

undefined8 FUN_0036eb74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_28;
  
  lVar3 = func_0x019ec218(param_2,"max_dgram_payload_len");
  if (lVar3 == 0) {
    return 1;
  }
  uVar4 = func_0x00479178(lVar3,&uStack_28);
  if ((int)uVar4 != 0) {
    if (0x4af < uStack_28) {
      uVar6 = *(ulong *)(param_1 + 0x30);
      *(ulong *)(param_1 + 0x30) = uStack_28;
      puVar7 = (undefined *)(uStack_28 * 2);
      puVar1 = puVar7;
      if (puVar7 < &UNK_00003981) {
        puVar1 = &UNK_00003980;
      }
      puVar2 = (undefined *)(uStack_28 * 10);
      if (puVar1 <= (undefined *)(uStack_28 * 10)) {
        puVar2 = puVar1;
      }
      *(undefined **)(param_1 + 0x10) = puVar2;
      *(undefined **)(param_1 + 0x18) = puVar7;
      if (uStack_28 < uVar6) {
        *(undefined **)(param_1 + 0x40) = puVar2;
      }
      if (*(ulong **)(param_1 + 0x78) != (ulong *)0x0) {
/* wm:do not claim this as your own */
        **(ulong **)(param_1 + 0x78) = uStack_28;
      }
      if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
      }
      if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x18);
      }
      if (*(undefined8 **)(param_1 + 0x90) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
      }
      if (*(undefined4 **)(param_1 + 0x98) == (undefined4 *)0x0) {
        return 1;
      }
      if (*(int *)(param_1 + 0x70) == 0) {
        uVar5 = 0x53;
        if (*(ulong *)(param_1 + 0x48) <= *(ulong *)(param_1 + 0x40)) {
          uVar5 = 0x41;
        }
      }
      else {
        uVar5 = 0x52;
      }
      **(undefined4 **)(param_1 + 0x98) = uVar5;
      return 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}

