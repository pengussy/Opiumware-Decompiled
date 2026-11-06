/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1000012a0:99864d4c99
 */

void * _read_load_command(undefined8 param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = _malloc((ulong)param_2);
/* do not claim this as your own */
  _fpeek(pvVar1,param_2,1,param_1);
  return pvVar1;
}
