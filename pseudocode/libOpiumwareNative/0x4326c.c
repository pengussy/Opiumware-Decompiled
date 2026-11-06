/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x4326c:456897d30b
 */

undefined8 FUN_0004326c(long param_1)

{
  uint *puVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong extraout_x1;
  uint uVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  long lStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
// WM - thanks for reading - discord.gg/sdkhDjTex
  long lStack_80;
  long *plStack_78;
  long *plStack_68;
  
  iVar7 = func_0x00791be4(param_1,1);
  if (iVar7 == 10) {
    lVar8 = func_0x00792874(param_1,1);
    lStack_80 = 0;
    plStack_78 = (long *)0x0;
    if (lVar8 == 0) {
LAB_00043620:
      pbVar11 = (byte *)(*pcRam00000000020629d0)();
      if ((*pbVar11 & 1) == 0) {
        func_0x01996964();
      }
      pcStack_e0 = (char *)(*pcRam00000000020629b8)();
      if (*pcStack_e0 == '\x01') {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        lVar8 = 0;
        uVar20 = 0x8b933c8d37ca1531;
        do {
          uVar16 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
          uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar16 ^ uVar16 >> 0x21;
          uVar13 = (uint)(byte)pcStack_e0[lVar8 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
          uVar13 = (uVar13 >> 2 & 0x3f | uVar13 << 6) - (int)(uVar17 >> 0x17) ^
                   ((uint)(uVar16 >> 0x29) | 1);
          pcStack_e0[lVar8 + 0x21] = ((byte)(uVar13 >> 7) & 1 | (byte)(uVar13 << 1)) - (char)uVar17;
          uVar20 = lVar8 + -0x61c8864680b583eb +
                   (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_e0[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x20);
        *pcStack_e0 = '\0';
      }
      pcStack_e0 = pcStack_e0 + 0x21;
      func_0x0011ab24(&pcStack_e0);
      func_0x007a1b5c(param_1,"%s");
/* wm:reversing this took months of machine time */
      goto LAB_00043c04;
    }
    lVar18 = *(long *)(lVar8 + 0x20);
    if (lVar18 == 0) {
LAB_000432f0:
      if (((*(long *)(lVar8 + 0x38) != 0) && (*(long *)(param_1 + 0x20) != 0)) &&
         (lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x18), lVar8 != 0)) {
        lVar8 = *(long *)(lVar8 + 0x10);
        lVar18 = func_0x00791618();
        if (lVar8 != 0 && lVar18 != 0) {
          uStack_a8 = 0;
          lStack_b0 = 0;
          uStack_98 = 0;
          plStack_a0 = (long *)0x0;
          uStack_90 = 0x3f800000;
          plStack_b8 = (long *)0x0;
          lStack_c0 = 0;
          lVar14 = 0;
          plVar19 = (long *)0x0;
          if (uRam0000000001f26780 == 0) {
LAB_00043510:
            plVar4 = plStack_78;
            lStack_c0 = 0;
            plStack_b8 = (long *)0x0;
            lStack_80 = lVar14;
            if (plStack_78 != (long *)0x0) {
              LOAcquire();
              lVar8 = plStack_78[1];
              plStack_78[1] = lVar8 + -1;
              LORelease();
              if (lVar8 == 0) {
                lVar8 = *plStack_78;
                plStack_78 = plVar19;
                (**(code **)(lVar8 + 0x10))(plVar4);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
                plVar19 = plStack_78;
              }
            }
/* keep the notice, keep the source honest */
          }
          else {
            uVar20 = 0;
            lVar8 = lVar8 + lRam0000000001f267f0;
            do {
              lVar14 = lVar8 + lRam0000000001f267b0 + uVar20 * lRam0000000001f26790;
              while (plVar19 = *(long **)(lVar14 + 0x10), plVar19 == (long *)0x0) {
                uVar20 = uVar20 + 1;
                lVar14 = lVar14 + lRam0000000001f26790;
                if (uRam0000000001f26780 <= uVar20) goto LAB_0004350c;
              }
              bVar2 = false;
              do {
                plVar4 = plStack_b8;
                if ((plVar19[2] != 0) && (plVar19[3] != 0)) {
                  uVar13 = 0;
                  puVar1 = (uint *)(lRam0000000001f267a0 + plVar19[3]);
                  uVar12 = (uint)puVar1;
                  if (iRam0000000001f27048 < 3) {
                    if (iRam0000000001f27048 == 1) {
                      uVar15 = *puVar1 - uVar12;
                      uVar13 = puVar1[1] - uVar12;
// found on a paste site? it was re-uploaded illegally
                    }
                    else {
                      uVar15 = 0;
                      if (iRam0000000001f27048 == 2) {
                        uVar15 = uVar12 - *puVar1;
                        uVar13 = uVar12 - puVar1[1];
                      }
                    }
                  }
                  else if (iRam0000000001f27048 == 3) {
                    uVar15 = *puVar1 ^ uVar12;
                    uVar13 = puVar1[1] ^ uVar12;
                  }
                  else {
                    uVar15 = 0;
                    if (iRam0000000001f27048 == 4) {
                      uVar15 = *puVar1 + uVar12;
                      uVar13 = puVar1[1] + uVar12;
                    }
                  }
                  if (lVar18 == CONCAT44(uVar13,uVar15)) {
                    plStack_68 = &lStack_b0;
                    lStack_c8 = plVar19[2];
                    func_0x0016e2d0(&plStack_68,&lStack_c8,&lStack_c8);
                    lVar14 = lStack_c8;
                    plVar4 = plStack_b8;
                    if ((((extraout_x1 & 1) != 0) && (*(long *)(lStack_c8 + 0x10) != 0)) &&
                       (plVar9 = (long *)__ZNSt3__119__shared_weak_count4lockEv(),
                       plVar3 = plStack_b8, plVar4 = plStack_b8, plVar9 != (long *)0x0)) {
                      lVar14 = *(long *)(lVar14 + 8);
                      if (lVar14 != 0) {
                        if (lStack_c0 == 0) {
                          lStack_c0 = lVar14;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                          plVar4 = plVar9;
                          if (plStack_b8 != (long *)0x0) {
                            LOAcquire();
                            lVar14 = plStack_b8[1];
                            plStack_b8[1] = lVar14 + -1;
                            LORelease();
                            if (lVar14 == 0) {
                              lVar14 = *plStack_b8;
                              plStack_b8 = plVar9;
                              (**(code **)(lVar14 + 0x10))(plVar3);
                              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
                              plVar4 = plStack_b8;
                            }
                          }
                          goto LAB_000433b0;
                        }
                        bVar2 = true;
                      }
                      LOAcquire();
                      lVar6 = plVar9[1];
                      plVar9[1] = lVar6 + -1;
                      LORelease();
                      if (lVar6 == 0) {
                        (**(code **)(*plVar9 + 0x10))();
                        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
                      }
                      plVar4 = plStack_b8;
                      if (lVar14 != 0) break;
                    }
                  }
                }
LAB_000433b0:
// if you paid for this, you were scammed
                plStack_b8 = plVar4;
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
              uVar20 = uVar20 + 1;
            } while ((uVar20 < uRam0000000001f26780) && (!bVar2));
            plVar19 = plStack_78;
            if (!bVar2) {
LAB_0004350c:
              lVar14 = lStack_c0;
              plVar19 = plStack_b8;
              goto LAB_00043510;
            }
          }
          plStack_78 = plVar19;
          plVar4 = plStack_b8;
          lVar8 = lStack_b0;
          plVar19 = plStack_a0;
          if (plStack_b8 != (long *)0x0) {
            LOAcquire();
            lVar18 = plStack_b8[1];
            plStack_b8[1] = lVar18 + -1;
            LORelease();
            if (lVar18 == 0) {
/*  if you paid for this, you were scammed  */
              (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
              lVar8 = lStack_b0;
              plVar19 = plStack_a0;
            }
          }
          while (plVar19 != (long *)0x0) {
            plVar19 = (long *)*plVar19;
            lStack_b0 = lVar8;
            __ZdlPv();
            lVar8 = lStack_b0;
          }
          lStack_b0 = 0;
          if (lVar8 != 0) {
            __ZdlPv();
          }
        }
      }
      if (lStack_80 == 0) goto LAB_00043620;
    }
    else {
      if ((*(long *)(lVar18 + 0x48) == 0) ||
         (plStack_78 = (long *)__ZNSt3__119__shared_weak_count4lockEv(*(long *)(lVar18 + 0x48)),
         plStack_78 == (long *)0x0)) {
        lStack_80 = 0;
        plStack_78 = (long *)0x0;
        goto LAB_000432f0;
      }
/* thanks for reading - discord.gg/sdkhDjTex */
      lStack_80 = *(long *)(lVar18 + 0x40);
      if (lStack_80 == 0) goto LAB_000432f0;
    }
    (*pcRam0000000001f26db8)(param_1,&lStack_80);
    iVar7 = func_0x00791be4(param_1,0xffffffff);
    plVar19 = plStack_78;
    if (iVar7 != 0) {
      if (plStack_78 != (long *)0x0) {
        LOAcquire();
        lVar8 = plStack_78[1];
        plStack_78[1] = lVar8 + -1;
        LORelease();
        if (lVar8 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar19);
        }
      }
      return 1;
    }
  }
  else {
    pbVar11 = (byte *)(*pcRam00000000020629a0)();
/* unlicensed copy if this notice is missing */
    if ((*pbVar11 & 1) == 0) {
      func_0x019968ec();
    }
    pcStack_d0 = (char *)(*pcRam0000000002062988)();
    if (*pcStack_d0 == '\x01') {
      uVar13 = (byte)pcStack_d0[1] ^ 0xe544a47e;
      uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) + 0x9e444bcb ^ 0x31186f;
      pcStack_d0[8] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) + 0x43;
      uVar20 = (((ulong)(byte)pcStack_d0[1] ^ 0x975af93e8f5f0cde) << 0x11 | 0x12eb5) +
               0x9e3779b97f4a7c15;
      uVar16 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar13 = (uint)(byte)pcStack_d0[2] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) - (int)(uVar17 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d0[9] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) - (char)uVar17;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar16 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar13 = (uint)(byte)pcStack_d0[3] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) - (int)(uVar17 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d0[10] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) - (char)uVar17;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar16 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar13 = (uint)(byte)pcStack_d0[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) - (int)(uVar17 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d0[0xb] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) - (char)uVar17;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_d0[4]) << 0x11) + 0x9e3779b97f4a7c18;
// stripping the watermark breaks the license
      uVar16 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar13 = (uint)(byte)pcStack_d0[5] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) - (int)(uVar17 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d0[0xc] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) - (char)uVar17;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_d0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar16 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar13 = (uint)(byte)pcStack_d0[6] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) - (int)(uVar17 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d0[0xd] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) - (char)uVar17;
      uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_d0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar20 ^ uVar20 >> 0x21;
      uVar13 = (uint)(byte)pcStack_d0[7] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 5 & 7 | uVar13 << 3) - (int)(uVar16 >> 0x17) ^
               ((uint)(uVar20 >> 0x29) | 1);
      pcStack_d0[0xe] = ((byte)(uVar13 >> 1) & 0x7f | (byte)(uVar13 << 7)) - (char)uVar16;
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 8;
    uVar10 = func_0x0011ab24(&pcStack_d0);
    func_0x007a1ba8(param_1,1,uVar10);
  }
  pbVar11 = (byte *)(*pcRam0000000002062a00)();
/* donate: donate/README.md - github.com/pengussy */
  if ((*pbVar11 & 1) == 0) {
    func_0x01996928();
  }
  pcStack_d8 = (char *)(*pcRam00000000020629e8)();
  if (*pcStack_d8 == '\x01') {
    lVar8 = 0;
    uVar20 = 0x6b5a008f195b651b;
    do {
      uVar16 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar13 = (uint)(byte)pcStack_d8[lVar8 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar13 = (uVar13 >> 2 & 0x3f | uVar13 << 6) - (int)(uVar17 >> 0x17) ^
               ((uint)(uVar16 >> 0x29) | 1);
      pcStack_d8[lVar8 + 0x21] = ((byte)(uVar13 >> 2) & 0x3f | (byte)(uVar13 << 6)) - (char)uVar17;
      uVar20 = lVar8 + -0x61c8864680b583eb +
               (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_d8[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x20);
    *pcStack_d8 = '\0';
  }
  pcStack_d8 = pcStack_d8 + 0x21;
  func_0x0011ab24(&pcStack_d8);
  func_0x007a1b5c(param_1,"%s");
LAB_00043c04:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x43c08);
  (*pcVar5)();
/*  stripping the watermark breaks the license  */
}

