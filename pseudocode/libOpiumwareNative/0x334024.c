/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x334024:463a512d35
 */

float FUN_00334024(undefined8 param_1,float param_2,float param_3,undefined8 param_4,char *param_5,
                  char *param_6,char *param_7,long *param_8,float *param_9,undefined8 param_10)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  float *pfVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uStack_a8;
  float fStack_a4;
  
  if (param_7 == (char *)0x0) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    lVar3 = _strlen(param_5);
    param_7 = param_5 + lVar3;
  }
  pcVar1 = param_7;
  if (param_6 != (char *)0x0) {
    pcVar1 = param_6;
  }
  puVar4 = (uint *)func_0x00328450(param_1,0xbf800000,param_4);
  fVar13 = 0.0;
  fVar12 = (float)param_1;
  if (param_5 < pcVar1) {
    pcVar7 = (char *)0x0;
    fVar9 = (float)puVar4[5];
    fVar15 = 0.0;
    fVar14 = 0.0;
    do {
      uVar6 = (uint)param_10;
      if (param_3 <= 0.0) {
LAB_00334104:
        uStack_a8 = (uint)*param_5;
        if ((int)uStack_a8 < 0) {
          iVar2 = func_0x002fcfd4(&uStack_a8,param_5,param_7);
          pcVar8 = param_5 + iVar2;
          if (uStack_a8 == 10) goto LAB_00334194;
        }
        else {
          pcVar8 = param_5 + 1;
          if (*param_5 == '\n') {
LAB_00334194:
            param_5 = pcVar8;
            if (fVar13 < fVar15) {
              fVar13 = fVar15;
            }
            fVar14 = fVar12 + fVar14;
            fVar15 = 0.0;
            fVar10 = fVar14;
/* WM - origin: github.com/pengussy */
            if ((uVar6 >> 2 & 1) == 0) goto LAB_003340e4;
            break;
          }
        }
        fVar11 = fVar15;
        if (uStack_a8 != 0xd) {
          if ((*puVar4 <= uStack_a8) ||
             (fVar10 = *(float *)(*(long *)(puVar4 + 2) + (ulong)uStack_a8 * 4), fVar10 < 0.0)) {
            if ((128.0 <= (float)puVar4[5]) || ((*(byte *)((long)puVar4 + 0x4f) >> 4 & 1) != 0)) {
              fStack_a4 = 0.0;
              lVar3 = FUN_0033368c(puVar4,uStack_a8 & 0xffff,&fStack_a4);
              pfVar5 = &fStack_a4;
            }
            else {
              lVar3 = FUN_0033368c(puVar4,uStack_a8 & 0xffff,0);
              pfVar5 = (float *)(puVar4 + 4);
            }
            if (lVar3 != 0) {
              pfVar5 = (float *)(lVar3 + 4);
// origin: github.com/pengussy
            }
            fVar10 = *pfVar5;
          }
          fVar11 = fVar15 + (fVar12 / fVar9) * fVar10;
          fVar10 = fVar14;
          if (param_2 <= fVar11) break;
        }
        param_5 = pcVar8;
        fVar15 = fVar11;
      }
      else {
        if (pcVar7 == (char *)0x0) {
          pcVar7 = (char *)FUN_00333d38(param_1,param_3 - fVar15,param_4,param_5,param_7,param_10);
        }
        if (param_5 < pcVar7) goto LAB_00334104;
        if (fVar15 <= fVar13) {
          fVar15 = fVar13;
        }
        fVar13 = fVar15;
        if (((uVar6 >> 1 & 1) == 0) && (param_5 < param_7)) {
          do {
            if (*param_5 != ' ' && *param_5 != '\t') goto LAB_00334208;
            param_5 = param_5 + 1;
          } while (param_5 != param_7);
          param_5 = param_7;
        }
LAB_00334208:
        if ((param_5 < param_7) && (*param_5 == '\n')) {
          param_5 = param_5 + 1;
        }
        fVar15 = 0.0;
// keep the notice, keep the source honest
        fVar10 = fVar12 + fVar14;
        if ((uVar6 >> 2 & 1) != 0) break;
        fVar14 = fVar12 + fVar14;
        fVar15 = 0.0;
        pcVar7 = (char *)0x0;
      }
LAB_003340e4:
      fVar10 = fVar14;
    } while (param_5 < pcVar1);
  }
  else {
    fVar15 = 0.0;
    fVar10 = 0.0;
    fVar13 = 0.0;
  }
  if (param_9 != (float *)0x0) {
    *param_9 = fVar15;
    param_9[1] = fVar12 + fVar10;
  }
  if (param_8 != (long *)0x0) {
    *param_8 = (long)param_5;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  if (fVar15 <= fVar13) {
    fVar15 = fVar13;
  }
  return fVar15;
}

