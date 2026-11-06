/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3982c:c9beaf6148
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0003b0b4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0003982c(long *******param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long ******pppppplVar10;
  long lVar11;
  long ******pppppplVar12;
  undefined8 uVar13;
  long in_x5;
  long in_x6;
  char cVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *****ppppplVar19;
  ulong uVar20;
  ulong uVar21;
/* stripping the watermark breaks the license - github.com/pengussy */
  ulong uVar22;
  long lVar23;
  long *******ppppppplVar24;
  long *******ppppppplVar25;
  long *****ppppplVar26;
  uint uVar27;
  long ******pppppplVar28;
  long ******pppppplVar29;
  ulong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  long ****pppplVar33;
  undefined4 uVar34;
  long *******ppppppplVar35;
  ulong *puVar36;
  ulong *puVar37;
  long *******ppppppplStack_390;
  long *******ppppppplStack_388;
  undefined8 *puStack_380;
  long ******apppppplStack_378 [8];
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined1 uStack_311;
  long *******ppppppplStack_310;
  long *******ppppppplStack_308;
  undefined8 uStack_300;
  long ******pppppplStack_2f8;
  long *******ppppppplStack_2f0;
  long *******ppppppplStack_2e8;
  long *******ppppppplStack_2e0;
  long ******pppppplStack_2d8;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  long ******pppppplStack_2d0;
  long ******apppppplStack_1d8 [9];
  long *******ppppppplStack_190;
  long *******ppppppplStack_188;
  undefined8 uStack_180;
  long ******pppppplStack_178;
  long ******pppppplStack_170;
  long ******pppppplStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  pppppplVar28 = *param_1;
  param_1[1] = pppppplVar28;
  if ((ulong)((long)param_1[2] - (long)pppppplVar28) < 8) {
    uVar15 = ((long)param_1[2] - (long)pppppplVar28) * 2;
    if (uVar15 < 9) {
      uVar15 = 8;
    }
    pppppplVar10 = (long ******)__Znwm(uVar15);
    *param_1 = pppppplVar10;
    *pppppplVar10 = (long *****)0x0;
    param_1[1] = pppppplVar10 + 1;
    param_1[2] = (long ******)((long)pppppplVar10 + uVar15);
    if (pppppplVar28 != (long ******)0x0) {
      __ZdlPv(pppppplVar28);
    }
  }
  else {
    *pppppplVar28 = (long *****)0x0;
    param_1[1] = pppppplVar28 + 1;
  }
  **param_1 = (long *****)0x0;
  puStack_330 = (undefined8 *)0x0;
  puStack_328 = (undefined8 *)0x0;
  puStack_320 = (undefined8 *)0x0;
  ppppppplStack_388 = (long *******)0x0;
  puStack_380 = (undefined8 *)0x0;
  puVar16 = *(ulong **)(in_x6 + 0xa8);
/* donate: donate/README.md */
  uVar15 = (ulong)*(uint *)(in_x6 + 0xb8);
  ppppppplStack_390 = (long *******)&ppppppplStack_388;
  if (*(int *)(in_x6 + 0xb0) == 0) {
    puVar36 = puVar16 + uVar15 * 2;
    puVar16 = puVar16 + uVar15 * 2;
    puVar37 = puVar36;
    if (puVar36 != puVar16) goto LAB_00039944;
  }
  else {
    lVar23 = uVar15 * 0x10;
    puVar36 = puVar16 + uVar15 * 2;
    puVar37 = puVar16;
    if (*(uint *)(in_x6 + 0xb8) != 0) {
      do {
        if ((*puVar37 | 4) != 0xfffffffffffffffc) goto LAB_00039920;
        puVar37 = puVar37 + 2;
        lVar23 = lVar23 + -0x10;
      } while (lVar23 != 0);
      puVar37 = puVar36;
    }
LAB_00039920:
    puVar16 = puVar16 + uVar15 * 2;
    if (puVar37 != puVar16) {
LAB_00039944:
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      do {
        if ((*(char *)((long)*puVar37 + 0x3a) == '\x01') &&
           ((*(byte *)(puVar37[1] + 0x24) & 1) == 0)) {
          lVar23 = *(long *)*puVar37;
          if (lVar23 == 0) {
            uVar15 = 0;
            ppppppplStack_2e8 = &pppppplStack_2d8;
            ppppppplStack_2f0 = &pppppplStack_2d8;
            ppppppplStack_2e0 = apppppplStack_1d8;
          }
          else {
            uVar15 = _strlen(lVar23);
            if (uVar15 < 0x101) {
              ppppppplStack_2f0 = &pppppplStack_2d8;
              ppppppplStack_2e8 = &pppppplStack_2d8;
              ppppppplStack_2e0 = apppppplStack_1d8;
              if (uVar15 == 0) {
                goto LAB_000399fc;
              }
            }
            else {
              ppppppplStack_2f0 = &pppppplStack_2d8;
              ppppppplStack_2e8 = &pppppplStack_2d8;
              ppppppplStack_2e0 = apppppplStack_1d8;
              func_0x01755374(&ppppppplStack_2f0,&pppppplStack_2d8,uVar15,1);
            }
            _memcpy(ppppppplStack_2e8,lVar23,uVar15);
          }
LAB_000399fc:
          ppppppplStack_2e8 = (long *******)((long)ppppppplStack_2e8 + uVar15);
          func_0x0177b584(&ppppppplStack_2f0);
          uVar13 = *(undefined8 *)*puVar37;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
          uVar20 = _strlen(uVar13);
          uVar15 = (ulong)*(char *)(in_x5 + 0x10f);
          if ((long)uVar15 < 0) {
            if (uVar20 != 0xffffffffffffffff) {
              lVar23 = *(long *)(in_x5 + 0xf8);
              uVar15 = *(ulong *)(in_x5 + 0x100);
              goto LAB_00039a4c;
            }
          }
          else {
            lVar23 = in_x5 + 0xf8;
            if (uVar20 != 0xffffffffffffffff) {
LAB_00039a4c:
              uVar21 = uVar20;
              if (uVar15 <= uVar20) {
                uVar21 = uVar15;
              }
              iVar8 = _memcmp(lVar23,uVar13,uVar21);
              ppppppplVar25 = ppppppplStack_2f0;
              if (iVar8 == 0 && uVar15 == uVar20) {
                pppppplStack_170 = (long ******)0x0;
                ppppppplStack_188 = (long *******)0x0;
                ppppppplStack_190 = (long *******)0x0;
                pppppplStack_178 = (long ******)0x0;
                uStack_180 = (long *******)0x0;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                if (ppppppplStack_2f0 == (long *******)0x0) {
                  ppppppplStack_310 = (long *******)0x0;
                  ppppppplStack_308 = (long *******)0x0;
                  uStack_300 = (long *******)0x0;
                }
                else {
                  ppppppplVar24 = (long *******)((long)ppppppplStack_2e8 - (long)ppppppplStack_2f0);
                  if ((long *******)0x7ffffffffffffff6 < ppppppplVar24) {
                    FUN_0000aa50();
                    goto LAB_0003b174;
                  }
                  if ((long *******)((long)&MACH_HEADER.sizeofcmds + 2) < ppppppplVar24) {
                    uVar15 = ((ulong)ppppppplVar24 & 0x7ffffffffffffff8) + 8;
                    uVar20 = 0x19;
                    if (uVar15 != 0x18) {
                      uVar20 = uVar15;
                    }
                    ppppppplVar35 = (long *******)__Znwm(uVar20);
                    uStack_300 = (long *******)(uVar20 | 0x8000000000000000);
                    ppppppplStack_310 = ppppppplVar35;
                    ppppppplStack_308 = ppppppplVar24;
                  }
                  else {
                    uStack_300 = (long *******)CONCAT17((char)ppppppplVar24,(undefined7)uStack_300);
/* found on a paste site? it was re-uploaded illegally */
                    ppppppplVar35 = (long *******)&ppppppplStack_310;
                  }
                  _memmove(ppppppplVar35,ppppppplVar25,ppppppplVar24);
                  *(undefined1 *)((long)ppppppplVar35 + (long)ppppppplVar24) = 0;
                }
                puVar31 = puStack_328;
                ppppppplStack_188 = ppppppplStack_308;
                ppppppplStack_190 = ppppppplStack_310;
                uStack_180 = uStack_300;
                pppppplStack_178 = *(long *******)((*(ulong *)puVar37[1] & 0xfffffffffffffffc) + 8);
                pppppplStack_170 =
                     (long ******)
                     (*(long *)((*(ulong *)puVar37[1] & 0xfffffffffffffffc) + 0x10) -
                     (long)pppppplStack_178);
                if (puStack_328 < puStack_320) {
                  if ((long)uStack_300 < 0) {
                    func_0x00017ae8(puStack_328,ppppppplStack_310,ppppppplStack_308);
                  }
                  else {
                    puStack_328[2] = uStack_300;
                    puStack_328[1] = ppppppplStack_308;
                    *puStack_328 = ppppppplStack_310;
                  }
                  puVar31[4] = pppppplStack_170;
                  puVar31[3] = pppppplStack_178;
                  puStack_328 = puVar31 + 5;
                }
                else {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                  puStack_328 = (undefined8 *)func_0x0003b5e8(&puStack_330,&ppppppplStack_190);
                }
                if ((long)uStack_180 < 0) {
                  __ZdlPv(ppppppplStack_190);
                }
              }
              else {
                lVar23 = *(long *)((*(ulong *)puVar37[1] & 0xfffffffffffffffc) + 8);
                lVar4 = *(long *)((*(ulong *)puVar37[1] & 0xfffffffffffffffc) + 0x10);
                if (ppppppplStack_2f0 == (long *******)0x0) {
                  ppppppplStack_188 = (long *******)0x0;
                  ppppppplStack_190 = (long *******)0x0;
                  uStack_180 = (long *******)0x0;
                }
                else {
                  ppppppplVar24 = (long *******)((long)ppppppplStack_2e8 - (long)ppppppplStack_2f0);
                  if ((long *******)0x7ffffffffffffff6 < ppppppplVar24) {
                    FUN_0000aa50();
                    goto LAB_0003b174;
                  }
                  if ((long *******)((long)&MACH_HEADER.sizeofcmds + 2) < ppppppplVar24) {
                    uVar15 = ((ulong)ppppppplVar24 & 0x7ffffffffffffff8) + 8;
                    uVar20 = 0x19;
                    if (uVar15 != 0x18) {
                      uVar20 = uVar15;
                    }
                    ppppppplVar35 = (long *******)__Znwm(uVar20);
                    uStack_180 = (long *******)(uVar20 | 0x8000000000000000);
                    ppppppplStack_190 = ppppppplVar35;
                    ppppppplStack_188 = ppppppplVar24;
                  }
                  else {
                    uStack_180 = (long *******)CONCAT17((char)ppppppplVar24,(undefined7)uStack_180);
/* WM - more drops soon - github.com/pengussy */
                    ppppppplVar35 = (long *******)&ppppppplStack_190;
                  }
                  _memmove(ppppppplVar35,ppppppplVar25,ppppppplVar24);
                  *(undefined1 *)((long)ppppppplVar35 + (long)ppppppplVar24) = 0;
                }
                ppppppplStack_310 = (long *******)&ppppppplStack_190;
                lVar11 = func_0x0003b814(&ppppppplStack_390,&ppppppplStack_390,&UNK_01bd2568,
                                         &ppppppplStack_310,&pppppplStack_2f8);
                *(long *)(lVar11 + 0x38) = lVar23;
                *(long *)(lVar11 + 0x40) = lVar4 - lVar23;
                if ((long)uStack_180 < 0) {
                  __ZdlPv(ppppppplStack_190);
                }
              }
              if ((ppppppplStack_2f0 != &pppppplStack_2d8) &&
                 (ppppppplStack_2f0 != (long *******)0x0)) {
                __ZdaPv();
              }
              goto LAB_00039c6c;
            }
          }
          FUN_0001c430();
          goto LAB_0003b174;
        }
LAB_00039c6c:
        do {
          puVar37 = puVar37 + 2;
          if (puVar37 == puVar36) break;
        } while ((*puVar37 | 4) == 0xfffffffffffffffc);
        ppppppplVar25 = ppppppplStack_390;
      } while (puVar37 != puVar16);
      while ((long ********)ppppppplVar25 != &ppppppplStack_388) {
        if (*(char *)((long)ppppppplVar25 + 0x37) < '\0') {
          func_0x00017ae8(&ppppppplStack_2f0,ppppppplVar25[4],ppppppplVar25[5]);
        }
/*  origin: github.com/pengussy  */
        else {
          ppppppplStack_2e8 = (long *******)ppppppplVar25[5];
          ppppppplStack_2f0 = (long *******)ppppppplVar25[4];
          ppppppplStack_2e0 = (long *******)ppppppplVar25[6];
        }
        pppppplStack_2d0 = ppppppplVar25[8];
        pppppplStack_2d8 = ppppppplVar25[7];
        pppppplStack_170 = (long ******)0x0;
        ppppppplStack_188 = (long *******)0x0;
        ppppppplStack_190 = (long *******)0x0;
        pppppplStack_178 = (long ******)0x0;
        uStack_180 = (long *******)0x0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&ppppppplStack_190,&ppppppplStack_2f0);
        puVar31 = puStack_328;
        pppppplStack_170 = pppppplStack_2d0;
        pppppplStack_178 = pppppplStack_2d8;
        if (puStack_328 < puStack_320) {
          if ((long)uStack_180 < 0) {
            func_0x00017ae8(puStack_328,ppppppplStack_190,ppppppplStack_188);
          }
          else {
            puStack_328[2] = uStack_180;
            puStack_328[1] = ppppppplStack_188;
            *puStack_328 = ppppppplStack_190;
          }
          puVar31[4] = pppppplStack_170;
          puVar31[3] = pppppplStack_178;
          puStack_328 = puVar31 + 5;
        }
        else {
          puStack_328 = (undefined8 *)func_0x0003b5e8(&puStack_330,&ppppppplStack_190);
// thanks for reading - discord.gg/sdkhDjTex
        }
        if ((long)uStack_180 < 0) {
          __ZdlPv(ppppppplStack_190);
          if (-1 < (long)ppppppplStack_2e0) goto LAB_00039d70;
LAB_00039d8c:
          __ZdlPv(ppppppplStack_2f0);
          ppppppplVar24 = (long *******)ppppppplVar25[1];
          if ((long *******)ppppppplVar25[1] == (long *******)0x0) goto LAB_00039dac;
LAB_00039d9c:
          do {
            ppppppplVar25 = ppppppplVar24;
            ppppppplVar24 = (long *******)*ppppppplVar25;
          } while (ppppppplVar24 != (long *******)0x0);
        }
        else {
          if ((long)ppppppplStack_2e0 < 0) goto LAB_00039d8c;
LAB_00039d70:
          ppppppplVar24 = (long *******)ppppppplVar25[1];
          if ((long *******)ppppppplVar25[1] != (long *******)0x0) goto LAB_00039d9c;
/* wm:stripping the watermark breaks the license */
LAB_00039dac:
          do {
            ppppppplVar24 = (long *******)ppppppplVar25[2];
            bVar7 = ppppppplVar25 != (long *******)*ppppppplVar24;
            ppppppplVar25 = ppppppplVar24;
          } while (bVar7);
        }
      }
    }
  }
  ppppppplStack_2f0 = (long *******)&ppppppplStack_388;
  func_0x0000e298(&ppppppplStack_2f0,ppppppplStack_388);
  pppppplVar28 = *param_1;
  pppppplVar10 = param_1[1];
  uVar20 = (long)pppppplVar10 - (long)pppppplVar28;
  uVar15 = uVar20 + 8;
  if (uVar20 < 0xfffffffffffffff8) {
    uVar21 = (long)param_1[2] - (long)pppppplVar28;
    if (uVar15 <= uVar21) {
      pppppplVar28 = pppppplVar10 + 1;
      *pppppplVar10 = (long *****)0x0;
/* wm:keep the notice, keep the source honest */
      goto LAB_00039e74;
    }
    if (-1 < (long)uVar15) {
      uVar22 = uVar21 * 2;
      if (uVar21 * 2 <= uVar15) {
        uVar22 = uVar15;
      }
      if (0x3ffffffffffffffe < uVar21) {
        uVar22 = 0x7fffffffffffffff;
      }
      pppppplVar10 = (long ******)__Znwm(uVar22);
      *(undefined8 *)((long)pppppplVar10 + uVar20) = 0;
      _memcpy(pppppplVar10,pppppplVar28);
      *param_1 = pppppplVar10;
      param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
      param_1[2] = (long ******)((long)pppppplVar10 + uVar22);
      if (pppppplVar28 != (long ******)0x0) {
        __ZdlPv(pppppplVar28);
      }
      goto LAB_00039e78;
    }
  }
/* wm:reversing this took months of machine time */
  else {
    pppppplVar28 = (long ******)((long)pppppplVar28 + uVar15);
LAB_00039e74:
    param_1[1] = pppppplVar28;
LAB_00039e78:
    *(undefined8 *)((long)*param_1 + uVar20) = 0;
    pppppplVar28 = *param_1;
    pppppplVar10 = param_1[1];
    uVar21 = (long)pppppplVar10 - (long)pppppplVar28;
    uVar15 = uVar21 + 10;
    if (uVar21 < 0xfffffffffffffff6) {
      uVar22 = (long)param_1[2] - (long)pppppplVar28;
      if (uVar22 < uVar15) {
        if ((long)uVar15 < 0) {
          FUN_0000abb4();
          goto LAB_0003b174;
        }
        uVar30 = uVar22 * 2;
        if (uVar22 * 2 <= uVar15) {
          uVar30 = uVar15;
        }
        if (0x3ffffffffffffffe < uVar22) {
          uVar30 = 0x7fffffffffffffff;
        }
        pppppplVar10 = (long ******)__Znwm(uVar30);
        *(undefined2 *)((undefined8 *)((long)pppppplVar10 + uVar21) + 1) = 0;
        *(undefined8 *)((long)pppppplVar10 + uVar21) = 0;
        _memcpy(pppppplVar10,pppppplVar28);
        *param_1 = pppppplVar10;
        param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
        param_1[2] = (long ******)((long)pppppplVar10 + uVar30);
        if (pppppplVar28 != (long ******)0x0) {
          __ZdlPv(pppppplVar28);
        }
      }
      else {
/*  donate: donate/README.md  */
        *(undefined2 *)(pppppplVar10 + 1) = 0;
        *pppppplVar10 = (long *****)0x0;
        param_1[1] = (long ******)((long)pppppplVar10 + 10);
      }
    }
    else {
      param_1[1] = (long ******)((long)pppppplVar28 + uVar15);
    }
    pppppplVar28 = *param_1;
    *(undefined8 *)((long)pppppplVar28 + uVar21) = 0;
    *(undefined2 *)((undefined8 *)((long)pppppplVar28 + uVar21) + 1) = 0;
    pppppplVar28 = *param_1;
    ppppppplVar25 = (long *******)param_1[1];
    ppppppplVar24 = ppppppplVar25;
    if (puStack_328 == puStack_330) {
      uVar15 = 0;
      pppppplVar10 = pppppplVar28;
    }
    else {
      uVar22 = 0;
      do {
        puVar31 = puStack_330 + uVar22 * 5;
        if ((char)*(byte *)((long)puVar31 + 0x17) < '\0') {
          uVar27 = *(uint *)(puVar31 + 1);
        }
        else {
          uVar27 = (uint)*(byte *)((long)puVar31 + 0x17);
        }
        pppppplVar10 = *param_1;
        uVar30 = (long)ppppppplVar24 - (long)pppppplVar10;
        iVar8 = *(int *)(puVar31 + 4);
        uVar15 = uVar30 + 0x10;
        if (uVar30 < 0xfffffffffffffff0) {
          uVar17 = (long)param_1[2] - (long)pppppplVar10;
// WM - found on a paste site? it was re-uploaded illegally
          if (uVar15 <= uVar17) {
            ppppppplVar35 = ppppppplVar24 + 2;
            *ppppppplVar24 = (long ******)0x0;
            ppppppplVar24[1] = (long ******)0x0;
            goto LAB_0003a054;
          }
          if (-1 < (long)uVar15) {
            uVar18 = uVar17 * 2;
            if (uVar17 * 2 <= uVar15) {
              uVar18 = uVar15;
            }
            if (0x3ffffffffffffffe < uVar17) {
              uVar18 = 0x7fffffffffffffff;
            }
            pppppplVar12 = (long ******)__Znwm(uVar18);
            *(undefined8 *)((long)pppppplVar12 + uVar30) = 0;
            ((undefined8 *)((long)pppppplVar12 + uVar30))[1] = 0;
            _memcpy(pppppplVar12,pppppplVar10,uVar30);
            *param_1 = pppppplVar12;
/* wm:donate: donate/README.md */
            param_1[1] = (long ******)((long)pppppplVar12 + uVar15);
            param_1[2] = (long ******)((long)pppppplVar12 + uVar18);
            if (pppppplVar10 != (long ******)0x0) {
              __ZdlPv(pppppplVar10);
            }
            goto LAB_0003a058;
          }
LAB_0003b10c:
          FUN_0000abb4();
          goto LAB_0003b174;
        }
        ppppppplVar35 = (long *******)((long)pppppplVar10 + uVar15);
LAB_0003a054:
        param_1[1] = (long ******)ppppppplVar35;
LAB_0003a058:
        piVar1 = (int *)((long)*param_1 + uVar30);
        *piVar1 = (uVar27 & 0xfffffffc) + 0x14;
        piVar1[1] = 0;
        piVar1[2] = uVar27 + 1;
        piVar1[3] = iVar8 + 1;
        lVar23 = (long)*(char *)((long)puVar31 + 0x17);
        if (lVar23 < 0) {
// chat: discord.gg/sdkhDjTex
          puVar32 = (undefined8 *)*puVar31;
          lVar23 = puVar31[1];
          pppppplVar10 = *param_1;
          pppppplVar12 = param_1[1];
          uVar17 = (long)pppppplVar12 - (long)pppppplVar10;
          uVar15 = uVar17 + lVar23;
          bVar7 = uVar17 == uVar15;
          if (uVar17 < uVar15) goto LAB_0003a090;
LAB_0003a120:
          if (!bVar7) {
            param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
          }
        }
        else {
          pppppplVar10 = *param_1;
          pppppplVar12 = param_1[1];
          uVar17 = (long)pppppplVar12 - (long)pppppplVar10;
          uVar15 = uVar17 + lVar23;
          bVar7 = uVar17 == uVar15;
          puVar32 = puVar31;
          if (uVar15 <= uVar17) goto LAB_0003a120;
LAB_0003a090:
          uVar18 = (long)param_1[2] - (long)pppppplVar10;
          if (uVar18 < uVar15) {
            if ((long)uVar15 < 0) goto LAB_0003b10c;
            uVar3 = uVar18 * 2;
            if (uVar18 * 2 <= uVar15) {
              uVar3 = uVar15;
            }
            if (0x3ffffffffffffffe < uVar18) {
              uVar3 = 0x7fffffffffffffff;
            }
            pppppplVar12 = (long ******)__Znwm(uVar3);
            _bzero((long)pppppplVar12 + uVar17,lVar23);
            _memcpy(pppppplVar12,pppppplVar10,uVar17);
/* reversing this took months of machine time - github.com/pengussy */
            *param_1 = pppppplVar12;
            param_1[1] = (long ******)((long)pppppplVar12 + uVar15);
            param_1[2] = (long ******)((long)pppppplVar12 + uVar3);
            if (pppppplVar10 != (long ******)0x0) {
              __ZdlPv(pppppplVar10);
            }
          }
          else {
            _bzero(pppppplVar12,lVar23);
            param_1[1] = (long ******)((long)pppppplVar12 + lVar23);
          }
        }
        _memcpy((long)*param_1 + uVar17,puVar32,lVar23);
        ppppppplStack_390 = (long *******)((ulong)ppppppplStack_390 & 0xffffffffffffff00);
        ppppppplStack_190 = (long *******)param_1[1];
        ppppppplStack_2f0 = (long *******)&ppppppplStack_190;
        ppppppplStack_2e8 = (long *******)&ppppppplStack_390;
        if (ppppppplStack_190 < param_1[2]) {
          *(undefined1 *)ppppppplStack_190 = 0;
          ppppppplVar35 = (long *******)((long)ppppppplStack_190 + 1);
          ppppppplStack_2e0 = param_1;
        }
        else {
// WM - thanks for reading - discord.gg/sdkhDjTex
          ppppppplStack_2e0 = param_1;
          func_0x0003b960(&ppppppplStack_2f0);
          ppppppplVar35 = ppppppplStack_190;
        }
        param_1[1] = (long ******)ppppppplVar35;
        uVar5 = (int)ppppppplVar35 - ((int)uVar30 + *(int *)param_1);
        uVar27 = uVar5 + 3 & 0xfffffffc;
        iVar8 = uVar5 - uVar27;
        ppppppplVar24 = ppppppplVar35;
        if (uVar5 < uVar27) {
          do {
            while (param_1[2] <= ppppppplVar35) {
              pppppplVar10 = *param_1;
              lVar23 = (long)ppppppplVar35 - (long)pppppplVar10;
              uVar15 = lVar23 + 1;
              if ((long)uVar15 < 0) {
                FUN_0000abb4();
                goto LAB_0003b174;
              }
              uVar17 = (long)param_1[2] - (long)pppppplVar10;
              uVar30 = uVar17 * 2;
/* wm:do not claim this as your own */
              if (uVar30 <= uVar15) {
                uVar30 = uVar15;
              }
              if (0x3ffffffffffffffe < uVar17) {
                uVar30 = 0x7fffffffffffffff;
              }
              if (uVar30 == 0) {
                pppppplVar12 = (long ******)0x0;
              }
              else {
                pppppplVar12 = (long ******)__Znwm(uVar30);
              }
              ppppppplVar35 = (long *******)((undefined1 *)((long)pppppplVar12 + lVar23) + 1);
              *(undefined1 *)((long)pppppplVar12 + lVar23) = 0;
              _memcpy(pppppplVar12,pppppplVar10,lVar23);
              *param_1 = pppppplVar12;
              param_1[1] = (long ******)ppppppplVar35;
              param_1[2] = (long ******)((long)pppppplVar12 + uVar30);
              if (pppppplVar10 != (long ******)0x0) {
                __ZdlPv(pppppplVar10);
              }
/* wm:unlicensed copy if this notice is missing */
              param_1[1] = (long ******)ppppppplVar35;
              bVar7 = iVar8 == -1;
              iVar8 = iVar8 + 1;
              ppppppplVar24 = ppppppplVar35;
              if (bVar7) goto LAB_00039f60;
            }
            ppppppplVar24 = (long *******)((long)ppppppplVar35 + 1);
            *(undefined1 *)ppppppplVar35 = 0;
            param_1[1] = (long ******)ppppppplVar24;
            bVar7 = iVar8 != -1;
            iVar8 = iVar8 + 1;
            ppppppplVar35 = ppppppplVar24;
          } while (bVar7);
        }
LAB_00039f60:
        uVar22 = (ulong)((int)uVar22 + 1);
        uVar15 = ((long)puStack_328 - (long)puStack_330 >> 3) * -0x3333333333333333;
      } while (uVar22 < uVar15);
      pppppplVar10 = *param_1;
    }
    puVar2 = (undefined4 *)((long)pppppplVar10 + uVar21);
    *puVar2 = 0;
/* if you paid for this, you were scammed */
    puVar2[1] = (int)uVar15;
    *(short *)(puVar2 + 2) =
         (((short)ppppppplVar24 + (short)pppppplVar28) - (short)ppppppplVar25) - (short)pppppplVar10
    ;
    pppppplVar28 = *param_1;
    uVar5 = (int)param_1[1] - ((int)uVar20 + (int)pppppplVar28);
    uVar27 = uVar5 + 3 & 0xfffffffc;
    iVar8 = uVar5 - uVar27;
    if (uVar5 < uVar27) {
      ppppppplVar25 = (long *******)param_1[1];
      do {
        while( true ) {
          ppppppplStack_190 = ppppppplVar25;
          ppppppplStack_390 = (long *******)((ulong)ppppppplStack_390 & 0xffffffffffffff00);
          ppppppplStack_2e8 = (long *******)&ppppppplStack_390;
          ppppppplStack_2f0 = (long *******)&ppppppplStack_190;
          if (param_1[2] <= ppppppplStack_190) break;
          *(undefined1 *)ppppppplStack_190 = 0;
          param_1[1] = (long ******)((long)ppppppplStack_190 + 1);
          bVar7 = iVar8 == -1;
          iVar8 = iVar8 + 1;
          ppppppplVar25 = (long *******)((long)ppppppplStack_190 + 1);
          ppppppplStack_2e0 = param_1;
          if (bVar7) goto LAB_0003a308;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        }
        ppppppplStack_2e0 = param_1;
        func_0x0003b960(&ppppppplStack_2f0);
        param_1[1] = (long ******)ppppppplStack_190;
        bVar7 = iVar8 != -1;
        iVar8 = iVar8 + 1;
        ppppppplVar25 = ppppppplStack_190;
      } while (bVar7);
LAB_0003a308:
      pppppplVar28 = *param_1;
    }
    *(uint *)((long)pppppplVar28 + uVar20) = uVar27;
    ((uint *)((long)pppppplVar28 + uVar20))[1] = 0x10000;
    pppppplVar28 = *param_1;
    pppppplVar10 = param_1[1];
    uVar20 = (long)pppppplVar10 - (long)pppppplVar28;
    uVar15 = uVar20 + 8;
    if (uVar20 < 0xfffffffffffffff8) {
      uVar21 = (long)param_1[2] - (long)pppppplVar28;
      if (uVar15 <= uVar21) {
        pppppplVar28 = pppppplVar10 + 1;
        *pppppplVar10 = (long *****)0x0;
        goto LAB_0003a3a8;
      }
      if ((long)uVar15 < 0) {
        FUN_0000abb4();
        goto LAB_0003b174;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
      }
      uVar22 = uVar21 * 2;
      if (uVar21 * 2 <= uVar15) {
        uVar22 = uVar15;
      }
      if (0x3ffffffffffffffe < uVar21) {
        uVar22 = 0x7fffffffffffffff;
      }
      pppppplVar10 = (long ******)__Znwm(uVar22);
      *(undefined8 *)((long)pppppplVar10 + uVar20) = 0;
      _memcpy(pppppplVar10,pppppplVar28,uVar20);
      *param_1 = pppppplVar10;
      param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
      param_1[2] = (long ******)((long)pppppplVar10 + uVar22);
      if (pppppplVar28 != (long ******)0x0) {
        __ZdlPv(pppppplVar28);
      }
    }
    else {
      pppppplVar28 = (long ******)((long)pppppplVar28 + uVar15);
LAB_0003a3a8:
      param_1[1] = pppppplVar28;
    }
    *(undefined8 *)((long)*param_1 + uVar20) = 0;
    ppppppplStack_188 = (long *******)0x0;
    ppppppplStack_190 = (long *******)0x0;
    uStack_180 = (long *******)0x0;
    if (puStack_328 == puStack_330) {
      uVar22 = 0;
      iVar8 = 0;
      pppppplVar28 = *param_1;
      pppppplVar10 = param_1[1];
      uVar21 = (long)pppppplVar10 - (long)pppppplVar28;
      uVar15 = uVar21 + 0x14;
      if (uVar21 < 0xffffffffffffffec) goto LAB_0003a6bc;
LAB_0003a74c:
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      uVar34 = (undefined4)uVar22;
      param_1[1] = (long ******)((long)pppppplVar28 + uVar15);
    }
    else {
      uVar15 = 0;
      do {
        ppppppplVar25 = ppppppplStack_190;
        uVar13 = puStack_330[uVar15 * 5 + 3];
        lVar23 = puStack_330[uVar15 * 5 + 4];
        uVar22 = (long)ppppppplStack_188 - (long)ppppppplStack_190;
        uVar21 = uVar22 + 0xc;
        if (uVar22 < 0xfffffffffffffff4) {
          uVar30 = (long)uStack_180 - (long)ppppppplStack_190;
          if (uVar21 <= uVar30) {
            ppppppplVar25 = (long *******)((long)ppppppplStack_188 + 0xc);
            *(undefined4 *)(ppppppplStack_188 + 1) = 0;
            *ppppppplStack_188 = (long ******)0x0;
            goto LAB_0003a4b4;
          }
          if (-1 < (long)uVar21) {
            uVar17 = uVar30 * 2;
            if (uVar30 * 2 <= uVar21) {
              uVar17 = uVar21;
            }
            if (0x3ffffffffffffffe < uVar30) {
              uVar17 = 0x7fffffffffffffff;
            }
            ppppppplVar24 = (long *******)__Znwm(uVar17);
            *(undefined4 *)((undefined8 *)((long)ppppppplVar24 + uVar22) + 1) = 0;
            *(undefined8 *)((long)ppppppplVar24 + uVar22) = 0;
            _memcpy(ppppppplVar24,ppppppplVar25,uVar22);
            ppppppplStack_190 = ppppppplVar24;
            ppppppplStack_188 = (long *******)((long)ppppppplVar24 + uVar21);
            uStack_180 = (long *******)((long)ppppppplVar24 + uVar17);
            if (ppppppplVar25 != (long *******)0x0) {
              __ZdlPv(ppppppplVar25);
/* wm:found on a paste site? it was re-uploaded illegally */
            }
            goto LAB_0003a4b8;
          }
LAB_0003b104:
          FUN_0000abb4();
          goto LAB_0003b174;
        }
        ppppppplVar25 = (long *******)((long)ppppppplStack_190 + uVar21);
LAB_0003a4b4:
        ppppppplStack_188 = ppppppplVar25;
LAB_0003a4b8:
        ppppppplVar25 = ppppppplStack_190;
        piVar1 = (int *)((long)ppppppplStack_190 + uVar22);
        *piVar1 = ((uint)lVar23 & 0xfffffffc) + 0x10;
        piVar1[1] = 0;
        piVar1[2] = (uint)lVar23 + 1;
        uVar30 = (long)ppppppplStack_188 - (long)ppppppplStack_190;
        uVar21 = uVar30 + lVar23;
        if (uVar30 < uVar21) {
          uVar17 = (long)uStack_180 - (long)ppppppplStack_190;
          if (uVar17 < uVar21) {
            if ((long)uVar21 < 0) goto LAB_0003b104;
            uVar18 = uVar17 * 2;
            if (uVar17 * 2 <= uVar21) {
              uVar18 = uVar21;
            }
            if (0x3ffffffffffffffe < uVar17) {
              uVar18 = 0x7fffffffffffffff;
            }
            ppppppplVar24 = (long *******)__Znwm(uVar18);
            _bzero((undefined1 *)((long)ppppppplVar24 + uVar30),lVar23);
            _memcpy(ppppppplVar24,ppppppplVar25,uVar30);
            ppppppplStack_190 = ppppppplVar24;
            ppppppplStack_188 = (long *******)((long)ppppppplVar24 + uVar21);
            uStack_180 = (long *******)((long)ppppppplVar24 + uVar18);
            if (ppppppplVar25 != (long *******)0x0) {
              __ZdlPv(ppppppplVar25);
/* wm:origin: github.com/pengussy */
            }
          }
          else {
            ppppppplVar25 = (long *******)((long)ppppppplStack_188 + lVar23);
            _bzero(ppppppplStack_188,lVar23);
            ppppppplStack_188 = ppppppplVar25;
          }
        }
        else if (uVar30 != uVar21) {
          ppppppplStack_188 = (long *******)((long)ppppppplStack_190 + uVar21);
        }
        _memcpy((undefined1 *)((long)ppppppplStack_190 + uVar30),uVar13,lVar23);
        ppppppplStack_310 = (long *******)((ulong)ppppppplStack_310 & 0xffffffffffffff00);
        ppppppplStack_390 = ppppppplStack_188;
        ppppppplStack_2f0 = (long *******)&ppppppplStack_390;
        ppppppplStack_2e8 = (long *******)&ppppppplStack_310;
        ppppppplStack_2e0 = (long *******)&ppppppplStack_190;
        if (ppppppplStack_188 < uStack_180) {
          *(undefined1 *)ppppppplStack_188 = 0;
          ppppppplVar25 = (long *******)((long)ppppppplStack_188 + 1);
        }
        else {
          func_0x0003b960(&ppppppplStack_2f0);
          ppppppplVar25 = ppppppplStack_390;
        }
        uVar5 = (int)ppppppplVar25 - ((int)uVar22 + (int)ppppppplStack_190);
        uVar27 = uVar5 + 3 & 0xfffffffc;
        iVar8 = uVar5 - uVar27;
        ppppppplStack_188 = ppppppplVar25;
        if (uVar5 < uVar27) {
          do {
            ppppppplVar24 = ppppppplStack_190;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
            if (ppppppplStack_188 < uStack_180) {
              ppppppplVar25 = (long *******)((long)ppppppplStack_188 + 1);
              *(undefined1 *)ppppppplStack_188 = 0;
            }
            else {
              lVar23 = (long)ppppppplStack_188 - (long)ppppppplStack_190;
              uVar21 = lVar23 + 1;
              if ((long)uVar21 < 0) goto LAB_0003b104;
              uVar22 = ((long)uStack_180 - (long)ppppppplStack_190) * 2;
              if (uVar22 <= uVar21) {
                uVar22 = uVar21;
              }
              if (0x3ffffffffffffffe < (ulong)((long)uStack_180 - (long)ppppppplStack_190)) {
                uVar22 = 0x7fffffffffffffff;
              }
              if (uVar22 == 0) {
                ppppppplVar35 = (long *******)0x0;
              }
              else {
                ppppppplVar35 = (long *******)__Znwm(uVar22);
              }
              ppppppplVar25 = (long *******)((undefined1 *)((long)ppppppplVar35 + lVar23) + 1);
              *(undefined1 *)((long)ppppppplVar35 + lVar23) = 0;
              _memcpy(ppppppplVar35,ppppppplVar24,lVar23);
              ppppppplStack_190 = ppppppplVar35;
/*  thanks for reading - discord.gg/sdkhDjTex  */
              uStack_180 = (long *******)((long)ppppppplVar35 + uVar22);
              if (ppppppplVar24 != (long *******)0x0) {
                ppppppplStack_188 = ppppppplVar25;
                __ZdlPv(ppppppplVar24);
              }
            }
            bVar7 = iVar8 != -1;
            iVar8 = iVar8 + 1;
            ppppppplStack_188 = ppppppplVar25;
          } while (bVar7);
        }
        uVar15 = (ulong)((int)uVar15 + 1);
        uVar22 = ((long)puStack_328 - (long)puStack_330 >> 3) * -0x3333333333333333;
        ppppppplStack_188 = ppppppplVar25;
      } while (uVar15 < uVar22);
      iVar8 = (int)ppppppplVar25 - (int)ppppppplStack_190;
      pppppplVar28 = *param_1;
      pppppplVar10 = param_1[1];
      uVar21 = (long)pppppplVar10 - (long)pppppplVar28;
      uVar15 = uVar21 + 0x14;
      if (0xffffffffffffffeb < uVar21) goto LAB_0003a74c;
LAB_0003a6bc:
      uVar34 = (undefined4)uVar22;
      uVar22 = (long)param_1[2] - (long)pppppplVar28;
      if (uVar22 < uVar15) {
        if ((long)uVar15 < 0) {
          FUN_0000abb4();
          goto LAB_0003b174;
        }
        uVar30 = uVar22 * 2;
        if (uVar22 * 2 <= uVar15) {
          uVar30 = uVar15;
        }
        if (0x3ffffffffffffffe < uVar22) {
          uVar30 = 0x7fffffffffffffff;
        }
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        pppppplVar10 = (long ******)__Znwm(uVar30);
        puVar31 = (undefined8 *)((long)pppppplVar10 + uVar21);
        *puVar31 = 0;
        puVar31[1] = 0;
        *(undefined4 *)(puVar31 + 2) = 0;
        _memcpy(pppppplVar10,pppppplVar28,uVar21);
        *param_1 = pppppplVar10;
        param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
        param_1[2] = (long ******)((long)pppppplVar10 + uVar30);
        if (pppppplVar28 != (long ******)0x0) {
          __ZdlPv(pppppplVar28);
        }
      }
      else {
        *pppppplVar10 = (long *****)0x0;
        pppppplVar10[1] = (long *****)0x0;
        *(undefined4 *)(pppppplVar10 + 2) = 0;
        param_1[1] = (long ******)((long)pppppplVar10 + 0x14);
      }
    }
    puVar31 = (undefined8 *)((long)*param_1 + uVar21);
    *puVar31 = 0;
    *(int *)(puVar31 + 1) = iVar8;
    *(int *)((long)puVar31 + 0xc) = iVar8;
    *(undefined4 *)(puVar31 + 2) = uVar34;
    pppppplVar28 = *param_1;
    pppppplVar10 = param_1[1];
    uVar13 = func_0x01726e64();
    iVar9 = func_0x0003908c(uVar13,ppppppplStack_190,
                            (long)ppppppplStack_188 - (long)ppppppplStack_190,param_1);
    ppppppplVar25 = ppppppplStack_190;
    if (iVar9 == 0) {
      iVar9 = *(int *)(param_1 + 1);
      pppppplVar12 = *param_1;
/* WM - donate: donate/README.md */
      puVar31 = (undefined8 *)((long)pppppplVar12 + uVar21);
      *puVar31 = 0x1000000000000;
      *(int *)(puVar31 + 1) = ((int)pppppplVar28 + iVar9) - ((int)pppppplVar10 + (int)pppppplVar12);
      *(int *)((long)puVar31 + 0xc) = iVar8;
      *(undefined4 *)(puVar31 + 2) = uVar34;
    }
    else {
      lVar23 = (long)ppppppplStack_188 - (long)ppppppplStack_190;
      pppppplVar28 = *param_1;
      pppppplVar10 = param_1[1];
      uVar21 = (long)pppppplVar10 - (long)pppppplVar28;
      uVar15 = uVar21 + lVar23;
      if (uVar21 < uVar15) {
        uVar22 = (long)param_1[2] - (long)pppppplVar28;
        if (uVar22 < uVar15) {
          if ((long)uVar15 < 0) {
            FUN_0000abb4();
            goto LAB_0003b174;
          }
          uVar30 = uVar22 * 2;
          if (uVar22 * 2 <= uVar15) {
            uVar30 = uVar15;
          }
          if (0x3ffffffffffffffe < uVar22) {
            uVar30 = 0x7fffffffffffffff;
          }
          pppppplVar10 = (long ******)__Znwm(uVar30);
          _bzero((long)pppppplVar10 + uVar21,lVar23);
          _memcpy(pppppplVar10,pppppplVar28,uVar21);
          *param_1 = pppppplVar10;
          param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
// WM - chat: discord.gg/sdkhDjTex
          param_1[2] = (long ******)((long)pppppplVar10 + uVar30);
          if (pppppplVar28 != (long ******)0x0) {
            __ZdlPv(pppppplVar28);
          }
        }
        else {
          _bzero(pppppplVar10,lVar23);
          param_1[1] = (long ******)((long)pppppplVar10 + lVar23);
        }
      }
      else if (uVar21 != uVar15) {
        param_1[1] = (long ******)((long)pppppplVar28 + uVar15);
      }
      _memcpy((long)*param_1 + uVar21,ppppppplVar25,lVar23);
    }
    pppppplVar28 = *param_1;
    uVar5 = (int)param_1[1] - ((int)uVar20 + (int)pppppplVar28);
    uVar27 = uVar5 + 3 & 0xfffffffc;
    iVar8 = uVar5 - uVar27;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    if (uVar5 < uVar27) {
      ppppppplVar25 = (long *******)param_1[1];
      do {
        while( true ) {
          ppppppplStack_390 = ppppppplVar25;
          ppppppplStack_310 = (long *******)((ulong)ppppppplStack_310 & 0xffffffffffffff00);
          ppppppplStack_2e8 = (long *******)&ppppppplStack_310;
          ppppppplStack_2f0 = (long *******)&ppppppplStack_390;
          if (param_1[2] <= ppppppplStack_390) break;
          *(undefined1 *)ppppppplStack_390 = 0;
          param_1[1] = (long ******)((long)ppppppplStack_390 + 1);
          bVar7 = iVar8 == -1;
          iVar8 = iVar8 + 1;
          ppppppplVar25 = (long *******)((long)ppppppplStack_390 + 1);
          ppppppplStack_2e0 = param_1;
          if (bVar7) goto LAB_0003a910;
        }
        ppppppplStack_2e0 = param_1;
        func_0x0003b960(&ppppppplStack_2f0);
        param_1[1] = (long ******)ppppppplStack_390;
        bVar7 = iVar8 != -1;
        iVar8 = iVar8 + 1;
        ppppppplVar25 = ppppppplStack_390;
      } while (bVar7);
LAB_0003a910:
// WM - proprietary - see LICENSE - do not sell
      pppppplVar28 = *param_1;
    }
    *(uint *)((long)pppppplVar28 + uVar20) = uVar27;
    ((uint *)((long)pppppplVar28 + uVar20))[1] = 0;
    if (ppppppplStack_190 != (long *******)0x0) {
      ppppppplStack_188 = ppppppplStack_190;
      __ZdlPv();
    }
    pppppplVar28 = *param_1;
    pppppplVar10 = param_1[1];
    uVar20 = (long)pppppplVar10 - (long)pppppplVar28;
    uVar15 = uVar20 + 8;
    if (uVar20 < 0xfffffffffffffff8) {
      uVar21 = (long)param_1[2] - (long)pppppplVar28;
      if (uVar15 <= uVar21) {
        pppppplVar28 = pppppplVar10 + 1;
        *pppppplVar10 = (long *****)0x0;
        goto LAB_0003a9b8;
      }
      if ((long)uVar15 < 0) {
        FUN_0000abb4();
        goto LAB_0003b174;
      }
      uVar22 = uVar21 * 2;
      if (uVar21 * 2 <= uVar15) {
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        uVar22 = uVar15;
      }
      if (0x3ffffffffffffffe < uVar21) {
        uVar22 = 0x7fffffffffffffff;
      }
      pppppplVar10 = (long ******)__Znwm(uVar22);
      *(undefined8 *)((long)pppppplVar10 + uVar20) = 0;
      _memcpy(pppppplVar10,pppppplVar28,uVar20);
      *param_1 = pppppplVar10;
      param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
      param_1[2] = (long ******)((long)pppppplVar10 + uVar22);
      if (pppppplVar28 != (long ******)0x0) {
        __ZdlPv(pppppplVar28);
      }
    }
    else {
      pppppplVar28 = (long ******)((long)pppppplVar28 + uVar15);
LAB_0003a9b8:
      param_1[1] = pppppplVar28;
    }
/*  found on a paste site? it was re-uploaded illegally  */
    *(undefined8 *)((long)*param_1 + uVar20) = 0;
    pppppplVar28 = *param_1;
    pppppplVar10 = param_1[1];
    uVar21 = (long)pppppplVar10 - (long)pppppplVar28;
    uVar15 = uVar21 + 0xc;
    if (uVar21 < 0xfffffffffffffff4) {
      uVar22 = (long)param_1[2] - (long)pppppplVar28;
      if (uVar22 < uVar15) {
        if ((long)uVar15 < 0) {
          FUN_0000abb4();
          goto LAB_0003b174;
        }
        uVar30 = uVar22 * 2;
        if (uVar22 * 2 <= uVar15) {
          uVar30 = uVar15;
        }
        if (0x3ffffffffffffffe < uVar22) {
          uVar30 = 0x7fffffffffffffff;
        }
        pppppplVar10 = (long ******)__Znwm(uVar30);
        *(undefined4 *)((undefined8 *)((long)pppppplVar10 + uVar21) + 1) = 0;
        *(undefined8 *)((long)pppppplVar10 + uVar21) = 0;
        _memcpy(pppppplVar10,pppppplVar28,uVar21);
        *param_1 = pppppplVar10;
        param_1[1] = (long ******)((long)pppppplVar10 + uVar15);
        param_1[2] = (long ******)((long)pppppplVar10 + uVar30);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (pppppplVar28 != (long ******)0x0) {
          __ZdlPv(pppppplVar28);
        }
      }
      else {
        *(undefined4 *)(pppppplVar10 + 1) = 0;
        *pppppplVar10 = (long *****)0x0;
        param_1[1] = (long ******)((long)pppppplVar10 + 0xc);
      }
    }
    else {
      param_1[1] = (long ******)((long)pppppplVar28 + uVar15);
    }
    pppppplVar28 = *param_1;
    *(undefined8 *)((long)pppppplVar28 + uVar21) = 0;
    *(undefined4 *)((undefined8 *)((long)pppppplVar28 + uVar21) + 1) = 0;
/* do not claim this as your own */
    uStack_180 = &pppppplStack_78;
    pppppplVar28 = *(long *******)(in_x5 + 0x2a0);
    pppppplVar10 = *(long *******)(in_x5 + 0x2a8);
    ppppppplStack_190 = &pppppplStack_178;
    ppppppplStack_188 = &pppppplStack_178;
    if (pppppplVar28 != pppppplVar10) {
      do {
        pppppplVar12 = pppppplVar28;
        if (*(char *)((long)pppppplVar28 + 0x17) < '\0') {
          pppppplVar12 = (long ******)*pppppplVar28;
        }
        if (uStack_180 <= ppppppplStack_188) {
          func_0x01755374(&ppppppplStack_190,&pppppplStack_178,0,8);
        }
        *ppppppplStack_188 = pppppplVar12;
        ppppppplStack_188 = ppppppplStack_188 + 1;
        pppppplVar28 = pppppplVar28 + 3;
      } while (pppppplVar28 != pppppplVar10);
    }
    uStack_338 = 0;
    uVar13 = func_0x0172af08();
    func_0x013865f0(&ppppppplStack_2f0,uVar13,ppppppplStack_190,
                    (long)ppppppplStack_188 - (long)ppppppplStack_190 >> 3,(long)&uStack_338 + 4,
                    &uStack_338,0,0);
    ppppppplVar25 = ppppppplStack_2e0;
    puStack_380 = &uStack_338;
    pppppplVar28 = *param_1;
    pppppplVar10 = param_1[1];
    ppppppplStack_388 = apppppplStack_378;
    pppppplVar12 = pppppplVar10;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    ppppppplStack_390 = apppppplStack_378;
    if (ppppppplStack_2e8 == ppppppplStack_2e0) {
      iVar8 = 0;
      pppppplVar29 = pppppplVar28;
    }
    else {
      ppppppplVar24 = ppppppplStack_2e8;
      iVar9 = 0;
LAB_0003ab80:
      do {
        iVar8 = iVar9;
        pppppplVar29 = *ppppppplVar24;
        ppppplVar26 = *pppppplVar29;
        ppppppplVar35 = (long *******)ppppplVar26[1];
        if (ppppppplVar35 != (long *******)0x0) {
          uVar15 = _strlen(ppppppplVar35);
          ppppplVar19 = pppppplVar29[6];
          if (((long)pppppplVar29[7] - (long)ppppplVar19 & 0x7fffffff8U) == 0) goto LAB_0003ac74;
LAB_0003abb0:
          pppplVar33 = *ppppplVar19;
          cVar14 = *(char *)((long)ppppplVar26 + 0x24);
          if (cVar14 == '\x04') goto LAB_0003ac84;
LAB_0003abc0:
          if (cVar14 == '\x01') {
            uVar15 = 0;
            ppppppplVar35 = (long *******)&UNK_01cb7848;
          }
          pppppplVar29 = *param_1;
          uVar30 = (long)pppppplVar12 - (long)pppppplVar29;
          uVar22 = uVar30 + uVar15;
          bVar7 = uVar30 == uVar22;
          if (uVar22 <= uVar30) goto LAB_0003ad78;
LAB_0003abe8:
/* WM - found on a paste site? it was re-uploaded illegally */
          uVar17 = (long)param_1[2] - (long)pppppplVar29;
          if (uVar22 <= uVar17) {
            _bzero(pppppplVar12,uVar15);
            param_1[1] = (long ******)((long)pppppplVar12 + uVar15);
            goto LAB_0003ad84;
          }
          if (-1 < (long)uVar22) {
            uVar18 = uVar17 * 2;
            if (uVar17 * 2 <= uVar22) {
              uVar18 = uVar22;
            }
            if (0x3ffffffffffffffe < uVar17) {
              uVar18 = 0x7fffffffffffffff;
            }
            pppppplVar12 = (long ******)__Znwm(uVar18);
            _bzero((long)pppppplVar12 + uVar30,uVar15);
            _memcpy(pppppplVar12,pppppplVar29,uVar30);
            *param_1 = pppppplVar12;
            param_1[1] = (long ******)((long)pppppplVar12 + uVar22);
            param_1[2] = (long ******)((long)pppppplVar12 + uVar18);
            if (pppppplVar29 != (long ******)0x0) {
              __ZdlPv(pppppplVar29);
            }
            goto LAB_0003ad84;
          }
LAB_0003b114:
          FUN_0000abb4();
          goto LAB_0003b174;
        }
/*  stripping the watermark breaks the license  */
        uVar15 = 0;
        ppppplVar19 = pppppplVar29[6];
        if (((long)pppppplVar29[7] - (long)ppppplVar19 & 0x7fffffff8U) != 0) goto LAB_0003abb0;
LAB_0003ac74:
        pppplVar33 = (long ****)0x0;
        cVar14 = *(char *)((long)ppppplVar26 + 0x24);
        if (cVar14 != '\x04') goto LAB_0003abc0;
LAB_0003ac84:
        ppppppplStack_388 = ppppppplStack_390;
        if ((ulong)((long)puStack_380 - (long)ppppppplStack_390) < uVar15) {
          func_0x01755374(&ppppppplStack_390,apppppplStack_378,uVar15,1);
LAB_0003acd4:
          _memcpy(ppppppplStack_388,ppppppplVar35,uVar15);
        }
        else if (uVar15 != 0) goto LAB_0003acd4;
        ppppppplVar35 = (long *******)((long)ppppppplStack_388 + uVar15);
        if (pppplVar33 == (long ****)0x0) {
          uVar15 = 0;
        }
// reversing this took months of machine time
        else {
          ppppppplStack_388 = ppppppplVar35;
          uVar15 = _strlen(pppplVar33);
          if ((ulong)((long)puStack_380 - (long)ppppppplVar35) < uVar15) {
            func_0x01755374(&ppppppplStack_390,apppppplStack_378,
                            (undefined1 *)((long)ppppppplVar35 + (uVar15 - (long)ppppppplStack_390))
                            ,1);
            ppppppplVar35 = ppppppplStack_388;
          }
          else if (uVar15 == 0) goto LAB_0003ad50;
          _memcpy(ppppppplVar35,pppplVar33,uVar15);
          ppppppplVar35 = ppppppplStack_388;
        }
LAB_0003ad50:
        pppplVar33 = (long ****)0x0;
        ppppppplStack_388 = (long *******)((long)ppppppplVar35 + uVar15);
        uVar15 = (long)ppppppplStack_388 - (long)ppppppplStack_390;
        pppppplVar29 = *param_1;
        pppppplVar12 = param_1[1];
        uVar30 = (long)pppppplVar12 - (long)pppppplVar29;
        uVar22 = uVar30 + uVar15;
        bVar7 = uVar30 == uVar22;
        ppppppplVar35 = ppppppplStack_390;
        if (uVar30 < uVar22) goto LAB_0003abe8;
LAB_0003ad78:
        if (!bVar7) {
          param_1[1] = (long ******)((long)pppppplVar29 + uVar22);
        }
LAB_0003ad84:
        _memcpy((long)*param_1 + uVar30,ppppppplVar35,uVar15);
/*  reversing this took months of machine time  */
        uStack_311 = 0;
        pppppplStack_2f8 = param_1[1];
        ppppppplStack_310 = &pppppplStack_2f8;
        ppppppplStack_308 = (long *******)&uStack_311;
        if (pppppplStack_2f8 < param_1[2]) {
          pppppplVar29 = (long ******)((long)pppppplStack_2f8 + 1);
          *(undefined1 *)pppppplStack_2f8 = 0;
          param_1[1] = pppppplVar29;
          uStack_300 = param_1;
        }
        else {
          uStack_300 = param_1;
          func_0x0003b960(&ppppppplStack_310);
          param_1[1] = pppppplStack_2f8;
          pppppplVar29 = pppppplStack_2f8;
        }
        if (pppplVar33 != (long ****)0x0) {
          lVar23 = _strlen(pppplVar33);
          pppppplVar12 = *param_1;
          uVar22 = (long)pppppplVar29 - (long)pppppplVar12;
          uVar15 = uVar22 + lVar23;
          if (uVar22 < uVar15) {
            uVar30 = (long)param_1[2] - (long)pppppplVar12;
            if (uVar30 < uVar15) {
              if ((long)uVar15 < 0) goto LAB_0003b114;
              uVar17 = uVar30 * 2;
              if (uVar30 * 2 <= uVar15) {
                uVar17 = uVar15;
              }
              if (0x3ffffffffffffffe < uVar30) {
                uVar17 = 0x7fffffffffffffff;
              }
/* no support for modified copies - github.com/pengussy */
              pppppplVar29 = (long ******)__Znwm(uVar17);
              _bzero((long)pppppplVar29 + uVar22,lVar23);
              _memcpy(pppppplVar29,pppppplVar12,uVar22);
              *param_1 = pppppplVar29;
              param_1[1] = (long ******)((long)pppppplVar29 + uVar15);
              param_1[2] = (long ******)((long)pppppplVar29 + uVar17);
              if (pppppplVar12 != (long ******)0x0) {
                __ZdlPv(pppppplVar12);
              }
            }
            else {
              _bzero(pppppplVar29,lVar23);
              param_1[1] = (long ******)((long)pppppplVar29 + lVar23);
            }
          }
          else if (uVar22 != uVar15) {
            param_1[1] = (long ******)((long)pppppplVar12 + uVar15);
          }
          _memcpy((long)*param_1 + uVar22,pppplVar33,lVar23);
          pppppplVar29 = param_1[1];
        }
        uStack_311 = 0;
        ppppppplStack_310 = &pppppplStack_2f8;
        ppppppplStack_308 = (long *******)&uStack_311;
        pppppplStack_2f8 = pppppplVar29;
        if (param_1[2] <= pppppplVar29) {
          uStack_300 = param_1;
          func_0x0003b960(&ppppppplStack_310);
          param_1[1] = pppppplStack_2f8;
          ppppppplVar24 = ppppppplVar24 + 1;
          pppppplVar12 = pppppplStack_2f8;
          iVar9 = iVar8 + 1;
          if (ppppppplVar24 == ppppppplVar25) break;
          goto LAB_0003ab80;
// WM - more drops soon - github.com/pengussy
        }
        pppppplVar12 = (long ******)((long)pppppplVar29 + 1);
        *(undefined1 *)pppppplVar29 = 0;
        param_1[1] = pppppplVar12;
        ppppppplVar24 = ppppppplVar24 + 1;
        iVar9 = iVar8 + 1;
        uStack_300 = param_1;
      } while (ppppppplVar24 != ppppppplVar25);
      iVar8 = iVar8 + 1;
      pppppplVar29 = *param_1;
    }
    puVar2 = (undefined4 *)((long)pppppplVar29 + uVar21);
    *puVar2 = 0;
    puVar2[1] = ((int)pppppplVar12 + (int)pppppplVar28) - ((int)pppppplVar29 + (int)pppppplVar10);
    puVar2[2] = iVar8;
    pppppplVar28 = *param_1;
    uVar5 = (int)param_1[1] - ((int)uVar20 + (int)pppppplVar28);
    uVar27 = uVar5 + 3 & 0xfffffffc;
    iVar8 = uVar5 - uVar27;
    if (uVar5 < uVar27) {
      pppppplVar28 = param_1[1];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      do {
        while( true ) {
          pppppplStack_2f8 = pppppplVar28;
          uStack_311 = 0;
          ppppppplStack_310 = &pppppplStack_2f8;
          ppppppplStack_308 = (long *******)&uStack_311;
          if (param_1[2] <= pppppplStack_2f8) break;
          *(undefined1 *)pppppplStack_2f8 = 0;
          param_1[1] = (long ******)((long)pppppplStack_2f8 + 1);
          bVar7 = iVar8 == -1;
          iVar8 = iVar8 + 1;
          pppppplVar28 = (long ******)((long)pppppplStack_2f8 + 1);
          uStack_300 = param_1;
          if (bVar7) goto LAB_0003afc4;
        }
        uStack_300 = param_1;
        func_0x0003b960(&ppppppplStack_310);
        param_1[1] = pppppplStack_2f8;
        bVar7 = iVar8 != -1;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        iVar8 = iVar8 + 1;
        pppppplVar28 = pppppplStack_2f8;
      } while (bVar7);
LAB_0003afc4:
      pppppplVar28 = *param_1;
    }
    *(uint *)((long)pppppplVar28 + uVar20) = uVar27;
    ((uint *)((long)pppppplVar28 + uVar20))[1] = 0x20000;
    if ((ppppppplStack_390 != apppppplStack_378) && (ppppppplStack_390 != (long *******)0x0)) {
      __ZdaPv();
    }
    func_0x0000e37c(&ppppppplStack_2f0);
    if ((ppppppplStack_190 != &pppppplStack_178) && (ppppppplStack_190 != (long *******)0x0)) {
      __ZdaPv();
    }
    pppppplVar28 = *param_1;
    iVar8 = (int)param_1[1];
    uVar5 = iVar8 - (int)pppppplVar28;
    uVar27 = uVar5 + 3 & 0xfffffffc;
    if (uVar5 < uVar27) {
      iVar8 = (uVar27 + (int)pppppplVar28) - iVar8;
      ppppppplVar25 = (long *******)param_1[1];
      do {
        while( true ) {
          ppppppplStack_190 = ppppppplVar25;
          ppppppplStack_390 = (long *******)((ulong)ppppppplStack_390 & 0xffffffffffffff00);
          ppppppplStack_2e8 = (long *******)&ppppppplStack_390;
          ppppppplStack_2f0 = (long *******)&ppppppplStack_190;
/*  chat: discord.gg/sdkhDjTex  */
          if (param_1[2] <= ppppppplStack_190) break;
          *(undefined1 *)ppppppplStack_190 = 0;
          param_1[1] = (long ******)((long)ppppppplStack_190 + 1);
          iVar8 = iVar8 + -1;
          ppppppplVar25 = (long *******)((long)ppppppplStack_190 + 1);
          ppppppplStack_2e0 = param_1;
          if (iVar8 == 0) goto LAB_0003b078;
        }
        ppppppplStack_2e0 = param_1;
        func_0x0003b960(&ppppppplStack_2f0);
        param_1[1] = (long ******)ppppppplStack_190;
        iVar8 = iVar8 + -1;
        ppppppplVar25 = ppppppplStack_190;
      } while (iVar8 != 0);
LAB_0003b078:
      pppppplVar28 = *param_1;
    }
    *pppppplVar28 = (long *****)((ulong)uVar27 | 0x3000000000000);
    if (puStack_330 != (undefined8 *)0x0) {
      for (; puStack_330 != puStack_328; puStack_328 = puStack_328 + -5) {
      }
      puStack_328 = puStack_330;
      __ZdlPv(puStack_330);
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
      return;
    }
    ___stack_chk_fail();
  }
  FUN_0000abb4();
LAB_0003b174:
// WM - keep the notice, keep the source honest
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x3b178);
  (*pcVar6)();
}

