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
 *  file-id: 0x3006a0:5bbfeb9c9c
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003006a0(undefined1 (*param_1) [12],int param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  short sVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  ushort uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  byte bVar28;
  byte bVar29;
  short sVar30;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  short sVar31;
  float fVar32;
  float fVar33;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  if ((((param_2 == *(int *)(&UNK_00001ff4 + lRam00000000020973e0)) &&
       (((param_3 >> 2 & 1) != 0 || ((*(byte *)(lRam00000000020973e0 + 0x1ff0) & 1) != 0)))) &&
      ((param_2 != *(int *)(&UNK_00001e80 + lRam00000000020973e0) ||
       (((byte)(&UNK_00001e84)[lRam00000000020973e0] >> 1 & 1) == 0)))) &&
     (lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0), (*(byte *)(lVar9 + 0x179) & 1) == 0))
  {
    uVar10 = 0;
    if ((param_3 >> 3 & 1) == 0) {
      uVar10 = *(undefined4 *)(lRam00000000020973e0 + 0xccc);
    }
/* do not claim this as your own - github.com/pengussy */
    auVar17 = *param_1;
    fStack_44 = (float)((ulong)*(undefined8 *)(*param_1 + 8) >> 0x20);
    auVar18._12_4_ = fStack_44;
    auVar18._0_12_ = auVar17;
    uVar3 = *(undefined8 *)(lVar9 + 0x270);
    uVar2 = *(undefined8 *)(lVar9 + 0x268);
    sVar5 = -(ushort)(auVar17._8_4_ < (float)uVar3);
    fVar32 = (float)((ulong)uVar3 >> 0x20);
    iVar7 = -(uint)(fStack_44 < fVar32);
    bVar28 = (byte)((uint)iVar7 >> 8);
    fVar16 = (float)uVar2;
    sVar30 = -(ushort)(fVar16 <= auVar17._0_4_);
    fVar6 = (float)((ulong)uVar2 >> 0x20);
    sVar31 = -(ushort)(fVar6 <= auVar17._4_4_);
    iVar8 = (int)(short)(((uint)bVar28 << 0x18) >> 0x10);
    auVar1._10_2_ = (short)((ulong)uVar3 >> 0x10);
    auVar1._0_10_ = *(unkbyte10 *)(lVar9 + 0x268);
    auVar1._12_2_ = (short)((ulong)uVar3 >> 0x20);
    auVar1._14_2_ = (short)((ulong)uVar3 >> 0x30);
    auVar4[2] = (char)((uint)(int)sVar30 >> 0x10);
    auVar4._0_2_ = sVar30;
    auVar4[3] = (char)((uint)(int)sVar30 >> 0x18);
    auVar4[4] = (char)sVar31;
    auVar4[5] = (char)((ushort)sVar31 >> 8);
    auVar4[6] = (char)((uint)(int)sVar31 >> 0x10);
    auVar4[7] = (char)((uint)(int)sVar31 >> 0x18);
    auVar4[8] = (char)sVar5;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    auVar4[9] = (char)((ushort)sVar5 >> 8);
    auVar4[10] = (char)((uint)(int)sVar5 >> 0x10);
    auVar4[0xb] = (char)((uint)(int)sVar5 >> 0x18);
    auVar4[0xc] = (char)iVar7;
    auVar4[0xd] = bVar28;
    auVar4[0xe] = (char)((uint)iVar8 >> 0x10);
    auVar4[0xf] = (char)((uint)iVar8 >> 0x18);
    auVar18 = auVar18 ^ (auVar18 ^ auVar1) & ~auVar4;
    fStack_48 = auVar18._8_4_;
    fStack_44 = auVar18._12_4_;
    fStack_50 = auVar18._0_4_;
    fStack_4c = auVar18._4_4_;
    if ((param_3 >> 1 & 1) != 0) {
      fVar16 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                         lRam00000000020973e0 + 0x38);
      fVar15 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                         lRam00000000020973e0 + 0x3c);
      fVar6 = *(float *)((long)&dylib_command_00001148.cmd + lRam00000000020973e0);
      fVar32 = 1.0;
/* WM - donate: donate/README.md */
      if (fVar16 <= 1.0) {
        fVar32 = fVar16;
      }
      fVar33 = 0.5;
      if (0.0 <= fVar16) {
        fVar33 = fVar32 * 255.0 + 0.5;
      }
      fVar16 = 1.0;
      if (fVar15 <= 1.0) {
        fVar16 = fVar15;
      }
      fVar32 = 0.5;
      if (0.0 <= fVar15) {
        fVar32 = fVar16 * 255.0 + 0.5;
      }
      fVar16 = *(float *)((long)&dylib_command_00001148.cmdsize + lRam00000000020973e0) *
               *(float *)(lRam00000000020973e0 + 0xc84);
      uVar12 = 0;
      uVar13 = 0x3f80;
      if (fVar6 <= 1.0) {
        uVar12 = SUB42(fVar6,0);
        uVar13 = (undefined2)((uint)fVar6 >> 0x10);
      }
      fVar15 = (float)CONCAT22(uVar13,uVar12) * 255.0 + 0.5;
      uVar20 = 0;
      uVar22 = 0;
      uVar24 = 0;
      uVar26 = 0x3f;
      if (0.0 <= fVar6) {
        uVar20 = SUB41(fVar15,0);
// WM - found on a paste site? it was re-uploaded illegally
        uVar22 = (undefined1)((uint)fVar15 >> 8);
        uVar24 = (undefined1)((uint)fVar15 >> 0x10);
        uVar26 = (undefined1)((uint)fVar15 >> 0x18);
      }
      uVar21 = 0;
      uVar23 = 0;
      uVar25 = 0x80;
      uVar27 = 0x3f;
      if (fVar16 <= 1.0) {
        uVar21 = SUB41(fVar16,0);
        uVar23 = (undefined1)((uint)fVar16 >> 8);
        uVar25 = (undefined1)((uint)fVar16 >> 0x10);
        uVar27 = (undefined1)((uint)fVar16 >> 0x18);
      }
      fVar6 = (float)CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar23,uVar21))) * 255.0 + 0.5;
      uVar12 = 0;
      uVar13 = 0x3f00;
      if (0.0 <= fVar16) {
        uVar12 = SUB42(fVar6,0);
        uVar13 = (undefined2)((uint)fVar6 >> 0x10);
      }
      func_0x003235ac(uVar10,0,*(undefined8 *)(lVar9 + 0x2c8),&fStack_50,(ulong)&fStack_50 | 8,
                      (int)fVar33 | (int)fVar32 << 8 |
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                      (int)(float)CONCAT13(uVar26,CONCAT12(uVar24,CONCAT11(uVar22,uVar20))) << 0x10
                      | (int)(float)CONCAT22(uVar13,uVar12) << 0x18,0);
      return;
    }
    fStack_50 = fStack_50 + (float)_UNK_01adf020;
    fStack_4c = fStack_4c + (float)((ulong)_UNK_01adf020 >> 0x20);
    fStack_48 = fStack_48 + (float)_UNK_01adf028;
    fStack_44 = fStack_44 + (float)((ulong)_UNK_01adf028 >> 0x20);
    sVar5 = -(ushort)(fStack_48 <= (float)uVar3);
    iVar7 = -(uint)(fStack_44 <= fVar32);
    bVar28 = (byte)iVar7;
    bVar29 = (byte)((uint)iVar7 >> 8);
    sVar30 = -(ushort)(fVar16 <= fStack_50);
    sVar31 = -(ushort)(fVar6 <= fStack_4c);
    uVar14 = (uint)(byte)((byte)sVar30 & (byte)_UNK_01adf030);
    auVar17._0_8_ =
         CONCAT17((byte)((uint)(int)sVar31 >> 0x18) & (byte)((ulong)_UNK_01adf030 >> 0x38),
                  (uint7)CONCAT14((byte)sVar31 & (byte)((ulong)_UNK_01adf030 >> 0x20),uVar14));
    auVar17[8] = (byte)sVar5 & (byte)_UNK_01adf038;
    auVar17[9] = (byte)((ushort)sVar5 >> 8) & (byte)((ulong)_UNK_01adf038 >> 8);
    auVar17[10] = (byte)((uint)(int)sVar5 >> 0x10) & (byte)((ulong)_UNK_01adf038 >> 0x10);
    auVar17[0xb] = (byte)((uint)(int)sVar5 >> 0x18) & (byte)((ulong)_UNK_01adf038 >> 0x18);
    auVar19[0xc] = bVar28 & (byte)((ulong)_UNK_01adf038 >> 0x20);
    auVar19._0_12_ = auVar17;
/*  more drops soon - github.com/pengussy  */
    auVar19[0xd] = bVar29 & (byte)((ulong)_UNK_01adf038 >> 0x28);
    auVar19[0xe] = (char)bVar29 >> 7 & (byte)((ulong)_UNK_01adf038 >> 0x30);
    auVar19[0xf] = (char)bVar29 >> 7 & (byte)((ulong)_UNK_01adf038 >> 0x38);
    uVar11 = NEON_uminv(CONCAT26((short)(CONCAT13(bVar29,CONCAT12(bVar28,sVar5)) >> 0x10),
                                 CONCAT24(sVar5,CONCAT22(sVar31,sVar30))),2);
    if ((uVar11 & 1) == 0) {
      func_0x00320d78(*(undefined8 *)(lVar9 + 0x2c8),&fStack_50,(ulong)&fStack_50 | 8,0);
    }
    fVar16 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                       lRam00000000020973e0 + 0x38);
    fVar15 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                       lRam00000000020973e0 + 0x3c);
    fVar6 = *(float *)((long)&dylib_command_00001148.cmd + lRam00000000020973e0);
    fVar32 = 1.0;
    if (fVar16 <= 1.0) {
      fVar32 = fVar16;
    }
    fVar33 = 0.5;
    if (0.0 <= fVar16) {
      fVar33 = fVar32 * 255.0 + 0.5;
    }
    fVar16 = 1.0;
    if (fVar15 <= 1.0) {
      fVar16 = fVar15;
    }
    fVar32 = 0.5;
    if (0.0 <= fVar15) {
      fVar32 = fVar16 * 255.0 + 0.5;
    }
    fVar16 = *(float *)((long)&dylib_command_00001148.cmdsize + lRam00000000020973e0) *
             *(float *)(lRam00000000020973e0 + 0xc84);
    uVar12 = 0;
    uVar13 = 0x3f80;
    if (fVar6 <= 1.0) {
      uVar12 = SUB42(fVar6,0);
      uVar13 = (undefined2)((uint)fVar6 >> 0x10);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
    }
    fVar15 = (float)CONCAT22(uVar13,uVar12) * 255.0 + 0.5;
    uVar20 = 0;
    uVar22 = 0;
    uVar24 = 0;
    uVar26 = 0x3f;
    if (0.0 <= fVar6) {
      uVar20 = SUB41(fVar15,0);
      uVar22 = (undefined1)((uint)fVar15 >> 8);
      uVar24 = (undefined1)((uint)fVar15 >> 0x10);
      uVar26 = (undefined1)((uint)fVar15 >> 0x18);
    }
    uVar21 = 0;
    uVar23 = 0;
    uVar25 = 0x80;
    uVar27 = 0x3f;
    if (fVar16 <= 1.0) {
      uVar21 = SUB41(fVar16,0);
      uVar23 = (undefined1)((uint)fVar16 >> 8);
      uVar25 = (undefined1)((uint)fVar16 >> 0x10);
      uVar27 = (undefined1)((uint)fVar16 >> 0x18);
    }
    fVar6 = (float)CONCAT13(uVar27,CONCAT12(uVar25,CONCAT11(uVar23,uVar21))) * 255.0 + 0.5;
    uVar12 = 0;
    uVar13 = 0x3f00;
    if (0.0 <= fVar16) {
      uVar12 = SUB42(fVar6,0);
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar13 = (undefined2)((uint)fVar6 >> 0x10);
    }
    func_0x003235ac(uVar10,0,*(undefined8 *)(lVar9 + 0x2c8),&fStack_50,(ulong)&fStack_50 | 8,
                    (int)fVar33 | (int)fVar32 << 8 |
                    (int)(float)CONCAT13(uVar26,CONCAT12(uVar24,CONCAT11(uVar22,uVar20))) << 0x10 |
                    (int)(float)CONCAT22(uVar13,uVar12) << 0x18,0);
    if (((uVar14 + (int)((ulong)auVar17._0_8_ >> 0x20) + auVar17._8_4_ + auVar19._12_4_ ^ 0xffffffff
         ) & 0xf) != 0) {
      func_0x00320e84(*(undefined8 *)(lVar9 + 0x2c8));
      return;
    }
  }
  return;
}

