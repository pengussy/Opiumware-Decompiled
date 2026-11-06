/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x26d950:a32fdbf189
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

void FUN_0026d950(void)

{
  long *plVar1;
  int iVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_c8;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  
  lVar8 = FUN_00306c54();
  if (lVar8 == 0) {
    return;
  }
  plStack_b0 = (long *)0x0;
  plStack_a8 = (long *)0x0;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
  }
  __ZNSt3__15mutex4lockEv(0x1f27600);
  func_0x0024c6b8(&plStack_c0);
  plVar13 = plStack_a8;
  plStack_a8 = uStack_b8;
  plStack_b0 = plStack_c0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = (long *)0x0;
/* do not claim this as your own */
  if (plVar13 != (long *)0x0) {
    LOAcquire();
    lVar6 = plVar13[1];
    plVar13[1] = lVar6 + -1;
    LORelease();
    if (lVar6 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  plVar13 = uStack_b8;
  if (uStack_b8 != (long *)0x0) {
    LOAcquire();
    lVar6 = uStack_b8[1];
    uStack_b8[1] = lVar6 + -1;
    LORelease();
    if (lVar6 == 0) {
      (**(code **)(*uStack_b8 + 0x10))(uStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  pcVar5 = pcRam0000000001f276a8;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    pcVar5 = pcRam0000000001f276a8;
  }
  pcRam0000000001f276a8 = pcVar5;
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    pcVar4 = pcRam0000000001f276b0;
    pcVar3 = pcRam0000000001f276b8;
  }
  else {
    pcVar4 = pcRam0000000001f276b0;
    pcVar3 = pcRam0000000001f276b8;
  }
  pcRam0000000001f276b0 = pcVar4;
  pcRam0000000001f276b8 = pcVar3;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
  if ((bRam0000000002093050 & 1) == 0) {
    func_0x019dd200();
    pcVar3 = pcRam0000000001f276b8;
    __ZNSt3__15mutex6unlockEv(0x1f27600);
  }
  else {
    __ZNSt3__15mutex6unlockEv(0x1f27600);
  }
  if (plStack_b0 != (long *)0x0) {
    plVar13 = (long *)*plStack_b0;
    plVar1 = (long *)plStack_b0[1];
    if (plVar13 != plVar1) {
      dVar18 = (double)NEON_fmov(0xbf800000,4);
      dVar19 = (double)NEON_fmov(0x3f800000,4);
      do {
        lVar6 = *plVar13;
        if (((lVar6 != 0) && (*(char *)(lVar6 + 4) == '\x01')) && (*(char *)(lVar6 + 5) == '\x01'))
        {
          fVar14 = *(float *)(lVar6 + 0xc);
          fVar16 = ABS(fVar14);
          fVar15 = 1.0;
          if (fVar14 <= 1.0) {
            fVar15 = fVar14;
          }
/* stripping the watermark breaks the license */
          fVar20 = 0.0;
          if (((uint)fVar16 < 0x7f800001 &&
              (fVar16 != INFINITY && (-1 < (int)fVar14 || 0x7ffffe < (int)fVar16 - 1U))) &&
              (-1 < (int)fVar14 || 0x7e < (int)fVar16 - 0x800000U >> 0x18)) {
            fVar20 = fVar15;
          }
          if (0.0 < fVar20) {
            plStack_c0 = *(long **)(lVar6 + 0x10);
            uStack_b8 = (long *)CONCAT44(fVar20,*(undefined4 *)(lVar6 + 0x18));
            uVar9 = func_0x002fe0bc(&plStack_c0);
            piVar10 = (int *)*plVar13;
            iVar2 = *piVar10;
            if (iVar2 < 4) {
              if (iVar2 < 2) {
                if (iVar2 == 0) {
                  func_0x00323130(piVar10[0xc],lVar8,piVar10 + 8,piVar10 + 10,uVar9);
                }
                else if ((iVar2 == 1) && (0.0 < (float)piVar10[0xf])) {
                  if ((char)piVar10[0x12] == '\x01') {
                    func_0x00324118(lVar8,piVar10 + 0xd,uVar9);
                  }
                  else {
                    func_0x00324038(piVar10[0xf],piVar10[0x11],lVar8,piVar10 + 0xd,uVar9,
                                    piVar10[0x10]);
                  }
                }
              }
              else if (iVar2 == 2) {
                if ((0.0 < (float)piVar10[0x15]) && (0.0 < (float)piVar10[0x16])) {
                  plStack_c0 = *(long **)(piVar10 + 0x13);
                  lVar6 = *plVar13;
                  uStack_c8 = CONCAT44(*(float *)(lVar6 + 0x58) + (float)((ulong)plStack_c0 >> 0x20)
                                       ,*(float *)(lVar6 + 0x54) + SUB84(plStack_c0,0));
                  if (*(char *)(lVar6 + 0x60) == '\x01') {
                    func_0x00323668(0,lVar8,&plStack_c0,&uStack_c8,uVar9,0);
                  }
                  else {
/* watermarked copy - do not remove */
                    func_0x003235ac(0,*(undefined4 *)(lVar6 + 0x5c),lVar8,&plStack_c0,&uStack_c8,
                                    uVar9,0);
                  }
                }
              }
              else if (iVar2 == 3) {
                if ((char)piVar10[0x22] == '\x01') {
                  func_0x00323a10(lVar8,piVar10 + 0x19,piVar10 + 0x1b,piVar10 + 0x1d,piVar10 + 0x1f,
                                  uVar9);
                }
                else {
                  func_0x003237a0(piVar10[0x21],lVar8,piVar10 + 0x19,piVar10 + 0x1b,piVar10 + 0x1d,
                                  piVar10 + 0x1f,uVar9);
                }
              }
            }
            else if (iVar2 < 6) {
              if (iVar2 == 4) {
// WM - found on a paste site? it was re-uploaded illegally
                if ((char)piVar10[0x2a] == '\x01') {
                  func_0x00323e5c(lVar8,piVar10 + 0x23,piVar10 + 0x25,piVar10 + 0x27,uVar9);
                }
                else {
                  func_0x00323c6c(piVar10[0x29],lVar8,piVar10 + 0x23,piVar10 + 0x25,piVar10 + 0x27,
                                  uVar9);
                }
              }
              else if (iVar2 == 5) {
                lVar6 = (long)*(char *)((long)piVar10 + 199);
                if (lVar6 < 0) {
                  lVar6 = *(long *)(piVar10 + 0x2e);
                }
                if (lVar6 != 0) {
                  if ((pcVar3 == (code *)0x0) || (lVar6 = (*pcVar3)(piVar10[0x32]), lVar6 == 0)) {
                    lVar6 = func_0x00317d88();
                  }
                  lVar12 = *plVar13;
                  uVar17 = (ulong)(uint)*(float *)(lVar12 + 0xcc);
                  if (*(float *)(lVar12 + 0xcc) <= 0.0) {
                    uVar17 = func_0x00317d98();
                    lVar12 = *plVar13;
                  }
                  uStack_c8 = *(undefined8 *)(lVar12 + 0xd0);
                  lVar12 = *plVar13;
                  if (*(char *)(lVar12 + 0xd8) == '\x01') {
                    fVar16 = (float)func_0x0024d93c(uVar17,lVar12,lVar6);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
                    uStack_c8 = CONCAT44(uStack_c8._4_4_,(float)uStack_c8 + fVar16 * -0.5);
                    lVar12 = *plVar13;
                  }
                  if (*(char *)(lVar12 + 0xd9) == '\x01') {
                    fVar14 = *(float *)(lVar12 + 0xc) * *(float *)(lVar12 + 0xec);
                    fVar16 = ABS(fVar14);
                    fVar15 = 1.0;
                    if (fVar14 <= 1.0) {
                      fVar15 = fVar14;
                    }
                    plStack_c0 = *(long **)(lVar12 + 0xdc);
                    fVar20 = 0.0;
                    if (((uint)fVar16 < 0x7f800001 &&
                        (fVar16 != INFINITY && (-1 < (int)fVar14 || 0x7ffffe < (int)fVar16 - 1U)))
                        && (-1 < (int)fVar14 || 0x7e < (int)fVar16 - 0x800000U >> 0x18)) {
                      fVar20 = fVar15;
                    }
                    uStack_b8 = (long *)CONCAT44(fVar20,*(undefined4 *)(lVar12 + 0xe4));
                    uVar7 = func_0x002fe0bc(&plStack_c0);
// WM - proprietary - see LICENSE - do not sell
                    fVar15 = (float)((ulong)dVar18 >> 0x20);
                    fVar20 = SUB84(-dVar19,0);
                    fVar21 = (float)((ulong)-dVar19 >> 0x20);
                    fVar22 = SUB84(-dVar18,0);
                    fVar23 = (float)((ulong)-dVar18 >> 0x20);
                    fVar14 = (float)((ulong)dVar19 >> 0x20);
                    fVar16 = (float)((ulong)uStack_c8 >> 0x20);
                    if (lVar6 == 0) {
                      plStack_c0 = (long *)CONCAT44(fVar16 + fVar15,
                                                    (float)uStack_c8 + SUB84(dVar18,0));
                      plVar11 = (long *)(*plVar13 + 0xb0);
                      if (*(char *)(*plVar13 + 199) < '\0') {
                        plVar11 = (long *)*plVar11;
                      }
                      func_0x00324a4c(lVar8,&plStack_c0,uVar7,plVar11,0);
                      plStack_c0 = (long *)CONCAT44((float)((ulong)uStack_c8 >> 0x20) + fVar21,
                                                    (float)uStack_c8 + fVar20);
                      plVar11 = (long *)(*plVar13 + 0xb0);
                      if (*(char *)(*plVar13 + 199) < '\0') {
                        plVar11 = (long *)*plVar11;
                      }
                      func_0x00324a4c(lVar8,&plStack_c0,uVar7,plVar11,0);
                      plStack_c0 = (long *)CONCAT44((float)((ulong)uStack_c8 >> 0x20) + fVar23,
                                                    (float)uStack_c8 + fVar22);
                      plVar11 = (long *)(*plVar13 + 0xb0);
                      if (*(char *)(*plVar13 + 199) < '\0') {
                        plVar11 = (long *)*plVar11;
                      }
                      func_0x00324a4c(lVar8,&plStack_c0,uVar7,plVar11,0);
                      plStack_c0 = (long *)CONCAT44((float)((ulong)uStack_c8 >> 0x20) + fVar14,
                                                    (float)uStack_c8 + SUB84(dVar19,0));
                      plVar11 = (long *)(*plVar13 + 0xb0);
                      if (*(char *)(*plVar13 + 199) < '\0') {
                        plVar11 = (long *)*plVar11;
                      }
                      func_0x00324a4c(lVar8,&plStack_c0,uVar7,plVar11,0);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                      lVar12 = *plVar13;
LAB_0026e0cc:
                      plVar11 = (long *)(lVar12 + 0xb0);
                      if (*(char *)(lVar12 + 199) < '\0') {
                        plVar11 = (long *)*plVar11;
                      }
                      func_0x00324a4c(lVar8,&uStack_c8,uVar9,plVar11,0);
                      goto LAB_0026daac;
                    }
                    plStack_c0 = (long *)CONCAT44(fVar16 + fVar15,(float)uStack_c8 + SUB84(dVar18,0)
                                                 );
                    plVar11 = (long *)(*plVar13 + 0xb0);
                    if (*(char *)(*plVar13 + 199) < '\0') {
                      plVar11 = (long *)*plVar11;
                    }
                    func_0x003241d4(uVar17,0,lVar8,lVar6,&plStack_c0,uVar7,plVar11,0,0);
                    plStack_c0 = (long *)CONCAT44((float)((ulong)uStack_c8 >> 0x20) + fVar21,
                                                  (float)uStack_c8 + fVar20);
                    plVar11 = (long *)(*plVar13 + 0xb0);
                    if (*(char *)(*plVar13 + 199) < '\0') {
                      plVar11 = (long *)*plVar11;
                    }
                    func_0x003241d4(uVar17,0,lVar8,lVar6,&plStack_c0,uVar7,plVar11,0,0);
                    plStack_c0 = (long *)CONCAT44((float)((ulong)uStack_c8 >> 0x20) + fVar23,
                                                  (float)uStack_c8 + fVar22);
                    plVar11 = (long *)(*plVar13 + 0xb0);
                    if (*(char *)(*plVar13 + 199) < '\0') {
                      plVar11 = (long *)*plVar11;
                    }
                    func_0x003241d4(uVar17,0,lVar8,lVar6,&plStack_c0,uVar7,plVar11,0,0);
                    plStack_c0 = (long *)CONCAT44((float)((ulong)uStack_c8 >> 0x20) + fVar14,
                                                  (float)uStack_c8 + SUB84(dVar19,0));
                    plVar11 = (long *)(*plVar13 + 0xb0);
                    if (*(char *)(*plVar13 + 199) < '\0') {
                      plVar11 = (long *)*plVar11;
                    }
                    func_0x003241d4(uVar17,0,lVar8,lVar6,&plStack_c0,uVar7,plVar11,0,0);
/* wm:chat: discord.gg/sdkhDjTex */
                    lVar12 = *plVar13;
                  }
                  else if (lVar6 == 0) goto LAB_0026e0cc;
                  plVar11 = (long *)(lVar12 + 0xb0);
                  if (*(char *)(lVar12 + 199) < '\0') {
                    plVar11 = (long *)*plVar11;
                  }
                  func_0x003241d4(uVar17,0,lVar8,lVar6,&uStack_c8,uVar9,plVar11,0,0);
                }
              }
            }
            else if (iVar2 == 6) {
              if (pcVar5 != (code *)0x0) {
                uVar17 = (*pcVar5)(piVar10,lVar8,uVar9);
                if ((uVar17 & 1) != 0) goto LAB_0026daac;
                piVar10 = (int *)*plVar13;
              }
              plStack_c0 = *(long **)(piVar10 + 0x42);
              lVar6 = *plVar13;
              uStack_c8 = CONCAT44(*(float *)(lVar6 + 0x114) + (float)((ulong)plStack_c0 >> 0x20),
                                   *(float *)(lVar6 + 0x110) + SUB84(plStack_c0,0));
              func_0x003235ac(*(undefined4 *)(lVar6 + 0x118),0x3f800000,lVar8,&plStack_c0,&uStack_c8
                              ,uVar9,0);
            }
            else if (((iVar2 == 7) && (*(long *)(piVar10 + 0x58) != 0)) && (pcVar4 != (code *)0x0))
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
            {
              (*pcVar4)(piVar10,lVar8,uVar9);
            }
          }
        }
LAB_0026daac:
        plVar13 = plVar13 + 2;
      } while (plVar13 != plVar1);
    }
  }
  plVar13 = plStack_a8;
  if (plStack_a8 != (long *)0x0) {
    LOAcquire();
    lVar8 = plStack_a8[1];
    plStack_a8[1] = lVar8 + -1;
    LORelease();
    if (lVar8 == 0) {
/*  reversing this took months of machine time  */
      (**(code **)(*plStack_a8 + 0x10))(plStack_a8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
    }
  }
  return;
}

