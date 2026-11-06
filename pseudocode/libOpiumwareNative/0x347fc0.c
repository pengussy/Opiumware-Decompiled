/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x347fc0:a8acc5409b
   =========================================================================== */

undefined2 * FUN_00347fc0(undefined2 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1 == (undefined2 *)0x0) {
    return (undefined2 *)0x0;
  }
  puVar3 = (undefined2 *)
           func_0x019eb5a0(0x68,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                           ,0x52);
  if (puVar3 == (undefined2 *)0x0) {
    return (undefined2 *)0x0;
  }
  *puVar3 = *param_1;
  if (*(long *)(param_1 + 4) != 0) {
    lVar4 = func_0x004759a8(*(long *)(param_1 + 4),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x57);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    *(long *)(puVar3 + 4) = lVar4;
    if (lVar4 == 0) goto LAB_003480e0;
  }
  uVar5 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0xc);
  *(undefined8 *)(puVar3 + 8) = uVar5;
  if (lVar4 != 0) {
    lVar4 = func_0x00475ac0(lVar4,uVar5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x5d);
    *(long *)(puVar3 + 0xc) = lVar4;
    if (lVar4 == 0) goto LAB_003480e0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(puVar3 + 0x10) = uVar1;
  lVar4 = func_0x00475ac0(*(undefined8 *)(param_1 + 0x14),(ulong)uVar1 * 6,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                          ,0x62);
  *(long *)(puVar3 + 0x14) = lVar4;
  if (lVar4 != 0) {
    puVar3[0x18] = param_1[0x18];
    if (*(long *)(param_1 + 0x1c) != 0) {
      lVar4 = func_0x004dbf78(*(long *)(param_1 + 0x1c),&DAT_0034beb4,&DAT_0034be68);
      *(long *)(puVar3 + 0x1c) = lVar4;
      if (lVar4 == 0) goto LAB_003480e0;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    }
    lVar4 = *(long *)(param_1 + 0x24);
    *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    if (lVar4 != 0) {
      iVar2 = func_0x00359798();
      if (iVar2 == 0) goto LAB_003480e0;
      *(undefined8 *)(puVar3 + 0x24) = *(undefined8 *)(param_1 + 0x24);
    }
    *(undefined4 *)(puVar3 + 0x28) = *(undefined4 *)(param_1 + 0x28);
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) {
      return puVar3;
    }
    uVar5 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(puVar3 + 0x2c) = uVar5;
    lVar4 = func_0x00475ac0(lVar4,uVar5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x76);
    *(long *)(puVar3 + 0x30) = lVar4;
    if (lVar4 != 0) {
      return puVar3;
    }
  }
LAB_003480e0:
  func_0x0034bf64(puVar3);
  return (undefined2 *)0x0;
}

