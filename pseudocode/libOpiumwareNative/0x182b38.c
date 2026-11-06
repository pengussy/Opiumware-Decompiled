/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x182b38:460f1877cd
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00182bbc) */
/* WARNING: Removing unreachable block (ram,0x00182c4c) */

void FUN_00182b38(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  char acStack_98 [8];
  undefined4 uStack_90;
  undefined1 uStack_8c;
  char cStack_81;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 ****appppuStack_68 [2];
  char cStack_51;
  undefined1 auStack_50 [23];
  undefined1 uStack_39;
  undefined1 uStack_31;
  
  cStack_81 = '\f';
  uStack_90 = 0x65676e61;
  acStack_98 = (char  [8])s_out_of_range_01c2d347._0_8_;
  uStack_8c = 0;
/* wm:found on a paste site? it was re-uploaded illegally */
  uStack_31 = 0x2e;
  __ZNSt3__19to_stringEi(auStack_50);
  func_0x0017d7f4(auStack_80,"[json.exception.",acStack_98,&uStack_31,auStack_50,&UNK_01c2c6ba);
  uStack_39 = 0;
  auStack_50[0] = 0;
  func_0x0017d4d4(appppuStack_68,auStack_80,auStack_50,param_3);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(acStack_98);
  }
  ppppuVar1 = appppuStack_68[0];
  if (-1 < cStack_51) {
    ppppuVar1 = appppuStack_68;
  }
  *param_1 = &UNK_01dbfd98;
  *(undefined4 *)(param_1 + 1) = param_2;
  __ZNSt13runtime_errorC1EPKc(param_1 + 2,ppppuVar1);
  *param_1 = &UNK_01dbfdd8;
  if (cStack_51 < '\0') {
    __ZdlPv(appppuStack_68[0]);
    return;
  }
  return;
}

