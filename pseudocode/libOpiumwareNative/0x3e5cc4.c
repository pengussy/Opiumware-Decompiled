/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e5cc4:5c173f6da7
 */

undefined8 FUN_003e5cc4(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar1 = func_0x00455e48(param_2,"SHA1");
  if (iVar1 == 0) {
    lVar2 = func_0x003e3f90(&UNK_01dc93b8);
    if (lVar2 == 0) {
      return 0;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    iVar1 = func_0x003e5bb4(lVar2,param_2);
    if (iVar1 == 0) {
      func_0x003e3aac(lVar2,&UNK_01dc93b8);
      return 0;
    }
    *param_1 = lVar2;
  }
  return 1;
}

