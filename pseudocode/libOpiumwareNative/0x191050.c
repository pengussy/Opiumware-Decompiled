/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x191050:1a6e97a2ac
 */

/* WARNING: Possible PIC construction at 0x00192228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x001921f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00192278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00192154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0019227c) */
/* WARNING: Removing unreachable block (ram,0x00192280) */
/* WARNING: Removing unreachable block (ram,0x001921f8) */
/* WARNING: Removing unreachable block (ram,0x001921fc) */
/* WARNING: Removing unreachable block (ram,0x0019222c) */
/* WARNING: Removing unreachable block (ram,0x00192230) */
/* WARNING: Removing unreachable block (ram,0x00192158) */
/* WARNING: Removing unreachable block (ram,0x0019215c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00191050(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 **ppuVar1;
  byte *pbVar2;
  undefined1 uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  ulong *puVar11;
  long *plVar12;
  undefined8 **ppuVar13;
  undefined4 uVar14;
/* WM - found on a paste site? it was re-uploaded illegally */
  char *pcVar15;
  ulong uVar16;
  undefined1 *puVar17;
  byte bVar18;
  uint uVar19;
  long *plVar20;
  ulong unaff_x21;
  int iVar21;
  ulong *unaff_x22;
  ulong uVar22;
  long *unaff_x23;
  ulong unaff_x24;
  ulong *puVar23;
  byte *pbVar24;
  undefined *puVar25;
  long lVar26;
  long lVar27;
  undefined1 auVar28 [16];
  undefined1 uStack_111;
  undefined1 **ppuStack_110;
  undefined1 *puStack_108;
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
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  byte bStack_89;
  undefined8 uStack_88;
  undefined8 *puStack_80;
// WM - chat: discord.gg/sdkhDjTex
  byte *pbStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  
  if ((param_1[4] == 0) && (uVar7 = func_0x0199593c(param_1), (uVar7 & 1) == 0)) {
    pcVar15 = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
    goto LAB_0019175c;
  }
  func_0x0019195c(param_1);
  if ((char)param_1[2] == '\x01') {
    do {
      if (*(int *)((long)param_1 + 0x14) != 0x2f) break;
      iVar5 = func_0x00191af0(param_1);
      if (iVar5 == 0) {
        return 0xe;
      }
      func_0x0019195c(param_1);
    } while ((*(byte *)(param_1 + 2) & 1) != 0);
  }
  switch(*(undefined4 *)((long)param_1 + 0x14)) {
  case 0x22:
    uStack_68 = *(undefined1 **)PTR____stack_chk_guard_01f20200;
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      *(undefined1 *)param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((long)param_1 + 0x67) = 0;
    }
    uStack_a8 = (ulong *)(param_1 + 7);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uStack_88 = (byte *)*uStack_a8;
    param_1[8] = (long)uStack_88;
    param_1[0x12] = -1;
    bStack_89 = (byte)*(undefined4 *)((long)param_1 + 0x14);
    puStack_80 = &uStack_88;
    pbStack_78 = &bStack_89;
    puStack_70 = uStack_a8;
    if (uStack_88 < (byte *)param_1[9]) {
      *uStack_88 = bStack_89;
      pbVar24 = uStack_88 + 1;
    }
    else {
      func_0x0003b960(&puStack_80);
      pbVar24 = uStack_88;
    }
    puVar23 = (ulong *)(param_1 + 10);
    param_1[8] = (long)pbVar24;
    lStack_98 = 1;
/* WM - stripping the watermark breaks the license */
    lStack_a0 = 1;
LAB_00191fd8:
    param_1[5] = param_1[5] + lStack_98;
    param_1[4] = param_1[4] + lStack_a0;
    if ((char)param_1[3] == '\x01') {
      *(undefined1 *)(param_1 + 3) = 0;
      unaff_x23 = (long *)(ulong)*(uint *)((long)param_1 + 0x14);
    }
    else {
      pbVar24 = (byte *)*param_1;
      if (pbVar24 == (byte *)param_1[1]) {
        unaff_x23 = (long *)0xffffffff;
      }
      else {
        unaff_x23 = (long *)(ulong)*pbVar24;
        *param_1 = (long)(pbVar24 + 1);
      }
      *(int *)((long)param_1 + 0x14) = (int)unaff_x23;
    }
    if ((int)unaff_x23 == -1) {
LAB_00192750:
      pcVar15 = "invalid string: missing closing quote";
      goto LAB_00192710;
    }
    puVar17 = (undefined1 *)param_1[8];
    if (puVar17 < (undefined1 *)param_1[9]) {
      pbVar24 = puVar17 + 1;
      *puVar17 = (char)unaff_x23;
    }
    else {
      unaff_x21 = *uStack_a8;
      unaff_x22 = (ulong *)((long)puVar17 - unaff_x21);
      uVar7 = (long)unaff_x22 + 1;
      if ((long)uVar7 < 0) goto LAB_0019296c;
      uVar16 = param_1[9] - unaff_x21;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      uVar22 = uVar16 * 2;
      if (uVar22 <= uVar7) {
        uVar22 = uVar7;
      }
      if (0x3ffffffffffffffe < uVar16) {
        uVar22 = 0x7fffffffffffffff;
      }
      if (uVar22 == 0) {
        lVar26 = 0;
      }
      else {
        lVar26 = __Znwm(uVar22);
      }
      pbVar24 = (undefined1 *)(lVar26 + (long)unaff_x22) + 1;
      *(undefined1 *)(lVar26 + (long)unaff_x22) = (char)unaff_x23;
      _memcpy(lVar26,unaff_x21,unaff_x22);
      param_1[7] = lVar26;
      param_1[8] = (long)pbVar24;
      param_1[9] = lVar26 + uVar22;
      if (unaff_x21 != 0) {
// found on a paste site? it was re-uploaded illegally
        __ZdlPv(unaff_x21);
      }
    }
    param_1[8] = (long)pbVar24;
    uVar19 = *(uint *)((long)param_1 + 0x14);
    unaff_x24 = (ulong)uVar19;
    if (uVar19 == 10) {
      param_1[5] = 0;
      param_1[6] = param_1[6] + 1;
      pcVar15 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
      goto LAB_00192710;
    }
    uVar8 = 4;
    pcVar15 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    plVar20 = param_1;
    switch(uVar19) {
    case 0:
      pcVar15 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
      break;
    case 1:
      break;
    case 2:
      pcVar15 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
      break;
    case 3:
      pcVar15 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      break;
    case 4:
      pcVar15 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
      break;
    case 5:
      pcVar15 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
      break;
    case 6:
      pcVar15 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
      break;
    case 7:
      pcVar15 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
      break;
    case 8:
      pcVar15 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
      break;
    case 9:
      pcVar15 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
      break;
    default:
      pcVar15 = "invalid string: ill-formed UTF-8 byte";
      break;
    case 0xb:
      pcVar15 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
      break;
    case 0xc:
      pcVar15 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
/* more drops soon - github.com/pengussy - github.com/pengussy */
      break;
    case 0xd:
      pcVar15 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
      break;
    case 0xe:
      pcVar15 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
      break;
    case 0xf:
      pcVar15 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
      break;
    case 0x10:
      pcVar15 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
      break;
    case 0x11:
      pcVar15 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
      break;
    case 0x12:
      pcVar15 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
      break;
    case 0x13:
      pcVar15 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
      break;
    case 0x14:
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      pcVar15 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
      break;
    case 0x15:
      pcVar15 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
      break;
    case 0x16:
      pcVar15 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
      break;
    case 0x17:
      pcVar15 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
      break;
    case 0x18:
      pcVar15 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
      break;
    case 0x19:
      pcVar15 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
      break;
    case 0x1a:
      pcVar15 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
      break;
    case 0x1b:
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      pcVar15 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
      break;
    case 0x1c:
      pcVar15 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
      break;
    case 0x1d:
      pcVar15 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
      break;
    case 0x1e:
      pcVar15 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
      break;
    case 0x1f:
      pcVar15 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
      break;
    case 0x20:
    case 0x21:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
/* donate: donate/README.md */
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 99:
    case 100:
    case 0x65:
    case 0x66:
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
// WM - unlicensed copy if this notice is missing
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
      bVar18 = *(byte *)((long)param_1 + 0x67);
      if ((char)bVar18 < '\0') {
        unaff_x21 = param_1[0xb];
        uVar7 = param_1[0xc] & 0x7fffffffffffffff;
        uVar22 = uVar7 - 1;
        if (unaff_x21 == uVar22) {
          if (uVar7 < 0x7ffffffffffffff7) {
            if (uVar22 < 0x3ffffffffffffff4) goto LAB_001920cc;
            unaff_x22 = (ulong *)__Znwm(0x7ffffffffffffff8);
/* WM - unlicensed copy if this notice is missing */
            uVar7 = 0x7ffffffffffffff8;
LAB_0019210c:
            puVar11 = (ulong *)*puVar23;
            unaff_x21 = uVar22;
            goto LAB_00192110;
          }
          func_0x0000aa50(4);
          goto LAB_00192970;
        }
        unaff_x22 = (ulong *)*puVar23;
LAB_00192168:
        param_1[0xb] = unaff_x21 + 1;
      }
      else {
        if (bVar18 == 0x16) {
          uVar7 = 0x17;
          uVar22 = 0x16;
LAB_001920cc:
          if (uVar7 <= uVar22 * 2) {
            uVar7 = uVar22 * 2;
          }
          uVar16 = (uVar7 & 0x7ffffffffffffff8) + 8;
          uVar7 = 0x19;
          if (uVar16 != 0x18) {
            uVar7 = uVar16;
          }
          unaff_x22 = (ulong *)__Znwm(uVar7);
          puVar11 = puVar23;
/* wm:found on a paste site? it was re-uploaded illegally */
          unaff_x21 = uVar22;
          if ((char)bVar18 < '\0') goto LAB_0019210c;
LAB_00192110:
          if (unaff_x21 != 0) {
            _memmove(unaff_x22,puVar11,unaff_x21);
          }
          if ((char)bVar18 < '\0') {
            __ZdlPv(*puVar23);
          }
          param_1[10] = (long)unaff_x22;
          param_1[0xc] = uVar7 | 0x8000000000000000;
          goto LAB_00192168;
        }
        unaff_x21 = (ulong)bVar18;
        *(byte *)((long)param_1 + 0x67) = bVar18 + 1 & 0x7f;
        unaff_x22 = puVar23;
      }
      *(undefined1 *)((long)unaff_x22 + unaff_x21) = (char)uVar19;
      ((undefined1 *)((long)unaff_x22 + unaff_x21))[1] = 0;
      goto LAB_00191fd8;
    case 0x22:
      goto code_r0x00192718;
    case 0x5c:
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
        bStack_89 = 0x5c;
      }
      else {
        pbVar2 = (byte *)*param_1;
        if (pbVar2 == (byte *)param_1[1]) {
          *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
          pcVar15 = "invalid string: forbidden character after backslash";
          break;
/* proprietary - see LICENSE - do not sell */
        }
        bStack_89 = *pbVar2;
        *param_1 = (long)(pbVar2 + 1);
        *(uint *)((long)param_1 + 0x14) = (uint)bStack_89;
      }
      puStack_80 = &uStack_88;
      pbStack_78 = &bStack_89;
      puStack_70 = uStack_a8;
      uStack_88 = pbVar24;
      if (pbVar24 < (byte *)param_1[9]) {
        *pbVar24 = bStack_89;
        param_1[8] = (long)(pbVar24 + 1);
        iVar5 = *(int *)((long)param_1 + 0x14);
      }
      else {
        func_0x0003b960(&puStack_80);
        param_1[8] = (long)uStack_88;
        iVar5 = *(int *)((long)param_1 + 0x14);
      }
      if (iVar5 < 0x66) {
        pcVar15 = "invalid string: forbidden character after backslash";
        if (iVar5 < 0x5c) {
          if (iVar5 == 0x22) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (puVar23,0x22);
            goto LAB_00191fd8;
          }
          if (iVar5 == 0x2f) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (puVar23,0x2f);
            goto LAB_00191fd8;
          }
          if (iVar5 == 10) {
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
            pcVar15 = "invalid string: forbidden character after backslash";
/* WM - reversing this took months of machine time */
          }
        }
        else {
          if (iVar5 == 0x5c) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (puVar23,0x5c);
            goto LAB_00191fd8;
          }
          if (iVar5 == 0x62) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(puVar23,8);
            goto LAB_00191fd8;
          }
        }
      }
      else {
        pcVar15 = "invalid string: forbidden character after backslash";
        if (iVar5 < 0x72) {
          if (iVar5 == 0x66) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      (puVar23,0xc);
            goto LAB_00191fd8;
          }
          if (iVar5 == 0x6e) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(puVar23,10)
            ;
            goto LAB_00191fd8;
          }
        }
        else {
          if (iVar5 == 0x72) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (puVar23,0xd);
            goto LAB_00191fd8;
          }
          if (iVar5 == 0x74) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(puVar23,9);
            goto LAB_00191fd8;
          }
          if (iVar5 != 0x75) break;
          unaff_x21 = func_0x01995bec(param_1);
          uVar19 = (uint)unaff_x21;
          if (uVar19 == 0xffffffff) {
LAB_00192934:
            pcVar15 = "invalid string: \'\\u\' must be followed by 4 hex digits";
            break;
          }
          if ((uVar19 & 0xfffffc00) != 0xd800) {
            if ((uVar19 & 0xfffffc00) == 0xdc00) {
              pcVar15 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
              break;
            }
            if ((int)uVar19 < 0x80) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,(int)(char)unaff_x21);
            }
            else if (uVar19 < 0x800) {
/* wm:if you paid for this, you were scammed */
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,uVar19 >> 6 | 0xffffffc0);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,uVar19 & 0x3f | 0xffffff80);
            }
            else if (uVar19 >> 0x10 == 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,uVar19 >> 0xc | 0xffffffe0);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,uVar19 >> 6 & 0x3f | 0xffffff80);
              unaff_x22 = (ulong *)(ulong)(uVar19 & 0x3f | 0xffffff80);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,unaff_x22);
            }
            else {
LAB_001925d8:
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,(uint)(unaff_x21 >> 0x12) & 0x3fff | 0xfffffff0);
              uVar19 = (uint)unaff_x21;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,uVar19 >> 0xc & 0x3f | 0xffffff80);
              unaff_x22 = (ulong *)(ulong)(uVar19 >> 6 & 0x3f | 0xffffff80);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,unaff_x22);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (puVar23,uVar19 & 0x3f | 0xffffff80);
            }
            goto LAB_00191fd8;
          }
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((char)param_1[3] == '\x01') {
            *(undefined1 *)(param_1 + 3) = 0;
            uVar6 = *(uint *)((long)param_1 + 0x14);
          }
          else {
            pbVar24 = (byte *)*param_1;
            if (pbVar24 == (byte *)param_1[1]) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)*pbVar24;
              *param_1 = (long)(pbVar24 + 1);
            }
            *(uint *)((long)param_1 + 0x14) = uVar6;
          }
          if (uVar6 != 0xffffffff) {
            bStack_89 = (byte)uVar6;
            uStack_88 = (byte *)param_1[8];
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            puStack_80 = &uStack_88;
            pbStack_78 = &bStack_89;
            puStack_70 = uStack_a8;
            if ((byte *)param_1[9] <= uStack_88) {
              func_0x0003b960(&puStack_80);
              param_1[8] = (long)uStack_88;
              iVar5 = *(int *)((long)param_1 + 0x14);
              pbVar24 = uStack_88;
              if (iVar5 == 0x5c) goto LAB_001924c4;
LAB_001928d0:
              if (iVar5 != 10) goto LAB_0019295c;
LAB_001928d8:
              param_1[5] = 0;
              param_1[6] = param_1[6] + 1;
              pcVar15 = 
              "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
              break;
            }
            *uStack_88 = bStack_89;
            param_1[8] = (long)(uStack_88 + 1);
            iVar5 = *(int *)((long)param_1 + 0x14);
            pbVar24 = uStack_88 + 1;
/* chat: discord.gg/sdkhDjTex */
            if (iVar5 != 0x5c) goto LAB_001928d0;
LAB_001924c4:
            param_1[5] = param_1[5] + 1;
            param_1[4] = param_1[4] + 1;
            if ((char)param_1[3] == '\x01') {
              *(undefined1 *)(param_1 + 3) = 0;
              bStack_89 = 0x5c;
            }
            else {
              pbVar2 = (byte *)*param_1;
              if (pbVar2 == (byte *)param_1[1]) {
                *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
                goto LAB_0019295c;
              }
              bStack_89 = *pbVar2;
              *param_1 = (long)(pbVar2 + 1);
              *(uint *)((long)param_1 + 0x14) = (uint)bStack_89;
            }
            puStack_80 = &uStack_88;
            pbStack_78 = &bStack_89;
            puStack_70 = uStack_a8;
            uStack_88 = pbVar24;
            if (pbVar24 < (byte *)param_1[9]) {
              *pbVar24 = bStack_89;
              param_1[8] = (long)(pbVar24 + 1);
              iVar5 = *(int *)((long)param_1 + 0x14);
            }
            else {
              func_0x0003b960(&puStack_80);
              param_1[8] = (long)uStack_88;
/* wm:stripping the watermark breaks the license */
              iVar5 = *(int *)((long)param_1 + 0x14);
            }
            if (iVar5 == 0x75) {
              uVar6 = func_0x01995bec(param_1);
              if (uVar6 == 0xffffffff) goto LAB_00192934;
              if (uVar6 >> 10 == 0x37) {
                unaff_x21 = (ulong)(uVar6 + uVar19 * 0x400 + 0xfca02400);
                goto LAB_001925d8;
              }
            }
            else if (iVar5 == 10) goto LAB_001928d8;
          }
LAB_0019295c:
          pcVar15 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        }
      }
      break;
    case 0xc2:
    case 0xc3:
    case 0xc4:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xc9:
    case 0xca:
    case 0xcb:
    case 0xcc:
    case 0xcd:
    case 0xce:
    case 0xcf:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
/*  unlicensed copy if this notice is missing  */
    case 0xd6:
    case 0xd7:
    case 0xd8:
    case 0xd9:
    case 0xda:
    case 0xdb:
    case 0xdc:
    case 0xdd:
    case 0xde:
    case 0xdf:
      puStack_80 = _UNK_01ad9d18;
      ppuVar13 = &puStack_80;
      param_3 = 2;
      puVar25 = (undefined *)0x192158;
      goto code_r0x00193404;
    case 0xe0:
      pbStack_78 = _UNK_01ad82b8;
      puStack_80 = _UNK_01ad82b0;
      uVar7 = func_0x00193404(param_1,&puStack_80,4);
      goto joined_r0x001921c4;
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xee:
    case 0xef:
/* wm:watermarked copy - do not remove */
      pbStack_78 = _UNK_01ad82a8;
      puStack_80 = _UNK_01ad82a0;
      uVar7 = func_0x00193404(param_1,&puStack_80,4);
      goto joined_r0x001921c4;
    case 0xed:
      pbStack_78 = _UNK_01ad8298;
      puStack_80 = _UNK_01ad8290;
      ppuVar13 = &puStack_80;
      param_3 = 4;
      puVar25 = (undefined *)0x19227c;
      goto code_r0x00193404;
    case 0xf0:
      puStack_70 = (ulong *)0xbf00000080;
      pbStack_78 = _UNK_01ad9ca4;
      puStack_80 = _UNK_01ad9c9c;
      ppuVar13 = &puStack_80;
      param_3 = 6;
      puVar25 = (undefined *)0x1921f8;
      goto code_r0x00193404;
    case 0xf1:
    case 0xf2:
    case 0xf3:
      puStack_70 = (ulong *)0xbf00000080;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      pbStack_78 = _UNK_01ad9cbc;
      puStack_80 = _UNK_01ad9cb4;
      uVar7 = func_0x00193404(param_1,&puStack_80,6);
joined_r0x001921c4:
      if ((uVar7 & 1) == 0) {
LAB_00192714:
        uVar8 = 0xe;
code_r0x00192718:
        if (*(undefined1 **)PTR____stack_chk_guard_01f20200 == uStack_68) {
          return uVar8;
        }
        ___stack_chk_fail(uVar8);
LAB_0019296c:
        func_0x0000abb4();
LAB_00192970:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x192974);
        (*pcVar4)();
/* reversing this took months of machine time - github.com/pengussy */
      }
      goto LAB_00191fd8;
    case 0xf4:
      puStack_70 = (ulong *)0xbf00000080;
      pbStack_78 = _UNK_01ad9cd4;
      puStack_80 = _UNK_01ad9ccc;
      ppuVar13 = &puStack_80;
      param_3 = 6;
      puVar25 = (undefined *)0x19222c;
code_r0x00193404:
      lStack_c0 = (long)register0x00000008 + -0x10;
      plStack_d0 = param_1 + 10;
      uStack_f0 = unaff_x24;
      plStack_e8 = unaff_x23;
      uStack_e0 = (ulong)unaff_x22;
      uStack_d8 = unaff_x21;
      plStack_c8 = param_1;
      puStack_b8 = puVar25;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar20 + 10,(long)*(char *)((long)plVar20 + 0x14));
      if (param_3 != 0) {
        ppuVar1 = (undefined8 **)((long)ppuVar13 + param_3 * 4);
        do {
          plVar20[5] = plVar20[5] + 1;
          plVar20[4] = plVar20[4] + 1;
          if ((char)plVar20[3] == '\x01') {
            *(undefined1 *)(plVar20 + 3) = 0;
// WM - found on a paste site? it was re-uploaded illegally
            uVar19 = *(uint *)((long)plVar20 + 0x14);
          }
          else {
            pbVar24 = (byte *)*plVar20;
            if (pbVar24 == (byte *)plVar20[1]) {
              uVar19 = 0xffffffff;
            }
            else {
              uVar19 = (uint)*pbVar24;
              *plVar20 = (long)(pbVar24 + 1);
            }
            *(uint *)((long)plVar20 + 0x14) = uVar19;
          }
          if (uVar19 != 0xffffffff) {
            uStack_111 = (undefined1)uVar19;
            puStack_f8 = (undefined1 *)plVar20[8];
            ppuStack_110 = &puStack_f8;
            puStack_108 = &uStack_111;
            plStack_100 = plVar20 + 7;
/*  proprietary - see LICENSE - do not sell  */
            if (puStack_f8 < (undefined1 *)plVar20[9]) {
              *puStack_f8 = uStack_111;
              plVar20[8] = (long)(puStack_f8 + 1);
              uVar19 = *(uint *)((long)plVar20 + 0x14);
            }
            else {
              func_0x0003b960(&ppuStack_110);
              plVar20[8] = (long)puStack_f8;
              uVar19 = *(uint *)((long)plVar20 + 0x14);
            }
            if (uVar19 == 10) {
              plVar20[5] = 0;
              plVar20[6] = plVar20[6] + 1;
              uVar19 = 10;
            }
          }
          if (((int)uVar19 < *(int *)ppuVar13) || (*(int *)((long)ppuVar13 + 4) < (int)uVar19)) {
            plVar20[0xd] = (long)"invalid string: ill-formed UTF-8 byte";
            return 0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (plVar20 + 10,(int)(char)uVar19);
          ppuVar13 = ppuVar13 + 1;
        } while (ppuVar13 != ppuVar1);
      }
      return 1;
    case 0xffffffff:
      goto LAB_00192750;
    }
LAB_00192710:
    param_1[0xd] = (long)pcVar15;
    goto LAB_00192714;
  case 0x2c:
    return 0xd;
/* wm:donate: donate/README.md */
  case 0x2d:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      *(undefined1 *)param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined1 *)((long)param_1 + 0x67) = 0;
    }
    puVar23 = (ulong *)(param_1 + 7);
    uStack_68 = (undefined1 *)*puVar23;
    param_1[8] = (long)uStack_68;
    param_1[0x12] = -1;
    uVar3 = (undefined1)*(undefined4 *)((long)param_1 + 0x14);
    uStack_88 = (byte *)CONCAT17(uVar3,(undefined7)uStack_88);
    puStack_80 = &uStack_68;
    pbStack_78 = (byte *)((long)&uStack_88 + 7);
    puStack_70 = puVar23;
    if (uStack_68 < (undefined1 *)param_1[9]) {
      *uStack_68 = uVar3;
      puVar17 = uStack_68 + 1;
    }
    else {
/* more drops soon - github.com/pengussy */
      func_0x0003b960(&puStack_80);
      puVar17 = uStack_68;
    }
    plVar20 = param_1 + 10;
    param_1[8] = (long)puVar17;
    iVar5 = *(int *)((long)param_1 + 0x14);
    iVar21 = 5;
    if (iVar5 - 0x31U < 9) {
      uVar14 = 5;
LAB_00192a20:
      uStack_a8 = (ulong *)CONCAT44(uVar14,(undefined4)uStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar20);
      lVar26 = 1;
      lVar27 = 1;
      lStack_98 = 1;
      lStack_a0 = 1;
      while( true ) {
        param_1[5] = param_1[5] + lVar27;
        param_1[4] = param_1[4] + lVar26;
        if ((char)param_1[3] == '\x01') {
          *(undefined1 *)(param_1 + 3) = 0;
          uVar19 = *(uint *)((long)param_1 + 0x14);
        }
        else {
          pbVar24 = (byte *)*param_1;
          if (pbVar24 == (byte *)param_1[1]) {
            uVar19 = 0xffffffff;
          }
          else {
            uVar19 = (uint)*pbVar24;
            *param_1 = (long)(pbVar24 + 1);
          }
          *(uint *)((long)param_1 + 0x14) = uVar19;
// chat: discord.gg/sdkhDjTex
        }
        if (uVar19 == 0xffffffff) {
          uVar19 = 0xffffffff;
          *(undefined1 *)(param_1 + 3) = 1;
          lVar26 = param_1[5];
          param_1[4] = param_1[4] + -1;
          iVar21 = uStack_a8._4_4_;
          goto joined_r0x00192ef4;
        }
        uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
        uStack_68 = (undefined1 *)param_1[8];
        puStack_80 = &uStack_68;
        pbStack_78 = (byte *)((long)&uStack_88 + 7);
        if (uStack_68 < (undefined1 *)param_1[9]) {
          *uStack_68 = (char)uVar19;
          param_1[8] = (long)(uStack_68 + 1);
          uVar19 = *(uint *)((long)param_1 + 0x14);
          puStack_70 = puVar23;
          puVar11 = uStack_a8;
        }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        else {
          puStack_70 = puVar23;
          func_0x0003b960(&puStack_80);
          param_1[8] = (long)uStack_68;
          uVar19 = *(uint *)((long)param_1 + 0x14);
          lVar26 = lStack_a0;
          lVar27 = lStack_98;
          puVar11 = uStack_a8;
        }
        unaff_x21 = (ulong)uVar19;
        if (9 < uVar19 - 0x30) break;
        bVar18 = *(byte *)((long)param_1 + 0x67);
        uStack_a8 = puVar11;
        if ((char)bVar18 < '\0') {
          uVar22 = param_1[0xb];
          uVar7 = param_1[0xc] & 0x7fffffffffffffff;
          unaff_x22 = (ulong *)(uVar7 - 1);
          if ((ulong *)uVar22 == unaff_x22) {
/* wm:reversing this took months of machine time */
            if (uVar7 < 0x7ffffffffffffff7) {
              if (unaff_x22 < 0x3ffffffffffffff4) goto LAB_00192b40;
              unaff_x24 = 0x7ffffffffffffff8;
              unaff_x23 = (long *)__Znwm(0x7ffffffffffffff8);
LAB_00192b74:
              plVar12 = (long *)*plVar20;
              uVar22 = (ulong)unaff_x22;
              goto LAB_00192b78;
            }
            func_0x0000aa50();
            func_0x00006858();
            puVar25 = &SUB_00193404;
            auVar28 = func_0x00006858();
            ppuVar13 = auVar28._8_8_;
            plVar20 = auVar28._0_8_;
            goto code_r0x00193404;
          }
          unaff_x23 = (long *)*plVar20;
LAB_00192bb0:
          param_1[0xb] = uVar22 + 1;
        }
        else {
          if (bVar18 == 0x16) {
            unaff_x22 = (ulong *)0x16;
            uVar7 = 0x17;
LAB_00192b40:
            if (uVar7 <= (ulong)((long)unaff_x22 * 2)) {
              uVar7 = (long)unaff_x22 * 2;
            }
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            uVar7 = (uVar7 & 0x7ffffffffffffff8) + 8;
            unaff_x24 = 0x19;
            if (uVar7 != 0x18) {
              unaff_x24 = uVar7;
            }
            unaff_x23 = (long *)__Znwm(unaff_x24);
            plVar12 = plVar20;
            uVar22 = (ulong)unaff_x22;
            if ((char)bVar18 < '\0') goto LAB_00192b74;
LAB_00192b78:
            if (uVar22 != 0) {
              param_3 = uVar22;
              _memmove(unaff_x23,plVar12);
            }
            if ((char)bVar18 < '\0') {
              __ZdlPv(*plVar20);
            }
            param_1[10] = (long)unaff_x23;
            param_1[0xc] = unaff_x24 | 0x8000000000000000;
            lVar26 = lStack_a0;
            lVar27 = lStack_98;
            goto LAB_00192bb0;
          }
          uVar22 = (ulong)bVar18;
          *(byte *)((long)param_1 + 0x67) = bVar18 + 1 & 0x7f;
          unaff_x23 = plVar20;
        }
        *(undefined1 *)((long)unaff_x23 + uVar22) = (char)uVar19;
        ((undefined1 *)((long)unaff_x23 + uVar22))[1] = 0;
      }
      uStack_a8._4_4_ = (int)((ulong)puVar11 >> 0x20);
      iVar21 = uStack_a8._4_4_;
      if ((int)uVar19 < 0x45) goto joined_r0x00192bfc;
joined_r0x00192c5c:
      uStack_a8 = puVar11;
      if ((uVar19 == 0x45) || (uVar19 = (uint)unaff_x21, uVar19 == 0x65)) {
LAB_00192c68:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
/*  no support for modified copies  */
                  (plVar20,unaff_x21);
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((char)param_1[3] == '\x01') {
          *(undefined1 *)(param_1 + 3) = 0;
          uVar19 = *(uint *)((long)param_1 + 0x14);
        }
        else {
          pbVar24 = (byte *)*param_1;
          if (pbVar24 == (byte *)param_1[1]) {
            uVar19 = 0xffffffff;
          }
          else {
            uVar19 = (uint)*pbVar24;
            *param_1 = (long)(pbVar24 + 1);
          }
          *(uint *)((long)param_1 + 0x14) = uVar19;
        }
        if (uVar19 != 0xffffffff) {
          uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
          uStack_68 = (undefined1 *)param_1[8];
          puStack_80 = &uStack_68;
          pbStack_78 = (byte *)((long)&uStack_88 + 7);
          if (uStack_68 < (undefined1 *)param_1[9]) {
            *uStack_68 = (char)uVar19;
            param_1[8] = (long)(uStack_68 + 1);
            iVar5 = *(int *)((long)param_1 + 0x14);
            puStack_70 = puVar23;
// WM - thanks for reading - discord.gg/sdkhDjTex
          }
          else {
            puStack_70 = puVar23;
            func_0x0003b960(&puStack_80);
            param_1[8] = (long)uStack_68;
            iVar5 = *(int *)((long)param_1 + 0x14);
          }
          if (iVar5 - 0x30U < 10) {
LAB_00192d3c:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar20);
            lStack_98 = 1;
            lStack_a0 = 1;
            while( true ) {
              param_1[5] = param_1[5] + lStack_98;
              param_1[4] = param_1[4] + lStack_a0;
              if ((char)param_1[3] == '\x01') {
                *(undefined1 *)(param_1 + 3) = 0;
                uVar19 = *(uint *)((long)param_1 + 0x14);
              }
              else {
                pbVar24 = (byte *)*param_1;
                if (pbVar24 == (byte *)param_1[1]) {
                  uVar19 = 0xffffffff;
                }
                else {
                  uVar19 = (uint)*pbVar24;
// reversing this took months of machine time
                  *param_1 = (long)(pbVar24 + 1);
                }
                *(uint *)((long)param_1 + 0x14) = uVar19;
              }
              if (uVar19 == 0xffffffff) goto LAB_00193164;
              uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
              uStack_68 = (undefined1 *)param_1[8];
              puStack_80 = &uStack_68;
              pbStack_78 = (byte *)((long)&uStack_88 + 7);
              if (uStack_68 < (undefined1 *)param_1[9]) {
                *uStack_68 = (char)uVar19;
                param_1[8] = (long)(uStack_68 + 1);
                uVar19 = *(uint *)((long)param_1 + 0x14);
                puStack_70 = puVar23;
              }
              else {
                puStack_70 = puVar23;
                func_0x0003b960(&puStack_80);
                param_1[8] = (long)uStack_68;
                uVar19 = *(uint *)((long)param_1 + 0x14);
              }
              if (uVar19 == 10) goto LAB_00193128;
              if (9 < uVar19 - 0x30) break;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                        (plVar20,uVar19);
            }
LAB_00193134:
            iVar21 = 7;
            *(undefined1 *)(param_1 + 3) = 1;
            lVar26 = param_1[5];
            param_1[4] = param_1[4] + -1;
            goto joined_r0x00192ef4;
          }
          if ((iVar5 == 0x2d) || (iVar5 == 0x2b)) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar20);
            param_1[5] = param_1[5] + 1;
            param_1[4] = param_1[4] + 1;
            if ((char)param_1[3] == '\x01') {
              *(undefined1 *)(param_1 + 3) = 0;
              uVar19 = *(uint *)((long)param_1 + 0x14);
            }
            else {
              pbVar24 = (byte *)*param_1;
              if (pbVar24 == (byte *)param_1[1]) {
                uVar19 = 0xffffffff;
              }
              else {
                uVar19 = (uint)*pbVar24;
                *param_1 = (long)(pbVar24 + 1);
              }
              *(uint *)((long)param_1 + 0x14) = uVar19;
            }
            if (uVar19 != 0xffffffff) {
              uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
              uStack_68 = (undefined1 *)param_1[8];
              puStack_80 = &uStack_68;
              pbStack_78 = (byte *)((long)&uStack_88 + 7);
              if (uStack_68 < (undefined1 *)param_1[9]) {
                *uStack_68 = (char)uVar19;
                param_1[8] = (long)(uStack_68 + 1);
                iVar5 = *(int *)((long)param_1 + 0x14);
/*  found on a paste site? it was re-uploaded illegally  */
                puStack_70 = puVar23;
              }
              else {
                puStack_70 = puVar23;
                func_0x0003b960(&puStack_80);
                param_1[8] = (long)uStack_68;
                iVar5 = *(int *)((long)param_1 + 0x14);
              }
              if (iVar5 == 10) {
                param_1[5] = 0;
                param_1[6] = param_1[6] + 1;
                pcVar15 = "invalid number; expected digit after exponent sign";
                goto LAB_00193104;
              }
              if (iVar5 - 0x30U < 10) goto LAB_00192d3c;
            }
            pcVar15 = "invalid number; expected digit after exponent sign";
            goto LAB_00193104;
          }
// if you paid for this, you were scammed
          if (iVar5 == 10) {
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
          }
        }
        pcVar15 = "invalid number; expected \'+\', \'-\', or digit after exponent";
        goto LAB_00193104;
      }
    }
    else {
      if (iVar5 != 0x30) {
        if (iVar5 == 0x2d) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar20);
        }
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((char)param_1[3] == '\x01') {
          *(undefined1 *)(param_1 + 3) = 0;
          uVar19 = *(uint *)((long)param_1 + 0x14);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        }
        else {
          pbVar24 = (byte *)*param_1;
          if (pbVar24 == (byte *)param_1[1]) {
            uVar19 = 0xffffffff;
          }
          else {
            uVar19 = (uint)*pbVar24;
            *param_1 = (long)(pbVar24 + 1);
          }
          *(uint *)((long)param_1 + 0x14) = uVar19;
        }
        if (uVar19 != 0xffffffff) {
          uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
          uStack_68 = (undefined1 *)param_1[8];
          puStack_80 = &uStack_68;
          pbStack_78 = (byte *)((long)&uStack_88 + 7);
          if (uStack_68 < (undefined1 *)param_1[9]) {
            *uStack_68 = (char)uVar19;
            param_1[8] = (long)(uStack_68 + 1);
            iVar5 = *(int *)((long)param_1 + 0x14);
            puStack_70 = puVar23;
          }
          else {
            puStack_70 = puVar23;
            func_0x0003b960(&puStack_80);
            param_1[8] = (long)uStack_68;
            iVar5 = *(int *)((long)param_1 + 0x14);
          }
          if (iVar5 - 0x31U < 9) {
            uVar14 = 6;
            goto LAB_00192a20;
          }
          iVar21 = 6;
          if (iVar5 == 0x30) goto LAB_001931d4;
          if (iVar5 == 10) {
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
/*  chat: discord.gg/sdkhDjTex  */
          }
        }
        pcVar15 = "invalid number; expected digit after \'-\'";
        goto LAB_00193104;
      }
LAB_001931d4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar20,0x30);
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((char)param_1[3] == '\x01') {
        *(undefined1 *)(param_1 + 3) = 0;
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      else {
        pbVar24 = (byte *)*param_1;
        if (pbVar24 == (byte *)param_1[1]) {
          uVar19 = 0xffffffff;
        }
        else {
          uVar19 = (uint)*pbVar24;
          *param_1 = (long)(pbVar24 + 1);
        }
        *(uint *)((long)param_1 + 0x14) = uVar19;
      }
      if (uVar19 == 0xffffffff) goto LAB_00193168;
      uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
      uStack_68 = (undefined1 *)param_1[8];
      puStack_80 = &uStack_68;
      pbStack_78 = (byte *)((long)&uStack_88 + 7);
      if (uStack_68 < (undefined1 *)param_1[9]) {
        *uStack_68 = (char)uVar19;
        param_1[8] = (long)(uStack_68 + 1);
        uVar19 = *(uint *)((long)param_1 + 0x14);
        puStack_70 = puVar23;
      }
/*  stripping the watermark breaks the license  */
      else {
        puStack_70 = puVar23;
        func_0x0003b960(&puStack_80);
        param_1[8] = (long)uStack_68;
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      puVar11 = uStack_a8;
      if (0x44 < (int)uVar19) {
        unaff_x21 = (ulong)uVar19;
        goto joined_r0x00192c5c;
      }
joined_r0x00192bfc:
      uStack_a8 = puVar11;
      if (uVar19 == 10) {
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
      }
      else if (uVar19 == 0x2e) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (plVar20,(long)(char)param_1[0x11]);
        lVar26 = (long)*(char *)((long)param_1 + 0x67);
        if (lVar26 < 0) {
          lVar26 = param_1[0xb];
        }
        param_1[0x12] = lVar26 + -1;
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((char)param_1[3] == '\x01') {
          *(undefined1 *)(param_1 + 3) = 0;
          uVar19 = *(uint *)((long)param_1 + 0x14);
        }
        else {
          pbVar24 = (byte *)*param_1;
          if (pbVar24 == (byte *)param_1[1]) {
            uVar19 = 0xffffffff;
          }
          else {
            uVar19 = (uint)*pbVar24;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
            *param_1 = (long)(pbVar24 + 1);
          }
          *(uint *)((long)param_1 + 0x14) = uVar19;
        }
        if (uVar19 != 0xffffffff) {
          uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
          uStack_68 = (undefined1 *)param_1[8];
          puStack_80 = &uStack_68;
          pbStack_78 = (byte *)((long)&uStack_88 + 7);
          if (uStack_68 < (undefined1 *)param_1[9]) {
            *uStack_68 = (char)uVar19;
            param_1[8] = (long)(uStack_68 + 1);
            iVar5 = *(int *)((long)param_1 + 0x14);
            puStack_70 = puVar23;
          }
          else {
            puStack_70 = puVar23;
            func_0x0003b960(&puStack_80);
            param_1[8] = (long)uStack_68;
/* no support for modified copies */
            iVar5 = *(int *)((long)param_1 + 0x14);
          }
          if (iVar5 == 10) {
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
          }
          else if (iVar5 - 0x30U < 10) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar20);
            lStack_98 = 1;
            lStack_a0 = 1;
            while( true ) {
              param_1[5] = param_1[5] + lStack_98;
              param_1[4] = param_1[4] + lStack_a0;
              if ((char)param_1[3] == '\x01') {
                *(undefined1 *)(param_1 + 3) = 0;
                uVar19 = *(uint *)((long)param_1 + 0x14);
              }
              else {
/*  do not claim this as your own  */
                pbVar24 = (byte *)*param_1;
                if (pbVar24 == (byte *)param_1[1]) {
                  uVar19 = 0xffffffff;
                }
                else {
                  uVar19 = (uint)*pbVar24;
                  *param_1 = (long)(pbVar24 + 1);
                }
                *(uint *)((long)param_1 + 0x14) = uVar19;
              }
              if (uVar19 == 0xffffffff) goto LAB_00193164;
              uStack_88 = (byte *)CONCAT17((char)uVar19,(undefined7)uStack_88);
              uStack_68 = (undefined1 *)param_1[8];
              puStack_80 = &uStack_68;
              pbStack_78 = (byte *)((long)&uStack_88 + 7);
              if (uStack_68 < (undefined1 *)param_1[9]) {
                *uStack_68 = (char)uVar19;
                param_1[8] = (long)(uStack_68 + 1);
                uVar19 = *(uint *)((long)param_1 + 0x14);
                puStack_70 = puVar23;
              }
              else {
                puStack_70 = puVar23;
                func_0x0003b960(&puStack_80);
                param_1[8] = (long)uStack_68;
                uVar19 = *(uint *)((long)param_1 + 0x14);
              }
              unaff_x21 = (ulong)uVar19;
              if (9 < uVar19 - 0x30) break;
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
// WM - keep the notice, keep the source honest
                        (plVar20,unaff_x21);
            }
            if ((uVar19 == 0x65) || (uVar19 == 0x45)) goto LAB_00192c68;
            if (uVar19 == 10) {
LAB_00193128:
              param_1[5] = 0;
              param_1[6] = param_1[6] + 1;
            }
            goto LAB_00193134;
          }
        }
        pcVar15 = "invalid number; expected digit after \'.\'";
LAB_00193104:
        param_1[0xd] = (long)pcVar15;
        return 0xe;
      }
    }
    *(undefined1 *)(param_1 + 3) = 1;
/* stripping the watermark breaks the license */
    lVar26 = param_1[5];
    param_1[4] = param_1[4] + -1;
joined_r0x00192ef4:
    if (lVar26 == 0) {
      if (param_1[6] != 0) {
        param_1[6] = param_1[6] + -1;
      }
    }
    else {
      param_1[5] = lVar26 + -1;
    }
    if (uVar19 != 0xffffffff) {
      param_1[8] = param_1[8] + -1;
    }
    puStack_80 = (undefined8 *)0x0;
    puVar9 = (undefined4 *)___error();
    *puVar9 = 0;
    if (iVar21 == 6) {
      plVar12 = plVar20;
      if (*(char *)((long)param_1 + 0x67) < '\0') {
        plVar12 = (long *)*plVar20;
      }
      lVar26 = _strtoll(plVar12,&puStack_80,10);
      piVar10 = (int *)___error();
      if (*piVar10 != 0x22) {
        param_1[0xe] = lVar26;
        return 6;
      }
    }
    else if (iVar21 == 5) {
      plVar12 = plVar20;
      if (*(char *)((long)param_1 + 0x67) < '\0') {
        plVar12 = (long *)*plVar20;
      }
      lVar26 = _strtoull(plVar12,&puStack_80,10);
      piVar10 = (int *)___error();
      if (*piVar10 != 0x22) {
        param_1[0xf] = lVar26;
// WM - watermarked copy - do not remove
        return 5;
      }
    }
    if (*(char *)((long)param_1 + 0x67) < '\0') {
      plVar20 = (long *)*plVar20;
    }
    lVar26 = _strtod(plVar20,&puStack_80);
    param_1[0x10] = lVar26;
    return 7;
  case 0x3a:
    return 0xc;
  case 0x5b:
    return 8;
  case 0x5d:
    return 10;
  case 0x66:
/* donate: donate/README.md - github.com/pengussy */
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      pbVar24 = (byte *)*param_1;
      if (pbVar24 == (byte *)param_1[1]) {
        uVar19 = 0xffffffff;
      }
      else {
        uVar19 = (uint)*pbVar24;
        *param_1 = (long)(pbVar24 + 1);
      }
      *(uint *)((long)param_1 + 0x14) = uVar19;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
      uVar19 = 0x66;
    }
    if (uVar19 != 0xffffffff) {
      puVar17 = (undefined1 *)param_1[8];
      if (puVar17 < (undefined1 *)param_1[9]) {
        *puVar17 = (char)uVar19;
        param_1[8] = (long)(puVar17 + 1);
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      else {
        func_0x0003b960((long)register0x00000008 + -0x40);
        param_1[8] = (long)puVar17;
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      if (uVar19 == 10) {
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
        uVar19 = 10;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      }
    }
    if ((uVar19 & 0xff) == 0x61) {
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        pbVar24 = (byte *)*param_1;
        if (pbVar24 == (byte *)param_1[1]) {
          uVar19 = 0xffffffff;
          *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
        }
        else {
          uVar19 = (uint)*pbVar24;
          *param_1 = (long)(pbVar24 + 1);
          *(uint *)((long)param_1 + 0x14) = uVar19;
          if (uVar19 != 0xffffffff) goto LAB_001913d8;
        }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
        if (uVar19 == 0xffffffff) {
          uVar19 = 0xffffffff;
        }
        else {
LAB_001913d8:
          puVar17 = (undefined1 *)param_1[8];
          if (puVar17 < (undefined1 *)param_1[9]) {
            *puVar17 = (char)uVar19;
            param_1[8] = (long)(puVar17 + 1);
            uVar19 = *(uint *)((long)param_1 + 0x14);
          }
          else {
            func_0x0003b960((long)register0x00000008 + -0x40);
/* wm:unlicensed copy if this notice is missing */
            param_1[8] = (long)puVar17;
            uVar19 = *(uint *)((long)param_1 + 0x14);
          }
          if (uVar19 == 10) {
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
            uVar19 = 10;
          }
        }
      }
      if ((uVar19 & 0xff) == 0x6c) {
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((*(byte *)(param_1 + 3) & 1) == 0) {
          pbVar24 = (byte *)*param_1;
          if (pbVar24 == (byte *)param_1[1]) {
            uVar19 = 0xffffffff;
            *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
          }
          else {
            uVar19 = (uint)*pbVar24;
            *param_1 = (long)(pbVar24 + 1);
/*  keep the notice, keep the source honest  */
            *(uint *)((long)param_1 + 0x14) = uVar19;
            if (uVar19 != 0xffffffff) goto LAB_00191478;
          }
        }
        else {
          *(undefined1 *)(param_1 + 3) = 0;
          if (uVar19 == 0xffffffff) {
            uVar19 = 0xffffffff;
          }
          else {
LAB_00191478:
            puVar17 = (undefined1 *)param_1[8];
            if (puVar17 < (undefined1 *)param_1[9]) {
              *puVar17 = (char)uVar19;
              param_1[8] = (long)(puVar17 + 1);
              uVar19 = *(uint *)((long)param_1 + 0x14);
            }
            else {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              func_0x0003b960((long)register0x00000008 + -0x40);
              param_1[8] = (long)puVar17;
              uVar19 = *(uint *)((long)param_1 + 0x14);
            }
            if (uVar19 == 10) {
              param_1[5] = 0;
              param_1[6] = param_1[6] + 1;
              uVar19 = 10;
            }
          }
        }
        if ((uVar19 & 0xff) == 0x73) {
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((*(byte *)(param_1 + 3) & 1) == 0) {
            pbVar24 = (byte *)*param_1;
            if (pbVar24 == (byte *)param_1[1]) {
              *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
            }
            else {
              uVar19 = (uint)*pbVar24;
              *param_1 = (long)(pbVar24 + 1);
              *(uint *)((long)param_1 + 0x14) = uVar19;
              if (uVar19 != 0xffffffff) goto LAB_00191518;
            }
LAB_001918f8:
            uVar19 = 0xffffffff;
          }
// stripping the watermark breaks the license
          else {
            *(undefined1 *)(param_1 + 3) = 0;
            if (uVar19 == 0xffffffff) goto LAB_001918f8;
LAB_00191518:
            puVar17 = (undefined1 *)param_1[8];
            if (puVar17 < (undefined1 *)param_1[9]) {
              *puVar17 = (char)uVar19;
              param_1[8] = (long)(puVar17 + 1);
              uVar19 = *(uint *)((long)param_1 + 0x14);
            }
            else {
              func_0x0003b960((long)register0x00000008 + -0x40);
              param_1[8] = (long)puVar17;
              uVar19 = *(uint *)((long)param_1 + 0x14);
            }
            if (uVar19 == 10) {
              param_1[5] = 0;
              param_1[6] = param_1[6] + 1;
              uVar19 = 10;
/* WM - donate: donate/README.md */
            }
          }
          if ((uVar19 & 0xff) == 0x65) {
            return 2;
          }
        }
      }
    }
    break;
  case 0x6e:
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
      pbVar24 = (byte *)*param_1;
      if (pbVar24 != (byte *)param_1[1]) {
        bVar18 = *pbVar24;
        *param_1 = (long)(pbVar24 + 1);
        *(uint *)((long)param_1 + 0x14) = (uint)bVar18;
        goto LAB_001912c0;
      }
LAB_00191774:
      *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
      bVar18 = 0x6e;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
LAB_001912c0:
      pbVar24 = (byte *)param_1[8];
      if (pbVar24 < (byte *)param_1[9]) {
        *pbVar24 = bVar18;
        param_1[8] = (long)(pbVar24 + 1);
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      else {
        func_0x0003b960((long)register0x00000008 + -0x40);
        param_1[8] = (long)pbVar24;
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      if (uVar19 == 10) {
LAB_00191748:
        param_1[5] = 0;
        param_1[6] = param_1[6] + 1;
      }
      else if ((uVar19 & 0xff) == 0x75) {
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((*(byte *)(param_1 + 3) & 1) == 0) {
          pbVar24 = (byte *)*param_1;
          if (pbVar24 == (byte *)param_1[1]) goto LAB_00191774;
          bVar18 = *pbVar24;
          *param_1 = (long)(pbVar24 + 1);
          *(uint *)((long)param_1 + 0x14) = (uint)bVar18;
        }
        else {
          *(undefined1 *)(param_1 + 3) = 0;
          bVar18 = 0x75;
        }
        pbVar24 = (byte *)param_1[8];
        if (pbVar24 < (byte *)param_1[9]) {
          *pbVar24 = bVar18;
          param_1[8] = (long)(pbVar24 + 1);
          uVar19 = *(uint *)((long)param_1 + 0x14);
        }
/*  watermarked copy - do not remove  */
        else {
          func_0x0003b960((long)register0x00000008 + -0x40);
          param_1[8] = (long)pbVar24;
          uVar19 = *(uint *)((long)param_1 + 0x14);
        }
        if (uVar19 == 10) goto LAB_00191748;
        if ((uVar19 & 0xff) == 0x6c) {
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((*(byte *)(param_1 + 3) & 1) == 0) {
            pbVar24 = (byte *)*param_1;
            if (pbVar24 == (byte *)param_1[1]) goto LAB_00191774;
            bVar18 = *pbVar24;
            *param_1 = (long)(pbVar24 + 1);
            *(uint *)((long)param_1 + 0x14) = (uint)bVar18;
          }
          else {
            *(undefined1 *)(param_1 + 3) = 0;
            bVar18 = 0x6c;
          }
          pbVar24 = (byte *)param_1[8];
          if (pbVar24 < (byte *)param_1[9]) {
            *pbVar24 = bVar18;
            param_1[8] = (long)(pbVar24 + 1);
            uVar19 = *(uint *)((long)param_1 + 0x14);
          }
/* reversing this took months of machine time */
          else {
            func_0x0003b960((long)register0x00000008 + -0x40);
            param_1[8] = (long)pbVar24;
            uVar19 = *(uint *)((long)param_1 + 0x14);
          }
          if (uVar19 == 10) goto LAB_00191748;
          if ((uVar19 & 0xff) == 0x6c) {
            return 3;
          }
        }
      }
    }
    break;
  case 0x74:
    param_1[5] = param_1[5] + 1;
    param_1[4] = param_1[4] + 1;
    if ((*(byte *)(param_1 + 3) & 1) == 0) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      pbVar24 = (byte *)*param_1;
      if (pbVar24 == (byte *)param_1[1]) goto LAB_00191774;
      bVar18 = *pbVar24;
      *param_1 = (long)(pbVar24 + 1);
      *(uint *)((long)param_1 + 0x14) = (uint)bVar18;
    }
    else {
      *(undefined1 *)(param_1 + 3) = 0;
      bVar18 = 0x74;
    }
    pbVar24 = (byte *)param_1[8];
    if (pbVar24 < (byte *)param_1[9]) {
      *pbVar24 = bVar18;
      param_1[8] = (long)(pbVar24 + 1);
      uVar19 = *(uint *)((long)param_1 + 0x14);
    }
    else {
      func_0x0003b960((long)register0x00000008 + -0x40);
      param_1[8] = (long)pbVar24;
      uVar19 = *(uint *)((long)param_1 + 0x14);
    }
    if (uVar19 == 10) goto LAB_00191748;
    if ((uVar19 & 0xff) == 0x72) {
/*  more drops soon - github.com/pengussy  */
      param_1[5] = param_1[5] + 1;
      param_1[4] = param_1[4] + 1;
      if ((*(byte *)(param_1 + 3) & 1) == 0) {
        pbVar24 = (byte *)*param_1;
        if (pbVar24 == (byte *)param_1[1]) goto LAB_00191774;
        bVar18 = *pbVar24;
        *param_1 = (long)(pbVar24 + 1);
        *(uint *)((long)param_1 + 0x14) = (uint)bVar18;
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
        bVar18 = 0x72;
      }
      pbVar24 = (byte *)param_1[8];
      if (pbVar24 < (byte *)param_1[9]) {
        *pbVar24 = bVar18;
        param_1[8] = (long)(pbVar24 + 1);
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      else {
        func_0x0003b960((long)register0x00000008 + -0x40);
        param_1[8] = (long)pbVar24;
        uVar19 = *(uint *)((long)param_1 + 0x14);
      }
      if (uVar19 == 10) goto LAB_00191748;
      if ((uVar19 & 0xff) == 0x75) {
        param_1[5] = param_1[5] + 1;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        param_1[4] = param_1[4] + 1;
        if ((*(byte *)(param_1 + 3) & 1) == 0) {
          pbVar24 = (byte *)*param_1;
          if (pbVar24 == (byte *)param_1[1]) goto LAB_00191774;
          bVar18 = *pbVar24;
          *param_1 = (long)(pbVar24 + 1);
          *(uint *)((long)param_1 + 0x14) = (uint)bVar18;
        }
        else {
          *(undefined1 *)(param_1 + 3) = 0;
          bVar18 = 0x75;
        }
        pbVar24 = (byte *)param_1[8];
        if (pbVar24 < (byte *)param_1[9]) {
          *pbVar24 = bVar18;
          param_1[8] = (long)(pbVar24 + 1);
          uVar19 = *(uint *)((long)param_1 + 0x14);
        }
        else {
// origin: github.com/pengussy
          func_0x0003b960((long)register0x00000008 + -0x40);
          param_1[8] = (long)pbVar24;
          uVar19 = *(uint *)((long)param_1 + 0x14);
        }
        if (uVar19 == 10) goto LAB_00191748;
        if ((uVar19 & 0xff) == 0x65) {
          return 1;
        }
      }
    }
    break;
  case 0x7b:
    return 9;
  case 0x7d:
    return 0xb;
  case 0xffffffff:
  case 0:
    return 0xf;
  }
  pcVar15 = "invalid literal";
LAB_0019175c:
  param_1[0xd] = (long)pcVar15;
  return 0xe;
/* keep the notice, keep the source honest */
LAB_00193164:
  iVar21 = 7;
LAB_00193168:
  uVar19 = 0xffffffff;
  *(undefined1 *)(param_1 + 3) = 1;
  lVar26 = param_1[5];
  param_1[4] = param_1[4] + -1;
  goto joined_r0x00192ef4;
}

