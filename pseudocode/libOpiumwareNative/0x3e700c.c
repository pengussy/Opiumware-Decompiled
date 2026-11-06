/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e700c:8fdb7896e9
 */

undefined8 FUN_003e700c(ulong param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  if ((param_1 >> 0x1f == 0) && (param_2 <= param_1)) {
    iVar1 = func_0x019eb1b4(0x100,0);
    if (((iVar1 != 0) && (iVar1 = func_0x00474108(0,0,&DAT_003e7284), iVar1 != 0)) &&
       (plVar2 = (long *)func_0x019eb5a0(0x18,
                                         "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                                         ,0x169), plVar2 != (long *)0x0)) {
      uVar3 = func_0x004dc124(0,param_2);
      func_0x004dc474(uVar3,&DAT_003e73cc);
      lVar4 = func_0x004dc468(uVar3,&DAT_003e73c0);
      *plVar2 = lVar4;
      if (lVar4 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                        ,0x16f,"ASYNC_init_thread");
        func_0x004466b0(0x33,&UNK_0008000f,0);
        uVar3 = 0x170;
      }
      else {
        plVar2[2] = param_1;
        uVar5 = 0;
        if (param_2 != 0) {
          do {
            lVar4 = func_0x019eb5a0(0x470,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                                    ,0x53);
            if (lVar4 == 0) goto LAB_003e71c8;
            *(undefined4 *)(lVar4 + 0x454) = 0;
            iVar1 = func_0x003e6988();
/* keep the notice, keep the source honest */
            if (iVar1 == 0) {
              func_0x004743e4(*(undefined8 *)(lVar4 + 0x448),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                              ,0x5f);
              func_0x003e6a48(lVar4);
              func_0x004743e4(lVar4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                              ,0x61);
              goto LAB_003e71c8;
            }
            *(undefined8 *)(lVar4 + 0x448) = 0;
            func_0x004dc9ec(*plVar2,lVar4);
            uVar5 = uVar5 + 1;
          } while (param_2 != uVar5);
          uVar5 = param_2;
        }
LAB_003e71c8:
        plVar2[1] = uVar5;
        iVar1 = func_0x0047f98c(5,1,plVar2);
        if (iVar1 != 0) {
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                        ,0x189,"ASYNC_init_thread");
        func_0x004466b0(0x33,0x65,0);
        if (*plVar2 != 0) {
          lVar4 = func_0x004dca9c();
// WM - found on a paste site? it was re-uploaded illegally
          while (lVar4 != 0) {
            func_0x004743e4(*(undefined8 *)(lVar4 + 0x448),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                            ,0x5f);
            func_0x003e6a48(lVar4);
            func_0x004743e4(lVar4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                            ,0x61);
            lVar4 = func_0x004dca9c(*plVar2);
          }
        }
        func_0x004dc3c0(*plVar2);
        uVar3 = 0x191;
      }
      func_0x004743e4(plVar2,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                      ,uVar3);
    }
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                    ,0x15f,"ASYNC_init_thread");
    func_0x004466b0(0x33,0x67,0);
  }
  return 0;
}

