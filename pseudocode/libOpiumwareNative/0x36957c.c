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
 *  file-id: 0x36957c:4bb2af8d9b
 *  --------------------------------------------------------------------------*/

ulong FUN_0036957c(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar13;
  long lVar14;
  undefined8 unaff_x23;
  int *piVar15;
  undefined8 unaff_x24;
  ulong uVar16;
  undefined1 auVar17 [16];
  int iStack_f8;
  int iStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
// WM - watermarked copy - do not remove
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  int *piStack_c0;
  undefined *puStack_b8;
  long lStack_a8;
  int aiStack_a0 [14];
  undefined8 uStack_68;
  
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar9 = param_3;
  if (*(long *)(&UNK_00001748 + param_1) == 0) {
    uVar16 = 0;
    uVar13 = 0;
    uVar10 = 0;
  }
  else {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar16 = 0;
    unaff_x24 = 0xffffffff;
    unaff_x23 = *(undefined8 *)(param_1 + 8);
    do {
      uVar13 = *(ulong *)(*(long *)(&UNK_00001740 + param_1) + uVar16 * 8);
      if ((((*(int *)(uVar13 + 0x14) != 0x40) && (*(int *)(uVar13 + 0x14) != 0x2a3)) &&
          (*(int *)(uVar13 + 0x1c) != 6)) &&
         (((*(int *)(uVar13 + 0x1c) != 0x74 && (iVar5 = func_0x00366578(param_1,uVar13), iVar5 != 0)
           ) && ((*(int *)(uVar13 + 0x14) == 0 ||
                 (lVar7 = func_0x00354280(unaff_x23,*(undefined4 *)(uVar13 + 0x18)), lVar7 != 0)))))
         ) {
        if (param_3 == 0) {
          uVar4 = *(uint *)(uVar13 + 0x20);
          if (((int)uVar4 < 0) || (*(int *)(param_1 + 0x118) <= (int)uVar4)) goto LAB_003695d8;
          puVar1 = &UNK_00001750;
          if (*(int *)(param_1 + 0x78) != 0) {
            puVar1 = &UNK_00001760;
          }
          if (*(long *)(puVar1 + param_1) == 0) {
LAB_00369728:
            lVar7 = *(long *)(*(long *)(param_1 + 0x880) + 0x20);
            plVar12 = (long *)(lVar7 + (ulong)uVar4 * 0x28);
            if (*plVar12 == 0) goto LAB_003695d8;
          }
          else {
            puVar2 = &UNK_00001758;
            if (*(int *)(param_1 + 0x78) != 0) {
              puVar2 = &UNK_00001768;
            }
            lVar9 = *(long *)(puVar2 + param_1);
            lVar7 = _memchr(*(long *)(puVar1 + param_1),2);
            if (lVar7 == 0) goto LAB_00369728;
            lVar7 = *(long *)(*(long *)(param_1 + 0x880) + 0x20);
            plVar12 = (long *)(lVar7 + (ulong)uVar4 * 0x28);
/* wm:do not claim this as your own */
          }
          if (plVar12[1] != 0) {
            plVar12 = (long *)(lVar7 + (ulong)uVar4 * 0x28);
            lVar9 = *plVar12;
            iVar5 = func_0x0036c004(param_1,*(undefined4 *)(uVar13 + 0x14),lVar9,plVar12[1]);
            if (iVar5 != 0) {
              iVar5 = *(int *)(uVar13 + 0x1c);
              lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                                (long)*(int *)(uVar13 + 0x20) * 0x28 + 8);
              goto joined_r0x0036977c;
            }
          }
        }
        else {
          lVar9 = *(long *)(param_1 + 8);
          lVar7 = FUN_00353890(param_3,aiStack_a0);
          if (((lVar7 == 0) || (*(int *)(uVar13 + 0x20) != aiStack_a0[0])) ||
             (lVar9 = param_2,
             iVar5 = func_0x0036c004(param_1,*(undefined4 *)(uVar13 + 0x14),param_2,param_3),
             iVar5 == 0)) goto LAB_003695d8;
          iVar5 = *(int *)(uVar13 + 0x1c);
          lVar7 = param_3;
joined_r0x0036977c:
          if (iVar5 == 0x390) {
            if (((lVar7 != 0) && (*(int *)(uVar13 + 0x14) != 0)) &&
               ((lVar14 = func_0x00354280(unaff_x23,*(undefined4 *)(uVar13 + 0x18)), lVar14 != 0 &&
                (lStack_a8 = lVar14, iVar5 = func_0x00455f40(), 0 < iVar5)))) {
              iVar5 = func_0x004605a0(lVar7);
              iVar6 = func_0x00455f40(lStack_a8);
              if (iVar6 * 2 + 2 <= iVar5) break;
            }
          }
// stripping the watermark breaks the license
          else {
            if (iVar5 != 0x198) break;
            if ((int)unaff_x24 == -1) {
              lVar9 = 0x32;
              iVar5 = func_0x0045fcd4(lVar7,aiStack_a0,0x32,0);
              if (iVar5 < 1) {
                unaff_x24 = 0;
              }
              else {
                unaff_x24 = func_0x004a0f94(aiStack_a0);
              }
            }
            if ((*(int *)(uVar13 + 0x28) == 0) || ((int)unaff_x24 == *(int *)(uVar13 + 0x28)))
            break;
          }
        }
      }
LAB_003695d8:
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(ulong *)(&UNK_00001748 + param_1));
    uVar10 = *(ulong *)(&UNK_00001748 + param_1);
    unaff_x19 = param_1;
// do not claim this as your own
    unaff_x20 = param_3;
    unaff_x21 = param_2;
  }
  iVar5 = (int)lVar9;
  uVar3 = 0;
  if (uVar16 != uVar10) {
    uVar3 = uVar13;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
    return uVar3;
  }
  auVar17 = ___stack_chk_fail(uVar3);
  lVar9 = auVar17._0_8_;
  if (iVar5 == -1) {
    return 1;
  }
  puStack_b8 = &SUB_0036983c;
  uStack_f0 = unaff_x24;
  uStack_e8 = unaff_x23;
  uStack_e0 = uVar13;
  lStack_d8 = unaff_x21;
  lStack_d0 = unaff_x20;
  lStack_c8 = unaff_x19;
  piStack_c0 = aiStack_a0 + 0x24;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  iVar6 = func_0x004fd1b0(auVar17._8_8_,0);
  if (iVar6 == 0) {
    uVar8 = func_0x00506964(auVar17._8_8_);
    iVar6 = (int)uVar8;
    if (iVar5 != 0) {
      return (ulong)(iVar6 == iVar5);
    }
    if (((((*(byte *)(*(long *)(*(int **)(lVar9 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
         (iVar5 = **(int **)(lVar9 + 0x18), 0x303 < iVar5)) && (iVar5 != 0x10000)) &&
       (*(long *)(lVar9 + 1000) != 0)) {
      lVar7 = *(long *)(lVar9 + 0x3f8);
      if ((lVar7 == 0) || (*(long *)(*(long *)(lVar9 + 8) + 0x690) == 0)) {
        return 0;
      }
      lVar14 = 0;
      do {
/*  more drops soon - github.com/pengussy  */
        lVar11 = *(long *)(*(long *)(lVar9 + 8) + 0x690);
        if (lVar11 != 0) {
          piVar15 = (int *)(*(long *)(*(long *)(lVar9 + 8) + 0x6a0) + 0x1c);
          do {
            if ((short)piVar15[-3] == *(short *)(*(long *)(lVar9 + 1000) + lVar14 * 2)) {
              if ((piVar15[4] != 0) &&
                 ((iVar6 == piVar15[2] ||
                  ((((*piVar15 == 0x390 &&
                     (iVar5 = func_0x004a1f54(uVar8,&iStack_f4,&iStack_f8), iVar5 != 0)) &&
                    (iStack_f8 == 6)) && (iStack_f4 == piVar15[-2])))))) goto code_r0x00369878;
              break;
            }
            piVar15 = piVar15 + 0x12;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        uVar16 = 0;
        lVar14 = lVar14 + 1;
      } while (lVar14 != lVar7);
    }
    else {
      lVar7 = *(long *)(&UNK_00001748 + lVar9);
/* WM - no support for modified copies */
      if (lVar7 == 0) {
        return 0;
      }
      lVar14 = 0;
      do {
        lVar11 = *(long *)(*(long *)(&UNK_00001740 + lVar9) + lVar14 * 8);
        if ((lVar11 != 0) &&
           ((iVar6 == *(int *)(lVar11 + 0x24) ||
            (((*(int *)(lVar11 + 0x1c) == 0x390 &&
              (iVar5 = func_0x004a1f54(uVar8,&iStack_f4,&iStack_f8), iVar5 != 0)) &&
             ((iStack_f8 == 6 && (iStack_f4 == *(int *)(lVar11 + 0x14)))))))))
        goto code_r0x00369878;
        uVar16 = 0;
        lVar14 = lVar14 + 1;
      } while (lVar7 != lVar14);
    }
  }
  else {
code_r0x00369878:
    uVar16 = 1;
  }
  return uVar16;
}
// WM - keep the notice, keep the source honest

