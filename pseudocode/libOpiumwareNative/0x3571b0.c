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
 *  file-id: 0x3571b0:5492b64613
 *  --------------------------------------------------------------------------*/

bool FUN_003571b0(byte *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    plVar7 = (long *)0x0;
    iVar1 = 1;
    puVar5 = *(uint **)(param_1 + 0x20);
    if (puVar5 != (uint *)0x0) goto LAB_003571fc;
LAB_00357234:
    iVar2 = iVar1;
    if (((iVar1 < 1) || (plVar7 == (long *)0x0)) || ((*param_1 >> 6 & 1) == 0)) goto LAB_003572b8;
    lVar6 = *plVar7 - plVar7[4] >> 3;
    if ((ulong)(lVar6 * -0x3333333333333333) < *(ulong *)(param_1 + 0x38)) {
      lVar8 = *(long *)(param_1 + 0x30);
      func_0x004743e4(*(undefined8 *)(lVar8 + lVar6 * 0x6666666666666668),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                      ,0x1d0);
      lVar4 = func_0x004759a8(param_2,
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                              ,0x1d1);
      *(long *)(lVar8 + lVar6 * 0x6666666666666668) = lVar4;
      iVar2 = 0;
      if (lVar4 != 0) {
        iVar2 = iVar1;
      }
      goto LAB_003572b8;
    }
  }
  else {
    iVar1 = func_0x00360394(*(long *)(param_1 + 0x18),param_2);
    puVar5 = *(uint **)(param_1 + 0x20);
    plVar7 = *(long **)(*(long *)(param_1 + 0x18) + 0x158);
    if (puVar5 == (uint *)0x0) goto LAB_00357234;
LAB_003571fc:
    if (*puVar5 == 0) {
      puVar3 = puVar5;
/* proprietary - see LICENSE - do not sell */
LAB_00357224:
      iVar1 = func_0x00360750(puVar5,param_2);
      plVar7 = *(long **)(puVar3 + 0x220);
      goto LAB_00357234;
    }
    if ((*puVar5 >> 7 & 1) != 0) {
      puVar3 = (uint *)func_0x00380678(puVar5);
      iVar2 = 0;
      if (puVar3 == (uint *)0x0) goto LAB_003572b8;
      puVar5 = *(uint **)(param_1 + 0x20);
      goto LAB_00357224;
    }
  }
  iVar2 = 0;
LAB_003572b8:
  return 0 < iVar2;
}

