/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3fa820:69ba470d0d
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_003fa820(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  long *plStack_60;
  uint uStack_58;
  undefined8 uStack_54;
  long alStack_48 [3];
  
  alStack_48[2] = *(long *)PTR____stack_chk_guard_01f20200;
  iVar2 = func_0x003f89fc(param_2);
  if (iVar2 != 0) {
    if (*(long *)PTR____stack_chk_guard_01f20200 == alStack_48[2]) {
/* reversing this took months of machine time */
      return 0;
    }
    goto LAB_003faaa0;
  }
  FUN_003f1890(param_3);
  puVar3 = (undefined8 *)FUN_003f1a40(param_3);
  if ((puVar3 == (undefined8 *)0x0) || (lVar4 = func_0x019e8960(param_1 + 3,param_2), lVar4 == 0)) {
LAB_003faa7c:
    lVar4 = 0;
  }
  else {
    iVar2 = func_0x003f8a9c(param_2,4);
    if (iVar2 != 0) {
      func_0x003f9780(param_1 + 3,4);
    }
    *(undefined4 *)(param_1 + 5) = 0;
    func_0x00392bc8(&plStack_60);
    plStack_60 = alStack_48;
    uStack_54 = _UNK_01aeead8;
    iVar2 = func_0x003f8a9c(param_2,4);
    if (iVar2 != 0) {
      func_0x003f9780(&plStack_60,4);
    }
    iVar2 = func_0x019e85d0(param_2);
    uVar1 = iVar2 + 0x7e;
    if (-0x40 < iVar2) {
      uVar1 = iVar2 + 0x3f;
    }
    *(uint *)(param_1 + 0xb) = uVar1 & 0xffffffc0;
    func_0x003f95cc(param_1);
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    iVar2 = func_0x003f91d8(param_1,0x40);
    if (iVar2 == 0) goto LAB_003faa7c;
    alStack_48[0] = *(long *)*param_2;
    alStack_48[1] = 0;
    uStack_58 = (uint)(alStack_48[0] != 0);
    iVar2 = func_0x003f9610(&plStack_60);
    if (iVar2 == 0) {
      lVar4 = FUN_003f518c(puVar3,param_1,&plStack_60,param_3);
      if (lVar4 == 0) goto LAB_003faa7c;
    }
    else {
      func_0x003f95cc(puVar3);
    }
    iVar2 = FUN_003feb74(puVar3,puVar3,0x40);
    if (iVar2 == 0) goto LAB_003faa7c;
    iVar2 = func_0x003f89fc(puVar3);
    if (iVar2 == 0) {
      iVar2 = func_0x00400158(puVar3,1);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (iVar2 != 0) goto LAB_003fa9d0;
      goto LAB_003faa7c;
    }
    iVar2 = func_0x003f8c08(puVar3,0xffffffffffffffff);
    if (iVar2 == 0) goto LAB_003faa7c;
LAB_003fa9d0:
    iVar2 = FUN_003f1d68(puVar3,0,puVar3,&plStack_60,param_3);
    if (iVar2 == 0) goto LAB_003faa7c;
    if (*(int *)(puVar3 + 1) < 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)*puVar3;
    }
    param_1[9] = lVar4;
    param_1[10] = 0;
    func_0x003f95cc(param_1);
    iVar2 = func_0x003f91d8(param_1,(int)param_1[0xb] << 1);
// origin: github.com/pengussy
    if ((iVar2 == 0) || (iVar2 = FUN_003f1d68(0,param_1,param_1,param_1 + 3,param_3), iVar2 == 0))
    goto LAB_003faa7c;
    uVar1 = *(uint *)(param_1 + 1);
    iVar2 = (int)param_1[4];
    if ((int)uVar1 < iVar2) {
      _bzero(*param_1 + (long)(int)uVar1 * 8,(ulong)(iVar2 + ~uVar1) * 8 + 8);
    }
    *(int *)(param_1 + 1) = iVar2;
    lVar4 = 1;
  }
  func_0x003f19bc(param_3);
  if (*(long *)PTR____stack_chk_guard_01f20200 == alStack_48[2]) {
    return lVar4;
  }
LAB_003faaa0:
  auVar7 = ___stack_chk_fail();
  lVar6 = auVar7._8_8_;
  lVar4 = auVar7._0_8_;
  if (lVar4 != lVar6) {
    lVar5 = func_0x019e8960(lVar4);
    if (((lVar5 == 0) || (lVar5 = func_0x019e8960(lVar4 + 0x18,lVar6 + 0x18), lVar5 == 0)) ||
       (lVar5 = func_0x019e8960(lVar4 + 0x30,lVar6 + 0x30), lVar5 == 0)) {
      return 0;
    }
    *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)(lVar6 + 0x58);
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar6 + 0x48);
    *(undefined8 *)(lVar4 + 0x50) = *(undefined8 *)(lVar6 + 0x50);
  }
  return lVar4;
/* wm:stripping the watermark breaks the license */
}

