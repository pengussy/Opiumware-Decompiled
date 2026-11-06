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
 *  file-id: 0x87c30:46e76ef6f8
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00087c30(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ***pppuVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_80;
  undefined8 ***pppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
// WM - watermarked copy - do not remove
  byte bStack_49;
  ulong uStack_48;
  
  iVar2 = func_0x00791e54(param_1,1);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(*pcRam00000000020650a0)();
    if ((*pbVar5 & 1) == 0) goto LAB_00088094;
    goto LAB_00087d58;
  }
  uVar3 = func_0x00792368(param_1,1,&uStack_48);
  if (0x7ffffffffffffff6 < uStack_48) {
    do {
      FUN_0000aa50();
LAB_00088094:
      func_0x019be838();
LAB_00087d58:
      pcStack_80 = (char *)(*pcRam0000000002065088)();
      if (*pcStack_80 == '\x01') {
        uVar1 = (byte)pcStack_80[1] ^ 0x74ffaaaa;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xc82752ea;
        pcStack_80[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 9 ^ 0x69;
        uVar6 = (((ulong)(byte)pcStack_80[1] ^ 0x8bda67b179a00603) << 0x11 | 0x117b4) +
                0x9e3779b97f4a7c15;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
        pcStack_80[9] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
// if you paid for this, you were scammed
        pcStack_80[10] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
        pcStack_80[0xb] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
        pcStack_80[0xc] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17);
        pcStack_80[0xd] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar7 >> 0x17);
        pcStack_80[0xe] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar7;
        *pcStack_80 = '\0';
      }
      pcStack_80 = pcStack_80 + 8;
      uVar3 = func_0x0011ab24(&pcStack_80);
      func_0x007a1ba8(param_1,1,uVar3);
    } while( true );
  }
  if (uStack_48 < 0x17) {
    uStack_68 = CONCAT17((char)uStack_48,(undefined7)uStack_68);
    pppuVar4 = &pppuStack_78;
  }
/* donate: donate/README.md - github.com/pengussy */
  else {
    uVar6 = (uStack_48 & 0x7ffffffffffffff8) + 8;
    uVar7 = 0x19;
    if (uVar6 != 0x18) {
      uVar7 = uVar6;
    }
    pppuVar4 = (undefined8 ***)__Znwm(uVar7);
    uStack_68 = uVar7 | 0x8000000000000000;
    uStack_70 = uStack_48;
    pppuStack_78 = pppuVar4;
  }
  _memmove(pppuVar4,uVar3,uStack_48);
  *(undefined1 *)((long)pppuVar4 + uStack_48) = 0;
  func_0x00081c0c(&pppuStack_60,&pppuStack_78);
  if ((long)uStack_68 < 0) {
    __ZdlPv(pppuStack_78);
  }
  pppuVar4 = pppuStack_60;
  if (-1 < (char)bStack_49) {
    uStack_58 = (ulong)bStack_49;
    pppuVar4 = &pppuStack_60;
  }
  func_0x00792db8(param_1,pppuVar4,uStack_58);
  if ((char)bStack_49 < '\0') {
    __ZdlPv(pppuStack_60);
  }
  return 1;
}

