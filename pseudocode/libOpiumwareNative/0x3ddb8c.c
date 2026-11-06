/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3ddb8c:ccb59b17c4
 */

void FUN_003ddb8c(long param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 int param_6,undefined8 param_7)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  long lVar14;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  bool bVar22;
  char *pcVar23;
  uint uVar24;
  uint *puVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  undefined1 auVar29 [16];
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  byte *pbStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  byte *pbStack_188;
  char *pcStack_180;
  long lStack_170;
  byte *pbStack_168;
  long lStack_160;
  undefined8 uStack_158;
  int iStack_14c;
  undefined8 uStack_148;
  byte *pbStack_140;
// WM - reversing this took months of machine time
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long lStack_120;
  undefined8 uStack_118;
  uint uStack_110;
  uint uStack_10c;
  byte *pbStack_108;
  byte *pbStack_100;
  byte *pbStack_f8;
  byte abStack_f0 [128];
  long lStack_70;
  undefined1 auStack_68 [8];
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_118 = 0;
  if ((int)param_5 < 0x81) {
    pbStack_f8 = (byte *)*param_2;
    if (0 < param_3) {
      pbStack_168 = pbStack_f8 + param_3;
      lStack_120 = (long)(int)param_4;
      iVar8 = 0;
      if (param_6 != 0) {
        iVar8 = (int)param_5;
      }
      lStack_160 = (long)iVar8;
      lStack_170 = (long)(int)param_7;
      uStack_158 = param_4;
      iStack_14c = param_6;
      uStack_148 = param_5;
      uStack_138 = param_7;
      uStack_130 = param_5;
      plStack_128 = param_2;
LAB_003ddc7c:
      pbVar18 = pbStack_f8;
      uVar7 = func_0x003dd2e4(&pbStack_f8,&pbStack_108,&uStack_10c,&uStack_110,param_3);
      uVar1 = uStack_10c;
      uVar24 = uStack_110;
/* WM - reversing this took months of machine time */
      if ((uVar7 >> 7 & 1) != 0) {
        func_0x003ea20c(param_1,"Error in encoding\n");
        goto LAB_003de654;
      }
      lVar19 = (long)((int)pbStack_f8 - (int)pbVar18);
      pbStack_1a0 = pbVar18 + (lStack_120 - *param_2);
      uVar17 = (ulong)uStack_10c;
      if (uVar7 == 0x21) {
        pbStack_188 = (byte *)0x1c3cfcb;
        pcVar16 = "%5ld:d=%-2d hl=%ld l=inf  %s";
        uStack_198 = param_5;
      }
      else {
        pcStack_180 = "prim: ";
        if ((uVar7 & 0x20) != 0) {
          pcStack_180 = "cons: ";
        }
/* reversing this took months of machine time - github.com/pengussy */
        pbStack_188 = pbStack_108;
        uStack_198 = uStack_148;
        pcVar16 = "%5ld:d=%-2d hl=%ld l=%4ld %s";
      }
      lStack_190 = lVar19;
      iVar8 = func_0x003eaef0(abStack_f0,0x80,pcVar16);
      if (iVar8 < 1) {
        lVar12 = 0;
LAB_003de61c:
        func_0x003e9468(lVar12);
        goto LAB_003de654;
      }
      pbStack_140 = pbVar18;
      if (param_1 == 0) {
        lVar13 = 0;
        bVar3 = false;
        lVar12 = 0;
        lVar14 = -1;
LAB_003dddfc:
        if (((uVar24 ^ 0xffffffff) & 0xc0) == 0) {
          pcVar16 = "priv [ %d ] ";
LAB_003ddf04:
          pcVar23 = (char *)abStack_f0;
          pbStack_1a0 = (byte *)uVar17;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          func_0x003eaef0(pcVar23,0x80,pcVar16);
        }
        else {
          if ((uVar24 >> 7 & 1) != 0) {
            pcVar16 = "cont [ %d ]";
            goto LAB_003ddf04;
          }
          if ((uVar24 >> 6 & 1) != 0) {
            pcVar16 = "appl [ %d ]";
            goto LAB_003ddf04;
          }
          if (0x1e < (int)uVar1) {
            pcVar16 = "<ASN1 %d>";
            goto LAB_003ddf04;
          }
          uVar24 = uVar1 & 10;
          if ((uVar1 & 0xfffffff7) != 0x102) {
            uVar24 = uVar1;
          }
          pcVar23 = "(unknown)";
          if (uVar24 < 0x1f) {
            pcVar23 = *(char **)(&UNK_01dc88e8 + (ulong)uVar24 * 8);
          }
        }
        pbStack_1a0 = (byte *)pcVar23;
        iVar8 = func_0x003ead9c(lVar13,"%-18s");
        bVar22 = iVar8 < 1;
      }
      else {
        lVar12 = func_0x003e95bc(param_1,0x4f,0,abStack_f0);
        if (lVar12 < 1) {
          func_0x003e82e4();
          lVar12 = func_0x003e945c();
/* no support for modified copies */
          if ((lVar12 == 0) || (lVar13 = func_0x003ea920(lVar12,param_1), lVar13 == 0))
          goto LAB_003de61c;
          bVar3 = true;
        }
        else {
          bVar3 = false;
          lVar12 = 0;
          lVar13 = param_1;
        }
        lVar14 = func_0x003e95bc(lVar13,0x51,0,0);
        lVar15 = func_0x003e95bc(lVar13,0x4f,0,abStack_f0);
        if ((0 < lVar15) && (lVar15 = func_0x003e95bc(lVar13,0x50,lStack_160,0), 0 < lVar15))
        goto LAB_003dddfc;
        bVar22 = true;
      }
      if (-1 < lVar14) {
        func_0x003e95bc(lVar13,0x50,lVar14,0);
      }
      if (bVar3) {
        func_0x003ea974(lVar13);
      }
      func_0x003e9468(lVar12);
      pbVar6 = pbStack_f8;
      pbVar18 = pbStack_108;
      param_2 = plStack_128;
      param_5 = uStack_130;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
      if (bVar22) {
        uVar11 = 0;
        puVar25 = (uint *)0x0;
        piVar28 = (int *)0x0;
        piVar26 = (int *)0x0;
        goto LAB_003de664;
      }
      pbVar21 = (byte *)(param_3 - lVar19);
      if ((uVar7 >> 5 & 1) != 0) {
        iVar9 = func_0x003e9a60(param_1,"\n",1);
        param_5 = uStack_130;
        uVar5 = uStack_138;
        iVar8 = iStack_14c;
        pbVar20 = pbStack_168;
        if (0 < iVar9) {
          if ((long)pbStack_108 <= (long)pbVar21) {
            iVar9 = (int)uStack_130;
            iVar27 = (int)uStack_158;
            if ((uVar7 == 0x21) && (pbStack_108 == (byte *)0x0)) {
              do {
                uVar11 = FUN_003ddb8c(param_1,&pbStack_f8,(long)pbVar20 - (long)pbStack_f8,
                                      iVar27 + ((int)pbStack_f8 - (int)*param_2),iVar9 + 1,iVar8,
                                      uVar5);
/* wm:do not claim this as your own */
                if ((int)uVar11 == 0) goto LAB_003de658;
              } while (((int)uVar11 != 2) && (pbStack_f8 < pbVar20));
              pbStack_108 = pbStack_f8 + -(long)pbVar6;
            }
            else {
              pbVar20 = pbStack_108;
              pbVar4 = pbStack_f8;
              while (pbStack_f8 = pbVar4, pbVar4 < pbVar6 + (long)pbVar18) {
                iVar10 = FUN_003ddb8c(param_1,&pbStack_f8,pbVar20,
                                      iVar27 + ((int)pbVar4 - (int)*param_2),iVar9 + 1,iVar8,uVar5);
                if (iVar10 == 0) goto LAB_003de654;
                pbVar20 = pbVar4 + ((long)pbVar20 - (long)pbStack_f8);
                pbVar4 = pbStack_f8;
              }
            }
            goto LAB_003ddc70;
          }
          pbStack_1a0 = pbVar21;
          func_0x003ead9c(param_1,"length is greater than %ld\n");
        }
        goto LAB_003de654;
      }
      if (uStack_110 != 0) {
        pbStack_f8 = pbStack_f8 + (long)pbStack_108;
        iVar8 = func_0x003e9a60(param_1,"\n",1);
        if (iVar8 < 1) goto LAB_003de654;
        goto LAB_003ddc70;
      }
      uVar24 = (uint)uStack_138;
      switch(uStack_10c) {
      case 1:
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        if (pbStack_108 == (byte *)0x1) {
          iVar8 = 0;
        }
        else {
          iVar8 = func_0x003ea20c(param_1,":BAD BOOLEAN");
          if (iVar8 < 1) goto LAB_003de654;
          if ((long)pbStack_108 < 1) goto LAB_003de4d8;
          iVar8 = 1;
        }
        pbStack_1a0 = (byte *)(ulong)*pbStack_f8;
        func_0x003ead9c(param_1,&UNK_01c3cf93);
        goto LAB_003de4d0;
      case 2:
        pbStack_100 = pbStack_140;
        piVar28 = (int *)func_0x003e53d4(0,&pbStack_100,pbStack_108 + lVar19);
        if (piVar28 == (int *)0x0) {
          iVar8 = func_0x003ea20c(param_1,":BAD INTEGER");
          if (0 < iVar8) {
            uVar11 = 1;
            goto LAB_003de4c8;
          }
          goto LAB_003de654;
        }
        iVar8 = func_0x003e9a60(param_1,":",1);
        if ((0 < iVar8) &&
/* WM - proprietary - see LICENSE - do not sell */
           ((piVar28[1] != 0x102 || (iVar8 = func_0x003e9a60(param_1,"-",1), 0 < iVar8)))) {
          iVar8 = *piVar28;
          if (0 < iVar8) {
            lVar12 = 0;
            do {
              pbStack_1a0 = (byte *)(ulong)*(byte *)(*(long *)(piVar28 + 2) + lVar12);
              iVar8 = func_0x003ead9c(param_1,"%02X");
              if (iVar8 < 1) goto LAB_003de6dc;
              lVar12 = lVar12 + 1;
              iVar8 = *piVar28;
            } while (lVar12 < iVar8);
          }
          if (iVar8 == 0) {
            iVar8 = func_0x003e9a60(param_1,&UNK_01c3cfa8,2);
            uVar11 = 0;
            if (iVar8 < 1) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
              puVar25 = (uint *)0x0;
              goto LAB_003de660;
            }
          }
          else {
            uVar11 = 0;
          }
LAB_003de4c8:
          iVar8 = (int)uVar11;
          func_0x003e53f4(piVar28);
          goto LAB_003de4d0;
        }
LAB_003de6dc:
        uVar11 = 0;
        puVar25 = (uint *)0x0;
        goto LAB_003de660;
      default:
        if ((uVar24 == 0) || ((long)pbStack_108 < 1)) goto LAB_003de54c;
        iVar8 = func_0x003e9a60(param_1,"\n",1);
        if (iVar8 < 1) goto LAB_003de654;
        uVar1 = (uint)pbStack_108;
        if (lStack_170 <= (long)pbStack_108 && uVar24 != 0xffffffff) {
          uVar1 = uVar24;
        }
        iVar8 = func_0x003e918c(param_1,pbStack_f8,uVar1,6);
        goto LAB_003de560;
      case 4:
        pbStack_100 = pbStack_140;
/* found on a paste site? it was re-uploaded illegally */
        puVar25 = (uint *)func_0x003e53a4(0,&pbStack_100,pbStack_108 + lVar19);
        if ((puVar25 == (uint *)0x0) || (uVar17 = (ulong)*puVar25, (int)*puVar25 < 1))
        goto LAB_003de46c;
        pbStack_100 = *(byte **)(puVar25 + 2);
        pbVar18 = pbStack_100;
        do {
          bVar2 = *pbVar18;
          if (bVar2 < 0x20) {
            if (0xd < bVar2 || (1 << (ulong)(bVar2 & 0x1f) & 0x2600U) == 0) goto LAB_003de214;
          }
          else if (0x7e < bVar2) {
LAB_003de214:
            if (uVar24 == 0) {
              iVar8 = func_0x003e9a60(param_1,"[HEX DUMP]:",0xb);
              if (iVar8 < 1) goto LAB_003de6f8;
              if ((int)*puVar25 < 1) goto LAB_003de46c;
/*  chat: discord.gg/sdkhDjTex  */
              lVar19 = 0;
              goto LAB_003de5b0;
            }
            iVar8 = func_0x003e9a60(param_1,"\n",1);
            if (iVar8 < 1) goto LAB_003de6f8;
            uVar7 = *puVar25;
            uVar1 = uVar24;
            if ((int)uVar7 <= (int)uVar24) {
              uVar1 = uVar7;
            }
            if (uVar24 != 0xffffffff) {
              uVar7 = uVar1;
            }
            iVar8 = func_0x003e918c(param_1,pbStack_100,uVar7,6);
            if (iVar8 < 1) goto LAB_003de6f8;
            func_0x003e53c4(puVar25);
            goto LAB_003de568;
          }
          uVar17 = uVar17 - 1;
          pbVar18 = pbVar18 + 1;
        } while (uVar17 != 0);
        iVar8 = func_0x003e9a60(param_1,":",1);
        if ((0 < iVar8) && (iVar8 = func_0x003e9a60(param_1,pbStack_100,*puVar25), 0 < iVar8))
        goto LAB_003de46c;
LAB_003de6f8:
/*  if you paid for this, you were scammed  */
        uVar11 = 0;
        goto LAB_003de65c;
      case 6:
        pbStack_100 = pbStack_140;
        lVar12 = func_0x003d85b8(&uStack_118,&pbStack_100,pbStack_108 + lVar19);
        if (lVar12 != 0) {
          iVar8 = func_0x003e9a60(param_1,":",1);
          if (0 < iVar8) {
            func_0x003d83fc(param_1,uStack_118);
            goto LAB_003de54c;
          }
          goto LAB_003de654;
        }
        iVar8 = func_0x003ea20c(param_1,":BAD OBJECT");
        if (iVar8 < 1) goto LAB_003de654;
        goto LAB_003de4d8;
      case 10:
        pbStack_100 = pbStack_140;
        piVar26 = (int *)func_0x003e5404(0,&pbStack_100,pbStack_108 + lVar19);
        if (piVar26 == (int *)0x0) {
          iVar8 = func_0x003ea20c(param_1,":BAD ENUMERATED");
          if (0 < iVar8) {
            iVar8 = 1;
            goto LAB_003de498;
          }
          goto LAB_003de654;
        }
        iVar8 = func_0x003e9a60(param_1,":",1);
        if ((0 < iVar8) &&
           ((piVar26[1] != 0x10a || (iVar8 = func_0x003e9a60(param_1,"-",1), 0 < iVar8)))) {
// origin: github.com/pengussy
          iVar8 = *piVar26;
          if (0 < iVar8) {
            lVar12 = 0;
            do {
              pbStack_1a0 = (byte *)(ulong)*(byte *)(*(long *)(piVar26 + 2) + lVar12);
              iVar8 = func_0x003ead9c(param_1,"%02X");
              if (iVar8 < 1) goto LAB_003de6ec;
              lVar12 = lVar12 + 1;
              iVar8 = *piVar26;
            } while (lVar12 < iVar8);
          }
          if (iVar8 == 0) {
            iVar9 = func_0x003e9a60(param_1,&UNK_01c3cfa8,2);
            iVar8 = 0;
            if (iVar9 < 1) goto LAB_003de6ec;
          }
          else {
            iVar8 = 0;
          }
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
LAB_003de498:
          func_0x003e53c4(piVar26);
          param_5 = uStack_130;
LAB_003de4d0:
          if (iVar8 == 0) goto LAB_003de54c;
LAB_003de4d8:
          iVar8 = func_0x003ea20c(param_1,&UNK_01c3cfc8);
          pbVar18 = pbStack_140;
          if (0 < iVar8) {
            if (0 < (long)pbStack_108) {
              lVar12 = 0;
              do {
                pbStack_1a0 = (byte *)(ulong)pbVar18[lVar12 + lVar19];
                iVar8 = func_0x003ead9c(param_1,"%02X");
                if (iVar8 < 1) goto LAB_003de654;
                lVar12 = lVar12 + 1;
              } while (lVar12 < (long)pbStack_108);
            }
            iVar8 = func_0x003ea20c(param_1,&UNK_01c892b6);
            if (0 < iVar8) goto LAB_003de54c;
          }
          goto LAB_003de654;
        }
LAB_003de6ec:
        uVar11 = 0;
/* unlicensed copy if this notice is missing - github.com/pengussy */
        puVar25 = (uint *)0x0;
        piVar28 = (int *)0x0;
        goto LAB_003de664;
      case 0xc:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1a:
        iVar8 = func_0x003e9a60(param_1,":",1);
        if (iVar8 < 1) goto LAB_003de654;
        if (0 < (long)pbStack_108) {
          iVar8 = func_0x003e9a60(param_1,pbStack_f8);
          if (iVar8 != (int)pbStack_108) goto LAB_003de654;
        }
      case 0x1e:
        goto LAB_003de54c;
      }
    }
LAB_003de5e8:
    puVar25 = (uint *)0x0;
    piVar28 = (int *)0x0;
    piVar26 = (int *)0x0;
    uVar11 = 1;
LAB_003de664:
    func_0x003d89dc(uStack_118);
    func_0x003e53c4(puVar25);
    func_0x003e53f4(piVar28);
    func_0x003e53c4(piVar26);
    *param_2 = (long)pbStack_f8;
  }
// chat: discord.gg/sdkhDjTex
  else {
    func_0x003ea20c(param_1,"BAD RECURSION DEPTH\n");
    uVar11 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  auVar29 = ___stack_chk_fail(uVar11);
  uStack_1b8 = auVar29._8_8_;
  puStack_1a8 = &DAT_003de70c;
  puStack_1b0 = auStack_68 + 0x58;
  FUN_003ddb8c(auVar29._0_8_,&uStack_1b8);
  return;
  while (lVar19 = lVar19 + 1, lVar19 < (int)*puVar25) {
LAB_003de5b0:
    pbStack_1a0 = (byte *)(ulong)pbStack_100[lVar19];
    iVar8 = func_0x003ead9c(param_1,"%02X");
    if (iVar8 < 1) goto LAB_003de6f8;
  }
LAB_003de46c:
  func_0x003e53c4(puVar25);
LAB_003de54c:
  iVar8 = func_0x003e9a60(param_1,"\n",1);
LAB_003de560:
  if (iVar8 < 1) {
LAB_003de654:
/* wm:unlicensed copy if this notice is missing */
    uVar11 = 0;
LAB_003de658:
    puVar25 = (uint *)0x0;
LAB_003de65c:
    piVar28 = (int *)0x0;
LAB_003de660:
    piVar26 = (int *)0x0;
    goto LAB_003de664;
  }
LAB_003de568:
  pbStack_f8 = pbStack_f8 + (long)pbStack_108;
  if (uStack_10c == 0 && uStack_110 == 0) {
    puVar25 = (uint *)0x0;
    piVar28 = (int *)0x0;
    piVar26 = (int *)0x0;
    uVar11 = 2;
    goto LAB_003de664;
  }
LAB_003ddc70:
  param_3 = (long)pbVar21 - (long)pbStack_108;
  if (param_3 == 0 || (long)pbVar21 < (long)pbStack_108) goto LAB_003de5e8;
  goto LAB_003ddc7c;
}

