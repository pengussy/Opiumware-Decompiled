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
 *  file-id: 0x3fb514:74da411ed1
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x003fb418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003fb734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003fb878: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003fb738) */
/* WARNING: Removing unreachable block (ram,0x003fb41c) */
/* WARNING: Removing unreachable block (ram,0x003fb470) */
/* WARNING: Removing unreachable block (ram,0x003fb474) */
/* WARNING: Removing unreachable block (ram,0x003fb4a0) */
/* WARNING: Removing unreachable block (ram,0x003fb4c0) */
/* WARNING: Removing unreachable block (ram,0x003fb4ec) */
/* WARNING: Removing unreachable block (ram,0x003fb510) */
/* WARNING: Removing unreachable block (ram,0x003fb428) */
/* WARNING: Removing unreachable block (ram,0x003fb87c) */

ulong FUN_003fb514(long *param_1,ulong *param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
/* thanks for reading - discord.gg/sdkhDjTex */
  undefined1 auVar12 [16];
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  ulong *unaff_x19;
  long lVar31;
  ulong unaff_x20;
  long unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x23;
  long *unaff_x24;
  undefined8 unaff_x25;
  ulong *unaff_x26;
  long unaff_x27;
  long *unaff_x28;
  long *plVar32;
  undefined1 *puVar33;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_90 [8];
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  uint uStack_88;
  uint uStack_84;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  puVar13 = auStack_90;
  puVar33 = auStack_90 + 0x80;
  uVar21 = (uint)param_4;
  uVar20 = (uint)param_5;
  uVar24 = (uint)param_6;
  if ((int)uVar21 < 8) {
    uVar20 = uVar20 + uVar21;
    uVar24 = uVar24 + uVar21;
    puVar13 = (undefined1 *)register0x00000008;
    puVar18 = param_2;
    puVar19 = param_3;
    param_3 = unaff_x19;
    param_4 = unaff_x20;
    param_7 = unaff_x21;
    param_6 = unaff_x23;
    param_5 = unaff_x25;
    param_2 = unaff_x26;
    puVar33 = unaff_x29;
    goto code_r0x003fb3c8;
  }
  plStack_78 = (long *)(ulong)(uVar21 << 1);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  uVar23 = param_4 & 0xffffffff;
  iVar16 = uVar21 - uVar20;
  uStack_68 = param_4 & 0xffffffff;
  plStack_70 = param_1;
  iVar14 = func_0x019e8d24(param_2,param_2 + uVar23,param_5,iVar16);
  iVar25 = uVar24 - uVar21;
  iVar15 = func_0x019e8d24(param_3 + uVar23,param_3,param_6,iVar25);
  iVar15 = iVar14 * 3 + iVar15;
  unaff_x22 = 1;
  uVar1 = iVar15 + 3;
  if (uVar1 < 8) {
    if ((1 << (ulong)(uVar1 & 0x1f) & 0x3cU) == 0) {
      if ((1 << (ulong)(uVar1 & 0x1f) & 3U) == 0) {
        func_0x003fad10(param_7,param_2,param_2 + uVar23,param_5,iVar16);
        puVar19 = param_3 + uVar23;
        puVar18 = param_3;
        goto LAB_003fb6dc;
      }
      func_0x003fad10(param_7,param_2 + uVar23,param_2,param_5,uVar20 - uVar21);
      puVar18 = param_3 + uVar23;
      puVar19 = param_3;
    }
    else {
      func_0x003fad10(param_7,param_2,param_2 + uVar23,param_5,iVar16);
      iVar25 = uVar21 - uVar24;
      puVar18 = param_3;
      puVar19 = param_3 + uVar23;
    }
    func_0x003fad10(param_7 + uStack_68 * 8,puVar18,puVar19,param_6,iVar25);
    unaff_x22 = 0;
  }
  else if (iVar15 == -4) {
    func_0x003fad10(param_7,param_2 + uVar23,param_2,param_5,uVar20 - uVar21);
    iVar25 = uVar21 - uVar24;
    puVar18 = param_3 + uVar23;
    puVar19 = param_3;
LAB_003fb6dc:
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x003fad10(param_7 + uStack_68 * 8,puVar19,puVar18,param_6,iVar25);
  }
  plVar32 = plStack_70;
  unaff_x24 = plStack_78;
  lStack_80 = uVar23 * 8;
  if (uVar21 == 8) {
    uVar23 = (ulong)plStack_78 & 0xffffffff;
    unaff_x27 = uVar23 * 8;
    FUN_003ef6c4(param_7 + unaff_x27,param_7,param_7 + uStack_68 * 8);
    FUN_003ef6c4(plVar32,param_2,param_3);
    param_1 = plVar32 + uVar23;
    puVar18 = (ulong *)((long)param_2 + lStack_80);
    puVar19 = (ulong *)((long)param_3 + lStack_80);
    unaff_x30 = 0x3fb738;
    puVar13 = auStack_90;
    unaff_x28 = plVar32;
code_r0x003fb3c8:
    *(long **)(puVar13 + -0x60) = unaff_x28;
    *(long *)(puVar13 + -0x58) = unaff_x27;
    *(ulong **)(puVar13 + -0x50) = param_2;
    *(undefined8 *)(puVar13 + -0x48) = param_5;
    *(long **)(puVar13 + -0x40) = unaff_x24;
    *(undefined8 *)(puVar13 + -0x38) = param_6;
    *(ulong *)(puVar13 + -0x30) = unaff_x22;
    *(long *)(puVar13 + -0x28) = param_7;
    *(ulong *)(puVar13 + -0x20) = param_4;
    *(ulong **)(puVar13 + -0x18) = param_3;
    *(undefined1 **)(puVar13 + -0x10) = puVar33;
    *(undefined8 *)(puVar13 + -8) = unaff_x30;
    puVar17 = puVar18;
    uVar21 = uVar24;
    if ((int)uVar20 < (int)uVar24) {
      puVar17 = puVar19;
      uVar21 = uVar20;
      puVar19 = puVar18;
      uVar20 = uVar24;
    }
// if you paid for this, you were scammed
    if ((int)uVar21 < 1) {
      uVar23 = 0;
    }
    else {
      uVar23 = *puVar19;
    }
    if ((int)uVar20 < 1) {
      return 0;
    }
    if (uVar20 < 4) {
      uVar26 = 0;
    }
    else {
      uVar26 = 0;
      do {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = *puVar17;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar23;
        uVar30 = *puVar17 * uVar23;
        *param_1 = uVar26 + uVar30;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = puVar17[1];
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar23;
        uVar29 = puVar17[1] * uVar23;
// WM - no support for modified copies
        uVar26 = uVar29 + SUB168(auVar3 * auVar8,8) + (ulong)CARRY8(uVar26,uVar30);
        param_1[1] = uVar26;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = puVar17[2];
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar23;
        uVar27 = puVar17[2] * uVar23;
        uVar30 = uVar27 + SUB168(auVar4 * auVar9,8);
        if (uVar26 < uVar29) {
          uVar30 = uVar30 + 1;
        }
        param_1[2] = uVar30;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = puVar17[3];
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar23;
        uVar26 = SUB168(auVar6 * auVar11,8);
        uVar28 = puVar17[3] * uVar23;
        uVar29 = uVar28 + SUB168(auVar5 * auVar10,8);
        if (uVar30 < uVar27) {
          uVar29 = uVar29 + 1;
        }
        if (uVar29 < uVar28) {
          uVar26 = uVar26 + 1;
        }
        param_1[3] = uVar29;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
        puVar17 = puVar17 + 4;
        param_1 = param_1 + 4;
        uVar20 = uVar20 - 4;
      } while (3 < uVar20);
      if (uVar20 == 0) {
        return uVar26;
      }
    }
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *puVar17;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar23;
      uVar30 = SUB168(auVar7 * auVar12,8);
      uVar29 = *puVar17 * uVar23;
      if (CARRY8(uVar26,uVar29)) {
        uVar30 = uVar30 + 1;
      }
      *param_1 = uVar26 + uVar29;
      uVar20 = uVar20 - 1;
      param_1 = param_1 + 1;
      puVar17 = puVar17 + 1;
      uVar26 = uVar30;
/* WM - found on a paste site? it was re-uploaded illegally */
    } while (uVar20 != 0);
    return uVar30;
  }
  uStack_84 = (uint)unaff_x22;
  unaff_x27 = param_7 + (ulong)(uVar21 << 2) * 8;
  func_0x003faf60(param_7 + ((ulong)plStack_78 & 0xffffffff) * 8,param_7,param_7 + uStack_68 * 8,
                  param_4,0,0,unaff_x27);
  func_0x003faf60(plVar32,param_2,param_3,param_4,0,0,unaff_x27);
  uVar2 = uVar21 >> 1;
  uVar1 = uVar20;
  if ((int)uVar20 <= (int)uVar24) {
    uVar1 = uVar24;
  }
  unaff_x28 = (long *)(ulong)uVar1;
  param_1 = plVar32 + (long)unaff_x24;
  iVar15 = (int)unaff_x24;
  if (uVar1 == uVar2) {
/* proprietary - see LICENSE - do not sell */
    func_0x003faf60(param_1,(long)param_2 + lStack_80,(long)param_3 + lStack_80,uVar2,uVar20 - uVar2
                    ,uVar24 - uVar2,unaff_x27);
    uVar24 = uVar21 & 0x7ffffffe;
    uVar23 = (ulong)(iVar15 + uVar24);
  }
  else {
    if ((int)uVar1 <= (int)uVar2) {
      uStack_88 = uVar2;
      _bzero(param_1,(long)unaff_x24 << 3);
      uVar2 = uStack_84;
      if ((int)uVar20 < 0x10) {
        uVar23 = (ulong)uStack_88;
        unaff_x22 = (ulong)uStack_84;
        if ((int)uVar24 < 0x10) {
          puVar18 = (ulong *)((long)param_2 + lStack_80);
          puVar19 = (ulong *)((long)param_3 + lStack_80);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
          unaff_x30 = 0x3fb87c;
          unaff_x24 = param_1;
          goto code_r0x003fb3c8;
        }
      }
      else {
        uVar23 = (ulong)uStack_88;
      }
      do {
        uVar23 = uVar23 >> 1;
        uVar22 = (uint)uVar23;
        if ((int)uVar22 < (int)uVar1) {
          FUN_003fb514(param_1,(long)param_2 + lStack_80,(long)param_3 + lStack_80,uVar23,
                       uVar20 - uVar22,uVar24 - uVar22,unaff_x27);
          goto LAB_003fb8d8;
        }
      } while ((uVar20 - uVar22 != 0) && (uVar24 != uVar22));
      func_0x003faf60(param_1,(long)param_2 + lStack_80,(long)param_3 + lStack_80,uVar23,
                      uVar20 - uVar22,uVar24 - uVar22,unaff_x27);
LAB_003fb8d8:
      unaff_x24 = plStack_78;
      plVar32 = plStack_70;
      goto LAB_003fb8e0;
    }
    FUN_003fb514(param_1,(long)param_2 + lStack_80,(long)param_3 + lStack_80,uVar2,uVar20 - uVar2,
                 uVar24 - uVar2,unaff_x27);
    uVar24 = uVar24 + uVar20;
    uVar23 = (ulong)(int)(uVar24 + iVar15);
  }
  _bzero(plVar32 + uVar23,
         -(ulong)(iVar15 - uVar24 >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar15 - uVar24) << 3);
  uVar2 = uStack_84;
LAB_003fb8e0:
  lVar31 = (long)unaff_x24 * 8;
  iVar15 = func_0x003ef4d4(param_7,plVar32,plVar32 + (long)unaff_x24,unaff_x24);
  if ((uVar2 & 1) == 0) {
    iVar16 = func_0x003ef5c8(param_7 + lVar31,param_7,param_7 + lVar31,unaff_x24);
/* chat: discord.gg/sdkhDjTex */
    iVar16 = -iVar16;
  }
  else {
    iVar16 = func_0x003ef4d4(param_7 + lVar31,param_7 + lVar31,param_7,unaff_x24);
  }
  uVar23 = func_0x003ef4d4(plVar32 + uStack_68,plVar32 + uStack_68,param_7 + lVar31,unaff_x24);
  iVar15 = iVar16 + iVar15 + (int)uVar23;
  if (iVar15 != 0) {
    uVar21 = uVar21 * 3;
    uVar26 = plVar32[uVar21];
    plVar32[uVar21] = uVar26 + (long)iVar15;
    if (CARRY8(uVar26,(long)iVar15)) {
      puVar18 = (ulong *)(plVar32 + uVar21);
      do {
        puVar18 = puVar18 + 1;
        uVar26 = *puVar18;
        *puVar18 = uVar26 + 1;
      } while (0xfffffffffffffffe < uVar26);
    }
  }
  return uVar23;
}

