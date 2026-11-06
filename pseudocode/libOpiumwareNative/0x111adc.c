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
 *  file-id: 0x111adc:e718d17f98
 *  --------------------------------------------------------------------------*/

void FUN_00111adc(undefined8 param_1,long param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  double *pdVar9;
  undefined4 *puVar10;
  long lVar11;
  double dVar12;
  
  lVar11 = **(long **)(param_2 + 8);
  if ((((*(char *)(lVar11 + 3) != '\0') && (*(undefined **)(lVar11 + 0x18) == &DAT_00115898)) &&
      (1 < *(byte *)(lVar11 + 4))) &&
     ((*(int *)(lVar11 + 0x3c) == 7 && (lVar11 = *(long *)(lVar11 + 0x30), lVar11 != 0)))) {
    plVar5 = (long *)func_0x008848ec(lVar11,3);
    plVar6 = (long *)func_0x008848ec(lVar11,4);
    plVar7 = (long *)func_0x008848ec(lVar11,9);
/* unlicensed copy if this notice is missing - github.com/pengussy */
    if (((*(int *)((long)plVar5 + 0xc) == 6) &&
        ((*(int *)((long)plVar6 + 0xc) == 6 && (*(int *)((long)plVar7 + 0xc) == 6)))) &&
       ((lVar8 = func_0x008848ec(lVar11,7), *(int *)(lVar8 + 0xc) == 1 &&
        (pdVar9 = (double *)func_0x008848ec(lVar11,5), *(int *)((long)pdVar9 + 0xc) == 3)))) {
      dVar12 = *pdVar9;
      bVar1 = false;
      bVar3 = false;
      bVar4 = false;
      if ((ulong)ABS(dVar12) < 0x7ff0000000000000) {
        bVar1 = false;
        bVar3 = false;
        bVar4 = true;
        if (!NAN(dVar12)) {
          bVar1 = dVar12 < 2147483647.0;
          bVar3 = dVar12 == 2147483647.0;
          bVar4 = false;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        }
      }
      bVar2 = true;
      if ((bVar3 || bVar1 != bVar4) && (bVar2 = false, !NAN(dVar12))) {
        bVar2 = dVar12 < -2147483648.0;
      }
      bVar1 = false;
      if ((!bVar2) && (bVar1 = false, !NAN((double)(long)dVar12) && !NAN(dVar12))) {
        bVar1 = (double)(long)dVar12 == dVar12;
      }
      if ((bVar1) &&
         (pdVar9 = (double *)func_0x008848ec(lVar11,8), *(int *)((long)pdVar9 + 0xc) == 3)) {
        dVar12 = *pdVar9;
        bVar1 = false;
        bVar3 = false;
        bVar4 = false;
        if ((ulong)ABS(dVar12) < 0x7ff0000000000000) {
          bVar1 = false;
          bVar3 = false;
          bVar4 = true;
          if (!NAN(dVar12)) {
            bVar1 = dVar12 < 2147483647.0;
            bVar3 = dVar12 == 2147483647.0;
            bVar4 = false;
          }
        }
        bVar2 = true;
        if ((bVar3 || bVar1 != bVar4) && (bVar2 = false, !NAN(dVar12))) {
          bVar2 = dVar12 < -2147483648.0;
        }
        bVar1 = false;
        if ((!bVar2) && (bVar1 = false, !NAN((double)(long)dVar12) && !NAN(dVar12))) {
          bVar1 = (double)(long)dVar12 == dVar12;
/* wm:found on a paste site? it was re-uploaded illegally */
        }
        if (((bVar1) &&
            (pdVar9 = (double *)func_0x008848ec(lVar11,6), *(int *)((long)pdVar9 + 0xc) == 3)) &&
           (dVar12 = *pdVar9, (ulong)ABS(dVar12) < 0x7ff0000000000000)) {
          bVar1 = true;
          if ((dVar12 <= 2147483647.0) && (bVar1 = false, !NAN(dVar12))) {
            bVar1 = dVar12 < -2147483648.0;
          }
          bVar3 = false;
          if ((!bVar1) && (bVar3 = false, !NAN((double)(long)dVar12) && !NAN(dVar12))) {
            bVar3 = (double)(long)dVar12 == dVar12;
          }
          if (((((((bVar3) &&
                  (pdVar9 = (double *)func_0x008848ec(lVar11,10), *(int *)((long)pdVar9 + 0xc) == 3)
                  ) && (dVar12 = *pdVar9, (ulong)ABS(dVar12) < 0x7ff0000000000000)) &&
                (((dVar12 <= 2147483647.0 && (-2147483648.0 <= dVar12)) &&
                 (((double)(long)dVar12 == dVar12 &&
                  ((pdVar9 = (double *)func_0x008848ec(lVar11,0xb),
                   *(int *)((long)pdVar9 + 0xc) == 3 &&
                   (dVar12 = *pdVar9, (ulong)ABS(dVar12) < 0x7ff0000000000000)))))))) &&
               (dVar12 <= 2147483647.0)) &&
              (((((-2147483648.0 <= dVar12 && ((double)(long)dVar12 == dVar12)) &&
                 (pdVar9 = (double *)func_0x008848ec(lVar11,0xc), *(int *)((long)pdVar9 + 0xc) == 3)
                 ) && ((dVar12 = *pdVar9, (ulong)ABS(dVar12) < 0x7ff0000000000000 &&
                       (dVar12 <= 2147483647.0)))) &&
               ((-2147483648.0 <= dVar12 &&
                (((double)(long)dVar12 == dVar12 &&
                 (pdVar9 = (double *)func_0x008848ec(lVar11,6), 0.0 <= *pdVar9)))))))) &&
             ((pdVar9 = (double *)func_0x008848ec(lVar11,6), *pdVar9 <= 255.0 &&
/* wm:stripping the watermark breaks the license */
              ((pdVar9 = (double *)func_0x008848ec(lVar11,10), 0.0 <= *pdVar9 &&
               (pdVar9 = (double *)func_0x008848ec(lVar11,10), *pdVar9 <= 255.0)))))) {
            lVar8 = *plVar5;
            param_3[2] = lVar8 + 0x18;
            lVar8 = func_0x00856c64(param_3 + 8,0x100,lVar8 + 0x18,*(undefined4 *)(*plVar5 + 0x14));
            param_3[3] = lVar8;
            *param_3 = *plVar6 + 0x18;
            param_3[1] = *plVar7 + 0x18;
            pdVar9 = (double *)func_0x008848ec(lVar11,5);
            *(int *)(param_3 + 5) = (int)*pdVar9;
            pdVar9 = (double *)func_0x008848ec(lVar11,8);
            *(int *)(param_3 + 6) = (int)*pdVar9;
            pdVar9 = (double *)func_0x008848ec(lVar11,6);
            *(char *)((long)param_3 + 0x21) = (char)(int)*pdVar9;
            puVar10 = (undefined4 *)func_0x008848ec(lVar11,7);
            *(char *)((long)param_3 + 0x22) = (char)*puVar10;
            pdVar9 = (double *)func_0x008848ec(lVar11,10);
            *(char *)(param_3 + 4) = (char)(int)*pdVar9;
            pdVar9 = (double *)func_0x008848ec(lVar11,0xb);
            *(int *)((long)param_3 + 0x24) = (int)*pdVar9;
            pdVar9 = (double *)func_0x008848ec(lVar11,0xc);
            *(int *)((long)param_3 + 0x2c) = (int)*pdVar9;
            return;
          }
        }
      }
    }
  }
  return;
}

