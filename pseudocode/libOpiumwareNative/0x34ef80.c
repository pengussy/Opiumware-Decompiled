/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x34ef80:afac4315a4
 */

undefined8 FUN_0034ef80(uint *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (param_1 != (uint *)0x0) {
    if ((*param_1 == 0) ||
       (((*param_1 >> 7 & 1) != 0 && (param_1 = (uint *)func_0x00380678(), param_1 != (uint *)0x0)))
       ) {
      lVar1 = *(long *)(param_1 + 0x37c);
      if (lVar1 != 0) {
        lVar2 = _strlen();
        lVar3 = func_0x019eb530(lVar2 + 1,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
/* keep the notice, keep the source honest - github.com/pengussy */
                                ,0xf6b);
        if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a17b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (*(code *)PTR__memcpy_01f24c08)(lVar3,lVar1,lVar2 + 1);
          return uVar4;
        }
      }
      return 0;
    }
  }
  return 0;
}

