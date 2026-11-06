/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3e47a4:eb4aa3c143
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_003e47a4(undefined8 param_1,uint *param_2,undefined8 param_3,byte *param_4,long param_5,
                  long param_6,int param_7,byte *param_8)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 uStack_78;
  int iStack_70;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  byte *pbStack_68;
  
  lVar11 = *(long *)(param_4 + 0x20);
  iVar5 = (int)param_3;
  if (lVar11 == 0) {
    pcVar14 = (code *)0x0;
    bVar9 = *param_4;
    if (bVar9 == 0) goto LAB_003e481c;
LAB_003e4828:
    if (*(long *)param_2 == 0) {
      if ((*param_8 & 1) == 0) {
        return 1;
      }
      if ((param_7 == 0) &&
         (uVar6 = func_0x003e4ddc(param_1,param_3,param_5,param_6,param_8), (int)uVar6 == 0)) {
        return uVar6;
      }
      iVar5 = func_0x003ea20c(param_1,"<ABSENT>\n");
      goto joined_r0x003e48d8;
    }
    if (bVar9 < 4) {
      if (bVar9 == 0) goto LAB_003e48e4;
      if (bVar9 == 1) goto LAB_003e4940;
      if (bVar9 != 2) goto LAB_003e4a48;
      uVar3 = func_0x003e5544(param_2,param_4);
      if (((int)uVar3 < 0) || (*(long *)(param_4 + 0x18) <= (long)(ulong)uVar3)) {
        iVar5 = func_0x003ead9c(param_1,"ERROR: selector [%d] invalid\n");
/* reversing this took months of machine time - github.com/pengussy */
        return (ulong)(0 < iVar5);
      }
      lVar10 = *(long *)(param_4 + 0x10) + (ulong)uVar3 * 0x28;
      param_2 = (uint *)func_0x003e5884(param_2,lVar10);
      goto LAB_003e48f8;
    }
    if (bVar9 != 4) {
      if (bVar9 == 5) goto LAB_003e499c;
      if (bVar9 != 6) {
LAB_003e4a48:
        func_0x003ead9c(param_1,"Unprocessed type %d\n");
        return 0;
      }
LAB_003e4940:
      if ((param_7 == 0) &&
         (uVar6 = func_0x003e4ddc(param_1,param_3,param_5,param_6,param_8), (int)uVar6 == 0)) {
        return uVar6;
      }
      if (param_5 != 0 || param_6 != 0) {
        if ((*param_8 >> 1 & 1) == 0) {
          iVar4 = func_0x003ea20c(param_1,"\n");
        }
        else {
          iVar4 = func_0x003ea20c(param_1," {\n");
        }
        if (iVar4 < 1) {
          return 0;
        }
      }
      if (pcVar14 != (code *)0x0) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar6 = (*pcVar14)(8,param_2,param_4,&uStack_78);
        if ((int)uVar6 == 0) {
          return uVar6;
        }
        if ((int)uVar6 == 2) {
          return 1;
        }
      }
      if (0 < *(long *)(param_4 + 0x18)) {
        lVar11 = 0;
        lVar10 = *(long *)(param_4 + 0x10);
        do {
          lVar7 = func_0x003e5894(*(undefined8 *)param_2,lVar10,1);
          if (lVar7 == 0) {
            return 0;
          }
          uVar8 = func_0x003e5884(param_2,lVar7);
          uVar6 = func_0x003e4f28(param_1,uVar8,iVar5 + 2,lVar7,param_8);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          lVar11 = lVar11 + 1;
          lVar10 = lVar10 + 0x28;
        } while (lVar11 < *(long *)(param_4 + 0x18));
      }
      if (((*param_8 >> 1 & 1) != 0) && (iVar5 = func_0x003ead9c(param_1,"%*s}\n"), iVar5 < 0)) {
        return 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      }
      if (pcVar14 == (code *)0x0) {
        return 1;
      }
      uVar6 = (*pcVar14)(9,param_2,param_4,&uStack_78);
      iVar5 = (int)uVar6;
      goto joined_r0x003e49dc;
    }
    if (param_7 == 0) {
      uVar6 = func_0x003e4ddc(param_1,param_3,param_5,param_6,param_8);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      lVar11 = *(long *)(param_4 + 0x20);
    }
    if ((lVar11 == 0) || (*(code **)(lVar11 + 0x30) == (code *)0x0)) {
      if (param_6 == 0) {
        return 1;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      }
      iVar5 = func_0x003ead9c(param_1,":EXTERNAL TYPE %s\n");
      goto joined_r0x003e48d8;
    }
    uVar6 = (**(code **)(lVar11 + 0x30))(param_1,param_2,param_3,&UNK_01cb7848,param_8);
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    if ((int)uVar6 != 2) {
      return 1;
    }
LAB_003e4dc0:
    iVar5 = func_0x003ea20c(param_1,"\n");
joined_r0x003e48d8:
    if (iVar5 < 1) {
      return 0;
    }
  }
  else {
    lVar10 = 0x18;
    if ((*(byte *)(lVar11 + 8) & 8) != 0) {
      lVar10 = 0x28;
    }
/*  thanks for reading - discord.gg/sdkhDjTex  */
    pcVar14 = *(code **)(lVar11 + lVar10);
    bVar9 = *param_4;
    uStack_78 = param_1;
    iStack_70 = iVar5;
    pbStack_68 = param_8;
    if (bVar9 != 0) goto LAB_003e4828;
LAB_003e481c:
    if (*(long *)(param_4 + 8) != 1) goto LAB_003e4828;
LAB_003e48e4:
    lVar10 = *(long *)(param_4 + 0x10);
    if (lVar10 == 0) {
LAB_003e499c:
      uVar6 = func_0x003e4ddc(param_1,param_3,param_5,param_6,param_8);
      if ((int)uVar6 == 0) {
        return uVar6;
      }
      if ((lVar11 == 0) || (*(code **)(lVar11 + 0x38) == (code *)0x0)) {
        if (*param_4 == 5) {
          puVar12 = *(uint **)param_2;
          uVar6 = (long)(int)puVar12[1] & 0xfffffffffffffeff;
LAB_003e4bf0:
          uVar13 = uVar6;
// WM - keep the notice, keep the source honest
          if ((*param_8 >> 3 & 1) == 0) goto LAB_003e4bf8;
LAB_003e4c70:
          lVar11 = func_0x003de740(uVar6);
        }
        else {
          uVar6 = *(ulong *)(param_4 + 8);
          if (uVar6 == 1) {
            puVar12 = (uint *)0x0;
            goto LAB_003e4bf0;
          }
          puVar12 = *(uint **)param_2;
          if (uVar6 != 0xfffffffffffffffc) goto LAB_003e4bf0;
          uVar6 = (ulong)*puVar12;
          uVar13 = (ulong)(int)*puVar12;
          param_2 = puVar12 + 2;
          puVar12 = *(uint **)param_2;
          if ((*param_8 >> 4 & 1) == 0) goto LAB_003e4c70;
LAB_003e4bf8:
          lVar11 = 0;
        }
        if (uVar13 != 5) {
          if (lVar11 != 0) {
            iVar5 = func_0x003ea20c(param_1);
            if (iVar5 < 1) {
              return 0;
            }
            iVar5 = func_0x003ea20c(param_1,":");
            if (iVar5 < 1) {
              return 0;
            }
          }
          if ((long)uVar13 < 6) {
/*  reversing this took months of machine time  */
            if ((long)uVar13 < 3) {
              if (uVar13 == 0xfffffffffffffffd) goto LAB_003e4cc0;
              if (uVar13 == 1) {
                uVar3 = *param_2;
                if (uVar3 == 0xffffffff) {
                  uVar3 = *(uint *)(param_4 + 0x28);
                }
                pcVar1 = "FALSE";
                if (uVar3 != 0) {
                  pcVar1 = "TRUE";
                }
                pcVar2 = "BOOL ABSENT";
                if (uVar3 != 0xffffffff) {
                  pcVar2 = pcVar1;
                }
                iVar5 = func_0x003ea20c(param_1,pcVar2);
                uVar6 = (ulong)(0 < iVar5);
                goto LAB_003e4dbc;
              }
              if (uVar13 == 2) goto LAB_003e4d30;
            }
            else if (uVar13 - 3 < 2) {
              uVar6 = func_0x003e52d8(param_1,puVar12,param_3);
              iVar5 = (int)uVar6;
              goto joined_r0x003e49dc;
            }
// WM - origin: github.com/pengussy
LAB_003e4dac:
            uVar6 = func_0x003d9124(param_1,puVar12,*(undefined8 *)(param_8 + 0x20));
          }
          else if ((long)uVar13 < 0x10) {
            if (uVar13 == 6) {
              uVar6 = func_0x003e522c(param_1,*(undefined8 *)param_2);
            }
            else {
              if (uVar13 != 10) goto LAB_003e4dac;
LAB_003e4d30:
              uVar6 = func_0x003e51c0(param_1,puVar12);
            }
          }
          else {
            if (uVar13 - 0x10 < 2) {
LAB_003e4cc0:
              iVar5 = func_0x003ea20c(param_1,"\n");
              if (iVar5 < 1) {
                return 0;
              }
              iVar5 = func_0x003de70c(param_1,*(undefined8 *)(puVar12 + 2),(long)(int)*puVar12,
                                      param_3,0);
              goto joined_r0x003e48d8;
            }
            if (uVar13 == 0x17) {
/* no support for modified copies - github.com/pengussy */
              uVar6 = func_0x003db300(param_1,puVar12);
            }
            else {
              if (uVar13 != 0x18) goto LAB_003e4dac;
              uVar6 = func_0x003d60b0(param_1,puVar12);
            }
          }
LAB_003e4dbc:
          if ((int)uVar6 == 0) {
            return uVar6;
          }
          goto LAB_003e4dc0;
        }
        iVar5 = func_0x003ea20c(param_1,"NULL\n");
        goto joined_r0x003e48d8;
      }
      uVar6 = (**(code **)(lVar11 + 0x38))(param_1,param_2,param_4,param_3,param_8);
      iVar5 = (int)uVar6;
    }
    else {
LAB_003e48f8:
      uVar6 = func_0x003e4f28(param_1,param_2,param_3,lVar10,param_8);
      iVar5 = (int)uVar6;
    }
joined_r0x003e49dc:
    if (iVar5 == 0) {
      return uVar6;
    }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  }
  return 1;
}

