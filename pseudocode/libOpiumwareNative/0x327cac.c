/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x327cac:89ce2536b7
   =========================================================================== */

uint FUN_00327cac(long param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  ulong uVar20;
  int iVar21;
  int *piVar22;
/* origin: github.com/pengussy */
  uint *puVar23;
  uint uVar24;
  int *piVar25;
  uint *puVar26;
  int iVar27;
  int *piVar28;
  uint uVar29;
  int *piVar30;
  int iVar31;
  uint *puVar32;
  int iVar33;
  int iVar34;
  ulong uVar35;
  long lVar36;
  int *piVar37;
  undefined8 uVar38;
/* more drops soon - github.com/pengussy */
  
  piVar37 = *(int **)(param_1 + 0x2b0);
  iVar3 = *(int *)(param_1 + 8);
  uVar38 = NEON_smax(*(undefined8 *)(piVar37 + 0x2a),CONCAT44(param_3,param_2),4);
  *(undefined8 *)(piVar37 + 0x2a) = uVar38;
  iVar21 = iVar3 + param_2;
  uVar1 = iVar3 + param_3;
  if (iVar21 == 0 || uVar1 == 0) {
    uVar29 = 0;
    uVar35 = 0;
LAB_00327d0c:
    iVar34 = iVar3 + (param_2 & 0xffff) + ((uint)uVar35 & 0xffff);
    iVar33 = piVar37[0x2c];
    if (piVar37[0x2c] <= iVar34) {
      iVar33 = iVar34;
    }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    iVar3 = iVar3 + (param_3 & 0xffff) + (uVar29 & 0xffff);
    iVar34 = piVar37[0x2d];
    if (piVar37[0x2d] <= iVar3) {
      iVar34 = iVar3;
    }
    piVar37[0x2c] = iVar33;
    piVar37[0x2d] = iVar34;
    *(ulong *)(piVar37 + 0x25) =
         CONCAT44((int)((ulong)*(undefined8 *)(piVar37 + 0x25) >> 0x20) + iVar21 * uVar1,
                  (int)*(undefined8 *)(piVar37 + 0x25) + 1);
    iVar21 = piVar37[0x18];
    if (iVar21 == piVar37[0x19]) {
      uVar1 = 8;
      if (iVar21 != 0) {
        uVar1 = iVar21 + iVar21 / 2;
      }
      if ((int)uVar1 <= (int)(iVar21 + 1U)) {
        uVar1 = iVar21 + 1U;
      }
      lVar8 = func_0x002fd6d8(-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
      if (*(long *)(piVar37 + 0x1a) != 0) {
        _memcpy(lVar8,*(long *)(piVar37 + 0x1a),(long)piVar37[0x18] << 3);
        func_0x002fda6c(*(undefined8 *)(piVar37 + 0x1a));
      }
      *(long *)(piVar37 + 0x1a) = lVar8;
      piVar37[0x19] = uVar1;
      iVar21 = piVar37[0x18];
    }
    else {
      lVar8 = *(long *)(piVar37 + 0x1a);
    }
    *(ulong *)(lVar8 + (long)iVar21 * 8) =
         (ulong)(uVar29 << 0x10) |
         (ulong)(param_2 & 0xffff) << 0x20 | (ulong)(param_3 & 0xffff) << 0x30 | uVar35 & 0xffff;
    uVar1 = piVar37[0x18];
    piVar37[0x18] = uVar1 + 1;
    lVar8 = *(long *)(param_1 + 0x2b0);
// watermarked copy - do not remove
    if (param_4 == (uint *)0x0) {
      uVar29 = *(uint *)(lVar8 + 0x90);
      if ((int)uVar29 < 0) {
        uVar29 = *(uint *)(lVar8 + 0x70);
        iVar21 = *(int *)(lVar8 + 0x74);
        uVar24 = uVar29 + 1;
        if ((int)uVar29 < iVar21) {
          lVar36 = *(long *)(lVar8 + 0x78);
        }
        else {
          uVar15 = 8;
          if (iVar21 != 0) {
            uVar15 = iVar21 + iVar21 / 2;
          }
          if ((int)uVar15 <= (int)uVar24) {
            uVar15 = uVar24;
          }
          lVar36 = func_0x002fd6d8(-(ulong)(uVar15 >> 0x1f) & 0xfffffffc00000000 |
                                   (ulong)uVar15 << 2);
          if (*(long *)(lVar8 + 0x78) != 0) {
            _memcpy(lVar36,*(long *)(lVar8 + 0x78),(long)*(int *)(lVar8 + 0x70) << 2);
            func_0x002fda6c(*(undefined8 *)(lVar8 + 0x78));
          }
          *(long *)(lVar8 + 0x78) = lVar36;
          *(uint *)(lVar8 + 0x74) = uVar15;
        }
        uVar15 = 0;
        *(uint *)(lVar8 + 0x70) = uVar24;
        puVar23 = (uint *)(lVar36 + (long)(int)uVar29 * 4);
        *puVar23 = 0;
      }
      else {
        puVar23 = (uint *)(*(long *)(lVar8 + 0x78) + (ulong)uVar29 * 4);
        *(int *)(lVar8 + 0x90) = (int)(*puVar23 << 0xc) >> 0xc;
        uVar15 = *puVar23;
      }
      *puVar23 = uVar1 & 0xfffff | uVar15 & 0xfff00000 | 0x40000000;
/* do not claim this as your own - github.com/pengussy */
      uVar29 = uVar15 & 0x3ff00000 | uVar29;
    }
    else {
      uVar1 = *param_4;
      *param_4 = uVar1 & 0xfff00000 | *(int *)(lVar8 + 0x60) - 1U & 0xfffff;
      uVar29 = uVar1 & 0x3ff00000 |
               (uint)((ulong)((long)param_4 - *(long *)(*(long *)(param_1 + 0x2b0) + 0x78)) >> 2);
    }
    return uVar29;
  }
  puVar23 = (uint *)(piVar37 + 6);
  iVar34 = 3;
  do {
    iVar33 = piVar37[2];
    iVar6 = 0;
    if (iVar33 != 0) {
      iVar6 = (iVar21 + -1 + iVar33) / iVar33;
    }
    iVar6 = iVar6 * iVar33;
    iVar33 = *piVar37;
    if ((iVar6 <= iVar33) && (iVar4 = piVar37[1], (int)uVar1 <= iVar4)) {
      puVar26 = *(uint **)puVar23;
      uVar29 = *puVar26;
      uVar35 = (ulong)uVar29;
      iVar14 = uVar29 + iVar6;
      if (iVar33 < iVar14) {
        uVar35 = 0;
        iVar31 = piVar37[4];
// chat: discord.gg/sdkhDjTex
        uVar24 = 0x40000000;
        iVar27 = 0x40000000;
        puVar19 = (uint *)0x0;
LAB_00327fa0:
        if (iVar31 == 1) {
          puVar32 = puVar26;
          if ((int)uVar29 < iVar6) {
            do {
              puVar32 = *(uint **)(puVar32 + 2);
            } while ((int)*puVar32 < iVar6);
          }
          puVar9 = puVar23;
          do {
            uVar29 = *puVar32;
            uVar15 = uVar29 - iVar6;
            puVar12 = puVar26;
            puVar7 = puVar9;
            do {
              puVar9 = puVar7;
              puVar26 = puVar12;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
              puVar12 = *(uint **)(puVar26 + 2);
              puVar7 = puVar26 + 2;
            } while ((int)*puVar12 <= (int)uVar15);
            if ((int)*puVar26 < (int)uVar29) {
              iVar33 = 0;
              iVar14 = 0;
              puVar12 = puVar26;
              uVar11 = 0;
              uVar17 = *puVar26;
              do {
                while( true ) {
                  uVar16 = puVar12[1];
                  if (uVar16 - uVar11 == 0 || (int)uVar16 < (int)uVar11) break;
                  puVar12 = *(uint **)(puVar12 + 2);
                  uVar5 = *puVar12;
                  if ((int)uVar17 < (int)uVar15) {
                    uVar17 = uVar15;
                  }
                  iVar33 = (uVar16 - uVar11) * iVar14 + iVar33;
                  iVar14 = (uVar5 - uVar17) + iVar14;
                  uVar11 = uVar16;
                  uVar17 = uVar5;
                  if ((int)uVar29 <= (int)uVar5) goto LAB_003280b8;
                }
                puVar12 = *(uint **)(puVar12 + 2);
                uVar5 = *puVar12;
                iVar31 = iVar6 - iVar14;
                if ((int)((uVar5 - uVar17) + iVar14) <= iVar6) {
                  iVar31 = uVar5 - uVar17;
                }
                iVar33 = iVar31 * (uVar11 - uVar16) + iVar33;
                iVar14 = iVar31 + iVar14;
                uVar16 = uVar11;
/* WM - donate: donate/README.md */
                uVar17 = uVar5;
              } while ((int)uVar5 < (int)uVar29);
            }
            else {
              uVar16 = 0;
              iVar33 = 0;
            }
LAB_003280b8:
            if ((int)(uVar16 + uVar1) <= iVar4) {
              if ((int)uVar16 <= (int)uVar24) {
                if (((int)uVar24 <= (int)uVar16) && (iVar27 <= iVar33)) {
                  if ((iVar33 != iVar27) || ((int)uVar35 <= (int)uVar15)) goto LAB_00327fe0;
                }
                puVar19 = puVar9;
                uVar35 = (ulong)uVar15;
                uVar24 = uVar16;
                iVar27 = iVar33;
              }
            }
LAB_00327fe0:
            puVar32 = *(uint **)(puVar32 + 2);
          } while (puVar32 != (uint *)0x0);
        }
        uVar29 = (uint)uVar35;
        if (puVar19 != (uint *)0x0) {
// WM - chat: discord.gg/sdkhDjTex
          uVar35 = uVar35 | (ulong)uVar24 << 0x20;
          uVar15 = uVar24 + uVar1;
          if ((int)(uVar24 + uVar1) <= iVar4) goto LAB_00328104;
        }
      }
      else {
        iVar31 = piVar37[4];
        if (0 < iVar6) {
          uVar24 = 0x40000000;
          iVar27 = 0x40000000;
          puVar32 = puVar23;
          puVar9 = (uint *)0x0;
          puVar12 = puVar26;
          do {
            iVar10 = 0;
            iVar18 = 0;
            uVar20 = uVar35;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
            puVar19 = puVar12;
            uVar15 = 0;
            do {
              while( true ) {
                uVar16 = puVar19[1];
                iVar13 = (int)uVar20;
                if (uVar16 - uVar15 != 0 && (int)uVar15 <= (int)uVar16) break;
                puVar19 = *(uint **)(puVar19 + 2);
                uVar17 = *puVar19;
                uVar20 = (ulong)uVar17;
                iVar2 = iVar6 - iVar18;
                if ((int)((uVar17 - iVar13) + iVar18) <= iVar6) {
                  iVar2 = uVar17 - iVar13;
                }
                iVar10 = iVar2 * (uVar15 - uVar16) + iVar10;
                iVar18 = iVar2 + iVar18;
                uVar16 = uVar15;
                if (iVar14 <= (int)uVar17) goto LAB_00327f3c;
              }
              puVar19 = *(uint **)(puVar19 + 2);
              uVar17 = *puVar19;
// no support for modified copies
              uVar20 = (ulong)uVar17;
              iVar2 = (int)uVar35;
              if ((int)uVar35 <= iVar13) {
                iVar2 = iVar13;
              }
              iVar10 = (uVar16 - uVar15) * iVar18 + iVar10;
              iVar18 = (uVar17 - iVar2) + iVar18;
              uVar15 = uVar16;
            } while ((int)uVar17 < iVar14);
LAB_00327f3c:
            puVar19 = puVar9;
            if (iVar31 == 0) {
              puVar19 = puVar32;
              if ((int)uVar24 <= (int)uVar16) {
                puVar19 = puVar9;
                uVar16 = uVar24;
              }
              uVar24 = uVar16;
            }
            else if ((int)(uVar16 + uVar1) <= iVar4) {
              if ((int)uVar16 < (int)uVar24) {
LAB_00327f60:
                puVar19 = puVar32;
                uVar24 = uVar16;
                iVar27 = iVar10;
              }
              else if (uVar16 == uVar24) {
                if (iVar10 < iVar27) goto LAB_00327f60;
              }
            }
            puVar32 = puVar12 + 2;
            puVar12 = *(uint **)puVar32;
            uVar35 = (ulong)*puVar12;
            iVar14 = *puVar12 + iVar6;
            puVar9 = puVar19;
          } while (iVar14 <= iVar33);
/*  more drops soon - github.com/pengussy  */
          if (puVar19 == (uint *)0x0) {
            uVar35 = 0;
          }
          else {
            uVar35 = (ulong)**(uint **)puVar19;
          }
          goto LAB_00327fa0;
        }
        uVar24 = 0;
        puVar19 = puVar23;
        if (iVar31 != 0) {
          iVar27 = 0;
          goto LAB_00327fa0;
        }
        uVar15 = uVar1;
        if (iVar4 < (int)uVar1) goto LAB_0032819c;
LAB_00328104:
        puVar26 = *(uint **)(piVar37 + 8);
        if (puVar26 != (uint *)0x0) {
          *puVar26 = uVar29;
          puVar26[1] = uVar15;
          *(undefined8 *)(piVar37 + 8) = *(undefined8 *)(puVar26 + 2);
          piVar25 = *(int **)puVar19;
          if (*piVar25 < (int)uVar29) {
            piVar22 = *(int **)(piVar25 + 2);
            *(uint **)(piVar25 + 2) = puVar26;
            piVar28 = piVar22 + 2;
            piVar25 = piVar22;
            piVar22 = *(int **)piVar28;
            if (*(int **)piVar28 != (int *)0x0) goto LAB_00328144;
LAB_00328268:
            *(int **)(puVar26 + 2) = piVar25;
            if (*piVar25 < (int)(uVar29 + iVar21)) {
/* WM - more drops soon - github.com/pengussy */
LAB_00328180:
              *piVar25 = uVar29 + iVar21;
            }
          }
          else {
            *(uint **)puVar19 = puVar26;
            piVar28 = piVar25 + 2;
            piVar22 = *(int **)piVar28;
            if (*(int **)piVar28 == (int *)0x0) goto LAB_00328268;
LAB_00328144:
            do {
              piVar30 = piVar22;
              if ((int)(uVar29 + iVar21) < *piVar30) {
                *(int **)(puVar26 + 2) = piVar25;
                iVar33 = *piVar25;
                goto joined_r0x003282a8;
              }
              *(undefined8 *)piVar28 = *(undefined8 *)(piVar37 + 8);
              *(int **)(piVar37 + 8) = piVar25;
              piVar28 = piVar30 + 2;
              piVar25 = piVar30;
              piVar22 = *(int **)piVar28;
            } while (*(int **)piVar28 != (int *)0x0);
            *(int **)(puVar26 + 2) = piVar30;
            iVar33 = *piVar30;
joined_r0x003282a8:
            if (iVar33 < (int)(uVar29 + iVar21)) goto LAB_00328180;
          }
          uVar29 = (uint)(uVar35 >> 0x20);
          if ((int)uVar35 != 0x7fffffff) goto LAB_00327d0c;
          if (uVar35 >> 0x20 != 0x7fffffff) {
            uVar35 = 0xffff;
            goto LAB_00327d0c;
          }
        }
      }
    }
LAB_0032819c:
/* WM - proprietary - see LICENSE - do not sell */
    if ((iVar34 == 0) || ((char)piVar37[0x2e] == '\x01')) {
      if ((lRam00000000020973e0 == 0) || (((&UNK_0000286d)[lRam00000000020973e0] & 1) == 0)) {
        return 0xffffffff;
      }
      func_0x002fd6a4("[font] Failed packing %dx%d rectangle. Returning fallback.\n");
      return 0xffffffff;
    }
    lVar8 = *(long *)(param_1 + 0x2b0);
    iVar33 = *(int *)(lVar8 + 0xc0);
    if (0 < iVar33) {
      uVar29 = 0;
      do {
        lVar36 = *(long *)(*(long *)(lVar8 + 0xd0) + (ulong)(uVar29 >> 5) * 8) +
                 (ulong)(uVar29 & 0x1f) * 0x68;
        if (((*(int *)(lVar36 + 0x50) + 2 <= *(int *)(*(long *)(param_1 + 0x2b0) + 0xa4)) &&
            ((*(byte *)(lVar36 + 0x4f) >> 2 & 1) == 0)) &&
           ((*(byte *)(*(long *)(lVar36 + 0x58) + 0x10) >> 3 & 1) == 0)) {
          FUN_0032964c(param_1);
          iVar33 = *(int *)(lVar8 + 0xc0);
        }
        uVar29 = uVar29 + 1;
      } while ((int)uVar29 < iVar33);
    }
    if ((float)*(int *)(lVar8 + 0xa0) < (float)*(int *)(lVar8 + 0x98) * 0.2) {
      func_0x0032a434(param_1,0xffffffff,0xffffffff);
      iVar34 = iVar34 + -1;
    }
    else {
      FUN_00329dc8(param_1,*(undefined4 *)(*(long *)(param_1 + 0x38) + 0x1c),
                   *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x20));
      iVar34 = iVar34 + -1;
    }
  } while( true );
/* wm:chat: discord.gg/sdkhDjTex */
}

