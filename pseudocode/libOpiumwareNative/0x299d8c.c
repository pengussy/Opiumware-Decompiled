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
 *  file-id: 0x299d8c:9229e8d946
 *  --------------------------------------------------------------------------*/

ulong FUN_00299d8c(undefined1 *param_1,uint *param_2,segment_command *param_3,uint param_4,
                  long param_5,ulong param_6)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  ushort uVar12;
  uint uVar13;
  segment_command *psVar14;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  bool bVar15;
  ulong uVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  segment_command *psVar22;
  segment_command *psVar23;
  undefined4 *puVar24;
  ulong uVar25;
  int iVar26;
  uint *puVar27;
  ulong uVar28;
  long lVar29;
  short sVar30;
  uint uVar31;
  long lVar32;
  short *psVar33;
  int *piVar34;
  ulong uVar35;
  ulong *puVar36;
  long lVar37;
  ulong *puVar38;
  segment_command *psVar39;
  byte *pbVar40;
  ulong uVar41;
  uint uVar42;
  uint uVar43;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  char *pcVar44;
  ulong uVar45;
  uint uVar46;
  ulong uVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  undefined1 auVar63 [16];
  ulong auStack_c0 [7];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  long lStack_68;
  
  uVar21 = (uint)param_3;
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar47 = (ulong)(uint)-(int)param_5 & 3;
  puVar2 = (undefined4 *)(param_5 + uVar47);
  uVar16 = 0;
  if (uVar47 <= param_6) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar16 = param_6 - uVar47;
  }
  puVar3 = (undefined4 *)0x0;
  if (uVar47 <= param_6) {
    puVar3 = puVar2;
  }
  uVar31 = uVar21;
  if (uVar16 >> 8 < 0x13) {
    uVar16 = 0xffffffffffffffbe;
  }
  else if (uVar21 < 0x100) {
    psVar22 = param_3;
    _bzero(puVar2,0x1000);
    puVar24 = puVar3 + 0x400;
    _bzero(puVar24,0x300);
    uVar35 = (ulong)(uVar21 + 1);
    puVar27 = param_2;
    uVar16 = uVar35;
    do {
      uVar31 = *puVar27;
      if (0xa4 < uVar31) {
        uVar31 = 0xbd - (int)LZCOUNT(uVar31);
      }
      *(short *)(puVar24 + uVar31) = *(short *)(puVar24 + uVar31) + 1;
      uVar16 = uVar16 - 1;
      puVar27 = puVar27 + 1;
    } while (uVar16 != 0);
    sVar30 = *(short *)(puVar2 + 0x4bf);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    psVar33 = (short *)(puVar3 + 0x4be);
    lVar29 = -0xbf;
    do {
      sVar30 = *psVar33 + sVar30;
      *psVar33 = sVar30;
      psVar33[1] = sVar30;
      psVar33 = psVar33 + -2;
      bVar15 = lVar29 != -1;
      lVar29 = lVar29 + 1;
    } while (bVar15);
    uVar16 = 0;
    do {
      uVar42 = param_2[uVar16];
      uVar31 = uVar42;
      if (0xa4 < uVar42) {
        uVar31 = 0xbd - (int)LZCOUNT(uVar42);
      }
      uVar12 = *(ushort *)
                ((long)puVar3 +
                (long)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                      (ulong)uVar31 * 4 + 0x2e));
/*  if you paid for this, you were scammed  */
      *(ushort *)
       ((long)puVar3 +
       (long)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
             (ulong)uVar31 * 4 + 0x2e)) = uVar12 + 1;
      puVar3[(ulong)uVar12 * 2 + 2] = uVar42;
      *(char *)((long)(puVar3 + (ulong)uVar12 * 2 + 2) + 6) = (char)uVar16;
      uVar16 = uVar16 + 1;
    } while (uVar35 != uVar16);
    puVar17 = (ushort *)((long)puVar3 + 0x1296);
    lVar29 = 0x1a;
    do {
      iVar26 = (uint)*puVar17 - (uint)puVar17[-1];
      if (1 < iVar26) {
        psVar22 = (segment_command *)(ulong)(iVar26 - 1);
        func_0x0029cdf8(puVar3 + (ulong)puVar17[-1] * 2 + 2,0);
      }
      puVar17 = puVar17 + 2;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar32 = 0;
    uVar16 = ((ulong)param_3 & 0xffffffff) * 8 + 8;
/* WM - keep the notice, keep the source honest */
    lVar37 = -1;
    lVar29 = ((long)param_3 << 0x20) + 0x100000000;
    piVar20 = puVar3 + ((ulong)param_3 & 0xffffffff) * 2;
    do {
      piVar34 = piVar20;
      lVar32 = lVar32 + -1;
      lVar37 = lVar37 + -1;
      uVar16 = uVar16 - 8;
      lVar29 = lVar29 + -0x100000000;
      piVar20 = piVar34 + -2;
    } while (piVar34[2] == 0);
    uVar31 = 0xb;
    if (param_4 != 0) {
      uVar31 = param_4;
    }
    psVar39 = (segment_command *)(ulong)uVar31;
    lVar48 = ((ulong)param_3 & 0xffffffff) + lVar32;
    uVar41 = lVar48 + 1;
    uVar42 = (int)lVar48 + 0x100;
    puVar2[0x202] = *piVar34 + piVar34[2];
    *(undefined2 *)(piVar34 + 1) = 0x100;
    *(undefined2 *)(piVar34 + 3) = 0x100;
    uVar1 = lVar48 + 2;
    if ((long)uVar41 < 2) {
      *puVar2 = 0x80000000;
/* wm:watermarked copy - do not remove */
      *(undefined1 *)((long)puVar3 + (long)(int)uVar42 * 8 + 0xf) = 0;
      if (-1 < (long)uVar41) goto LAB_0029a120;
    }
    else {
      uVar28 = ((ulong)param_3 & 0xffffffff) + lVar37;
      uVar46 = uVar42;
      if ((int)uVar42 < 0x102) {
        uVar46 = 0x101;
      }
      uVar45 = (ulong)uVar46 - 0x100;
      if (uVar45 < 4) {
        lVar37 = 0x101;
LAB_0029a028:
        uVar46 = uVar42;
        if ((int)uVar42 < 0x102) {
          uVar46 = 0x101;
        }
        lVar49 = ((ulong)uVar46 - lVar37) + 1;
        puVar24 = puVar3 + lVar37 * 2;
        do {
          puVar24 = puVar24 + 2;
          *puVar24 = 0x40000000;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
      }
      else {
        lVar37 = (uVar45 & 0xfffffffffffffffc) + 0x101;
        uVar46 = uVar42;
        if ((int)uVar42 < 0x102) {
          uVar46 = 0x101;
        }
        uVar25 = (ulong)uVar46 - 0x100 & 0xfffffffffffffffc;
        puVar24 = puVar3 + 0x20a;
        do {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          puVar24[-6] = 0x40000000;
          puVar24[-4] = 0x40000000;
          puVar24[-2] = 0x40000000;
          *puVar24 = 0x40000000;
          uVar25 = uVar25 - 4;
          puVar24 = puVar24 + 8;
        } while (uVar25 != 0);
        if (uVar45 != (uVar45 & 0xfffffffffffffffc)) goto LAB_0029a028;
      }
      *puVar2 = 0x80000000;
      sVar30 = 0x101;
      uVar46 = uVar42;
      if ((int)uVar42 < 0x102) {
        uVar46 = 0x101;
      }
      lVar37 = (ulong)uVar46 - 0x100;
      psVar22 = (segment_command *)&section_000000b8.reserved2;
      piVar20 = puVar3 + 0x204;
      do {
        bVar15 = *(uint *)((long)puVar3 +
                          (-(uVar28 >> 0x1f & 1) & 0xfffffff800000000 | (uVar28 & 0xffffffff) << 3)
                          + 8) <
                 *(uint *)((long)puVar3 +
                          (-((ulong)psVar22 >> 0x1f) & 0xfffffff800000000 | (long)psVar22 << 3) + 8)
        ;
        uVar46 = (uint)psVar22;
        if (bVar15) {
          uVar43 = uVar46;
          uVar46 = (uint)uVar28;
        }
        else {
          uVar43 = uVar46 + 1;
        }
        uVar19 = (uint)uVar28 - (uint)bVar15;
        bVar15 = *(uint *)((long)puVar3 +
// WM - chat: discord.gg/sdkhDjTex
                          (-(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar19 << 3) + 8)
                 < *(uint *)((long)puVar3 +
                            (-(ulong)(uVar43 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar43 << 3) + 8
                            );
        uVar18 = uVar43;
        if (bVar15) {
          uVar18 = uVar19;
        }
        *piVar20 = puVar3[(long)(int)uVar18 * 2 + 2] + puVar3[(long)(int)uVar46 * 2 + 2];
        if (!bVar15) {
          uVar43 = uVar43 + 1;
        }
        psVar22 = (segment_command *)(ulong)uVar43;
        uVar28 = (ulong)(uVar19 - bVar15);
        *(short *)(puVar3 + (long)(int)uVar18 * 2 + 2 + 1) = sVar30;
        *(short *)(puVar3 + (long)(int)uVar46 * 2 + 2 + 1) = sVar30;
        sVar30 = sVar30 + 1;
        lVar37 = lVar37 + -1;
        piVar20 = piVar20 + 2;
      } while (lVar37 != 0);
      *(undefined1 *)((long)puVar3 + (long)(int)uVar42 * 8 + 0xf) = 0;
/* reversing this took months of machine time - github.com/pengussy */
      uVar28 = (lVar48 + 0xffU & 0xffffffff) + 1;
      pcVar44 = (char *)((long)puVar3 + (lVar48 + 0xffU & 0xffffffff) * 8 + 0xf);
      do {
        *pcVar44 = *(char *)((long)puVar2 + (ulong)*(ushort *)(pcVar44 + -3) * 8 + 0xf) + '\x01';
        uVar28 = uVar28 - 1;
        pcVar44 = pcVar44 + -8;
      } while (0x100 < uVar28);
LAB_0029a120:
      lVar48 = 0;
      uVar28 = (uVar1 & 0xffffffff) - 1;
      uVar45 = uVar28 % 6;
      lVar37 = 0;
      if (uVar45 != 5) {
        lVar37 = uVar45 + 1;
      }
      if (4 < uVar28) {
        lVar48 = 0;
        puVar17 = (ushort *)(puVar3 + 7);
        do {
          *(char *)((long)puVar17 + -0xd) =
               *(char *)((long)puVar2 + (ulong)puVar17[-8] * 8 + 0xf) + '\x01';
          *(char *)((long)puVar17 + -5) =
               *(char *)((long)puVar2 + (ulong)puVar17[-4] * 8 + 0xf) + '\x01';
          *(char *)((long)puVar17 + 3) =
/* keep the notice, keep the source honest */
               *(char *)((long)puVar2 + (ulong)*puVar17 * 8 + 0xf) + '\x01';
          *(char *)((long)puVar17 + 0xb) =
               *(char *)((long)puVar2 + (ulong)puVar17[4] * 8 + 0xf) + '\x01';
          *(char *)((long)puVar17 + 0x13) =
               *(char *)((long)puVar2 + (ulong)puVar17[8] * 8 + 0xf) + '\x01';
          uVar42 = *(byte *)((long)puVar2 + (ulong)puVar17[0xc] * 8 + 0xf) + 1;
          psVar22 = (segment_command *)(ulong)uVar42;
          *(char *)((long)puVar17 + 0x1b) = (char)uVar42;
          puVar17 = puVar17 + 0x18;
          lVar48 = lVar48 + -6;
        } while (lVar37 - (uVar1 & 0xffffffff) != lVar48);
        lVar48 = -lVar48;
      }
      if (uVar45 != 5) {
        pcVar44 = (char *)((long)puVar3 + lVar48 * 8 + 0xf);
        do {
          *pcVar44 = *(char *)((long)puVar2 + (ulong)*(ushort *)(pcVar44 + -3) * 8 + 0xf) + '\x01';
          lVar37 = lVar37 + -1;
          pcVar44 = pcVar44 + 8;
        } while (lVar37 != 0);
      }
    }
    bVar4 = *(byte *)((long)puVar3 + (uVar16 & 0x7fffffff8) + 0xf);
    uVar42 = bVar4 - uVar31;
    uVar46 = (uint)bVar4;
    if (uVar31 <= bVar4 && uVar42 != 0) {
      psVar22 = (segment_command *)((long)puVar3 + (lVar29 >> 0x1d) + 0xf);
      bVar5 = (byte)psVar22->cmd;
      uVar46 = (uint)bVar5;
      if (uVar31 < bVar5) {
        iVar26 = 0;
        uVar43 = uVar21 + (int)lVar32 + 1;
        uVar16 = (ulong)uVar43;
        lVar29 = uVar16 << 0x20;
/* proprietary - see LICENSE - do not sell */
        psVar23 = psVar22;
        psVar14 = (segment_command *)((long)puVar3 + (long)(int)uVar43 * 8 + 7);
        do {
          psVar22 = psVar14;
          *(char *)&psVar23->cmd = (char)uVar31;
          iVar26 = iVar26 + (1 << (ulong)(uVar42 & 0x1f)) + (-1 << (ulong)(bVar4 - uVar46 & 0x1f));
          uVar46 = (uint)(byte)psVar22->cmd;
          lVar29 = lVar29 + -0x100000000;
          uVar16 = (ulong)((int)uVar16 - 1);
          psVar23 = psVar22;
          psVar14 = (segment_command *)&((section *)(psVar22 + -1))->flags;
        } while (uVar31 < uVar46);
      }
      else {
        iVar26 = 0;
        uVar16 = uVar41;
      }
      uVar16 = (ulong)((int)uVar16 + 1);
      lVar37 = (lVar29 >> 0x20) + 1;
      pbVar40 = (byte *)((uVar47 | (lVar29 >> 0x20) << 3) + param_5 + 0xf);
      do {
        bVar4 = *pbVar40;
        uVar16 = (ulong)((int)uVar16 - 1);
        lVar37 = lVar37 + -1;
        pbVar40 = pbVar40 + -8;
      } while (uVar31 == bVar4);
      uVar42 = iVar26 >> (uVar42 & 0x1f);
      auStack_c0[6] = 0xf0f0f0f0f0f0f0f0;
      auStack_c0[3] = 0xf0f0f0f0f0f0f0f0;
      auStack_c0[2] = 0xf0f0f0f0f0f0f0f0;
      auStack_c0[5] = 0xf0f0f0f0f0f0f0f0;
/* wm:origin: github.com/pengussy */
      auStack_c0[4] = 0xf0f0f0f0f0f0f0f0;
      auStack_c0[1] = 0xf0f0f0f0f0f0f0f0;
      auStack_c0[0] = 0xf0f0f0f0f0f0f0f0;
      if (-1 < lVar37) {
        lVar29 = uVar16 << 3;
        do {
          bVar4 = *(byte *)((long)puVar2 + lVar29 + 0xf);
          psVar22 = (segment_command *)(ulong)bVar4;
          if ((uint)bVar4 < (uint)psVar39) {
            *(int *)((long)auStack_c0 + (ulong)(uVar31 - bVar4) * 4) = (int)uVar16;
            psVar39 = psVar22;
          }
          uVar16 = (ulong)((int)uVar16 - 1);
          bVar15 = lVar29 != 0;
          lVar29 = lVar29 + -8;
        } while (bVar15);
      }
      if (0 < (int)uVar42) {
        psVar22 = &segment_command_00000020;
        do {
          iVar26 = (int)LZCOUNT(uVar42);
          if (iVar26 == 0x1f) {
            uVar16 = 1;
          }
          else {
            uVar16 = (ulong)(0x20 - iVar26);
            puVar27 = (uint *)((long)auStack_c0 + (ulong)(iVar26 * -4 + 0x80));
            do {
/* unlicensed copy if this notice is missing */
              uVar28 = uVar16 - 1;
              if ((*puVar27 != 0xf0f0f0f0) &&
                 ((uVar46 = *(uint *)((long)auStack_c0 + (uVar28 & 0xffffffff) * 4),
                  uVar46 == 0xf0f0f0f0 ||
                  ((uint)puVar3[(ulong)*puVar27 * 2 + 2] <=
                   (uint)(puVar3[(ulong)uVar46 * 2 + 2] * 2))))) {
                if (uVar16 < 0xd) goto LAB_0029a3e0;
                goto LAB_0029a3f8;
              }
              uVar16 = uVar28;
              puVar27 = puVar27 + -1;
            } while ((uVar28 & 0xfffffffe) != 0);
            uVar16 = 1;
          }
LAB_0029a3e0:
          do {
            if (*(int *)((long)auStack_c0 + uVar16 * 4) != -0xf0f0f10) break;
            uVar16 = uVar16 + 1;
          } while (uVar16 != 0xd);
LAB_0029a3f8:
          uVar43 = *(uint *)((long)auStack_c0 + (uVar16 & 0xffffffff) * 4);
          uVar19 = (int)uVar16 - 1;
          *(char *)((long)puVar3 + (ulong)uVar43 * 8 + 0xf) =
               *(char *)((long)puVar3 + (ulong)uVar43 * 8 + 0xf) + '\x01';
          uVar18 = *(uint *)((long)auStack_c0 + (ulong)uVar19 * 4);
// no support for modified copies
          uVar46 = uVar43;
          if (uVar18 != 0xf0f0f0f0) {
            uVar46 = uVar18;
          }
          *(uint *)((long)auStack_c0 + (ulong)uVar19 * 4) = uVar46;
          uVar46 = 0xf0f0f0f0;
          if ((uVar43 != 0) &&
             (uVar46 = uVar43 - 1,
             uVar31 - (int)uVar16 != (uint)*(byte *)((long)puVar2 + (ulong)uVar46 * 8 + 0xf))) {
            uVar46 = 0xf0f0f0f0;
          }
          iVar26 = -1 << (ulong)(uVar19 & 0x1f);
          *(uint *)((long)auStack_c0 + (uVar16 & 0xffffffff) * 4) = uVar46;
          bVar15 = SCARRY4(iVar26,uVar42);
          uVar42 = iVar26 + uVar42;
        } while (uVar42 != 0 && (int)uVar42 < 0 == bVar15);
      }
      uVar46 = uVar31;
      if ((int)uVar42 < 0) {
        uVar16 = auStack_c0[0] >> 0x20;
        do {
          uVar18 = (uint)uVar16;
          uVar43 = uVar42;
          if (uVar42 <= uVar18 + 0xf0f0f0f) {
            uVar43 = uVar18 + 0xf0f0f0f;
          }
          uVar13 = -uVar43;
          uVar19 = uVar18;
          if ((4 < uVar13) && (uVar18 + 1 <= uVar18 - uVar43)) {
            uVar43 = 4;
            if ((uVar13 & 3) != 0) {
              uVar43 = uVar13 & 3;
// WM - no support for modified copies
            }
            iVar26 = uVar13 - uVar43;
            uVar19 = uVar18 + iVar26;
            uVar42 = uVar42 + iVar26;
            do {
              lVar29 = (ulong)(uVar18 + 1) * 8;
              lVar48 = (ulong)(uVar18 + 2) * 8;
              lVar49 = (ulong)(uVar18 + 3) * 8;
              lVar50 = (ulong)(uVar18 + 4) * 8;
              cVar9 = *(char *)((long)puVar3 + lVar48 + 0xf);
              cVar10 = *(char *)((long)puVar3 + lVar49 + 0xf);
              cVar11 = *(char *)((long)puVar3 + lVar50 + 0xf);
              *(char *)((long)puVar3 + lVar29 + 0xf) = *(char *)((long)puVar3 + lVar29 + 0xf) + -1;
              *(char *)((long)puVar3 + lVar48 + 0xf) = cVar9 + -1;
              *(char *)((long)puVar3 + lVar49 + 0xf) = cVar10 + -1;
              *(char *)((long)puVar3 + lVar50 + 0xf) = cVar11 + -1;
              iVar26 = iVar26 + -4;
              uVar18 = uVar18 + 4;
            } while (iVar26 != 0);
          }
          psVar22 = (segment_command *)(ulong)(uVar19 + 0xf0f0f10);
          uVar43 = uVar42;
          while( true ) {
            uVar19 = uVar19 + 1;
            if ((int)psVar22 == 0) break;
            *(char *)((long)puVar3 + (ulong)uVar19 * 8 + 0xf) =
                 *(char *)((long)puVar3 + (ulong)uVar19 * 8 + 0xf) + -1;
            psVar22 = (segment_command *)(ulong)((int)psVar22 + 1);
            bVar15 = uVar43 == 0xffffffff;
            uVar43 = uVar43 + 1;
            if (bVar15) goto LAB_0029a44c;
          }
          iVar26 = (int)lVar37;
          uVar16 = (ulong)(iVar26 + 2);
          lVar37 = (long)iVar26 + 1;
          pbVar40 = (byte *)(uVar47 + param_5 + 0xf + (long)iVar26 * 8);
          do {
            bVar4 = *pbVar40;
/* WM - watermarked copy - do not remove */
            lVar37 = lVar37 + -1;
            uVar42 = (int)uVar16 - 1;
            uVar16 = (ulong)uVar42;
            pbVar40 = pbVar40 + -8;
          } while (uVar31 == bVar4);
          psVar22 = (segment_command *)(-(ulong)(uVar42 >> 0x1f) & 0xfffffff800000000 | uVar16 << 3)
          ;
          *(char *)((long)puVar3 + (long)(psVar22->segname + 7)) =
               *(char *)((long)puVar3 + (long)(psVar22->segname + 7)) + -1;
          uVar42 = uVar43 + 1;
        } while ((int)uVar43 < -1);
      }
    }
LAB_0029a44c:
    uVar31 = (uint)psVar22;
    if (uVar46 < 0xd) {
      auStack_c0[0] = 0;
      auStack_c0[1] = 0;
      auStack_c0[3] = auStack_c0[3] & 0xffffffffffff0000;
      auStack_c0[2] = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_70 = 0;
      uStack_78 = 0;
      if (-1 < (long)uVar41) {
        lVar37 = 0;
        uVar41 = (ulong)(uVar21 + (int)lVar32 + 2) - 1;
        uVar16 = uVar41 % 6;
        lVar29 = 0;
        if (uVar16 != 5) {
          lVar29 = uVar16 + 1;
        }
        if (4 < uVar41) {
          lVar37 = 0;
          pbVar40 = (byte *)((long)puVar2 + 0x1f);
          do {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
            *(short *)((long)auStack_c0 + (ulong)pbVar40[-0x10] * 2) =
                 *(short *)((long)auStack_c0 + (ulong)pbVar40[-0x10] * 2) + 1;
            *(short *)((long)auStack_c0 + (ulong)pbVar40[-8] * 2) =
                 *(short *)((long)auStack_c0 + (ulong)pbVar40[-8] * 2) + 1;
            *(short *)((long)auStack_c0 + (ulong)*pbVar40 * 2) =
                 *(short *)((long)auStack_c0 + (ulong)*pbVar40 * 2) + 1;
            *(short *)((long)auStack_c0 + (ulong)pbVar40[8] * 2) =
                 *(short *)((long)auStack_c0 + (ulong)pbVar40[8] * 2) + 1;
            *(short *)((long)auStack_c0 + (ulong)pbVar40[0x10] * 2) =
                 *(short *)((long)auStack_c0 + (ulong)pbVar40[0x10] * 2) + 1;
            *(short *)((long)auStack_c0 + (ulong)pbVar40[0x18] * 2) =
                 *(short *)((long)auStack_c0 + (ulong)pbVar40[0x18] * 2) + 1;
            lVar37 = lVar37 + -6;
            pbVar40 = pbVar40 + 0x30;
          } while (lVar29 - (uVar1 & 0xffffffff) != lVar37);
          lVar37 = -lVar37;
        }
        if (uVar16 != 5) {
          pbVar40 = (byte *)((uVar47 | lVar37 << 3) + param_5 + 0xf);
          do {
            *(short *)((long)auStack_c0 + (ulong)*pbVar40 * 2) =
                 *(short *)((long)auStack_c0 + (ulong)*pbVar40 * 2) + 1;
            lVar29 = lVar29 + -1;
            pbVar40 = pbVar40 + 8;
          } while (lVar29 != 0);
        }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      }
      if (uVar46 != 0) {
        uVar31 = 0;
        uVar16 = (ulong)uVar46;
        do {
          *(short *)((long)&uStack_88 + uVar16 * 2) = (short)uVar31;
          uVar31 = *(ushort *)((long)auStack_c0 + uVar16 * 2) + uVar31 >> 1 & 0x7fff;
          bVar15 = uVar16 != 0;
          uVar16 = uVar16 - 1;
        } while (bVar15 && uVar16 != 0);
      }
      if (uVar21 < 3) {
        uVar47 = 0;
LAB_0029a600:
        lVar29 = uVar35 - uVar47;
        pbVar40 = (byte *)((long)puVar3 + uVar47 * 8 + 0xf);
        do {
          *(ulong *)(param_1 + (ulong)pbVar40[-1] * 8 + 8) = (ulong)*pbVar40;
          lVar29 = lVar29 + -1;
          pbVar40 = pbVar40 + 8;
        } while (lVar29 != 0);
      }
      else {
        uVar47 = uVar35 & 0x1fc;
        pbVar40 = (byte *)((long)puVar3 + 0x16);
        uVar16 = uVar47;
        do {
          bVar4 = *pbVar40;
          bVar5 = pbVar40[8];
          bVar6 = pbVar40[0x10];
          bVar7 = pbVar40[1];
          bVar8 = pbVar40[9];
          psVar22 = (segment_command *)(ulong)pbVar40[0x11];
          *(ulong *)(param_1 + (ulong)pbVar40[-8] * 8 + 8) = (ulong)pbVar40[-7];
/*  reversing this took months of machine time  */
          *(ulong *)(param_1 + (ulong)bVar4 * 8 + 8) = (ulong)bVar7;
          pbVar40 = pbVar40 + 0x20;
          *(ulong *)(param_1 + (ulong)bVar5 * 8 + 8) = (ulong)bVar8;
          *(segment_command **)(param_1 + (ulong)bVar6 * 8 + 8) = psVar22;
          uVar16 = uVar16 - 4;
        } while (uVar16 != 0);
        if (uVar47 != uVar35) goto LAB_0029a600;
      }
      uVar31 = (uint)psVar22;
      uVar16 = uVar35 & 7;
      if (uVar21 < 7) {
        lVar29 = 0;
      }
      else {
        lVar29 = 0;
        puVar36 = (ulong *)(param_1 + 0x20);
        do {
          uVar41 = puVar36[-3];
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            puVar36[-3] = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
          uVar41 = puVar36[-2];
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            puVar36[-2] = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
          uVar41 = puVar36[-1];
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            puVar36[-1] = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
          uVar41 = *puVar36;
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            *puVar36 = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
          uVar41 = puVar36[1];
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            puVar36[1] = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
          uVar41 = puVar36[2];
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            puVar36[2] = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
          uVar41 = puVar36[3];
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            puVar36[3] = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
          uVar41 = puVar36[4];
          uVar47 = uVar41 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            puVar36[4] = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar41;
          }
          lVar29 = lVar29 + -8;
          puVar36 = puVar36 + 8;
        } while (-lVar29 != (uVar35 & 0x1f8));
        lVar29 = -lVar29;
      }
      if ((uVar21 + 1 & 7) != 0) {
        puVar36 = (ulong *)(param_1 + lVar29 * 8);
        do {
          puVar36 = puVar36 + 1;
          uVar35 = *puVar36;
          uVar47 = uVar35 & 0xff;
          uVar12 = *(ushort *)((long)&uStack_88 + uVar47 * 2);
/*  do not claim this as your own  */
          *(ushort *)((long)&uStack_88 + uVar47 * 2) = uVar12 + 1;
          if (uVar47 != 0) {
            *puVar36 = (ulong)uVar12 << (-uVar47 & 0x3f) | uVar35;
          }
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      *param_1 = (char)uVar46;
      param_1[1] = (char)param_3;
      *(undefined4 *)(param_1 + 2) = 0;
      uVar16 = (ulong)uVar46;
      *(undefined2 *)(param_1 + 6) = 0;
    }
    else {
      uVar16 = 0xffffffffffffffff;
    }
// WM - watermarked copy - do not remove
  }
  else {
    uVar16 = 0xffffffffffffffd2;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar16;
  }
  auVar63 = ___stack_chk_fail(uVar16);
  lVar32 = auVar63._8_8_;
  lVar29 = auVar63._0_8_;
  if ((int)uVar31 < 0) {
    return 0;
  }
  uVar16 = (ulong)(uVar31 + 1);
  if (uVar31 == 0) {
    uVar47 = 0;
    uVar35 = 0;
  }
  else {
    if (uVar31 < 0xf) {
      uVar35 = 0;
      uVar41 = 0;
    }
    else {
      lVar37 = 0;
/* more drops soon - github.com/pengussy */
      lVar48 = 0;
      uVar47 = uVar16 & 0xfffffff0;
      puVar36 = (ulong *)(lVar29 + 0x48);
      lVar49 = 0;
      lVar50 = 0;
      lVar53 = 0;
      lVar54 = 0;
      lVar55 = 0;
      lVar56 = 0;
      lVar57 = 0;
      lVar58 = 0;
      lVar51 = 0;
      lVar52 = 0;
      lVar61 = 0;
      lVar62 = 0;
      lVar59 = 0;
      lVar60 = 0;
      puVar38 = (ulong *)(lVar32 + 0x20);
      uVar35 = uVar47;
      do {
        lVar49 = lVar49 + (ulong)((uint5)(uint)puVar36[-6] & 0xff000000ff) *
                          (puVar38[-3] & 0xffffffff);
        lVar50 = lVar50 + (puVar36[-5] & 0xff) * (puVar38[-3] >> 0x20);
        lVar37 = lVar37 + (puVar36[-8] & 0xff) * (puVar38[-4] & 0xffffffff);
        lVar48 = lVar48 + (puVar36[-7] & 0xff) * (puVar38[-4] >> 0x20);
        lVar55 = lVar55 + (ulong)((uint5)(uint)puVar36[-2] & 0xff000000ff) *
                          (puVar38[-1] & 0xffffffff);
        lVar56 = lVar56 + (puVar36[-1] & 0xff) * (puVar38[-1] >> 0x20);
        lVar53 = lVar53 + (puVar36[-4] & 0xff) * (puVar38[-2] & 0xffffffff);
        lVar54 = lVar54 + (puVar36[-3] & 0xff) * (puVar38[-2] >> 0x20);
        lVar51 = lVar51 + (ulong)((uint5)(uint)puVar36[2] & 0xff000000ff) *
                          (puVar38[1] & 0xffffffff);
        lVar52 = lVar52 + (puVar36[3] & 0xff) * (puVar38[1] >> 0x20);
// keep the notice, keep the source honest
        lVar57 = lVar57 + (*puVar36 & 0xff) * (*puVar38 & 0xffffffff);
        lVar58 = lVar58 + (puVar36[1] & 0xff) * (*puVar38 >> 0x20);
        lVar59 = lVar59 + (ulong)((uint5)(uint)puVar36[6] & 0xff000000ff) *
                          (puVar38[3] & 0xffffffff);
        lVar60 = lVar60 + (puVar36[7] & 0xff) * (puVar38[3] >> 0x20);
        lVar61 = lVar61 + (puVar36[4] & 0xff) * (puVar38[2] & 0xffffffff);
        lVar62 = lVar62 + (puVar36[5] & 0xff) * (puVar38[2] >> 0x20);
        puVar36 = puVar36 + 0x10;
        uVar35 = uVar35 - 0x10;
        puVar38 = puVar38 + 8;
      } while (uVar35 != 0);
      uVar35 = lVar61 + lVar57 + lVar53 + lVar37 + lVar59 + lVar51 + lVar55 + lVar49 +
               lVar62 + lVar58 + lVar54 + lVar48 + lVar60 + lVar52 + lVar56 + lVar50;
      if (uVar47 == uVar16) goto code_r0x0029aaf4;
      uVar41 = uVar47;
      if ((uVar31 + 1 & 0xe) == 0) goto code_r0x0029aad0;
// WM - more drops soon - github.com/pengussy
    }
    lVar48 = 0;
    uVar47 = uVar16 & 0xfffffffe;
    lVar37 = uVar41 - uVar47;
    puVar36 = (ulong *)(lVar32 + uVar41 * 4);
    puVar38 = (ulong *)(lVar29 + uVar41 * 8 + 8);
    do {
      uVar35 = uVar35 + (*puVar38 & 0xff) * (*puVar36 & 0xffffffff);
      lVar48 = lVar48 + (puVar38[1] & 0xff) * (*puVar36 >> 0x20);
      lVar37 = lVar37 + 2;
      puVar36 = puVar36 + 1;
      puVar38 = puVar38 + 2;
    } while (lVar37 != 0);
    uVar35 = uVar35 + lVar48;
    if (uVar47 == uVar16) goto code_r0x0029aaf4;
  }
code_r0x0029aad0:
  pbVar40 = (byte *)(lVar29 + uVar47 * 8);
  lVar29 = uVar16 - uVar47;
  puVar27 = (uint *)(lVar32 + uVar47 * 4);
  do {
    pbVar40 = pbVar40 + 8;
    uVar35 = uVar35 + (ulong)*pbVar40 * (ulong)*puVar27;
    lVar29 = lVar29 + -1;
    puVar27 = puVar27 + 1;
  } while (lVar29 != 0);
code_r0x0029aaf4:
/*  unlicensed copy if this notice is missing  */
  return uVar35 >> 3;
}

