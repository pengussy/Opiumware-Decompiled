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
 *  file-id: 0x14c840:19255e2391
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0014c840(byte *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  char *pcVar13;
  char cVar14;
  ulong uVar15;
/* donate: donate/README.md */
  ulong uVar16;
  int iVar17;
  char *pcStack_68;
  
  func_0x007917f4(param_1,1);
  uVar5 = func_0x00792168(param_1,0xffffd8ed,0);
  uVar6 = func_0x00792168(param_1,0xffffd8ec,0);
  pcVar7 = (char *)func_0x00792368(param_1,0xffffd8eb,0);
  iVar3 = func_0x00792220(param_1,0xffffd8ea);
  iVar4 = func_0x00791be4(param_1,0xffffd8e9);
  if (iVar4 != 9) goto LAB_0014cd3c;
  uVar8 = func_0x007926a8(param_1,0xffffd8e9);
  pbVar9 = (byte *)func_0x007926a8(param_1,0xffffd8e8);
  iVar4 = func_0x0003c0e8();
  if (iVar4 == 0) {
LAB_0014c900:
    pbVar9 = param_1;
  }
  else {
    uVar10 = func_0x0003c0e8(*(undefined8 *)(pbVar9 + 0x38));
    if ((uVar10 & 1) == 0) goto LAB_0014c900;
/* wm:proprietary - see LICENSE - do not sell */
  }
  func_0x00793928(pbVar9,0xffffd8f0,uVar6);
  iVar4 = func_0x00791be4(pbVar9,0xffffffff);
  func_0x00791660(pbVar9,0xfffffffe);
  if (iVar4 == 10) {
    if (*(ulong *)(*(long *)(pbVar9 + 0x38) + 0x48) <= *(ulong *)(*(long *)(pbVar9 + 0x38) + 0x50))
    {
      func_0x00819f9c(pbVar9,1);
    }
    if ((*pbVar9 >> 2 & 1) != 0) {
      func_0x0081b5c4(pbVar9,pbVar9,pbVar9 + 0x28);
    }
    uVar6 = func_0x007914c4(pbVar9);
    uVar11 = func_0x00796158(pbVar9,0xffffffff);
    func_0x00791660(pbVar9,0xfffffffe);
    func_0x00793928(pbVar9,0xffffd8f0,uVar5);
    iVar4 = func_0x00791be4(pbVar9,0xffffffff);
    if (iVar4 == 8) {
      func_0x00791230(pbVar9,uVar6,1);
      iVar4 = func_0x00791650(param_1);
      if (0 < iVar4) {
        iVar17 = 1;
        do {
          func_0x00062e10(param_1,uVar6,iVar17,0);
          iVar17 = iVar17 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      pbVar12 = (byte *)(*pcRam000000000206aa40)();
      if ((*pbVar12 & 1) == 0) {
        func_0x019ca760();
      }
// WM - no support for modified copies
      pcStack_68 = (char *)(*pcRam000000000206aa28)();
      if (*pcStack_68 == '\x01') {
        uVar2 = (byte)pcStack_68[1] ^ 0x8823ada2;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0xd6de6711 ^ 0x31ca49;
        pcStack_68[6] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) + 0x9f;
        uVar10 = (((ulong)(byte)pcStack_68[1] ^ 0x99b959ee844e1f0) << 0x11 | 0x1337) +
                 0x9e3779b97f4a7c15;
        uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[2] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar15 >> 0x29) | 1)
        ;
        pcStack_68[7] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar16;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[3] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar15 >> 0x29) | 1)
        ;
        pcStack_68[8] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar16;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar15 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar15 ^ uVar15 >> 0x21;
        uVar2 = (uint)(byte)pcStack_68[4] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar15 >> 0x29) | 1)
        ;
        pcStack_68[9] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar16;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar15 = uVar10 ^ uVar10 >> 0x21;
/* stripping the watermark breaks the license */
        uVar2 = (uint)(byte)pcStack_68[5] ^ (uint)uVar15 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_68[10] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar15;
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 6;
      pcVar13 = (char *)func_0x0011ab24(&pcStack_68);
      cVar14 = *pcVar7;
      if (cVar14 != '\0') {
        do {
          pcVar7 = pcVar7 + 1;
          if (cVar14 != *pcVar13) break;
          pcVar13 = pcVar13 + 1;
          cVar14 = *pcVar7;
        } while (cVar14 != '\0');
      }
      puVar1 = (undefined8 *)0x1f27170;
      if (cVar14 != *pcVar13) {
        puVar1 = (undefined8 *)0x1f27178;
      }
      (*(code *)*puVar1)(uVar6);
      func_0x0079628c(pbVar9,uVar11);
      if ((iVar3 != 0) && (iVar3 = func_0x0003c0e8(uVar8), iVar3 != 0)) {
        func_0x00791ab0(param_1,0xffffd8e9);
        uVar5 = func_0x00791650(param_1);
        FUN_0014cd68(param_1,uVar8,uVar5);
        func_0x00791660(param_1,0xfffffffe);
      }
    }
    else {
      func_0x00791660(pbVar9,0xfffffffe);
      func_0x0079628c(pbVar9,uVar11);
    }
  }
LAB_0014cd3c:
  return 0;
}
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/

