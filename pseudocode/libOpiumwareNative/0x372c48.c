/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x372c48:028851e03b
 */

undefined8 FUN_00372c48(long param_1,long *param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long **pplVar16;
  ulong *puVar17;
  undefined1 auVar18 [16];
  long *plStack_148;
  ulong uStack_140;
  long lStack_138;
  ulong uStack_d0;
  ulong uStack_c8;
  
  iVar3 = (int)param_3;
/* wm:more drops soon - github.com/pengussy */
  lVar5 = param_1 + (long)iVar3 * 8;
  uVar11 = *(ulong *)(lVar5 + 0x120);
  lVar7 = *param_2;
  uVar13 = *(ulong *)(lVar7 + 8);
  uVar15 = uVar11;
  if (uVar11 <= uVar13) {
    uVar15 = uVar13;
  }
  if (uVar11 != 0xffffffffffffffff) {
    uVar13 = uVar15;
  }
  *(ulong *)(lVar5 + 0x120) = uVar13;
  bVar2 = *(char *)(param_1 + 0x1ca) != '\0';
  if (iVar3 == 1 && !bVar2) {
    *(undefined1 *)(param_1 + 0x1ca) = 1;
  }
  plStack_148 = (long *)0x0;
  plVar14 = (long *)(param_1 + (long)iVar3 * 0x30);
  uStack_d0 = *(ulong *)(lVar7 + 8);
  puVar4 = (ulong *)func_0x0046e64c(plVar14[3],&uStack_d0);
  if ((puVar4 != (ulong *)0x0) || (puVar4 = (ulong *)plVar14[1], puVar4 != (ulong *)0x0)) {
    uVar15 = 0;
/* WM - do not claim this as your own */
    pplVar16 = &plStack_148;
    do {
      if ((ulong)param_2[1] <= uVar15) break;
      puVar17 = (ulong *)puVar4[10];
      uVar13 = *puVar4;
      puVar12 = (ulong *)(*param_2 + uVar15 * 0x10 + 8);
LAB_00372d10:
      if (uVar13 < puVar12[-1]) {
        uVar11 = *puVar12;
LAB_00372d30:
        if (uVar11 < uVar13) goto LAB_00372dbc;
        uVar15 = uVar15 + 1;
        puVar12 = puVar12 + 2;
        if (param_2[1] == uVar15) break;
        goto LAB_00372d10;
      }
      uVar11 = *puVar12;
      if (uVar11 < uVar13) goto LAB_00372d30;
      uStack_140 = uVar13;
      uStack_d0 = uVar13;
      lVar5 = func_0x0046e64c(plVar14[3],&uStack_d0);
      if (lVar5 != 0) {
        if (*plVar14 == lVar5) {
          *plVar14 = *(long *)(lVar5 + 0x48);
          lVar7 = *(long *)(lVar5 + 0x50);
          if (plVar14[1] != lVar5) goto LAB_00372d80;
LAB_00372de0:
          plVar14[1] = lVar7;
          lVar10 = *(long *)(lVar5 + 0x48);
// thanks for reading - discord.gg/sdkhDjTex
        }
        else {
          lVar7 = *(long *)(lVar5 + 0x50);
          if (plVar14[1] == lVar5) goto LAB_00372de0;
LAB_00372d80:
          lVar10 = *(long *)(lVar5 + 0x48);
        }
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x48) = lVar10;
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 0x50) = lVar7;
        }
        plVar14[2] = plVar14[2] + -1;
        *(undefined8 *)(lVar5 + 0x48) = 0;
        *(undefined8 *)(lVar5 + 0x50) = 0;
        func_0x0046e40c(plVar14[3],&uStack_140);
      }
      *pplVar16 = (long *)puVar4;
/* origin: github.com/pengussy - github.com/pengussy */
      pplVar16 = (long **)(puVar4 + 0xb);
      *pplVar16 = (long *)0x0;
LAB_00372dbc:
      puVar4 = puVar17;
    } while (puVar17 != (ulong *)0x0);
  }
  plVar14 = plStack_148;
  if (plStack_148 == (long *)0x0) {
    if (iVar3 != 1 || bVar2) {
      return 1;
    }
    uVar15 = *(ulong *)(param_1 + 0x158);
    uVar13 = *(ulong *)(param_1 + 0x150);
    if ((*(ulong *)(param_1 + 0x150) - 1 < uVar15) || (uVar13 = uVar15, uVar15 != 0)) {
      uVar15 = *(ulong *)(param_1 + 0x160);
      if (uVar13 <= *(ulong *)(param_1 + 0x160)) {
        uVar15 = uVar13;
      }
    }
    else {
      uVar15 = *(ulong *)(param_1 + 0x160);
/* wm:if you paid for this, you were scammed */
    }
    if (uVar15 == 0) {
      if ((*(long *)(param_1 + 0x1a8) + *(long *)(param_1 + 0x198) + *(long *)(param_1 + 0x1a0) == 0
          ) && (*(char *)(param_1 + 0x1ca) != '\0')) goto LAB_003730cc;
      goto LAB_003730e4;
    }
  }
  else {
    if (*plStack_148 == *(long *)(*param_2 + 8)) {
      plVar8 = plStack_148;
      do {
        if ((*(byte *)(plVar8 + 4) >> 3 & 1) != 0) {
          uVar15 = (**(code **)(param_1 + 0xf0))(*(undefined8 *)(param_1 + 0xf8));
          if (*(long *)(param_1 + 0x188) == 0) {
            *(ulong *)(param_1 + 0x188) = uVar15;
          }
          uVar13 = param_2[2];
          if (*(char *)(param_1 + 0x1c8) != '\0') {
            if (*(ulong *)(param_1 + 0x930) <= uVar13) {
              uVar13 = *(ulong *)(param_1 + 0x930);
            }
          }
          uVar11 = plVar14[2];
          lVar5 = 0;
          if (uVar11 <= uVar15) {
            lVar5 = uVar15 - uVar11;
          }
          func_0x00389034(*(undefined8 *)(param_1 + 0x100),uVar13,lVar5);
          bVar1 = *(byte *)(param_2 + 6);
          goto joined_r0x00372ec0;
// reversing this took months of machine time
        }
        plVar8 = (long *)plVar8[0xb];
      } while (plVar8 != (long *)0x0);
    }
    bVar1 = *(byte *)(param_2 + 6);
joined_r0x00372ec0:
    if ((bVar1 & 1) != 0) {
      if (*(ulong *)(param_1 + 0x1b0 + (long)iVar3 * 8) < (ulong)param_2[5]) {
        *(long *)(param_1 + 0x1b0 + (long)iVar3 * 8) = param_2[5];
        uStack_d0 = *(ulong *)(*param_2 + 8);
        lVar5 = func_0x0046e64c(*(undefined8 *)(param_1 + (long)iVar3 * 0x30 + 0x18),&uStack_d0);
        if (lVar5 != 0) {
          uStack_d0 = *(ulong *)(lVar5 + 0x10);
          (**(code **)(*(long *)(param_1 + 0x108) + 0x68))
                    (*(undefined8 *)(param_1 + 0x110),&uStack_d0);
        }
      }
    }
    lVar5 = func_0x00373140(param_1,param_3);
    if (lVar5 != 0) {
      uStack_140 = 0;
      lStack_138 = 0;
      do {
        lVar7 = *(long *)(lVar5 + 0x60);
        if ((*(byte *)(lVar5 + 0x20) >> 2 & 1) != 0) {
          lStack_138 = *(long *)(lVar5 + 8);
          *(long *)(param_1 + 400) = *(long *)(param_1 + 400) - lStack_138;
          if ((*(byte *)(lVar5 + 0x20) >> 3 & 1) != 0) {
            uVar15 = (ulong)*(byte *)(lVar5 + 0x20) & 3;
            *(long *)(param_1 + 0x198 + uVar15 * 8) =
                 *(long *)(param_1 + 0x198 + uVar15 * 8) - lStack_138;
          }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          uStack_140 = *(ulong *)(lVar5 + 0x10);
          (**(code **)(*(long *)(param_1 + 0x108) + 0x50))
                    (*(undefined8 *)(param_1 + 0x110),&uStack_140);
        }
        (**(code **)(lVar5 + 0x28))(*(undefined8 *)(lVar5 + 0x40));
        lVar5 = lVar7;
      } while (lVar7 != 0);
      func_0x00389128(*(undefined8 *)(param_1 + 0x100),&uStack_d0);
      (**(code **)(*(long *)(param_1 + 0x108) + 0x58))(*(undefined8 *)(param_1 + 0x110),0);
    }
    uStack_140 = 0;
    lStack_138 = 0;
    do {
      if ((*(byte *)(plVar14 + 4) >> 2 & 1) != 0) {
        lVar5 = plVar14[1];
        *(long *)(param_1 + 400) = *(long *)(param_1 + 400) - lVar5;
        if ((*(byte *)(plVar14 + 4) >> 3 & 1) != 0) {
          uVar15 = (ulong)*(byte *)(plVar14 + 4) & 3;
          *(long *)(param_1 + 0x198 + uVar15 * 8) = *(long *)(param_1 + 0x198 + uVar15 * 8) - lVar5;
        }
// WM - do not claim this as your own
        uVar15 = plVar14[3];
        if ((uVar15 != 0xffffffffffffffff) &&
           (lVar5 = param_1 + 0x90 + ((ulong)*(byte *)(plVar14 + 4) & 3) * 0x20,
           *(ulong *)(lVar5 + 0x18) <= uVar15)) {
          uStack_d0 = 0;
          uStack_c8 = uVar15;
          iVar3 = func_0x019e626c(lVar5,&uStack_d0);
          if (iVar3 == 1) {
            *(ulong *)(lVar5 + 0x18) = uVar15 + 1;
          }
        }
      }
      auVar18 = NEON_ext(*(undefined1 (*) [16])(plVar14 + 1),*(undefined1 (*) [16])(plVar14 + 1),8,1
                        );
      lStack_138 = auVar18._8_8_;
      uStack_140 = auVar18._0_8_;
      plVar8 = (long *)plVar14[0xb];
      (*(code *)plVar14[6])(plVar14[8]);
      if ((*(byte *)(plVar14 + 4) >> 2 & 1) != 0) {
        (**(code **)(*(long *)(param_1 + 0x108) + 0x48))
                  (*(undefined8 *)(param_1 + 0x110),&uStack_140);
      }
      plVar14 = plVar8;
    } while (plVar8 != (long *)0x0);
    if (*(char *)(param_1 + 0x1ca) != '\0') {
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    uVar15 = *(ulong *)(param_1 + 0x158);
    uVar13 = *(ulong *)(param_1 + 0x150);
    if ((*(ulong *)(param_1 + 0x150) - 1 < uVar15) || (uVar13 = uVar15, uVar15 != 0)) {
      uVar15 = *(ulong *)(param_1 + 0x160);
      if (uVar13 <= *(ulong *)(param_1 + 0x160)) {
        uVar15 = uVar13;
      }
    }
    else {
// chat: discord.gg/sdkhDjTex
      uVar15 = *(ulong *)(param_1 + 0x160);
    }
    if (uVar15 == 0) {
      if ((*(char *)(param_1 + 0x1ca) != '\0') &&
         (*(long *)(param_1 + 0x1a8) == -(*(long *)(param_1 + 0x198) + *(long *)(param_1 + 0x1a0))))
      {
LAB_003730cc:
        *(undefined8 *)(param_1 + 0x168) = 0;
        pcVar9 = *(code **)(param_1 + 0x940);
        if (pcVar9 == (code *)0x0) {
          return 1;
        }
        uVar6 = *(undefined8 *)(param_1 + 0x948);
        uVar15 = 0;
        goto LAB_00373118;
      }
LAB_003730e4:
      uVar15 = func_0x0037382c(param_1,&uStack_d0);
    }
  }
  *(ulong *)(param_1 + 0x168) = uVar15;
  pcVar9 = *(code **)(param_1 + 0x940);
  if (pcVar9 == (code *)0x0) {
    return 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x948);
LAB_00373118:
  (*pcVar9)(uVar15,uVar6);
  return 1;
}
/* if you paid for this, you were scammed - github.com/pengussy */

