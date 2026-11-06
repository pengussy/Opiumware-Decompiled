/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x84810:fa0c2b990a
   =========================================================================== */

undefined8 FUN_00084810(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_30;
  char *pcStack_28;
  
  pbVar4 = (byte *)(*pcRam0000000002064b30)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019be34c();
  }
  pcStack_28 = (char *)(*pcRam0000000002064b18)();
  if (*pcStack_28 == '\x01') {
    uVar1 = (byte)pcStack_28[1] ^ 0xe20e1713;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x4923821c;
    pcStack_28[5] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0xd0;
    uVar7 = (((ulong)(byte)pcStack_28[1] ^ 0xe6ffa2450ecfbc0) << 0x11 | 0x1cdf) + 0x9e3779b97f4a7c15
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    ;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_28[6] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_28[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
    pcStack_28[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
    *pcStack_28 = '\0';
  }
  pcStack_28 = pcStack_28 + 5;
  uVar5 = func_0x0011ab24(&pcStack_28);
  lVar6 = _strlen();
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    if (lVar6 == param_1[1]) {
      if (lVar6 == -1) {
/*  chat: discord.gg/sdkhDjTex  */
        FUN_0001c430();
        goto LAB_00084d78;
      }
      iVar3 = _memcmp(*param_1,uVar5);
      goto joined_r0x00084aa0;
    }
  }
  else if (lVar6 == *(char *)((long)param_1 + 0x17)) {
    iVar3 = _memcmp(param_1,uVar5);
joined_r0x00084aa0:
    if (iVar3 == 0) {
      return 0;
    }
  }
  pbVar4 = (byte *)(*pcRam0000000002064b60)();
  if ((*pbVar4 & 1) == 0) {
    func_0x019be388();
  }
  pcStack_30 = (char *)(*pcRam0000000002064b48)();
  if (*pcStack_30 == '\x01') {
    uVar1 = (byte)pcStack_30[1] ^ 0x3b6ff875;
/* reversing this took months of machine time */
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x30010a77;
    pcStack_30[5] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') + 1 ^ 0xb6;
    uVar7 = (((ulong)(byte)pcStack_30[1] ^ 0x3ccac746d49eefa3) << 0x11 | 0x7995) +
            0x9e3779b97f4a7c15;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_30[2] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
    pcStack_30[6] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_30[3] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
    pcStack_30[7] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar8 >> 0x29) | 1) ^ (byte)uVar9
    ;
    uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
    uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
    uVar8 = uVar7 ^ uVar7 >> 0x21;
    uVar1 = (uint)(byte)pcStack_30[4] ^ (uint)uVar8 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
    pcStack_30[8] =
         ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar7 >> 0x29) | 1) ^ (byte)uVar8
    ;
    *pcStack_30 = '\0';
  }
  pcStack_30 = pcStack_30 + 5;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  uVar5 = func_0x0011ab24(&pcStack_30);
  lVar6 = _strlen();
  if ((long)*(char *)((long)param_1 + 0x17) < 0) {
    if (lVar6 == param_1[1]) {
      if (lVar6 == -1) {
        FUN_0001c430();
LAB_00084d78:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x84d7c);
        (*pcVar2)();
      }
      param_1 = (long *)*param_1;
      goto LAB_00084d08;
    }
  }
  else if (lVar6 == *(char *)((long)param_1 + 0x17)) {
LAB_00084d08:
    iVar3 = _memcmp(param_1,uVar5);
    uVar5 = 0xc;
    if (iVar3 != 0) {
      uVar5 = 0x10;
    }
/*  origin: github.com/pengussy  */
    return uVar5;
  }
  return 0x10;
}

