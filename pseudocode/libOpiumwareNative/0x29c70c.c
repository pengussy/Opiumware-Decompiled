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
 *  file-id: 0x29c70c:98dbe04b31
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0029c950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0029c954) */

undefined *
FUN_0029c70c(undefined1 *param_1,long param_2,undefined1 *param_3,undefined *param_4,uint param_5,
            uint param_6,int param_7,long param_8,undefined *param_9,undefined *param_10,
            int *param_11,uint param_12)

{
  int *piVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong *puVar23;
  uint *puVar24;
  undefined *unaff_x19;
// WM - found on a paste site? it was re-uploaded illegally
  undefined *unaff_x20;
  undefined *puVar25;
  undefined *unaff_x21;
  undefined *puVar26;
  ulong unaff_x22;
  ulong uVar27;
  long unaff_x29;
  long lVar28;
  undefined8 unaff_x30;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  undefined1 auStack_b0 [12];
  uint uStack_a4;
  long lStack_a0;
  int iStack_94;
  long lStack_90;
  uint uStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  uint uStack_6c;
/* wm:watermarked copy - do not remove */
  uint uStack_68;
  undefined4 uStack_64;
  
  uVar2 = param_12;
  piVar1 = param_11;
  puVar15 = param_10;
  puVar5 = auStack_b0;
  lVar28 = (long)register0x00000008 + -0x10;
  puVar26 = (undefined *)((ulong)(uint)-(int)param_8 & 7);
  puVar12 = puVar26 + param_8;
  uVar27 = 0;
  if (puVar26 <= param_9) {
    uVar27 = (long)param_9 - (long)puVar26;
  }
  puVar25 = (undefined *)0x0;
  if (puVar26 <= param_9) {
// origin: github.com/pengussy
    puVar25 = puVar12;
  }
  if (uVar27 >> 3 < 0x3e1) {
    return (undefined *)0xffffffffffffffbe;
  }
  if (param_2 == 0) {
    return (undefined *)0x0;
  }
  if (param_4 == (undefined *)0x0) {
    return (undefined *)0x0;
  }
  if ((undefined *)0x20000 < param_4) {
    return (undefined *)0xffffffffffffffb8;
  }
  if (0xc < param_6) {
    return (undefined *)0xffffffffffffffd4;
  }
  if (0xff < param_5) {
    return (undefined *)0xffffffffffffffd2;
  }
  uStack_64 = param_5;
  if (param_5 == 0) {
    uStack_64 = 0xff;
  }
  uVar4 = uStack_64;
  uStack_84 = 0xb;
  if (param_6 != 0) {
    uStack_84 = param_6;
  }
// WM - keep the notice, keep the source honest
  bVar6 = (param_12 & 4) == 0;
  bVar7 = param_11 == (int *)0x0;
  uVar27 = (ulong)(bVar6 || bVar7);
  puStack_78 = param_3;
  if ((!bVar6 && !bVar7) && (*param_11 == 2)) {
    puVar14 = param_1 + param_2;
    puVar5 = (undefined1 *)register0x00000008;
    puVar13 = param_1;
    puVar12 = param_10;
    puVar15 = unaff_x19;
    puVar25 = unaff_x20;
    uVar27 = unaff_x22;
    lVar28 = unaff_x29;
    goto code_r0x0029d340;
  }
  lStack_a0 = param_8;
  iStack_94 = param_7;
  lStack_90 = param_2;
  puStack_80 = param_1;
// WM - chat: discord.gg/sdkhDjTex
  if ((&UNK_00009fff < param_4) && ((param_12 >> 3 & 1) != 0)) {
    uStack_68 = uStack_64;
    uStack_a4 = func_0x002989e8(puVar25,&uStack_68,param_3,0x1000);
    uStack_6c = uVar4;
    uVar9 = func_0x002989e8(puVar25,&uStack_6c,param_3 + (long)(param_4 + -0x1000),0x1000);
    if ((uVar9 & 0xffffffff) + (ulong)uStack_a4 < 0x45) {
      return (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)
            func_0x0029910c(puVar25,&uStack_64,puStack_78,param_4,puVar25 + 0xc08,0x1000);
  if ((undefined *)0xffffffffffffff88 < puVar10) {
    return puVar10;
  }
  if (puVar10 == param_4) {
    *puStack_80 = *puStack_78;
    return (undefined *)0x1;
  }
  if (puVar10 <= (undefined *)(((ulong)param_4 >> 7) + 4)) {
    return (undefined *)0x0;
  }
  if (piVar1 == (int *)0x0) {
LAB_0029c970:
    uVar11 = func_0x0029c1e4(uStack_84,param_4,uStack_64,puVar25 + 0xc08,
                             "/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices"
                             ,puVar25 + 0x400,puVar12,uVar2);
    puVar10 = (undefined *)
              FUN_00299d8c(puVar25 + 0x400,puVar12,uStack_64,uVar11,puVar25 + 0xc08,
                           "/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices"
                          );
    if ((undefined *)0xffffffffffffff88 < puVar10) {
      return puVar10;
    }
    unaff_x21 = (undefined *)
/* thanks for reading - discord.gg/sdkhDjTex */
                func_0x0029930c(puStack_80,lStack_90,puVar25 + 0x400,uStack_64,puVar10,
                                puVar25 + 0xc08,0x2ec);
    if ((undefined *)0xffffffffffffff88 < unaff_x21) {
      return unaff_x21;
    }
    if (piVar1 == (int *)0x0) {
      if (param_4 <= unaff_x21 + 0xc) {
        return (undefined *)0x0;
      }
    }
    else {
      if (*piVar1 != 0) {
        if (-1 < (int)uStack_64) {
          uVar9 = (ulong)uStack_64 + 1;
          if (uStack_64 == 0) {
            uVar20 = 0;
/*  no support for modified copies  */
            uVar16 = 0;
LAB_0029cb80:
            lVar18 = uVar9 - uVar20;
            pbVar21 = puVar15 + uVar20 * 8;
            puVar24 = (uint *)(puVar26 + lStack_a0 + uVar20 * 4);
            do {
              pbVar21 = pbVar21 + 8;
              uVar16 = uVar16 + (ulong)*pbVar21 * (ulong)*puVar24;
              lVar18 = lVar18 + -1;
              puVar24 = puVar24 + 1;
            } while (lVar18 != 0);
          }
          else if (uStack_64 < 0xf) {
            uVar16 = 0;
            uVar22 = 0;
LAB_0029cb28:
            uVar20 = uVar9 & 0xfffffffe;
            lVar29 = 0;
            lVar18 = uVar22 - uVar20;
            puVar17 = (ulong *)(puVar26 + lStack_a0 + uVar22 * 4);
            puVar23 = (ulong *)(puVar15 + uVar22 * 8 + 8);
            do {
              uVar16 = uVar16 + (*puVar23 & 0xff) * (*puVar17 & 0xffffffff);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
              lVar29 = lVar29 + (puVar23[1] & 0xff) * (*puVar17 >> 0x20);
              lVar18 = lVar18 + 2;
              puVar17 = puVar17 + 1;
              puVar23 = puVar23 + 2;
            } while (lVar18 != 0);
            uVar16 = uVar16 + lVar29;
            if (uVar20 != uVar9) goto LAB_0029cb80;
          }
          else {
            uVar20 = uVar9 & 0xfffffff0;
            lVar18 = 0;
            lVar29 = 0;
            puVar17 = (ulong *)(puVar15 + 0x48);
            lVar30 = 0;
            lVar31 = 0;
            lVar34 = 0;
            lVar35 = 0;
            lVar36 = 0;
            lVar37 = 0;
            lVar38 = 0;
            lVar39 = 0;
            lVar32 = 0;
            lVar33 = 0;
            lVar42 = 0;
            lVar43 = 0;
            lVar40 = 0;
            lVar41 = 0;
            puVar23 = (ulong *)(puVar26 + lStack_a0 + 0x20);
            uVar16 = uVar20;
            do {
              lVar30 = lVar30 + (ulong)((uint5)(uint)puVar17[-6] & 0xff000000ff) *
                                (puVar23[-3] & 0xffffffff);
              lVar31 = lVar31 + (puVar17[-5] & 0xff) * (puVar23[-3] >> 0x20);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              lVar18 = lVar18 + (puVar17[-8] & 0xff) * (puVar23[-4] & 0xffffffff);
              lVar29 = lVar29 + (puVar17[-7] & 0xff) * (puVar23[-4] >> 0x20);
              lVar36 = lVar36 + (ulong)((uint5)(uint)puVar17[-2] & 0xff000000ff) *
                                (puVar23[-1] & 0xffffffff);
              lVar37 = lVar37 + (puVar17[-1] & 0xff) * (puVar23[-1] >> 0x20);
              lVar34 = lVar34 + (puVar17[-4] & 0xff) * (puVar23[-2] & 0xffffffff);
              lVar35 = lVar35 + (puVar17[-3] & 0xff) * (puVar23[-2] >> 0x20);
              lVar32 = lVar32 + (ulong)((uint5)(uint)puVar17[2] & 0xff000000ff) *
                                (puVar23[1] & 0xffffffff);
              lVar33 = lVar33 + (puVar17[3] & 0xff) * (puVar23[1] >> 0x20);
              lVar38 = lVar38 + (*puVar17 & 0xff) * (*puVar23 & 0xffffffff);
              lVar39 = lVar39 + (puVar17[1] & 0xff) * (*puVar23 >> 0x20);
              lVar40 = lVar40 + (ulong)((uint5)(uint)puVar17[6] & 0xff000000ff) *
                                (puVar23[3] & 0xffffffff);
              lVar41 = lVar41 + (puVar17[7] & 0xff) * (puVar23[3] >> 0x20);
              lVar42 = lVar42 + (puVar17[4] & 0xff) * (puVar23[2] & 0xffffffff);
              lVar43 = lVar43 + (puVar17[5] & 0xff) * (puVar23[2] >> 0x20);
              puVar17 = puVar17 + 0x10;
              uVar16 = uVar16 - 0x10;
              puVar23 = puVar23 + 8;
            } while (uVar16 != 0);
            uVar16 = lVar42 + lVar38 + lVar34 + lVar18 + lVar40 + lVar32 + lVar36 + lVar30 +
                     lVar43 + lVar39 + lVar35 + lVar29 + lVar41 + lVar33 + lVar37 + lVar31;
            if (uVar20 != uVar9) {
              uVar22 = uVar20;
              if ((uVar9 & 0xe) == 0) goto LAB_0029cb80;
              goto LAB_0029cb28;
            }
          }
          if (uStack_64 == 0) {
            uVar20 = 0;
            uVar22 = 0;
LAB_0029cd0c:
            lVar18 = uVar9 - uVar20;
            pbVar21 = (byte *)(((ulong)puVar26 | uVar20 << 3) + lStack_a0 + 0x408);
            puVar24 = (uint *)(puVar26 + lStack_a0 + uVar20 * 4);
            do {
// chat: discord.gg/sdkhDjTex
              uVar22 = uVar22 + (ulong)*pbVar21 * (ulong)*puVar24;
              lVar18 = lVar18 + -1;
              pbVar21 = pbVar21 + 8;
              puVar24 = puVar24 + 1;
            } while (lVar18 != 0);
          }
          else if (uStack_64 < 0xf) {
            uVar22 = 0;
            uVar19 = 0;
LAB_0029ccb0:
            uVar20 = uVar9 & 0xfffffffe;
            lVar29 = 0;
            lVar18 = uVar19 - uVar20;
            puVar17 = (ulong *)(puVar26 + lStack_a0 + uVar19 * 4);
            puVar23 = (ulong *)(((ulong)puVar26 | uVar19 << 3) + lStack_a0 + 0x408);
            do {
              uVar22 = uVar22 + (*puVar23 & 0xff) * (*puVar17 & 0xffffffff);
              lVar29 = lVar29 + (puVar23[1] & 0xff) * (*puVar17 >> 0x20);
              lVar18 = lVar18 + 2;
              puVar17 = puVar17 + 1;
              puVar23 = puVar23 + 2;
            } while (lVar18 != 0);
            uVar22 = uVar22 + lVar29;
            if (uVar20 != uVar9) goto LAB_0029cd0c;
/* WM - reversing this took months of machine time */
          }
          else {
            puVar17 = (ulong *)(puVar12 + 0x408);
            lVar18 = 0;
            lVar29 = 0;
            uVar20 = uVar9 & 0xfffffff0;
            lVar30 = 0;
            lVar31 = 0;
            lVar34 = 0;
            lVar35 = 0;
            lVar36 = 0;
            lVar37 = 0;
            lVar38 = 0;
            lVar39 = 0;
            lVar32 = 0;
            lVar33 = 0;
            lVar42 = 0;
            lVar43 = 0;
            lVar40 = 0;
            lVar41 = 0;
            puVar23 = (ulong *)(puVar26 + lStack_a0 + 0x20);
            uVar22 = uVar20;
            do {
              lVar30 = lVar30 + (ulong)((uint5)(uint)puVar17[2] & 0xff000000ff) *
                                (puVar23[-3] & 0xffffffff);
              lVar31 = lVar31 + (puVar17[3] & 0xff) * (puVar23[-3] >> 0x20);
              lVar18 = lVar18 + (*puVar17 & 0xff) * (puVar23[-4] & 0xffffffff);
              lVar29 = lVar29 + (puVar17[1] & 0xff) * (puVar23[-4] >> 0x20);
              lVar36 = lVar36 + (ulong)((uint5)(uint)puVar17[6] & 0xff000000ff) *
                                (puVar23[-1] & 0xffffffff);
              lVar37 = lVar37 + (puVar17[7] & 0xff) * (puVar23[-1] >> 0x20);
              lVar34 = lVar34 + (puVar17[4] & 0xff) * (puVar23[-2] & 0xffffffff);
              lVar35 = lVar35 + (puVar17[5] & 0xff) * (puVar23[-2] >> 0x20);
              lVar32 = lVar32 + (ulong)((uint5)(uint)puVar17[10] & 0xff000000ff) *
                                (puVar23[1] & 0xffffffff);
              lVar33 = lVar33 + (puVar17[0xb] & 0xff) * (puVar23[1] >> 0x20);
              lVar38 = lVar38 + (puVar17[8] & 0xff) * (*puVar23 & 0xffffffff);
// no support for modified copies
              lVar39 = lVar39 + (puVar17[9] & 0xff) * (*puVar23 >> 0x20);
              lVar40 = lVar40 + (ulong)((uint5)(uint)puVar17[0xe] & 0xff000000ff) *
                                (puVar23[3] & 0xffffffff);
              lVar41 = lVar41 + (puVar17[0xf] & 0xff) * (puVar23[3] >> 0x20);
              lVar42 = lVar42 + (puVar17[0xc] & 0xff) * (puVar23[2] & 0xffffffff);
              lVar43 = lVar43 + (puVar17[0xd] & 0xff) * (puVar23[2] >> 0x20);
              puVar17 = puVar17 + 0x10;
              uVar22 = uVar22 - 0x10;
              puVar23 = puVar23 + 8;
            } while (uVar22 != 0);
            uVar22 = lVar42 + lVar38 + lVar34 + lVar18 + lVar40 + lVar32 + lVar36 + lVar30 +
                     lVar43 + lVar39 + lVar35 + lVar29 + lVar41 + lVar33 + lVar37 + lVar31;
            if (uVar20 != uVar9) {
              uVar19 = uVar20;
              if ((uVar9 & 0xe) == 0) goto LAB_0029cd0c;
              goto LAB_0029ccb0;
            }
          }
          if ((unaff_x21 + 0xc < param_4) &&
             (unaff_x21 + (uVar22 >> 3) < (undefined *)(uVar16 >> 3))) goto LAB_0029cd5c;
        }
/*  proprietary - see LICENSE - do not sell  */
        puVar14 = puStack_80 + lStack_90;
        goto LAB_0029c948;
      }
LAB_0029cd5c:
      if (param_4 <= unaff_x21 + 0xc) {
        return (undefined *)0x0;
      }
      *piVar1 = 0;
    }
    if (puVar15 != (undefined *)0x0) {
      _memcpy(puVar15,puVar25 + 0x400,0x808);
    }
    puVar13 = puStack_80 + (long)unaff_x21;
    puVar14 = puStack_80 + lStack_90;
    puVar12 = puVar25 + 0x400;
  }
  else {
    iVar8 = *piVar1;
    if (iVar8 == 1) {
      iVar8 = func_0x0029aafc(puVar15,puVar12,uStack_64);
      if (iVar8 == 0) {
        iVar8 = 0;
        *piVar1 = 0;
        goto LAB_0029c964;
      }
      if (bVar6 || bVar7) goto LAB_0029c970;
    }
    else {
/* WM - proprietary - see LICENSE - do not sell */
LAB_0029c964:
      if (iVar8 == 0 || (bVar6 || bVar7)) goto LAB_0029c970;
    }
    puVar14 = puStack_80 + lStack_90;
LAB_0029c948:
    puVar13 = puStack_80;
    puVar12 = puVar15;
    unaff_x21 = puVar26;
  }
  unaff_x30 = 0x29c954;
  param_1 = puStack_80;
  param_7 = iStack_94;
code_r0x0029d340:
  puVar3 = puStack_78;
  *(ulong *)(puVar5 + -0x30) = uVar27;
  *(undefined **)(puVar5 + -0x28) = unaff_x21;
  *(undefined **)(puVar5 + -0x20) = puVar25;
  *(undefined **)(puVar5 + -0x18) = puVar15;
  *(long *)(puVar5 + -0x10) = lVar28;
  *(undefined8 *)(puVar5 + -8) = unaff_x30;
  if (param_7 == 0) {
    puVar12 = (undefined *)
              FUN_0029ad00(puVar13,(long)puVar14 - (long)puVar13,puVar3,param_4,puVar12);
  }
  else {
    puVar12 = (undefined *)func_0x0029c084();
  }
  puVar15 = puVar13 + ((long)puVar12 - (long)param_1);
  if (param_4 + -1 <= puVar15) {
    puVar15 = (undefined *)0x0;
  }
  puVar26 = (undefined *)0x0;
  if (puVar12 != (undefined *)0x0) {
    puVar26 = puVar15;
/*  stripping the watermark breaks the license  */
  }
  if (puVar12 < (undefined *)0xffffffffffffff89) {
    puVar12 = puVar26;
  }
  return puVar12;
}

