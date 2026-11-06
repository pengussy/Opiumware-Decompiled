/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x33f7a8:28185ce577
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

void FUN_0033f7a8(undefined8 param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  float *pfVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  int iVar13;
  undefined4 *puVar14;
/*  unlicensed copy if this notice is missing  */
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  byte bVar23;
  uint uVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long lStack_68;
  
  lVar6 = lRam00000000020973e0;
  lVar22 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  bVar23 = *param_2;
  uVar24 = (uint)bVar23;
  bVar9 = *param_3;
  uVar19 = (uint)bVar9;
  piVar20 = *(int **)(&UNK_00002430 + lRam00000000020973e0);
  if (bVar9 == 1) {
    *(undefined1 *)((long)piVar20 + 0x52) = 1;
  }
  lVar25 = *(long *)(piVar20 + 10);
/* WM - chat: discord.gg/sdkhDjTex */
  if (((&UNK_00001e88)[lVar6] & 1) == 0) {
    iVar10 = 0;
    bVar4 = *(byte *)((long)piVar20 + 0x52);
  }
  else {
    iVar10 = FUN_003060bc(0x20);
    bVar4 = *(byte *)((long)piVar20 + 0x52);
  }
  if (((bVar4 & 1) == 0) && (iVar10 == 0)) {
    return;
  }
  iVar21 = (int)param_1;
  if (*(int *)(&UNK_00001ff4 + lVar6) == iVar21) {
    bVar7 = *(long *)(lVar25 + 0x18) == -1;
    uVar18 = piVar20[0x13];
    lStack_68 = *(long *)(&UNK_00001e58 + lVar6);
    uVar17 = piVar20[0xd];
    if ((*(byte *)((long)piVar20 + 0x51) & 1) == 0) goto LAB_0033f8a0;
LAB_0033f868:
/* no support for modified copies */
    if (*(int *)(&UNK_000021c4 + lVar6) == iVar21) goto LAB_0033f914;
joined_r0x0033f958:
    if (bVar7) goto LAB_0033f95c;
LAB_0033f878:
    iVar13 = piVar20[0x12];
  }
  else {
    bVar7 = false;
    uVar18 = piVar20[0x13];
    lStack_68 = *(long *)(&UNK_00001e58 + lVar6);
    uVar17 = piVar20[0xd];
    if ((*(byte *)((long)piVar20 + 0x51) & 1) != 0) goto LAB_0033f868;
LAB_0033f8a0:
    if (piVar20[1] < 0) {
      uVar11 = func_0x002fd6d8(0);
      if (*(long *)(piVar20 + 2) != 0) {
        _memcpy(uVar11,*(long *)(piVar20 + 2),(long)*piVar20 * 0x18);
        func_0x002fda6c(*(undefined8 *)(piVar20 + 2));
      }
      *(undefined8 *)(piVar20 + 2) = uVar11;
      piVar20[1] = 0;
    }
    *piVar20 = 0;
    *(undefined1 *)((long)piVar20 + 0x51) = 1;
    if (*(int *)(&UNK_000021c4 + lVar6) != iVar21) goto joined_r0x0033f958;
/* wm:found on a paste site? it was re-uploaded illegally */
LAB_0033f914:
    if ((uVar17 >> 3 & 1) == 0) {
      if (((uVar18 ^ 0xffffffff) & 0x3000) != 0) {
        bVar8 = (uVar18 & 0x1000) == 0;
        if (bVar8) {
          uVar19 = 1;
        }
        uVar24 = (uint)(bVar8 | bVar23);
        goto joined_r0x0033f958;
      }
      uVar19 = 1;
      if (bVar7) goto LAB_0033f95c;
      goto LAB_0033f878;
    }
    if ((uVar18 & 0x3000) != 0) {
      uVar19 = (uint)bVar9 | (uVar18 & 0x2000) >> 0xd;
      goto joined_r0x0033f958;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
LAB_0033f95c:
    *(long *)(lVar25 + 0x18) = lStack_68;
    *(byte *)(lVar25 + 0x14) = (byte)uVar24 & 1;
    iVar13 = piVar20[0x12];
  }
  if (((iVar13 != 0) && (*(int *)(&UNK_000023a8 + lRam00000000020973e0) == iVar13)) &&
     ((&UNK_000023ac)[lRam00000000020973e0] == '\x01')) {
    fVar27 = *(float *)(&UNK_00001e8c + lVar6);
    fVar26 = *(float *)(&UNK_00001e94 + lVar6);
    if ((((*(byte *)(lVar22 + 0x178) & 1) == 0) &&
        (lVar12 = *(long *)(&UNK_000022f0 + lVar6), lVar12 != 0)) && (*(int *)(lVar12 + 0x74) != -1)
       ) {
      lVar12 = *(long *)(lVar12 + 0x18) + (long)*(int *)(lVar12 + 0x74) * 0x74;
      bVar7 = (*(uint *)(&UNK_00001e84 + lVar6) & 0x200) != 0;
      pfVar2 = (float *)(lVar22 + 0x268);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      if (bVar7) {
        pfVar2 = (float *)(&UNK_00001ebc + lVar6);
      }
      fVar28 = *pfVar2;
      pfVar2 = (float *)(lVar22 + 0x270);
      if (bVar7) {
        pfVar2 = (float *)(&UNK_00001ec4 + lVar6);
      }
      fVar29 = *pfVar2;
      fVar30 = *(float *)(lVar12 + 8);
      if (fVar28 == fVar29) {
        if (fVar27 < fVar30) {
          fVar27 = fVar30;
        }
        fVar28 = *(float *)(lVar12 + 0xc);
      }
      else {
        if (fVar28 <= fVar30) {
          fVar30 = fVar28;
        }
        if (fVar27 < fVar30) {
          fVar27 = fVar30;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        }
        fVar28 = *(float *)(lVar12 + 0xc);
        if (*(float *)(lVar12 + 0xc) < fVar29) {
          fVar28 = fVar29;
        }
      }
      if (fVar28 <= fVar26) {
        fVar26 = fVar28;
      }
    }
    if (((*(float *)(&UNK_00002428 + lRam00000000020973e0) <= *(float *)(&UNK_00001e90 + lVar6)) ||
        (*(float *)(&UNK_00001e98 + lVar6) <= *(float *)(&UNK_00002420 + lRam00000000020973e0))) ||
       (*(float *)(&UNK_00002424 + lRam00000000020973e0) <= fVar27)) {
      uVar16 = 0;
    }
    else {
      uVar16 = (uint)(*(float *)(&UNK_0000241c + lRam00000000020973e0) < fVar26);
    }
    if (((*(float *)(&UNK_00002418 + lRam00000000020973e0) <= *(float *)(&UNK_00001e90 + lVar6)) ||
        (*(float *)(&UNK_00001e98 + lVar6) <= *(float *)(&UNK_00002410 + lRam00000000020973e0))) ||
       (*(float *)(&UNK_00002414 + lRam00000000020973e0) <= fVar27)) {
      uVar15 = 0;
    }
    else {
      uVar15 = (uint)(*(float *)(&UNK_0000240c + lRam00000000020973e0) < fVar26);
    }
    if ((((uVar15 | uVar16 ^ 0xffffffff | uVar24) & 1) == 0) || (uVar15 == 1 && uVar16 == 0)) {
      uVar16 = *(uint *)(lVar25 + 0x10);
      if (((int)uVar16 < 1) && ((&UNK_000023af)[lRam00000000020973e0] == '\x01')) {
        (&UNK_000023af)[lRam00000000020973e0] = 0;
        uVar19 = 1;
      }
      else {
        uVar24 = uVar24 ^ 1;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        iVar13 = *piVar20;
        if (iVar13 == piVar20[1]) {
          iVar1 = 8;
          if (iVar13 != 0) {
            iVar1 = iVar13 + iVar13 / 2;
          }
          if (iVar1 <= iVar13 + 1) {
            iVar1 = iVar13 + 1;
          }
          lVar12 = func_0x002fd6d8((long)iVar1 * 0x18);
          if (*(long *)(piVar20 + 2) != 0) {
            _memcpy(lVar12,*(long *)(piVar20 + 2),(long)*piVar20 * 0x18);
            func_0x002fda6c(*(undefined8 *)(piVar20 + 2));
          }
          *(long *)(piVar20 + 2) = lVar12;
          piVar20[1] = iVar1;
          iVar13 = *piVar20;
        }
        else {
          lVar12 = *(long *)(piVar20 + 2);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        puVar14 = (undefined4 *)(lVar12 + (long)iVar13 * 0x18);
        *puVar14 = 2;
        *(byte *)(puVar14 + 1) = (byte)uVar24 & 1;
        *(undefined1 *)((long)puVar14 + 5) = 1;
        *(long *)(puVar14 + 2) = lStack_68;
        *(long *)(puVar14 + 4) = lStack_68;
        *piVar20 = *piVar20 + 1;
        uVar16 = *(uint *)(lVar25 + 0x10);
      }
      *(uint *)(lVar25 + 0x10) = (uVar16 & ((int)uVar16 >> 0x1f ^ 0xffffffffU)) + 1;
    }
  }
  bVar23 = (byte)uVar24;
  if (((iVar10 == 0) || (iVar10 = func_0x003150a8(1,0), iVar10 == 0)) || ((uVar17 & 0x20008) != 0))
  {
    if (uVar19 == 0) {
      bVar9 = 0;
    }
    else {
      uVar16 = uVar18 >> 0xd & 1;
// proprietary - see LICENSE - do not sell
      uVar19 = uVar18 >> 0xc & 1;
      if (*(int *)(&UNK_0000200c + lVar6) == iVar21) goto LAB_0033fc74;
LAB_0033fc40:
      if (*(int *)(&UNK_000021c4 + lVar6) == iVar21) {
LAB_0033fc98:
        uVar18 = *(uint *)(&UNK_00002048 + lVar6);
      }
      else {
        uVar18 = 1;
      }
      if (((((uVar17 & 0xc0) != 0) && (((&UNK_000023ac)[lVar6] & 1) == 0)) &&
          (((&UNK_000023ad)[lVar6] & 1) == 0)) &&
         ((uVar18 == 1 && (*(short *)(lVar6 + 0xb3a) == 1)))) {
        func_0x003425d0(piVar20[0x12],lStack_68);
      }
      if ((uVar17 >> 4 & 1) != 0) goto LAB_0033fd64;
      if ((uVar17 & 1) == 0) {
        if (uVar18 == 1) {
          if (uVar19 == 0) {
LAB_0033fd40:
            if ((uVar24 & (uVar17 & 0x20) >> 5) == 0) goto LAB_0033fd4c;
          }
/* origin: github.com/pengussy */
          else {
            uVar19 = 1;
          }
        }
        else {
          if (*(int *)(&UNK_0000200c + lVar6) == iVar21 && uVar19 == 0) goto LAB_0033fd40;
          if (((uVar18 & 0xfffffffe) == 2 && ((uVar16 ^ 0xffffffff) & 1) == 0) && uVar19 == 0)
          goto LAB_0033fd4c;
        }
      }
      else {
LAB_0033fd4c:
        func_0x00342040(piVar20,0);
      }
LAB_0033fd64:
      uVar24 = 0;
      if ((uVar17 & 1) == 0) {
        uVar24 = uVar16;
      }
      lVar22 = lStack_68;
      if (uVar24 == 1) {
        lVar22 = *(long *)(lVar25 + 0x18);
        if (lVar22 == -1) {
          *(long *)(lVar25 + 0x18) = lStack_68;
          lVar22 = lStack_68;
          if ((uVar17 >> 3 & 1) == 0) goto LAB_0033fd88;
LAB_0033fdd4:
          if (*(char *)((long)piVar20 + 0x53) == '\x01') {
LAB_0033fde0:
            bVar9 = *(char *)(lVar25 + 0x14) != '\0';
          }
          else {
            bVar9 = bVar23 ^ 1;
          }
        }
        else {
          if ((uVar17 >> 3 & 1) != 0) goto LAB_0033fdd4;
LAB_0033fd88:
/* more drops soon - github.com/pengussy - github.com/pengussy */
          if (uVar19 != 0) goto LAB_0033fde0;
          bVar9 = 1;
        }
        iVar10 = -1;
        if (*(char *)((long)piVar20 + 0x55) != '\0') {
          iVar10 = 1;
        }
        iVar13 = *piVar20;
        if (iVar13 != piVar20[1]) goto LAB_0033fdc0;
LAB_0033fe10:
        iVar1 = 8;
        if (iVar13 != 0) {
          iVar1 = iVar13 + iVar13 / 2;
        }
        if (iVar1 <= iVar13 + 1) {
          iVar1 = iVar13 + 1;
        }
        lVar12 = func_0x002fd6d8((long)iVar1 * 0x18);
        if (*(long *)(piVar20 + 2) != 0) {
          _memcpy(lVar12,*(long *)(piVar20 + 2),(long)*piVar20 * 0x18);
          func_0x002fda6c(*(undefined8 *)(piVar20 + 2));
        }
        *(long *)(piVar20 + 2) = lVar12;
        piVar20[1] = iVar1;
/* wm:if you paid for this, you were scammed */
        iVar13 = *piVar20;
      }
      else {
        bVar9 = (byte)uVar19 & bVar23;
        if ((uVar17 & 8) != 0) {
          bVar9 = bVar23;
        }
        bVar9 = bVar9 ^ 1;
        *(long *)(lVar25 + 0x18) = lStack_68;
        iVar10 = 1;
        iVar13 = *piVar20;
        bVar23 = bVar9;
        if (iVar13 == piVar20[1]) goto LAB_0033fe10;
LAB_0033fdc0:
        lVar12 = *(long *)(piVar20 + 2);
      }
      lVar3 = lVar22;
      lVar5 = lStack_68;
      if (iVar10 < 1) {
        lVar3 = lStack_68;
        lVar5 = lVar22;
      }
      puVar14 = (undefined4 *)(lVar12 + (long)iVar13 * 0x18);
      *puVar14 = 2;
      *(byte *)(puVar14 + 1) = bVar9 & 1;
      *(char *)((long)puVar14 + 5) = (char)iVar10;
      *(long *)(puVar14 + 2) = lVar3;
      *(long *)(puVar14 + 4) = lVar5;
      *piVar20 = *piVar20 + 1;
      bVar9 = 1;
    }
  }
  else {
    if ((*(int *)(&UNK_0000151c + lVar6) != 0) && (*(int *)(&UNK_0000151c + lVar6) != iVar21)) {
/* wm:watermarked copy - do not remove */
      func_0x00305fb0();
    }
    FUN_0031b798(param_1,lVar22);
    uVar16 = uVar19 | uVar24;
    if (((uVar19 | uVar16 ^ 0xffffffff) & 1) == 0) {
      bVar9 = 0;
    }
    else {
      uVar19 = uVar16 & (uVar18 & 0x1000) >> 0xc;
      uVar16 = uVar16 & (uVar18 & 0x2000) >> 0xd;
      if (*(int *)(&UNK_0000200c + lVar6) != iVar21) goto LAB_0033fc40;
LAB_0033fc74:
      if (((byte)(&UNK_00002018)[lVar6] & uVar24 & 1) == 0) goto LAB_0033fc98;
      bVar9 = 1;
      bVar23 = 1;
    }
  }
  if (*(long *)(lVar25 + 0x18) == lStack_68) {
    *(byte *)(lVar25 + 0x14) = bVar23 & 1;
  }
// reversing this took months of machine time
  if (*(int *)(&UNK_00001ff4 + lVar6) == iVar21) {
    *(long *)(lVar25 + 0x20) = lStack_68;
    *(byte *)(lVar25 + 0x15) = bVar23 & 1;
  }
  else if (*(long *)(lVar25 + 0x20) != lStack_68) goto LAB_0033ff00;
  *(undefined1 *)(piVar20 + 0x15) = 1;
LAB_0033ff00:
  *param_2 = bVar23 & 1;
  *param_3 = bVar9;
  return;
}

