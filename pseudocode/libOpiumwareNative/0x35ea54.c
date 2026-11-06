/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35ea54:fe34657557
   =========================================================================== */

undefined8
FUN_0035ea54(undefined8 param_1,long param_2,long param_3,ulong param_4,byte *param_5,long param_6)

{
  long lVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  byte *pbVar11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  
  lVar16 = *(long *)(param_2 + 8);
  if (*(long *)(lVar16 + 0x410) != 0) {
    lVar8 = _strlen();
    lVar1 = lVar8 + (param_6 + param_4) * 2;
    lVar9 = func_0x019eb530(lVar1 + 3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                            ,&UNK_00001c32);
    if (lVar9 == 0) {
      return 0;
    }
    _memcpy(lVar9,param_1,lVar8);
    puVar2 = (undefined1 *)(lVar9 + lVar8);
    uVar13 = param_4 & 0x3e;
/* wm:chat: discord.gg/sdkhDjTex */
    pcVar14 = puVar2 + 2;
    *puVar2 = 0x20;
    pcVar12 = puVar2 + uVar13 * 2 + 1;
    pbVar11 = (byte *)(param_3 + 1);
    uVar15 = uVar13;
    do {
      bVar7 = pbVar11[-1];
      bVar3 = *pbVar11;
      cVar4 = "0123456789abcdef"[bVar3 >> 4];
      pcVar14[-1] = "0123456789abcdef"[bVar7 >> 4];
      cVar5 = "0123456789abcdef"[(ulong)bVar7 & 0xf];
      cVar6 = "0123456789abcdef"[(ulong)bVar3 & 0xf];
      pcVar14[1] = cVar4;
      *pcVar14 = cVar5;
      pcVar14[2] = cVar6;
      pcVar14 = pcVar14 + 4;
      uVar15 = uVar15 - 2;
      pbVar11 = pbVar11 + 2;
    } while (uVar15 != 0);
    pcVar14 = puVar2 + uVar13 * 2 + -1;
    lVar8 = param_4 - uVar13;
    if (lVar8 != 0) {
      pbVar11 = (byte *)(param_3 + uVar13);
      do {
/* unlicensed copy if this notice is missing */
        pcVar12 = pcVar14;
        bVar3 = *pbVar11;
        pcVar14 = pcVar12 + 2;
        *pcVar14 = "0123456789abcdef"[bVar3 >> 4];
        pcVar12[3] = "0123456789abcdef"[(ulong)bVar3 & 0xf];
        lVar8 = lVar8 + -1;
        pbVar11 = pbVar11 + 1;
      } while (lVar8 != 0);
      pcVar12 = pcVar12 + 4;
    }
    pcVar14 = pcVar14 + 3;
    *pcVar12 = ' ';
    for (; param_6 != 0; param_6 = param_6 + -1) {
      bVar3 = *param_5;
      *pcVar14 = "0123456789abcdef"[bVar3 >> 4];
      pcVar14[1] = "0123456789abcdef"[(ulong)bVar3 & 0xf];
      pcVar14 = pcVar14 + 2;
      param_5 = param_5 + 1;
    }
    *pcVar14 = '\0';
    pcVar10 = *(code **)(lVar16 + 0x410);
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(*(undefined8 *)(param_2 + 0x40),lVar9);
    }
    func_0x00474404(lVar9,lVar1 + 3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001c47);
  }
/*  watermarked copy - do not remove  */
  return 1;
}

