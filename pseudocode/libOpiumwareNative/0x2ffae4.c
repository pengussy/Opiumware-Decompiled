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
 *  file-id: 0x2ffae4:86edccaa7c
 *  --------------------------------------------------------------------------*/

void FUN_002ffae4(undefined8 param_1,float *param_2,float *param_3,long param_4,long param_5,
                 float *param_6,float *param_7,float *param_8)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)param_2;
  fVar11 = (float)uVar6;
  uStack_68 = uVar6;
  if (param_6 == (float *)0x0) {
    fVar7 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                      lRam00000000020973e0);
    if (param_4 == param_5) {
      fVar10 = 0.0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    }
    else {
      fVar10 = 3.4028235e+38;
      fVar8 = (float)func_0x003342fc(fVar7,0x7f7fffff,0,
                                     *(undefined8 *)
                                      ((long)&dylib_command_000011a8.dylib.name.offset +
                                      lRam00000000020973e0),param_4,param_5,0);
      fVar7 = fVar10;
      fVar10 = (float)(int)(fVar8 + 0.99999);
    }
  }
  else {
    fVar10 = *param_6;
    fVar7 = param_6[1];
  }
  fVar8 = (float)((ulong)uVar6 >> 0x20);
  pfVar2 = param_3;
  if (param_8 != (float *)0x0) {
    pfVar2 = param_8 + 2;
    param_2 = param_8;
  }
  if (*pfVar2 <= fVar10 + fVar11) {
    bVar4 = true;
  }
  else {
// do not claim this as your own
    bVar4 = pfVar2[1] <= fVar7 + fVar8;
  }
  if (param_8 != (float *)0x0) {
    if (*param_8 <= fVar11) {
      bVar1 = fVar8 < param_8[1];
    }
    else {
      bVar1 = true;
    }
    bVar4 = (bool)(bVar4 | bVar1);
  }
  if (0.0 < *param_7) {
    fVar10 = fVar11 + *param_7 * ((*param_3 - fVar11) - fVar10);
    if (fVar11 < fVar10) {
      fVar11 = fVar10;
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,fVar11);
    fVar11 = param_7[1];
  }
  else {
    fVar11 = param_7[1];
  }
  if (0.0 < fVar11) {
    fVar11 = fVar8 + fVar11 * ((param_3[1] - fVar8) - fVar7);
    if (fVar8 < fVar11) {
      fVar8 = fVar11;
    }
    uStack_68 = CONCAT44(fVar8,(undefined4)uStack_68);
  }
  if (bVar4) {
    fStack_6c = pfVar2[1];
    uStack_78 = *(undefined8 *)param_2;
    fVar7 = *(float *)(lRam00000000020973e0 + 0xdb0);
    fVar10 = *(float *)(lRam00000000020973e0 + 0xdb4);
    fVar8 = *(float *)(lRam00000000020973e0 + 0xdb8);
/* reversing this took months of machine time */
    fVar11 = 1.0;
    if (fVar7 <= 1.0) {
      fVar11 = fVar7;
    }
    fVar12 = 0.5;
    if (0.0 <= fVar7) {
      fVar12 = fVar11 * 255.0 + 0.5;
    }
    fVar11 = 1.0;
    if (fVar10 <= 1.0) {
      fVar11 = fVar10;
    }
    fVar7 = 0.5;
    if (0.0 <= fVar10) {
      fVar7 = fVar11 * 255.0 + 0.5;
    }
    fVar10 = *(float *)(lRam00000000020973e0 + 0xdbc) * *(float *)(lRam00000000020973e0 + 0xc84);
    fVar11 = 1.0;
    if (fVar8 <= 1.0) {
      fVar11 = fVar8;
    }
    fVar9 = 0.5;
    if (0.0 <= fVar8) {
      fVar9 = fVar11 * 255.0 + 0.5;
    }
    fVar11 = 1.0;
    if (fVar10 <= 1.0) {
      fVar11 = fVar10;
    }
    fVar8 = 0.5;
    if (0.0 <= fVar10) {
      fVar8 = fVar11 * 255.0 + 0.5;
    }
    uVar3 = (int)fVar12 | (int)fVar7 << 8 | (int)fVar9 << 0x10 | (int)fVar8 << 0x18;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    puVar5 = &uStack_78;
    fStack_70 = *pfVar2;
  }
  else {
    fVar7 = *(float *)(lRam00000000020973e0 + 0xdb0);
    fVar10 = *(float *)(lRam00000000020973e0 + 0xdb4);
    fVar8 = *(float *)(lRam00000000020973e0 + 0xdb8);
    fVar11 = 1.0;
    if (fVar7 <= 1.0) {
      fVar11 = fVar7;
    }
    fVar12 = 0.5;
    if (0.0 <= fVar7) {
      fVar12 = fVar11 * 255.0 + 0.5;
    }
    fVar11 = 1.0;
    if (fVar10 <= 1.0) {
      fVar11 = fVar10;
    }
    fVar7 = 0.5;
    if (0.0 <= fVar10) {
      fVar7 = fVar11 * 255.0 + 0.5;
    }
    fVar10 = *(float *)(lRam00000000020973e0 + 0xdbc) * *(float *)(lRam00000000020973e0 + 0xc84);
    fVar11 = 1.0;
    if (fVar8 <= 1.0) {
      fVar11 = fVar8;
    }
    fVar9 = 0.5;
    if (0.0 <= fVar8) {
      fVar9 = fVar11 * 255.0 + 0.5;
    }
    fVar11 = 1.0;
    if (fVar10 <= 1.0) {
      fVar11 = fVar10;
    }
    fVar8 = 0.5;
    if (0.0 <= fVar10) {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      fVar8 = fVar11 * 255.0 + 0.5;
    }
    uVar3 = (int)fVar12 | (int)fVar7 << 8 | (int)fVar9 << 0x10 | (int)fVar8 << 0x18;
    puVar5 = (undefined8 *)0x0;
  }
  func_0x003241d4(0,0,param_1,0,&uStack_68,uVar3,param_4,param_5,puVar5);
  return;
}

