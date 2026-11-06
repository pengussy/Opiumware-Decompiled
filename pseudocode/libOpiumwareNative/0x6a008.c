/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x6a008:1ea09223dd
   =========================================================================== */

void FUN_0006a008(long *param_1,byte *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  char *pcStack_38;
  
  pbVar3 = (byte *)(*pcRam00000000020634b0)();
  if ((*pbVar3 & 1) == 0) {
    func_0x019bc54c();
  }
  pcStack_38 = (char *)(*pcRam0000000002063498)();
  if (*pcStack_38 == '\x01') {
    uVar1 = (byte)pcStack_38[1] ^ 0x96b5faef;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x13a39e33;
    pcStack_38[3] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0x2c;
    uVar6 = (((ulong)(byte)pcStack_38[1] ^ 0x9c7f10cf0098cca2) << 0x11 | 0x138fe) +
            0x9e3779b97f4a7c15;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_38[4] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar8;
    *pcStack_38 = '\0';
  }
  pcStack_38 = pcStack_38 + 3;
  uVar4 = func_0x0011ab24(&pcStack_38);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  FUN_0006be60(param_2,0x208ecd8,uVar4);
  func_0x007911b0(param_2,1);
  if ((*param_2 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_2,param_2,param_2 + 0x28);
  }
  puVar7 = *(undefined8 **)(param_2 + 0x48);
  *puVar7 = param_3;
  *(undefined4 *)((long)puVar7 + 0xc) = 8;
  *(long *)(param_2 + 0x48) = *(long *)(param_2 + 0x48) + 0x10;
  func_0x00793880(param_2,0xfffffffe);
  func_0x007917f4(param_2,0xfffffffe);
  iVar2 = func_0x00791be4(param_2,0xffffffff);
  if (iVar2 != 7) {
    func_0x00791660(param_2,0xfffffffe);
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  func_0x00793928(param_2,0xffffffff,3);
  puVar5 = (ulong *)func_0x00790f58(param_2,0xffffffff);
  uVar6 = (ulong)*(uint *)((long)puVar5 + 0xc);
  if ((((*(uint *)((long)puVar5 + 0xc) == 9) && (uVar6 = *puVar5, *(char *)(uVar6 + 3) == -0x80)) &&
      (*(int *)(uVar6 + 4) == 0x18)) && (*(undefined **)(uVar6 + 0x20) == &DAT_0006d39c)) {
    lVar9 = *(long *)(uVar6 + 0x18);
    lVar10 = *(long *)(uVar6 + 0x10);
    param_1[1] = *(long *)(uVar6 + 0x18);
    *param_1 = lVar10;
    if (lVar9 != 0) {
/* reversing this took months of machine time - github.com/pengussy */
      puVar5 = (ulong *)(lVar9 + 8);
      uVar6 = *puVar5;
      *puVar5 = uVar6 + 1;
    }
  }
  else {
    lVar10 = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  func_0x00791660(uVar6,param_2,0xfffffffe);
  if (lVar10 == 0) {
    func_0x00791660(param_2,0xfffffffe);
  }
  return;
}

