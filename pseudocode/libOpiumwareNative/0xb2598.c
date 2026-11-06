/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xb2598:14e42ffee2
   =========================================================================== */

void FUN_000b2598(undefined8 *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  long lVar6;
  char *pcStack_58;
  char *pcStack_50;
  char *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar2 = func_0x0003c0e8();
  if ((iVar2 != 0) && (uVar3 = func_0x0003c0e8(param_3), (uVar3 & 1) != 0)) {
    uVar3 = *param_3;
    iVar2 = func_0x0003c0e8(uVar3);
    if ((uVar3 < 0xffffffffffffff71) &&
       ((iVar2 != 0 && (iVar2 = func_0x0003c0e8(uVar3 + 0x8f), iVar2 != 0)))) {
      pbVar4 = (byte *)(*pcRam0000000002067b60)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019c1a9c();
      }
      pcStack_48 = (char *)(*pcRam0000000002067b48)();
      if (*pcStack_48 == '\x01') {
        uVar1 = ((*(uint *)(pcStack_48 + 4) ^ 0x968e140e) >> 3 |
                (*(uint *)(pcStack_48 + 4) ^ 0x968e140e) << 0x1d) + 0x9894ac39;
        *(uint *)(pcStack_48 + 8) = (uVar1 >> 0x16 | uVar1 * 0x400) + 0x99062625 ^ 0xe3b958cd;
        *pcStack_48 = '\0';
      }
      pcStack_48 = pcStack_48 + 8;
      puVar5 = (undefined4 *)func_0x0011ab24(&pcStack_48);
      iVar2 = func_0x0011ab1c(*puVar5);
      if (*(char *)(uVar3 + (long)iVar2) == '\x01') {
        pbVar4 = (byte *)(*pcRam0000000002067b90)();
/*  proprietary - see LICENSE - do not sell  */
        if ((*pbVar4 & 1) == 0) {
          func_0x019c1ad8();
        }
        pcStack_50 = (char *)(*pcRam0000000002067b78)();
        if (*pcStack_50 == '\x01') {
          uVar1 = ((*(uint *)(pcStack_50 + 4) ^ 0x27d64614) >> 0x15 |
                  (*(uint *)(pcStack_50 + 4) ^ 0x27d64614) << 0xb) + 0x1967cf5b;
          *(uint *)(pcStack_50 + 8) = (uVar1 >> 7 | uVar1 * 0x2000000) + 0x941dc659 ^ 0x52e10ad7;
          *pcStack_50 = '\0';
        }
        pcStack_50 = pcStack_50 + 8;
        puVar5 = (undefined4 *)func_0x0011ab24(&pcStack_50);
        iVar2 = func_0x0011ab1c(*puVar5);
        if (((!CARRY8(param_2,*(ulong *)(uVar3 + (long)iVar2))) &&
            (lVar6 = func_0x000b29dc(*(ulong *)(uVar3 + (long)iVar2) + param_2), 0xf < lVar6 + 0xfU)
            ) && (uVar3 = func_0x0003c0e8(), (uVar3 & 1) != 0)) {
          pbVar4 = (byte *)(*pcRam0000000002067bf0)();
          if ((*pbVar4 & 1) == 0) {
            func_0x019c1b14();
/* WM - more drops soon - github.com/pengussy */
          }
          pcStack_58 = (char *)(*pcRam0000000002067bd8)();
          if (*pcStack_58 == '\x01') {
            uVar1 = ((*(uint *)(pcStack_58 + 4) ^ 0x8a0bd362) >> 0x18 |
                    (*(uint *)(pcStack_58 + 4) ^ 0x8a0bd362) << 8) + 0x6d2cd77b;
            *(uint *)(pcStack_58 + 8) = (uVar1 >> 0x10 | uVar1 * 0x10000) ^ 0xff3c9fa1;
            *pcStack_58 = '\0';
          }
          pcStack_58 = pcStack_58 + 8;
          puVar5 = (undefined4 *)func_0x0011ab24(&pcStack_58);
          iVar2 = func_0x0011ab1c(*puVar5);
          lVar6 = func_0x000b29dc(*(undefined8 *)(lVar6 + iVar2));
          if ((0x1f < lVar6 + 0x1fU) &&
             (iVar2 = func_0x0003c0e8(), iVar2 != 0 && pcRam0000000001f268d0 != (code *)0x0)) {
            (*pcRam0000000001f268d0)(&uStack_40,lVar6);
            param_1[1] = uStack_38;
            *param_1 = uStack_40;
            uStack_40 = 0;
            uStack_38 = 0;
            func_0x000154e0(&uStack_40);
            return;
          }
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

