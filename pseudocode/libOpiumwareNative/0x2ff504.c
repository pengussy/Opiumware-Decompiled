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
 *  file-id: 0x2ff504:eba9bae100
 *  --------------------------------------------------------------------------*/

void FUN_002ff504(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  
  lVar3 = lRam00000000020973e0;
  iVar5 = *(int *)(&UNK_00001f60 + lRam00000000020973e0);
  if (iVar5 < param_1) {
    FUN_002ff090("Calling PopStyleVar() too many times!");
    iVar5 = *(int *)(&UNK_00001f60 + lVar3);
    param_1 = iVar5;
  }
  if (0 < param_1) {
    param_1 = param_1 + 1;
    puVar4 = (undefined4 *)(*(long *)(&UNK_00001f68 + lVar3) + (long)iVar5 * 0xc + -4);
    do {
      iVar5 = iVar5 + -1;
      puVar1 = (undefined4 *)
               (lVar3 + 0xc78 +
               (ulong)(*(uint *)(&UNK_01adf610 + (long)(int)puVar4[-2] * 4) >> 0x10));
      uVar2 = *(uint *)(&UNK_01adf610 + (long)(int)puVar4[-2] * 4) & 0xffff;
      if (uVar2 == 0x802) {
        *puVar1 = puVar4[-1];
/*  donate: donate/README.md  */
        puVar1[1] = *puVar4;
      }
      else if (uVar2 == 0x801) {
        *puVar1 = puVar4[-1];
      }
      *(int *)(&UNK_00001f60 + lVar3) = iVar5;
      param_1 = param_1 + -1;
      puVar4 = puVar4 + -3;
    } while (1 < param_1);
  }
  return;
}

