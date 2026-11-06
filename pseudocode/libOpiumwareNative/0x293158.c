/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x293158:1e9abd0955
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00293158(long param_1,int param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  undefined8 uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  code *pcVar14;
  int iVar15;
  undefined8 *******pppppppuVar16;
  long *plVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 *******pppppppuVar21;
  long *plVar22;
  ulong uVar23;
  undefined1 *puVar25;
  undefined1 *puVar24;
  long lVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  undefined8 *puVar30;
  ushort uVar31;
// WM - no support for modified copies
  long lVar32;
  undefined1 *puVar33;
  undefined8 ******ppppppuVar34;
  undefined8 ******ppppppuVar35;
  undefined8 ******ppppppuVar36;
  undefined8 ******ppppppuVar37;
  undefined8 ******ppppppuVar38;
  undefined8 ******ppppppuVar39;
  undefined8 ******ppppppuVar40;
  undefined8 *******pppppppuStack_208;
  undefined8 *******pppppppuStack_200;
  long lStack_1f8;
  undefined8 *******pppppppuStack_1f0;
  undefined8 *******pppppppuStack_1e8;
  long lStack_1e0;
  undefined8 *******pppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
/* wm:found on a paste site? it was re-uploaded illegally */
  undefined8 uStack_1c0;
  undefined4 uStack_1b8;
  byte bStack_1b4;
  byte bStack_1b3;
  byte bStack_1b2;
  byte bStack_1b1;
  byte bStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined8 *******pppppppuStack_1a0;
  undefined3 uStack_198;
  byte bStack_195;
  undefined1 uStack_189;
  undefined8 *******pppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  long lStack_178;
  undefined8 auStack_170 [32];
  long lStack_70;
  
  uVar13 = _UNK_01adc0ca;
  uVar12 = _UNK_01adc0c8;
  uVar11 = _UNK_01adc0c6;
  uVar10 = _UNK_01adbbf8;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  plVar1 = (long *)(param_1 + 0xb0);
  do {
    pbVar5 = *(byte **)(param_1 + 0x38);
    uVar20 = *(long *)(param_1 + 0x40) - (long)pbVar5;
    if (uVar20 < 2) {
LAB_00293b88:
      if (param_2 != 0) {
        *(byte **)(param_1 + 0x40) = pbVar5;
        if (*(int *)(param_1 + 0x118) == 0) {
/* donate: donate/README.md */
          __ZNSt3__15mutex4lockEv(param_1 + 0xd8);
          (**(code **)(**(long **)(param_1 + 0xd0) + 0x20))();
          __ZNSt3__15mutex6unlockEv(param_1 + 0xd8);
          func_0x0029232c(param_1,1);
        }
        else if (*(int *)(param_1 + 0x118) != 1) {
          func_0x002944ec(param_1,_UNK_01adc0c4,0x20972c0,0,0);
        }
      }
      break;
    }
    bVar7 = *pbVar5;
    bStack_1b4 = bVar7 >> 7;
    bStack_1b3 = bVar7 >> 6 & 1;
    bStack_1b2 = bVar7 >> 5 & 1;
    bStack_1b1 = bVar7 >> 4 & 1;
    uVar4 = bVar7 & 0xf;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    bVar8 = pbVar5[1];
    bStack_1b0 = bVar8 >> 7;
    uStack_1a8 = (uint)(undefined8 *******)((ulong)bVar8 & 0x7f);
    uVar27 = 4;
    if (uStack_1a8 != 0x7e) {
      uVar27 = 2;
    }
    uVar29 = 8;
    if (uStack_1a8 != 0x7f) {
      uVar29 = 0;
    }
    uVar2 = (ulong)(uVar27 | uVar29) + (ulong)bStack_1b0 * 4;
    uStack_1b8 = (undefined4)uVar2;
    uStack_1ac = uVar4;
    if (uVar20 < uVar2) goto LAB_00293b88;
    uVar27 = (uint)(char)bVar7;
    if ((uVar27 >> 6 & 1) == 0) {
      if ((uVar27 & 0x30) != 0) goto LAB_00293c04;
    }
    else if ((*(char *)(param_1 + 0x1fd) != '\x01') || ((uVar27 & 0x30) != 0)) {
      uVar20 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38);
LAB_00293c04:
      func_0x00292cd4(param_1,uVar12,0x2097338,uVar20,0);
      break;
    }
    if (uStack_1a8 < 0x7e) {
      lVar26 = 2;
      pppppppuStack_1a0 = (undefined8 *******)((ulong)bVar8 & 0x7f);
joined_r0x00293354:
      if (-1 < (char)bVar8) goto LAB_002932d0;
LAB_00293358:
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      uStack_198 = *(undefined3 *)(pbVar5 + lVar26);
      bStack_195 = (pbVar5 + lVar26)[3];
      pppppppuVar18 = pppppppuStack_1a0;
    }
    else {
      if (uStack_1a8 != 0x7e) {
        lVar26 = 10;
        pppppppuStack_1a0 =
             (undefined8 *******)
             ((ulong)pbVar5[2] << 0x38 | (ulong)pbVar5[3] << 0x30 | (ulong)pbVar5[4] << 0x28 |
              (ulong)pbVar5[5] << 0x20 | (ulong)pbVar5[6] << 0x18 | (ulong)pbVar5[7] << 0x10 |
              (ulong)pbVar5[8] << 8 | (ulong)pbVar5[9]);
        goto joined_r0x00293354;
      }
      pppppppuStack_1a0 = (undefined8 *******)(ulong)CONCAT11(pbVar5[2],pbVar5[3]);
      lVar26 = 4;
      if ((char)bVar8 < '\0') goto LAB_00293358;
LAB_002932d0:
      uStack_198 = 0;
      bStack_195 = 0;
      pppppppuVar18 = pppppppuStack_1a0;
    }
    pppppppuStack_1a0 = pppppppuVar18;
    if ((undefined8 *******)0x8000000000000000 < pppppppuVar18) break;
    lVar26 = *(long *)(param_1 + 0x38);
    puVar3 = (undefined1 *)((long)pppppppuVar18 + uVar2);
// WM - proprietary - see LICENSE - do not sell
    if ((undefined1 *)(*(long *)(param_1 + 0x40) - lVar26) < puVar3) {
      *(undefined1 **)(param_1 + 0x50) = puVar3;
      break;
    }
    *(undefined8 *)(param_1 + 0x50) = 0;
    if ((-1 < (int)uVar27) && (uVar4 - 8 < 3)) {
      func_0x00292cd4(param_1,uVar12,0x2097368,0,0);
      break;
    }
    if ((char)bVar8 < '\0') {
      if (pppppppuVar18 != (undefined8 *******)0x0) {
        uVar20 = 0;
        uVar23 = (ulong)((long)pppppppuVar18 + -1) % 5;
        lVar26 = 0;
        if (uVar23 != 4) {
          lVar26 = uVar23 + 1;
        }
        if (&MACH_HEADER.cputype < pppppppuVar18) {
          uVar20 = 0;
          do {
            bVar8 = *(byte *)((long)auStack_170 + ((uVar20 & 3) - 0x28));
            lVar32 = *(long *)(param_1 + 0x38) + uVar2;
            *(byte *)(lVar32 + uVar20) = *(byte *)(lVar32 + uVar20) ^ bVar8;
            iVar15 = (int)uVar20;
            lVar32 = *(long *)(param_1 + 0x38) + uVar2 + uVar20;
            *(byte *)(lVar32 + 1) =
                 *(byte *)(lVar32 + 1) ^
                 *(byte *)((long)auStack_170 + (((ulong)(iVar15 + 1) & 3) - 0x28));
            lVar32 = *(long *)(param_1 + 0x38) + uVar2 + uVar20;
            *(byte *)(lVar32 + 2) =
                 *(byte *)(lVar32 + 2) ^
                 *(byte *)((long)auStack_170 + (((ulong)(iVar15 + 2) & 3) - 0x28));
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            lVar32 = *(long *)(param_1 + 0x38) + uVar2 + uVar20;
            *(byte *)(lVar32 + 3) =
                 *(byte *)(lVar32 + 3) ^
                 *(byte *)((long)auStack_170 + (((ulong)(iVar15 - 1) & 3) - 0x28));
            lVar32 = *(long *)(param_1 + 0x38) + uVar2 + uVar20;
            *(byte *)(lVar32 + 4) = *(byte *)(lVar32 + 4) ^ bVar8;
            uVar20 = uVar20 + 5;
          } while ((long)pppppppuVar18 - lVar26 != uVar20);
        }
        if (uVar23 != 4) {
          lVar32 = uVar20 + uVar2;
          do {
            *(byte *)(*(long *)(param_1 + 0x38) + lVar32) =
                 *(byte *)(*(long *)(param_1 + 0x38) + lVar32) ^
                 *(byte *)((long)auStack_170 + ((uVar20 & 3) - 0x28));
            uVar20 = uVar20 + 1;
            lVar32 = lVar32 + 1;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
        }
        lVar26 = *(long *)(param_1 + 0x38);
        goto joined_r0x002934f0;
      }
      puVar33 = (undefined1 *)(lVar26 + uVar2);
      puVar25 = puVar33;
LAB_00293558:
      uStack_1c0 = CONCAT17((char)pppppppuVar18,(undefined7)uStack_1c0);
      pppppppuVar16 = &pppppppuStack_1d0;
      if (puVar25 == puVar33) goto LAB_00293548;
LAB_00293568:
      uVar20 = (long)puVar33 - (long)puVar25;
      if ((uVar20 < 0x40) || ((ulong)((long)pppppppuVar16 - (long)puVar25) < 0x40)) {
LAB_002935c4:
        do {
          puVar24 = puVar25 + 1;
          pppppppuVar21 = (undefined8 *******)((long)pppppppuVar16 + 1);
          *(undefined1 *)pppppppuVar16 = *puVar25;
          pppppppuVar16 = pppppppuVar21;
          puVar25 = puVar24;
        } while (puVar24 != puVar33);
      }
      else {
        uVar28 = uVar20 & 0xffffffffffffffc0;
        pppppppuVar21 = (undefined8 *******)((long)pppppppuVar16 + uVar28);
        pppppppuVar16 = pppppppuVar16 + 4;
        puVar30 = (undefined8 *)(puVar25 + 0x20);
        uVar23 = uVar28;
        do {
          ppppppuVar34 = (undefined8 ******)puVar30[-4];
          ppppppuVar36 = (undefined8 ******)puVar30[-1];
          ppppppuVar35 = (undefined8 ******)puVar30[-2];
          ppppppuVar38 = (undefined8 ******)puVar30[1];
          ppppppuVar37 = (undefined8 ******)*puVar30;
          ppppppuVar40 = (undefined8 ******)puVar30[3];
          ppppppuVar39 = (undefined8 ******)puVar30[2];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          pppppppuVar16[-3] = (undefined8 ******)puVar30[-3];
          pppppppuVar16[-4] = ppppppuVar34;
          pppppppuVar16[-1] = ppppppuVar36;
          pppppppuVar16[-2] = ppppppuVar35;
          pppppppuVar16[1] = ppppppuVar38;
          *pppppppuVar16 = ppppppuVar37;
          pppppppuVar16[3] = ppppppuVar40;
          pppppppuVar16[2] = ppppppuVar39;
          uVar23 = uVar23 - 0x40;
          pppppppuVar16 = pppppppuVar16 + 8;
          puVar30 = puVar30 + 8;
        } while (uVar23 != 0);
        pppppppuVar16 = pppppppuVar21;
        puVar25 = puVar25 + uVar28;
        if (uVar20 != uVar28) goto LAB_002935c4;
      }
    }
    else {
joined_r0x002934f0:
      if ((undefined8 *******)0x7ffffffffffffff6 < pppppppuVar18) {
        FUN_0000aa50();
        goto LAB_00293ca0;
      }
      puVar25 = (undefined1 *)(lVar26 + uVar2);
      puVar33 = puVar25 + (long)pppppppuVar18;
      if (pppppppuVar18 < (undefined8 *******)((long)&MACH_HEADER.sizeofcmds + 3))
      goto LAB_00293558;
      uVar20 = ((ulong)pppppppuVar18 & 0x7ffffffffffffff8) + 8;
      uVar23 = 0x19;
      if (uVar20 != 0x18) {
        uVar23 = uVar20;
      }
      pppppppuVar16 = (undefined8 *******)__Znwm(uVar23);
      uStack_1c0 = uVar23 | 0x8000000000000000;
      pppppppuStack_1d0 = pppppppuVar16;
      pppppppuStack_1c8 = pppppppuVar18;
      if (puVar25 != puVar33) goto LAB_00293568;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
LAB_00293548:
      pppppppuVar21 = pppppppuVar16;
    }
    *(undefined1 *)pppppppuVar21 = 0;
    if (uVar4 < 3) {
      if ((bVar7 & 0xf) == 0) {
        if (*(long *)(param_1 + 0xc0) == 0) {
          uVar19 = 0x2097398;
          goto LAB_002936d4;
        }
      }
      else {
        *(uint *)(param_1 + 200) = (uint)(uVar4 != 1);
        *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0x1fd) & bVar7 >> 6;
        uVar19 = 0x2097380;
        if (*(long *)(param_1 + 0xc0) != 0) {
LAB_002936d4:
          func_0x00292cd4(param_1,uVar12,uVar19,0,0);
        }
/*  found on a paste site? it was re-uploaded illegally  */
      }
      if (((int)uVar27 < 0) && (*(long *)(param_1 + 0xc0) == 0)) {
        func_0x00293d44(param_1,*(undefined4 *)(param_1 + 200),&pppppppuStack_1d0,
                        *(undefined1 *)(param_1 + 0xcc),param_3);
      }
      else {
        plVar17 = (long *)__Znwm(0x28);
        plVar17[3] = (long)pppppppuStack_1c8;
        plVar17[2] = (long)pppppppuStack_1d0;
        plVar17[4] = uStack_1c0;
        pppppppuStack_1c8 = (undefined8 *******)0x0;
        uStack_1c0 = 0;
        pppppppuStack_1d0 = (undefined8 *******)0x0;
        lVar26 = *(long *)(param_1 + 0xb0);
        *plVar17 = lVar26;
        plVar17[1] = (long)plVar1;
        *(long **)(lVar26 + 8) = plVar17;
        *(long **)(param_1 + 0xb0) = plVar17;
        *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
        if (-1 < (int)uVar27) {
          pppppppuStack_188 = (undefined8 *******)0x0;
          pppppppuStack_180 = (undefined8 *******)0x0;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          lStack_178 = 0;
          pppppppuStack_1f0 = (undefined8 *******)0x0;
          uStack_189 = 0;
          pppppppuStack_208 = (undefined8 *******)CONCAT44(pppppppuStack_208._4_4_,4);
          plVar17 = *(long **)(param_3 + 0x18);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x30))
                      (plVar17,&pppppppuStack_188,&pppppppuStack_1f0,&uStack_189,&pppppppuStack_208)
            ;
            if (-1 < lStack_178) goto LAB_00293b44;
            pppppppuVar18 = pppppppuStack_188;
            goto LAB_00293b40;
          }
          func_0x001717b4();
          goto LAB_00293ca0;
        }
        plVar17 = *(long **)(param_1 + 0xb8);
        if (plVar17 == plVar1) {
          lVar26 = 0;
        }
        else {
          lVar26 = 0;
          do {
            lVar32 = (long)*(char *)((long)plVar17 + 0x27);
            if (lVar32 < 0) {
              lVar32 = plVar17[3];
            }
            lVar26 = lVar32 + lVar26;
            plVar17 = (long *)plVar17[1];
          } while (plVar17 != plVar1);
        }
        uVar6 = *(undefined4 *)(param_1 + 200);
        pppppppuStack_188 = (undefined8 *******)0x0;
        pppppppuStack_180 = (undefined8 *******)0x0;
        lStack_178 = 0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm
/* WM - proprietary - see LICENSE - do not sell */
                  (&pppppppuStack_188,lVar26);
        for (plVar17 = *(long **)(param_1 + 0xb8); plVar17 != plVar1; plVar17 = (long *)plVar17[1])
        {
          uVar20 = plVar17[3];
          plVar22 = (long *)plVar17[2];
          if (-1 < (char)*(byte *)((long)plVar17 + 0x27)) {
            uVar20 = (ulong)*(byte *)((long)plVar17 + 0x27);
            plVar22 = plVar17 + 2;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_188,plVar22,uVar20);
        }
        func_0x00293d44(param_1,uVar6,&pppppppuStack_188,*(undefined1 *)(param_1 + 0xcc),param_3);
        if (lStack_178 < 0) {
          __ZdlPv(pppppppuStack_188);
        }
        if (*(long *)(param_1 + 0xc0) != 0) {
          plVar17 = *(long **)(param_1 + 0xb8);
          plVar22 = *(long **)(*(long *)(param_1 + 0xb0) + 8);
          lVar26 = *plVar17;
          *(long **)(lVar26 + 8) = plVar22;
          *plVar22 = lVar26;
          *(undefined8 *)(param_1 + 0xc0) = 0;
          while (plVar17 != plVar1) {
            plVar22 = (long *)plVar17[1];
            if (*(char *)((long)plVar17 + 0x27) < '\0') {
              __ZdlPv(plVar17[2]);
            }
            __ZdlPv(plVar17);
            plVar17 = plVar22;
/* donate: donate/README.md - github.com/pengussy */
          }
        }
      }
      *(undefined1 *)(param_1 + 0xcc) = 0;
LAB_00293b44:
      if (puVar3 != (undefined1 *)0x0) {
        lVar26 = *(long *)(param_1 + 0x38);
        lVar32 = *(long *)(param_1 + 0x40) - (long)(puVar3 + lVar26);
        _memmove(lVar26,puVar3 + lVar26,lVar32);
        *(long *)(param_1 + 0x40) = lVar26 + lVar32;
      }
      bVar9 = true;
    }
    else {
      if (uVar4 == 8) {
        pppppppuStack_1f0 = (undefined8 *******)0x0;
        pppppppuStack_1e8 = (undefined8 *******)0x0;
        lStack_1e0 = 0;
        if (pppppppuVar18 < (undefined8 *******)((long)&MACH_HEADER.magic + 2)) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                    (&pppppppuStack_1f0,0x2097320);
          uVar31 = uVar13;
LAB_00293a00:
          if (*(int *)(param_1 + 0x118) != 0) goto LAB_00293a0c;
LAB_00293ae8:
          if (*(ushort *)(param_1 + 0x1d8) == uVar31) {
            __ZNSt3__15mutex4lockEv(param_1 + 0x198);
            __ZNSt3__15mutex6unlockEv(param_1 + 0x198);
            iVar15 = func_0x002945c0(param_1 + 0x180,&pppppppuStack_1f0);
            if (iVar15 != 0) {
              func_0x002944ec(param_1,uVar31,&pppppppuStack_1f0,
/* wm:do not claim this as your own */
                              *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38),0);
            }
          }
        }
        else {
          uVar31 = *(ushort *)(*(long *)(param_1 + 0x38) + uVar2);
          if (pppppppuVar18 != (undefined8 *******)((long)&MACH_HEADER.magic + 2)) {
            pppppppuVar18 = pppppppuStack_1c8;
            if (-1 < (long)uStack_1c0) {
              pppppppuVar18 = (undefined8 *******)(ulong)uStack_1c0._7_1_;
            }
            func_0x00287140(&pppppppuStack_188,&pppppppuStack_1d0,2,pppppppuVar18);
            if (lStack_1e0 < 0) {
              __ZdlPv(pppppppuStack_1f0);
            }
            pppppppuStack_1e8 = pppppppuStack_180;
            pppppppuStack_1f0 = pppppppuStack_188;
            lStack_1e0 = lStack_178;
          }
/* if you paid for this, you were scammed */
          uVar20 = func_0x002942f0(&pppppppuStack_1f0);
          if ((uVar20 & 1) == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                      (&pppppppuStack_1f0,0x20973b0);
            uVar31 = uVar11;
          }
          else {
            uVar31 = uVar31 >> 8 | uVar31 << 8;
          }
          if (((0x7c1 < (ushort)(uVar31 - 0x3f6)) && (999 < uVar31)) && ((uVar31 & 0xfffd) != 0x3ec)
             ) goto LAB_00293a00;
          func_0x0003d474(&pppppppuStack_188);
          uVar20 = uRam00000000020973d0;
          uVar19 = uRam00000000020973c8;
          if (-1 < (char)bRam00000000020973df) {
            uVar19 = 0x20973c8;
            uVar20 = (ulong)bRam00000000020973df;
/* reversing this took months of machine time - github.com/pengussy */
          }
          uVar19 = func_0x00283894(&lStack_178,uVar19,uVar20);
          uVar19 = func_0x00283894(uVar19,": ",2);
          __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEt(uVar19,uVar31);
          func_0x00a70440(&pppppppuStack_208,auStack_170);
          if (lStack_1e0 < 0) {
            __ZdlPv(pppppppuStack_1f0);
          }
          pppppppuStack_1e8 = pppppppuStack_200;
          pppppppuStack_1f0 = pppppppuStack_208;
          lStack_1e0 = lStack_1f8;
          func_0x0003d5a8(&pppppppuStack_188);
          uVar31 = uVar12;
          if (*(int *)(param_1 + 0x118) == 0) goto LAB_00293ae8;
LAB_00293a0c:
          func_0x0029232c(param_1,0);
          func_0x00294358(param_1,uVar31,&pppppppuStack_1f0);
// WM - do not claim this as your own
          func_0x00294494(param_1,uVar10);
          func_0x002944ec(param_1,uVar31,&pppppppuStack_1f0,
                          *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38),1);
        }
        if (lStack_1e0 < 0) {
          pppppppuVar18 = pppppppuStack_1f0;
LAB_00293b40:
          __ZdlPv(pppppppuVar18);
        }
        goto LAB_00293b44;
      }
      if (uVar4 == 10) {
        *(undefined1 *)(param_1 + 0x310) = 1;
        pppppppuStack_188 = pppppppuStack_1c8;
        if (-1 < (long)uStack_1c0) {
          pppppppuStack_188 = (undefined8 *******)(ulong)uStack_1c0._7_1_;
        }
        pppppppuStack_208 = (undefined8 *******)((ulong)pppppppuStack_208 & 0xffffffffffffff00);
        pppppppuStack_1f0 = (undefined8 *******)CONCAT44(pppppppuStack_1f0._4_4_,3);
        plVar17 = *(long **)(param_3 + 0x18);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x30))
                    (plVar17,&pppppppuStack_1d0,&pppppppuStack_188,&pppppppuStack_208,
                     &pppppppuStack_1f0);
          goto LAB_00293b44;
        }
        goto LAB_00293c9c;
      }
      if (uVar4 != 9) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        func_0x00292cd4(param_1,uVar12,0x2097308,
                        *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38),0);
        goto LAB_00293b44;
      }
      pppppppuVar18 = pppppppuStack_1c8;
      if (-1 < (long)uStack_1c0) {
        pppppppuVar18 = (undefined8 *******)(ulong)uStack_1c0._7_1_;
      }
      if (pppppppuVar18 < section_00000068.segname + 6) {
        if (*(char *)(param_1 + 0x308) == '\x01') {
          pppppppuStack_208 = pppppppuStack_1d0;
          if (-1 < (long)(char)uStack_1c0._7_1_) {
            pppppppuStack_208 = &pppppppuStack_1d0;
          }
          pppppppuStack_200 = pppppppuStack_1c8;
          if (-1 < (long)uStack_1c0) {
            pppppppuStack_200 = (undefined8 *******)(long)(char)uStack_1c0._7_1_;
          }
          auStack_170[0] = 0;
          func_0x00293f50(&pppppppuStack_1f0,param_1,10,&pppppppuStack_208,0,&pppppppuStack_188);
        }
        func_0x00293d44(param_1,2,&pppppppuStack_1d0,0,param_3);
        goto LAB_00293b44;
      }
      func_0x00292cd4(param_1,uVar12,0x2097350,0,0);
/* WM - chat: discord.gg/sdkhDjTex */
      bVar9 = false;
    }
    if ((long)uStack_1c0 < 0) {
      __ZdlPv(pppppppuStack_1d0);
    }
  } while (bVar9);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_00293c9c:
  func_0x001717b4();
LAB_00293ca0:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x293ca4);
  (*pcVar14)();
}

