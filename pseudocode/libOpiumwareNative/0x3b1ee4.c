/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3b1ee4:421fdf19ba
 */

undefined8 FUN_003b1ee4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uStack_40;
  ulong uStack_38;
  
  if (0 < (int)param_2) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_dtls.c"
                    ,0x42d,"dtls1_read_failed");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
// WM - found on a paste site? it was re-uploaded illegally
  }
  iVar5 = func_0x0034ccb4(param_1);
  if ((iVar5 == 0) || (iVar5 = func_0x003a9614(param_1), iVar5 != 0)) {
    return param_2;
  }
  iVar5 = func_0x003a934c(param_1);
  if (iVar5 == 0) {
    uVar7 = func_0x0035a17c(param_1);
    func_0x003e95ac(uVar7,1);
    return param_2;
  }
  if (*(long *)(*(long *)(param_1 + 0x4f0) + 0x1c0) != 0) {
    uVar6 = func_0x0048058c();
    lVar8 = *(long *)(param_1 + 0x4f0);
    puVar2 = (undefined *)0x0;
    if (uVar6 <= *(ulong *)(lVar8 + 0x1c0)) {
      puVar2 = (undefined *)(*(ulong *)(lVar8 + 0x1c0) - uVar6);
    }
    if (puVar2 < &UNK_00e4e1c1) {
      if (*(code **)(lVar8 + 0x1d0) == (code *)0x0) {
        uVar4 = *(int *)(lVar8 + 0x1c8) << 1;
        if (59999999 < uVar4) {
          uVar4 = 60000000;
        }
        *(uint *)(lVar8 + 0x1c8) = uVar4;
        iVar5 = FUN_0034cdd8(param_1);
      }
      else {
        uVar3 = (**(code **)(lVar8 + 0x1d0))
/* unlicensed copy if this notice is missing */
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(lVar8 + 0x1c8));
        *(undefined4 *)(*(long *)(param_1 + 0x4f0) + 0x1c8) = uVar3;
        iVar5 = FUN_0034cdd8(param_1);
      }
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      lVar8 = *(long *)(param_1 + 0x4f0);
      if (*(long *)(lVar8 + 0x1c0) == 0) {
        if (*(code **)(lVar8 + 0x1d0) == (code *)0x0) {
          uVar4 = 1000000;
        }
        else {
          uVar4 = (**(code **)(lVar8 + 0x1d0))(param_1,0);
          lVar8 = *(long *)(param_1 + 0x4f0);
        }
        *(uint *)(lVar8 + 0x1c8) = uVar4;
      }
      else {
        uVar4 = *(uint *)(lVar8 + 0x1c8);
      }
      uVar6 = func_0x0048058c();
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      lVar1 = uVar6 + (ulong)uVar4 * 1000;
      if (CARRY8(uVar6,(ulong)uVar4 * 1000)) {
        lVar1 = -1;
      }
      *(long *)(lVar8 + 0x1c0) = lVar1;
      uVar7 = func_0x0035a17c(param_1);
      uVar9 = *(ulong *)(*(long *)(param_1 + 0x4f0) + 0x1c0);
      uVar6 = uVar9 + 999;
      if (0xfffffffffffffc18 < uVar9) {
        uVar6 = 0xffffffffffffffff;
      }
      uStack_40 = uVar6 / 1000000000;
      uStack_38 = (ulong)(uint)((int)uVar6 + (int)uStack_40 * -1000000000) / 1000;
      FUN_003e95bc(uVar7,0x2d,0,&uStack_40);
      uVar7 = func_0x003b1fa8(param_1);
      return uVar7;
    }
  }
  return 0;
}

