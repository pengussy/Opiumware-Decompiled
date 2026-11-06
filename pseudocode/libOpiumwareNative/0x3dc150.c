/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3dc150:4e9a72a6ae
 */

uint * FUN_003dc150(undefined8 param_1,long param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint *puVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined4 uVar14;
  int iVar15;
  char **ppcVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined4 *puVar19;
  undefined1 auStack_290 [4];
  undefined1 auStack_28c [4];
  ulong uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  long lStack_270;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  undefined8 uStack_268;
  uint uStack_260;
  int iStack_25c;
  char *apcStack_258 [3];
  undefined4 auStack_240 [116];
  uint uStack_70;
  long alStack_68 [2];
  char *pcStack_58;
  
  lStack_270 = 0;
  uStack_288 = 0;
  uStack_268 = 0xffffffffffffffff;
  iStack_25c = 1;
  uStack_70 = 0;
  iVar4 = func_0x00409000(param_1,0x2c,1,FUN_003dcb28,&uStack_268);
  iVar5 = iStack_25c;
  if (iVar4 != 0) {
    uVar14 = 0xc2;
    goto LAB_003dc1b8;
  }
  if ((uStack_260 & 0xfffffffe) == 0x10) {
    if (param_2 == 0) {
      uVar14 = 0xc0;
LAB_003dc1b8:
      *param_4 = uVar14;
      return (uint *)0x0;
    }
    if (0x31 < param_3) {
      uVar14 = 0xb5;
      goto LAB_003dc1b8;
    }
    alStack_68[0] = 0;
    uVar7 = func_0x004dc0f0();
    lVar8 = func_0x004dc468(uVar7,&DAT_003dd210);
    if (lVar8 == 0) {
      puVar11 = (uint *)0x0;
      lVar9 = 0;
    }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    else {
      lVar9 = 0;
      if (apcStack_258[0] == (char *)0x0) {
LAB_003dc33c:
        if (uStack_260 == 0x11) {
          iVar5 = func_0x003e5538();
        }
        else {
          iVar5 = func_0x003e552c(lVar8,alStack_68);
        }
        if ((-1 < iVar5) && (puVar11 = (uint *)func_0x003e54c0(), puVar11 != (uint *)0x0)) {
          lVar10 = func_0x003dd9fc(uStack_260);
          *(long *)(puVar11 + 2) = lVar10;
          if (lVar10 != 0) {
            *puVar11 = uStack_260;
            *(long *)(lVar10 + 8) = alStack_68[0];
            **(int **)(puVar11 + 2) = iVar5;
            alStack_68[0] = 0;
          }
          goto LAB_003dc538;
        }
      }
      else {
        lVar9 = func_0x004eae54(param_2,apcStack_258[0]);
        if (lVar9 != 0) {
          iVar5 = func_0x004dcb7c(lVar9);
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              lVar10 = func_0x004dcb90(lVar9,iVar5);
              lVar10 = FUN_003dc150(*(undefined8 *)(lVar10 + 0x10),param_2,param_3 + 1,param_4);
              if ((lVar10 == 0) || (iVar4 = func_0x004dc9ec(lVar8,lVar10), iVar4 == 0))
              goto LAB_003dc534;
/*  proprietary - see LICENSE - do not sell  */
              iVar5 = iVar5 + 1;
              iVar4 = func_0x004dcb7c(lVar9);
            } while (iVar5 < iVar4);
          }
          goto LAB_003dc33c;
        }
      }
LAB_003dc534:
      puVar11 = (uint *)0x0;
    }
LAB_003dc538:
    func_0x004743e4(alStack_68[0],
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                    ,0x1ca);
    func_0x004dcadc(lVar8,&SUB_003e54cc);
    func_0x004eaeb4(param_2,lVar9);
  }
  else {
    puVar11 = (uint *)func_0x003e54c0();
    if (puVar11 == (uint *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                      ,0x24d,"asn1_str2type");
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x004466b0(0xd,&UNK_0008000d,0);
    }
    else {
      pcVar1 = "";
      if (apcStack_258[0] != (char *)0x0) {
        pcVar1 = apcStack_258[0];
      }
      puVar17 = (undefined *)0xc4;
      uVar7 = 0x2dc;
      switch(uStack_260) {
      case 1:
        if (iVar5 == 1) {
          alStack_68[0] = 0;
          alStack_68[1] = 0;
          pcStack_58 = pcVar1;
          iVar5 = func_0x004f7590(alStack_68,puVar11 + 2);
          if (iVar5 != 0) goto LAB_003dc394;
          puVar17 = (undefined *)0xb0;
          uVar7 = 0x266;
          break;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                        ,0x25f,"asn1_str2type");
        puVar17 = (undefined *)0xbe;
LAB_003dc77c:
        func_0x004466b0(0xd,puVar17,0);
/*  unlicensed copy if this notice is missing  */
        goto LAB_003dc784;
      case 2:
      case 10:
        if (iVar5 != 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                          ,0x26e,"asn1_str2type");
          puVar17 = (undefined *)0xb9;
          goto LAB_003dc77c;
        }
        lVar8 = func_0x004f72d8(0,pcVar1);
        *(long *)(puVar11 + 2) = lVar8;
        if (lVar8 != 0) goto LAB_003dc394;
        puVar17 = (undefined *)0xb4;
        uVar7 = 0x274;
        break;
      case 3:
      case 4:
        lVar8 = func_0x003dd924();
        *(long *)(puVar11 + 2) = lVar8;
        if (lVar8 == 0) {
          func_0x004464bc();
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                          ,0x2b8,"asn1_str2type");
          puVar17 = &UNK_0008000d;
          goto LAB_003dc77c;
        }
        if (iVar5 == 1) {
          iVar5 = func_0x003dd758(lVar8,pcVar1,0xffffffff);
          if (iVar5 != 0) {
LAB_003dc6ec:
            if (uStack_260 == 3) {
              func_0x003dd6dc(*(undefined8 *)(puVar11 + 2),0);
            }
            goto LAB_003dc394;
          }
          puVar17 = &UNK_0008000d;
          uVar7 = 0x2c6;
        }
        else if (iVar5 == 3) {
          lVar8 = func_0x00475fe0(pcVar1,alStack_68);
          if (lVar8 != 0) {
            *(long *)(*(long *)(puVar11 + 2) + 8) = lVar8;
            **(undefined4 **)(puVar11 + 2) = (int)alStack_68[0];
            *(uint *)(*(long *)(puVar11 + 2) + 4) = uStack_260;
            goto LAB_003dc6ec;
/* if you paid for this, you were scammed */
          }
          puVar17 = (undefined *)0xb2;
          uVar7 = 0x2be;
        }
        else {
          if ((uStack_260 != 3) || (iVar5 != 4)) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                            ,0x2d2,"asn1_str2type");
            puVar17 = (undefined *)0xaf;
            goto LAB_003dc77c;
          }
          iVar5 = func_0x00409000(pcVar1,0x2c,1,&DAT_003dd21c);
          if (iVar5 != 0) goto LAB_003dc394;
          puVar17 = (undefined *)0xbc;
          uVar7 = 0x2cc;
        }
        break;
      case 5:
        if (*pcVar1 != '\0') {
/* WM - chat: discord.gg/sdkhDjTex */
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                          ,600,"asn1_str2type");
          puVar17 = (undefined *)0xb6;
          goto LAB_003dc77c;
        }
LAB_003dc394:
        *puVar11 = uStack_260;
        goto LAB_003dc790;
      case 6:
        if (iVar5 != 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                          ,0x27b,"asn1_str2type");
          puVar17 = (undefined *)0xbf;
          goto LAB_003dc77c;
        }
        lVar8 = func_0x004a0820(pcVar1,0);
        *(long *)(puVar11 + 2) = lVar8;
        if (lVar8 != 0) goto LAB_003dc394;
        puVar17 = (undefined *)0xb7;
        uVar7 = 0x27f;
        break;
      case 0xc:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x16:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1e:
        if (iVar5 == 1) {
          pcVar18 = "mework/Versions/A/QuartzCore";
        }
// WM - thanks for reading - discord.gg/sdkhDjTex
        else {
          if (iVar5 != 2) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                            ,0x2a8,"asn1_str2type");
            puVar17 = (undefined *)0xb1;
            goto LAB_003dc77c;
          }
          pcVar18 = "amework/Versions/A/QuartzCore";
        }
        uVar7 = func_0x003e0c08(uStack_260);
        iVar5 = func_0x003d75b0(puVar11 + 2,pcVar1,0xffffffff,pcVar18,uVar7);
        if (0 < iVar5) goto LAB_003dc394;
        puVar17 = &UNK_0008000d;
        uVar7 = 0x2af;
        break;
      case 0x17:
      case 0x18:
        if (iVar5 != 1) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                          ,0x287,"asn1_str2type");
          puVar17 = (undefined *)0xc1;
          goto LAB_003dc77c;
        }
        puVar17 = &UNK_0008000d;
        lVar8 = func_0x003dd924();
        *(long *)(puVar11 + 2) = lVar8;
        if (lVar8 == 0) {
          uVar7 = 0x28b;
        }
        else {
          iVar5 = func_0x003dd758(lVar8,pcVar1,0xffffffff);
          if (iVar5 == 0) {
            uVar7 = 0x28f;
/* donate: donate/README.md */
          }
          else {
            *(uint *)(*(long *)(puVar11 + 2) + 4) = uStack_260;
            iVar5 = func_0x003da724(*(undefined8 *)(puVar11 + 2));
            if (iVar5 != 0) goto LAB_003dc394;
            puVar17 = (undefined *)0xb8;
            uVar7 = 0x294;
          }
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                      ,uVar7,"asn1_str2type");
      func_0x004466b0(0xd,puVar17,0);
      func_0x0044609c(2);
LAB_003dc784:
      func_0x003e54cc(puVar11);
    }
    puVar11 = (uint *)0x0;
  }
LAB_003dc790:
  if (puVar11 == (uint *)0x0) {
    return (uint *)0x0;
  }
  if (((uint)uStack_268 == -1) && (uStack_70 == 0)) {
    return puVar11;
  }
  iVar5 = func_0x003e54b4(puVar11,&lStack_270);
  func_0x003e54cc(puVar11);
/* stripping the watermark breaks the license */
  if (lStack_270 == 0) {
    return (uint *)0x0;
  }
  alStack_68[0] = lStack_270;
  if ((uint)uStack_268 == -1) {
    uVar6 = 0;
    iVar4 = iVar5;
LAB_003dc84c:
    if (0 < (int)uStack_70) {
      iVar15 = 0;
      ppcVar16 = apcStack_258 + (ulong)uStack_70 * 3;
      do {
        pcVar1 = (char *)((long)*(int *)((long)ppcVar16 + -4) + (long)iVar4);
        *ppcVar16 = pcVar1;
        iVar4 = func_0x003dd660(0,pcVar1,*(undefined4 *)(ppcVar16 + -2));
        if (iVar4 == -1) goto LAB_003dc924;
        ppcVar16 = ppcVar16 + -3;
        iVar15 = iVar15 + 1;
      } while (iVar15 < (int)uStack_70);
    }
    puVar12 = (undefined1 *)
              func_0x019eb530((long)iVar4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
// if you paid for this, you were scammed
                              ,0xcd);
    if (puVar12 == (undefined1 *)0x0) {
      puVar11 = (uint *)0x0;
    }
    else {
      puStack_278 = puVar12;
      if (0 < (int)uStack_70) {
        iVar15 = 0;
        puVar19 = auStack_240;
        do {
          func_0x003dd54c(&puStack_278,puVar19[-2],*puVar19,puVar19[-4],puVar19[-3]);
          if (puVar19[-1] != 0) {
            *puStack_278 = 0;
            puStack_278 = puStack_278 + 1;
          }
          iVar15 = iVar15 + 1;
          puVar19 = puVar19 + 6;
        } while (iVar15 < (int)uStack_70);
      }
      if ((uint)uStack_268 != 0xffffffff) {
        uVar2 = 0x20;
// WM - no support for modified copies
        if (uStack_268._4_4_ != 0 || ((uint)uStack_268 & 0xfffffffe) != 0x10) {
          uVar2 = uVar6;
        }
        func_0x003dd54c(&puStack_278,uVar2,uStack_288 & 0xffffffff);
      }
      _memcpy(puStack_278,alStack_68[0],(long)iVar5);
      puStack_280 = puVar12;
      puVar11 = (uint *)func_0x003e54a8(0,&puStack_280,(long)iVar4);
    }
  }
  else {
    uVar6 = func_0x003dd2e4(alStack_68,&uStack_288,auStack_28c,auStack_290,(long)iVar5);
    if ((uVar6 >> 7 & 1) == 0) {
      if ((uVar6 & 1) == 0) {
        uVar6 = uVar6 & 0x20;
        uVar13 = uStack_288 & 0xffffffff;
      }
      else {
        uVar13 = 0;
        uStack_288 = 0;
        uVar6 = 2;
      }
      iVar3 = (int)alStack_68[0];
      iVar15 = (int)lStack_270;
      iVar4 = func_0x003dd660(0,uVar13,uStack_268 & 0xffffffff);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      if (iVar4 != -1) {
        iVar5 = iVar5 + (iVar15 - iVar3);
        goto LAB_003dc84c;
      }
    }
LAB_003dc924:
    puVar11 = (uint *)0x0;
    puVar12 = (undefined1 *)0x0;
  }
  func_0x004743e4(lStack_270,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                  ,0xf3);
  func_0x004743e4(puVar12,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                  ,0xf4);
  return puVar11;
}

