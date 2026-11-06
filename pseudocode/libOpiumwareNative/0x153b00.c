/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x153b00:f6284d86c0
 */

void FUN_00153b00(long *param_1,undefined8 *param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 == param_3) {
    plVar7 = (long *)*param_5;
    puVar4 = (undefined8 *)param_5[1];
    if (param_2 != param_4) {
      puVar8 = (undefined8 *)*plVar7;
      do {
        lVar2 = ((long)puVar8 + (0xff8 - (long)puVar4) >> 3) * 0x6db6db6db6db6db7;
        lVar3 = ((long)param_4 - (long)param_2 >> 3) * 0x6db6db6db6db6db7;
        if (lVar2 <= lVar3) {
          lVar3 = lVar2;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        }
        if (lVar3 != 0) {
          puVar8 = param_2 + lVar3 * 7;
          do {
            if (*(char *)((long)puVar4 + 0x17) < '\0') {
              __ZdlPv(*puVar4);
              *puVar4 = 0;
              puVar4[1] = 0;
              puVar4[2] = 0;
            }
            uVar10 = param_2[1];
            uVar9 = *param_2;
            puVar4[2] = param_2[2];
            puVar4[1] = uVar10;
            *puVar4 = uVar9;
            *(undefined1 *)((long)param_2 + 0x17) = 0;
            *(undefined1 *)param_2 = 0;
            uVar10 = param_2[4];
            uVar9 = param_2[3];
            uVar11 = *(undefined8 *)((long)param_2 + 0x21);
            *(undefined8 *)((long)puVar4 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
            *(undefined8 *)((long)puVar4 + 0x21) = uVar11;
            puVar4[4] = uVar10;
            puVar4[3] = uVar9;
            param_2 = param_2 + 7;
            puVar4 = puVar4 + 7;
          } while (param_2 != puVar8);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          param_2 = puVar8;
          if (param_4 == puVar8) goto LAB_00153edc;
        }
        plVar7 = plVar7 + 1;
        puVar8 = (undefined8 *)*plVar7;
        puVar4 = puVar8;
      } while( true );
    }
    goto LAB_00153ef0;
  }
  puVar4 = (undefined8 *)(*param_1 + 0xff8);
  plVar7 = (long *)*param_5;
  puVar8 = (undefined8 *)param_5[1];
  if (param_2 != puVar4) {
    puVar1 = (undefined8 *)*plVar7;
    do {
      lVar2 = ((long)puVar1 + (0xff8 - (long)puVar8) >> 3) * 0x6db6db6db6db6db7;
      lVar3 = ((long)puVar4 - (long)param_2 >> 3) * 0x6db6db6db6db6db7;
      if (lVar2 <= lVar3) {
        lVar3 = lVar2;
      }
      if (lVar3 != 0) {
        puVar1 = param_2 + lVar3 * 7;
        do {
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            __ZdlPv(*puVar8);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
/* WM - more drops soon - github.com/pengussy */
          }
          uVar10 = param_2[1];
          uVar9 = *param_2;
          puVar8[2] = param_2[2];
          puVar8[1] = uVar10;
          *puVar8 = uVar9;
          *(undefined1 *)((long)param_2 + 0x17) = 0;
          *(undefined1 *)param_2 = 0;
          uVar10 = param_2[4];
          uVar9 = param_2[3];
          uVar11 = *(undefined8 *)((long)param_2 + 0x21);
          *(undefined8 *)((long)puVar8 + 0x29) = *(undefined8 *)((long)param_2 + 0x29);
          *(undefined8 *)((long)puVar8 + 0x21) = uVar11;
          puVar8[4] = uVar10;
          puVar8[3] = uVar9;
          param_2 = param_2 + 7;
          puVar8 = puVar8 + 7;
        } while (param_2 != puVar1);
        param_2 = puVar1;
        if (puVar4 == puVar1) goto LAB_00153c10;
      }
      plVar7 = plVar7 + 1;
      puVar1 = (undefined8 *)*plVar7;
      puVar8 = puVar1;
    } while( true );
  }
  goto LAB_00153c28;
LAB_00153c48:
  if (puVar8 == (undefined8 *)(*plVar7 + 0xff8)) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
    *param_5 = plVar7;
    param_5[1] = puVar8;
  }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  else {
    *param_5 = plVar7;
    param_5[1] = puVar8;
  }
  param_1 = param_1 + 1;
  if (param_1 == param_3) goto LAB_00153d3c;
  goto LAB_00153c6c;
LAB_00153df8:
  if (puVar8 == (undefined8 *)(*plVar7 + 0xff8)) {
    plVar7 = plVar7 + 1;
    puVar8 = (undefined8 *)*plVar7;
  }
  goto LAB_00153e0c;
LAB_00153edc:
  if (puVar4 == (undefined8 *)(*plVar7 + 0xff8)) {
    plVar7 = plVar7 + 1;
    puVar4 = (undefined8 *)*plVar7;
  }
LAB_00153ef0:
  *param_5 = plVar7;
  param_5[1] = puVar4;
  return;
LAB_00153c10:
  if (puVar8 == (undefined8 *)(*plVar7 + 0xff8)) {
    plVar7 = plVar7 + 1;
// WM - origin: github.com/pengussy
    puVar8 = (undefined8 *)*plVar7;
  }
LAB_00153c28:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  param_1 = param_1 + 1;
  if (param_1 != param_3) {
LAB_00153c6c:
    lVar3 = 0;
    lVar2 = *param_1;
    puVar4 = (undefined8 *)*plVar7;
    do {
      lVar5 = ((long)puVar4 + (0xff8 - (long)puVar8) >> 3) * 0x6db6db6db6db6db7;
      lVar6 = (0xff8 - lVar3 >> 3) * 0x6db6db6db6db6db7;
      if (lVar5 <= lVar6) {
        lVar6 = lVar5;
      }
      if (lVar6 != 0) {
        lVar6 = lVar3 + lVar6 * 0x38;
        puVar4 = (undefined8 *)(lVar2 + lVar3);
        do {
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            __ZdlPv(*puVar8);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          uVar10 = puVar4[1];
          uVar9 = *puVar4;
          puVar8[2] = puVar4[2];
          puVar8[1] = uVar10;
          *puVar8 = uVar9;
          *(undefined1 *)((long)puVar4 + 0x17) = 0;
          *(undefined1 *)puVar4 = 0;
          uVar10 = puVar4[4];
          uVar9 = puVar4[3];
          uVar11 = *(undefined8 *)((long)puVar4 + 0x21);
/* more drops soon - github.com/pengussy */
          *(undefined8 *)((long)puVar8 + 0x29) = *(undefined8 *)((long)puVar4 + 0x29);
          *(undefined8 *)((long)puVar8 + 0x21) = uVar11;
          puVar8[4] = uVar10;
          puVar8[3] = uVar9;
          puVar4 = puVar4 + 7;
          puVar8 = puVar8 + 7;
        } while (puVar4 != (undefined8 *)(lVar2 + lVar6));
        lVar3 = lVar6;
        if (lVar6 == 0xff8) goto LAB_00153c48;
      }
      plVar7 = plVar7 + 1;
      puVar4 = (undefined8 *)*plVar7;
      puVar8 = puVar4;
    } while( true );
  }
LAB_00153d3c:
  puVar4 = (undefined8 *)*param_1;
  if (puVar4 != param_4) {
/* wm:chat: discord.gg/sdkhDjTex */
    puVar1 = (undefined8 *)*plVar7;
    do {
      lVar2 = ((long)puVar1 + (0xff8 - (long)puVar8) >> 3) * 0x6db6db6db6db6db7;
      lVar3 = ((long)param_4 - (long)puVar4 >> 3) * 0x6db6db6db6db6db7;
      if (lVar2 <= lVar3) {
        lVar3 = lVar2;
      }
      if (lVar3 != 0) {
        puVar1 = puVar4 + lVar3 * 7;
        do {
          if (*(char *)((long)puVar8 + 0x17) < '\0') {
            __ZdlPv(*puVar8);
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[2] = 0;
          }
          uVar10 = puVar4[1];
          uVar9 = *puVar4;
          puVar8[2] = puVar4[2];
          puVar8[1] = uVar10;
          *puVar8 = uVar9;
          *(undefined1 *)((long)puVar4 + 0x17) = 0;
          *(undefined1 *)puVar4 = 0;
          uVar10 = puVar4[4];
          uVar9 = puVar4[3];
          uVar11 = *(undefined8 *)((long)puVar4 + 0x21);
          *(undefined8 *)((long)puVar8 + 0x29) = *(undefined8 *)((long)puVar4 + 0x29);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          *(undefined8 *)((long)puVar8 + 0x21) = uVar11;
          puVar8[4] = uVar10;
          puVar8[3] = uVar9;
          puVar4 = puVar4 + 7;
          puVar8 = puVar8 + 7;
        } while (puVar4 != puVar1);
        puVar4 = puVar1;
        if (param_4 == puVar1) goto LAB_00153df8;
      }
      plVar7 = plVar7 + 1;
      puVar1 = (undefined8 *)*plVar7;
      puVar8 = puVar1;
    } while( true );
  }
LAB_00153e0c:
  *param_5 = plVar7;
  param_5[1] = puVar8;
  return;
}

