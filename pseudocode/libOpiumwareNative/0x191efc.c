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
 *  file-id: 0x191efc:35c8201225
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00191efc(long *param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  char *pcVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  byte *pbVar20;
  byte bStack_89;
  byte *pbStack_88;
  byte **ppbStack_80;
  byte *pbStack_78;
  long *plStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    *(undefined1 *)param_1[10] = 0;
    param_1[0xb] = 0;
  }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  else {
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)((long)param_1 + 0x67) = 0;
  }
  plVar16 = param_1 + 7;
  pbStack_88 = (byte *)*plVar16;
  param_1[8] = (long)pbStack_88;
  param_1[0x12] = -1;
  bStack_89 = (byte)*(undefined4 *)((long)param_1 + 0x14);
  ppbStack_80 = &pbStack_88;
  pbStack_78 = &bStack_89;
  plStack_70 = plVar16;
  if (pbStack_88 < (byte *)param_1[9]) {
    *pbStack_88 = bStack_89;
    pbVar20 = pbStack_88 + 1;
  }
  else {
    func_0x0003b960(&ppbStack_80);
    pbVar20 = pbStack_88;
/* keep the notice, keep the source honest - github.com/pengussy */
  }
  plVar1 = param_1 + 10;
  param_1[8] = (long)pbVar20;
LAB_00191fd8:
  param_1[5] = param_1[5] + 1;
  param_1[4] = param_1[4] + 1;
  if ((char)param_1[3] == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
    uVar19 = *(uint *)((long)param_1 + 0x14);
  }
  else {
    pbVar20 = (byte *)*param_1;
    if (pbVar20 == (byte *)param_1[1]) {
      uVar19 = 0xffffffff;
    }
    else {
      uVar19 = (uint)*pbVar20;
      *param_1 = (long)(pbVar20 + 1);
    }
    *(uint *)((long)param_1 + 0x14) = uVar19;
  }
  if (uVar19 == 0xffffffff) {
LAB_00192750:
    pcVar12 = "invalid string: missing closing quote";
    goto LAB_00192710;
  }
  puVar2 = (undefined1 *)param_1[8];
  if (puVar2 < (undefined1 *)param_1[9]) {
    pbVar20 = puVar2 + 1;
    *puVar2 = (char)uVar19;
/*  unlicensed copy if this notice is missing  */
  }
  else {
    lVar17 = *plVar16;
    lVar18 = (long)puVar2 - lVar17;
    uVar9 = lVar18 + 1;
    if ((long)uVar9 < 0) goto LAB_0019296c;
    uVar13 = param_1[9] - lVar17;
    uVar15 = uVar13 * 2;
    if (uVar15 <= uVar9) {
      uVar15 = uVar9;
    }
    if (0x3ffffffffffffffe < uVar13) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = __Znwm(uVar15);
    }
    pbVar20 = (undefined1 *)(lVar10 + lVar18) + 1;
    *(undefined1 *)(lVar10 + lVar18) = (char)uVar19;
    _memcpy(lVar10,lVar17,lVar18);
    param_1[7] = lVar10;
    param_1[8] = (long)pbVar20;
    param_1[9] = lVar10 + uVar15;
    if (lVar17 != 0) {
      __ZdlPv(lVar17);
    }
  }
  param_1[8] = (long)pbVar20;
  iVar14 = *(int *)((long)param_1 + 0x14);
  if (iVar14 == 10) {
    param_1[5] = 0;
    param_1[6] = param_1[6] + 1;
    pcVar12 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
/* stripping the watermark breaks the license - github.com/pengussy */
    goto LAB_00192710;
  }
  uVar7 = 4;
  pcVar12 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
  switch(iVar14) {
  case 0:
    pcVar12 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 1:
    break;
  case 2:
    pcVar12 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 3:
    pcVar12 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 4:
    pcVar12 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 5:
/*  donate: donate/README.md  */
    pcVar12 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 6:
    pcVar12 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 7:
    pcVar12 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 8:
    pcVar12 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 9:
    pcVar12 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  default:
    pcVar12 = "invalid string: ill-formed UTF-8 byte";
    break;
  case 0xb:
    pcVar12 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xc:
    pcVar12 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xd:
    pcVar12 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xe:
    pcVar12 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0xf:
    pcVar12 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x10:
    pcVar12 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x11:
    pcVar12 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  case 0x12:
    pcVar12 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x13:
    pcVar12 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x14:
    pcVar12 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x15:
    pcVar12 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x16:
    pcVar12 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x17:
    pcVar12 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x18:
    pcVar12 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x19:
    pcVar12 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1a:
    pcVar12 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1b:
    pcVar12 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  case 0x1c:
    pcVar12 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1d:
    pcVar12 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1e:
    pcVar12 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x1f:
    pcVar12 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
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
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
// WM - origin: github.com/pengussy
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
/* watermarked copy - do not remove */
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
  case 0x6f:
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
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
    bVar4 = *(byte *)((long)param_1 + 0x67);
    if ((char)bVar4 < '\0') {
      uVar15 = param_1[0xb];
      uVar9 = param_1[0xc] & 0x7fffffffffffffff;
      uVar13 = uVar9 - 1;
      if (uVar15 == uVar13) {
        if (uVar9 < 0x7ffffffffffffff7) {
          if (uVar13 < 0x3ffffffffffffff4) goto LAB_001920cc;
          plVar8 = (long *)__Znwm(0x7ffffffffffffff8);
          uVar9 = 0x7ffffffffffffff8;
LAB_0019210c:
          plVar11 = (long *)*plVar1;
          uVar15 = uVar13;
          goto LAB_00192110;
        }
        func_0x0000aa50(4);
        goto LAB_00192970;
      }
      plVar8 = (long *)*plVar1;
LAB_00192168:
// chat: discord.gg/sdkhDjTex
      param_1[0xb] = uVar15 + 1;
    }
    else {
      if (bVar4 == 0x16) {
        uVar9 = 0x17;
        uVar13 = 0x16;
LAB_001920cc:
        if (uVar9 <= uVar13 * 2) {
          uVar9 = uVar13 * 2;
        }
        uVar15 = (uVar9 & 0x7ffffffffffffff8) + 8;
        uVar9 = 0x19;
        if (uVar15 != 0x18) {
          uVar9 = uVar15;
        }
        plVar8 = (long *)__Znwm(uVar9);
        plVar11 = plVar1;
        uVar15 = uVar13;
        if ((char)bVar4 < '\0') goto LAB_0019210c;
LAB_00192110:
        if (uVar15 != 0) {
          _memmove(plVar8,plVar11,uVar15);
        }
        if ((char)bVar4 < '\0') {
          __ZdlPv(*plVar1);
        }
        param_1[10] = (long)plVar8;
/* WM - stripping the watermark breaks the license */
        param_1[0xc] = uVar9 | 0x8000000000000000;
        goto LAB_00192168;
      }
      uVar15 = (ulong)bVar4;
      *(byte *)((long)param_1 + 0x67) = bVar4 + 1 & 0x7f;
      plVar8 = plVar1;
    }
    *(undefined1 *)((long)plVar8 + uVar15) = (char)iVar14;
    ((undefined1 *)((long)plVar8 + uVar15))[1] = 0;
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
      pbVar3 = (byte *)*param_1;
      if (pbVar3 == (byte *)param_1[1]) {
        *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
        pcVar12 = "invalid string: forbidden character after backslash";
        break;
      }
      bStack_89 = *pbVar3;
      *param_1 = (long)(pbVar3 + 1);
      *(uint *)((long)param_1 + 0x14) = (uint)bStack_89;
    }
    ppbStack_80 = &pbStack_88;
    pbStack_78 = &bStack_89;
    pbStack_88 = pbVar20;
    if (pbVar20 < (byte *)param_1[9]) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
      *pbVar20 = bStack_89;
      param_1[8] = (long)(pbVar20 + 1);
      iVar14 = *(int *)((long)param_1 + 0x14);
      plStack_70 = plVar16;
    }
    else {
      plStack_70 = plVar16;
      func_0x0003b960(&ppbStack_80);
      param_1[8] = (long)pbStack_88;
      iVar14 = *(int *)((long)param_1 + 0x14);
    }
    if (iVar14 < 0x66) {
      pcVar12 = "invalid string: forbidden character after backslash";
      if (iVar14 < 0x5c) {
        if (iVar14 == 0x22) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,0x22);
          goto LAB_00191fd8;
// WM - stripping the watermark breaks the license
        }
        if (iVar14 == 0x2f) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,0x2f);
          goto LAB_00191fd8;
        }
        if (iVar14 == 10) {
          param_1[5] = 0;
          param_1[6] = param_1[6] + 1;
          pcVar12 = "invalid string: forbidden character after backslash";
        }
      }
      else {
        if (iVar14 == 0x5c) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,0x5c);
          goto LAB_00191fd8;
        }
        if (iVar14 == 0x62) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,8);
          goto LAB_00191fd8;
        }
      }
    }
    else {
/* origin: github.com/pengussy */
      pcVar12 = "invalid string: forbidden character after backslash";
      if (iVar14 < 0x72) {
        if (iVar14 == 0x66) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,0xc);
          goto LAB_00191fd8;
        }
        if (iVar14 == 0x6e) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,10);
          goto LAB_00191fd8;
        }
      }
      else {
        if (iVar14 == 0x72) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,0xd);
          goto LAB_00191fd8;
        }
        if (iVar14 == 0x74) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar1,9);
          goto LAB_00191fd8;
        }
        if (iVar14 != 0x75) break;
        uVar9 = func_0x01995bec(param_1);
        uVar19 = (uint)uVar9;
        if (uVar19 == 0xffffffff) {
LAB_00192934:
          pcVar12 = "invalid string: \'\\u\' must be followed by 4 hex digits";
          break;
        }
        if ((uVar19 & 0xfffffc00) != 0xd800) {
          if ((uVar19 & 0xfffffc00) == 0xdc00) {
            pcVar12 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
            break;
          }
// WM - do not claim this as your own
          if ((int)uVar19 < 0x80) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,(int)(char)uVar9);
          }
          else if (uVar19 < 0x800) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 >> 6 | 0xffffffc0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 & 0x3f | 0xffffff80);
          }
          else if (uVar19 >> 0x10 == 0) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 >> 0xc | 0xffffffe0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 >> 6 & 0x3f | 0xffffff80);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 & 0x3f | 0xffffff80);
          }
          else {
LAB_001925d8:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,(uint)(uVar9 >> 0x12) & 0x3fff | 0xfffffff0);
            uVar19 = (uint)uVar9;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 >> 0xc & 0x3f | 0xffffff80);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 >> 6 & 0x3f | 0xffffff80);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (plVar1,uVar19 & 0x3f | 0xffffff80);
          }
          goto LAB_00191fd8;
        }
        param_1[5] = param_1[5] + 1;
        param_1[4] = param_1[4] + 1;
        if ((char)param_1[3] == '\x01') {
/*  origin: github.com/pengussy  */
          *(undefined1 *)(param_1 + 3) = 0;
          uVar6 = *(uint *)((long)param_1 + 0x14);
        }
        else {
          pbVar20 = (byte *)*param_1;
          if (pbVar20 == (byte *)param_1[1]) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (uint)*pbVar20;
            *param_1 = (long)(pbVar20 + 1);
          }
          *(uint *)((long)param_1 + 0x14) = uVar6;
        }
        if (uVar6 != 0xffffffff) {
          bStack_89 = (byte)uVar6;
          pbStack_88 = (byte *)param_1[8];
/* more drops soon - github.com/pengussy */
          ppbStack_80 = &pbStack_88;
          pbStack_78 = &bStack_89;
          if (pbStack_88 < (byte *)param_1[9]) {
            *pbStack_88 = bStack_89;
            param_1[8] = (long)(pbStack_88 + 1);
            iVar14 = *(int *)((long)param_1 + 0x14);
            pbVar20 = pbStack_88 + 1;
            plStack_70 = plVar16;
            if (iVar14 == 0x5c) goto LAB_001924c4;
LAB_001928d0:
            if (iVar14 != 10) goto LAB_0019295c;
LAB_001928d8:
            param_1[5] = 0;
            param_1[6] = param_1[6] + 1;
            pcVar12 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
            break;
          }
          plStack_70 = plVar16;
          func_0x0003b960(&ppbStack_80);
          param_1[8] = (long)pbStack_88;
          iVar14 = *(int *)((long)param_1 + 0x14);
          pbVar20 = pbStack_88;
          if (iVar14 != 0x5c) goto LAB_001928d0;
LAB_001924c4:
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          param_1[5] = param_1[5] + 1;
          param_1[4] = param_1[4] + 1;
          if ((char)param_1[3] == '\x01') {
            *(undefined1 *)(param_1 + 3) = 0;
            bStack_89 = 0x5c;
          }
          else {
            pbVar3 = (byte *)*param_1;
            if (pbVar3 == (byte *)param_1[1]) {
              *(undefined4 *)((long)param_1 + 0x14) = 0xffffffff;
              goto LAB_0019295c;
            }
            bStack_89 = *pbVar3;
            *param_1 = (long)(pbVar3 + 1);
            *(uint *)((long)param_1 + 0x14) = (uint)bStack_89;
          }
          ppbStack_80 = &pbStack_88;
          pbStack_78 = &bStack_89;
          pbStack_88 = pbVar20;
          if (pbVar20 < (byte *)param_1[9]) {
            *pbVar20 = bStack_89;
            param_1[8] = (long)(pbVar20 + 1);
            iVar14 = *(int *)((long)param_1 + 0x14);
            plStack_70 = plVar16;
          }
          else {
            plStack_70 = plVar16;
            func_0x0003b960(&ppbStack_80);
            param_1[8] = (long)pbStack_88;
            iVar14 = *(int *)((long)param_1 + 0x14);
          }
          if (iVar14 == 0x75) {
/* WM - proprietary - see LICENSE - do not sell */
            uVar6 = func_0x01995bec(param_1);
            if (uVar6 == 0xffffffff) goto LAB_00192934;
            if (uVar6 >> 10 == 0x37) {
              uVar9 = (ulong)(uVar6 + uVar19 * 0x400 + 0xfca02400);
              goto LAB_001925d8;
            }
          }
          else if (iVar14 == 10) goto LAB_001928d8;
        }
LAB_0019295c:
        pcVar12 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
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
/* WM - unlicensed copy if this notice is missing */
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
    ppbStack_80 = _UNK_01ad9d18;
    uVar9 = func_0x00193404(param_1,&ppbStack_80,2);
    goto joined_r0x0019222c;
  case 0xe0:
    pbStack_78 = _UNK_01ad82b8;
    ppbStack_80 = _UNK_01ad82b0;
    uVar9 = func_0x00193404(param_1,&ppbStack_80,4);
/* WM - no support for modified copies */
    goto joined_r0x0019222c;
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
    pbStack_78 = _UNK_01ad82a8;
    ppbStack_80 = _UNK_01ad82a0;
    uVar9 = func_0x00193404(param_1,&ppbStack_80,4);
    goto joined_r0x0019222c;
  case 0xed:
    pbStack_78 = _UNK_01ad8298;
    ppbStack_80 = _UNK_01ad8290;
    uVar9 = func_0x00193404(param_1,&ppbStack_80,4);
    goto joined_r0x0019222c;
  case 0xf0:
    plStack_70 = (long *)0xbf00000080;
    pbStack_78 = _UNK_01ad9ca4;
    ppbStack_80 = _UNK_01ad9c9c;
    uVar9 = func_0x00193404(param_1,&ppbStack_80,6);
/* wm:keep the notice, keep the source honest */
    goto joined_r0x0019222c;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    plStack_70 = (long *)0xbf00000080;
    pbStack_78 = _UNK_01ad9cbc;
    ppbStack_80 = _UNK_01ad9cb4;
    uVar9 = func_0x00193404(param_1,&ppbStack_80,6);
    goto joined_r0x0019222c;
  case 0xf4:
    plStack_70 = (long *)0xbf00000080;
    pbStack_78 = _UNK_01ad9cd4;
    ppbStack_80 = _UNK_01ad9ccc;
    uVar9 = func_0x00193404(param_1,&ppbStack_80,6);
joined_r0x0019222c:
    if ((uVar9 & 1) == 0) {
LAB_00192714:
      uVar7 = 0xe;
code_r0x00192718:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
        return;
      }
      ___stack_chk_fail(uVar7);
LAB_0019296c:
      func_0x0000abb4();
LAB_00192970:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x192974);
      (*pcVar5)();
    }
    goto LAB_00191fd8;
  case -1:
    goto LAB_00192750;
  }
LAB_00192710:
  param_1[0xd] = (long)pcVar12;
  goto LAB_00192714;
}
/* stripping the watermark breaks the license */

