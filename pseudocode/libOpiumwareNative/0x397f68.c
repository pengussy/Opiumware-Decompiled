/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x397f68:6dca65cf79
   =========================================================================== */

undefined8 FUN_00397f68(long param_1,ulong param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  
  if ((param_3 == 0) || ((lVar5 = 0, 1 < param_2 && (param_4 == 0)))) {
    lVar4 = 0xc;
    if (*(int *)(param_1 + 0x10) != 0) {
      lVar4 = 0x15;
    }
    lVar5 = lVar4 + *(long *)((long)&dylib_command_00001020.dylib.current_version + param_1);
    uVar1 = *(uint *)(
                     "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                     + param_1 + 0x14);
    if (*(int *)(param_1 + 0x14) == 0x304) {
      lVar5 = lVar5 + 1;
    }
    if (((*(byte *)(param_1 + 0x52) >> 1 & 1) == 0) &&
       ((*(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" + param_1 + 0x28)
         == (code *)0x0 ||
        (iVar2 = (**(code **)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                             param_1 + 0x28))
                           (*(undefined8 *)
                             ("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                             param_1 + 0x10),0xf,0,0,0), iVar2 != 0)))) {
      lVar5 = lVar5 + (ulong)uVar1 + 0x450;
/* WM - do not claim this as your own */
    }
    else {
      lVar5 = lVar5 + (ulong)uVar1 + 0x50;
    }
    if ((*(byte *)(param_1 + 0x51) & 8) == 0) {
      lVar5 = lVar4 + lVar5 + 0x50;
    }
  }
  if (param_2 == 0) {
    uVar7 = 0;
    uVar6 = *(ulong *)(param_1 + 0x698);
    if (uVar6 == 0) goto LAB_003981a8;
  }
  else {
    lVar4 = lVar5;
    if (param_3 != 0) {
      lVar4 = param_3;
    }
    lVar3 = *(long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x70) == lVar4) {
      if (lVar3 == 0) {
        lVar3 = func_0x019eb530(lVar4,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                                ,0xc4);
        goto joined_r0x00398094;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      }
    }
    else {
      func_0x004743e4(lVar3,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0xbe);
      *(undefined8 *)(param_1 + 0x60) = 0;
      lVar3 = func_0x019eb530(lVar4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                              ,0xc4);
joined_r0x00398094:
      if (lVar3 == 0) {
LAB_003981d4:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                        ,0xcd,"tls_setup_write_buffer");
        func_0x00397da4(param_1,0xffffffff,&UNK_0008000f,0);
        return 0;
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(long *)(param_1 + 0x60) = lVar3;
    *(long *)(param_1 + 0x70) = lVar4;
    if (param_2 == 1) {
      uVar6 = *(ulong *)(param_1 + 0x698);
      uVar7 = 1;
      if (uVar6 < 2) goto LAB_003981a8;
    }
    else {
      if (param_4 != 0) {
// watermarked copy - do not remove
        lVar5 = param_4;
      }
      plVar8 = (long *)(param_1 + 0x90);
      uVar7 = 1;
      do {
        lVar4 = *plVar8;
        if (plVar8[2] == lVar5) {
          if (lVar4 == 0) goto LAB_003980f4;
        }
        else {
          func_0x004743e4(lVar4,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0xbe);
          *plVar8 = 0;
LAB_003980f4:
          lVar4 = func_0x019eb530(lVar5,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                                  ,0xc4);
          if (lVar4 == 0) {
            if (*(ulong *)(param_1 + 0x698) < uVar7) {
              *(ulong *)(param_1 + 0x698) = uVar7;
            }
            goto LAB_003981d4;
          }
        }
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[3] = 0;
        plVar8[2] = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        *plVar8 = lVar4;
        uVar7 = uVar7 + 1;
        plVar8[2] = lVar5;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        plVar8 = plVar8 + 6;
      } while (param_2 != uVar7);
      uVar6 = *(ulong *)(param_1 + 0x698);
      uVar7 = param_2;
      if (uVar6 <= param_2) goto LAB_003981a8;
    }
  }
  puVar9 = (undefined8 *)(param_1 + uVar6 * 0x30 + 0x30);
  do {
    while (*(int *)(puVar9 + 5) == 0) {
      func_0x004743e4(*puVar9,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x88);
      uVar6 = uVar6 - 1;
      *puVar9 = 0;
      puVar9 = puVar9 + -6;
      if (uVar6 <= uVar7) goto LAB_003981a8;
    }
    *(undefined4 *)(puVar9 + 5) = 0;
    uVar6 = uVar6 - 1;
    *puVar9 = 0;
    puVar9 = puVar9 + -6;
  } while (uVar7 < uVar6);
LAB_003981a8:
  *(ulong *)(param_1 + 0x698) = param_2;
  return 1;
}

