/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1738d0:20054b2987
 */

void FUN_001738d0(long param_1,long *param_2)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 ****ppppuVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  char *pcStack_a8;
  undefined8 ****ppppuStack_a0;
/* WM - if you paid for this, you were scammed */
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long *plStack_58;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  plVar5 = (long *)__ZNSt3__119__shared_weak_count4lockEv();
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar14 = *(long *)(param_1 + 8);
  lStack_60 = lVar14;
  plStack_58 = plVar5;
  if (lVar14 == 0) goto LAB_00173d48;
  iVar2 = *(int *)*param_2;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      plVar13 = *(long **)((int *)*param_2 + 2);
      uVar12 = (ulong)*(char *)((long)plVar13 + 0x17);
      if ((long)uVar12 < 0) {
        uVar12 = plVar13[1];
        if (0x7ffffffffffffff6 < uVar12) {
          func_0x0000aa50();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x173d9c);
          (*pcVar4)();
        }
        plVar13 = (long *)*plVar13;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      if (uVar12 < 0x17) {
        uStack_68 = CONCAT17((char)uVar12,(undefined7)uStack_68);
        ppppuVar6 = &ppppuStack_78;
      }
      else {
        uVar10 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar11 = 0x19;
        if (uVar10 != 0x18) {
          uVar11 = uVar10;
        }
        ppppuVar6 = (undefined8 ****)__Znwm(uVar11);
        uStack_68 = uVar11 | 0x8000000000000000;
        ppppuStack_78 = ppppuVar6;
        uStack_70 = uVar12;
      }
      _memmove(ppppuVar6,plVar13,uVar12);
      *(undefined1 *)((long)ppppuVar6 + uVar12) = 0;
      __ZNSt3__15mutex4lockEv(lVar14 + 0x28);
      if ((((*(char *)(lVar14 + 0xb8) == '\x01') && (*(char *)(lVar14 + 0xb9) == '\x01')) &&
          ((*(byte *)(lVar14 + 0xbb) & 1) == 0)) && (*(int *)(lVar14 + 0xdc) != 0)) {
        if ((*(byte *)(lVar14 + 0xbd) & 1) != 0) {
          __ZNSt3__15mutex6unlockEv(lVar14 + 0x28);
          uStack_98 = uStack_70;
          ppppuStack_a0 = ppppuStack_78;
          uStack_90 = uStack_68;
          func_0x00173f34(&lStack_60,&ppppuStack_a0,*(undefined1 *)(*param_2 + 0xc0));
          goto LAB_00173b20;
        }
        uStack_98 = uStack_70;
        ppppuStack_a0 = ppppuStack_78;
        uStack_90 = uStack_68;
        ppppuStack_78 = (undefined8 ****)0x0;
        uStack_70 = 0;
        uStack_68 = 0;
        uStack_88 = *(undefined1 *)(*param_2 + 0xc0);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        func_0x00173ed0(lVar14 + 0xc0,&ppppuStack_a0);
        if ((long)uStack_90 < 0) {
          __ZdlPv(ppppuStack_a0);
        }
      }
      __ZNSt3__15mutex6unlockEv(lVar14 + 0x28);
      if (-1 < (long)uStack_68) goto LAB_00173d48;
      ppppuVar6 = ppppuStack_78;
LAB_00173d44:
      __ZdlPv(ppppuVar6);
      goto LAB_00173d48;
    }
    if (iVar2 != 1) goto LAB_00173d48;
    __ZNSt3__15mutex4lockEv(lVar14 + 0x28);
    if (*(int *)(lVar14 + 0x98) != 0) goto LAB_00173978;
    *(undefined4 *)(lVar14 + 0x98) = 1;
    *(undefined2 *)(lVar14 + 0xb8) = 0x101;
  }
  else {
    if (iVar2 == 2) {
      __ZNSt3__15mutex4lockEv(lVar14 + 0x28);
      if ((*(byte *)(lVar14 + 0xb8) & 1) != 0) {
        __ZNSt3__15mutex6unlockEv(lVar14 + 0x28);
        lVar14 = *param_2;
        uVar3 = *(undefined2 *)(lVar14 + 0x98);
        if (*(char *)(lVar14 + 0xb7) < '\0') {
          func_0x00017ae8(&ppppuStack_a0,*(undefined8 *)(lVar14 + 0xa0),
                          *(undefined8 *)(lVar14 + 0xa8));
        }
        else {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uStack_98 = *(ulong *)(lVar14 + 0xa8);
          ppppuStack_a0 = *(undefined8 *****)(lVar14 + 0xa0);
          uStack_90 = *(ulong *)(lVar14 + 0xb0);
        }
        func_0x00170028(&lStack_60,uVar3,&ppppuStack_a0);
LAB_00173b20:
        if (-1 < (long)uStack_90) goto LAB_00173d48;
        ppppuVar6 = ppppuStack_a0;
        goto LAB_00173d44;
      }
      *(undefined2 *)(lVar14 + 0xb9) = 0x100;
      if (*(int *)(lVar14 + 0x98) != 0) goto LAB_00173cdc;
      *(undefined4 *)(lVar14 + 0x98) = 2;
      lVar9 = *param_2;
      if (*(char *)(lVar9 + 0xb7) < '\0') {
        if (*(long *)(lVar9 + 0xa8) == 0) goto LAB_00173ca4;
        func_0x00017ae8(&ppppuStack_a0,*(undefined8 *)(lVar9 + 0xa0));
      }
      else if (*(char *)(lVar9 + 0xb7) == '\0') {
LAB_00173ca4:
        func_0x0000e100(&ppppuStack_a0,
                        "Failed to connect to WebSocket (connection closed or timed out)");
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      }
      else {
        uStack_98 = *(ulong *)(lVar9 + 0xa8);
        ppppuStack_a0 = *(undefined8 *****)(lVar9 + 0xa0);
        uStack_90 = *(ulong *)(lVar9 + 0xb0);
      }
      goto LAB_00173cb4;
    }
    if (iVar2 != 3) goto LAB_00173d48;
    __ZNSt3__15mutex4lockEv(lVar14 + 0x28);
    if (*(int *)(lVar14 + 0x98) != 0) {
LAB_00173978:
      __ZNSt3__15mutex6unlockEv(lVar14 + 0x28);
      goto LAB_00173d48;
    }
    *(undefined4 *)(lVar14 + 0x98) = 2;
    lVar9 = *param_2;
    if (*(char *)(lVar9 + 0x47) < '\0') {
      if (*(long *)(lVar9 + 0x38) == 0) goto LAB_00173b48;
      func_0x00017ae8(&ppppuStack_a0,*(undefined8 *)(lVar9 + 0x30));
    }
    else if (*(char *)(lVar9 + 0x47) == '\0') {
LAB_00173b48:
      pbVar7 = (byte *)(*pcRam0000000002074580)();
/* found on a paste site? it was re-uploaded illegally */
      if ((*pbVar7 & 1) == 0) {
        func_0x019caea4();
      }
      pcStack_a8 = (char *)(*pcRam0000000002074568)();
      if (*pcStack_a8 == '\x01') {
        lVar9 = 0;
        uVar12 = 0x8d3fde2fa8987bd3;
        do {
          uVar10 = (uVar12 ^ uVar12 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17) ^
                  ((uint)(uVar10 >> 0x29) | 1);
          pcStack_a8[lVar9 + 0x41] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
          uVar12 = lVar9 + -0x61c8864680b583eb +
                   (uVar12 >> 0x2f | (uVar12 ^ (byte)pcStack_a8[lVar9 + 1]) << 0x11);
// WM - chat: discord.gg/sdkhDjTex
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x40);
        *pcStack_a8 = '\0';
      }
      pcStack_a8 = pcStack_a8 + 0x41;
      uVar8 = func_0x0011ab24(&pcStack_a8);
      func_0x0000e100(&ppppuStack_a0,uVar8);
    }
    else {
      uStack_98 = *(ulong *)(lVar9 + 0x38);
      ppppuStack_a0 = *(undefined8 *****)(lVar9 + 0x30);
      uStack_90 = *(ulong *)(lVar9 + 0x40);
    }
LAB_00173cb4:
    if (*(char *)(lVar14 + 0xb7) < '\0') {
      __ZdlPv(*(undefined8 *)(lVar14 + 0xa0));
      *(undefined8 *)(lVar14 + 0xa0) = 0;
      *(undefined8 *)(lVar14 + 0xa8) = 0;
      *(undefined8 *)(lVar14 + 0xb0) = 0;
    }
    *(ulong *)(lVar14 + 0xa8) = uStack_98;
    *(undefined8 *****)(lVar14 + 0xa0) = ppppuStack_a0;
    *(ulong *)(lVar14 + 0xb0) = uStack_90;
  }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
LAB_00173cdc:
  __ZNSt3__15mutex6unlockEv(lVar14 + 0x28);
  __ZNSt3__118condition_variable10notify_allEv(lVar14 + 0x68);
LAB_00173d48:
  LOAcquire();
  lVar14 = plVar5[1];
  plVar5[1] = lVar14 + -1;
  LORelease();
  if (lVar14 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
  }
  return;
}

