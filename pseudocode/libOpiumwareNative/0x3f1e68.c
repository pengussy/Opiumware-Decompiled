/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f1e68:c223b47b28
   =========================================================================== */

undefined8 FUN_003f1e68(long *param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulong uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  int iVar27;
  ulong *puVar28;
  long lVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  ulong *puVar33;
  ulong uVar34;
  byte bVar35;
// proprietary - see LICENSE - do not sell
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  ulong uStack_a8;
  
  FUN_003f1890(param_5);
  if (param_1 == (long *)0x0) {
    param_1 = (long *)FUN_003f1a40(param_5);
  }
  plVar9 = (long *)FUN_003f1a40(param_5);
  plVar10 = (long *)FUN_003f1a40(param_5);
  plVar11 = (long *)FUN_003f1a40(param_5);
/* watermarked copy - do not remove */
  if ((plVar11 != (long *)0x0) && (lVar12 = func_0x019e8960(plVar11,param_4), lVar12 != 0)) {
    puVar28 = (ulong *)*plVar11;
    lVar18 = plVar11[1];
    lVar12 = (long)(int)lVar18;
    uVar7 = func_0x003f8974(puVar28[lVar12 + -1]);
    uVar34 = (ulong)(0x40 - uVar7);
    uVar1 = uVar7 & 0x3f;
    if (-1 < (int)-uVar7) {
      uVar1 = -(-uVar7 & 0x3f);
    }
    if (0 < (int)lVar18) {
      uVar17 = 0;
      do {
        uVar24 = *puVar28;
        *puVar28 = uVar24 << (uVar34 & 0x3f) | uVar17;
        uVar17 = uVar24 >> ((ulong)uVar1 & 0x3f) &
                 ((long)(int)-uVar1 | (ulong)(long)(int)-uVar1 >> 8);
        lVar12 = lVar12 + -1;
        puVar28 = puVar28 + 1;
      } while (lVar12 != 0);
    }
    *(undefined4 *)(plVar11 + 2) = 0;
    iVar8 = func_0x003febe4(plVar10,param_3,uVar34);
    if (iVar8 != 0) {
      uVar1 = *(uint *)(plVar11 + 1);
      uVar17 = (ulong)uVar1;
      iVar2 = (int)plVar10[1];
/* WM - unlicensed copy if this notice is missing */
      iVar8 = iVar2;
      if (iVar2 <= (int)uVar1) {
        iVar8 = uVar1 + 1;
        lVar12 = func_0x003f8b8c(plVar10,iVar8);
        if (lVar12 == 0) goto LAB_003f2260;
        _bzero(*plVar10 + (long)iVar2 * 8,
               -(ulong)((uint)(iVar8 - iVar2) >> 0x1f) & 0xfffffff800000000 |
               (ulong)(uint)(iVar8 - iVar2) << 3);
        *(int *)(plVar10 + 1) = iVar8;
      }
      iVar2 = iVar8 - uVar1;
      lVar12 = *plVar11 + (long)(int)uVar1 * 8;
      if (uVar1 == 1) {
        uStack_a8 = 0;
      }
      else {
        uStack_a8 = *(ulong *)(lVar12 + -0x10);
      }
      lVar18 = *plVar10;
      uVar24 = *(ulong *)(lVar12 + -8);
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      lVar12 = func_0x003f8b8c(param_1,iVar2);
      if (lVar12 != 0) {
        uVar7 = *(uint *)(param_3 + 0x10);
        *(uint *)(param_1 + 2) = *(uint *)(param_4 + 0x10) ^ uVar7;
        *(int *)(param_1 + 1) = iVar2;
        lVar29 = *param_1;
        lVar12 = func_0x003f8b8c(plVar9,uVar1 + 1);
        if (lVar12 != 0) {
          if (0 < iVar2) {
            iVar27 = 0;
            puVar28 = (ulong *)(lVar18 + (long)iVar2 * 8);
            plVar32 = (long *)(lVar29 + (long)iVar2 * 8);
            uVar14 = uVar17 & 0x7ffffff8;
            puVar33 = (ulong *)(lVar18 + (long)iVar8 * 8 + -8);
            do {
              uVar31 = puVar33[-1];
              if (*puVar33 == uVar24) {
                uVar30 = 0xffffffffffffffff;
              }
// thanks for reading - discord.gg/sdkhDjTex
              else {
                if (puVar33 == puVar28) {
                  uVar16 = 0;
                }
                else {
                  uVar16 = puVar33[-2];
                }
                uVar30 = func_0x003ef330(*puVar33,uVar31,uVar24);
                uVar15 = uVar31 - uVar30 * uVar24;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar30;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = uStack_a8;
                uVar19 = SUB168(auVar3 * auVar4,8);
                if (uVar15 <= uVar19) {
                  uVar21 = uVar30 * uStack_a8;
                  uVar31 = uVar31 + (uVar24 - uVar24 * uVar30);
                  uVar5 = uVar30;
                  do {
                    uVar30 = uVar5;
                    if ((uVar15 == uVar19) && (uVar21 <= uVar16)) goto LAB_003f215c;
                    if (uVar31 < uVar24) break;
                    uVar15 = uVar15 + uVar24;
                    bVar6 = uVar21 < uStack_a8;
                    uVar21 = uVar21 - uStack_a8;
                    uVar31 = uVar31 + uVar24;
                    uVar19 = uVar19 - bVar6;
                    uVar5 = uVar30 - 1;
                  } while (uVar15 <= uVar19);
                  uVar30 = uVar30 - 1;
                }
// do not claim this as your own
              }
LAB_003f215c:
              uVar13 = func_0x003ef1d4(*plVar9,*plVar11,uVar17,uVar30);
              lVar12 = *plVar9;
              *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8) = uVar13;
              puVar28 = puVar28 + -1;
              lVar12 = func_0x003ef5c8(puVar28,puVar28,lVar12,uVar1 + 1);
              lVar18 = *plVar9;
              if (0 < (int)uVar1) {
                uVar16 = -lVar12;
                lVar29 = *plVar11;
                uVar31 = 0;
                if ((7 < uVar1) && (0x3f < (ulong)(lVar18 - lVar29))) {
                  puVar22 = (undefined8 *)(lVar29 + 0x20);
                  puVar25 = (undefined8 *)(lVar18 + 0x20);
                  uVar31 = uVar14;
                  do {
                    uVar43 = puVar22[-3];
                    uVar13 = puVar22[-4];
                    uVar45 = puVar22[-1];
                    uVar44 = puVar22[-2];
                    uVar47 = puVar22[1];
                    uVar46 = *puVar22;
                    uVar49 = puVar22[3];
/* wm:do not claim this as your own */
                    uVar48 = puVar22[2];
                    bVar35 = (byte)uVar16;
                    bVar36 = (byte)(uVar16 >> 8);
                    bVar37 = (byte)(uVar16 >> 0x10);
                    bVar38 = (byte)(uVar16 >> 0x18);
                    bVar39 = (byte)(uVar16 >> 0x20);
                    bVar40 = (byte)(uVar16 >> 0x28);
                    bVar41 = (byte)(uVar16 >> 0x30);
                    bVar42 = (byte)(uVar16 >> 0x38);
                    puVar25[-3] = CONCAT17((byte)((ulong)uVar43 >> 0x38) & bVar42,
                                           CONCAT16((byte)((ulong)uVar43 >> 0x30) & bVar41,
                                                    CONCAT15((byte)((ulong)uVar43 >> 0x28) & bVar40,
                                                             CONCAT14((byte)((ulong)uVar43 >> 0x20)
                                                                      & bVar39,CONCAT13((byte)((
                                                  ulong)uVar43 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar43 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar43 >> 8) &
                                                                    bVar36,(byte)uVar43 & bVar35))))
                                                  )));
                    puVar25[-4] = CONCAT17((byte)((ulong)uVar13 >> 0x38) & bVar42,
/* no support for modified copies */
                                           CONCAT16((byte)((ulong)uVar13 >> 0x30) & bVar41,
                                                    CONCAT15((byte)((ulong)uVar13 >> 0x28) & bVar40,
                                                             CONCAT14((byte)((ulong)uVar13 >> 0x20)
                                                                      & bVar39,CONCAT13((byte)((
                                                  ulong)uVar13 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar13 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar13 >> 8) &
                                                                    bVar36,(byte)uVar13 & bVar35))))
                                                  )));
                    puVar25[-1] = CONCAT17((byte)((ulong)uVar45 >> 0x38) & bVar42,
                                           CONCAT16((byte)((ulong)uVar45 >> 0x30) & bVar41,
                                                    CONCAT15((byte)((ulong)uVar45 >> 0x28) & bVar40,
                                                             CONCAT14((byte)((ulong)uVar45 >> 0x20)
                                                                      & bVar39,CONCAT13((byte)((
                                                  ulong)uVar45 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar45 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar45 >> 8) &
                                                                    bVar36,(byte)uVar45 & bVar35))))
                                                  )));
                    puVar25[-2] = CONCAT17((byte)((ulong)uVar44 >> 0x38) & bVar42,
                                           CONCAT16((byte)((ulong)uVar44 >> 0x30) & bVar41,
                                                    CONCAT15((byte)((ulong)uVar44 >> 0x28) & bVar40,
                                                             CONCAT14((byte)((ulong)uVar44 >> 0x20)
                                                                      & bVar39,CONCAT13((byte)((
                                                  ulong)uVar44 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar44 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar44 >> 8) &
                                                                    bVar36,(byte)uVar44 & bVar35))))
                                                  )));
                    puVar25[1] = CONCAT17((byte)((ulong)uVar47 >> 0x38) & bVar42,
                                          CONCAT16((byte)((ulong)uVar47 >> 0x30) & bVar41,
/* WM - watermarked copy - do not remove */
                                                   CONCAT15((byte)((ulong)uVar47 >> 0x28) & bVar40,
                                                            CONCAT14((byte)((ulong)uVar47 >> 0x20) &
                                                                     bVar39,CONCAT13((byte)((ulong)
                                                  uVar47 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar47 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar47 >> 8) &
                                                                    bVar36,(byte)uVar47 & bVar35))))
                                                  )));
                    *puVar25 = CONCAT17((byte)((ulong)uVar46 >> 0x38) & bVar42,
                                        CONCAT16((byte)((ulong)uVar46 >> 0x30) & bVar41,
                                                 CONCAT15((byte)((ulong)uVar46 >> 0x28) & bVar40,
                                                          CONCAT14((byte)((ulong)uVar46 >> 0x20) &
                                                                   bVar39,CONCAT13((byte)((ulong)
                                                  uVar46 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar46 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar46 >> 8) &
                                                                    bVar36,(byte)uVar46 & bVar35))))
                                                  )));
                    puVar25[3] = CONCAT17((byte)((ulong)uVar49 >> 0x38) & bVar42,
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                          CONCAT16((byte)((ulong)uVar49 >> 0x30) & bVar41,
                                                   CONCAT15((byte)((ulong)uVar49 >> 0x28) & bVar40,
                                                            CONCAT14((byte)((ulong)uVar49 >> 0x20) &
                                                                     bVar39,CONCAT13((byte)((ulong)
                                                  uVar49 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar49 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar49 >> 8) &
                                                                    bVar36,(byte)uVar49 & bVar35))))
                                                  )));
                    puVar25[2] = CONCAT17((byte)((ulong)uVar48 >> 0x38) & bVar42,
                                          CONCAT16((byte)((ulong)uVar48 >> 0x30) & bVar41,
                                                   CONCAT15((byte)((ulong)uVar48 >> 0x28) & bVar40,
                                                            CONCAT14((byte)((ulong)uVar48 >> 0x20) &
                                                                     bVar39,CONCAT13((byte)((ulong)
                                                  uVar48 >> 0x18) & bVar38,
                                                  CONCAT12((byte)((ulong)uVar48 >> 0x10) & bVar37,
                                                           CONCAT11((byte)((ulong)uVar48 >> 8) &
                                                                    bVar36,(byte)uVar48 & bVar35))))
                                                  )));
                    uVar31 = uVar31 - 8;
                    puVar22 = puVar22 + 8;
                    puVar25 = puVar25 + 8;
                  } while (uVar31 != 0);
/* WM - donate: donate/README.md */
                  uVar31 = uVar14;
                  if (uVar14 == uVar17) goto LAB_003f2074;
                }
                lVar23 = uVar17 - uVar31;
                puVar20 = (ulong *)(lVar29 + uVar31 * 8);
                puVar26 = (ulong *)(lVar18 + uVar31 * 8);
                do {
                  *puVar26 = *puVar20 & uVar16;
                  lVar23 = lVar23 + -1;
                  puVar20 = puVar20 + 1;
                  puVar26 = puVar26 + 1;
                } while (lVar23 != 0);
              }
LAB_003f2074:
              lVar18 = func_0x003ef4d4(puVar28,puVar28,lVar18,uVar17);
              *puVar33 = *puVar33 + lVar18;
/* WM - chat: discord.gg/sdkhDjTex */
              plVar32 = plVar32 + -1;
              *plVar32 = uVar30 - lVar12;
              iVar27 = iVar27 + 1;
              puVar33 = puVar33 + -1;
            } while (iVar27 != iVar2);
          }
          *(uint *)(plVar10 + 2) = uVar7;
          *(uint *)(plVar10 + 1) = uVar1;
          if (param_2 == 0) {
            uVar13 = 1;
            goto LAB_003f2264;
          }
          iVar8 = func_0x003ff024(param_2,plVar10,uVar34);
          if (iVar8 != 0) {
            uVar13 = 1;
            goto LAB_003f2264;
          }
        }
      }
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    }
  }
LAB_003f2260:
  uVar13 = 0;
LAB_003f2264:
  func_0x003f19bc(param_5);
  return uVar13;
}

