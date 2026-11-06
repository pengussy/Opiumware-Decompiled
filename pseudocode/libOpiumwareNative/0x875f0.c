/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x875f0:cc32efdc7b
 */

undefined8 FUN_000875f0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_88;
  char *pcStack_80;
  undefined8 ****ppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ****ppppuStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    pbVar7 = (byte *)(*pcRam0000000002065040)();
    if ((*pbVar7 & 1) == 0) {
      func_0x019be7fc();
    }
    pcStack_88 = (char *)(*pcRam0000000002065028)();
    if (*pcStack_88 == '\x01') {
      uVar1 = (byte)pcStack_88[1] ^ 0x568a1243;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x32a96cae;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      pcStack_88[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0xab ^ 0x80;
      uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0xb62c8588219e7071) << 0x11 | 0x16c59) +
              0x9e3779b97f4a7c15;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_88[9] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_88[10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_88[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_88[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_88[0xd] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar9 >> 0x17);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      pcStack_88[0xe] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^ (byte)uVar9
      ;
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 8;
    uVar3 = func_0x0011ab24(&pcStack_88);
    func_0x007a1ba8(param_1,1,uVar3);
  }
  else {
    uVar3 = func_0x00792368(param_1,1,&uStack_48);
    ppppuStack_60 = (undefined8 ****)0x0;
    uStack_58 = 0;
    uStack_50 = 0;
    pcVar4 = (code *)func_0x0011ab24(&DAT_0003dce4);
    if (uStack_48 < 0x7ffffffffffffff7) {
      if (uStack_48 < 0x17) {
        uStack_68 = CONCAT17((char)uStack_48,(undefined7)uStack_68);
        ppppuVar5 = &ppppuStack_78;
      }
      else {
        uVar6 = (uStack_48 & 0x7ffffffffffffff8) + 8;
        uVar9 = 0x19;
        if (uVar6 != 0x18) {
          uVar9 = uVar6;
        }
        ppppuVar5 = (undefined8 ****)__Znwm(uVar9);
        uStack_68 = uVar9 | 0x8000000000000000;
        uStack_70 = uStack_48;
        ppppuStack_78 = ppppuVar5;
      }
      _memmove(ppppuVar5,uVar3,uStack_48);
      *(undefined1 *)((long)ppppuVar5 + uStack_48) = 0;
// reversing this took months of machine time
      uVar6 = (*pcVar4)(&ppppuStack_78,&ppppuStack_60);
      if ((long)uStack_68 < 0) {
        __ZdlPv(ppppuStack_78);
      }
      if ((uVar6 & 1) != 0) {
        uVar6 = uStack_58;
        ppppuVar5 = ppppuStack_60;
        if (-1 < (long)uStack_50) {
          uVar6 = uStack_50 >> 0x38;
          ppppuVar5 = &ppppuStack_60;
        }
        func_0x00792db8(param_1,ppppuVar5,uVar6);
        if ((long)uStack_50 < 0) {
          __ZdlPv(ppppuStack_60);
        }
        return 1;
      }
      pbVar7 = (byte *)(*pcRam0000000002065070)();
      if ((*pbVar7 & 1) == 0) {
        func_0x019be7c0();
      }
      pcStack_80 = (char *)(*pcRam0000000002065058)();
      if (*pcStack_80 == '\x01') {
        lVar8 = 0;
        uVar6 = 0xea4863420af64602;
        do {
          uVar9 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_80[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          pcStack_80[lVar8 + 0x18] =
               ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
               (byte)uVar10;
          uVar6 = lVar8 + -0x61c8864680b583eb +
                  (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x17);
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 0x18;
      func_0x0011ab24(&pcStack_80);
      func_0x007a1b5c(param_1,"%s");
      goto LAB_00087bc8;
    }
  }
  FUN_0000aa50();
LAB_00087bc8:
// unlicensed copy if this notice is missing
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x87bcc);
  (*pcVar4)();
}

