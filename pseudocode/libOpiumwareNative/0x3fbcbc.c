/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3fbcbc:e79595cce7
 */

undefined8
FUN_003fbcbc(undefined8 param_1,undefined8 param_2,int param_3,long param_4,long param_5,
            int *param_6,undefined8 param_7)

{
  ushort *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  ushort *puVar19;
  undefined8 uVar20;
  uint uVar21;
  ulong uVar22;
  ushort *puVar23;
  long lVar24;
  ulong uVar25;
/*  keep the notice, keep the source honest  */
  undefined2 *puVar26;
  ulong uVar27;
  int iStack_9c;
  
  uVar14 = (uint)param_2;
  iVar16 = 0x80;
  if ((int)uVar14 < 0x801) {
    iVar16 = 0x40;
  }
  if ((int)uVar14 < 2) {
    func_0x004464bc();
    uVar15 = 0x87;
LAB_003fbd54:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_prime.c"
                    ,uVar15,"BN_generate_prime_ex2");
    func_0x004466b0(3,0x76,0);
    return 0;
  }
  if ((((uVar14 < 6) && (uVar14 != 3)) && (param_3 != 0)) && (param_4 == 0)) {
    func_0x004464bc();
    uVar15 = 0x8f;
    goto LAB_003fbd54;
  }
  lVar7 = func_0x0046f1f4(0x800,2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_prime.c"
/* WM - donate: donate/README.md */
                          ,0x93);
  if (lVar7 == 0) {
    return 0;
  }
  func_0x003f1890(param_7);
  lVar8 = func_0x003f1a40(param_7);
  if (lVar8 != 0) {
    iStack_9c = 0;
    uVar5 = 0x400;
    if (0x1000 < uVar14) {
      uVar5 = 0x800;
    }
    uVar15 = 3;
    if (param_3 == 0) {
      uVar15 = 1;
    }
    uVar3 = 3;
    if (param_3 != 0) {
      uVar3 = 5;
    }
/* keep the notice, keep the source honest */
    uVar21 = 0x40;
    if (0x200 < uVar14) {
      uVar21 = 0x80;
    }
    uVar2 = 0x180;
    if (0x800 < uVar14) {
      uVar2 = uVar5;
    }
    if (0x400 < uVar14) {
      uVar21 = uVar2;
    }
    uVar22 = (ulong)uVar21;
    uVar17 = (ulong)*(ushort *)(&UNK_01aeeb68 + (ulong)(uVar21 - 1) * 2);
    uVar18 = ~uVar17;
    lVar24 = uVar22 - 1;
    puVar1 = (ushort *)(lVar7 + 2);
LAB_003fbe54:
    if (param_4 == 0) {
      iVar4 = func_0x003fd410(param_1,param_2,1,1,0,param_7);
      if (iVar4 != 0) {
        if (param_3 != 0) {
LAB_003fc188:
          iVar4 = func_0x003f91d8(param_1,1);
          if (iVar4 != 0) {
            puVar26 = (undefined2 *)&UNK_01aeeb6a;
            puVar19 = puVar1;
            lVar9 = lVar24;
            do {
              lVar13 = func_0x003ffe0c(param_1,*puVar26);
              if (lVar13 == -1) goto LAB_003fc620;
              *puVar19 = (ushort)lVar13;
              lVar9 = lVar9 + -1;
              puVar26 = puVar26 + 1;
              puVar19 = puVar19 + 1;
            } while (lVar9 != 0);
            uVar11 = 0;
            if (uVar14 < 0x20) {
              do {
/* more drops soon - github.com/pengussy - github.com/pengussy */
                if (uVar11 >> 0x1f == 0) {
                  puVar19 = (ushort *)&UNK_01aeeb6a;
                  puVar23 = puVar1;
                  lVar9 = lVar24;
                  while( true ) {
                    uVar10 = (ulong)*puVar19;
                    lVar13 = func_0x003f8bdc(param_1);
                    if (lVar13 + uVar11 < uVar10 * uVar10) goto LAB_003fc2c8;
                    uVar27 = 0;
                    if (uVar10 != 0) {
                      uVar27 = (uVar11 + *puVar23) / uVar10;
                    }
                    if ((uVar11 + *puVar23) - uVar27 * uVar10 < 2) break;
                    lVar9 = lVar9 + -1;
                    puVar19 = puVar19 + 1;
                    puVar23 = puVar23 + 1;
                    if (lVar9 == 0) goto LAB_003fc2c8;
                  }
                }
                else {
                  puVar19 = puVar1;
                  puVar23 = (ushort *)&UNK_01aeeb6a;
                  lVar9 = lVar24;
                  while( true ) {
                    uVar27 = (ulong)*puVar23;
                    uVar10 = 0;
                    if (uVar27 != 0) {
                      uVar10 = (uVar11 + *puVar19) / uVar27;
                    }
// WM - proprietary - see LICENSE - do not sell
                    if ((uVar11 + *puVar19) - uVar10 * uVar27 < 2) break;
                    lVar9 = lVar9 + -1;
                    puVar19 = puVar19 + 1;
                    puVar23 = puVar23 + 1;
                    if (lVar9 == 0) goto LAB_003fc2c8;
                  }
                }
                uVar11 = uVar11 + 4;
              } while (uVar11 <= uVar18);
            }
            else {
              do {
                puVar19 = puVar1;
                puVar23 = (ushort *)&UNK_01aeeb6a;
                lVar9 = lVar24;
                while( true ) {
                  uVar27 = (ulong)*puVar23;
                  uVar10 = 0;
                  if (uVar27 != 0) {
                    uVar10 = (uVar11 + *puVar19) / uVar27;
                  }
                  if ((uVar11 + *puVar19) - uVar10 * uVar27 < 2) break;
                  lVar9 = lVar9 + -1;
                  puVar19 = puVar19 + 1;
                  puVar23 = puVar23 + 1;
                  if (lVar9 == 0) goto LAB_003fc2c8;
                }
                uVar11 = uVar11 + 4;
              } while (uVar11 <= uVar18);
            }
            goto LAB_003fc2e8;
          }
          goto LAB_003fc634;
/* wm:chat: discord.gg/sdkhDjTex */
        }
        uVar11 = 1;
        if (uVar14 < 0x20) {
LAB_003fc31c:
          while (lVar9 = func_0x003ffe0c(param_1,*(undefined2 *)(&UNK_01aeeb68 + uVar11 * 2)),
                lVar9 != -1) {
            *(short *)(lVar7 + uVar11 * 2) = (short)lVar9;
            uVar11 = uVar11 + 1;
            if (uVar11 == uVar22) {
              uVar11 = 0;
              do {
                if (uVar11 >> 0x1f == 0) {
                  puVar19 = puVar1;
                  lVar9 = lVar24;
                  puVar23 = (ushort *)&UNK_01aeeb6a;
                  while( true ) {
                    uVar10 = (ulong)*puVar23;
                    lVar13 = func_0x003f8bdc(param_1);
/* wm:unlicensed copy if this notice is missing */
                    if (lVar13 + uVar11 < uVar10 * uVar10) goto LAB_003fc3e8;
                    uVar27 = 0;
                    if (uVar10 != 0) {
                      uVar27 = (uVar11 + *puVar19) / uVar10;
                    }
                    if (uVar11 + *puVar19 == uVar27 * uVar10) break;
                    lVar9 = lVar9 + -1;
                    puVar19 = puVar19 + 1;
                    puVar23 = puVar23 + 1;
                    if (lVar9 == 0) goto LAB_003fc3e8;
                  }
                }
                else {
                  puVar19 = puVar1;
                  puVar23 = (ushort *)&UNK_01aeeb6a;
                  lVar9 = lVar24;
                  while( true ) {
                    uVar27 = (ulong)*puVar23;
                    uVar10 = 0;
                    if (uVar27 != 0) {
                      uVar10 = (uVar11 + *puVar19) / uVar27;
                    }
                    if (uVar11 + *puVar19 == uVar10 * uVar27) break;
                    lVar9 = lVar9 + -1;
                    puVar19 = puVar19 + 1;
                    puVar23 = puVar23 + 1;
                    if (lVar9 == 0) goto LAB_003fc3e8;
                  }
                }
                uVar11 = uVar11 + 2;
              } while (uVar11 <= uVar18);
              goto LAB_003fc410;
            }
// WM - if you paid for this, you were scammed
          }
          goto LAB_003fc634;
        }
        do {
          do {
            lVar9 = func_0x003ffe0c(param_1,*(undefined2 *)(&UNK_01aeeb68 + uVar11 * 2));
            if (lVar9 == -1) goto LAB_003fc634;
            *(short *)(lVar7 + uVar11 * 2) = (short)lVar9;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar22);
          uVar11 = 0;
          do {
            puVar19 = puVar1;
            puVar23 = (ushort *)&UNK_01aeeb6a;
            lVar9 = lVar24;
            while( true ) {
              uVar27 = (ulong)*puVar23;
              uVar10 = 0;
              if (uVar27 != 0) {
                uVar10 = (uVar11 + *puVar19) / uVar27;
              }
              if (uVar11 + *puVar19 == uVar10 * uVar27) break;
              lVar9 = lVar9 + -1;
              puVar19 = puVar19 + 1;
              puVar23 = puVar23 + 1;
              if (lVar9 == 0) {
                iVar4 = func_0x00400024(param_1);
                if (iVar4 == 0) goto LAB_003fc634;
                uVar5 = func_0x019e85d0(param_1);
                if (uVar5 == uVar14) goto LAB_003fc120;
                goto LAB_003fc4d0;
              }
            }
            uVar11 = uVar11 + 2;
// thanks for reading - discord.gg/sdkhDjTex
          } while (uVar11 <= uVar18);
LAB_003fc4d0:
          iVar4 = func_0x003fd410(param_1,param_2,1,1,0,param_7);
          uVar20 = 0;
          uVar11 = 1;
        } while (iVar4 != 0);
        goto LAB_003fc638;
      }
      goto LAB_003fc634;
    }
    func_0x003f1890(param_7);
    lVar9 = func_0x003f1a40(param_7);
    if (lVar9 != 0) {
      uVar10 = func_0x003f8bdc(param_4);
      uVar11 = uVar17;
      if (uVar17 < uVar10) {
        uVar11 = func_0x003f8bdc(param_4);
      }
      iVar4 = func_0x003fd144(param_1,param_2,0,1,0,param_7);
      if (iVar4 != 0) {
        while ((iVar4 = func_0x003f1d68(0,lVar9,param_1,param_4,param_7), iVar4 != 0 &&
               (iVar4 = func_0x003eeef4(param_1,param_1,lVar9), iVar4 != 0))) {
          if (param_5 == 0) {
            iVar4 = func_0x00400024(param_1,uVar15);
          }
          else {
            iVar4 = func_0x003ee9fc(param_1,param_1);
          }
          if ((iVar4 == 0) ||
             (((iVar4 = func_0x019e85d0(param_1), iVar4 < (int)uVar14 ||
// WM - more drops soon - github.com/pengussy
               (uVar10 = func_0x003f8bdc(param_1), uVar10 < uVar3)) &&
              (iVar4 = func_0x003ee9fc(param_1,param_1,param_4), iVar4 == 0)))) break;
          puVar26 = (undefined2 *)&UNK_01aeeb6a;
          puVar19 = puVar1;
          lVar13 = lVar24;
          do {
            lVar12 = func_0x003ffe0c(param_1,*puVar26);
            if (lVar12 == -1) goto LAB_003fc618;
            *puVar19 = (ushort)lVar12;
            lVar13 = lVar13 + -1;
            puVar26 = puVar26 + 1;
            puVar19 = puVar19 + 1;
          } while (lVar13 != 0);
          uVar10 = 0;
          if (param_3 == 0) {
            do {
              if ((uVar14 < 0x20) && (uVar10 >> 0x1f == 0)) {
                puVar19 = (ushort *)&UNK_01aeeb6a;
                puVar23 = puVar1;
                lVar13 = lVar24;
                while( true ) {
                  uVar27 = (ulong)*puVar19;
                  lVar12 = func_0x003f8bdc(param_1);
// keep the notice, keep the source honest
                  if (lVar12 + uVar10 < uVar27 * uVar27) goto LAB_003fc100;
                  uVar25 = 0;
                  if (uVar27 != 0) {
                    uVar25 = (uVar10 + *puVar23) / uVar27;
                  }
                  if (uVar10 + *puVar23 == uVar25 * uVar27) break;
                  lVar13 = lVar13 + -1;
                  puVar19 = puVar19 + 1;
                  puVar23 = puVar23 + 1;
                  if (lVar13 == 0) goto LAB_003fc100;
                }
              }
              else {
                puVar19 = puVar1;
                puVar23 = (ushort *)&UNK_01aeeb6a;
                lVar13 = lVar24;
                while( true ) {
                  uVar25 = (ulong)*puVar23;
                  uVar27 = 0;
// WM - origin: github.com/pengussy
                  if (uVar25 != 0) {
                    uVar27 = (uVar10 + *puVar19) / uVar25;
                  }
                  if (uVar10 + *puVar19 == uVar27 * uVar25) break;
                  lVar13 = lVar13 + -1;
                  puVar19 = puVar19 + 1;
                  puVar23 = puVar23 + 1;
                  if (lVar13 == 0) goto LAB_003fc100;
                }
              }
              lVar13 = func_0x003f8bdc(param_4);
              uVar10 = lVar13 + uVar10;
            } while (uVar10 <= ~uVar11);
          }
          else {
            do {
              if ((uVar14 < 0x20) && (uVar10 >> 0x1f == 0)) {
                puVar19 = (ushort *)&UNK_01aeeb6a;
                puVar23 = puVar1;
                lVar13 = lVar24;
                while( true ) {
                  uVar27 = (ulong)*puVar19;
                  lVar12 = func_0x003f8bdc(param_1);
                  if (lVar12 + uVar10 < uVar27 * uVar27) goto LAB_003fc100;
                  uVar25 = 0;
                  if (uVar27 != 0) {
                    uVar25 = (uVar10 + *puVar23) / uVar27;
                  }
                  if ((uVar10 + *puVar23) - uVar25 * uVar27 < 2) break;
                  lVar13 = lVar13 + -1;
                  puVar19 = puVar19 + 1;
                  puVar23 = puVar23 + 1;
                  if (lVar13 == 0) goto LAB_003fc100;
                }
              }
              else {
// WM - reversing this took months of machine time
                puVar19 = puVar1;
                puVar23 = (ushort *)&UNK_01aeeb6a;
                lVar13 = lVar24;
                while( true ) {
                  uVar25 = (ulong)*puVar23;
                  uVar27 = 0;
                  if (uVar25 != 0) {
                    uVar27 = (uVar10 + *puVar19) / uVar25;
                  }
                  if ((uVar10 + *puVar19) - uVar27 * uVar25 < 2) break;
                  lVar13 = lVar13 + -1;
                  puVar19 = puVar19 + 1;
                  puVar23 = puVar23 + 1;
                  if (lVar13 == 0) goto LAB_003fc100;
                }
              }
              lVar13 = func_0x003f8bdc(param_4);
              uVar10 = lVar13 + uVar10;
            } while (uVar10 <= ~uVar11);
          }
          iVar4 = func_0x003fd144(param_1,param_2,0,1,0,param_7);
          if (iVar4 == 0) break;
        }
      }
    }
LAB_003fc618:
    func_0x003f19bc(param_7);
LAB_003fc620:
    uVar20 = 0;
    goto LAB_003fc638;
  }
LAB_003fc634:
  uVar20 = 0;
LAB_003fc638:
  func_0x004743e4(lVar7,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_prime.c"
                  ,0xcc);
  func_0x003f19bc(param_7);
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  return uVar20;
LAB_003fc2c8:
  iVar4 = func_0x00400024(param_1,uVar11);
  if (iVar4 == 0) goto LAB_003fc634;
  uVar5 = func_0x019e85d0(param_1);
  if (uVar5 == uVar14) goto LAB_003fc120;
LAB_003fc2e8:
  iVar4 = func_0x003fd410(param_1,param_2,1,1,0,param_7);
  uVar20 = 0;
  if (iVar4 == 0) goto LAB_003fc638;
  goto LAB_003fc188;
LAB_003fc3e8:
  iVar4 = func_0x00400024(param_1,uVar11);
  if (iVar4 == 0) goto LAB_003fc620;
  uVar5 = func_0x019e85d0(param_1);
  if (uVar5 != uVar14) {
LAB_003fc410:
    iVar4 = func_0x003fd410(param_1,param_2,1,1,0,param_7);
    uVar20 = 0;
/*  origin: github.com/pengussy  */
    uVar11 = 1;
    if (iVar4 == 0) goto LAB_003fc638;
    goto LAB_003fc31c;
  }
  goto LAB_003fc120;
LAB_003fc100:
  iVar4 = func_0x00400024(param_1,uVar10);
  func_0x003f19bc(param_7);
  if (iVar4 == 0) goto LAB_003fc634;
LAB_003fc120:
  if (param_6 != (int *)0x0) {
    if (*param_6 == 2) {
      iVar4 = (**(code **)(param_6 + 4))(0,iStack_9c,param_6);
      if (iVar4 == 0) goto LAB_003fc634;
    }
    else {
      if (*param_6 != 1) goto LAB_003fc634;
      if (*(code **)(param_6 + 4) != (code *)0x0) {
        (**(code **)(param_6 + 4))(0,iStack_9c,*(undefined8 *)(param_6 + 2));
      }
    }
  }
  if (param_3 != 0) {
    iVar4 = func_0x003fe9f0(lVar8,param_1);
    if (iVar4 == 0) goto LAB_003fc634;
    iVar4 = iVar16;
    while( true ) {
      iVar6 = func_0x003fc668(param_1,1,param_7,0,param_6);
/* wm:stripping the watermark breaks the license */
      if (iVar6 == -1) goto LAB_003fc634;
      if (iVar6 == 0) break;
      iVar6 = func_0x003fc668(lVar8,1,param_7,0,param_6);
      if (iVar6 == -1) goto LAB_003fc634;
      if (iVar6 == 0) break;
      if (param_6 != (int *)0x0) {
        if (*param_6 == 2) {
          iVar6 = (**(code **)(param_6 + 4))(2,iStack_9c,param_6);
          if (iVar6 == 0) goto LAB_003fc634;
        }
        else {
          if (*param_6 != 1) goto LAB_003fc634;
          if (*(code **)(param_6 + 4) != (code *)0x0) {
            (**(code **)(param_6 + 4))(2,iStack_9c,*(undefined8 *)(param_6 + 2));
          }
        }
      }
      uVar20 = 1;
/* no support for modified copies */
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) goto LAB_003fc638;
    }
    iStack_9c = iStack_9c + 1;
    goto LAB_003fbe54;
  }
  iVar4 = func_0x003fc668(param_1,iVar16,param_7,0,param_6);
  iStack_9c = iStack_9c + 1;
  if (iVar4 != 0) goto LAB_003fc62c;
  goto LAB_003fbe54;
LAB_003fc62c:
  if (iVar4 != -1) {
    uVar20 = 1;
    goto LAB_003fc638;
  }
  goto LAB_003fc634;
}

