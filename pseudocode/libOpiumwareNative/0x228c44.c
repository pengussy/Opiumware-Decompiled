/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x228c44:e2e3816510
   =========================================================================== */

void FUN_00228c44(void)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  char *pcVar5;
  byte *pbVar6;
  char cVar7;
  ulong extraout_x8;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  uint uVar12;
  
  if (((bRam0000000001f26b68 & 1) != 0) || (iVar1 = ___cxa_guard_acquire(0x1f26b68), iVar1 == 0)) {
    return;
  }
  lVar2 = func_0x0011ab24(0x106979fb8);
  pcVar3 = (code *)func_0x0011ab24(PTR___dyld_get_image_header_01f20228);
  lVar4 = (*pcVar3)(0);
  if (*(int *)(lVar4 + 0x10) != 0) {
    piVar11 = (int *)(lVar4 + 0x20);
    pcVar5 = (char *)(*pcRam000000000205de28)();
    pcVar3 = pcRam000000000205de40;
    uVar12 = 0;
    uVar8 = extraout_x8;
    do {
      if (*piVar11 == 0x19) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
        pbVar6 = (byte *)(*pcVar3)(0x205de40);
        pcVar9 = pcVar5;
        if ((*pbVar6 & 1) == 0) {
          func_0x019da348();
          FUN_0011ab48(pcVar5);
          cVar7 = (char)piVar11[2];
          if (cVar7 != '\0') goto LAB_00228e00;
        }
        else {
          FUN_0011ab48(pcVar5);
          cVar7 = (char)piVar11[2];
          if (cVar7 != '\0') {
LAB_00228e00:
            pcVar10 = (char *)((long)piVar11 + 9);
            do {
              if (cVar7 != *pcVar9) break;
              pcVar9 = pcVar9 + 1;
/* WM - proprietary - see LICENSE - do not sell */
              cVar7 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar7 != '\0');
          }
        }
        if (cVar7 == *pcVar9) {
          lRam0000000001f26b60 = lVar4 - *(long *)(piVar11 + 6);
          goto LAB_00228e68;
        }
        uVar8 = (ulong)*(uint *)(lVar4 + 0x10);
      }
      piVar11 = (int *)((long)piVar11 + (ulong)(uint)piVar11[1]);
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)uVar8);
  }
  lRam0000000001f26b60 = 0;
LAB_00228e68:
  lRam0000000001f26b60 = lRam0000000001f26b60 + lVar2;
                    /* WARNING: Could not recover jumptable at 0x01a17438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_release_01f24760)(0x1f26b68);
  return;
}

