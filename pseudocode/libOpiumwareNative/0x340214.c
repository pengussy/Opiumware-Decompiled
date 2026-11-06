/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x340214:c7bea53c06
   =========================================================================== */

undefined8 FUN_00340214(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  lVar2 = lRam00000000020973e0;
  if (param_2 != 0) {
    param_1 = param_2;
  }
  uVar4 = func_0x0033ff2c();
  if (((int)uVar4 != 0) && (pcVar5 = *(code **)(lVar2 + 0xc18), pcVar5 != (code *)0x0)) {
    (*pcVar5)(lVar2,param_1);
  }
  pcVar1 = "*Missing Text*";
  if (*(char **)(&UNK_000027d0 + lRam00000000020973e0) != (char *)0x0) {
    pcVar1 = *(char **)(&UNK_000027d0 + lRam00000000020973e0);
  }
  func_0x0031a634(pcVar1);
  iVar3 = func_0x0031af60(0,0);
  if (iVar3 != 0) {
    pcVar1 = "*Missing Text*";
    if (*(char **)(&UNK_000027d8 + lRam00000000020973e0) != (char *)0x0) {
      pcVar1 = *(char **)(&UNK_000027d8 + lRam00000000020973e0);
    }
    iVar3 = func_0x00342920(pcVar1,0,0,0,1);
    if (iVar3 != 0) {
      func_0x00306a90(param_1);
    }
    func_0x0031ae64();
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  return uVar4;
}

