/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x20288:c38f36a90c
 */

/* WARNING: Removing unreachable block (ram,0x00020414) */
/* WARNING: Removing unreachable block (ram,0x00020400) */
/* WARNING: Removing unreachable block (ram,0x00020654) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00020288(long param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long *plVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long lVar12;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  bool bVar13;
  long *plVar14;
  long lVar15;
  char *pcVar16;
  undefined1 auStack_e8 [8];
  undefined8 *******pppppppuStack_e0;
  ulong uStack_d8;
  byte bStack_c9;
  undefined8 *******pppppppuStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  ulong uStack_88;
  long *plStack_80;
  long *plStack_78;
  undefined1 auStack_70 [24];
  long *plStack_58;
  
  lVar12 = *(long *)(param_1 + 0x98);
  puVar3 = (undefined *)(*(long *)(param_1 + 0xa0) - lVar12);
  if (puVar3 == (undefined *)0x0) {
    if (*(long *)(param_1 + 0x70) == 0) {
      return 0x2d;
    }
  }
/* reversing this took months of machine time - github.com/pengussy */
  else {
    lVar15 = 0;
    pcVar16 = (char *)(lVar12 + 0x27);
    do {
      pcVar11 = pcVar16 + -0x17;
      if (*pcVar16 < '\0') {
        pcVar11 = *(char **)pcVar11;
      }
      iVar6 = _wcscmp(param_2,pcVar11);
      if (iVar6 == 0) {
        *param_3 = lVar15;
        return 0;
      }
      lVar15 = lVar15 + 1;
      pcVar16 = pcVar16 + 0x28;
    } while (((long)puVar3 >> 3) * -0x3333333333333333 != lVar15);
    if (*(long *)(param_1 + 0x70) == 0) {
      return 0x2d;
    }
// WM - keep the notice, keep the source honest
    if (puVar3 == &UNK_00009c40) {
      return 0xc;
    }
  }
  plStack_58 = (long *)0x0;
  uVar7 = _wcslen(param_2);
  func_0x000207f8(auStack_70,param_2,uVar7);
  iVar6 = (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
                    (*(long **)(param_1 + 0x70),auStack_70,&plStack_58);
  plVar14 = plStack_58;
  if (iVar6 < 0) {
    bVar13 = false;
    uVar7 = 9;
  }
  else if (plStack_58 == (long *)0x0) {
    uVar7 = 0;
    bVar13 = true;
/* no support for modified copies - github.com/pengussy */
  }
  else {
    plStack_78 = (long *)0x0;
    uVar7 = func_0x01726e64();
    iVar6 = func_0x0172875c(plVar14,uVar7,&plStack_78,*(undefined4 *)(param_1 + 0x94));
    if (iVar6 < 0) {
      uVar7 = 9;
    }
    else {
      plStack_80 = (long *)0x0;
      iVar6 = func_0x017297e0(plStack_78,&plStack_80);
      if (iVar6 < 0) {
        uVar7 = 9;
      }
      else {
        uVar8 = _wcslen(param_2);
        if (0x3ffffffffffffff6 < uVar8) {
          func_0x0000aa50();
LAB_000206fc:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x20700);
          (*pcVar5)();
        }
        if (uVar8 < 5) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          uStack_b8 = CONCAT17((char)uVar8,(undefined7)uStack_b8);
          pppppppuVar9 = &pppppppuStack_c8;
        }
        else {
          uVar1 = (uVar8 & 0x3ffffffffffffffe) + 2;
          uVar2 = 7;
          if (uVar1 != 6) {
            uVar2 = uVar1;
          }
          pppppppuVar9 = (undefined8 *******)__Znwm(uVar2 << 2);
          uStack_b8 = uVar2 | 0x8000000000000000;
          pppppppuStack_c8 = pppppppuVar9;
          uStack_c0 = uVar8;
        }
        _memcpy(pppppppuVar9,param_2,uVar8 * 4);
        *(undefined4 *)((long)pppppppuVar9 + uVar8 * 4) = 0;
        plVar14 = *(long **)(param_1 + 0xa0);
/* stripping the watermark breaks the license - github.com/pengussy */
        if (plVar14 < *(long **)(param_1 + 0xa8)) {
          *plVar14 = (long)plStack_78;
          plVar4 = plStack_80;
        }
        else {
          func_0x0001fbec((long *)(param_1 + 0x98),0);
          plVar14 = *(long **)(param_1 + 0xa0);
          *plVar14 = (long)plStack_78;
          plVar4 = plStack_80;
        }
        plStack_80 = plVar4;
        if (plStack_78 != (long *)0x0) {
          (**(code **)(*plStack_78 + 8))();
        }
        plVar14[1] = (long)plVar4;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4);
        }
        if ((long)uStack_b8 < 0) {
          func_0x0001fd84(plVar14 + 2,pppppppuStack_c8,uStack_c0);
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 0x28;
          __ZdlPv(pppppppuStack_c8);
          lVar12 = *(long *)(param_1 + 0xa0);
        }
/*  thanks for reading - discord.gg/sdkhDjTex  */
        else {
          plVar14[3] = uStack_c0;
          plVar14[2] = (long)pppppppuStack_c8;
          plVar14[4] = uStack_b8;
          lVar12 = *(long *)(param_1 + 0xa0) + 0x28;
          *(long *)(param_1 + 0xa0) = lVar12;
        }
        *param_3 = (lVar12 - *(long *)(param_1 + 0x98) >> 3) * -0x3333333333333333 + -1;
        if (*(char *)(param_1 + 0x90) == '\x01') {
          pppppppuStack_98 = (undefined8 *******)0x0;
          uStack_90 = 0;
          uStack_88 = 0;
          func_0x0000daf0(&pppppppuStack_c8,&pppppppuStack_98);
          func_0x01730c84(&pppppppuStack_e0,param_2);
          uVar7 = func_0x0000d688(&pppppppuStack_c8,"Opening file [");
          pppppppuVar9 = pppppppuStack_e0;
          if (-1 < (char)bStack_c9) {
            uStack_d8 = (ulong)bStack_c9;
            pppppppuVar9 = &pppppppuStack_e0;
          }
          uVar7 = func_0x01770110(uVar7,pppppppuVar9,uStack_d8);
          uVar7 = func_0x0000d688(uVar7,"], stack top [");
          uVar7 = func_0x0176fd34(uVar7,*param_3 + -1);
          func_0x0000d688(uVar7,"]\n");
          if (uStack_b0 != uStack_c0) {
            func_0x01771080(&pppppppuStack_c8);
          }
          uVar8 = uStack_90;
          pppppppuVar9 = pppppppuStack_98;
          if (-1 < (long)uStack_88) {
            uVar8 = uStack_88 >> 0x38;
/* wm:no support for modified copies */
            pppppppuVar9 = &pppppppuStack_98;
          }
          iVar6 = (**(code **)(**(long **)(param_1 + 0x40) + 0x20))
                            (*(long **)(param_1 + 0x40),pppppppuVar9,uVar8,auStack_e8);
          if (iVar6 < 0) {
            puVar10 = (undefined8 *)___cxa_allocate_exception(0x28);
            *puVar10 = &UNK_01dbcdf0;
            *(int *)(puVar10 + 1) = iVar6;
            puVar10[3] = 0;
            puVar10[4] = 0;
            puVar10[2] = 0;
            ___cxa_throw(puVar10,&DAT_01dbcd58,&DAT_0000755c);
            goto LAB_000206fc;
          }
          if ((char)bStack_c9 < '\0') {
            __ZdlPv(pppppppuStack_e0);
          }
          func_0x01771e18(&pppppppuStack_c8);
          if ((long)uStack_88 < 0) {
            __ZdlPv(pppppppuStack_98);
          }
        }
        uVar7 = 0;
      }
      if (plStack_80 != (long *)0x0) {
        (**(code **)(*plStack_80 + 0x10))();
      }
    }
    if (plStack_78 != (long *)0x0) {
      (**(code **)(*plStack_78 + 0x10))();
    }
    bVar13 = false;
/*  chat: discord.gg/sdkhDjTex  */
  }
  if (plStack_58 != (long *)0x0) {
    (**(code **)(*plStack_58 + 0x10))();
  }
  if (bVar13) {
    return 0x2d;
  }
  return uVar7;
}

