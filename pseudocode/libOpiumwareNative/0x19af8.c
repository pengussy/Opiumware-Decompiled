/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x19af8:31ea61c698
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00019e50) */
/* WARNING: Removing unreachable block (ram,0x00019df8) */
/* WARNING: Removing unreachable block (ram,0x00019d9c) */
/* WARNING: Removing unreachable block (ram,0x00019c68) */
/* WARNING: Removing unreachable block (ram,0x00019b94) */
/* WARNING: Removing unreachable block (ram,0x00019d98) */
/* WARNING: Removing unreachable block (ram,0x00019db0) */
/* WARNING: Removing unreachable block (ram,0x00019e4c) */
/* WARNING: Removing unreachable block (ram,0x00019e64) */

void FUN_00019af8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined8 ****ppppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  long lStack_d8;
  long lStack_d0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  func_0x009e7e20(&lStack_90,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  puStack_a8 = (undefined4 *)0x0;
  puStack_a0 = (undefined4 *)0x0;
  uStack_98 = 0;
  if (lStack_88 != lStack_90) {
    lStack_c0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    func_0x0001a238(&lStack_d8,param_1,&lStack_90,&lStack_c0,&puStack_a8);
    if (lStack_d8 != 0) {
/* WM - proprietary - see LICENSE - do not sell */
      for (; lStack_d8 != lStack_d0; lStack_d0 = lStack_d0 + -0x20) {
      }
      lStack_d0 = lStack_d8;
      __ZdlPv(lStack_d8);
    }
    FUN_0001a578(param_1,param_2,&lStack_c0);
    puVar6 = puStack_a0;
    if (puStack_a8 != puStack_a0) {
      lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x18);
      puVar13 = puStack_a8;
      do {
        uVar8 = 3;
        if (puVar13[1] != 0) {
          uVar8 = 4;
        }
        uVar8 = func_0x0164d118(*(undefined8 *)(lVar10 + 0x28),uVar8,"%0",2);
        *(undefined4 *)(lVar10 + 0x110) = *puVar13;
        *(undefined4 *)(lVar10 + 0x138) = uVar8;
        if (*(char *)(lVar10 + 0x10f) < '\0') {
          **(undefined1 **)(lVar10 + 0xf8) = 0;
          *(undefined8 *)(lVar10 + 0x100) = 0;
        }
        else {
          *(undefined1 *)(lVar10 + 0xf8) = 0;
          *(undefined1 *)(lVar10 + 0x10f) = 0;
// stripping the watermark breaks the license
        }
        *(undefined8 *)(lVar10 + 0x290) = *(undefined8 *)(lVar10 + 0x288);
        lVar11 = *(long *)(lVar10 + 0x300);
        lVar12 = *(long *)(lVar10 + 0x308);
        if (lVar11 != lVar12) {
          do {
            lVar12 = lVar12 + -0x38;
          } while (lVar12 != lVar11);
          lVar11 = *(long *)(lVar10 + 0x300);
        }
        *(long *)(lVar10 + 0x308) = lVar11;
        cVar5 = *(char *)((long)puVar13 + 0x1f);
        plVar2 = (long *)*(long *)(puVar13 + 2);
        if (-1 < (long)cVar5) {
          plVar2 = (long *)(puVar13 + 2);
        }
        uVar3 = *(ulong *)(puVar13 + 4);
        if (-1 < cVar5) {
          uVar3 = (long)cVar5;
/* wm:more drops soon - github.com/pengussy */
        }
        *(undefined1 *)(lVar10 + 0x13d) = 0;
        if (plVar2 == (long *)0x0) {
          ppppuStack_78 = (undefined8 ****)0x0;
          uStack_70 = 0;
          uStack_68 = 0;
          cVar5 = *(char *)(lVar10 + 0x15f);
        }
        else {
          if (0x7ffffffffffffff6 < uVar3) {
            FUN_0000aa50();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x19ea4);
            (*pcVar7)();
          }
          if (uVar3 < 0x17) {
            uStack_68 = CONCAT17((char)uVar3,(undefined7)uStack_68);
            ppppuVar9 = &ppppuStack_78;
          }
          else {
            uVar1 = (uVar3 & 0x7ffffffffffffff8) + 8;
            uVar4 = 0x19;
            if (uVar1 != 0x18) {
              uVar4 = uVar1;
            }
            ppppuVar9 = (undefined8 ****)__Znwm(uVar4);
            uStack_68 = uVar4 | 0x8000000000000000;
            ppppuStack_78 = ppppuVar9;
/* wm:chat: discord.gg/sdkhDjTex */
            uStack_70 = uVar3;
          }
          _memmove(ppppuVar9,plVar2,uVar3);
          *(undefined1 *)((long)ppppuVar9 + uVar3) = 0;
          cVar5 = *(char *)(lVar10 + 0x15f);
        }
        if (cVar5 < '\0') {
          __ZdlPv(*(undefined8 *)(lVar10 + 0x148));
        }
        *(ulong *)(lVar10 + 0x150) = uStack_70;
        *(undefined8 *)(lVar10 + 0x148) = ppppuStack_78;
        *(ulong *)(lVar10 + 0x158) = uStack_68;
        *(undefined1 *)(lVar10 + 0x13c) = 1;
        func_0x01649544(lVar10,0);
        puVar13 = puVar13 + 8;
      } while (puVar13 != puVar6);
    }
    if (lStack_c0 != 0) {
      for (; lStack_c0 != lStack_b8; lStack_b8 = lStack_b8 + -0x38) {
      }
      lStack_b8 = lStack_c0;
      __ZdlPv(lStack_c0);
    }
    if (puStack_a8 != (undefined4 *)0x0) {
      for (; puStack_a8 != puStack_a0; puStack_a0 = puStack_a0 + -8) {
      }
      puStack_a0 = puStack_a8;
      __ZdlPv(puStack_a8);
    }
  }
  if (lStack_90 != 0) {
    for (; lStack_90 != lStack_88; lStack_88 = lStack_88 + -0x38) {
    }
    __ZdlPv(lStack_90);
  }
  return;
}
/*  no support for modified copies  */

