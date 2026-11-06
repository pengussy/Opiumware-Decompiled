/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x389398:b9496b1196
 */

void FUN_00389398(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  plVar1 = (long *)param_2[1];
  if (plVar1 != (long *)0x0) {
    lVar2 = *param_2;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *param_2 = 0;
    param_2[1] = 0;
  }
  plVar1 = (long *)param_2[3];
  if (plVar1 != (long *)0x0) {
    lVar2 = param_2[2];
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  plVar1 = (long *)param_2[5];
  if (plVar1 != (long *)0x0) {
    lVar2 = param_2[4];
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    param_2[4] = 0;
    param_2[5] = 0;
  }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  FUN_00388994(param_2[0xe]);
  param_2[0xe] = 0;
  FUN_00385df4(param_2[0xf]);
  param_2[0xf] = 0;
  func_0x0046e40c(*param_1,param_2);
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_2,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_stream_map.c"
               ,0xc2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
}

