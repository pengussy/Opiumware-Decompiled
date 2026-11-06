/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x273698:97d1015bd8
 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_00273698(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5,long *param_6)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  char cVar6;
  long *plVar7;
  undefined7 uVar8;
  undefined1 uVar9;
  undefined7 uVar10;
  code *pcVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  undefined7 *puVar15;
  undefined8 *******pppppppuVar16;
  undefined8 uVar17;
  undefined8 *******pppppppuVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long *plStack_128;
  undefined4 uStack_11c;
  undefined8 *******pppppppuStack_118;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  byte bStack_101;
  long *plStack_100;
  long *plStack_f8;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 uStack_e1;
  undefined7 uStack_e0;
  byte bStack_d9;
  undefined7 uStack_d8;
  undefined1 uStack_d1;
  undefined7 uStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  byte bStack_b1;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  undefined1 uStack_71;
  undefined4 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
/* stripping the watermark breaks the license */
  plStack_f8 = (long *)0x0;
  iVar12 = func_0x00006280(&UNK_01adb438,&UNK_01ad7428,&plStack_f8);
  if ((iVar12 < 0) || (plStack_f8 == (long *)0x0)) {
    uVar14 = _strlen(param_4);
    if (uVar14 < 0x7ffffffffffffff7) {
      if (uVar14 < 0x17) {
        bStack_b1 = (byte)uVar14;
        pppppppuVar16 = &pppppppuStack_c8;
      }
      else {
        lVar13 = (uVar14 & 0x7ffffffffffffff8) + 8;
        lVar1 = 0x19;
        if (lVar13 != 0x18) {
          lVar1 = lVar13;
        }
        pppppppuVar16 = (undefined8 *******)__Znwm(lVar1);
        bStack_b1 = (byte)((ulong)lVar1 >> 0x38) | 0x80;
        uStack_c0 = (undefined7)uVar14;
        uStack_b9 = (undefined1)(uVar14 >> 0x38);
        uStack_b8 = (undefined7)lVar1;
        pppppppuStack_c8 = pppppppuVar16;
      }
      _memcpy(pppppppuVar16,param_4,uVar14);
      *(undefined1 *)((long)pppppppuVar16 + uVar14) = 0;
      bVar5 = bStack_b1;
      uVar20 = (CONCAT17(bStack_b1,uStack_b8) & 0x7fffffffffffffff) - 1;
      uVar3 = CONCAT17(uStack_b9,uStack_c0);
      uVar14 = uVar20;
      if (-1 < (char)bStack_b1) {
        uVar14 = 0x16;
        uVar3 = (ulong)bStack_b1;
      }
      if (uVar14 - uVar3 < 0x25) {
        uVar14 = uVar3 + 0x25;
        if (0x7ffffffffffffff6 < uVar14) {
          func_0x0000aa50();
          goto LAB_002742c4;
        }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        if ((char)bStack_b1 < '\0') {
          if (uVar20 < 0x3ffffffffffffff4) goto LAB_00273a8c;
          lVar13 = 0x7ffffffffffffff8;
          pppppppuVar16 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar18 = pppppppuStack_c8;
        }
        else {
          uVar20 = 0x16;
LAB_00273a8c:
          uVar4 = uVar14;
          if (uVar14 <= uVar20 * 2) {
            uVar4 = uVar20 * 2;
          }
          lVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
          lVar13 = 0x19;
          if (lVar1 != 0x18) {
            lVar13 = lVar1;
          }
          pppppppuVar16 = (undefined8 *******)__Znwm(lVar13);
          pppppppuVar18 = pppppppuStack_c8;
          if (-1 < (char)bVar5) {
            pppppppuVar18 = &pppppppuStack_c8;
          }
        }
        if (uVar3 != 0) {
          _memmove(pppppppuVar16,pppppppuVar18,uVar3);
// WM - keep the notice, keep the source honest
        }
        uVar21 = s_shader_compiler_could_not_be_cre_01c2d6f5._16_8_;
        uVar17 = s_shader_compiler_could_not_be_cre_01c2d6f5._0_8_;
        pcVar2 = (char *)((long)pppppppuVar16 + uVar3);
        uVar22 = CONCAT35(s_shader_compiler_could_not_be_cre_01c2d6f5._29_3_,
                          s_shader_compiler_could_not_be_cre_01c2d6f5._24_5_);
        *(undefined8 *)(pcVar2 + 8) = s_shader_compiler_could_not_be_cre_01c2d6f5._8_8_;
        *(undefined8 *)pcVar2 = uVar17;
        *(undefined8 *)(pcVar2 + 0x18) = uVar22;
        *(undefined8 *)(pcVar2 + 0x10) = uVar21;
        *(ulong *)(pcVar2 + 0x1d) =
             CONCAT53(s_shader_compiler_could_not_be_cre_01c2d6f5._32_5_,
                      s_shader_compiler_could_not_be_cre_01c2d6f5._29_3_);
        *(undefined1 *)((long)pppppppuVar16 + uVar14) = 0;
        if ((char)bVar5 < '\0') {
          __ZdlPv(pppppppuStack_c8);
        }
        bStack_b1 = (byte)((ulong)lVar13 >> 0x38) | 0x80;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
        uStack_c0 = (undefined7)uVar14;
        uStack_b9 = (undefined1)(uVar14 >> 0x38);
        uStack_b8 = (undefined7)lVar13;
      }
      else {
        pppppppuVar16 = pppppppuStack_c8;
        if (-1 < (char)bStack_b1) {
          pppppppuVar16 = &pppppppuStack_c8;
        }
        pcVar2 = (char *)((long)pppppppuVar16 + uVar3);
        *(undefined8 *)(pcVar2 + 8) = s_shader_compiler_could_not_be_cre_01c2d6f5._8_8_;
        *(undefined8 *)pcVar2 = s_shader_compiler_could_not_be_cre_01c2d6f5._0_8_;
        *(ulong *)(pcVar2 + 0x18) =
             CONCAT35(s_shader_compiler_could_not_be_cre_01c2d6f5._29_3_,
                      s_shader_compiler_could_not_be_cre_01c2d6f5._24_5_);
        *(undefined8 *)(pcVar2 + 0x10) = s_shader_compiler_could_not_be_cre_01c2d6f5._16_8_;
        *(ulong *)(pcVar2 + 0x1d) =
             CONCAT53(s_shader_compiler_could_not_be_cre_01c2d6f5._32_5_,
                      s_shader_compiler_could_not_be_cre_01c2d6f5._29_3_);
        lVar13 = uVar3 + 0x25;
        if ((char)bVar5 < '\0') {
          uStack_c0 = (undefined7)lVar13;
          uStack_b9 = (undefined1)((ulong)lVar13 >> 0x38);
        }
        else {
          bStack_b1 = (byte)lVar13 & 0x7f;
        }
/* WM - proprietary - see LICENSE - do not sell */
        *(undefined1 *)((long)pppppppuVar16 + lVar13) = 0;
        pppppppuVar16 = pppppppuStack_c8;
      }
      bVar5 = bStack_b1;
      uStack_80 = uStack_c0;
      uStack_79 = uStack_b9;
      uStack_78 = uStack_b8;
      if (*(char *)((long)param_6 + 0x17) < '\0') {
        __ZdlPv(*param_6);
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0;
      }
      uVar22 = 0;
      *param_6 = (long)pppppppuVar16;
      param_6[1] = CONCAT17(uStack_79,uStack_80);
      *(ulong *)((long)param_6 + 0xf) = CONCAT71(uStack_78,uStack_79);
      *(byte *)((long)param_6 + 0x17) = bVar5;
/* no support for modified copies */
      goto LAB_00274110;
    }
  }
  else {
    uStack_80 = (undefined7)param_1;
    uStack_79 = (undefined1)((ulong)param_1 >> 0x38);
    uStack_78 = (undefined7)param_2;
    uStack_71 = (undefined1)((ulong)param_2 >> 0x38);
    uStack_70 = 0xfde9;
    pppppppuStack_c8 = (undefined8 *******)&UNK_01adb448;
    uStack_c0 = 0x1adb454;
    uStack_b9 = 0;
    uStack_b8 = 0x1adb468;
    bStack_b1 = 0;
    puStack_a8 = &UNK_01adb474;
    puStack_a0 = &UNK_01adb490;
    puStack_98 = &UNK_01adb508;
    puStack_90 = &UNK_01adb568;
    puStack_88 = &UNK_01adb5cc;
    plStack_100 = (long *)0x0;
    uStack_b0 = param_3;
    iVar12 = (**(code **)(*plStack_f8 + 0x18))
                       (plStack_f8,&uStack_80,&pppppppuStack_c8,9,0,&UNK_01ad7160,&plStack_100);
    if ((iVar12 < 0) || (plStack_100 == (long *)0x0)) {
      uVar14 = _strlen(param_4);
/* wm:more drops soon - github.com/pengussy */
      if (0x7ffffffffffffff6 < uVar14) {
        func_0x0000aa50();
        goto LAB_002742c4;
      }
      if (uVar14 < 0x17) {
        bStack_101 = (byte)uVar14;
        pppppppuVar16 = &pppppppuStack_118;
      }
      else {
        lVar13 = (uVar14 & 0x7ffffffffffffff8) + 8;
        lVar1 = 0x19;
        if (lVar13 != 0x18) {
          lVar1 = lVar13;
        }
        pppppppuVar16 = (undefined8 *******)__Znwm(lVar1);
        bStack_101 = (byte)((ulong)lVar1 >> 0x38) | 0x80;
        uStack_110 = (undefined7)uVar14;
        uStack_109 = (undefined1)(uVar14 >> 0x38);
        uStack_108 = (undefined7)lVar1;
        pppppppuStack_118 = pppppppuVar16;
      }
      _memcpy(pppppppuVar16,param_4,uVar14);
      *(undefined1 *)((long)pppppppuVar16 + uVar14) = 0;
      bVar5 = bStack_101;
      uVar20 = (CONCAT17(bStack_101,uStack_108) & 0x7fffffffffffffff) - 1;
      uVar3 = CONCAT17(uStack_109,uStack_110);
      uVar14 = uVar20;
      if (-1 < (char)bStack_101) {
        uVar14 = 0x16;
        uVar3 = (ulong)bStack_101;
/* donate: donate/README.md */
      }
      if (uVar14 - uVar3 < 0x28) {
        uVar14 = uVar3 + 0x28;
        if (0x7ffffffffffffff6 < uVar14) {
          func_0x0000aa50();
          goto LAB_002742c4;
        }
        if ((char)bStack_101 < '\0') {
          if (uVar20 < 0x3ffffffffffffff4) goto LAB_00273d40;
          lVar13 = 0x7ffffffffffffff8;
          pppppppuVar16 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar18 = pppppppuStack_118;
        }
        else {
          uVar20 = 0x16;
LAB_00273d40:
          uVar4 = uVar14;
          if (uVar14 <= uVar20 * 2) {
            uVar4 = uVar20 * 2;
          }
          lVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
          lVar13 = 0x19;
          if (lVar1 != 0x18) {
            lVar13 = lVar1;
          }
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          pppppppuVar16 = (undefined8 *******)__Znwm(lVar13);
          pppppppuVar18 = pppppppuStack_118;
          if (-1 < (char)bVar5) {
            pppppppuVar18 = &pppppppuStack_118;
          }
        }
        if (uVar3 != 0) {
          _memmove(pppppppuVar16,pppppppuVar18,uVar3);
        }
        uVar21 = s_shader_compilation_could_not_be_s_01c2d71b._24_8_;
        uVar17 = s_shader_compilation_could_not_be_s_01c2d71b._16_8_;
        uVar22 = s_shader_compilation_could_not_be_s_01c2d71b._0_8_;
        pcVar2 = (char *)((long)pppppppuVar16 + uVar3);
        *(undefined8 *)(pcVar2 + 8) = s_shader_compilation_could_not_be_s_01c2d71b._8_8_;
        *(undefined8 *)pcVar2 = uVar22;
        *(undefined8 *)(pcVar2 + 0x18) = uVar21;
        *(undefined8 *)(pcVar2 + 0x10) = uVar17;
        *(undefined8 *)(pcVar2 + 0x20) = s_shader_compilation_could_not_be_s_01c2d71b._32_8_;
        *(undefined1 *)((long)pppppppuVar16 + uVar14) = 0;
        if ((char)bVar5 < '\0') {
          __ZdlPv(pppppppuStack_118);
        }
        bStack_101 = (byte)((ulong)lVar13 >> 0x38) | 0x80;
        uStack_110 = (undefined7)uVar14;
        uStack_109 = (undefined1)(uVar14 >> 0x38);
        uStack_108 = (undefined7)lVar13;
        cVar6 = *(char *)((long)param_6 + 0x17);
/* if you paid for this, you were scammed - github.com/pengussy */
        bVar5 = bStack_101;
      }
      else {
        pppppppuVar16 = pppppppuStack_118;
        if (-1 < (char)bStack_101) {
          pppppppuVar16 = &pppppppuStack_118;
        }
        pcVar2 = (char *)((long)pppppppuVar16 + uVar3);
        *(undefined8 *)(pcVar2 + 8) = s_shader_compilation_could_not_be_s_01c2d71b._8_8_;
        *(undefined8 *)pcVar2 = s_shader_compilation_could_not_be_s_01c2d71b._0_8_;
        *(undefined8 *)(pcVar2 + 0x18) = s_shader_compilation_could_not_be_s_01c2d71b._24_8_;
        *(undefined8 *)(pcVar2 + 0x10) = s_shader_compilation_could_not_be_s_01c2d71b._16_8_;
        *(undefined8 *)(pcVar2 + 0x20) = s_shader_compilation_could_not_be_s_01c2d71b._32_8_;
        lVar13 = uVar3 + 0x28;
        if ((char)bVar5 < '\0') {
          uStack_110 = (undefined7)lVar13;
          uStack_109 = (undefined1)((ulong)lVar13 >> 0x38);
        }
        else {
          bStack_101 = (byte)lVar13 & 0x7f;
        }
        *(undefined1 *)((long)pppppppuVar16 + lVar13) = 0;
        cVar6 = *(char *)((long)param_6 + 0x17);
        pppppppuVar16 = pppppppuStack_118;
        bVar5 = bStack_101;
      }
/* do not claim this as your own */
      bStack_101 = bVar5;
      uStack_f0 = uStack_110;
      uStack_e9 = uStack_109;
      uStack_e8 = uStack_108;
      if (cVar6 < '\0') {
        __ZdlPv(*param_6);
        *param_6 = 0;
        param_6[1] = 0;
        param_6[2] = 0;
      }
      uVar22 = 0;
      *param_6 = (long)pppppppuVar16;
      param_6[1] = CONCAT17(uStack_e9,uStack_f0);
      *(ulong *)((long)param_6 + 0xf) = CONCAT71(uStack_e8,uStack_e9);
      *(byte *)((long)param_6 + 0x17) = bVar5;
    }
    else {
      uStack_11c = -0x7fffbffb;
      (**(code **)(*plStack_100 + 0x18))(plStack_100,&uStack_11c);
      if (uStack_11c < 0) {
        plStack_128 = (long *)0x0;
        (**(code **)(*plStack_100 + 0x38))(plStack_100,2,&UNK_01adb618,&plStack_128,0);
// if you paid for this, you were scammed
        plVar7 = plStack_128;
        if (((plStack_128 == (long *)0x0) ||
            (lVar13 = (**(code **)(*plStack_128 + 0x18))(plStack_128), lVar13 == 0)) ||
           (lVar13 = (**(code **)(*plVar7 + 0x20))(plVar7), lVar13 == 0)) {
          pppppppuStack_118 = (undefined8 *******)0x0;
          uStack_110 = 0;
          uStack_109 = 0;
          uStack_108 = 0;
          bStack_101 = 0;
        }
        else {
          uVar22 = (**(code **)(*plVar7 + 0x18))(plVar7);
          uVar14 = (**(code **)(*plVar7 + 0x20))(plVar7);
          if (0x7ffffffffffffff6 < uVar14) {
            func_0x0000aa50();
            goto LAB_002742c4;
          }
          if (uVar14 < 0x17) {
            bStack_101 = (byte)uVar14;
            pppppppuVar16 = &pppppppuStack_118;
          }
          else {
            lVar13 = (uVar14 & 0x7ffffffffffffff8) + 8;
            lVar1 = 0x19;
/* thanks for reading - discord.gg/sdkhDjTex */
            if (lVar13 != 0x18) {
              lVar1 = lVar13;
            }
            pppppppuVar16 = (undefined8 *******)__Znwm(lVar1);
            bStack_101 = (byte)((ulong)lVar1 >> 0x38) | 0x80;
            uStack_110 = (undefined7)uVar14;
            uStack_109 = (undefined1)(uVar14 >> 0x38);
            uStack_108 = (undefined7)lVar1;
            pppppppuStack_118 = pppppppuVar16;
          }
          _memmove(pppppppuVar16,uVar22,uVar14);
          *(undefined1 *)((long)pppppppuVar16 + uVar14) = 0;
          while( true ) {
            while (lVar13 = (long)(char)bStack_101, -1 < lVar13) {
              if ((bStack_101 == 0) ||
                 (bVar5 = *(byte *)((long)&uStack_11c + lVar13 + 3),
                 0xd < bVar5 || (1 << (ulong)(bVar5 & 0x1f) & 0x2401U) == 0)) goto LAB_00273dec;
              bStack_101 = bStack_101 - 1;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              *(undefined1 *)((long)&uStack_11c + lVar13 + 3) = 0;
            }
            lVar13 = CONCAT17(uStack_109,uStack_110);
            if ((lVar13 == 0) ||
               (bVar5 = *(byte *)((long)pppppppuStack_118 + lVar13 + -1),
               0xd < bVar5 || (1 << (ulong)(bVar5 & 0x1f) & 0x2401U) == 0)) break;
            lVar13 = lVar13 + -1;
            uStack_110 = (undefined7)lVar13;
            uStack_109 = (undefined1)((ulong)lVar13 >> 0x38);
            *(undefined1 *)((long)pppppppuStack_118 + lVar13) = 0;
          }
        }
LAB_00273dec:
        uVar14 = _strlen(param_4);
        if (0x7ffffffffffffff6 < uVar14) {
          func_0x0000aa50();
          goto LAB_002742c4;
        }
        if (uVar14 < 0x17) {
          bStack_d9 = (byte)uVar14;
          puVar15 = &uStack_f0;
        }
        else {
          lVar13 = (uVar14 & 0x7ffffffffffffff8) + 8;
          lVar1 = 0x19;
          if (lVar13 != 0x18) {
            lVar1 = lVar13;
          }
          puVar15 = (undefined7 *)__Znwm(lVar1);
          bStack_d9 = (byte)((ulong)lVar1 >> 0x38) | 0x80;
          uStack_f0 = SUB87(puVar15,0);
          uStack_e9 = (undefined1)((ulong)puVar15 >> 0x38);
          uStack_e8 = (undefined7)uVar14;
          uStack_e1 = (undefined1)(uVar14 >> 0x38);
          uStack_e0 = (undefined7)lVar1;
        }
        _memcpy(puVar15,param_4,uVar14);
// WM - do not claim this as your own
        *(undefined1 *)((long)puVar15 + uVar14) = 0;
        bVar5 = bStack_d9;
        lVar13 = (CONCAT17(bStack_d9,uStack_e0) & 0x7fffffffffffffff) - 1;
        uVar14 = CONCAT17(uStack_e1,uStack_e8);
        if (-1 < (char)bStack_d9) {
          lVar13 = 0x16;
          uVar14 = (ulong)bStack_d9;
        }
        if (lVar13 - uVar14 < 0x1a) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                    (&uStack_f0,lVar13,(uVar14 - lVar13) + 0x1a,uVar14,uVar14,0,0x1a,
                     " shader compilation failed");
        }
        else {
          puVar15 = (undefined7 *)CONCAT17(uStack_e9,uStack_f0);
          if (-1 < (char)bStack_d9) {
            puVar15 = &uStack_f0;
          }
          pcVar2 = (char *)((long)puVar15 + uVar14);
          *(ulong *)(pcVar2 + 8) =
               CONCAT62(s_shader_compilation_failed_01c2d744._10_6_,
                        s_shader_compilation_failed_01c2d744._8_2_);
          *(undefined8 *)pcVar2 = s_shader_compilation_failed_01c2d744._0_8_;
          *(undefined8 *)(pcVar2 + 0x12) = s_shader_compilation_failed_01c2d744._18_8_;
          *(ulong *)(pcVar2 + 10) =
               CONCAT26(s_shader_compilation_failed_01c2d744._16_2_,
                        s_shader_compilation_failed_01c2d744._10_6_);
          lVar13 = uVar14 + 0x1a;
          if ((char)bVar5 < '\0') {
            uStack_e8 = (undefined7)lVar13;
            uStack_e1 = (undefined1)((ulong)lVar13 >> 0x38);
          }
/* more drops soon - github.com/pengussy */
          else {
            bStack_d9 = (byte)lVar13 & 0x7f;
          }
          *(undefined1 *)((long)puVar15 + lVar13) = 0;
        }
        bVar5 = bStack_d9;
        uVar10 = uStack_e0;
        uVar9 = uStack_e1;
        uVar8 = uStack_e8;
        lVar13 = CONCAT17(uStack_e9,uStack_f0);
        uStack_d8 = uStack_e8;
        uStack_d1 = uStack_e1;
        uStack_d0 = uStack_e0;
        uStack_f0 = 0;
        uStack_e9 = 0;
        uStack_e8 = 0;
        uStack_e1 = 0;
        uStack_e0 = 0;
        bStack_d9 = '\0';
        if (*(char *)((long)param_6 + 0x17) < '\0') {
          __ZdlPv(*param_6);
          *param_6 = lVar13;
          param_6[1] = CONCAT17(uStack_d1,uStack_d8);
          *(ulong *)((long)param_6 + 0xf) = CONCAT71(uStack_d0,uStack_d1);
          *(byte *)((long)param_6 + 0x17) = bVar5;
          if ((char)bStack_d9 < '\0') {
            __ZdlPv(CONCAT17(uStack_e9,uStack_f0));
          }
        }
        else {
          *param_6 = lVar13;
          param_6[1] = CONCAT17(uVar9,uVar8);
          *(ulong *)((long)param_6 + 0xf) = CONCAT71(uVar10,uVar9);
          *(byte *)((long)param_6 + 0x17) = bVar5;
// watermarked copy - do not remove
        }
        uVar19 = (uint)(char)bStack_101;
        uVar14 = CONCAT17(uStack_109,uStack_110);
        if (-1 < (int)uVar19) {
          uVar14 = (ulong)bStack_101;
        }
        if (uVar14 != 0) {
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&uStack_f0,": ",&pppppppuStack_118);
          func_0x00099358(param_6,&uStack_f0);
          if ((char)bStack_d9 < '\0') {
            __ZdlPv(CONCAT17(uStack_e9,uStack_f0));
          }
          uVar19 = (uint)bStack_101;
        }
        if ((uVar19 >> 7 & 1) != 0) {
          __ZdlPv(pppppppuStack_118);
        }
        if (plStack_128 != (long *)0x0) {
          (**(code **)(*plStack_128 + 0x10))();
        }
        uVar22 = 0;
      }
      else {
        uStack_d8 = 0;
        uStack_d1 = 0;
        iVar12 = (**(code **)(*plStack_100 + 0x38))(plStack_100,1,&UNK_01ad7180,&uStack_d8,0);
        if ((((iVar12 < 0) || ((long *)CONCAT17(uStack_d1,uStack_d8) == (long *)0x0)) ||
            (lVar13 = (**(code **)(*(long *)CONCAT17(uStack_d1,uStack_d8) + 0x18))(), lVar13 == 0))
/*  no support for modified copies  */
           || ((lVar13 = (**(code **)(*(long *)CONCAT17(uStack_d1,uStack_d8) + 0x20))(), lVar13 == 0
               || (uVar14 = (**(code **)(*(long *)CONCAT17(uStack_d1,uStack_d8) + 0x20))(),
                  (uVar14 & 3) != 0)))) {
          uVar14 = _strlen(param_4);
          if (0x7ffffffffffffff6 < uVar14) {
            func_0x0000aa50();
            goto LAB_002742c4;
          }
          if (uVar14 < 0x17) {
            bStack_101 = (byte)uVar14;
            pppppppuVar16 = &pppppppuStack_118;
          }
          else {
            lVar13 = (uVar14 & 0x7ffffffffffffff8) + 8;
            lVar1 = 0x19;
            if (lVar13 != 0x18) {
              lVar1 = lVar13;
            }
            pppppppuVar16 = (undefined8 *******)__Znwm(lVar1);
            bStack_101 = (byte)((ulong)lVar1 >> 0x38) | 0x80;
            uStack_110 = (undefined7)uVar14;
            uStack_109 = (undefined1)(uVar14 >> 0x38);
            uStack_108 = (undefined7)lVar1;
            pppppppuStack_118 = pppppppuVar16;
          }
          _memcpy(pppppppuVar16,param_4,uVar14);
          *(undefined1 *)((long)pppppppuVar16 + uVar14) = 0;
          bVar5 = bStack_101;
          uVar20 = (CONCAT17(bStack_101,uStack_108) & 0x7fffffffffffffff) - 1;
          uVar3 = CONCAT17(uStack_109,uStack_110);
          uVar14 = uVar20;
          if (-1 < (char)bStack_101) {
            uVar14 = 0x16;
            uVar3 = (ulong)bStack_101;
          }
          if (uVar14 - uVar3 < 0x28) {
            uVar14 = uVar3 + 0x28;
            if (0x7ffffffffffffff6 < uVar14) {
/* reversing this took months of machine time */
              func_0x0000aa50();
              goto LAB_002742c4;
            }
            if ((char)bStack_101 < '\0') {
              if (uVar20 < 0x3ffffffffffffff4) goto LAB_00273f78;
              lVar13 = 0x7ffffffffffffff8;
              pppppppuVar16 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
LAB_00273fb0:
              pppppppuVar18 = pppppppuStack_118;
            }
            else {
              uVar20 = 0x16;
LAB_00273f78:
              uVar4 = uVar14;
              if (uVar14 <= uVar20 * 2) {
                uVar4 = uVar20 * 2;
/* wm:watermarked copy - do not remove */
              }
              lVar1 = (uVar4 & 0x7ffffffffffffff8) + 8;
              lVar13 = 0x19;
              if (lVar1 != 0x18) {
                lVar13 = lVar1;
              }
              pppppppuVar16 = (undefined8 *******)__Znwm(lVar13);
              if ((char)bVar5 < '\0') goto LAB_00273fb0;
              pppppppuVar18 = &pppppppuStack_118;
            }
            if (uVar3 != 0) {
              _memmove(pppppppuVar16,pppppppuVar18,uVar3);
            }
            uVar21 = s_shader_compiler_returned_invalid_01c2d75f._24_8_;
            uVar17 = s_shader_compiler_returned_invalid_01c2d75f._16_8_;
            uVar22 = s_shader_compiler_returned_invalid_01c2d75f._0_8_;
            pcVar2 = (char *)((long)pppppppuVar16 + uVar3);
            *(undefined8 *)(pcVar2 + 8) = s_shader_compiler_returned_invalid_01c2d75f._8_8_;
            *(undefined8 *)pcVar2 = uVar22;
            *(undefined8 *)(pcVar2 + 0x18) = uVar21;
            *(undefined8 *)(pcVar2 + 0x10) = uVar17;
            *(undefined8 *)(pcVar2 + 0x20) = s_shader_compiler_returned_invalid_01c2d75f._32_8_;
            *(undefined1 *)((long)pppppppuVar16 + uVar14) = 0;
/* donate: donate/README.md - github.com/pengussy */
            if ((char)bVar5 < '\0') {
              __ZdlPv(pppppppuStack_118);
            }
            bStack_101 = (byte)((ulong)lVar13 >> 0x38) | 0x80;
            uStack_110 = (undefined7)uVar14;
            uStack_109 = (undefined1)(uVar14 >> 0x38);
            uStack_108 = (undefined7)lVar13;
            cVar6 = *(char *)((long)param_6 + 0x17);
            bVar5 = bStack_101;
          }
          else {
            pppppppuVar16 = pppppppuStack_118;
            if (-1 < (char)bStack_101) {
              pppppppuVar16 = &pppppppuStack_118;
            }
            pcVar2 = (char *)((long)pppppppuVar16 + uVar3);
            *(undefined8 *)(pcVar2 + 8) = s_shader_compiler_returned_invalid_01c2d75f._8_8_;
            *(undefined8 *)pcVar2 = s_shader_compiler_returned_invalid_01c2d75f._0_8_;
            *(undefined8 *)(pcVar2 + 0x18) = s_shader_compiler_returned_invalid_01c2d75f._24_8_;
            *(undefined8 *)(pcVar2 + 0x10) = s_shader_compiler_returned_invalid_01c2d75f._16_8_;
            *(undefined8 *)(pcVar2 + 0x20) = s_shader_compiler_returned_invalid_01c2d75f._32_8_;
            lVar13 = uVar3 + 0x28;
            if ((char)bVar5 < '\0') {
              uStack_110 = (undefined7)lVar13;
              uStack_109 = (undefined1)((ulong)lVar13 >> 0x38);
            }
            else {
              bStack_101 = (byte)lVar13 & 0x7f;
            }
            *(undefined1 *)((long)pppppppuVar16 + lVar13) = 0;
            cVar6 = *(char *)((long)param_6 + 0x17);
            pppppppuVar16 = pppppppuStack_118;
            bVar5 = bStack_101;
          }
          bStack_101 = bVar5;
          uStack_f0 = uStack_110;
          uStack_e9 = uStack_109;
          uStack_e8 = uStack_108;
/* wm:donate: donate/README.md */
          if (cVar6 < '\0') {
            __ZdlPv(*param_6);
            *param_6 = 0;
            param_6[1] = 0;
            param_6[2] = 0;
          }
          uVar22 = 0;
          *param_6 = (long)pppppppuVar16;
          param_6[1] = CONCAT17(uStack_e9,uStack_f0);
          *(ulong *)((long)param_6 + 0xf) = CONCAT71(uStack_e8,uStack_e9);
          *(byte *)((long)param_6 + 0x17) = bVar5;
          plVar7 = (long *)CONCAT17(uStack_d1,uStack_d8);
        }
        else {
          uVar14 = (**(code **)(*(long *)CONCAT17(uStack_d1,uStack_d8) + 0x20))();
          func_0x00275488(param_5,uVar14 >> 2);
          uVar21 = *param_5;
          uVar22 = (**(code **)(*(long *)CONCAT17(uStack_d1,uStack_d8) + 0x18))();
          uVar17 = (**(code **)(*(long *)CONCAT17(uStack_d1,uStack_d8) + 0x20))();
          _memcpy(uVar21,uVar22,uVar17);
          uVar22 = 1;
          plVar7 = (long *)CONCAT17(uStack_d1,uStack_d8);
        }
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    if (plStack_100 != (long *)0x0) {
      (**(code **)(*plStack_100 + 0x10))();
    }
LAB_00274110:
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    if (plStack_f8 != (long *)0x0) {
      (**(code **)(*plStack_f8 + 0x10))();
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
      return uVar22;
    }
    ___stack_chk_fail();
  }
  func_0x0000aa50();
LAB_002742c4:
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x2742c8);
  (*pcVar11)();
}

