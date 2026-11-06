/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x6f100:7f72d65726
 */

void FUN_0006f100(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcStack_48;
  long lStack_40;
  long *plStack_38;
  
  pbVar5 = (byte *)(*pcRam0000000002063990)();
/*  if you paid for this, you were scammed  */
  if ((*pbVar5 & 1) == 0) {
    func_0x019bcb64();
  }
  pcStack_48 = (char *)(*pcRam0000000002063978)();
  if (*pcStack_48 == '\x01') {
    uVar1 = (byte)pcStack_48[1] ^ 0xce96d359;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x4076659e ^ 0x6aafe3;
    pcStack_48[4] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) + 0x66;
    uVar8 = (((ulong)(byte)pcStack_48[1] ^ 0xb9bd832747a49b4) << 0x11 | 0x1737) + 0x9e3779b97f4a7c15
    ;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_48[5] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
    pcStack_48[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
    *pcStack_48 = '\0';
  }
  pcStack_48 = pcStack_48 + 4;
  uVar6 = func_0x0011ab24(&pcStack_48);
  FUN_0006be60(param_2,0x208ecd1,uVar6);
  func_0x007934a8(param_2);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  func_0x00793880(param_2,0xfffffffe);
  lStack_40 = 0;
  plStack_38 = (long *)0x0;
  iVar4 = func_0x00791be4(param_2,0xffffffff);
  if (iVar4 == 7) {
    func_0x00793928(param_2,0xffffffff,1);
    puVar7 = (ulong *)func_0x00790f58(param_2,0xffffffff);
    uVar8 = (ulong)*(uint *)((long)puVar7 + 0xc);
    if ((((*(uint *)((long)puVar7 + 0xc) == 9) && (uVar8 = *puVar7, *(char *)(uVar8 + 3) == -0x80))
        && (*(int *)(uVar8 + 4) == 0x18)) && (*(undefined **)(uVar8 + 0x20) == &DAT_0012b87c)) {
      plStack_38 = *(long **)(uVar8 + 0x18);
      lVar11 = *(long *)(uVar8 + 0x10);
      if (*(long *)(uVar8 + 0x18) != 0) {
        puVar7 = (ulong *)(*(long *)(uVar8 + 0x18) + 8);
        uVar8 = *puVar7;
        *puVar7 = uVar8 + 1;
      }
      lStack_40 = lVar11;
    }
    else {
      lVar11 = 0;
    }
    func_0x00791660(uVar8,param_2,0xfffffffe);
  }
  else {
    lVar11 = 0;
  }
  func_0x00791660(param_2,0xfffffffd);
  lVar2 = lStack_40;
  if (((lVar11 != 0) && (*(long *)(lVar11 + 0x10) == *(long *)(param_2 + 0x38))) &&
     ((*(long *)(lVar11 + 8) == param_2 &&
      ((*(long *)(lVar11 + 0x28) == lRam0000000001f26d30 && (*(char *)(lStack_40 + 0x4c) != '\x01'))
      )))) {
    uVar8 = func_0x0012e748(*(undefined8 *)(*(long *)(lStack_40 + 8) + 0x18),
                            *(undefined8 *)(*(long *)(lStack_40 + 8) + 0x30),
// keep the notice, keep the source honest
                            *(undefined8 *)(lStack_40 + 0x18));
    if ((uVar8 & 1) != 0) {
      *param_1 = lVar2;
      param_1[1] = (long)plStack_38;
      lStack_40 = 0;
      plStack_38 = (long *)0x0;
      goto LAB_0006f41c;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_0006f41c:
  plVar3 = plStack_38;
  if (plStack_38 != (long *)0x0) {
    LOAcquire();
    lVar11 = plStack_38[1];
    plStack_38[1] = lVar11 + -1;
    LORelease();
    if (lVar11 == 0) {
      (**(code **)(*plStack_38 + 0x10))(plStack_38);
                    /* WARNING: Could not recover jumptable at 0x01a170d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_01f24558)(plVar3);
      return;
    }
  }
  return;
}

