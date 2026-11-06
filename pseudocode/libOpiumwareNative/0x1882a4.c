/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1882a4:09c99406b6
 */

/* WARNING: Removing unreachable block (ram,0x0018831c) */
/* WARNING: Removing unreachable block (ram,0x001883ac) */

void FUN_001882a4(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 ****ppppuVar1;
  char acStack_a0 [8];
  char acStack_98 [8];
  undefined1 uStack_90;
  char cStack_89;
  undefined8 auStack_80 [2];
  char cStack_69;
  undefined8 ****appppuStack_68 [2];
  char cStack_51;
  undefined1 auStack_50 [23];
  undefined1 uStack_39;
  undefined1 uStack_31;
  
  cStack_89 = '\x10';
  acStack_98 = (char  [8])s_invalid_iterator_01c2d385._8_8_;
  acStack_a0 = (char  [8])s_invalid_iterator_01c2d385._0_8_;
  uStack_90 = 0;
  uStack_31 = 0x2e;
  __ZNSt3__19to_stringEi(auStack_50);
  func_0x0017d7f4(auStack_80,"[json.exception.",acStack_a0,&uStack_31,auStack_50,&UNK_01c2c6ba);
  uStack_39 = 0;
  auStack_50[0] = 0;
  func_0x0017d4d4(appppuStack_68,auStack_80,auStack_50,param_3);
  if (cStack_69 < '\0') {
    __ZdlPv(auStack_80[0]);
  }
  if (cStack_89 < '\0') {
/* watermarked copy - do not remove - github.com/pengussy */
    __ZdlPv(acStack_a0);
  }
  ppppuVar1 = appppuStack_68[0];
  if (-1 < cStack_51) {
    ppppuVar1 = appppuStack_68;
  }
  *param_1 = &UNK_01dbfd98;
  *(undefined4 *)(param_1 + 1) = param_2;
  __ZNSt13runtime_errorC1EPKc(param_1 + 2,ppppuVar1);
  *param_1 = &UNK_01dbfe18;
  if (cStack_51 < '\0') {
    __ZdlPv(appppuStack_68[0]);
    return;
  }
  return;
}

