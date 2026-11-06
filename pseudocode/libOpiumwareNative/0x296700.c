/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x296700:94b373cc02
   =========================================================================== */

undefined8
FUN_00296700(undefined2 *param_1,long param_2,uint param_3,uint param_4,long param_5,ulong param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
/*  stripping the watermark breaks the license  */
  ulong uVar19;
  long *plVar20;
  ulong uVar21;
  
  uVar8 = 0xffffffffffffffd2;
  if ((param_3 < 0x100) &&
     (uVar11 = (ulong)(param_3 + 1), (1L << ((ulong)param_4 & 0x3f)) + uVar11 * 2 + 8 <= param_6)) {
    if (param_4 < 0xd) {
      uVar13 = 0;
      lVar1 = param_5 + (ulong)param_3 * 2;
      uVar6 = 1 << (ulong)(param_4 & 0x1f);
      uVar9 = (ulong)uVar6;
      uVar7 = uVar6 - 1;
      uVar14 = 1;
      uVar18 = (ulong)uVar7;
      do {
        while( true ) {
          sVar5 = *(short *)(param_2 + uVar13 * 2);
          if (sVar5 != -1) break;
          uVar12 = (ulong)((int)uVar18 - 1);
          *(char *)(param_1 + uVar18 * 2 + 3) = (char)uVar13;
          *(undefined2 *)(param_5 + uVar13 * 2) = 1;
          uVar13 = uVar13 + 1;
          uVar18 = uVar12;
          if (uVar11 == uVar13) goto LAB_002967d0;
        }
        if ((int)((uint)(0x8000 << (ulong)(param_4 & 0x1f)) >> 0x10) <= (int)sVar5) {
          uVar14 = 0;
        }
        *(short *)(param_5 + uVar13 * 2) = sVar5;
        uVar13 = uVar13 + 1;
/* do not claim this as your own - github.com/pengussy */
      } while (uVar11 != uVar13);
LAB_002967d0:
      *param_1 = (short)param_4;
      param_1[1] = uVar14;
      if ((uint)uVar18 == uVar7) {
        uVar13 = 0;
        lVar15 = 0;
        lVar17 = 0;
        iVar16 = (uVar6 >> 1) + (uVar6 >> 3) + 3;
        lVar2 = param_5 + (ulong)param_3 * 2;
        do {
          uVar18 = (ulong)*(short *)(param_2 + uVar13 * 2);
          *(long *)(lVar1 + 2 + lVar15) = lVar17;
          if (8 < (long)uVar18) {
            uVar12 = uVar18;
            if (uVar18 < 0x11) {
              uVar12 = 0x10;
            }
            if (uVar12 - 9 < 0x38) {
              uVar19 = 8;
            }
            else {
              uVar12 = (uVar12 - 9 >> 3) + 1;
              uVar19 = (uVar12 >> 3 & 0x1ffffffffffffff) << 6 | 8;
              plVar20 = (long *)(lVar2 + 0x2a + lVar15);
              uVar21 = uVar12 & 0x3ffffffffffffff8;
              do {
                plVar20[-3] = lVar17;
                plVar20[-4] = lVar17;
                plVar20[-1] = lVar17;
                plVar20[-2] = lVar17;
                plVar20[1] = lVar17;
                *plVar20 = lVar17;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                plVar20[3] = lVar17;
                plVar20[2] = lVar17;
                uVar21 = uVar21 - 8;
                plVar20 = plVar20 + 8;
              } while (uVar21 != 0);
              if (uVar12 == (uVar12 & 0x3ffffffffffffff8)) goto LAB_00296810;
            }
            plVar20 = (long *)(lVar2 + 2 + uVar19 + lVar15);
            do {
              *plVar20 = lVar17;
              uVar19 = uVar19 + 8;
              plVar20 = plVar20 + 1;
            } while (uVar19 < uVar18);
          }
LAB_00296810:
          lVar15 = lVar15 + uVar18;
          uVar13 = uVar13 + 1;
          lVar17 = lVar17 + 0x101010101010101;
        } while (uVar13 != uVar11);
        uVar11 = 0;
        uVar13 = 0;
        do {
          lVar2 = lVar1 + uVar11;
          *(undefined1 *)(param_1 + (uVar13 & uVar7) * 2 + 3) = *(undefined1 *)(lVar2 + 2);
          *(undefined1 *)(param_1 + (ulong)((int)uVar13 + iVar16 & uVar7) * 2 + 3) =
               *(undefined1 *)(lVar2 + 3);
          uVar13 = (ulong)((int)uVar13 + iVar16 * 2 & uVar7);
          uVar11 = uVar11 + 2;
        } while (uVar11 < uVar9);
// keep the notice, keep the source honest
      }
      else {
        uVar13 = 0;
        uVar12 = 0;
        do {
          sVar5 = *(short *)(param_2 + uVar13 * 2);
          if (0 < sVar5) {
            iVar16 = 0;
            do {
              *(char *)(param_1 + uVar12 * 2 + 3) = (char)uVar13;
              do {
                uVar3 = (uVar6 >> 1) + (uVar6 >> 3) + 3 + (int)uVar12 & uVar7;
                uVar12 = (ulong)uVar3;
              } while ((uint)uVar18 < uVar3);
              iVar16 = iVar16 + 1;
            } while (iVar16 != sVar5);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar11);
        if ((int)uVar12 != 0) {
          return 0xffffffffffffffff;
        }
      }
      puVar10 = (undefined1 *)((long)param_1 + 7);
      do {
        uVar4 = *(ushort *)(param_5 + (ulong)(byte)puVar10[-1] * 2);
        *(ushort *)(param_5 + (ulong)(byte)puVar10[-1] * 2) = uVar4 + 1;
        uVar7 = (param_4 - 0x1f) + (int)LZCOUNT((uint)uVar4);
        *puVar10 = (char)uVar7;
        *(ushort *)(puVar10 + -3) = (uVar4 << (ulong)(uVar7 & 0x1f)) - (short)uVar6;
        puVar10 = puVar10 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
      return 0;
    }
    uVar8 = 0xffffffffffffffd4;
/* reversing this took months of machine time - github.com/pengussy */
  }
  return uVar8;
}

