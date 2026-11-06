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
 *  file-id: 0x329dc8:7ebab09938
 *  --------------------------------------------------------------------------*/

void FUN_00329dc8(long param_1,undefined4 param_2,undefined4 param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
/*  do not claim this as your own  */
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  ushort uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  long lStack_a0;
  
  lVar17 = *(long *)(param_1 + 0x2b0);
  *(undefined1 *)(lVar17 + 0xb8) = 1;
  lVar18 = *(long *)(param_1 + 0x38);
  lVar12 = func_0x00329c10();
  *(undefined1 *)(lVar12 + 0x56) = *(undefined1 *)(lVar18 + 0x56);
// reversing this took months of machine time
  if ((lRam00000000020973e0 != 0) && (((&UNK_0000286d)[lRam00000000020973e0] & 1) != 0)) {
    func_0x002fd6a4("[font] Texture #%03d: resize+repack %dx%d => Texture #%03d: %dx%d\n");
  }
  func_0x0032a29c(param_1);
  uVar7 = *(uint *)(lVar17 + 0x70);
  if ((int)uVar7 < 1) {
    lStack_a0 = 0;
  }
  else {
    uVar11 = uVar7;
    if (uVar7 < 9) {
      uVar11 = 8;
    }
    lStack_a0 = func_0x002fd6d8((ulong)uVar11 << 2);
    if (lStack_a0 == 0) {
      lStack_a0 = 0;
    }
    else if (*(long *)(lVar17 + 0x78) != 0) {
      _memcpy(lStack_a0,*(long *)(lVar17 + 0x78),(ulong)uVar7 << 2);
    }
  }
  uVar4 = *(undefined4 *)(lVar17 + 0x60);
  uVar5 = *(undefined4 *)(lVar17 + 100);
  lVar13 = *(long *)(lVar17 + 0x68);
  *(undefined8 *)(lVar17 + 0x60) = 0;
  *(undefined8 *)(lVar17 + 0x68) = 0;
  if (*(int *)(lVar17 + 0x70) != 0) {
    puVar20 = *(uint **)(lVar17 + 0x78);
/* WM - origin: github.com/pengussy */
    puVar3 = puVar20 + *(int *)(lVar17 + 0x70);
    do {
      if ((*puVar20 >> 0x1e & 1) != 0) {
        puVar1 = (ushort *)(lVar13 + ((long)((ulong)*puVar20 << 0x2c) >> 0x2c) * 8);
        if (puVar1[2] != 0 || puVar1[3] != 0) {
          uVar11 = func_0x00327cac(param_1,puVar1[2],puVar1[3],puVar20);
          if (uVar11 == 0xffffffff) {
            if ((lRam00000000020973e0 != 0) && (((&UNK_0000286d)[lRam00000000020973e0] & 1) != 0)) {
              func_0x002fd6a4("[font] Texture #%03d: resize failed. Will grow.\n");
            }
            *(undefined1 *)(lVar12 + 0x57) = 1;
            *(undefined4 *)(lVar17 + 0x60) = uVar4;
            *(undefined4 *)(lVar17 + 100) = uVar5;
            lVar12 = *(long *)(lVar17 + 0x68);
            *(long *)(lVar17 + 0x68) = lVar13;
            if (*(long *)(lVar17 + 0x78) != 0) {
              *(undefined8 *)(lVar17 + 0x70) = 0;
              func_0x002fda6c();
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
              *(undefined8 *)(lVar17 + 0x78) = 0;
            }
            iVar10 = *(int *)(lVar17 + 0x74);
            if (iVar10 < (int)uVar7) {
              uVar11 = 8;
              if (iVar10 != 0) {
                uVar11 = iVar10 + iVar10 / 2;
              }
              if ((int)uVar11 <= (int)uVar7) {
                uVar11 = uVar7;
              }
              lVar13 = func_0x002fd6d8(-(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 |
                                       (ulong)uVar11 << 2);
              if (*(long *)(lVar17 + 0x78) != 0) {
                _memcpy(lVar13,*(long *)(lVar17 + 0x78),(long)*(int *)(lVar17 + 0x70) << 2);
                func_0x002fda6c(*(undefined8 *)(lVar17 + 0x78));
              }
              *(long *)(lVar17 + 0x78) = lVar13;
              *(uint *)(lVar17 + 0x70) = uVar7;
              *(uint *)(lVar17 + 0x74) = uVar11;
              if ((lVar13 != 0) && (lStack_a0 != 0)) {
                _memcpy(lVar13,lStack_a0,(long)(int)uVar7 << 2);
              }
            }
            else {
              *(uint *)(lVar17 + 0x70) = uVar7;
            }
            uVar6 = *(undefined8 *)(param_1 + 0x28);
            *(long *)(param_1 + 0x38) = lVar18;
/* more drops soon - github.com/pengussy */
            uVar23 = NEON_scvtf(*(undefined8 *)(lVar18 + 0x1c),4);
            uVar26 = NEON_fmov(0x3f800000,4);
            *(ulong *)(param_1 + 0x54) =
                 CONCAT44((float)((ulong)uVar26 >> 0x20) / (float)((ulong)uVar23 >> 0x20),
                          (float)uVar26 / (float)uVar23);
            *(long *)(param_1 + 0x28) = lVar18;
            func_0x00329930(param_1,uVar6,*(undefined8 *)(param_1 + 0x30),lVar18,
                            *(undefined8 *)(param_1 + 0x30));
            func_0x0032a434(param_1,param_2,param_3);
            goto LAB_0032a0ec;
          }
          puVar2 = (ushort *)
                   (*(long *)(*(long *)(param_1 + 0x2b0) + 0x68) +
                   ((long)((ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x78) +
                                           (ulong)(uVar11 & 0x7ffff) * 4) << 0x2c) >> 0x2c) * 8);
          uVar11 = (uint)puVar2[3];
          if (puVar2[3] != 0) {
            uVar22 = *puVar1;
            uVar21 = (uint)puVar1[1];
            uVar8 = *puVar2;
            uVar19 = (uint)puVar2[1];
            uVar9 = puVar2[2];
            do {
              _memcpy(*(long *)(lVar12 + 0x28) +
                      ((ulong)uVar8 + (long)*(int *)(lVar12 + 0x1c) * (long)(int)uVar19) *
                      (long)*(int *)(lVar12 + 0x24),
/* WM - watermarked copy - do not remove */
                      *(long *)(lVar18 + 0x28) +
                      ((ulong)uVar22 + (long)*(int *)(lVar18 + 0x1c) * (long)(int)uVar21) *
                      (long)*(int *)(lVar18 + 0x24),
                      (long)*(int *)(lVar12 + 0x24) * (long)(int)(uint)uVar9);
              uVar21 = uVar21 + 1;
              uVar19 = uVar19 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
        }
      }
      puVar20 = puVar20 + 1;
    } while (puVar20 != puVar3);
  }
  *(undefined4 *)(lVar17 + 0x9c) = 0;
  *(undefined4 *)(lVar17 + 0xa0) = 0;
  uVar7 = *(uint *)(lVar17 + 0xc0);
  if (0 < (int)uVar7) {
    uVar11 = 0;
    lVar12 = *(long *)(lVar17 + 0xd0);
/* do not claim this as your own */
    do {
      lVar18 = *(long *)(lVar12 + (ulong)(uVar11 >> 5) * 8) + (ulong)(uVar11 & 0x1f) * 0x68;
      iVar10 = *(int *)(lVar18 + 0x30);
      if (iVar10 != 0) {
        lVar16 = (long)iVar10 * 0x2c;
        puVar20 = (uint *)(*(long *)(lVar18 + 0x38) + 0x28);
        do {
          if (*puVar20 != 0xffffffff) {
            puVar3 = (uint *)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x68) +
                             ((long)((ulong)*(uint *)(*(long *)(*(long *)(param_1 + 0x2b0) + 0x78) +
                                                     ((ulong)*puVar20 & 0x7ffff) * 4) << 0x2c) >>
                             0x2c) * 8);
            uVar21 = *puVar3;
            uVar19 = puVar3[1];
            uVar22 = (ushort)(uVar21 >> 0x10);
            auVar24._6_2_ = 0;
            auVar24._0_6_ = CONCAT24(uVar22,uVar21) & 0xffff0000ffff;
            auVar24._8_4_ = (uVar19 & 0xffff) + (uVar21 & 0xffff);
            auVar24._12_4_ = (uVar19 >> 0x10) + (uint)uVar22;
            auVar24 = NEON_ucvtf(auVar24,4);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            fVar27 = (float)*(undefined8 *)(param_1 + 0x54);
            fVar28 = (float)((ulong)*(undefined8 *)(param_1 + 0x54) >> 0x20);
            auVar25._0_8_ = CONCAT44(fVar28 * auVar24._4_4_,fVar27 * auVar24._0_4_);
            auVar25._8_4_ = fVar27 * auVar24._8_4_;
            auVar25._12_4_ = fVar28 * auVar24._12_4_;
            *(long *)(puVar20 + -2) = auVar25._8_8_;
            *(undefined8 *)(puVar20 + -4) = auVar25._0_8_;
          }
          lVar16 = lVar16 + -0x2c;
          puVar20 = puVar20 + 0xb;
        } while (lVar16 != 0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
  }
  func_0x0032a510(param_1);
  func_0x0032ae0c(param_1);
  *(undefined1 *)(lVar17 + 0xb8) = 0;
  if (*(int *)(param_1 + 0x2a0) != 0) {
    plVar14 = *(long **)(param_1 + 0x2a8);
    lVar12 = (long)*(int *)(param_1 + 0x2a0) << 3;
    do {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      puVar15 = (undefined8 *)*plVar14;
      if (puVar15[2] == param_1) {
        *puVar15 = *(undefined8 *)(param_1 + 0x5c);
        puVar15[1] = param_1 + 0x88;
      }
      plVar14 = plVar14 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  lVar12 = lVar13;
LAB_0032a0ec:
  if (lStack_a0 != 0) {
    func_0x002fda6c(lStack_a0);
  }
  if (lVar12 != 0) {
    func_0x002fda6c(lVar12);
  }
  return;
}

