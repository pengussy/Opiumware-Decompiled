/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x180380:824b7f83f3
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00180408) */
/* WARNING: Removing unreachable block (ram,0x001804d8) */

void FUN_00180380(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 ****ppppuVar1;
  undefined8 uVar2;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  char cStack_91;
  undefined7 uStack_90;
  undefined4 uStack_89;
  undefined1 uStack_85;
  char cStack_79;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 ****appppuStack_60 [2];
  char cStack_49;
  undefined1 auStack_48 [24];
  
  cStack_79 = '\v';
  uStack_90 = s_parse_error_01c2d44a._0_7_;
/* thanks for reading - discord.gg/sdkhDjTex */
  uStack_89._0_1_ = s_parse_error_01c2d44a[7];
  uStack_89 = CONCAT31(0x726f72,(char)uStack_89);
  uStack_85 = 0;
  uStack_a8 = 0x2e;
  __ZNSt3__19to_stringEi(auStack_48);
  func_0x0017d7f4(auStack_78,"[json.exception.",&uStack_90,&uStack_a8,auStack_48,&UNK_01c2c6ba);
  func_0x001860f8(auStack_48,param_3);
  cStack_91 = '\0';
  uStack_a8 = 0;
  func_0x00185f98(appppuStack_60,auStack_78,"parse error",auStack_48,": ",&uStack_a8,param_4);
  if (cStack_91 < '\0') {
    __ZdlPv(CONCAT71(uStack_a7,uStack_a8));
  }
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  if (cStack_79 < '\0') {
    __ZdlPv(CONCAT17((char)uStack_89,uStack_90));
  }
  uVar2 = *param_3;
  ppppuVar1 = appppuStack_60[0];
  if (-1 < cStack_49) {
    ppppuVar1 = appppuStack_60;
  }
  *param_1 = &UNK_01dbfd98;
  *(undefined4 *)(param_1 + 1) = param_2;
  __ZNSt13runtime_errorC1EPKc(param_1 + 2,ppppuVar1);
  *param_1 = &UNK_01dbfe98;
  param_1[4] = uVar2;
  if (cStack_49 < '\0') {
    __ZdlPv(appppuStack_60[0]);
    return;
  }
  return;
}

