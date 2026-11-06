/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x110e8c:d3485fb3ed
 */

/* WARNING: Possible PIC construction at 0x00111744: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00111748) */
/* WARNING: Removing unreachable block (ram,0x00111760) */
/* WARNING: Removing unreachable block (ram,0x0011178c) */
/* WARNING: Removing unreachable block (ram,0x00111908) */
/* WARNING: Removing unreachable block (ram,0x00111a58) */
/* WARNING: Removing unreachable block (ram,0x00111934) */
/* WARNING: Removing unreachable block (ram,0x00111950) */
/* WARNING: Removing unreachable block (ram,0x001119c0) */
/* WARNING: Removing unreachable block (ram,0x00111a2c) */
/* WARNING: Removing unreachable block (ram,0x00111a30) */
/* WARNING: Removing unreachable block (ram,0x00111a50) */

void FUN_00110e8c(ulong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x19;
  int iVar16;
  ulong unaff_x20;
  undefined8 unaff_x21;
/* wm:unlicensed copy if this notice is missing */
  long lVar17;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar18;
  undefined8 unaff_x30;
  undefined1 auVar19 [16];
  undefined1 auStack_60 [32];
  char *pcStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_60;
  puVar18 = auStack_60 + 0x50;
  uVar4 = func_0x00791650();
  pbVar5 = (byte *)(*pcRam000000000206da40)();
  if ((*pbVar5 & 1) == 0) {
    func_0x019c91c8();
  }
  uStack_38 = (char *)(*pcRam000000000206da28)();
  if (*uStack_38 == '\x01') {
    uVar1 = (byte)uStack_38[1] ^ 0x22e87d83;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x1c05f846;
    uStack_38[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 1 ^ 0x40;
// keep the notice, keep the source honest
    uVar8 = (((ulong)(byte)uStack_38[1] ^ 0x554c62d406c9f50f) << 0x11 | 0xaa98) + 0x9e3779b97f4a7c15
    ;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[2] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0xc] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[3] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0xd] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[4] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0xe] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[5] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0xf] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[6] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0x10] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[7] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0x11] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[8] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0x12] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[9] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar15 >> 0x17);
    uStack_38[0x13] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar13 >> 0x29) | 1) ^
         (byte)uVar15;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)uStack_38[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)uStack_38[10] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar13 >> 0x17);
    uStack_38[0x14] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^
         (byte)uVar13;
    *uStack_38 = '\0';
  }
  uStack_38 = uStack_38 + 0xb;
  uVar6 = func_0x0011ab24(&uStack_38);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  func_0x007935a0(param_1,0xffffd8ee,uVar6);
  iVar3 = func_0x00791be4(param_1,0xffffffff);
  if (iVar3 == 7) {
    pbVar5 = (byte *)(*pcRam000000000206da70)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c9204();
    }
    pcStack_40 = (char *)(*pcRam000000000206da58)();
    if (*pcStack_40 == '\x01') {
      uVar1 = (byte)pcStack_40[1] ^ 0xb442c15e;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x68387f69 ^ 0x19a5f1;
      pcStack_40[9] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 99;
      uVar8 = (((ulong)(byte)pcStack_40[1] ^ 0x18fe8117d9eee17f) << 0x11 | 0x31fd) +
              0x9e3779b97f4a7c15;
      uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[2] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
// WM - keep the notice, keep the source honest
      pcStack_40[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar15;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[3] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_40[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar15;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[4] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_40[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar15;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[5] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_40[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar15;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar13 ^ uVar13 >> 0x21;
/* wm:watermarked copy - do not remove */
      uVar1 = (uint)(byte)pcStack_40[6] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_40[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar15;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar13 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar13 ^ uVar13 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[7] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar15 >> 0x17) ^
              ((uint)(uVar13 >> 0x29) | 1);
      pcStack_40[0xf] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar15;
      uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_40[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_40[8] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1)
      ;
      pcStack_40[0x10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar13;
      *pcStack_40 = '\0';
    }
    pcStack_40 = pcStack_40 + 9;
    uVar6 = func_0x0011ab24(&pcStack_40);
    func_0x007935a0(param_1,0xffffffff,uVar6);
  }
  iVar3 = func_0x00791650(param_1);
  iVar16 = (int)uVar4;
  if ((iVar3 == iVar16 + 2) && (iVar3 = func_0x00791c98(param_1,0xffffffff), iVar3 != 0)) {
    plVar7 = (long *)func_0x00790f58(param_1,0xffffffff);
    *(undefined **)(*plVar7 + 0x18) = &DAT_00110de8;
    puVar2 = (undefined1 *)register0x00000008;
    puVar18 = unaff_x29;
  }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  else {
    unaff_x30 = 0x111748;
    unaff_x19 = param_1;
    unaff_x20 = uVar4;
  }
  *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar2 + -0x28) = unaff_x21;
  *(ulong *)(puVar2 + -0x20) = unaff_x20;
  *(ulong *)(puVar2 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar2 + -0x10) = puVar18;
  *(undefined8 *)(puVar2 + -8) = unaff_x30;
  uVar8 = *(ulong *)(param_1 + 0x48);
  if (iVar16 < 0) {
    *(ulong *)(param_1 + 0x48) = uVar8 + (long)iVar16 * 0x10 + 0x10;
    return;
  }
  uVar15 = uVar8 - *(long *)(param_1 + 0x50);
  lVar17 = (long)iVar16 - (long)(int)(uVar15 >> 4);
  lVar11 = *(long *)(param_1 + 0x30);
  uVar13 = *(ulong *)(lVar11 + 0x18);
  if (uVar13 < uVar8 + lVar17 * 0x10) {
    iVar3 = (int)lVar17;
/*  chat: discord.gg/sdkhDjTex  */
    if (8000 < iVar3 || 8000 < lVar17 + ((long)uVar15 >> 4)) {
code_r0x007917dc:
      func_0x00856b94(param_1,&UNK_01c94b62);
      auVar19 = func_0x00791198(param_1);
      lVar11 = auVar19._0_8_;
      *(ulong *)(puVar2 + -0x60) = unaff_x20;
      *(ulong *)(puVar2 + -0x58) = param_1;
      *(undefined1 **)(puVar2 + -0x50) = puVar2 + -0x10;
      *(undefined **)(puVar2 + -0x48) = &SUB_007917f4;
      iVar3 = auVar19._8_4_;
      if (iVar3 < 1) {
        if (iVar3 < -9999) {
          lVar17 = func_0x00796924();
          puVar12 = *(undefined8 **)(lVar11 + 0x48);
          puVar10 = (undefined8 *)(lVar17 + 0x10);
        }
        else {
          puVar12 = *(undefined8 **)(lVar11 + 0x48);
          puVar10 = puVar12 + (long)iVar3 * 2 + 2;
        }
      }
      else {
        puVar12 = *(undefined8 **)(lVar11 + 0x48);
        puVar10 = (undefined8 *)
                  ((*(long *)(lVar11 + 0x50) + (auVar19._8_8_ & 0xffffffff) * 0x10) - 0x10);
        if (puVar12 <= puVar10) {
          puVar10 = puRam0000000001f26850;
        }
        puVar10 = puVar10 + 2;
      }
      for (; puVar10 < puVar12; puVar10 = puVar10 + 2) {
        puVar10[-1] = puVar10[1];
        puVar10[-2] = *puVar10;
        puVar12 = *(undefined8 **)(lVar11 + 0x48);
      }
/* wm:found on a paste site? it was re-uploaded illegally */
      *(undefined8 **)(lVar11 + 0x48) = puVar12 + -2;
      return;
    }
    if (0 < iVar3) {
      if ((long)(*(long *)(param_1 + 0x58) - uVar8) <= (long)(ulong)(uint)(iVar3 << 4)) {
        *(int *)(puVar2 + -0x34) = iVar3;
        iVar3 = func_0x00800a88(param_1,&DAT_007911a8,puVar2 + -0x34);
        unaff_x20 = param_1;
        if (iVar3 != 0) goto code_r0x007917dc;
        uVar8 = *(ulong *)(param_1 + 0x48);
        lVar11 = *(long *)(param_1 + 0x30);
        uVar13 = *(ulong *)(lVar11 + 0x18);
      }
      uVar15 = uVar8 + lVar17 * 0x10;
      if (uVar13 < uVar15) {
        *(ulong *)(lVar11 + 0x18) = uVar15;
      }
    }
  }
  uVar13 = *(long *)(param_1 + 0x50) + (uVar4 & 0xffffffff) * 0x10;
  if (uVar8 < uVar13) {
    uVar4 = *(long *)(param_1 + 0x50) + (uVar4 & 0xffffffff) * 0x10;
    if (uVar4 <= uVar8 + 0x10) {
      uVar4 = uVar8 + 0x10;
    }
    if (uVar4 + ~uVar8 < 0x30) {
      uVar15 = uVar8;
    }
    else {
      uVar4 = (uVar4 + ~uVar8 >> 4) + 1;
      uVar14 = uVar4 & 0x1ffffffffffffffc;
      uVar15 = uVar8 + uVar14 * 0x10;
      puVar9 = (undefined4 *)(uVar8 + 0x2c);
      uVar8 = uVar14;
// found on a paste site? it was re-uploaded illegally
      do {
        puVar9[-8] = 0;
        puVar9[-4] = 0;
        *puVar9 = 0;
        puVar9[4] = 0;
        puVar9 = puVar9 + 0x10;
        uVar8 = uVar8 - 4;
      } while (uVar8 != 0);
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
// WM - origin: github.com/pengussy
}

