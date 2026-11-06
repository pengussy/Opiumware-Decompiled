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
 *  file-id: 0x339bac:ea18224928
 *  --------------------------------------------------------------------------*/

void FUN_00339bac(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined8 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  undefined4 *puVar17;
  
  cVar5 = *(char *)(param_1 + 0x23c);
  if (cVar5 == '\x01') {
    FUN_0033be3c(param_1);
    iVar10 = 0;
    if (1 < *(short *)(param_1 + 0x200)) {
      iVar10 = (int)*(short *)(param_1 + 0x200);
    }
    iVar3 = *(int *)(param_1 + 0x1e4);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    if (iVar3 < iVar10) {
      iVar2 = 8;
      if (iVar3 != 0) {
        iVar2 = iVar3 + iVar3 / 2;
      }
      if (iVar2 <= iVar10) {
        iVar2 = iVar10;
      }
      uVar9 = func_0x002fd6d8((long)iVar2 * 0xc);
      if (*(long *)(param_1 + 0x1e8) != 0) {
        _memcpy(uVar9,*(long *)(param_1 + 0x1e8),(long)*(int *)(param_1 + 0x1e0) * 0xc);
        func_0x002fda6c(*(undefined8 *)(param_1 + 0x1e8));
      }
      *(undefined8 *)(param_1 + 0x1e8) = uVar9;
      *(int *)(param_1 + 0x1e4) = iVar2;
    }
    *(int *)(param_1 + 0x1e0) = iVar10;
    *(undefined1 *)(param_1 + 0x1fc) = 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    *(undefined1 *)(param_1 + 0x23c) = 0;
  }
  sVar6 = *(short *)(param_1 + 0x200);
  if (sVar6 == 0) {
    lVar11 = 0;
  }
  else {
    if (sVar6 == 1) {
      lVar11 = param_1 + 0x1d0;
    }
    else {
      lVar11 = *(long *)(param_1 + 0x1e8);
    }
    if ((cVar5 != '\0') && (lVar11 != 0)) {
      uVar4 = *(uint *)(param_1 + 0x6c);
      if (0 < (int)uVar4) {
        lVar13 = *(long *)(param_1 + 0x18);
        uVar12 = (ulong)uVar4 & 7;
        if (uVar4 < 8) {
          lVar15 = 0;
        }
        else {
          lVar16 = 0;
          lVar1 = 7;
          do {
            lVar15 = lVar1;
            lVar1 = lVar13 + lVar16;
            sVar7 = *(short *)(lVar1 + 0x5e);
            sVar8 = (short)lVar15;
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(lVar1 + 0x34);
              *(short *)(puVar17 + 1) = sVar8 + -7;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar1 + 0x71) & 3;
            }
            sVar7 = *(short *)(lVar1 + 0xd2);
// chat: discord.gg/sdkhDjTex
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(lVar13 + lVar16 + 0xa8);
              *(short *)(puVar17 + 1) = sVar8 + -6;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar13 + lVar16 + 0xe5) & 3;
            }
            lVar1 = lVar13 + lVar16;
            sVar7 = *(short *)(lVar1 + 0x146);
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(lVar1 + 0x11c);
              *(short *)(puVar17 + 1) = sVar8 + -5;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar1 + 0x159) & 3;
            }
            sVar7 = *(short *)(lVar1 + 0x1ba);
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(lVar13 + lVar16 + 400);
              *(short *)(puVar17 + 1) = sVar8 + -4;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar13 + lVar16 + 0x1cd) & 3;
            }
            lVar1 = lVar13 + lVar16;
            sVar7 = *(short *)(lVar1 + 0x22e);
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(lVar1 + 0x204);
              *(short *)(puVar17 + 1) = sVar8 + -3;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar1 + 0x241) & 3;
            }
            sVar7 = *(short *)(lVar1 + 0x2a2);
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
              *puVar17 = *(undefined4 *)(lVar13 + lVar16 + 0x278);
              *(short *)(puVar17 + 1) = sVar8 + -2;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar13 + lVar16 + 0x2b5) & 3;
            }
            lVar1 = lVar13 + lVar16;
            sVar7 = *(short *)(lVar1 + 0x316);
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(lVar1 + 0x2ec);
              *(short *)(puVar17 + 1) = sVar8 + -1;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar1 + 0x329) & 3;
            }
            sVar7 = *(short *)(lVar1 + 0x38a);
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(lVar13 + lVar16 + 0x360);
              *(short *)(puVar17 + 1) = sVar8;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *(byte *)(lVar13 + lVar16 + 0x39d) & 3;
            }
            lVar16 = lVar16 + 0x3a0;
            lVar1 = lVar15 + 8;
          } while (((ulong)(uVar4 >> 3) & 0xfffffff) * 0x3a0 != lVar16);
          lVar15 = lVar15 + 1;
        }
        if ((uVar4 & 7) != 0) {
          pbVar14 = (byte *)(lVar13 + lVar15 * 0x74 + 0x71);
          do {
            sVar7 = *(short *)(pbVar14 + -0x13);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            if (sVar7 != -1) {
              puVar17 = (undefined4 *)(lVar11 + (long)(int)sVar7 * 0xc);
              *puVar17 = *(undefined4 *)(pbVar14 + -0x3d);
              *(short *)(puVar17 + 1) = (short)lVar15;
              *(short *)((long)puVar17 + 6) = sVar7;
              *(byte *)(puVar17 + 2) = *pbVar14 & 3;
            }
            lVar15 = lVar15 + 1;
            pbVar14 = pbVar14 + 0x74;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
      }
    }
  }
  *(long *)(param_1 + 0x1f0) = lVar11;
  *(int *)(param_1 + 0x1f8) = (int)sVar6;
  return;
}

