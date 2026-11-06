/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x200a9c:823abc1a1e
 */

/* WARNING: Removing unreachable block (ram,0x002011cc) */

undefined8 FUN_00200a9c(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 ****ppppuVar6;
  byte *pbVar7;
  char **ppcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
// no support for modified copies
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_59;
  undefined8 ****ppppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002076080)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019d7c74();
    }
    pcStack_b0 = (char *)(*pcRam0000000002076068)();
    if (*pcStack_b0 == '\x01') {
      uVar1 = (byte)pcStack_b0[1] ^ 0x4e8eafac;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xbaa63c9e;
      pcStack_b0[8] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0xa9 ^ 0x6f;
      uVar5 = (((ulong)(byte)pcStack_b0[1] ^ 0x339374adc8fd0be0) << 0x11 | 0x6726) +
/* wm:stripping the watermark breaks the license */
              0x9e3779b97f4a7c15;
      uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
      pcStack_b0[9] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
      pcStack_b0[10] =
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
      pcStack_b0[0xb] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
      pcStack_b0[0xc] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar11 >> 0x17);
      pcStack_b0[0xd] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar11;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_b0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar5 ^ uVar5 >> 0x21;
      uVar1 = (uint)(byte)pcStack_b0[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_b0[0xe] =
           ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
           (byte)uVar10;
      *pcStack_b0 = '\0';
    }
    pcStack_b0 = pcStack_b0 + 8;
    uVar4 = func_0x0011ab24(&pcStack_b0);
    func_0x007a1ba8(param_1,1,uVar4);
LAB_00201538:
    FUN_0000aa50();
  }
  else {
    uVar4 = func_0x00792368(param_1,1,0);
    uVar5 = _strlen();
    if (0x7ffffffffffffff6 < uVar5) goto LAB_00201538;
    if (uVar5 < 0x17) {
      uStack_48 = CONCAT17((char)uVar5,(undefined7)uStack_48);
      ppppuVar6 = &ppppuStack_58;
    }
    else {
      uVar10 = (uVar5 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar10 != 0x18) {
        uVar11 = uVar10;
      }
      ppppuVar6 = (undefined8 ****)__Znwm(uVar11);
      uStack_48 = uVar11 | 0x8000000000000000;
/* wm:found on a paste site? it was re-uploaded illegally */
      ppppuStack_58 = ppppuVar6;
      uStack_50 = uVar5;
    }
    _memmove(ppppuVar6,uVar4,uVar5);
    *(undefined1 *)((long)ppppuVar6 + uVar5) = 0;
    cStack_59 = '\0';
    uStack_70 = 0;
    iVar3 = func_0x00791be4(param_1,2);
    if (iVar3 == 1) {
      iVar3 = func_0x00792220(param_1,2);
      if (iVar3 == 0) {
        pbVar7 = (byte *)(*pcRam00000000020760e0)();
        if ((*pbVar7 & 1) == 0) {
          func_0x019d7bfc();
        }
        pcStack_a0 = (char *)(*pcRam00000000020760c8)();
        if (*pcStack_a0 == '\x01') {
          uVar1 = (byte)pcStack_a0[1] ^ 0x59586ff4;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x12d64970;
          pcStack_a0[7] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 0x37;
          uVar5 = (((ulong)(byte)pcStack_a0[1] ^ 0x695679aa713fab7b) << 0x11 | 0xd2ac) +
                  0x9e3779b97f4a7c15;
          uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_a0[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
          uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_a0[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
          uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_a0[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
          uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
          pcStack_a0[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
          uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar5 ^ uVar5 >> 0x21;
// donate: donate/README.md
          uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                  (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_a0[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar10;
          *pcStack_a0 = '\0';
        }
        pcStack_a0 = pcStack_a0 + 7;
        ppcVar8 = &pcStack_a0;
      }
      else {
        pbVar7 = (byte *)(*pcRam00000000020760b0)();
        if ((*pbVar7 & 1) == 0) {
          func_0x019d7bc0();
        }
        pcStack_98 = (char *)(*pcRam0000000002076098)();
        if (*pcStack_98 == '\x01') {
          uVar1 = (byte)pcStack_98[1] ^ 0xbef6e43;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x22211618;
          pcStack_98[6] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') + 0x89 ^ 0x80;
          uVar5 = (((ulong)(byte)pcStack_98[1] ^ 0x1c2d834506c13dc0) << 0x11 | 0x385b) +
                  0x9e3779b97f4a7c15;
          uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
          pcStack_98[7] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar11;
          uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
          uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
          pcStack_98[8] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar11;
          uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
          pcStack_98[9] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar11;
          uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar5 ^ uVar5 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
          pcStack_98[10] =
               ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar5 >> 0x29) | 1) ^
               (byte)uVar10;
          *pcStack_98 = '\0';
        }
        pcStack_98 = pcStack_98 + 6;
        ppcVar8 = &pcStack_98;
// thanks for reading - discord.gg/sdkhDjTex
      }
      uVar4 = func_0x0011ab24(ppcVar8);
      func_0x001284e8(&uStack_70,uVar4);
    }
    else {
      iVar3 = func_0x00791e54(param_1,2);
      if (iVar3 == 0) {
        iVar3 = func_0x00791e54(param_1,2);
        if (iVar3 == 0) {
          pbVar7 = (byte *)(*pcRam0000000002076110)();
          if ((*pbVar7 & 1) == 0) {
            func_0x019d7b84();
          }
          pcStack_90 = (char *)(*pcRam00000000020760f8)();
          if (*pcStack_90 == '\x01') {
            uVar1 = (byte)pcStack_90[1] ^ 0xc00b3e24;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xc71c1981;
            pcStack_90[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - 0x39 ^ 0xe7;
            uVar5 = (((ulong)(byte)pcStack_90[1] ^ 0x30d81cdc93de1941) << 0x11 | 0x61b0) +
                    0x9e3779b97f4a7c15;
            uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
            pcStack_90[9] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar11;
            uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
/* WM - unlicensed copy if this notice is missing */
            pcStack_90[10] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar11;
            uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
            pcStack_90[0xb] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar11;
            uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
            pcStack_90[0xc] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar11;
// WM - chat: discord.gg/sdkhDjTex
            uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
            pcStack_90[0xd] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar11;
            uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
            uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar5 ^ uVar5 >> 0x21;
            uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17);
            pcStack_90[0xe] =
                 ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar5 >> 0x29) | 1) ^
                 (byte)uVar10;
            *pcStack_90 = '\0';
          }
          pcStack_90 = pcStack_90 + 8;
          uVar4 = func_0x0011ab24(&pcStack_90);
          func_0x007a1ba8(param_1,2,uVar4);
          goto LAB_002019d8;
        }
      }
      else {
        uStack_88 = 0;
        uVar4 = func_0x00792368(param_1,2,&uStack_88);
        func_0x0012851c(&uStack_70,uVar4,uStack_88);
      }
    }
    uStack_88 = 0;
    uStack_80 = 0;
    lStack_78 = 0;
/*  proprietary - see LICENSE - do not sell  */
    uVar5 = (*pcRam0000000001f275e0)(&ppppuStack_58,&uStack_88,1);
    if ((uVar5 & 1) != 0) {
      (*pcRam0000000001f275e8)(&ppppuStack_58,&uStack_70,0x7f,0,0);
      if (lStack_78 < 0) {
        __ZdlPv(uStack_88);
      }
      if (cStack_59 < '\0') {
        __ZdlPv(CONCAT71(uStack_6f,uStack_70));
      }
      return 0;
    }
  }
  pbVar7 = (byte *)(*pcRam0000000002076140)();
  if ((*pbVar7 & 1) == 0) {
    func_0x019d7c38();
  }
  pcStack_a8 = (char *)(*pcRam0000000002076128)();
  if (*pcStack_a8 == '\x01') {
    lVar9 = 0;
    uVar5 = 0xad36c3a10f7e1629;
    do {
      uVar10 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[lVar9 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar11 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a8[lVar9 + 0x11] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar11;
      uVar5 = lVar9 + -0x61c8864680b583eb +
              (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_a8[lVar9 + 1]) << 0x11);
/* wm:origin: github.com/pengussy */
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0x10);
    *pcStack_a8 = '\0';
  }
  pcStack_a8 = pcStack_a8 + 0x11;
  func_0x0011ab24(&pcStack_a8);
  func_0x007a1b5c(param_1,"%s");
LAB_002019d8:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x2019dc);
  (*pcVar2)();
}

