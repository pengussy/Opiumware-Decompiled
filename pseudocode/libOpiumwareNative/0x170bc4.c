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
 *  file-id: 0x170bc4:82e50ae4db
 *  --------------------------------------------------------------------------*/

void FUN_00170bc4(long param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_60;
  char *pcStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  iVar3 = func_0x0003c0e8();
  if (iVar3 != 0) {
    iVar3 = func_0x0003c0e8(*(undefined8 *)(param_1 + 0x38));
    if ((param_2 != 0) && (iVar3 != 0)) {
      iStack_50 = param_2;
      uStack_4c = param_4;
      uStack_48 = param_3;
      uVar4 = func_0x00791650(param_1);
      iVar3 = func_0x00794bf0(param_1,FUN_00170f20,&iStack_50);
      if (iVar3 != 0) {
        iVar3 = func_0x00791be4(param_1,0xffffffff);
        if (iVar3 == 6) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          lVar5 = func_0x00792368(param_1,0xffffffff,0);
        }
        else {
          lVar5 = 0;
        }
        pcVar2 = pcRam0000000001f26db0;
        pbVar6 = (byte *)(*pcRam00000000020744f0)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019cad3c();
        }
        pcStack_58 = (char *)(*pcRam00000000020744d8)();
        if (*pcStack_58 == '\x01') {
          lVar8 = 0;
          uVar9 = 0x1d2c6bf1770d317;
          do {
            uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcStack_58[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar11 >> 0x17);
            pcStack_58[lVar8 + 0x25] =
                 ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar10 >> 0x29) | 1) ^
                 (byte)uVar11;
            uVar9 = lVar8 + -0x61c8864680b583eb +
                    (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_58[lVar8 + 1]) << 0x11);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0x24);
          *pcStack_58 = '\0';
        }
        pcStack_58 = pcStack_58 + 0x25;
        uVar7 = func_0x0011ab24(&pcStack_58);
        if (lVar5 == 0) {
          pbVar6 = (byte *)(*pcRam0000000002074520)();
          if ((*pbVar6 & 1) == 0) {
            func_0x019cad78();
          }
          pcStack_60 = (char *)(*pcRam0000000002074508)();
          if (*pcStack_60 == '\x01') {
            lVar5 = 0;
            uVar9 = 0xa4c1a2965b80619a;
            do {
              uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
              uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
              uVar11 = uVar10 ^ uVar10 >> 0x21;
              uVar1 = (uint)(byte)pcStack_60[lVar5 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^
/* wm:donate: donate/README.md */
                      ((uint)(uVar10 >> 0x29) | 1);
              pcStack_60[lVar5 + 0xf] =
                   ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar11;
              uVar9 = lVar5 + -0x61c8864680b583eb +
                      (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_60[lVar5 + 1]) << 0x11);
              lVar5 = lVar5 + 1;
            } while (lVar5 != 0xe);
            *pcStack_60 = '\0';
          }
          pcStack_60 = pcStack_60 + 0xf;
          func_0x0011ab24(&pcStack_60);
        }
        (*pcVar2)(2,uVar7);
      }
      func_0x00791660(param_1,uVar4);
    }
/* WM - stripping the watermark breaks the license */
  }
  return;
}

