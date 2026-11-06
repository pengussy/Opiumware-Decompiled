/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x355990:c3b09ce747
 */

undefined4
FUN_00355990(byte *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  undefined4 uStack_80;
  undefined8 uStack_78;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  undefined8 uStack_70;
  
  uStack_80 = 1;
  pbVar14 = param_1;
  do {
    uVar6 = (ulong)*pbVar14;
LAB_003559f4:
    uVar4 = (uint)uVar6;
    if (uVar4 < 0x2d) {
      if (uVar4 < 0x2b) {
        if (uVar4 == 0x21) {
          pbVar14 = pbVar14 + 1;
          uVar5 = 2;
        }
        else {
          if (uVar4 == 0) {
            return uStack_80;
          }
          if (uVar4 == 0x20) goto LAB_00355e60;
LAB_00355b68:
          uVar5 = 1;
        }
      }
      else {
        if (uVar4 != 0x2b) {
          if (uVar4 != 0x2c) goto LAB_00355b68;
          goto LAB_00355e60;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        }
        pbVar14 = pbVar14 + 1;
        uVar5 = 4;
      }
LAB_00355b6c:
      uVar9 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uVar4 = 0;
      do {
        pbVar13 = pbVar14;
        lVar17 = 0;
        while ((bVar1 = pbVar13[lVar17],
               (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a || (byte)(bVar1 - 0x30) < 10 ||
               (bVar1 - 0x2d < 0x33 &&
                (1L << ((ulong)(bVar1 - 0x2d) & 0x3f) & 0x4000000010003U) != 0))) {
          lVar17 = lVar17 + 1;
        }
        if ((int)lVar17 == 0) goto LAB_00355e68;
        pbVar14 = pbVar13 + lVar17;
        lVar7 = *param_4;
        if (lVar7 == 0) {
LAB_00355d94:
          if (bVar1 == 0x2b) {
            pbVar14 = pbVar14 + 1;
          }
          uVar6 = (ulong)*pbVar14;
          if (0x3b < *pbVar14 || (1L << (uVar6 & 0x3f) & 0xc00100100000001U) == 0) {
            do {
              pbVar14 = pbVar14 + 1;
              uVar6 = (ulong)*pbVar14;
            } while (0x3b < *pbVar14 || (1L << (uVar6 & 0x3f) & 0xc00100100000001U) == 0);
          }
          goto LAB_003559ec;
        }
        plVar16 = param_4;
        while( true ) {
          param_1 = (byte *)func_0x0047630c(pbVar13,*(undefined8 *)(lVar7 + 8),lVar17);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          piVar8 = (int *)*plVar16;
          if ((((int)param_1 == 0) && (*(char *)(*(long *)(piVar8 + 2) + lVar17) == '\0')) ||
             ((*(long *)(piVar8 + 4) != 0 &&
              ((param_1 = (byte *)func_0x0047630c(pbVar13,*(long *)(piVar8 + 4),lVar17),
               (int)param_1 == 0 &&
               (piVar8 = (int *)*plVar16, *(char *)(*(long *)(piVar8 + 4) + lVar17) == '\0'))))))
          break;
          plVar16 = plVar16 + 1;
          lVar7 = *plVar16;
          if (lVar7 == 0) goto LAB_00355d94;
        }
        uVar15 = piVar8[7];
        uVar10 = uVar9;
        if (uVar15 == 0) {
LAB_00355c54:
          uVar15 = uVar10;
          uVar9 = piVar8[8];
          if (uVar9 == 0) goto LAB_00355c6c;
LAB_00355c60:
          if (uStack_70._4_4_ != 0) {
            uStack_70._4_4_ = uVar9 & uStack_70._4_4_;
            if (uStack_70._4_4_ == 0) goto LAB_00355d94;
            goto LAB_00355c6c;
          }
          uVar10 = piVar8[9];
          uStack_70._4_4_ = uVar9;
          if (uVar10 != 0) goto LAB_00355c7c;
LAB_00355c88:
          uVar11 = piVar8[10];
          if (uVar11 == 0) goto LAB_00355ca4;
LAB_00355c98:
          if (uStack_78._4_4_ != 0) {
            uStack_78._4_4_ = uVar11 & uStack_78._4_4_;
            if (uStack_78._4_4_ == 0) goto LAB_00355d94;
            goto LAB_00355ca4;
          }
          uVar10 = piVar8[0xf];
          uVar9 = uVar15;
/* reversing this took months of machine time - github.com/pengussy */
          uStack_78._4_4_ = uVar11;
        }
        else {
          if (uVar9 != 0) {
            uVar10 = uVar15 & uVar9;
            if ((uVar15 & uVar9) == 0) goto LAB_00355d94;
            goto LAB_00355c54;
          }
          uVar9 = piVar8[8];
          if (uVar9 != 0) goto LAB_00355c60;
LAB_00355c6c:
          uVar10 = piVar8[9];
          uVar9 = uStack_70._4_4_;
          if (uVar10 == 0) goto LAB_00355c88;
LAB_00355c7c:
          if ((uint)uStack_70 != 0) {
/*  keep the notice, keep the source honest  */
            uStack_70._0_4_ = uVar10 & (uint)uStack_70;
            uStack_70._4_4_ = uVar9;
            if ((uint)uStack_70 == 0) goto LAB_00355d94;
            goto LAB_00355c88;
          }
          uVar11 = piVar8[10];
          uStack_70 = CONCAT44(uVar9,uVar10);
          if (uVar11 != 0) goto LAB_00355c98;
LAB_00355ca4:
          uVar10 = piVar8[0xf];
          uVar9 = uVar15;
        }
        uVar15 = uVar4;
        if ((uVar10 & 0x1f) != 0) {
          if ((uVar4 & 0x1f) == 0) {
            uVar15 = uVar10 & 0x1f;
          }
          else {
            uVar15 = (uVar10 | 0xffffffe0) & uVar4;
            if ((uVar15 & 0x1f) == 0) goto LAB_00355d94;
          }
        }
        uVar4 = uVar15 | 0x20;
        if (((uint)((uVar15 & 0x20) == 0) & uVar10 >> 5) == 0) {
          uVar4 = uVar15;
        }
        if (*piVar8 == 0) {
          iVar3 = piVar8[0xb];
          if (iVar3 == 0) {
            param_1 = (byte *)0x0;
          }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
          else {
            param_1 = (byte *)0x0;
            if ((int)uStack_78 == 0) {
              uStack_78 = CONCAT44(uStack_78._4_4_,iVar3);
            }
            else {
              bVar2 = (int)uStack_78 != iVar3;
              uStack_78 = CONCAT44(uStack_78._4_4_,iVar3);
              if (bVar2) goto LAB_00355d94;
            }
          }
        }
        else {
          param_1 = (byte *)(ulong)(uint)piVar8[6];
        }
        pbVar14 = pbVar14 + 1;
      } while (bVar1 == 0x2b);
      uVar6 = uStack_70 & 0xffffffff;
      uStack_70._4_4_ = (uint)(uStack_70 >> 0x20);
      param_1 = (byte *)func_0x00355560(param_1,uVar9,uStack_70._4_4_,uVar6,uStack_78._4_4_,
                                        uStack_78 & 0xffffffff,uVar4,uVar5,0xffffffff,param_2,
                                        param_3);
      pbVar14 = pbVar13 + lVar17;
      uVar6 = (ulong)*pbVar14;
LAB_003559ec:
      if ((int)uVar6 == 0) {
        return uStack_80;
      }
      goto LAB_003559f4;
    }
    if (uVar4 == 0x2d) {
      pbVar14 = pbVar14 + 1;
      uVar5 = 3;
// origin: github.com/pengussy
      goto LAB_00355b6c;
    }
    if (uVar4 == 0x40) {
      iVar3 = 0;
      param_1 = pbVar14 + 1;
      pbVar13 = param_1;
      while ((bVar1 = *pbVar13, (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a || (byte)(bVar1 - 0x30) < 10 ||
             (bVar1 - 0x2d < 0x33 && (1L << ((ulong)(bVar1 - 0x2d) & 0x3f) & 0x4000000010003U) != 0)
             )) {
        pbVar13 = pbVar13 + 1;
        iVar3 = iVar3 + 1;
      }
      if (iVar3 == 8) {
        iVar3 = func_0x0047630c(param_1,"STRENGTH",8);
        if (iVar3 != 0) {
LAB_00355b18:
          uVar12 = 0x482;
          goto LAB_00355b1c;
        }
        param_1 = (byte *)func_0x00355824(param_2,param_3);
        pbVar14 = pbVar13;
        if ((int)param_1 == 0) goto LAB_00355b48;
      }
      else {
        if (iVar3 == 10) {
          param_1 = (byte *)func_0x0047630c(param_1,"SECLEVEL=",9);
          if ((int)param_1 != 0) goto LAB_00355b18;
          if (0xfffffff9 < pbVar14[10] - 0x36) {
            *(uint *)(param_5 + 0x98) = pbVar14[10] - 0x30;
            pbVar14 = pbVar13;
            goto LAB_00355e44;
          }
          uVar12 = 0x47c;
/* WM - keep the notice, keep the source honest */
        }
        else {
          if (iVar3 == 0) {
LAB_00355e68:
            func_0x004464bc(param_1);
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                            ,0x3df,"ssl_cipher_process_rulestr");
            func_0x004466b0(0x14,0x118,0);
            return 0;
          }
          uVar12 = 0x482;
        }
LAB_00355b1c:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                        ,uVar12,"ssl_cipher_process_rulestr");
        param_1 = (byte *)func_0x004466b0(0x14,0x118,0);
LAB_00355b48:
        uStack_80 = 0;
        pbVar14 = pbVar13;
      }
LAB_00355e44:
      for (; uVar6 = (ulong)*pbVar14,
          0x3b < *pbVar14 || (1L << (uVar6 & 0x3f) & 0xc00100100000001U) == 0; pbVar14 = pbVar14 + 1
          ) {
      }
      goto LAB_003559ec;
    }
    if (1 < uVar4 - 0x3a) goto LAB_00355b68;
LAB_00355e60:
    pbVar14 = pbVar14 + 1;
  } while( true );
// do not claim this as your own
}

