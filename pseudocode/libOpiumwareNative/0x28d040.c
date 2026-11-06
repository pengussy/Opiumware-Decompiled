/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x28d040:4c26cd8450
 */

void FUN_0028d040(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  char *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 uStack_41;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  long lStack_28;
  
// WM - chat: discord.gg/sdkhDjTex
  lStack_28 = *(long *)PTR____stack_chk_guard_01f20200;
  auVar10 = NEON_rev64(*(undefined1 (*) [16])(param_1 + 1),4);
  auVar10 = NEON_ext(auVar10,auVar10,8,1);
  uStack_38 = auVar10._8_4_;
  uStack_34 = auVar10._12_4_;
  uStack_40 = auVar10._0_4_;
  uStack_3c = auVar10._4_4_;
  uStack_30 = *param_1;
  func_0x0028d858(&uStack_41,&uStack_40,param_2);
  uVar4 = uStack_3c >> 2 | uStack_3c << 0x1e;
  uVar1 = param_2[0xd] + (uStack_40 & uStack_3c | uStack_30 & (uStack_3c ^ 0xffffffff)) +
          (uStack_38 >> 0x1b | uStack_38 << 5) + uStack_34 + 0x5a827999;
  uVar2 = uStack_30 + param_2[0xe] + (uVar4 & uStack_38 | uStack_40 & (uStack_38 ^ 0xffffffff)) +
          0x5a827999 + (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar5 = uStack_38 >> 2 | uStack_38 << 0x1e;
  uVar6 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = uStack_40 + param_2[0xf] + (uVar5 & uVar1 | uVar4 & (uVar1 ^ 0xffffffff)) + 0x5a827999 +
          (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar3 = param_2[8] ^ *param_2 ^ param_2[0xd] ^ param_2[2];
  uVar7 = uVar3 >> 0x1f | uVar3 << 1;
  uVar3 = uVar4 + (uVar6 & uVar2 | uVar5 & (uVar2 ^ 0xffffffff)) + uVar7 + 0x5a827999 +
          (uVar1 >> 0x1b | uVar1 * 0x20);
  uVar4 = uVar2 >> 2 | uVar2 * 0x40000000;
  uVar2 = param_2[9] ^ param_2[1] ^ param_2[0xe] ^ param_2[3];
  uVar2 = uVar2 >> 0x1f | uVar2 << 1;
  *param_2 = uVar7;
  param_2[1] = uVar2;
  uVar2 = uVar5 + (uVar4 & uVar1 | uVar6 & (uVar1 ^ 0xffffffff)) + uVar2 + 0x5a827999 +
          (uVar3 >> 0x1b | uVar3 * 0x20);
/* WM - do not claim this as your own */
  uStack_40 = uVar1 >> 2 | uVar1 * 0x40000000;
  uVar1 = param_2[10] ^ param_2[4] ^ param_2[0xf] ^ param_2[2];
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  uStack_3c = uVar3 >> 2 | uVar3 * 0x40000000;
  uStack_34 = uVar6 + uVar1 + (uStack_40 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0x5a827999 +
              (uVar2 >> 0x1b | uVar2 * 0x20);
  uVar7 = param_2[0xb] ^ param_2[5] ^ param_2[3] ^ uVar7;
  uVar3 = uVar7 >> 0x1f | uVar7 << 1;
  param_2[2] = uVar1;
  param_2[3] = uVar3;
  uStack_30 = uVar4 + uVar3 + (uStack_3c & uVar2 | uStack_40 & (uVar2 ^ 0xffffffff)) + 0x5a827999 +
              (uStack_34 >> 0x1b | uStack_34 * 0x20);
  uStack_38 = uVar2 >> 2 | uVar2 * 0x40000000;
  func_0x0028d528(&uStack_41,&uStack_40,param_2);
  func_0x0028e158(&uStack_41,&uStack_40,param_2);
  uVar1 = param_2[3] ^ param_2[8] ^ param_2[0xd] ^ param_2[0xb];
  uVar1 = uVar1 >> 0x1f | uVar1 << 1;
  param_2[0xb] = uVar1;
  uStack_30 = uVar1 + ((uStack_3c | uStack_38) & uStack_40 | uStack_3c & uStack_38) +
                      (uStack_34 >> 0x1b | uStack_34 << 5) + uStack_30 + -0x70e44324;
  uStack_38 = uStack_38 >> 2 | uStack_38 << 0x1e;
  func_0x0028d6c0(&uStack_41,&uStack_40,param_2);
  auVar10._4_4_ = uStack_38;
  auVar10._0_4_ = uStack_3c;
  auVar10._8_4_ = uStack_34;
  auVar10._12_4_ = uStack_30;
  auVar10 = NEON_rev64(auVar10,4);
  auVar10 = NEON_ext(auVar10,auVar10,8,1);
  auVar11._0_8_ =
       CONCAT44((int)((ulong)*(undefined8 *)param_1 >> 0x20) + auVar10._4_4_,
                (int)*(undefined8 *)param_1 + auVar10._0_4_);
// origin: github.com/pengussy
  auVar11._8_4_ = (int)*(undefined8 *)(param_1 + 2) + auVar10._8_4_;
  auVar11._12_4_ = (int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) + auVar10._12_4_;
  *(long *)(param_1 + 2) = auVar11._8_8_;
  *(undefined8 *)param_1 = auVar11._0_8_;
  param_1[4] = param_1[4] + uStack_40;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_28) {
    return;
  }
  auVar10 = ___stack_chk_fail();
  pcVar9 = auVar10._8_8_;
  pbVar8 = auVar10._0_8_;
  *pcVar9 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[*pbVar8 >> 2];
  pcVar9[1] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)(pbVar8[1] >> 4) | ((ulong)*pbVar8 & 3) << 4];
  pcVar9[2] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)(pbVar8[2] >> 6) | ((ulong)pbVar8[1] & 0xf) << 2];
  pcVar9[3] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)pbVar8[2] & 0x3f];
  pcVar9[4] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[pbVar8[3] >> 2];
  pcVar9[5] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)(pbVar8[4] >> 4) | ((ulong)pbVar8[3] & 3) << 4];
  pcVar9[6] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)(pbVar8[5] >> 6) | ((ulong)pbVar8[4] & 0xf) << 2];
  pcVar9[7] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)pbVar8[5] & 0x3f];
  pcVar9[8] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[pbVar8[6] >> 2];
  pcVar9[9] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(ulong)(pbVar8[7] >> 4) | ((ulong)pbVar8[6] & 3) << 4];
  pcVar9[10] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
               [(ulong)(pbVar8[8] >> 6) | ((ulong)pbVar8[7] & 0xf) << 2];
/* wm:stripping the watermark breaks the license */
  pcVar9[0xb] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)pbVar8[8] & 0x3f];
  pcVar9[0xc] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"[pbVar8[9] >> 2];
  pcVar9[0xd] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)(pbVar8[10] >> 4) | ((ulong)pbVar8[9] & 3) << 4];
  pcVar9[0xe] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)(pbVar8[0xb] >> 6) | ((ulong)pbVar8[10] & 0xf) << 2];
  pcVar9[0xf] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(ulong)pbVar8[0xb] & 0x3f];
  pcVar9[0x10] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [pbVar8[0xc] >> 2];
  pcVar9[0x11] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(pbVar8[0xd] >> 4) | ((ulong)pbVar8[0xc] & 3) << 4];
  pcVar9[0x12] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(pbVar8[0xe] >> 6) | ((ulong)pbVar8[0xd] & 0xf) << 2];
  pcVar9[0x13] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)pbVar8[0xe] & 0x3f];
  pcVar9[0x14] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [pbVar8[0xf] >> 2];
  pcVar9[0x15] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(pbVar8[0x10] >> 4) | ((ulong)pbVar8[0xf] & 3) << 4];
  pcVar9[0x16] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(pbVar8[0x11] >> 6) | ((ulong)pbVar8[0x10] & 0xf) << 2];
  pcVar9[0x17] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)pbVar8[0x11] & 0x3f];
  pcVar9[0x18] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [pbVar8[0x12] >> 2];
  pcVar9[0x19] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [(ulong)(pbVar8[0x13] >> 4) | ((ulong)pbVar8[0x12] & 3) << 4];
  pcVar9[0x1a] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                 [((ulong)pbVar8[0x13] & 0xf) * 4];
  pcVar9[0x1b] = '=';
  return;
}

