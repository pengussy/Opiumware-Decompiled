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
 *  file-id: 0x24da18:c8864c06c1
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0024da18(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  bool bVar19;
  long lVar20;
  long *plVar21;
  undefined8 uVar22;
/* wm:do not claim this as your own */
  int iVar23;
  int *piVar24;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long *plStack_98;
  int *piStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined8 *puStack_70;
  long *plStack_68;
  
  func_0x0024d798(&lStack_80,param_1,1);
  lVar11 = lStack_80;
  if (lStack_80 == 0) {
    piStack_90 = (int *)0x0;
    plStack_88 = (long *)0x0;
  }
  else {
    __ZNSt3__15mutex4lockEv(lStack_80);
    plStack_88 = *(long **)(lStack_80 + 0x48);
    piVar24 = *(int **)(lStack_80 + 0x40);
    lVar5 = 0;
    if (*(long *)(lStack_80 + 0x48) != 0) {
// more drops soon - github.com/pengussy
      plVar21 = (long *)(*(long *)(lStack_80 + 0x48) + 8);
      lVar5 = *plVar21;
      *plVar21 = lVar5 + 1;
    }
    piStack_90 = piVar24;
    __ZNSt3__15mutex6unlockEv(lVar5,lVar11);
    if (((piVar24 != (int *)0x0) && ((char)piVar24[1] == '\x01')) && (*piVar24 == 7)) {
      lVar11 = (long)*(char *)((long)piVar24 + 0x137);
      lVar5 = lVar11;
      if (lVar11 < 0) {
        lVar5 = *(long *)(piVar24 + 0x4a);
      }
      if (lVar5 == 0) {
        pbVar10 = (byte *)(*pcRam0000000002078b70)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019dd824();
        }
/* thanks for reading - discord.gg/sdkhDjTex */
        pcStack_d0 = (char *)(*pcRam0000000002078b58)();
        if (*pcStack_d0 == '\x01') {
          lVar11 = 0;
          uVar7 = 0x6a7b728522e7f03b;
          do {
            uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar13 ^ uVar13 >> 0x21;
            uVar2 = (uint)(byte)pcStack_d0[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar14 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcStack_d0[lVar11 + 0x21] =
                 ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar14;
            uVar7 = lVar11 + -0x61c8864680b583eb +
                    (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_d0[lVar11 + 1]) << 0x11);
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x20);
          *pcStack_d0 = '\0';
        }
        pcStack_d0 = pcStack_d0 + 0x21;
        uVar22 = func_0x0011ab24(&pcStack_d0);
        func_0x007a1abc(param_1,1,uVar22);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        goto LAB_0024e488;
      }
      cVar3 = *(char *)((long)piVar24 + 0x14f);
      lVar5 = (long)cVar3;
      lVar17 = lVar5;
      if (lVar5 < 0) {
        lVar17 = *(long *)(piVar24 + 0x50);
      }
      if (lVar17 == 0) {
        pbVar10 = (byte *)(*pcRam0000000002078ba0)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019dd7e8();
        }
        pcStack_c8 = (char *)(*pcRam0000000002078b88)();
        if (*pcStack_c8 == '\x01') {
          lVar11 = 0;
          uVar7 = 0x4cd4da3d2a236f9a;
          do {
            uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
            uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
            uVar14 = uVar13 ^ uVar13 >> 0x21;
            uVar2 = (uint)(byte)pcStack_c8[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
            uVar2 = (uVar2 >> 6 & 3 | uVar2 << 2) - (int)(uVar14 >> 0x17) ^
                    ((uint)(uVar13 >> 0x29) | 1);
            pcStack_c8[lVar11 + 0x20] =
/*  reversing this took months of machine time  */
                 ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar14;
            uVar7 = lVar11 + -0x61c8864680b583eb +
                    (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_c8[lVar11 + 1]) << 0x11);
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x1f);
          *pcStack_c8 = '\0';
        }
        pcStack_c8 = pcStack_c8 + 0x20;
        uVar22 = func_0x0011ab24(&pcStack_c8);
        func_0x007a1abc(param_1,1,uVar22);
        goto LAB_0024e488;
      }
      uStack_a0 = 0;
      plStack_98 = (long *)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      lStack_a8 = 0;
      if (*(char *)((long)piVar24 + 0x137) < '\0') {
        piVar6 = *(int **)(piVar24 + 0x48);
        lVar11 = *(long *)(piVar24 + 0x4a);
        if (-1 < cVar3) goto LAB_0024dad8;
LAB_0024dd88:
        piVar12 = *(int **)(piVar24 + 0x4e);
        lVar5 = *(long *)(piVar24 + 0x50);
      }
      else {
        piVar6 = piVar24 + 0x48;
        if (cVar3 < '\0') goto LAB_0024dd88;
LAB_0024dad8:
        piVar12 = piVar24 + 0x4e;
      }
      uVar7 = FUN_00273344(piVar6,lVar11,piVar12,lVar5,&uStack_a0,&uStack_b8);
      if ((uVar7 & 1) == 0) {
        pbVar10 = (byte *)(*pcRam0000000002078bd0)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019dd7ac();
/* wm:keep the notice, keep the source honest */
        }
        pcStack_c0 = (char *)(*pcRam0000000002078bb8)();
        if (*pcStack_c0 == '\x01') {
          uVar2 = (byte)pcStack_c0[1] ^ 0xf38f15da;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0x974065e8;
          pcStack_c0[4] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - 0x2f ^ 0x19;
          uVar7 = (((ulong)(byte)pcStack_c0[1] ^ 0x582dbbfe0b29077e) << 0x11 | 0xb05b) +
                  0x9e3779b97f4a7c15;
          uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
          uVar14 = uVar13 ^ uVar13 >> 0x21;
          uVar2 = (uint)(byte)pcStack_c0[2] ^ (uint)uVar14 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar14 >> 0x17);
          pcStack_c0[5] =
               ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar13 >> 0x29) | 1) ^
               (byte)uVar14;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
          uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_c0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar7 ^ uVar7 >> 0x21;
          uVar2 = (uint)(byte)pcStack_c0[3] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar13 >> 0x17);
          pcStack_c0[6] =
               ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar7 >> 0x29) | 1) ^
               (byte)uVar13;
          *pcStack_c0 = '\0';
        }
        pcStack_c0 = pcStack_c0 + 4;
        uVar22 = func_0x0011ab24(&pcStack_c0);
        func_0x007a1b5c(param_1,uVar22);
        goto LAB_0024e488;
      }
      if (lStack_80 == 0) goto LAB_0024e024;
      if ((bRam0000000002093050 & 1) == 0) {
        func_0x019dd714();
      }
      __ZNSt3__15mutex4lockEv(0x1f27600);
      lVar11 = lStack_80;
      __ZNSt3__15mutex4lockEv(lStack_80);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      lVar5 = *(long *)(lStack_80 + 0x40);
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 4) & 1) != 0)) {
        if ((*(byte *)(lVar5 + 5) & 1) == 0) {
          iVar23 = *(int *)(lVar5 + 8);
LAB_0024de04:
          if ((bRam0000000002093050 & 1) == 0) {
            func_0x019dd714();
            if (lRam0000000001f27668 == lRam0000000001f27670) goto LAB_0024de20;
          }
          else if (lRam0000000001f27668 == lRam0000000001f27670) {
LAB_0024de20:
            lVar5 = lRam0000000001f27660;
            lVar17 = lRam0000000001f27668 - lRam0000000001f27660;
            uVar13 = lVar17 >> 3;
            uVar7 = uVar13;
            if (uVar13 < 9) {
              uVar7 = 8;
            }
            if ((ulong)(lVar17 >> 4) < uVar7) {
              if (uVar13 >> 0x3c != 0) {
                FUN_0000abb4();
                goto LAB_0024e488;
              }
              lVar8 = __Znwm(uVar7 << 4);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              lVar1 = lVar8 + lVar17;
              lVar8 = lVar8 + uVar7 * 0x10;
              lVar20 = lVar1 + (lVar17 >> 4) * -0x10;
              _memcpy(lVar20,lVar5,lVar17);
              iVar15 = 0;
              lRam0000000001f27660 = lVar20;
              lRam0000000001f27668 = lVar1;
              lRam0000000001f27670 = lVar8;
              if (lVar5 == 0) goto LAB_0024de88;
              __ZdlPv(lVar5);
            }
          }
          iVar15 = 0;
        }
        else {
          iVar23 = *(int *)(lVar5 + 8);
          if (*(float *)(lVar5 + 0xc) <= 0.0) goto LAB_0024de04;
          iVar15 = 1;
        }
LAB_0024de88:
// WM - thanks for reading - discord.gg/sdkhDjTex
        plStack_68 = *(long **)(lStack_80 + 0x48);
        if ((plStack_68 == (undefined8 *)0x0) || (plStack_68[1] != 0)) {
          uVar22 = *(undefined8 *)(lStack_80 + 0x40);
          puVar9 = (undefined8 *)__Znwm(0x188);
          puVar9[1] = 0;
          puVar9[2] = 0;
          *puVar9 = &UNK_01dc11d8;
          puVar18 = puVar9 + 3;
          func_0x00272f90(puVar18,uVar22);
          plStack_68 = puVar9;
        }
        else {
          puVar18 = *(undefined8 **)(lStack_80 + 0x40);
          plStack_68[1] = plStack_68[1] + 1;
        }
        if (plStack_98 != (long *)0x0) {
          plStack_98[1] = plStack_98[1] + 1;
        }
        plVar21 = (long *)puVar18[0x2d];
        puVar18[0x2d] = plStack_98;
        puVar18[0x2c] = uStack_a0;
        puStack_70 = puVar18;
        if (plVar21 != (long *)0x0) {
          LOAcquire();
          lVar5 = plVar21[1];
          plVar21[1] = lVar5 + -1;
          LORelease();
          if (lVar5 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
/* wm:watermarked copy - do not remove */
        }
        puVar9 = puStack_70;
        bVar19 = false;
        *(undefined1 *)((long)puVar18 + 5) = 1;
        if ((*(char *)((long)puStack_70 + 4) == '\x01') &&
           ((*(byte *)((long)puStack_70 + 5) & 1) != 0)) {
          bVar19 = 0.0 < *(float *)((long)puStack_70 + 0xc);
        }
        func_0x0024c4f8(&lStack_80,iVar15,bVar19);
        if (bVar19 == false) {
          if (iVar15 != 0) goto LAB_0024df88;
        }
        else {
          if (*(int *)(puVar9 + 1) != iVar23) {
            if ((bRam0000000002093050 & 1) == 0) {
              func_0x019dd714();
            }
            uRam0000000001f276a0 = 1;
          }
LAB_0024df88:
          if ((bRam0000000002093050 & 1) == 0) {
            func_0x019dd714();
          }
          uRam0000000001f276a1 = 1;
          puVar9 = puStack_70;
        }
        plVar21 = plStack_68;
        puStack_70 = (undefined8 *)0x0;
        plStack_68 = (long *)0x0;
        plVar16 = *(long **)(lStack_80 + 0x48);
        *(undefined8 **)(lStack_80 + 0x40) = puVar9;
        *(long **)(lStack_80 + 0x48) = plVar21;
        if (plVar16 != (long *)0x0) {
          LOAcquire();
/*  do not claim this as your own  */
          lVar5 = plVar16[1];
          plVar16[1] = lVar5 + -1;
          LORelease();
          if (lVar5 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar16);
          }
        }
        plVar21 = plStack_68;
        if (plStack_68 != (long *)0x0) {
          LOAcquire();
          lVar5 = plStack_68[1];
          plStack_68[1] = lVar5 + -1;
          LORelease();
          if (lVar5 == 0) {
            (**(code **)(*plStack_68 + 0x10))(plStack_68);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
          }
        }
      }
      __ZNSt3__15mutex6unlockEv(lVar11);
      __ZNSt3__15mutex6unlockEv(0x1f27600);
LAB_0024e024:
      if (lStack_a8 < 0) {
        __ZdlPv(uStack_b8);
      }
/* WM - found on a paste site? it was re-uploaded illegally */
      plVar21 = plStack_98;
      if (plStack_98 != (long *)0x0) {
        LOAcquire();
        lVar11 = plStack_98[1];
        plStack_98[1] = lVar11 + -1;
        LORelease();
        if (lVar11 == 0) {
          (**(code **)(*plStack_98 + 0x10))(plStack_98);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      plVar21 = plStack_88;
      if (plStack_88 != (long *)0x0) {
        LOAcquire();
        lVar11 = plStack_88[1];
        plStack_88[1] = lVar11 + -1;
        LORelease();
        if (lVar11 == 0) {
          (**(code **)(*plStack_88 + 0x10))(plStack_88);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar21);
        }
      }
      if (plStack_78 != (long *)0x0) {
        LOAcquire();
        lVar11 = plStack_78[1];
        plStack_78[1] = lVar11 + -1;
        LORelease();
        if (lVar11 == 0) {
          (**(code **)(*plStack_78 + 0x10))(plStack_78);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_78);
        }
      }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      return 0;
    }
  }
  pbVar10 = (byte *)(*pcRam0000000002078b40)();
  if ((*pbVar10 & 1) == 0) {
    func_0x019dd860();
  }
  pcStack_d8 = (char *)(*pcRam0000000002078b28)();
  if (*pcStack_d8 == '\x01') {
    lVar11 = 0;
    uVar7 = 0x9c78ffd54de166a8;
    do {
      uVar13 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar13 ^ uVar13 >> 0x21;
      uVar2 = (uint)(byte)pcStack_d8[lVar11 + 1] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) -
              (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar14 >> 0x17));
      pcStack_d8[lVar11 + 0x19] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar14;
      uVar7 = lVar11 + -0x61c8864680b583eb +
              (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_d8[lVar11 + 1]) << 0x11);
// donate: donate/README.md
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x18);
    *pcStack_d8 = '\0';
  }
  pcStack_d8 = pcStack_d8 + 0x19;
  uVar22 = func_0x0011ab24(&pcStack_d8);
  func_0x007a1abc(param_1,1,uVar22);
LAB_0024e488:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x24e48c);
  (*pcVar4)();
}

