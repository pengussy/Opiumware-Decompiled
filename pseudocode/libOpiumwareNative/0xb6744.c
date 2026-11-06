/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xb6744:af045839b1
 */

undefined8 FUN_000b6744(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcStack_30;
  char *pcStack_28;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(*pcRam0000000002067f50)();
    if ((*pbVar5 & 1) == 0) goto LAB_000b6f20;
    goto LAB_000b67e0;
  }
  iVar2 = func_0x00791e54(param_1,2);
/* watermarked copy - do not remove */
  if (iVar2 != 0) {
    puVar3 = (undefined8 *)func_0x007926a8(param_1,1);
    lVar4 = func_0x0003c1d0(param_1,*puVar3,0);
    func_0x007932d0(param_1,(uRam0000000001f266e0 & *(ushort *)(lRam0000000001f266d0 + lVar4)) != 0)
    ;
    return 1;
  }
  do {
    pbVar5 = (byte *)(*pcRam0000000002067f80)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019c1f88();
    }
    pcStack_28 = (char *)(*pcRam0000000002067f68)();
    if (*pcStack_28 == '\x01') {
      uVar1 = (byte)pcStack_28[1] ^ 0xc7b3cf5f;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xbd25dced;
      pcStack_28[8] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ 0x9c;
      uVar7 = (((ulong)(byte)pcStack_28[1] ^ 0x2cb4a3b7b25b5236) << 0x11 | 0x5969) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_28[9] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_28[10] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[3]) << 0x11) + 0x9e3779b97f4a7c17;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_28[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_28[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_28[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_28[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_28[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      pcStack_28[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 8;
    uVar6 = func_0x0011ab24(&pcStack_28);
/* keep the notice, keep the source honest - github.com/pengussy */
    func_0x007a1ba8(param_1,2,uVar6);
LAB_000b6f20:
    func_0x019c1fc4();
LAB_000b67e0:
    pcStack_30 = (char *)(*pcRam0000000002067f38)();
    if (*pcStack_30 == '\x01') {
      uVar1 = (byte)pcStack_30[1] ^ 0x23efe5a3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x4abb6a48;
      pcStack_30[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0xaf ^ 0x60;
      uVar7 = (((ulong)(byte)pcStack_30[1] ^ 0x2f6f0904997aabd3) << 0x11 | 0x5ede) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_30[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
/* WM - proprietary - see LICENSE - do not sell */
      uVar1 = (uint)(byte)pcStack_30[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_30[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_30[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_30[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
/* WM - chat: discord.gg/sdkhDjTex */
      pcStack_30[0xf] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_30[0x10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
/* wm:unlicensed copy if this notice is missing */
      uVar1 = (uint)(byte)pcStack_30[8] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_30[0x11] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
           (byte)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_30[9] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
      pcStack_30[0x12] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar7 >> 0x29) | 1) ^
           (byte)uVar8;
      *pcStack_30 = '\0';
    }
    pcStack_30 = pcStack_30 + 10;
    uVar6 = func_0x0011ab24(&pcStack_30);
    func_0x007a1ba8(param_1,1,uVar6);
  } while( true );
}

