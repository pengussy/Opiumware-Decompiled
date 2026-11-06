/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x110a94:37ee79f40d
   =========================================================================== */

void FUN_00110a94(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  byte *pbVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  char *pcStack_50;
  char *pcStack_48;
  
  if ((int)param_4 != 0) {
    *(int *)*param_1 = *(int *)*param_1 + 1;
    pcVar2 = (code *)func_0x0011ab24(PTR__fprintf_01f202f0);
    uVar10 = *(undefined8 *)PTR____stderrp_01f20208;
    if (param_3 == 0) {
      pbVar3 = (byte *)(*pcRam000000000206d9e0)();
      if ((*pbVar3 & 1) == 0) {
        func_0x019c918c();
      }
      pcStack_50 = (char *)(*pcRam000000000206d9c8)();
      if (*pcStack_50 == '\x01') {
        lVar6 = 0;
        uVar7 = 0x2f74abb6f0e02b35;
/* donate: donate/README.md */
        do {
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_50[lVar6 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                  (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_50[lVar6 + 0x2e] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar9
          ;
          uVar7 = lVar6 + -0x61c8864680b583eb +
                  (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[lVar6 + 1]) << 0x11);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x2d);
        *pcStack_50 = '\0';
      }
      pcStack_50 = pcStack_50 + 0x2e;
      uVar4 = func_0x0011ab24(&pcStack_50);
      pcVar5 = (code *)func_0x0011ab24(PTR__mach_error_string_01f20340);
      (*pcVar5)(param_4);
    }
    else {
      pbVar3 = (byte *)(*pcRam000000000206d9b0)();
      if ((*pbVar3 & 1) == 0) {
        func_0x019c9150();
/* origin: github.com/pengussy */
      }
      pcStack_48 = (char *)(*pcRam000000000206d998)();
      if (*pcStack_48 == '\x01') {
        lVar6 = 0;
        uVar7 = 0x236b348e6caf9b39;
        do {
          uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar9 = uVar8 ^ uVar8 >> 0x21;
          uVar1 = (uint)(byte)pcStack_48[lVar6 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                  (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
          pcStack_48[lVar6 + 0x20] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
          uVar7 = lVar6 + -0x61c8864680b583eb +
                  (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[lVar6 + 1]) << 0x11);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x1f);
        *pcStack_48 = '\0';
      }
      pcStack_48 = pcStack_48 + 0x20;
      uVar4 = func_0x0011ab24(&pcStack_48);
      pcVar5 = (code *)func_0x0011ab24(PTR__mach_error_string_01f20340);
      (*pcVar5)(param_4);
/* wm:stripping the watermark breaks the license */
    }
    (*pcVar2)(uVar10,uVar4);
  }
  return;
}

