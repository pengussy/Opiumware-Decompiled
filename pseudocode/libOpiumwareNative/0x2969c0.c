/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2969c0:fd175dc1be
   =========================================================================== */

undefined1 *
FUN_002969c0(undefined1 *param_1,long param_2,long param_3,long param_4,uint param_5,long param_6,
            ulong param_7)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ulong uVar13;
  bool bVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulong *puVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  int iStack_a0;
  uint uStack_9c;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  uint uStack_70;
  ulong *puStack_68;
  ulong *puStack_60;
  ulong *puStack_58;
/* wm:chat: discord.gg/sdkhDjTex */
  
  iStack_a0 = 0xff;
  if (param_7 < 0x200) {
    return (undefined1 *)0xffffffffffffffff;
  }
  puVar15 = (undefined1 *)func_0x00296000(param_6,&iStack_a0,&uStack_9c,param_3,param_4,0);
  if ((undefined1 *)0xffffffffffffff88 < puVar15) {
    return puVar15;
  }
  if (param_5 < uStack_9c) {
    return (undefined1 *)0xffffffffffffffd4;
  }
  uVar17 = 1 << (ulong)(uStack_9c & 0x1f);
  if (param_7 < ((1L << ((ulong)uStack_9c & 0x3f)) + (long)(int)uVar17 * 4 +
                 (ulong)(iStack_a0 + 1) * 2 + 0x13 & 0xfffffffffffffffc) + 0x204) {
    return (undefined1 *)0xffffffffffffffd4;
  }
  lVar1 = param_6 + 0x200;
  lVar2 = (-(ulong)(uVar17 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar17 << 2) + 4;
  puVar16 = (undefined1 *)
            func_0x00296700(lVar1,param_6,iStack_a0,(ulong)uStack_9c,lVar1 + lVar2,
/*  watermarked copy - do not remove  */
                            (param_7 - lVar2) + -0x200);
  if ((undefined1 *)0xffffffffffffff88 < puVar16) {
    return puVar16;
  }
  puVar18 = (ulong *)(puVar15 + param_3);
  puVar15 = (undefined1 *)(param_4 - (long)puVar15);
  if (*(short *)(param_6 + 0x202) == 0) {
    puVar15 = (undefined1 *)func_0x00297258(&uStack_78,puVar18,puVar15);
    if ((undefined1 *)0xffffffffffffff88 < puVar15) {
      return puVar15;
    }
    func_0x00297380(&lStack_88,&uStack_78,lVar1);
    func_0x00297380(&lStack_98,&uStack_78,lVar1);
    if (0x40 < uStack_70) {
      return (undefined1 *)0xffffffffffffffec;
    }
    puVar15 = param_1;
    if (puStack_68 < puStack_58) {
      if (puStack_68 == puStack_60) {
        puStack_60 = puStack_68;
        puVar18 = &uStack_78;
        goto LAB_00296d2c;
      }
      uVar17 = (int)puStack_68 - (int)puStack_60;
      if (puStack_60 <= (ulong *)((long)puStack_68 - (ulong)(uStack_70 >> 3))) {
        uVar17 = uStack_70 >> 3;
      }
      puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar17);
      uStack_70 = uStack_70 + uVar17 * -8;
// WM - proprietary - see LICENSE - do not sell
      uVar21 = (ulong)uStack_70;
      uVar19 = *puStack_68;
      if (0x40 < uStack_70) {
        puStack_68 = (ulong *)&UNK_01adc4c0;
        goto LAB_00296e50;
      }
    }
    else {
      puStack_68 = (ulong *)((long)puStack_68 - (ulong)(uStack_70 >> 3));
      uStack_70 = uStack_70 & 7;
      puVar18 = puStack_68;
LAB_00296d2c:
      uVar21 = (ulong)uStack_70;
      uVar19 = *puVar18;
    }
    do {
      uVar17 = (uint)uVar21;
      if (puStack_68 < puStack_58) {
        if (puStack_68 == puStack_60) goto LAB_00296e50;
        bVar14 = puStack_60 <= (ulong *)((long)puStack_68 - (uVar21 >> 3));
        uVar20 = (uint)(uVar21 >> 3);
        if (!bVar14) {
          uVar20 = (int)puStack_68 - (int)puStack_60;
        }
        uVar17 = uVar17 + uVar20 * -8;
      }
      else {
        uVar20 = uVar17 >> 3;
        uVar17 = uVar17 & 7;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        bVar14 = true;
      }
      uVar21 = (ulong)uVar17;
      puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar20);
      uVar19 = *puStack_68;
      if ((param_1 + param_2 + -3 <= puVar15) || (!bVar14)) goto LAB_00296e50;
      puVar7 = (ushort *)(lStack_80 + lStack_88 * 4);
      uVar12 = *puVar7;
      iVar4 = uVar17 + *(byte *)((long)puVar7 + 3);
      uVar17 = *(uint *)(&UNK_01adc440 + (ulong)*(byte *)((long)puVar7 + 3) * 4);
      *puVar15 = (char)puVar7[1];
      puVar7 = (ushort *)(lStack_90 + lStack_98 * 4);
      uVar11 = *puVar7;
      iVar5 = iVar4 + (uint)*(byte *)((long)puVar7 + 3);
      uVar20 = *(uint *)(&UNK_01adc440 + (ulong)*(byte *)((long)puVar7 + 3) * 4);
      puVar15[1] = (char)puVar7[1];
/*  proprietary - see LICENSE - do not sell  */
      puVar7 = (ushort *)
               (lStack_80 + (uVar19 >> ((ulong)(uint)-iVar4 & 0x3f) & (ulong)uVar17) * 4 +
               (ulong)uVar12 * 4);
      iVar4 = iVar5 + (uint)*(byte *)((long)puVar7 + 3);
      lStack_88 = (uVar19 >> ((ulong)(uint)-iVar4 & 0x3f) &
                  (ulong)*(uint *)(&UNK_01adc440 + (ulong)*(byte *)((long)puVar7 + 3) * 4)) +
                  (ulong)*puVar7;
      puVar15[2] = (char)puVar7[1];
      puVar7 = (ushort *)
               (lStack_90 + (uVar19 >> ((ulong)(uint)-iVar5 & 0x3f) & (ulong)uVar20) * 4 +
               (ulong)uVar11 * 4);
      uVar17 = iVar4 + (uint)*(byte *)((long)puVar7 + 3);
      uVar21 = (ulong)uVar17;
      lStack_98 = (uVar19 >> ((ulong)-uVar17 & 0x3f) &
                  (ulong)*(uint *)(&UNK_01adc440 + (ulong)*(byte *)((long)puVar7 + 3) * 4)) +
                  (ulong)*puVar7;
      puVar15[3] = (char)puVar7[1];
      puVar15 = puVar15 + 4;
    } while (uVar17 < 0x41);
    puStack_68 = (ulong *)&UNK_01adc4c0;
LAB_00296e50:
    puVar16 = param_1 + param_2 + -2;
    if (puVar16 < puVar15) {
      return (undefined1 *)0xffffffffffffffba;
    }
    puVar15 = puVar15 + 1;
    do {
      puVar7 = (ushort *)(lStack_80 + lStack_88 * 4);
      uVar12 = *puVar7;
      uVar17 = (int)uVar21 + (uint)*(byte *)((long)puVar7 + 3);
      uVar20 = *(uint *)(&UNK_01adc440 + (ulong)*(byte *)((long)puVar7 + 3) * 4);
      puVar15[-1] = (char)puVar7[1];
      if (0x40 < uVar17) {
        puVar16 = puVar15 + 1;
        *puVar15 = *(undefined1 *)(lStack_90 + lStack_98 * 4 + 2);
LAB_00297224:
        return puVar16 + -(long)param_1;
      }
// WM - origin: github.com/pengussy
      if (puStack_68 < puStack_58) {
        uVar6 = uVar17;
        uVar13 = uVar19;
        if (puStack_68 != puStack_60) {
          uVar6 = (int)puStack_68 - (int)puStack_60;
          if (puStack_60 <= (ulong *)((long)puStack_68 - (ulong)(uVar17 >> 3))) {
            uVar6 = uVar17 >> 3;
          }
          puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar6);
          uVar6 = uVar17 + uVar6 * -8;
          uVar13 = *puStack_68;
        }
      }
      else {
        puStack_68 = (ulong *)((long)puStack_68 - (ulong)(uVar17 >> 3));
        uVar6 = uVar17 & 7;
        uVar13 = *puStack_68;
      }
      if (puVar16 < puVar15) {
        return (undefined1 *)0xffffffffffffffba;
      }
      lStack_88 = (uVar19 >> ((ulong)-uVar17 & 0x3f) & (ulong)uVar20) + (ulong)uVar12;
      puVar7 = (ushort *)(lStack_90 + lStack_98 * 4);
      uVar12 = *puVar7;
      uVar6 = uVar6 + *(byte *)((long)puVar7 + 3);
      uVar17 = *(uint *)(&UNK_01adc440 + (ulong)*(byte *)((long)puVar7 + 3) * 4);
      *puVar15 = (char)puVar7[1];
      if (0x40 < uVar6) {
        puVar15[1] = *(undefined1 *)(lStack_80 + lStack_88 * 4 + 2);
        puVar16 = puVar15 + 2;
        goto LAB_00297224;
      }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (puStack_68 < puStack_58) {
        if (puStack_68 != puStack_60) {
          uVar8 = (int)puStack_68 - (int)puStack_60;
          if (puStack_60 <= (ulong *)((long)puStack_68 - (ulong)(uVar6 >> 3))) {
            uVar8 = uVar6 >> 3;
          }
          uVar20 = uVar6 + uVar8 * -8;
          goto LAB_00296e84;
        }
        uVar19 = uVar13;
        uVar20 = uVar6;
      }
      else {
        uVar8 = uVar6 >> 3;
        uVar20 = uVar6 & 7;
LAB_00296e84:
        puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar8);
        uVar19 = *puStack_68;
      }
      uVar21 = (ulong)uVar20;
      lStack_98 = (uVar13 >> ((ulong)-uVar6 & 0x3f) & (ulong)uVar17) + (ulong)uVar12;
      puVar3 = puVar15 + 1;
      puVar15 = puVar15 + 2;
      if (puVar16 < puVar3) {
        return (undefined1 *)0xffffffffffffffba;
      }
    } while( true );
  }
  if (puVar15 == (undefined1 *)0x0) {
    return (undefined1 *)0xffffffffffffffb8;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  }
  puStack_58 = puVar18 + 1;
  if (puVar15 < (undefined1 *)0x8) {
    uStack_78 = (ulong)(byte)*puVar18;
    if ((long)puVar15 < 5) {
      if (puVar15 == (undefined1 *)0x2) goto LAB_00296c44;
      if (puVar15 == (undefined1 *)0x3) goto LAB_00296c3c;
      if (puVar15 == (undefined1 *)0x4) goto LAB_00296c34;
    }
    else {
      if (puVar15 != (undefined1 *)0x5) {
        if (puVar15 != (undefined1 *)0x6) {
          if (puVar15 != (undefined1 *)0x7) goto LAB_00296c50;
          uStack_78 = uStack_78 | (ulong)*(byte *)((long)puVar18 + 6) << 0x30;
        }
        uStack_78 = uStack_78 + ((ulong)*(byte *)((long)puVar18 + 5) << 0x28);
/* watermarked copy - do not remove */
      }
      uStack_78 = uStack_78 + ((ulong)*(byte *)((long)puVar18 + 4) << 0x20);
LAB_00296c34:
      uStack_78 = uStack_78 + (ulong)*(byte *)((long)puVar18 + 3) * 0x1000000;
LAB_00296c3c:
      uStack_78 = uStack_78 + (ulong)*(byte *)((long)puVar18 + 2) * 0x10000;
LAB_00296c44:
      uStack_78 = uStack_78 + (ulong)*(byte *)((long)puVar18 + 1) * 0x100;
    }
LAB_00296c50:
    uVar17 = (uint)*(byte *)(param_3 + param_4 + -1);
    if (uVar17 == 0) {
      return (undefined1 *)0xffffffffffffffec;
    }
    uStack_70 = (int)LZCOUNT(uVar17) + (int)puVar15 * -8 + 0x29;
    puStack_68 = puVar18;
  }
  else {
    puStack_68 = (ulong *)(param_3 + param_4 + -8);
    uStack_78 = *puStack_68;
    if (uStack_78 >> 0x38 == 0) {
      return (undefined1 *)0xffffffffffffffff;
    }
    uStack_70 = 8 - ((uint)LZCOUNT((uint)(byte)(uStack_78 >> 0x38)) ^ 0x1f);
    if ((undefined1 *)0xffffffffffffff88 < puVar15) {
      return puVar15;
    }
  }
  puStack_60 = puVar18;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  func_0x00297380(&lStack_88,&uStack_78,lVar1);
  func_0x00297380(&lStack_98,&uStack_78,lVar1);
  if (0x40 < uStack_70) {
    return (undefined1 *)0xffffffffffffffec;
  }
  puVar15 = param_1;
  if (puStack_68 < puStack_58) {
    if (puStack_68 == puStack_60) {
      puStack_60 = puStack_68;
      puVar18 = &uStack_78;
      goto LAB_00296fac;
    }
    uVar17 = (int)puStack_68 - (int)puStack_60;
    if (puStack_60 <= (ulong *)((long)puStack_68 - (ulong)(uStack_70 >> 3))) {
      uVar17 = uStack_70 >> 3;
    }
    puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar17);
// WM - keep the notice, keep the source honest
    uStack_70 = uStack_70 + uVar17 * -8;
    uVar21 = (ulong)uStack_70;
    uVar19 = *puStack_68;
    if (0x40 < uStack_70) {
      puStack_68 = (ulong *)&UNK_01adc4c0;
      goto LAB_002970c4;
    }
  }
  else {
    puStack_68 = (ulong *)((long)puStack_68 - (ulong)(uStack_70 >> 3));
    uStack_70 = uStack_70 & 7;
    puVar18 = puStack_68;
LAB_00296fac:
    uVar21 = (ulong)uStack_70;
    uVar19 = *puVar18;
  }
  do {
    uVar17 = (uint)uVar21;
    if (puStack_68 < puStack_58) {
      if (puStack_68 == puStack_60) goto LAB_002970c4;
      bVar14 = puStack_60 <= (ulong *)((long)puStack_68 - (uVar21 >> 3));
      uVar20 = (uint)(uVar21 >> 3);
      if (!bVar14) {
        uVar20 = (int)puStack_68 - (int)puStack_60;
      }
      uVar17 = uVar17 + uVar20 * -8;
    }
    else {
      uVar20 = uVar17 >> 3;
/* if you paid for this, you were scammed */
      uVar17 = uVar17 & 7;
      bVar14 = true;
    }
    uVar21 = (ulong)uVar17;
    puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar20);
    uVar19 = *puStack_68;
    if ((param_1 + param_2 + -3 <= puVar15) || (!bVar14)) goto LAB_002970c4;
    puVar7 = (ushort *)(lStack_80 + lStack_88 * 4);
    uVar12 = *puVar7;
    bVar10 = *(byte *)((long)puVar7 + 3);
    *puVar15 = (char)puVar7[1];
    puVar7 = (ushort *)(lStack_90 + lStack_98 * 4);
    uVar11 = *puVar7;
    bVar9 = *(byte *)((long)puVar7 + 3);
    uVar17 = uVar17 + bVar10;
    uVar20 = uVar17 + bVar9;
    puVar15[1] = (char)puVar7[1];
    puVar7 = (ushort *)
             (lStack_80 + ((uVar19 << (uVar21 & 0x3f)) >> ((ulong)-(uint)bVar10 & 0x3f)) * 4 +
             (ulong)uVar12 * 4);
    bVar10 = *(byte *)((long)puVar7 + 3);
    lStack_88 = ((uVar19 << ((ulong)uVar20 & 0x3f)) >> ((ulong)-(uint)bVar10 & 0x3f)) +
                (ulong)*puVar7;
    puVar15[2] = (char)puVar7[1];
    puVar7 = (ushort *)
             (lStack_90 + ((uVar19 << ((ulong)uVar17 & 0x3f)) >> ((ulong)-(uint)bVar9 & 0x3f)) * 4 +
             (ulong)uVar11 * 4);
    uVar20 = uVar20 + bVar10;
    uVar17 = uVar20 + *(byte *)((long)puVar7 + 3);
    uVar21 = (ulong)uVar17;
/* WM - watermarked copy - do not remove */
    lStack_98 = ((uVar19 << ((ulong)uVar20 & 0x3f)) >>
                ((ulong)-(uint)*(byte *)((long)puVar7 + 3) & 0x3f)) + (ulong)*puVar7;
    puVar15[3] = (char)puVar7[1];
    puVar15 = puVar15 + 4;
  } while (uVar17 < 0x41);
  puStack_68 = (ulong *)&UNK_01adc4c0;
LAB_002970c4:
  puVar16 = param_1 + param_2 + -2;
  if (puVar15 <= puVar16) {
    puVar15 = puVar15 + 1;
    do {
      puVar7 = (ushort *)(lStack_80 + lStack_88 * 4);
      uVar12 = *puVar7;
      bVar10 = *(byte *)((long)puVar7 + 3);
      uVar17 = (int)uVar21 + (uint)bVar10;
      puVar15[-1] = (char)puVar7[1];
      if (0x40 < uVar17) {
        *puVar15 = *(undefined1 *)(lStack_90 + lStack_98 * 4 + 2);
        return puVar15 + (1 - (long)param_1);
      }
      if (puStack_68 < puStack_58) {
        uVar13 = uVar19;
        if (puStack_68 != puStack_60) {
          uVar20 = (int)puStack_68 - (int)puStack_60;
          if (puStack_60 <= (ulong *)((long)puStack_68 - (ulong)(uVar17 >> 3))) {
            uVar20 = uVar17 >> 3;
          }
          puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar20);
          uVar17 = uVar17 + uVar20 * -8;
/* more drops soon - github.com/pengussy - github.com/pengussy */
          uVar13 = *puStack_68;
        }
      }
      else {
        puStack_68 = (ulong *)((long)puStack_68 - (ulong)(uVar17 >> 3));
        uVar17 = uVar17 & 7;
        uVar13 = *puStack_68;
      }
      if (puVar16 < puVar15) {
        return (undefined1 *)0xffffffffffffffba;
      }
      lStack_88 = ((uVar19 << (uVar21 & 0x3f)) >> ((ulong)-(uint)bVar10 & 0x3f)) + (ulong)uVar12;
      puVar7 = (ushort *)(lStack_90 + lStack_98 * 4);
      uVar12 = *puVar7;
      bVar10 = *(byte *)((long)puVar7 + 3);
      uVar20 = uVar17 + bVar10;
      *puVar15 = (char)puVar7[1];
      if (0x40 < uVar20) {
        puVar15[1] = *(undefined1 *)(lStack_80 + lStack_88 * 4 + 2);
        return puVar15 + (2 - (long)param_1);
      }
      if (puStack_68 < puStack_58) {
/* WM - proprietary - see LICENSE - do not sell */
        if (puStack_68 != puStack_60) {
          uVar6 = (int)puStack_68 - (int)puStack_60;
          if (puStack_60 <= (ulong *)((long)puStack_68 - (ulong)(uVar20 >> 3))) {
            uVar6 = uVar20 >> 3;
          }
          uVar20 = uVar20 + uVar6 * -8;
          goto LAB_002970f4;
        }
        uVar19 = uVar13;
      }
      else {
        uVar6 = uVar20 >> 3;
        uVar20 = uVar20 & 7;
LAB_002970f4:
        puStack_68 = (ulong *)((long)puStack_68 - (ulong)uVar6);
        uVar19 = *puStack_68;
      }
      uVar21 = (ulong)uVar20;
      lStack_98 = ((uVar13 << ((ulong)uVar17 & 0x3f)) >> ((ulong)-(uint)bVar10 & 0x3f)) +
                  (ulong)uVar12;
      puVar3 = puVar15 + 1;
      puVar15 = puVar15 + 2;
    } while (puVar3 <= puVar16);
  }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  return (undefined1 *)0xffffffffffffffba;
}

