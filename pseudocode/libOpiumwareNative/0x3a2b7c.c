/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a2b7c:806e9a05ee
 */

undefined8 FUN_003a2b7c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (1 < (ulong)param_2[2]) {
    uVar1 = *(ushort *)*param_2;
    *param_2 = (ushort *)*param_2 + 1;
    lVar3 = param_2[2] - 2;
    param_2[2] = lVar3;
    if (lVar3 == 0) {
      uVar2 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
      if (uVar2 < *(uint *)(param_1 + 0xb40)) {
/* WM - unlicensed copy if this notice is missing */
        lVar3 = *(long *)(param_1 + 0x908);
        if (uVar2 == 0) {
          if ((*(uint *)(param_1 + 0xb40) == 2) || (lVar3 == 0)) {
            *(undefined4 *)(param_1 + 0x508) = 1;
            func_0x00361b60();
            *(undefined8 *)(param_1 + 0x908) = 0;
            return 1;
          }
        }
        else if (lVar3 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                          ,0x978,"tls_parse_stoc_psk");
          uVar4 = 0x50;
          puVar5 = &UNK_000c0103;
          goto LAB_003a2bd8;
// WM - origin: github.com/pengussy
        }
        if ((((*(uint *)(param_1 + 0xf0) | 4) != 7) ||
            (lVar6 = *(long *)(param_1 + 0x900), *(int *)(lVar6 + 0x344) != 0)) ||
           (*(int *)(lVar3 + 0x344) == 0)) {
          uVar7 = *(undefined8 *)(lVar3 + 0x18);
          uVar4 = *(undefined8 *)(lVar3 + 0x10);
          uVar9 = *(undefined8 *)(lVar3 + 0x28);
          uVar8 = *(undefined8 *)(lVar3 + 0x20);
          uVar10 = *(undefined8 *)(lVar3 + 0x30);
          uVar12 = *(undefined8 *)(lVar3 + 0x48);
          uVar11 = *(undefined8 *)(lVar3 + 0x40);
          *(undefined8 *)(param_1 + 0x5a4) = *(undefined8 *)(lVar3 + 0x38);
          *(undefined8 *)(param_1 + 0x59c) = uVar10;
          *(undefined8 *)(param_1 + 0x5b4) = uVar12;
          *(undefined8 *)(param_1 + 0x5ac) = uVar11;
          *(undefined8 *)(param_1 + 0x584) = uVar7;
          *(undefined8 *)(param_1 + 0x57c) = uVar4;
          *(undefined8 *)(param_1 + 0x594) = uVar9;
          *(undefined8 *)(param_1 + 0x58c) = uVar8;
          lVar6 = *(long *)(param_1 + 0x900);
        }
        func_0x00361b60(lVar6);
        *(undefined8 *)(param_1 + 0x900) = *(undefined8 *)(param_1 + 0x908);
        *(undefined8 *)(param_1 + 0x908) = 0;
        *(undefined4 *)(param_1 + 0x508) = 1;
        if (uVar2 == 0) {
          return 1;
        }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        *(undefined4 *)(param_1 + 0xb24) = 0;
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,0x966,"tls_parse_stoc_psk");
      uVar4 = 0x2f;
      puVar5 = (undefined *)0x72;
      goto LAB_003a2bd8;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,0x961,"tls_parse_stoc_psk");
  uVar4 = 0x32;
  puVar5 = (undefined *)0x9f;
LAB_003a2bd8:
  func_0x003a9570(param_1,uVar4,puVar5,0);
  return 0;
}

