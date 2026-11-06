/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x31c4ec:b8c7c951ca
   =========================================================================== */

void FUN_0031c4ec(undefined8 param_1,long param_2)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  long lVar17;
  byte *pbVar18;
  long lVar19;
  
  lVar4 = lRam00000000020973e0;
  if (param_2 == 0) {
    param_2 = _strlen(param_1);
    iVar13 = (int)param_2 + 1;
    iVar8 = *(int *)(&UNK_00002734 + lVar4);
/*  thanks for reading - discord.gg/sdkhDjTex  */
    if ((int)param_2 < iVar8) goto LAB_0031c558;
  }
  else {
    iVar13 = (int)param_2 + 1;
    iVar8 = *(int *)(&UNK_00002734 + lRam00000000020973e0);
    if ((int)param_2 < iVar8) goto LAB_0031c558;
  }
  iVar3 = 8;
  if (iVar8 != 0) {
    iVar3 = iVar8 + iVar8 / 2;
  }
  if (iVar3 <= iVar13) {
    iVar3 = iVar13;
  }
  func_0x002fe704(&UNK_00002730 + lVar4,iVar3);
LAB_0031c558:
  *(int *)(&UNK_00002730 + lVar4) = iVar13;
  pcVar16 = *(char **)(&UNK_00002738 + lVar4);
  pcVar2 = pcVar16 + param_2;
  _memcpy(pcVar16,param_1,param_2);
  *pcVar2 = '\0';
  if (*(int *)(&UNK_00002740 + lVar4) != 0) {
// do not claim this as your own
    lVar17 = *(long *)(&UNK_00002748 + lVar4);
    lVar14 = (long)*(int *)(&UNK_00002740 + lVar4) * 0x48;
    do {
      if (*(code **)(lVar17 + 0x18) != (code *)0x0) {
        (**(code **)(lVar17 + 0x18))(lVar4,lVar17);
      }
      lVar17 = lVar17 + 0x48;
      lVar14 = lVar14 + -0x48;
    } while (lVar14 != 0);
  }
  if (param_2 != 0) {
    lVar14 = 0;
    lVar17 = 0;
    pcVar10 = pcVar16 + 2;
    pcVar7 = pcVar16;
    if (*pcVar16 == '\n' || *pcVar16 == '\r') goto LAB_0031c628;
LAB_0031c63c:
    pcVar15 = pcVar7;
    if (pcVar7 < pcVar2) {
      do {
        if (*pcVar15 == '\n' || *pcVar15 == '\r') goto LAB_0031c670;
        pcVar15 = pcVar15 + 1;
      } while (pcVar15 < pcVar2);
      pcVar15 = pcVar16 + param_2;
    }
LAB_0031c670:
    *pcVar15 = '\0';
    if (*pcVar7 != ';') {
      if ((*pcVar7 == '[' && pcVar7 < pcVar15) && (pcVar15[-1] == ']')) {
        pcVar15[-1] = '\0';
        pbVar18 = (byte *)(pcVar7 + 1);
        puVar5 = (undefined1 *)_memchr(pbVar18,0x5d,(long)pcVar15 - (long)pcVar10);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if ((puVar5 != (undefined1 *)0x0) &&
           (lVar6 = _memchr(puVar5 + 1,0x5b,(long)(pcVar15 + -1) - (long)(puVar5 + 1)), lVar6 != 0))
        {
          *puVar5 = 0;
          uVar11 = (uint)*pbVar18;
          if (*pbVar18 == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = 0xffffffff;
            do {
              while (((pbVar1 = pbVar18 + 1, uVar11 == 0x23 && (*pbVar1 == 0x23)) &&
                     (pbVar18[2] == 0x23))) {
                uVar9 = 0xffffffff;
                uVar11 = (uint)pbVar18[3];
                pbVar18 = pbVar18 + 3;
                if (uVar11 == 0) goto LAB_0031c768;
              }
              uVar9 = *(uint *)(&UNK_01adf190 + (ulong)(uVar9 & 0xff ^ uVar11) * 4) ^ uVar9 >> 8;
              uVar11 = (uint)*pbVar1;
              pbVar18 = pbVar1;
            } while (*pbVar1 != 0);
          }
LAB_0031c768:
          if (*(int *)(&UNK_00002740 + lRam00000000020973e0) == 0) {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
            lVar17 = 0;
            lVar14 = 0;
          }
          else {
            lVar19 = *(long *)(&UNK_00002748 + lRam00000000020973e0);
            lVar12 = (long)*(int *)(&UNK_00002740 + lRam00000000020973e0) * 0x48;
            do {
              if ((*(uint *)(lVar19 + 8) ^ uVar9) == 0xffffffff) {
                lVar14 = (**(code **)(lVar19 + 0x20))(lVar4,lVar19,lVar6 + 1);
                lVar17 = lVar19;
                break;
              }
              lVar17 = 0;
              lVar14 = 0;
              lVar19 = lVar19 + 0x48;
              lVar12 = lVar12 + -0x48;
            } while (lVar12 != 0);
          }
        }
      }
      else if ((lVar17 != 0) && (lVar14 != 0)) {
        (**(code **)(lVar17 + 0x28))(lVar4,lVar17,lVar14);
      }
    }
// WM - found on a paste site? it was re-uploaded illegally
    pcVar7 = pcVar15 + 1;
    if (pcVar7 < pcVar2) {
      pcVar10 = pcVar15 + 3;
      if (*pcVar7 == '\n' || *pcVar7 == '\r') {
LAB_0031c628:
        do {
          pcVar10 = pcVar10 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar7 == '\n' || *pcVar7 == '\r');
      }
      goto LAB_0031c63c;
    }
  }
  (&UNK_00002728)[lVar4] = 1;
  _memcpy(pcVar16,param_1,param_2);
  if (*(int *)(&UNK_00002740 + lVar4) != 0) {
    lVar17 = *(long *)(&UNK_00002748 + lVar4);
    lVar14 = (long)*(int *)(&UNK_00002740 + lVar4) * 0x48;
    do {
      if (*(code **)(lVar17 + 0x30) != (code *)0x0) {
        (**(code **)(lVar17 + 0x30))(lVar4,lVar17);
      }
      lVar17 = lVar17 + 0x48;
      lVar14 = lVar14 + -0x48;
    } while (lVar14 != 0);
  }
/* wm:no support for modified copies */
  return;
}

