/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x27b3fc:f58ced952b
 */

long FUN_0027b3fc(undefined1 param_1 [16],undefined1 param_2 [16],double param_3,double param_4,
                 long param_5,long param_6)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  float fVar17;
// chat: discord.gg/sdkhDjTex
  float fVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined1 uStack_ec;
  undefined2 uStack_ea;
  undefined1 uStack_e8;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = __ZNSt3__15mutex8try_lockEv(0x2057d70);
  lVar11 = 0;
  if (iVar3 == 0) goto LAB_0027baf8;
  if ((param_5 != 0) && (param_6 != 0)) {
    lVar11 = func_0x01a1b660(param_6);
    if (lVar11 == 0) {
LAB_0027b6c4:
      lVar11 = 0;
    }
/* WM - do not claim this as your own */
    else {
      func_0x01a1b660(param_6);
      lVar5 = func_0x01a1a160();
      lVar11 = 0;
      if (lVar5 != 0) {
        if (lRam0000000002093180 == 0) {
          func_0x00319c84("1.92.8",0xbd8,0x524,8,0x10,0x14,2);
          lRam0000000002093180 = func_0x00300d0c(0);
          func_0x0031f148(0);
          lVar11 = func_0x00306aac();
          func_0x00325bb8(*(undefined8 *)(lVar11 + 0x38));
          iVar3 = iRam0000000001f276c8;
          lVar13 = 0;
          lVar14 = *(long *)(lVar11 + 0x38);
          if ((lVar14 != 0) && (iRam0000000001f276c8 != 0)) {
            func_0x00325a00(&uStack_120);
            uStack_ec = 0;
            uStack_e8 = 1;
            uStack_ea = 0x101;
            lVar13 = func_0x00327bbc(0x41800000,lVar14,0x1f27798,iVar3,&uStack_120,0);
            lVar14 = *(long *)(lVar11 + 0x38);
          }
          iVar3 = iRam0000000001f276cc;
          lVar15 = 0;
          if ((lVar14 != 0) && (iRam0000000001f276cc != 0)) {
            func_0x00325a00(&uStack_120);
            uStack_ec = 0;
            uStack_e8 = 1;
            uStack_ea = 0x101;
            lVar15 = func_0x00327bbc(0x41800000,lVar14,0x1fa8cbc,iVar3,&uStack_120,0);
            lVar14 = *(long *)(lVar11 + 0x38);
          }
          iVar3 = iRam0000000001f276d0;
          lVar16 = 0;
          if ((lVar14 != 0) && (iRam0000000001f276d0 != 0)) {
            func_0x00325a00(&uStack_120);
            uStack_ec = 0;
            uStack_e8 = 1;
/*  more drops soon - github.com/pengussy  */
            uStack_ea = 0x101;
            lVar16 = func_0x00327bbc(0x41800000,lVar14,0x202adc0,iVar3,&uStack_120,0);
            lVar14 = *(long *)(lVar11 + 0x38);
          }
          lRam00000000020931b8 = func_0x00327074(lVar14,0);
          if (lVar13 != 0) {
            lRam00000000020931b8 = lVar13;
          }
          lRam00000000020931c8 = lRam00000000020931b8;
          if (lVar15 != 0) {
            lRam00000000020931c8 = lVar15;
          }
          *(long *)(lVar11 + 0x40) = lRam00000000020931b8;
          lRam00000000020931d0 = lRam00000000020931b8;
          if (lVar16 != 0) {
            lRam00000000020931d0 = lVar16;
          }
/* unlicensed copy if this notice is missing - github.com/pengussy */
          lRam00000000020931c0 = lRam00000000020931b8;
          func_0x00249468(&DAT_0027bc40);
        }
        func_0x00300d00(lRam0000000002093180);
        if ((bRam0000000002093171 & 1) == 0) {
          iVar3 = func_0x00344cf8(lVar5);
          bRam0000000002093171 = (byte)iVar3;
          if (iVar3 == 0) goto LAB_0027b6c4;
        }
        if ((bRam0000000002093172 & 1) == 0) {
          func_0x00249350(&DAT_0027bc70);
          func_0x002493dc(&DAT_00277bb4);
          bRam0000000002093172 = 1;
        }
        if (lRam0000000002093188 != lVar5) {
          func_0x0027ca40(0x20931d8);
        }
        lRam0000000002093190 = lRam0000000002093190 + 1;
        lRam0000000002093188 = lVar5;
        if (lRam0000000002097038 == 0) {
LAB_0027b6d0:
          func_0x0027ca40(0x20931d8);
          uVar12 = 0;
        }
// WM - origin: github.com/pengussy
        else {
          if (*(long *)(lRam0000000001f26750 + lRam0000000002097038) == 0) {
            func_0x00108ab4();
            goto LAB_0027b6d0;
          }
          uVar12 = 1;
        }
        func_0x002496b4(uVar12);
        uVar6 = func_0x0024c47c();
        if ((uVar6 & 1) == 0) {
          lVar11 = func_0x01a1a8e0(lRam0000000002093188);
          if (lVar11 == 0) {
            uVar6 = 0x10000000;
          }
          else {
            uVar6 = func_0x01a1a8e0(lRam0000000002093188);
            uVar6 = uVar6 >> 3;
            if (0xfffffff < uVar6) {
              uVar6 = 0x10000000;
            }
          }
          func_0x0027caf8(0x20931d8,lRam0000000002093190,uVar6,0x80,0x4b0);
          func_0x0027ecdc();
          func_0x00277894(lVar5,0,lRam0000000002093190,uVar12);
          func_0x002779b0();
          dRam0000000002093198 = 0.0;
/* WM - proprietary - see LICENSE - do not sell */
          lVar11 = 1;
        }
        else {
          lVar11 = func_0x00306aac();
          func_0x01a1a520(param_6);
          func_0x01a19de0();
          if ((((0x7fefffffffffffff < (ulong)ABS(param_3)) || (param_3 <= 0.0)) ||
              (0x7fefffffffffffff < (ulong)ABS(param_4))) || (param_4 <= 0.0)) {
            fVar17 = (float)func_0x0027c244();
            *(float *)(lVar11 + 0x10) = fVar17;
            *(float *)(lVar11 + 0x14) = fVar17;
            func_0x01a1b660(param_6);
            uVar6 = func_0x01a1b6e0();
            func_0x01a1b660(param_6);
            uVar7 = func_0x01a1a2a0();
            fVar18 = (float)uVar6 / fVar17;
            lVar13 = 0xc;
            lVar14 = 8;
          }
          else {
            fVar17 = (float)param_4;
            *(float *)(lVar11 + 8) = (float)param_3;
            *(float *)(lVar11 + 0xc) = fVar17;
            func_0x01a1b660(param_6);
            uVar6 = func_0x01a1b6e0();
            func_0x01a1b660(param_6);
            uVar7 = func_0x01a1a2a0();
            fVar18 = (float)uVar6 / (float)param_3;
            lVar13 = 0x14;
            lVar14 = 0x10;
          }
          *(float *)(lVar11 + lVar14) = fVar18;
          *(float *)(lVar11 + lVar13) = (float)uVar7 / fVar17;
/* if you paid for this, you were scammed - github.com/pengussy */
          dVar19 = (double)_CFAbsoluteTimeGetCurrent();
          fVar17 = (float)(dVar19 - dRam0000000002093198);
          if (dRam0000000002093198 <= 0.0) {
            fVar17 = 0.016666668;
          }
          dVar20 = (double)(ulong)(uint)fVar17;
          if (fVar17 <= 0.0) {
            dVar20 = 5.01763588302561e-315;
          }
          *(int *)(lVar11 + 0x18) = SUB84(dVar20,0);
          dRam0000000002093198 = dVar19;
          func_0x002fd6cc(lVar11,0);
          puVar1 = PTR__NSApp_01f20028;
          lVar13 = func_0x01a1a4c0(*(undefined8 *)PTR__NSApp_01f20028);
          if (lVar13 == 0) {
            lVar13 = func_0x01a1a5e0(*(undefined8 *)puVar1);
/* WM - origin: github.com/pengussy */
          }
          lVar14 = func_0x01a19f40(lVar13);
          if ((lVar13 != 0) && (lVar14 != 0)) {
            func_0x01a1a620(uRam0000000001f26300);
            func_0x01a19fa0(lVar13);
            dVar19 = (double)func_0x01a19f80(lVar14,extraout_x1,0);
            uVar6 = func_0x01a1a400(lVar14);
            if ((uVar6 & 1) == 0) {
              func_0x01a19de0(lVar14);
              dVar20 = param_4 - dVar20;
            }
            func_0x002fd334((float)dVar19,(float)dVar20,lVar11);
          }
          uVar6 = func_0x01a1a8c0(uRam0000000001f26300);
          func_0x002fd46c(lVar11,0,(uint)uVar6 & 1);
          func_0x002fd46c(lVar11,1,uVar6 >> 1 & 1);
          func_0x002fd46c(lVar11,2,uVar6 >> 2 & 1);
          if ((*(int *)(*(long *)(lVar11 + 0x38) + 0x68) < 1) ||
             ((*(byte *)(*(long *)(lVar11 + 0x38) + 0x52) & 1) == 0)) {
            func_0x00344248(lVar5);
          }
          cVar2 = cRam0000000002097052;
          uStack_f0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          lStack_118 = 0;
          uStack_120 = 0;
          uVar8 = func_0x01a1b660(param_6);
          if (cVar2 == '\0') {
            func_0x0027ecdc();
LAB_0027b990:
            uVar9 = func_0x01a1a9a0(uRam0000000001f262c8);
            auVar21 = func_0x01a19ea0();
            auVar21 = func_0x01a1a7c0(auVar21._0_8_,auVar21._8_8_,0);
/* WM - donate: donate/README.md */
            func_0x01a1b420(auVar21._0_8_,auVar21._8_8_,uVar8);
            uVar8 = 1;
            if (cVar2 != '\0') {
              uVar8 = 2;
            }
            auVar21 = func_0x01a19ea0(uVar9);
            auVar21 = func_0x01a1a7c0(auVar21._0_8_,auVar21._8_8_,0);
            func_0x01a1b080(auVar21._0_8_,auVar21._8_8_,uVar8);
            auVar21 = func_0x01a19ea0(uVar9);
            auVar21 = func_0x01a1a7c0(auVar21._0_8_,auVar21._8_8_,0);
            func_0x01a1b3e0(auVar21._0_8_,auVar21._8_8_,1);
            auVar21 = func_0x01a19ea0(uVar9);
            func_0x01a1a7c0(auVar21._0_8_,auVar21._8_8_,0);
            func_0x01a1ac60(0,0,0,0);
            func_0x003441d4(uVar9);
            func_0x00307ee8();
            lVar13 = lStack_118;
            if (cVar2 == '\0') {
              lVar13 = param_5;
// proprietary - see LICENSE - do not sell
            }
            func_0x00277894(lVar5,lVar13,lRam0000000002093190,uVar12);
            func_0x0026d950();
            func_0x002779b0();
            func_0x0027c1e8();
            func_0x003148f0();
            lVar5 = func_0x01a1a980(lVar13,extraout_x1_00,uVar9);
            lVar11 = 0;
            if (lVar5 != 0) {
              uVar12 = func_0x00306acc();
              func_0x00344348(uVar12,lVar13,lVar5);
              func_0x01a1a200(lVar5);
              if (cVar2 != '\0') {
                func_0x0027e518(&uStack_120);
              }
              lVar11 = 1;
            }
          }
          else {
            uVar8 = func_0x01a1a520(param_6);
            func_0x01a1b660(param_6);
            uVar9 = func_0x01a1b6e0();
            func_0x01a1b660(param_6);
            uVar10 = func_0x01a1a2a0();
            uVar6 = func_0x0027e0e8(uVar8,lVar5,uVar9,uVar10,&uStack_120);
            if ((uVar6 & 1) != 0) {
              uVar8 = uStack_120;
              goto LAB_0027b990;
            }
            lVar11 = 0;
          }
          func_0x0027e074(&uStack_120);
        }
      }
    }
  }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  __ZNSt3__15mutex6unlockEv(0x2057d70);
LAB_0027baf8:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_80) {
    return lVar11;
  }
  uVar12 = ___stack_chk_fail();
  __ZNSt3__15mutex6unlockEv(0x2057d70);
  uVar12 = __Unwind_Resume(uVar12);
  __ZNSt3__15mutex6unlockEv(0x2057d70);
  uVar12 = __Unwind_Resume(uVar12);
  __ZNSt3__15mutex6unlockEv(0x2057d70);
  uVar12 = __Unwind_Resume(uVar12);
  __ZNSt3__15mutex6unlockEv(0x2057d70);
  uVar12 = __Unwind_Resume(uVar12);
  func_0x0027e074(&uStack_120);
  __ZNSt3__15mutex6unlockEv(0x2057d70);
  uVar12 = __Unwind_Resume(uVar12);
  __ZNSt3__15mutex6unlockEv(0x2057d70);
  uVar12 = __Unwind_Resume(uVar12);
  __ZNSt3__15mutex6unlockEv(0x2057d70);
  uVar4 = __Unwind_Resume(uVar12);
  if (3 < uVar4) {
    return lRam00000000020931b8;
  }
  lVar5 = *(long *)((ulong)uVar4 * 8 + 0x20931b8);
  lVar11 = lRam00000000020931b8;
  if (lVar5 != 0) {
    lVar11 = lVar5;
  }
  return lVar11;
}

