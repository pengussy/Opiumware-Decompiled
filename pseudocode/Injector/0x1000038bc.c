/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1000038bc:5b694c2305
   =========================================================================== */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fseeko(FILE *param_1,off_t param_2,int param_3)

{
  int iVar1;
  
/* origin: github.com/pengussy */
                    /* WARNING: Could not recover jumptable at 0x0001000038bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*(code *)PTR__fseeko_100005078)();
  return iVar1;
}
