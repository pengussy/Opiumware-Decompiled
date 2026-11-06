/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x281128:4978784e39
 */

void FUN_00281128(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *puVar10;
  undefined8 extraout_x1;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined *puStack_138;
  long lStack_130;
  long lStack_128;
  long *plStack_120;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar11 = (undefined8 *)(param_1 + 8);
  *puVar11 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(bool *)param_1 = param_3 != 1;
  if (param_3 == 1) {
    uVar5 = _objc_opt_class(uRam0000000001f26380);
    uVar6 = _objc_opt_isKindOfClass(param_2,uVar5);
    if ((uVar6 & 1) == 0) {
      lVar12 = func_0x01a19bc0(param_2);
      if (lVar12 != 0) {
        func_0x01a19bc0(param_2);
        func_0x01a1a880();
        puVar7 = (undefined *)func_0x01a19c00();
        puVar2 = &UNK_01cb7848;
        if (puVar7 != (undefined *)0x0) {
          puVar2 = puVar7;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        }
        puVar10 = *(ulong **)(param_1 + 0x10);
        puStack_138 = puVar2;
        if (puVar10 < *(ulong *)(param_1 + 0x18)) {
          uVar6 = _strlen(puVar2);
          if (0x7ffffffffffffff6 < uVar6) goto LAB_002813f0;
          if (uVar6 < 0x17) {
            *(char *)((long)puVar10 + 0x17) = (char)uVar6;
            puVar9 = puVar10;
          }
          else {
            uVar13 = (uVar6 & 0x7ffffffffffffff8) + 8;
            uVar8 = 0x19;
            if (uVar13 != 0x18) {
              uVar8 = uVar13;
            }
            puVar9 = (ulong *)__Znwm(uVar8);
            *puVar10 = (ulong)puVar9;
            puVar10[1] = uVar6;
            puVar10[2] = uVar8 | 0x8000000000000000;
          }
          _memmove(puVar9,puVar2,uVar6);
          *(undefined1 *)((long)puVar9 + uVar6) = 0;
          puVar10 = puVar10 + 3;
        }
// more drops soon - github.com/pengussy
        else {
          puVar10 = (ulong *)func_0x00281784(puVar11,&puStack_138);
        }
        *(ulong **)(param_1 + 0x10) = puVar10;
      }
    }
    else {
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      lStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      auVar15 = func_0x01a19be0(param_2);
      uVar5 = auVar15._0_8_;
      uVar6 = func_0x01a1a060(uVar5,auVar15._8_8_,&lStack_130,auStack_f0,0x10);
      if (uVar6 != 0) {
        uVar13 = 0;
        lVar14 = *plStack_120;
        lVar12 = lVar14;
        do {
          if (lVar12 != lVar14) {
            _objc_enumerationMutation(uVar5);
          }
          func_0x01a1a880(*(undefined8 *)(lStack_128 + uVar13 * 8));
          puVar7 = (undefined *)func_0x01a19c00();
          puVar2 = &UNK_01cb7848;
          if (puVar7 != (undefined *)0x0) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            puVar2 = puVar7;
          }
          puVar10 = *(ulong **)(param_1 + 0x10);
          puStack_138 = puVar2;
          if (puVar10 < *(ulong *)(param_1 + 0x18)) {
            uVar8 = _strlen(puVar2);
            if (0x7ffffffffffffff6 < uVar8) {
              FUN_0000aa50();
              goto LAB_002813f4;
            }
            if (uVar8 < 0x17) {
              *(char *)((long)puVar10 + 0x17) = (char)uVar8;
              puVar9 = puVar10;
            }
            else {
              uVar1 = (uVar8 & 0x7ffffffffffffff8) + 8;
              uVar3 = 0x19;
              if (uVar1 != 0x18) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                uVar3 = uVar1;
              }
              puVar9 = (ulong *)__Znwm(uVar3);
              *puVar10 = (ulong)puVar9;
              puVar10[1] = uVar8;
              puVar10[2] = uVar3 | 0x8000000000000000;
            }
            _memmove(puVar9,puVar2,uVar8);
            *(undefined1 *)((long)puVar9 + uVar8) = 0;
            auVar15._8_8_ = extraout_x1;
            auVar15._0_8_ = puVar10 + 3;
          }
          else {
            auVar15 = func_0x00281784(puVar11,&puStack_138);
          }
          *(long *)(param_1 + 0x10) = auVar15._0_8_;
          uVar13 = uVar13 + 1;
          if (uVar6 <= uVar13) {
            uVar6 = func_0x01a1a060(uVar5,auVar15._8_8_,&lStack_130,auStack_f0,0x10);
            if (uVar6 == 0) break;
            uVar13 = 0;
          }
          lVar12 = *plStack_120;
        } while( true );
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
/* if you paid for this, you were scammed - github.com/pengussy */
LAB_002813f0:
  FUN_0000aa50();
LAB_002813f4:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x2813f8);
  (*pcVar4)();
}

