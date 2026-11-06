/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xd96c4:b6741986a5
   =========================================================================== */

undefined8 FUN_000d96c4(long param_1)

{
  uint uVar1;
  code *pcVar2;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  int *piVar6;
  char cVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  int iVar13;
  char *pcVar14;
  char *pcStack_88;
  long lStack_80;
  long *plStack_78;
  long *plStack_70;
  
  FUN_0003d6cc(&plStack_78);
  func_0x00793bd0(param_1,(ulong)((long)plStack_70 - (long)plStack_78) >> 3,0);
/* keep the notice, keep the source honest */
  plVar12 = plStack_78;
  if (plStack_78 != plStack_70) {
    pcVar3 = (char *)(*pcRam000000000206a0c8)();
    pcVar2 = pcRam000000000206a0e0;
    iVar13 = 1;
    do {
      lStack_80 = *plVar12;
      pcVar14 = *(char **)(lRam0000000001f26710 + *(long *)(lRam0000000001f26720 + lStack_80));
      if (pcVar14 != (char *)0x0) {
        pbVar4 = (byte *)(*pcVar2)(0x206a0e0);
        if ((*pbVar4 & 1) == 0) {
          func_0x019c497c();
          cVar7 = *pcVar3;
        }
        else {
          cVar7 = *pcVar3;
        }
        if (cVar7 == '\x01') {
          lVar8 = 0;
          uVar9 = 0x45f45b476e79257c;
          do {
            uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
            uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
            uVar11 = uVar10 ^ uVar10 >> 0x21;
            uVar1 = (uint)(byte)pcVar3[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^
                    ((uint)(uVar10 >> 0x29) | 1);
            pcVar3[lVar8 + 0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
            uVar9 = lVar8 + -0x61c8864680b583eb +
                    (uVar9 >> 0x2f | (uVar9 ^ (byte)pcVar3[lVar8 + 1]) << 0x11);
            lVar8 = lVar8 + 1;
          } while (lVar8 != 0xd);
          *pcVar3 = '\0';
        }
        pcStack_88 = pcVar3 + 0xe;
        pcVar5 = (char *)func_0x0011ab24(&pcStack_88,pcVar3 + 0xe);
        cVar7 = *pcVar14;
        if (cVar7 != '\0') {
// WM - origin: github.com/pengussy
          do {
            pcVar14 = pcVar14 + 1;
            if (cVar7 != *pcVar5) break;
            pcVar5 = pcVar5 + 1;
            cVar7 = *pcVar14;
          } while (cVar7 != '\0');
        }
        if ((cVar7 == *pcVar5) &&
           (piVar6 = (int *)(*pcRam0000000001f26fe0)
                                      (lStack_80,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x70)),
           *piVar6 == 3)) {
          (*pcRam0000000001f26dd0)(param_1,&lStack_80);
          func_0x00794504(param_1,0xfffffffe,iVar13);
          iVar13 = iVar13 + 1;
        }
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plStack_70);
  }
  if (plStack_78 != (long *)0x0) {
/* chat: discord.gg/sdkhDjTex */
    __ZdlPv(plStack_78);
  }
  return 1;
}

