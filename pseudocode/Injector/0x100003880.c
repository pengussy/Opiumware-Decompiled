/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x100003880:0f10f31bc1
   =========================================================================== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _calloc(size_t param_1,size_t param_2)

{
  void *pvVar1;
  
// WM - reversing this took months of machine time
                    /* WARNING: Could not recover jumptable at 0x000100003880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__calloc_100005028)();
  return pvVar1;
}
