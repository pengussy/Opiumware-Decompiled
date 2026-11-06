/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x391e8:2ad1051413
   =========================================================================== */

undefined8 FUN_000391e8(long *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  ulong uVar19;
  ulong uVar20;
  uint *puVar21;
  uint uVar22;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((param_3 < 8) || (uVar3 = *param_2, param_3 < uVar3)) {
LAB_00039220:
    uVar8 = 0;
  }
/* wm:reversing this took months of machine time */
  else if (*(short *)((long)param_2 + 6) == 0) {
    uVar8 = 1;
  }
  else {
    uVar22 = 0;
    puVar21 = param_2 + 2;
    do {
      if ((ulong)uVar3 < (ulong)((long)puVar21 + (8 - (long)param_2))) goto LAB_00039220;
      uVar4 = *puVar21;
      uVar10 = (ulong)uVar4;
      if ((ulong)uVar3 < (long)puVar21 + (uVar10 - (long)param_2)) goto LAB_00039220;
      sVar5 = *(short *)((long)puVar21 + 6);
      if (sVar5 == 0) {
        if ((uVar4 < 0x1c) || (uVar10 < (ulong)puVar21[4] + 0x1c)) goto LAB_00039220;
        puVar18 = puVar21 + 7;
        uVar10 = (ulong)puVar21[5];
        if (*(short *)((long)puVar21 + 0xe) == 1) {
          lVar11 = *param_1;
          lVar17 = param_1[1];
          uVar13 = lVar17 - lVar11;
          lVar6 = uVar10 - uVar13;
          if (uVar10 < uVar13 || lVar6 == 0) {
            if (uVar10 < uVar13) {
              param_1[1] = lVar11 + uVar10;
            }
          }
          else if ((ulong)(param_1[2] - lVar11) < uVar10) {
            uVar20 = (param_1[2] - lVar11) * 2;
            if (uVar20 <= uVar10) {
              uVar20 = uVar10;
            }
/* WM - unlicensed copy if this notice is missing */
            lVar17 = __Znwm();
            _bzero(lVar17 + uVar13,lVar6);
            _memcpy(lVar17,lVar11,uVar13);
            *param_1 = lVar17;
            param_1[1] = lVar17 + uVar10;
            param_1[2] = lVar17 + uVar20;
            if (lVar11 != 0) {
              __ZdlPv(lVar11);
            }
          }
          else {
            _bzero();
            param_1[1] = lVar17 + lVar6;
          }
          uVar8 = func_0x01726e64();
          iVar7 = func_0x009b9538(uVar8,puVar18,puVar21[4],*param_1,param_1[1] - *param_1);
          if ((iVar7 != 0) ||
             (puVar18 = (uint *)*param_1, param_1[1] - (long)puVar18 != (ulong)puVar21[5]))
          goto LAB_00039220;
        }
        else if (puVar21[4] != puVar21[5]) goto LAB_00039220;
        func_0x00039708(param_1 + 3,puVar21[6]);
        uVar10 = (ulong)puVar21[6];
        if (puVar21[6] != 0) {
/* if you paid for this, you were scammed - github.com/pengussy */
          lVar11 = 0;
          uVar13 = 0;
          puVar16 = puVar18;
          do {
            puVar1 = puVar16 + 3;
            uVar20 = (ulong)puVar21[5];
            if (((uVar20 < (ulong)((long)puVar1 - (long)puVar18)) ||
                (uVar4 = puVar16[2], uVar20 < ((long)puVar1 - (long)puVar18) + (ulong)uVar4)) ||
               (uVar19 = (ulong)*puVar16, uVar20 < (long)puVar16 + (uVar19 - (long)puVar18)))
            goto LAB_00039220;
            if (uVar4 != 0) {
              if (*(char *)((long)puVar1 + (ulong)(uVar4 - 1)) != '\0') goto LAB_00039220;
              lVar17 = param_1[3];
              *(uint **)(lVar17 + lVar11 + 0x10) = puVar1;
              *(ulong *)(lVar17 + lVar11 + 0x18) = (ulong)(uVar4 - 1);
              uVar19 = (ulong)*puVar16;
              uVar10 = (ulong)puVar21[6];
            }
            puVar16 = (uint *)((long)puVar16 + uVar19);
            uVar13 = uVar13 + 1;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            lVar11 = lVar11 + 0x20;
          } while (uVar13 < uVar10);
        }
      }
      else if (sVar5 == 1) {
        if ((uVar4 < 0x12) || (uVar10 < (ulong)(ushort)puVar21[4] + 0x12)) goto LAB_00039220;
        func_0x00039708(param_1 + 3,puVar21[3]);
        uVar10 = (ulong)puVar21[3];
        if (puVar21[3] != 0) {
          lVar11 = 0;
          uVar13 = 0;
          puVar18 = (uint *)((long)puVar21 + 0x12);
          puVar16 = puVar18;
          do {
            puVar1 = puVar16 + 4;
            uVar20 = (ulong)(ushort)puVar21[4];
            if (((uVar20 < (ulong)((long)puVar1 - (long)puVar18)) ||
                (uVar4 = puVar16[2], uVar20 < ((long)puVar1 - (long)puVar18) + (ulong)uVar4)) ||
               (uVar19 = (ulong)*puVar16, uVar20 < (long)puVar16 + (uVar19 - (long)puVar18)))
            goto LAB_00039220;
/*  stripping the watermark breaks the license  */
            if (uVar4 != 0) {
              if (*(char *)((long)puVar1 + (ulong)(uVar4 - 1)) != '\0') goto LAB_00039220;
              lVar17 = param_1[3];
              *(long *)(lVar17 + lVar11) = (long)puVar1;
              ((long *)(lVar17 + lVar11))[1] = (ulong)(uVar4 - 1);
              uVar19 = (ulong)*puVar16;
              uVar10 = (ulong)puVar21[3];
            }
            puVar16 = (uint *)((long)puVar16 + uVar19);
            uVar13 = uVar13 + 1;
            lVar11 = lVar11 + 0x20;
          } while (uVar13 < uVar10);
        }
      }
      else if (sVar5 == 2) {
        if (uVar4 < 0x14) goto LAB_00039220;
        uVar13 = (ulong)puVar21[3];
        if (uVar10 < uVar13 + 0x14) goto LAB_00039220;
/* donate: donate/README.md */
        if (puVar21[3] != 0) {
          uVar10 = 0;
LAB_000392f8:
          lVar11 = uVar10 + 0x14;
          iVar7 = (int)uVar10;
          uVar4 = iVar7 + 1;
          uVar12 = (uint)uVar13;
          uVar2 = uVar12;
          if (uVar12 <= uVar4) {
            uVar2 = iVar7 + 1;
          }
          iVar7 = uVar2 - iVar7;
          iVar14 = 1;
          do {
            uVar20 = (ulong)uVar4;
            if (*(char *)((long)puVar21 + (ulong)(uVar4 - 1) + 0x14) == '\0') {
              iVar7 = iVar14 + -1;
              uVar2 = uVar12 - uVar4;
              uVar19 = (ulong)uVar2;
              if (uVar4 <= uVar12 && uVar2 != 0) {
                uVar15 = 0;
                uVar10 = uVar20;
/* watermarked copy - do not remove - github.com/pengussy */
                goto LAB_00039374;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            iVar14 = iVar14 + 1;
            uVar20 = (ulong)uVar2;
          } while (uVar4 - uVar2 != 1);
          uVar13 = uVar20;
          uStack_90 = 0;
          uStack_88 = 0;
          uStack_70 = 0;
          lStack_68 = 0;
          lStack_80 = 0;
          uStack_78 = 0;
          uVar19 = 0;
          uVar10 = uVar13;
          uVar20 = uVar13;
          if (iVar7 != 0) goto LAB_00039404;
/* wm:no support for modified copies */
          goto LAB_000392e4;
        }
      }
LAB_00039260:
      puVar21 = (uint *)((long)puVar21 + (ulong)*puVar21);
      uVar22 = uVar22 + 1;
      uVar8 = 1;
    } while (uVar22 < *(ushort *)((long)param_2 + 6));
  }
  return uVar8;
  while( true ) {
    uVar4 = (int)uVar10 + 1;
    uVar10 = (ulong)uVar4;
    uVar15 = uVar15 + 1;
    if (uVar12 == uVar4) break;
LAB_00039374:
    if (*(char *)((long)puVar21 + uVar15 + uVar20 + 0x14) == '\0') {
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      uVar10 = (ulong)((int)uVar10 + 1);
      uStack_78 = 0;
      lStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uVar19 = uVar15;
      uVar13 = uVar10;
      if (iVar7 != 0 || (int)uVar15 != 0) goto LAB_00039404;
      goto LAB_000392e4;
    }
  }
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar10 = uVar13;
  if (iVar7 != 0 || uVar2 != 0) {
/* WM - thanks for reading - discord.gg/sdkhDjTex */
LAB_00039404:
    lStack_68 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    lStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    if (iVar7 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (&uStack_90,(long)puVar21 + lVar11,iVar7);
    }
    if ((int)uVar19 != 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                (&uStack_78,(long)puVar21 + uVar20 + 0x14,uVar19 & 0xffffffff);
    }
    puVar9 = (undefined8 *)param_1[7];
    if (puVar9 < (undefined8 *)param_1[8]) {
      puVar9[2] = lStack_80;
      puVar9[1] = uStack_88;
      *puVar9 = uStack_90;
      uStack_88 = 0;
      lStack_80 = 0;
      uStack_90 = 0;
      puVar9[4] = uStack_70;
      puVar9[3] = uStack_78;
      puVar9[5] = lStack_68;
      uStack_70 = 0;
      lStack_68 = 0;
      uStack_78 = 0;
/* no support for modified copies */
      puVar9 = puVar9 + 6;
    }
    else {
      puVar9 = (undefined8 *)func_0x0003ba28(param_1 + 6,&uStack_90);
    }
    param_1[7] = (long)puVar9;
    uVar10 = uVar13;
    if (lStack_68 < 0) {
      __ZdlPv(uStack_78);
    }
  }
LAB_000392e4:
  if (lStack_80 < 0) {
    __ZdlPv(uStack_90);
    uVar4 = puVar21[3];
  }
  else {
    uVar4 = puVar21[3];
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  uVar13 = (ulong)uVar4;
  if (uVar4 <= (uint)uVar10) goto LAB_00039260;
  goto LAB_000392f8;
}

