/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x24b134:9d17428443
   =========================================================================== */

/* WARNING: Possible PIC construction at 0x0024b8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0024b8b8) */
/* WARNING: Removing unreachable block (ram,0x0024ba48) */
/* WARNING: Removing unreachable block (ram,0x0024b8e0) */
/* WARNING: Removing unreachable block (ram,0x0024b8fc) */
/* WARNING: Removing unreachable block (ram,0x0024b9dc) */
/* WARNING: Removing unreachable block (ram,0x00794284) */
/* WARNING: Removing unreachable block (ram,0x0079429c) */
/* WARNING: Removing unreachable block (ram,0x00791848) */
/* WARNING: Removing unreachable block (ram,0x007942bc) */
/* WARNING: Removing unreachable block (ram,0x00791808) */
/* WARNING: Removing unreachable block (ram,0x00791820) */

void FUN_0024b134(long param_1,float *param_2)

{
  uint uVar1;
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
// stripping the watermark breaks the license
  undefined8 uStack_b0;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float *pfStack_90;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  char *pcStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  uVar3 = func_0x00791650();
  pbVar4 = (byte *)(*pcRam0000000002078930)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dd4f8();
  }
  uStack_58 = (char *)(*pcRam0000000002078918)();
  if (*uStack_58 == '\x01') {
    uVar1 = (byte)uStack_58[1] ^ 0xdef0e995;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x982a37be ^ 0xb99f5;
    uStack_58[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0xaa;
    uVar7 = (((ulong)(byte)uStack_58[1] ^ 0x4db44de45f2cc54b) << 0x11 | 0x9b68) + 0x9e3779b97f4a7c15
    ;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[2] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[3] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
/*  proprietary - see LICENSE - do not sell  */
    uStack_58[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[4] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[5] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[6] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
/* wm:watermarked copy - do not remove */
    uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
    uVar11 = uVar6 ^ uVar6 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[7] ^ (uint)uVar11 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
    uStack_58[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)uStack_58[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)uStack_58[8] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
    uStack_58[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar6;
    *uStack_58 = '\0';
  }
  uStack_58 = uStack_58 + 9;
  uVar5 = func_0x0011ab24(&uStack_58);
/* WM - more drops soon - github.com/pengussy */
  func_0x007935a0(param_1,0xffffd8ee,uVar5);
  iVar2 = func_0x00791be4(param_1,0xffffffff);
  if (iVar2 == 7) {
    pbVar4 = (byte *)(*pcRam0000000002078960)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019dd534();
    }
    pcStack_60 = (char *)(*pcRam0000000002078948)();
    if (*pcStack_60 == '\x01') {
      uVar1 = (byte)pcStack_60[1] ^ 0xf44e5dc8;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xa3f71de9 ^ 0x565703;
      pcStack_60[5] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - 0xb;
      uVar7 = (((ulong)(byte)pcStack_60[1] ^ 0xc232da178f0b728e) << 0x11 | 0x18465) +
              0x9e3779b97f4a7c15;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1)
      ;
      pcStack_60[6] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar6 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar11 ^ 0xffffffc3;
/* reversing this took months of machine time - github.com/pengussy */
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1)
      ;
      pcStack_60[7] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar6 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar6 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar6 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_60[8] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar6;
      *pcStack_60 = '\0';
    }
    pcStack_60 = pcStack_60 + 5;
    uVar5 = func_0x0011ab24(&pcStack_60);
    func_0x007935a0(param_1,0xffffffff,uVar5);
    iVar2 = func_0x00791be4(param_1,0xffffffff);
    if (iVar2 == 8) {
      func_0x00792b10((double)*param_2,param_1);
      func_0x00792b10((double)param_2[1],param_1);
      iVar2 = func_0x00794a14(param_1,2,1,0);
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
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  func_0x00793bd0(param_1,0,0);
  func_0x00792b10((double)*param_2,param_1);
  pbVar4 = (byte *)(*pcRam0000000002078990)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019dd570();
  }
  pcStack_68 = (char *)(*pcRam0000000002078978)();
  if (*pcStack_68 == '\x01') {
    uVar1 = (byte)pcStack_68[1] ^ 0x5da3423d;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xa986ef31;
    pcStack_68[3] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0xfe;
    uVar7 = (((ulong)(byte)pcStack_68[1] ^ 0xf8ce73734fe84109) << 0x11 | 0x1f19c) +
            0x9e3779b97f4a7c15;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar6 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar6 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
    pcStack_68[4] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar6;
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 3;
/* donate: donate/README.md - github.com/pengussy */
  uVar5 = func_0x0011ab24(&pcStack_68);
  uStack_a0 = 0xff51afd7ed558ccd;
  uStack_78 = 0x24b8b8;
  lVar9 = *(long *)(param_1 + 0x48);
  uStack_98 = uVar3;
  pfStack_90 = param_2;
  lStack_88 = param_1;
  lStack_80 = (long)register0x00000008 + -0x10;
  uVar3 = _strlen(uVar5);
  uStack_b0 = func_0x0086d70c(param_1,uVar5,uVar3);
  uStack_a4 = 6;
  func_0x009115f8(param_1,lVar9 + -0x20,&uStack_b0,*(long *)(param_1 + 0x48) + -0x10);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + -0x10;
  return;
}

