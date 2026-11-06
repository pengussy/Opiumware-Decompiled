/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x32f8a8:e542ce508c
 */

undefined8 FUN_0032f8a8(undefined8 param_1,long param_2)

{
  ushort *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  ulong uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  uint uVar24;
  byte *pbVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined8 uStack_90;
  int iStack_88;
  int iStack_84;
  undefined1 auStack_80 [16];
  long lStack_70;
  undefined8 uStack_68;
  
  lVar10 = func_0x002fd6d8(0xa8);
  auVar7._8_8_ = auStack_80._8_8_;
  auVar7._0_8_ = auStack_80._0_8_;
  auVar6._8_8_ = auStack_80._8_8_;
  auVar6._0_8_ = auStack_80._0_8_;
  auVar32._8_8_ = auStack_80._8_8_;
  auVar32._0_8_ = auStack_80._0_8_;
  pbVar25 = *(byte **)(param_2 + 0x28);
  iVar23 = *(int *)(param_2 + 100);
  bVar3 = *pbVar25;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  if (bVar3 < 0x4f) {
    if (bVar3 == 0) {
      if (pbVar25[1] == 1) goto LAB_0032f954;
    }
    else if ((bVar3 == 0x31) && (pbVar25[1] == 0)) {
LAB_0032f954:
      if ((pbVar25[2] == 0) && (pbVar25[3] == 0)) {
LAB_0032f9f8:
        uVar27 = -(uint)(iVar23 != 0);
LAB_0032fa00:
        if (-1 < (int)uVar27) {
          *(long *)(lVar10 + 0x40) = 0;
          *(byte **)(lVar10 + 8) = pbVar25;
          *(uint *)(lVar10 + 0x10) = uVar27;
          *(undefined8 *)(lVar10 + 0x48) = 0;
          uVar26 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                   (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
          uVar18 = (ulong)uVar26;
          if (uVar26 == 0) {
            uVar26 = 0;
            uVar24 = 0;
          }
          else {
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
            uVar22 = uVar18;
            do {
              if ((((char)puVar19[-2] == 'c') && (*(char *)((long)puVar19 + -7) == 'm')) &&
                 ((*(char *)((long)puVar19 + -6) == 'a' && (*(char *)((long)puVar19 + -5) == 'p'))))
              {
                uVar26 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
/* WM - proprietary - see LICENSE - do not sell */
                uVar26 = uVar26 >> 0x10 | uVar26 << 0x10;
                goto LAB_0032fac0;
              }
              puVar19 = puVar19 + 4;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
            uVar26 = 0;
LAB_0032fac0:
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
            do {
              if (((((char)puVar19[-2] == 'l') && (*(char *)((long)puVar19 + -7) == 'o')) &&
                  (*(char *)((long)puVar19 + -6) == 'c')) && (*(char *)((long)puVar19 + -5) == 'a'))
              {
                uVar24 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
                break;
              }
              puVar19 = puVar19 + 4;
              uVar18 = uVar18 - 1;
              uVar24 = 0;
            } while (uVar18 != 0);
          }
          *(uint *)(lVar10 + 0x18) = uVar24;
          uVar28 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                   (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
          uVar18 = (ulong)uVar28;
          if (uVar28 != 0) {
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
            do {
              if ((((char)puVar19[-2] == 'h') && (*(char *)((long)puVar19 + -7) == 'e')) &&
                 ((*(char *)((long)puVar19 + -6) == 'a' && (*(char *)((long)puVar19 + -5) == 'd'))))
              {
                uVar28 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                uVar28 = uVar28 >> 0x10 | uVar28 << 0x10;
                goto LAB_0032fb84;
              }
              puVar19 = puVar19 + 4;
              uVar18 = uVar18 - 1;
/*  found on a paste site? it was re-uploaded illegally  */
            } while (uVar18 != 0);
          }
          uVar28 = 0;
LAB_0032fb84:
          *(uint *)(lVar10 + 0x1c) = uVar28;
          uVar29 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                   (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
          uVar18 = (ulong)uVar29;
          uVar20 = 0;
          if (uVar29 != 0) {
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
            do {
              if ((((char)puVar19[-2] == 'g') && (*(char *)((long)puVar19 + -7) == 'l')) &&
                 ((*(char *)((long)puVar19 + -6) == 'y' && (*(char *)((long)puVar19 + -5) == 'f'))))
              {
                uVar20 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                uVar20 = uVar20 >> 0x10 | uVar20 << 0x10;
                break;
              }
              puVar19 = puVar19 + 4;
              uVar18 = uVar18 - 1;
              uVar20 = 0;
            } while (uVar18 != 0);
          }
          *(uint *)(lVar10 + 0x20) = uVar20;
          uVar29 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                   (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
          uVar18 = (ulong)uVar29;
          if (uVar29 != 0) {
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
/* wm:keep the notice, keep the source honest */
            do {
              if (((((char)puVar19[-2] == 'h') && (*(char *)((long)puVar19 + -7) == 'h')) &&
                  (*(char *)((long)puVar19 + -6) == 'e')) && (*(char *)((long)puVar19 + -5) == 'a'))
              {
                uVar29 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                uVar29 = uVar29 >> 0x10 | uVar29 << 0x10;
                goto LAB_0032fc54;
              }
              puVar19 = puVar19 + 4;
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          uVar29 = 0;
LAB_0032fc54:
          *(uint *)(lVar10 + 0x24) = uVar29;
          uVar17 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                   (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
          uVar18 = (ulong)uVar17;
          uVar16 = 0;
          if (uVar17 != 0) {
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
            do {
              if ((((char)puVar19[-2] == 'h') && (*(char *)((long)puVar19 + -7) == 'm')) &&
                 ((*(char *)((long)puVar19 + -6) == 't' && (*(char *)((long)puVar19 + -5) == 'x'))))
              {
                uVar16 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
/* WM - watermarked copy - do not remove */
                uVar16 = uVar16 >> 0x10 | uVar16 << 0x10;
                break;
              }
              puVar19 = puVar19 + 4;
              uVar18 = uVar18 - 1;
              uVar16 = 0;
            } while (uVar18 != 0);
          }
          *(uint *)(lVar10 + 0x28) = uVar16;
          uVar15 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                   (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
          uVar18 = (ulong)uVar15;
          uVar17 = 0;
          if (uVar15 != 0) {
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
            do {
              if ((((char)puVar19[-2] == 'k') && (*(char *)((long)puVar19 + -7) == 'e')) &&
                 ((*(char *)((long)puVar19 + -6) == 'r' && (*(char *)((long)puVar19 + -5) == 'n'))))
              {
                uVar17 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
                break;
              }
              puVar19 = puVar19 + 4;
// watermarked copy - do not remove
              uVar18 = uVar18 - 1;
              uVar17 = 0;
            } while (uVar18 != 0);
          }
          *(uint *)(lVar10 + 0x2c) = uVar17;
          uVar15 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                   (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
          uVar18 = (ulong)uVar15;
          uVar17 = 0;
          if (uVar15 != 0) {
            puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
            do {
              if (((((char)puVar19[-2] == 'G') && (*(char *)((long)puVar19 + -7) == 'P')) &&
                  (*(char *)((long)puVar19 + -6) == 'O')) && (*(char *)((long)puVar19 + -5) == 'S'))
              {
                uVar17 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                uVar17 = uVar17 >> 0x10 | uVar17 << 0x10;
                break;
              }
              puVar19 = puVar19 + 4;
              uVar18 = uVar18 - 1;
              uVar17 = 0;
            } while (uVar18 != 0);
          }
          *(uint *)(lVar10 + 0x30) = uVar17;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
          auStack_80 = auVar7;
          if (((uVar26 == 0) || (uVar28 == 0)) || ((uVar29 == 0 || (uVar16 == 0)))) {
LAB_0033054c:
            func_0x002fda6c();
          }
          else {
            if (uVar20 != 0) {
              if (uVar24 != 0) {
                uVar24 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                         (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
joined_r0x00330414:
                if (uVar24 != 0) {
                  uVar18 = (ulong)uVar24;
                  puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
                  do {
                    if (((((char)puVar19[-2] == 'm') && (*(char *)((long)puVar19 + -7) == 'a')) &&
                        (*(char *)((long)puVar19 + -6) == 'x')) &&
                       (*(char *)((long)puVar19 + -5) == 'p')) {
                      uVar27 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
                      uVar27 = uVar27 >> 0x10 | uVar27 << 0x10;
                      if (uVar27 != 0) {
                        uVar27 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                                 (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
                        goto LAB_0033041c;
                      }
                      break;
                    }
                    puVar19 = puVar19 + 4;
                    uVar18 = uVar18 - 1;
/* wm:reversing this took months of machine time */
                  } while (uVar18 != 0);
                }
                uVar27 = 0xffff;
LAB_0033041c:
                *(uint *)(lVar10 + 0x14) = uVar27;
                *(undefined4 *)(lVar10 + 0x34) = 0xffffffff;
                uVar27 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar26 + 2) >> 8) |
                         (*(ushort *)(pbVar25 + (ulong)uVar26 + 2) & 0xff00ff) << 8;
                uVar18 = (ulong)uVar27;
                *(undefined4 *)(lVar10 + 0x38) = 0;
                auStack_80 = auVar7;
                if (uVar27 != 0) {
                  iVar23 = 0;
                  uVar27 = uVar26 + 4;
                  do {
                    puVar1 = (ushort *)(pbVar25 + uVar27);
                    uVar4 = *puVar1 >> 8 | *puVar1 << 8;
                    if ((uVar4 == 0) ||
                       ((uVar4 == 3 &&
                        (uVar4 = puVar1[1] >> 8 | puVar1[1] << 8, uVar4 == 10 || uVar4 == 1)))) {
                      uVar24 = (*(uint *)(puVar1 + 2) & 0xff00ff00) >> 8 |
                               (*(uint *)(puVar1 + 2) & 0xff00ff) << 8;
                      iVar23 = (uVar24 >> 0x10 | uVar24 << 0x10) + uVar26;
                      *(int *)(lVar10 + 0x38) = iVar23;
                    }
                    uVar27 = uVar27 + 8;
                    uVar18 = uVar18 - 1;
                  } while (uVar18 != 0);
                  if (iVar23 != 0) {
                    *(uint *)(lVar10 + 0x3c) =
/* no support for modified copies - github.com/pengussy */
                         (uint)(*(ushort *)(pbVar25 + (long)(int)uVar28 + 0x32) >> 8) |
                         (*(ushort *)(pbVar25 + (long)(int)uVar28 + 0x32) & 0xff00ff) << 8;
                    *(long *)(param_2 + 0x90) = lVar10;
                    fVar30 = *(float *)(**(long **)(*(long *)(param_2 + 0x80) + 0x28) + 0x3c);
                    if ((*(char *)(param_2 + 0x35) == '\x01') && (*(float *)(param_2 + 0x3c) == 0.0)
                       ) {
                      *(float *)(param_2 + 0x3c) = fVar30;
                    }
                    fVar31 = 1.0 / (float)(int)(((int)(short)((ushort)pbVar25[(long)(int)uVar29 + 4]
                                                             << 8) |
                                                (uint)pbVar25[(long)(int)uVar29 + 5]) -
                                               ((int)(short)((ushort)pbVar25[(long)(int)uVar29 + 6]
                                                            << 8) |
                                               (uint)pbVar25[(long)(int)uVar29 + 7]));
                    if (*(char *)(param_2 + 0x35) != '\0') {
                      fVar5 = fVar31;
                      if (fVar30 != 0.0) {
                        fVar5 = fVar31 * (*(float *)(param_2 + 0x3c) / fVar30);
                      }
                      if (*(float *)(param_2 + 0x3c) != 0.0) {
                        fVar31 = fVar5;
                      }
                    }
                    *(float *)(lVar10 + 0xa0) = *(float *)(param_2 + 0x74) * fVar31;
                    return 1;
                  }
                  goto LAB_00330548;
                }
              }
              goto LAB_0033054c;
            }
            iStack_88 = 0;
            iStack_84 = 2;
            uStack_90 = 0;
            uVar24 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
// reversing this took months of machine time
                     (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
            uVar18 = (ulong)uVar24;
            auStack_80 = auVar32;
            if (uVar24 != 0) {
              puVar19 = (uint *)(pbVar25 + (ulong)(uVar27 + 0xc) + 8);
LAB_0032fe44:
              if ((((char)puVar19[-2] != 'C') || (*(char *)((long)puVar19 + -7) != 'F')) ||
                 ((*(char *)((long)puVar19 + -6) != 'F' || (*(char *)((long)puVar19 + -5) != ' '))))
              goto LAB_0032fe38;
              uVar24 = (*puVar19 & 0xff00ff00) >> 8 | (*puVar19 & 0xff00ff) << 8;
              uVar24 = uVar24 >> 0x10 | uVar24 << 0x10;
              auStack_80 = auVar6;
              if (uVar24 == 0) goto LAB_00330548;
              *(undefined8 *)(lVar10 + 0x88) = 0;
              *(undefined8 *)(lVar10 + 0x80) = 0;
              *(undefined8 *)(lVar10 + 0x98) = 0;
              *(undefined8 *)(lVar10 + 0x90) = 0;
              *(byte **)(lVar10 + 0x40) = pbVar25 + uVar24;
              *(undefined8 *)(lVar10 + 0x48) = 0x2000000000000000;
              lStack_70 = *(long *)(lVar10 + 0x40);
              uStack_68._0_4_ = (int)*(undefined8 *)(lVar10 + 0x48);
              uStack_68._4_4_ = (uint)((ulong)*(undefined8 *)(lVar10 + 0x48) >> 0x20);
              uVar20 = uStack_68._4_4_;
              uVar24 = (int)uStack_68 + 2U;
/* watermarked copy - do not remove */
              if ((int)uStack_68._4_4_ <= (int)((int)uStack_68 + 2U)) {
                uVar24 = uStack_68._4_4_;
              }
              uVar16 = uStack_68._4_4_;
              if (-3 < (int)uStack_68) {
                uVar16 = uVar24;
              }
              if ((int)uVar16 < (int)uStack_68._4_4_) {
                uVar24 = (uint)*(byte *)(lStack_70 + (int)uVar16);
              }
              else {
                uVar24 = 0;
              }
              if ((int)uVar24 < (int)uStack_68._4_4_) {
                uVar16 = (uint)*(byte *)(lStack_70 + (int)uVar24) << 8;
                uVar24 = uVar24 + 1;
              }
/* wm:proprietary - see LICENSE - do not sell */
              else {
                uVar16 = 0;
                uVar24 = uStack_68._4_4_;
              }
              if ((int)uVar24 < (int)uStack_68._4_4_) {
                uVar17 = (uint)*(byte *)(lStack_70 + (int)uVar24);
                uVar24 = uVar24 + 1;
              }
              else {
                uVar17 = 0;
              }
              if ((uVar17 | uVar16) != 0) {
                if ((int)uVar24 < (int)uStack_68._4_4_) {
                  uVar15 = (uint)*(byte *)(lStack_70 + (int)uVar24);
                  uVar24 = uVar24 + 1;
                }
                else {
                  uVar15 = 0;
                }
                uVar24 = uVar24 + uVar15 * (uVar17 | uVar16);
                uVar16 = uVar24;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                if ((int)uStack_68._4_4_ <= (int)uVar24) {
                  uVar16 = uStack_68._4_4_;
                }
                uVar17 = uStack_68._4_4_;
                if (-1 < (int)uVar24) {
                  uVar17 = uVar16;
                }
                if (uVar15 == 0) {
                  iVar23 = -1;
                }
                else {
                  uVar24 = 0;
                  do {
                    if ((int)uVar17 < (int)uStack_68._4_4_) {
                      lVar11 = (long)(int)uVar17;
                      uVar17 = uVar17 + 1;
                      uVar24 = (uint)*(byte *)(lStack_70 + lVar11) | uVar24 << 8;
                    }
                    else {
/* stripping the watermark breaks the license */
                      uVar24 = uVar24 << 8;
                    }
                    uVar15 = uVar15 - 1;
                  } while (uVar15 != 0);
                  iVar23 = uVar24 - 1;
                }
                uVar17 = iVar23 + uVar17;
                uVar16 = uVar17;
                if ((int)uStack_68._4_4_ <= (int)uVar17) {
                  uVar16 = uStack_68._4_4_;
                }
                uVar24 = uStack_68._4_4_;
                if (-1 < (int)uVar17) {
                  uVar24 = uVar16;
                }
              }
              if ((int)uVar24 < (int)uStack_68._4_4_) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                uVar17 = (uint)*(byte *)(lStack_70 + (int)uVar24) << 8;
                uVar18 = (ulong)(uVar24 + 1);
                uVar16 = uVar24 + 1;
              }
              else {
                uVar17 = 0;
                uVar18 = (ulong)uVar24;
                uVar16 = uVar24;
              }
              iVar23 = (int)uVar18;
              if (iVar23 < (int)uStack_68._4_4_) {
                uVar15 = (uint)*(byte *)(lStack_70 + iVar23);
                uVar16 = iVar23 + 1;
                uVar18 = (ulong)uVar16;
              }
              else {
                uVar15 = 0;
              }
              iVar23 = (int)uVar18;
              if ((uVar15 | uVar17) != 0) {
                if (iVar23 < (int)uStack_68._4_4_) {
                  uVar16 = (uint)*(byte *)(lStack_70 + iVar23);
                  iVar23 = iVar23 + 1;
                }
                else {
// WM - found on a paste site? it was re-uploaded illegally
                  uVar16 = 0;
                }
                uVar15 = iVar23 + uVar16 * (uVar15 | uVar17);
                uVar17 = uVar15;
                if ((int)uStack_68._4_4_ <= (int)uVar15) {
                  uVar17 = uStack_68._4_4_;
                }
                uVar21 = uStack_68._4_4_;
                if (-1 < (int)uVar15) {
                  uVar21 = uVar17;
                }
                if (uVar16 == 0) {
                  iVar23 = -1;
                }
                else {
                  uVar17 = 0;
                  do {
                    while ((int)uStack_68._4_4_ <= (int)uVar21) {
                      uVar17 = uVar17 << 8;
                      uVar16 = uVar16 - 1;
                      if (uVar16 == 0) goto LAB_0033007c;
                    }
                    lVar11 = (long)(int)uVar21;
                    uVar21 = uVar21 + 1;
                    uVar17 = (uint)*(byte *)(lStack_70 + lVar11) | uVar17 << 8;
                    uVar16 = uVar16 - 1;
/* do not claim this as your own - github.com/pengussy */
                  } while (uVar16 != 0);
LAB_0033007c:
                  iVar23 = uVar17 - 1;
                }
                uVar21 = iVar23 + uVar21;
                uVar17 = uVar21;
                if ((int)uStack_68._4_4_ <= (int)uVar21) {
                  uVar17 = uStack_68._4_4_;
                }
                uVar16 = uStack_68._4_4_;
                if (-1 < (int)uVar21) {
                  uVar16 = uVar17;
                }
                uVar18 = (ulong)uVar16;
              }
              uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
              iVar23 = (int)uVar18;
              lVar11 = 0;
              if ((int)(iVar23 - uVar24 | uVar24) < 0) {
                lVar13 = 0;
              }
/*  no support for modified copies  */
              else {
                lVar13 = 0;
                if (((int)uVar24 <= (int)uStack_68._4_4_) && (iVar23 <= (int)uStack_68._4_4_)) {
                  lVar11 = lStack_70 + (ulong)uVar24;
                  lVar13 = (ulong)(iVar23 - uVar24) << 0x20;
                }
              }
              auStack_80 = func_0x00334c2c(lVar11,lVar13,0);
              if (iVar23 < (int)uVar20) {
                uVar18 = (ulong)(iVar23 + 1U);
                uStack_68 = CONCAT44(uStack_68._4_4_,iVar23 + 1U);
                uVar24 = (uint)*(byte *)(lStack_70 + iVar23) << 8;
              }
              else {
                uVar24 = 0;
              }
              iVar23 = (int)uVar18;
              if (iVar23 < (int)uVar20) {
                uVar16 = (uint)*(byte *)(lStack_70 + iVar23);
                uVar18 = (ulong)(iVar23 + 1U);
                uStack_68 = CONCAT44(uStack_68._4_4_,iVar23 + 1U);
              }
// origin: github.com/pengussy
              else {
                uVar16 = 0;
              }
              iVar23 = (int)uVar18;
              if ((uVar16 | uVar24) != 0) {
                if (iVar23 < (int)uVar20) {
                  uVar17 = (uint)*(byte *)(lStack_70 + iVar23);
                  iVar23 = iVar23 + 1;
                }
                else {
                  uVar17 = 0;
                }
                uVar16 = iVar23 + uVar17 * (uVar16 | uVar24);
                uVar24 = uVar16;
                if ((int)uVar20 <= (int)uVar16) {
                  uVar24 = uVar20;
                }
                uVar15 = uVar20;
                if (-1 < (int)uVar16) {
                  uVar15 = uVar24;
                }
                if (uVar17 == 0) {
                  iVar23 = -1;
                }
                else {
                  uVar24 = 0;
                  do {
                    while ((int)uVar20 <= (int)uVar15) {
                      uVar24 = uVar24 << 8;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) goto LAB_003301ac;
                    }
                    lVar11 = (long)(int)uVar15;
                    uVar15 = uVar15 + 1;
                    uVar24 = (uint)*(byte *)(lStack_70 + lVar11) | uVar24 << 8;
                    uVar17 = uVar17 - 1;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  } while (uVar17 != 0);
LAB_003301ac:
                  iVar23 = uVar24 - 1;
                }
                uVar15 = iVar23 + uVar15;
                uVar24 = uVar15;
                if ((int)uVar20 <= (int)uVar15) {
                  uVar24 = uVar20;
                }
                uVar16 = uVar20;
                if (-1 < (int)uVar15) {
                  uVar16 = uVar24;
                }
                uVar18 = (ulong)uVar16;
                uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
              }
              uVar24 = (uint)uVar18;
              if ((int)uVar24 < (int)uVar20) {
                uStack_68 = CONCAT44(uStack_68._4_4_,uVar24 + 1);
                uVar17 = (uint)*(byte *)(lStack_70 + (int)uVar24) << 8;
                uVar16 = uVar24 + 1;
              }
              else {
                uVar17 = 0;
                uVar16 = uVar24;
              }
              if ((int)uVar16 < (int)uVar20) {
                uVar15 = (uint)*(byte *)(lStack_70 + (int)uVar16);
                uVar16 = uVar16 + 1;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
              }
              else {
                uVar15 = 0;
              }
              if ((uVar15 | uVar17) != 0) {
                if ((int)uVar16 < (int)uVar20) {
                  uVar21 = (uint)*(byte *)(lStack_70 + (int)uVar16);
                  uVar16 = uVar16 + 1;
                }
                else {
                  uVar21 = 0;
                }
                uVar16 = uVar16 + uVar21 * (uVar15 | uVar17);
                uVar17 = uVar16;
                if ((int)uVar20 <= (int)uVar16) {
                  uVar17 = uVar20;
                }
                uVar15 = uVar20;
                if (-1 < (int)uVar16) {
                  uVar15 = uVar17;
                }
                if (uVar21 == 0) {
                  iVar23 = -1;
                }
                else {
                  uVar16 = 0;
                  do {
                    while ((int)uVar20 <= (int)uVar15) {
                      uVar16 = uVar16 << 8;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                      uVar21 = uVar21 - 1;
                      if (uVar21 == 0) goto LAB_00330294;
                    }
                    lVar11 = (long)(int)uVar15;
                    uVar15 = uVar15 + 1;
                    uVar16 = (uint)*(byte *)(lStack_70 + lVar11) | uVar16 << 8;
                    uVar21 = uVar21 - 1;
                  } while (uVar21 != 0);
LAB_00330294:
                  iVar23 = uVar16 - 1;
                }
                uVar15 = iVar23 + uVar15;
                uVar17 = uVar15;
                if ((int)uVar20 <= (int)uVar15) {
                  uVar17 = uVar20;
                }
                uVar16 = uVar20;
                if (-1 < (int)uVar15) {
                  uVar16 = uVar17;
                }
                uStack_68 = CONCAT44(uStack_68._4_4_,uVar16);
              }
              if ((int)(uVar16 - uVar24 | uVar24) < 0) {
                lVar11 = 0;
                lVar13 = 0;
              }
              else {
                lVar11 = 0;
                lVar13 = 0;
                if (((int)uVar24 <= (int)uVar20) && ((int)uVar16 <= (int)uVar20)) {
                  lVar11 = lStack_70 + uVar18;
                  lVar13 = (ulong)(uVar16 - uVar24) << 0x20;
                }
              }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
              *(long *)(lVar10 + 0x60) = lVar11;
              *(long *)(lVar10 + 0x68) = lVar13;
              func_0x00334d90(auStack_80,0x11,1,&iStack_88);
              func_0x00334d90(auStack_80,0x106,1,&iStack_84);
              func_0x00334d90(auStack_80,0x124,1,(long)&uStack_90 + 4);
              func_0x00334d90(auStack_80,0x125,1,&uStack_90);
              uVar8 = uStack_68;
              auVar32 = func_0x00334fa8(lStack_70,uStack_68,auStack_80._0_8_,auStack_80._8_8_);
              iVar23 = iStack_88;
              *(undefined1 (*) [16])(lVar10 + 0x70) = auVar32;
              if ((iStack_84 == 2) && (iStack_88 != 0)) {
                if (uStack_90._4_4_ == 0) {
                  iVar14 = (int)((ulong)uVar8 >> 0x20);
                }
                else {
                  uVar24 = (uint)uStack_90;
                  uVar18 = uStack_90 & 0xffffffff;
                  if ((uint)uStack_90 == 0) goto LAB_00330548;
                  uVar16 = uStack_90._4_4_;
                  if ((int)uVar20 <= (int)uStack_90._4_4_) {
// do not claim this as your own
                    uVar16 = uVar20;
                  }
                  if (-1 < (long)uStack_90) {
                    uVar20 = uVar16;
                  }
                  uStack_68 = CONCAT44(uStack_68._4_4_,uVar20);
                  auVar32 = func_0x00334ac0(&lStack_70);
                  *(undefined1 (*) [16])(lVar10 + 0x80) = auVar32;
                  bVar9 = -1 < (int)(uStack_68._4_4_ - uVar24 | uVar24);
                  lVar11 = 0;
                  if ((int)uVar24 <= (int)uStack_68._4_4_ && bVar9) {
                    lVar11 = lStack_70 + uVar18;
                  }
                  lVar13 = 0;
                  if ((int)uVar24 <= (int)uStack_68._4_4_ && bVar9) {
                    lVar13 = (ulong)(uStack_68._4_4_ - uVar24) << 0x20;
                  }
                  *(long *)(lVar10 + 0x90) = lVar11;
                  *(long *)(lVar10 + 0x98) = lVar13;
                  iVar14 = uStack_68._4_4_;
                }
                iVar2 = iVar23;
                if (iVar14 <= iVar23) {
/*  reversing this took months of machine time  */
                  iVar2 = iVar14;
                }
                if (-1 < iVar23) {
                  iVar14 = iVar2;
                }
                uStack_68 = CONCAT44(uStack_68._4_4_,iVar14);
                auVar32 = func_0x00334ac0(&lStack_70);
                *(undefined1 (*) [16])(lVar10 + 0x50) = auVar32;
                uVar24 = (uint)(*(ushort *)(pbVar25 + (ulong)uVar27 + 4) >> 8) |
                         (*(ushort *)(pbVar25 + (ulong)uVar27 + 4) & 0xff00ff) << 8;
                auVar7 = auStack_80;
                goto joined_r0x00330414;
              }
            }
LAB_00330548:
            if (lVar10 != 0) goto LAB_0033054c;
          }
          pcVar12 = 
          "stbtt_InitFont(): failed to parse FontData. It is correct and complete? Check FontDataSize."
          ;
          goto LAB_0032fa4c;
        }
      }
    }
  }
  else if (bVar3 == 0x4f) {
    if (((pbVar25[1] == 0x54) && (pbVar25[2] == 0x54)) && (pbVar25[3] == 0x4f)) goto LAB_0032f9f8;
  }
  else if (bVar3 == 0x74) {
    bVar3 = pbVar25[1];
    if (bVar3 == 0x72) {
      if ((pbVar25[2] != 0x75) || (pbVar25[3] != 0x65)) goto LAB_0032fa3c;
      goto LAB_0032f9f8;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    }
    if (bVar3 == 0x74) {
      if ((((pbVar25[2] == 99) && (pbVar25[3] == 0x66)) &&
          ((uVar27 = (*(uint *)(pbVar25 + 4) & 0xff00ff00) >> 8 |
                     (*(uint *)(pbVar25 + 4) & 0xff00ff) << 8,
           uVar27 = uVar27 >> 0x10 | uVar27 << 0x10, uVar27 == 0x20000 || (uVar27 == 0x10000)))) &&
         (uVar27 = (*(uint *)(pbVar25 + 8) & 0xff00ff00) >> 8 |
                   (*(uint *)(pbVar25 + 8) & 0xff00ff) << 8,
         iVar23 < (int)(uVar27 >> 0x10 | uVar27 << 0x10))) {
        uVar27 = (*(uint *)(pbVar25 + (long)iVar23 * 4 + 0xc) & 0xff00ff00) >> 8 |
                 (*(uint *)(pbVar25 + (long)iVar23 * 4 + 0xc) & 0xff00ff) << 8;
        uVar27 = uVar27 >> 0x10 | uVar27 << 0x10;
        goto LAB_0032fa00;
      }
    }
    else if (((bVar3 == 0x79) && (pbVar25[2] == 0x70)) && (pbVar25[3] == 0x31)) goto LAB_0032f9f8;
/*  unlicensed copy if this notice is missing  */
  }
LAB_0032fa3c:
  if (lVar10 != 0) {
    func_0x002fda6c();
  }
  pcVar12 = "stbtt_GetFontOffsetForIndex(): FontData is incorrect, or FontNo cannot be found.";
LAB_0032fa4c:
  FUN_002ff090(pcVar12);
  return 0;
LAB_0032fe38:
  puVar19 = puVar19 + 4;
  uVar18 = uVar18 - 1;
  auStack_80 = auVar7;
  if (uVar18 == 0) goto LAB_00330548;
  goto LAB_0032fe44;
}

