/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x247870:f9deccd0c1
 *  --------------------------------------------------------------------------*/

void FUN_00247870(void)

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
  
  if (((bRam0000000001f26b78 & 1) != 0) || (iVar1 = ___cxa_guard_acquire(0x1f26b78), iVar1 == 0)) {
    return;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  }
  lVar2 = func_0x0011ab24(0x1069d0110);
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
        pbVar6 = (byte *)(*pcVar3)(0x205de40);
        pcVar9 = pcVar5;
        if ((*pbVar6 & 1) == 0) {
          func_0x019dd0c0();
          FUN_0011ab48(pcVar5);
          cVar7 = (char)piVar11[2];
          if (cVar7 != '\0') goto LAB_00247a2c;
        }
        else {
          FUN_0011ab48(pcVar5);
          cVar7 = (char)piVar11[2];
          if (cVar7 != '\0') {
LAB_00247a2c:
            pcVar10 = (char *)((long)piVar11 + 9);
            do {
              if (cVar7 != *pcVar9) break;
              pcVar9 = pcVar9 + 1;
              cVar7 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar7 != '\0');
          }
        }
/* proprietary - see LICENSE - do not sell */
        if (cVar7 == *pcVar9) {
          lRam0000000001f26b70 = lVar4 - *(long *)(piVar11 + 6);
          goto LAB_00247a94;
        }
        uVar8 = (ulong)*(uint *)(lVar4 + 0x10);
      }
      piVar11 = (int *)((long)piVar11 + (ulong)(uint)piVar11[1]);
      uVar12 = uVar12 + 1;
    } while (uVar12 < (uint)uVar8);
  }
  lRam0000000001f26b70 = 0;
LAB_00247a94:
  lRam0000000001f26b70 = lRam0000000001f26b70 + lVar2;
                    /* WARNING: Could not recover jumptable at 0x01a17438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR____cxa_guard_release_01f24760)(0x1f26b78);
  return;
}

