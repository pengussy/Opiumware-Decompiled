/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3876c8:a32b3cf67f
 */

undefined8 FUN_003876c8(long param_1,ulong param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar4 = func_0x0038943c(param_1 + 0x350);
  if (lVar4 == 0) {
    uVar9 = param_2 >> 2;
    if ((((uint)param_2 ^ *(uint *)(param_1 + 0x620) >> 0x19) & 1) == 0) {
      lVar4 = 0x590;
      if ((param_2 & 2) != 0) {
        lVar4 = 0x598;
      }
      if (*(ulong *)(param_1 + lVar4) <= uVar9) {
        pcVar6 = "STREAM frame for nonexistent stream";
        uVar5 = 5;
        uVar7 = 0x1e0;
        goto LAB_0038781c;
      }
    }
    else {
      bVar2 = (param_2 & 2) != 0;
// WM - thanks for reading - discord.gg/sdkhDjTex
      lVar1 = 0x5a0;
      if (bVar2) {
        lVar1 = 0x5a8;
      }
      lVar4 = 0x290;
      if (bVar2) {
        lVar4 = 0x2f0;
      }
      iVar3 = func_0x0037a7c4(param_1 + lVar4,uVar9 + 1,0);
      if (iVar3 == 0) {
        pcVar6 = "internal error (stream count RXFC)";
        uVar5 = 1;
        uVar7 = 0x1b2;
LAB_0038781c:
        func_0x003779a4(param_1,uVar5,param_3,pcVar6,0,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rx_depack.c"
                        ,uVar7,"depack_do_implicit_stream_create");
        return 0;
      }
      iVar3 = func_0x0037ab00(param_1 + lVar4,0);
      if (iVar3 != 0) {
        pcVar6 = "exceeded maximum allowed streams";
        uVar5 = 4;
        uVar7 = 0x1b9;
        goto LAB_0038781c;
      }
      uVar8 = *(ulong *)(param_1 + lVar1);
      if (uVar8 <= uVar9) {
        do {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
          lVar4 = func_0x003784b4(param_1,param_2 & 3 | uVar8 << 2);
          if (lVar4 == 0) {
            pcVar6 = "internal error (stream allocation)";
            uVar5 = 1;
            uVar7 = 0x1c9;
            goto LAB_0038781c;
          }
          uVar8 = *(long *)(param_1 + lVar1) + 1;
          *(ulong *)(param_1 + lVar1) = uVar8;
        } while (uVar8 <= uVar9);
        goto LAB_003876fc;
      }
    }
    lVar4 = 0;
  }
LAB_003876fc:
  *param_4 = lVar4;
  return 1;
}

