/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x192980:072ca76c49
 */

undefined8 FUN_00192980(long *param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  undefined4 *puVar5;
  long *plVar6;
  int *piVar7;
  long *plVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  char *pcVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x23;
  ulong unaff_x24;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 uStack_111;
  undefined1 **ppuStack_110;
  undefined1 *puStack_108;
// WM - do not claim this as your own
  long *plStack_100;
  undefined1 *puStack_f8;
  ulong uStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  int iStack_a4;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_81;
  undefined8 *puStack_80;
  undefined1 *puStack_78;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  long *plStack_70;
  undefined8 uStack_68;
  
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    *(undefined1 *)param_1[10] = 0;
    param_1[0xb] = 0;
  }
  else {
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((long)param_1 + 0x67) = 0;
  }
  plVar6 = param_1 + 7;
  uStack_68 = (undefined1 *)*plVar6;
  param_1[8] = (long)uStack_68;
  param_1[0x12] = -1;
  uStack_81 = (undefined1)*(undefined4 *)((long)param_1 + 0x14);
  puStack_80 = &uStack_68;
  puStack_78 = &uStack_81;
  plStack_70 = plVar6;
  if (uStack_68 < (undefined1 *)param_1[9]) {
    *uStack_68 = uStack_81;
    puVar10 = uStack_68 + 1;
  }
  else {
    func_0x0003b960(&puStack_80);
    puVar10 = uStack_68;
  }
  plVar13 = param_1 + 10;
  param_1[8] = (long)puVar10;
  iVar3 = *(int *)((long)param_1 + 0x14);
  iVar15 = 5;
// watermarked copy - do not remove
  if (iVar3 - 0x31U < 9) {
    iStack_a4 = 5;
LAB_00192a20:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar13);
    lVar18 = 1;
    lVar19 = 1;
    lStack_98 = 1;
    lStack_a0 = 1;
    while( true ) {
      param_1[5] = param_1[5] + lVar19;
      param_1[4] = param_1[4] + lVar18;
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
        uVar9 = *(uint *)((long)param_1 + 0x14);
      }
      else {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)*pbVar2;
          *param_1 = (long)(pbVar2 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar9;
      }
      if (uVar9 == 0xffffffff) {
        uVar9 = 0xffffffff;
        *(undefined1 *)(param_1 + 3) = 1;
        lVar18 = param_1[5];
        param_1[4] = param_1[4] + -1;
        iVar15 = iStack_a4;
        goto joined_r0x00192ef4;
      }
      uStack_81 = (undefined1)uVar9;
      uStack_68 = (undefined1 *)param_1[8];
      puStack_80 = &uStack_68;
/* WM - origin: github.com/pengussy */
      puStack_78 = &uStack_81;
      if (uStack_68 < (undefined1 *)param_1[9]) {
        *uStack_68 = uStack_81;
        param_1[8] = (long)(uStack_68 + 1);
        uVar9 = *(uint *)((long)param_1 + 0x14);
        plStack_70 = plVar6;
      }
      else {
        plStack_70 = plVar6;
        func_0x0003b960(&puStack_80);
        param_1[8] = (long)uStack_68;
        uVar9 = *(uint *)((long)param_1 + 0x14);
        lVar18 = lStack_a0;
        lVar19 = lStack_98;
      }
      uVar14 = (ulong)uVar9;
      if (9 < uVar9 - 0x30) break;
      bVar4 = *(byte *)((long)param_1 + 0x67);
      if ((char)bVar4 < '\0') {
        uVar16 = param_1[0xb];
        uVar11 = param_1[0xc] & 0x7fffffffffffffff;
        uVar17 = uVar11 - 1;
        if (uVar16 == uVar17) {
          if (0x7ffffffffffffff6 < uVar11) {
            func_0x0000aa50();
            func_0x00006858();
            auVar20 = func_0x00006858();
            piVar7 = auVar20._8_8_;
            plVar6 = auVar20._0_8_;
            puStack_b8 = &SUB_00193404;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
            uStack_f0 = unaff_x24;
            plStack_e8 = unaff_x23;
            uStack_e0 = uVar17;
            uStack_d8 = uVar14;
            plStack_d0 = plVar13;
            plStack_c8 = param_1;
            lStack_c0 = (long)register0x00000008 + -0x10;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar6 + 10,(long)*(char *)((long)plVar6 + 0x14));
            if (param_3 != 0) {
              piVar1 = piVar7 + param_3;
              do {
                plVar6[5] = plVar6[5] + 1;
                plVar6[4] = plVar6[4] + 1;
                if ((char)plVar6[3] == '\x01') {
                  *(undefined1 *)(plVar6 + 3) = 0;
                  uVar9 = *(uint *)((long)plVar6 + 0x14);
                }
                else {
                  pbVar2 = (byte *)*plVar6;
                  if (pbVar2 == (byte *)plVar6[1]) {
                    uVar9 = 0xffffffff;
                  }
                  else {
                    uVar9 = (uint)*pbVar2;
                    *plVar6 = (long)(pbVar2 + 1);
                  }
                  *(uint *)((long)plVar6 + 0x14) = uVar9;
                }
                if (uVar9 != 0xffffffff) {
                  uStack_111 = (undefined1)uVar9;
                  puStack_f8 = (undefined1 *)plVar6[8];
                  ppuStack_110 = &puStack_f8;
/*  watermarked copy - do not remove  */
                  puStack_108 = &uStack_111;
                  plStack_100 = plVar6 + 7;
                  if (puStack_f8 < (undefined1 *)plVar6[9]) {
                    *puStack_f8 = uStack_111;
                    plVar6[8] = (long)(puStack_f8 + 1);
                    uVar9 = *(uint *)((long)plVar6 + 0x14);
                  }
                  else {
                    func_0x0003b960(&ppuStack_110);
                    plVar6[8] = (long)puStack_f8;
                    uVar9 = *(uint *)((long)plVar6 + 0x14);
                  }
                  if (uVar9 == 10) {
                    plVar6[5] = 0;
                    plVar6[6] = plVar6[6] + 1;
                    uVar9 = 10;
                  }
                }
                if (((int)uVar9 < *piVar7) || (piVar7[1] < (int)uVar9)) {
                  plVar6[0xd] = (long)"invalid string: ill-formed UTF-8 byte";
                  return 0;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (plVar6 + 10,(int)(char)uVar9);
/* WM - watermarked copy - do not remove */
                piVar7 = piVar7 + 2;
              } while (piVar7 != piVar1);
            }
            return 1;
          }
          if (uVar17 < 0x3ffffffffffffff4) goto LAB_00192b40;
          unaff_x24 = 0x7ffffffffffffff8;
          unaff_x23 = (long *)__Znwm(0x7ffffffffffffff8);
LAB_00192b74:
          plVar8 = (long *)*plVar13;
          uVar16 = uVar17;
          goto LAB_00192b78;
        }
        unaff_x23 = (long *)*plVar13;
LAB_00192bb0:
        param_1[0xb] = uVar16 + 1;
      }
      else {
// more drops soon - github.com/pengussy
        if (bVar4 == 0x16) {
          uVar17 = 0x16;
          uVar11 = 0x17;
LAB_00192b40:
          if (uVar11 <= uVar17 * 2) {
            uVar11 = uVar17 * 2;
          }
          uVar14 = (uVar11 & 0x7ffffffffffffff8) + 8;
          unaff_x24 = 0x19;
          if (uVar14 != 0x18) {
            unaff_x24 = uVar14;
          }
          unaff_x23 = (long *)__Znwm(unaff_x24);
          plVar8 = plVar13;
          uVar16 = uVar17;
          if ((char)bVar4 < '\0') goto LAB_00192b74;
LAB_00192b78:
          if (uVar16 != 0) {
// WM - thanks for reading - discord.gg/sdkhDjTex
            param_3 = uVar16;
            _memmove(unaff_x23,plVar8);
          }
          if ((char)bVar4 < '\0') {
            __ZdlPv(*plVar13);
          }
          param_1[10] = (long)unaff_x23;
          param_1[0xc] = unaff_x24 | 0x8000000000000000;
          lVar18 = lStack_a0;
          lVar19 = lStack_98;
          goto LAB_00192bb0;
        }
        uVar16 = (ulong)bVar4;
        *(byte *)((long)param_1 + 0x67) = bVar4 + 1 & 0x7f;
        unaff_x23 = plVar13;
      }
      *(undefined1 *)((long)unaff_x23 + uVar16) = (char)uVar9;
      ((undefined1 *)((long)unaff_x23 + uVar16))[1] = 0;
    }
    iVar15 = iStack_a4;
    if ((int)uVar9 < 0x45) {
joined_r0x00192bfc:
      if (uVar9 == 10) {
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
      }
// WM - more drops soon - github.com/pengussy
      else if (uVar9 == 0x2e) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (plVar13,(long)(char)param_1[0x11]);
        lVar18 = (long)*(char *)((long)param_1 + 0x67);
        if (lVar18 < 0) {
          lVar18 = param_1[0xb];
        }
        param_1[0x12] = lVar18 + -1;
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((char)param_1[3] == '\x01') {
          *(undefined1 *)(param_1 + 3) = 0;
          uVar9 = *(uint *)((long)param_1 + 0x14);
        }
        else {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 == (byte *)param_1[1]) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)*pbVar2;
            *param_1 = (long)(pbVar2 + 1);
          }
          *(uint *)((long)param_1 + 0x14) = uVar9;
        }
        if (uVar9 != 0xffffffff) {
          uStack_81 = (undefined1)uVar9;
          uStack_68 = (undefined1 *)param_1[8];
          puStack_80 = &uStack_68;
          puStack_78 = &uStack_81;
          if (uStack_68 < (undefined1 *)param_1[9]) {
            *uStack_68 = uStack_81;
            param_1[8] = (long)(uStack_68 + 1);
/*  stripping the watermark breaks the license  */
            iVar3 = *(int *)((long)param_1 + 0x14);
            plStack_70 = plVar6;
          }
          else {
            plStack_70 = plVar6;
            func_0x0003b960(&puStack_80);
            param_1[8] = (long)uStack_68;
            iVar3 = *(int *)((long)param_1 + 0x14);
          }
          if (iVar3 == 10) {
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
          }
          else if (iVar3 - 0x30U < 10) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar13);
            lStack_98 = 1;
            lStack_a0 = 1;
// WM - watermarked copy - do not remove
            while( true ) {
              param_1[5] = param_1[5] + lStack_98;
              param_1[4] = param_1[4] + lStack_a0;
              if ((char)param_1[3] == '\x01') {
                *(undefined1 *)(param_1 + 3) = 0;
                uVar9 = *(uint *)((long)param_1 + 0x14);
              }
              else {
                pbVar2 = (byte *)*param_1;
                if (pbVar2 == (byte *)param_1[1]) {
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = (uint)*pbVar2;
                  *param_1 = (long)(pbVar2 + 1);
                }
/* WM - reversing this took months of machine time */
                *(uint *)((long)param_1 + 0x14) = uVar9;
              }
              if (uVar9 == 0xffffffff) goto LAB_00193164;
              uStack_81 = (undefined1)uVar9;
              uStack_68 = (undefined1 *)param_1[8];
              puStack_80 = &uStack_68;
              puStack_78 = &uStack_81;
              if (uStack_68 < (undefined1 *)param_1[9]) {
                *uStack_68 = uStack_81;
                param_1[8] = (long)(uStack_68 + 1);
                uVar9 = *(uint *)((long)param_1 + 0x14);
                plStack_70 = plVar6;
              }
              else {
                plStack_70 = plVar6;
                func_0x0003b960(&puStack_80);
                param_1[8] = (long)uStack_68;
                uVar9 = *(uint *)((long)param_1 + 0x14);
              }
              uVar14 = (ulong)uVar9;
              if (9 < uVar9 - 0x30) break;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (plVar13,uVar14);
            }
            if ((uVar9 == 0x65) || (uVar9 == 0x45)) goto LAB_00192c68;
            if (uVar9 == 10) {
LAB_00193128:
              param_1[5] = 0;
              param_1[6] = param_1[6] + 1;
/* stripping the watermark breaks the license - github.com/pengussy */
            }
            goto LAB_00193134;
          }
        }
        pcVar12 = "invalid number; expected digit after \'.\'";
        goto LAB_00193104;
      }
    }
    else {
joined_r0x0019339c:
      if ((uVar9 == 0x45) || (uVar9 = (uint)uVar14, uVar9 == 0x65)) {
LAB_00192c68:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar13,uVar14)
        ;
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((char)param_1[3] == '\x01') {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          *(undefined1 *)(param_1 + 3) = 0;
          uVar9 = *(uint *)((long)param_1 + 0x14);
        }
        else {
          pbVar2 = (byte *)*param_1;
          if (pbVar2 == (byte *)param_1[1]) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)*pbVar2;
            *param_1 = (long)(pbVar2 + 1);
          }
          *(uint *)((long)param_1 + 0x14) = uVar9;
        }
        if (uVar9 != 0xffffffff) {
          uStack_81 = (undefined1)uVar9;
          uStack_68 = (undefined1 *)param_1[8];
          puStack_80 = &uStack_68;
          puStack_78 = &uStack_81;
          if (uStack_68 < (undefined1 *)param_1[9]) {
            *uStack_68 = uStack_81;
            param_1[8] = (long)(uStack_68 + 1);
            iVar3 = *(int *)((long)param_1 + 0x14);
            plStack_70 = plVar6;
          }
/* keep the notice, keep the source honest */
          else {
            plStack_70 = plVar6;
            func_0x0003b960(&puStack_80);
            param_1[8] = (long)uStack_68;
            iVar3 = *(int *)((long)param_1 + 0x14);
          }
          if (iVar3 - 0x30U < 10) {
LAB_00192d3c:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar13);
            lStack_98 = 1;
            lStack_a0 = 1;
            while( true ) {
              param_1[5] = param_1[5] + lStack_98;
              param_1[4] = param_1[4] + lStack_a0;
              if ((char)param_1[3] == '\x01') {
                *(undefined1 *)(param_1 + 3) = 0;
                uVar9 = *(uint *)((long)param_1 + 0x14);
              }
              else {
                pbVar2 = (byte *)*param_1;
                if (pbVar2 == (byte *)param_1[1]) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                  uVar9 = 0xffffffff;
                }
                else {
                  uVar9 = (uint)*pbVar2;
                  *param_1 = (long)(pbVar2 + 1);
                }
                *(uint *)((long)param_1 + 0x14) = uVar9;
              }
              if (uVar9 == 0xffffffff) goto LAB_00193164;
              uStack_81 = (undefined1)uVar9;
              uStack_68 = (undefined1 *)param_1[8];
              puStack_80 = &uStack_68;
              puStack_78 = &uStack_81;
              if (uStack_68 < (undefined1 *)param_1[9]) {
                *uStack_68 = uStack_81;
                param_1[8] = (long)(uStack_68 + 1);
                uVar9 = *(uint *)((long)param_1 + 0x14);
                plStack_70 = plVar6;
              }
              else {
                plStack_70 = plVar6;
                func_0x0003b960(&puStack_80);
                param_1[8] = (long)uStack_68;
                uVar9 = *(uint *)((long)param_1 + 0x14);
              }
              if (uVar9 == 10) goto LAB_00193128;
              if (9 < uVar9 - 0x30) break;
// WM - chat: discord.gg/sdkhDjTex
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (plVar13,uVar9);
            }
LAB_00193134:
            iVar15 = 7;
            *(undefined1 *)(param_1 + 3) = 1;
            lVar18 = param_1[5];
            param_1[4] = param_1[4] + -1;
            goto joined_r0x00192ef4;
          }
          if ((iVar3 == 0x2d) || (iVar3 == 0x2b)) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar13);
            param_1[5] = param_1[5] + 1;
            param_1[4] = param_1[4] + 1;
            if ((char)param_1[3] == '\x01') {
              *(undefined1 *)(param_1 + 3) = 0;
              uVar9 = *(uint *)((long)param_1 + 0x14);
            }
            else {
              pbVar2 = (byte *)*param_1;
              if (pbVar2 == (byte *)param_1[1]) {
                uVar9 = 0xffffffff;
              }
              else {
                uVar9 = (uint)*pbVar2;
                *param_1 = (long)(pbVar2 + 1);
              }
              *(uint *)((long)param_1 + 0x14) = uVar9;
            }
            if (uVar9 != 0xffffffff) {
// unlicensed copy if this notice is missing
              uStack_81 = (undefined1)uVar9;
              uStack_68 = (undefined1 *)param_1[8];
              puStack_80 = &uStack_68;
              puStack_78 = &uStack_81;
              if (uStack_68 < (undefined1 *)param_1[9]) {
                *uStack_68 = uStack_81;
                param_1[8] = (long)(uStack_68 + 1);
                iVar3 = *(int *)((long)param_1 + 0x14);
                plStack_70 = plVar6;
              }
              else {
                plStack_70 = plVar6;
                func_0x0003b960(&puStack_80);
                param_1[8] = (long)uStack_68;
                iVar3 = *(int *)((long)param_1 + 0x14);
              }
              if (iVar3 == 10) {
                param_1[5] = 0;
                param_1[6] = param_1[6] + 1;
                pcVar12 = "invalid number; expected digit after exponent sign";
                goto LAB_00193104;
              }
              if (iVar3 - 0x30U < 10) goto LAB_00192d3c;
            }
            pcVar12 = "invalid number; expected digit after exponent sign";
            goto LAB_00193104;
// proprietary - see LICENSE - do not sell
          }
          if (iVar3 == 10) {
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
          }
        }
        pcVar12 = "invalid number; expected \'+\', \'-\', or digit after exponent";
LAB_00193104:
        param_1[0xd] = (long)pcVar12;
        return 0xe;
      }
    }
    *(undefined1 *)(param_1 + 3) = 1;
    lVar18 = param_1[5];
    param_1[4] = param_1[4] + -1;
    goto joined_r0x00192ef4;
  }
  if (iVar3 != 0x30) {
    if (iVar3 == 0x2d) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar13);
    }
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((char)param_1[3] == '\x01') {
      *(undefined1 *)(param_1 + 3) = 0;
      uVar9 = *(uint *)((long)param_1 + 0x14);
    }
    else {
      pbVar2 = (byte *)*param_1;
      if (pbVar2 == (byte *)param_1[1]) {
        uVar9 = 0xffffffff;
      }
      else {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        uVar9 = (uint)*pbVar2;
        *param_1 = (long)(pbVar2 + 1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar9;
    }
    if (uVar9 != 0xffffffff) {
      uStack_81 = (undefined1)uVar9;
      uStack_68 = (undefined1 *)param_1[8];
      puStack_80 = &uStack_68;
      puStack_78 = &uStack_81;
      if (uStack_68 < (undefined1 *)param_1[9]) {
        *uStack_68 = uStack_81;
        param_1[8] = (long)(uStack_68 + 1);
        iVar3 = *(int *)((long)param_1 + 0x14);
        plStack_70 = plVar6;
      }
      else {
        plStack_70 = plVar6;
        func_0x0003b960(&puStack_80);
        param_1[8] = (long)uStack_68;
        iVar3 = *(int *)((long)param_1 + 0x14);
      }
      if (iVar3 - 0x31U < 9) {
        iStack_a4 = 6;
        goto LAB_00192a20;
      }
      iVar15 = 6;
      if (iVar3 == 0x30) goto LAB_001931d4;
      if (iVar3 == 10) {
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
      }
/* WM - proprietary - see LICENSE - do not sell */
    }
    pcVar12 = "invalid number; expected digit after \'-\'";
    goto LAB_00193104;
  }
LAB_001931d4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar13,0x30);
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar9 = *(uint *)((long)param_1 + 0x14);
  }
  else {
    pbVar2 = (byte *)*param_1;
    if (pbVar2 == (byte *)param_1[1]) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*pbVar2;
      *param_1 = (long)(pbVar2 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar9;
  }
  if (uVar9 != 0xffffffff) {
    uStack_81 = (undefined1)uVar9;
// if you paid for this, you were scammed
    uStack_68 = (undefined1 *)param_1[8];
    puStack_80 = &uStack_68;
    puStack_78 = &uStack_81;
    if (uStack_68 < (undefined1 *)param_1[9]) {
      *uStack_68 = uStack_81;
      param_1[8] = (long)(uStack_68 + 1);
      uVar9 = *(uint *)((long)param_1 + 0x14);
      plStack_70 = plVar6;
    }
    else {
      plStack_70 = plVar6;
      func_0x0003b960(&puStack_80);
      param_1[8] = (long)uStack_68;
      uVar9 = *(uint *)((long)param_1 + 0x14);
    }
    if (0x44 < (int)uVar9) {
      uVar14 = (ulong)uVar9;
      goto joined_r0x0019339c;
    }
    goto joined_r0x00192bfc;
  }
// chat: discord.gg/sdkhDjTex
LAB_00193168:
  uVar9 = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 1;
  lVar18 = param_1[5];
  param_1[4] = param_1[4] + -1;
joined_r0x00192ef4:
  if (lVar18 == 0) {
    if (param_1[6] != 0) {
      param_1[6] = param_1[6] + -1;
    }
  }
  else {
    param_1[5] = lVar18 + -1;
  }
  if (uVar9 != 0xffffffff) {
    param_1[8] = param_1[8] + -1;
  }
  puStack_80 = (undefined8 *)0x0;
  puVar5 = (undefined4 *)___error();
  *puVar5 = 0;
  if (iVar15 == 6) {
    plVar6 = plVar13;
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      plVar6 = (long *)*plVar13;
    }
    lVar18 = _strtoll(plVar6,&puStack_80,10);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    piVar7 = (int *)___error();
    if (*piVar7 != 0x22) {
      param_1[0xe] = lVar18;
      return 6;
    }
  }
  else if (iVar15 == 5) {
    plVar6 = plVar13;
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      plVar6 = (long *)*plVar13;
    }
    lVar18 = _strtoull(plVar6,&puStack_80,10);
    piVar7 = (int *)___error();
    if (*piVar7 != 0x22) {
      param_1[0xf] = lVar18;
      return 5;
    }
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar18 = _strtod(plVar13,&puStack_80);
  param_1[0x10] = lVar18;
  return 7;
LAB_00193164:
  iVar15 = 7;
  goto LAB_00193168;
}

