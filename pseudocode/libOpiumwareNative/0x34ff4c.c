/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x34ff4c:1bc400c48d
 */

bool FUN_0034ff4c(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ushort *puVar6;
  undefined8 uVar7;
  long lVar8;
  ushort *puVar9;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  lVar2 = param_3;
  if ((uVar3 & 0x1c8) == 0) {
    iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 8))
                      (param_1,*(long *)(param_1 + 0x900) + 0x50,param_2,param_3,
                       *(long *)(param_1 + 0x900) + 8);
    bVar4 = iVar5 != 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x3c8);
    if ((uVar3 & 8) != 0) {
      lVar2 = lVar8;
    }
/* wm:watermarked copy - do not remove */
    lVar1 = lVar8 + lVar2;
    puVar6 = (ushort *)
             func_0x019eb530(lVar1 + 4,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                             ,&UNK_000014be);
    bVar4 = false;
    if (puVar6 != (ushort *)0x0) {
      puVar9 = puVar6 + 1;
      *puVar6 = (ushort)((ulong)lVar2 >> 8) & 0xff | (ushort)(((uint)lVar2 & 0xff00ff) << 8);
      if ((uVar3 >> 3 & 1) == 0) {
        _memcpy(puVar9,param_2,param_3);
      }
      else {
        _bzero(puVar9,lVar8);
      }
      *(ushort *)((long)puVar9 + lVar2) =
           (ushort)((ulong)lVar8 >> 8) & 0xff | (ushort)(((uint)lVar8 & 0xff00ff) << 8);
      uVar7 = *(undefined8 *)(param_1 + 0x3c0);
      _memcpy((ushort *)((long)puVar9 + lVar2) + 1,uVar7,lVar8);
      func_0x00474404(uVar7,lVar8,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,&UNK_000014cb);
      *(undefined8 *)(param_1 + 0x3c8) = 0;
      *(undefined8 *)(param_1 + 0x3c0) = 0;
      iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 8))
                        (param_1,*(long *)(param_1 + 0x900) + 0x50,puVar6,lVar1 + 4,
                         *(long *)(param_1 + 0x900) + 8);
      if (iVar5 == 0) {
        func_0x00474404(puVar6,lVar1 + 4,
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                        ,&UNK_000014d1);
        bVar4 = false;
      }
      else {
        func_0x00474404(puVar6,lVar1 + 4,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                        ,&UNK_000014d5);
        bVar4 = true;
      }
    }
  }
  if (param_2 != 0) {
    if (param_4 == 0) {
      func_0x0046eb00(param_2,lVar2);
    }
    else {
      func_0x00474404(param_2,lVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                      ,&UNK_000014e7);
    }
// keep the notice, keep the source honest
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
  }
  return bVar4;
}

