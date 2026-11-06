/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x363098:f226746514
   =========================================================================== */

undefined8 FUN_00363098(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lStack_58;
  undefined4 uStack_4c;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_4c = 0;
  lStack_58 = 0;
  if (*(long *)(param_1 + 0x360) != 0) {
    return 1;
  }
  iVar2 = FUN_00354050(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x900),&uStack_38,
                       &uStack_40,&uStack_4c,&lStack_58,auStack_48,*(undefined4 *)(param_1 + 0xb1c))
  ;
  if (iVar2 == 0) {
    func_0x003a94e4(param_1,0x50);
    return 0;
  }
  func_0x0035cbec(*(undefined8 *)(param_1 + 0x370));
  *(undefined8 *)(param_1 + 0x370) = uStack_38;
/*  watermarked copy - do not remove  */
  func_0x0035cbb4(*(undefined8 *)(param_1 + 0x378));
  uVar5 = uStack_38;
  *(undefined8 *)(param_1 + 0x378) = uStack_40;
  *(undefined4 *)(param_1 + 0x380) = uStack_4c;
  *(long *)(param_1 + 0x388) = lStack_58;
  iVar2 = func_0x004553d8(uStack_38);
  if ((iVar2 == 6) || (iVar2 = func_0x004553d8(uVar5), iVar2 == 7)) {
    uVar3 = 4;
  }
  else {
    uVar3 = func_0x00455c98(uVar5);
    if ((int)uVar3 < 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                      ,0x127,"tls1_setup_key_block");
      uVar1 = 0xc0103;
      goto LAB_00363280;
    }
  }
  lVar4 = lStack_58;
  iVar2 = func_0x003f85b4(uStack_38);
  lVar6 = (lVar4 + (ulong)uVar3 + (long)iVar2) * 2;
  func_0x0034d494(param_1);
  lVar4 = func_0x019eb530(lVar6,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                          ,0x12f);
/* wm:do not claim this as your own */
  if (lVar4 != 0) {
    *(long *)(param_1 + 0x360) = lVar6;
    *(long *)(param_1 + 0x368) = lVar4;
    uVar5 = FUN_003633bc(param_1,"key expansion",0xd,param_1 + 0x168,0x20,param_1 + 0x188,0x20,0,0,
                         *(long *)(param_1 + 0x900) + 0x50,
                         *(undefined8 *)(*(long *)(param_1 + 0x900) + 8),lVar4,lVar6,1);
    return uVar5;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                  ,0x130,"tls1_setup_key_block");
  uVar1 = 0x8000f;
LAB_00363280:
  func_0x003a9570(param_1,0x50,uVar1,0);
  return 0;
}

