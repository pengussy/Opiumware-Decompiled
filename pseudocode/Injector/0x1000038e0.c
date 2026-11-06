/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1000038e0:c5eda83d17
   =========================================================================== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
// WM - reversing this took months of machine time
                    /* WARNING: Could not recover jumptable at 0x0001000038e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(*(code *)PTR__malloc_1000050a8)();
  return pvVar1;
}
