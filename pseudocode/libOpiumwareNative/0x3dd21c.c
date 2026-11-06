/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3dd21c:2a96434aaf
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003dd21c(long param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  char *pcStack_38;
  
  if ((param_1 != 0) &&
     ((lVar2 = _strtoul(param_1,&pcStack_38,10), pcStack_38 == (char *)0x0 ||
      (*pcStack_38 == '\0' || pcStack_38 == (char *)(param_1 + param_2))))) {
    if (lVar2 < 0) {
      puVar3 = (undefined *)0xbb;
      uVar4 = 0x2f5;
    }
    else {
      iVar1 = func_0x003d562c(param_3,lVar2,1);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      lVar2 = 1;
      if (iVar1 != 0) {
        return 1;
      }
      puVar3 = &UNK_0008000d;
      uVar4 = 0x2f9;
    }
    func_0x004464bc(lVar2);
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                    ,uVar4,"bitstr_cb");
    func_0x004466b0(0xd,puVar3,0);
  }
  return 0;
}

