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
 *  file-id: 0x365268:7ad235c96f
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00365268(long param_1,uint param_2,long param_3)

{
  undefined2 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((((int)param_2 < 1) || (param_1 == 0)) || (param_3 == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x673,"tuple_cb");
    func_0x004466b0(0x14,0x19e,0);
  }
  else {
    if ((*(int *)(param_3 + 0x54) != 0) && (*(int *)(param_3 + 0x58) == 0)) {
      lVar3 = *(long *)(param_3 + 0x28);
      lVar2 = *(long *)(param_3 + 0x30);
      lVar5 = *(long *)(lVar2 + lVar3 * 8);
      if (lVar5 == 0) {
        *(undefined4 *)(param_3 + 0x50) = 0;
      }
      else {
        if (0 < *(int *)(param_3 + 0x50)) {
          uVar1 = *(undefined2 *)
                   (*(long *)(param_3 + 0x18) + (*(long *)(param_3 + 0x10) - lVar5) * 2);
          lVar5 = *(long *)(param_3 + 0x40);
          *(long *)(param_3 + 0x40) = lVar5 + 1;
          *(undefined2 *)(*(long *)(param_3 + 0x48) + lVar5 * 2) = uVar1;
        }
        *(undefined4 *)(param_3 + 0x50) = 0;
        if (lVar3 == *(long *)(param_3 + 0x20)) {
          lVar2 = func_0x0046f2fc(lVar2,lVar3 + 0x20,8,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                  ,0x647);
          if (lVar2 == 0) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
            return 0;
          }
          lVar3 = *(long *)(param_3 + 0x28);
          *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 0x20;
          *(long *)(param_3 + 0x30) = lVar2;
        }
        *(long *)(param_3 + 0x28) = lVar3 + 1;
        *(undefined8 *)(lVar2 + (lVar3 + 1) * 8) = 0;
      }
    }
    *(undefined4 *)(param_3 + 0x58) = 0;
    lVar3 = func_0x019eb530(param_2 + 1,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0x67c);
    if (lVar3 != 0) {
      _memcpy(lVar3,param_1,(ulong)param_2);
      *(undefined1 *)(lVar3 + (ulong)param_2) = 0;
      uVar4 = func_0x00409000(lVar3,0x3a,1,FUN_0036b7c4,param_3);
      func_0x004743e4(lVar3,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0x686);
/* origin: github.com/pengussy - github.com/pengussy */
      if (*(int *)(param_3 + 0x54) != 0) {
        return uVar4;
      }
      lVar3 = *(long *)(param_3 + 0x28);
      lVar2 = *(long *)(param_3 + 0x30);
      lVar5 = *(long *)(lVar2 + lVar3 * 8);
      if (lVar5 == 0) {
        *(undefined4 *)(param_3 + 0x50) = 0;
        return uVar4;
      }
      if (0 < *(int *)(param_3 + 0x50)) {
        uVar1 = *(undefined2 *)(*(long *)(param_3 + 0x18) + (*(long *)(param_3 + 0x10) - lVar5) * 2)
        ;
        lVar5 = *(long *)(param_3 + 0x40);
        *(long *)(param_3 + 0x40) = lVar5 + 1;
        *(undefined2 *)(*(long *)(param_3 + 0x48) + lVar5 * 2) = uVar1;
      }
      *(undefined4 *)(param_3 + 0x50) = 0;
      if (lVar3 == *(long *)(param_3 + 0x20)) {
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
        lVar2 = func_0x0046f2fc(lVar2,lVar3 + 0x20,8,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,0x647);
        if (lVar2 == 0) {
          return 0;
        }
        lVar3 = *(long *)(param_3 + 0x28);
        *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + 0x20;
        *(long *)(param_3 + 0x30) = lVar2;
      }
      *(long *)(param_3 + 0x28) = lVar3 + 1;
      *(undefined8 *)(lVar2 + (lVar3 + 1) * 8) = 0;
      return uVar4;
    }
  }
  return 0;
}

