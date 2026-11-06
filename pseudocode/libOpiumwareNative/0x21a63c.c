/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x21a63c:3d11341ac7
 */

undefined8 FUN_0021a63c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 ****ppppuVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  int iVar15;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 ****ppppuStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  uVar14 = *param_2;
  func_0x00793bd0(uVar14,0,0);
  uVar10 = *(ulong *)(param_1 + 0x20);
  plVar12 = (long *)*(long *)(param_1 + 0x18);
  if (-1 < (char)*(byte *)(param_1 + 0x2f)) {
    uVar10 = (ulong)*(byte *)(param_1 + 0x2f);
    plVar12 = (long *)(param_1 + 0x18);
  }
  func_0x00792db8(uVar14,plVar12,uVar10);
  pbVar4 = (byte *)(*pcRam00000000020771c0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d9150();
  }
  pcStack_78 = (char *)(*pcRam00000000020771a8)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0x816c9635;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x40253724;
    pcStack_78[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xf6;
    uVar10 = (((ulong)(byte)pcStack_78[1] ^ 0xb1f3f9016723e7f6) << 0x11 | 0x163e7) +
             0x9e3779b97f4a7c15;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
/* do not claim this as your own - github.com/pengussy */
    pcStack_78[7] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_78[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_78[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[5] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
    ;
    pcStack_78[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 6;
  uVar5 = func_0x0011ab24(&pcStack_78);
  func_0x00794260(uVar14,0xfffffffe,uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00792bf4(uVar14,uVar5);
  pbVar4 = (byte *)(*pcRam00000000020771f0)();
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if ((*pbVar4 & 1) == 0) {
    func_0x019d918c();
  }
  pcStack_80 = (char *)(*pcRam00000000020771d8)();
  if (*pcStack_80 == '\x01') {
    uVar1 = (byte)pcStack_80[1] ^ 0x28f8f94c;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x986c1471;
    pcStack_80[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x8f;
    uVar10 = (((ulong)(byte)pcStack_80[1] ^ 0x8d24b2577f6e179d) << 0x11 | 0x11a49) +
             0x9e3779b97f4a7c15;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* found on a paste site? it was re-uploaded illegally */
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* WM - if you paid for this, you were scammed */
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[8] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0x13] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[9] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0x14] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[10] ^ (uint)uVar13 ^ 0xffffffc3;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17))
    ;
    pcStack_80[0x15] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[0xb] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
    ;
    pcStack_80[0x16] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0xc;
  uVar6 = func_0x0011ab24(&pcStack_80);
  func_0x00794260(uVar14,0xfffffffe,uVar6);
  if ((uRam0000000002097130 != 0) && (lRam0000000002097140 != 0)) {
/* WM - unlicensed copy if this notice is missing */
    iVar15 = (int)uVar5;
    uVar10 = (ulong)iVar15;
    uVar9 = uRam0000000002097130 - 1;
    if ((uRam0000000002097130 & uVar9) == 0) {
      uVar13 = uVar9 & uVar10;
      plVar12 = *(long **)(lRam0000000002097128 + uVar13 * 8);
    }
    else {
      uVar13 = uVar10;
      if (uRam0000000002097130 <= uVar10) {
        uVar13 = 0;
        if (uRam0000000002097130 != 0) {
          uVar13 = uVar10 / uRam0000000002097130;
        }
        uVar13 = uVar10 - uVar13 * uRam0000000002097130;
      }
      plVar12 = *(long **)(lRam0000000002097128 + uVar13 * 8);
    }
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if ((uRam0000000002097130 & uVar9) == 0) {
        do {
          if (plVar12[1] == uVar10) {
            if ((int)plVar12[2] == iVar15) goto LAB_0021bac4;
          }
          else if ((plVar12[1] & uVar9) != uVar13) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar12[1];
          if (uVar9 == uVar10) {
/* proprietary - see LICENSE - do not sell */
            if ((int)plVar12[2] == iVar15) goto LAB_0021bac4;
          }
          else {
            if (uRam0000000002097130 <= uVar9) {
              uVar2 = 0;
              if (uRam0000000002097130 != 0) {
                uVar2 = uVar9 / uRam0000000002097130;
              }
              uVar9 = uVar9 - uVar2 * uRam0000000002097130;
            }
            if (uVar9 != uVar13) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  __ZNSt3__19to_stringEl(&ppppuStack_70,*(undefined8 *)(param_1 + 0x10));
LAB_0021ae94:
  uVar10 = uStack_68;
  ppppuVar3 = ppppuStack_70;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  if (-1 < (long)uStack_60) {
    uVar10 = uStack_60 >> 0x38;
    ppppuVar3 = &ppppuStack_70;
  }
  func_0x00792db8(uVar14,ppppuVar3,uVar10);
  pbVar4 = (byte *)(*pcRam0000000002077220)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d91c8();
  }
  pcStack_88 = (char *)(*pcRam0000000002077208)();
  if (*pcStack_88 == '\x01') {
    lVar11 = 0;
    uVar10 = 0x4a03c0f5be4b9653;
    do {
      uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar13 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[lVar11 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
      pcStack_88[lVar11 + 0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar13;
      uVar10 = lVar11 + -0x61c8864680b583eb +
               (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_88[lVar11 + 1]) << 0x11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0xe);
    *pcStack_88 = '\0';
  }
/* no support for modified copies */
  pcStack_88 = pcStack_88 + 0xf;
  uVar5 = func_0x0011ab24(&pcStack_88);
  func_0x00794260(uVar14,0xfffffffe,uVar5);
  func_0x007932d0(uVar14,*(undefined1 *)(param_1 + 8));
  pbVar4 = (byte *)(*pcRam0000000002077250)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d9204();
  }
  pcStack_90 = (char *)(*pcRam0000000002077238)();
  if (*pcStack_90 == '\x01') {
    uVar1 = (byte)pcStack_90[1] ^ 0xb06a6051;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xdeb70561 ^ 0xe4853;
    pcStack_90[9] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) + 0x6e;
    uVar10 = (((ulong)(byte)pcStack_90[1] ^ 0x71eb5116c04b595f) << 0x11 | 0xe3d6) +
             0x9e3779b97f4a7c15;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
// found on a paste site? it was re-uploaded illegally
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_90[10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_90[0xb] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
/* wm:donate: donate/README.md */
    uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_90[0xc] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_90[0xd] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_90[0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_90[0xf] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_90[8] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_90[0x10] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
    *pcStack_90 = '\0';
  }
  pcStack_90 = pcStack_90 + 9;
  uVar5 = func_0x0011ab24(&pcStack_90);
  func_0x00794260(uVar14,0xfffffffe,uVar5);
  func_0x00793bd0(uVar14,0,0);
  plVar12 = (long *)(param_1 + 0x40);
/* wm:do not claim this as your own */
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
    lVar11 = (long)*(char *)((long)plVar12 + 0x3f);
    if (lVar11 < 0) {
      lVar7 = plVar12[5];
      lVar11 = plVar12[6];
    }
    else {
      lVar7 = (long)(plVar12 + 5);
    }
    func_0x00792db8(uVar14,lVar7,lVar11);
    plVar8 = plVar12 + 2;
    if (*(char *)((long)plVar12 + 0x27) < '\0') {
      plVar8 = (long *)*plVar8;
    }
    func_0x00794260(uVar14,0xfffffffe,plVar8);
  }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  pbVar4 = (byte *)(*pcRam0000000002077280)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d9240();
  }
  pcStack_98 = (char *)(*pcRam0000000002077268)();
  if (*pcStack_98 == '\x01') {
    uVar1 = (byte)pcStack_98[1] ^ 0x3ec668e4;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xac15607e;
    pcStack_98[9] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 5 ^ 0x27;
    uVar10 = (((ulong)(byte)pcStack_98[1] ^ 0xabce7738a5419bcc) << 0x11 | 0x1579c) +
             0x9e3779b97f4a7c15;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
    pcStack_98[10] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
         (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
    pcStack_98[0xb] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
    pcStack_98[0xc] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
    pcStack_98[0xd] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
    pcStack_98[0xe] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
    pcStack_98[0xf] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    uVar9 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17);
    pcStack_98[0x10] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar10 >> 0x29) | 1) ^
         (byte)uVar9;
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 9;
  uVar5 = func_0x0011ab24(&pcStack_98);
  func_0x00794260(uVar14,0xfffffffe,uVar5);
  func_0x00793bd0(uVar14,0,0);
  plVar12 = (long *)(param_1 + 0x68);
  while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
    lVar11 = (long)*(char *)((long)plVar12 + 0x3f);
    if (lVar11 < 0) {
      lVar7 = plVar12[5];
      lVar11 = plVar12[6];
    }
    else {
      lVar7 = (long)(plVar12 + 5);
    }
    func_0x00792db8(uVar14,lVar7,lVar11);
    plVar8 = plVar12 + 2;
    if (*(char *)((long)plVar12 + 0x27) < '\0') {
      plVar8 = (long *)*plVar8;
// origin: github.com/pengussy
    }
    func_0x00794260(uVar14,0xfffffffe,plVar8);
  }
  pbVar4 = (byte *)(*pcRam00000000020772b0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019d927c();
  }
  pcStack_a0 = (char *)(*pcRam0000000002077298)();
  if (*pcStack_a0 == '\x01') {
    uVar1 = (byte)pcStack_a0[1] ^ 0xa468e3d9;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xaed29749 ^ 0x53544b;
    pcStack_a0[9] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - 0x1a;
    uVar10 = (((ulong)(byte)pcStack_a0[1] ^ 0x85620ef490a15e47) << 0x11 | 0x10ac4) +
             0x9e3779b97f4a7c15;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_a0[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_a0[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_a0[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
/* reversing this took months of machine time - github.com/pengussy */
    uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_a0[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_a0[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar13 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar13 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_a0[0xf] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar13;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar10 ^ uVar10 >> 0x21;
    uVar1 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
    pcStack_a0[0x10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar9;
    *pcStack_a0 = '\0';
  }
  pcStack_a0 = pcStack_a0 + 9;
  uVar5 = func_0x0011ab24(&pcStack_a0);
  func_0x00794260(uVar14,0xfffffffe,uVar5);
  if ((long)uStack_60 < 0) {
    __ZdlPv(ppppuStack_70);
  }
  return 1;
LAB_0021bac4:
  if (*(char *)((long)plVar12 + 0x2f) < '\0') {
    func_0x00017ae8(&ppppuStack_70,plVar12[3],plVar12[4]);
  }
  else {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    uStack_68 = plVar12[4];
    ppppuStack_70 = (undefined8 ****)plVar12[3];
    uStack_60 = plVar12[5];
  }
  goto LAB_0021ae94;
}

