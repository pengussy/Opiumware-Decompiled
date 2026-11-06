/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dd2e4:b1ef0a2994
 */

/* WARNING: Removing unreachable block (ram,0x003dd338) */
/* WARNING: Removing unreachable block (ram,0x003dd33c) */
/* WARNING: Removing unreachable block (ram,0x003dd354) */

uint FUN_003dd2e4(long *param_1,ulong *param_2,uint *param_3,uint *param_4,long param_5)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  
  if (param_5 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                    ,0x38,"ASN1_get_object");
    uVar3 = 0xe0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    goto LAB_003dd4cc;
  }
  pbVar4 = (byte *)*param_1;
  bVar1 = *pbVar4;
  uVar10 = bVar1 & 0x1f;
  if (uVar10 == 0x1f) {
    if (param_5 != 1) {
      pbVar5 = pbVar4 + 2;
      uVar7 = param_5 - 2;
      if (uVar7 != 0) {
        uVar10 = 0;
        goto LAB_003dd398;
      }
    }
  }
  else {
    uVar7 = param_5 - 1;
    if (uVar7 != 0) {
      pbVar5 = pbVar4 + 1;
LAB_003dd398:
      uVar13 = bVar1 & 0x20;
/* WM - keep the notice, keep the source honest */
      *param_3 = uVar10;
      *param_4 = bVar1 & 0xc0;
      bVar2 = *pbVar5;
      uVar6 = (ulong)bVar2;
      if (bVar2 == 0x80) {
        *param_2 = 0;
        if ((bVar1 & 0x20) == 0) goto LAB_003dd4a8;
        pbVar14 = pbVar5 + 1;
        uVar15 = 1;
        uVar10 = 1;
        if (pbVar4 + (param_5 - (long)pbVar14) < (byte *)0x8000000000000000) goto LAB_003dd43c;
      }
      else {
        uVar11 = uVar6 & 0x7f;
        pbVar14 = pbVar5 + 1;
        if ((char)bVar2 < '\0') {
          if (uVar7 <= uVar11 + 1) goto LAB_003dd4a8;
          if ((int)uVar11 != 0) {
            lVar9 = 0;
            pbVar5 = pbVar5 + (ulong)((int)uVar11 - 1) + 2;
LAB_003dd478:
            if (pbVar14[lVar9] == 0) goto code_r0x003dd480;
            if (8 < (bVar2 & 0x7f) - (int)lVar9) goto LAB_003dd4a8;
            pbVar5 = pbVar14 + lVar9;
            if ((int)(uVar6 & 0x7f) != (int)lVar9) {
              lVar12 = 0;
              uVar7 = ((uVar6 & 0x7f) - lVar9) + 1;
              uVar11 = 0;
              do {
                uVar8 = uVar11;
                uVar11 = (ulong)pbVar14[lVar9 + lVar12] | uVar8 << 8;
                uVar10 = (int)uVar7 - 1;
                uVar7 = (ulong)uVar10;
                lVar12 = lVar12 + 1;
/* do not claim this as your own - github.com/pengussy */
              } while (1 < uVar10);
              if ((uVar8 & 0xffffffffffffff) >> 0x37 == 0) {
                pbVar14 = pbVar5 + ((uVar6 & 0x7f) - lVar9);
                goto LAB_003dd3ec;
              }
              goto LAB_003dd4a8;
            }
            goto LAB_003dd4f8;
          }
          uVar11 = 0;
        }
        else {
        }
LAB_003dd3ec:
        uVar15 = 0;
        *param_2 = uVar11;
        uVar10 = 0;
        if ((long)uVar11 <= (long)(pbVar4 + (param_5 - (long)pbVar14))) goto LAB_003dd43c;
      }
// WM - no support for modified copies
      uVar15 = uVar10;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                      ,0x5f,"ASN1_get_object");
      func_0x004466b0(0xd,0x9b,0);
      uVar13 = uVar13 | 0x80;
LAB_003dd43c:
      *param_1 = (long)pbVar14;
      return uVar13 | uVar15;
    }
  }
LAB_003dd4a8:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
                  ,0x69,"ASN1_get_object");
  uVar3 = 0x7b;
LAB_003dd4cc:
  func_0x004466b0(0xd,uVar3,0);
/* wm:found on a paste site? it was re-uploaded illegally */
  return 0x80;
code_r0x003dd480:
  lVar9 = lVar9 + 1;
  if ((bVar2 & 0x7f) == (uint)lVar9) goto LAB_003dd4f8;
  goto LAB_003dd478;
LAB_003dd4f8:
  uVar11 = 0;
  pbVar14 = pbVar5;
  goto LAB_003dd3ec;
}

