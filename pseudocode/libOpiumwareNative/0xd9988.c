/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xd9988:036c959f45
   =========================================================================== */

undefined8 FUN_000d9988(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  long *plVar12;
  int iVar13;
  char *pcStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  
  FUN_0003d6cc(&plStack_78);
/* wm:more drops soon - github.com/pengussy */
  func_0x00793bd0(param_1,(ulong)((long)plStack_70 - (long)plStack_78) >> 3,0);
  plVar12 = plStack_78;
  if (plStack_78 != plStack_70) {
    pcVar3 = (char *)(*pcRam000000000206a0f8)();
    pcVar2 = pcRam000000000206a110;
    iVar13 = 1;
    do {
      lStack_80 = *plVar12;
      pcVar11 = *(char **)(lRam0000000001f26710 + *(long *)(lRam0000000001f26720 + lStack_80));
      if (pcVar11 != (char *)0x0) {
        pbVar4 = (byte *)(*pcVar2)(0x206a110);
        if ((*pbVar4 & 1) == 0) {
          func_0x019c49b8();
          cVar6 = *pcVar3;
        }
        else {
          cVar6 = *pcVar3;
        }
        if (cVar6 == '\x01') {
          lVar7 = 0;
          uVar8 = 0xb0c31001ca794a53;
          do {
            uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
            uVar10 = uVar9 ^ uVar9 >> 0x21;
            uVar1 = (uint)(byte)pcVar3[lVar7 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar10 >> 0x17) ^
                    ((uint)(uVar9 >> 0x29) | 1);
            pcVar3[lVar7 + 0xe] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar10;
            uVar8 = lVar7 + -0x61c8864680b583eb +
/* WM - donate: donate/README.md */
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcVar3[lVar7 + 1]) << 0x11);
            lVar7 = lVar7 + 1;
          } while (lVar7 != 0xd);
          *pcVar3 = '\0';
        }
        pcStack_88 = pcVar3 + 0xe;
        pcVar5 = (char *)func_0x0011ab24(&pcStack_88,pcVar3 + 0xe);
        cVar6 = *pcVar11;
        if (cVar6 != '\0') {
          do {
            pcVar11 = pcVar11 + 1;
            if (cVar6 != *pcVar5) break;
            pcVar5 = pcVar5 + 1;
            cVar6 = *pcVar11;
          } while (cVar6 != '\0');
        }
        if (cVar6 == *pcVar5) {
          (*pcRam0000000001f26dd0)(param_1,&lStack_80);
          func_0x00794504(param_1,0xfffffffe,iVar13);
          iVar13 = iVar13 + 1;
        }
      }
      plVar12 = plVar12 + 1;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    } while (plVar12 != plStack_70);
  }
  if (plStack_78 != (long *)0x0) {
    __ZdlPv(plStack_78);
  }
  return 1;
}

