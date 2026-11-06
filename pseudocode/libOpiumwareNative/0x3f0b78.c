/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3f0b78:e905b879db
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003f0b78(long *param_1,long *param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
// proprietary - see LICENSE - do not sell
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  
  if ((param_2 == (long *)0x0) && (param_2 = *(long **)(param_3 + 8), param_2 == (long *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                    ,0xac,"BN_BLINDING_invert_ex");
    func_0x004466b0(3,0x6b,0);
    return 0;
  }
  if (*(long *)(param_3 + 0x38) == 0) {
    plVar6 = *(long **)(param_3 + 0x18);
    func_0x003f1890(param_4);
/* wm:origin: github.com/pengussy */
    lVar8 = FUN_003f1a40(param_4);
    if (lVar8 != 0) {
      if (param_1 == param_2) {
        iVar4 = func_0x003ff218(lVar8,param_1,param_4);
      }
      else {
        iVar4 = func_0x003fb99c(lVar8,param_1,param_2,param_4);
      }
      if (iVar4 != 0) {
        if (param_1 == plVar6) {
          func_0x004464bc();
          func_0x004465b0(&UNK_01c3f424,0x16,&UNK_01c3f48b);
          func_0x004466b0(3,&UNK_00080106,0);
        }
        else {
          iVar4 = func_0x003f1d68(0,param_1,lVar8,plVar6,param_4);
          if (iVar4 != 0) {
            if ((int)param_1[2] != 0) {
              pcVar1 = (code *)&SUB_003ee9fc;
              if ((int)plVar6[2] != 0) {
                pcVar1 = (code *)&SUB_003eeef4;
              }
              iVar4 = (*pcVar1)(param_1,param_1,plVar6);
              if (iVar4 == 0) goto code_r0x003f9ffc;
            }
            uVar5 = 1;
            goto code_r0x003fa000;
          }
        }
      }
    }
code_r0x003f9ffc:
    uVar5 = 0;
// origin: github.com/pengussy
code_r0x003fa000:
    func_0x003f19bc(param_4);
    return uVar5;
  }
  uVar2 = *(uint *)(param_2 + 1);
  uVar7 = (ulong)(int)uVar2;
  if (*(int *)((long)param_1 + 0xc) < (int)uVar2) goto LAB_003f0cdc;
  uVar3 = *(uint *)(param_1 + 1);
  lVar8 = (long)(int)uVar3;
  if (uVar2 != 0) {
    lVar9 = *param_1;
    if (uVar2 < 8) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar7 & 0xfffffffffffffff8;
      puVar12 = (undefined8 *)(lVar9 + 0x20);
      uVar14 = uVar11;
      lVar13 = _UNK_01aeb530;
      lVar15 = _UNK_01aeb538;
      do {
        lVar16 = lVar13 - lVar8;
        lVar18 = lVar15 - lVar8;
        uVar24 = puVar12[-3];
        uVar5 = puVar12[-4];
        uVar26 = puVar12[-1];
        uVar25 = puVar12[-2];
        uVar28 = puVar12[1];
        uVar27 = *puVar12;
        uVar30 = puVar12[3];
        uVar29 = puVar12[2];
        lVar17 = -(ulong)(lVar16 < 0);
        lVar19 = -(ulong)(lVar18 < 0);
        lVar20 = -(ulong)(lVar16 + 2 < 0);
        lVar21 = -(ulong)(lVar18 + 2 < 0);
        lVar22 = -(ulong)(lVar16 + 4 < 0);
        lVar23 = -(ulong)(lVar18 + 4 < 0);
/* WM - stripping the watermark breaks the license */
        lVar16 = -(ulong)(lVar16 + 6 < 0);
        lVar18 = -(ulong)(lVar18 + 6 < 0);
        puVar12[-3] = CONCAT17((byte)((ulong)lVar19 >> 0x38) & (byte)((ulong)uVar24 >> 0x38),
                               CONCAT16((byte)((ulong)lVar19 >> 0x30) &
                                        (byte)((ulong)uVar24 >> 0x30),
                                        CONCAT15((byte)((ulong)lVar19 >> 0x28) &
                                                 (byte)((ulong)uVar24 >> 0x28),
                                                 CONCAT14((byte)((ulong)lVar19 >> 0x20) &
                                                          (byte)((ulong)uVar24 >> 0x20),
                                                          CONCAT13((byte)((ulong)lVar19 >> 0x18) &
                                                                   (byte)((ulong)uVar24 >> 0x18),
                                                                   CONCAT12((byte)((ulong)lVar19 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar24 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  lVar19 >> 8) & (byte)((ulong)uVar24 >> 8),
                                                  (byte)lVar19 & (byte)uVar24)))))));
        puVar12[-4] = CONCAT17((byte)((ulong)lVar17 >> 0x38) & (byte)((ulong)uVar5 >> 0x38),
                               CONCAT16((byte)((ulong)lVar17 >> 0x30) & (byte)((ulong)uVar5 >> 0x30)
                                        ,CONCAT15((byte)((ulong)lVar17 >> 0x28) &
                                                  (byte)((ulong)uVar5 >> 0x28),
                                                  CONCAT14((byte)((ulong)lVar17 >> 0x20) &
                                                           (byte)((ulong)uVar5 >> 0x20),
                                                           CONCAT13((byte)((ulong)lVar17 >> 0x18) &
                                                                    (byte)((ulong)uVar5 >> 0x18),
                                                                    CONCAT12((byte)((ulong)lVar17 >>
                                                                                   0x10) &
                                                                             (byte)((ulong)uVar5 >>
                                                                                   0x10),
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                                                                             CONCAT11((byte)((ulong)
                                                  lVar17 >> 8) & (byte)((ulong)uVar5 >> 8),
                                                  (byte)lVar17 & (byte)uVar5)))))));
        puVar12[-1] = CONCAT17((byte)((ulong)lVar21 >> 0x38) & (byte)((ulong)uVar26 >> 0x38),
                               CONCAT16((byte)((ulong)lVar21 >> 0x30) &
                                        (byte)((ulong)uVar26 >> 0x30),
                                        CONCAT15((byte)((ulong)lVar21 >> 0x28) &
                                                 (byte)((ulong)uVar26 >> 0x28),
                                                 CONCAT14((byte)((ulong)lVar21 >> 0x20) &
                                                          (byte)((ulong)uVar26 >> 0x20),
                                                          CONCAT13((byte)((ulong)lVar21 >> 0x18) &
                                                                   (byte)((ulong)uVar26 >> 0x18),
                                                                   CONCAT12((byte)((ulong)lVar21 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar26 >>
                                                                                  0x10),
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                                            CONCAT11((byte)((ulong)
                                                  lVar21 >> 8) & (byte)((ulong)uVar26 >> 8),
                                                  (byte)lVar21 & (byte)uVar26)))))));
        puVar12[-2] = CONCAT17((byte)((ulong)lVar20 >> 0x38) & (byte)((ulong)uVar25 >> 0x38),
                               CONCAT16((byte)((ulong)lVar20 >> 0x30) &
                                        (byte)((ulong)uVar25 >> 0x30),
                                        CONCAT15((byte)((ulong)lVar20 >> 0x28) &
                                                 (byte)((ulong)uVar25 >> 0x28),
                                                 CONCAT14((byte)((ulong)lVar20 >> 0x20) &
                                                          (byte)((ulong)uVar25 >> 0x20),
                                                          CONCAT13((byte)((ulong)lVar20 >> 0x18) &
                                                                   (byte)((ulong)uVar25 >> 0x18),
                                                                   CONCAT12((byte)((ulong)lVar20 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar25 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  lVar20 >> 8) & (byte)((ulong)uVar25 >> 8),
                                                  (byte)lVar20 & (byte)uVar25)))))));
        puVar12[1] = CONCAT17((byte)((ulong)lVar23 >> 0x38) & (byte)((ulong)uVar28 >> 0x38),
                              CONCAT16((byte)((ulong)lVar23 >> 0x30) & (byte)((ulong)uVar28 >> 0x30)
                                       ,CONCAT15((byte)((ulong)lVar23 >> 0x28) &
                                                 (byte)((ulong)uVar28 >> 0x28),
                                                 CONCAT14((byte)((ulong)lVar23 >> 0x20) &
                                                          (byte)((ulong)uVar28 >> 0x20),
                                                          CONCAT13((byte)((ulong)lVar23 >> 0x18) &
// WM - more drops soon - github.com/pengussy
                                                                   (byte)((ulong)uVar28 >> 0x18),
                                                                   CONCAT12((byte)((ulong)lVar23 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar28 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  lVar23 >> 8) & (byte)((ulong)uVar28 >> 8),
                                                  (byte)lVar23 & (byte)uVar28)))))));
        *puVar12 = CONCAT17((byte)((ulong)lVar22 >> 0x38) & (byte)((ulong)uVar27 >> 0x38),
                            CONCAT16((byte)((ulong)lVar22 >> 0x30) & (byte)((ulong)uVar27 >> 0x30),
                                     CONCAT15((byte)((ulong)lVar22 >> 0x28) &
                                              (byte)((ulong)uVar27 >> 0x28),
                                              CONCAT14((byte)((ulong)lVar22 >> 0x20) &
                                                       (byte)((ulong)uVar27 >> 0x20),
                                                       CONCAT13((byte)((ulong)lVar22 >> 0x18) &
                                                                (byte)((ulong)uVar27 >> 0x18),
                                                                CONCAT12((byte)((ulong)lVar22 >>
                                                                               0x10) &
                                                                         (byte)((ulong)uVar27 >>
                                                                               0x10),
/* stripping the watermark breaks the license */
                                                                         CONCAT11((byte)((ulong)
                                                  lVar22 >> 8) & (byte)((ulong)uVar27 >> 8),
                                                  (byte)lVar22 & (byte)uVar27)))))));
        puVar12[3] = CONCAT17((byte)((ulong)lVar18 >> 0x38) & (byte)((ulong)uVar30 >> 0x38),
                              CONCAT16((byte)((ulong)lVar18 >> 0x30) & (byte)((ulong)uVar30 >> 0x30)
                                       ,CONCAT15((byte)((ulong)lVar18 >> 0x28) &
                                                 (byte)((ulong)uVar30 >> 0x28),
                                                 CONCAT14((byte)((ulong)lVar18 >> 0x20) &
                                                          (byte)((ulong)uVar30 >> 0x20),
                                                          CONCAT13((byte)((ulong)lVar18 >> 0x18) &
                                                                   (byte)((ulong)uVar30 >> 0x18),
                                                                   CONCAT12((byte)((ulong)lVar18 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar30 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  lVar18 >> 8) & (byte)((ulong)uVar30 >> 8),
                                                  (byte)lVar18 & (byte)uVar30)))))));
        puVar12[2] = CONCAT17((byte)((ulong)lVar16 >> 0x38) & (byte)((ulong)uVar29 >> 0x38),
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                              CONCAT16((byte)((ulong)lVar16 >> 0x30) & (byte)((ulong)uVar29 >> 0x30)
                                       ,CONCAT15((byte)((ulong)lVar16 >> 0x28) &
                                                 (byte)((ulong)uVar29 >> 0x28),
                                                 CONCAT14((byte)((ulong)lVar16 >> 0x20) &
                                                          (byte)((ulong)uVar29 >> 0x20),
                                                          CONCAT13((byte)((ulong)lVar16 >> 0x18) &
                                                                   (byte)((ulong)uVar29 >> 0x18),
                                                                   CONCAT12((byte)((ulong)lVar16 >>
                                                                                  0x10) &
                                                                            (byte)((ulong)uVar29 >>
                                                                                  0x10),
                                                                            CONCAT11((byte)((ulong)
                                                  lVar16 >> 8) & (byte)((ulong)uVar29 >> 8),
                                                  (byte)lVar16 & (byte)uVar29)))))));
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + 8;
        uVar14 = uVar14 - 8;
        puVar12 = puVar12 + 8;
      } while (uVar14 != 0);
      if (uVar11 == uVar7) goto LAB_003f0cd0;
    }
    lVar13 = uVar7 - uVar11;
    lVar8 = uVar11 - lVar8;
    puVar10 = (ulong *)(lVar9 + uVar11 * 8);
    do {
      *puVar10 = *puVar10 & lVar8 >> 0x3f;
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + -1;
// WM - chat: discord.gg/sdkhDjTex
      puVar10 = puVar10 + 1;
    } while (lVar13 != 0);
  }
LAB_003f0cd0:
  if ((int)uVar2 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 1) = uVar2;
LAB_003f0cdc:
  uVar5 = func_0x003fa234(param_1,param_1,param_2);
  func_0x003f97a0(param_1);
  return uVar5;
}

