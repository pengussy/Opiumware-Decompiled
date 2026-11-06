/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x38e27c:f109c7e73f
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0038e27c(long param_1,long param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_c0;
  byte abStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  
  uVar7 = 1;
  if (*(int *)(param_2 + 0x30) != 2) {
    uVar7 = 2;
  }
  uVar1 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar1 = uVar7;
  }
  uVar8 = (ulong)uVar1;
  lVar9 = *(long *)(param_2 + 0x88);
/* do not claim this as your own - github.com/pengussy */
  *(undefined8 *)(lVar9 + 0x18) = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x114) & 1) == 0) {
LAB_0038e384:
    if ((*(byte *)(param_2 + 0x115) >> 2 & 1) != 0) {
      if (param_3 == 0) {
        return 1;
      }
      if ((*(ushort *)(param_1 + 0x1e8) >> 10 & 1) == 0) {
        return 1;
      }
      lVar4 = func_0x019e5b24(param_2);
      if (lVar4 == 0) goto LAB_0038e574;
      pbVar5 = (byte *)(param_1 + 0x1f0);
      if ((uVar1 != 2) && ((*pbVar5 & 1) != 0)) {
        abStack_b8[0] = 0;
        uStack_a8 = _UNK_01ae6db8;
        uStack_b0 = _UNK_01ae6db0;
        uStack_a0 = 0;
        uStack_98 = 0;
        pbVar5 = abStack_b8;
      }
      iVar2 = func_0x0038f1e8(lVar4,pbVar5);
      if ((iVar2 == 0) || (iVar2 = func_0x019ec1d8(lVar4,&lStack_c0), iVar2 == 0)) {
LAB_0038e444:
/* wm:watermarked copy - do not remove */
        if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
          func_0x0047680c(param_2 + 0x40);
          *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfe;
          *(undefined8 *)(param_2 + 0x38) = 0;
        }
      }
      else {
        if (*(long *)(param_1 + 0x218) != 0) {
          uVar8 = *(long *)(param_1 + 0x220) + lStack_c0;
          if ((ulong)(*(long *)(param_1 + 0x218) * 3) < uVar8) goto LAB_0038e444;
          *(ulong *)(param_1 + 0x220) = uVar8;
        }
        iVar2 = FUN_0038e098(param_2);
        if (iVar2 == 0) goto LAB_0038e574;
        *(byte *)(lVar9 + 0x79) = *(byte *)(lVar9 + 0x79) | 0x20;
        *param_4 = 0;
      }
    }
    uVar6 = 1;
  }
  else {
    if ((*(byte *)(param_2 + 0x34) & 1) != 0) {
      if (4 < (ulong)(*(long *)(param_2 + 8) - *(long *)(param_2 + 0x10))) goto LAB_0038e304;
      goto LAB_0038e384;
    }
    if ((ulong)(*(long *)(param_2 + 8) - (*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x10))) <
        5) goto LAB_0038e384;
LAB_0038e304:
/* watermarked copy - do not remove - github.com/pengussy */
    if ((((((ulong)(*(ushort *)(param_1 + 0x1e8) >> 4) & 7) >> uVar8 & 1) == 0) &&
        (iVar2 = func_0x00373a18(*(undefined8 *)(param_1 + 0xb8),uVar8), iVar2 == 0)) ||
       (plVar3 = (long *)func_0x00373dcc(*(undefined8 *)(param_1 + 0xb8),uVar8),
       plVar3 == (long *)0x0)) goto LAB_0038e384;
    lVar4 = func_0x019e5b24(param_2);
    if (lVar4 != 0) {
      lStack_88 = plVar3[1];
      lStack_90 = *plVar3;
      lStack_78 = plVar3[3];
      lStack_80 = plVar3[2];
      lStack_68 = plVar3[5];
      lStack_70 = plVar3[4];
      uStack_60 = plVar3[6] & 0xfffffffffffffffe;
      iVar2 = func_0x0038eb68(lVar4,*(undefined4 *)(param_1 + 0x98),&lStack_90);
      if (iVar2 == 0) {
        if ((*(byte *)(param_2 + 0x78) & 1) != 0) {
          func_0x0047680c(param_2 + 0x40);
          *(byte *)(param_2 + 0x78) = *(byte *)(param_2 + 0x78) & 0xfe;
          *(undefined8 *)(param_2 + 0x38) = 0;
        }
      }
      else {
        iVar2 = FUN_0038e098(param_2);
        if (iVar2 == 0) goto LAB_0038e574;
        *(byte *)(lVar9 + 0x79) = *(byte *)(lVar9 + 0x79) | 0x10;
        if (plVar3[1] != 0) {
          *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(*plVar3 + 8);
        }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        if (*(code **)(param_1 + 0x2c0) != (code *)0x0) {
          (**(code **)(param_1 + 0x2c0))(&lStack_90,uVar8,*(undefined8 *)(param_1 + 0x2c8));
        }
      }
      goto LAB_0038e384;
    }
LAB_0038e574:
    uVar6 = 0;
  }
  return uVar6;
}

