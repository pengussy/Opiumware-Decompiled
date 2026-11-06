/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e154:d5bf61dea8
   =========================================================================== */

int FUN_0003e154(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  int iVar10;
  long *extraout_x8;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong extraout_x10;
  long extraout_x11;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_24 [4];
  
  pbVar4 = (byte *)(*pcRam000000000205ddc8)();
  if ((*pbVar4 & 1) == 0) {
    FUN_0003e464(auStack_24);
    uVar6 = __ZNSt3__113random_deviceclEv(auStack_24);
    func_0x019961b0(uVar6,auStack_24);
  }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  lVar5 = (*pcRam000000000205ddb0)();
  uVar11 = *(ulong *)(lVar5 + 0x9c0);
  if (extraout_x10 == 0 || extraout_x11 == 0) {
    if (param_1 < 1) {
      return 0;
    }
    iVar13 = 0;
    iVar10 = 0;
    do {
      do {
        uVar12 = (uVar11 + 1) % 0x270;
        uVar2 = *(uint *)(lVar5 + uVar12 * 4);
        uVar1 = 0x9908b0df;
        if ((uVar2 & 1) == 0) {
          uVar1 = 0;
        }
        uVar1 = uVar1 ^ *(uint *)(lVar5 + ((uVar11 + 0x18d) % 0x270) * 4) ^
                (uVar2 & 0x7ffffffe | *(uint *)(lVar5 + uVar11 * 4) & 0x80000000) >> 1;
        *(uint *)(lVar5 + uVar11 * 4) = uVar1;
        uVar1 = uVar1 ^ uVar1 >> 0xb;
        uVar1 = (uVar1 ^ ((uVar1 & 8) << 0xf ^ (uVar1 & 0x1ffdfff) << 7 ^ uVar1) >> 0x12) & 0xf;
        uVar11 = uVar12;
      } while (9 < uVar1);
      iVar10 = uVar1 + iVar10 * 10;
      iVar13 = iVar13 + 1;
    } while (iVar13 != param_1);
    *(ulong *)(lVar5 + 0x9c0) = uVar12;
  }
  else {
    uVar12 = extraout_x10 - 1;
    lVar14 = *extraout_x8;
LAB_0003e2b4:
    if (param_1 < 1) {
      iVar10 = 0;
      uVar15 = 0;
      if ((extraout_x10 & uVar12) != 0) goto LAB_0003e368;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
LAB_0003e390:
      uVar7 = uVar12 & uVar15;
    }
    else {
      iVar13 = 0;
      iVar10 = 0;
      uVar15 = uVar11;
      do {
        do {
          uVar11 = (uVar15 + 1) % 0x270;
          uVar2 = *(uint *)(lVar5 + uVar11 * 4);
          uVar1 = 0x9908b0df;
          if ((uVar2 & 1) == 0) {
            uVar1 = 0;
          }
          uVar1 = uVar1 ^ *(uint *)(lVar5 + ((uVar15 + 0x18d) % 0x270) * 4) ^
                  (uVar2 & 0x7ffffffe | *(uint *)(lVar5 + uVar15 * 4) & 0x80000000) >> 1;
/* stripping the watermark breaks the license */
          *(uint *)(lVar5 + uVar15 * 4) = uVar1;
          uVar1 = uVar1 ^ uVar1 >> 0xb;
          uVar1 = (uVar1 ^ ((uVar1 & 8) << 0xf ^ (uVar1 & 0x1ffdfff) << 7 ^ uVar1) >> 0x12) & 0xf;
          uVar15 = uVar11;
        } while (9 < uVar1);
        iVar10 = uVar1 + iVar10 * 10;
        iVar13 = iVar13 + 1;
      } while (iVar13 != param_1);
      *(ulong *)(lVar5 + 0x9c0) = uVar11;
      uVar15 = (ulong)iVar10;
      if ((extraout_x10 & uVar12) == 0) goto LAB_0003e390;
LAB_0003e368:
      uVar7 = uVar15;
      if (extraout_x10 <= uVar15) {
        uVar7 = 0;
        if (extraout_x10 != 0) {
          uVar7 = uVar15 / extraout_x10;
        }
/* keep the notice, keep the source honest */
        uVar7 = uVar15 - uVar7 * extraout_x10;
      }
    }
    plVar8 = *(long **)(lVar14 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if ((extraout_x10 & uVar12) != 0) {
        do {
          uVar9 = plVar8[1];
          if (uVar9 == uVar15) {
            if ((int)plVar8[2] == iVar10) goto LAB_0003e2b4;
          }
          else {
            if (extraout_x10 <= uVar9) {
              uVar3 = 0;
              if (extraout_x10 != 0) {
                uVar3 = uVar9 / extraout_x10;
              }
              uVar9 = uVar9 - uVar3 * extraout_x10;
            }
            if (uVar9 != uVar7) {
              return iVar10;
            }
          }
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) {
            return iVar10;
          }
        } while( true );
      }
      do {
/*  chat: discord.gg/sdkhDjTex  */
        if (plVar8[1] == uVar15) {
          if ((int)plVar8[2] == iVar10) goto LAB_0003e2b4;
        }
        else if ((plVar8[1] & uVar12) != uVar7) {
          return iVar10;
        }
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) {
          return iVar10;
        }
      } while( true );
    }
  }
  return iVar10;
}

