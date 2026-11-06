/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1a578:6f279fcb6a
 */

/* WARNING: Removing unreachable block (ram,0x0001b834) */
/* WARNING: Removing unreachable block (ram,0x0001b614) */
/* WARNING: Removing unreachable block (ram,0x0001a738) */
/* WARNING: Removing unreachable block (ram,0x0001b830) */
/* WARNING: Removing unreachable block (ram,0x0001b848) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_0001a578(long param_1,undefined8 *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  char *****pppppcVar7;
  char *******pppppppcVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  char ******ppppppcVar14;
// WM - if you paid for this, you were scammed
  char ******ppppppcVar15;
  char *pcVar16;
  char *******pppppppcVar17;
  byte bVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  ulong uVar22;
  char ******ppppppcVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  long lVar26;
  undefined8 uVar27;
  char *******pppppppcStack_120;
  char ******ppppppcStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined1 uStack_f9;
  char acStack_f8 [8];
  undefined2 uStack_f0;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  undefined1 uStack_d8;
  undefined1 uStack_c9;
  char *******pppppppcStack_c8;
  char *******pppppppcStack_c0;
  char *******pppppppcStack_b8;
  char *******pppppppcStack_b0;
  char ******ppppppcStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_91;
  char ******ppppppcStack_90;
  char *****pppppcStack_88;
  undefined8 uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
/* wm:reversing this took months of machine time */
  pppppppcStack_c8 = (char *******)0x0;
  pppppppcStack_c0 = (char *******)0x0;
  pppppppcStack_b8 = (char *******)0x0;
  uStack_c9 = 8;
  uStack_e0 = 0x5f454c42414e455f;
  uStack_d8 = 0;
  uStack_e1 = 9;
  acStack_f8 = (char  [8])s__DISABLE__01c216ff._0_8_;
  uStack_f0 = 0x5f;
  uStack_f9 = 8;
  uStack_110 = 0x5f5443454c45535f;
  uStack_108 = 0;
  lVar26 = *(long *)(param_1 + 0x10);
  plVar10 = (long *)*param_3;
  plVar2 = (long *)param_3[1];
  if (plVar10 != plVar2) {
    lVar11 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    do {
      cVar3 = *(char *)((long)plVar10 + 0x17);
      plVar13 = (long *)*plVar10;
      if (-1 < (long)cVar3) {
        plVar13 = plVar10;
      }
      lVar19 = plVar10[1];
      if (-1 < cVar3) {
        lVar19 = (long)cVar3;
      }
      pppppcVar7 = (char *****)func_0x016f6638(*param_2,plVar13,lVar19);
      plVar20 = plVar10 + 3;
      cVar3 = *(char *)((long)plVar10 + 0x2f);
      plVar13 = (long *)*plVar20;
      if (-1 < (long)cVar3) {
        plVar13 = plVar20;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
      lVar19 = plVar10[4];
      if (-1 < cVar3) {
        lVar19 = (long)cVar3;
      }
      uStack_80 = func_0x016f6638(*param_2,plVar13,lVar19);
      pppppcStack_88 = pppppcVar7;
      ppppppcStack_90 = (char ******)func_0x016fcc08(*param_2,&pppppcStack_88,2,0,1);
      pppppppcStack_120 = pppppppcStack_c0;
      pppppppcStack_b0 = (char *******)&pppppppcStack_120;
      ppppppcStack_a8 = (char ******)&ppppppcStack_90;
      uStack_a0 = (char *******)&pppppppcStack_c8;
      if (pppppppcStack_c0 < pppppppcStack_b8) {
        pppppppcVar8 = pppppppcStack_c0 + 1;
        *pppppppcStack_c0 = ppppppcStack_90;
        puVar12 = *(undefined8 **)(lVar26 + 8);
        puVar21 = *(undefined8 **)(lVar26 + 0x10);
        pppppppcStack_c0 = pppppppcVar8;
        if (puVar12 != puVar21) goto LAB_0001a6fc;
LAB_0001a7cc:
        puVar24 = (undefined1 *)0x0;
      }
      else {
        func_0x0000aad8(&pppppppcStack_b0);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        pppppppcStack_c0 = pppppppcStack_120;
        puVar12 = *(undefined8 **)(lVar26 + 8);
        puVar21 = *(undefined8 **)(lVar26 + 0x10);
        if (puVar12 == puVar21) goto LAB_0001a7cc;
LAB_0001a6fc:
        puVar25 = (undefined1 *)0x0;
        do {
          ppppppcStack_a8 = (char ******)puVar12[1];
          pppppppcStack_b0 = (char *******)*puVar12;
          uStack_a0 = (char *******)puVar12[2];
          cVar3 = *(char *)((long)plVar10 + 0x17);
          plVar13 = (long *)*plVar10;
          if (-1 < (long)cVar3) {
            plVar13 = plVar10;
          }
          lVar19 = plVar10[1];
          if (-1 < cVar3) {
            lVar19 = (long)cVar3;
          }
          ppppppcVar23 = ppppppcStack_a8;
          pppppppcVar8 = pppppppcStack_b0;
          if (-1 < (long)uStack_a0) {
            ppppppcVar23 = (char ******)((ulong)uStack_a0 >> 0x38);
            pppppppcVar8 = (char *******)&pppppppcStack_b0;
          }
          uVar5 = func_0x01730d10(pppppppcVar8,ppppppcVar23,plVar13,lVar19);
          ppppppcVar23 = ppppppcStack_a8;
          if (-1 < (long)uStack_a0) {
            ppppppcVar23 = (char ******)(long)(char)uStack_a0._7_1_;
          }
          puVar24 = (undefined1 *)((long)ppppppcVar23 - 1);
          if (uVar5 == 0) {
            puVar24 = puVar25;
          }
          if ((long)(char)uStack_a0._7_1_ < 0) {
            __ZdlPv(pppppppcStack_b0);
          }
          if (puVar12 + 3 == puVar21) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
            uVar5 = 1;
          }
          puVar25 = puVar24;
          puVar12 = puVar12 + 3;
        } while ((uVar5 & 1) == 0);
      }
      cVar3 = *(char *)((long)plVar10 + 0x17);
      puVar25 = (undefined1 *)(long)cVar3;
      if ((long)puVar25 < 0) {
        uVar22 = plVar10[1] - (long)puVar24;
        if (puVar24 <= (undefined1 *)plVar10[1]) {
          if (7 < uVar22) {
            uVar22 = 8;
          }
          plVar13 = (long *)*plVar10;
          goto LAB_0001a810;
        }
LAB_0001b6fc:
        func_0x0001c430();
LAB_0001b730:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1b734);
        (*pcVar4)();
      }
      uVar22 = (long)puVar25 - (long)puVar24;
      if (puVar25 < puVar24) goto LAB_0001b6fc;
      if (7 < uVar22) {
        uVar22 = 8;
      }
      plVar13 = plVar10;
LAB_0001a810:
      iVar6 = _memcmp((undefined1 *)((long)plVar13 + (long)puVar24),&uStack_e0,uVar22);
      if (iVar6 != 0 || uVar22 != 8) {
        if (cVar3 < '\0') {
          uVar22 = plVar10[1] - (long)puVar24;
          if (puVar24 <= (undefined1 *)plVar10[1]) {
            if (8 < uVar22) {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
              uVar22 = 9;
            }
            iVar6 = _memcmp(puVar24 + *plVar10,acStack_f8,uVar22);
            goto joined_r0x0001a8b4;
          }
        }
        else {
          uVar22 = (long)puVar25 - (long)puVar24;
          if (puVar24 <= puVar25) {
            if (8 < uVar22) {
              uVar22 = 9;
            }
            iVar6 = _memcmp((undefined1 *)((long)plVar10 + (long)puVar24),acStack_f8,uVar22);
joined_r0x0001a8b4:
            if ((iVar6 == 0) && (uVar22 == 9)) {
              puVar24 = puVar24 + 9;
              if (cVar3 < '\0') {
                if ((undefined1 *)plVar10[1] < puVar24) goto LAB_0001b714;
                ppppppcVar23 = (char ******)((undefined1 *)plVar10[1] + -(long)puVar24);
                plVar13 = (long *)*plVar10;
              }
              else {
                if (puVar25 < puVar24) {
LAB_0001b714:
                  func_0x0001c430();
                  goto LAB_0001b730;
                }
                ppppppcVar23 = (char ******)(puVar25 + -(long)puVar24);
                plVar13 = plVar10;
              }
              if ((char ******)0x7ffffffffffffff6 < ppppppcVar23) {
                func_0x0000aa50();
                goto LAB_0001b730;
              }
/* if you paid for this, you were scammed */
              if ((char ******)((long)&MACH_HEADER.sizeofcmds + 2) < ppppppcVar23) {
                uVar22 = ((ulong)ppppppcVar23 & 0x7ffffffffffffff8) + 8;
                uVar1 = 0x19;
                if (uVar22 != 0x18) {
                  uVar1 = uVar22;
                }
                pppppppcVar8 = (char *******)__Znwm(uVar1);
                uStack_a0 = (char *******)(uVar1 | 0x8000000000000000);
                pppppppcStack_b0 = pppppppcVar8;
                ppppppcStack_a8 = ppppppcVar23;
              }
              else {
                uStack_a0 = (char *******)CONCAT17((char)ppppppcVar23,(undefined7)uStack_a0);
                pppppppcVar8 = (char *******)&pppppppcStack_b0;
              }
              _memmove(pppppppcVar8,(undefined1 *)((long)plVar13 + (long)puVar24),ppppppcVar23);
              *(char *)((long)pppppppcVar8 + (long)ppppppcVar23) = '\0';
              ppppppcVar14 = (char ******)(ulong)uStack_a0._7_1_;
              ppppppcVar23 = ppppppcStack_a8;
              pppppppcVar8 = pppppppcStack_b0;
              if (-1 < (long)uStack_a0) {
                ppppppcVar23 = ppppppcVar14;
                pppppppcVar8 = (char *******)&pppppppcStack_b0;
              }
              if (ppppppcVar23 == (char ******)0x0) {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                bVar18 = uStack_a0._7_1_;
              }
              else {
                pppppppcVar17 = pppppppcVar8;
                if (ppppppcVar23 < &MACH_HEADER.cpusubtype) {
LAB_0001b394:
                  do {
                    if (*(char *)pppppppcVar17 == '_') {
                      *(char *)pppppppcVar17 = '-';
                    }
                    pppppppcVar17 = (char *******)((long)pppppppcVar17 + 1);
                  } while (pppppppcVar17 != (char *******)((long)pppppppcVar8 + (long)ppppppcVar23))
                  ;
                }
                else if ((char ******)((long)&MACH_HEADER.filetype + 3) < ppppppcVar23) {
                  ppppppcVar15 = (char ******)((ulong)ppppppcVar23 & 0xfffffffffffffff0);
                  pcVar16 = (char *)((long)pppppppcVar8 + 7);
                  ppppppcVar14 = ppppppcVar15;
                  do {
                    uVar27 = *(undefined8 *)(pcVar16 + 1);
                    uVar9 = *(undefined8 *)(pcVar16 + -7);
                    if (((uint)uVar9 & 0xff) == 0x5f) {
                      pcVar16[-7] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 8) == '_') {
                      pcVar16[-6] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x10) == '_') {
                      pcVar16[-5] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x18) == '_') {
                      pcVar16[-4] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x20) == '_') {
                      pcVar16[-3] = '-';
                    }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    if ((char)((ulong)uVar9 >> 0x28) == '_') {
                      pcVar16[-2] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x30) == '_') {
                      pcVar16[-1] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x38) == '_') {
                      *pcVar16 = '-';
                    }
                    if (((uint)uVar27 & 0xff) == 0x5f) {
                      pcVar16[1] = '-';
                    }
                    if ((char)((ulong)uVar27 >> 8) == '_') {
                      pcVar16[2] = '-';
                    }
                    if ((char)((ulong)uVar27 >> 0x10) == '_') {
                      pcVar16[3] = '-';
                    }
                    if ((char)((ulong)uVar27 >> 0x18) == '_') {
                      pcVar16[4] = '-';
                    }
                    if ((char)((ulong)uVar27 >> 0x20) == '_') {
                      pcVar16[5] = '-';
                    }
/* keep the notice, keep the source honest - github.com/pengussy */
                    if ((char)((ulong)uVar27 >> 0x28) == '_') {
                      pcVar16[6] = '-';
                    }
                    if ((char)((ulong)uVar27 >> 0x30) == '_') {
                      pcVar16[7] = '-';
                    }
                    if ((char)((ulong)uVar27 >> 0x38) == '_') {
                      pcVar16[8] = '-';
                    }
                    pcVar16 = pcVar16 + 0x10;
                    ppppppcVar14 = ppppppcVar14 + -2;
                  } while (ppppppcVar14 != (char ******)0x0);
                  if (ppppppcVar23 != ppppppcVar15) {
                    if (((uint)ppppppcVar23 >> 3 & 1) == 0) {
                      pppppppcVar17 = (char *******)((long)pppppppcVar8 + (long)ppppppcVar15);
                      goto LAB_0001b394;
                    }
                    goto LAB_0001abf8;
                  }
                }
                else {
                  ppppppcVar15 = (char ******)0x0;
LAB_0001abf8:
                  ppppppcVar14 = (char ******)((ulong)ppppppcVar23 & 0xfffffffffffffff8);
                  pppppppcVar17 = (char *******)((long)pppppppcVar8 + (long)ppppppcVar14);
                  lVar19 = (long)ppppppcVar15 - (long)ppppppcVar14;
                  pcVar16 = (char *)((long)pppppppcVar8 + (long)ppppppcVar15) + 3;
// WM - thanks for reading - discord.gg/sdkhDjTex
                  do {
                    uVar9 = *(undefined8 *)(pcVar16 + -3);
                    if ((char)uVar9 == '_') {
                      pcVar16[-3] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 8) == '_') {
                      pcVar16[-2] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x10) == '_') {
                      pcVar16[-1] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x18) == '_') {
                      *pcVar16 = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x20) == '_') {
                      pcVar16[1] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x28) == '_') {
                      pcVar16[2] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x30) == '_') {
                      pcVar16[3] = '-';
                    }
                    if ((char)((ulong)uVar9 >> 0x38) == '_') {
                      pcVar16[4] = '-';
                    }
                    pcVar16 = pcVar16 + 8;
                    lVar19 = lVar19 + 8;
                  } while (lVar19 != 0);
                  if (ppppppcVar23 != ppppppcVar14) goto LAB_0001b394;
                }
                ppppppcVar14 = (char ******)((ulong)uStack_a0 >> 0x38);
                bVar18 = (byte)((ulong)uStack_a0 >> 0x38);
              }
              ppppppcStack_118 = ppppppcStack_a8;
              pppppppcStack_120 = pppppppcStack_b0;
/* wm:stripping the watermark breaks the license */
              if (-1 < (char)bVar18) {
                ppppppcStack_118 = ppppppcVar14;
                pppppppcStack_120 = (char *******)&pppppppcStack_b0;
              }
              func_0x0175e1a8(&pppppcStack_88,&pppppppcStack_120);
              ppppppcStack_90 = &pppppcStack_88;
              lVar19 = func_0x0001c4b8(lVar11 + 0x350,lVar11 + 0x350,&UNK_01bd2568,&ppppppcStack_90,
                                       &uStack_91);
              *(undefined1 *)(lVar19 + 0x38) = 0;
              goto LAB_0001b600;
            }
            if (cVar3 < '\0') {
              uVar22 = plVar10[1] - (long)puVar24;
              if (puVar24 <= (undefined1 *)plVar10[1]) {
                if (7 < uVar22) {
                  uVar22 = 8;
                }
                iVar6 = _memcmp(puVar24 + *plVar10,&uStack_110,uVar22);
                goto joined_r0x0001ab10;
              }
              goto LAB_0001b6fc;
            }
            uVar22 = (long)puVar25 - (long)puVar24;
            if (puVar25 < puVar24) goto LAB_0001b6fc;
            if (7 < uVar22) {
              uVar22 = 8;
            }
            iVar6 = _memcmp((undefined1 *)((long)plVar10 + (long)puVar24),&uStack_110,uVar22);
joined_r0x0001ab10:
            if ((iVar6 == 0) && (uVar22 == 8)) {
              puVar24 = puVar24 + 8;
              if (cVar3 < '\0') {
                if (puVar24 <= (undefined1 *)plVar10[1]) {
                  ppppppcVar23 = (char ******)((undefined1 *)plVar10[1] + -(long)puVar24);
                  plVar13 = (long *)*plVar10;
                  goto joined_r0x0001af74;
// watermarked copy - do not remove
                }
              }
              else if (puVar24 <= puVar25) {
                ppppppcVar23 = (char ******)(puVar25 + -(long)puVar24);
                plVar13 = plVar10;
joined_r0x0001af74:
                if ((char ******)0x7ffffffffffffff6 < ppppppcVar23) {
                  func_0x0000aa50();
                  goto LAB_0001b730;
                }
                if ((char ******)((long)&MACH_HEADER.sizeofcmds + 2) < ppppppcVar23) {
                  uVar22 = ((ulong)ppppppcVar23 & 0x7ffffffffffffff8) + 8;
                  uVar1 = 0x19;
                  if (uVar22 != 0x18) {
                    uVar1 = uVar22;
                  }
                  pppppppcVar8 = (char *******)__Znwm(uVar1);
                  uStack_a0 = (char *******)(uVar1 | 0x8000000000000000);
                  pppppppcStack_b0 = pppppppcVar8;
                  ppppppcStack_a8 = ppppppcVar23;
/* WM - found on a paste site? it was re-uploaded illegally */
                }
                else {
                  uStack_a0 = (char *******)CONCAT17((char)ppppppcVar23,(undefined7)uStack_a0);
                  pppppppcVar8 = (char *******)&pppppppcStack_b0;
                }
                _memmove(pppppppcVar8,(undefined1 *)((long)plVar13 + (long)puVar24),ppppppcVar23);
                *(char *)((long)pppppppcVar8 + (long)ppppppcVar23) = '\0';
                ppppppcVar14 = (char ******)(ulong)uStack_a0._7_1_;
                ppppppcVar23 = ppppppcStack_a8;
                pppppppcVar8 = pppppppcStack_b0;
                if (-1 < (long)uStack_a0) {
                  ppppppcVar23 = ppppppcVar14;
                  pppppppcVar8 = (char *******)&pppppppcStack_b0;
                }
                if (ppppppcVar23 == (char ******)0x0) {
                  bVar18 = uStack_a0._7_1_;
                }
                else {
                  pppppppcVar17 = pppppppcVar8;
                  if (ppppppcVar23 < &MACH_HEADER.cpusubtype) {
LAB_0001b638:
                    do {
                      if (*(char *)pppppppcVar17 == '_') {
                        *(char *)pppppppcVar17 = '-';
                      }
                      pppppppcVar17 = (char *******)((long)pppppppcVar17 + 1);
                    } while (pppppppcVar17 !=
                             (char *******)((long)pppppppcVar8 + (long)ppppppcVar23));
                  }
                  else if ((char ******)((long)&MACH_HEADER.filetype + 3) < ppppppcVar23) {
                    ppppppcVar15 = (char ******)((ulong)ppppppcVar23 & 0xfffffffffffffff0);
                    pcVar16 = (char *)((long)pppppppcVar8 + 7);
                    ppppppcVar14 = ppppppcVar15;
                    do {
/* WM - no support for modified copies */
                      uVar27 = *(undefined8 *)(pcVar16 + 1);
                      uVar9 = *(undefined8 *)(pcVar16 + -7);
                      if (((uint)uVar9 & 0xff) == 0x5f) {
                        pcVar16[-7] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 8) == '_') {
                        pcVar16[-6] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x10) == '_') {
                        pcVar16[-5] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x18) == '_') {
                        pcVar16[-4] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x20) == '_') {
                        pcVar16[-3] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x28) == '_') {
                        pcVar16[-2] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x30) == '_') {
                        pcVar16[-1] = '-';
                      }
/* wm:if you paid for this, you were scammed */
                      if ((char)((ulong)uVar9 >> 0x38) == '_') {
                        *pcVar16 = '-';
                      }
                      if (((uint)uVar27 & 0xff) == 0x5f) {
                        pcVar16[1] = '-';
                      }
                      if ((char)((ulong)uVar27 >> 8) == '_') {
                        pcVar16[2] = '-';
                      }
                      if ((char)((ulong)uVar27 >> 0x10) == '_') {
                        pcVar16[3] = '-';
                      }
                      if ((char)((ulong)uVar27 >> 0x18) == '_') {
                        pcVar16[4] = '-';
                      }
                      if ((char)((ulong)uVar27 >> 0x20) == '_') {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                        pcVar16[5] = '-';
                      }
                      if ((char)((ulong)uVar27 >> 0x28) == '_') {
                        pcVar16[6] = '-';
                      }
                      if ((char)((ulong)uVar27 >> 0x30) == '_') {
                        pcVar16[7] = '-';
                      }
                      if ((char)((ulong)uVar27 >> 0x38) == '_') {
                        pcVar16[8] = '-';
                      }
                      pcVar16 = pcVar16 + 0x10;
                      ppppppcVar14 = ppppppcVar14 + -2;
                    } while (ppppppcVar14 != (char ******)0x0);
                    if (ppppppcVar23 != ppppppcVar15) {
                      if (((uint)ppppppcVar23 >> 3 & 1) == 0) {
                        pppppppcVar17 = (char *******)((long)pppppppcVar8 + (long)ppppppcVar15);
                        goto LAB_0001b638;
                      }
                      goto LAB_0001b004;
                    }
                  }
                  else {
                    ppppppcVar15 = (char ******)0x0;
LAB_0001b004:
                    ppppppcVar14 = (char ******)((ulong)ppppppcVar23 & 0xfffffffffffffff8);
                    pppppppcVar17 = (char *******)((long)pppppppcVar8 + (long)ppppppcVar14);
                    lVar19 = (long)ppppppcVar15 - (long)ppppppcVar14;
                    pcVar16 = (char *)((long)pppppppcVar8 + (long)ppppppcVar15) + 3;
                    do {
// thanks for reading - discord.gg/sdkhDjTex
                      uVar9 = *(undefined8 *)(pcVar16 + -3);
                      if ((char)uVar9 == '_') {
                        pcVar16[-3] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 8) == '_') {
                        pcVar16[-2] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x10) == '_') {
                        pcVar16[-1] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x18) == '_') {
                        *pcVar16 = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x20) == '_') {
                        pcVar16[1] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x28) == '_') {
                        pcVar16[2] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x30) == '_') {
                        pcVar16[3] = '-';
                      }
                      if ((char)((ulong)uVar9 >> 0x38) == '_') {
                        pcVar16[4] = '-';
                      }
                      pcVar16 = pcVar16 + 8;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                      lVar19 = lVar19 + 8;
                    } while (lVar19 != 0);
                    if (ppppppcVar23 != ppppppcVar14) goto LAB_0001b638;
                  }
                  ppppppcVar14 = (char ******)((ulong)uStack_a0 >> 0x38);
                  bVar18 = (byte)((ulong)uStack_a0 >> 0x38);
                }
                ppppppcStack_118 = ppppppcStack_a8;
                pppppppcStack_120 = pppppppcStack_b0;
                if (-1 < (char)bVar18) {
                  ppppppcStack_118 = ppppppcVar14;
                  pppppppcStack_120 = (char *******)&pppppppcStack_b0;
                }
                func_0x0175e1a8(&pppppcStack_88,&pppppppcStack_120);
                ppppppcStack_90 = &pppppcStack_88;
                lVar19 = func_0x0001c7b4(lVar11 + 0x368,lVar11 + 0x368,&UNK_01bd2568,
                                         &ppppppcStack_90,&uStack_91);
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                          (lVar19 + 0x38,plVar20);
                goto LAB_0001b600;
              }
              func_0x0001c430();
              goto LAB_0001b730;
            }
            goto LAB_0001a640;
          }
        }
        goto LAB_0001b6fc;
      }
      puVar24 = puVar24 + 8;
      if (cVar3 < '\0') {
        if ((undefined1 *)plVar10[1] < puVar24) goto LAB_0001b704;
        ppppppcVar23 = (char ******)((undefined1 *)plVar10[1] + -(long)puVar24);
        plVar13 = (long *)*plVar10;
      }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      else {
        if (puVar25 < puVar24) {
LAB_0001b704:
          func_0x0001c430();
          goto LAB_0001b730;
        }
        ppppppcVar23 = (char ******)(puVar25 + -(long)puVar24);
        plVar13 = plVar10;
      }
      if ((char ******)0x7ffffffffffffff6 < ppppppcVar23) {
        func_0x0000aa50();
        goto LAB_0001b730;
      }
      if ((char ******)((long)&MACH_HEADER.sizeofcmds + 2) < ppppppcVar23) {
        uVar22 = ((ulong)ppppppcVar23 & 0x7ffffffffffffff8) + 8;
        uVar1 = 0x19;
        if (uVar22 != 0x18) {
          uVar1 = uVar22;
        }
        pppppppcVar8 = (char *******)__Znwm(uVar1);
        uStack_a0 = (char *******)(uVar1 | 0x8000000000000000);
        pppppppcStack_b0 = pppppppcVar8;
        ppppppcStack_a8 = ppppppcVar23;
      }
      else {
// chat: discord.gg/sdkhDjTex
        uStack_a0 = (char *******)CONCAT17((char)ppppppcVar23,(undefined7)uStack_a0);
        pppppppcVar8 = (char *******)&pppppppcStack_b0;
      }
      _memmove(pppppppcVar8,(undefined1 *)((long)plVar13 + (long)puVar24),ppppppcVar23);
      *(char *)((long)pppppppcVar8 + (long)ppppppcVar23) = '\0';
      ppppppcVar14 = (char ******)(ulong)uStack_a0._7_1_;
      ppppppcVar23 = ppppppcStack_a8;
      pppppppcVar8 = pppppppcStack_b0;
      if (-1 < (long)uStack_a0) {
        ppppppcVar23 = ppppppcVar14;
        pppppppcVar8 = (char *******)&pppppppcStack_b0;
      }
      if (ppppppcVar23 == (char ******)0x0) {
        bVar18 = uStack_a0._7_1_;
      }
      else {
        pppppppcVar17 = pppppppcVar8;
        if (ppppppcVar23 < &MACH_HEADER.cpusubtype) {
LAB_0001b118:
          do {
            if (*(char *)pppppppcVar17 == '_') {
              *(char *)pppppppcVar17 = '-';
            }
            pppppppcVar17 = (char *******)((long)pppppppcVar17 + 1);
          } while (pppppppcVar17 != (char *******)((long)pppppppcVar8 + (long)ppppppcVar23));
        }
        else if ((char ******)((long)&MACH_HEADER.filetype + 3) < ppppppcVar23) {
          ppppppcVar15 = (char ******)((ulong)ppppppcVar23 & 0xfffffffffffffff0);
          pcVar16 = (char *)((long)pppppppcVar8 + 7);
          ppppppcVar14 = ppppppcVar15;
          do {
            uVar27 = *(undefined8 *)(pcVar16 + 1);
            uVar9 = *(undefined8 *)(pcVar16 + -7);
            if (((uint)uVar9 & 0xff) == 0x5f) {
              pcVar16[-7] = '-';
// WM - chat: discord.gg/sdkhDjTex
            }
            if ((char)((ulong)uVar9 >> 8) == '_') {
              pcVar16[-6] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x10) == '_') {
              pcVar16[-5] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x18) == '_') {
              pcVar16[-4] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x20) == '_') {
              pcVar16[-3] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x28) == '_') {
              pcVar16[-2] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x30) == '_') {
              pcVar16[-1] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x38) == '_') {
              *pcVar16 = '-';
            }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            if (((uint)uVar27 & 0xff) == 0x5f) {
              pcVar16[1] = '-';
            }
            if ((char)((ulong)uVar27 >> 8) == '_') {
              pcVar16[2] = '-';
            }
            if ((char)((ulong)uVar27 >> 0x10) == '_') {
              pcVar16[3] = '-';
            }
            if ((char)((ulong)uVar27 >> 0x18) == '_') {
              pcVar16[4] = '-';
            }
            if ((char)((ulong)uVar27 >> 0x20) == '_') {
              pcVar16[5] = '-';
            }
            if ((char)((ulong)uVar27 >> 0x28) == '_') {
              pcVar16[6] = '-';
            }
            if ((char)((ulong)uVar27 >> 0x30) == '_') {
              pcVar16[7] = '-';
            }
            if ((char)((ulong)uVar27 >> 0x38) == '_') {
              pcVar16[8] = '-';
/* wm:watermarked copy - do not remove */
            }
            pcVar16 = pcVar16 + 0x10;
            ppppppcVar14 = ppppppcVar14 + -2;
          } while (ppppppcVar14 != (char ******)0x0);
          if (ppppppcVar23 != ppppppcVar15) {
            if (((uint)ppppppcVar23 >> 3 & 1) == 0) {
              pppppppcVar17 = (char *******)((long)pppppppcVar8 + (long)ppppppcVar15);
              goto LAB_0001b118;
            }
            goto LAB_0001a9cc;
          }
        }
        else {
          ppppppcVar15 = (char ******)0x0;
LAB_0001a9cc:
          ppppppcVar14 = (char ******)((ulong)ppppppcVar23 & 0xfffffffffffffff8);
          pppppppcVar17 = (char *******)((long)pppppppcVar8 + (long)ppppppcVar14);
          lVar19 = (long)ppppppcVar15 - (long)ppppppcVar14;
/* found on a paste site? it was re-uploaded illegally */
          pcVar16 = (char *)((long)pppppppcVar8 + (long)ppppppcVar15) + 3;
          do {
            uVar9 = *(undefined8 *)(pcVar16 + -3);
            if ((char)uVar9 == '_') {
              pcVar16[-3] = '-';
            }
            if ((char)((ulong)uVar9 >> 8) == '_') {
              pcVar16[-2] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x10) == '_') {
              pcVar16[-1] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x18) == '_') {
              *pcVar16 = '-';
            }
            if ((char)((ulong)uVar9 >> 0x20) == '_') {
              pcVar16[1] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x28) == '_') {
              pcVar16[2] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x30) == '_') {
/*  origin: github.com/pengussy  */
              pcVar16[3] = '-';
            }
            if ((char)((ulong)uVar9 >> 0x38) == '_') {
              pcVar16[4] = '-';
            }
            pcVar16 = pcVar16 + 8;
            lVar19 = lVar19 + 8;
          } while (lVar19 != 0);
          if (ppppppcVar23 != ppppppcVar14) goto LAB_0001b118;
        }
        ppppppcVar14 = (char ******)((ulong)uStack_a0 >> 0x38);
        bVar18 = (byte)((ulong)uStack_a0 >> 0x38);
      }
      ppppppcStack_118 = ppppppcStack_a8;
      pppppppcStack_120 = pppppppcStack_b0;
      if (-1 < (char)bVar18) {
        ppppppcStack_118 = ppppppcVar14;
        pppppppcStack_120 = (char *******)&pppppppcStack_b0;
      }
      func_0x0175e1a8(&pppppcStack_88,&pppppppcStack_120);
      ppppppcStack_90 = &pppppcStack_88;
      lVar19 = func_0x0001c4b8(lVar11 + 0x350,lVar11 + 0x350,&UNK_01bd2568,&ppppppcStack_90,
                               &uStack_91);
      *(undefined1 *)(lVar19 + 0x38) = 1;
LAB_0001b600:
      if ((long)uStack_a0 < 0) {
        __ZdlPv(pppppppcStack_b0);
      }
LAB_0001a640:
      plVar10 = plVar10 + 7;
    } while (plVar10 != plVar2);
    lVar26 = *(long *)(param_1 + 0x10);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  }
  cVar3 = *(char *)(lVar26 + 0x2ef);
  lVar11 = *(long *)(lVar26 + 0x2d8);
  if (-1 < (long)cVar3) {
    lVar11 = lVar26 + 0x2d8;
  }
  lVar26 = *(long *)(lVar26 + 0x2e0);
  if (-1 < cVar3) {
    lVar26 = (long)cVar3;
  }
  uVar9 = func_0x01704cf4(param_2,lVar11,lVar26);
  pppppppcVar17 = pppppppcStack_c0;
  for (pppppppcVar8 = pppppppcStack_c8; pppppppcVar8 != pppppppcVar17;
      pppppppcVar8 = pppppppcVar8 + 1) {
    func_0x016feaa4(uVar9,*pppppppcVar8);
  }
  plVar10 = (long *)0x0;
  if (pppppppcStack_c8 != (char *******)0x0) {
    pppppppcStack_c0 = pppppppcStack_c8;
    plVar10 = (long *)__ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return plVar10;
  }
  uVar9 = ___stack_chk_fail();
  while (pppppppcStack_c8 == (char *******)0x0) {
    __Unwind_Resume(uVar9);
    __ZdlPv(pppppppcStack_b0);
/* chat: discord.gg/sdkhDjTex */
  }
  pppppppcStack_c0 = pppppppcStack_c8;
  __ZdlPv();
  plVar10 = (long *)__Unwind_Resume(uVar9);
  lVar26 = *plVar10;
  if (lVar26 != 0) {
    lVar19 = plVar10[1];
    lVar11 = lVar26;
    if (lVar26 != lVar19) {
      do {
        lVar19 = lVar19 + -0x38;
      } while (lVar19 != lVar26);
      lVar11 = *plVar10;
    }
    plVar10[1] = lVar26;
    __ZdlPv(lVar11);
  }
  return plVar10;
}

