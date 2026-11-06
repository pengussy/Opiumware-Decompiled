/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x27443c:0cd66c78fd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0027443c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
            long *param_5)

{
  long lVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  char cVar16;
  int *piVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
// no support for modified copies
  char *pcVar21;
  int *piVar22;
  long *plVar23;
  undefined8 uVar24;
  int *piVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [12];
  int iStack_45c0;
  undefined1 uStack_45bc;
  undefined1 uStack_45bb;
  undefined2 uStack_45ba;
  undefined8 uStack_45b8;
  undefined4 uStack_45b0;
  undefined4 uStack_45ac;
  undefined4 uStack_45a8;
  undefined4 uStack_45a4;
  long alStack_4598 [2];
  undefined7 uStack_4588;
  char cStack_4581;
  long lStack_4570;
  long lStack_4568;
  long lStack_4560;
  undefined7 uStack_4558;
  undefined1 uStack_4551;
  undefined7 uStack_4550;
  undefined4 uStack_4548;
  uint uStack_4544;
/* wm:do not claim this as your own */
  ulong uStack_4540;
  char cStack_4531;
  long lStack_43e8;
  long lStack_3fe0;
  long lStack_3e88;
  long lStack_3d30;
  long lStack_3bd8;
  long lStack_3a80;
  long lStack_3928;
  long lStack_37d0;
  long lStack_3678;
  long lStack_3520;
  long lStack_33c8;
  long lStack_3270;
  undefined1 uStack_2df0;
  undefined7 uStack_2def;
  long lStack_2de8;
  undefined7 uStack_2de0;
  undefined1 uStack_2dd9;
  undefined8 uStack_7d8;
  undefined1 uStack_76c;
  long lStack_78;
  
  auVar28 = (*(code *)PTR____chkstk_darwin_01f201f8)();
  plVar23 = auVar28._0_8_;
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_4568 = plVar23[1];
  lStack_4570 = *plVar23;
  lStack_4560 = plVar23[2];
  plVar23[1] = 0;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  plVar23[2] = 0;
  *plVar23 = 0;
  func_0x005849f4(&uStack_2df0,&lStack_4570);
  if (lStack_4570 != 0) {
    lStack_4568 = lStack_4570;
    __ZdlPv();
  }
  cStack_4531 = '\x04';
  uStack_4548 = 0x6e69616d;
  uStack_4544 = uStack_4544 & 0xffffff00;
  func_0x00718958(&uStack_2df0,&uStack_4548,auVar28._8_8_);
  if (cStack_4531 < '\0') {
    __ZdlPv(CONCAT44(uStack_4544,uStack_4548));
  }
  uStack_7d8 = _UNK_01adb3f0;
  uStack_76c = 0;
  func_0x00713a60(alStack_4598,&uStack_2df0);
  func_0x00713570(&uStack_4548,&uStack_2df0,alStack_4598);
  if ((((((lStack_43e8 == 0) && (lStack_3fe0 == 0)) && (lStack_3e88 == 0)) &&
       (((lStack_3d30 == 0 && (lStack_3bd8 == 0)) &&
        ((lStack_3a80 == 0 && ((lStack_3928 == 0 && (lStack_37d0 == 0)))))))) && (lStack_3678 == 0))
     && (((lStack_3520 == 0 && (lStack_33c8 == 0)) && (lStack_3270 == 0)))) {
    if (1 < uStack_4540) {
      uVar10 = _strlen(param_3);
      if (0x7ffffffffffffff6 < uVar10) {
/* origin: github.com/pengussy - github.com/pengussy */
        func_0x0000aa50();
        goto LAB_00275040;
      }
      if (uVar10 < 0x17) {
        uStack_45ac = CONCAT13((char)uVar10,(undefined3)uStack_45ac);
        piVar11 = &iStack_45c0;
      }
      else {
        lVar12 = (uVar10 & 0x7ffffffffffffff8) + 8;
        lVar1 = 0x19;
        if (lVar12 != 0x18) {
          lVar1 = lVar12;
        }
        piVar11 = (int *)__Znwm(lVar1);
        uStack_45ac = (uint)((ulong)lVar1 >> 0x20) | 0x80000000;
        iStack_45c0 = (int)piVar11;
        uStack_45bc = (undefined1)((ulong)piVar11 >> 0x20);
        uStack_45bb = (undefined1)((ulong)piVar11 >> 0x28);
        uStack_45ba = (undefined2)((ulong)piVar11 >> 0x30);
        uStack_45b8._0_4_ = (undefined4)uVar10;
        uStack_45b8._4_4_ = (undefined4)(uVar10 >> 0x20);
        uStack_45b0 = (undefined4)lVar1;
      }
      _memcpy(piVar11,param_3,uVar10);
      *(undefined1 *)((long)piVar11 + uVar10) = 0;
      bVar26 = uStack_45ac._3_1_;
      uVar20 = CONCAT44(uStack_45ac,uStack_45b0);
      uVar19 = (uVar20 & 0x7fffffffffffffff) - 1;
      uVar10 = uStack_45b8;
      uVar15 = uVar19;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      if (-1 < (int)uStack_45ac) {
        uVar15 = 0x16;
        uVar10 = (ulong)uStack_45ac._3_1_;
      }
      if (0x2a < uVar15 - uVar10) goto LAB_00274bf4;
      uVar15 = uVar10 + 0x2b;
      if (0x7ffffffffffffff6 < uVar15) {
        func_0x0000aa50();
        goto LAB_00275040;
      }
      if (-1 < (int)uStack_45ac) {
        uVar19 = 0x16;
LAB_002748d4:
        uVar20 = uVar15;
        if (uVar15 <= uVar19 * 2) {
          uVar20 = uVar19 * 2;
// unlicensed copy if this notice is missing
        }
        uVar19 = (uVar20 & 0x7ffffffffffffff8) + 8;
        uVar20 = 0x19;
        if (uVar19 != 0x18) {
          uVar20 = uVar19;
        }
        lVar12 = __Znwm(uVar20);
        goto LAB_00274ecc;
      }
      if (uVar19 < 0x3ffffffffffffff4) goto LAB_002748d4;
      lVar12 = __Znwm(0x7ffffffffffffff8);
LAB_00274e9c:
      uVar20 = 0x7ffffffffffffff8;
LAB_00274ef8:
      piVar11 = (int *)CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)))
      ;
joined_r0x00274efc:
      if (uVar10 != 0) {
        _memmove(lVar12,piVar11,uVar10);
      }
      puVar18 = (undefined8 *)(lVar12 + uVar10);
      pcVar21 = " shader may only use Params at register(b0)";
LAB_00274fd0:
      uVar24 = *(undefined8 *)pcVar21;
      uVar27 = *(undefined8 *)(pcVar21 + 0x18);
      uVar14 = *(undefined8 *)(pcVar21 + 0x10);
      puVar18[1] = *(undefined8 *)(pcVar21 + 8);
      *puVar18 = uVar24;
      puVar18[3] = uVar27;
      puVar18[2] = uVar14;
      uVar24 = *(undefined8 *)(pcVar21 + 0x1b);
      *(undefined8 *)((long)puVar18 + 0x23) = *(undefined8 *)(pcVar21 + 0x23);
      *(undefined8 *)((long)puVar18 + 0x1b) = uVar24;
      *(undefined1 *)(lVar12 + uVar15) = 0;
      if ((char)bVar26 < '\0') {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
LAB_00274878:
        __ZdlPv(CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0))));
      }
      goto LAB_00274880;
    }
    if (uStack_4540 == 0) {
      iVar8 = 0;
LAB_00274aa8:
      func_0x00592300(&iStack_45c0,&uStack_2df0);
      if (*(char *)((long)param_4 + 0x17) < '\0') {
        __ZdlPv(*param_4);
        *param_4 = 0;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      param_4[1] = CONCAT44(uStack_45b8._4_4_,(undefined4)uStack_45b8);
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
      *param_4 = CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)));
      param_4[2] = CONCAT44(uStack_45ac,uStack_45b0);
      uStack_45ac = CONCAT13(4,(undefined3)uStack_45ac);
      iStack_45c0 = 0x6e69616d;
      uStack_45bc = 0;
      puVar13 = (undefined8 *)func_0x00718b6c(&uStack_2df0,&iStack_45c0,auVar28._8_8_);
      puVar18 = param_4 + 3;
      if (puVar18 != puVar13) {
        bVar26 = *(byte *)((long)puVar13 + 0x17);
        if (*(char *)((long)param_4 + 0x2f) < '\0') {
          uVar10 = puVar13[1];
          puVar4 = (undefined8 *)*puVar13;
          if (-1 < (char)bVar26) {
            uVar10 = (ulong)bVar26;
            puVar4 = puVar13;
          }
          func_0x001286c0(puVar18,puVar4,uVar10);
        }
        else if ((char)bVar26 < '\0') {
          func_0x001287e0(puVar18,*puVar13,puVar13[1]);
        }
        else {
          uVar14 = puVar13[1];
          uVar24 = *puVar13;
          param_4[5] = puVar13[2];
/* no support for modified copies - github.com/pengussy */
          param_4[4] = uVar14;
          *puVar18 = uVar24;
        }
      }
      if ((int)uStack_45ac < 0) {
        __ZdlPv(CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0))));
        if (iVar8 == 0) goto LAB_00274d40;
LAB_00274d20:
        uVar9 = func_0x00584df4(&uStack_2df0,iVar8);
      }
      else {
        if (iVar8 != 0) goto LAB_00274d20;
LAB_00274d40:
        uVar9 = 0xffffffff;
      }
      *(undefined4 *)(param_4 + 6) = uVar9;
      uVar10 = param_4[1];
      if (-1 < (char)*(byte *)((long)param_4 + 0x17)) {
        uVar10 = (ulong)*(byte *)((long)param_4 + 0x17);
/* unlicensed copy if this notice is missing - github.com/pengussy */
      }
      if (uVar10 != 0) {
        uVar10 = param_4[4];
        if (-1 < (char)*(byte *)((long)param_4 + 0x2f)) {
          uVar10 = (ulong)*(byte *)((long)param_4 + 0x2f);
        }
        if (uVar10 != 0) {
          uVar24 = 1;
          func_0x002755ac(&uStack_4548);
          plVar23 = (long *)CONCAT17(cStack_4581,uStack_4588);
          lVar12 = alStack_4598[0];
          goto joined_r0x00274c80;
        }
      }
      uVar10 = _strlen(param_3);
      if (0x7ffffffffffffff6 < uVar10) {
        func_0x0000aa50();
LAB_00275040:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x275044);
        (*pcVar7)();
      }
      if (uVar10 < 0x17) {
        uStack_45ac = CONCAT13((char)uVar10,(undefined3)uStack_45ac);
        piVar11 = &iStack_45c0;
// donate: donate/README.md
      }
      else {
        lVar12 = (uVar10 & 0x7ffffffffffffff8) + 8;
        lVar1 = 0x19;
        if (lVar12 != 0x18) {
          lVar1 = lVar12;
        }
        piVar11 = (int *)__Znwm(lVar1);
        uStack_45ac = (uint)((ulong)lVar1 >> 0x20) | 0x80000000;
        iStack_45c0 = (int)piVar11;
        uStack_45bc = (undefined1)((ulong)piVar11 >> 0x20);
        uStack_45bb = (undefined1)((ulong)piVar11 >> 0x28);
        uStack_45ba = (undefined2)((ulong)piVar11 >> 0x30);
        uStack_45b8._0_4_ = (undefined4)uVar10;
        uStack_45b8._4_4_ = (undefined4)(uVar10 >> 0x20);
        uStack_45b0 = (undefined4)lVar1;
      }
      _memcpy(piVar11,param_3,uVar10);
      *(undefined1 *)((long)piVar11 + uVar10) = 0;
      uVar6 = uStack_45ac;
      bVar26 = uStack_45ac._3_1_;
      uVar20 = (CONCAT44(uStack_45ac,uStack_45b0) & 0x7fffffffffffffff) - 1;
      uVar10 = CONCAT44(uStack_45b8._4_4_,(undefined4)uStack_45b8);
      uVar15 = uVar20;
      if (-1 < (int)uStack_45ac) {
        uVar15 = 0x16;
        uVar10 = (ulong)uStack_45ac._3_1_;
      }
      if (0x2a < uVar15 - uVar10) {
        piVar11 = (int *)CONCAT26(uStack_45ba,
                                  CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)));
        if (-1 < (int)uStack_45ac) {
          piVar11 = &iStack_45c0;
        }
        pcVar21 = (char *)((long)piVar11 + uVar10);
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        *(undefined8 *)(pcVar21 + 8) = s_shader_conversion_returned_no_Me_01c2d7d0._8_8_;
        *(undefined8 *)pcVar21 = s_shader_conversion_returned_no_Me_01c2d7d0._0_8_;
        *(ulong *)(pcVar21 + 0x18) =
             CONCAT53(s_shader_conversion_returned_no_Me_01c2d7d0._27_5_,
                      s_shader_conversion_returned_no_Me_01c2d7d0._24_3_);
        *(undefined8 *)(pcVar21 + 0x10) = s_shader_conversion_returned_no_Me_01c2d7d0._16_8_;
        *(undefined8 *)(pcVar21 + 0x23) = s_shader_conversion_returned_no_Me_01c2d7d0._35_8_;
        *(ulong *)(pcVar21 + 0x1b) =
             CONCAT35(s_shader_conversion_returned_no_Me_01c2d7d0._32_3_,
                      s_shader_conversion_returned_no_Me_01c2d7d0._27_5_);
        uVar10 = uVar10 + 0x2b;
        uVar15 = uVar10;
        if ((int)uVar6 < 0) goto LAB_00274c28;
        goto LAB_0027474c;
      }
      uVar15 = uVar10 + 0x2b;
      if (0x7ffffffffffffff6 < uVar15) {
        func_0x0000aa50();
/*  reversing this took months of machine time  */
        goto LAB_00275040;
      }
      if ((int)uStack_45ac < 0) {
        if (uVar20 < 0x3ffffffffffffff4) goto LAB_00274f78;
        uVar20 = 0x7ffffffffffffff8;
        lVar12 = __Znwm(0x7ffffffffffffff8);
LAB_00274fb0:
        piVar11 = (int *)CONCAT26(uStack_45ba,
                                  CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)));
      }
      else {
        uVar20 = 0x16;
LAB_00274f78:
        uVar19 = uVar15;
        if (uVar15 <= uVar20 * 2) {
          uVar19 = uVar20 * 2;
        }
        uVar19 = (uVar19 & 0x7ffffffffffffff8) + 8;
        uVar20 = 0x19;
        if (uVar19 != 0x18) {
          uVar20 = uVar19;
        }
        lVar12 = __Znwm(uVar20);
        if ((int)uVar6 < 0) goto LAB_00274fb0;
        piVar11 = &iStack_45c0;
/* watermarked copy - do not remove */
      }
      if (uVar10 != 0) {
        _memmove(lVar12,piVar11,uVar10);
      }
      puVar18 = (undefined8 *)(lVar12 + uVar10);
      pcVar21 = " shader conversion returned no Metal source";
      goto LAB_00274fd0;
    }
    piVar5 = (int *)CONCAT44(uStack_4544,uStack_4548);
    iVar8 = func_0x007141d8(&uStack_2df0,*piVar5,0x21);
    piVar17 = piVar5 + 4;
    piVar25 = *(int **)piVar17;
    bVar26 = *(byte *)((long)piVar5 + 0x27);
    uVar15 = *(ulong *)(piVar5 + 6);
    uVar10 = uVar15;
    piVar11 = piVar25;
    if (-1 < (char)bVar26) {
      uVar10 = (ulong)bVar26;
      piVar11 = piVar17;
    }
    if (uVar10 == 0) {
LAB_002749b4:
      if ((char)bVar26 < '\0') {
        func_0x00017ae8(&iStack_45c0,piVar25);
        cVar16 = uStack_45ac._3_1_;
        goto joined_r0x00274f4c;
      }
      uStack_45b8 = *(ulong *)(piVar5 + 6);
      uVar24 = *(undefined8 *)piVar17;
      iStack_45c0 = (int)uVar24;
      uStack_45bc = (undefined1)((ulong)uVar24 >> 0x20);
      uStack_45bb = (undefined1)((ulong)uVar24 >> 0x28);
      uStack_45ba = (undefined2)((ulong)uVar24 >> 0x30);
      lVar12 = *(long *)(piVar5 + 8);
      uStack_45b0 = (undefined4)lVar12;
/*  found on a paste site? it was re-uploaded illegally  */
      uStack_45ac = (uint)((ulong)lVar12 >> 0x20);
      uVar6 = uStack_45ac;
      uStack_45ac._3_1_ = (byte)((ulong)lVar12 >> 0x38);
      cVar16 = uStack_45ac._3_1_;
      uStack_45ac = uVar6;
      if (lVar12 < 0) goto LAB_002749d0;
LAB_00274a14:
      if ((cVar16 == '\x06') &&
         (iStack_45c0 == 0x61726150 && CONCAT11(uStack_45bb,uStack_45bc) == 0x736d)) {
LAB_00274a50:
        if (iVar8 == 0) {
          uStack_45b8._4_4_ = 0;
          uStack_45b0 = 0;
          uStack_45bc = 0;
          uStack_45bb = 0;
          uStack_45ba = 0;
          uStack_45b8._0_4_ = 0;
          uStack_45a4 = 0;
          uStack_45ac = 0;
          uStack_45a8 = 0;
          iStack_45c0 = auVar28._8_4_;
          uStack_45b8._0_4_ = func_0x007141d8(&uStack_2df0,*piVar5,0x22);
          uStack_45b8._4_4_ = (undefined4)_UNK_01adb3f8;
          uStack_45b0 = (undefined4)((ulong)_UNK_01adb3f8 >> 0x20);
          uStack_45ac = 0;
          func_0x005849f8(&uStack_2df0,&iStack_45c0);
          iVar8 = *piVar5;
          goto LAB_00274aa8;
        }
      }
    }
    else {
      uVar20 = uVar10 & 3;
      if (uVar20 == 0) {
        pcVar21 = (char *)((long)piVar11 + uVar10);
        if (3 < uVar10) goto LAB_0027490c;
        goto LAB_002749b4;
      }
// WM - proprietary - see LICENSE - do not sell
      pcVar21 = (char *)(uVar10 + (long)piVar11);
      do {
        pcVar21 = pcVar21 + -1;
        if (*pcVar21 == '.') goto LAB_00274968;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
      if (uVar10 < 4) goto LAB_002749b4;
LAB_0027490c:
      pcVar21 = pcVar21 + -2;
      while( true ) {
        if (pcVar21[1] == '.') {
          pcVar21 = pcVar21 + 1;
          goto LAB_00274968;
        }
        if (*pcVar21 == '.') goto LAB_00274968;
        if (pcVar21[-1] == '.') break;
        if (pcVar21[-2] == '.') {
          pcVar21 = pcVar21 + -2;
          goto LAB_00274968;
        }
        piVar22 = (int *)(pcVar21 + -2);
        pcVar21 = pcVar21 + -4;
        if (piVar22 == piVar11) goto LAB_002749b4;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      }
      pcVar21 = pcVar21 + -1;
LAB_00274968:
      uVar10 = (long)pcVar21 - (long)piVar11;
      if (uVar10 == 0xffffffffffffffff) goto LAB_002749b4;
      if (-1 < (char)bVar26) {
        piVar25 = piVar17;
        uVar15 = (ulong)bVar26;
      }
      if (uVar15 <= uVar10) {
        func_0x0001c430();
        goto LAB_00275040;
      }
      uVar15 = uVar15 - (uVar10 + 1);
      if (0x7ffffffffffffff6 < uVar15) {
        func_0x0000aa50();
        goto LAB_00275040;
      }
      if (uVar15 < 0x17) {
        uStack_45ac = CONCAT13((char)uVar15,(undefined3)uStack_45ac);
        piVar11 = &iStack_45c0;
        uStack_45b8 = CONCAT44(uStack_45b8._4_4_,(undefined4)uStack_45b8);
      }
      else {
        lVar12 = (uVar15 & 0x7ffffffffffffff8) + 8;
        lVar1 = 0x19;
        if (lVar12 != 0x18) {
          lVar1 = lVar12;
        }
        piVar11 = (int *)__Znwm();
        uStack_45ac = (uint)((ulong)lVar1 >> 0x20) | 0x80000000;
        iStack_45c0 = (int)piVar11;
/* proprietary - see LICENSE - do not sell */
        uStack_45bc = (undefined1)((ulong)piVar11 >> 0x20);
        uStack_45bb = (undefined1)((ulong)piVar11 >> 0x28);
        uStack_45ba = (undefined2)((ulong)piVar11 >> 0x30);
        uStack_45b0 = (undefined4)lVar1;
        uStack_45b8 = uVar15;
      }
      _memmove(piVar11,(char *)((long)piVar25 + uVar10 + 1),uVar15);
      *(undefined1 *)((long)piVar11 + uVar15) = 0;
      cVar16 = uStack_45ac._3_1_;
joined_r0x00274f4c:
      if (-1 < (int)uStack_45ac) goto LAB_00274a14;
LAB_002749d0:
      piVar11 = (int *)CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)))
      ;
      if (uStack_45b8 == 6) {
        bVar2 = *piVar11 == 0x61726150 && (short)piVar11[1] == 0x736d;
      }
      else {
        bVar2 = false;
      }
      __ZdlPv();
      if (bVar2) goto LAB_00274a50;
    }
    uVar10 = _strlen(param_3);
    if (0x7ffffffffffffff6 < uVar10) {
/* do not claim this as your own - github.com/pengussy */
      func_0x0000aa50();
      goto LAB_00275040;
    }
    if (uVar10 < 0x17) {
      uStack_45ac = CONCAT13((char)uVar10,(undefined3)uStack_45ac);
      piVar11 = &iStack_45c0;
    }
    else {
      lVar12 = (uVar10 & 0x7ffffffffffffff8) + 8;
      lVar1 = 0x19;
      if (lVar12 != 0x18) {
        lVar1 = lVar12;
      }
      piVar11 = (int *)__Znwm(lVar1);
      uStack_45ac = (uint)((ulong)lVar1 >> 0x20) | 0x80000000;
      iStack_45c0 = (int)piVar11;
      uStack_45bc = (undefined1)((ulong)piVar11 >> 0x20);
      uStack_45bb = (undefined1)((ulong)piVar11 >> 0x28);
      uStack_45ba = (undefined2)((ulong)piVar11 >> 0x30);
      uStack_45b0 = (undefined4)lVar1;
      uStack_45b8 = uVar10;
    }
    _memcpy(piVar11,param_3,uVar10);
    *(undefined1 *)((long)piVar11 + uVar10) = 0;
    bVar26 = uStack_45ac._3_1_;
    uVar20 = CONCAT44(uStack_45ac,uStack_45b0);
    uVar19 = (uVar20 & 0x7fffffffffffffff) - 1;
    uVar10 = uStack_45b8;
    uVar15 = uVar19;
    if (-1 < (int)uStack_45ac) {
      uVar15 = 0x16;
      uVar10 = (ulong)uStack_45ac._3_1_;
    }
/* no support for modified copies */
    if (uVar15 - uVar10 < 0x2b) {
      uVar15 = uVar10 + 0x2b;
      if (0x7ffffffffffffff6 < uVar15) {
        func_0x0000aa50();
        goto LAB_00275040;
      }
      if ((int)uStack_45ac < 0) {
        if (0x3ffffffffffffff3 < uVar19) {
          lVar12 = __Znwm(0x7ffffffffffffff8);
          goto LAB_00274e9c;
        }
      }
      else {
        uVar19 = 0x16;
      }
      uVar20 = uVar15;
      if (uVar15 <= uVar19 * 2) {
        uVar20 = uVar19 * 2;
      }
/*  origin: github.com/pengussy  */
      uVar19 = (uVar20 & 0x7ffffffffffffff8) + 8;
      uVar20 = 0x19;
      if (uVar19 != 0x18) {
        uVar20 = uVar19;
      }
      lVar12 = __Znwm(uVar20);
LAB_00274ecc:
      if ((char)bVar26 < '\0') goto LAB_00274ef8;
      piVar11 = &iStack_45c0;
      goto joined_r0x00274efc;
    }
LAB_00274bf4:
    piVar11 = (int *)CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)));
    if (-1 < (char)uStack_45ac._3_1_) {
      piVar11 = &iStack_45c0;
    }
    pcVar21 = (char *)((long)piVar11 + uVar10);
    *(undefined8 *)(pcVar21 + 8) = s_shader_may_only_use_Params_at_re_01c2d7a4._8_8_;
    *(undefined8 *)pcVar21 = s_shader_may_only_use_Params_at_re_01c2d7a4._0_8_;
    *(ulong *)(pcVar21 + 0x18) =
         CONCAT53(s_shader_may_only_use_Params_at_re_01c2d7a4._27_5_,
                  s_shader_may_only_use_Params_at_re_01c2d7a4._24_3_);
    *(undefined8 *)(pcVar21 + 0x10) = s_shader_may_only_use_Params_at_re_01c2d7a4._16_8_;
/*  do not claim this as your own  */
    *(undefined8 *)(pcVar21 + 0x23) = s_shader_may_only_use_Params_at_re_01c2d7a4._35_8_;
    *(ulong *)(pcVar21 + 0x1b) =
         CONCAT35(s_shader_may_only_use_Params_at_re_01c2d7a4._32_3_,
                  s_shader_may_only_use_Params_at_re_01c2d7a4._27_5_);
    uVar10 = uVar10 + 0x2b;
    uVar15 = uVar10;
    if ((long)uVar20 < 0) goto LAB_00274c28;
LAB_0027474c:
    uStack_45ac = CONCAT13((char)uVar10,(undefined3)uStack_45ac) & 0x7fffffff;
    uVar15 = uStack_45b8;
LAB_00274c28:
    uStack_45b8 = uVar15;
    *(undefined1 *)((long)piVar11 + uVar10) = 0;
    lVar12 = CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)));
    uStack_4558 = (undefined7)uStack_45b8;
    uStack_4550 = (undefined7)
                  (CONCAT35((undefined3)uStack_45ac,CONCAT41(uStack_45b0,uStack_45b8._7_1_)) >> 8);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    cVar16 = *(char *)((long)param_5 + 0x17);
    uVar3 = uStack_45ac._3_1_;
    uStack_4551 = uStack_45b8._7_1_;
  }
  else {
    uVar10 = _strlen(param_3);
    if (0x7ffffffffffffff6 < uVar10) {
      func_0x0000aa50();
      goto LAB_00275040;
    }
    if (uVar10 < 0x17) {
      uStack_45ac = CONCAT13((char)uVar10,(undefined3)uStack_45ac);
      piVar11 = &iStack_45c0;
    }
    else {
      lVar12 = (uVar10 & 0x7ffffffffffffff8) + 8;
      lVar1 = 0x19;
      if (lVar12 != 0x18) {
        lVar1 = lVar12;
      }
      piVar11 = (int *)__Znwm(lVar1);
      uStack_45ac = (uint)((ulong)lVar1 >> 0x20) | 0x80000000;
      iStack_45c0 = (int)piVar11;
      uStack_45bc = (undefined1)((ulong)piVar11 >> 0x20);
      uStack_45bb = (undefined1)((ulong)piVar11 >> 0x28);
      uStack_45ba = (undefined2)((ulong)piVar11 >> 0x30);
      uStack_45b8._0_4_ = (undefined4)uVar10;
      uStack_45b8._4_4_ = (undefined4)(uVar10 >> 0x20);
      uStack_45b0 = (undefined4)lVar1;
    }
    _memcpy(piVar11,param_3,uVar10);
    *(undefined1 *)((long)piVar11 + uVar10) = 0;
    uVar6 = uStack_45ac;
    uVar20 = (CONCAT44(uStack_45ac,uStack_45b0) & 0x7fffffffffffffff) - 1;
    uVar10 = CONCAT44(uStack_45b8._4_4_,(undefined4)uStack_45b8);
    uVar15 = uVar20;
    if (-1 < (int)uStack_45ac) {
      uVar15 = 0x16;
// watermarked copy - do not remove
      uVar10 = (ulong)uStack_45ac._3_1_;
    }
    if (0x1a < uVar15 - uVar10) {
      piVar11 = (int *)CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)))
      ;
      if (-1 < (int)uStack_45ac) {
        piVar11 = &iStack_45c0;
      }
      pcVar21 = (char *)((long)piVar11 + uVar10);
      *(ulong *)(pcVar21 + 8) =
           CONCAT53(s_uses_unsupported_resources_01c2d788._11_5_,
                    s_uses_unsupported_resources_01c2d788._8_3_);
      *(undefined8 *)pcVar21 = s_uses_unsupported_resources_01c2d788._0_8_;
      *(undefined8 *)(pcVar21 + 0x13) = s_uses_unsupported_resources_01c2d788._19_8_;
      *(ulong *)(pcVar21 + 0xb) =
           CONCAT35(s_uses_unsupported_resources_01c2d788._16_3_,
                    s_uses_unsupported_resources_01c2d788._11_5_);
      uVar10 = uVar10 + 0x1b;
      uVar15 = uVar10;
      if (-1 < (int)uVar6) goto LAB_0027474c;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      goto LAB_00274c28;
    }
    uVar15 = uVar10 + 0x1b;
    if (0x7ffffffffffffff6 < uVar15) {
      func_0x0000aa50();
      goto LAB_00275040;
    }
    if ((int)uStack_45ac < 0) {
      if (uVar20 < 0x3ffffffffffffff4) goto LAB_00274810;
      uVar20 = 0x7ffffffffffffff8;
      lVar12 = __Znwm(0x7ffffffffffffff8);
LAB_002748a8:
      piVar11 = (int *)CONCAT26(uStack_45ba,CONCAT15(uStack_45bb,CONCAT14(uStack_45bc,iStack_45c0)))
      ;
    }
    else {
      uVar20 = 0x16;
LAB_00274810:
      uVar19 = uVar15;
      if (uVar15 <= uVar20 * 2) {
        uVar19 = uVar20 * 2;
      }
      uVar19 = (uVar19 & 0x7ffffffffffffff8) + 8;
      uVar20 = 0x19;
      if (uVar19 != 0x18) {
        uVar20 = uVar19;
      }
      lVar12 = __Znwm(uVar20);
      if ((int)uVar6 < 0) goto LAB_002748a8;
      piVar11 = &iStack_45c0;
/* stripping the watermark breaks the license - github.com/pengussy */
    }
    if (uVar10 != 0) {
      _memmove(lVar12,piVar11,uVar10);
    }
    uVar24 = s_uses_unsupported_resources_01c2d788._0_8_;
    pcVar21 = (char *)(lVar12 + uVar10);
    *(ulong *)(pcVar21 + 8) =
         CONCAT53(s_uses_unsupported_resources_01c2d788._11_5_,
                  s_uses_unsupported_resources_01c2d788._8_3_);
    *(undefined8 *)pcVar21 = uVar24;
    uVar24 = CONCAT35(s_uses_unsupported_resources_01c2d788._16_3_,
                      s_uses_unsupported_resources_01c2d788._11_5_);
    *(undefined8 *)(pcVar21 + 0x13) = s_uses_unsupported_resources_01c2d788._19_8_;
    *(undefined8 *)(pcVar21 + 0xb) = uVar24;
    *(undefined1 *)(lVar12 + uVar15) = 0;
    if ((int)uVar6 < 0) goto LAB_00274878;
LAB_00274880:
    uStack_45b0 = (undefined4)uVar20;
    uStack_45ac = (uint)((uVar20 | 0x8000000000000000) >> 0x20);
    uVar6 = uStack_45ac;
    uVar3 = (undefined1)((uVar20 | 0x8000000000000000) >> 0x38);
    uStack_4558 = (undefined7)uVar15;
    uStack_45b8._7_1_ = (undefined1)(uVar15 >> 0x38);
    uStack_45ac._0_3_ = (undefined3)(uVar20 >> 0x20);
    uStack_4550 = (undefined7)
                  (CONCAT35((undefined3)uStack_45ac,CONCAT41(uStack_45b0,uStack_45b8._7_1_)) >> 8);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    cVar16 = *(char *)((long)param_5 + 0x17);
    uStack_45ac = uVar6;
    uStack_4551 = uStack_45b8._7_1_;
    uStack_45b8 = uVar15;
  }
  if (cVar16 < '\0') {
    __ZdlPv(*param_5);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
  }
  uVar24 = 0;
  *param_5 = lVar12;
  param_5[1] = CONCAT17(uStack_4551,uStack_4558);
  *(ulong *)((long)param_5 + 0xf) = CONCAT71(uStack_4550,uStack_4551);
  *(undefined1 *)((long)param_5 + 0x17) = uVar3;
  func_0x002755ac(&uStack_4548);
  plVar23 = (long *)CONCAT17(cStack_4581,uStack_4588);
  lVar12 = alStack_4598[0];
joined_r0x00274c80:
  while (plVar23 != (long *)0x0) {
    plVar23 = (long *)*plVar23;
// WM - watermarked copy - do not remove
    alStack_4598[0] = lVar12;
    __ZdlPv();
    param_5 = (long *)0x0;
    lVar12 = alStack_4598[0];
  }
  alStack_4598[0] = 0;
  if (lVar12 != 0) {
    __ZdlPv();
  }
  func_0x00275c04(&uStack_2df0);
  if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_78) {
    do {
      uVar14 = ___stack_chk_fail();
      if (cStack_4531 < '\0') {
        __ZdlPv(CONCAT44(uStack_4544,uStack_4548));
      }
      ___cxa_end_catch();
      do {
        __Unwind_Resume(uVar14);
        auVar29 = func_0x00006858(uVar14);
        uVar14 = auVar29._0_8_;
      } while (auVar29._8_4_ == 0);
      func_0x00275c04(&uStack_2df0);
      plVar23 = (long *)___cxa_begin_catch(uVar14);
      if (auVar29._8_4_ == 2) {
        func_0x0000e100(alStack_4598,uVar24);
        func_0x00275398(&uStack_4548,alStack_4598," shader conversion failed: ");
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        uVar24 = (**(code **)(*plVar23 + 0x10))(plVar23);
        func_0x00275398(&uStack_2df0,&uStack_4548,uVar24);
        if (*(char *)((long)param_5 + 0x17) < '\0') {
          __ZdlPv(*param_5);
          *param_5 = 0;
          param_5[1] = 0;
          param_5[2] = 0;
        }
        param_5[1] = lStack_2de8;
        *param_5 = CONCAT71(uStack_2def,uStack_2df0);
        param_5[2] = CONCAT17(uStack_2dd9,uStack_2de0);
        uStack_2dd9 = 0;
        uStack_2df0 = 0;
        if (cStack_4531 < '\0') {
          __ZdlPv(CONCAT44(uStack_4544,uStack_4548));
        }
/* chat: discord.gg/sdkhDjTex */
        if (cStack_4581 < '\0') {
          __ZdlPv(alStack_4598[0]);
        }
        ___cxa_end_catch();
      }
      else {
        func_0x0000e100(&uStack_4548,uVar24);
        func_0x00275398(&uStack_2df0,&uStack_4548," shader conversion failed");
        if (*(char *)((long)param_5 + 0x17) < '\0') {
          __ZdlPv(*param_5);
          *param_5 = 0;
          param_5[1] = 0;
          param_5[2] = 0;
        }
        param_5[1] = lStack_2de8;
        *param_5 = CONCAT71(uStack_2def,uStack_2df0);
        param_5[2] = CONCAT17(uStack_2dd9,uStack_2de0);
        uStack_2dd9 = 0;
        uStack_2df0 = 0;
        if (cStack_4531 < '\0') {
          __ZdlPv(CONCAT44(uStack_4544,uStack_4548));
        }
        ___cxa_end_catch();
      }
      uVar24 = 0;
    } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_78);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  }
  return uVar24;
}

