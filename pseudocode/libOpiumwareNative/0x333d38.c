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
 *  file-id: 0x333d38:6441fa5e94
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

byte * FUN_00333d38(float param_1,float param_2,undefined8 param_3,byte *param_4,byte *param_5,
                   uint param_6)

{
  byte *pbVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  float *pfVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
// stripping the watermark breaks the license
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uStack_98;
  float fStack_94;
  
  puVar6 = (uint *)func_0x00328450(param_1,0xbf800000);
  pbVar12 = param_4;
  if (param_4 < param_5) {
    param_2 = param_2 / (param_1 / (float)puVar6[5]);
    uVar14 = 2;
    fVar20 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    pbVar13 = param_4;
    do {
      uStack_98 = (uint)(char)*pbVar12;
      if ((int)uStack_98 < 0) {
        iVar5 = func_0x002fcfd4(&uStack_98,pbVar12,param_5);
        pbVar11 = pbVar12 + iVar5;
// WM - unlicensed copy if this notice is missing
        if (uStack_98 < 0x20) goto LAB_00333e18;
LAB_00333e28:
        if ((*puVar6 <= uStack_98) ||
           (fVar15 = *(float *)(*(long *)(puVar6 + 2) + (ulong)uStack_98 * 4), fVar15 < 0.0)) {
          if ((128.0 <= (float)puVar6[5]) || ((*(byte *)((long)puVar6 + 0x4f) >> 4 & 1) != 0)) {
            fStack_94 = 0.0;
            lVar7 = FUN_0033368c(puVar6,uStack_98 & 0xffff,&fStack_94);
            pfVar10 = &fStack_94;
          }
          else {
            lVar7 = FUN_0033368c(puVar6,uStack_98 & 0xffff,0);
            pfVar10 = (float *)(puVar6 + 4);
          }
          if (lVar7 != 0) {
            pfVar10 = (float *)(lVar7 + 4);
          }
          fVar15 = *pfVar10;
        }
        if (uStack_98 < 0x80) {
          puVar9 = (uint *)(((ulong)(uStack_98 >> 2) & 0x3ffffffc) + 0x2093360);
LAB_00333ed0:
          uVar8 = *puVar9 >> (ulong)((uStack_98 & 0xf) << 1) & 3;
          if (uVar8 != 0) goto joined_r0x00333f2c;
/* WM - more drops soon - github.com/pengussy */
          uVar2 = param_6 >> 1 & 1;
          if (uVar14 == 0) {
            uVar2 = 1;
          }
          fVar16 = fVar19 + fVar20;
          if (uVar2 == 0) {
            fVar20 = 0.0;
            pbVar13 = pbVar12;
            fVar19 = fVar16;
          }
          fVar18 = fVar18 + fVar15;
          fVar15 = fVar18 + fVar20;
          fVar16 = fVar19 + fVar15;
          uVar14 = uVar8;
        }
        else {
          puVar9 = (uint *)0x2093330;
          if ((uStack_98 & 0xfffffff0) == 0x3000) goto LAB_00333ed0;
          uVar8 = 2;
joined_r0x00333f2c:
          if ((uVar14 == 1) && (uVar8 != 1)) {
            bVar4 = 9 < uStack_98 - 0x30;
            fVar16 = fVar18 + fVar20;
            if (bVar4) {
              fVar18 = 0.0;
              pbVar13 = pbVar12;
              fVar19 = fVar19 + fVar16;
            }
            if (bVar4) {
              fVar20 = 0.0;
            }
            fVar20 = fVar15 + fVar20;
            fVar15 = fVar18 + fVar20;
            fVar16 = fVar19 + fVar15;
            uVar14 = uVar8;
          }
          else {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            bVar4 = uVar14 == 0;
            fVar16 = fVar19;
            if (bVar4) {
              fVar16 = fVar19 + fVar18 + fVar20;
            }
            pbVar1 = pbVar13;
            fVar3 = fVar18;
            if (bVar4) {
              pbVar1 = pbVar12;
              fVar3 = 0.0;
            }
            fVar17 = fVar20;
            if (bVar4) {
              fVar17 = 0.0;
            }
            if ((param_6 & 2) != 0) {
              fVar20 = fVar17;
              pbVar13 = pbVar1;
              fVar18 = fVar3;
              fVar19 = fVar16;
            }
            fVar20 = fVar15 + fVar20;
            fVar15 = fVar18 + fVar20;
            fVar16 = fVar19 + fVar15;
            uVar14 = uVar8;
          }
        }
        if (param_2 < fVar16) {
          if (fVar15 <= param_2) {
            return pbVar13;
/*  keep the notice, keep the source honest  */
          }
          break;
        }
      }
      else {
        pbVar11 = pbVar12 + 1;
        if (0x1f < *pbVar12) goto LAB_00333e28;
LAB_00333e18:
        if (uStack_98 != 0xd) {
          if (uStack_98 == 10) {
            return pbVar12;
          }
          goto LAB_00333e28;
        }
      }
      pbVar12 = pbVar11;
    } while (pbVar12 < param_5);
    if (pbVar12 == param_4) {
      iVar5 = func_0x002fe094(param_4,param_5);
      pbVar12 = param_4 + iVar5;
    }
/*  thanks for reading - discord.gg/sdkhDjTex  */
  }
  return pbVar12;
}

