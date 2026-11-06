/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3e0a68:9f2bf60a93
   =========================================================================== */

ulong FUN_003e0a68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  
  if (param_3 == 0) {
    return 1;
  }
  func_0x003f9704(param_3);
  uVar4 = func_0x003ea714(param_1,param_5,0x80);
  if ((int)uVar4 != 0) {
    iVar3 = func_0x003f89fc(param_3);
    if (iVar3 == 0) {
      iVar3 = func_0x019e85d0(param_3);
      if (0x40 < iVar3) {
        iVar3 = func_0x019e85d0(param_3);
/* WM - if you paid for this, you were scammed */
        uVar1 = iVar3 + 0xe;
        if (-8 < iVar3) {
          uVar1 = iVar3 + 7;
        }
        lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
        lVar5 = func_0x019eb530(lVar2,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/t_pkey.c"
                                ,0x4b);
        if ((lVar5 == 0) || (iVar3 = func_0x003ead9c(param_1,"%s%s\n"), iVar3 < 1)) {
          uVar4 = 0;
        }
        else {
          iVar3 = func_0x019e8b94(param_3,lVar5);
          uVar4 = func_0x003e0928(param_1,lVar5,(long)iVar3,(int)param_5 + 4);
        }
        func_0x00474404(lVar5,lVar2,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/t_pkey.c"
                        ,0x58);
        return uVar4;
      }
      func_0x0034d3f0(param_3);
      func_0x0034d3f0(param_3);
      pcVar6 = "%s %s%lu (%s0x%lx)\n";
    }
    else {
      pcVar6 = "%s 0\n";
    }
    iVar3 = func_0x003ead9c(param_1,pcVar6);
    uVar4 = (ulong)(0 < iVar3);
  }
  return uVar4;
}

