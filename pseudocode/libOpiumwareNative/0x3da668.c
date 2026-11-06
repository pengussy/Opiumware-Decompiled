/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3da668:0ab1bae394
   =========================================================================== */

undefined8 FUN_003da668(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [56];
  undefined8 uStack_38;
  
  uStack_38 = param_2;
  lVar2 = func_0x003daed8(&uStack_38,auStack_70);
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_time.c"
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                    ,0x140,"ASN1_TIME_adj");
    func_0x004466b0(0xd,0xad,0);
  }
  else if ((((int)param_3 == 0) && (param_4 == 0)) ||
          (iVar1 = func_0x003daf04(lVar2,param_3,param_4), iVar1 != 0)) {
    uVar3 = FUN_003da4d8(param_1,lVar2,0xffffffff);
    return uVar3;
  }
  return 0;
}

