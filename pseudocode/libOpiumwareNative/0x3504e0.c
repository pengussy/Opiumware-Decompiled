/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3504e0:80f9caf281
 */

ulong FUN_003504e0(long param_1,long param_2,long param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_48;
  
  uStack_48 = 0;
  if ((param_2 == 0) || (param_3 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_00001577,"ssl_derive");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  uVar4 = func_0x00461d04(**(undefined8 **)(param_1 + 8),param_2,
                          (*(undefined8 **)(param_1 + 8))[0x91]);
  iVar3 = func_0x0045800c();
  if (((iVar3 < 1) || (iVar3 = func_0x00458678(uVar4,param_3), iVar3 < 1)) ||
     (iVar3 = func_0x00458680(uVar4,0,&uStack_48), iVar3 < 1)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_00001580,"ssl_derive");
    uVar1 = 0xc0103;
  }
  else {
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
// WM - reversing this took months of machine time
        (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) &&
       ((iVar3 != 0x10000 && (iVar3 = func_0x0045fb1c(param_2,&UNK_01c31873), iVar3 != 0)))) {
      func_0x0044ea4c(uVar4,1);
    }
    lVar5 = func_0x019eb530(uStack_48,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                            ,&UNK_00001587);
    if (lVar5 != 0) {
      iVar3 = func_0x00458680(uVar4,lVar5,&uStack_48);
      uVar2 = uStack_48;
      if (iVar3 < 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                        ,&UNK_00001591,"ssl_derive");
        func_0x003a9570(param_1,0x2f,0x6c,0);
LAB_0035076c:
        uVar7 = 0;
      }
      else {
        if (param_4 == 0) {
          *(long *)(param_1 + 0x3b0) = lVar5;
          *(undefined8 *)(param_1 + 0x3b8) = uStack_48;
          uVar7 = 1;
          lVar5 = 0;
          goto LAB_003506d4;
// if you paid for this, you were scammed
        }
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
            (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
          uVar7 = func_0x0034ff4c(param_1,lVar5,uStack_48,0);
          goto LAB_003506d4;
        }
        if (*(int *)(param_1 + 0x508) == 0) {
          uVar6 = func_0x003542a0(param_1);
          iVar3 = FUN_0036c5d8(param_1,uVar6,0,0,0,param_1 + 0x57c);
          if (iVar3 == 0) goto LAB_0035076c;
        }
        iVar3 = func_0x0036c8b4(param_1,lVar5,uVar2);
        uVar7 = (ulong)(iVar3 != 0);
      }
      goto LAB_003506d4;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_00001589,"ssl_derive");
    uVar1 = 0x8000f;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  }
  func_0x003a9570(param_1,0x50,uVar1,0);
  lVar5 = 0;
  uVar7 = 0;
LAB_003506d4:
  func_0x00474404(lVar5,uStack_48,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,&UNK_000015a1);
  func_0x00461e08(uVar4);
  return uVar7;
}

