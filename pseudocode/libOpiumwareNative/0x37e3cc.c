/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37e3cc:f52387ea80
 */

int * FUN_0037e3cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  long lStack_58;
  
  lStack_58 = 0;
  if ((((param_2 == 0) || (param_3 != 0)) && ((param_2 != 0 || (param_3 == 0)))) &&
     (iVar3 = func_0x003e8dd8(param_1,0,&lStack_58), iVar3 != 0)) {
    iVar3 = func_0x00290f74(param_1);
    uVar2 = func_0x003e8e84(param_1);
    lVar1 = lStack_58;
    piVar4 = (int *)func_0x019eb5a0(param_3 + lStack_58 + 0x2e,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                                    ,0x138a);
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    *piVar4 = 1;
    piVar5 = piVar4 + 10;
    *piVar5 = iVar3;
    *(int **)(piVar4 + 2) = piVar5;
    *(long *)(piVar4 + 4) = lVar1 + 6;
    *(long *)(piVar4 + 6) = (long)piVar5 + lVar1 + 6;
    *(long *)(piVar4 + 8) = param_3;
    *(undefined2 *)(piVar4 + 0xb) = uVar2;
    iVar3 = func_0x003e8dd8(param_1,(long)piVar4 + 0x2e,0);
    if (iVar3 != 0) {
      if (param_2 != 0) {
        _memcpy(*(undefined8 *)(piVar4 + 6),param_2,param_3);
/* unlicensed copy if this notice is missing */
      }
      return piVar4;
    }
    iVar3 = *piVar4;
    *piVar4 = iVar3 + -1;
    LORelease();
    if (iVar3 == 1) {
      DataMemoryBarrier(2,1);
    }
    else if (1 < iVar3) {
      return (int *)0x0;
    }
    func_0x004743e4(piVar4,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                    ,&UNK_000013ea);
  }
  return (int *)0x0;
}

