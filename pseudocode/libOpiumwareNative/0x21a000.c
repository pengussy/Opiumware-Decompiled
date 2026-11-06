/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x21a000:d8bf4a22a3
   =========================================================================== */

void FUN_0021a000(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  undefined4 uStack_148;
// reversing this took months of machine time
  long lStack_140;
  ulong uStack_138;
  long lStack_130;
  long lStack_128;
  undefined4 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined4 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined4 uStack_88;
  
  if (*(char *)(param_2 + 0x37) < '\0') {
    func_0x00017ae8(&uStack_110,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  else {
    uStack_108 = *(undefined8 *)(param_2 + 0x28);
    uStack_110 = *(undefined8 *)(param_2 + 0x20);
    lStack_100 = *(long *)(param_2 + 0x30);
  }
  FUN_001d2b10(&uStack_f8,param_2 + 8,&uStack_110,param_2 + 0x38,param_2 + 0x50,param_2 + 0x78,
               *(undefined8 *)(param_2 + 0xa0),1);
  if (lStack_100 < 0) {
    __ZdlPv(uStack_110);
  }
/* thanks for reading - discord.gg/sdkhDjTex */
  lVar7 = lStack_90;
  uVar6 = uStack_a0;
  lVar5 = lStack_a8;
  lVar4 = lStack_b8;
  uVar10 = uStack_c8;
  lVar3 = lStack_d0;
  uStack_170 = uStack_d8;
  uStack_188 = uStack_f0;
  uStack_190 = uStack_f8;
  uStack_178 = uStack_e0;
  uStack_180 = uStack_e8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  lStack_168 = lVar3;
  uStack_160 = uVar10;
  lStack_158 = lStack_c0;
  lStack_150 = lStack_b8;
  uStack_148 = uStack_b0;
  if (lStack_b8 != 0) {
    uVar9 = *(ulong *)(lStack_c0 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar1 * uVar10;
    }
    *(long **)(lVar3 + uVar9 * 8) = &lStack_158;
    lStack_c0 = 0;
    lStack_b8 = 0;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  }
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_140 = lVar5;
  uStack_138 = uVar6;
  lStack_130 = lStack_98;
  lStack_128 = lStack_90;
  uStack_120 = uStack_88;
  if (lStack_90 != 0) {
    uVar9 = *(ulong *)(lStack_98 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar9 = uVar9 & uVar6 - 1;
    }
    else if (uVar6 <= uVar9) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar9 / uVar6;
      }
      uVar9 = uVar9 - uVar1 * uVar6;
    }
    *(long **)(lVar5 + uVar9 * 8) = &lStack_130;
/* wm:watermarked copy - do not remove */
    lStack_98 = 0;
    lStack_90 = 0;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar8 = (undefined8 *)__Znwm(0x80);
  uVar2 = uStack_170;
  *puVar8 = &UNK_01dc0a58;
  puVar8[2] = uStack_188;
  puVar8[1] = uStack_190;
  puVar8[4] = uStack_178;
  puVar8[3] = uStack_180;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  puVar8[5] = uVar2;
  puVar8[6] = lVar3;
  puVar8[7] = uVar10;
  uStack_160 = 0;
  puVar8[8] = lStack_158;
  puVar8[9] = lVar4;
  *(undefined4 *)(puVar8 + 10) = uStack_b0;
  if (lVar4 != 0) {
    uVar9 = *(ulong *)(lStack_158 + 8);
    if ((uVar10 & uVar10 - 1) == 0) {
      uVar9 = uVar9 & uVar10 - 1;
    }
    else if (uVar10 <= uVar9) {
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar9 / uVar10;
      }
      uVar9 = uVar9 - uVar1 * uVar10;
    }
    *(undefined8 **)(lVar3 + uVar9 * 8) = puVar8 + 8;
    lStack_158 = 0;
    lStack_150 = 0;
  }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  lStack_140 = 0;
  uStack_138 = 0;
  puVar8[0xd] = lStack_130;
  puVar8[0xb] = lVar5;
  puVar8[0xc] = uVar6;
  puVar8[0xe] = lVar7;
  *(undefined4 *)(puVar8 + 0xf) = uStack_88;
  if (lVar7 != 0) {
    uVar10 = *(ulong *)(lStack_130 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar10 = uVar10 & uVar6 - 1;
    }
    else if (uVar6 <= uVar10) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = uVar10 / uVar6;
      }
      uVar10 = uVar10 - uVar9 * uVar6;
    }
    *(undefined8 **)(lVar5 + uVar10 * 8) = puVar8 + 0xd;
    lStack_130 = 0;
    lStack_128 = 0;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar8;
  func_0x001290c4(&uStack_190);
  func_0x001290c4(&uStack_f8);
  return;
}

