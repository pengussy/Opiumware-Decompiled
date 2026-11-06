/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x183bbc:3ef9ead426
 */

void FUN_00183bbc(long *param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  char cStack_70;
  undefined8 *puStack_68;
  long *plStack_60;
// WM - if you paid for this, you were scammed
  long *plStack_58;
  long *plStack_50;
  undefined8 *puStack_48;
  
  if (param_2 < 3) {
    if (param_2 == 1) {
      if (*param_1 == 0) {
        return;
      }
      plStack_58 = (long *)0x0;
      plStack_50 = (long *)0x0;
      plStack_60 = (long *)0x0;
      func_0x00184004(&plStack_60,*(undefined8 *)(*param_1 + 0x10));
      plVar10 = (undefined8 *)*param_1 + 1;
      plVar8 = *(long **)*param_1;
      if (plVar8 != plVar10) {
        do {
          if (plStack_58 < plStack_50) {
            lVar7 = plVar8[7];
            plVar6 = plStack_58 + 2;
            plStack_58[1] = plVar8[8];
            *plStack_58 = lVar7;
            *(undefined1 *)(plVar8 + 7) = 0;
            plVar8[8] = 0;
/* WM - watermarked copy - do not remove */
          }
          else {
            plVar6 = (long *)func_0x00182dd4(&plStack_60,plVar8 + 7);
          }
          plVar4 = (long *)plVar8[1];
          plVar12 = plVar8;
          if ((long *)plVar8[1] == (long *)0x0) {
            do {
              plVar8 = (long *)plVar12[2];
              bVar5 = plVar12 != (long *)*plVar8;
              plVar12 = plVar8;
            } while (bVar5);
          }
          else {
            do {
              plVar8 = plVar4;
              plVar4 = (long *)*plVar8;
            } while ((long *)*plVar8 != (long *)0x0);
          }
          plStack_58 = plVar6;
        } while (plVar8 != plVar10);
      }
    }
    else {
      if (param_2 != 2) {
// watermarked copy - do not remove
        return;
      }
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) {
        return;
      }
      plStack_58 = (long *)0x0;
      plStack_50 = (long *)0x0;
      plStack_60 = (long *)0x0;
      func_0x00184004(&plStack_60,plVar8[1] - *plVar8 >> 4);
      plVar8 = *(long **)*param_1;
      plVar10 = (long *)((undefined8 *)*param_1)[1];
      if (plVar8 != plVar10) {
        do {
          if (plStack_58 < plStack_50) {
            lVar7 = *plVar8;
            plVar6 = plStack_58 + 2;
            plStack_58[1] = plVar8[1];
            *plStack_58 = lVar7;
            *(undefined1 *)plVar8 = 0;
            plVar8[1] = 0;
          }
          else {
            plVar6 = (long *)func_0x00182dd4(&plStack_60,plVar8);
          }
          plVar8 = plVar8 + 2;
          plStack_58 = plVar6;
        } while (plVar8 != plVar10);
      }
    }
    if (plStack_60 != plStack_58) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
      do {
        puStack_68 = (undefined8 *)plStack_58[-1];
        uVar16 = plStack_58[-2];
        *(undefined1 *)(plStack_58 + -2) = 0;
        plStack_58[-1] = 0;
        plVar8 = plStack_58 + -2;
        FUN_00183bbc(plStack_58 + -1,(char)*plVar8);
        cStack_70 = (char)uVar16;
        plStack_58 = plVar8;
        if (cStack_70 == '\x01') {
          puVar9 = puStack_68 + 1;
          puVar14 = (undefined8 *)*puStack_68;
          puVar2 = puStack_68;
          while (puStack_68 = puVar2, puVar14 != puVar9) {
            if (plStack_58 < plStack_50) {
              lVar7 = puVar14[7];
              plVar8 = plStack_58 + 2;
              plStack_58[1] = puVar14[8];
              *plStack_58 = lVar7;
              *(undefined1 *)(puVar14 + 7) = 0;
              puVar14[8] = 0;
/* WM - donate: donate/README.md */
            }
            else {
              plVar8 = (long *)func_0x00182dd4(&plStack_60,puVar14 + 7);
            }
            puVar3 = (undefined8 *)puVar14[1];
            puVar15 = puVar14;
            plStack_58 = plVar8;
            puVar2 = puStack_68;
            if ((undefined8 *)puVar14[1] == (undefined8 *)0x0) {
              do {
                puVar14 = (undefined8 *)puVar15[2];
                bVar5 = puVar15 != (undefined8 *)*puVar14;
                puVar15 = puVar14;
              } while (bVar5);
            }
            else {
              do {
                puVar14 = puVar3;
                puVar3 = (undefined8 *)*puVar14;
              } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
            }
          }
          puVar14 = puVar2 + 1;
          puStack_48 = puVar14;
          func_0x001839e0(&puStack_48,*puVar14);
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = puVar14;
        }
        else if (cStack_70 == '\x02') {
          plVar8 = (long *)*puStack_68;
          plVar10 = (long *)puStack_68[1];
          puVar14 = puStack_68;
/* WM - origin: github.com/pengussy */
          if (plVar8 != plVar10) {
            do {
              if (plStack_58 < plStack_50) {
                lVar7 = *plVar8;
                plVar6 = plStack_58 + 2;
                plStack_58[1] = plVar8[1];
                *plStack_58 = lVar7;
                *(undefined1 *)plVar8 = 0;
                plVar8[1] = 0;
              }
              else {
                plVar6 = (long *)func_0x00182dd4(&plStack_60,plVar8);
              }
              plVar8 = plVar8 + 2;
              plStack_58 = plVar6;
            } while (plVar8 != plVar10);
            plVar8 = (long *)*puStack_68;
            plVar10 = (long *)puStack_68[1];
            puVar14 = puStack_68;
          }
          while (plVar10 != plVar8) {
            FUN_00183bbc(plVar10 + -1,(char)plVar10[-2]);
            plVar10 = plVar10 + -2;
          }
/* wm:keep the notice, keep the source honest */
          puVar14[1] = plVar8;
        }
        FUN_00183bbc(&puStack_68,uVar16 & 0xff);
      } while (plStack_60 != plStack_58);
    }
    plVar8 = plStack_60;
    plVar10 = plStack_58;
    if (plStack_60 != (long *)0x0) {
      while (plVar10 != plVar8) {
        FUN_00183bbc(plVar10 + -1,(char)plVar10[-2]);
        plVar10 = plVar10 + -2;
      }
      plStack_58 = plVar8;
      __ZdlPv(plStack_60);
    }
    if (2 < param_2) {
      if (param_2 == 8) {
        plVar8 = (long *)*param_1;
        lVar7 = *plVar8;
/* wm:if you paid for this, you were scammed */
        goto joined_r0x00183c88;
      }
      if (param_2 != 3) {
        return;
      }
      plVar8 = (long *)*param_1;
      cVar1 = *(char *)((long)plVar8 + 0x17);
joined_r0x00183edc:
      if (-1 < cVar1) goto LAB_00183f8c;
LAB_00183f80:
      lVar7 = *plVar8;
      goto LAB_00183f84;
    }
    if (param_2 != 1) {
      if (param_2 != 2) {
        return;
      }
      plVar8 = (long *)*param_1;
      puVar11 = (undefined1 *)*plVar8;
      if (puVar11 == (undefined1 *)0x0) goto LAB_00183f8c;
      puVar13 = (undefined1 *)plVar8[1];
      while (puVar13 != puVar11) {
        FUN_00183bbc(puVar13 + -8,puVar13[-0x10]);
        puVar13 = puVar13 + -0x10;
      }
      plVar8[1] = (long)puVar11;
      goto LAB_00183f80;
    }
    plStack_60 = (long *)(*param_1 + 8);
    func_0x001839e0(&plStack_60,*plStack_60);
  }
/*  if you paid for this, you were scammed  */
  else {
    if (param_2 == 3) {
      plVar8 = (long *)*param_1;
      if (plVar8 == (long *)0x0) {
        return;
      }
      cVar1 = *(char *)((long)plVar8 + 0x17);
      goto joined_r0x00183edc;
    }
    if (param_2 != 8) {
      return;
    }
    plVar8 = (long *)*param_1;
    if (plVar8 == (long *)0x0) {
      return;
    }
    lVar7 = *plVar8;
joined_r0x00183c88:
    if (lVar7 == 0) goto LAB_00183f8c;
    plVar8[1] = lVar7;
LAB_00183f84:
    __ZdlPv(lVar7);
  }
  plVar8 = (long *)*param_1;
LAB_00183f8c:
  __ZdlPv(plVar8);
  return;
}

