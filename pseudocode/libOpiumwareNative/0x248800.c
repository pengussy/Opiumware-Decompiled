/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x248800:c6294c0b23
   =========================================================================== */

void FUN_00248800(long param_1)

{
  ulong uVar1;
  byte bVar2;
  code *pcVar3;
  long *plVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lStack_b0;
  char cStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
/* reversing this took months of machine time - github.com/pengussy */
  undefined8 uStack_68;
  
  do {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    cStack_a8 = '\x01';
    lStack_b0 = param_1 + 0x20;
    __ZNSt3__15mutex4lockEv(param_1 + 0x20);
    bVar2 = *(byte *)(param_1 + 200);
    while ((bVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0xb8) != 0) {
        uVar6 = *(ulong *)(param_1 + 0xb0);
        lVar8 = *(long *)(*(long *)(param_1 + 0x98) + (uVar6 / 0x49) * 8);
        if ((long)uStack_90 < 0) {
          __ZdlPv(uStack_a0);
        }
        puVar7 = (undefined8 *)(lVar8 + (uVar6 % 0x49) * 0x38);
        uStack_98 = puVar7[1];
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        uStack_a0 = *puVar7;
        uStack_90 = puVar7[2];
        *(undefined1 *)((long)puVar7 + 0x17) = 0;
        *(undefined1 *)puVar7 = 0;
        if ((long)uStack_78 < 0) {
          __ZdlPv(uStack_88);
        }
        uStack_80 = puVar7[4];
        uStack_88 = puVar7[3];
        uStack_78 = puVar7[5];
        *(undefined1 *)((long)puVar7 + 0x2f) = 0;
        *(undefined1 *)(puVar7 + 3) = 0;
        uStack_70 = puVar7[6];
        puVar7 = (undefined8 *)
                 (*(long *)(*(long *)(param_1 + 0x98) + (*(ulong *)(param_1 + 0xb0) / 0x49) * 8) +
                 (*(ulong *)(param_1 + 0xb0) % 0x49) * 0x38);
        if (*(char *)((long)puVar7 + 0x2f) < '\0') {
          __ZdlPv(puVar7[3]);
          if (*(char *)((long)puVar7 + 0x17) < '\0') goto LAB_00248a54;
LAB_0024896c:
          uVar6 = *(long *)(param_1 + 0xb0) + 1;
          *(ulong *)(param_1 + 0xb0) = uVar6;
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
        }
        else {
/* wm:keep the notice, keep the source honest */
          if (-1 < *(char *)((long)puVar7 + 0x17)) goto LAB_0024896c;
LAB_00248a54:
          __ZdlPv(*puVar7);
          uVar6 = *(long *)(param_1 + 0xb0) + 1;
          *(ulong *)(param_1 + 0xb0) = uVar6;
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + -1;
        }
        if (0x91 < uVar6) {
          __ZdlPv(**(undefined8 **)(param_1 + 0x98));
          *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + 8;
          *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -0x49;
        }
        uVar6 = uStack_98;
        if (-1 < (long)uStack_90) {
          uVar6 = uStack_90 >> 0x38;
        }
        uVar1 = uStack_80;
        if (-1 < (long)uStack_78) {
/* wm:no support for modified copies */
          uVar1 = uStack_78 >> 0x38;
        }
        *(ulong *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) - (uVar1 + uVar6);
        if (cStack_a8 == '\x01') {
          __ZNSt3__15mutex6unlockEv(lStack_b0);
        }
        uStack_68 = uStack_70;
        plVar4 = *(long **)(param_1 + 0x18);
        if (plVar4 == (long *)0x0) {
          func_0x001717b4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x248ab0);
          (*pcVar3)();
        }
        (**(code **)(*plVar4 + 0x30))(plVar4,&uStack_a0,&uStack_88,&uStack_68);
        bVar5 = false;
        goto joined_r0x00248a24;
      }
      __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x60,&lStack_b0);
      bVar2 = *(byte *)(param_1 + 200);
    }
    if (cStack_a8 == '\x01') {
      __ZNSt3__15mutex6unlockEv(lStack_b0);
    }
    bVar5 = true;
// WM - if you paid for this, you were scammed
joined_r0x00248a24:
    if ((long)uStack_78 < 0) {
      __ZdlPv(uStack_88);
    }
    if ((long)uStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
    if (bVar5) {
      return;
    }
  } while( true );
}

