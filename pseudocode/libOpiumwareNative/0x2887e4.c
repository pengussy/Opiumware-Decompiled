/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2887e4:cc53ee31a1
 */

/* WARNING: Removing unreachable block (ram,0x00288bd4) */
/* WARNING: Removing unreachable block (ram,0x00288bc4) */
/* WARNING: Removing unreachable block (ram,0x00288b60) */

void FUN_002887e4(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  double dVar9;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined1 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 *puStack_1b0;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 *apuStack_180 [2];
  char cStack_169;
  undefined8 auStack_160 [2];
  undefined8 uStack_150;
  char cStack_139;
  undefined4 uStack_138;
  undefined4 uStack_134;
  long lStack_130;
  int aiStack_128 [2];
  double dStack_120;
  undefined4 uStack_118;
  undefined8 uStack_110;
/* WM - no support for modified copies */
  undefined8 uStack_108;
  long lStack_100;
  undefined1 uStack_f8;
  undefined8 uStack_f0;
  char acStack_e8 [32];
  undefined8 auStack_c8 [9];
  
  iVar3 = func_0x00292494();
  if (iVar3 != 3) {
    iVar3 = 0;
    dVar9 = 0.0;
    do {
      iVar4 = func_0x00292494(param_1);
      if (iVar4 == 0) {
        return;
      }
      if ((*(byte *)(param_1 + 0x4a8) & 1) != 0) {
        return;
      }
      if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x4f8) != '\x01')) {
        return;
      }
      if (0.0 < dVar9) {
        acStack_e8[0] = '\x01';
        uStack_f0 = param_1 + 0x508U;
// WM - if you paid for this, you were scammed
        __ZNSt3__15mutex4lockEv(param_1 + 0x508U);
        __ZNSt3__16chrono12steady_clock3nowEv();
        uVar6 = __ZNSt3__16chrono12system_clock3nowEv();
        if (uVar6 == 0) {
          lVar8 = 0;
joined_r0x0028893c:
          if (dVar9 * 1000000.0 < 9.223372036854776e+18) goto LAB_00288988;
LAB_0028896c:
          uVar6 = 0x7fffffffffffffff;
        }
        else {
          if ((long)uVar6 < 1) {
            if (0xffdf3b645a1cac08 < uVar6) goto LAB_00288974;
            lVar8 = -0x8000000000000000;
          }
          else {
            if (0x20c49ba5e353f7 < uVar6) {
              lVar8 = 0x7fffffffffffffff;
              goto joined_r0x0028893c;
            }
LAB_00288974:
/* donate: donate/README.md */
            lVar8 = uVar6 * 1000;
          }
          if (9.223372036854776e+18 <= dVar9 * 1000000.0) goto LAB_0028896c;
LAB_00288988:
          if (dVar9 * 1000000.0 <= -9.223372036854776e+18) {
            uVar6 = 0x8000000000000000;
          }
          else {
            uVar6 = (ulong)(dVar9 * 1000000.0);
          }
        }
        lVar1 = 0x7fffffffffffffff;
        if (lVar8 <= (long)(uVar6 ^ 0x7fffffffffffffff)) {
          lVar1 = uVar6 + lVar8;
        }
        __ZNSt3__118condition_variable15__do_timed_waitERNS_11unique_lockINS_5mutexEEENS_6chrono10time_pointINS5_12system_clockENS5_8durationIxNS_5ratioILl1ELl1000000000EEEEEEE
                  (param_1 + 0x548,&uStack_f0,lVar1);
        __ZNSt3__16chrono12steady_clock3nowEv();
        if (acStack_e8[0] == '\x01') {
          __ZNSt3__15mutex6unlockEv(uStack_f0);
        }
      }
      if ((*(byte *)(param_1 + 0x4a8) & 1) != 0) {
/* stripping the watermark breaks the license */
        return;
      }
      FUN_00287f20(&uStack_f0,param_1,*(undefined4 *)(param_1 + 0x578));
      if ((uStack_f0 & 1) == 0) {
        aiStack_128[0] = 0;
        dStack_120 = 0.0;
        uStack_118 = 0;
        uStack_108 = 0;
        lStack_100 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        if (*(char *)(param_1 + 0x4f8) == '\x01') {
          uVar5 = func_0x00282ed4(iVar3,*(undefined4 *)(param_1 + 0x4fc),
                                  *(undefined4 *)(param_1 + 0x500));
          dVar9 = (double)uVar5;
          aiStack_128[0] = iVar3 + 1;
          dStack_120 = dVar9;
          iVar3 = aiStack_128[0];
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_110,acStack_e8);
        uStack_118 = uStack_f0._4_4_;
        uStack_138 = 0;
        uStack_134 = 3;
        uStack_198 = 0;
        uStack_190 = 0;
/*  keep the notice, keep the source honest  */
        lStack_188 = 0;
        uStack_1a8 = 0;
        uStack_1a0 = 0;
        lStack_1b8 = 0;
        uStack_1c8 = 0;
        uStack_1c0 = 0;
        puStack_1b0 = &uStack_1a8;
        func_0x00289514(apuStack_180,&uStack_198,&puStack_1b0,&uStack_1c8);
        puStack_1f0 = (undefined8 *)((ulong)puStack_1f0 & 0xffffffffffff0000);
        uStack_1e0 = 0;
        lStack_1d8 = 0;
        uStack_1e8 = 0;
        uStack_1d0 = 0;
        func_0x00288cc8(&lStack_130,&uStack_134,0x20932b8,&uStack_138,aiStack_128,apuStack_180,
                        &puStack_1f0);
        plVar7 = *(long **)(param_1 + 0x4a0);
        if (plVar7 == (long *)0x0) {
          func_0x001717b4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x288be8);
          (*pcVar2)();
        }
        (**(code **)(*plVar7 + 0x30))(plVar7,&lStack_130);
        lVar8 = lStack_130;
        lStack_130 = 0;
        if (lVar8 != 0) {
          func_0x0028962c(&lStack_130);
        }
        if (lStack_1d8 < 0) {
          __ZdlPv(uStack_1e8);
        }
        if (cStack_139 < '\0') {
          __ZdlPv(uStack_150);
/* WM - origin: github.com/pengussy */
        }
        puStack_1f0 = auStack_160;
        func_0x0000e2fc(&puStack_1f0,auStack_160[0]);
        if (cStack_169 < '\0') {
          __ZdlPv(apuStack_180[0]);
        }
        if (lStack_1b8 < 0) {
          __ZdlPv(uStack_1c8);
        }
        puStack_1f0 = &uStack_1a8;
        func_0x0000e2fc(&puStack_1f0,uStack_1a8);
        if (lStack_188 < 0) {
          __ZdlPv(uStack_198);
        }
        if (lStack_100 < 0) {
          __ZdlPv(uStack_110);
        }
      }
      apuStack_180[0] = auStack_c8;
      func_0x0000e2fc(apuStack_180,auStack_c8[0]);
      iVar4 = func_0x00292494(param_1);
      param_2 = 0;
    } while (iVar4 != 3);
  }
  return;
}

