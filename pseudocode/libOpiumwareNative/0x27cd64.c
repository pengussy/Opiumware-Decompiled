/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x27cd64:353af0d3c2
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0027dba0) */
/* WARNING: Removing unreachable block (ram,0x0027dbe4) */
/* WARNING: Removing unreachable block (ram,0x0027dc04) */
/* WARNING: Removing unreachable block (ram,0x0027dc1c) */
/* WARNING: Removing unreachable block (ram,0x0027dc44) */
/* WARNING: Removing unreachable block (ram,0x0027dc54) */
/* WARNING: Removing unreachable block (ram,0x0027dc2c) */
/* WARNING: Removing unreachable block (ram,0x0027dc40) */
/* WARNING: Removing unreachable block (ram,0x0027dc68) */
/* WARNING: Removing unreachable block (ram,0x0027dc84) */
/* WARNING: Removing unreachable block (ram,0x0027dc94) */
/* WARNING: Removing unreachable block (ram,0x0027dcac) */
/* WARNING: Removing unreachable block (ram,0x0027dcc0) */
/* WARNING: Removing unreachable block (ram,0x0027dc70) */
/* WARNING: Removing unreachable block (ram,0x0027dbf4) */
/* WARNING: Removing unreachable block (ram,0x0027dbf8) */
/* WARNING: Removing unreachable block (ram,0x0027dba8) */
/* WARNING: Removing unreachable block (ram,0x0027dbc0) */
/* WARNING: Removing unreachable block (ram,0x0027dbd4) */
/* WARNING: Removing unreachable block (ram,0x0027dbb4) */

long * FUN_0027cd64(long *param_1,long *param_2,undefined8 param_3,long param_4,uint param_5)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
// if you paid for this, you were scammed
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  
  plVar11 = param_1;
  do {
    plVar3 = plVar11;
LAB_0027cd94:
    plVar11 = plVar3;
    uVar6 = (long)param_2 - (long)plVar11 >> 3;
    if ((long)uVar6 < 3) {
      if (uVar6 < 2) {
        return param_1;
      }
      if (uVar6 == 2) {
        lVar4 = *plVar11;
        if (*(ulong *)(param_2[-1] + 0x30) < *(ulong *)(lVar4 + 0x30)) {
          *plVar11 = param_2[-1];
          param_2[-1] = lVar4;
          return param_1;
        }
        return param_1;
      }
    }
    else {
      if (uVar6 == 3) {
        lVar4 = *plVar11;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        lVar7 = plVar11[1];
        uVar10 = *(ulong *)(lVar7 + 0x30);
        uVar6 = *(ulong *)(lVar4 + 0x30);
        lVar12 = param_2[-1];
        if (uVar10 < uVar6) {
          if (*(ulong *)(lVar12 + 0x30) < uVar10) {
            *plVar11 = lVar12;
          }
          else {
            *plVar11 = lVar7;
            plVar11[1] = lVar4;
            if (uVar6 <= *(ulong *)(param_2[-1] + 0x30)) {
              return param_1;
            }
            plVar11[1] = param_2[-1];
          }
          param_2[-1] = lVar4;
          return param_1;
        }
        if (uVar10 <= *(ulong *)(lVar12 + 0x30)) {
          return param_1;
        }
        plVar11[1] = lVar12;
        param_2[-1] = lVar7;
        lVar4 = *plVar11;
        if (*(ulong *)(plVar11[1] + 0x30) < *(ulong *)(lVar4 + 0x30)) {
          *plVar11 = plVar11[1];
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          plVar11[1] = lVar4;
          return param_1;
        }
        return param_1;
      }
      if (uVar6 == 4) {
        lVar4 = *plVar11;
        lVar7 = plVar11[1];
        uVar16 = *(ulong *)(lVar7 + 0x30);
        uVar6 = *(ulong *)(lVar4 + 0x30);
        lVar12 = plVar11[2];
        uVar10 = *(ulong *)(lVar12 + 0x30);
        if (uVar16 < uVar6) {
          if (uVar10 < uVar16) {
            *plVar11 = lVar12;
          }
          else {
            *plVar11 = lVar7;
            plVar11[1] = lVar4;
            if (uVar6 <= uVar10) {
// WM - thanks for reading - discord.gg/sdkhDjTex
              lVar5 = param_2[-1];
              lVar4 = lVar12;
              if (*(ulong *)(lVar12 + 0x30) <= *(ulong *)(lVar5 + 0x30)) {
                return param_1;
              }
              goto LAB_0027d570;
            }
            plVar11[1] = lVar12;
          }
          plVar11[2] = lVar4;
          lVar5 = param_2[-1];
          if (*(ulong *)(lVar4 + 0x30) <= *(ulong *)(lVar5 + 0x30)) {
            return param_1;
          }
        }
        else {
          if (uVar10 < uVar16) {
            plVar11[1] = lVar12;
            plVar11[2] = lVar7;
            if (uVar10 < uVar6) {
              *plVar11 = lVar12;
/*  origin: github.com/pengussy  */
              plVar11[1] = lVar4;
              lVar5 = param_2[-1];
              lVar4 = lVar7;
              if (*(ulong *)(lVar7 + 0x30) <= *(ulong *)(lVar5 + 0x30)) {
                return param_1;
              }
              goto LAB_0027d570;
            }
          }
          else {
            lVar7 = lVar12;
          }
          lVar5 = param_2[-1];
          lVar4 = lVar7;
          if (*(ulong *)(lVar7 + 0x30) <= *(ulong *)(lVar5 + 0x30)) {
            return param_1;
          }
        }
LAB_0027d570:
        plVar11[2] = lVar5;
        param_2[-1] = lVar4;
        lVar4 = plVar11[1];
        lVar7 = plVar11[2];
        uVar6 = *(ulong *)(lVar7 + 0x30);
        if (*(ulong *)(lVar4 + 0x30) <= uVar6) {
          return param_1;
        }
        plVar11[1] = lVar7;
        plVar11[2] = lVar4;
        lVar4 = *plVar11;
        if (uVar6 < *(ulong *)(lVar4 + 0x30)) {
          *plVar11 = lVar7;
          plVar11[1] = lVar4;
          return param_1;
        }
        return param_1;
      }
      if (uVar6 == 5) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        plVar3 = plVar11 + 1;
        plVar8 = plVar11 + 2;
        plVar9 = plVar11 + 3;
        lVar7 = *plVar3;
        uVar10 = *(ulong *)(lVar7 + 0x30);
        lVar12 = *plVar11;
        uVar6 = *(ulong *)(lVar12 + 0x30);
        lVar4 = *plVar8;
        if (uVar10 < uVar6) {
          if (*(ulong *)(lVar4 + 0x30) < uVar10) {
            *plVar11 = lVar4;
          }
          else {
            *plVar11 = lVar7;
            *plVar3 = lVar12;
            lVar4 = *plVar8;
            if (uVar6 <= *(ulong *)(lVar4 + 0x30)) goto code_r0x0027d678;
            *plVar3 = lVar4;
          }
          *plVar8 = lVar12;
          lVar4 = lVar12;
code_r0x0027d678:
          lVar7 = *plVar9;
          if (*(ulong *)(lVar4 + 0x30) <= *(ulong *)(lVar7 + 0x30)) goto code_r0x0027d6f0;
        }
        else if (*(ulong *)(lVar4 + 0x30) < uVar10) {
          *plVar3 = lVar4;
          *plVar8 = lVar7;
          lVar12 = *plVar11;
          lVar4 = lVar7;
          if (*(ulong *)(lVar12 + 0x30) <= *(ulong *)(*plVar3 + 0x30)) goto code_r0x0027d678;
          *plVar11 = *plVar3;
/* wm:unlicensed copy if this notice is missing */
          *plVar3 = lVar12;
          lVar4 = *plVar8;
          lVar7 = *plVar9;
          if (*(ulong *)(lVar4 + 0x30) <= *(ulong *)(lVar7 + 0x30)) goto code_r0x0027d6f0;
        }
        else {
          lVar7 = *plVar9;
          if (*(ulong *)(lVar4 + 0x30) <= *(ulong *)(lVar7 + 0x30)) goto code_r0x0027d6f0;
        }
        *plVar8 = lVar7;
        *plVar9 = lVar4;
        lVar4 = *plVar3;
        if (*(ulong *)(*plVar8 + 0x30) < *(ulong *)(lVar4 + 0x30)) {
          *plVar3 = *plVar8;
          *plVar8 = lVar4;
          lVar4 = *plVar11;
          if (*(ulong *)(*plVar3 + 0x30) < *(ulong *)(lVar4 + 0x30)) {
            *plVar11 = *plVar3;
            *plVar3 = lVar4;
          }
        }
// stripping the watermark breaks the license
code_r0x0027d6f0:
        lVar4 = param_2[-1];
        lVar7 = *plVar9;
        if (*(ulong *)(lVar4 + 0x30) < *(ulong *)(lVar7 + 0x30)) {
          *plVar9 = lVar4;
          param_2[-1] = lVar7;
          lVar4 = *plVar8;
          if (*(ulong *)(*plVar9 + 0x30) < *(ulong *)(lVar4 + 0x30)) {
            *plVar8 = *plVar9;
            *plVar9 = lVar4;
            lVar4 = *plVar3;
            if (*(ulong *)(*plVar8 + 0x30) < *(ulong *)(lVar4 + 0x30)) {
              *plVar3 = *plVar8;
              *plVar8 = lVar4;
              lVar4 = *plVar11;
              if (*(ulong *)(*plVar3 + 0x30) < *(ulong *)(lVar4 + 0x30)) {
                *plVar11 = *plVar3;
                *plVar3 = lVar4;
              }
            }
          }
        }
        return plVar11;
      }
    }
    if ((long)uVar6 < 0x18) {
      plVar3 = plVar11 + 1;
      if ((param_5 & 1) == 0) {
        if (!(plVar11 == param_2 || plVar3 == param_2)) {
          do {
            plVar8 = plVar3;
            lVar4 = *plVar11;
            lVar7 = plVar11[1];
/* origin: github.com/pengussy */
            uVar6 = *(ulong *)(lVar7 + 0x30);
            if (uVar6 < *(ulong *)(lVar4 + 0x30)) {
              plVar11 = plVar8;
              do {
                *plVar11 = lVar4;
                lVar4 = plVar11[-2];
                plVar11 = plVar11 + -1;
              } while (uVar6 < *(ulong *)(lVar4 + 0x30));
              *plVar11 = lVar7;
            }
            plVar3 = plVar8 + 1;
            plVar11 = plVar8;
          } while (plVar8 + 1 != param_2);
          return param_1;
        }
        return param_1;
      }
      if (plVar11 == param_2 || plVar3 == param_2) {
        return param_1;
      }
      lVar4 = 0;
      plVar8 = plVar11;
      break;
    }
    if (param_4 == 0) {
      if (plVar11 == param_2) {
        return param_1;
      }
      if (plVar11 == param_2) {
        return param_2;
      }
      uVar6 = (long)param_2 - (long)plVar11 >> 3;
      if ((long)uVar6 < 2) goto code_r0x0027dcc8;
      uVar16 = uVar6 - 2 >> 1;
      uVar10 = uVar16;
      goto code_r0x0027dae4;
    }
/* wm:keep the notice, keep the source honest */
    plVar3 = plVar11 + (uVar6 >> 1);
    lVar4 = param_2[-1];
    uVar10 = *(ulong *)(lVar4 + 0x30);
    if (uVar6 < 0x81) {
      lVar12 = *plVar11;
      uVar16 = *(ulong *)(lVar12 + 0x30);
      lVar7 = *plVar3;
      uVar6 = *(ulong *)(lVar7 + 0x30);
      if (uVar16 < uVar6) {
        if (uVar10 < uVar16) {
          *plVar3 = lVar4;
        }
        else {
          *plVar3 = lVar12;
          *plVar11 = lVar7;
          if (uVar6 <= *(ulong *)(param_2[-1] + 0x30)) goto LAB_0027cf58;
          *plVar11 = param_2[-1];
        }
        param_2[-1] = lVar7;
      }
      else if (uVar10 < uVar16) {
        *plVar11 = lVar4;
        param_2[-1] = lVar12;
        lVar4 = *plVar3;
        if (*(ulong *)(*plVar11 + 0x30) < *(ulong *)(lVar4 + 0x30)) {
          *plVar3 = *plVar11;
          *plVar11 = lVar4;
/* do not claim this as your own - github.com/pengussy */
          goto joined_r0x0027d08c;
        }
      }
LAB_0027cf58:
      if ((param_5 & 1) == 0) goto LAB_0027d090;
LAB_0027cf60:
      lVar4 = *plVar11;
      uVar6 = *(ulong *)(lVar4 + 0x30);
    }
    else {
      lVar12 = *plVar3;
      uVar16 = *(ulong *)(lVar12 + 0x30);
      lVar7 = *plVar11;
      uVar6 = *(ulong *)(lVar7 + 0x30);
      if (uVar16 < uVar6) {
        if (uVar10 < uVar16) {
          *plVar11 = lVar4;
        }
        else {
          *plVar11 = lVar12;
          *plVar3 = lVar7;
          if (uVar6 <= *(ulong *)(param_2[-1] + 0x30)) goto LAB_0027ced4;
          *plVar3 = param_2[-1];
        }
        param_2[-1] = lVar7;
      }
      else if (uVar10 < uVar16) {
        *plVar3 = lVar4;
        param_2[-1] = lVar12;
        lVar4 = *plVar11;
        if (*(ulong *)(*plVar3 + 0x30) < *(ulong *)(lVar4 + 0x30)) {
          *plVar11 = *plVar3;
          *plVar3 = lVar4;
        }
      }
LAB_0027ced4:
      lVar7 = plVar3[-1];
      uVar10 = *(ulong *)(lVar7 + 0x30);
/*  proprietary - see LICENSE - do not sell  */
      lVar4 = plVar11[1];
      uVar6 = *(ulong *)(lVar4 + 0x30);
      lVar12 = param_2[-2];
      if (uVar10 < uVar6) {
        if (*(ulong *)(lVar12 + 0x30) < uVar10) {
          plVar11[1] = lVar12;
        }
        else {
          plVar11[1] = lVar7;
          plVar3[-1] = lVar4;
          if (uVar6 <= *(ulong *)(param_2[-2] + 0x30)) goto LAB_0027cf8c;
          plVar3[-1] = param_2[-2];
        }
        param_2[-2] = lVar4;
      }
      else if (*(ulong *)(lVar12 + 0x30) < uVar10) {
        plVar3[-1] = lVar12;
        param_2[-2] = lVar7;
        lVar4 = plVar11[1];
        if (*(ulong *)(plVar3[-1] + 0x30) < *(ulong *)(lVar4 + 0x30)) {
          plVar11[1] = plVar3[-1];
          plVar3[-1] = lVar4;
        }
      }
LAB_0027cf8c:
      lVar7 = plVar3[1];
      uVar10 = *(ulong *)(lVar7 + 0x30);
      lVar4 = plVar11[2];
      uVar6 = *(ulong *)(lVar4 + 0x30);
      lVar12 = param_2[-3];
      if (uVar10 < uVar6) {
        if (*(ulong *)(lVar12 + 0x30) < uVar10) {
          plVar11[2] = lVar12;
        }
        else {
          plVar11[2] = lVar7;
          plVar3[1] = lVar4;
          if (uVar6 <= *(ulong *)(param_2[-3] + 0x30)) goto LAB_0027d010;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          plVar3[1] = param_2[-3];
        }
        param_2[-3] = lVar4;
      }
      else if (*(ulong *)(lVar12 + 0x30) < uVar10) {
        plVar3[1] = lVar12;
        param_2[-3] = lVar7;
        lVar4 = plVar11[2];
        if (*(ulong *)(plVar3[1] + 0x30) < *(ulong *)(lVar4 + 0x30)) {
          plVar11[2] = plVar3[1];
          plVar3[1] = lVar4;
        }
      }
LAB_0027d010:
      lVar4 = plVar3[-1];
      lVar7 = *plVar3;
      uVar16 = *(ulong *)(lVar7 + 0x30);
      uVar6 = *(ulong *)(lVar4 + 0x30);
      lVar12 = plVar3[1];
      uVar10 = *(ulong *)(lVar12 + 0x30);
      if (uVar16 < uVar6) {
        if (uVar10 < uVar16) {
          plVar3[-1] = lVar12;
          plVar3[1] = lVar4;
        }
        else {
          plVar3[-1] = lVar7;
          *plVar3 = lVar4;
/*  thanks for reading - discord.gg/sdkhDjTex  */
          lVar7 = lVar4;
          if (uVar10 < uVar6) {
            *plVar3 = lVar12;
            plVar3[1] = lVar4;
            lVar7 = lVar12;
          }
        }
      }
      else if (uVar10 < uVar16) {
        *plVar3 = lVar12;
        plVar3[1] = lVar7;
        lVar7 = lVar12;
        if (uVar10 < uVar6) {
          plVar3[-1] = lVar12;
          *plVar3 = lVar4;
          lVar7 = lVar4;
        }
      }
      lVar4 = *plVar11;
      *plVar11 = lVar7;
      *plVar3 = lVar4;
joined_r0x0027d08c:
      if ((param_5 & 1) != 0) goto LAB_0027cf60;
LAB_0027d090:
      lVar4 = *plVar11;
      uVar6 = *(ulong *)(lVar4 + 0x30);
      if (uVar6 <= *(ulong *)(plVar11[-1] + 0x30)) {
        plVar3 = plVar11;
        if (uVar6 < *(ulong *)(param_2[-1] + 0x30)) {
          do {
            plVar3 = plVar3 + 1;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          } while (*(ulong *)(*plVar3 + 0x30) <= uVar6);
        }
        else {
          do {
            plVar3 = plVar3 + 1;
            if (param_2 <= plVar3) break;
          } while (*(ulong *)(*plVar3 + 0x30) <= uVar6);
        }
        plVar8 = param_2;
        if (plVar3 < param_2) {
          do {
            plVar8 = plVar8 + -1;
          } while (uVar6 < *(ulong *)(*plVar8 + 0x30));
        }
        if (plVar3 < plVar8) {
          lVar7 = *plVar3;
          lVar12 = *plVar8;
          do {
/* donate: donate/README.md - github.com/pengussy */
            *plVar3 = lVar12;
            *plVar8 = lVar7;
            do {
              plVar3 = plVar3 + 1;
              lVar7 = *plVar3;
            } while (*(ulong *)(lVar7 + 0x30) <= uVar6);
            do {
              plVar8 = plVar8 + -1;
              lVar12 = *plVar8;
            } while (uVar6 < *(ulong *)(lVar12 + 0x30));
          } while (plVar3 < plVar8);
        }
        plVar8 = plVar3 + -1;
        if (plVar11 != plVar8) {
          *plVar11 = *plVar8;
        }
        param_5 = 0;
        *plVar8 = lVar4;
        param_4 = param_4 + -1;
/* WM - do not claim this as your own */
        goto LAB_0027cd94;
      }
    }
    param_4 = param_4 + -1;
    lVar7 = 0;
    do {
      lVar12 = *(long *)((long)plVar11 + lVar7 + 8);
      lVar7 = lVar7 + 8;
    } while (*(ulong *)(lVar12 + 0x30) < uVar6);
    plVar3 = (long *)((long)plVar11 + lVar7);
    plVar8 = param_2;
    if (lVar7 == 8) {
      do {
        if (plVar8 <= plVar3) break;
        plVar8 = plVar8 + -1;
      } while (uVar6 <= *(ulong *)(*plVar8 + 0x30));
    }
    else {
      do {
        plVar8 = plVar8 + -1;
      } while (uVar6 <= *(ulong *)(*plVar8 + 0x30));
    }
    if (plVar3 < plVar8) {
      lVar7 = *plVar8;
      plVar15 = plVar3;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      plVar17 = plVar8;
      do {
        *plVar15 = lVar7;
        *plVar17 = lVar12;
        do {
          plVar9 = plVar15;
          plVar15 = plVar9 + 1;
          lVar12 = *plVar15;
        } while (*(ulong *)(lVar12 + 0x30) < uVar6);
        do {
          plVar17 = plVar17 + -1;
          lVar7 = *plVar17;
        } while (uVar6 <= *(ulong *)(lVar7 + 0x30));
      } while (plVar15 < plVar17);
    }
    else {
      plVar9 = plVar3 + -1;
    }
    if (plVar11 != plVar9) {
      *plVar11 = *plVar9;
    }
    *plVar9 = lVar4;
    if (plVar3 < plVar8) goto LAB_0027d1a4;
    uVar6 = func_0x0027d774(plVar11,plVar9,param_3);
    param_1 = (long *)func_0x0027d774(plVar9 + 1,param_2,param_3);
    if ((int)param_1 == 0) goto code_r0x0027d1a0;
    param_2 = plVar9;
    if ((uVar6 & 1) != 0) {
      return param_1;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    }
  } while( true );
LAB_0027d3a0:
  plVar9 = plVar3;
  lVar7 = plVar8[1];
  uVar6 = *(ulong *)(lVar7 + 0x30);
  if (uVar6 < *(ulong *)(*plVar8 + 0x30)) {
    plVar8[1] = *plVar8;
    lVar12 = lVar4;
    plVar3 = plVar11;
    if (plVar8 != plVar11) {
      do {
        plVar3 = (long *)((long)plVar11 + lVar12);
        if (*(ulong *)(plVar3[-1] + 0x30) <= uVar6) goto LAB_0027d388;
        *plVar3 = plVar3[-1];
        lVar12 = lVar12 + -8;
      } while (lVar12 != 0);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      plVar3 = plVar11;
    }
LAB_0027d388:
    *plVar3 = lVar7;
  }
  plVar3 = plVar9 + 1;
  lVar4 = lVar4 + 8;
  plVar8 = plVar9;
  if (plVar3 == param_2) {
    return param_1;
  }
  goto LAB_0027d3a0;
code_r0x0027d1a0:
  plVar3 = plVar9 + 1;
  if ((uVar6 & 1) == 0) {
LAB_0027d1a4:
    param_1 = (long *)FUN_0027cd64(plVar11,plVar9,param_3,param_4,param_5 & 1);
    param_5 = 0;
    plVar3 = plVar9 + 1;
  }
  goto LAB_0027cd94;
code_r0x0027dae4:
  do {
    if (uVar10 <= uVar16) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      uVar19 = (uVar10 & 0x3fffffffffffffff) << 1 | 1;
      uVar18 = uVar10 * 2 + 2;
      uVar13 = uVar19;
      if ((uVar18 < uVar6) &&
         (uVar13 = uVar18, *(ulong *)(plVar11[uVar18] + 0x30) <= *(ulong *)(plVar11[uVar19] + 0x30))
         ) {
        uVar13 = uVar19;
      }
      lVar7 = plVar11[uVar13];
      lVar4 = plVar11[uVar10];
      uVar18 = *(ulong *)(lVar4 + 0x30);
      if (uVar18 <= *(ulong *)(lVar7 + 0x30)) {
        uVar19 = uVar10;
        do {
          uVar14 = uVar13;
          plVar11[uVar19] = lVar7;
          if ((long)uVar16 < (long)uVar14) break;
          uVar2 = uVar14 << 1 | 1;
          uVar19 = uVar14 * 2 + 2;
          uVar13 = uVar2;
          if (((long)uVar19 < (long)uVar6) &&
             (uVar13 = uVar19,
             *(ulong *)(plVar11[uVar19] + 0x30) <= *(ulong *)(plVar11[uVar2] + 0x30))) {
            uVar13 = uVar2;
          }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          lVar7 = plVar11[uVar13];
          uVar19 = uVar14;
        } while (uVar18 <= *(ulong *)(lVar7 + 0x30));
        plVar11[uVar14] = lVar4;
      }
    }
    bVar1 = 0 < (long)uVar10;
    uVar10 = uVar10 - 1;
  } while (bVar1);
code_r0x0027dcc8:
  plVar3 = param_2;
  if (1 < (long)uVar6) {
    do {
      lVar4 = *plVar11;
      uVar16 = uVar6 - 2 >> 1;
      plVar8 = plVar11;
      uVar10 = 0;
      do {
        while( true ) {
          plVar9 = plVar8 + uVar10 + 1;
          uVar19 = uVar10 << 1 | 1;
          uVar18 = uVar10 * 2 + 2;
          if ((long)uVar18 < (long)uVar6) break;
          *plVar8 = *plVar9;
          plVar8 = plVar9;
          uVar10 = uVar19;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
          if ((long)uVar16 < (long)uVar19) goto code_r0x0027dd6c;
        }
        lVar7 = uVar10 + 2;
        lVar12 = uVar10 + 1;
        uVar10 = uVar18;
        plVar15 = plVar8 + lVar7;
        if (*(ulong *)(plVar8[lVar7] + 0x30) <= *(ulong *)(plVar8[lVar12] + 0x30)) {
          uVar10 = uVar19;
          plVar15 = plVar9;
        }
        plVar9 = plVar15;
        *plVar8 = *plVar9;
        plVar8 = plVar9;
      } while ((long)uVar10 <= (long)uVar16);
code_r0x0027dd6c:
      plVar3 = plVar3 + -1;
      if (plVar9 == plVar3) {
        *plVar9 = lVar4;
      }
      else {
        *plVar9 = *plVar3;
        *plVar3 = lVar4;
        lVar4 = (long)plVar9 + (8 - (long)plVar11) >> 3;
        if (1 < lVar4) {
          uVar10 = lVar4 - 2U >> 1;
          lVar7 = plVar11[uVar10];
          lVar4 = *plVar9;
          uVar16 = *(ulong *)(lVar4 + 0x30);
          plVar8 = plVar11 + uVar10;
          if (*(ulong *)(lVar7 + 0x30) < uVar16) {
            do {
              plVar15 = plVar8;
              *plVar9 = lVar7;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1 >> 1;
/* unlicensed copy if this notice is missing */
              lVar7 = plVar11[uVar10];
              plVar9 = plVar15;
              plVar8 = plVar11 + uVar10;
            } while (*(ulong *)(lVar7 + 0x30) < uVar16);
            *plVar15 = lVar4;
          }
        }
      }
      bVar1 = 2 < (long)uVar6;
      uVar6 = uVar6 - 1;
    } while (bVar1);
  }
  return param_2;
}

