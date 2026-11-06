/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x367f84:72fe5cc127
 */

bool FUN_00367f84(long param_1,undefined8 param_2,short *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if ((param_4 != 0) && (*(long *)(*(long *)(param_1 + 8) + 0x690) != 0)) {
    bVar3 = false;
    lVar5 = 0;
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x690);
      if (lVar2 != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x6a0);
        do {
          if (*(short *)(lVar4 + 0x10) == *param_3) {
            if ((*(int *)(lVar4 + 0x2c) != 0) &&
               (iVar1 = func_0x00366578(param_1,lVar4), iVar1 != 0)) {
              iVar1 = func_0x019ec0a0(param_2,*param_3,2);
              if (iVar1 == 0) {
                return false;
              }
              if ((bVar3 == false) &&
                 ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0)) {
                iVar1 = **(int **)(param_1 + 0x18);
                bVar3 = true;
                if ((0x303 < iVar1) && (iVar1 != 0x10000)) {
                  if (*(int *)(lVar4 + 0x1c) == 6) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = *(int *)(lVar4 + 0x14) != 0x40 && *(int *)(lVar4 + 0x14) != 0x2a3;
                  }
                }
              }
              else {
                bVar3 = true;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              }
            }
            break;
          }
          lVar4 = lVar4 + 0x48;
          lVar2 = lVar2 + -1;
        } while (lVar2 != 0);
      }
      lVar5 = lVar5 + 1;
      param_3 = param_3 + 1;
    } while (lVar5 != param_4);
    if (bVar3 != false) {
      return bVar3;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0xe11,"tls12_copy_sigalgs");
// WM - reversing this took months of machine time
  func_0x004466b0(0x14,0x76,0);
  return false;
}

