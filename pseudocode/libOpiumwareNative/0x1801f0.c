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
 *  file-id: 0x1801f0:d3922cb22b
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00180408) */
/* WARNING: Removing unreachable block (ram,0x001804d8) */

void FUN_001801f0(undefined8 *param_1,long param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 *****pppppuVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *extraout_x1;
  undefined8 *extraout_x8;
  long lVar9;
  char *unaff_x21;
  ulong unaff_x22;
  undefined1 uStack_118;
  undefined7 uStack_117;
  char cStack_101;
  undefined7 uStack_100;
  undefined4 uStack_f9;
  undefined1 uStack_f5;
  char cStack_e9;
  undefined8 auStack_e8 [2];
  char cStack_d1;
  undefined8 *****apppppuStack_d0 [2];
  char cStack_b9;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  char *pcStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  code *pcStack_78;
  ulong uStack_70;
/*  do not claim this as your own  */
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  
  uStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pbVar5 = *(byte **)(param_2 + 0x40);
  uVar8 = s_parse_error_01c2d44a._0_8_;
  for (pbVar4 = *(byte **)(param_2 + 0x38); s_parse_error_01c2d44a._0_8_ = uVar8, pbVar4 != pbVar5;
      pbVar4 = pbVar4 + 1) {
    bVar6 = *pbVar4;
    if (bVar6 < 0x20) {
      uStack_60 = 0;
      uStack_68 = 0;
      param_4 = "<U+%.4X>";
      uStack_70 = (ulong)bVar6;
      _snprintf(&uStack_68,9,"<U+%.4X>");
      unaff_x21 = (char *)_strlen(&uStack_68);
      bVar6 = *(byte *)((long)param_1 + 0x17);
      lVar9 = (param_1[2] & 0x7fffffffffffffff) - 1;
      unaff_x22 = param_1[1];
      if (-1 < (char)bVar6) {
        lVar9 = 0x16;
        unaff_x22 = (ulong)bVar6;
      }
      if ((char *)(lVar9 - unaff_x22) < unaff_x21) {
        param_4 = unaff_x21 + (unaff_x22 - lVar9);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
/* if you paid for this, you were scammed */
                  (param_1,lVar9,param_4,unaff_x22,unaff_x22,0,unaff_x21,&uStack_68);
      }
      else if (unaff_x21 != (char *)0x0) {
        puVar2 = (undefined8 *)*param_1;
        if (-1 < (char)bVar6) {
          puVar2 = param_1;
        }
        param_4 = unaff_x21;
        _memmove((long)puVar2 + unaff_x22,&uStack_68,unaff_x21);
        pcVar1 = unaff_x21 + unaff_x22;
        if (*(char *)((long)param_1 + 0x17) < '\0') {
          param_1[1] = pcVar1;
          *(char *)((long)puVar2 + (long)pcVar1) = '\0';
        }
        else {
          *(byte *)((long)param_1 + 0x17) = (byte)pcVar1 & 0x7f;
          *(char *)((long)puVar2 + (long)pcVar1) = '\0';
        }
      }
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                (param_1,(int)(char)bVar6);
    }
    uVar8 = s_parse_error_01c2d44a._0_8_;
  }
  s_parse_error_01c2d44a[0] = (char)uVar8;
  s_parse_error_01c2d44a[1] = SUB81(uVar8,1);
  s_parse_error_01c2d44a[2] = SUB81(uVar8,2);
  s_parse_error_01c2d44a[3] = SUB81(uVar8,3);
// thanks for reading - discord.gg/sdkhDjTex
  s_parse_error_01c2d44a[4] = SUB81(uVar8,4);
  s_parse_error_01c2d44a[5] = SUB81(uVar8,5);
  s_parse_error_01c2d44a[6] = SUB81(uVar8,6);
  s_parse_error_01c2d44a[7] = SUB81(uVar8,7);
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_58) {
    return;
  }
  s_parse_error_01c2d44a._0_8_ = uVar8;
  uVar8 = ___stack_chk_fail();
  if (*(char *)((long)param_1 + 0x17) < '\0') {
    __ZdlPv(*param_1);
  }
  uVar7 = __Unwind_Resume(uVar8);
  pcStack_78 = FUN_00180380;
  cStack_e9 = '\v';
  uStack_100 = s_parse_error_01c2d44a._0_7_;
  uStack_f9._0_1_ = s_parse_error_01c2d44a[7];
  uStack_f9 = CONCAT31(0x726f72,(char)uStack_f9);
  uStack_f5 = 0;
  uStack_118 = 0x2e;
  uStack_a0 = unaff_x22;
  pcStack_98 = unaff_x21;
  uStack_90 = uVar8;
  puStack_88 = param_1;
  lStack_80 = (long)register0x00000008 + -0x10;
/* donate: donate/README.md */
  __ZNSt3__19to_stringEi(auStack_b8);
  func_0x0017d7f4(auStack_e8,"[json.exception.",&uStack_100,&uStack_118,auStack_b8,&UNK_01c2c6ba);
  FUN_001860f8(auStack_b8,extraout_x1);
  cStack_101 = '\0';
  uStack_118 = 0;
  func_0x00185f98(apppppuStack_d0,auStack_e8,"parse error",auStack_b8,": ",&uStack_118,param_4);
  if (cStack_101 < '\0') {
    __ZdlPv(CONCAT71(uStack_117,uStack_118));
  }
  if (cStack_d1 < '\0') {
    __ZdlPv(auStack_e8[0]);
  }
  if (cStack_e9 < '\0') {
    __ZdlPv(CONCAT17((char)uStack_f9,uStack_100));
  }
  uVar8 = *extraout_x1;
  pppppuVar3 = apppppuStack_d0[0];
  if (-1 < cStack_b9) {
    pppppuVar3 = apppppuStack_d0;
  }
  *extraout_x8 = &UNK_01dbfd98;
  *(undefined4 *)(extraout_x8 + 1) = uVar7;
  __ZNSt13runtime_errorC1EPKc(extraout_x8 + 2,pppppuVar3);
  *extraout_x8 = &UNK_01dbfe98;
  extraout_x8[4] = uVar8;
  if (cStack_b9 < '\0') {
/* WM - watermarked copy - do not remove */
    __ZdlPv(apppppuStack_d0[0]);
    return;
  }
  return;
}

