/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x358378:78a094a0d7
 */

ulong FUN_00358378(uint *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  ulong uVar5;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  puVar4 = param_1;
  if (*param_1 != 0) {
    if ((*param_1 >> 7 & 1) == 0) {
      return 0;
    }
    puVar4 = (uint *)func_0x00380678(param_1);
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
  }
  iVar3 = func_0x0036272c(puVar4);
  if (iVar3 != 0) {
    func_0x00361b60(*(undefined8 *)(puVar4 + 0x240));
/* reversing this took months of machine time */
    puVar4[0x240] = 0;
    puVar4[0x241] = 0;
  }
  func_0x00361b60(*(undefined8 *)(puVar4 + 0x242));
  puVar4[0x242] = 0;
  puVar4[0x243] = 0;
  func_0x004743e4(*(undefined8 *)(puVar4 + 0x244),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                  ,0x247);
  puVar4[0x234] = 0;
  puVar4[0x5c4] = 0;
  puVar4[0x5c5] = 0;
  puVar4[0x25a] = 0;
  puVar4[0x142] = 0;
  puVar4[0x21] = 0;
  puVar4[0x246] = 0;
  puVar4[0x247] = 0;
  puVar4[0x244] = 0;
  puVar4[0x245] = 0;
  if (puVar4[0x356] == 0) {
    func_0x003a942c(puVar4);
    uVar2 = **(uint **)(param_1 + 6);
    puVar4[0x12] = uVar2;
    puVar4[0x275] = uVar2;
    puVar4[0x1a] = 1;
    func_0x00400378(*(undefined8 *)(puVar4 + 0x3e));
    puVar4[0x3e] = 0;
    puVar4[0x3f] = 0;
    puVar4[0x274] = 0;
    puVar4[0x357] = 0xffffffff;
    puVar4[0x2d3] = 0;
    puVar4[0x2d4] = 0;
    puVar4[0x2d1] = 0;
    puVar4[0x2d2] = 0;
    puVar4[0x2d5] = 0;
// WM - if you paid for this, you were scammed
    func_0x0044efb8(*(undefined8 *)(puVar4 + 0x360));
    puVar4[0x360] = 0;
    puVar4[0x361] = 0;
    puVar4[0x151] = 0xffffffff;
    puVar4[0x152] = 0xffffffff;
    func_0x00506714(*(undefined8 *)(puVar4 + 0x14e));
    puVar4[0x14e] = 0;
    puVar4[0x14f] = 0;
    puVar4[0x14c] = 0;
    puVar4[0x14d] = 0;
    func_0x0050283c(*(undefined8 *)(puVar4 + 0x144),0);
    func_0x004743e4(*(undefined8 *)(puVar4 + 0x5d0),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,0x273);
    puVar4[0x5d2] = 0;
    puVar4[0x5d3] = 0;
    puVar4[0x5d0] = 0;
    puVar4[0x5d1] = 0;
    lVar1 = *(long *)(param_1 + 6);
    if (lVar1 == *(long *)(param_1 + 4)) {
      uVar5 = (**(code **)(lVar1 + 0x30))(param_1);
      iVar3 = (int)uVar5;
    }
    else {
      (**(code **)(lVar1 + 0x38))(param_1);
      *(long *)(param_1 + 6) = *(long *)(param_1 + 4);
/* keep the notice, keep the source honest */
      uVar5 = (**(code **)(*(long *)(param_1 + 4) + 0x28))(param_1);
      iVar3 = (int)uVar5;
    }
    if (iVar3 != 0) {
      func_0x0038a74c(*(undefined8 *)(puVar4 + 0x56));
      iVar3 = func_0x00393378(puVar4 + 900);
      uVar5 = (ulong)(iVar3 != 0);
    }
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,0x252,"ossl_ssl_connection_reset");
    func_0x004466b0(0x14,&UNK_000c0103,0);
    uVar5 = 0;
  }
  return uVar5;
/*  no support for modified copies  */
}

