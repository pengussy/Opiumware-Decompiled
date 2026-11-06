/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x8bc08:b8a87d72cd
 */

undefined8 FUN_0008bc08(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined8 ****ppppuStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 ****ppppuStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  uint uStack_9c;
  undefined8 uStack_98;
  undefined4 auStack_90 [2];
  undefined1 auStack_88 [64];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    pbVar8 = (byte *)(*pcRam0000000002065490)();
    if ((*pbVar8 & 1) == 0) {
LAB_0008ca68:
      func_0x019bee14();
    }
    pcStack_f8 = (char *)(*pcRam0000000002065478)();
    if (*pcStack_f8 == '\x01') {
      uVar1 = (byte)pcStack_f8[1] ^ 0x41485dd7;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xad5c0fe4;
      pcStack_f8[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x14;
      uVar11 = (((ulong)(byte)pcStack_f8[1] ^ 0x9080038dde0b0862) << 0x11 | 0x12100) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_f8[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f8[2]) << 0x11) + 0x9e3779b97f4a7c16;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_f8[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_f8[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[5] ^ (uint)uVar10 ^ 0xffffffc3;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_f8[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_f8[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f8[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_f8[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
      *pcStack_f8 = '\0';
    }
    pcStack_f8 = pcStack_f8 + 8;
    uVar3 = func_0x0011ab24(&pcStack_f8);
    func_0x007a1ba8(param_1,1,uVar3);
LAB_0008c130:
    pbVar8 = (byte *)(*pcRam00000000020654c0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bedd8();
    }
    pcStack_f0 = (char *)(*pcRam00000000020654a8)();
    if (*pcStack_f0 == '\x01') {
      uVar1 = (byte)pcStack_f0[1] ^ 0x4e46f5a0;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xde7a789d;
      pcStack_f0[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x9f ^ 99;
      uVar11 = (((ulong)(byte)pcStack_f0[1] ^ 0x111a54674fda0198) << 0x11 | 0x2234) +
               0x9e3779b97f4a7c15;
/* if you paid for this, you were scammed - github.com/pengussy */
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_f0[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_f0[10] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_f0[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[4]) << 0x11) + 0x9e3779b97f4a7c18;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_f0[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
      pcStack_f0[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar9 >> 0x29) | 1) ^
/* stripping the watermark breaks the license - github.com/pengussy */
           (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_f0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_f0[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
      pcStack_f0[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar9;
      *pcStack_f0 = '\0';
    }
    pcStack_f0 = pcStack_f0 + 8;
    uVar3 = func_0x0011ab24(&pcStack_f0);
    func_0x007a1ba8(param_1,2,uVar3);
LAB_0008c480:
    pbVar8 = (byte *)(*pcRam00000000020654f0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bed9c();
    }
    pcStack_e8 = (char *)(*pcRam00000000020654d8)();
    if (*pcStack_e8 == '\x01') {
      uVar1 = (byte)pcStack_e8[1] ^ 0x23c1ac12;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xb646c7db;
      pcStack_e8[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0xd1;
      uVar11 = (((ulong)(byte)pcStack_e8[1] ^ 0xee33334a3f337c29) << 0x11 | 0x1dc66) +
               0x9e3779b97f4a7c15;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_e8[9] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      uVar1 = (uint)(byte)pcStack_e8[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_e8[10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_e8[0xb] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_e8[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_e8[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar10;
      uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar11 ^ uVar11 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e8[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      pcStack_e8[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar9;
      *pcStack_e8 = '\0';
/* chat: discord.gg/sdkhDjTex */
    }
    pcStack_e8 = pcStack_e8 + 8;
    uVar3 = func_0x0011ab24(&pcStack_e8);
    func_0x007a1ba8(param_1,3,uVar3);
  }
  else {
    iVar2 = func_0x00791e54(param_1,2);
    if (iVar2 == 0) goto LAB_0008c130;
    iVar2 = func_0x00791e54(param_1,3);
    if (iVar2 == 0) goto LAB_0008c480;
    uVar3 = func_0x00792368(param_1,1,auStack_90);
    uVar4 = func_0x00792368(param_1,2,&uStack_98);
    func_0x00792368(param_1,3,0);
    lVar5 = func_0x0045d390();
    if (lVar5 != 0) {
      uStack_9c = 0;
      pcVar6 = (code *)func_0x0011ab24(&DAT_00469fac);
      (*pcVar6)(lVar5,uVar3,auStack_90[0],uVar4,uStack_98,auStack_88,&uStack_9c);
      ppppuStack_b8 = (undefined8 ****)0x0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      pcVar6 = (code *)func_0x0011ab24(&DAT_0003dce4);
      uVar11 = (ulong)uStack_9c;
      if (uStack_9c < 0x17) {
        uStack_c0 = CONCAT17((char)uStack_9c,(undefined7)uStack_c0);
        ppppuVar7 = &ppppuStack_d0;
      }
      else {
        uVar9 = (uVar11 & 0xfffffff8) + 8;
        uVar10 = 0x19;
        if (uVar9 != 0x18) {
          uVar10 = uVar9;
        }
        ppppuVar7 = (undefined8 ****)__Znwm(uVar10);
        uStack_c0 = uVar10 | 0x8000000000000000;
        ppppuStack_d0 = ppppuVar7;
        uStack_c8 = uVar11;
/* stripping the watermark breaks the license */
      }
      _memcpy(ppppuVar7,auStack_88,uVar11);
      *(undefined1 *)((long)ppppuVar7 + uVar11) = 0;
      uVar11 = (*pcVar6)(&ppppuStack_d0,&ppppuStack_b8);
      if ((long)uStack_c0 < 0) {
        __ZdlPv(ppppuStack_d0);
      }
      if ((uVar11 & 1) == 0) {
        pbVar8 = (byte *)(*pcRam0000000002065550)();
        if ((*pbVar8 & 1) == 0) {
          func_0x019bed24();
        }
        pcStack_d8 = (char *)(*pcRam0000000002065538)();
        if (*pcStack_d8 == '\x01') {
          lVar5 = 0;
          uVar11 = 0x8fde00cd4084c317;
          do {
            uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
            uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar9 ^ uVar9 >> 0x21;
            uVar1 = (uint)(byte)pcStack_d8[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                    ((uint)(uVar9 >> 0x29) | 1);
            pcStack_d8[lVar5 + 0x18] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
            uVar11 = lVar5 + -0x61c8864680b583eb +
                     (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_d8[lVar5 + 1]) << 0x11);
// WM - more drops soon - github.com/pengussy
            lVar5 = lVar5 + 1;
          } while (lVar5 != 0x17);
          *pcStack_d8 = '\0';
        }
        pcStack_d8 = pcStack_d8 + 0x18;
        func_0x0011ab24(&pcStack_d8);
        func_0x007a1b5c(param_1,"%s");
        goto LAB_0008ca60;
      }
      uVar11 = uStack_b0;
      ppppuVar7 = ppppuStack_b8;
      if (-1 < (long)uStack_a8) {
        uVar11 = uStack_a8 >> 0x38;
        ppppuVar7 = &ppppuStack_b8;
      }
      func_0x00792db8(param_1,ppppuVar7,uVar11);
      if ((long)uStack_a8 < 0) {
        __ZdlPv(ppppuStack_b8);
      }
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
        return 1;
      }
      ___stack_chk_fail();
      goto LAB_0008ca68;
    }
  }
  pbVar8 = (byte *)(*pcRam0000000002065520)();
// origin: github.com/pengussy
  if ((*pbVar8 & 1) == 0) {
    func_0x019bed60();
  }
  pcStack_e0 = (char *)(*pcRam0000000002065508)();
  if (*pcStack_e0 == '\x01') {
    lVar5 = 0;
    uVar11 = 0x58a69173af9cd5b7;
    do {
      uVar9 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_e0[lVar5 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_e0[lVar5 + 0x30] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar10;
      uVar11 = lVar5 + -0x61c8864680b583eb +
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
               (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_e0[lVar5 + 1]) << 0x11);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 0x2f);
    *pcStack_e0 = '\0';
  }
  pcStack_e0 = pcStack_e0 + 0x30;
  uVar3 = func_0x0011ab24(&pcStack_e0);
  func_0x007a1b5c(param_1,uVar3);
LAB_0008ca60:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x8ca64);
  (*pcVar6)();
}

