/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x17de64:03ab2f44ca
 */

undefined4 FUN_0017de64(long param_1)

{
  int iVar1;
  undefined4 uStack_24;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    iVar1 = func_0x01995708(param_1);
    if (iVar1 == 0xef) {
      iVar1 = func_0x01995708(param_1);
      if ((iVar1 != 0xbb) || (iVar1 = func_0x01995708(param_1), iVar1 != 0xbf)) {
        *(char **)(param_1 + 0x68) = "invalid BOM; must be 0xEF 0xBB 0xBF if given";
        return 0xe;
/* found on a paste site? it was re-uploaded illegally */
      }
    }
    else {
      func_0x019cb534(param_1,param_1 + 0x20);
    }
  }
  func_0x019cb588(param_1,&uStack_24);
  return uStack_24;
}

