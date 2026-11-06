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
 *  file-id: 0x17ef14:afe507d407
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0017ef14(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long lVar15;
/* wm:no support for modified copies */
  char *pcVar16;
  long *plVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long *unaff_x22;
  ulong unaff_x23;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined1 auVar24 [16];
  undefined4 uStack_1a0;
  undefined2 uStack_19c;
  undefined2 uStack_19a;
  char cStack_189;
  undefined8 auStack_188 [2];
  char cStack_171;
  long lStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [16];
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 uStack_138;
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  long *plStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  int iStack_a4;
/* no support for modified copies */
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_81;
  undefined8 *puStack_80;
  undefined1 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  puVar22 = (undefined8 *)(param_1 + 0x38);
  uStack_68 = (undefined1 *)*puVar22;
  *(undefined1 **)(param_1 + 0x40) = uStack_68;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  uStack_81 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  puStack_80 = &uStack_68;
  puStack_78 = &uStack_81;
  puStack_70 = puVar22;
  if (uStack_68 < *(undefined1 **)(param_1 + 0x48)) {
    *uStack_68 = uStack_81;
    puVar13 = uStack_68 + 1;
  }
  else {
    func_0x0003b960(&puStack_80);
    puVar13 = uStack_68;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  }
  plVar17 = (long *)(param_1 + 0x50);
  *(undefined1 **)(param_1 + 0x40) = puVar13;
  iVar6 = *(int *)(param_1 + 0x14);
  iVar18 = 5;
  if (iVar6 - 0x31U < 9) {
    iStack_a4 = 5;
LAB_0017efb4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar17,(int)(char)iVar6);
    lStack_98 = 1;
    lStack_a0 = 1;
    do {
      *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lStack_98;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lStack_a0;
      if (*(char *)(param_1 + 0x18) != '\x01') {
        plVar9 = *(long **)(param_1 + 8);
        pbVar2 = (byte *)plVar9[3];
        if (pbVar2 != (byte *)plVar9[4]) {
          bVar3 = *pbVar2;
          plVar9[3] = (long)(pbVar2 + 1);
          uVar5 = (uint)bVar3;
          *(uint *)(param_1 + 0x14) = uVar5;
          goto joined_r0x0017f04c;
        }
        uVar5 = (**(code **)(*plVar9 + 0x50))(plVar9);
        if (uVar5 != 0xffffffff) {
          *(uint *)(param_1 + 0x14) = uVar5;
          goto joined_r0x0017f04c;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        }
        func_0x019cb784(param_1);
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
LAB_0017f1c4:
        iVar18 = iStack_a4;
        goto LAB_0017f20c;
      }
      *(undefined1 *)(param_1 + 0x18) = 0;
      uVar5 = *(uint *)(param_1 + 0x14);
joined_r0x0017f04c:
      if (uVar5 == 0xffffffff) goto LAB_0017f1c4;
      uStack_81 = (undefined1)uVar5;
      uStack_68 = *(undefined1 **)(param_1 + 0x40);
      puStack_80 = &uStack_68;
      puStack_78 = &uStack_81;
      if (uStack_68 < *(undefined1 **)(param_1 + 0x48)) {
        *uStack_68 = uStack_81;
        *(undefined1 **)(param_1 + 0x40) = uStack_68 + 1;
        uVar5 = *(uint *)(param_1 + 0x14);
        puStack_70 = puVar22;
        iVar18 = iStack_a4;
      }
      else {
        puStack_70 = puVar22;
        func_0x0003b960(&puStack_80);
        *(undefined1 **)(param_1 + 0x40) = uStack_68;
        uVar5 = *(uint *)(param_1 + 0x14);
        iVar18 = iStack_a4;
      }
      iStack_a4 = iVar18;
      if (9 < uVar5 - 0x30) goto LAB_0017f1cc;
      bVar3 = *(byte *)(param_1 + 0x67);
      if ((char)bVar3 < '\0') {
        uVar19 = *(ulong *)(param_1 + 0x58);
        uVar14 = *(ulong *)(param_1 + 0x60) & 0x7fffffffffffffff;
        uVar20 = uVar14 - 1;
// WM - watermarked copy - do not remove
        if (uVar19 == uVar20) {
          if (uVar14 < 0x7ffffffffffffff7) {
            if (uVar20 < 0x3ffffffffffffff4) goto LAB_0017f110;
            unaff_x23 = 0x7ffffffffffffff8;
            unaff_x22 = (long *)__Znwm(0x7ffffffffffffff8);
LAB_0017f144:
            plVar9 = (long *)*plVar17;
            uVar19 = uVar20;
            goto LAB_0017f148;
          }
          func_0x0000aa50();
          func_0x00006858();
          auVar24 = func_0x00006858();
          lVar12 = auVar24._8_8_;
          lVar15 = auVar24._0_8_;
          pcStack_b8 = FUN_0017f4d4;
          lStack_118 = 0;
          lStack_110 = 0;
          uStack_108 = 0;
          puVar1 = (undefined8 *)(lVar15 + 0x78);
          puStack_100 = &uStack_68;
          puStack_f8 = puVar22;
          uStack_f0 = (ulong)uVar5;
          uStack_e8 = unaff_x23;
          plStack_e0 = unaff_x22;
          uStack_d8 = uVar20;
          plStack_d0 = plVar17;
          lStack_c8 = param_1;
          lStack_c0 = (long)register0x00000008 + -0x10;
          goto LAB_0017f518;
        }
        unaff_x22 = (long *)*plVar17;
LAB_0017f17c:
        *(ulong *)(param_1 + 0x58) = uVar19 + 1;
      }
// WM - donate: donate/README.md
      else {
        if (bVar3 == 0x16) {
          uVar20 = 0x16;
          uVar14 = 0x17;
LAB_0017f110:
          if (uVar14 <= uVar20 * 2) {
            uVar14 = uVar20 * 2;
          }
          uVar14 = (uVar14 & 0x7ffffffffffffff8) + 8;
          unaff_x23 = 0x19;
          if (uVar14 != 0x18) {
            unaff_x23 = uVar14;
          }
          unaff_x22 = (long *)__Znwm(unaff_x23);
          plVar9 = plVar17;
          uVar19 = uVar20;
          if ((char)bVar3 < '\0') goto LAB_0017f144;
LAB_0017f148:
          if (uVar19 != 0) {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
            _memmove(unaff_x22,plVar9,uVar19);
          }
          if ((char)bVar3 < '\0') {
            __ZdlPv(*plVar17);
          }
          *(long **)(param_1 + 0x50) = unaff_x22;
          *(ulong *)(param_1 + 0x60) = unaff_x23 | 0x8000000000000000;
          goto LAB_0017f17c;
        }
        uVar19 = (ulong)bVar3;
        *(byte *)(param_1 + 0x67) = bVar3 + 1 & 0x7f;
        unaff_x22 = plVar17;
      }
      *(undefined1 *)((long)unaff_x22 + uVar19) = (char)uVar5;
      ((undefined1 *)((long)unaff_x22 + uVar19))[1] = 0;
    } while( true );
  }
  if (iVar6 != 0x30) {
    if (iVar6 == 0x2d) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar17,0x2d);
    }
    iVar6 = func_0x01995708(param_1);
// WM - unlicensed copy if this notice is missing
    if (iVar6 - 0x31U < 9) {
      iVar6 = *(int *)(param_1 + 0x14);
      iStack_a4 = 6;
      goto LAB_0017efb4;
    }
    if (iVar6 != 0x30) {
      pcVar16 = "invalid number; expected digit after \'-\'";
      goto LAB_0017f458;
    }
    iVar6 = *(int *)(param_1 + 0x14);
    iVar18 = 6;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (plVar17,(int)(char)iVar6);
  iVar6 = func_0x01995708(param_1);
  if ((iVar6 != 0x65) && (iVar6 != 0x45)) {
    if (iVar6 != 0x2e) goto LAB_0017f20c;
LAB_0017f3a4:
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar17,(long)*(char *)(param_1 + 0x88));
    lVar15 = (long)*(char *)(param_1 + 0x67);
    if (lVar15 < 0) {
      lVar15 = *(long *)(param_1 + 0x58);
    }
    *(long *)(param_1 + 0x90) = lVar15 + -1;
    iVar6 = func_0x01995708(param_1);
    if (9 < iVar6 - 0x30U) {
      pcVar16 = "invalid number; expected digit after \'.\'";
      goto LAB_0017f458;
    }
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar17,(long)*(char *)(param_1 + 0x14));
      iVar6 = func_0x01995708(param_1);
    } while (iVar6 - 0x30U < 10);
// no support for modified copies
    if ((iVar6 != 0x65) && (iVar6 != 0x45)) {
      iVar18 = 7;
      goto LAB_0017f20c;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x14);
LAB_0017f420:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
            (plVar17,(int)(char)uVar5);
  iVar6 = func_0x01995708(param_1);
  if (9 < iVar6 - 0x30U) {
    if ((iVar6 != 0x2d) && (iVar6 != 0x2b)) {
      pcVar16 = "invalid number; expected \'+\', \'-\', or digit after exponent";
LAB_0017f458:
      *(char **)(param_1 + 0x68) = pcVar16;
      return 0xe;
// WM - no support for modified copies
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar17,(long)*(char *)(param_1 + 0x14));
    iVar6 = func_0x01995708(param_1);
    if (9 < iVar6 - 0x30U) {
      pcVar16 = "invalid number; expected digit after exponent sign";
      goto LAB_0017f458;
    }
  }
  func_0x019cb798(param_1 + 0x14,param_1 + 0x50,param_1,&puStack_80);
  iVar18 = (int)puStack_80;
LAB_0017f20c:
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
  if (*(long *)(param_1 + 0x28) == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -1;
    }
  }
  else {
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  }
  if (*(int *)(param_1 + 0x14) != -1) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
  }
  puStack_80 = (undefined8 *)0x0;
  puVar8 = (undefined4 *)___error();
  *puVar8 = 0;
  if (iVar18 == 6) {
    plVar9 = plVar17;
    if (*(char *)(param_1 + 0x67) < '\0') {
      plVar9 = (long *)*plVar17;
// do not claim this as your own
    }
    uVar10 = _strtoll(plVar9,&puStack_80,10);
    piVar11 = (int *)___error();
    if (*piVar11 != 0x22) {
      *(undefined8 *)(param_1 + 0x70) = uVar10;
      return 6;
    }
  }
  else if (iVar18 == 5) {
    plVar9 = plVar17;
    if (*(char *)(param_1 + 0x67) < '\0') {
      plVar9 = (long *)*plVar17;
    }
    uVar10 = _strtoull(plVar9,&puStack_80,10);
    piVar11 = (int *)___error();
    if (*piVar11 != 0x22) {
      *(undefined8 *)(param_1 + 0x78) = uVar10;
      return 5;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    }
  }
  if (*(char *)(param_1 + 0x67) < '\0') {
    plVar17 = (long *)*plVar17;
  }
  uVar10 = _strtod(plVar17,&puStack_80);
  *(undefined8 *)(param_1 + 0x80) = uVar10;
  return 7;
LAB_0017f1cc:
  if ((int)uVar5 < 0x2e) {
    if (uVar5 == 10) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
    }
    goto LAB_0017f20c;
  }
  if (uVar5 == 0x2e) goto LAB_0017f3a4;
  if ((uVar5 != 0x45) && (uVar5 != 0x65)) goto LAB_0017f20c;
  goto LAB_0017f420;
LAB_0017f518:
  switch(*(undefined4 *)(lVar15 + 0x20)) {
  case 1:
    puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
    func_0x00185454(lVar12,&puStack_158,0);
    break;
  case 2:
    puStack_158 = (undefined *)((ulong)puStack_158._1_7_ << 8);
    func_0x00185454(lVar12,&puStack_158,0);
    break;
  case 3:
    puStack_158 = (undefined *)0x0;
    func_0x00185668(lVar12,&puStack_158,0);
    break;
  case 4:
    if ((*(int *)(lVar15 + 0xb0) != 0x2e) && (*(long *)(lVar15 + 0xb8) != -1)) {
      puVar22 = puVar1;
      if (*(char *)(lVar15 + 0x8f) < '\0') {
/* WM - keep the notice, keep the source honest */
        puVar22 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)((long)puVar22 + *(long *)(lVar15 + 0xb8)) = 0x2e;
    }
    func_0x00185a84(lVar12,puVar1,0);
    break;
  case 5:
    puStack_158 = *(undefined **)(lVar15 + 0xa0);
    func_0x00185cf8(lVar12,&puStack_158,0);
    break;
  case 6:
    puStack_158 = *(undefined **)(lVar15 + 0x98);
    func_0x00185874(lVar12,&puStack_158,0);
    break;
  case 7:
    puVar23 = *(undefined **)(lVar15 + 0xa8);
    if (0x7fefffffffffffff < ((ulong)puVar23 & 0x7fffffffffffffff)) {
      uVar10 = *(undefined8 *)(lVar15 + 0x48);
      func_0x001801f0(auStack_130,lVar15 + 0x28);
      func_0x001801f0(auStack_188,lVar15 + 0x28);
      uStack_1a0 = CONCAT31(uStack_1a0._1_3_,0x27);
      func_0x0018281c(&lStack_170,"number overflow parsing \'",auStack_188,&uStack_1a0);
      func_0x0018264c(&puStack_158,0x196,&lStack_170,0);
      uVar10 = func_0x00182620(lVar12,uVar10,auStack_130,&puStack_158);
      puStack_158 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_148);
      __ZNSt9exceptionD2Ev(&puStack_158);
      if (lStack_160 < 0) {
        __ZdlPv(lStack_170);
      }
/*  watermarked copy - do not remove  */
      if (cStack_171 < '\0') {
LAB_0017fd40:
        __ZdlPv(auStack_188[0]);
      }
LAB_0017fd44:
      if (cStack_119 < '\0') {
        __ZdlPv(auStack_130[0]);
      }
      goto LAB_0017f848;
    }
    if ((*(int *)(lVar15 + 0xb0) != 0x2e) && (*(long *)(lVar15 + 0xb8) != -1)) {
      puVar22 = puVar1;
      if (*(char *)(lVar15 + 0x8f) < '\0') {
        puVar22 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)((long)puVar22 + *(long *)(lVar15 + 0xb8)) = 0x2e;
    }
    puStack_158 = puVar23;
    func_0x0018523c(lVar12,&puStack_158,0);
    break;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  case 8:
    iVar6 = func_0x001822e0(lVar12,0xffffffffffffffff);
    if (iVar6 == 0) goto LAB_0017fae4;
    iVar6 = func_0x0017de64(lVar15 + 0x28);
    *(int *)(lVar15 + 0x20) = iVar6;
    if (iVar6 != 10) {
      puStack_158 = (undefined *)CONCAT71(puStack_158._1_7_,1);
      func_0x00181b98(&lStack_118,&puStack_158);
      goto LAB_0017f518;
    }
    uVar14 = func_0x001824e4(lVar12);
LAB_0017f6ac:
    if ((uVar14 & 1) == 0) goto LAB_0017fae4;
    break;
  case 9:
    uVar14 = func_0x00181cb4(lVar12,0xffffffffffffffff);
    if ((uVar14 & 1) == 0) goto LAB_0017fae4;
    iVar6 = func_0x0017de64(lVar15 + 0x28);
    *(int *)(lVar15 + 0x20) = iVar6;
    if (iVar6 == 0xb) {
      uVar14 = func_0x00181eb0(lVar12);
      goto LAB_0017f6ac;
    }
    if (iVar6 != 4) {
      lVar21 = *(long *)(lVar15 + 0x48);
      func_0x001801f0(auStack_130,lVar15 + 0x28);
      uStack_168 = *(undefined8 *)(lVar15 + 0x50);
      lStack_170 = *(long *)(lVar15 + 0x48);
      lStack_160 = *(long *)(lVar15 + 0x58);
      func_0x0000e100(&uStack_1a0,"object key");
      FUN_001805c8(auStack_188,lVar15,4,&uStack_1a0);
      func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
      uVar10 = func_0x001801c4(lVar12,lVar21,auStack_130,&puStack_158);
LAB_0017fd04:
      puStack_158 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_148);
      __ZNSt9exceptionD2Ev(&puStack_158);
/*  no support for modified copies  */
      if (cStack_171 < '\0') {
        __ZdlPv(auStack_188[0]);
      }
      if (cStack_189 < '\0') {
        auStack_188[0] = CONCAT26(uStack_19a,CONCAT24(uStack_19c,uStack_1a0));
        goto LAB_0017fd40;
      }
      goto LAB_0017fd44;
    }
    if ((*(int *)(lVar15 + 0xb0) != 0x2e) && (*(long *)(lVar15 + 0xb8) != -1)) {
      puVar22 = puVar1;
      if (*(char *)(lVar15 + 0x8f) < '\0') {
        puVar22 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)((long)puVar22 + *(long *)(lVar15 + 0xb8)) = 0x2e;
    }
    iVar6 = func_0x0018211c(lVar12,puVar1);
    if (iVar6 == 0) goto LAB_0017fae4;
    iVar6 = func_0x0017de64(lVar15 + 0x28);
    *(int *)(lVar15 + 0x20) = iVar6;
    if (iVar6 != 0xc) {
      lVar21 = *(long *)(lVar15 + 0x48);
      func_0x001801f0(auStack_130,lVar15 + 0x28);
      uStack_168 = *(undefined8 *)(lVar15 + 0x50);
      lStack_170 = *(long *)(lVar15 + 0x48);
      lStack_160 = *(long *)(lVar15 + 0x58);
      func_0x0000e100(&uStack_1a0,"object separator");
      FUN_001805c8(auStack_188,lVar15,0xc,&uStack_1a0);
      func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
      uVar10 = func_0x001801c4(lVar12,lVar21,auStack_130,&puStack_158);
      goto LAB_0017fd04;
    }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    puStack_158 = (undefined *)((ulong)puStack_158 & 0xffffffffffffff00);
    func_0x00181b98(&lStack_118,&puStack_158);
    uVar7 = func_0x0017de64(lVar15 + 0x28);
    *(undefined4 *)(lVar15 + 0x20) = uVar7;
    goto LAB_0017f518;
  default:
    goto LAB_0017f874;
  case 0xe:
    func_0x001801f0(auStack_130,lVar15 + 0x28);
    uStack_168 = *(undefined8 *)(lVar15 + 0x50);
    lStack_170 = *(long *)(lVar15 + 0x48);
    lStack_160 = *(long *)(lVar15 + 0x58);
    cStack_189 = '\x05';
    uStack_1a0 = 0x756c6176;
    uStack_19c = 0x65;
    FUN_001805c8(auStack_188,lVar15,0,&uStack_1a0);
    func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
    *(undefined1 *)(lVar12 + 0x58) = 1;
    if (*(char *)(lVar12 + 0x80) != '\x01') goto LAB_0017faac;
    puVar22 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar22 = &UNK_01dbfd98;
    *(undefined4 *)(puVar22 + 1) = uStack_150;
    __ZNSt13runtime_errorC1ERKS_(puVar22 + 2,auStack_148);
    *puVar22 = &UNK_01dbfe98;
    puVar22[4] = uStack_138;
    ___cxa_throw(puVar22,&UNK_01dbfe70,&DAT_00180c74);
    goto LAB_0017ffcc;
  case 0xf:
    plVar17 = (long *)(lVar15 + 0x48);
    if (*plVar17 == 1) {
      func_0x001801f0(auStack_130,lVar15 + 0x28);
      uStack_168 = *(undefined8 *)(lVar15 + 0x50);
      lStack_170 = *plVar17;
      lStack_160 = *(long *)(lVar15 + 0x58);
      func_0x0000e100(auStack_188,
/* WM - more drops soon - github.com/pengussy */
                      "attempting to parse an empty input; check that your input string or stream contains the expected JSON"
                     );
      func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
      uVar10 = func_0x001801c4(lVar12,1,auStack_130,&puStack_158);
      func_0x019cb7f8(&puStack_158,auStack_188,auStack_130,&lStack_170);
      goto LAB_0017f848;
    }
    func_0x001801f0(auStack_130,lVar15 + 0x28);
    uStack_168 = *(undefined8 *)(lVar15 + 0x50);
    lStack_170 = *plVar17;
    lStack_160 = *(long *)(lVar15 + 0x58);
    cStack_189 = '\x05';
    uStack_1a0 = 0x756c6176;
    uStack_19c = 0x65;
    FUN_001805c8(auStack_188,lVar15,0x10,&uStack_1a0);
    func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
    *(undefined1 *)(lVar12 + 0x58) = 1;
    if (*(char *)(lVar12 + 0x80) != '\x01') goto LAB_0017faac;
    puVar22 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar22 = &UNK_01dbfd98;
    *(undefined4 *)(puVar22 + 1) = uStack_150;
    __ZNSt13runtime_errorC1ERKS_(puVar22 + 2,auStack_148);
    *puVar22 = &UNK_01dbfe98;
    puVar22[4] = uStack_138;
    ___cxa_throw(puVar22,&UNK_01dbfe70,&DAT_00180c74);
/*  stripping the watermark breaks the license  */
    goto LAB_0017ffcc;
  }
  if (lStack_110 != 0) {
    do {
      if ((*(ulong *)(lStack_118 + (lStack_110 - 1U >> 6) * 8) >> (lStack_110 - 1U & 0x3f) & 1) == 0
         ) {
        iVar6 = func_0x0017de64(lVar15 + 0x28);
        *(int *)(lVar15 + 0x20) = iVar6;
        if (iVar6 == 0xd) {
          iVar6 = func_0x0017de64(lVar15 + 0x28);
          *(int *)(lVar15 + 0x20) = iVar6;
          if (iVar6 != 4) {
            lVar21 = *(long *)(lVar15 + 0x48);
            func_0x001801f0(auStack_130,lVar15 + 0x28);
            uStack_168 = *(undefined8 *)(lVar15 + 0x50);
            lStack_170 = *(long *)(lVar15 + 0x48);
            lStack_160 = *(long *)(lVar15 + 0x58);
            func_0x0000e100(&uStack_1a0,"object key");
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
            FUN_001805c8(auStack_188,lVar15,4,&uStack_1a0);
            func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
            uVar10 = func_0x001801c4(lVar12,lVar21,auStack_130,&puStack_158);
            goto LAB_0017fd04;
          }
          if ((*(int *)(lVar15 + 0xb0) != 0x2e) && (*(long *)(lVar15 + 0xb8) != -1)) {
            puVar22 = puVar1;
            if (*(char *)(lVar15 + 0x8f) < '\0') {
              puVar22 = (undefined8 *)*puVar1;
            }
            *(undefined1 *)((long)puVar22 + *(long *)(lVar15 + 0xb8)) = 0x2e;
          }
          iVar6 = func_0x0018211c(lVar12,puVar1);
          if (iVar6 == 0) goto LAB_0017fae4;
          iVar6 = func_0x0017de64(lVar15 + 0x28);
          *(int *)(lVar15 + 0x20) = iVar6;
          if (iVar6 == 0xc) {
            uVar7 = func_0x0017de64(lVar15 + 0x28);
            *(undefined4 *)(lVar15 + 0x20) = uVar7;
            goto LAB_0017f518;
          }
          lVar21 = *(long *)(lVar15 + 0x48);
          func_0x001801f0(auStack_130,lVar15 + 0x28);
          uStack_168 = *(undefined8 *)(lVar15 + 0x50);
          lStack_170 = *(long *)(lVar15 + 0x48);
          lStack_160 = *(long *)(lVar15 + 0x58);
          func_0x0000e100(&uStack_1a0,"object separator");
          FUN_001805c8(auStack_188,lVar15,0xc,&uStack_1a0);
          func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
          uVar10 = func_0x001801c4(lVar12,lVar21,auStack_130,&puStack_158);
          goto LAB_0017fd04;
        }
        if (iVar6 != 0xb) {
          lVar21 = *(long *)(lVar15 + 0x48);
          func_0x001801f0(auStack_130,lVar15 + 0x28);
          uStack_168 = *(undefined8 *)(lVar15 + 0x50);
          lStack_170 = *(long *)(lVar15 + 0x48);
          lStack_160 = *(long *)(lVar15 + 0x58);
/* stripping the watermark breaks the license */
          func_0x0000e100(&uStack_1a0,"object");
          FUN_001805c8(auStack_188,lVar15,0xb,&uStack_1a0);
          func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
          uVar10 = func_0x001801c4(lVar12,lVar21,auStack_130,&puStack_158);
          goto LAB_0017fd04;
        }
        uVar14 = func_0x00181eb0(lVar12);
      }
      else {
        iVar6 = func_0x0017de64(lVar15 + 0x28);
        *(int *)(lVar15 + 0x20) = iVar6;
        if (iVar6 == 0xd) goto LAB_0017f734;
        if (iVar6 != 10) {
          lVar21 = *(long *)(lVar15 + 0x48);
          func_0x001801f0(auStack_130,lVar15 + 0x28);
          uStack_168 = *(undefined8 *)(lVar15 + 0x50);
          lStack_170 = *(long *)(lVar15 + 0x48);
          lStack_160 = *(long *)(lVar15 + 0x58);
          func_0x0000e100(&uStack_1a0,"array");
          FUN_001805c8(auStack_188,lVar15,10,&uStack_1a0);
          func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
          uVar10 = func_0x001801c4(lVar12,lVar21,auStack_130,&puStack_158);
          goto LAB_0017fd04;
        }
        uVar14 = func_0x001824e4(lVar12);
      }
      if ((uVar14 & 1) == 0) goto LAB_0017fae4;
      lStack_110 = lStack_110 + -1;
      if (lStack_110 == 0) break;
/* wm:if you paid for this, you were scammed */
    } while( true );
  }
  uVar10 = 1;
  goto LAB_0017f848;
LAB_0017f734:
  uVar7 = func_0x0017de64(lVar15 + 0x28);
  *(undefined4 *)(lVar15 + 0x20) = uVar7;
  goto LAB_0017f518;
LAB_0017f874:
  func_0x001801f0(auStack_130,lVar15 + 0x28);
  uStack_168 = *(undefined8 *)(lVar15 + 0x50);
  lStack_170 = *(long *)(lVar15 + 0x48);
  lStack_160 = *(long *)(lVar15 + 0x58);
  cStack_189 = '\x05';
  uStack_1a0 = 0x756c6176;
  uStack_19c = 0x65;
  FUN_001805c8(auStack_188,lVar15,0x10,&uStack_1a0);
  func_0x00180380(&puStack_158,0x65,&lStack_170,auStack_188,0);
  *(undefined1 *)(lVar12 + 0x58) = 1;
  if (*(char *)(lVar12 + 0x80) == '\x01') {
// if you paid for this, you were scammed
    puVar22 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar22 = &UNK_01dbfd98;
    *(undefined4 *)(puVar22 + 1) = uStack_150;
    __ZNSt13runtime_errorC1ERKS_(puVar22 + 2,auStack_148);
    *puVar22 = &UNK_01dbfe98;
    puVar22[4] = uStack_138;
    ___cxa_throw(puVar22,&UNK_01dbfe70,&DAT_00180c74);
LAB_0017ffcc:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x17ffd0);
    (*pcVar4)();
  }
LAB_0017faac:
  puStack_158 = &UNK_01dbfd98;
  __ZNSt13runtime_errorD1Ev(auStack_148);
  __ZNSt9exceptionD2Ev(&puStack_158);
  if (cStack_171 < '\0') {
    __ZdlPv(auStack_188[0]);
  }
  if (cStack_189 < '\0') {
    __ZdlPv(CONCAT26(uStack_19a,CONCAT24(uStack_19c,uStack_1a0)));
  }
  if (cStack_119 < '\0') {
    __ZdlPv(auStack_130[0]);
/* wm:proprietary - see LICENSE - do not sell */
  }
LAB_0017fae4:
  uVar10 = 0;
LAB_0017f848:
  if (lStack_118 != 0) {
    __ZdlPv();
  }
  return uVar10;
}

