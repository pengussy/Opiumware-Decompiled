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
 *  file-id: 0x13b2f0:a137322aa3
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

long * FUN_0013b2f0(long param_1,long ******param_2,long param_3,char *param_4)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong extraout_x1;
  long *******ppppppplVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  long ******pppppplVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  long *******ppppppplStack_170;
  undefined8 uStack_168;
  long *******appppppplStack_160 [3];
  long ******pppppplStack_148;
  long ******pppppplStack_140;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined3 uStack_12c;
  long ******pppppplStack_128;
  undefined1 uStack_120;
  uint7 uStack_11f;
  undefined8 uStack_118;
/* wm:do not claim this as your own */
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *******ppppppplStack_100;
  long *******ppppppplStack_f8;
  long *******ppppppplStack_f0;
  long ******pppppplStack_e8;
  long *******ppppppplStack_e0;
  long *******ppppppplStack_d8;
  long *******ppppppplStack_d0;
  long *******ppppppplStack_c8;
  long *******ppppppplStack_c0;
  long ******pppppplStack_b8;
  long ******pppppplStack_b0;
  undefined8 uStack_a0;
  undefined7 uStack_98;
  undefined1 uStack_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined4 uStack_80;
  long lStack_78;
/* WM - no support for modified copies */
  
  plVar6 = (long *)0x0;
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  pppppplStack_e8 = param_2;
  if ((((param_1 != 0) && (param_2 != (long ******)0x0)) && (param_3 != 0)) &&
     (plVar6 = (long *)func_0x007910c4(param_1,3), (int)plVar6 != 0)) {
    *param_4 = '\0';
    param_4[9] = '\0';
    param_4[10] = '\0';
    param_4[0xb] = '\0';
    param_4[0xc] = '\0';
    param_4[0xd] = '\0';
    param_4[0xe] = '\0';
    param_4[0xf] = '\0';
    param_4[0x10] = '\0';
    *(ulong *)(param_4 + 1) = (ulong)(uint7)uStack_a0;
    param_4[0x18] = '\0';
    param_4[0x19] = '\0';
    param_4[0x1a] = '\0';
    param_4[0x1b] = '\0';
    param_4[0x1c] = '\0';
    param_4[0x1d] = '\0';
    param_4[0x1e] = '\0';
    param_4[0x1f] = '\0';
    param_4[0x10] = '\0';
    param_4[0x11] = '\0';
    param_4[0x12] = '\0';
    param_4[0x13] = '\0';
    param_4[0x14] = '\0';
    param_4[0x15] = '\0';
// origin: github.com/pengussy
    param_4[0x16] = '\0';
    param_4[0x17] = '\0';
    ppppppplStack_100 = (long *******)0x0;
    ppppppplStack_f8 = (long *******)0x0;
    ppppppplStack_f0 = (long *******)0x0;
    uStack_98 = 0;
    uStack_91 = 0;
    uStack_a0._0_7_ = 0;
    uStack_a0._7_1_ = 0;
    uStack_88 = 0;
    uStack_81 = 0;
    uStack_90 = 0;
    uStack_89 = 0;
    uStack_80 = 0x3f800000;
    ppppppplStack_100 = (long *******)__Znwm(&UNK_00002800);
    ppppppplStack_f0 = ppppppplStack_100 + 0x500;
    ppppppplStack_f8 = ppppppplStack_100;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    func_0x00130a44(&uStack_a0,0x100);
    uStack_120 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_118 = 0;
    pppppplStack_128 = pppppplStack_e8;
    ppppppplStack_e0 = ppppppplStack_f8;
    ppppppplStack_170 = (long *******)&ppppppplStack_e0;
    uStack_168 = (long ******)&pppppplStack_128;
    appppppplStack_160[0] = (long *******)&ppppppplStack_100;
    if (ppppppplStack_f8 < ppppppplStack_f0) {
      ppppppplStack_f8[4] = (long ******)0x0;
      ppppppplStack_f8[1] = (long ******)((ulong)uStack_11f << 8);
      *ppppppplStack_f8 = pppppplStack_e8;
      ppppppplStack_f8[3] = (long ******)0x0;
      ppppppplStack_f8[2] = (long ******)0x0;
      ppppppplStack_f8 = ppppppplStack_f8 + 5;
    }
    else {
      func_0x0013b96c(&ppppppplStack_170);
      ppppppplStack_f8 = ppppppplStack_e0;
    }
    ppppppplStack_170 = (long *******)&uStack_a0;
    func_0x0016e5c8(&ppppppplStack_170,&pppppplStack_e8,&pppppplStack_e8);
    uVar4 = func_0x00791650(param_1);
    if (ppppppplStack_f8 != ppppppplStack_100) {
      uVar17 = 0;
      uVar18 = 0;
      do {
        ppppppplVar10 = ppppppplStack_100 + uVar18 * 5;
        pppppplStack_140 = *ppppppplVar10;
        bVar1 = *(byte *)(ppppppplVar10 + 1);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar14 = (ulong)bVar1;
        uStack_130._0_3_ = (undefined3)*(undefined4 *)((long)ppppppplVar10 + 9);
        uStack_130._3_1_ = (undefined1)*(undefined4 *)((long)ppppppplVar10 + 0xc);
        uStack_12c = (undefined3)((uint)*(undefined4 *)((long)ppppppplVar10 + 0xc) >> 8);
        pppppplStack_b8 = ppppppplVar10[3];
        ppppppplStack_c0 = (long *******)ppppppplVar10[2];
        pppppplStack_b0 = ppppppplVar10[4];
        uStack_134 = 7;
        func_0x00790fe8(param_1,&pppppplStack_140);
        uVar7 = func_0x00791624(param_1,0xffffffff);
        if (uVar17 != 0x1000) {
          uVar15 = 0;
          do {
            uVar15 = func_0x007952a0(param_1,uVar7,uVar15);
            if ((int)uVar15 < 0) break;
            puVar8 = (undefined8 *)func_0x00790f58(param_1,0xfffffffe);
            puVar9 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
            if (*(int *)((long)puVar8 + 0xc) == 6) {
              pppppplVar16 = (long ******)*puVar8;
              iVar5 = func_0x00856808(puVar9,param_3);
              if (iVar5 != 0) {
                *param_4 = bVar1 + 1;
                if (bVar1 == 0) {
                  uVar14 = 0;
                }
                else {
                  _memcpy(param_4 + 8,&ppppppplStack_c0,uVar14 << 3);
                }
                *(long *******)(param_4 + uVar14 * 8 + 8) = pppppplVar16;
                func_0x00791660(param_1,uVar4);
/* stripping the watermark breaks the license - github.com/pengussy */
                plVar6 = (long *)((long)&MACH_HEADER.magic + 1);
                plVar13 = (long *)CONCAT17(uStack_89,uStack_90);
                goto joined_r0x0013b6fc;
              }
              if (((bVar1 < 2) && (*(int *)((long)puVar9 + 0xc) == 7)) &&
                 ((ulong)(((long)ppppppplStack_f8 - (long)ppppppplStack_100 >> 3) *
                         -0x3333333333333333) < 0x100)) {
                pppppplStack_148 = (long ******)*puVar9;
                ppppppplStack_170 = (long *******)&uStack_a0;
                func_0x0016e5c8(&ppppppplStack_170,appppppplStack_160 + 3,appppppplStack_160 + 3);
                if ((extraout_x1 & 1) != 0) {
                  uStack_168 = (long ******)
                               CONCAT44(CONCAT31(uStack_12c,uStack_130._3_1_),uStack_130 << 8);
                  appppppplStack_160[0] = ppppppplStack_c0;
                  ppppppplStack_170 = (long *******)pppppplStack_148;
                  appppppplStack_160[uVar14] = (long *******)pppppplVar16;
                  uStack_168 = (long ******)CONCAT71(uStack_168._1_7_,bVar1 + 1);
                  ppppppplStack_c8 = ppppppplStack_f8;
                  ppppppplStack_e0 = (long *******)&ppppppplStack_c8;
                  ppppppplStack_d0 = (long *******)&ppppppplStack_100;
                  ppppppplStack_d8 = (long *******)&ppppppplStack_170;
                  if (ppppppplStack_f8 < ppppppplStack_f0) {
                    ppppppplStack_f8[4] = pppppplStack_b0;
                    ppppppplStack_f8[1] = uStack_168;
                    *ppppppplStack_f8 = pppppplStack_148;
/*  reversing this took months of machine time  */
                    ppppppplStack_f8[3] = pppppplStack_b8;
                    ppppppplStack_f8[2] = (long ******)ppppppplStack_c0;
                    ppppppplStack_f8 = ppppppplStack_f8 + 5;
                  }
                  else {
                    func_0x0013b96c(&ppppppplStack_e0);
                    ppppppplStack_f8 = ppppppplStack_c8;
                  }
                }
              }
            }
            func_0x00791660(param_1,0xfffffffd);
            uVar17 = uVar17 + 1;
          } while (uVar17 != 0x1000);
        }
        func_0x00791660(param_1,0xfffffffe);
      } while ((uVar17 < 0x1000) &&
              (uVar18 = uVar18 + 1,
              uVar18 < (ulong)(((long)ppppppplStack_f8 - (long)ppppppplStack_100 >> 3) *
                              -0x3333333333333333)));
    }
    func_0x00791660(param_1,uVar4);
    plVar6 = (long *)0x0;
    plVar13 = (long *)CONCAT17(uStack_89,uStack_90);
joined_r0x0013b6fc:
    while (plVar13 != (long *)0x0) {
      plVar13 = (long *)*plVar13;
      __ZdlPv();
    }
    lVar3 = CONCAT17(uStack_a0._7_1_,(uint7)uStack_a0);
    uStack_a0._0_7_ = 0;
/* wm:origin: github.com/pengussy */
    uStack_a0._7_1_ = 0;
    if (lVar3 != 0) {
      __ZdlPv();
    }
    if (ppppppplStack_100 != (long *******)0x0) {
      ppppppplStack_f8 = ppppppplStack_100;
      __ZdlPv();
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
    return plVar6;
  }
  uVar7 = ___stack_chk_fail(plVar6);
  func_0x0003bd24(&uStack_a0);
  if (ppppppplStack_100 != (long *******)0x0) {
    ppppppplStack_f8 = ppppppplStack_100;
    __ZdlPv();
  }
  auVar19 = __Unwind_Resume(uVar7);
  plVar6 = auVar19._0_8_;
  uVar18 = plVar6[1];
  if ((uVar18 != 0) && (plVar6[3] != 0)) {
    uVar17 = *auVar19._8_8_;
    uVar14 = ((ulong)(uint)((int)uVar17 << 3) + 8 ^ uVar17 >> 0x20) * -0x622015f714c7d297;
    uVar14 = (uVar17 >> 0x20 ^ uVar14 >> 0x2f ^ uVar14) * -0x622015f714c7d297;
    uVar14 = (uVar14 ^ uVar14 >> 0x2f) * -0x622015f714c7d297;
    uVar12 = uVar18 - 1;
    if ((uVar18 & uVar12) == 0) {
      uVar11 = uVar14 & uVar12;
      plVar6 = *(long **)(*plVar6 + uVar11 * 8);
    }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    else {
      uVar11 = uVar14;
      if (uVar18 <= uVar14) {
        uVar11 = 0;
        if (uVar18 != 0) {
          uVar11 = uVar14 / uVar18;
        }
        uVar11 = uVar14 - uVar11 * uVar18;
      }
      plVar6 = *(long **)(*plVar6 + uVar11 * 8);
    }
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if ((uVar18 & uVar12) == 0) {
        do {
          if (uVar14 == plVar6[1]) {
            if (plVar6[2] == uVar17) {
              return plVar6;
            }
          }
          else if ((plVar6[1] & uVar12) != uVar11) {
            return (long *)0x0;
/* wm:no support for modified copies */
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar6[1];
          if (uVar14 == uVar12) {
            if (plVar6[2] == uVar17) {
              return plVar6;
            }
          }
          else {
            if (uVar18 <= uVar12) {
              uVar2 = 0;
              if (uVar18 != 0) {
                uVar2 = uVar12 / uVar18;
              }
              uVar12 = uVar12 - uVar2 * uVar18;
            }
            if (uVar12 != uVar11) {
              return (long *)0x0;
            }
          }
          plVar6 = (long *)*plVar6;
        } while (plVar6 != (long *)0x0);
      }
    }
  }
  return (long *)0x0;
}

