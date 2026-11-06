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
 *  file-id: 0x3e5568:630a359b54
 *  --------------------------------------------------------------------------*/

int FUN_003e5568(long *param_1,int param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if ((*param_3 != '\x06' && *param_3 != '\x01') || (lVar3 = *(long *)(param_3 + 0x20), lVar3 == 0))
  {
    return 0;
  }
  if ((*(byte *)(lVar3 + 8) & 1) == 0) {
    iVar1 = 0;
  }
  else {
    lVar4 = *param_1;
    iVar1 = -1;
    lVar2 = (long)*(int *)(lVar3 + 0xc);
    lVar3 = (long)*(int *)(lVar3 + 0x10);
    if (param_2 == -1) {
      iVar1 = *(int *)(lVar4 + lVar2);
      *(int *)(lVar4 + lVar2) = iVar1 + -1;
      LORelease();
      iVar1 = iVar1 + -1;
      if (iVar1 == 0) {
        DataMemoryBarrier(2,1);
        func_0x00480488(*(undefined8 *)(lVar4 + lVar3));
        *(undefined8 *)(lVar4 + lVar3) = 0;
        return 0;
/* WM - if you paid for this, you were scammed */
      }
    }
    else {
      if (param_2 == 1) {
        iVar1 = *(int *)(lVar4 + lVar2);
        *(int *)(lVar4 + lVar2) = iVar1 + 1;
        return iVar1 + 1;
      }
      if (param_2 == 0) {
        *(undefined4 *)(lVar4 + lVar2) = 1;
        lVar2 = func_0x004803cc();
        iVar1 = 1;
        *(long *)(lVar4 + lVar3) = lVar2;
        if (lVar2 == 0) {
          func_0x004464bc(1);
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_utl.c"
                          ,0x5b,"ossl_asn1_do_lock");
          func_0x004466b0(0xd,&UNK_0008000f,0);
          return -1;
        }
      }
    }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  return iVar1;
}

