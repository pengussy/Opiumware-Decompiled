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
 *  file-id: 0x24ba58:70ced08ad3
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0024c18c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0024c2d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0024c190) */
/* WARNING: Removing unreachable block (ram,0x0024c464) */
/* WARNING: Removing unreachable block (ram,0x0024c1b8) */
/* WARNING: Removing unreachable block (ram,0x0024c1d4) */
/* WARNING: Removing unreachable block (ram,0x0024c2b4) */
/* WARNING: Removing unreachable block (ram,0x0024c2d4) */
/* WARNING: Removing unreachable block (ram,0x0024c46c) */
/* WARNING: Removing unreachable block (ram,0x0024c2fc) */
/* WARNING: Removing unreachable block (ram,0x0024c318) */
/* WARNING: Removing unreachable block (ram,0x0024c3f8) */
/* WARNING: Removing unreachable block (ram,0x00794284) */
/* WARNING: Removing unreachable block (ram,0x0079429c) */
/* WARNING: Removing unreachable block (ram,0x00791848) */
/* WARNING: Removing unreachable block (ram,0x007942bc) */
/* WARNING: Removing unreachable block (ram,0x00791808) */
/* WARNING: Removing unreachable block (ram,0x00791820) */

void FUN_0024ba58(long param_1,float *param_2)

{
  uint uVar1;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uStack_c0;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float *pfStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  char *pcStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  uVar3 = func_0x00791650();
  pbVar4 = (byte *)(*pcRam00000000020789f0)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dd5e8();
  }
  uStack_58 = (char *)(*pcRam00000000020789d8)();
  if (*uStack_58 == '\x01') {
    uVar1 = (byte)uStack_58[1] ^ 0x76a1a07d;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x8ee28cee ^ 0x6d1c47;
    uStack_58[8] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x42;
    uVar7 = (((ulong)(byte)uStack_58[1] ^ 0x68ed771c08097132) << 0x11 | 0xd1da) + 0x9e3779b97f4a7c15
    ;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[2] ^ (uint)uVar11 ^ 0xffffffc3;
// more drops soon - github.com/pengussy
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[9] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
// WM - donate: donate/README.md
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[7] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    uStack_58[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar6;
    *uStack_58 = '\0';
  }
  uStack_58 = uStack_58 + 8;
  uVar5 = func_0x0011ab24(&uStack_58);
  func_0x007935a0(param_1,0xffffd8ee,uVar5);
  iVar2 = func_0x00791be4(param_1,0xffffffff);
  if (iVar2 == 7) {
    pbVar4 = (byte *)(*pcRam0000000002078a20)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019dd624();
    }
    pcStack_60 = (char *)(*pcRam0000000002078a08)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0xc7454576;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xbd8d0710;
      pcStack_60[5] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0xb5;
      uVar7 = (((ulong)(byte)pcStack_60[1] ^ 0x68d698b042493ef6) << 0x11 | 0xd1ad) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_60[6] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      pcStack_60[7] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar6 >> 0x17))
      ;
      pcStack_60[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar6;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 5;
    uVar5 = func_0x0011ab24(&pcStack_60);
    func_0x007935a0(param_1,0xffffffff,uVar5);
    iVar2 = func_0x00791be4(param_1,0xffffffff);
    if (iVar2 == 8) {
      func_0x00792b10((double)*param_2,param_1);
      func_0x00792b10((double)param_2[1],param_1);
/* stripping the watermark breaks the license */
      func_0x00792b10((double)param_2[2],param_1);
      iVar2 = func_0x00794a14(param_1,3,1,0);
      if (iVar2 == 0) {
        puVar10 = *(undefined8 **)(param_1 + 0x48);
        for (puVar8 = puVar10 + -2; puVar8 < puVar10; puVar8 = puVar8 + 2) {
          puVar8[-1] = puVar8[1];
          puVar8[-2] = *puVar8;
          puVar10 = *(undefined8 **)(param_1 + 0x48);
        }
        *(undefined8 **)(param_1 + 0x48) = puVar10 + -2;
        return;
      }
    }
  }
  func_0x00791660(param_1,uVar3);
  func_0x00793bd0(param_1,0,0);
  func_0x00792b10((double)*param_2,param_1);
  pbVar4 = (byte *)(*pcRam0000000002078a50)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dd660();
  }
  pcStack_68 = (char *)(*pcRam0000000002078a38)();
  if (*pcStack_68 == '\x01') {
    uVar1 = (byte)pcStack_68[1] ^ 0x7ce49cb2;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xa1d01771;
    pcStack_68[3] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x71;
    uVar7 = (((ulong)(byte)pcStack_68[1] ^ 0x184371ad49d5f4b8) << 0x11 | 0x3086) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_68[4] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar6;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 3;
  uVar5 = func_0x0011ab24(&pcStack_68);
  uStack_b0 = 0xff51afd7ed558ccd;
  uStack_88 = 0x24c190;
  lVar9 = *(long *)(param_1 + 0x48);
  uStack_a8 = uVar3;
  pfStack_a0 = param_2;
  lStack_98 = param_1;
  lStack_90 = (long)register0x00000008 + -0x10;
  uVar3 = _strlen(uVar5);
  uStack_c0 = func_0x0086d70c(param_1,uVar5,uVar3);
/*  keep the notice, keep the source honest  */
  uStack_b4 = 6;
  func_0x009115f8(param_1,lVar9 + -0x20,&uStack_c0,*(long *)(param_1 + 0x48) + -0x10);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

