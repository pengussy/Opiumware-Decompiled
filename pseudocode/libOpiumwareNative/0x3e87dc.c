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
 *  file-id: 0x3e87dc:3cb0caeccd
 *  --------------------------------------------------------------------------*/

uint FUN_003e87dc(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar6 = 0;
  if ((param_2 != 0) && ((int)param_3 != 0)) {
    puVar8 = *(uint **)(param_1 + 0x40);
    if ((puVar8 == (uint *)0x0) || (*(long *)(param_1 + 0x48) == 0)) {
LAB_003e8904:
      uVar6 = 0;
    }
    else {
      func_0x003e9590(param_1,0xf);
      uVar6 = 0;
      uVar3 = puVar8[4];
      uVar5 = puVar8[5];
      while( true ) {
        if (uVar3 != 0) {
/* found on a paste site? it was re-uploaded illegally */
          uVar7 = (uint)param_3;
          uVar2 = uVar3;
          if ((int)uVar7 <= (int)uVar3) {
            uVar2 = uVar7;
          }
          _memcpy(param_2,*(long *)(puVar8 + 2) + (long)(int)uVar5,(long)(int)uVar2);
          uVar5 = puVar8[5] + uVar2;
          puVar8[4] = puVar8[4] - uVar2;
          puVar8[5] = uVar5;
          uVar6 = uVar2 + uVar6;
          if ((int)uVar7 <= (int)uVar3) {
            return uVar6;
          }
          param_3 = (ulong)(uVar7 - uVar2);
          param_2 = param_2 + (int)uVar2;
        }
        iVar1 = (int)param_3 + uVar5;
        uVar3 = iVar1 + 0xfff;
        uVar2 = iVar1 + 0x1ffe;
        if (-1 < (int)uVar3) {
          uVar2 = uVar3;
        }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar2 = uVar2 & 0xfffff000;
        lVar4 = *(long *)(puVar8 + 2);
        if ((int)*puVar8 < (int)uVar2) {
          lVar4 = func_0x019eb634(lVar4,(long)(int)uVar2,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bf_readbuff.c"
                                  ,0x61);
          if (lVar4 == 0) goto LAB_003e8904;
          *(long *)(puVar8 + 2) = lVar4;
          *puVar8 = uVar2;
          uVar5 = puVar8[5];
        }
        uVar3 = FUN_003e9754(*(undefined8 *)(param_1 + 0x48),lVar4 + (int)uVar5,param_3);
        if ((int)uVar3 < 1) break;
        puVar8[4] = uVar3;
        uVar5 = puVar8[5];
      }
      func_0x003eaad4(param_1);
      if (((int)uVar3 < 0) && ((int)uVar6 < 1)) {
        uVar6 = uVar3;
      }
    }
  }
  return uVar6;
}

