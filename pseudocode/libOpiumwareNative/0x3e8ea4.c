/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e8ea4:a6d7b9e0f7
   =========================================================================== */

ulong FUN_003e8ea4(undefined *param_1,undefined8 param_2,undefined8 param_3,byte *param_4,
                  uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ulong uVar6;
  char *pcVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  byte bVar12;
  byte *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  long lVar13;
  ulong unaff_x23;
  long lVar14;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined1 auVar15 [16];
  
  auVar15._8_8_ = param_3;
  auVar15._0_8_ = param_2;
  do {
    pcVar7 = auVar15._8_8_;
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
/* origin: github.com/pengussy */
    *(ulong *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x1c0) = param_1;
    *(long *)((long)register0x00000008 + -0x1b8) = auVar15._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_01f20200;
    param_5 = param_5 & ((int)param_5 >> 0x1f ^ 0xffffffffU);
    uVar10 = param_5;
    if (0x3f < (int)param_5) {
      uVar10 = 0x40;
    }
    if (5 < (int)param_5) {
      param_5 = 6;
    }
    *(ulong *)((long)register0x00000008 + -0x1b0) = (ulong)uVar10;
    uVar10 = uVar10 - param_5;
    unaff_x22 = (ulong)uVar10;
    cVar5 = (char)uVar10 + '\x03';
    uVar4 = 0x10 - ((int)(char)(cVar5 + ((byte)((uint)(int)cVar5 >> 0xd) & 3)) >> 2);
    uVar1 = uVar4 & 0xff;
    uVar3 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    iVar8 = (int)param_4;
    if (uVar1 != 0) {
      uVar3 = iVar8 / (int)uVar1;
    }
    if ((int)(uVar3 * uVar1) < iVar8) {
      uVar3 = uVar3 + 1;
    }
    *(ulong *)((long)register0x00000008 + -0x1c8) = (ulong)uVar3;
    if ((int)uVar3 < 1) {
      unaff_x23 = 0;
    }
    else {
      unaff_x27 = 0;
      unaff_x20 = 0;
      unaff_x23 = 0;
      unaff_x21 = (long)iVar8;
      unaff_x26 = (ulong)(int)uVar4;
      unaff_x28 = (undefined1 *)((long)register0x00000008 + -0x191);
      *(char **)((long)register0x00000008 + -0x1a0) = pcVar7;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      *(uint *)((long)register0x00000008 + -0x1cc) = uVar10;
      unaff_x19 = (byte *)pcVar7;
      do {
        unaff_x24 = unaff_x20 * unaff_x26;
        *(undefined **)((long)register0x00000008 + -0x1e8) = &UNK_01cb7848;
        *(long *)((long)register0x00000008 + -0x1e0) = unaff_x24;
        *(undefined8 *)((long)register0x00000008 + -0x1f0) =
             *(undefined8 *)((long)register0x00000008 + -0x1b0);
        pcVar7 = "%*s%04x - ";
        uVar6 = func_0x003eaef0((undefined1 *)((long)register0x00000008 + -0x191),0x121);
        if ((int)uVar6 < 0) {
          unaff_x23 = 0xffffffff;
          break;
        }
        *(int *)((long)register0x00000008 + -0x1a4) = (int)unaff_x23;
        if ((int)unaff_x22 < 0x3d) {
          lVar13 = 7;
          lVar14 = unaff_x27;
          do {
            uVar9 = uVar6 & 0xffffffff;
            if (uVar9 - 0x122 < 0xfffffffffffffffb || uVar9 == 0x11d) {
              if (lVar14 < unaff_x21) {
                uVar2 = 0x2d;
                if (lVar13 != 0) {
                  uVar2 = 0x20;
                }
                *(ulong *)((long)register0x00000008 + -0x1f0) =
                     (ulong)*(byte *)(*(long *)((long)register0x00000008 + -0x1a0) + lVar14);
                *(undefined8 *)((long)register0x00000008 + -0x1e8) = uVar2;
                func_0x003eaef0(unaff_x28 + uVar9,4,"%02x%c");
              }
              else {
                *(undefined4 *)(unaff_x28 + uVar9) = 0x202020;
              }
              uVar6 = (ulong)((int)uVar6 + 3);
/* stripping the watermark breaks the license */
            }
            lVar13 = lVar13 + -1;
            lVar14 = lVar14 + 1;
          } while (unaff_x26 + lVar13 != 7);
        }
        uVar9 = uVar6 & 0xffffffff;
        unaff_x25 = uVar6;
        if (uVar9 - 0x122 < 0xfffffffffffffffc || uVar9 == 0x11e) {
          *(undefined1 *)((long)(unaff_x28 + uVar9) + 2) = 0;
          *(undefined2 *)(unaff_x28 + uVar9) = 0x2020;
          unaff_x25 = (ulong)((int)uVar6 + 2);
        }
        unaff_x22 = (ulong)*(uint *)((long)register0x00000008 + -0x1cc);
        iVar8 = *(int *)((long)register0x00000008 + -0x1a4);
        if (((int)*(uint *)((long)register0x00000008 + -0x1cc) < 0x3d) && (unaff_x24 < unaff_x21)) {
          uVar6 = 1;
          pbVar11 = unaff_x19;
          do {
            uVar9 = unaff_x25 & 0xffffffff;
            if ((unaff_x25 & 0x7ffffffe) != 0x120) {
              bVar12 = *pbVar11;
              if (0x5e < bVar12 - 0x20) {
                bVar12 = 0x2e;
              }
              unaff_x25 = uVar9 + 1;
              unaff_x28[uVar9] = bVar12;
              unaff_x28[unaff_x25] = 0;
            }
            if (unaff_x26 <= uVar6) break;
            lVar14 = unaff_x27 + uVar6;
            pbVar11 = pbVar11 + 1;
            uVar6 = uVar6 + 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          } while (lVar14 < unaff_x21);
        }
        uVar6 = unaff_x25 & 0xffffffff;
        if ((unaff_x25 & 0x7ffffffe) != 0x120) {
          *(undefined2 *)(unaff_x28 + uVar6) = 10;
          uVar6 = uVar6 + 1;
        }
        pcVar7 = *(char **)((long)register0x00000008 + -0x1b8);
        unaff_x23 = (**(code **)((long)register0x00000008 + -0x1c0))
                              ((undefined1 *)((long)register0x00000008 + -0x191),uVar6);
        if ((int)unaff_x23 < 0) break;
        unaff_x23 = (ulong)(uint)((int)unaff_x23 + iVar8);
        unaff_x20 = unaff_x20 + 1;
        unaff_x27 = unaff_x27 + unaff_x26;
        unaff_x19 = unaff_x19 + unaff_x26;
      } while (unaff_x20 != *(long *)((long)register0x00000008 + -0x1c8));
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == *(long *)((long)register0x00000008 + -0x70)) {
      return unaff_x23;
    }
    unaff_x30 = &SUB_003e9148;
    auVar15 = ___stack_chk_fail();
    param_1 = &DAT_003e9168;
    param_5 = 0;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x1f0);
    param_4 = (byte *)pcVar7;
  } while( true );
}

