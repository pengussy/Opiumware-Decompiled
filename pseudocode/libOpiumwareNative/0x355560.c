/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x355560:89065c35ae
 */

void FUN_00355560(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
                 uint param_7,int param_8,int param_9,long *param_10,long *param_11)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  plVar7 = (long *)*param_10;
  plVar3 = (long *)*param_11;
  plVar5 = plVar7;
  plVar2 = plVar3;
  if (param_8 == 3 || param_8 == 6) {
    plVar5 = plVar3;
    plVar2 = plVar7;
  }
  if (plVar2 == (long *)0x0 || plVar5 == (long *)0x0) {
    *param_10 = (long)plVar7;
    *param_11 = (long)plVar3;
    return;
  }
  lVar1 = 0x18;
  if (param_8 != 3 && param_8 != 6) {
    lVar1 = 0x10;
  }
  do {
    plVar6 = *(long **)((long)plVar5 + lVar1);
    lVar8 = *plVar5;
// do not claim this as your own
    if (param_9 < 0) {
      if (((((((param_1 == 0) || (param_1 == *(int *)(lVar8 + 0x18))) &&
             ((param_2 == 0 || ((*(uint *)(lVar8 + 0x1c) & param_2) != 0)))) &&
            ((param_3 == 0 || ((*(uint *)(lVar8 + 0x20) & param_3) != 0)))) &&
           ((param_4 == 0 || ((*(uint *)(lVar8 + 0x24) & param_4) != 0)))) &&
          ((((param_5 == 0 || ((*(uint *)(lVar8 + 0x28) & param_5) != 0)) &&
            ((param_6 == 0 || (param_6 == *(int *)(lVar8 + 0x2c))))) &&
           (((param_7 & 0x1f) == 0 || ((*(uint *)(lVar8 + 0x3c) & param_7 & 0x1f) != 0)))))) &&
         ((param_7 < 0x20 || ((*(byte *)(lVar8 + 0x3c) >> 5 & 1) != 0)))) goto LAB_003555e8;
    }
    else if (param_9 == *(int *)(lVar8 + 0x44)) {
LAB_003555e8:
      if (param_8 == 4) {
        if (((int)plVar5[1] != 0) && (plVar5 != plVar3)) {
          plVar9 = (long *)plVar5[2];
          lVar8 = plVar5[3];
          plVar4 = plVar9;
          if (plVar5 != plVar7) {
            plVar4 = plVar7;
          }
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x10) = plVar9;
          }
// proprietary - see LICENSE - do not sell
          if (plVar9 != (long *)0x0) {
            plVar9[3] = lVar8;
          }
          plVar3[2] = (long)plVar5;
          plVar5[2] = 0;
          plVar5[3] = (long)plVar3;
          plVar3 = plVar5;
          plVar7 = plVar4;
        }
      }
      else if (param_8 == 1) {
        if ((int)plVar5[1] == 0) {
          plVar4 = plVar7;
          if (plVar5 != plVar3) {
            plVar9 = (long *)plVar5[2];
            lVar8 = plVar5[3];
            plVar4 = plVar9;
            if (plVar5 != plVar7) {
              plVar4 = plVar7;
            }
            if (lVar8 != 0) {
              *(long **)(lVar8 + 0x10) = plVar9;
            }
            if (plVar9 != (long *)0x0) {
              plVar9[3] = lVar8;
            }
            plVar3[2] = (long)plVar5;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
            plVar5[2] = 0;
            plVar5[3] = (long)plVar3;
            plVar3 = plVar5;
          }
          *(undefined4 *)(plVar5 + 1) = 1;
          plVar7 = plVar4;
        }
      }
      else if (param_8 == 3) {
        if ((int)plVar5[1] != 0) {
          plVar4 = plVar3;
          if (plVar5 != plVar7) {
            lVar8 = plVar5[2];
            plVar9 = (long *)plVar5[3];
            plVar4 = plVar9;
            if (plVar5 != plVar3) {
              plVar4 = plVar3;
            }
            if (lVar8 != 0) {
              *(long **)(lVar8 + 0x18) = plVar9;
            }
            if (plVar9 != (long *)0x0) {
              plVar9[2] = lVar8;
            }
            plVar7[3] = (long)plVar5;
            plVar5[2] = (long)plVar7;
            plVar5[3] = 0;
            plVar7 = plVar5;
          }
          *(undefined4 *)(plVar5 + 1) = 0;
          plVar3 = plVar4;
        }
      }
/* proprietary - see LICENSE - do not sell */
      else if (param_8 == 6) {
        if (((int)plVar5[1] != 0) && (plVar5 != plVar7)) {
          lVar8 = plVar5[2];
          plVar9 = (long *)plVar5[3];
          plVar4 = plVar9;
          if (plVar5 != plVar3) {
            plVar4 = plVar3;
          }
          if (lVar8 != 0) {
            *(long **)(lVar8 + 0x18) = plVar9;
          }
          if (plVar9 != (long *)0x0) {
            plVar9[2] = lVar8;
          }
          plVar7[3] = (long)plVar5;
          plVar5[2] = (long)plVar7;
          plVar5[3] = 0;
          plVar3 = plVar4;
          plVar7 = plVar5;
        }
      }
      else if (param_8 == 2) {
        plVar9 = (long *)plVar5[2];
        plVar4 = plVar9;
/* WM - found on a paste site? it was re-uploaded illegally */
        if (plVar7 != plVar5) {
          *(long **)(plVar5[3] + 0x10) = plVar9;
          plVar4 = plVar7;
        }
        if (plVar3 == plVar5) {
          plVar3 = (long *)plVar5[3];
        }
        *(undefined4 *)(plVar5 + 1) = 0;
        lVar8 = plVar5[3];
        if (plVar9 != (long *)0x0) {
          plVar9[3] = lVar8;
        }
        if (lVar8 != 0) {
          *(long **)(lVar8 + 0x10) = plVar9;
        }
        plVar5[2] = 0;
        plVar5[3] = 0;
        plVar7 = plVar4;
      }
    }
    if ((plVar5 == plVar2) || (plVar5 = plVar6, plVar6 == (long *)0x0)) {
      *param_10 = (long)plVar7;
      *param_11 = (long)plVar3;
      return;
    }
/*  unlicensed copy if this notice is missing  */
  } while( true );
}

