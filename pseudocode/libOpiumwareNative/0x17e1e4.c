/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x17e1e4:ec56d05f51
 */

undefined8 FUN_0017e1e4(long param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  undefined1 *puVar19;
// WM - unlicensed copy if this notice is missing
  ulong uVar20;
  undefined *puVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long *plVar25;
  ulong unaff_x23;
  long *plVar26;
  undefined8 *puVar27;
  undefined1 *puVar28;
  ulong unaff_x27;
  undefined1 auVar29 [16];
  undefined4 uStack_240;
  undefined2 uStack_23c;
  undefined2 uStack_23a;
  char cStack_229;
  undefined8 auStack_228 [2];
  char cStack_211;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  undefined *puStack_1f8;
/* origin: github.com/pengussy */
  undefined4 uStack_1f0;
  undefined1 auStack_1e8 [16];
  undefined8 uStack_1d8;
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined8 *puStack_198;
  ulong uStack_190;
  ulong uStack_188;
  long *plStack_180;
  ulong uStack_178;
  long *plStack_170;
  long lStack_168;
  long *plStack_160;
// WM - found on a paste site? it was re-uploaded illegally
  undefined *puStack_158;
  int iStack_144;
  long lStack_140;
  long lStack_138;
  undefined1 uStack_121;
  undefined1 **ppuStack_120;
  undefined1 *puStack_118;
  undefined8 *puStack_110;
  undefined1 *puStack_108;
  char *pcStack_100;
  ulong uStack_f8;
  undefined1 *puStack_f0;
  long *plStack_e8;
  undefined *puStack_e0;
  ulong uStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_81;
/* keep the notice, keep the source honest */
  undefined8 *puStack_80;
  undefined1 *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  if (*(char *)(param_1 + 0x67) < '\0') {
    **(undefined1 **)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x50) = 0;
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  plVar26 = (long *)(param_1 + 0x38);
  uStack_68 = (undefined1 *)*plVar26;
  *(undefined1 **)(param_1 + 0x40) = uStack_68;
  *(undefined8 *)(param_1 + 0x90) = 0xffffffffffffffff;
  uStack_81 = (undefined1)*(undefined4 *)(param_1 + 0x14);
  puStack_80 = &uStack_68;
  puStack_78 = &uStack_81;
  plStack_70 = plVar26;
  if (uStack_68 < *(undefined1 **)(param_1 + 0x48)) {
    *uStack_68 = uStack_81;
    puVar19 = uStack_68 + 1;
  }
  else {
    func_0x0003b960(&puStack_80);
/* more drops soon - github.com/pengussy - github.com/pengussy */
    puVar19 = uStack_68;
  }
  plVar12 = (long *)(param_1 + 0x50);
  *(undefined1 **)(param_1 + 0x40) = puVar19;
  lStack_98 = 1;
  lStack_a0 = 1;
LAB_0017e2ac:
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + lStack_98;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + lStack_a0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar7 = *(uint *)(param_1 + 0x14);
  }
  else {
    plVar25 = *(long **)(param_1 + 8);
    pbVar2 = (byte *)plVar25[3];
    if (pbVar2 == (byte *)plVar25[4]) {
      uVar7 = (**(code **)(*plVar25 + 0x50))(plVar25);
      if (uVar7 == 0xffffffff) {
        func_0x019cb784(param_1);
        uVar7 = 0xffffffff;
      }
    }
    else {
      uVar7 = (uint)*pbVar2;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      plVar25[3] = (long)(pbVar2 + 1);
    }
    *(uint *)(param_1 + 0x14) = uVar7;
  }
  if (uVar7 == 0xffffffff) {
    pcVar17 = "invalid string: missing closing quote";
    goto LAB_0017ed10;
  }
  puVar19 = *(undefined1 **)(param_1 + 0x40);
  if (*(undefined1 **)(param_1 + 0x48) <= puVar19) {
    lVar24 = *plVar26;
    plVar25 = (long *)(puVar19 + -lVar24);
    uVar20 = (long)plVar25 + 1;
    if (-1 < (long)uVar20) {
      uVar18 = (long)*(undefined1 **)(param_1 + 0x48) - lVar24;
      uVar22 = uVar18 * 2;
      if (uVar22 <= uVar20) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar22 = uVar20;
      }
      if (0x3ffffffffffffffe < uVar18) {
        uVar22 = 0x7fffffffffffffff;
      }
      if (uVar22 == 0) {
        unaff_x23 = 0;
      }
      else {
        unaff_x23 = __Znwm(uVar22);
      }
      unaff_x27 = unaff_x23 + uVar22;
      puVar28 = (undefined1 *)(unaff_x23 + (long)plVar25) + 1;
      *(undefined1 *)(unaff_x23 + (long)plVar25) = (char)uVar7;
      _memcpy(unaff_x23,lVar24,plVar25);
      *(ulong *)(param_1 + 0x38) = unaff_x23;
      *(undefined1 **)(param_1 + 0x40) = puVar28;
      *(ulong *)(param_1 + 0x48) = unaff_x27;
      if (lVar24 != 0) {
        __ZdlPv(lVar24);
      }
      goto LAB_0017e324;
    }
LAB_0017ef0c:
    func_0x0000abb4();
    lVar10 = func_0x00006858();
/*  keep the notice, keep the source honest  */
    pcStack_100 = "invalid string: missing closing quote";
    puStack_e0 = &UNK_01ad851e;
    puStack_a8 = &DAT_0017ef14;
    if (*(char *)(lVar10 + 0x67) < '\0') {
      **(undefined1 **)(lVar10 + 0x50) = 0;
      *(undefined8 *)(lVar10 + 0x58) = 0;
    }
    else {
      *(undefined1 *)(lVar10 + 0x50) = 0;
      *(undefined1 *)(lVar10 + 0x67) = 0;
    }
    puVar27 = (undefined8 *)(lVar10 + 0x38);
    puStack_108 = (undefined1 *)*puVar27;
    *(undefined1 **)(lVar10 + 0x40) = puStack_108;
    *(undefined8 *)(lVar10 + 0x90) = 0xffffffffffffffff;
    uStack_121 = (undefined1)*(undefined4 *)(lVar10 + 0x14);
    ppuStack_120 = &puStack_108;
    puStack_118 = &uStack_121;
    puStack_110 = puVar27;
    uStack_f8 = unaff_x27;
    puStack_f0 = puVar19;
    plStack_e8 = plVar26;
    uStack_d8 = unaff_x23;
    plStack_d0 = plVar25;
    lStack_c8 = lVar24;
    plStack_c0 = plVar12;
    lStack_b8 = param_1;
    lStack_b0 = (long)register0x00000008 + -0x10;
    if (puStack_108 < *(undefined1 **)(lVar10 + 0x48)) {
      *puStack_108 = uStack_121;
/* found on a paste site? it was re-uploaded illegally */
      puVar19 = puStack_108 + 1;
    }
    else {
      func_0x0003b960(&ppuStack_120);
      puVar19 = puStack_108;
    }
    plVar26 = (long *)(lVar10 + 0x50);
    *(undefined1 **)(lVar10 + 0x40) = puVar19;
    iVar8 = *(int *)(lVar10 + 0x14);
    iVar23 = 5;
    if (iVar8 - 0x31U < 9) {
      iStack_144 = 5;
code_r0x0017efb4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar26,(int)(char)iVar8);
      lStack_138 = 1;
      lStack_140 = 1;
      goto code_r0x0017effc;
    }
    if (iVar8 != 0x30) {
      if (iVar8 == 0x2d) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar26,0x2d);
      }
      iVar8 = func_0x01995708(lVar10);
      if (iVar8 - 0x31U < 9) {
        iVar8 = *(int *)(lVar10 + 0x14);
        iStack_144 = 6;
        goto code_r0x0017efb4;
      }
      if (iVar8 != 0x30) {
        puVar21 = &UNK_01c2d1c7;
        goto code_r0x0017f458;
      }
      iVar8 = *(int *)(lVar10 + 0x14);
      iVar23 = 6;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar26,(int)(char)iVar8);
    iVar8 = func_0x01995708(lVar10);
    if ((iVar8 == 0x65) || (iVar8 == 0x45)) goto code_r0x0017f41c;
    if (iVar8 != 0x2e) goto code_r0x0017f20c;
    goto code_r0x0017f3a4;
  }
  puVar28 = puVar19 + 1;
  *puVar19 = (char)uVar7;
LAB_0017e324:
  *(undefined1 **)(param_1 + 0x40) = puVar28;
  iVar8 = *(int *)(param_1 + 0x14);
  if (iVar8 == 10) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    pcVar17 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    goto LAB_0017ed10;
  }
  pcVar17 = "invalid string: missing closing quote";
  cVar4 = (char)iVar8;
  switch(iVar8) {
  case 0:
    pcVar17 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    goto LAB_0017ed10;
  case 1:
    pcVar17 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    goto LAB_0017ed10;
  case 2:
    pcVar17 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    goto LAB_0017ed10;
  case 3:
    pcVar17 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    goto LAB_0017ed10;
  case 4:
    pcVar17 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    goto LAB_0017ed10;
  case 5:
    pcVar17 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    goto LAB_0017ed10;
  case 6:
    pcVar17 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    goto LAB_0017ed10;
  case 7:
    pcVar17 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    goto LAB_0017ed10;
  case 8:
    pcVar17 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    goto LAB_0017ed10;
  case 9:
    pcVar17 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    goto LAB_0017ed10;
  case 0xb:
    pcVar17 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    goto LAB_0017ed10;
  case 0xc:
    pcVar17 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    goto LAB_0017ed10;
  case 0xd:
    pcVar17 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    goto LAB_0017ed10;
  case 0xe:
    pcVar17 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    goto LAB_0017ed10;
  case 0xf:
    pcVar17 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    goto LAB_0017ed10;
  case 0x10:
    pcVar17 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    goto LAB_0017ed10;
  case 0x11:
    pcVar17 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    goto LAB_0017ed10;
  case 0x12:
    pcVar17 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    goto LAB_0017ed10;
  case 0x13:
    pcVar17 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    goto LAB_0017ed10;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  case 0x14:
    pcVar17 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    goto LAB_0017ed10;
  case 0x15:
    pcVar17 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    goto LAB_0017ed10;
  case 0x16:
    pcVar17 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    goto LAB_0017ed10;
  case 0x17:
    pcVar17 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    goto LAB_0017ed10;
  case 0x18:
    pcVar17 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    goto LAB_0017ed10;
  case 0x19:
    pcVar17 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    goto LAB_0017ed10;
  case 0x1a:
    pcVar17 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    goto LAB_0017ed10;
  case 0x1b:
    pcVar17 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    goto LAB_0017ed10;
  case 0x1c:
    pcVar17 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    goto LAB_0017ed10;
// WM - thanks for reading - discord.gg/sdkhDjTex
  case 0x1d:
    pcVar17 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    goto LAB_0017ed10;
  case 0x1e:
    pcVar17 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    goto LAB_0017ed10;
  case 0x1f:
    pcVar17 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    goto LAB_0017ed10;
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
/* wm:do not claim this as your own */
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
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
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
LAB_0017e628:
    bVar3 = *(byte *)(param_1 + 0x67);
    unaff_x27 = (ulong)(uint)bVar3;
    if ((char)bVar3 < '\0') {
      uVar22 = *(ulong *)(param_1 + 0x58);
      uVar20 = *(ulong *)(param_1 + 0x60) & 0x7fffffffffffffff;
// WM - proprietary - see LICENSE - do not sell
      uVar18 = uVar20 - 1;
      if (uVar22 == uVar18) {
        if (uVar20 < 0x7ffffffffffffff7) {
          if (uVar18 < 0x3ffffffffffffff4) goto LAB_0017e690;
          unaff_x23 = 0x7ffffffffffffff8;
          plVar25 = (long *)__Znwm(0x7ffffffffffffff8);
          goto LAB_0017e6c4;
        }
        goto LAB_0017eee4;
      }
      plVar25 = (long *)*plVar12;
LAB_0017e6fc:
      *(ulong *)(param_1 + 0x58) = uVar22 + 1;
    }
    else {
      if (bVar3 == 0x16) {
        uVar20 = 0x17;
        uVar18 = 0x16;
LAB_0017e690:
        if (uVar20 <= uVar18 * 2) {
          uVar20 = uVar18 * 2;
        }
        uVar20 = (uVar20 & 0x7ffffffffffffff8) + 8;
        unaff_x23 = 0x19;
        if (uVar20 != 0x18) {
          unaff_x23 = uVar20;
        }
/* WM - proprietary - see LICENSE - do not sell */
        plVar25 = (long *)__Znwm(unaff_x23);
        plVar15 = plVar12;
        uVar22 = uVar18;
        if ((char)bVar3 < '\0') {
LAB_0017e6c4:
          plVar15 = (long *)*plVar12;
          uVar22 = uVar18;
        }
        if (uVar22 != 0) {
          _memmove(plVar25,plVar15,uVar22);
        }
        if ((char)bVar3 < '\0') {
          __ZdlPv(*plVar12);
        }
        *(long **)(param_1 + 0x50) = plVar25;
        *(ulong *)(param_1 + 0x60) = unaff_x23 | 0x8000000000000000;
        goto LAB_0017e6fc;
      }
      uVar22 = (ulong)bVar3;
      *(byte *)(param_1 + 0x67) = bVar3 + 1 & 0x7f;
      plVar25 = plVar12;
    }
    *(undefined1 *)((long)plVar25 + uVar22) = (char)iVar8;
    ((undefined1 *)((long)plVar25 + uVar22))[1] = 0;
    goto LAB_0017e2ac;
/*  do not claim this as your own  */
  case 0x22:
    return 4;
  case 0x5c:
    iVar8 = func_0x01995708(param_1);
    pcVar17 = "invalid string: forbidden character after backslash";
    if (iVar8 < 0x66) {
      if (iVar8 < 0x5c) {
        if (iVar8 == 0x22) goto LAB_0017ea28;
        if (iVar8 != 0x2f) goto LAB_0017ed10;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0x2f);
      }
      else if (iVar8 == 0x5c) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0x5c);
      }
      else {
        if (iVar8 != 0x62) goto LAB_0017ed10;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,8);
      }
      goto LAB_0017e2ac;
    }
    if (iVar8 < 0x72) {
      if (iVar8 == 0x66) {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0xc);
      }
      else {
        if (iVar8 != 0x6e) goto LAB_0017ed10;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,10);
      }
      goto LAB_0017e2ac;
    }
    if (iVar8 == 0x72) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0xd);
      goto LAB_0017e2ac;
    }
    if (iVar8 == 0x74) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,9);
      goto LAB_0017e2ac;
// proprietary - see LICENSE - do not sell
    }
    if (iVar8 != 0x75) goto LAB_0017ed10;
    uVar20 = func_0x01995814(param_1);
    uVar7 = (uint)uVar20;
    if (uVar7 == 0xffffffff) {
LAB_0017eef4:
      pcVar17 = "invalid string: \'\\u\' must be followed by 4 hex digits";
      goto LAB_0017ed10;
    }
    if ((uVar7 & 0xfffffc00) == 0xd800) {
      iVar8 = func_0x01995708(param_1);
      if ((iVar8 == 0x5c) && (iVar8 = func_0x01995708(param_1), iVar8 == 0x75)) {
        uVar6 = func_0x01995814(param_1);
        if (uVar6 == 0xffffffff) goto LAB_0017eef4;
        if (uVar6 >> 10 == 0x37) {
          uVar20 = (ulong)(uVar6 + uVar7 * 0x400 + 0xfca02400);
LAB_0017ec54:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (plVar12,(uint)(uVar20 >> 0x12) & 0x3fff | 0xfffffff0);
          uVar7 = (uint)uVar20;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (plVar12,uVar7 >> 0xc & 0x3f | 0xffffff80);
          goto LAB_0017ec78;
        }
      }
      goto LAB_0017eee8;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    }
    if ((uVar7 & 0xfffffc00) == 0xdc00) {
      pcVar17 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
      goto LAB_0017ed10;
    }
    if ((int)uVar7 < 0x80) {
      uVar7 = (uint)(char)uVar20;
      goto LAB_0017e900;
    }
    if (0x7ff < uVar7) {
      if (uVar7 >> 0x10 != 0) goto LAB_0017ec54;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar12,uVar7 >> 0xc | 0xffffffe0);
LAB_0017ec78:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar12,uVar7 >> 6 & 0x3f | 0xffffff80);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar12,uVar7 & 0x3f | 0xffffff80);
      goto LAB_0017e2ac;
    }
/*  found on a paste site? it was re-uploaded illegally  */
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar12,uVar7 >> 6 | 0xffffffc0);
    uVar7 = uVar7 & 0x3f | 0xffffff80;
LAB_0017e900:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,uVar7);
    goto LAB_0017e2ac;
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
// WM - stripping the watermark breaks the license
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,(int)cVar4)
    ;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    if (*(char *)(param_1 + 0x18) == '\x01') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      uVar7 = *(uint *)(param_1 + 0x14);
    }
    else {
      plVar25 = *(long **)(param_1 + 8);
      pbVar2 = (byte *)plVar25[3];
      if (pbVar2 == (byte *)plVar25[4]) {
        uVar7 = (**(code **)(*plVar25 + 0x50))(plVar25);
        if (uVar7 == 0xffffffff) {
          func_0x019cb784(param_1);
          uVar7 = 0xffffffff;
        }
      }
      else {
        uVar7 = (uint)*pbVar2;
        plVar25[3] = (long)(pbVar2 + 1);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      }
      *(uint *)(param_1 + 0x14) = uVar7;
    }
    if (uVar7 != 0xffffffff) {
      puVar19 = *(undefined1 **)(param_1 + 0x40);
      if (puVar19 < *(undefined1 **)(param_1 + 0x48)) {
        puVar28 = puVar19 + 1;
        *puVar19 = (char)uVar7;
      }
      else {
        lVar24 = *plVar26;
        plVar25 = (long *)(puVar19 + -lVar24);
        uVar20 = (long)plVar25 + 1;
        if ((long)uVar20 < 0) goto LAB_0017ef0c;
        uVar18 = (long)*(undefined1 **)(param_1 + 0x48) - lVar24;
        uVar22 = uVar18 * 2;
        if (uVar22 <= uVar20) {
          uVar22 = uVar20;
        }
        if (0x3ffffffffffffffe < uVar18) {
          uVar22 = 0x7fffffffffffffff;
        }
/*  reversing this took months of machine time  */
        if (uVar22 == 0) {
          unaff_x23 = 0;
        }
        else {
          unaff_x23 = __Znwm(uVar22);
        }
        puVar28 = (undefined1 *)(unaff_x23 + (long)plVar25) + 1;
        *(undefined1 *)(unaff_x23 + (long)plVar25) = (char)uVar7;
        _memcpy(unaff_x23,lVar24,plVar25);
        *(ulong *)(param_1 + 0x38) = unaff_x23;
        *(undefined1 **)(param_1 + 0x40) = puVar28;
        *(ulong *)(param_1 + 0x48) = unaff_x23 + uVar22;
        if (lVar24 != 0) {
          __ZdlPv(lVar24);
        }
      }
      *(undefined1 **)(param_1 + 0x40) = puVar28;
/* no support for modified copies - github.com/pengussy */
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == 10) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      }
      else if (0xffffffbf < iVar8 - 0xc0U) goto LAB_0017e628;
    }
    break;
  case 0xe0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0xffffffe0)
    ;
    func_0x01995708(param_1);
    iVar8 = *(int *)(param_1 + 0x14);
    uVar7 = iVar8 - 0xc0;
    goto LAB_0017e884;
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
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,(int)cVar4)
    ;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
    if (*(char *)(param_1 + 0x18) == '\x01') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      uVar7 = *(uint *)(param_1 + 0x14);
    }
    else {
      plVar25 = *(long **)(param_1 + 8);
      pbVar2 = (byte *)plVar25[3];
      if (pbVar2 == (byte *)plVar25[4]) {
        uVar7 = (**(code **)(*plVar25 + 0x50))(plVar25);
        if (uVar7 == 0xffffffff) {
          func_0x019cb784(param_1);
          uVar7 = 0xffffffff;
        }
      }
      else {
        uVar7 = (uint)*pbVar2;
        plVar25[3] = (long)(pbVar2 + 1);
      }
      *(uint *)(param_1 + 0x14) = uVar7;
    }
    if (uVar7 == 0xffffffff) {
      pcVar17 = "invalid string: ill-formed UTF-8 byte";
    }
    else {
      puVar19 = *(undefined1 **)(param_1 + 0x40);
      if (puVar19 < *(undefined1 **)(param_1 + 0x48)) {
        puVar28 = puVar19 + 1;
        *puVar19 = (char)uVar7;
      }
/* wm:more drops soon - github.com/pengussy */
      else {
        lVar24 = *plVar26;
        plVar25 = (long *)(puVar19 + -lVar24);
        uVar20 = (long)plVar25 + 1;
        if ((long)uVar20 < 0) goto LAB_0017ef0c;
        uVar18 = (long)*(undefined1 **)(param_1 + 0x48) - lVar24;
        uVar22 = uVar18 * 2;
        if (uVar22 <= uVar20) {
          uVar22 = uVar20;
        }
        if (0x3ffffffffffffffe < uVar18) {
          uVar22 = 0x7fffffffffffffff;
        }
        if (uVar22 == 0) {
          unaff_x23 = 0;
        }
        else {
          unaff_x23 = __Znwm(uVar22);
        }
        puVar28 = (undefined1 *)(unaff_x23 + (long)plVar25) + 1;
        *(undefined1 *)(unaff_x23 + (long)plVar25) = (char)uVar7;
        _memcpy(unaff_x23,lVar24,plVar25);
        *(ulong *)(param_1 + 0x38) = unaff_x23;
        *(undefined1 **)(param_1 + 0x40) = puVar28;
        *(ulong *)(param_1 + 0x48) = unaff_x23 + uVar22;
        if (lVar24 != 0) {
          __ZdlPv(lVar24);
        }
      }
      *(undefined1 **)(param_1 + 0x40) = puVar28;
      iVar8 = *(int *)(param_1 + 0x14);
      if (iVar8 == 10) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
      }
      pcVar17 = "invalid string: ill-formed UTF-8 byte";
      if ((0x7f < iVar8) && (pcVar17 = "invalid string: ill-formed UTF-8 byte", iVar8 < 0xc0)) {
        bVar3 = *(byte *)(param_1 + 0x67);
        unaff_x27 = (ulong)(uint)bVar3;
        if ((char)bVar3 < '\0') {
          uVar18 = *(ulong *)(param_1 + 0x58);
          uVar20 = *(ulong *)(param_1 + 0x60) & 0x7fffffffffffffff;
          uVar22 = uVar20 - 1;
          if (uVar18 != uVar22) {
            plVar25 = (long *)*plVar12;
            goto LAB_0017e5a4;
          }
          if (uVar20 < 0x7ffffffffffffff7) {
            if (uVar22 < 0x3ffffffffffffff4) goto LAB_0017e520;
            unaff_x23 = 0x7ffffffffffffff8;
            plVar25 = (long *)__Znwm(0x7ffffffffffffff8);
            goto LAB_0017e554;
          }
LAB_0017eee4:
          func_0x0000aa50();
LAB_0017eee8:
// WM - donate: donate/README.md
          pcVar17 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
        }
        else {
          if (bVar3 == 0x16) {
            uVar20 = 0x17;
            uVar22 = 0x16;
LAB_0017e520:
            if (uVar20 <= uVar22 * 2) {
              uVar20 = uVar22 * 2;
            }
            uVar20 = (uVar20 & 0x7ffffffffffffff8) + 8;
            unaff_x23 = 0x19;
            if (uVar20 != 0x18) {
              unaff_x23 = uVar20;
            }
            plVar25 = (long *)__Znwm(unaff_x23);
            plVar15 = plVar12;
            uVar18 = uVar22;
            if ((char)bVar3 < '\0') {
LAB_0017e554:
/* donate: donate/README.md */
              plVar15 = (long *)*plVar12;
              uVar18 = uVar22;
            }
            if (uVar18 != 0) {
              _memmove(plVar25,plVar15,uVar18);
            }
            if ((char)bVar3 < '\0') {
              __ZdlPv(*plVar12);
            }
            *(long **)(param_1 + 0x50) = plVar25;
            *(ulong *)(param_1 + 0x60) = unaff_x23 | 0x8000000000000000;
LAB_0017e5a4:
            *(ulong *)(param_1 + 0x58) = uVar18 + 1;
          }
          else {
            uVar18 = (ulong)bVar3;
            *(byte *)(param_1 + 0x67) = bVar3 + 1 & 0x7f;
            plVar25 = plVar12;
          }
          *(undefined1 *)((long)plVar25 + uVar18) = (char)iVar8;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          ((undefined1 *)((long)plVar25 + uVar18))[1] = 0;
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
          if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
            plVar25 = *(long **)(param_1 + 8);
            pbVar2 = (byte *)plVar25[3];
            if (pbVar2 != (byte *)plVar25[4]) {
              bVar3 = *pbVar2;
              plVar25[3] = (long)(pbVar2 + 1);
              uVar7 = (uint)bVar3;
              *(uint *)(param_1 + 0x14) = uVar7;
              goto joined_r0x0017e728;
            }
            uVar7 = (**(code **)(*plVar25 + 0x50))(plVar25);
            if (uVar7 != 0xffffffff) {
              *(uint *)(param_1 + 0x14) = uVar7;
              if (uVar7 == 0xffffffff) goto LAB_0017e72c;
              goto LAB_0017e5e4;
            }
            func_0x019cb784(param_1);
            *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 0;
            uVar7 = *(uint *)(param_1 + 0x14);
joined_r0x0017e728:
            if (uVar7 != 0xffffffff) {
LAB_0017e5e4:
              puVar19 = *(undefined1 **)(param_1 + 0x40);
              if (puVar19 < *(undefined1 **)(param_1 + 0x48)) {
                puVar28 = puVar19 + 1;
                *puVar19 = (char)uVar7;
              }
              else {
                lVar24 = *plVar26;
                plVar25 = (long *)(puVar19 + -lVar24);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                uVar20 = (long)plVar25 + 1;
                if ((long)uVar20 < 0) goto LAB_0017ef0c;
                uVar18 = (long)*(undefined1 **)(param_1 + 0x48) - lVar24;
                uVar22 = uVar18 * 2;
                if (uVar22 <= uVar20) {
                  uVar22 = uVar20;
                }
                if (0x3ffffffffffffffe < uVar18) {
                  uVar22 = 0x7fffffffffffffff;
                }
                if (uVar22 == 0) {
                  unaff_x23 = 0;
                }
                else {
                  unaff_x23 = __Znwm(uVar22);
                }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                puVar28 = (undefined1 *)(unaff_x23 + (long)plVar25) + 1;
                *(undefined1 *)(unaff_x23 + (long)plVar25) = (char)uVar7;
                _memcpy(unaff_x23,lVar24,plVar25);
                *(ulong *)(param_1 + 0x38) = unaff_x23;
                *(undefined1 **)(param_1 + 0x40) = puVar28;
                *(ulong *)(param_1 + 0x48) = unaff_x23 + uVar22;
                if (lVar24 != 0) {
                  __ZdlPv(lVar24);
                }
              }
              *(undefined1 **)(param_1 + 0x40) = puVar28;
              iVar8 = *(int *)(param_1 + 0x14);
              if (iVar8 == 10) {
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 1;
              }
              pcVar17 = "invalid string: ill-formed UTF-8 byte";
              if ((0x7f < iVar8) &&
                 (pcVar17 = "invalid string: ill-formed UTF-8 byte", iVar8 < 0xc0))
              goto LAB_0017e628;
              goto LAB_0017ed10;
            }
          }
LAB_0017e72c:
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          pcVar17 = "invalid string: ill-formed UTF-8 byte";
        }
      }
    }
    goto LAB_0017ed10;
  case 0xed:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0xffffffed)
    ;
    func_0x01995708(param_1);
    iVar8 = *(int *)(param_1 + 0x14);
    uVar7 = iVar8 - 0xa0;
LAB_0017e884:
    if (0xffffffdf < uVar7) {
LAB_0017e8d8:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar12,(int)(char)iVar8);
      func_0x01995708(param_1);
      if (0xffffffbf < *(int *)(param_1 + 0x14) - 0xc0U) {
        uVar7 = (uint)(char)*(int *)(param_1 + 0x14);
        goto LAB_0017e900;
      }
    }
    break;
  case 0xf0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0xfffffff0)
// chat: discord.gg/sdkhDjTex
    ;
    func_0x01995708(param_1);
    iVar8 = *(int *)(param_1 + 0x14);
    if (iVar8 - 0xc0U < 0xffffffd0) break;
LAB_0017e8b4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar12,(int)(char)iVar8);
    func_0x01995708(param_1);
    iVar8 = *(int *)(param_1 + 0x14);
    if (iVar8 - 0xc0U < 0xffffffc0) break;
    goto LAB_0017e8d8;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,(int)cVar4)
    ;
    func_0x01995708(param_1);
    iVar8 = *(int *)(param_1 + 0x14);
    if (0xffffffbf < iVar8 - 0xc0U) goto LAB_0017e8b4;
    break;
  case 0xf4:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0xfffffff4)
    ;
    func_0x01995708(param_1);
    iVar8 = *(int *)(param_1 + 0x14);
    if (0xffffffef < iVar8 - 0x90U) goto LAB_0017e8b4;
    break;
  case -1:
// unlicensed copy if this notice is missing
    goto LAB_0017ed10;
  }
  pcVar17 = "invalid string: ill-formed UTF-8 byte";
LAB_0017ed10:
  *(char **)(param_1 + 0x68) = pcVar17;
  return 0xe;
code_r0x0017effc:
  *(long *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + lStack_138;
  *(long *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) + lStack_140;
  if (*(char *)(lVar10 + 0x18) != '\x01') {
    plVar12 = *(long **)(lVar10 + 8);
    pbVar2 = (byte *)plVar12[3];
    if (pbVar2 != (byte *)plVar12[4]) {
      bVar3 = *pbVar2;
      plVar12[3] = (long)(pbVar2 + 1);
      uVar7 = (uint)bVar3;
      *(uint *)(lVar10 + 0x14) = uVar7;
/* wm:unlicensed copy if this notice is missing */
      goto joined_r0x0017f04c;
    }
    uVar7 = (**(code **)(*plVar12 + 0x50))(plVar12);
    if (uVar7 != 0xffffffff) {
      *(uint *)(lVar10 + 0x14) = uVar7;
      goto joined_r0x0017f04c;
    }
    func_0x019cb784(lVar10);
    *(undefined4 *)(lVar10 + 0x14) = 0xffffffff;
code_r0x0017f1c4:
    iVar23 = iStack_144;
    goto code_r0x0017f20c;
  }
  *(undefined1 *)(lVar10 + 0x18) = 0;
  uVar7 = *(uint *)(lVar10 + 0x14);
joined_r0x0017f04c:
  if (uVar7 == 0xffffffff) goto code_r0x0017f1c4;
  uStack_121 = (undefined1)uVar7;
  puStack_108 = *(undefined1 **)(lVar10 + 0x40);
  ppuStack_120 = &puStack_108;
  puStack_118 = &uStack_121;
  if (puStack_108 < *(undefined1 **)(lVar10 + 0x48)) {
    *puStack_108 = uStack_121;
    *(undefined1 **)(lVar10 + 0x40) = puStack_108 + 1;
    uVar7 = *(uint *)(lVar10 + 0x14);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    puStack_110 = puVar27;
    iVar23 = iStack_144;
  }
  else {
    puStack_110 = puVar27;
    func_0x0003b960(&ppuStack_120);
    *(undefined1 **)(lVar10 + 0x40) = puStack_108;
    uVar7 = *(uint *)(lVar10 + 0x14);
    iVar23 = iStack_144;
  }
  iStack_144 = iVar23;
  if (9 < uVar7 - 0x30) goto code_r0x0017f1cc;
  bVar3 = *(byte *)(lVar10 + 0x67);
  if ((char)bVar3 < '\0') {
    uVar22 = *(ulong *)(lVar10 + 0x58);
    uVar20 = *(ulong *)(lVar10 + 0x60) & 0x7fffffffffffffff;
    uVar18 = uVar20 - 1;
    if (uVar22 == uVar18) {
      if (uVar20 < 0x7ffffffffffffff7) {
        if (uVar18 < 0x3ffffffffffffff4) goto code_r0x0017f110;
        unaff_x23 = 0x7ffffffffffffff8;
        plVar25 = (long *)__Znwm(0x7ffffffffffffff8);
code_r0x0017f144:
        plVar12 = (long *)*plVar26;
        uVar22 = uVar18;
        goto code_r0x0017f148;
      }
      func_0x0000aa50();
// WM - reversing this took months of machine time
      func_0x00006858();
      auVar29 = func_0x00006858();
      lVar16 = auVar29._8_8_;
      lVar24 = auVar29._0_8_;
      puStack_158 = &DAT_0017f4d4;
      lStack_1b8 = 0;
      lStack_1b0 = 0;
      uStack_1a8 = 0;
      puVar1 = (undefined8 *)(lVar24 + 0x78);
      ppuStack_1a0 = &puStack_108;
      puStack_198 = puVar27;
      uStack_190 = (ulong)uVar7;
      uStack_188 = unaff_x23;
      plStack_180 = plVar25;
      uStack_178 = uVar18;
      plStack_170 = plVar26;
      lStack_168 = lVar10;
      plStack_160 = &lStack_b0;
      goto code_r0x0017f518;
    }
    plVar25 = (long *)*plVar26;
code_r0x0017f17c:
    *(ulong *)(lVar10 + 0x58) = uVar22 + 1;
  }
  else {
    if (bVar3 == 0x16) {
      uVar18 = 0x16;
      uVar20 = 0x17;
code_r0x0017f110:
      if (uVar20 <= uVar18 * 2) {
        uVar20 = uVar18 * 2;
      }
/* reversing this took months of machine time */
      uVar20 = (uVar20 & 0x7ffffffffffffff8) + 8;
      unaff_x23 = 0x19;
      if (uVar20 != 0x18) {
        unaff_x23 = uVar20;
      }
      plVar25 = (long *)__Znwm(unaff_x23);
      plVar12 = plVar26;
      uVar22 = uVar18;
      if ((char)bVar3 < '\0') goto code_r0x0017f144;
code_r0x0017f148:
      if (uVar22 != 0) {
        _memmove(plVar25,plVar12,uVar22);
      }
      if ((char)bVar3 < '\0') {
        __ZdlPv(*plVar26);
      }
      *(long **)(lVar10 + 0x50) = plVar25;
      *(ulong *)(lVar10 + 0x60) = unaff_x23 | 0x8000000000000000;
      goto code_r0x0017f17c;
    }
    uVar22 = (ulong)bVar3;
    *(byte *)(lVar10 + 0x67) = bVar3 + 1 & 0x7f;
    plVar25 = plVar26;
  }
  *(undefined1 *)((long)plVar25 + uVar22) = (char)uVar7;
  ((undefined1 *)((long)plVar25 + uVar22))[1] = 0;
  goto code_r0x0017effc;
code_r0x0017f518:
// WM - do not claim this as your own
  switch(*(undefined4 *)(lVar24 + 0x20)) {
  case 1:
    puStack_1f8 = (undefined *)CONCAT71(puStack_1f8._1_7_,1);
    func_0x00185454(lVar16,&puStack_1f8,0);
    break;
  case 2:
    puStack_1f8 = (undefined *)((ulong)puStack_1f8._1_7_ << 8);
    func_0x00185454(lVar16,&puStack_1f8,0);
    break;
  case 3:
    puStack_1f8 = (undefined *)0x0;
    func_0x00185668(lVar16,&puStack_1f8,0);
    break;
  case 4:
    if ((*(int *)(lVar24 + 0xb0) != 0x2e) && (*(long *)(lVar24 + 0xb8) != -1)) {
      puVar27 = puVar1;
      if (*(char *)(lVar24 + 0x8f) < '\0') {
        puVar27 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)((long)puVar27 + *(long *)(lVar24 + 0xb8)) = 0x2e;
    }
    func_0x00185a84(lVar16,puVar1,0);
    break;
  case 5:
    puStack_1f8 = *(undefined **)(lVar24 + 0xa0);
    func_0x00185cf8(lVar16,&puStack_1f8,0);
    break;
  case 6:
    puStack_1f8 = *(undefined **)(lVar24 + 0x98);
    func_0x00185874(lVar16,&puStack_1f8,0);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    break;
  case 7:
    puVar21 = *(undefined **)(lVar24 + 0xa8);
    if (0x7fefffffffffffff < ((ulong)puVar21 & 0x7fffffffffffffff)) {
      uVar13 = *(undefined8 *)(lVar24 + 0x48);
      func_0x001801f0(auStack_1d0,lVar24 + 0x28);
      func_0x001801f0(auStack_228,lVar24 + 0x28);
      uStack_240 = CONCAT31(uStack_240._1_3_,0x27);
      func_0x0018281c(&lStack_210,&UNK_01c2d2a9,auStack_228,&uStack_240);
      func_0x0018264c(&puStack_1f8,0x196,&lStack_210,0);
      uVar13 = func_0x00182620(lVar16,uVar13,auStack_1d0,&puStack_1f8);
      puStack_1f8 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_1e8);
      __ZNSt9exceptionD2Ev(&puStack_1f8);
      if (lStack_200 < 0) {
        __ZdlPv(lStack_210);
      }
      if (cStack_211 < '\0') {
code_r0x0017fd40:
        __ZdlPv(auStack_228[0]);
      }
code_r0x0017fd44:
      if (cStack_1b9 < '\0') {
        __ZdlPv(auStack_1d0[0]);
/* chat: discord.gg/sdkhDjTex */
      }
      goto code_r0x0017f848;
    }
    if ((*(int *)(lVar24 + 0xb0) != 0x2e) && (*(long *)(lVar24 + 0xb8) != -1)) {
      puVar27 = puVar1;
      if (*(char *)(lVar24 + 0x8f) < '\0') {
        puVar27 = (undefined8 *)*puVar1;
      }
      *(undefined1 *)((long)puVar27 + *(long *)(lVar24 + 0xb8)) = 0x2e;
    }
    puStack_1f8 = puVar21;
    func_0x0018523c(lVar16,&puStack_1f8,0);
    break;
  case 8:
    iVar8 = func_0x001822e0(lVar16,0xffffffffffffffff);
    if (iVar8 == 0) goto code_r0x0017fae4;
    iVar8 = func_0x0017de64(lVar24 + 0x28);
    *(int *)(lVar24 + 0x20) = iVar8;
    if (iVar8 != 10) {
      puStack_1f8 = (undefined *)CONCAT71(puStack_1f8._1_7_,1);
      func_0x00181b98(&lStack_1b8,&puStack_1f8);
      goto code_r0x0017f518;
    }
    uVar20 = func_0x001824e4(lVar16);
code_r0x0017f6ac:
    if ((uVar20 & 1) == 0) goto code_r0x0017fae4;
    break;
  case 9:
    uVar20 = func_0x00181cb4(lVar16,0xffffffffffffffff);
    if ((uVar20 & 1) == 0) goto code_r0x0017fae4;
/* wm:stripping the watermark breaks the license */
    iVar8 = func_0x0017de64(lVar24 + 0x28);
    *(int *)(lVar24 + 0x20) = iVar8;
    if (iVar8 == 0xb) {
      uVar20 = func_0x00181eb0(lVar16);
      goto code_r0x0017f6ac;
    }
    if (iVar8 != 4) {
      lVar10 = *(long *)(lVar24 + 0x48);
      func_0x001801f0(auStack_1d0,lVar24 + 0x28);
      uStack_208 = *(undefined8 *)(lVar24 + 0x50);
      lStack_210 = *(long *)(lVar24 + 0x48);
      lStack_200 = *(long *)(lVar24 + 0x58);
      func_0x0000e100(&uStack_240,&UNK_01c2d28d);
      func_0x001805c8(auStack_228,lVar24,4,&uStack_240);
      func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
      uVar13 = func_0x001801c4(lVar16,lVar10,auStack_1d0,&puStack_1f8);
code_r0x0017fd04:
      puStack_1f8 = &UNK_01dbfd98;
      __ZNSt13runtime_errorD1Ev(auStack_1e8);
      __ZNSt9exceptionD2Ev(&puStack_1f8);
      if (cStack_211 < '\0') {
        __ZdlPv(auStack_228[0]);
      }
      if (cStack_229 < '\0') {
        auStack_228[0] = CONCAT26(uStack_23a,CONCAT24(uStack_23c,uStack_240));
        goto code_r0x0017fd40;
      }
      goto code_r0x0017fd44;
    }
    if ((*(int *)(lVar24 + 0xb0) != 0x2e) && (*(long *)(lVar24 + 0xb8) != -1)) {
      puVar27 = puVar1;
      if (*(char *)(lVar24 + 0x8f) < '\0') {
        puVar27 = (undefined8 *)*puVar1;
      }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      *(undefined1 *)((long)puVar27 + *(long *)(lVar24 + 0xb8)) = 0x2e;
    }
    iVar8 = func_0x0018211c(lVar16,puVar1);
    if (iVar8 == 0) goto code_r0x0017fae4;
    iVar8 = func_0x0017de64(lVar24 + 0x28);
    *(int *)(lVar24 + 0x20) = iVar8;
    if (iVar8 != 0xc) {
      lVar10 = *(long *)(lVar24 + 0x48);
      func_0x001801f0(auStack_1d0,lVar24 + 0x28);
      uStack_208 = *(undefined8 *)(lVar24 + 0x50);
      lStack_210 = *(long *)(lVar24 + 0x48);
      lStack_200 = *(long *)(lVar24 + 0x58);
      func_0x0000e100(&uStack_240,&UNK_01c2d298);
      func_0x001805c8(auStack_228,lVar24,0xc,&uStack_240);
      func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
      uVar13 = func_0x001801c4(lVar16,lVar10,auStack_1d0,&puStack_1f8);
      goto code_r0x0017fd04;
    }
    puStack_1f8 = (undefined *)((ulong)puStack_1f8 & 0xffffffffffffff00);
    func_0x00181b98(&lStack_1b8,&puStack_1f8);
    uVar9 = func_0x0017de64(lVar24 + 0x28);
    *(undefined4 *)(lVar24 + 0x20) = uVar9;
    goto code_r0x0017f518;
  default:
    goto code_r0x0017f874;
  case 0xe:
    func_0x001801f0(auStack_1d0,lVar24 + 0x28);
    uStack_208 = *(undefined8 *)(lVar24 + 0x50);
    lStack_210 = *(long *)(lVar24 + 0x48);
    lStack_200 = *(long *)(lVar24 + 0x58);
    cStack_229 = '\x05';
    uStack_240 = 0x756c6176;
    uStack_23c = 0x65;
    func_0x001805c8(auStack_228,lVar24,0,&uStack_240);
    func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
    *(undefined1 *)(lVar16 + 0x58) = 1;
    if (*(char *)(lVar16 + 0x80) != '\x01') goto code_r0x0017faac;
/* wm:origin: github.com/pengussy */
    puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar27 = &UNK_01dbfd98;
    *(undefined4 *)(puVar27 + 1) = uStack_1f0;
    __ZNSt13runtime_errorC1ERKS_(puVar27 + 2,auStack_1e8);
    *puVar27 = &UNK_01dbfe98;
    puVar27[4] = uStack_1d8;
    ___cxa_throw(puVar27,&UNK_01dbfe70,&DAT_00180c74);
    goto code_r0x0017ffcc;
  case 0xf:
    plVar26 = (long *)(lVar24 + 0x48);
    if (*plVar26 == 1) {
      func_0x001801f0(auStack_1d0,lVar24 + 0x28);
      uStack_208 = *(undefined8 *)(lVar24 + 0x50);
      lStack_210 = *plVar26;
      lStack_200 = *(long *)(lVar24 + 0x58);
      func_0x0000e100(auStack_228,&UNK_01c2d2c3);
      func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
      uVar13 = func_0x001801c4(lVar16,1,auStack_1d0,&puStack_1f8);
      func_0x019cb7f8(&puStack_1f8,auStack_228,auStack_1d0,&lStack_210);
      goto code_r0x0017f848;
    }
    func_0x001801f0(auStack_1d0,lVar24 + 0x28);
    uStack_208 = *(undefined8 *)(lVar24 + 0x50);
    lStack_210 = *plVar26;
    lStack_200 = *(long *)(lVar24 + 0x58);
    cStack_229 = '\x05';
    uStack_240 = 0x756c6176;
    uStack_23c = 0x65;
    func_0x001805c8(auStack_228,lVar24,0x10,&uStack_240);
    func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
    *(undefined1 *)(lVar16 + 0x58) = 1;
    if (*(char *)(lVar16 + 0x80) != '\x01') goto code_r0x0017faac;
    puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar27 = &UNK_01dbfd98;
    *(undefined4 *)(puVar27 + 1) = uStack_1f0;
    __ZNSt13runtime_errorC1ERKS_(puVar27 + 2,auStack_1e8);
    *puVar27 = &UNK_01dbfe98;
/* WM - do not claim this as your own */
    puVar27[4] = uStack_1d8;
    ___cxa_throw(puVar27,&UNK_01dbfe70,&DAT_00180c74);
    goto code_r0x0017ffcc;
  }
  if (lStack_1b0 != 0) {
    do {
      if ((*(ulong *)(lStack_1b8 + (lStack_1b0 - 1U >> 6) * 8) >> (lStack_1b0 - 1U & 0x3f) & 1) == 0
         ) {
        iVar8 = func_0x0017de64(lVar24 + 0x28);
        *(int *)(lVar24 + 0x20) = iVar8;
        if (iVar8 == 0xd) {
          iVar8 = func_0x0017de64(lVar24 + 0x28);
          *(int *)(lVar24 + 0x20) = iVar8;
          if (iVar8 != 4) {
            lVar10 = *(long *)(lVar24 + 0x48);
            func_0x001801f0(auStack_1d0,lVar24 + 0x28);
            uStack_208 = *(undefined8 *)(lVar24 + 0x50);
            lStack_210 = *(long *)(lVar24 + 0x48);
            lStack_200 = *(long *)(lVar24 + 0x58);
            func_0x0000e100(&uStack_240,&UNK_01c2d28d);
            func_0x001805c8(auStack_228,lVar24,4,&uStack_240);
            func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
            uVar13 = func_0x001801c4(lVar16,lVar10,auStack_1d0,&puStack_1f8);
            goto code_r0x0017fd04;
          }
          if ((*(int *)(lVar24 + 0xb0) != 0x2e) && (*(long *)(lVar24 + 0xb8) != -1)) {
            puVar27 = puVar1;
            if (*(char *)(lVar24 + 0x8f) < '\0') {
              puVar27 = (undefined8 *)*puVar1;
            }
            *(undefined1 *)((long)puVar27 + *(long *)(lVar24 + 0xb8)) = 0x2e;
/* if you paid for this, you were scammed - github.com/pengussy */
          }
          iVar8 = func_0x0018211c(lVar16,puVar1);
          if (iVar8 == 0) goto code_r0x0017fae4;
          iVar8 = func_0x0017de64(lVar24 + 0x28);
          *(int *)(lVar24 + 0x20) = iVar8;
          if (iVar8 != 0xc) {
            lVar10 = *(long *)(lVar24 + 0x48);
            func_0x001801f0(auStack_1d0,lVar24 + 0x28);
            uStack_208 = *(undefined8 *)(lVar24 + 0x50);
            lStack_210 = *(long *)(lVar24 + 0x48);
            lStack_200 = *(long *)(lVar24 + 0x58);
            func_0x0000e100(&uStack_240,&UNK_01c2d298);
            func_0x001805c8(auStack_228,lVar24,0xc,&uStack_240);
            func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
            uVar13 = func_0x001801c4(lVar16,lVar10,auStack_1d0,&puStack_1f8);
            goto code_r0x0017fd04;
          }
          uVar9 = func_0x0017de64(lVar24 + 0x28);
          *(undefined4 *)(lVar24 + 0x20) = uVar9;
          goto code_r0x0017f518;
        }
        if (iVar8 != 0xb) {
          lVar10 = *(long *)(lVar24 + 0x48);
          func_0x001801f0(auStack_1d0,lVar24 + 0x28);
          uStack_208 = *(undefined8 *)(lVar24 + 0x50);
          lStack_210 = *(long *)(lVar24 + 0x48);
          lStack_200 = *(long *)(lVar24 + 0x58);
          func_0x0000e100(&uStack_240,"object");
          func_0x001805c8(auStack_228,lVar24,0xb,&uStack_240);
          func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
          uVar13 = func_0x001801c4(lVar16,lVar10,auStack_1d0,&puStack_1f8);
          goto code_r0x0017fd04;
/* keep the notice, keep the source honest - github.com/pengussy */
        }
        uVar20 = func_0x00181eb0(lVar16);
      }
      else {
        iVar8 = func_0x0017de64(lVar24 + 0x28);
        *(int *)(lVar24 + 0x20) = iVar8;
        if (iVar8 == 0xd) goto code_r0x0017f734;
        if (iVar8 != 10) {
          lVar10 = *(long *)(lVar24 + 0x48);
          func_0x001801f0(auStack_1d0,lVar24 + 0x28);
          uStack_208 = *(undefined8 *)(lVar24 + 0x50);
          lStack_210 = *(long *)(lVar24 + 0x48);
          lStack_200 = *(long *)(lVar24 + 0x58);
          func_0x0000e100(&uStack_240,&UNK_01c2d329);
          func_0x001805c8(auStack_228,lVar24,10,&uStack_240);
          func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
          uVar13 = func_0x001801c4(lVar16,lVar10,auStack_1d0,&puStack_1f8);
          goto code_r0x0017fd04;
        }
        uVar20 = func_0x001824e4(lVar16);
      }
      if ((uVar20 & 1) == 0) goto code_r0x0017fae4;
      lStack_1b0 = lStack_1b0 + -1;
      if (lStack_1b0 == 0) break;
    } while( true );
  }
  uVar13 = 1;
  goto code_r0x0017f848;
// origin: github.com/pengussy
code_r0x0017f734:
  uVar9 = func_0x0017de64(lVar24 + 0x28);
  *(undefined4 *)(lVar24 + 0x20) = uVar9;
  goto code_r0x0017f518;
LAB_0017ea28:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(plVar12,0x22);
  goto LAB_0017e2ac;
code_r0x0017f874:
  func_0x001801f0(auStack_1d0,lVar24 + 0x28);
  uStack_208 = *(undefined8 *)(lVar24 + 0x50);
  lStack_210 = *(long *)(lVar24 + 0x48);
  lStack_200 = *(long *)(lVar24 + 0x58);
  cStack_229 = '\x05';
  uStack_240 = 0x756c6176;
  uStack_23c = 0x65;
  func_0x001805c8(auStack_228,lVar24,0x10,&uStack_240);
  func_0x00180380(&puStack_1f8,0x65,&lStack_210,auStack_228,0);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  *(undefined1 *)(lVar16 + 0x58) = 1;
  if (*(char *)(lVar16 + 0x80) == '\x01') {
    puVar27 = (undefined8 *)___cxa_allocate_exception(0x28);
    *puVar27 = &UNK_01dbfd98;
    *(undefined4 *)(puVar27 + 1) = uStack_1f0;
    __ZNSt13runtime_errorC1ERKS_(puVar27 + 2,auStack_1e8);
    *puVar27 = &UNK_01dbfe98;
    puVar27[4] = uStack_1d8;
    ___cxa_throw(puVar27,&UNK_01dbfe70,&DAT_00180c74);
code_r0x0017ffcc:
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x17ffd0);
    (*pcVar5)();
  }
code_r0x0017faac:
  puStack_1f8 = &UNK_01dbfd98;
  __ZNSt13runtime_errorD1Ev(auStack_1e8);
  __ZNSt9exceptionD2Ev(&puStack_1f8);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  if (cStack_211 < '\0') {
    __ZdlPv(auStack_228[0]);
  }
  if (cStack_229 < '\0') {
    __ZdlPv(CONCAT26(uStack_23a,CONCAT24(uStack_23c,uStack_240)));
  }
  if (cStack_1b9 < '\0') {
    __ZdlPv(auStack_1d0[0]);
  }
code_r0x0017fae4:
  uVar13 = 0;
code_r0x0017f848:
  if (lStack_1b8 != 0) {
    __ZdlPv();
  }
  return uVar13;
code_r0x0017f1cc:
  if ((int)uVar7 < 0x2e) {
    if (uVar7 == 10) {
      *(undefined8 *)(lVar10 + 0x28) = 0;
      *(long *)(lVar10 + 0x30) = *(long *)(lVar10 + 0x30) + 1;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    }
  }
  else {
    if (uVar7 == 0x2e) {
code_r0x0017f3a4:
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar26,(long)*(char *)(lVar10 + 0x88));
      lVar24 = (long)*(char *)(lVar10 + 0x67);
      if (lVar24 < 0) {
        lVar24 = *(long *)(lVar10 + 0x58);
      }
      *(long *)(lVar10 + 0x90) = lVar24 + -1;
      iVar8 = func_0x01995708(lVar10);
      if (9 < iVar8 - 0x30U) {
        puVar21 = &UNK_01c2d1f0;
        goto code_r0x0017f458;
      }
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (plVar26,(long)*(char *)(lVar10 + 0x14));
        iVar8 = func_0x01995708(lVar10);
      } while (iVar8 - 0x30U < 10);
      if ((iVar8 != 0x65) && (iVar8 != 0x45)) {
/* wm:found on a paste site? it was re-uploaded illegally */
        iVar23 = 7;
        goto code_r0x0017f20c;
      }
code_r0x0017f41c:
      uVar7 = *(uint *)(lVar10 + 0x14);
    }
    else if ((uVar7 != 0x45) && (uVar7 != 0x65)) goto code_r0x0017f20c;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
              (plVar26,(int)(char)uVar7);
    iVar8 = func_0x01995708(lVar10);
    if (9 < iVar8 - 0x30U) {
      if ((iVar8 != 0x2d) && (iVar8 != 0x2b)) {
        puVar21 = &UNK_01c2d219;
code_r0x0017f458:
        *(undefined **)(lVar10 + 0x68) = puVar21;
        return 0xe;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (plVar26,(long)*(char *)(lVar10 + 0x14));
/* wm:no support for modified copies */
      iVar8 = func_0x01995708(lVar10);
      if (9 < iVar8 - 0x30U) {
        puVar21 = &UNK_01c2d254;
        goto code_r0x0017f458;
      }
    }
    func_0x019cb798(lVar10 + 0x14,lVar10 + 0x50,lVar10,&ppuStack_120);
    iVar23 = (int)ppuStack_120;
  }
code_r0x0017f20c:
  *(undefined1 *)(lVar10 + 0x18) = 1;
  *(long *)(lVar10 + 0x20) = *(long *)(lVar10 + 0x20) + -1;
  if (*(long *)(lVar10 + 0x28) == 0) {
    if (*(long *)(lVar10 + 0x30) != 0) {
      *(long *)(lVar10 + 0x30) = *(long *)(lVar10 + 0x30) + -1;
    }
  }
  else {
    *(long *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + -1;
  }
  if (*(int *)(lVar10 + 0x14) != -1) {
    *(long *)(lVar10 + 0x40) = *(long *)(lVar10 + 0x40) + -1;
  }
  ppuStack_120 = (undefined1 **)0x0;
  puVar11 = (undefined4 *)___error();
  *puVar11 = 0;
  if (iVar23 == 6) {
    plVar12 = plVar26;
    if (*(char *)(lVar10 + 0x67) < '\0') {
      plVar12 = (long *)*plVar26;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    }
    uVar13 = _strtoll(plVar12,&ppuStack_120,10);
    piVar14 = (int *)___error();
    if (*piVar14 != 0x22) {
      *(undefined8 *)(lVar10 + 0x70) = uVar13;
      return 6;
    }
  }
  else if (iVar23 == 5) {
    plVar12 = plVar26;
    if (*(char *)(lVar10 + 0x67) < '\0') {
      plVar12 = (long *)*plVar26;
    }
    uVar13 = _strtoull(plVar12,&ppuStack_120,10);
    piVar14 = (int *)___error();
    if (*piVar14 != 0x22) {
      *(undefined8 *)(lVar10 + 0x78) = uVar13;
      return 5;
    }
  }
  if (*(char *)(lVar10 + 0x67) < '\0') {
    plVar26 = (long *)*plVar26;
  }
  uVar13 = _strtod(plVar26,&ppuStack_120);
  *(undefined8 *)(lVar10 + 0x80) = uVar13;
  return 7;
/* WM - chat: discord.gg/sdkhDjTex */
}

