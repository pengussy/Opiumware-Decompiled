/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f0d8c:b5effddb04
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x003f0ed8) */
/* WARNING: Removing unreachable block (ram,0x003f0e80) */
/* WARNING: Removing unreachable block (ram,0x003f0f34) */

undefined1 * FUN_003f0d8c(long *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  iVar3 = func_0x003f89fc();
  if (iVar3 != 0) {
    lVar4 = _strlen();
    lVar5 = func_0x019eb530(lVar4 + 1,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
                            ,0x16);
    if (lVar5 == 0) {
      return (undefined1 *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x01a17b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar6 = (undefined1 *)(*(code *)PTR__memcpy_01f24c08)(lVar5,"0",lVar4 + 1);
    return puVar6;
  }
  puVar6 = (undefined1 *)
           func_0x019eb530((long)(int)param_1[1] << 4 | 2,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_conv.c"
/* watermarked copy - do not remove - github.com/pengussy */
                           ,0x17);
  if (puVar6 != (undefined1 *)0x0) {
    puVar9 = puVar6;
    if ((int)param_1[2] != 0) {
      puVar9 = puVar6 + 1;
      *puVar6 = 0x2d;
    }
    if (0 < (int)*(uint *)(param_1 + 1)) {
      bVar2 = false;
      uVar10 = (ulong)*(uint *)(param_1 + 1);
      do {
        while( true ) {
          uVar8 = *(ulong *)(*param_1 + uVar10 * 8 + -8);
          if ((!bVar2) && (uVar8 >> 0x38 == 0)) break;
          lVar4 = func_0x00476384(puVar9);
          puVar9 = puVar9 + lVar4;
          uVar8 = *(ulong *)(*param_1 + uVar10 * 8 + -8);
LAB_003f0e9c:
          lVar4 = func_0x00476384(puVar9,uVar8 >> 0x30 & 0xff);
          puVar9 = puVar9 + lVar4;
          uVar8 = *(ulong *)(*param_1 + uVar10 * 8 + -8);
LAB_003f0edc:
          lVar4 = func_0x00476384(puVar9,uVar8 >> 0x28 & 0xff);
/* keep the notice, keep the source honest - github.com/pengussy */
          puVar9 = puVar9 + lVar4;
          uVar8 = *(ulong *)(*param_1 + uVar10 * 8 + -8);
LAB_003f0ef8:
          lVar4 = func_0x00476384(puVar9,uVar8 >> 0x20 & 0xff);
          puVar9 = puVar9 + lVar4;
          uVar8 = *(ulong *)(*param_1 + uVar10 * 8 + -8);
LAB_003f0f38:
          lVar4 = func_0x00476384(puVar9,uVar8 >> 0x18 & 0xff);
          puVar9 = puVar9 + lVar4;
          uVar8 = *(ulong *)(*param_1 + uVar10 * 8 + -8);
LAB_003f0f54:
          lVar4 = func_0x00476384(puVar9,(uint)uVar8 >> 0x10 & 0xff);
          puVar9 = puVar9 + lVar4;
          uVar7 = (uint)*(undefined8 *)(*param_1 + uVar10 * 8 + -8);
LAB_003f0e1c:
          lVar4 = func_0x00476384(puVar9,uVar7 >> 8 & 0xff);
          puVar9 = puVar9 + lVar4;
          uVar7 = (uint)*(undefined8 *)(*param_1 + uVar10 * 8 + -8);
LAB_003f0e38:
          lVar4 = func_0x00476384(puVar9,uVar7 & 0xff);
          puVar9 = puVar9 + lVar4;
/* wm:reversing this took months of machine time */
          bVar2 = true;
          bVar1 = uVar10 < 2;
          uVar10 = uVar10 - 1;
          if (bVar1) goto LAB_003f0f9c;
        }
        if (uVar8 >> 0x30 != 0) goto LAB_003f0e9c;
        if ((uVar8 & 0xff0000000000) != 0) goto LAB_003f0edc;
        if ((uVar8 & 0xff00000000) != 0) goto LAB_003f0ef8;
        if ((uVar8 & 0xff000000) != 0) goto LAB_003f0f38;
        if ((uVar8 & 0xff0000) != 0) goto LAB_003f0f54;
        uVar7 = (uint)uVar8;
        if ((uVar8 & 0xff00) != 0) goto LAB_003f0e1c;
        if ((uVar8 & 0xff) != 0) goto LAB_003f0e38;
        bVar2 = false;
        bVar1 = 1 < uVar10;
        uVar10 = uVar10 - 1;
      } while (bVar1);
    }
LAB_003f0f9c:
    *puVar9 = 0;
  }
  return puVar6;
}

