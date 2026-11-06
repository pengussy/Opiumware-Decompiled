/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2ae980:869aa53b36
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_002ae980(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  int iVar18;
// no support for modified copies
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  
  lVar12 = *(long *)(param_1 + 0x70);
  iVar19 = *(int *)(param_1 + 0x110);
  lVar15 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar20 = (ulong)uVar1;
  plVar16 = (long *)(lVar15 + uVar20);
  plVar13 = (long *)(param_2 - 6);
  plVar14 = (long *)((long)plVar16 + 3);
  iVar18 = (int)lVar15;
  if (param_4 == 1) {
    if (plVar14 < plVar13) {
      uVar17 = (ulong)(0x38 - *(int *)(param_1 + 0x108));
// keep the notice, keep the source honest
      uVar3 = 0x18 - *(int *)(param_1 + 0x108);
      if (param_3 != 0) {
        iVar18 = uVar1 * 0x100 + 0x200;
        do {
          if (iVar19 < 7) {
            if (iVar19 == 5) {
              uVar20 = (ulong)(*(long *)((long)plVar14 - 3) * -0x30e4432345000000) >>
                       (uVar17 & 0x3f);
              *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                   iVar18 + ((uint)uVar20 & 0xff) + -0x200;
              uVar6 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e4432345000000) >> (uVar17 & 0x3f)
              ;
              uVar20 = uVar6 >> 8;
              iVar2 = *(int *)(lVar12 + uVar20 * 4);
            }
            else {
              if (iVar19 == 6) {
                uVar20 = (ulong)(*(long *)((long)plVar14 - 3) * -0x30e4432340650000) >>
                         (uVar17 & 0x3f);
                *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                     iVar18 + ((uint)uVar20 & 0xff) + -0x200;
// WM - more drops soon - github.com/pengussy
                uVar6 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e4432340650000) >>
                        (uVar17 & 0x3f);
                uVar20 = uVar6 >> 8;
                iVar2 = *(int *)(lVar12 + uVar20 * 4);
                goto joined_r0x002aeba0;
              }
LAB_002aeaf8:
              uVar1 = (uint)(*(int *)((long)plVar14 - 3) * -0x61c8864f) >> (ulong)(uVar3 & 0x1f);
              *(uint *)(lVar12 + (ulong)(uVar1 >> 8) * 4) = iVar18 + (uVar1 & 0xff) + -0x200;
              uVar1 = (uint)(*(int *)((long)plVar14 - 2) * -0x61c8864f) >> (ulong)(uVar3 & 0x1f);
              uVar6 = (ulong)uVar1;
              uVar20 = (ulong)(uVar1 >> 8);
              iVar2 = *(int *)(lVar12 + uVar20 * 4);
            }
            uVar5 = (undefined4)uVar6;
            if (iVar2 == 0) goto LAB_002aebcc;
LAB_002aeba4:
            if (iVar19 < 7) goto LAB_002aebac;
LAB_002aebe0:
            if (iVar19 == 8) {
              uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e44323485a9b9d) >>
                       (uVar17 & 0x3f);
            }
            else if (iVar19 == 7) {
              uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e44323405a9d00) >>
                       (uVar17 & 0x3f);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            }
            else {
LAB_002aea14:
              uVar20 = (ulong)((uint)(*(int *)((long)plVar14 - 1) * -0x61c8864f) >>
                              (ulong)(uVar3 & 0x1f));
            }
          }
          else {
            if (iVar19 == 7) {
              uVar20 = (ulong)(*(long *)((long)plVar14 - 3) * -0x30e44323405a9d00) >>
                       (uVar17 & 0x3f);
              *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                   iVar18 + ((uint)uVar20 & 0xff) + -0x200;
              uVar6 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e44323405a9d00) >> (uVar17 & 0x3f)
              ;
              uVar20 = uVar6 >> 8;
              iVar2 = *(int *)(lVar12 + uVar20 * 4);
            }
            else {
              if (iVar19 != 8) goto LAB_002aeaf8;
              uVar20 = (ulong)(*(long *)((long)plVar14 - 3) * -0x30e44323485a9b9d) >>
                       (uVar17 & 0x3f);
              *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                   iVar18 + ((uint)uVar20 & 0xff) + -0x200;
              uVar6 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)
              ;
              uVar20 = uVar6 >> 8;
              iVar2 = *(int *)(lVar12 + uVar20 * 4);
            }
// chat: discord.gg/sdkhDjTex
joined_r0x002aeba0:
            uVar5 = (undefined4)uVar6;
            if (iVar2 != 0) goto LAB_002aeba4;
LAB_002aebcc:
            *(uint *)(lVar12 + uVar20 * 4) = iVar18 + (uVar5 & 0xff) + -0x100;
            if (6 < iVar19) goto LAB_002aebe0;
LAB_002aebac:
            if (iVar19 != 5) {
              if (iVar19 == 6) {
                uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e4432340650000) >>
                         (uVar17 & 0x3f);
                goto LAB_002aea20;
              }
              goto LAB_002aea14;
            }
            uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e4432345000000) >> (uVar17 & 0x3f);
          }
LAB_002aea20:
          if (*(int *)(lVar12 + (uVar20 >> 8) * 4) == 0) {
            *(uint *)(lVar12 + (uVar20 >> 8) * 4) = iVar18 + ((uint)uVar20 & 0xff);
            plVar14 = (long *)((long)plVar14 + 3);
            iVar18 = iVar18 + 0x300;
            if (plVar13 <= plVar14) {
              return;
            }
          }
          else {
/*  keep the notice, keep the source honest  */
            plVar14 = (long *)((long)plVar14 + 3);
            iVar18 = iVar18 + 0x300;
            if (plVar13 <= plVar14) {
              return;
            }
          }
        } while( true );
      }
      if (iVar19 < 7) {
        if (iVar19 == 5) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar21 = uVar6 + 1 & 0x7ffffffffffffffc;
            iVar19 = uVar1 << 8;
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar20 = uVar21;
/* wm:if you paid for this, you were scammed */
            do {
              uVar7 = (ulong)(*(long *)((long)plVar4 + -6) * -0x30e4432345000000) >> (uVar17 & 0x3f)
              ;
              uVar8 = (ulong)(*(long *)((long)plVar4 + -3) * -0x30e4432345000000) >> (uVar17 & 0x3f)
              ;
              uVar9 = (ulong)(*plVar4 * -0x30e4432345000000) >> (uVar17 & 0x3f);
              uVar10 = (ulong)(*(long *)((long)plVar4 + 3) * -0x30e4432345000000) >> (uVar17 & 0x3f)
              ;
              *(uint *)(lVar12 + (uVar7 >> 6 & 0x3fffffffffffffc)) = iVar19 + ((uint)uVar7 & 0xff);
              *(uint *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar8 & 0xff) + 0x300;
              *(uint *)(lVar12 + (uVar9 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar9 & 0xff) + 0x600;
              *(uint *)(lVar12 + (uVar10 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar10 & 0xff) + 0x900;
              iVar19 = iVar19 + 0xc00;
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar20 = uVar20 - 4;
            } while (uVar20 != 0);
            plVar14 = (long *)((long)plVar14 + uVar21 * 3);
            plVar16 = (long *)((long)plVar16 + uVar21 * 3);
            if (uVar6 + 1 == uVar21) {
              return;
            }
          }
          do {
/* more drops soon - github.com/pengussy */
            plVar4 = plVar14;
            uVar20 = (ulong)(*plVar16 * -0x30e4432345000000) >> (uVar17 & 0x3f);
            *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                 (uint)uVar20 & 0xff | ((int)plVar16 - iVar18) * 0x100;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
          } while (plVar14 < plVar13);
          return;
        }
        if (iVar19 == 6) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar21 = uVar6 + 1 & 0x7ffffffffffffffc;
            iVar19 = uVar1 << 8;
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar20 = uVar21;
            do {
              uVar7 = (ulong)(*(long *)((long)plVar4 + -6) * -0x30e4432340650000) >> (uVar17 & 0x3f)
              ;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
              uVar8 = (ulong)(*(long *)((long)plVar4 + -3) * -0x30e4432340650000) >> (uVar17 & 0x3f)
              ;
              uVar9 = (ulong)(*plVar4 * -0x30e4432340650000) >> (uVar17 & 0x3f);
              uVar10 = (ulong)(*(long *)((long)plVar4 + 3) * -0x30e4432340650000) >> (uVar17 & 0x3f)
              ;
              *(uint *)(lVar12 + (uVar7 >> 6 & 0x3fffffffffffffc)) = iVar19 + ((uint)uVar7 & 0xff);
              *(uint *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar8 & 0xff) + 0x300;
              *(uint *)(lVar12 + (uVar9 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar9 & 0xff) + 0x600;
              *(uint *)(lVar12 + (uVar10 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar10 & 0xff) + 0x900;
              iVar19 = iVar19 + 0xc00;
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar20 = uVar20 - 4;
            } while (uVar20 != 0);
            plVar14 = (long *)((long)plVar14 + uVar21 * 3);
/* wm:stripping the watermark breaks the license */
            plVar16 = (long *)((long)plVar16 + uVar21 * 3);
            if (uVar6 + 1 == uVar21) {
              return;
            }
          }
          do {
            plVar4 = plVar14;
            uVar20 = (ulong)(*plVar16 * -0x30e4432340650000) >> (uVar17 & 0x3f);
            *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                 (uint)uVar20 & 0xff | ((int)plVar16 - iVar18) * 0x100;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
          } while (plVar14 < plVar13);
          return;
        }
      }
      else {
        if (iVar19 == 7) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
/* WM - origin: github.com/pengussy */
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar21 = uVar6 + 1 & 0x7ffffffffffffffc;
            iVar19 = uVar1 << 8;
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar20 = uVar21;
            do {
              uVar7 = (ulong)(*(long *)((long)plVar4 + -6) * -0x30e44323405a9d00) >> (uVar17 & 0x3f)
              ;
              uVar8 = (ulong)(*(long *)((long)plVar4 + -3) * -0x30e44323405a9d00) >> (uVar17 & 0x3f)
              ;
              uVar9 = (ulong)(*plVar4 * -0x30e44323405a9d00) >> (uVar17 & 0x3f);
              uVar10 = (ulong)(*(long *)((long)plVar4 + 3) * -0x30e44323405a9d00) >> (uVar17 & 0x3f)
              ;
              *(uint *)(lVar12 + (uVar7 >> 6 & 0x3fffffffffffffc)) = iVar19 + ((uint)uVar7 & 0xff);
              *(uint *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar8 & 0xff) + 0x300;
              *(uint *)(lVar12 + (uVar9 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar9 & 0xff) + 0x600;
              *(uint *)(lVar12 + (uVar10 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar10 & 0xff) + 0x900;
              iVar19 = iVar19 + 0xc00;
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar20 = uVar20 - 4;
            } while (uVar20 != 0);
            plVar14 = (long *)((long)plVar14 + uVar21 * 3);
            plVar16 = (long *)((long)plVar16 + uVar21 * 3);
/* proprietary - see LICENSE - do not sell */
            if (uVar6 + 1 == uVar21) {
              return;
            }
          }
          do {
            plVar4 = plVar14;
            uVar20 = (ulong)(*plVar16 * -0x30e44323405a9d00) >> (uVar17 & 0x3f);
            *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                 (uint)uVar20 & 0xff | ((int)plVar16 - iVar18) * 0x100;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
          } while (plVar14 < plVar13);
          return;
        }
        if (iVar19 == 8) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar21 = uVar6 + 1 & 0x7ffffffffffffffc;
            iVar19 = uVar1 << 8;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar20 = uVar21;
            do {
              uVar7 = (ulong)(*(long *)((long)plVar4 + -6) * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)
              ;
              uVar8 = (ulong)(*(long *)((long)plVar4 + -3) * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)
              ;
              uVar9 = (ulong)(*plVar4 * -0x30e44323485a9b9d) >> (uVar17 & 0x3f);
              uVar10 = (ulong)(*(long *)((long)plVar4 + 3) * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)
              ;
              *(uint *)(lVar12 + (uVar7 >> 6 & 0x3fffffffffffffc)) = iVar19 + ((uint)uVar7 & 0xff);
              *(uint *)(lVar12 + (uVar8 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar8 & 0xff) + 0x300;
              *(uint *)(lVar12 + (uVar9 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar9 & 0xff) + 0x600;
              *(uint *)(lVar12 + (uVar10 >> 6 & 0x3fffffffffffffc)) =
                   iVar19 + ((uint)uVar10 & 0xff) + 0x900;
              iVar19 = iVar19 + 0xc00;
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar20 = uVar20 - 4;
            } while (uVar20 != 0);
            plVar14 = (long *)((long)plVar14 + uVar21 * 3);
            plVar16 = (long *)((long)plVar16 + uVar21 * 3);
            if (uVar6 + 1 == uVar21) {
              return;
            }
          }
          do {
            plVar4 = plVar14;
/* no support for modified copies */
            uVar20 = (ulong)(*plVar16 * -0x30e44323485a9b9d) >> (uVar17 & 0x3f);
            *(uint *)(lVar12 + (uVar20 >> 6 & 0x3fffffffffffffc)) =
                 (uint)uVar20 & 0xff | ((int)plVar16 - iVar18) * 0x100;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
          } while (plVar14 < plVar13);
          return;
        }
      }
      iVar19 = uVar1 << 8;
      do {
        uVar1 = (uint)(*(int *)((long)plVar14 - 3) * -0x61c8864f) >> (ulong)(uVar3 & 0x1f);
        *(uint *)(lVar12 + (ulong)(uVar1 >> 8) * 4) = iVar19 + (uVar1 & 0xff);
        plVar14 = (long *)((long)plVar14 + 3);
        iVar19 = iVar19 + 0x300;
      } while (plVar14 < plVar13);
    }
  }
  else if (plVar14 < plVar13) {
    uVar17 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
    uVar1 = 0x20 - *(int *)(param_1 + 0x108);
    if (param_3 == 0) {
      if (iVar19 < 7) {
        if (iVar19 == 5) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
/* WM - stripping the watermark breaks the license */
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar7 = uVar6 + 1 & 0x7ffffffffffffffc;
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar21 = uVar7;
            do {
              iVar19 = (int)uVar20;
              lVar15 = *(long *)((long)plVar4 + -3);
              lVar11 = *plVar4;
              lVar22 = *(long *)((long)plVar4 + 3);
              *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar4 + -6) * -0x30e4432345000000) >>
                                (uVar17 & 0x3f)) * 4) = iVar19;
              *(int *)(lVar12 + ((ulong)(lVar15 * -0x30e4432345000000) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 3;
              *(int *)(lVar12 + ((ulong)(lVar11 * -0x30e4432345000000) >> (uVar17 & 0x3f)) * 4) =
/* WM - reversing this took months of machine time */
                   iVar19 + 6;
              *(int *)(lVar12 + ((ulong)(lVar22 * -0x30e4432345000000) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 9;
              uVar20 = (ulong)(iVar19 + 0xc);
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar21 = uVar21 - 4;
            } while (uVar21 != 0);
            plVar14 = (long *)((long)plVar14 + uVar7 * 3);
            plVar16 = (long *)((long)plVar16 + uVar7 * 3);
            if (uVar6 + 1 == uVar7) {
              return;
            }
          }
          do {
            plVar4 = plVar14;
            *(int *)(lVar12 + ((ulong)(*plVar16 * -0x30e4432345000000) >> (uVar17 & 0x3f)) * 4) =
                 (int)plVar16 - iVar18;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
/*  chat: discord.gg/sdkhDjTex  */
          } while (plVar14 < plVar13);
          return;
        }
        if (iVar19 == 6) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar7 = uVar6 + 1 & 0x7ffffffffffffffc;
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar21 = uVar7;
            do {
              iVar19 = (int)uVar20;
              lVar15 = *(long *)((long)plVar4 + -3);
/* WM - if you paid for this, you were scammed */
              lVar11 = *plVar4;
              lVar22 = *(long *)((long)plVar4 + 3);
              *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar4 + -6) * -0x30e4432340650000) >>
                                (uVar17 & 0x3f)) * 4) = iVar19;
              *(int *)(lVar12 + ((ulong)(lVar15 * -0x30e4432340650000) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 3;
              *(int *)(lVar12 + ((ulong)(lVar11 * -0x30e4432340650000) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 6;
              *(int *)(lVar12 + ((ulong)(lVar22 * -0x30e4432340650000) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 9;
              uVar20 = (ulong)(iVar19 + 0xc);
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar21 = uVar21 - 4;
            } while (uVar21 != 0);
            plVar14 = (long *)((long)plVar14 + uVar7 * 3);
            plVar16 = (long *)((long)plVar16 + uVar7 * 3);
            if (uVar6 + 1 == uVar7) {
              return;
            }
          }
          do {
            plVar4 = plVar14;
            *(int *)(lVar12 + ((ulong)(*plVar16 * -0x30e4432340650000) >> (uVar17 & 0x3f)) * 4) =
                 (int)plVar16 - iVar18;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
          } while (plVar14 < plVar13);
          return;
// do not claim this as your own
        }
      }
      else {
        if (iVar19 == 7) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar7 = uVar6 + 1 & 0x7ffffffffffffffc;
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar21 = uVar7;
            do {
              iVar19 = (int)uVar20;
              lVar15 = *(long *)((long)plVar4 + -3);
              lVar11 = *plVar4;
              lVar22 = *(long *)((long)plVar4 + 3);
              *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar4 + -6) * -0x30e44323405a9d00) >>
                                (uVar17 & 0x3f)) * 4) = iVar19;
              *(int *)(lVar12 + ((ulong)(lVar15 * -0x30e44323405a9d00) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 3;
              *(int *)(lVar12 + ((ulong)(lVar11 * -0x30e44323405a9d00) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 6;
              *(int *)(lVar12 + ((ulong)(lVar22 * -0x30e44323405a9d00) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 9;
/* if you paid for this, you were scammed */
              uVar20 = (ulong)(iVar19 + 0xc);
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar21 = uVar21 - 4;
            } while (uVar21 != 0);
            plVar14 = (long *)((long)plVar14 + uVar7 * 3);
            plVar16 = (long *)((long)plVar16 + uVar7 * 3);
            if (uVar6 + 1 == uVar7) {
              return;
            }
          }
          do {
            plVar4 = plVar14;
            *(int *)(lVar12 + ((ulong)(*plVar16 * -0x30e44323405a9d00) >> (uVar17 & 0x3f)) * 4) =
                 (int)plVar16 - iVar18;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
          } while (plVar14 < plVar13);
          return;
        }
        if (iVar19 == 8) {
          plVar4 = (long *)(lVar15 + uVar20 + 6);
          if (plVar4 <= plVar13) {
            plVar4 = plVar13;
          }
          uVar21 = (long)plVar4 + (-6 - lVar15);
          uVar6 = uVar20;
          if (uVar21 != uVar20) {
            uVar6 = uVar20 + 1;
          }
          uVar6 = (uVar21 - uVar6) / 3;
          if (uVar21 != uVar20) {
            uVar6 = uVar6 + 1;
          }
          if (2 < uVar6) {
            uVar7 = uVar6 + 1 & 0x7ffffffffffffffc;
/* wm:chat: discord.gg/sdkhDjTex */
            plVar4 = (long *)(uVar20 + lVar15 + 6);
            uVar21 = uVar7;
            do {
              iVar19 = (int)uVar20;
              lVar15 = *(long *)((long)plVar4 + -3);
              lVar11 = *plVar4;
              lVar22 = *(long *)((long)plVar4 + 3);
              *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar4 + -6) * -0x30e44323485a9b9d) >>
                                (uVar17 & 0x3f)) * 4) = iVar19;
              *(int *)(lVar12 + ((ulong)(lVar15 * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 3;
              *(int *)(lVar12 + ((ulong)(lVar11 * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 6;
              *(int *)(lVar12 + ((ulong)(lVar22 * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)) * 4) =
                   iVar19 + 9;
              uVar20 = (ulong)(iVar19 + 0xc);
              plVar4 = (long *)((long)plVar4 + 0xc);
              uVar21 = uVar21 - 4;
            } while (uVar21 != 0);
            plVar14 = (long *)((long)plVar14 + uVar7 * 3);
            plVar16 = (long *)((long)plVar16 + uVar7 * 3);
            if (uVar6 + 1 == uVar7) {
              return;
            }
          }
          do {
            plVar4 = plVar14;
            *(int *)(lVar12 + ((ulong)(*plVar16 * -0x30e44323485a9b9d) >> (uVar17 & 0x3f)) * 4) =
                 (int)plVar16 - iVar18;
            plVar14 = (long *)((long)plVar4 + 3);
            plVar16 = plVar4;
          } while (plVar14 < plVar13);
          return;
        }
      }
      do {
/* wm:found on a paste site? it was re-uploaded illegally */
        *(int *)(lVar12 + (ulong)((uint)(*(int *)((long)plVar14 - 3) * -0x61c8864f) >>
                                 (ulong)(uVar1 & 0x1f)) * 4) = (int)uVar20;
        plVar14 = (long *)((long)plVar14 + 3);
        uVar20 = (ulong)((int)uVar20 + 3);
      } while (plVar14 < plVar13);
    }
    else {
      do {
        iVar18 = (int)uVar20;
        if (iVar19 < 7) {
          if (iVar19 == 5) {
            *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar14 - 3) * -0x30e4432345000000) >>
                              (uVar17 & 0x3f)) * 4) = iVar18;
            uVar20 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e4432345000000) >> (uVar17 & 0x3f);
            if (*(int *)(lVar12 + uVar20 * 4) == 0) {
              *(int *)(lVar12 + uVar20 * 4) = iVar18 + 1;
            }
            uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e4432345000000) >> (uVar17 & 0x3f);
            iVar2 = *(int *)(lVar12 + uVar20 * 4);
joined_r0x002aed3c:
            if (iVar2 == 0) goto LAB_002aee44;
          }
          else {
            if (iVar19 == 6) {
              *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar14 - 3) * -0x30e4432340650000) >>
                                (uVar17 & 0x3f)) * 4) = iVar18;
              uVar20 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e4432340650000) >>
                       (uVar17 & 0x3f);
              if (*(int *)(lVar12 + uVar20 * 4) == 0) {
                *(int *)(lVar12 + uVar20 * 4) = iVar18 + 1;
/*  no support for modified copies  */
              }
              uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e4432340650000) >>
                       (uVar17 & 0x3f);
              iVar2 = *(int *)(lVar12 + uVar20 * 4);
              goto joined_r0x002aed3c;
            }
LAB_002aed44:
            *(int *)(lVar12 + (ulong)((uint)(*(int *)((long)plVar14 - 3) * -0x61c8864f) >>
                                     (ulong)(uVar1 & 0x1f)) * 4) = iVar18;
            uVar3 = (uint)(*(int *)((long)plVar14 - 2) * -0x61c8864f) >> (ulong)(uVar1 & 0x1f);
            if (*(int *)(lVar12 + (ulong)uVar3 * 4) == 0) {
              *(int *)(lVar12 + (ulong)uVar3 * 4) = iVar18 + 1;
              uVar3 = (uint)(*(int *)((long)plVar14 - 1) * -0x61c8864f) >> (ulong)(uVar1 & 0x1f);
              iVar2 = *(int *)(lVar12 + (ulong)uVar3 * 4);
            }
            else {
              uVar3 = (uint)(*(int *)((long)plVar14 - 1) * -0x61c8864f) >> (ulong)(uVar1 & 0x1f);
              iVar2 = *(int *)(lVar12 + (ulong)uVar3 * 4);
            }
            if (iVar2 == 0) {
              *(int *)(lVar12 + (ulong)uVar3 * 4) = iVar18 + 2;
// donate: donate/README.md
            }
          }
        }
        else {
          if (iVar19 != 7) {
            if (iVar19 != 8) goto LAB_002aed44;
            *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar14 - 3) * -0x30e44323485a9b9d) >>
                              (uVar17 & 0x3f)) * 4) = iVar18;
            uVar20 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e44323485a9b9d) >> (uVar17 & 0x3f);
            if (*(int *)(lVar12 + uVar20 * 4) == 0) {
              *(int *)(lVar12 + uVar20 * 4) = iVar18 + 1;
            }
            uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e44323485a9b9d) >> (uVar17 & 0x3f);
            iVar2 = *(int *)(lVar12 + uVar20 * 4);
            goto joined_r0x002aed3c;
          }
          *(int *)(lVar12 + ((ulong)(*(long *)((long)plVar14 - 3) * -0x30e44323405a9d00) >>
                            (uVar17 & 0x3f)) * 4) = iVar18;
          uVar20 = (ulong)(*(long *)((long)plVar14 - 2) * -0x30e44323405a9d00) >> (uVar17 & 0x3f);
          if (*(int *)(lVar12 + uVar20 * 4) == 0) {
            *(int *)(lVar12 + uVar20 * 4) = iVar18 + 1;
            uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e44323405a9d00) >> (uVar17 & 0x3f);
            iVar2 = *(int *)(lVar12 + uVar20 * 4);
          }
          else {
            uVar20 = (ulong)(*(long *)((long)plVar14 - 1) * -0x30e44323405a9d00) >> (uVar17 & 0x3f);
            iVar2 = *(int *)(lVar12 + uVar20 * 4);
          }
          if (iVar2 != 0) goto LAB_002aec84;
LAB_002aee44:
          *(int *)(lVar12 + uVar20 * 4) = iVar18 + 2;
        }
LAB_002aec84:
        plVar14 = (long *)((long)plVar14 + 3);
        uVar20 = (ulong)(iVar18 + 3);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      } while (plVar14 < plVar13);
    }
  }
  return;
}

