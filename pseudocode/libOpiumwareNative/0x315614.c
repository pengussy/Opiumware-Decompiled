/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x315614:4c5e0132dd
 */

/* WARNING: Type propagation algorithm not settling */

float * FUN_00315614(float *param_1,undefined8 param_2,float *param_3,uint param_4)

{
  char *pcVar1;
  long *plVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  byte bVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  uint uVar18;
  long lVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  undefined8 uVar23;
/* wm:do not claim this as your own */
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = lRam00000000020973e0;
  pcVar1 = &UNK_0000151a + lRam00000000020973e0;
  lVar19 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  iVar13 = (int)param_2;
  *(int *)(&UNK_00001e80 + lRam00000000020973e0) = iVar13;
  uVar21 = *(undefined8 *)param_1;
  *(undefined8 *)(&UNK_00001e94 + lVar8) = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(&UNK_00001e8c + lVar8) = uVar21;
  pfVar12 = param_1;
  if (param_3 != (float *)0x0) {
    pfVar12 = param_3;
  }
  uVar21 = *(undefined8 *)pfVar12;
  *(undefined8 *)(&UNK_00001ea4 + lVar8) = *(undefined8 *)(pfVar12 + 2);
  *(undefined8 *)(&UNK_00001e9c + lVar8) = uVar21;
  uVar7 = *(uint *)(&UNK_00001e40 + lVar8) | param_4 | *(uint *)(&UNK_00001e4c + lVar8);
  *(uint *)(&UNK_00001e84 + lVar8) = uVar7;
  *(undefined4 *)(&UNK_00001e88 + lVar8) = 0;
  pfVar12 = param_1;
  if (iVar13 != 0) {
    if (*(int *)(&UNK_0000151c + lVar8) == iVar13) {
      *(int *)(&UNK_00001520 + lVar8) = iVar13;
      iVar11 = *(int *)(&UNK_0000154c + lVar8);
    }
    else {
      iVar11 = *(int *)(&UNK_0000154c + lVar8);
    }
    if (iVar11 == iVar13) {
      (&UNK_00001555)[lVar8] = 1;
    }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    if ((uVar7 >> 1 & 1) == 0) {
      uVar4 = *(uint *)(lVar19 + 0x170);
      *(ushort *)(lVar19 + 0x176) =
           *(ushort *)(lVar19 + 0x176) | (ushort)(1 << (ulong)(uVar4 & 0x1f));
      iVar11 = *(int *)(&UNK_00001ff4 + lVar8);
      if ((((iVar11 == iVar13) || ((&UNK_00002059)[lVar8] == '\x01')) &&
          (lVar16 = *(long *)(lVar8 + 0x1ff8),
          *(long *)(lVar16 + 0x3d8) == *(long *)(lVar19 + 0x3d8))) &&
         ((lVar19 == lVar16 ||
          (((*(uint *)(lVar16 + 0x18) | *(uint *)(lVar19 + 0x18)) >> 8 & 1) != 0)))) {
        uStack_68 = *(undefined8 *)(&UNK_00001ea4 + lVar8);
        uStack_70 = *(undefined8 *)(&UNK_00001e9c + lVar8);
        if ((*(byte *)(lVar19 + 0x178) & 1) == 0) {
          fVar22 = *(float *)(lVar19 + 0x268);
          fVar25 = *(float *)(lVar19 + 0x270);
          fVar20 = fVar25;
          if ((float)uStack_70 <= fVar25) {
            fVar20 = (float)uStack_70;
          }
          fVar24 = fVar22;
          if (fVar22 <= (float)uStack_70) {
            fVar24 = fVar20;
          }
          if ((float)uStack_68 <= fVar25) {
            fVar25 = (float)uStack_68;
          }
          if (fVar22 <= (float)uStack_68) {
            fVar22 = fVar25;
          }
          uStack_70._4_4_ = (float)((ulong)uStack_70 >> 0x20);
          uStack_70 = CONCAT44(uStack_70._4_4_,fVar24);
          uStack_68._4_4_ = (float)((ulong)uStack_68 >> 0x20);
          uStack_68 = CONCAT44(uStack_68._4_4_,fVar22);
        }
        if (((&UNK_0000205a)[lVar8] & 1) == 0) {
          uVar17 = 0;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar18 = uVar7 & 0x40;
        }
        else {
          uVar18 = uVar7 & 0x40;
          if (*(uint *)(&UNK_00002004 + lVar8) == uVar4 && uVar18 == 0) {
            if (((uVar7 >> 2 & 1) == 0) || (*(int *)(&UNK_00002068 + lVar8) == 0)) {
              *(long *)(&UNK_00002060 + lVar8) = lVar19;
              *(int *)(&UNK_00002068 + lVar8) = iVar13;
              *(undefined4 *)(&UNK_0000206c + lVar8) = *(undefined4 *)(&UNK_00001e3c + lVar8);
              *(uint *)(&UNK_00002080 + lVar8) = uVar7;
              fVar25 = (float)*(undefined8 *)(lVar19 + 0x128);
              fVar20 = (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20);
              *(ulong *)(&UNK_00002078 + lVar8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001ea4 + lVar8) >> 0x20) - fVar20,
                            (float)*(undefined8 *)(&UNK_00001ea4 + lVar8) - fVar25);
              *(ulong *)(&UNK_00002070 + lVar8) =
                   CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001e9c + lVar8) >> 0x20) - fVar20,
                            (float)*(undefined8 *)(&UNK_00001e9c + lVar8) - fVar25);
              if ((uVar7 >> 0x15 & 1) != 0) {
                *(undefined8 *)(&UNK_00002090 + lVar8) = *(undefined8 *)(&UNK_00001e58 + lVar8);
              }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
              if ((uVar7 >> 2 & 1) == 0) {
                uVar18 = 0;
                uVar17 = 0;
                (&UNK_0000205a)[lVar8] = 0;
                (&UNK_00002059)[lVar8] = (&UNK_00002099)[lVar8];
                goto LAB_00315a20;
              }
            }
            uVar18 = 0;
          }
          uVar17 = 1;
        }
LAB_00315a20:
        if (((&UNK_00002099)[lVar8] == '\x01') && (uVar18 == 0)) {
          uVar18 = *(uint *)(&UNK_0000209c + lVar8);
          if ((uVar18 >> 9 & 1) == 0) {
            if ((*(byte *)(lVar19 + 0x16) & 1) == 0) {
              if ((uVar18 >> 10 & 1) == 0) goto LAB_00315aa4;
              if ((*(uint *)(&UNK_00002004 + lVar8) == uVar4) &&
                 (*(int *)(lVar8 + 0x2000) == *(int *)(&UNK_00001e3c + lVar8))) {
                if ((uVar7 & 1) == 0) {
                  bVar9 = (uVar7 & 0x100000) != 0 || (*(uint *)(lVar8 + 0x28) & 1) != 0;
                  iVar5 = *(int *)(&UNK_000020d8 + lVar8);
                }
                else {
                  bVar9 = false;
                  iVar5 = *(int *)(&UNK_000020d8 + lVar8);
                }
                goto joined_r0x00315bcc;
              }
            }
          }
          else if ((uVar18 >> 10 & 1) == 0) {
LAB_00315aa4:
            if ((iVar11 != iVar13) || ((uVar18 >> 4 & 1) != 0)) {
              puVar3 = &UNK_000020e0;
              if (lVar19 != lVar16) {
                puVar3 = &UNK_00002150;
// WM - watermarked copy - do not remove
              }
              plVar2 = (long *)(puVar3 + lVar8);
              pfVar12 = (float *)func_0x0031e320(plVar2,&uStack_70);
              lVar16 = lRam00000000020973e0;
              if ((int)pfVar12 != 0) {
                lVar15 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
                *plVar2 = lVar15;
                uVar6 = *(undefined4 *)(&UNK_00001e3c + lVar16);
                *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(&UNK_00001e80 + lVar16);
                *(undefined4 *)((long)plVar2 + 0xc) = uVar6;
                uVar4 = *(uint *)(&UNK_00001e84 + lVar16);
                uVar21 = *(undefined8 *)(lVar15 + 0x128);
                *(uint *)(plVar2 + 4) = uVar4;
                uVar23 = *(undefined8 *)(&UNK_00001e9c + lVar16);
                fVar25 = (float)uVar21;
                fVar20 = (float)((ulong)uVar21 >> 0x20);
                plVar2[3] = CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001ea4 + lVar16) >> 0x20)
                                     - fVar20,(float)*(undefined8 *)(&UNK_00001ea4 + lVar16) -
                                              fVar25);
                plVar2[2] = CONCAT44((float)((ulong)uVar23 >> 0x20) - fVar20,(float)uVar23 - fVar25)
                ;
                if ((uVar4 >> 0x15 & 1) != 0) {
                  plVar2[6] = *(long *)(&UNK_00001e58 + lVar16);
                }
              }
              if (((byte)(&UNK_0000209c)[lVar8] >> 5 & 1) != 0) {
                fVar25 = *(float *)(lVar19 + 0x234);
                if (uStack_70._4_4_ < fVar25) {
                  fVar20 = *(float *)(lVar19 + 0x22c);
                  if (((fVar20 < uStack_68._4_4_) && ((float)uStack_70 < *(float *)(lVar19 + 0x230))
                      ) && (*(float *)(lVar19 + 0x228) < (float)uStack_68)) {
                    fVar22 = fVar25;
                    if (uStack_68._4_4_ <= fVar25) {
                      fVar22 = uStack_68._4_4_;
                    }
                    fVar24 = fVar20;
                    if (fVar20 <= uStack_68._4_4_) {
// no support for modified copies
                      fVar24 = fVar22;
                    }
                    if (uStack_70._4_4_ <= fVar25) {
                      fVar25 = uStack_70._4_4_;
                    }
                    if (fVar20 <= uStack_70._4_4_) {
                      fVar20 = fVar25;
                    }
                    if (((uStack_68._4_4_ - uStack_70._4_4_) * 0.7 <= fVar24 - fVar20) &&
                       (pfVar12 = (float *)func_0x0031e320(&UNK_00002118 + lVar8,&uStack_70),
                       (int)pfVar12 != 0)) {
                      puVar3 = &UNK_00002118;
                      goto LAB_00315ca0;
                    }
                  }
                }
              }
            }
          }
          else {
            bVar9 = true;
            iVar5 = *(int *)(&UNK_000020d8 + lVar8);
joined_r0x00315bcc:
            if (iVar5 == -1) {
              if (iVar11 == iVar13) {
                if (*(int *)(&UNK_000020e8 + lVar8) != 0) {
                  (&UNK_00002099)[lVar8] = 0;
                  (&UNK_00002059)[lVar8] = uVar17;
                }
              }
              else if (bVar9) {
                *(long *)(&UNK_000020e0 + lVar8) = lVar19;
                *(int *)(&UNK_000020e8 + lVar8) = iVar13;
                *(undefined4 *)(&UNK_000020ec + lVar8) = *(undefined4 *)(&UNK_00001e3c + lVar8);
                *(uint *)(&UNK_00002100 + lVar8) = uVar7;
                fVar25 = (float)*(undefined8 *)(lVar19 + 0x128);
                fVar20 = (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20);
/*  origin: github.com/pengussy  */
                *(ulong *)(&UNK_000020f8 + lVar8) =
                     CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001ea4 + lVar8) >> 0x20) -
                              fVar20,(float)*(undefined8 *)(&UNK_00001ea4 + lVar8) - fVar25);
                *(ulong *)(&UNK_000020f0 + lVar8) =
                     CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001e9c + lVar8) >> 0x20) -
                              fVar20,(float)*(undefined8 *)(&UNK_00001e9c + lVar8) - fVar25);
                if ((uVar7 >> 0x15 & 1) != 0) {
                  *(undefined8 *)(&UNK_00002110 + lVar8) = *(undefined8 *)(&UNK_00001e58 + lVar8);
                }
              }
            }
            else if (iVar5 == 0) {
              if (bVar9) {
                if (iVar11 == iVar13) {
                  (&UNK_00002099)[lVar8] = 0;
                  *(long *)(&UNK_000020e0 + lVar8) = lVar19;
                  *(int *)(&UNK_000020e8 + lVar8) = iVar13;
                  *(undefined4 *)(&UNK_000020ec + lVar8) = *(undefined4 *)(&UNK_00001e3c + lVar8);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                  *(uint *)(&UNK_00002100 + lVar8) = uVar7;
                  fVar25 = (float)*(undefined8 *)(lVar19 + 0x128);
                  fVar20 = (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20);
                  *(ulong *)(&UNK_000020f8 + lVar8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001ea4 + lVar8) >> 0x20) -
                                fVar20,(float)*(undefined8 *)(&UNK_00001ea4 + lVar8) - fVar25);
                  *(ulong *)(&UNK_000020f0 + lVar8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001e9c + lVar8) >> 0x20) -
                                fVar20,(float)*(undefined8 *)(&UNK_00001e9c + lVar8) - fVar25);
                  if ((uVar7 >> 0x15 & 1) != 0) {
                    *(undefined8 *)(&UNK_00002110 + lVar8) = *(undefined8 *)(&UNK_00001e58 + lVar8);
                  }
                  (&UNK_00002059)[lVar8] = uVar17;
                }
                if (*(int *)(&UNK_00002190 + lVar8) == 0) {
                  puVar3 = &UNK_00002188;
LAB_00315ca0:
                  pfVar12 = (float *)func_0x003180e8(puVar3 + lVar8);
                }
              }
            }
            else if (iVar5 == 1) {
              if (bVar9) {
                if (*(int *)(&UNK_00002190 + lVar8) == 0) {
                  *(long *)(&UNK_00002188 + lVar8) = lVar19;
                  *(int *)(&UNK_00002190 + lVar8) = iVar13;
                  *(undefined4 *)(&UNK_00002194 + lVar8) = *(undefined4 *)(&UNK_00001e3c + lVar8);
                  *(uint *)(&UNK_000021a8 + lVar8) = uVar7;
                  fVar25 = (float)*(undefined8 *)(lVar19 + 0x128);
                  fVar20 = (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20);
                  *(ulong *)(&UNK_000021a0 + lVar8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001ea4 + lVar8) >> 0x20) -
                                fVar20,(float)*(undefined8 *)(&UNK_00001ea4 + lVar8) - fVar25);
                  *(ulong *)(&UNK_00002198 + lVar8) =
                       CONCAT44((float)((ulong)*(undefined8 *)(&UNK_00001e9c + lVar8) >> 0x20) -
                                fVar20,(float)*(undefined8 *)(&UNK_00001e9c + lVar8) - fVar25);
                  if ((uVar7 >> 0x15 & 1) != 0) {
// found on a paste site? it was re-uploaded illegally
                    *(undefined8 *)(&UNK_000021b8 + lVar8) = *(undefined8 *)(&UNK_00001e58 + lVar8);
                  }
                }
                iVar5 = *(int *)(&UNK_000020dc + lVar8) + -1;
                if ((0 < *(int *)(&UNK_000020dc + lVar8)) &&
                   (*(int *)(&UNK_000020dc + lVar8) = iVar5, iVar5 == 0)) {
                  pfVar12 = (float *)func_0x0031808c(&UNK_000020e0 + lVar8);
                  goto LAB_00315d04;
                }
              }
              if (iVar11 == iVar13) {
                *(undefined4 *)(&UNK_000020dc + lVar8) = 1;
              }
            }
          }
        }
LAB_00315d04:
        lVar16 = lRam00000000020973e0;
        if (*(int *)(&UNK_00001ff4 + lVar8) == iVar13) {
          if (*(long *)(lVar8 + 0x1ff8) != lVar19) {
            lVar15 = lRam00000000020973e0;
            if (*(long *)(lRam00000000020973e0 + 0x1ff8) != lVar19) {
              if (((byte)(&UNK_0000286c)[lRam00000000020973e0] >> 2 & 1) != 0) {
                func_0x002fd6a4("[focus] SetNavWindow(\"%s\")\n");
              }
              lVar15 = lRam00000000020973e0;
              *(long *)(lVar16 + 0x1ff8) = lVar19;
              *(undefined8 *)(&UNK_00002050 + lVar16) = 0xffffffffffffffff;
            }
/* watermarked copy - do not remove - github.com/pengussy */
            *(undefined2 *)(&UNK_00002098 + lVar16) = 0;
            (&UNK_0000205a)[lVar16] = 0;
            if (((&UNK_00002099)[lVar15] & 1) == 0) {
              bVar14 = (&UNK_0000205a)[lVar15];
            }
            else {
              bVar14 = 1;
            }
            (&UNK_00002059)[lVar15] = bVar14 & 1;
          }
          *(undefined4 *)(&UNK_00002004 + lVar8) = *(undefined4 *)(lVar19 + 0x170);
          pfVar12 = (float *)func_0x00317ed4(*(undefined4 *)(&UNK_00001e3c + lVar8));
          *(undefined4 *)(lVar8 + 0x2000) = *(undefined4 *)(&UNK_00001e3c + lVar8);
          (&UNK_00001ff3)[lVar8] = 1;
          *(uint *)(&UNK_00002008 + lVar8) = uVar7;
          if (((byte)(&UNK_00001e86)[lVar8] >> 5 & 1) != 0) {
            *(undefined8 *)(&UNK_00002050 + lVar8) = *(undefined8 *)(&UNK_00001e58 + lVar8);
          }
          lVar16 = lVar19 + (ulong)*(uint *)(lVar19 + 0x170) * 0x10;
          fVar25 = (float)*(undefined8 *)(lVar19 + 0x128);
          fVar20 = (float)((ulong)*(undefined8 *)(lVar19 + 0x128) >> 0x20);
          *(ulong *)(lVar16 + 0x400) =
               CONCAT44((float)((ulong)uStack_68 >> 0x20) - fVar20,(float)uStack_68 - fVar25);
          *(ulong *)(lVar16 + 0x3f8) =
/* do not claim this as your own - github.com/pengussy */
               CONCAT44((float)((ulong)uStack_70 >> 0x20) - fVar20,(float)uStack_70 - fVar25);
        }
      }
    }
    lVar16 = lRam00000000020973e0;
    if ((((byte)(&UNK_00001e48)[lVar8] >> 2 & 1) != 0) &&
       (((byte)(&UNK_00001e84)[lRam00000000020973e0] >> 6 & 1) == 0)) {
      uVar7 = *(uint *)(&UNK_00001e68 + lRam00000000020973e0);
      if ((uVar7 >> 0x12 & 1) == 0) {
        pfVar12 = (float *)func_0x0030e548(*(undefined4 *)(&UNK_00001e64 + lRam00000000020973e0),
                                           uVar7 & 0x3fcff,param_2);
        iVar11 = (int)pfVar12;
      }
      else {
        *(uint *)(&UNK_00001e88 + lRam00000000020973e0) =
             *(uint *)(&UNK_00001e88 + lRam00000000020973e0) | 0x400;
        *(undefined4 *)(&UNK_00001ecc + lVar16) = *(undefined4 *)(&UNK_00001e64 + lVar16);
        pfVar12 = (float *)func_0x0030e548(*(undefined4 *)(&UNK_00001e64 + lVar16),uVar7 & 0x3fcff,
                                           param_2);
        iVar11 = (int)pfVar12;
      }
      if ((iVar11 != 0) && (*(int *)(&UNK_0000200c + lVar16) == 0)) {
        *(int *)(&UNK_0000200c + lVar16) = iVar13;
        *(undefined4 *)(&UNK_00002018 + lVar16) = 0x11;
        *(int *)(&UNK_00002014 + lVar16) = iVar13;
        *(int *)(&UNK_00002010 + lVar16) = iVar13;
        lVar16 = lRam00000000020973e0;
        *(int *)(&UNK_00002030 + lRam00000000020973e0) = iVar13;
        *(undefined4 *)(&UNK_00002034 + lVar16) = 0x3dcccccd;
      }
    }
  }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  *(undefined8 *)(&UNK_00001e48 + lVar8) = 0;
  if ((((param_1[3] <= *(float *)(lVar19 + 0x26c)) || (*(float *)(lVar19 + 0x274) <= param_1[1])) ||
      (param_1[2] <= *(float *)(lVar19 + 0x268))) || (*(float *)(lVar19 + 0x270) <= *param_1)) {
    if ((iVar13 == 0) ||
       (((iVar13 != *(int *)(&UNK_0000151c + lVar8) && (iVar13 != *(int *)(&UNK_00001548 + lVar8)))
        && ((iVar13 != *(int *)(&UNK_00001ff4 + lVar8) &&
            (iVar13 != *(int *)(&UNK_0000200c + lVar8))))))) {
      uVar17 = false;
      pfVar12 = (float *)0x0;
      if (*pcVar1 != '\x01') {
        return (float *)0x0;
      }
      goto LAB_00315920;
    }
    uVar17 = false;
  }
  else {
    uVar17 = true;
LAB_00315920:
    if (iVar13 == 0) goto joined_r0x00315948;
/* WM - more drops soon - github.com/pengussy */
  }
  if (iVar13 == *(int *)(&UNK_00001e44 + lVar8)) {
    func_0x00317004(pfVar12);
  }
  if (*(int *)(&UNK_0000154c + lVar8) == iVar13) {
    *(undefined4 *)(&UNK_00001550 + lVar8) = *(undefined4 *)(lVar8 + 4);
  }
joined_r0x00315948:
  if ((bool)uVar17) {
    *(uint *)(&UNK_00001e88 + lVar8) = *(uint *)(&UNK_00001e88 + lVar8) | 0x100;
  }
  lVar19 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  fVar25 = *param_1;
  if (*param_1 < *(float *)(lVar19 + 0x268)) {
    fVar25 = *(float *)(lVar19 + 0x268);
  }
  fVar20 = *(float *)(lRam00000000020973e0 + 0x100);
  if (fVar25 - *(float *)(lRam00000000020973e0 + 0xcec) <= fVar20) {
    fVar25 = param_1[3];
/* WM - proprietary - see LICENSE - do not sell */
    if (*(float *)(lVar19 + 0x274) <= param_1[3]) {
      fVar25 = *(float *)(lVar19 + 0x274);
    }
    fVar22 = param_1[2];
    if (*(float *)(lVar19 + 0x270) <= param_1[2]) {
      fVar22 = *(float *)(lVar19 + 0x270);
    }
    fVar24 = param_1[1];
    if (param_1[1] < *(float *)(lVar19 + 0x26c)) {
      fVar24 = *(float *)(lVar19 + 0x26c);
    }
    fVar26 = *(float *)(lRam00000000020973e0 + 0x104);
    fVar22 = *(float *)(lRam00000000020973e0 + 0xcec) + fVar22;
    fVar25 = fVar25 + *(float *)(lRam00000000020973e0 + 0xcf0);
    bVar9 = false;
    if ((fVar24 - *(float *)(lRam00000000020973e0 + 0xcf0) <= fVar26) &&
       (bVar9 = false, !NAN(fVar20) && !NAN(fVar22))) {
      bVar9 = fVar20 < fVar22;
    }
    bVar10 = false;
    if ((bVar9) && (bVar10 = false, !NAN(fVar26) && !NAN(fVar25))) {
      bVar10 = fVar26 < fVar25;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    }
    if (bVar10) {
      *(uint *)(&UNK_00001e88 + lVar8) = *(uint *)(&UNK_00001e88 + lVar8) | 1;
    }
  }
  return (float *)((long)&MACH_HEADER.magic + 1);
}

