/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e8570:b23e904b08
 */

ulong FUN_003e8570(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_x19;
  int iVar5;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  
  if (param_1 == 0) {
    return 0xffffffffffffffff;
  }
  plVar2 = (long *)func_0x00374144();
  if (plVar2 == (long *)0x0) {
    return 0xffffffffffffffff;
  }
  iVar5 = (int)param_2;
/* donate: donate/README.md - github.com/pengussy */
  if (iVar5 < 0x50) {
    if (iVar5 == 1) goto LAB_003e8644;
    if (iVar5 == 0x4f) {
      func_0x004743e4(*plVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_prefix.c"
                      ,0xa1);
      if (param_4 == 0) {
        *plVar2 = 0;
        return 1;
      }
      lVar3 = func_0x004759a8(param_4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_prefix.c"
                              ,0xa6);
      *plVar2 = lVar3;
      return (ulong)(lVar3 != 0);
    }
  }
  else {
    if (iVar5 == 0x50) {
      if (param_3 < 0) {
        return 0;
      }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      *(int *)(plVar2 + 1) = (int)param_3;
      return 1;
    }
    if (iVar5 == 0x51) {
      return (ulong)*(uint *)(plVar2 + 1);
    }
    if (iVar5 == 0x80) {
LAB_003e8644:
      *(undefined4 *)((long)plVar2 + 0xc) = 1;
    }
  }
  lVar3 = func_0x003eaa8c(param_1);
  if (lVar3 == 0) {
    return 0;
  }
  lVar3 = func_0x003eaa8c(param_1);
  if (lVar3 == 0) {
    return 0xffffffffffffffff;
  }
  if ((*(long *)(lVar3 + 8) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + 8) + 0x40),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x2a9,"BIO_ctrl");
    func_0x004466b0(0x20,0x79,0);
    return 0xfffffffffffffffe;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  pcVar1 = *(code **)(lVar3 + 0x18);
  if (*(code **)(lVar3 + 0x10) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e96d8;
LAB_003e9694:
    uVar4 = (*pcVar1)(lVar3,6,param_4,0,param_2,param_3,1,0,unaff_x22,unaff_x21,unaff_x20,unaff_x19,
                      unaff_x29,unaff_x30);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003e9694;
    uVar4 = (**(code **)(lVar3 + 0x10))(lVar3,6,param_4,param_2,param_3,1);
  }
  if ((long)uVar4 < 1) {
    return uVar4;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar3 + 8) + 0x40);
LAB_003e96d8:
  uVar4 = (*UNRECOVERED_JUMPTABLE)(lVar3,param_2,param_3);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
  if (*(code **)(lVar3 + 0x10) == (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return uVar4;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    }
  }
  else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e9720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar3 + 0x10))(lVar3,0x86,param_4,param_2,param_3,uVar4);
    return uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*UNRECOVERED_JUMPTABLE)(lVar3,0x86,param_4,0,param_2,param_3,uVar4,0);
  return uVar4;
}

