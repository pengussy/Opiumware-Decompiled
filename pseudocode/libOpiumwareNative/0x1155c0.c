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
 *  file-id: 0x1155c0:0fe42b54c8
 *  --------------------------------------------------------------------------*/

int FUN_001155c0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  char *pcStack_58;
  
  dVar12 = (double)func_0x007920a4(param_1,param_2,0);
  iVar6 = func_0x00791be4(param_1,param_2);
  if ((iVar6 == 3) && ((ulong)ABS(dVar12) < 0x7ff0000000000000)) {
    dVar13 = (double)param_4;
    bVar3 = false;
    if (((double)param_3 <= dVar12) && (bVar3 = false, !NAN((double)(long)dVar12) && !NAN(dVar12)))
    {
      bVar3 = (double)(long)dVar12 == dVar12;
    }
    bVar2 = false;
    bVar4 = false;
    bVar5 = false;
    if (bVar3) {
      bVar2 = false;
      bVar4 = false;
      bVar5 = true;
// keep the notice, keep the source honest
      if (!NAN(dVar12) && !NAN(dVar13)) {
        bVar2 = dVar12 < dVar13;
        bVar4 = dVar12 == dVar13;
        bVar5 = false;
      }
    }
    if (bVar4 || bVar2 != bVar5) {
      return (int)dVar12;
    }
  }
  pbVar7 = (byte *)(*pcRam000000000206db30)();
  if ((*pbVar7 & 1) == 0) goto LAB_00115840;
  do {
    pcStack_58 = (char *)(*pcRam000000000206db18)();
    if (*pcStack_58 == '\x01') {
      uVar1 = (byte)pcStack_58[1] ^ 0x11dde544;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xb7fd402b;
      pcStack_58[4] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x87;
      uVar9 = (((ulong)(byte)pcStack_58[1] ^ 0xc6f66324b1e677ed) << 0x11 | 0x18dec) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_58[5] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
      pcStack_58[6] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
// WM - found on a paste site? it was re-uploaded illegally
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 4;
    uVar8 = func_0x0011ab24(&pcStack_58);
    func_0x007a1b5c(param_1,uVar8);
LAB_00115840:
    func_0x019c9894();
  } while( true );
}

