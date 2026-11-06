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
 *  file-id: 0x3357d8:b6e31ba9eb
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00335dbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00335dc0) */
/* WARNING: Type propagation algorithm not settling */

void FUN_003357d8(undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4,int *param_5
                 )

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  short sVar29;
  undefined8 uVar30;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  undefined1 uVar31;
  uint uVar32;
  int iVar33;
  ulong uVar34;
  float *pfVar36;
  float *pfVar35;
  int iVar37;
  long lVar38;
  int iVar39;
  uint uVar40;
  int iVar41;
  undefined2 *puVar42;
  int iVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  ulong uVar49;
  long lVar50;
/* wm:no support for modified copies */
  uint uVar51;
  uint uVar52;
  ulong uVar53;
  float fVar54;
  float fVar55;
  float extraout_s0;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined8 uStack_240;
  undefined1 auStack_230 [16];
  undefined8 uStack_218;
  ulong auStack_210 [20];
  float afStack_170 [9];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  long lStack_b0;
  
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  lStack_b0 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_240 = *(undefined8 *)(param_3 + 0x70);
  uStack_218 = *(undefined8 *)(param_3 + 0x78);
  auVar62 = func_0x00334c2c(*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58),param_4)
  ;
  auStack_230._8_8_ = auVar62._8_8_;
  uVar34 = (ulong)auStack_230._8_8_ >> 0x20;
  auVar63 = auVar62;
  if (auVar62._8_4_ < auVar62._12_4_) {
    iVar37 = (int)param_4;
    iVar33 = 0;
    uVar51 = 0;
    uVar52 = 0;
    bVar6 = false;
    bVar5 = true;
    do {
      fVar28 = fStack_14c;
      fVar60 = afStack_170[8];
      fVar58 = afStack_170[7];
      fVar27 = afStack_170[6];
      fVar54 = afStack_170[5];
      fVar26 = afStack_170[4];
      fVar59 = afStack_170[3];
      fVar57 = afStack_170[2];
      fVar55 = afStack_170[1];
      auVar8._8_8_ = uStack_218;
      auVar8._0_8_ = uStack_240;
      auVar7._8_8_ = uStack_218;
      auVar7._0_8_ = uStack_240;
/* WM - chat: discord.gg/sdkhDjTex */
      auStack_230._0_8_ = auVar62._0_8_;
      fVar56 = (float)param_2;
      iVar39 = auVar62._8_4_;
      uVar45 = (long)iVar39 + 1;
      iVar41 = (int)uVar45;
      auStack_230._8_4_ = iVar41;
      auVar63._8_8_ = auStack_230._8_8_;
      auVar63._0_8_ = auStack_230._0_8_;
      auVar24._8_8_ = auStack_230._8_8_;
      auVar24._0_8_ = auStack_230._0_8_;
      auVar23._8_8_ = auStack_230._8_8_;
      auVar23._0_8_ = auStack_230._0_8_;
      auVar22._8_8_ = auStack_230._8_8_;
      auVar22._0_8_ = auStack_230._0_8_;
      auVar17._8_8_ = auStack_230._8_8_;
      auVar17._0_8_ = auStack_230._0_8_;
      auVar16._8_8_ = auStack_230._8_8_;
      auVar16._0_8_ = auStack_230._0_8_;
      auVar15._8_8_ = auStack_230._8_8_;
/*  chat: discord.gg/sdkhDjTex  */
      auVar15._0_8_ = auStack_230._0_8_;
      auVar14._8_8_ = auStack_230._8_8_;
      auVar14._0_8_ = auStack_230._0_8_;
      auVar13._8_8_ = auStack_230._8_8_;
      auVar13._0_8_ = auStack_230._0_8_;
      auVar12._8_8_ = auStack_230._8_8_;
      auVar12._0_8_ = auStack_230._0_8_;
      auVar11._8_8_ = auStack_230._8_8_;
      auVar11._0_8_ = auStack_230._0_8_;
      auVar9._8_8_ = auStack_230._8_8_;
      auVar9._0_8_ = auStack_230._0_8_;
      bVar3 = *(byte *)(auStack_230._0_8_ + (long)iVar39);
      iVar43 = (int)uVar34;
      auVar62 = auVar8;
      switch(bVar3) {
      case 1:
      case 3:
      case 0x12:
      case 0x17:
        iVar33 = iVar33 + (int)uVar52 / 2;
        uVar52 = 0;
        break;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      default:
        auVar63 = auVar9;
        if (bVar3 < 0x20 && bVar3 != 0x1c) goto LAB_003366b4;
        if (bVar3 == 0xff) {
          if (iVar41 < iVar43) {
            pbVar1 = (byte *)(auStack_230._0_8_ + uVar45);
            uVar45 = (ulong)(iVar39 + 2U);
            uVar40 = (uint)*pbVar1 << 8;
            if ((int)(iVar39 + 2U) < iVar43) goto LAB_003360ec;
LAB_00335d88:
            uVar44 = 0;
            auStack_230._8_4_ = SUB84(uVar45,0);
            if ((int)auStack_230._8_4_ < iVar43) goto LAB_003360fc;
LAB_00335d94:
            uVar46 = 0;
            if ((int)auStack_230._8_4_ < iVar43) goto LAB_00336110;
LAB_00335da0:
            uVar32 = 0;
          }
          else {
            uVar40 = 0;
            if (iVar43 <= iVar41) goto LAB_00335d88;
LAB_003360ec:
            uVar44 = (uint)*(byte *)(auStack_230._0_8_ + (long)(int)uVar45);
            auStack_230._8_4_ = (int)uVar45 + 1;
            if (iVar43 <= (int)auStack_230._8_4_) goto LAB_00335d94;
LAB_003360fc:
            lVar50 = (long)(int)auStack_230._8_4_;
            auStack_230._8_4_ = auStack_230._8_4_ + 1;
            uVar46 = (uint)*(byte *)(auStack_230._0_8_ + lVar50) << 8;
            if (iVar43 <= (int)auStack_230._8_4_) goto LAB_00335da0;
LAB_00336110:
            uVar32 = (uint)*(byte *)(auStack_230._0_8_ + (long)(int)auStack_230._8_4_);
            auStack_230._8_4_ = auStack_230._8_4_ + 1;
// WM - chat: discord.gg/sdkhDjTex
          }
          fVar55 = (float)(int)(uVar32 | uVar46 | (uVar44 | uVar40) << 0x10) / 65536.0;
        }
        else {
          iVar41 = iVar39;
          if (iVar43 <= iVar39) {
            iVar41 = iVar43;
          }
          if (-1 < iVar39) {
            iVar43 = iVar41;
          }
          auStack_230._8_4_ = iVar43;
          sVar29 = func_0x003351d0(auStack_230);
          fVar55 = (float)(int)sVar29;
        }
        auVar63._8_8_ = auStack_230._8_8_;
        auVar63._0_8_ = auStack_230._0_8_;
        if (0x2f < (int)uVar52) goto LAB_003366b4;
        afStack_170[(int)uVar52] = fVar55;
        uVar52 = uVar52 + 1;
        break;
      case 4:
        if (0 < (int)uVar52) {
          fVar56 = afStack_170[uVar52 - 1];
          fVar55 = 0.0;
          goto code_r0x003367e8;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        }
        goto LAB_003366b4;
      case 5:
        auVar63 = auVar24;
        if ((int)uVar52 < 2) goto LAB_003366b4;
        uVar34 = 1;
        pfVar35 = afStack_170;
        do {
          while( true ) {
            param_2 = *(ulong *)(param_5 + 4);
            fVar55 = (float)*(undefined8 *)pfVar35 + (float)param_2;
            fVar57 = (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) + (float)(param_2 >> 0x20);
            *(ulong *)(param_5 + 4) = CONCAT44(fVar57,fVar55);
            iVar43 = (int)fVar55;
            iVar41 = (int)fVar57;
            if (*param_5 == 0) break;
            if ((param_5[7] < iVar43) || (param_5[1] == 0)) {
              param_5[7] = iVar43;
              if (iVar41 <= param_5[9]) goto LAB_00335b70;
LAB_00335b88:
              param_5[9] = iVar41;
              if (iVar43 < param_5[6]) goto LAB_00335bb0;
LAB_00335b98:
              if (param_5[1] == 0) goto LAB_00335bb0;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
              if (param_5[8] <= iVar41) goto LAB_00335bc0;
LAB_00335bc8:
              param_5[8] = iVar41;
            }
            else {
              if (param_5[9] < iVar41) goto LAB_00335b88;
LAB_00335b70:
              if (param_5[1] == 0) goto LAB_00335b88;
              if (param_5[6] <= iVar43) goto LAB_00335b98;
LAB_00335bb0:
              param_5[6] = iVar43;
              if (iVar41 < param_5[8]) goto LAB_00335bc8;
LAB_00335bc0:
              if (param_5[1] == 0) goto LAB_00335bc8;
            }
            param_5[1] = 1;
            param_5[0xc] = param_5[0xc] + 1;
            uVar34 = uVar34 + 2;
            pfVar35 = pfVar35 + 2;
            if (uVar52 <= uVar34) goto LAB_00335be8;
          }
/* wm:keep the notice, keep the source honest */
          iVar39 = param_5[0xc];
          puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar39 * 0xe);
          *(undefined1 *)(puVar42 + 6) = 2;
          *puVar42 = (short)iVar43;
          puVar42[1] = (short)iVar41;
          *(undefined8 *)(puVar42 + 2) = 0;
          param_5[0xc] = iVar39 + 1;
          uVar34 = uVar34 + 2;
          pfVar35 = pfVar35 + 2;
        } while (uVar34 < uVar52);
LAB_00335be8:
        uVar52 = 0;
        break;
      case 6:
        iVar41 = 0;
        if (0 < (int)uVar52) {
          if (0 < (int)uVar52) {
            do {
              while( true ) {
                param_2 = (ulong)(uint)afStack_170[iVar41];
                fVar55 = (float)*(undefined8 *)(param_5 + 4) + afStack_170[iVar41];
                fVar57 = (float)((ulong)*(undefined8 *)(param_5 + 4) >> 0x20) + 0.0;
                *(ulong *)(param_5 + 4) = CONCAT44(fVar57,fVar55);
                iVar39 = (int)fVar55;
                iVar43 = (int)fVar57;
/* watermarked copy - do not remove */
                if (*param_5 == 0) {
                  iVar4 = param_5[0xc];
                  puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar4 * 0xe);
                  *(undefined1 *)(puVar42 + 6) = 2;
                  *puVar42 = (short)iVar39;
                  puVar42[1] = (short)iVar43;
                  *(undefined8 *)(puVar42 + 2) = 0;
                  param_5[0xc] = iVar4 + 1;
                }
                else {
                  if ((param_5[7] < iVar39) || (param_5[1] == 0)) {
                    param_5[7] = iVar39;
                  }
                  if ((param_5[9] < iVar43) || (param_5[1] == 0)) {
                    param_5[9] = iVar43;
                  }
                  if ((iVar39 < param_5[6]) || (param_5[1] == 0)) {
                    param_5[6] = iVar39;
                  }
                  if ((iVar43 < param_5[8]) || (param_5[1] == 0)) {
                    param_5[8] = iVar43;
                  }
                  param_5[1] = 1;
                  param_5[0xc] = param_5[0xc] + 1;
                }
                iVar41 = iVar41 + 1;
                if ((int)uVar52 <= iVar41) goto LAB_0033646c;
LAB_00336550:
                fVar55 = afStack_170[iVar41];
                fVar59 = (float)param_5[5];
                fVar57 = (float)param_5[4] + 0.0;
// WM - more drops soon - github.com/pengussy
                param_2 = (ulong)(uint)fVar57;
                param_5[4] = (int)fVar57;
                param_5[5] = (int)(fVar55 + fVar59);
                iVar39 = (int)fVar57;
                iVar43 = (int)(fVar55 + fVar59);
                if (*param_5 == 0) break;
                if ((param_5[7] < iVar39) || (param_5[1] == 0)) {
                  param_5[7] = iVar39;
                }
                if ((param_5[9] < iVar43) || (param_5[1] == 0)) {
                  param_5[9] = iVar43;
                }
                if ((iVar39 < param_5[6]) || (param_5[1] == 0)) {
                  param_5[6] = iVar39;
                }
                if ((iVar43 < param_5[8]) || (param_5[1] == 0)) {
                  param_5[8] = iVar43;
                }
                param_5[1] = 1;
                param_5[0xc] = param_5[0xc] + 1;
                iVar41 = iVar41 + 1;
                if ((int)uVar52 <= iVar41) goto LAB_0033646c;
              }
              iVar4 = param_5[0xc];
              puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar4 * 0xe);
              *(undefined1 *)(puVar42 + 6) = 2;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              *puVar42 = (short)iVar39;
              puVar42[1] = (short)iVar43;
              *(undefined8 *)(puVar42 + 2) = 0;
              param_5[0xc] = iVar4 + 1;
              iVar41 = iVar41 + 1;
            } while (iVar41 < (int)uVar52);
          }
          goto LAB_0033646c;
        }
        goto LAB_003366b8;
      case 7:
        iVar41 = 0;
        if (0 < (int)uVar52) {
          if (0 < (int)uVar52) goto LAB_00336550;
          goto LAB_0033646c;
        }
        goto LAB_003366b8;
      case 8:
        auVar63 = auVar23;
        if ((int)uVar52 < 6) goto LAB_003366b4;
        uVar34 = 5;
// WM - no support for modified copies
        pfVar35 = afStack_170 + 3;
        do {
          param_2 = (ulong)(uint)pfVar35[-2];
          func_0x003369e0(pfVar35[-3],param_2,pfVar35[-1],*pfVar35,pfVar35[1],pfVar35[2],param_5);
          uVar34 = uVar34 + 6;
          pfVar35 = pfVar35 + 6;
        } while (uVar34 < uVar52);
LAB_00335e04:
        uVar52 = 0;
        break;
      case 10:
        auVar62 = auVar7;
        if (!bVar6) {
          uVar40 = *(uint *)(param_3 + 0x9c);
          auVar62 = auVar8;
          if (uVar40 != 0) {
            lVar50 = *(long *)(param_3 + 0x90);
            uVar44 = uVar40 & (int)uVar40 >> 0x1f;
// found on a paste site? it was re-uploaded illegally
            if (0 < (int)uVar40) {
              if (*(char *)(lVar50 + (ulong)uVar44) != '\0') {
                if (*(char *)(lVar50 + (ulong)uVar44) == '\x03') {
                  if (uVar40 == 1) {
                    uVar46 = 0;
                    uVar44 = 1;
                  }
                  else {
                    uVar46 = (uint)*(byte *)(lVar50 + 1) << 8;
                    uVar44 = 2;
                  }
                  if (uVar44 < uVar40) {
                    uVar32 = (uint)*(byte *)(lVar50 + (ulong)uVar44);
                    uVar44 = uVar44 + 1;
                  }
                  else {
                    uVar32 = 0;
                  }
                  if (uVar44 < uVar40) {
                    uVar34 = (ulong)uVar44;
                    uVar44 = uVar44 + 1;
                    uVar47 = (uint)*(byte *)(lVar50 + uVar34) << 8;
                  }
                  else {
                    uVar47 = 0;
                  }
                  if (uVar44 < uVar40) {
                    uVar48 = (uint)*(byte *)(lVar50 + (ulong)uVar44);
                    uVar44 = uVar44 + 1;
/* WM - stripping the watermark breaks the license */
                  }
                  else {
                    uVar48 = 0;
                  }
                  uVar32 = uVar32 | uVar46;
                  if (uVar32 != 0) {
                    uVar46 = uVar48 | uVar47;
                    do {
                      if ((int)uVar44 < (int)uVar40) {
                        uVar31 = *(undefined1 *)(lVar50 + (int)uVar44);
                        uVar44 = uVar44 + 1;
                        if ((int)uVar44 < (int)uVar40) goto LAB_00336328;
LAB_0033630c:
                        uVar47 = 0;
                      }
                      else {
                        uVar31 = 0;
                        if ((int)uVar40 <= (int)uVar44) goto LAB_0033630c;
LAB_00336328:
                        lVar38 = (long)(int)uVar44;
                        uVar44 = uVar44 + 1;
                        uVar47 = (uint)*(byte *)(lVar50 + lVar38) << 8;
                      }
                      if ((int)uVar44 < (int)uVar40) {
                        lVar38 = (long)(int)uVar44;
                        uVar44 = uVar44 + 1;
                        uVar47 = *(byte *)(lVar50 + lVar38) | uVar47;
                      }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      if (((int)uVar46 <= iVar37) && (iVar37 < (int)uVar47)) goto LAB_00336228;
                      uVar32 = uVar32 - 1;
                      uVar46 = uVar47;
                    } while (uVar32 != 0);
                  }
                }
                auVar62 = ZEXT816(0);
                goto LAB_00336360;
              }
              uVar44 = 1;
            }
            uVar44 = uVar44 + iVar37;
            uVar46 = uVar44;
            if ((int)uVar40 <= (int)uVar44) {
              uVar46 = uVar40;
            }
            uVar32 = uVar40;
            if (-1 < (int)uVar44) {
              uVar32 = uVar46;
            }
            if ((int)uVar32 < (int)uVar40) {
              uVar31 = *(undefined1 *)(lVar50 + (int)uVar32);
            }
/* wm:more drops soon - github.com/pengussy */
            else {
              uVar31 = 0;
            }
LAB_00336228:
            uVar30 = *(undefined8 *)(param_3 + 0x40);
            uVar2 = *(undefined8 *)(param_3 + 0x48);
            auVar62 = func_0x00334c2c(*(undefined8 *)(param_3 + 0x80),
                                      *(undefined8 *)(param_3 + 0x88),uVar31);
            auVar62 = func_0x00334fa8(uVar30,uVar2,auVar62._0_8_,auVar62._8_8_);
          }
        }
LAB_00336360:
        bVar6 = true;
      case 0x1d:
        auVar10._8_8_ = auStack_230._8_8_;
        auVar10._0_8_ = auStack_230._0_8_;
        auVar63._8_8_ = auStack_230._8_8_;
        auVar63._0_8_ = auStack_230._0_8_;
        uStack_218 = auVar62._8_8_;
        uStack_240 = auVar62._0_8_;
        if (((int)uVar52 < 1) || (auVar63 = auVar10, 9 < (int)uVar51)) goto LAB_003366b4;
        fVar55 = afStack_170[uVar52 - 1];
        auStack_210[(long)(int)uVar51 * 2 + 1] = auStack_230._8_8_;
        auStack_210[(long)(int)uVar51 * 2] = auStack_230._0_8_;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        if (bVar3 == 10) {
          uVar44 = auVar62._12_4_;
          uVar40 = uVar44 & (int)uVar44 >> 0x1f;
          auVar63 = auVar62;
          if (0 < (int)uVar44) goto LAB_003363e4;
LAB_003363b0:
          uVar46 = 0;
          if ((int)uVar40 < (int)uVar44) goto LAB_003363f8;
LAB_003363bc:
          uVar44 = 0;
        }
        else {
          auVar62 = *(undefined1 (*) [16])(param_3 + 0x60);
          uVar44 = (uint)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20);
          uVar40 = uVar44 & (int)uVar44 >> 0x1f;
          auVar63 = *(undefined1 (*) [16])(param_3 + 0x60);
          if ((int)uVar44 < 1) goto LAB_003363b0;
LAB_003363e4:
          auVar62 = auVar63;
          uVar46 = (uint)*(byte *)(auVar62._0_8_ + (ulong)uVar40) << 8;
          uVar40 = 1;
          if ((int)uVar44 < 2) goto LAB_003363bc;
LAB_003363f8:
          uVar44 = (uint)*(byte *)(auVar62._0_8_ + (long)(int)uVar40);
          uVar40 = uVar40 + 1;
        }
        uVar44 = uVar44 | uVar46;
        iVar41 = 0x46b;
        if (uVar44 < 0x4d8) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          iVar41 = 0x6b;
        }
        iVar43 = 0x8000;
        if (uVar44 < 0x846c) {
          iVar43 = iVar41;
        }
        if ((uint)(iVar43 + (int)fVar55) < uVar44) {
          auVar63 = func_0x00334c2c(auVar62._0_8_,auVar62._8_8_ & 0xffffffff00000000 | (ulong)uVar40
                                   );
        }
        else {
          auVar63 = ZEXT816(0);
        }
        param_2 = auStack_230._0_8_;
        if (auVar63._8_8_ >> 0x20 == 0) goto LAB_003366b4;
        auStack_230._8_8_ = auVar63._8_8_ & 0xffffffff00000000;
        uVar52 = uVar52 - 1;
        uVar51 = uVar51 + 1;
        auStack_230._0_8_ = auVar63._0_8_;
        break;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      case 0xb:
        uVar40 = uVar51 - 1;
        auVar63 = auVar22;
        if ((int)uVar51 < 1) goto LAB_003366b4;
        auStack_230._8_8_ = auStack_210[(ulong)uVar40 * 2 + 1];
        auStack_230._0_8_ = auStack_210[(ulong)uVar40 * 2];
        uVar51 = uVar40;
        break;
      case 0xc:
        auVar63 = auVar17;
        if (iVar41 < iVar43) {
          auStack_230._8_4_ = iVar39 + 2;
          auVar63._8_8_ = auStack_230._8_8_;
          auVar25._8_8_ = auStack_230._8_8_;
          auVar25._0_8_ = auStack_230._0_8_;
          auVar21._8_8_ = auStack_230._8_8_;
          auVar21._0_8_ = auStack_230._0_8_;
          auVar20._8_8_ = auStack_230._8_8_;
          auVar20._0_8_ = auStack_230._0_8_;
          auVar19._8_8_ = auStack_230._8_8_;
          auVar19._0_8_ = auStack_230._0_8_;
          auVar18._8_8_ = auStack_230._8_8_;
// WM - donate: donate/README.md
          auVar18._0_8_ = auStack_230._0_8_;
          bVar3 = *(byte *)(auStack_230._0_8_ + uVar45);
          fVar61 = fStack_148;
          if (bVar3 < 0x24) {
            if (bVar3 == 0x22) {
              auVar63 = auVar19;
              if (6 < (int)uVar52) {
                func_0x003369e0(afStack_170[0],0,afStack_170[1],afStack_170[2],afStack_170[3],0,
                                param_5);
                fVar58 = -fVar57;
                param_2 = 0;
                fVar57 = 0.0;
                fVar55 = fVar54;
                fVar54 = fVar26;
                fVar60 = fVar27;
                goto LAB_00335f74;
              }
              goto LAB_003366b4;
// donate: donate/README.md
            }
            auVar63 = auVar25;
            if (bVar3 != 0x23) goto LAB_003366b8;
            auVar63 = auVar18;
            if ((int)uVar52 < 0xd) goto LAB_003366b4;
            fVar55 = fStack_144;
          }
          else {
            if (bVar3 == 0x24) {
              auVar63 = auVar21;
              if (8 < (int)uVar52) {
                func_0x003369e0(afStack_170[0],afStack_170[1],afStack_170[2],afStack_170[3],
                                afStack_170[4],0,param_5);
                fVar57 = -(fVar55 + fVar59 + fVar58);
                param_2 = 0;
                fVar55 = fVar27;
                goto LAB_00335f74;
              }
              goto LAB_003366b4;
            }
            if (bVar3 != 0x25) goto LAB_003366b8;
            auVar63 = auVar20;
            if ((int)uVar52 < 0xb) goto LAB_003366b4;
            fVar57 = afStack_170[0] + afStack_170[2] + afStack_170[4] + afStack_170[6] +
                     afStack_170[8];
/* chat: discord.gg/sdkhDjTex */
            fVar59 = afStack_170[1] + afStack_170[3] + afStack_170[5] + afStack_170[7] + fStack_14c;
            fVar55 = -fVar59;
            if (ABS(fVar57) <= ABS(fVar59)) {
              fVar61 = -fVar57;
              fVar55 = fStack_148;
            }
          }
          param_2 = (ulong)(uint)afStack_170[7];
          func_0x003369e0(afStack_170[0],afStack_170[1],afStack_170[2],afStack_170[3],afStack_170[4]
                          ,afStack_170[5],param_5);
          func_0x003369e0(fVar27,param_2,fVar60,fVar28,fVar61,fVar55,param_5);
          goto LAB_0033646c;
        }
        goto LAB_003366b4;
      case 0xe:
        fVar56 = (float)param_5[2];
        if ((fVar56 != (float)param_5[4]) || ((float)param_5[3] != (float)param_5[5])) {
          iVar37 = (int)fVar56;
          iVar33 = (int)(float)param_5[3];
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          if (*param_5 == 0) {
            iVar41 = param_5[0xc];
            puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar41 * 0xe);
            *(undefined1 *)(puVar42 + 6) = 2;
            *puVar42 = (short)iVar37;
            puVar42[1] = (short)iVar33;
            *(undefined8 *)(puVar42 + 2) = 0;
          }
          else {
            if ((param_5[7] < iVar37) || (param_5[1] == 0)) {
              param_5[7] = iVar37;
            }
            if ((param_5[9] < iVar33) || (param_5[1] == 0)) {
              param_5[9] = iVar33;
            }
            if ((iVar37 < param_5[6]) || (param_5[1] == 0)) {
              param_5[6] = iVar37;
            }
            if ((iVar33 < param_5[8]) || (param_5[1] == 0)) {
              param_5[8] = iVar33;
            }
            param_5[1] = 1;
            iVar41 = param_5[0xc];
          }
          param_5[0xc] = iVar41 + 1;
        }
        uVar30 = 1;
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b0) {
          return;
        }
        goto LAB_003367e4;
      case 0x13:
      case 0x14:
        if (bVar5) {
          iVar33 = iVar33 + (int)uVar52 / 2;
        }
        iVar39 = iVar33 + 0xe;
        if (-8 < iVar33) {
// origin: github.com/pengussy
          iVar39 = iVar33 + 7;
        }
        iVar41 = iVar41 + (iVar39 >> 3);
        iVar39 = iVar41;
        if (iVar43 <= iVar41) {
          iVar39 = iVar43;
        }
        if (-1 < iVar41) {
          iVar43 = iVar39;
        }
        auStack_230._8_4_ = iVar43;
        bVar5 = false;
        uVar52 = 0;
        break;
      case 0x15:
        auVar63 = auVar16;
        if (1 < (int)uVar52) {
          fVar55 = afStack_170[uVar52 - 2];
          fVar56 = afStack_170[uVar52 - 1];
          goto code_r0x003367e8;
        }
        goto LAB_003366b4;
      case 0x16:
        auVar63 = auVar15;
        if (0 < (int)uVar52) {
          fVar55 = afStack_170[uVar52 - 1];
          fVar56 = 0.0;
          goto code_r0x003367e8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
        }
        goto LAB_003366b4;
      case 0x18:
        auVar63 = auVar14;
        if ((int)uVar52 < 8) goto LAB_003366b4;
        lVar50 = -6;
        pfVar35 = afStack_170;
        do {
          param_2 = (ulong)(uint)pfVar35[1];
          func_0x003369e0(*pfVar35,param_2,pfVar35[2],pfVar35[3],pfVar35[4],pfVar35[5],param_5);
          auVar63._8_8_ = auStack_230._8_8_;
          auVar63._0_8_ = auStack_230._0_8_;
          lVar50 = lVar50 + 6;
          pfVar35 = pfVar35 + 6;
        } while (lVar50 < (long)((ulong)uVar52 - 0xd));
        if ((int)uVar52 <= (int)lVar50 + 7) goto LAB_003366b4;
        param_2 = *(ulong *)(param_5 + 4);
        fVar55 = (float)*(undefined8 *)pfVar35 + (float)param_2;
        fVar57 = (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) + (float)(param_2 >> 0x20);
        *(ulong *)(param_5 + 4) = CONCAT44(fVar57,fVar55);
        iVar43 = (int)fVar55;
/* found on a paste site? it was re-uploaded illegally */
        iVar41 = (int)fVar57;
        if (*param_5 == 0) {
          iVar39 = param_5[0xc];
          puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar39 * 0xe);
          *(undefined1 *)(puVar42 + 6) = 2;
          *puVar42 = (short)iVar43;
          puVar42[1] = (short)iVar41;
          *(undefined8 *)(puVar42 + 2) = 0;
        }
        else {
          if ((param_5[7] < iVar43) || (param_5[1] == 0)) {
            param_5[7] = iVar43;
          }
          if ((param_5[9] < iVar41) || (param_5[1] == 0)) {
            param_5[9] = iVar41;
          }
          if ((iVar43 < param_5[6]) || (param_5[1] == 0)) {
            param_5[6] = iVar43;
          }
          if ((iVar41 < param_5[8]) || (param_5[1] == 0)) {
            param_5[8] = iVar41;
          }
          param_5[1] = 1;
          iVar39 = param_5[0xc];
        }
        param_5[0xc] = iVar39 + 1;
        uVar52 = 0;
        break;
      case 0x19:
        auVar63 = auVar12;
        if ((int)uVar52 < 8) goto LAB_003366b4;
        pfVar35 = afStack_170;
        uVar34 = 4;
        do {
          uVar45 = uVar34;
/*  origin: github.com/pengussy  */
          pfVar36 = pfVar35 + 2;
          param_2 = *(ulong *)(param_5 + 4);
          fVar55 = (float)*(undefined8 *)pfVar35 + (float)param_2;
          fVar57 = (float)((ulong)*(undefined8 *)pfVar35 >> 0x20) + (float)(param_2 >> 0x20);
          *(ulong *)(param_5 + 4) = CONCAT44(fVar57,fVar55);
          iVar43 = (int)fVar55;
          iVar41 = (int)fVar57;
          if (*param_5 == 0) {
            iVar39 = param_5[0xc];
            puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar39 * 0xe);
            *(undefined1 *)(puVar42 + 6) = 2;
            *puVar42 = (short)iVar43;
            puVar42[1] = (short)iVar41;
            *(undefined8 *)(puVar42 + 2) = 0;
          }
          else {
            if ((param_5[7] < iVar43) || (param_5[1] == 0)) {
              param_5[7] = iVar43;
              if (iVar41 <= param_5[9]) goto LAB_00335ec8;
LAB_00335ee0:
              param_5[9] = iVar41;
              if (iVar43 < param_5[6]) goto LAB_00335f08;
LAB_00335ef0:
              if (param_5[1] == 0) goto LAB_00335f08;
              if (param_5[8] <= iVar41) goto LAB_00335f18;
LAB_00335f20:
              param_5[8] = iVar41;
            }
            else {
              if (param_5[9] < iVar41) goto LAB_00335ee0;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
LAB_00335ec8:
              if (param_5[1] == 0) goto LAB_00335ee0;
              if (param_5[6] <= iVar43) goto LAB_00335ef0;
LAB_00335f08:
              param_5[6] = iVar43;
              if (iVar41 < param_5[8]) goto LAB_00335f20;
LAB_00335f18:
              if (param_5[1] == 0) goto LAB_00335f20;
            }
            param_5[1] = 1;
            iVar39 = param_5[0xc];
          }
          param_5[0xc] = iVar39 + 1;
          uVar34 = uVar45 + 2;
          pfVar35 = pfVar36;
        } while (uVar45 - 1 < (ulong)(uVar52 - 6));
        auVar63 = auVar13;
        if ((int)uVar52 <= (int)(uVar45 + 3)) goto LAB_003366b4;
        param_2 = (ulong)(uint)afStack_170[(uVar52 & 0x7ffffffe) - 5];
        fVar58 = afStack_170[(int)uVar34 - 1];
        fVar57 = afStack_170[uVar45 + 3 & 0xffffffff];
        fVar55 = afStack_170[(int)uVar34 - 2];
        fVar54 = *pfVar36;
        fVar60 = afStack_170[uVar34 & 0xfffffffe];
LAB_00335f74:
        func_0x003369e0(fVar54,param_2,fVar55,fVar58,fVar60,fVar57,param_5);
        uVar52 = 0;
        break;
      case 0x1a:
      case 0x1b:
        auVar63 = auVar11;
        if (3 < (int)uVar52) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          uVar40 = uVar52 & 1;
          uVar34 = (ulong)uVar40;
          if (uVar40 + 3 < uVar52) {
            uVar45 = 0;
            if (uVar40 != 0) {
              uVar45 = (ulong)(uint)afStack_170[0];
            }
            uVar49 = (ulong)uVar52;
            if ((uVar52 & 1) == 0) {
              fVar55 = afStack_170[0];
            }
            uVar53 = uVar34 + 7;
            if (bVar3 == 0x1b) {
              func_0x003369e0(fVar55,uVar45,afStack_170[uVar34 + 1],afStack_170[uVar34 + 2],
                              afStack_170[uVar34 + 3],0,param_5);
              param_2 = uVar45;
              if (uVar53 < uVar49) {
                pfVar35 = afStack_170 + uVar34 + 7;
                do {
                  param_2 = 0;
                  func_0x003369e0(pfVar35[-3],0,pfVar35[-2],pfVar35[-1],*pfVar35,0,param_5);
                  uVar53 = uVar53 + 4;
                  pfVar35 = pfVar35 + 4;
                } while (uVar53 < uVar49);
/* WM - donate: donate/README.md */
              }
            }
            else {
              param_2 = (ulong)(uint)fVar55;
              func_0x003369e0(uVar45,param_2,afStack_170[uVar34 + 1],afStack_170[uVar34 + 2],0,
                              afStack_170[uVar34 + 3],param_5);
              if (uVar53 < uVar49) {
                pfVar35 = afStack_170 + uVar34 + 7;
                do {
                  param_2 = (ulong)(uint)pfVar35[-3];
                  func_0x003369e0(0,param_2,pfVar35[-2],pfVar35[-1],0,*pfVar35,param_5);
                  uVar53 = uVar53 + 4;
                  pfVar35 = pfVar35 + 4;
                } while (uVar53 < uVar49);
              }
            }
            goto LAB_00335e04;
          }
          goto LAB_0033646c;
        }
        goto LAB_003366b4;
      case 0x1e:
        if (3 < (int)uVar52) {
          lVar38 = 0;
          lVar50 = 3;
          if (3 < (int)uVar52) {
            do {
              param_2 = (ulong)(uint)afStack_170[lVar38];
              fVar55 = 0.0;
/*  donate: donate/README.md  */
              if (uVar52 - (int)lVar38 == 5) {
                fVar55 = afStack_170[lVar38 + 4];
              }
              func_0x003369e0(0,param_2,afStack_170[lVar38 + 1],afStack_170[lVar38 + 2],
                              afStack_170[lVar50],fVar55,param_5);
              lVar38 = (long)(int)(lVar38 + 4);
              lVar50 = lVar38 + 3;
              if ((int)uVar52 <= (int)lVar50) break;
LAB_0033666c:
              fVar55 = 0.0;
              if (uVar52 - (int)lVar38 == 5) {
                fVar55 = afStack_170[lVar38 + 4];
              }
              param_2 = 0;
              func_0x003369e0(afStack_170[lVar38],0,afStack_170[lVar38 + 1],afStack_170[lVar38 + 2],
                              fVar55,afStack_170[lVar50],param_5);
              lVar38 = (long)(int)(lVar38 + 4);
              lVar50 = lVar38 + 3;
            } while ((int)lVar50 < (int)uVar52);
          }
          goto LAB_0033646c;
        }
        goto LAB_003366b8;
      case 0x1f:
        if ((int)uVar52 < 4) goto LAB_003366b8;
        lVar38 = 0;
        lVar50 = 3;
        if (3 < (int)uVar52) goto LAB_0033666c;
LAB_0033646c:
        uVar52 = 0;
      }
      auVar63._8_8_ = auStack_230._8_8_;
      auVar63._0_8_ = auStack_230._0_8_;
/*  keep the notice, keep the source honest  */
      auVar62._8_8_ = auStack_230._8_8_ & 0xffffffff;
      auVar62._0_8_ = auStack_230._0_8_;
      uVar34 = (ulong)(uint)auStack_230._12_4_;
    } while ((int)auStack_230._8_4_ < (int)auStack_230._12_4_);
  }
LAB_003366b4:
  fVar56 = (float)param_2;
LAB_003366b8:
  uVar30 = 0;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b0) {
    return;
  }
LAB_003367e4:
  auStack_230 = auVar63;
  param_5 = (int *)___stack_chk_fail(uVar30);
  fVar55 = extraout_s0;
code_r0x003367e8:
  fVar57 = (float)param_5[4];
  if (((float)param_5[2] == fVar57) && (fVar59 = (float)param_5[5], (float)param_5[3] == fVar59))
  goto code_r0x003368e8;
  iVar37 = (int)(float)param_5[2];
  iVar33 = (int)(float)param_5[3];
  if (*param_5 == 0) {
    iVar41 = param_5[0xc];
    puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar41 * 0xe);
    *(undefined1 *)(puVar42 + 6) = 2;
    *puVar42 = (short)iVar37;
    puVar42[1] = (short)iVar33;
/* WM - watermarked copy - do not remove */
    *(undefined8 *)(puVar42 + 2) = 0;
    fVar57 = (float)param_5[4];
  }
  else {
    if ((param_5[7] < iVar37) || (param_5[1] == 0)) {
      param_5[7] = iVar37;
      if (iVar33 <= param_5[9]) goto code_r0x00336848;
code_r0x00336860:
      param_5[9] = iVar33;
      if (iVar37 < param_5[6]) goto code_r0x00336888;
code_r0x00336870:
      if (param_5[1] == 0) goto code_r0x00336888;
      if (param_5[8] <= iVar33) goto code_r0x00336898;
code_r0x003368a0:
      param_5[8] = iVar33;
    }
    else {
      if (param_5[9] < iVar33) goto code_r0x00336860;
code_r0x00336848:
      if (param_5[1] == 0) goto code_r0x00336860;
      if (param_5[6] <= iVar37) goto code_r0x00336870;
code_r0x00336888:
      param_5[6] = iVar37;
      if (iVar33 < param_5[8]) goto code_r0x003368a0;
code_r0x00336898:
      if (param_5[1] == 0) goto code_r0x003368a0;
    }
    param_5[1] = 1;
    iVar41 = param_5[0xc];
  }
  param_5[0xc] = iVar41 + 1;
  fVar59 = (float)param_5[5];
/* WM - do not claim this as your own */
code_r0x003368e8:
  fVar55 = fVar55 + fVar57;
  fVar56 = fVar56 + fVar59;
  param_5[4] = (int)fVar55;
  param_5[5] = (int)fVar56;
  param_5[2] = (int)fVar55;
  param_5[3] = (int)fVar56;
  iVar37 = (int)fVar55;
  iVar33 = (int)fVar56;
  if (*param_5 == 0) {
    iVar41 = param_5[0xc];
    puVar42 = (undefined2 *)(*(long *)(param_5 + 10) + (long)iVar41 * 0xe);
    *(undefined1 *)(puVar42 + 6) = 1;
    *puVar42 = (short)iVar37;
    puVar42[1] = (short)iVar33;
    *(undefined8 *)(puVar42 + 2) = 0;
    param_5[0xc] = iVar41 + 1;
    return;
  }
  if ((param_5[7] < iVar37) || (param_5[1] == 0)) {
    param_5[7] = iVar37;
    iVar41 = param_5[9];
  }
  else {
    iVar41 = param_5[9];
  }
  if ((iVar41 < iVar33) || (param_5[1] == 0)) {
    param_5[9] = iVar33;
    iVar41 = param_5[6];
/* thanks for reading - discord.gg/sdkhDjTex */
  }
  else {
    iVar41 = param_5[6];
  }
  if ((iVar37 < iVar41) || (param_5[1] == 0)) {
    param_5[6] = iVar37;
    iVar37 = param_5[8];
  }
  else {
    iVar37 = param_5[8];
  }
  if ((iVar33 < iVar37) || (param_5[1] == 0)) {
    param_5[8] = iVar33;
  }
  param_5[1] = 1;
  param_5[0xc] = param_5[0xc] + 1;
  return;
}

