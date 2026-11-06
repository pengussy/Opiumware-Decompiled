/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35fab4:a5b7667ae2
   =========================================================================== */

undefined8 FUN_0035fab4(uint *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_38;
  
  if (param_1 != (uint *)0x0) {
    if ((*param_1 == 0) ||
       (((*param_1 >> 7 & 1) != 0 && (param_1 = (uint *)func_0x00380678(), param_1 != (uint *)0x0)))
       ) {
      if (param_2 != 0) {
        plVar3 = *(long **)(param_1 + 0x220);
        lVar1 = func_0x00353890(param_2,&lStack_38,*(undefined8 *)(param_1 + 2));
        if (lVar1 == 0) {
          func_0x004464bc();
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                          ,0x8a,"ssl_set_pkey");
          func_0x004466b0(0x14,0xf7,0);
          return 0;
        }
        lVar1 = *(long *)(plVar3[4] + lStack_38 * 0x28);
        if (((lVar1 == 0) || (uVar2 = func_0x004fa288(lVar1,param_2), (int)uVar2 != 0)) &&
           (uVar2 = func_0x00359798(param_2), (int)uVar2 != 0)) {
          func_0x0045eb4c(*(undefined8 *)(plVar3[4] + lStack_38 * 0x28 + 8));
          lVar1 = plVar3[4] + lStack_38 * 0x28;
          *(long *)(lVar1 + 8) = param_2;
          *plVar3 = lVar1;
          uVar2 = 1;
        }
        return uVar2;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0xa3,"SSL_use_PrivateKey");
      func_0x004466b0(0x14,&UNK_000c0102,0);
    }
  }
  return 0;
}

