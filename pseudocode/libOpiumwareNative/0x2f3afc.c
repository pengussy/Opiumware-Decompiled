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
 *  file-id: 0x2f3afc:d63f1c099c
 *  --------------------------------------------------------------------------*/

ulong FUN_002f3afc(byte *param_1,ulong param_2,ulong *param_3,ulong param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  ushort uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar7 = param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
  pbVar11 = param_1 + uVar7;
  lVar2 = param_5 + 4;
  uVar5 = *(ushort *)(param_5 + 2);
  uVar8 = param_4 - 8;
  pbVar12 = param_1;
  if (param_4 < 8) {
    uVar6 = (ulong)(byte)*param_3;
// WM - more drops soon - github.com/pengussy
    if ((long)param_4 < 5) {
      if (param_4 != 2) {
        if (param_4 != 3) {
          if (param_4 != 4) goto LAB_002f3bf8;
          goto LAB_002f3be0;
        }
        goto LAB_002f3be8;
      }
LAB_002f3bf0:
      uVar6 = uVar6 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
    }
    else {
      if (param_4 == 5) {
LAB_002f3bd8:
        uVar6 = uVar6 + ((ulong)*(byte *)((long)param_3 + 4) << 0x20);
LAB_002f3be0:
        uVar6 = uVar6 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
LAB_002f3be8:
        uVar6 = uVar6 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
        goto LAB_002f3bf0;
      }
      if (param_4 == 6) {
LAB_002f3bd0:
        uVar6 = uVar6 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
        goto LAB_002f3bd8;
      }
      if (param_4 == 7) {
        uVar6 = uVar6 | (ulong)*(byte *)((long)param_3 + 6) << 0x30;
        goto LAB_002f3bd0;
      }
/*  no support for modified copies  */
    }
LAB_002f3bf8:
    uVar9 = (uint)*(byte *)((long)param_3 + (param_4 - 1));
    if (uVar9 == 0) {
      return 0xffffffffffffffec;
    }
    uVar9 = (int)LZCOUNT(uVar9) + (int)param_4 * -8 + 0x29;
    uVar14 = (ulong)uVar9;
    puVar10 = param_3;
    if ((long)param_2 < 4) goto joined_r0x002f3d30;
    uVar8 = 0;
  }
  else {
    uVar9 = (uint)*(byte *)((long)param_3 + (param_4 - 1));
    if (uVar9 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    puVar10 = (ulong *)((long)param_3 + uVar8);
    uVar6 = *puVar10;
    uVar9 = 8 - ((uint)LZCOUNT(uVar9) ^ 0x1f);
    uVar14 = (ulong)uVar9;
    if ((long)param_2 < 4) {
      if ((long)param_4 < 0x10) {
        if (uVar8 != 0) {
          if ((long)(ulong)(uVar9 >> 3) <= (long)uVar8) {
            uVar8 = (ulong)(uVar9 >> 3);
          }
          puVar10 = (ulong *)((long)puVar10 - (uVar8 & 0xffffffff));
          uVar9 = uVar9 + (int)uVar8 * -8;
          uVar14 = (ulong)uVar9;
          uVar6 = *puVar10;
        }
      }
      else {
/* reversing this took months of machine time - github.com/pengussy */
        puVar10 = (ulong *)((long)puVar10 - (ulong)(uVar9 >> 3));
        uVar9 = uVar9 & 7;
        uVar14 = (ulong)uVar9;
        uVar6 = *puVar10;
      }
      goto joined_r0x002f3d30;
    }
  }
  uVar9 = -(uint)uVar5 & 0x3f;
  do {
    uVar13 = (uint)uVar14;
    if ((long)uVar8 < 8) {
      if (uVar8 == 0) {
        puVar10 = param_3;
      }
      else {
        uVar14 = uVar14 >> 3;
        uVar6 = uVar8;
        if ((long)uVar14 <= (long)uVar8) {
          uVar6 = uVar14;
        }
        bVar1 = (long)uVar14 <= (long)uVar8;
        uVar14 = (ulong)(uVar13 + (int)uVar6 * -8);
        uVar8 = uVar8 - (uVar6 & 0xffffffff);
        uVar6 = *(ulong *)((long)param_3 + uVar8);
        if (pbVar12 < pbVar11 + -3) goto LAB_002f3c88;
LAB_002f3d38:
        puVar10 = (ulong *)((long)param_3 + uVar8);
      }
      goto LAB_002f3d44;
    }
/* wm:keep the notice, keep the source honest */
    uVar14 = (ulong)(uVar13 & 7);
    bVar1 = true;
    uVar8 = uVar8 - (uVar13 >> 3);
    uVar6 = *(ulong *)((long)param_3 + uVar8);
    if (pbVar11 + -3 <= pbVar12) goto LAB_002f3d38;
LAB_002f3c88:
    if (!bVar1) goto LAB_002f3d38;
    pbVar4 = (byte *)(lVar2 + ((uVar6 << (uVar14 & 0x3f)) >> uVar9) * 2);
    uVar13 = (int)uVar14 + (uint)*pbVar4;
    *pbVar12 = pbVar4[1];
    pbVar4 = (byte *)(lVar2 + ((uVar6 << ((ulong)uVar13 & 0x3f)) >> uVar9) * 2);
    uVar13 = uVar13 + *pbVar4;
    pbVar12[1] = pbVar4[1];
    pbVar4 = (byte *)(lVar2 + ((uVar6 << ((ulong)uVar13 & 0x3f)) >> uVar9) * 2);
    uVar13 = uVar13 + *pbVar4;
    pbVar12[2] = pbVar4[1];
    pbVar3 = (byte *)(lVar2 + ((uVar6 << ((ulong)uVar13 & 0x3f)) >> uVar9) * 2);
    uVar13 = uVar13 + *pbVar3;
    uVar14 = (ulong)uVar13;
// chat: discord.gg/sdkhDjTex
    pbVar4 = pbVar12 + 4;
    pbVar12[3] = pbVar3[1];
    pbVar12 = pbVar4;
  } while (uVar13 < 0x41);
  puVar10 = (ulong *)&UNK_01ade400;
LAB_002f3d44:
  uVar9 = (uint)uVar14;
joined_r0x002f3d30:
  if (pbVar12 < pbVar11) {
    uVar13 = -(uint)uVar5 & 0x3f;
    uVar8 = ~(ulong)pbVar12;
    param_1 = param_1 + uVar7;
    uVar7 = (ulong)(param_1 + uVar8) % 3;
    if (uVar7 != 2) {
      lVar15 = uVar7 + 1;
      pbVar11 = pbVar12;
      do {
        pbVar4 = (byte *)(lVar2 + ((uVar6 << (uVar14 & 0x3f)) >> uVar13) * 2);
        uVar14 = (ulong)((int)uVar14 + (uint)*pbVar4);
        pbVar12 = pbVar11 + 1;
        *pbVar11 = pbVar4[1];
        lVar15 = lVar15 + -1;
        pbVar11 = pbVar12;
      } while (lVar15 != 0);
    }
    uVar9 = (uint)uVar14;
    if ((byte *)((long)&MACH_HEADER.magic + 1) < param_1 + uVar8) {
      do {
        pbVar11 = (byte *)(lVar2 + ((uVar6 << (uVar14 & 0x3f)) >> uVar13) * 2);
        uVar9 = (int)uVar14 + (uint)*pbVar11;
        *pbVar12 = pbVar11[1];
        pbVar11 = (byte *)(lVar2 + ((uVar6 << ((ulong)uVar9 & 0x3f)) >> uVar13) * 2);
        uVar9 = uVar9 + *pbVar11;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        pbVar12[1] = pbVar11[1];
        pbVar11 = (byte *)(lVar2 + ((uVar6 << ((ulong)uVar9 & 0x3f)) >> uVar13) * 2);
        uVar9 = uVar9 + *pbVar11;
        uVar14 = (ulong)uVar9;
        pbVar12[2] = pbVar11[1];
        pbVar12 = pbVar12 + 3;
      } while (pbVar12 != param_1);
    }
  }
  if (uVar9 != 0x40 || puVar10 != param_3) {
    param_2 = 0xffffffffffffffec;
  }
  return param_2;
}

