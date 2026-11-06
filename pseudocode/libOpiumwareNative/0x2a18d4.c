/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2a18d4:935756cb1b
   =========================================================================== */

ulong FUN_002a18d4(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined4 uVar2;
  uint *puVar9;
  uint *puVar8;
  uint *puVar7;
  uint *puVar6;
  uint *puVar5;
  uint *puVar4;
  uint *puVar3;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
/* wm:origin: github.com/pengussy */
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (param_3 < 7) {
    if (*(uint *)(param_1 + 0x10c) < 7) {
      func_0x002e2bb4(param_1 + 0xc70,param_3,*(undefined4 *)(param_1 + 0x104));
    }
    else {
      func_0x002e2c50(param_1 + 0xc70,param_3);
    }
    return 1;
  }
  *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(param_1 + 0x3e0);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x418) = 0;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
  lVar12 = *(long *)(param_1 + 0xc98);
  *(long *)(param_1 + 0xd90) = lVar12;
  *(undefined4 *)(param_1 + 0xd98) = *(undefined4 *)(param_1 + 0x138);
  uVar26 = (int)param_2 - *(int *)(param_1 + 0xcb0);
  if (*(int *)(param_1 + 0xcd4) + 0x180U < uVar26) {
    uVar18 = (uVar26 - *(int *)(param_1 + 0xcd4)) - 0x180;
    if (0xbf < uVar18) {
      uVar18 = 0xc0;
    }
    *(uint *)(param_1 + 0xcd4) = uVar26 - uVar18;
  }
  if (*(uint *)(param_1 + 0xcc4) < *(uint *)(param_1 + 0xcc0)) {
    lVar19 = 1;
  }
  else if (*(long *)(param_1 + 0xda0) == 0) {
    lVar19 = 0;
  }
  else {
    lVar19 = 2;
    if (*(int *)(*(long *)(param_1 + 0xda0) + 0x8c) != 0) {
      lVar19 = 3;
    }
  }
  lVar16 = *(long *)(param_1 + 0xca0);
  *(undefined4 *)(&UNK_000015f0 + lVar16) = *(undefined4 *)(&UNK_000015f0 + lVar12);
  *(undefined4 *)(&UNK_000015f4 + lVar16) = *(undefined4 *)(&UNK_000015f4 + lVar12);
// unlicensed copy if this notice is missing
  *(undefined4 *)(&UNK_000015f8 + lVar16) = *(undefined4 *)(&UNK_000015f8 + lVar12);
  if (*(ulong *)(param_1 + 0xc78) < *(ulong *)(param_1 + 0xc88)) {
    if (*(long *)(param_1 + 0x1c0) != 0) {
      return 0xffffffffffffffd7;
    }
    uVar2 = *(undefined4 *)(param_1 + 400);
    puVar10 = (undefined8 *)(param_1 + 0xc70);
  }
  else {
    if (*(int *)(param_1 + 0x150) != 1) {
      if (*(code **)(param_1 + 0x1c0) == (code *)0x0) {
        uVar26 = *(int *)(param_1 + 0x10c) - 3;
        puVar10 = (undefined8 *)
                  (&UNK_01dc1b98 + (long)*(int *)(param_1 + 0x10c) * 8 + lVar19 * 0x50);
        if (*(int *)(param_1 + 400) == 1 && uVar26 < 3) {
          puVar10 = (undefined8 *)(&UNK_01dc1cd8 + (ulong)uVar26 * 8 + lVar19 * 0x18);
        }
        pcVar14 = (code *)*puVar10;
        *(undefined8 *)(param_1 + 0xdc8) = 0;
      }
      else {
        uVar11 = (**(code **)(param_1 + 0x1c0))
                           (*(undefined8 *)(param_1 + 0x1b8),
                            *(undefined8 *)(&UNK_00001488 + param_1),
                            *(undefined8 *)(&UNK_00001490 + param_1),param_2,param_3,0,0,
                            *(undefined4 *)(param_1 + 0x11c),
                            1L << ((ulong)*(uint *)(param_1 + 0xf4) & 0x3f));
        if (uVar11 - 1 < *(ulong *)(&UNK_00001490 + param_1)) {
          puVar10 = (undefined8 *)(*(long *)(&UNK_00001488 + param_1) + uVar11 * 0x10);
          if (*(int *)(puVar10 + -2) != 0 || *(int *)(puVar10 + -1) != 0) {
            if (uVar11 == *(ulong *)(&UNK_00001490 + param_1)) goto LAB_002a1ac0;
            *puVar10 = 0;
            puVar10[1] = 0;
            uVar11 = uVar11 + 1;
          }
          if (uVar11 < 0xffffffffffffff89) {
            uStack_98 = 0;
/* wm:reversing this took months of machine time */
            uStack_90 = 0;
            lVar12 = *(long *)(&UNK_00001488 + param_1);
            if (uVar11 == 0) goto LAB_002a1e2c;
            if (uVar11 < 5) {
              lVar13 = 0;
              lVar19 = 0;
              lVar17 = 0;
            }
            else {
              if (uVar11 < 0x11) {
                lVar19 = 0;
                lVar17 = 0;
                lVar16 = 0;
              }
              else {
                lVar19 = 0;
                lVar16 = 0;
                lVar20 = 0;
                lVar21 = 0;
                lVar22 = 0;
                lVar23 = 0;
                uVar1 = 0x10;
                if ((uVar11 & 0xf) != 0) {
                  uVar1 = uVar11 & 0xf;
// if you paid for this, you were scammed
                }
                lVar24 = 0;
                lVar25 = 0;
                lVar13 = uVar11 - uVar1;
                lVar27 = 0;
                lVar28 = 0;
                puVar15 = (uint *)(lVar12 + 0x84);
                lVar29 = 0;
                lVar30 = 0;
                lVar31 = 0;
                lVar32 = 0;
                lVar33 = 0;
                lVar34 = 0;
                lVar35 = 0;
                lVar36 = 0;
                lVar37 = 0;
                lVar38 = 0;
                lVar41 = 0;
                lVar42 = 0;
                lVar43 = 0;
                lVar44 = 0;
                lVar39 = 0;
                lVar40 = 0;
                lVar49 = 0;
                lVar50 = 0;
                lVar45 = 0;
                lVar46 = 0;
                lVar47 = 0;
                lVar48 = 0;
                lVar17 = lVar13;
                do {
// reversing this took months of machine time
                  lVar20 = lVar20 + (ulong)puVar15[-0x18];
                  lVar21 = lVar21 + (ulong)puVar15[-0x14];
                  lVar19 = lVar19 + (ulong)puVar15[-0x20];
                  lVar16 = lVar16 + (ulong)puVar15[-0x1c];
                  lVar24 = lVar24 + (ulong)puVar15[-8];
                  lVar25 = lVar25 + (ulong)puVar15[-4];
                  lVar22 = lVar22 + (ulong)puVar15[-0x10];
                  lVar23 = lVar23 + (ulong)puVar15[-0xc];
                  lVar29 = lVar29 + (ulong)puVar15[8];
                  lVar30 = lVar30 + (ulong)puVar15[0xc];
                  lVar27 = lVar27 + (ulong)*puVar15;
                  lVar28 = lVar28 + (ulong)puVar15[4];
                  lVar33 = lVar33 + (ulong)puVar15[0x18];
                  lVar34 = lVar34 + (ulong)puVar15[0x1c];
                  lVar31 = lVar31 + (ulong)puVar15[0x10];
                  lVar32 = lVar32 + (ulong)puVar15[0x14];
                  lVar37 = lVar37 + (ulong)puVar15[-0x17];
                  lVar38 = lVar38 + (ulong)puVar15[-0x13];
                  lVar35 = lVar35 + (ulong)puVar15[-0x1f];
                  lVar36 = lVar36 + (ulong)puVar15[-0x1b];
                  lVar43 = lVar43 + (ulong)puVar15[-7];
                  lVar44 = lVar44 + (ulong)puVar15[-3];
                  lVar41 = lVar41 + (ulong)puVar15[-0xf];
                  lVar42 = lVar42 + (ulong)puVar15[-0xb];
                  lVar49 = lVar49 + (ulong)puVar15[9];
                  lVar50 = lVar50 + (ulong)puVar15[0xd];
                  lVar39 = lVar39 + (ulong)puVar15[1];
                  lVar40 = lVar40 + (ulong)puVar15[5];
                  lVar47 = lVar47 + (ulong)puVar15[0x19];
                  lVar48 = lVar48 + (ulong)puVar15[0x1d];
                  lVar45 = lVar45 + (ulong)puVar15[0x11];
                  lVar46 = lVar46 + (ulong)puVar15[0x15];
                  puVar15 = puVar15 + 0x40;
/* wm:more drops soon - github.com/pengussy */
                  lVar17 = lVar17 + -0x10;
                } while (lVar17 != 0);
                lVar17 = lVar45 + lVar39 + lVar41 + lVar35 + lVar47 + lVar49 + lVar43 + lVar37 +
                         lVar46 + lVar40 + lVar42 + lVar36 + lVar48 + lVar50 + lVar44 + lVar38;
                lVar19 = lVar31 + lVar27 + lVar22 + lVar19 + lVar33 + lVar29 + lVar24 + lVar20 +
                         lVar32 + lVar28 + lVar23 + lVar16 + lVar34 + lVar30 + lVar25 + lVar21;
                lVar16 = lVar13;
                if (uVar1 < 5) goto LAB_002a1df4;
              }
              uVar1 = 4;
              if ((uVar11 & 3) != 0) {
                uVar1 = uVar11 & 3;
              }
              lVar20 = 0;
              lVar13 = uVar11 - uVar1;
              lVar22 = 0;
              lVar23 = 0;
              lVar21 = 0;
              puVar15 = (uint *)(lVar12 + lVar16 * 0x10 + 4);
/* wm:watermarked copy - do not remove */
              lVar16 = (uVar1 + lVar16) - uVar11;
              lVar24 = 0;
              lVar25 = 0;
              do {
                uVar26 = *puVar15;
                puVar3 = puVar15 + 1;
                puVar4 = puVar15 + 4;
                puVar5 = puVar15 + 5;
                puVar6 = puVar15 + 8;
                puVar7 = puVar15 + 9;
                puVar8 = puVar15 + 0xc;
                puVar9 = puVar15 + 0xd;
                puVar15 = puVar15 + 0x10;
                lVar22 = lVar22 + (ulong)*puVar6;
                lVar23 = lVar23 + (ulong)*puVar8;
                lVar19 = lVar19 + (ulong)uVar26;
                lVar20 = lVar20 + (ulong)*puVar4;
                lVar24 = lVar24 + (ulong)*puVar7;
                lVar25 = lVar25 + (ulong)*puVar9;
                lVar17 = lVar17 + (ulong)*puVar3;
                lVar21 = lVar21 + (ulong)*puVar5;
                lVar16 = lVar16 + 4;
              } while (lVar16 != 0);
              lVar19 = lVar19 + lVar22 + lVar20 + lVar23;
              lVar17 = lVar17 + lVar24 + lVar21 + lVar25;
            }
LAB_002a1df4:
// chat: discord.gg/sdkhDjTex
            lVar16 = uVar11 - lVar13;
            puVar15 = (uint *)(lVar12 + lVar13 * 0x10 + 8);
            do {
              lVar19 = lVar19 + (ulong)puVar15[-1];
              lVar17 = lVar17 + (ulong)*puVar15;
              lVar16 = lVar16 + -1;
              puVar15 = puVar15 + 4;
            } while (lVar16 != 0);
            if (param_3 < (ulong)(lVar17 + lVar19)) {
              return 0xffffffffffffff95;
            }
LAB_002a1e2c:
            uVar11 = func_0x002a1e5c(param_1,&uStack_98,lVar12,uVar11,param_2,param_3,
                                     *(undefined4 *)(param_1 + 0x1c8));
            if (uVar11 < 0xffffffffffffff89) {
              *(undefined8 *)(param_1 + 0xdc8) = 0;
              return 0;
            }
            return uVar11;
          }
        }
        else {
LAB_002a1ac0:
          uVar11 = 0xffffffffffffff96;
// found on a paste site? it was re-uploaded illegally
        }
        if (*(int *)(param_1 + 0x1b4) == 0) {
          return uVar11;
        }
        uVar26 = *(int *)(param_1 + 0x10c) - 3;
        puVar10 = (undefined8 *)
                  (&UNK_01dc1b98 + (long)*(int *)(param_1 + 0x10c) * 8 + lVar19 * 0x50);
        if (*(int *)(param_1 + 400) == 1 && uVar26 < 3) {
          puVar10 = (undefined8 *)(&UNK_01dc1cd8 + (ulong)uVar26 * 8 + lVar19 * 0x18);
        }
        pcVar14 = (code *)*puVar10;
        *(undefined8 *)(param_1 + 0xdc8) = 0;
        lVar16 = *(long *)(param_1 + 0xca0);
      }
      lVar12 = (*pcVar14)(param_1 + 0xca8,param_1 + 0x3d0,&UNK_000015f0 + lVar16,param_2,param_3);
      goto LAB_002a1c0c;
    }
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    if (*(long *)(param_1 + 0x1c0) != 0) {
      return 0xffffffffffffffd7;
    }
    uStack_98 = *(undefined8 *)(param_1 + 0xc60);
    uStack_78 = *(undefined8 *)(param_1 + 0xc68);
    uVar11 = FUN_002e1ea0(param_1 + 0x420,&uStack_98,param_1 + 0x150,param_2,param_3);
    if (0xffffffffffffff88 < uVar11) {
      return uVar11;
    }
    lVar16 = *(long *)(param_1 + 0xca0);
    uVar2 = *(undefined4 *)(param_1 + 400);
    puVar10 = &uStack_98;
  }
  lVar12 = FUN_002e2cd0(puVar10,param_1 + 0xca8,param_1 + 0x3d0,&UNK_000015f0 + lVar16,uVar2,param_2
                        ,param_3);
LAB_002a1c0c:
  _memcpy(*(undefined8 *)(param_1 + 1000),(param_2 + param_3) - lVar12,lVar12);
  *(long *)(param_1 + 1000) = *(long *)(param_1 + 1000) + lVar12;
  return 0;
}

