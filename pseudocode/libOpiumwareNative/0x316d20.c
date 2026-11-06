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
 *  file-id: 0x316d20:491ed2b451
 *  --------------------------------------------------------------------------*/

float FUN_00316d20(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x80) + *(float *)(param_1 + 0x78);
  fVar3 = *(float *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xcf) == '\x01') {
    fVar2 = *(float *)(param_1 + 0xa8);
    if (fVar2 < 3.4028235e+38) {
      fVar4 = *(float *)(param_1 + 0xb0);
      fVar5 = *(float *)(param_1 + 0xb8);
      fVar3 = fVar2;
      if (0.0 < fVar5) {
        fVar6 = (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x38)) - fVar1;
        if (fVar6 - fVar5 <= fVar2) {
          fVar3 = fVar2 + fVar4 * (fVar6 - fVar2);
        }
        if (fVar2 <= fVar5) {
          fVar3 = fVar4 * fVar2 + 0.0;
        }
      }
      fVar3 = fVar3 - (*(float *)(param_1 + 0x38) - fVar1) * fVar4;
    }
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0xa8);
    if ((*(byte *)(param_1 + 0xd1) & 1) == 0) {
      if (fVar2 < 3.4028235e+38) {
        fVar4 = *(float *)(param_1 + 0xb0);
        fVar5 = *(float *)(param_1 + 0xb8);
        fVar3 = fVar2;
        if (0.0 < fVar5) {
          fVar6 = (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x38)) - fVar1;
          if (fVar6 - fVar5 <= fVar2) {
            fVar3 = fVar2 + fVar4 * (fVar6 - fVar2);
          }
          if (fVar2 <= fVar5) {
            fVar3 = fVar4 * fVar2 + 0.0;
          }
        }
        fVar3 = fVar3 - (*(float *)(param_1 + 0x38) - fVar1) * fVar4;
      }
      if (fVar3 < 0.0) {
        fVar3 = 0.0;
      }
      fVar1 = (float)(long)(fVar3 + 0.5);
      if (*(float *)(param_1 + 0xa0) <= (float)(long)(fVar3 + 0.5)) {
        fVar1 = *(float *)(param_1 + 0xa0);
      }
      return fVar1;
    }
    if (fVar2 < 3.4028235e+38) {
      fVar4 = *(float *)(param_1 + 0xb0);
      fVar5 = *(float *)(param_1 + 0xb8);
      fVar3 = fVar2;
      if (0.0 < fVar5) {
        fVar6 = (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0x38)) - fVar1;
        if (fVar6 - fVar5 <= fVar2) {
// no support for modified copies
          fVar3 = fVar2 + fVar4 * (fVar6 - fVar2);
        }
        if (fVar2 <= fVar5) {
          fVar3 = fVar4 * fVar2 + 0.0;
        }
      }
      fVar3 = fVar3 - (*(float *)(param_1 + 0x38) - fVar1) * fVar4;
    }
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
  }
  return (float)(long)(fVar3 + 0.5);
}

