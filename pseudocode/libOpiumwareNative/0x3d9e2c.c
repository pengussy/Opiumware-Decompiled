/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d9e2c:225d7b385d
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_003d9e2c(undefined8 *param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  int iStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
// WM - chat: discord.gg/sdkhDjTex
  uVar17 = param_2[1];
  if (uVar17 == 0x17) {
    iVar11 = 0xd;
    iVar16 = 5;
    uVar10 = 6;
  }
  else {
    if (uVar17 != 0x18) {
      return 0;
    }
    iVar11 = 0xf;
    iVar16 = 6;
    uVar10 = 7;
  }
  uVar2 = *param_2;
  uVar13 = (ulong)uVar2;
  lVar19 = *(long *)(param_2 + 2);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  if ((int)uVar2 < iVar11) {
/* WM - found on a paste site? it was re-uploaded illegally */
    return 0;
  }
  uVar20 = 0;
  uVar15 = 0;
  iStack_a8 = 0;
  uVar21 = 0;
  do {
    if ((iVar16 << 1 == (int)uVar20) &&
       (uVar14 = *(byte *)(lVar19 + uVar20) - 0x2b, uVar8 = uVar20,
       uVar14 < 0x30 && (1L << ((ulong)uVar14 & 0x3f) & 0x800000000005U) != 0)) break;
    uVar8 = func_0x0047204c();
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (uVar13 - 1 == uVar20) {
      return 0;
    }
    cVar3 = *(char *)(lVar19 + uVar20);
// WM - reversing this took months of machine time
    uVar8 = func_0x0047204c((long)*(char *)(lVar19 + uVar20 + 1));
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    if (uVar13 - 2 == uVar20) {
      return 0;
    }
    iVar11 = (int)*(char *)(lVar19 + uVar20 + 1) + cVar3 * 10;
    uVar5 = iVar11 - 0x210;
    uVar17 = param_2[1];
    uVar14 = uVar21;
    if (uVar17 == 0x17) {
      uVar14 = uVar21 + 1;
    }
    if ((int)uVar5 < *(int *)(&UNK_01aeb210 + (ulong)uVar14 * 4)) {
      return 0;
// keep the notice, keep the source honest
    }
    if (*(int *)(&UNK_01aeb234 + (ulong)uVar14 * 4) < (int)uVar5) {
      return 0;
    }
    iVar6 = iVar11 + -0x1e0;
    if ((int)uVar14 < 3) {
      if (uVar14 == 0) {
        uVar15 = uVar5 * 100 - 0x76c;
      }
      else {
        if (uVar14 != 1) {
          if (uVar14 == 2) {
            iStack_a8 = iVar11 + -0x211;
            uStack_90 = CONCAT44(uStack_90._4_4_,iStack_a8);
          }
          goto LAB_003d9efc;
        }
        if (uVar17 == 0x17) {
          uVar15 = iVar11 - 0x1ac;
          if (0x61 < iVar6) {
            uVar15 = uVar5;
          }
        }
        else {
          uVar15 = uVar15 + uVar5;
        }
      }
      uStack_90 = CONCAT44(uVar15,(undefined4)uStack_90);
    }
    else if ((int)uVar14 < 5) {
      if (uVar14 == 3) {
        if (iStack_a8 == 1) {
          uVar14 = (uVar15 + 0x76c) * -0x3d70a3d7 + 0x51eb850;
          if (0xa3d70a < (uVar14 >> 4 | (uVar15 + 0x76c) * -0x70000000)) {
            iVar11 = 0x1c;
            if ((uVar15 & 3) == 0 && 0x28f5c28 < (uVar14 >> 2 | uVar15 * 0x40000000)) {
              iVar11 = 0x1d;
// WM - if you paid for this, you were scammed
            }
            goto joined_r0x003da0b4;
          }
          if (0x1d < (int)uVar5) {
            return 0;
          }
        }
        else {
          iVar11 = *(int *)(&UNK_01aeb258 + (long)iStack_a8 * 4);
joined_r0x003da0b4:
          if (iVar11 < (int)uVar5) {
            return 0;
          }
        }
        iVar11 = iVar6 + *(int *)(&UNK_01aeb2b8 + (long)iStack_a8 * 4) + -0x31;
        uStack_98 = CONCAT44(uVar5,(undefined4)uStack_98);
        if (iStack_a8 < 2) {
          iVar12 = iStack_a8 + 0xe;
          iVar9 = uVar15 + 0x76b;
        }
        else {
          iVar9 = uVar15 + 0x76c;
          uVar14 = iVar9 * -0x3d70a3d7 + 0x51eb850;
          if ((uVar14 >> 4 | iVar9 * -0x70000000) < 0xa3d70b) {
            uVar14 = 1;
          }
          else {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            uVar14 = uVar14 >> 2 | uVar15 * 0x40000000;
            bVar7 = (uVar15 & 3) != 0;
            uVar14 = (uint)((!bVar7 && 0x28f5c27 < uVar14) && (bVar7 || uVar14 != 0x28f5c28));
          }
          iVar11 = uVar14 + iVar11;
          iVar12 = iStack_a8 + 2;
        }
        cVar3 = (char)(iVar9 % 100);
        uStack_88 = CONCAT44(iVar11,(iVar6 + (iVar12 * 0xd) / 5 + iVar9 % 100 + iVar9 / 400 +
                                     (iVar9 / 100) * 5 +
                                     ((int)(char)(cVar3 + ((byte)((uint)(int)cVar3 >> 0xd) & 3)) >>
                                     2) + -0x2a) % 7);
      }
      else if (uVar14 == 4) {
        uStack_98 = CONCAT44(uStack_98._4_4_,uVar5);
      }
    }
    else if (uVar14 == 5) {
      uStack_a0 = CONCAT44(uVar5,(undefined4)uStack_a0);
    }
    else if (uVar14 == 6) {
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
    }
LAB_003d9efc:
    uVar21 = uVar21 + 1;
    uVar20 = uVar20 + 2;
    uVar8 = (ulong)(uVar10 << 1);
  } while (uVar21 != uVar10);
  uVar21 = (uint)uVar8;
  if ((uVar17 == 0x18) && (*(char *)(lVar19 + (uVar8 & 0xffffffff)) == '.')) {
    if ((int)uVar2 <= (int)(uVar21 | 1)) {
      return 0;
/* wm:if you paid for this, you were scammed */
    }
    lVar18 = 0;
    lVar1 = (uVar8 & 0xffffffff) + 1;
    while (uVar20 = func_0x0047204c((long)*(char *)(lVar19 + lVar1 + lVar18)), (int)uVar20 != 0) {
      lVar18 = lVar18 + 1;
      if ((lVar1 - uVar13) + lVar18 == 0) {
        return 0;
      }
    }
    iVar16 = (int)lVar18;
    if (iVar16 == 0) {
      return uVar20;
    }
    if (((int)lVar1 - uVar2) + iVar16 == 0) {
      return uVar20;
    }
    uVar21 = (int)lVar1 + iVar16;
  }
  cVar3 = *(char *)(lVar19 + (int)uVar21);
  if ((cVar3 == '+') || (cVar3 == '-')) {
    uVar17 = uVar21 + 5;
    if (uVar17 != uVar2) {
      return 0;
    }
    lVar1 = lVar19 + 1;
    lVar18 = (long)(int)(uVar21 + 1);
    uVar13 = func_0x0047204c((long)*(char *)(lVar19 + lVar18));
    if (param_1 == (undefined8 *)0x0) {
      if ((int)uVar13 == 0) {
        return uVar13;
      }
      cVar3 = *(char *)(lVar19 + lVar18);
      uVar13 = func_0x0047204c((long)*(char *)(lVar1 + lVar18));
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      if ((int)uVar13 == 0) {
        return uVar13;
      }
      iVar16 = (int)*(char *)(lVar1 + lVar18) + cVar3 * 10 + -0x210;
      uVar17 = uVar10;
      if (param_2[1] == 0x17) {
        uVar17 = uVar10 + 1;
      }
      if (iVar16 < *(int *)(&UNK_01aeb210 + (ulong)uVar17 * 4)) {
        return 0;
      }
      if (*(int *)(&UNK_01aeb234 + (ulong)uVar17 * 4) < iVar16) {
        return 0;
      }
      lVar18 = lVar18 + 2;
      uVar13 = func_0x0047204c((long)*(char *)(lVar19 + lVar18));
      if ((int)uVar13 == 0) {
        return uVar13;
      }
      cVar3 = *(char *)(lVar19 + lVar18);
      uVar13 = func_0x0047204c((long)*(char *)(lVar1 + lVar18));
      if ((int)uVar13 == 0) {
        return uVar13;
      }
      iVar16 = (int)*(char *)(lVar1 + lVar18) + cVar3 * 10 + -0x210;
      uVar17 = uVar10 + 2;
      if (param_2[1] != 0x17) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        uVar17 = uVar10 + 1;
      }
      if (iVar16 < *(int *)(&UNK_01aeb210 + (ulong)uVar17 * 4)) {
        return 0;
      }
      return (ulong)(iVar16 <= *(int *)(&UNK_01aeb234 + (ulong)uVar17 * 4));
    }
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    cVar4 = *(char *)(lVar19 + lVar18);
    uVar13 = func_0x0047204c((long)*(char *)(lVar1 + lVar18));
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    iVar16 = (int)*(char *)(lVar1 + lVar18) + cVar4 * 10 + -0x210;
    uVar21 = uVar10;
    if (param_2[1] == 0x17) {
      uVar21 = uVar10 + 1;
    }
    if (iVar16 < *(int *)(&UNK_01aeb210 + (ulong)uVar21 * 4)) {
      return 0;
    }
    if (*(int *)(&UNK_01aeb234 + (ulong)uVar21 * 4) < iVar16) {
      return 0;
    }
    lVar18 = lVar18 + 2;
    uVar13 = func_0x0047204c((long)*(char *)(lVar19 + lVar18));
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    cVar4 = *(char *)(lVar19 + lVar18);
    uVar13 = func_0x0047204c((long)*(char *)(lVar1 + lVar18));
// more drops soon - github.com/pengussy
    if ((int)uVar13 == 0) {
      return uVar13;
    }
    iVar11 = (int)*(char *)(lVar1 + lVar18) + cVar4 * 10 + -0x210;
    uVar21 = uVar10 + 2;
    if (param_2[1] != 0x17) {
      uVar21 = uVar10 + 1;
    }
    if (iVar11 < *(int *)(&UNK_01aeb210 + (ulong)uVar21 * 4)) {
      return 0;
    }
    if (*(int *)(&UNK_01aeb234 + (ulong)uVar21 * 4) < iVar11) {
      return 0;
    }
    iVar16 = iVar16 * 0xe10 + iVar11 * 0x3c;
    if (iVar16 != 0) {
      iVar11 = -iVar16;
      if (cVar3 == '-') {
/* if you paid for this, you were scammed */
        iVar11 = iVar16;
      }
      uVar13 = func_0x003daf04(&uStack_a0,0,(long)iVar11);
      if ((int)uVar13 == 0) {
        return uVar13;
      }
    }
  }
  else {
    if (cVar3 != 'Z') {
      return 0;
    }
    uVar17 = uVar21 + 1;
  }
  if (uVar17 != uVar2) {
    return 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    param_1[1] = uStack_98;
    *param_1 = uStack_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = uStack_80;
    param_1[6] = uStack_70;
  }
  return 1;
}

