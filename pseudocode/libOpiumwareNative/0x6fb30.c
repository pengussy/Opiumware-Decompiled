/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x6fb30:afc1bbe4b2
   =========================================================================== */

long FUN_0006fb30(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar5 = lRam0000000001f268f0;
  uVar1 = *(uint *)(param_1 + 0xb0);
  if ((int)uVar1 < 1) {
    lVar4 = 2;
  }
  else {
    uVar12 = 0;
    lVar14 = *(long *)(param_1 + 0x80);
    lVar11 = 2;
    do {
      plVar7 = (long *)(lVar14 + uVar12 * 0x10);
      iVar2 = *(int *)((long)plVar7 + 0xc);
      if (iVar2 < 5) {
        lVar6 = lVar11 + 8;
        if (iVar2 != 3) {
/*  more drops soon - github.com/pengussy  */
          lVar6 = lVar11;
        }
        lVar4 = lVar11 + 4;
        if (iVar2 != 1) {
          lVar4 = lVar6;
        }
        if (iVar2 == 0) {
          lVar4 = lVar11 + 1;
        }
      }
      else {
        lVar4 = lVar11;
        if (iVar2 < 7) {
          if (iVar2 == 5) {
            lVar4 = lVar11 + 0xc;
          }
          else if (iVar2 == 6) {
            lVar4 = lVar11 + (ulong)*(uint *)(*plVar7 + 0x14);
          }
        }
        else if (iVar2 == 7) {
          lVar6 = *(long *)(*plVar7 + 0x18);
/* donate: donate/README.md - github.com/pengussy */
          if ((lVar6 != lVar5) && (uVar8 = (uint)*(byte *)(*plVar7 + 4), uVar8 != 0x1f)) {
            uVar3 = 1 << (ulong)(uVar8 & 0x1f);
            uVar8 = uVar3;
            if ((int)uVar3 < 2) {
              uVar8 = 1;
            }
            if ((int)uVar3 < 8) {
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              plVar7 = (long *)(lVar6 + 0x90);
              do {
                if ((*(uint *)((long)plVar7 + -0x74) & 0xf) == 6) {
                  lVar11 = lVar11 + (ulong)*(uint *)(plVar7[-0x10] + 0x14);
                  if ((*(uint *)((long)plVar7 + -0x54) & 0xf) != 6) goto LAB_0006fc98;
LAB_0006fd18:
                  lVar11 = lVar11 + (ulong)*(uint *)(plVar7[-0xc] + 0x14);
                  if ((*(uint *)((long)plVar7 + -0x34) & 0xf) != 6) goto LAB_0006fca8;
LAB_0006fd34:
                  lVar11 = lVar11 + (ulong)*(uint *)(plVar7[-8] + 0x14);
                  if ((*(uint *)((long)plVar7 + -0x14) & 0xf) != 6) goto LAB_0006fcb8;
LAB_0006fd50:
                  lVar11 = lVar11 + (ulong)*(uint *)(plVar7[-4] + 0x14);
                  if ((*(uint *)((long)plVar7 + 0xc) & 0xf) != 6) goto LAB_0006fcc8;
LAB_0006fd6c:
                  lVar11 = lVar11 + (ulong)*(uint *)(*plVar7 + 0x14);
                  if ((*(uint *)((long)plVar7 + 0x2c) & 0xf) != 6) goto LAB_0006fcd8;
LAB_0006fd88:
                  lVar11 = lVar11 + (ulong)*(uint *)(plVar7[4] + 0x14);
                  if ((*(uint *)((long)plVar7 + 0x4c) & 0xf) != 6) goto LAB_0006fce8;
LAB_0006fda4:
                  lVar11 = lVar11 + (ulong)*(uint *)(plVar7[8] + 0x14);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
                  uVar3 = *(uint *)((long)plVar7 + 0x6c);
                }
                else {
                  if ((*(uint *)((long)plVar7 + -0x54) & 0xf) == 6) goto LAB_0006fd18;
LAB_0006fc98:
                  if ((*(uint *)((long)plVar7 + -0x34) & 0xf) == 6) goto LAB_0006fd34;
LAB_0006fca8:
                  if ((*(uint *)((long)plVar7 + -0x14) & 0xf) == 6) goto LAB_0006fd50;
LAB_0006fcb8:
                  if ((*(uint *)((long)plVar7 + 0xc) & 0xf) == 6) goto LAB_0006fd6c;
LAB_0006fcc8:
                  if ((*(uint *)((long)plVar7 + 0x2c) & 0xf) == 6) goto LAB_0006fd88;
LAB_0006fcd8:
                  if ((*(uint *)((long)plVar7 + 0x4c) & 0xf) == 6) goto LAB_0006fda4;
LAB_0006fce8:
                  uVar3 = *(uint *)((long)plVar7 + 0x6c);
                }
                if ((uVar3 & 0xf) == 6) {
                  lVar11 = lVar11 + (ulong)*(uint *)(plVar7[0xc] + 0x14);
                }
                lVar10 = lVar10 + -8;
                plVar7 = plVar7 + 0x20;
              } while (-lVar10 != ((ulong)uVar8 & 0xfffffff8));
              lVar10 = -lVar10;
              lVar4 = lVar11;
            }
            if ((uVar8 & 7) != 0) {
              uVar9 = (ulong)uVar8 & 7;
              plVar7 = (long *)(lVar6 + lVar10 * 0x20 + 0x10);
              do {
                if ((*(uint *)((long)plVar7 + 0xc) & 0xf) == 6) {
                  lVar4 = lVar4 + (ulong)*(uint *)(*plVar7 + 0x14);
                }
                plVar7 = plVar7 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
          }
// origin: github.com/pengussy
        }
        else if (iVar2 == 8) {
          if (*(char *)(*plVar7 + 3) == '\0') {
            lVar4 = FUN_0006fb30(*(undefined8 *)(*plVar7 + 0x18));
            lVar4 = lVar4 + lVar11;
          }
          else {
            lVar4 = lVar11 + 1;
          }
        }
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar4;
    } while (uVar12 != uVar1);
  }
  uVar12 = (ulong)*(uint *)(param_1 + 0xac);
  if (0 < (int)*(uint *)(param_1 + 0xac)) {
    puVar13 = *(undefined8 **)(param_1 + 0x58);
    do {
      lVar5 = FUN_0006fb30(*puVar13);
      lVar4 = lVar5 + lVar4;
      uVar12 = uVar12 - 1;
      puVar13 = puVar13 + 1;
    } while (uVar12 != 0);
  }
  return lVar4 + (long)*(int *)(param_1 + 0xb8) * 4;
}

