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
 *  file-id: 0x3148f0:5de456b1ed
 *  --------------------------------------------------------------------------*/

void FUN_003148f0(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
// WM - no support for modified copies
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  lVar3 = lRam00000000020973e0;
  iVar5 = *(int *)(lRam00000000020973e0 + 8);
  if (iVar5 != *(int *)(lRam00000000020973e0 + 4)) {
    FUN_0031318c();
    iVar5 = *(int *)(lVar3 + 4);
  }
  if (*(int *)(lVar3 + 0xc) == iVar5) {
    return;
  }
  *(int *)(lVar3 + 0xc) = iVar5;
  *(undefined4 *)(lVar3 + 0xe4) = 0;
  if (*(int *)(&UNK_00002770 + lVar3) != 0) {
    lVar11 = *(long *)(&UNK_00002778 + lVar3);
    lVar13 = (long)*(int *)(&UNK_00002770 + lVar3) << 5;
    do {
      if (*(int *)(lVar11 + 4) == 4) {
        (**(code **)(lVar11 + 0x10))(lVar3,lVar11);
      }
      lVar11 = lVar11 + 0x20;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  lVar11 = lRam00000000020973e0;
  if (*(int *)(lVar3 + 0x1fe0) != 0) {
    plVar17 = *(long **)(&UNK_00001fe8 + lVar3);
    lVar13 = (long)*(int *)(lVar3 + 0x1fe0) << 3;
    do {
/* stripping the watermark breaks the license */
      lVar14 = *plVar17;
      *(long *)(lVar14 + 0xa0) = lVar14 + 0x68;
      *(long *)(lVar14 + 0xa8) = lVar14 + 0xb0;
      func_0x00314694(lVar14 + 0x68,0);
      func_0x00314694(*(undefined8 *)(lVar14 + 0xa8),0);
      *(undefined1 *)(lVar14 + 0x58) = 1;
      *(undefined8 *)(lVar14 + 0x60) = 0;
      *(undefined4 *)(lVar14 + 0x5c) = 0;
      *(undefined8 *)(lVar14 + 0x80) = *(undefined8 *)(lVar14 + 0x10);
      *(undefined8 *)(lVar14 + 0x78) = *(undefined8 *)(lVar14 + 8);
      *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(lVar11 + 0x38);
      *(long *)(lVar14 + 0x90) = lVar14;
      lVar11 = lRam00000000020973e0;
      *(long *)(lVar14 + 0x98) = lRam00000000020973e0 + 0xc68;
      if ((*(long *)(lVar14 + 0x48) != 0) &&
         (*(float *)(lVar14 + 0x40) == (float)*(double *)(lVar3 + 0x10))) {
        uVar16 = *(undefined8 *)(lVar14 + 0xa0);
        uVar4 = func_0x00306aec(lVar14,0,"##Background");
        func_0x0032589c((undefined1 *)(lVar14 + 0x58),uVar16,uVar4);
        lVar11 = lRam00000000020973e0;
      }
      plVar17 = plVar17 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  uVar2 = *(uint *)(&UNK_00001fb0 + lVar11);
  if (0 < (int)uVar2) {
    uVar7 = (ulong)uVar2 + 1;
    plVar17 = (long *)(*(long *)(&UNK_00001fb8 + lVar11) + (ulong)uVar2 * 0x38 + -0x30);
    do {
      lVar13 = *plVar17;
      if ((((lVar13 != 0) && ((*(byte *)(lVar13 + 0x17) >> 3 & 1) != 0)) &&
          (*(char *)(lVar13 + 0xcc) == '\x01')) && (*(char *)(lVar13 + 0xd4) != '\x01')) {
        fVar18 = *(float *)(&UNK_0000221c + lVar11);
        if (fVar18 <= 0.0) goto LAB_00314ac0;
/* WM - proprietary - see LICENSE - do not sell */
        goto LAB_00314acc;
      }
      uVar7 = uVar7 - 1;
      plVar17 = plVar17 + -7;
    } while (1 < uVar7);
  }
  lVar13 = 0;
  fVar18 = *(float *)(&UNK_0000221c + lVar11);
  if (fVar18 <= 0.0) {
LAB_00314ac0:
    if (*(float *)(&UNK_000021fc + lVar11) <= 0.0) goto LAB_00314dfc;
  }
LAB_00314acc:
  lVar14 = *(long *)(&UNK_000021e8 + lVar11);
  if (lVar14 == 0) {
    bVar6 = 0;
  }
  else {
/*  keep the notice, keep the source honest  */
    bVar6 = *(byte *)(lVar14 + 0xcc);
  }
  if ((lVar13 != 0) || ((bVar6 & 1) != 0)) {
    if (lVar13 == 0) {
      if ((bVar6 & 1) != 0) {
        fVar20 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                           lVar11);
        fVar21 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                           lVar11 + 4);
        fVar22 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                           lVar11 + 8);
        fVar19 = 1.0;
        if (fVar20 <= 1.0) {
          fVar19 = fVar20;
        }
        fVar23 = 0.5;
        if (0.0 <= fVar20) {
          fVar23 = fVar19 * 255.0 + 0.5;
        }
        fVar19 = 1.0;
        if (fVar21 <= 1.0) {
          fVar19 = fVar21;
        }
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
        fVar20 = 0.5;
        if (0.0 <= fVar21) {
          fVar20 = fVar19 * 255.0 + 0.5;
        }
        fVar19 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                           lVar11 + 0xc) * fVar18 * *(float *)(lVar11 + 0xc84);
        fVar18 = 1.0;
        if (fVar22 <= 1.0) {
          fVar18 = fVar22;
        }
        fVar21 = 0.5;
        if (0.0 <= fVar22) {
          fVar21 = fVar18 * 255.0 + 0.5;
        }
        fVar18 = 1.0;
        if (fVar19 <= 1.0) {
          fVar18 = fVar19;
        }
        fVar22 = 0.5;
        if (0.0 <= fVar19) {
// if you paid for this, you were scammed
          fVar22 = fVar18 * 255.0 + 0.5;
        }
        func_0x0031d83c(lVar14,(int)fVar23 | (int)fVar20 << 8 | (int)fVar21 << 0x10 |
                               (int)fVar22 << 0x18);
        lVar14 = *(long *)(&UNK_000021e8 + lVar11);
        lVar13 = **(long **)(&UNK_00001fe8 + lRam00000000020973e0);
        fVar19 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                           lVar11);
        fStack_70 = *(float *)(lVar14 + 0x28) - fVar19;
        fStack_6c = *(float *)(lVar14 + 0x2c) - fVar19;
        fStack_68 = fVar19 + *(float *)(lVar14 + 0x28) + *(float *)(lVar14 + 0x30);
        fStack_64 = fVar19 + *(float *)(lVar14 + 0x2c) + *(float *)(lVar14 + 0x34);
        fVar18 = *(float *)(lVar13 + 0x10);
        if ((fVar18 <= fStack_68 - fStack_70) &&
           (*(float *)(lVar13 + 0x14) <= fStack_64 - fStack_6c)) {
          fVar19 = -1.0 - fVar19;
          fStack_70 = fStack_70 - fVar19;
          fStack_6c = fStack_6c - fVar19;
          fStack_68 = fVar19 + fStack_68;
          fStack_64 = fVar19 + fStack_64;
        }
        piVar15 = *(int **)(lVar14 + 0x2c8);
        if (*piVar15 == 0) {
          func_0x003207f4();
          piVar15 = *(int **)(lVar14 + 0x2c8);
// WM - do not claim this as your own
          fVar18 = *(float *)(lVar13 + 0x10);
        }
        uVar4 = *(undefined8 *)(lVar13 + 8);
        uStack_78 = CONCAT44(*(float *)(lVar13 + 0x14) + (float)((ulong)uVar4 >> 0x20),
                             fVar18 + (float)uVar4);
        func_0x00320d78(piVar15,(undefined8 *)(lVar13 + 8),&uStack_78,0);
        fVar20 = *(float *)((long)&dylib_command_00001148.dylib.name.offset + lRam00000000020973e0);
        fVar21 = *(float *)((long)&dylib_command_00001148.dylib.timestamp + lRam00000000020973e0);
        fVar22 = *(float *)((long)&dylib_command_00001148.dylib.current_version +
                           lRam00000000020973e0);
        fVar19 = *(float *)((long)&dylib_command_00001148.dylib.compatibility_version +
                           lRam00000000020973e0) *
                 *(float *)(&UNK_000021fc + lVar11) * *(float *)(lRam00000000020973e0 + 0xc84);
        fVar18 = 1.0;
        if (fVar20 <= 1.0) {
          fVar18 = fVar20;
        }
        fVar23 = 0.5;
        if (0.0 <= fVar20) {
          fVar23 = fVar18 * 255.0 + 0.5;
        }
        fVar18 = 1.0;
        if (fVar21 <= 1.0) {
          fVar18 = fVar21;
        }
        fVar20 = 0.5;
        if (0.0 <= fVar21) {
          fVar20 = fVar18 * 255.0 + 0.5;
        }
        fVar18 = 1.0;
        if (fVar22 <= 1.0) {
          fVar18 = fVar22;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        }
        fVar21 = 0.5;
        if (0.0 <= fVar22) {
          fVar21 = fVar18 * 255.0 + 0.5;
        }
        fVar18 = 1.0;
        if (fVar19 <= 1.0) {
          fVar18 = fVar19;
        }
        fVar22 = 0.5;
        if (0.0 <= fVar19) {
          fVar22 = fVar18 * 255.0 + 0.5;
        }
        func_0x003235ac(*(undefined4 *)(lVar14 + 0x60),0x40400000,*(undefined8 *)(lVar14 + 0x2c8),
                        &fStack_70,&fStack_68,
                        (int)fVar23 | (int)fVar20 << 8 | (int)fVar21 << 0x10 | (int)fVar22 << 0x18,0
                       );
        func_0x00320e84(*(undefined8 *)(lVar14 + 0x2c8));
      }
    }
    else {
      plVar8 = *(long **)(&UNK_00001450 + lVar11);
      plVar17 = plVar8;
      if (0 < *(int *)(&UNK_00001448 + lVar11)) {
        do {
          if (*plVar17 == lVar13) break;
          plVar17 = plVar17 + 1;
        } while (plVar17 < plVar8 + *(int *)(&UNK_00001448 + lVar11));
      }
      lVar14 = lVar13;
      if (((ulong)((long)plVar17 - (long)plVar8) >> 0x22 & 1) == 0) {
// WM - more drops soon - github.com/pengussy
        uVar7 = (ulong)((long)plVar17 - (long)plVar8) >> 3 & 0x7fffffff;
        do {
          lVar9 = plVar8[uVar7];
          if ((*(uint *)(lVar9 + 0x14) >> 0x18 & 1) == 0) {
            if (*(long *)(lVar9 + 0x3c0) != lVar13) {
              lVar10 = lVar9;
              while (lVar10 != lVar13) {
                lVar10 = *(long *)(lVar10 + 0x3b8);
                if (lVar10 == 0) goto LAB_00314ba4;
              }
            }
            if (((*(char *)(lVar9 + 0xcc) == '\x01') && ((*(byte *)(lVar9 + 0xd4) & 1) == 0)) &&
               ((*(uint *)(lVar9 + 0x14) >> 0x19 & 1) <= (*(uint *)(lVar13 + 0x14) >> 0x19 & 1))) {
              lVar14 = lVar9;
            }
          }
          bVar1 = 0 < (long)uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar1);
      }
LAB_00314ba4:
      uVar2 = *(uint *)(lVar13 + 0x1dc);
      fVar18 = fVar18 * *(float *)(lVar11 + 0xc84);
      if (fVar18 < 1.0) {
        uVar2 = uVar2 & 0xffffff | (int)(fVar18 * (float)(uVar2 >> 0x18)) << 0x18;
      }
      func_0x0031d83c(lVar14,uVar2);
/* wm:found on a paste site? it was re-uploaded illegally */
    }
  }
LAB_00314dfc:
  lVar11 = *(long *)(&UNK_000021e0 + lVar3);
  if (lVar11 == 0) {
    lVar11 = 0;
    lVar13 = 0;
    iVar5 = *(int *)(&UNK_00001448 + lVar3);
  }
  else {
    if ((*(byte *)(lVar11 + 0x15) >> 5 & 1) == 0) {
      lVar11 = *(long *)(lVar11 + 0x3c0);
    }
    else {
      lVar11 = 0;
    }
    lVar13 = *(long *)(&UNK_000021f0 + lVar3);
    iVar5 = *(int *)(&UNK_00001448 + lVar3);
  }
  if (iVar5 != 0) {
    plVar17 = *(long **)(&UNK_00001450 + lVar3);
    lVar14 = (long)iVar5 << 3;
    do {
      lVar9 = *plVar17;
      if (((*(char *)(lVar9 + 0xcc) == '\x01') && ((*(byte *)(lVar9 + 0xd4) & 1) == 0)) &&
         (((*(uint *)(lVar9 + 0x14) >> 0x18 & 1) == 0 && (lVar9 != lVar11 && lVar9 != lVar13)))) {
        func_0x0031dba8(lVar9,*(uint *)(lVar9 + 0x14) >> 0x19 & 1);
      }
/* WM - do not claim this as your own */
      plVar17 = plVar17 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  if (((lVar11 != 0) && (*(char *)(lVar11 + 0xcc) == '\x01')) &&
     ((*(byte *)(lVar11 + 0xd4) & 1) == 0)) {
    func_0x0031dba8(lVar11,*(uint *)(lVar11 + 0x14) >> 0x19 & 1);
  }
  if (((lVar13 != 0) && (*(char *)(lVar13 + 0xcc) == '\x01')) &&
     ((*(byte *)(lVar13 + 0xd4) & 1) == 0)) {
    func_0x0031dba8(lVar13,*(uint *)(lVar13 + 0x14) >> 0x19 & 1);
  }
  if ((*(char *)(lVar3 + 0x78) == '\x01') && (*(int *)(&UNK_00002490 + lVar3) != -1)) {
    func_0x00300964(*(undefined4 *)(lVar3 + 0x100),*(undefined4 *)(lVar3 + 0x104),
                    *(undefined4 *)(lVar3 + 0xda0),*(int *)(&UNK_00002490 + lVar3),0xffffffff,
                    0xff000000,0x30000000);
  }
  *(undefined4 *)(lVar3 + 0xdc) = 0;
  *(undefined4 *)(lVar3 + 0xe0) = 0;
  if (*(int *)(lVar3 + 0x1fe0) != 0) {
    plVar17 = *(long **)(&UNK_00001fe8 + lVar3);
    plVar8 = plVar17 + *(int *)(lVar3 + 0x1fe0);
    do {
      lVar11 = *plVar17;
      iVar5 = **(int **)(lVar11 + 0xa0);
      func_0x00314694(*(int **)(lVar11 + 0xa0),**(int **)(lVar11 + 0xa8) + iVar5);
      piVar15 = *(int **)(lVar11 + 0xa8);
      if (*piVar15 != 0) {
        _memcpy(*(long *)(*(long *)(lVar11 + 0xa0) + 8) + (long)iVar5 * 8,
                *(undefined8 *)(piVar15 + 2),(long)*piVar15 << 3);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        func_0x00314694(piVar15,0);
      }
      if ((*(long *)(lVar11 + 0x50) != 0) &&
         (*(float *)(lVar11 + 0x44) == (float)*(double *)(lVar3 + 0x10))) {
        uVar16 = *(undefined8 *)(lVar11 + 0xa0);
        uVar4 = func_0x00306aec(lVar11,1,"##Foreground");
        func_0x0032589c(lVar11 + 0x58,uVar16,uVar4);
      }
      if (*(int *)(lVar11 + 0x68) != 0) {
        lVar13 = (long)*(int *)(lVar11 + 0x68) << 3;
        puVar12 = *(undefined8 **)(lVar11 + 0x70);
        do {
          func_0x003208d8(*puVar12);
          lVar13 = lVar13 + -8;
          puVar12 = puVar12 + 1;
        } while (lVar13 != 0);
      }
      uVar4 = NEON_rev64(*(undefined8 *)(lVar11 + 0x60),4);
      *(ulong *)(lVar3 + 0xdc) =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar3 + 0xdc) >> 0x20) +
                    (int)((ulong)uVar4 >> 0x20),(int)*(undefined8 *)(lVar3 + 0xdc) + (int)uVar4);
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar8);
  }
  if (((*(byte *)(lVar3 + 0x2c) >> 4 & 1) != 0) &&
     (*(int *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" + lVar3 + 0x40)
      != 0)) {
    lVar11 = (long)*(int *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                           lVar3 + 0x40) << 3;
    puVar12 = *(undefined8 **)((long)&dylib_command_000011a8.cmd + lVar3);
    do {
      FUN_0032f770(*puVar12);
      lVar11 = lVar11 + -8;
      puVar12 = puVar12 + 1;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    } while (lVar11 != 0);
  }
  if (*(int *)(&UNK_00002770 + lVar3) != 0) {
    lVar11 = *(long *)(&UNK_00002778 + lVar3);
    lVar13 = (long)*(int *)(&UNK_00002770 + lVar3) << 5;
    do {
      if (*(int *)(lVar11 + 4) == 5) {
        (**(code **)(lVar11 + 0x10))(lVar3,lVar11);
      }
      lVar11 = lVar11 + 0x20;
      lVar13 = lVar13 + -0x20;
    } while (lVar13 != 0);
  }
  return;
}

