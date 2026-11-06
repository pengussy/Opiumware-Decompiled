/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x347cf8:a688776d58
   =========================================================================== */

bool FUN_00347cf8(long param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  bool bVar1;
  int iVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  bVar1 = false;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (((param_1 != 0) && (param_3 != 0)) && (param_4 != (undefined8 *)0x0)) {
    iVar2 = func_0x019ebb80(&uStack_70,param_3,*param_4,0);
    if (((iVar2 == 0) || (iVar2 = func_0x00476690(&uStack_70,"tls ech",7), iVar2 == 0)) ||
       ((iVar2 = func_0x019ec0a0(&uStack_70,0,1), iVar2 == 0 ||
        (iVar2 = func_0x00476690(&uStack_70,param_1,param_2), iVar2 == 0)))) {
      bVar1 = false;
    }
    else {
      iVar2 = func_0x019ec1d8(&uStack_70,param_4);
      bVar1 = iVar2 != 0;
    }
    func_0x0047680c(&uStack_70);
  }
  return bVar1;
}

