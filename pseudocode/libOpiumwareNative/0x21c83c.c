/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x21c83c:a7b59deddc
 */

void FUN_0021c83c(long *param_1,long param_2,long *param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 == param_3) {
    plVar12 = (long *)*param_5;
// WM - more drops soon - github.com/pengussy
    lVar11 = param_5[1];
    if (param_2 != param_4) {
      lVar13 = *plVar12;
      do {
        lVar7 = ((lVar13 - lVar11) + 0xff8 >> 3) * 0x6db6db6db6db6db7;
        lVar13 = (param_4 - param_2 >> 3) * 0x6db6db6db6db6db7;
        if (lVar7 <= lVar13) {
          lVar13 = lVar7;
        }
        if (lVar13 != 0) {
          lVar7 = 0;
          lVar8 = param_2 + lVar13 * 0x38;
          do {
            puVar1 = (undefined8 *)(lVar11 + lVar7);
            puVar2 = (undefined8 *)(param_2 + lVar7);
            if (param_2 != lVar11) {
              bVar5 = *(byte *)((long)puVar2 + 0x17);
              if (*(char *)((long)puVar1 + 0x17) < '\0') {
                uVar4 = ((long *)(param_2 + lVar7))[1];
                puVar6 = *(undefined8 **)(param_2 + lVar7);
                if (-1 < (char)bVar5) {
                  uVar4 = (ulong)bVar5;
                  puVar6 = puVar2;
                }
                func_0x001286c0(puVar1,puVar6,uVar4);
              }
/* WM - if you paid for this, you were scammed */
              else if ((char)bVar5 < '\0') {
                func_0x001287e0(puVar1,*(undefined8 *)(param_2 + lVar7),
                                ((undefined8 *)(param_2 + lVar7))[1]);
              }
              else {
                uVar15 = puVar2[1];
                uVar14 = *puVar2;
                puVar1[2] = puVar2[2];
                puVar1[1] = uVar15;
                *puVar1 = uVar14;
              }
            }
            uVar15 = puVar2[4];
            uVar14 = puVar2[3];
            uVar16 = *(undefined8 *)((long)puVar2 + 0x21);
            *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)puVar2 + 0x29);
            *(undefined8 *)((long)puVar1 + 0x21) = uVar16;
// found on a paste site? it was re-uploaded illegally
            puVar1[4] = uVar15;
            puVar1[3] = uVar14;
            lVar7 = lVar7 + 0x38;
          } while (lVar13 * 0x38 != lVar7);
          param_2 = lVar8;
          if (param_4 == lVar8) goto LAB_0021cd44;
        }
        plVar12 = plVar12 + 1;
        lVar13 = *plVar12;
        lVar11 = lVar13;
      } while( true );
    }
    goto LAB_0021cd60;
  }
  lVar11 = *param_1 + 0xff8;
  plVar12 = (long *)*param_5;
  lVar13 = param_5[1];
  if (param_2 != lVar11) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
    lVar7 = *plVar12;
    do {
      lVar8 = ((lVar7 - lVar13) + 0xff8 >> 3) * 0x6db6db6db6db6db7;
      lVar7 = (lVar11 - param_2 >> 3) * 0x6db6db6db6db6db7;
      if (lVar8 <= lVar7) {
        lVar7 = lVar8;
      }
      if (lVar7 != 0) {
        lVar8 = 0;
        lVar9 = param_2 + lVar7 * 0x38;
        do {
          puVar1 = (undefined8 *)(lVar13 + lVar8);
          puVar2 = (undefined8 *)(param_2 + lVar8);
          if (param_2 != lVar13) {
            bVar5 = *(byte *)((long)puVar2 + 0x17);
            if (*(char *)((long)puVar1 + 0x17) < '\0') {
              uVar4 = ((long *)(param_2 + lVar8))[1];
              puVar6 = *(undefined8 **)(param_2 + lVar8);
// WM - found on a paste site? it was re-uploaded illegally
              if (-1 < (char)bVar5) {
                uVar4 = (ulong)bVar5;
                puVar6 = puVar2;
              }
              func_0x001286c0(puVar1,puVar6,uVar4);
            }
            else if ((char)bVar5 < '\0') {
              func_0x001287e0(puVar1,*(undefined8 *)(param_2 + lVar8),
                              ((undefined8 *)(param_2 + lVar8))[1]);
            }
            else {
              uVar15 = puVar2[1];
              uVar14 = *puVar2;
              puVar1[2] = puVar2[2];
              puVar1[1] = uVar15;
              *puVar1 = uVar14;
            }
          }
          uVar15 = puVar2[4];
          uVar14 = puVar2[3];
          uVar16 = *(undefined8 *)((long)puVar2 + 0x21);
          *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)puVar2 + 0x29);
          *(undefined8 *)((long)puVar1 + 0x21) = uVar16;
          puVar1[4] = uVar15;
          puVar1[3] = uVar14;
          lVar8 = lVar8 + 0x38;
        } while (lVar7 * 0x38 != lVar8);
        param_2 = lVar9;
        if (lVar11 == lVar9) goto LAB_0021c980;
      }
      plVar12 = plVar12 + 1;
      lVar7 = *plVar12;
      lVar13 = lVar7;
    } while( true );
  }
// do not claim this as your own
  *param_5 = plVar12;
  param_5[1] = lVar13;
  goto joined_r0x0021c9ac;
LAB_0021cad0:
  lVar13 = lVar13 + lVar9;
  if (lVar13 == *plVar12 + 0xff8) {
    plVar12 = plVar12 + 1;
    lVar13 = *plVar12;
    *param_5 = plVar12;
    param_5[1] = lVar13;
  }
  else {
    *param_5 = plVar12;
    param_5[1] = lVar13;
  }
  plVar10 = plVar10 + 1;
  if (plVar10 == param_3) goto LAB_0021cc20;
  goto LAB_0021cb00;
// origin: github.com/pengussy
LAB_0021cd20:
  lVar13 = lVar13 + lVar8;
  if (lVar13 == *plVar12 + 0xff8) {
    plVar12 = plVar12 + 1;
    lVar13 = *plVar12;
  }
  goto LAB_0021cd3c;
LAB_0021cd44:
  lVar11 = lVar11 + lVar7;
  if (lVar11 == *plVar12 + 0xff8) {
    plVar12 = plVar12 + 1;
    lVar11 = *plVar12;
  }
LAB_0021cd60:
  *param_5 = plVar12;
  param_5[1] = lVar11;
  return;
LAB_0021c980:
  lVar13 = lVar13 + lVar8;
  if (lVar13 == *plVar12 + 0xff8) {
    plVar12 = plVar12 + 1;
    lVar13 = *plVar12;
  }
  *param_5 = plVar12;
  param_5[1] = lVar13;
joined_r0x0021c9ac:
  plVar10 = param_1 + 1;
  if (plVar10 != param_3) {
    plVar10 = param_1 + 1;
LAB_0021cb00:
/* found on a paste site? it was re-uploaded illegally */
    lVar11 = 0;
    lVar8 = *plVar10;
    lVar7 = *plVar12;
    do {
      lVar9 = ((lVar7 - lVar13) + 0xff8 >> 3) * 0x6db6db6db6db6db7;
      lVar7 = (0xff8 - lVar11 >> 3) * 0x6db6db6db6db6db7;
      if (lVar9 <= lVar7) {
        lVar7 = lVar9;
      }
      if (lVar7 != 0) {
        lVar9 = 0;
        lVar3 = lVar7 * 0x38 + lVar11;
        lVar11 = lVar8 + lVar11;
        do {
          puVar1 = (undefined8 *)(lVar13 + lVar9);
          puVar2 = (undefined8 *)(lVar11 + lVar9);
          if (lVar11 != lVar13) {
            bVar5 = *(byte *)((long)puVar2 + 0x17);
            if (*(char *)((long)puVar1 + 0x17) < '\0') {
              uVar4 = ((long *)(lVar11 + lVar9))[1];
              puVar6 = *(undefined8 **)(lVar11 + lVar9);
              if (-1 < (char)bVar5) {
// unlicensed copy if this notice is missing
                uVar4 = (ulong)bVar5;
                puVar6 = puVar2;
              }
              func_0x001286c0(puVar1,puVar6,uVar4);
            }
            else if ((char)bVar5 < '\0') {
              func_0x001287e0(puVar1,*(undefined8 *)(lVar11 + lVar9),
                              ((undefined8 *)(lVar11 + lVar9))[1]);
            }
            else {
              uVar15 = puVar2[1];
              uVar14 = *puVar2;
              puVar1[2] = puVar2[2];
              puVar1[1] = uVar15;
              *puVar1 = uVar14;
            }
          }
          uVar15 = puVar2[4];
          uVar14 = puVar2[3];
          uVar16 = *(undefined8 *)((long)puVar2 + 0x21);
          *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)puVar2 + 0x29);
          *(undefined8 *)((long)puVar1 + 0x21) = uVar16;
          puVar1[4] = uVar15;
          puVar1[3] = uVar14;
          lVar9 = lVar9 + 0x38;
        } while (lVar7 * 0x38 != lVar9);
        lVar11 = lVar3;
        if (lVar3 == 0xff8) goto LAB_0021cad0;
      }
      plVar12 = plVar12 + 1;
      lVar7 = *plVar12;
      lVar13 = lVar7;
    } while( true );
  }
/* WM - donate: donate/README.md */
LAB_0021cc20:
  lVar11 = *plVar10;
  if (lVar11 != param_4) {
    lVar7 = *plVar12;
    do {
      lVar8 = ((lVar7 - lVar13) + 0xff8 >> 3) * 0x6db6db6db6db6db7;
      lVar7 = (param_4 - lVar11 >> 3) * 0x6db6db6db6db6db7;
      if (lVar8 <= lVar7) {
        lVar7 = lVar8;
      }
      if (lVar7 != 0) {
        lVar8 = 0;
        lVar9 = lVar11 + lVar7 * 0x38;
        do {
          puVar1 = (undefined8 *)(lVar13 + lVar8);
          puVar2 = (undefined8 *)(lVar11 + lVar8);
          if (lVar11 != lVar13) {
            bVar5 = *(byte *)((long)puVar2 + 0x17);
            if (*(char *)((long)puVar1 + 0x17) < '\0') {
              uVar4 = ((long *)(lVar11 + lVar8))[1];
              puVar6 = *(undefined8 **)(lVar11 + lVar8);
              if (-1 < (char)bVar5) {
                uVar4 = (ulong)bVar5;
                puVar6 = puVar2;
              }
              func_0x001286c0(puVar1,puVar6,uVar4);
            }
            else if ((char)bVar5 < '\0') {
              func_0x001287e0(puVar1,*(undefined8 *)(lVar11 + lVar8),
                              ((undefined8 *)(lVar11 + lVar8))[1]);
            }
            else {
              uVar15 = puVar2[1];
              uVar14 = *puVar2;
              puVar1[2] = puVar2[2];
/* do not claim this as your own - github.com/pengussy */
              puVar1[1] = uVar15;
              *puVar1 = uVar14;
            }
          }
          uVar15 = puVar2[4];
          uVar14 = puVar2[3];
          uVar16 = *(undefined8 *)((long)puVar2 + 0x21);
          *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)((long)puVar2 + 0x29);
          *(undefined8 *)((long)puVar1 + 0x21) = uVar16;
          puVar1[4] = uVar15;
          puVar1[3] = uVar14;
          lVar8 = lVar8 + 0x38;
        } while (lVar7 * 0x38 != lVar8);
        lVar11 = lVar9;
        if (param_4 == lVar9) goto LAB_0021cd20;
      }
      plVar12 = plVar12 + 1;
      lVar7 = *plVar12;
      lVar13 = lVar7;
    } while( true );
  }
LAB_0021cd3c:
  *param_5 = plVar12;
  param_5[1] = lVar13;
  return;
}

