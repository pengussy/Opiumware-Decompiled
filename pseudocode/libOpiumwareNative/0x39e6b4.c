/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x39e6b4:9538326481
   =========================================================================== */

undefined8 FUN_0039e6b4(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
  uVar6 = func_0x0035c118();
  iVar5 = func_0x004dcb7c();
  if (0 < iVar5) {
    if ((uVar1 >> 3 & 1) == 0) {
      iVar9 = 0;
      if (param_2 == 0) {
        do {
          lVar7 = func_0x004dcb90(uVar6,iVar9);
          if (((*(ushort *)(lVar7 + 0x1c) & 0x102) != 0) || (0x303 < *(int *)(lVar7 + 0x2c)))
          goto LAB_0039e898;
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
// keep the notice, keep the source honest
      }
      else {
        do {
          lVar7 = func_0x004dcb90(uVar6,iVar9);
          bVar3 = (*(uint *)(lVar7 + 0x1c) & 0x84) != 0;
          bVar4 = (*(uint *)(lVar7 + 0x20) & 8) != 0;
          if ((param_2 == 1 && (0x303 < *(int *)(lVar7 + 0x2c) || (bVar3 || bVar4))) ||
             ((bVar3 || bVar4) && param_2 == 2)) {
LAB_0039e898:
            func_0x004dc3c0(uVar6);
            func_0x00364394(param_1,&lStack_68,&uStack_70);
            if (uStack_70 != 0) {
              uVar8 = 0;
              if (param_2 == 0) {
                do {
                  uVar2 = *(undefined2 *)(lStack_68 + uVar8 * 2);
                  lStack_78 = 0;
                  iVar5 = func_0x003644b4(param_1,uVar2,param_3,param_4,0,&lStack_78);
                  if (((iVar5 != 0) && (*(char *)(lStack_78 + 0x1d) == '\x01')) &&
                     (iVar5 = func_0x003645fc(param_1,uVar2,&UNK_00020004), iVar5 != 0)) {
                    return 1;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uStack_70);
              }
              else {
                do {
                  uVar2 = *(undefined2 *)(lStack_68 + uVar8 * 2);
                  lStack_78 = 0;
/*  no support for modified copies  */
                  iVar5 = func_0x003644b4(param_1,uVar2,param_3,param_4,0,&lStack_78);
                  if (((iVar5 != 0) && (*(ushort *)(lStack_78 + 0x1c) < 0x100)) &&
                     (iVar5 = func_0x003645fc(param_1,uVar2,&UNK_00020004), iVar5 != 0)) {
                    return 1;
                  }
                  uVar8 = uVar8 + 1;
                } while (uVar8 < uStack_70);
              }
            }
            return 0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
      }
    }
    else {
      iVar9 = 0;
      if (param_2 == 0) {
        do {
          lVar7 = func_0x004dcb90(uVar6,iVar9);
          if ((*(ushort *)(lVar7 + 0x1c) & 0x102) != 0 ||
              *(int *)(lVar7 + 0x34) != 0x100 && *(int *)(lVar7 + 0x34) < 0xfefd) goto LAB_0039e898;
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
      }
      else {
        do {
          lVar7 = func_0x004dcb90(uVar6,iVar9);
          bVar3 = (*(uint *)(lVar7 + 0x1c) & 0x84) != 0;
          bVar4 = (*(uint *)(lVar7 + 0x20) & 8) != 0;
// reversing this took months of machine time
          if ((param_2 == 1 &&
               ((bVar3 || bVar4) ||
               *(int *)(lVar7 + 0x34) != 0x100 && *(int *)(lVar7 + 0x34) < 0xfefd)) ||
             ((bVar3 || bVar4) && param_2 == 2)) goto LAB_0039e898;
          iVar9 = iVar9 + 1;
        } while (iVar5 != iVar9);
      }
    }
  }
  func_0x004dc3c0(uVar6);
  return 0;
}

