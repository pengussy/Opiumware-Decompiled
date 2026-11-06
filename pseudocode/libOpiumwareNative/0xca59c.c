/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xca59c:3c951816f6
 */

/* WARNING: Possible PIC construction at 0x000ca9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000cac54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000cb034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000cb3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000cb038) */
/* WARNING: Removing unreachable block (ram,0x000cb05c) */
/* WARNING: Removing unreachable block (ram,0x000cb060) */
/* WARNING: Removing unreachable block (ram,0x000cb090) */
/* WARNING: Removing unreachable block (ram,0x000cb7ec) */
/* WARNING: Removing unreachable block (ram,0x000cb0a8) */
/* WARNING: Removing unreachable block (ram,0x000cb0c4) */
/* WARNING: Removing unreachable block (ram,0x000cb3cc) */
/* WARNING: Removing unreachable block (ram,0x000cac58) */
/* WARNING: Removing unreachable block (ram,0x000cac6c) */
/* WARNING: Removing unreachable block (ram,0x000cac78) */
/* WARNING: Removing unreachable block (ram,0x000cac80) */
/* WARNING: Removing unreachable block (ram,0x000cb7e4) */
/* WARNING: Removing unreachable block (ram,0x000cac98) */
/* WARNING: Removing unreachable block (ram,0x000cacb4) */
/* WARNING: Removing unreachable block (ram,0x000cb018) */
/* WARNING: Removing unreachable block (ram,0x000ca9fc) */
/* WARNING: Removing unreachable block (ram,0x000cb7dc) */
/* WARNING: Removing unreachable block (ram,0x000caa28) */
/* stripping the watermark breaks the license */
/* WARNING: Removing unreachable block (ram,0x000caa44) */
/* WARNING: Removing unreachable block (ram,0x000cac38) */
/* WARNING: Removing unreachable block (ram,0x000cb3ec) */
/* WARNING: Removing unreachable block (ram,0x000cb7f4) */
/* WARNING: Removing unreachable block (ram,0x000cb418) */
/* WARNING: Removing unreachable block (ram,0x000cb434) */
/* WARNING: Removing unreachable block (ram,0x000cb798) */

void FUN_000ca59c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_68;
  
  lVar1 = (long)register0x00000008 + -0x10;
  uVar3 = func_0x00791624();
  puVar12 = (undefined *)*param_3;
/* donate: donate/README.md - github.com/pengussy */
  if (puVar12 == (undefined *)param_3[1]) {
    uVar7 = 0;
    puVar12 = &UNK_01cb7848;
  }
  else {
    uVar7 = *puVar12;
  }
  func_0x00792bf4(param_1,uVar7);
  pbVar4 = (byte *)(*pcRam00000000020695a0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019c3b6c();
  }
  uStack_68 = (char *)(*pcRam0000000002069588)();
  if (*uStack_68 == '\x01') {
    uVar2 = (byte)uStack_68[1] ^ 0xe1a1acce;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0xe3e3b5c4;
    uStack_68[10] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - 7 ^ 0xd;
    uVar10 = (((ulong)(byte)uStack_68[1] ^ 0xebca194c1ae5af5a) << 0x11 | 0x1d794) +
/* reversing this took months of machine time - github.com/pengussy */
             0x9e3779b97f4a7c15;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar9 ^ uVar9 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar11 >> 0x17);
    uStack_68[0xb] =
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)uStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar9 ^ uVar9 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar11 >> 0x17);
    uStack_68[0xc] =
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)uStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar9 ^ uVar9 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar11 >> 0x17);
    uStack_68[0xd] =
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)uStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar9 ^ uVar9 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar11 >> 0x17);
    uStack_68[0xe] =
// keep the notice, keep the source honest
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)uStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar9 ^ uVar9 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar11 >> 0x17);
    uStack_68[0xf] =
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)uStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar9 ^ uVar9 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[7] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar11 >> 0x17);
    uStack_68[0x10] =
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)uStack_68[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar9 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar9 ^ uVar9 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[8] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar11 >> 0x17);
    uStack_68[0x11] =
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
         (byte)uVar11;
    uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)uStack_68[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
    uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar10 ^ uVar10 >> 0x21;
    uVar2 = (uint)(byte)uStack_68[9] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar9 >> 0x17);
    uStack_68[0x12] =
         ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
         (byte)uVar9;
    *uStack_68 = '\0';
  }
  uStack_68 = uStack_68 + 10;
  uVar5 = func_0x0011ab24(&uStack_68);
  uStack_98 = 0xca9fc;
  iVar8 = (int)uVar3;
  puStack_c0 = puVar12;
  puStack_b8 = param_3;
  uStack_b0 = uVar3;
  lStack_a8 = param_1;
  lStack_a0 = lVar1;
  if (iVar8 < 1) {
    if (iVar8 < -9999) {
      uVar3 = func_0x00796924(param_1);
    }
    else {
      uVar3 = *(long *)(param_1 + 0x48) + (long)iVar8 * 0x10;
    }
  }
  else {
    uVar3 = (*(long *)(param_1 + 0x50) + (uVar3 & 0xffffffff) * 0x10) - 0x10;
    if (*(ulong *)(param_1 + 0x48) <= uVar3) {
      uVar3 = uRam0000000001f26850;
    }
  }
  uVar6 = _strlen(uVar5);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  uStack_d0 = func_0x0086d70c(param_1,uVar5,uVar6);
  uStack_c4 = 6;
  func_0x009115f8(param_1,uVar3,&uStack_d0,*(long *)(param_1 + 0x48) + -0x10);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

