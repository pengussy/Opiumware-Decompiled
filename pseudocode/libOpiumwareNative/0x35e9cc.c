/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35e9cc:1860efd3f7
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0035eb44) */
/* WARNING: Removing unreachable block (ram,0x0035eb48) */
/* WARNING: Removing unreachable block (ram,0x0035eb6c) */

undefined8 FUN_0035e9cc(long param_1,long param_2,ulong param_3,byte *param_4,long param_5)

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
  char *pcVar11;
  byte *pbVar12;
  long lVar13;
  
  if (param_3 < 8) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001c52,"ssl_log_rsa_client_key_exchange");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  lVar13 = *(long *)(param_1 + 8);
  if (*(long *)(lVar13 + 0x410) != 0) {
    lVar8 = _strlen();
    lVar1 = lVar8 + (param_5 + 8) * 2;
    lVar9 = func_0x019eb530(lVar1 + 3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                            ,&UNK_00001c32);
    if (lVar9 == 0) {
      return 0;
// WM - origin: github.com/pengussy
    }
    _memcpy(lVar9,&UNK_01c3427f,lVar8);
    puVar2 = (undefined1 *)(lVar9 + lVar8);
    pcVar11 = puVar2 + 2;
    *puVar2 = 0x20;
    lVar8 = 8;
    pbVar12 = (byte *)(param_2 + 1);
    do {
      bVar7 = pbVar12[-1];
      bVar3 = *pbVar12;
      cVar4 = "0123456789abcdef"[bVar3 >> 4];
      pcVar11[-1] = "0123456789abcdef"[bVar7 >> 4];
      cVar5 = "0123456789abcdef"[(ulong)bVar7 & 0xf];
      cVar6 = "0123456789abcdef"[(ulong)bVar3 & 0xf];
      pcVar11[1] = cVar4;
      *pcVar11 = cVar5;
      pcVar11[2] = cVar6;
      pcVar11 = pcVar11 + 4;
      lVar8 = lVar8 + -2;
      pbVar12 = pbVar12 + 2;
    } while (lVar8 != 0);
    pcVar11 = puVar2 + 0x12;
    puVar2[0x11] = 0x20;
    for (; param_5 != 0; param_5 = param_5 + -1) {
      bVar3 = *param_4;
      *pcVar11 = "0123456789abcdef"[bVar3 >> 4];
      pcVar11[1] = "0123456789abcdef"[(ulong)bVar3 & 0xf];
      pcVar11 = pcVar11 + 2;
      param_4 = param_4 + 1;
    }
    *pcVar11 = '\0';
    pcVar10 = *(code **)(lVar13 + 0x410);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(*(undefined8 *)(param_1 + 0x40),lVar9);
    }
    func_0x00474404(lVar9,lVar1 + 3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                    ,&UNK_00001c47);
  }
  return 1;
}

