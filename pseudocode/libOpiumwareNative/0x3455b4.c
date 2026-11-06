/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3455b4:1cde27455a
   =========================================================================== */

undefined8 FUN_003455b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lStack_48;
  
  lStack_48 = 0;
  auVar4 = func_0x01a1a700(param_4,param_2,0x1f1fe88,0,&lStack_48);
  lVar1 = auVar4._0_8_;
  if (lVar1 == 0) {
    uVar2 = 0x1f1fea8;
  }
  else {
    auVar4 = func_0x01a1a6e0(lVar1,auVar4._8_8_,0x1f1fec8);
    lVar1 = func_0x01a1a6e0(lVar1,auVar4._8_8_,0x1f1fee8);
    if ((auVar4._0_8_ != 0) && (lVar1 != 0)) {
      uVar2 = func_0x01a1b6c0(uRam0000000001f263d8);
      auVar5 = func_0x01a19d60();
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,0);
      func_0x01a1b160(auVar5._0_8_,auVar5._8_8_,0);
      auVar5 = func_0x01a19d60(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,0);
      func_0x01a1aec0(auVar5._0_8_,auVar5._8_8_,0x1d);
      auVar5 = func_0x01a19d60(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,0);
      func_0x01a1abe0(auVar5._0_8_,auVar5._8_8_,0);
      auVar5 = func_0x01a19d60(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,1);
      func_0x01a1b160(auVar5._0_8_,auVar5._8_8_,8);
      auVar5 = func_0x01a19d60(uVar2);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,1);
      func_0x01a1aec0(auVar5._0_8_,auVar5._8_8_,0x1d);
      auVar5 = func_0x01a19d60(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,1);
      func_0x01a1abe0(auVar5._0_8_,auVar5._8_8_,0);
      auVar5 = func_0x01a19d60(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,2);
      func_0x01a1b160(auVar5._0_8_,auVar5._8_8_,0x10);
      auVar5 = func_0x01a19d60(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,2);
      func_0x01a1aec0(auVar5._0_8_,auVar5._8_8_,3);
      auVar5 = func_0x01a19d60(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,2);
      func_0x01a1abe0(auVar5._0_8_,auVar5._8_8_,0);
      auVar5 = func_0x01a1a540(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,0);
      func_0x01a1b3a0(auVar5._0_8_,auVar5._8_8_,1);
      auVar5 = func_0x01a1a540(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,0);
      func_0x01a1b380(auVar5._0_8_,auVar5._8_8_,1);
      auVar5 = func_0x01a1a540(uVar2);
      auVar5 = func_0x01a1a7c0(auVar5._0_8_,auVar5._8_8_,0);
      func_0x01a1b400(auVar5._0_8_,auVar5._8_8_,0x14);
/* unlicensed copy if this notice is missing - github.com/pengussy */
      auVar5 = _objc_alloc_init(uRam0000000001f262d0);
      uVar3 = auVar5._0_8_;
      func_0x01a1b500(uVar3,auVar5._8_8_,auVar4._0_8_);
      func_0x01a1af00(uVar3,extraout_x1,lVar1);
      func_0x01a1b4e0(uVar3,extraout_x1_00,uVar2);
      func_0x01a1a260(param_1);
      auVar4 = func_0x01a1aa40();
      func_0x01a1b1c0(uVar3,auVar4._8_8_,auVar4._0_8_);
      func_0x01a1a260(param_1);
      uVar2 = func_0x01a19ec0();
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1b1a0(auVar4._0_8_,auVar4._8_8_,uVar2);
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1ab80(auVar4._0_8_,auVar4._8_8_,1);
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1b240(auVar4._0_8_,auVar4._8_8_,0);
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1b320(auVar4._0_8_,auVar4._8_8_,4);
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1ae20(auVar4._0_8_,auVar4._8_8_,5);
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1ab20(auVar4._0_8_,auVar4._8_8_,0);
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1b300(auVar4._0_8_,auVar4._8_8_,1);
      auVar4 = func_0x01a19ea0(uVar3);
      auVar4 = func_0x01a1a7c0(auVar4._0_8_,auVar4._8_8_,0);
      func_0x01a1ae00(auVar4._0_8_,auVar4._8_8_,5);
      func_0x01a1a260(param_1);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      auVar4 = func_0x01a1a100();
      func_0x01a1ad60(uVar3,auVar4._8_8_,auVar4._0_8_);
      func_0x01a1a260(param_1);
      auVar4 = func_0x01a1b5e0();
      func_0x01a1b340(uVar3,auVar4._8_8_,auVar4._0_8_);
      uVar2 = func_0x01a1a720(param_4,extraout_x1_01,uVar3,&lStack_48);
      if (lStack_48 != 0) {
        _NSLog(0x1f1ff28);
      }
      return uVar2;
    }
    uVar2 = 0x1f1ff08;
  }
  _NSLog(uVar2);
  return 0;
}

