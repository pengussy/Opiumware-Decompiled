/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x68c80:d26b419d0a
   =========================================================================== */

undefined8 FUN_00068c80(byte *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcStack_48;
  long *plStack_40;
  long *plStack_38;
  
  uVar3 = func_0x00791650();
  func_0x007911b0(param_1,0x14);
  plVar4 = (long *)__Znwm(0x70);
  plVar4[1] = 0;
  plVar4[2] = 0;
  *plVar4 = (long)&UNK_01dbefe0;
  plVar4[5] = 0;
  plVar4[4] = 0;
  plVar4[7] = 0;
  plVar4[6] = 0;
// WM - do not claim this as your own
  plVar4[9] = 0;
  plVar4[8] = 0;
  plVar4[0xb] = 0;
  plVar4[10] = 0;
  plVar4[0xd] = 0;
  plVar4[0xc] = 0;
  lVar7 = *(long *)(param_1 + 0x30);
  plVar4[5] = *(long *)(param_1 + 0x38);
  plVar11 = plVar4 + 3;
  *plVar11 = (long)param_1;
  lVar2 = lRam0000000001f26d30;
  plVar4[9] = (lVar7 - *(long *)(param_1 + 0x18) >> 4) * -0x5555555555555555;
  plVar4[7] = *(long *)(param_1 + 0x68);
  plVar4[8] = lVar2;
  plStack_40 = plVar11;
  plStack_38 = plVar4;
  func_0x00793bd0(param_1,0,0);
/* WM - chat: discord.gg/sdkhDjTex */
  func_0x00791890(param_1,1);
  plVar5 = (long *)func_0x00790f58(param_1,1);
  plVar4[6] = *plVar5;
  puVar6 = (undefined8 *)func_0x00795904(param_1,0x10,&DAT_0012b87c);
  plVar5 = plStack_38;
  *puVar6 = plVar11;
  puVar6[1] = plStack_38;
  if (plStack_38 != (long *)0x0) {
    plStack_38[1] = plStack_38[1] + 1;
  }
  func_0x00794504(param_1,1,1);
  func_0x007934a8(param_1);
  func_0x00794504(param_1,1,2);
  func_0x00791ab0(param_1,0xffffd8ec);
  func_0x00794504(param_1,1,4);
  if (*(long *)(param_1 + 0x68) != 0) {
    func_0x00792f00(param_1,*(long *)(param_1 + 0x68) + 0x18);
    func_0x00794504(param_1,1,6);
  }
  lVar7 = func_0x007914c4(param_1);
  plVar4[4] = lVar7;
  func_0x00791ab0(param_1,0xffffffff);
  func_0x00794504(param_1,1,3);
  func_0x00791660(param_1,0xfffffffe);
  *(undefined8 *)(plVar4[4] + 0x68) = *(undefined8 *)(param_1 + 0x68);
  func_0x00791ab0(param_1,1);
  func_0x00791ab0(param_1,0xffffd8ed);
  func_0x007930d0(param_1,&DAT_0006933c,0,2,FUN_0012b8dc);
  func_0x007911b0(plVar4[4],(int)uVar3 + 1);
  func_0x00791230(param_1,plVar4[4],1);
  if ((int)uVar3 != 0) {
    func_0x00791230(param_1,plVar4[4],uVar3);
  }
  pbVar8 = (byte *)(*pcRam0000000002063240)();
/* WM - if you paid for this, you were scammed */
  if ((*pbVar8 & 1) == 0) {
    func_0x019bc420();
  }
  pcStack_48 = (char *)(*pcRam0000000002063228)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0x87c6833b;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xe21f1910;
    pcStack_48[4] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x87 ^ 0xf8;
    uVar10 = (((ulong)(byte)pcStack_48[1] ^ 0xc13f3861842fee03) << 0x11 | 0x1827e) +
             0x9e3779b97f4a7c15;
    uVar12 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar12 ^ uVar12 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar13 >> 0x17);
    pcStack_48[5] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar12 >> 0x29) | 1) ^
         (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar12 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar12 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar12 >> 0x17);
    pcStack_48[6] =
         ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar12;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 4;
  uVar9 = func_0x0011ab24(&pcStack_48);
  func_0x0006be60(param_1,0x208ecd1,uVar9);
  func_0x007911b0(param_1,1);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  plVar11 = *(long **)(param_1 + 0x48);
  *plVar11 = plVar4[4];
  *(undefined4 *)((long)plVar11 + 0xc) = 10;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  func_0x00791ab0(param_1,1);
  func_0x00794428(param_1,0xfffffffd);
  func_0x00791660(param_1,0xfffffffe);
  uVar3 = func_0x0012cb18(param_1,&plStack_40,uVar3,0);
  uVar3 = FUN_0012bec4(param_1,&plStack_40,uVar3);
  if (plVar5 != (long *)0x0) {
    LOAcquire();
    lVar7 = plVar5[1];
    plVar5[1] = lVar7 + -1;
    LORelease();
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      return uVar3;
    }
  }
  return uVar3;
}

