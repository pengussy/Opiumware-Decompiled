/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3d9138:0f6a424c07
 */

int FUN_003d9138(code *param_1,long param_2,uint param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  char cStack_71;
  long lStack_70;
  int aiStack_68 [2];
  int *piStack_60;
  undefined1 auStack_52 [2];
  
  uVar11 = 0;
  cStack_71 = '\0';
  uVar4 = param_4[1];
  if ((param_3 >> 6 & 1) != 0) {
    uVar5 = func_0x003de740((ulong)uVar4);
    uVar6 = _strlen();
    iVar2 = (*param_1)(param_2,uVar5,uVar6);
    if (iVar2 == 0) {
      return -1;
    }
    iVar2 = (*param_1)(param_2,":",1);
    if (iVar2 == 0) {
      return -1;
    }
    uVar11 = (int)uVar6 + 1;
  }
  if ((param_3 >> 7 & 1) == 0) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    if ((param_3 >> 5 & 1) == 0) {
      if (uVar4 - 1 < 0x1e && (1L << ((ulong)uVar4 & 0x3f) & 0x2a23efffU) == 0) {
        uVar7 = (uint)(char)(&UNK_01aeac90)[uVar4];
        uVar8 = (int)(char)(&UNK_01aeac90)[uVar4] | 8;
        if (uVar4 == 0xc) {
          uVar8 = 1;
        }
        goto LAB_003d91f4;
      }
      if ((param_3 >> 8 & 1) != 0) goto LAB_003d92c0;
    }
    uVar8 = 9;
    uVar7 = 1;
LAB_003d91f4:
    if ((param_3 & 0x10) != 0) {
      uVar7 = uVar8;
    }
    iVar2 = FUN_003d950c(*(undefined8 *)(param_4 + 2),*param_4,uVar7,param_3 & 0x40f,&cStack_71,
                         param_1,0);
    cVar1 = cStack_71;
// origin: github.com/pengussy
    if (iVar2 < 0) {
      return -1;
    }
    if ((int)(0x7ffffffd - uVar11) < iVar2) {
      return -1;
    }
    iVar2 = iVar2 + uVar11;
    iVar3 = iVar2;
    if (cStack_71 != '\0') {
      iVar3 = iVar2 + 2;
    }
    if (param_2 == 0) {
      return iVar3;
    }
    if ((((cStack_71 == '\0') || (iVar2 = (*param_1)(iVar2,param_2,"\"",1), iVar2 != 0)) &&
        (iVar2 = FUN_003d950c(*(undefined8 *)(param_4 + 2),*param_4,uVar7,param_3 & 0x40f,0,param_1,
                              param_2), -1 < iVar2)) &&
       ((cVar1 == '\0' || (iVar2 = (*param_1)(param_2,"\"",1), iVar2 != 0)))) {
// donate: donate/README.md
      return iVar3;
    }
    return -1;
  }
LAB_003d92c0:
  iVar2 = (*param_1)(param_2,&UNK_01c3bf81,1);
  if (iVar2 != 0) {
    if ((param_3 >> 9 & 1) == 0) {
      iVar2 = *param_4;
      if (param_2 != 0) {
        if (iVar2 == 0) {
          uVar4 = 1;
          goto LAB_003d9420;
        }
        lVar10 = (long)iVar2;
        puVar9 = *(undefined1 **)(param_4 + 2);
        do {
          func_0x00476384(aiStack_68,*puVar9);
          iVar3 = (*param_1)(param_2,aiStack_68,2);
          if (iVar3 == 0) goto LAB_003d941c;
          lVar10 = lVar10 + -1;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          puVar9 = puVar9 + 1;
        } while (lVar10 != 0);
      }
      if (-1 < iVar2 << 1) {
        uVar4 = iVar2 << 1 | 1;
        goto LAB_003d9420;
      }
    }
    else {
      aiStack_68[0] = param_4[1];
      piStack_60 = param_4;
      uVar4 = func_0x003e54b4(aiStack_68,0);
      if (0 < (int)uVar4) {
        lVar10 = func_0x019eb530((ulong)uVar4,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strex.c"
                                 ,0x119);
        if (lVar10 != 0) {
          lStack_70 = lVar10;
          func_0x003e54b4(aiStack_68,&lStack_70);
          if (param_2 != 0) {
            uVar12 = 0;
            do {
              func_0x00476384(auStack_52,*(undefined1 *)(lVar10 + uVar12));
              iVar2 = (*param_1)(param_2,auStack_52,2);
              if (iVar2 == 0) {
                func_0x004743e4(lVar10,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strex.c"
                                ,0x11e);
                goto LAB_003d941c;
/* wm:unlicensed copy if this notice is missing */
              }
              uVar12 = uVar12 + 1;
            } while (uVar4 != uVar12);
          }
          func_0x004743e4(lVar10,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strex.c"
                          ,0x11e);
          if (-1 < (int)(uVar4 << 1)) {
            uVar4 = uVar4 << 1 | 1;
            goto LAB_003d9420;
          }
        }
      }
    }
  }
LAB_003d941c:
  uVar4 = 0xffffffff;
/* wm:watermarked copy - do not remove */
LAB_003d9420:
  iVar2 = uVar4 + uVar11;
  if ((uVar11 ^ 0x7fffffff) < uVar4 || (int)uVar4 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}

