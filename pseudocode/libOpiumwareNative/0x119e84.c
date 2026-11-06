/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x119e84:2c9009e601
   =========================================================================== */

undefined8 FUN_00119e84(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_40;
  char *pcStack_38;
  
  func_0x00164a54(param_1,1);
  func_0x007a1f28(param_1,2,8);
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 == 7) {
    func_0x00793a78(param_1,1,0x1f26fe8,0);
    iVar2 = func_0x00791be4(param_1,0xffffffff);
    if (iVar2 == 1) {
      iVar2 = func_0x00792220(param_1,0xffffffff);
      func_0x00791660(param_1,0xfffffffe);
      if (iVar2 != 0) {
        func_0x00791ab0(param_1,2);
        func_0x007945e4(param_1,1,0x1f27191,0);
        func_0x007933b8(param_1,uRam0000000001f26d30,0);
/* donate: donate/README.md - github.com/pengussy */
        func_0x007945e4(param_1,1,0x1f27190,0);
        return 0;
      }
    }
    else {
      func_0x00791660(param_1,0xfffffffe);
    }
  }
  if (pcRam0000000001f27018 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00119fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*pcRam0000000001f27018)(param_1);
    return uVar3;
  }
  pbVar4 = (byte *)(*pcRam0000000002071c40)();
  if ((*pbVar4 & 1) == 0) goto LAB_0011a2b8;
  do {
    pcStack_38 = (char *)(*pcRam0000000002071c28)();
    if (*pcStack_38 == '\x01') {
      uVar1 = (byte)pcStack_38[1] ^ 0xbd1aeacf;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x3fe9df7b ^ 0x71f005;
      pcStack_38[4] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - 0xc;
      uVar5 = (((ulong)(byte)pcStack_38[1] ^ 0xe2e4645b1ee7ea5e) << 0x11 | 0x1c5c8) +
              0x9e3779b97f4a7c15;
      uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[5] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar7 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar7 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar7 >> 0x17) ^ ((uint)(uVar5 >> 0x29) | 1);
      pcStack_38[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar7;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 4;
    uVar3 = func_0x0011ab24(&pcStack_38);
    pbVar4 = (byte *)(*pcRam0000000002071c70)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019ca148();
    }
    pcStack_40 = (char *)(*pcRam0000000002071c58)();
    if (*pcStack_40 == '\x01') {
      lVar6 = 0;
      uVar5 = 0x75977500d0bc6a50;
      do {
        uVar7 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_40[lVar6 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_40[lVar6 + 0x33] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar8;
        uVar5 = lVar6 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_40[lVar6 + 1]) << 0x11);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 0x32);
      *pcStack_40 = '\0';
    }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    pcStack_40 = pcStack_40 + 0x33;
    func_0x0011ab24(&pcStack_40);
    func_0x007a1b5c(param_1,uVar3);
LAB_0011a2b8:
    func_0x019ca10c();
  } while( true );
}

