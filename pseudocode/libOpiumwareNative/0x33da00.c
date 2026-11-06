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
 *  file-id: 0x33da00:7e9de9275c
 *  --------------------------------------------------------------------------*/

void FUN_0033da00(undefined *param_1,undefined *param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
// more drops soon - github.com/pengussy
  float fVar17;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  lVar1 = lRam00000000020973e0;
  lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar8 + 0xce) = 1;
  if ((*(byte *)(lVar8 + 0xd1) & 1) == 0) {
    puVar6 = &UNK_01cb7848;
    if (param_1 != param_2) {
      puVar6 = param_2;
    }
    puVar7 = &UNK_01cb7848;
    if (param_1 != param_2) {
      puVar7 = param_1;
    }
    if (puVar6 == (undefined *)0x0) {
      lVar2 = _strlen(puVar7);
      puVar6 = puVar7 + lVar2;
    }
    fVar15 = *(float *)(lVar8 + 0x118);
    fVar14 = *(float *)(lVar8 + 0x150);
    fVar17 = *(float *)(lVar8 + 0x11c) + fVar14;
    fStack_88 = fVar15;
    fStack_84 = fVar17;
    if (((long)puVar6 - (long)puVar7 < 0x7d1) || (0.0 <= *(float *)(lVar8 + 0x1f0))) {
      uVar16 = 0;
      if (0.0 <= *(float *)(lVar8 + 0x1f0)) {
        uVar16 = func_0x00306a3c(lVar8 + 0x118);
      }
      fStack_80 = (float)func_0x002ffe24(uVar16,puVar7,puVar6,0);
      _fStack_78 = CONCAT44(fVar14,fStack_80);
      fStack_80 = fVar15 + fStack_80;
      fStack_7c = fVar17 + fVar14;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
      func_0x003154fc(0,&fStack_78);
      iVar9 = FUN_00315614(&fStack_88,0,0,0);
      if (iVar9 != 0) {
        func_0x002ff9a8(fStack_88,fStack_84,uVar16,puVar7,puVar6);
      }
    }
    else {
      fVar11 = (float)func_0x00317d98();
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      fVar14 = 0.0;
      if ((((&UNK_000027e0)[lVar1] & 1) == 0) &&
         (iVar9 = (int)((*(float *)(lVar8 + 0x26c) - fVar17) / fVar11), 0 < iVar9)) {
        if (puVar7 < puVar6) {
          uVar10 = 0;
          if ((param_3 & 1) == 0) {
            do {
              puVar3 = (undefined *)_memchr(puVar7,10,(long)puVar6 - (long)puVar7);
              puVar5 = puVar6;
              if (puVar3 != (undefined *)0x0) {
                puVar5 = puVar3;
              }
              fVar12 = (float)func_0x002ffe24(0xbf800000,puVar7,puVar5,0);
              if (fVar14 < fVar12) {
                fVar14 = fVar12;
              }
              puVar7 = puVar5 + 1;
              uVar10 = uVar10 + 1;
            } while (puVar7 < puVar6 && (int)uVar10 < iVar9);
          }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          else {
            do {
              puVar5 = (undefined *)_memchr(puVar7,10,(long)puVar6 - (long)puVar7);
              puVar7 = puVar6;
              if (puVar5 != (undefined *)0x0) {
                puVar7 = puVar5;
              }
              puVar7 = puVar7 + 1;
              uVar10 = uVar10 + 1;
            } while (puVar7 < puVar6 && (int)uVar10 < iVar9);
          }
        }
        else {
          uVar10 = 0;
        }
        fStack_84 = fVar17 + fVar11 * (float)uVar10;
        fStack_78 = fVar14;
      }
      if (puVar7 < puVar6) {
        fStack_80 = fVar15 + 3.4028235e+38;
        fStack_7c = fVar11 + fStack_84;
        fVar14 = fStack_84;
        do {
          uVar4 = func_0x0030699c(&fStack_88,0);
          if ((uVar4 & 1) != 0) break;
          puVar3 = (undefined *)_memchr(puVar7,10,(long)puVar6 - (long)puVar7);
          fVar12 = fStack_78;
          puVar5 = puVar6;
          if (puVar3 != (undefined *)0x0) {
            puVar5 = puVar3;
          }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          fVar13 = (float)func_0x002ffe24(0xbf800000,puVar7,puVar5,0);
          fStack_78 = fVar12;
          if (fVar12 < fVar13) {
            fStack_78 = fVar13;
          }
          func_0x002ff610(fVar15,fVar14,puVar7,puVar5,0);
          puVar7 = puVar5 + 1;
          fStack_84 = fVar11 + fStack_84;
          fStack_7c = fVar11 + fStack_7c;
          fVar14 = fVar11 + fVar14;
        } while (puVar7 < puVar6);
        if (puVar7 < puVar6) {
          uVar10 = 0;
          if ((param_3 & 1) == 0) {
            do {
              fVar12 = fStack_78;
              puVar3 = (undefined *)_memchr(puVar7,10,(long)puVar6 - (long)puVar7);
              puVar5 = puVar6;
/*  do not claim this as your own  */
              if (puVar3 != (undefined *)0x0) {
                puVar5 = puVar3;
              }
              fVar13 = (float)func_0x002ffe24(0xbf800000,puVar7,puVar5,0);
              fStack_78 = fVar12;
              if (fVar12 < fVar13) {
                fStack_78 = fVar13;
              }
              puVar7 = puVar5 + 1;
              uVar10 = uVar10 + 1;
            } while (puVar7 < puVar6);
          }
          else {
            do {
              puVar5 = (undefined *)_memchr(puVar7,10,(long)puVar6 - (long)puVar7);
              puVar7 = puVar6;
              if (puVar5 != (undefined *)0x0) {
                puVar7 = puVar5;
/*  watermarked copy - do not remove  */
              }
              puVar7 = puVar7 + 1;
              uVar10 = uVar10 + 1;
            } while (puVar7 < puVar6);
          }
        }
        else {
          uVar10 = 0;
        }
        fStack_84 = fVar14 + fVar11 * (float)uVar10;
      }
      _fStack_78 = CONCAT44(fStack_84 - fVar17,fStack_78);
      fStack_80 = fVar15 + fStack_78;
      fStack_7c = fVar17 + (fStack_84 - fVar17);
      fStack_88 = fVar15;
      fStack_84 = fVar17;
/* thanks for reading - discord.gg/sdkhDjTex */
      func_0x003154fc(0,&fStack_78);
      FUN_00315614(&fStack_88,0,0,0);
    }
  }
  return;
}

