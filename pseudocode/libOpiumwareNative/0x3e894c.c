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
 *  file-id: 0x3e894c:2e55f25675
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x003e8a08) */
/* WARNING: Removing unreachable block (ram,0x003e8a34) */

ulong FUN_003e894c(long param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  if (param_3 == 0) {
/*  do not claim this as your own  */
    return 0;
  }
  puVar12 = *(uint **)(param_1 + 0x40);
  if ((puVar12 == (uint *)0x0) || (*(long *)(param_1 + 0x48) == 0)) {
LAB_003e8b18:
    uVar10 = 0;
  }
  else {
    uVar13 = param_3 - 1;
    func_0x003e9590(param_1,0xf);
    if ((int)puVar12[4] < 1) {
      uVar10 = 0;
      uVar6 = puVar12[5];
LAB_003e8a64:
      uVar2 = uVar13 + uVar6 + 0x1000;
      uVar3 = uVar13 + uVar6 + 0x1fff;
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      uVar3 = uVar3 & 0xfffff000;
      lVar7 = *(long *)(puVar12 + 2);
      if ((int)*puVar12 < (int)uVar3) {
        lVar7 = func_0x019eb634(lVar7,(long)(int)uVar3,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_readbuff.c"
                                ,0x61);
        if (lVar7 == 0) goto LAB_003e8b18;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        *(long *)(puVar12 + 2) = lVar7;
        *puVar12 = uVar3;
        uVar6 = puVar12[5];
      }
      if (0 < (int)uVar13) {
        pcVar8 = param_2;
        pcVar11 = (char *)(lVar7 + (int)uVar6);
        iVar14 = 1;
        do {
          uVar6 = FUN_003e9754(*(undefined8 *)(param_1 + 0x48),pcVar11,1);
          if ((int)uVar6 < 1) {
            func_0x003eaad4(param_1);
            *pcVar8 = '\0';
            uVar13 = ((int)uVar10 + iVar14) - 1;
            if ((int)uVar13 < 1) {
              uVar13 = uVar6;
            }
            return (ulong)uVar13;
          }
          param_2 = pcVar8 + 1;
          *pcVar8 = *pcVar11;
          puVar12[5] = puVar12[5] + 1;
          cVar4 = *pcVar11;
          iVar1 = iVar14 + 1;
          bVar5 = iVar14 < (int)uVar13;
          pcVar8 = param_2;
          pcVar11 = pcVar11 + 1;
          iVar14 = iVar1;
        } while (cVar4 != '\n' && bVar5);
        uVar10 = (ulong)(((int)uVar10 + iVar1) - 1);
      }
    }
    else {
      if (param_3 < 2) {
        uVar10 = 0;
/* wm:if you paid for this, you were scammed */
        uVar6 = puVar12[5];
        puVar12[4] = puVar12[4];
        puVar12[5] = uVar6;
      }
      else {
        lVar7 = *(long *)(puVar12 + 2);
        uVar6 = puVar12[5];
        uVar10 = 0;
        do {
          uVar9 = uVar10;
          cVar4 = *(char *)(lVar7 + (int)uVar6 + uVar9);
          param_2[uVar9] = cVar4;
          if (cVar4 == '\n') {
            uVar10 = uVar9 + 1;
            param_2 = param_2 + uVar10;
            puVar12[4] = puVar12[4] - (int)uVar10;
            puVar12[5] = puVar12[5] + (int)uVar10;
            goto LAB_003e8b10;
          }
          uVar10 = uVar9 + 1;
        } while ((long)uVar10 < (long)(int)puVar12[4] && uVar10 < uVar13);
        param_2 = param_2 + uVar9 + 1;
        uVar6 = puVar12[5] + (int)uVar10;
        puVar12[4] = puVar12[4] - (int)uVar10;
        puVar12[5] = uVar6;
      }
      uVar13 = uVar13 - (int)uVar10;
      if (uVar13 != 0) goto LAB_003e8a64;
    }
LAB_003e8b10:
    *param_2 = '\0';
  }
  return uVar10;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
}

