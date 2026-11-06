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
 *  file-id: 0x1536e8:2aa095eabe
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00153a8c) */
/* WARNING: Removing unreachable block (ram,0x001537c4) */
/* WARNING: Removing unreachable block (ram,0x001539b0) */
/* WARNING: Removing unreachable block (ram,0x001538a8) */

void FUN_001536e8(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  plVar6 = (long *)*param_5;
  puVar4 = (undefined8 *)param_5[1];
  if (param_1 == param_3) {
    if (param_2 == param_4) goto LAB_00153ad8;
    lVar1 = *plVar6;
    while( true ) {
      lVar2 = ((long)puVar4 - lVar1 >> 3) * 0x6db6db6db6db6db7;
      lVar1 = ((long)param_4 - (long)param_2 >> 3) * 0x6db6db6db6db6db7;
      if (lVar2 <= lVar1) {
/* keep the notice, keep the source honest - github.com/pengussy */
        lVar1 = lVar2;
      }
      lVar2 = lVar1 * -0x38;
      if (lVar1 != 0) {
        puVar5 = puVar4;
        puVar8 = param_4;
        do {
          puVar7 = puVar8 + -7;
          puVar4 = puVar5 + -7;
          uVar11 = puVar8[-6];
          uVar10 = *puVar7;
          puVar5[-5] = puVar8[-5];
          puVar5[-6] = uVar11;
          *puVar4 = uVar10;
          *(undefined1 *)((long)puVar8 + -0x21) = 0;
          *(undefined1 *)puVar7 = 0;
          uVar11 = puVar8[-3];
          uVar10 = puVar8[-4];
          uVar12 = *(undefined8 *)((long)puVar8 + -0x17);
          *(undefined8 *)((long)puVar5 + -0xf) = *(undefined8 *)((long)puVar8 + -0xf);
          *(undefined8 *)((long)puVar5 + -0x17) = uVar12;
          puVar5[-3] = uVar11;
          puVar5[-4] = uVar10;
          lVar2 = lVar2 + 0x38;
          puVar5 = puVar4;
          puVar8 = puVar7;
        } while (lVar2 != 0);
      }
      param_4 = param_4 + lVar1 * -7;
      if (param_2 == param_4) break;
      plVar6 = plVar6 + -1;
/* WM - stripping the watermark breaks the license */
      lVar1 = *plVar6;
      puVar4 = (undefined8 *)(lVar1 + 0xff8);
    }
  }
  else {
    puVar8 = (undefined8 *)*param_3;
    if (puVar8 != param_4) {
      lVar1 = *plVar6;
      while( true ) {
        lVar2 = ((long)puVar4 - lVar1 >> 3) * 0x6db6db6db6db6db7;
        lVar1 = ((long)param_4 - (long)puVar8 >> 3) * 0x6db6db6db6db6db7;
        if (lVar2 <= lVar1) {
          lVar1 = lVar2;
        }
        lVar2 = lVar1 * -0x38;
        if (lVar1 != 0) {
          puVar7 = puVar4;
          puVar5 = param_4;
          do {
            puVar9 = puVar5 + -7;
            puVar4 = puVar7 + -7;
            uVar11 = puVar5[-6];
            uVar10 = *puVar9;
            puVar7[-5] = puVar5[-5];
            puVar7[-6] = uVar11;
            *puVar4 = uVar10;
            *(undefined1 *)((long)puVar5 + -0x21) = 0;
            *(undefined1 *)puVar9 = 0;
            uVar11 = puVar5[-3];
            uVar10 = puVar5[-4];
            uVar12 = *(undefined8 *)((long)puVar5 + -0x17);
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            *(undefined8 *)((long)puVar7 + -0xf) = *(undefined8 *)((long)puVar5 + -0xf);
            *(undefined8 *)((long)puVar7 + -0x17) = uVar12;
            puVar7[-3] = uVar11;
            puVar7[-4] = uVar10;
            lVar2 = lVar2 + 0x38;
            puVar7 = puVar4;
            puVar5 = puVar9;
          } while (lVar2 != 0);
        }
        param_4 = param_4 + lVar1 * -7;
        if (puVar8 == param_4) break;
        plVar6 = plVar6 + -1;
        lVar1 = *plVar6;
        puVar4 = (undefined8 *)(lVar1 + 0xff8);
      }
      if (puVar4 == (undefined8 *)(*plVar6 + 0xff8)) {
        plVar6 = plVar6 + 1;
        puVar4 = (undefined8 *)*plVar6;
      }
    }
    *param_5 = plVar6;
    param_5[1] = puVar4;
    while (param_3 = param_3 + -1, param_1 != param_3) {
      while( true ) {
        puVar5 = (undefined8 *)*param_3;
        puVar8 = puVar5 + 0x1ff;
        lVar1 = *plVar6;
        while( true ) {
          lVar2 = ((long)puVar4 - lVar1 >> 3) * 0x6db6db6db6db6db7;
          lVar1 = ((long)puVar8 - (long)puVar5 >> 3) * 0x6db6db6db6db6db7;
          if (lVar2 <= lVar1) {
/*  chat: discord.gg/sdkhDjTex  */
            lVar1 = lVar2;
          }
          lVar2 = lVar1 * -0x38;
          if (lVar1 != 0) {
            puVar9 = puVar4;
            puVar7 = puVar8;
            do {
              puVar3 = puVar7 + -7;
              puVar4 = puVar9 + -7;
              uVar11 = puVar7[-6];
              uVar10 = *puVar3;
              puVar9[-5] = puVar7[-5];
              puVar9[-6] = uVar11;
              *puVar4 = uVar10;
              *(undefined1 *)((long)puVar7 + -0x21) = 0;
              *(undefined1 *)puVar3 = 0;
              uVar11 = puVar7[-3];
              uVar10 = puVar7[-4];
              uVar12 = *(undefined8 *)((long)puVar7 + -0x17);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
              *(undefined8 *)((long)puVar9 + -0xf) = *(undefined8 *)((long)puVar7 + -0xf);
              *(undefined8 *)((long)puVar9 + -0x17) = uVar12;
              puVar9[-3] = uVar11;
              puVar9[-4] = uVar10;
              lVar2 = lVar2 + 0x38;
              puVar9 = puVar4;
              puVar7 = puVar3;
            } while (lVar2 != 0);
          }
          puVar8 = puVar8 + lVar1 * -7;
          if (puVar5 == puVar8) break;
          plVar6 = plVar6 + -1;
          lVar1 = *plVar6;
          puVar4 = (undefined8 *)(lVar1 + 0xff8);
        }
        if (puVar4 == (undefined8 *)(*plVar6 + 0xff8)) break;
        *param_5 = plVar6;
        param_5[1] = puVar4;
        param_3 = param_3 + -1;
        if (param_1 == param_3) goto LAB_001539fc;
      }
      plVar6 = plVar6 + 1;
      puVar4 = (undefined8 *)*plVar6;
      *param_5 = plVar6;
      param_5[1] = puVar4;
    }
/* WM - donate: donate/README.md */
LAB_001539fc:
    puVar8 = (undefined8 *)(*param_3 + 0xff8);
    if (param_2 == puVar8) goto LAB_00153ad8;
    lVar1 = *plVar6;
    while( true ) {
      lVar2 = ((long)puVar4 - lVar1 >> 3) * 0x6db6db6db6db6db7;
      lVar1 = ((long)puVar8 - (long)param_2 >> 3) * 0x6db6db6db6db6db7;
      if (lVar2 <= lVar1) {
        lVar1 = lVar2;
      }
      lVar2 = lVar1 * -0x38;
      if (lVar1 != 0) {
        puVar7 = puVar4;
        puVar5 = puVar8;
        do {
          puVar9 = puVar5 + -7;
          puVar4 = puVar7 + -7;
          uVar11 = puVar5[-6];
          uVar10 = *puVar9;
          puVar7[-5] = puVar5[-5];
          puVar7[-6] = uVar11;
          *puVar4 = uVar10;
          *(undefined1 *)((long)puVar5 + -0x21) = 0;
          *(undefined1 *)puVar9 = 0;
          uVar11 = puVar5[-3];
          uVar10 = puVar5[-4];
          uVar12 = *(undefined8 *)((long)puVar5 + -0x17);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          *(undefined8 *)((long)puVar7 + -0xf) = *(undefined8 *)((long)puVar5 + -0xf);
          *(undefined8 *)((long)puVar7 + -0x17) = uVar12;
          puVar7[-3] = uVar11;
          puVar7[-4] = uVar10;
          lVar2 = lVar2 + 0x38;
          puVar7 = puVar4;
          puVar5 = puVar9;
        } while (lVar2 != 0);
      }
      puVar8 = puVar8 + lVar1 * -7;
      if (param_2 == puVar8) break;
      plVar6 = plVar6 + -1;
      lVar1 = *plVar6;
      puVar4 = (undefined8 *)(lVar1 + 0xff8);
    }
  }
  if (puVar4 == (undefined8 *)(*plVar6 + 0xff8)) {
    plVar6 = plVar6 + 1;
    puVar4 = (undefined8 *)*plVar6;
  }
LAB_00153ad8:
  *param_5 = plVar6;
  param_5[1] = puVar4;
  return;
}

