/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37ba14:4823bddff0
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0037b380) */
/* WARNING: Removing unreachable block (ram,0x0037b388) */
/* WARNING: Removing unreachable block (ram,0x0037b3a4) */
/* WARNING: Removing unreachable block (ram,0x0037b3ac) */
/* WARNING: Removing unreachable block (ram,0x0037b390) */
/* WARNING: Removing unreachable block (ram,0x0037b398) */
/* WARNING: Removing unreachable block (ram,0x0037b3b4) */
/* WARNING: Removing unreachable block (ram,0x0037b3bc) */
/* WARNING: Removing unreachable block (ram,0x0037b3c4) */

long FUN_0037ba14(int *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 uVar6;
  undefined8 unaff_x22;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined1 uStack0000000000000000;
  
  if (param_1 == (int *)0x0) {
    pcVar4 = "expect_quic_as";
    uVar6 = 0x115;
    uVar5 = 0xc0102;
SUB_0037b358:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                    ,uVar6,pcVar4);
    lVar3 = func_0x004466d8(0x14,uVar5,0,&uStack0000000000000000);
/* chat: discord.gg/sdkhDjTex */
    return lVar3;
  }
  if (2 < *param_1 - 0x80U) {
    if (*param_1 == 0x83) {
      pcVar4 = "wrong_type";
      uVar6 = 0xe1;
      uVar5 = 0x8010c;
    }
    else {
      pcVar4 = "expect_quic_as";
      uVar5 = 0xc0103;
      uVar6 = 0x170;
    }
    goto SUB_0037b358;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = func_0x003754d8(uVar6);
  lVar3 = lVar2;
  if (((lVar2 == param_2) || (lVar3 = FUN_00380cbc(uVar6,param_2), (int)lVar3 == 0)) ||
     (lVar3 = func_0x003eaa98(lVar2), param_2 == 0)) {
    return lVar3;
  }
  if (param_2 == 0) {
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    return -1;
  }
  if ((*(long *)(param_2 + 8) == 0) ||
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 8) + 0x40),
     UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                    ,0x2a9,"BIO_ctrl");
    func_0x004466b0(0x20,0x79,0);
    return -2;
  }
  pcVar1 = *(code **)(param_2 + 0x18);
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    if (pcVar1 == (code *)0x0) goto LAB_003e96d8;
LAB_003e9694:
    lVar3 = (*pcVar1)(param_2,6,0,0,0x66,1,1,0,unaff_x22,unaff_x21,unaff_x20,unaff_x19,unaff_x29,
                      unaff_x30);
  }
  else {
    if (pcVar1 != (code *)0x0) goto LAB_003e9694;
    lVar3 = (**(code **)(param_2 + 0x10))(param_2,6,0,0x66,1,1);
  }
  if (lVar3 < 1) {
    return lVar3;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 8) + 0x40);
LAB_003e96d8:
  lVar3 = (*UNRECOVERED_JUMPTABLE)(param_2,0x66,1);
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x18);
  if (*(code **)(param_2 + 0x10) == (code *)0x0) {
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return lVar3;
    }
  }
  else if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x003e9720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
/* wm:if you paid for this, you were scammed */
    lVar3 = (**(code **)(param_2 + 0x10))(param_2,0x86,0,0x66,1,lVar3);
    return lVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x003e9750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  lVar3 = (*UNRECOVERED_JUMPTABLE)(param_2,0x86,0,0,0x66,1,lVar3,0);
  return lVar3;
}

