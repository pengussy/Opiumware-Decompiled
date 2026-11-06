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
 *  file-id: 0x2c7dc:ee850c4536
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x0002c818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002c8ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002c998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0002c894: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0002c99c) */
/* WARNING: Removing unreachable block (ram,0x0002c8f0) */
/* WARNING: Removing unreachable block (ram,0x0002c8f4) */
/* WARNING: Removing unreachable block (ram,0x0002c81c) */
/* WARNING: Removing unreachable block (ram,0x0002c898) */

long * FUN_0002c7dc(long *param_1,char *param_2,ulong param_3,undefined8 param_4,ulong param_5,
                   char *param_6,long param_7)

{
  undefined2 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long *plVar5;
  bool bVar6;
  char *pcVar7;
  undefined1 *puVar8;
  long lVar9;
  char *pcVar10;
  long *unaff_x19;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  char *unaff_x21;
  ulong unaff_x22;
  undefined1 *unaff_x29;
  undefined1 *puVar13;
  undefined8 unaff_x30;
  undefined1 auStack_c0 [128];
/* WM - watermarked copy - do not remove */
  
  puVar4 = auStack_c0 + 0x80;
  puVar13 = auStack_c0 + 0xb0;
  puVar8 = (undefined1 *)param_1[3];
  plVar5 = param_1;
  if ((ulong)(param_1[2] - (long)puVar8) < param_3) {
    unaff_x30 = 0x2c81c;
    puVar4 = auStack_c0 + 0x80;
  }
  else {
    if (param_3 != 0) {
      _memcpy(puVar8);
      puVar8 = (undefined1 *)(param_1[3] + param_3);
      param_1[3] = (long)puVar8;
    }
    if ((undefined1 *)param_1[2] == puVar8) {
      param_2 = " ";
      param_3 = 1;
      unaff_x30 = 0x2c898;
    }
    else {
      *puVar8 = 0x20;
      pcVar7 = (char *)(param_1[3] + 1);
      param_1[3] = (long)pcVar7;
      if ((ulong)(param_1[2] - (long)pcVar7) < param_5) {
        plVar5 = (long *)func_0x01770110(param_1,param_4,param_5);
        pcVar7 = (char *)plVar5[3];
      }
      else if (param_5 != 0) {
        _memcpy(pcVar7,param_4,param_5);
        pcVar7 = (char *)(param_1[3] + param_5);
        param_1[3] = (long)pcVar7;
      }
      uVar3 = s_dependent_on_ViewId____01c22405._0_8_;
      if ((ulong)(plVar5[2] - (long)pcVar7) < 0x18) {
        param_2 = " dependent on ViewId: { ";
        param_3 = 0x18;
        unaff_x30 = 0x2c8f0;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar4 = auStack_c0 + 0x80;
      }
      else {
        *(undefined8 *)(pcVar7 + 8) = s_dependent_on_ViewId____01c22405._8_8_;
        *(undefined8 *)pcVar7 = uVar3;
        *(undefined8 *)(pcVar7 + 0x10) = s_dependent_on_ViewId____01c22405._16_8_;
        plVar5[3] = plVar5[3] + 0x18;
        if ((int)param_6 != 0) {
          param_5 = 0;
          uVar11 = (ulong)param_6 & 0xffffffff;
          bVar6 = true;
          param_6 = ", ";
          do {
            if ((*(ulong *)(param_7 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0) {
              if (!bVar6) {
                if ((ulong)(param_1[2] - param_1[3]) < 2) {
                  param_2 = ", ";
                  param_3 = 2;
                  unaff_x30 = 0x2c99c;
                  puVar4 = auStack_c0 + 0x80;
                  plVar5 = param_1;
                  goto code_r0x01770110;
                }
                *(undefined2 *)param_1[3] = 0x202c;
                param_1[3] = param_1[3] + 2;
              }
              plVar5 = (long *)func_0x0176fd34(param_1,param_5);
              bVar6 = false;
            }
            param_5 = param_5 + 1;
          } while (uVar11 != param_5);
        }
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
        puVar1 = (undefined2 *)param_1[3];
        if (2 < (ulong)(param_1[2] - (long)puVar1)) {
          *(undefined1 *)(puVar1 + 1) = 10;
          *puVar1 = 0x7d20;
          param_1[3] = param_1[3] + 3;
          return plVar5;
        }
        param_2 = " }\n";
        param_3 = 3;
        puVar4 = (undefined1 *)register0x00000008;
        plVar5 = param_1;
        param_1 = unaff_x19;
        param_7 = unaff_x20;
        param_6 = unaff_x21;
        param_5 = unaff_x22;
        puVar13 = unaff_x29;
      }
    }
  }
code_r0x01770110:
  *(ulong *)(puVar4 + -0x30) = param_5;
  *(char **)(puVar4 + -0x28) = param_6;
  *(long *)(puVar4 + -0x20) = param_7;
  *(long **)(puVar4 + -0x18) = param_1;
  *(undefined1 **)(puVar4 + -0x10) = puVar13;
  *(undefined8 *)(puVar4 + -8) = unaff_x30;
  pcVar7 = (char *)plVar5[3];
  uVar11 = plVar5[2] - (long)pcVar7;
  if (uVar11 < param_3) {
    do {
      pcVar10 = (char *)plVar5[1];
      uVar12 = uVar11;
      while (pcVar10 == (char *)0x0) {
        *(char **)(puVar4 + -0x40) = param_2;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        *(ulong *)(puVar4 + -0x38) = param_3;
        if (*(int *)((long)plVar5 + 0x24) == 0) {
          (**(code **)(*plVar5 + 0x50))
                    (plVar5,*(undefined8 *)(puVar4 + -0x40),*(undefined8 *)(puVar4 + -0x38));
          return plVar5;
        }
        func_0x0176fbd8(plVar5);
        pcVar7 = (char *)plVar5[3];
        uVar12 = plVar5[2] - (long)pcVar7;
        if (*(ulong *)(puVar4 + -0x38) <= uVar12) {
          param_2 = *(char **)(puVar4 + -0x40);
          param_3 = *(ulong *)(puVar4 + -0x38);
          goto joined_r0x0177026c;
        }
        param_2 = *(char **)(puVar4 + -0x40);
        param_3 = *(ulong *)(puVar4 + -0x38);
        pcVar10 = (char *)plVar5[1];
      }
      if (pcVar7 == pcVar10) {
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = param_3 / uVar12;
        }
        uVar12 = uVar11 * uVar12;
        param_3 = param_3 - uVar12;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        (**(code **)(*plVar5 + 0x50))(plVar5,param_2,uVar12);
        pcVar7 = (char *)plVar5[3];
        uVar11 = plVar5[2] - (long)pcVar7;
        if (param_3 <= uVar11) {
          func_0x01771174(plVar5,param_2 + uVar12);
          return plVar5;
        }
      }
      else {
        func_0x01771174(plVar5,param_2,uVar12);
        lVar9 = plVar5[3];
        lVar2 = plVar5[1];
        plVar5[3] = lVar2;
        (**(code **)(*plVar5 + 0x50))(plVar5,lVar2,lVar9 - lVar2);
        param_3 = param_3 - uVar12;
        pcVar7 = (char *)plVar5[3];
        uVar11 = plVar5[2] - (long)pcVar7;
      }
      param_2 = param_2 + uVar12;
    } while (uVar11 < param_3);
  }
joined_r0x0177026c:
  if ((long)param_3 < 2) {
    if (param_3 == 0) goto code_r0x01770284;
// WM - donate: donate/README.md
    if (param_3 != 1) {
code_r0x017702a4:
      _memcpy(pcVar7);
      goto code_r0x01770284;
    }
  }
  else {
    if (param_3 != 2) {
      if (param_3 != 3) {
        if (param_3 != 4) goto code_r0x017702a4;
        pcVar7[3] = param_2[3];
        pcVar7 = (char *)plVar5[3];
      }
      pcVar7[2] = param_2[2];
      pcVar7 = (char *)plVar5[3];
    }
    pcVar7[1] = param_2[1];
    pcVar7 = (char *)plVar5[3];
  }
  *pcVar7 = *param_2;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
code_r0x01770284:
  plVar5[3] = plVar5[3] + param_3;
  return plVar5;
}

