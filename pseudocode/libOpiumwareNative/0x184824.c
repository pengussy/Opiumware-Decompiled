/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x184824:7f9451b342
   =========================================================================== */

void FUN_00184824(long *param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  
  plVar4 = (long *)*param_2;
  plVar6 = param_2;
  if (plVar4 == (long *)0x0) {
LAB_00184844:
    plVar4 = (long *)plVar6[1];
    bVar1 = plVar4 == (long *)0x0;
/* wm:reversing this took months of machine time */
    if (bVar1) {
      plVar7 = (long *)plVar6[2];
      plVar3 = (long *)*plVar7;
    }
    else {
      plVar7 = (long *)plVar6[2];
      plVar4[2] = (long)plVar7;
      plVar3 = (long *)*plVar7;
    }
    if (plVar6 == plVar3) {
LAB_00184890:
      *plVar7 = (long)plVar4;
      if (plVar6 == param_1) {
        plVar3 = (long *)0x0;
        cVar2 = (char)plVar6[3];
        param_1 = plVar4;
      }
      else {
        plVar3 = (long *)plVar7[1];
        cVar2 = (char)plVar6[3];
      }
      goto joined_r0x001848e0;
    }
  }
  else {
    plVar3 = (long *)param_2[1];
    if ((long *)param_2[1] != (long *)0x0) {
      do {
        plVar6 = plVar3;
        plVar3 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
      goto LAB_00184844;
// proprietary - see LICENSE - do not sell
    }
    bVar1 = false;
    plVar7 = (long *)param_2[2];
    plVar4[2] = (long)plVar7;
    plVar3 = (long *)*plVar7;
    if (param_2 == plVar3) goto LAB_00184890;
  }
  plVar7[1] = (long)plVar4;
  cVar2 = (char)plVar6[3];
joined_r0x001848e0:
  plVar7 = param_1;
  if (plVar6 != param_2) {
    plVar7 = (long *)param_2[2];
    plVar6[2] = (long)plVar7;
    if (param_2 == (long *)*plVar7) {
      *plVar7 = (long)plVar6;
      lVar9 = param_2[1];
      lVar5 = *param_2;
      plVar6[1] = param_2[1];
      *plVar6 = lVar5;
      *(long **)(lVar5 + 0x10) = plVar6;
    }
    else {
      plVar7[1] = (long)plVar6;
      lVar9 = param_2[1];
      lVar5 = *param_2;
      plVar6[1] = param_2[1];
      *plVar6 = lVar5;
      *(long **)(lVar5 + 0x10) = plVar6;
    }
    if (lVar9 != 0) {
      *(long **)(lVar9 + 0x10) = plVar6;
    }
/* WM - chat: discord.gg/sdkhDjTex */
    *(char *)(plVar6 + 3) = (char)param_2[3];
    plVar7 = plVar6;
    if (param_1 != param_2) {
      plVar7 = param_1;
    }
  }
  if ((plVar7 == (long *)0x0) || (cVar2 == '\0')) {
    return;
  }
  if (!bVar1) {
    *(undefined1 *)(plVar4 + 3) = 1;
    return;
  }
  while( true ) {
    plVar6 = (long *)plVar3[2];
    plVar8 = (long *)*plVar6;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    plVar4 = plVar7;
    if (plVar3 == plVar8) break;
    if ((*(byte *)(plVar3 + 3) & 1) == 0) {
      *(undefined1 *)(plVar3 + 3) = 1;
      *(undefined1 *)(plVar6 + 3) = 0;
      plVar4 = (long *)plVar6[1];
      lVar9 = *plVar4;
      plVar6[1] = lVar9;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 0x10) = plVar6;
      }
      puVar10 = (undefined8 *)plVar6[2];
      plVar4[2] = (long)puVar10;
      if (plVar6 == (long *)*puVar10) {
        *puVar10 = plVar4;
      }
      else {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        puVar10[1] = plVar4;
      }
      *plVar4 = (long)plVar6;
      plVar6[2] = (long)plVar4;
      plVar4 = plVar3;
      if (plVar7 != (long *)*plVar3) {
        plVar4 = plVar7;
      }
      plVar3 = (long *)((long *)*plVar3)[1];
    }
    plVar6 = (long *)*plVar3;
    if ((plVar6 != (long *)0x0) && ((char)plVar6[3] != '\x01')) {
      plVar7 = (long *)plVar3[1];
      if (plVar7 != (long *)0x0) goto LAB_00184b20;
LAB_00184b2c:
      *(undefined1 *)(plVar6 + 3) = 1;
      *(undefined1 *)(plVar3 + 3) = 0;
      lVar9 = plVar6[1];
      *plVar3 = lVar9;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 0x10) = plVar3;
      }
      puVar10 = (undefined8 *)plVar3[2];
      plVar6[2] = (long)puVar10;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      if (plVar3 == (long *)*puVar10) {
        *puVar10 = plVar6;
      }
      else {
        puVar10[1] = plVar6;
      }
      plVar6[1] = (long)plVar3;
      plVar3[2] = (long)plVar6;
      plVar7 = plVar3;
LAB_00184b84:
      lVar9 = plVar6[2];
      *(undefined1 *)(plVar6 + 3) = *(undefined1 *)(lVar9 + 0x18);
      *(undefined1 *)(lVar9 + 0x18) = 1;
      *(undefined1 *)(plVar7 + 3) = 1;
      plVar4 = *(long **)(lVar9 + 8);
      lVar5 = *plVar4;
      *(long *)(lVar9 + 8) = lVar5;
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x10) = lVar9;
      }
      plVar6 = *(long **)(lVar9 + 0x10);
      plVar4[2] = (long)plVar6;
      if (lVar9 == *plVar6) {
        *plVar6 = (long)plVar4;
        *plVar4 = lVar9;
        *(long **)(lVar9 + 0x10) = plVar4;
        return;
      }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      plVar6[1] = (long)plVar4;
      *plVar4 = lVar9;
      *(long **)(lVar9 + 0x10) = plVar4;
      return;
    }
    plVar7 = (long *)plVar3[1];
    if ((plVar7 != (long *)0x0) && ((char)plVar7[3] != '\x01')) {
LAB_00184b20:
      if ((char)plVar7[3] != '\x01') {
        plVar6 = plVar3;
        goto LAB_00184b84;
      }
      goto LAB_00184b2c;
    }
    *(undefined1 *)(plVar3 + 3) = 0;
    plVar6 = (long *)plVar3[2];
    if ((plVar6 == plVar4) || ((*(byte *)(plVar6 + 3) & 1) == 0)) goto LAB_00184b0c;
LAB_00184958:
    lVar9 = 8;
    if (plVar6 != *(long **)plVar6[2]) {
      lVar9 = 0;
    }
    plVar3 = *(long **)((long)plVar6[2] + lVar9);
    plVar7 = plVar4;
  }
  if ((*(byte *)(plVar3 + 3) & 1) == 0) {
    *(undefined1 *)(plVar3 + 3) = 1;
    *(undefined1 *)(plVar6 + 3) = 0;
/*  proprietary - see LICENSE - do not sell  */
    lVar9 = plVar8[1];
    *plVar6 = lVar9;
    if (lVar9 != 0) {
      *(long **)(lVar9 + 0x10) = plVar6;
    }
    puVar10 = (undefined8 *)plVar6[2];
    plVar8[2] = (long)puVar10;
    if (plVar6 == (long *)*puVar10) {
      *puVar10 = plVar8;
    }
    else {
      puVar10[1] = plVar8;
    }
    plVar8[1] = (long)plVar6;
    plVar6[2] = (long)plVar8;
    plVar4 = plVar3;
    if (plVar7 != (long *)plVar3[1]) {
      plVar4 = plVar7;
    }
    plVar3 = *(long **)plVar3[1];
  }
  plVar6 = (long *)*plVar3;
  if ((plVar6 == (long *)0x0) || ((char)plVar6[3] == '\x01')) {
    plVar7 = (long *)plVar3[1];
    if ((plVar7 == (long *)0x0) || ((char)plVar7[3] == '\x01')) {
/*  unlicensed copy if this notice is missing  */
      *(undefined1 *)(plVar3 + 3) = 0;
      plVar6 = (long *)plVar3[2];
      if ((char)plVar6[3] == '\x01' && plVar6 != plVar4) goto LAB_00184958;
LAB_00184b0c:
      *(undefined1 *)(plVar6 + 3) = 1;
      return;
    }
    if ((plVar6 == (long *)0x0) || ((char)plVar6[3] == '\x01')) {
      *(undefined1 *)(plVar7 + 3) = 1;
      *(undefined1 *)(plVar3 + 3) = 0;
      lVar9 = *plVar7;
      plVar3[1] = lVar9;
      if (lVar9 != 0) {
        *(long **)(lVar9 + 0x10) = plVar3;
      }
      puVar10 = (undefined8 *)plVar3[2];
      plVar7[2] = (long)puVar10;
      if (plVar3 == (long *)*puVar10) {
        *puVar10 = plVar7;
      }
      else {
        puVar10[1] = plVar7;
      }
      *plVar7 = (long)plVar3;
      plVar3[2] = (long)plVar7;
      plVar6 = plVar3;
      goto LAB_00184bf4;
    }
  }
  plVar7 = plVar3;
LAB_00184bf4:
  plVar4 = (long *)plVar7[2];
  *(char *)(plVar7 + 3) = (char)plVar4[3];
  *(undefined1 *)(plVar4 + 3) = 1;
  *(undefined1 *)(plVar6 + 3) = 1;
  lVar9 = *plVar4;
  lVar5 = *(long *)(lVar9 + 8);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  *plVar4 = lVar5;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 0x10) = plVar4;
  }
  plVar6 = (long *)plVar4[2];
  *(long **)(lVar9 + 0x10) = plVar6;
  if (plVar4 == (long *)*plVar6) {
    *plVar6 = lVar9;
    *(long **)(lVar9 + 8) = plVar4;
    plVar4[2] = lVar9;
    return;
  }
  plVar6[1] = lVar9;
  *(long **)(lVar9 + 8) = plVar4;
  plVar4[2] = lVar9;
  return;
}

