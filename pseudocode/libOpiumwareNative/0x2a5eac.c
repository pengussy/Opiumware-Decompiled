/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2a5eac:8d42cbaedc
 */

void FUN_002a5eac(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
/* WM - keep the notice, keep the source honest */
  
  lVar9 = *(long *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x110);
  lVar10 = *(long *)(param_1 + 0x80);
  lVar6 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x2c);
  uVar14 = (ulong)uVar1;
  plVar11 = (long *)(param_2 + -8);
  if (param_4 == 1) {
    if ((long *)(lVar6 + uVar14 + 2) <= plVar11) {
      uVar3 = (ulong)(0x38 - *(int *)(param_1 + 0x104));
      uVar2 = 0x18 - *(int *)(param_1 + 0x104);
      uVar5 = (ulong)(0x38 - *(int *)(param_1 + 0x108));
      if (param_3 != 0) {
        plVar4 = (long *)(uVar14 + lVar6 + 2);
        iVar12 = uVar1 * 0x100 + 0x200;
LAB_002a5f84:
        do {
          if (iVar13 < 7) {
            if (iVar13 == 5) {
              lVar6 = *(long *)((long)plVar4 - 2);
              uVar14 = lVar6 * -0x30e4432345000000;
              goto LAB_002a5fec;
            }
            if (iVar13 == 6) {
              lVar6 = *(long *)((long)plVar4 - 2);
              uVar14 = lVar6 * -0x30e4432340650000;
              goto LAB_002a5fec;
            }
/* wm:found on a paste site? it was re-uploaded illegally */
LAB_002a5fc4:
            uVar14 = (ulong)((uint)(*(int *)((long)plVar4 - 2) * -0x61c8864f) >>
                            (ulong)(uVar2 & 0x1f));
            lVar6 = *(long *)((long)plVar4 - 2);
          }
          else {
            if (iVar13 == 7) {
              lVar6 = *(long *)((long)plVar4 - 2);
              uVar14 = lVar6 * -0x30e44323405a9d00;
            }
            else {
              if (iVar13 != 8) goto LAB_002a5fc4;
              lVar6 = *(long *)((long)plVar4 - 2);
              uVar14 = lVar6 * -0x30e44323485a9b9d;
            }
LAB_002a5fec:
            uVar14 = uVar14 >> (uVar3 & 0x3f);
          }
          uVar7 = (ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar5 & 0x3f);
/*  if you paid for this, you were scammed  */
          *(uint *)(lVar10 + (uVar14 >> 6 & 0x3fffffffffffffc)) =
               iVar12 + ((uint)uVar14 & 0xff) + -0x200;
          *(uint *)(lVar9 + (uVar7 >> 6 & 0x3fffffffffffffc)) =
               iVar12 + ((uint)uVar7 & 0xff) + -0x200;
          uVar7 = (ulong)(*(long *)((long)plVar4 - 1) * -0x30e44323485a9b9d) >> (uVar5 & 0x3f);
          uVar14 = uVar7 >> 8;
          if (*(int *)(lVar9 + uVar14 * 4) == 0) {
            *(uint *)(lVar9 + uVar14 * 4) = iVar12 + ((uint)uVar7 & 0xff) + -0x100;
            uVar14 = (ulong)(*plVar4 * -0x30e44323485a9b9d) >> (uVar5 & 0x3f);
            uVar7 = uVar14 >> 8;
            if (*(int *)(lVar9 + uVar7 * 4) == 0) goto LAB_002a6050;
LAB_002a5f74:
            plVar4 = (long *)((long)plVar4 + 3);
            iVar12 = iVar12 + 0x300;
            if (plVar11 < plVar4) {
              return;
            }
            goto LAB_002a5f84;
          }
          uVar14 = (ulong)(*plVar4 * -0x30e44323485a9b9d) >> (uVar5 & 0x3f);
          uVar7 = uVar14 >> 8;
          if (*(int *)(lVar9 + uVar7 * 4) != 0) goto LAB_002a5f74;
LAB_002a6050:
          *(uint *)(lVar9 + uVar7 * 4) = iVar12 + ((uint)uVar14 & 0xff);
          plVar4 = (long *)((long)plVar4 + 3);
          iVar12 = iVar12 + 0x300;
          if (plVar11 < plVar4) {
            return;
/* found on a paste site? it was re-uploaded illegally */
          }
        } while( true );
      }
      plVar4 = (long *)(uVar14 + lVar6 + 2);
      iVar12 = uVar1 << 8;
      do {
        if (iVar13 < 7) {
          if (iVar13 == 5) {
            lVar6 = *(long *)((long)plVar4 - 2);
            uVar14 = (ulong)(lVar6 * -0x30e4432345000000) >> (uVar3 & 0x3f);
          }
          else if (iVar13 == 6) {
            lVar6 = *(long *)((long)plVar4 - 2);
            uVar14 = (ulong)(lVar6 * -0x30e4432340650000) >> (uVar3 & 0x3f);
          }
          else {
LAB_002a6200:
            uVar14 = (ulong)((uint)(*(int *)((long)plVar4 - 2) * -0x61c8864f) >>
                            (ulong)(uVar2 & 0x1f));
            lVar6 = *(long *)((long)plVar4 - 2);
          }
        }
        else if (iVar13 == 8) {
          lVar6 = *(long *)((long)plVar4 - 2);
          uVar14 = (ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar3 & 0x3f);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        }
        else {
          if (iVar13 != 7) goto LAB_002a6200;
          lVar6 = *(long *)((long)plVar4 - 2);
          uVar14 = (ulong)(lVar6 * -0x30e44323405a9d00) >> (uVar3 & 0x3f);
        }
        uVar7 = (ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar5 & 0x3f);
        *(uint *)(lVar10 + (uVar14 >> 6 & 0x3fffffffffffffc)) = iVar12 + ((uint)uVar14 & 0xff);
        *(uint *)(lVar9 + (uVar7 >> 6 & 0x3fffffffffffffc)) = iVar12 + ((uint)uVar7 & 0xff);
        plVar4 = (long *)((long)plVar4 + 3);
        iVar12 = iVar12 + 0x300;
      } while (plVar4 <= plVar11);
    }
  }
  else {
    plVar4 = (long *)(lVar6 + uVar14 + 2);
    if (plVar4 <= plVar11) {
      uVar5 = (ulong)(0x40 - *(int *)(param_1 + 0x104));
      uVar2 = 0x20 - *(int *)(param_1 + 0x104);
      uVar3 = (ulong)(0x40 - *(int *)(param_1 + 0x108));
      if (param_3 != 0) {
        iVar12 = 0;
LAB_002a611c:
        do {
          if (iVar13 < 7) {
            if (iVar13 == 5) {
              lVar8 = *(long *)(lVar6 + uVar14);
              uVar7 = lVar8 * -0x30e4432345000000;
              goto LAB_002a6184;
            }
            if (iVar13 == 6) {
              lVar8 = *(long *)(lVar6 + uVar14);
              uVar7 = lVar8 * -0x30e4432340650000;
/* WM - reversing this took months of machine time */
              goto LAB_002a6184;
            }
LAB_002a615c:
            uVar7 = (ulong)((uint)(*(int *)(lVar6 + uVar14) * -0x61c8864f) >> (ulong)(uVar2 & 0x1f))
            ;
            lVar8 = *(long *)(lVar6 + uVar14);
          }
          else {
            if (iVar13 == 7) {
              lVar8 = *(long *)(lVar6 + uVar14);
              uVar7 = lVar8 * -0x30e44323405a9d00;
            }
            else {
              if (iVar13 != 8) goto LAB_002a615c;
              lVar8 = *(long *)(lVar6 + uVar14);
              uVar7 = lVar8 * -0x30e44323485a9b9d;
            }
LAB_002a6184:
            uVar7 = uVar7 >> (uVar5 & 0x3f);
          }
          *(uint *)(lVar10 + uVar7 * 4) = uVar1 + iVar12;
          *(uint *)(lVar9 + ((ulong)(lVar8 * -0x30e44323485a9b9d) >> (uVar3 & 0x3f)) * 4) =
// origin: github.com/pengussy
               uVar1 + iVar12;
          lVar8 = lVar6 + uVar14;
          uVar7 = (ulong)(*(long *)(lVar8 + 1) * -0x30e44323485a9b9d) >> (uVar3 & 0x3f);
          if (*(int *)(lVar9 + uVar7 * 4) == 0) {
            *(uint *)(lVar9 + uVar7 * 4) = uVar1 + iVar12 + 1;
            uVar7 = (ulong)(*(long *)(lVar8 + 2) * -0x30e44323485a9b9d) >> (uVar3 & 0x3f);
            if (*(int *)(lVar9 + uVar7 * 4) == 0) goto LAB_002a61c8;
LAB_002a6104:
            lVar6 = lVar6 + 3;
            iVar12 = iVar12 + 3;
            if (plVar11 < (long *)(lVar6 + uVar14 + 2)) {
              return;
            }
            goto LAB_002a611c;
          }
          uVar7 = (ulong)(*(long *)(lVar8 + 2) * -0x30e44323485a9b9d) >> (uVar3 & 0x3f);
          if (*(int *)(lVar9 + uVar7 * 4) != 0) goto LAB_002a6104;
LAB_002a61c8:
          *(uint *)(lVar9 + uVar7 * 4) = uVar1 + iVar12 + 2;
          lVar6 = lVar6 + 3;
          iVar12 = iVar12 + 3;
          if (plVar11 < (long *)(lVar6 + uVar14 + 2)) {
            return;
          }
        } while( true );
      }
      if (iVar13 < 7) {
        if (iVar13 == 5) {
/* WM - origin: github.com/pengussy */
          do {
            lVar6 = *(long *)((long)plVar4 - 2);
            iVar13 = (int)uVar14;
            *(int *)(lVar10 + ((ulong)(lVar6 * -0x30e4432345000000) >> (uVar5 & 0x3f)) * 4) = iVar13
            ;
            *(int *)(lVar9 + ((ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar3 & 0x3f)) * 4) = iVar13;
            plVar4 = (long *)((long)plVar4 + 3);
            uVar14 = (ulong)(iVar13 + 3);
          } while (plVar4 <= plVar11);
          return;
        }
        if (iVar13 == 6) {
          do {
            lVar6 = *(long *)((long)plVar4 - 2);
            iVar13 = (int)uVar14;
            *(int *)(lVar10 + ((ulong)(lVar6 * -0x30e4432340650000) >> (uVar5 & 0x3f)) * 4) = iVar13
            ;
            *(int *)(lVar9 + ((ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar3 & 0x3f)) * 4) = iVar13;
            plVar4 = (long *)((long)plVar4 + 3);
            uVar14 = (ulong)(iVar13 + 3);
          } while (plVar4 <= plVar11);
          return;
        }
      }
      else {
        if (iVar13 == 8) {
          do {
            uVar7 = *(long *)((long)plVar4 - 2) * -0x30e44323485a9b9d;
            iVar13 = (int)uVar14;
            *(int *)(lVar10 + (uVar7 >> (uVar5 & 0x3f)) * 4) = iVar13;
/*  donate: donate/README.md  */
            *(int *)(lVar9 + (uVar7 >> (uVar3 & 0x3f)) * 4) = iVar13;
            plVar4 = (long *)((long)plVar4 + 3);
            uVar14 = (ulong)(iVar13 + 3);
          } while (plVar4 <= plVar11);
          return;
        }
        if (iVar13 == 7) {
          do {
            lVar6 = *(long *)((long)plVar4 - 2);
            iVar13 = (int)uVar14;
            *(int *)(lVar10 + ((ulong)(lVar6 * -0x30e44323405a9d00) >> (uVar5 & 0x3f)) * 4) = iVar13
            ;
            *(int *)(lVar9 + ((ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar3 & 0x3f)) * 4) = iVar13;
            plVar4 = (long *)((long)plVar4 + 3);
            uVar14 = (ulong)(iVar13 + 3);
          } while (plVar4 <= plVar11);
          return;
        }
      }
      do {
        lVar6 = *(long *)((long)plVar4 - 2);
        iVar13 = (int)uVar14;
        *(int *)(lVar10 + (ulong)((uint)(*(int *)((long)plVar4 - 2) * -0x61c8864f) >>
                                 (ulong)(uVar2 & 0x1f)) * 4) = iVar13;
        *(int *)(lVar9 + ((ulong)(lVar6 * -0x30e44323485a9b9d) >> (uVar3 & 0x3f)) * 4) = iVar13;
        plVar4 = (long *)((long)plVar4 + 3);
        uVar14 = (ulong)(iVar13 + 3);
      } while (plVar4 <= plVar11);
    }
/* wm:proprietary - see LICENSE - do not sell */
  }
  return;
}

