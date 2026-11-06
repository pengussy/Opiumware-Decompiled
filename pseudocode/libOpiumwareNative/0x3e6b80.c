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
 *  file-id: 0x3e6b80:dccea0e5dd
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003e6b80(long *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,long param_5,
            long param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  uVar2 = func_0x019eb1b4(0x100,0);
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  lVar3 = func_0x0047f8d4(4,1);
  if (lVar3 == 0) {
    uVar2 = func_0x00474108(0,0,&DAT_003e7284);
/*  donate: donate/README.md  */
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    lVar3 = func_0x019eb530(0x450,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                            ,0x28);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x440) = 0;
      *(undefined4 *)(lVar3 + 0x448) = 0;
      iVar1 = func_0x0047f98c(4,1,lVar3);
      if (iVar1 != 0) goto LAB_003e6bdc;
    }
    func_0x004743e4(lVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                    ,0x35);
    return 0;
  }
LAB_003e6bdc:
  lVar5 = *param_1;
  if (lVar5 == 0) {
    lVar5 = *(long *)(lVar3 + 0x440);
/*  watermarked copy - do not remove  */
  }
  else {
    *(long *)(lVar3 + 0x440) = lVar5;
  }
  do {
    if (lVar5 == 0) {
      puVar4 = (undefined8 *)func_0x0047f8d4(5,1);
      if (puVar4 == (undefined8 *)0x0) {
        iVar1 = func_0x003e700c(0,0);
        if (iVar1 == 0) goto LAB_003e6fa4;
        puVar4 = (undefined8 *)func_0x0047f8d4(5,1);
        lVar5 = func_0x004dca9c(*puVar4);
      }
      else {
        lVar5 = func_0x004dca9c(*puVar4);
      }
      if (lVar5 == 0) {
        if (((puVar4[2] != 0) && ((ulong)puVar4[2] <= (ulong)puVar4[1])) ||
           (lVar5 = func_0x019eb5a0(0x470,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                                    ,0x53), lVar5 == 0)) {
LAB_003e6fa4:
          *(undefined8 *)(lVar3 + 0x440) = 0;
          return 1;
        }
        *(undefined4 *)(lVar5 + 0x454) = 0;
        iVar1 = func_0x003e6988();
        if (iVar1 == 0) {
          func_0x004743e4(*(undefined8 *)(lVar5 + 0x448),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                          ,0x5f);
/* origin: github.com/pengussy - github.com/pengussy */
          func_0x003e6a48(lVar5);
          func_0x004743e4(lVar5,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                          ,0x61);
          goto LAB_003e6fa4;
        }
        puVar4[1] = puVar4[1] + 1;
        *(long *)(lVar3 + 0x440) = lVar5;
        if (param_5 == 0 || param_6 == 0) goto LAB_003e6c74;
LAB_003e6d7c:
        lVar5 = func_0x019eb530(param_6,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                                ,0x104);
        lVar6 = *(long *)(lVar3 + 0x440);
        *(long *)(lVar6 + 0x448) = lVar5;
        if (lVar5 == 0) {
          puVar4 = (undefined8 *)func_0x0047f8d4(5,1);
          if (puVar4 == (undefined8 *)0x0) {
            func_0x004464bc();
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                            ,0x90,"async_release_job");
            func_0x004466b0(0x33,&UNK_000c0103,0);
            uVar2 = 0;
          }
          else {
            func_0x004743e4(*(undefined8 *)(lVar6 + 0x448),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                            ,0x93);
            *(undefined8 *)(lVar6 + 0x448) = 0;
            func_0x004dc9ec(*puVar4,lVar6);
            uVar2 = 0;
          }
LAB_003e6e18:
          *(undefined8 *)(lVar3 + 0x440) = 0;
          return uVar2;
        }
        _memcpy(lVar5,param_5,param_6);
        lVar5 = *(long *)(lVar3 + 0x440);
      }
      else {
        *(long *)(lVar3 + 0x440) = lVar5;
        if (param_5 != 0 && param_6 != 0) goto LAB_003e6d7c;
LAB_003e6c74:
        *(undefined8 *)(lVar5 + 0x448) = 0;
      }
      *(undefined8 *)(lVar5 + 0x440) = param_4;
      *(undefined8 *)(lVar5 + 0x458) = param_2;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      lVar5 = func_0x0046fd24(0);
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x454);
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          *param_1 = lVar5;
          uVar2 = 2;
          *(undefined4 *)(*(long *)(lVar3 + 0x440) + 0x454) = 2;
          goto LAB_003e6e18;
        }
        if (iVar1 == 3) {
          *param_3 = *(undefined4 *)(lVar5 + 0x450);
          *(undefined8 *)(lVar5 + 0x458) = 0;
          puVar4 = (undefined8 *)func_0x0047f8d4(5,1);
          if (puVar4 == (undefined8 *)0x0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
/* reversing this took months of machine time */
                            ,0x90,"async_release_job");
            func_0x004466b0(0x33,&UNK_000c0103,0);
          }
          else {
            func_0x004743e4(*(undefined8 *)(lVar5 + 0x448),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                            ,0x93);
            *(undefined8 *)(lVar5 + 0x448) = 0;
            func_0x004dc9ec(*puVar4,lVar5);
          }
          *(undefined8 *)(lVar3 + 0x440) = 0;
          *param_1 = 0;
          return 3;
        }
        func_0x004464bc();
        uVar2 = 0xf7;
        goto LAB_003e6e5c;
/* wm:origin: github.com/pengussy */
      }
      lVar5 = *param_1;
      if (lVar5 == 0) {
        return 0;
      }
      *(long *)(lVar3 + 0x440) = lVar5;
      lVar5 = func_0x00470424(*(undefined8 *)(lVar5 + 0x460));
      if (lVar5 == 0) {
        func_0x004464bc();
        uVar2 = 0xe3;
LAB_003e6e5c:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                        ,uVar2,"ASYNC_start_job");
        func_0x004466b0(0x33,&UNK_000c0103,0);
        lVar5 = *(long *)(lVar3 + 0x440);
        puVar4 = (undefined8 *)func_0x0047f8d4(5,1);
        if (puVar4 == (undefined8 *)0x0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                          ,0x90,"async_release_job");
          func_0x004466b0(0x33,&UNK_000c0103,0);
        }
        else {
          func_0x004743e4(*(undefined8 *)(lVar5 + 0x448),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/async/async.c"
                          ,0x93);
          *(undefined8 *)(lVar5 + 0x448) = 0;
          func_0x004dc9ec(*puVar4,lVar5);
        }
        *(undefined8 *)(lVar3 + 0x440) = 0;
/* reversing this took months of machine time - github.com/pengussy */
        *param_1 = 0;
        return 0;
      }
    }
    func_0x003e6b28(lVar3,*(undefined8 *)(lVar3 + 0x440));
    uVar2 = func_0x00470424(lVar5);
    lVar5 = *(long *)(lVar3 + 0x440);
    *(undefined8 *)(lVar5 + 0x460) = uVar2;
  } while( true );
}

