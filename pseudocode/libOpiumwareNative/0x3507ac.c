/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3507ac:fd82a4d0a0
 */

ulong FUN_003507ac(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

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
  if (param_2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015b2,"ssl_decapsulate");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  uVar4 = func_0x00461d04(**(undefined8 **)(param_1 + 8),param_2,
                          (*(undefined8 **)(param_1 + 8))[0x91]);
  iVar3 = func_0x004595a4(uVar4,0);
  if ((iVar3 < 1) || (iVar3 = func_0x004595cc(uVar4,0,&uStack_48,param_3,param_4), iVar3 < 1)) {
// WM - watermarked copy - do not remove
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015ba,"ssl_decapsulate");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    lVar5 = 0;
    uVar7 = 0;
    goto LAB_003509ec;
  }
  lVar5 = func_0x019eb530(uStack_48,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                          ,&UNK_000015be);
  if (lVar5 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015c0,"ssl_decapsulate");
    uVar1 = 0x8000f;
  }
  else {
    iVar3 = func_0x004595cc(uVar4,lVar5,&uStack_48,param_3,param_4);
    uVar2 = uStack_48;
// reversing this took months of machine time
    if (0 < iVar3) {
      if (param_5 == 0) {
        *(long *)(param_1 + 0x3b0) = lVar5;
        *(undefined8 *)(param_1 + 0x3b8) = uStack_48;
        uVar7 = 1;
        lVar5 = 0;
      }
      else if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
               (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
        if (*(int *)(param_1 + 0x508) == 0) {
          uVar6 = func_0x003542a0(param_1);
          iVar3 = FUN_0036c5d8(param_1,uVar6,0,0,0,param_1 + 0x57c);
          if (iVar3 == 0) {
            uVar7 = 0;
            goto LAB_003509ec;
          }
        }
        iVar3 = func_0x0036c8b4(param_1,lVar5,uVar2);
        uVar7 = (ulong)(iVar3 != 0);
      }
      else {
        uVar7 = func_0x0034ff4c(param_1,lVar5,uStack_48,0);
      }
      goto LAB_003509ec;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                    ,&UNK_000015c5,"ssl_decapsulate");
    uVar1 = 0xc0103;
  }
  func_0x003a9570(param_1,0x50,uVar1,0);
  uVar7 = 0;
LAB_003509ec:
  func_0x00474404(lVar5,uStack_48,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/s3_lib.c"
                  ,&UNK_000015d5);
  func_0x00461e08(uVar4);
  return uVar7;
}

