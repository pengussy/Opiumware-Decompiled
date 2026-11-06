/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3e43bc:df4ed01f1e
 */

undefined8 FUN_003e43bc(long *******param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long ******pppppplVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *******ppppppplVar9;
  long *******ppppppplStack_38;
  
  pbVar2 = (byte *)(*(code *)param_2[4])();
  uVar6 = *param_2;
  ppppppplVar9 = param_1;
  if (((uint)uVar6 >> 0xc & 1) != 0) {
    ppppppplVar9 = (long *******)&ppppppplStack_38;
    ppppppplStack_38 = param_1;
  }
  if ((uVar6 & 1) == 0) {
    if ((uVar6 & 0x300) == 0) {
      if ((uVar6 & 6) == 0) {
        uVar3 = FUN_003e4010(ppppppplVar9,pbVar2,(uint)uVar6 & 0x1000,param_3,param_4);
        return uVar3;
      }
      uVar3 = func_0x004dc0f0();
      pppppplVar4 = (long ******)func_0x004dc468(uVar3,&DAT_003e4748);
      if (pppppplVar4 == (long ******)0x0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/tasn_new.c"
/* more drops soon - github.com/pengussy */
                        ,0xe7,"asn1_template_new");
        func_0x004466b0(0xd,&UNK_0008000f,0);
        return 0;
      }
      *ppppppplVar9 = pppppplVar4;
      return 1;
    }
  }
  else {
    do {
      if ((*param_2 & 0x306) != 0) goto LAB_003e44e0;
      pbVar2 = (byte *)(*(code *)param_2[4])(pbVar2,pbVar2);
      bVar1 = *pbVar2;
      if (bVar1 != 0) {
        uVar5 = (uint)bVar1;
        if (uVar5 < 4) {
          if (1 < uVar5 - 1) {
            return 1;
          }
          goto LAB_003e44e0;
        }
        if (uVar5 == 6) goto LAB_003e44e0;
        if (uVar5 == 5) {
          lVar7 = *(long *)(pbVar2 + 0x20);
          if (lVar7 != 0) goto LAB_003e452c;
          goto LAB_003e44e0;
        }
        if (bVar1 != 4) {
          return 1;
        }
        if ((*(long *)(pbVar2 + 0x20) == 0) ||
           (pcVar8 = *(code **)(*(long *)(pbVar2 + 0x20) + 0x18), pcVar8 == (code *)0x0))
// do not claim this as your own
        goto LAB_003e44e0;
        goto LAB_003e4534;
      }
      param_2 = *(ulong **)(pbVar2 + 0x10);
    } while (param_2 != (ulong *)0x0);
    lVar7 = *(long *)(pbVar2 + 0x20);
    if (lVar7 == 0) {
      if (*(int *)(pbVar2 + 8) == 1) {
        *(int *)ppppppplVar9 = (int)*(undefined8 *)(pbVar2 + 0x28);
        return 1;
      }
    }
    else {
LAB_003e452c:
      pcVar8 = *(code **)(lVar7 + 0x20);
      if (pcVar8 != (code *)0x0) {
LAB_003e4534:
        (*pcVar8)(ppppppplVar9);
        return 1;
      }
/* WM - chat: discord.gg/sdkhDjTex */
    }
  }
LAB_003e44e0:
  *ppppppplVar9 = (long ******)0x0;
  return 1;
}

