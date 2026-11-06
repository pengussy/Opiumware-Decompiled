/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x3f7af4:05e1a7fefb
 *  --------------------------------------------------------------------------*/

bool FUN_003f7af4(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  ulong *puVar17;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  undefined8 *puVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  if (*(int *)param_3 == 0) {
    func_0x003f95cc();
    return true;
  }
  func_0x003f1890(param_4);
  plVar7 = (long *)func_0x003f1a40(param_4);
  plVar8 = (long *)func_0x003f1a40(param_4);
  plVar9 = (long *)func_0x003f1a40(param_4);
  if ((plVar9 != (long *)0x0) && (iVar5 = func_0x003f5aac(plVar7,param_2,param_3), iVar5 != 0)) {
    iVar5 = func_0x003f89fc(plVar7);
    if (iVar5 != 0) {
      func_0x003f95cc(param_1);
/* WM - do not claim this as your own */
      bVar4 = true;
      goto LAB_003f8094;
    }
    if ((*param_3 & 1) == 0) {
      plVar10 = (long *)func_0x003f1a40(param_4);
      plVar11 = (long *)func_0x003f1a40(param_4);
      plVar12 = (long *)func_0x003f1a40(param_4);
      if (plVar12 != (long *)0x0) {
        uVar29 = 0;
        do {
          iVar5 = func_0x003fd410(plVar10,*(int *)param_3,0,0,0,param_4);
          if ((iVar5 == 0) || (iVar5 = func_0x003f5aac(plVar10,plVar10,param_3), iVar5 == 0))
          goto LAB_003f8090;
          func_0x003f95cc(plVar8);
          lVar13 = func_0x019e8960(plVar9,plVar10);
          if (lVar13 == 0) goto LAB_003f8090;
          if (1 < *(int *)param_3) {
            iVar5 = 1;
            do {
              iVar6 = func_0x003f695c(plVar8,plVar8,param_3,param_4);
              if (((iVar6 == 0) ||
                  (iVar6 = func_0x003f695c(plVar11,plVar9,param_3,param_4), iVar6 == 0)) ||
                 (iVar6 = func_0x003f60e4(plVar12,plVar11,plVar7,param_3,param_4), iVar6 == 0))
              goto LAB_003f8090;
/* stripping the watermark breaks the license - github.com/pengussy */
              plVar1 = plVar8;
              plVar3 = plVar12;
              if ((int)plVar12[1] <= (int)plVar8[1]) {
                plVar1 = plVar12;
                plVar3 = plVar8;
              }
              lVar13 = func_0x003f8b8c(plVar8,(int)plVar3[1]);
              if (lVar13 == 0) goto LAB_003f8090;
              uVar15 = (ulong)*(uint *)(plVar1 + 1);
              if ((int)*(uint *)(plVar1 + 1) < 1) {
                uVar15 = 0;
              }
              else {
                lVar13 = *plVar3;
                lVar18 = *plVar1;
                lVar20 = *plVar8;
                if (uVar15 < 8) {
                  uVar23 = 0;
                }
                else {
                  uVar23 = 0;
                  if ((0x3f < (ulong)(lVar20 - lVar13)) && (0x3f < (ulong)(lVar20 - lVar18))) {
                    uVar23 = uVar15 & 0x7ffffff8;
                    puVar16 = (undefined8 *)(lVar13 + 0x20);
                    puVar22 = (undefined8 *)(lVar18 + 0x20);
                    puVar28 = (undefined8 *)(lVar20 + 0x20);
                    uVar25 = uVar23;
                    do {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                      uVar30 = puVar16[-3];
                      uVar14 = puVar16[-4];
                      uVar32 = puVar16[-1];
                      uVar31 = puVar16[-2];
                      uVar34 = puVar16[1];
                      uVar33 = *puVar16;
                      uVar36 = puVar16[3];
                      uVar35 = puVar16[2];
                      uVar38 = puVar22[-3];
                      uVar37 = puVar22[-4];
                      uVar40 = puVar22[-1];
                      uVar39 = puVar22[-2];
                      uVar42 = puVar22[1];
                      uVar41 = *puVar22;
                      uVar44 = puVar22[3];
                      uVar43 = puVar22[2];
                      puVar28[-3] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                             (byte)((ulong)uVar30 >> 0x38),
                                             CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                      (byte)((ulong)uVar30 >> 0x30),
                                                      CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                               (byte)((ulong)uVar30 >> 0x28),
                                                               CONCAT14((byte)((ulong)uVar38 >> 0x20
                                                                              ) ^ (byte)((ulong)
                                                  uVar30 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar38 >> 0x18) ^
                                                           (byte)((ulong)uVar30 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar38 >> 0x10) ^
                                                                    (byte)((ulong)uVar30 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar38 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar30 >>
                                                                                   8),(byte)uVar38 ^
                                                                                      (byte)uVar30))
                                                          )))));
                      puVar28[-4] = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
/* if you paid for this, you were scammed - github.com/pengussy */
                                             (byte)((ulong)uVar14 >> 0x38),
                                             CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                      (byte)((ulong)uVar14 >> 0x30),
                                                      CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                               (byte)((ulong)uVar14 >> 0x28),
                                                               CONCAT14((byte)((ulong)uVar37 >> 0x20
                                                                              ) ^ (byte)((ulong)
                                                  uVar14 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar37 >> 0x18) ^
                                                           (byte)((ulong)uVar14 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar37 >> 0x10) ^
                                                                    (byte)((ulong)uVar14 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar37 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar14 >>
                                                                                   8),(byte)uVar37 ^
                                                                                      (byte)uVar14))
                                                          )))));
                      puVar28[-1] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^
                                             (byte)((ulong)uVar32 >> 0x38),
                                             CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                                      (byte)((ulong)uVar32 >> 0x30),
/* WM - donate: donate/README.md */
                                                      CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                               (byte)((ulong)uVar32 >> 0x28),
                                                               CONCAT14((byte)((ulong)uVar40 >> 0x20
                                                                              ) ^ (byte)((ulong)
                                                  uVar32 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar40 >> 0x18) ^
                                                           (byte)((ulong)uVar32 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar40 >> 0x10) ^
                                                                    (byte)((ulong)uVar32 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar40 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar32 >>
                                                                                   8),(byte)uVar40 ^
                                                                                      (byte)uVar32))
                                                          )))));
                      puVar28[-2] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                             (byte)((ulong)uVar31 >> 0x38),
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                             CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                      (byte)((ulong)uVar31 >> 0x30),
                                                      CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                               (byte)((ulong)uVar31 >> 0x28),
                                                               CONCAT14((byte)((ulong)uVar39 >> 0x20
                                                                              ) ^ (byte)((ulong)
                                                  uVar31 >> 0x20),
                                                  CONCAT13((byte)((ulong)uVar39 >> 0x18) ^
                                                           (byte)((ulong)uVar31 >> 0x18),
                                                           CONCAT12((byte)((ulong)uVar39 >> 0x10) ^
                                                                    (byte)((ulong)uVar31 >> 0x10),
                                                                    CONCAT11((byte)((ulong)uVar39 >>
                                                                                   8) ^
                                                                             (byte)((ulong)uVar31 >>
                                                                                   8),(byte)uVar39 ^
                                                                                      (byte)uVar31))
                                                          )))));
                      puVar28[1] = CONCAT17((byte)((ulong)uVar42 >> 0x38) ^
                                            (byte)((ulong)uVar34 >> 0x38),
                                            CONCAT16((byte)((ulong)uVar42 >> 0x30) ^
                                                     (byte)((ulong)uVar34 >> 0x30),
                                                     CONCAT15((byte)((ulong)uVar42 >> 0x28) ^
                                                              (byte)((ulong)uVar34 >> 0x28),
/*  found on a paste site? it was re-uploaded illegally  */
                                                              CONCAT14((byte)((ulong)uVar42 >> 0x20)
                                                                       ^ (byte)((ulong)uVar34 >>
                                                                               0x20),
                                                                       CONCAT13((byte)((ulong)uVar42
                                                                                      >> 0x18) ^
                                                                                (byte)((ulong)uVar34
                                                                                      >> 0x18),
                                                                                CONCAT12((byte)((
                                                  ulong)uVar42 >> 0x10) ^
                                                  (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar42 >> 8) ^
                                                           (byte)((ulong)uVar34 >> 8),
                                                           (byte)uVar42 ^ (byte)uVar34)))))));
                      *puVar28 = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^
                                          (byte)((ulong)uVar33 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                                   (byte)((ulong)uVar33 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                            (byte)((ulong)uVar33 >> 0x28),
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                                                            CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                                     (byte)((ulong)uVar33 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar41
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar33
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar41 >> 0x10) ^ (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar41 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar41 ^ (byte)uVar33)))))));
                      puVar28[3] = CONCAT17((byte)((ulong)uVar44 >> 0x38) ^
                                            (byte)((ulong)uVar36 >> 0x38),
                                            CONCAT16((byte)((ulong)uVar44 >> 0x30) ^
                                                     (byte)((ulong)uVar36 >> 0x30),
                                                     CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                                              (byte)((ulong)uVar36 >> 0x28),
                                                              CONCAT14((byte)((ulong)uVar44 >> 0x20)
                                                                       ^ (byte)((ulong)uVar36 >>
                                                                               0x20),
                                                                       CONCAT13((byte)((ulong)uVar44
                                                                                      >> 0x18) ^
                                                                                (byte)((ulong)uVar36
                                                                                      >> 0x18),
                                                                                CONCAT12((byte)((
                                                  ulong)uVar44 >> 0x10) ^
                                                  (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar44 >> 8) ^
                                                           (byte)((ulong)uVar36 >> 8),
                                                           (byte)uVar44 ^ (byte)uVar36)))))));
                      puVar28[2] = CONCAT17((byte)((ulong)uVar43 >> 0x38) ^
                                            (byte)((ulong)uVar35 >> 0x38),
                                            CONCAT16((byte)((ulong)uVar43 >> 0x30) ^
                                                     (byte)((ulong)uVar35 >> 0x30),
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                                                     CONCAT15((byte)((ulong)uVar43 >> 0x28) ^
                                                              (byte)((ulong)uVar35 >> 0x28),
                                                              CONCAT14((byte)((ulong)uVar43 >> 0x20)
                                                                       ^ (byte)((ulong)uVar35 >>
                                                                               0x20),
                                                                       CONCAT13((byte)((ulong)uVar43
                                                                                      >> 0x18) ^
                                                                                (byte)((ulong)uVar35
                                                                                      >> 0x18),
                                                                                CONCAT12((byte)((
                                                  ulong)uVar43 >> 0x10) ^
                                                  (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar43 >> 8) ^
                                                           (byte)((ulong)uVar35 >> 8),
                                                           (byte)uVar43 ^ (byte)uVar35)))))));
                      uVar25 = uVar25 - 8;
                      puVar16 = puVar16 + 8;
                      puVar22 = puVar22 + 8;
                      puVar28 = puVar28 + 8;
                    } while (uVar25 != 0);
                    if (uVar23 == uVar15) goto LAB_003f7d1c;
                  }
                }
                lVar26 = uVar15 - uVar23;
                lVar24 = uVar23 * 8;
                puVar17 = (ulong *)(lVar13 + lVar24);
                puVar19 = (ulong *)(lVar18 + lVar24);
                puVar21 = (ulong *)(lVar20 + lVar24);
                do {
                  *puVar21 = *puVar19 ^ *puVar17;
                  lVar26 = lVar26 + -1;
                  puVar17 = puVar17 + 1;
                  puVar19 = puVar19 + 1;
                  puVar21 = puVar21 + 1;
                } while (lVar26 != 0);
              }
/* WM - no support for modified copies */
LAB_003f7d1c:
              uVar2 = *(uint *)(plVar3 + 1);
              if ((int)uVar15 < (int)uVar2) {
                lVar13 = *plVar3;
                lVar18 = *plVar8;
                uVar23 = uVar2 - uVar15;
                if ((7 < uVar23) && (0x3f < (ulong)(lVar18 - lVar13))) {
                  uVar27 = uVar23 & 0xfffffffffffffff8;
                  puVar16 = (undefined8 *)(lVar13 + uVar15 * 8 + 0x20);
                  puVar22 = (undefined8 *)(lVar18 + uVar15 * 8 + 0x20);
                  uVar25 = uVar27;
                  do {
                    uVar14 = puVar16[-4];
                    uVar31 = puVar16[-1];
                    uVar30 = puVar16[-2];
                    uVar33 = puVar16[1];
                    uVar32 = *puVar16;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
                    uVar35 = puVar16[3];
                    uVar34 = puVar16[2];
                    puVar22[-3] = puVar16[-3];
                    puVar22[-4] = uVar14;
                    puVar22[-1] = uVar31;
                    puVar22[-2] = uVar30;
                    puVar22[1] = uVar33;
                    *puVar22 = uVar32;
                    puVar22[3] = uVar35;
                    puVar22[2] = uVar34;
                    uVar25 = uVar25 - 8;
                    puVar16 = puVar16 + 8;
                    puVar22 = puVar22 + 8;
                  } while (uVar25 != 0);
                  uVar15 = uVar27 + uVar15;
                  if (uVar23 == uVar27) goto LAB_003f7e1c;
                }
                lVar20 = uVar2 - uVar15;
                puVar16 = (undefined8 *)(lVar13 + uVar15 * 8);
// WM - found on a paste site? it was re-uploaded illegally
                puVar22 = (undefined8 *)(lVar18 + uVar15 * 8);
                do {
                  *puVar22 = *puVar16;
                  lVar20 = lVar20 + -1;
                  puVar16 = puVar16 + 1;
                  puVar22 = puVar22 + 1;
                } while (lVar20 != 0);
              }
LAB_003f7e1c:
              *(uint *)(plVar8 + 1) = uVar2;
              func_0x019e8c64(plVar8);
              plVar1 = plVar11;
              plVar3 = plVar10;
              if ((int)plVar10[1] <= (int)plVar11[1]) {
                plVar1 = plVar10;
                plVar3 = plVar11;
              }
              lVar13 = func_0x003f8b8c(plVar9,(int)plVar3[1]);
              if (lVar13 == 0) goto LAB_003f8090;
              uVar15 = (ulong)*(uint *)(plVar1 + 1);
              if ((int)*(uint *)(plVar1 + 1) < 1) {
                uVar15 = 0;
              }
              else {
                lVar13 = *plVar3;
                lVar18 = *plVar1;
                lVar20 = *plVar9;
                if ((uVar15 < 8) || (uVar23 = 0, (ulong)(lVar20 - lVar13) < 0x40)) {
                  uVar23 = 0;
                }
                else if (0x3f < (ulong)(lVar20 - lVar18)) {
                  uVar23 = uVar15 & 0x7ffffff8;
                  puVar16 = (undefined8 *)(lVar13 + 0x20);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                  puVar22 = (undefined8 *)(lVar18 + 0x20);
                  puVar28 = (undefined8 *)(lVar20 + 0x20);
                  uVar25 = uVar23;
                  do {
                    uVar30 = puVar16[-3];
                    uVar14 = puVar16[-4];
                    uVar32 = puVar16[-1];
                    uVar31 = puVar16[-2];
                    uVar34 = puVar16[1];
                    uVar33 = *puVar16;
                    uVar36 = puVar16[3];
                    uVar35 = puVar16[2];
                    uVar38 = puVar22[-3];
                    uVar37 = puVar22[-4];
                    uVar40 = puVar22[-1];
                    uVar39 = puVar22[-2];
                    uVar42 = puVar22[1];
                    uVar41 = *puVar22;
                    uVar44 = puVar22[3];
                    uVar43 = puVar22[2];
                    puVar28[-3] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                           (byte)((ulong)uVar30 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                    (byte)((ulong)uVar30 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                             (byte)((ulong)uVar30 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar38 >> 0x20)
                                                                      ^ (byte)((ulong)uVar30 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar38
                                                                                     >> 0x18) ^
// WM - more drops soon - github.com/pengussy
                                                                               (byte)((ulong)uVar30
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar38 >> 0x10) ^
                                                  (byte)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) ^
                                                           (byte)((ulong)uVar30 >> 8),
                                                           (byte)uVar38 ^ (byte)uVar30)))))));
                    puVar28[-4] = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
                                           (byte)((ulong)uVar14 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                    (byte)((ulong)uVar14 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                             (byte)((ulong)uVar14 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar37 >> 0x20)
                                                                      ^ (byte)((ulong)uVar14 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar37
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar14
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
/* wm:keep the notice, keep the source honest */
                                                  ulong)uVar37 >> 0x10) ^
                                                  (byte)((ulong)uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar37 ^ (byte)uVar14)))))));
                    puVar28[-1] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^
                                           (byte)((ulong)uVar32 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                                    (byte)((ulong)uVar32 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                             (byte)((ulong)uVar32 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar40 >> 0x20)
                                                                      ^ (byte)((ulong)uVar32 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar40
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar32
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar40 >> 0x10) ^
                                                  (byte)((ulong)uVar32 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar40 >> 8) ^
                                                           (byte)((ulong)uVar32 >> 8),
                                                           (byte)uVar40 ^ (byte)uVar32)))))));
                    puVar28[-2] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                           (byte)((ulong)uVar31 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                    (byte)((ulong)uVar31 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
/* wm:watermarked copy - do not remove */
                                                             (byte)((ulong)uVar31 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar39 >> 0x20)
                                                                      ^ (byte)((ulong)uVar31 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar39
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar31
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar39 >> 0x10) ^
                                                  (byte)((ulong)uVar31 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) ^
                                                           (byte)((ulong)uVar31 >> 8),
                                                           (byte)uVar39 ^ (byte)uVar31)))))));
                    puVar28[1] = CONCAT17((byte)((ulong)uVar42 >> 0x38) ^
                                          (byte)((ulong)uVar34 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar42 >> 0x30) ^
                                                   (byte)((ulong)uVar34 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar42 >> 0x28) ^
                                                            (byte)((ulong)uVar34 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar42 >> 0x20) ^
                                                                     (byte)((ulong)uVar34 >> 0x20),
// reversing this took months of machine time
                                                                     CONCAT13((byte)((ulong)uVar42
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar34
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar42 >> 0x10) ^ (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar42 >> 8) ^
                                                           (byte)((ulong)uVar34 >> 8),
                                                           (byte)uVar42 ^ (byte)uVar34)))))));
                    *puVar28 = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^
                                        (byte)((ulong)uVar33 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                                 (byte)((ulong)uVar33 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                          (byte)((ulong)uVar33 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                                   (byte)((ulong)uVar33 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar41 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar33 >>
/* wm:stripping the watermark breaks the license */
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar41 >> 0x10) ^ (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar41 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar41 ^ (byte)uVar33)))))));
                    puVar28[3] = CONCAT17((byte)((ulong)uVar44 >> 0x38) ^
                                          (byte)((ulong)uVar36 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar44 >> 0x30) ^
                                                   (byte)((ulong)uVar36 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                                            (byte)((ulong)uVar36 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar44 >> 0x20) ^
                                                                     (byte)((ulong)uVar36 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar44
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar36
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar44 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar44 >> 8) ^
                                                           (byte)((ulong)uVar36 >> 8),
                                                           (byte)uVar44 ^ (byte)uVar36)))))));
                    puVar28[2] = CONCAT17((byte)((ulong)uVar43 >> 0x38) ^
                                          (byte)((ulong)uVar35 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar43 >> 0x30) ^
                                                   (byte)((ulong)uVar35 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar43 >> 0x28) ^
                                                            (byte)((ulong)uVar35 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar43 >> 0x20) ^
                                                                     (byte)((ulong)uVar35 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar43
                                                                                    >> 0x18) ^
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                                                                              (byte)((ulong)uVar35
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar43 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar43 >> 8) ^
                                                           (byte)((ulong)uVar35 >> 8),
                                                           (byte)uVar43 ^ (byte)uVar35)))))));
                    uVar25 = uVar25 - 8;
                    puVar16 = puVar16 + 8;
                    puVar22 = puVar22 + 8;
                    puVar28 = puVar28 + 8;
                  } while (uVar25 != 0);
                  if (uVar23 == uVar15) goto LAB_003f7eb0;
                }
                lVar26 = uVar15 - uVar23;
                lVar24 = uVar23 * 8;
                puVar17 = (ulong *)(lVar13 + lVar24);
/* WM - chat: discord.gg/sdkhDjTex */
                puVar19 = (ulong *)(lVar18 + lVar24);
                puVar21 = (ulong *)(lVar20 + lVar24);
                do {
                  *puVar21 = *puVar19 ^ *puVar17;
                  lVar26 = lVar26 + -1;
                  puVar17 = puVar17 + 1;
                  puVar19 = puVar19 + 1;
                  puVar21 = puVar21 + 1;
                } while (lVar26 != 0);
              }
LAB_003f7eb0:
              uVar2 = *(uint *)(plVar3 + 1);
              if ((int)uVar15 < (int)uVar2) {
                lVar13 = *plVar3;
                lVar18 = *plVar9;
                uVar23 = uVar2 - uVar15;
                if ((uVar23 < 8) || ((ulong)(lVar18 - lVar13) < 0x40)) {
                  uVar25 = uVar15;
                }
                else {
                  uVar27 = uVar23 & 0xfffffffffffffff8;
                  uVar25 = uVar27 + uVar15;
                  puVar16 = (undefined8 *)(lVar13 + uVar15 * 8 + 0x20);
                  puVar22 = (undefined8 *)(lVar18 + uVar15 * 8 + 0x20);
                  uVar15 = uVar27;
                  do {
                    uVar14 = puVar16[-4];
                    uVar31 = puVar16[-1];
                    uVar30 = puVar16[-2];
                    uVar33 = puVar16[1];
                    uVar32 = *puVar16;
                    uVar35 = puVar16[3];
                    uVar34 = puVar16[2];
                    puVar22[-3] = puVar16[-3];
/* donate: donate/README.md */
                    puVar22[-4] = uVar14;
                    puVar22[-1] = uVar31;
                    puVar22[-2] = uVar30;
                    puVar22[1] = uVar33;
                    *puVar22 = uVar32;
                    puVar22[3] = uVar35;
                    puVar22[2] = uVar34;
                    uVar15 = uVar15 - 8;
                    puVar16 = puVar16 + 8;
                    puVar22 = puVar22 + 8;
                  } while (uVar15 != 0);
                  if (uVar23 == uVar27) goto LAB_003f7c34;
                }
                lVar20 = uVar2 - uVar25;
                puVar16 = (undefined8 *)(lVar13 + uVar25 * 8);
                puVar22 = (undefined8 *)(lVar18 + uVar25 * 8);
                do {
                  *puVar22 = *puVar16;
                  lVar20 = lVar20 + -1;
                  puVar16 = puVar16 + 1;
                  puVar22 = puVar22 + 1;
                } while (lVar20 != 0);
              }
LAB_003f7c34:
              *(uint *)(plVar9 + 1) = uVar2;
              func_0x019e8c64(plVar9);
              iVar5 = iVar5 + 1;
/* WM - keep the notice, keep the source honest */
            } while (iVar5 < *(int *)param_3);
          }
          iVar5 = func_0x003f89fc(plVar9);
        } while ((iVar5 != 0) && (bVar4 = uVar29 < 0x31, uVar29 = uVar29 + 1, bVar4));
        iVar5 = func_0x003f89fc(plVar9);
        if (iVar5 == 0) goto LAB_003f8028;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gf2m.c"
                        ,0x429,"BN_GF2m_mod_solve_quad_arr");
        uVar14 = 0x71;
LAB_003f8088:
        func_0x004466b0(3,uVar14,0);
      }
    }
    else {
      lVar13 = func_0x019e8960(plVar8,plVar7);
      if (lVar13 != 0) {
        if (2 < *(int *)param_3) {
          iVar5 = 1;
          do {
            iVar6 = func_0x003f695c(plVar8,plVar8,param_3,param_4);
            if ((iVar6 == 0) || (iVar6 = func_0x003f695c(plVar8,plVar8,param_3,param_4), iVar6 == 0)
               ) goto LAB_003f8090;
            plVar10 = plVar8;
            plVar11 = plVar7;
            if ((int)plVar7[1] <= (int)plVar8[1]) {
              plVar10 = plVar7;
              plVar11 = plVar8;
            }
            lVar13 = func_0x003f8b8c(plVar8,(int)plVar11[1]);
            if (lVar13 == 0) goto LAB_003f8090;
            uVar15 = (ulong)*(uint *)(plVar10 + 1);
            if ((int)*(uint *)(plVar10 + 1) < 1) {
              uVar15 = 0;
            }
            else {
/* keep the notice, keep the source honest */
              lVar13 = *plVar11;
              lVar18 = *plVar10;
              lVar20 = *plVar8;
              if (uVar15 < 8) {
                uVar23 = 0;
              }
              else {
                uVar23 = 0;
                if ((0x3f < (ulong)(lVar20 - lVar13)) && (0x3f < (ulong)(lVar20 - lVar18))) {
                  uVar23 = uVar15 & 0x7ffffff8;
                  puVar16 = (undefined8 *)(lVar13 + 0x20);
                  puVar22 = (undefined8 *)(lVar18 + 0x20);
                  puVar28 = (undefined8 *)(lVar20 + 0x20);
                  uVar25 = uVar23;
                  do {
                    uVar30 = puVar16[-3];
                    uVar14 = puVar16[-4];
                    uVar32 = puVar16[-1];
                    uVar31 = puVar16[-2];
                    uVar34 = puVar16[1];
                    uVar33 = *puVar16;
                    uVar36 = puVar16[3];
                    uVar35 = puVar16[2];
                    uVar38 = puVar22[-3];
                    uVar37 = puVar22[-4];
                    uVar40 = puVar22[-1];
                    uVar39 = puVar22[-2];
                    uVar42 = puVar22[1];
                    uVar41 = *puVar22;
                    uVar44 = puVar22[3];
                    uVar43 = puVar22[2];
                    puVar28[-3] = CONCAT17((byte)((ulong)uVar38 >> 0x38) ^
                                           (byte)((ulong)uVar30 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar38 >> 0x30) ^
                                                    (byte)((ulong)uVar30 >> 0x30),
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                                                    CONCAT15((byte)((ulong)uVar38 >> 0x28) ^
                                                             (byte)((ulong)uVar30 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar38 >> 0x20)
                                                                      ^ (byte)((ulong)uVar30 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar38
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar30
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar38 >> 0x10) ^
                                                  (byte)((ulong)uVar30 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar38 >> 8) ^
                                                           (byte)((ulong)uVar30 >> 8),
                                                           (byte)uVar38 ^ (byte)uVar30)))))));
                    puVar28[-4] = CONCAT17((byte)((ulong)uVar37 >> 0x38) ^
                                           (byte)((ulong)uVar14 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar37 >> 0x30) ^
                                                    (byte)((ulong)uVar14 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar37 >> 0x28) ^
                                                             (byte)((ulong)uVar14 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar37 >> 0x20)
                                                                      ^ (byte)((ulong)uVar14 >> 0x20
/* chat: discord.gg/sdkhDjTex */
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar37
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar14
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar37 >> 0x10) ^
                                                  (byte)((ulong)uVar14 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar37 >> 8) ^
                                                           (byte)((ulong)uVar14 >> 8),
                                                           (byte)uVar37 ^ (byte)uVar14)))))));
                    puVar28[-1] = CONCAT17((byte)((ulong)uVar40 >> 0x38) ^
                                           (byte)((ulong)uVar32 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar40 >> 0x30) ^
                                                    (byte)((ulong)uVar32 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar40 >> 0x28) ^
                                                             (byte)((ulong)uVar32 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar40 >> 0x20)
                                                                      ^ (byte)((ulong)uVar32 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar40
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar32
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar40 >> 0x10) ^
                                                  (byte)((ulong)uVar32 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar40 >> 8) ^
                                                           (byte)((ulong)uVar32 >> 8),
// WM - watermarked copy - do not remove
                                                           (byte)uVar40 ^ (byte)uVar32)))))));
                    puVar28[-2] = CONCAT17((byte)((ulong)uVar39 >> 0x38) ^
                                           (byte)((ulong)uVar31 >> 0x38),
                                           CONCAT16((byte)((ulong)uVar39 >> 0x30) ^
                                                    (byte)((ulong)uVar31 >> 0x30),
                                                    CONCAT15((byte)((ulong)uVar39 >> 0x28) ^
                                                             (byte)((ulong)uVar31 >> 0x28),
                                                             CONCAT14((byte)((ulong)uVar39 >> 0x20)
                                                                      ^ (byte)((ulong)uVar31 >> 0x20
                                                                              ),
                                                                      CONCAT13((byte)((ulong)uVar39
                                                                                     >> 0x18) ^
                                                                               (byte)((ulong)uVar31
                                                                                     >> 0x18),
                                                                               CONCAT12((byte)((
                                                  ulong)uVar39 >> 0x10) ^
                                                  (byte)((ulong)uVar31 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar39 >> 8) ^
                                                           (byte)((ulong)uVar31 >> 8),
                                                           (byte)uVar39 ^ (byte)uVar31)))))));
                    puVar28[1] = CONCAT17((byte)((ulong)uVar42 >> 0x38) ^
                                          (byte)((ulong)uVar34 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar42 >> 0x30) ^
                                                   (byte)((ulong)uVar34 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar42 >> 0x28) ^
                                                            (byte)((ulong)uVar34 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar42 >> 0x20) ^
                                                                     (byte)((ulong)uVar34 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar42
                                                                                    >> 0x18) ^
/* more drops soon - github.com/pengussy */
                                                                              (byte)((ulong)uVar34
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar42 >> 0x10) ^ (byte)((ulong)uVar34 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar42 >> 8) ^
                                                           (byte)((ulong)uVar34 >> 8),
                                                           (byte)uVar42 ^ (byte)uVar34)))))));
                    *puVar28 = CONCAT17((byte)((ulong)uVar41 >> 0x38) ^
                                        (byte)((ulong)uVar33 >> 0x38),
                                        CONCAT16((byte)((ulong)uVar41 >> 0x30) ^
                                                 (byte)((ulong)uVar33 >> 0x30),
                                                 CONCAT15((byte)((ulong)uVar41 >> 0x28) ^
                                                          (byte)((ulong)uVar33 >> 0x28),
                                                          CONCAT14((byte)((ulong)uVar41 >> 0x20) ^
                                                                   (byte)((ulong)uVar33 >> 0x20),
                                                                   CONCAT13((byte)((ulong)uVar41 >>
                                                                                  0x18) ^
                                                                            (byte)((ulong)uVar33 >>
                                                                                  0x18),
                                                                            CONCAT12((byte)((ulong)
                                                  uVar41 >> 0x10) ^ (byte)((ulong)uVar33 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar41 >> 8) ^
                                                           (byte)((ulong)uVar33 >> 8),
                                                           (byte)uVar41 ^ (byte)uVar33)))))));
                    puVar28[3] = CONCAT17((byte)((ulong)uVar44 >> 0x38) ^
                                          (byte)((ulong)uVar36 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar44 >> 0x30) ^
                                                   (byte)((ulong)uVar36 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar44 >> 0x28) ^
                                                            (byte)((ulong)uVar36 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar44 >> 0x20) ^
                                                                     (byte)((ulong)uVar36 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar44
/* no support for modified copies */
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar36
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar44 >> 0x10) ^ (byte)((ulong)uVar36 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar44 >> 8) ^
                                                           (byte)((ulong)uVar36 >> 8),
                                                           (byte)uVar44 ^ (byte)uVar36)))))));
                    puVar28[2] = CONCAT17((byte)((ulong)uVar43 >> 0x38) ^
                                          (byte)((ulong)uVar35 >> 0x38),
                                          CONCAT16((byte)((ulong)uVar43 >> 0x30) ^
                                                   (byte)((ulong)uVar35 >> 0x30),
                                                   CONCAT15((byte)((ulong)uVar43 >> 0x28) ^
                                                            (byte)((ulong)uVar35 >> 0x28),
                                                            CONCAT14((byte)((ulong)uVar43 >> 0x20) ^
                                                                     (byte)((ulong)uVar35 >> 0x20),
                                                                     CONCAT13((byte)((ulong)uVar43
                                                                                    >> 0x18) ^
                                                                              (byte)((ulong)uVar35
                                                                                    >> 0x18),
                                                                              CONCAT12((byte)((ulong
                                                  )uVar43 >> 0x10) ^ (byte)((ulong)uVar35 >> 0x10),
                                                  CONCAT11((byte)((ulong)uVar43 >> 8) ^
                                                           (byte)((ulong)uVar35 >> 8),
                                                           (byte)uVar43 ^ (byte)uVar35)))))));
                    uVar25 = uVar25 - 8;
                    puVar16 = puVar16 + 8;
                    puVar22 = puVar22 + 8;
                    puVar28 = puVar28 + 8;
                  } while (uVar25 != 0);
// stripping the watermark breaks the license
                  if (uVar23 == uVar15) goto LAB_003f8198;
                }
              }
              lVar26 = uVar15 - uVar23;
              lVar24 = uVar23 * 8;
              puVar17 = (ulong *)(lVar13 + lVar24);
              puVar19 = (ulong *)(lVar18 + lVar24);
              puVar21 = (ulong *)(lVar20 + lVar24);
              do {
                *puVar21 = *puVar19 ^ *puVar17;
                lVar26 = lVar26 + -1;
                puVar17 = puVar17 + 1;
                puVar19 = puVar19 + 1;
                puVar21 = puVar21 + 1;
              } while (lVar26 != 0);
            }
LAB_003f8198:
            uVar29 = *(uint *)(plVar11 + 1);
            if ((int)uVar15 < (int)uVar29) {
              lVar13 = *plVar11;
              lVar18 = *plVar8;
              uVar23 = uVar29 - uVar15;
              if ((uVar23 < 8) || ((ulong)(lVar18 - lVar13) < 0x40)) {
                uVar25 = uVar15;
              }
              else {
                uVar27 = uVar23 & 0xfffffffffffffff8;
/* wm:reversing this took months of machine time */
                uVar25 = uVar27 + uVar15;
                puVar16 = (undefined8 *)(lVar13 + uVar15 * 8 + 0x20);
                puVar22 = (undefined8 *)(lVar18 + uVar15 * 8 + 0x20);
                uVar15 = uVar27;
                do {
                  uVar14 = puVar16[-4];
                  uVar31 = puVar16[-1];
                  uVar30 = puVar16[-2];
                  uVar33 = puVar16[1];
                  uVar32 = *puVar16;
                  uVar35 = puVar16[3];
                  uVar34 = puVar16[2];
                  puVar22[-3] = puVar16[-3];
                  puVar22[-4] = uVar14;
                  puVar22[-1] = uVar31;
                  puVar22[-2] = uVar30;
                  puVar22[1] = uVar33;
                  *puVar22 = uVar32;
                  puVar22[3] = uVar35;
                  puVar22[2] = uVar34;
                  uVar15 = uVar15 - 8;
                  puVar16 = puVar16 + 8;
                  puVar22 = puVar22 + 8;
                } while (uVar15 != 0);
                if (uVar23 == uVar27) goto LAB_003f80c8;
              }
              lVar20 = uVar29 - uVar25;
              puVar16 = (undefined8 *)(lVar13 + uVar25 * 8);
              puVar22 = (undefined8 *)(lVar18 + uVar25 * 8);
              do {
/* wm:no support for modified copies */
                *puVar22 = *puVar16;
                lVar20 = lVar20 + -1;
                puVar16 = puVar16 + 1;
                puVar22 = puVar22 + 1;
              } while (lVar20 != 0);
            }
LAB_003f80c8:
            *(uint *)(plVar8 + 1) = uVar29;
            func_0x019e8c64(plVar8);
            bVar4 = iVar5 < (*(int *)param_3 + -1) / 2;
            iVar5 = iVar5 + 1;
          } while (bVar4);
        }
LAB_003f8028:
        iVar5 = func_0x003f695c(plVar9,plVar8,param_3,param_4);
        if ((iVar5 != 0) && (iVar5 = func_0x003f5900(plVar9,plVar8,plVar9), iVar5 != 0)) {
          iVar5 = func_0x003f9044(plVar9,plVar7);
          if (iVar5 == 0) {
            lVar13 = func_0x019e8960(param_1,plVar8);
            bVar4 = lVar13 != 0;
            goto LAB_003f8094;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_gf2m.c"
                          ,0x433,"BN_GF2m_mod_solve_quad_arr");
          uVar14 = 0x74;
          goto LAB_003f8088;
        }
      }
    }
  }
LAB_003f8090:
  bVar4 = false;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
LAB_003f8094:
  func_0x003f19bc(param_4);
  return bVar4;
}

