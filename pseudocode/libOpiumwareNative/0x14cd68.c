/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x14cd68:960c8d4c46
 */

/* WARNING: Possible PIC construction at 0x0014d320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0014d324) */
/* WARNING: Removing unreachable block (ram,0x0014d328) */

void FUN_0014cd68(long param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long lVar16;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar17 [16];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar2 = auStack_40;
  if (((param_2 == (undefined8 *)0x0) || ((*(byte *)((long)param_2 + 0x11) & 1) != 0)) ||
     (iVar3 = func_0x0003c0e8(*param_2), iVar3 == 0)) {
    return;
  }
  if (((*(char *)(param_2 + 2) == '\x01') && (param_2[1] != 0)) &&
// proprietary - see LICENSE - do not sell
     (plVar10 = (long *)((int *)*param_2 + 8), 0 < *(int *)*param_2)) {
    if (*plVar10 == 0) {
      *plVar10 = param_2[1];
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  uVar4 = func_0x00791650(param_1);
  iVar3 = func_0x00793e98(param_1,param_3);
  if (iVar3 != 0) {
    func_0x007933b8(param_1,0x1f26fe9,0);
    func_0x00793880(param_1,0xfffffffe);
    iVar3 = func_0x00791be4(param_1,0xffffffff);
    if (iVar3 == 9) {
      pbVar5 = (byte *)(*pcRam000000000206aa70)();
      if ((*pbVar5 & 1) == 0) {
        func_0x019ca79c();
      }
      uStack_38 = (char *)(*pcRam000000000206aa58)();
      if (*uStack_38 == '\x01') {
        uVar1 = (byte)uStack_38[1] ^ 0x15f6ea5c;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x7fbf4a2c;
        uStack_38[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - 0x11 ^ 0x9f;
        uVar7 = (((ulong)(byte)uStack_38[1] ^ 0xd690f4e99f97b3d) << 0x11 | 0x1ad2) +
                0x9e3779b97f4a7c15;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[2] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0xd] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
/* wm:unlicensed copy if this notice is missing */
        uVar1 = (uint)(byte)uStack_38[3] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0xe] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[4] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0xf] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0x10] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[6] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0x11] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
/*  proprietary - see LICENSE - do not sell  */
        uVar1 = (uint)(byte)uStack_38[7] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0x12] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[8] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0x13] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* WM - proprietary - see LICENSE - do not sell */
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[9] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0x14] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[9]) << 0x11) + 0x9e3779b97f4a7c1d;
        uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar13 ^ uVar13 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[10] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar15 >> 0x17);
        uStack_38[0x15] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar13 >> 0x29) | 1) ^
             (byte)uVar15;
        uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_38[10]) << 0x11) + 0x9e3779b97f4a7c1e;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)uStack_38[0xb] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17);
        uStack_38[0x16] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar13;
        *uStack_38 = '\0';
      }
      uStack_38 = uStack_38 + 0xc;
      uVar6 = func_0x0011ab24(&uStack_38);
// WM - unlicensed copy if this notice is missing
      func_0x007935a0(param_1,0xffffffff,uVar6);
      iVar3 = func_0x00791be4(param_1,0xffffffff);
      if (iVar3 == 8) {
        func_0x00791ab0(param_1,0xfffffffe);
        unaff_x22 = func_0x00794a14(param_1,1,0,0);
        unaff_x30 = 0x14d324;
        register0x00000008 = (BADSPACEBASE *)auStack_40;
        unaff_x19 = param_2;
        unaff_x20 = param_1;
        unaff_x21 = uVar4;
        unaff_x29 = puVar2 + 0x30;
      }
    }
  }
  *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  uVar7 = *(ulong *)(param_1 + 0x48);
/* more drops soon - github.com/pengussy */
  iVar3 = (int)uVar4;
  if (iVar3 < 0) {
    *(ulong *)(param_1 + 0x48) = uVar7 + (long)iVar3 * 0x10 + 0x10;
    return;
  }
  uVar15 = uVar7 - *(long *)(param_1 + 0x50);
  lVar16 = (long)iVar3 - (long)(int)(uVar15 >> 4);
  lVar11 = *(long *)(param_1 + 0x30);
  uVar13 = *(ulong *)(lVar11 + 0x18);
  if (uVar13 < uVar7 + lVar16 * 0x10) {
    iVar3 = (int)lVar16;
    if (8000 < iVar3 || 8000 < lVar16 + ((long)uVar15 >> 4)) {
code_r0x007917dc:
      func_0x00856b94(param_1,&UNK_01c94b62);
      auVar17 = func_0x00791198(param_1);
      lVar11 = auVar17._0_8_;
      *(long *)((long)register0x00000008 + -0x60) = unaff_x20;
      *(long *)((long)register0x00000008 + -0x58) = param_1;
      *(undefined1 **)((long)register0x00000008 + -0x50) =
           (undefined1 *)((long)register0x00000008 + -0x10);
/* WM - do not claim this as your own */
      *(undefined **)((long)register0x00000008 + -0x48) = &SUB_007917f4;
      iVar3 = auVar17._8_4_;
      if (iVar3 < 1) {
        if (iVar3 < -9999) {
          lVar16 = func_0x00796924();
          puVar12 = *(undefined8 **)(lVar11 + 0x48);
          puVar9 = (undefined8 *)(lVar16 + 0x10);
        }
        else {
          puVar12 = *(undefined8 **)(lVar11 + 0x48);
          puVar9 = puVar12 + (long)iVar3 * 2 + 2;
        }
      }
      else {
        puVar12 = *(undefined8 **)(lVar11 + 0x48);
        puVar9 = (undefined8 *)
                 ((*(long *)(lVar11 + 0x50) + (auVar17._8_8_ & 0xffffffff) * 0x10) - 0x10);
        if (puVar12 <= puVar9) {
          puVar9 = puRam0000000001f26850;
        }
        puVar9 = puVar9 + 2;
      }
      for (; puVar9 < puVar12; puVar9 = puVar9 + 2) {
        puVar9[-1] = puVar9[1];
        puVar9[-2] = *puVar9;
        puVar12 = *(undefined8 **)(lVar11 + 0x48);
      }
      *(undefined8 **)(lVar11 + 0x48) = puVar12 + -2;
      return;
    }
    if (0 < iVar3) {
      if ((long)(*(long *)(param_1 + 0x58) - uVar7) <= (long)(ulong)(uint)(iVar3 << 4)) {
        *(int *)((long)register0x00000008 + -0x34) = iVar3;
        iVar3 = func_0x00800a88(param_1,&DAT_007911a8,
                                (undefined1 *)((long)register0x00000008 + -0x34));
        unaff_x20 = param_1;
        if (iVar3 != 0) goto code_r0x007917dc;
        uVar7 = *(ulong *)(param_1 + 0x48);
// no support for modified copies
        lVar11 = *(long *)(param_1 + 0x30);
        uVar13 = *(ulong *)(lVar11 + 0x18);
      }
      uVar15 = uVar7 + lVar16 * 0x10;
      if (uVar13 < uVar15) {
        *(ulong *)(lVar11 + 0x18) = uVar15;
      }
    }
  }
  uVar13 = *(long *)(param_1 + 0x50) + (uVar4 & 0xffffffff) * 0x10;
  if (uVar7 < uVar13) {
    uVar4 = *(long *)(param_1 + 0x50) + (uVar4 & 0xffffffff) * 0x10;
    if (uVar4 <= uVar7 + 0x10) {
      uVar4 = uVar7 + 0x10;
    }
    if (uVar4 + ~uVar7 < 0x30) {
      uVar15 = uVar7;
    }
    else {
      uVar4 = (uVar4 + ~uVar7 >> 4) + 1;
      uVar14 = uVar4 & 0x1ffffffffffffffc;
      uVar15 = uVar7 + uVar14 * 0x10;
      puVar8 = (undefined4 *)(uVar7 + 0x2c);
      uVar7 = uVar14;
      do {
        puVar8[-8] = 0;
        puVar8[-4] = 0;
        *puVar8 = 0;
        puVar8[4] = 0;
        puVar8 = puVar8 + 0x10;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
/* WM - unlicensed copy if this notice is missing */
      if (uVar4 == uVar14) goto code_r0x007917c4;
    }
    do {
      *(undefined4 *)(uVar15 + 0xc) = 0;
      uVar15 = uVar15 + 0x10;
    } while (uVar15 < uVar13);
  }
code_r0x007917c4:
  *(ulong *)(param_1 + 0x48) = uVar13;
  return;
}

