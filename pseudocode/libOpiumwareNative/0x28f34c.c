/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x28f34c:8313bc3e2a
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

void FUN_0028f34c(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  char *******pppppppcVar5;
  undefined *puVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  char *******pppppppcVar16;
  long lVar17;
  undefined8 *puVar18;
/* do not claim this as your own */
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  char *pcVar22;
  ulong uVar23;
  long *plVar24;
  undefined8 *puVar25;
  char *******pppppppcVar26;
  uint uVar27;
  undefined8 *******pppppppuVar28;
  char *******pppppppcStack_4f8;
  ulong uStack_4f0;
  undefined8 uStack_4e8;
  char *******pppppppcStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  undefined8 *******pppppppuStack_4c8;
  ulong uStack_4c0;
  undefined8 uStack_4b8;
// chat: discord.gg/sdkhDjTex
  undefined8 *******pppppppuStack_4b0;
  ulong uStack_4a8;
  undefined8 uStack_4a0;
  char ******ppppppcStack_498;
  char *****pppppcStack_490;
  long lStack_488;
  undefined1 uStack_479;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  pppppcStack_490 = (char *****)0x0;
  lStack_488 = 0;
  ppppppcStack_498 = &pppppcStack_490;
LAB_0028f3a4:
  iVar10 = func_0x00284c50(*param_2,&uStack_470,param_3);
  if ((iVar10 == 0) ||
     (iVar10 = func_0x00284c50(*param_2,(long)&uStack_470 + 1,param_3), iVar10 == 0)) {
LAB_0028f778:
    plVar24 = (long *)(param_1 + 0x10);
    *plVar24 = 0;
    *param_1 = 0;
    puVar18 = (undefined8 *)(param_1 + 8);
    *puVar18 = plVar24;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lStack_488 != 0) {
// reversing this took months of machine time
      plVar19 = (long *)func_0x00173020(puVar18,pppppcStack_490,puVar18);
      *plVar24 = (long)plVar19;
      plVar19[2] = (long)plVar24;
      do {
        plVar24 = plVar19;
        plVar19 = (long *)*plVar24;
      } while ((long *)*plVar24 != (long *)0x0);
LAB_0028f7bc:
      *(long **)(param_1 + 8) = plVar24;
      *(long *)(param_1 + 0x18) = lStack_488;
    }
  }
  else {
    uVar13 = 2;
    uVar11 = (uint)(uStack_470._1_1_ == ':');
    do {
      if (*(char *)((long)&uStack_478 + uVar13 + 6) == '\r') {
        uVar12 = uVar13;
        uVar27 = uVar11;
        break;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      }
      if (*(char *)((long)&uStack_478 + uVar13 + 7) == '\n') {
        if ((char)uStack_470 != '\r' || uStack_470._1_1_ != '\n') goto LAB_0028f464;
        goto LAB_0028f814;
      }
      uVar12 = func_0x00284c50(*param_2,(long)&uStack_470 + uVar13,param_3);
      if ((uVar12 & 1) == 0) goto LAB_0028f778;
      uVar27 = (uint)uVar13;
      if (uVar11 != 0 || *(char *)((long)&uStack_470 + uVar13) != ':') {
        uVar27 = uVar11;
      }
      uVar12 = uVar13 + 1;
      bVar9 = uVar13 < 0x3fe;
      uVar13 = uVar12;
      uVar11 = uVar27;
    } while (bVar9);
    uVar13 = uVar12;
    uVar11 = uVar27;
    if ((char)uStack_470 != '\r' || uStack_470._1_1_ != '\n') goto LAB_0028f464;
LAB_0028f814:
    puVar25 = (undefined8 *)(param_1 + 0x10);
    *puVar25 = 0;
    *param_1 = 1;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puVar18 = (undefined8 *)(param_1 + 8);
    *puVar18 = puVar25;
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (lStack_488 != 0) {
      plVar19 = (long *)func_0x00173020(puVar18,pppppcStack_490,puVar18);
      *puVar25 = plVar19;
      plVar19[2] = (long)puVar25;
      do {
        plVar24 = plVar19;
        plVar19 = (long *)*plVar24;
      } while ((long *)*plVar24 != (long *)0x0);
      goto LAB_0028f7bc;
    }
  }
  uStack_470 = &pppppcStack_490;
  func_0x0000e2fc(&uStack_470,pppppcStack_490);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
LAB_0028f86c:
  FUN_0000aa50();
LAB_0028f880:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x28f884);
  (*pcVar8)();
LAB_0028f464:
  if (uVar11 == 0) goto LAB_0028f3a4;
  *(undefined1 *)((long)&uStack_470 + (uVar13 & 0xffffffff)) = 0;
  uVar13 = _strlen(&uStack_470);
  if (0x7ffffffffffffff6 < uVar13) {
    FUN_0000aa50();
    goto LAB_0028f880;
  }
  if (uVar13 < 0x17) {
/* WM - reversing this took months of machine time */
    uStack_4a0 = CONCAT17((char)uVar13,(undefined7)uStack_4a0);
    pppppppuVar14 = &pppppppuStack_4b0;
  }
  else {
    uVar12 = (uVar13 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar12 != 0x18) {
      uVar2 = uVar12;
    }
    pppppppuVar14 = (undefined8 *******)__Znwm(uVar2);
    uStack_4a0 = uVar2 | 0x8000000000000000;
    pppppppuStack_4b0 = pppppppuVar14;
    uStack_4a8 = uVar13;
  }
  _memcpy(pppppppuVar14,&uStack_470,uVar13);
  *(undefined1 *)((long)pppppppuVar14 + uVar13) = 0;
  uVar2 = uStack_4a0;
  uVar12 = uStack_4a8;
  pppppppuVar14 = pppppppuStack_4b0;
  cVar7 = uStack_4a0._7_1_;
  uVar23 = (ulong)uStack_4a0._7_1_;
  uVar13 = uStack_4a8;
  if (-1 < (long)uStack_4a0) {
    uVar13 = uVar23;
  }
  uVar21 = (ulong)uVar11;
  uVar27 = uVar11 + 1;
  pppppppuVar28 = pppppppuStack_4b0;
  if (-1 < (long)uStack_4a0) {
    pppppppuVar28 = &pppppppuStack_4b0;
  }
  uVar20 = (uint)uVar13;
  uVar3 = uVar20;
  if ((int)uVar20 < (int)uVar27) {
    uVar3 = uVar11 + 1;
/* WM - keep the notice, keep the source honest */
  }
  if ((int)uVar27 < (int)uVar20) {
    pcVar22 = (char *)((long)pppppppuVar28 + uVar21);
    do {
      pcVar22 = pcVar22 + 1;
      if (*pcVar22 != ' ') {
        uVar3 = uVar27;
        if (uVar21 <= uVar13) {
          uVar13 = uVar21;
        }
        goto joined_r0x0028f558;
      }
      uVar27 = uVar27 + 1;
    } while ((int)uVar27 < (int)uVar20);
  }
  if (uVar21 <= uVar13) {
    uVar13 = uVar21;
  }
joined_r0x0028f558:
  if (uVar13 < 0x17) {
    uStack_4b8 = CONCAT17((char)uVar13,(undefined7)uStack_4b8);
    pppppppuVar15 = &pppppppuStack_4c8;
  }
  else {
    uVar21 = (uVar13 & 0x7ffffff8) + 8;
    uVar1 = 0x19;
    if (uVar21 != 0x18) {
      uVar1 = uVar21;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    }
    pppppppuVar15 = (undefined8 *******)__Znwm(uVar1);
    uStack_4b8 = uVar1 | 0x8000000000000000;
    pppppppuStack_4c8 = pppppppuVar15;
    uStack_4c0 = uVar13;
  }
  _memmove(pppppppuVar15,pppppppuVar28,uVar13);
  *(undefined1 *)((long)pppppppuVar15 + uVar13) = 0;
  pppppppcStack_4e0 = (char *******)0x0;
  uStack_4d8 = 0;
  uStack_4d0 = 0;
  if ((long)uVar2 < 0) {
    if ((int)uVar12 <= (int)uVar3) goto LAB_0028f6fc;
    pppppppuVar28 = pppppppuVar14;
    if (uVar12 < uVar3) {
      FUN_0001c430();
      goto LAB_0028f880;
    }
  }
// WM - chat: discord.gg/sdkhDjTex
  else {
    if ((uint)(int)cVar7 <= uVar3) goto LAB_0028f6fc;
    uVar12 = uVar23;
    pppppppuVar28 = &pppppppuStack_4b0;
  }
  uVar12 = uVar12 - uVar3;
  if (0x7ffffffffffffff6 < uVar12) goto LAB_0028f86c;
  if (uVar12 < 0x17) {
    uStack_4e8 = CONCAT17((char)uVar12,(undefined7)uStack_4e8);
    pppppppcVar16 = (char *******)&pppppppcStack_4f8;
  }
  else {
    uVar13 = (uVar12 & 0x7ffffffffffffff8) + 8;
    uVar2 = 0x19;
    if (uVar13 != 0x18) {
      uVar2 = uVar13;
    }
    pppppppcVar16 = (char *******)__Znwm(uVar2);
    uStack_4e8 = uVar2 | 0x8000000000000000;
    pppppppcStack_4f8 = pppppppcVar16;
    uStack_4f0 = uVar12;
  }
  _memmove(pppppppcVar16,(long)pppppppuVar28 + (ulong)uVar3,uVar12);
  puVar6 = PTR___DefaultRuneLocale_01f201e8;
  *(char *)((long)pppppppcVar16 + uVar12) = '\0';
  uStack_4d0 = uStack_4e8;
  uStack_4d8 = uStack_4f0;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  pppppppcStack_4e0 = pppppppcStack_4f8;
  pppppppcVar5 = (char *******)((long)pppppppcStack_4f8 + uStack_4f0);
  pppppppcVar16 = pppppppcStack_4f8;
  if (-1 < (long)uStack_4e8) {
    pppppppcVar5 = (char *******)((long)&pppppppcStack_4e0 + (uStack_4e8 >> 0x38));
    pppppppcVar16 = (char *******)&pppppppcStack_4e0;
  }
  do {
    if (pppppppcVar5 == pppppppcVar16) {
      pppppppcVar26 = pppppppcVar16;
      break;
    }
    cVar4 = *(char *)((long)pppppppcVar5 + -1);
    if ((long)cVar4 < 0) {
      uVar11 = ___maskrune(cVar4,0x4000);
    }
    else {
      uVar11 = *(uint *)(puVar6 + (long)cVar4 * 4 + 0x3c) & 0x4000;
    }
    pppppppcVar26 = pppppppcVar5;
    pppppppcVar5 = (char *******)((long)pppppppcVar5 + -1);
  } while (uVar11 != 0);
  pppppppcVar16 = pppppppcStack_4e0;
  pcVar22 = (char *)((long)pppppppcStack_4e0 + uStack_4d8);
  if (-1 < (long)uStack_4d0) {
    pppppppcVar16 = (char *******)&pppppppcStack_4e0;
    pcVar22 = (char *)((long)&pppppppcStack_4e0 + (uStack_4d0 >> 0x38));
  }
/* wm:stripping the watermark breaks the license */
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE5eraseEmm
            (&pppppppcStack_4e0,(long)pppppppcVar26 - (long)pppppppcVar16,
             (long)pcVar22 - (long)pppppppcVar26);
LAB_0028f6fc:
  uStack_478 = &pppppppuStack_4c8;
  pppppppcStack_4f8 = &ppppppcStack_498;
  lVar17 = func_0x0028f91c(&pppppppcStack_4f8,&pppppppuStack_4c8,&UNK_01adc20d,&uStack_478,
                           &uStack_479);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar17 + 0x38,&pppppppcStack_4e0);
  if ((long)uStack_4d0 < 0) {
    __ZdlPv(pppppppcStack_4e0);
  }
  if ((long)uStack_4b8 < 0) {
    __ZdlPv(pppppppuStack_4c8);
  }
  if (cVar7 < 0) {
    __ZdlPv(pppppppuVar14);
  }
  goto LAB_0028f3a4;
// if you paid for this, you were scammed
}

