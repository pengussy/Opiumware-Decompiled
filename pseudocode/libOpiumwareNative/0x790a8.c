/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x790a8:a072da5313
 */

void FUN_000790a8(long param_1,long param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcStack_30;
  char *pcStack_28;
  
  if (*(long *)(param_2 + 0x48) != 0) {
    pcVar4 = *(code **)(*(long *)(param_1 + 0x38) + 0x6f0);
    if (pcVar4 == (code *)0x0) goto LAB_0007924c;
    (*pcVar4)(param_1,param_2);
  }
  if ((*(long *)(param_2 + 0x18) == *(long *)(param_2 + 0x88)) && (*(long *)(param_2 + 0x50) == 0))
  {
    return;
  }
  pbVar2 = (byte *)(*pcRam0000000002064200)();
  if ((*pbVar2 & 1) == 0) goto LAB_00079390;
  do {
    pcStack_30 = (char *)(*pcRam00000000020641e8)();
    if (*pcStack_30 == '\x01') {
      lVar5 = 0;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar6 = 0x21ca7b76c0c61d48;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_30[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (((uint)(uVar7 >> 0x29) | 1) + (int)(uVar8 >> 0x17))
        ;
        pcStack_30[lVar5 + 0x21] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar8;
        uVar6 = lVar5 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_30[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x20);
      *pcStack_30 = '\0';
    }
    pcStack_30 = pcStack_30 + 0x21;
    uVar3 = func_0x0011ab24(&pcStack_30);
    func_0x007a1abc(param_1,1,uVar3);
LAB_0007924c:
    pbVar2 = (byte *)(*pcRam00000000020641d0)();
    if ((*pbVar2 & 1) == 0) {
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      func_0x019bd5b4();
    }
    pcStack_28 = (char *)(*pcRam00000000020641b8)();
    if (*pcStack_28 == '\x01') {
      lVar5 = 0;
      uVar6 = 0xf5e7aaa1890b3513;
      do {
        uVar7 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar7 ^ uVar7 >> 0x21;
        uVar1 = (uint)(byte)pcStack_28[lVar5 + 1] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar8 >> 0x17);
        pcStack_28[lVar5 + 0x2b] =
             ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar7 >> 0x29) | 1) ^
             (byte)uVar8;
        uVar6 = lVar5 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_28[lVar5 + 1]) << 0x11);
        lVar5 = lVar5 + 1;
      } while (lVar5 != 0x2a);
      *pcStack_28 = '\0';
    }
    pcStack_28 = pcStack_28 + 0x2b;
    uVar3 = func_0x0011ab24(&pcStack_28);
    func_0x007a1abc(param_1,1,uVar3);
LAB_00079390:
    func_0x019bd5f0();
  } while( true );
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
}

