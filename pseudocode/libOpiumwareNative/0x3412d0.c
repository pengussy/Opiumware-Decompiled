/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3412d0:626a88104b
   =========================================================================== */

uint FUN_003412d0(undefined1 param_1 [16],undefined4 param_2,undefined8 param_3,uint param_4,
                 uint param_5,float *param_6)

{
  uint uVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  float fVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uStack_104;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  byte bStack_c7;
  char cStack_c6;
  byte bStack_c5;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  uint uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float fStack_94;
  undefined4 uStack_90;
  byte abStack_89 [9];
  
  lVar7 = lRam00000000020973e0;
  abStack_89[0] = (byte)param_4;
  lVar14 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar14 + 0xce) = 1;
  if ((*(byte *)(lVar14 + 0xd1) & 1) != 0) {
    return 0;
  }
  uVar10 = func_0x003053a4(lVar14,param_3,0);
  uVar11 = func_0x002ff5c8(param_3,0);
  fVar16 = (float)func_0x002ffe24(0xbf800000,param_3,uVar11,0);
  uStack_a0 = *(ulong *)param_6;
  uStack_a0 = uStack_a0 ^
              (uStack_a0 ^ CONCAT44(param_2,fVar16)) &
              CONCAT44(-(uint)((float)(uStack_a0 >> 0x20) == 0.0),-(uint)((float)uStack_a0 == 0.0));
  fVar18 = *(float *)(lVar14 + 0x150) + (float)((ulong)*(undefined8 *)(lVar14 + 0x118) >> 0x20);
  fStack_a8 = (float)*(undefined8 *)(lVar14 + 0x118);
  fVar8 = fStack_a8;
  _fStack_a8 = CONCAT44(fVar18,fStack_a8);
  fStack_94 = fVar16;
  uStack_90 = param_2;
  func_0x003154fc(0,&uStack_a0);
  pfVar3 = &fStack_a8;
  if ((param_5 & 2) != 0) {
    pfVar3 = (float *)(lVar14 + 600);
/*  reversing this took months of machine time  */
  }
  fStack_c0 = *pfVar3;
  if (((param_5 >> 0x18 & 1) == 0) && (*param_6 != 0.0)) {
    fVar16 = (float)uStack_a0;
  }
  else {
    pfVar3 = (float *)(lVar14 + 0x250);
    if ((param_5 & 2) != 0) {
      pfVar3 = (float *)(lVar14 + 0x260);
    }
    if (fVar16 < *pfVar3 - fStack_c0) {
      fVar16 = *pfVar3 - fStack_c0;
    }
    uStack_a0 = CONCAT44(uStack_a0._4_4_,fVar16);
  }
  fStack_b8 = fStack_c0 + fVar16;
  fStack_b4 = fVar18 + uStack_a0._4_4_;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  fStack_bc = fVar18;
  if ((param_5 >> 0x1a & 1) == 0) {
    fVar16 = 0.0;
    if ((param_5 >> 1 & 1) == 0) {
      fVar16 = *(float *)(lVar7 + 0xcd4);
    }
    fVar17 = (float)(int)(*(float *)(lVar7 + 0xcd8) * 0.5);
    fStack_c0 = fStack_c0 - (float)(int)(fVar16 * 0.5);
    fStack_bc = fVar18 - fVar17;
    fStack_b8 = fStack_b8 + (fVar16 - (float)(int)(fVar16 * 0.5));
    fStack_b4 = fStack_b4 + (*(float *)(lVar7 + 0xcd8) - fVar17);
  }
  iVar4 = (param_5 & 8) << 3;
  if ((param_5 >> 1 & 1) == 0) {
    uVar12 = FUN_00315614(&fStack_c0,uVar10,0,iVar4);
  }
  else {
    uVar19 = *(undefined4 *)(lVar14 + 0x268);
    uVar20 = *(undefined4 *)(lVar14 + 0x270);
    *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(lVar14 + 600);
    *(undefined4 *)(lVar14 + 0x270) = *(undefined4 *)(lVar14 + 0x260);
    uVar12 = FUN_00315614(&fStack_c0,uVar10,0,iVar4);
    *(undefined4 *)(lVar14 + 0x268) = uVar19;
    *(undefined4 *)(lVar14 + 0x270) = uVar20;
  }
  bVar9 = ((&UNK_00001e86)[lVar7] & 0x40) == 0;
  if ((uVar12 & 1) == 0) {
    if (bVar9) {
      return 0;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    if ((&UNK_000023d8)[lVar7] != '\x01') {
      return 0;
    }
    if (*(float *)(&UNK_000023e8 + lVar7) <= fStack_bc) {
      return 0;
    }
    if (fStack_b4 <= *(float *)(&UNK_000023e0 + lVar7)) {
      return 0;
    }
    if (*(float *)(&UNK_000023e4 + lVar7) <= fStack_c0) {
      return 0;
    }
    bVar9 = false;
    bVar6 = false;
    if (fStack_b8 <= *(float *)(&UNK_000023dc + lVar7)) {
      return 0;
    }
  }
  else {
    bVar6 = true;
  }
  uVar5 = *(uint *)(&UNK_00001e40 + lVar7) >> 6 & 1;
  if ((param_5 & 8) == 0) {
    uVar5 = 1;
  }
  if (uVar5 == 0) {
/* WM - reversing this took months of machine time */
    func_0x003179ec(1);
  }
  if ((param_5 >> 1 & 1) != 0) {
    if (*(long *)(&UNK_000022f0 + lVar7) == 0) {
      if (*(long *)(lVar14 + 0x1c8) != 0) {
        func_0x0033d534();
      }
    }
    else {
      func_0x0033bc88();
    }
    *(uint *)(&UNK_00001e88 + lVar7) = *(uint *)(&UNK_00001e88 + lVar7) | 0x200;
    uVar13 = *(undefined8 *)(lVar14 + 0x268);
    *(undefined8 *)(&UNK_00001ec4 + lVar7) = *(undefined8 *)(lVar14 + 0x270);
    *(undefined8 *)(&UNK_00001ebc + lVar7) = uVar13;
  }
  uStack_c4 = param_5 >> 3 & 0x20000 | param_5 >> 7 & 0x100000 |
              param_5 >> 0x12 & 0x10 | param_5 >> 0x10 & 0x80;
  if ((param_5 & 4) != 0) {
    uStack_c4 = uStack_c4 | 0x120;
  }
  if (((param_5 >> 4 & 1) != 0) || (((byte)(&UNK_00001e85)[lVar7] >> 6 & 1) != 0)) {
    uStack_c4 = uStack_c4 | 0x1000;
/* wm:no support for modified copies */
  }
  if (bVar9) {
    uVar12 = FUN_0033e04c(&fStack_c0,uVar10,&bStack_c5,&cStack_c6);
    if (((((param_5 >> 6 & 1) == 0) || (*(int *)(&UNK_000021c4 + lVar7) == 0)) ||
        (*(int *)(&UNK_000021c8 + lVar7) != *(int *)(&UNK_00001e3c + lVar7))) ||
       ((*(int *)(&UNK_000021c4 + lVar7) != (int)uVar10 ||
        (((byte)(&UNK_000021cd)[lVar7] >> 4 & 1) != 0)))) {
      if ((uVar12 & 1) != 0) goto LAB_003416d4;
LAB_003416e8:
      uVar15 = 0;
      uStack_104 = 1;
      if (((param_5 >> 0x19 & 1) == 0) || ((bStack_c5 & 1) == 0)) goto LAB_00341770;
    }
    else {
      uStack_104 = 0;
      uVar15 = 1;
      abStack_89[0] = 1;
    }
  }
  else {
    func_0x0033f66c(uVar10,abStack_89,&uStack_c4);
    bStack_c7 = FUN_0033e04c(&fStack_c0,uVar10,&bStack_c5,&cStack_c6,uStack_c4);
    FUN_0033f7a8(uVar10,abStack_89,&bStack_c7);
    if ((bStack_c7 & 1) == 0) goto LAB_003416e8;
LAB_003416d4:
    uStack_104 = 1;
    uVar15 = 1;
  }
  if (((((&UNK_00001ff1)[lVar7] & 1) == 0) && (*(long *)(lVar7 + 0x1ff8) == lVar14)) &&
     (*(int *)(&UNK_00002004 + lVar7) == *(int *)(lVar14 + 0x170))) {
    fVar16 = (float)*(undefined8 *)(lVar14 + 0x128);
    fVar17 = (float)((ulong)*(undefined8 *)(lVar14 + 0x128) >> 0x20);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
    uStack_e0 = CONCAT44(fStack_bc - fVar17,fStack_c0 - fVar16);
    uStack_d8 = CONCAT44(fStack_b4 - fVar17,fStack_b8 - fVar16);
    func_0x0031b710(uVar10,*(int *)(&UNK_00002004 + lVar7),*(undefined4 *)(&UNK_00001e3c + lVar7),
                    &uStack_e0);
    if (*(char *)(lVar7 + 0x76) == '\x01') {
      *(undefined1 *)(lVar7 + 0x1ff0) = 0;
    }
  }
  bVar2 = uVar15 != 0;
  uVar15 = 0;
  if (bVar2) {
    func_0x00305fec(uVar10);
    uVar15 = 1;
  }
LAB_00341770:
  if (abStack_89[0] != param_4) {
    *(uint *)(&UNK_00001e88 + lVar7) = *(uint *)(&UNK_00001e88 + lVar7) | 8;
  }
  if (bVar6) {
    uVar1 = (param_5 & 0x20) >> 5;
    if (((bStack_c5 & 1) != 0 || uVar1 != 0) || (abStack_89[0] != 0)) {
// thanks for reading - discord.gg/sdkhDjTex
      uVar19 = 0x1a;
      if (cStack_c6 != '\0') {
        uVar19 = 0x1b;
      }
      if ((bStack_c5 & 1) == 0 && uVar1 == 0) {
        uVar19 = 0x19;
      }
      uVar13 = func_0x002febb0(0x3f800000,uVar19);
      func_0x003002e4(fStack_c0,fStack_bc,fStack_b8,fStack_b4,0,uVar13,0);
    }
    if (*(int *)(&UNK_00001ff4 + lVar7) == (int)uVar10) {
      uVar19 = 10;
      if (!bVar9) {
        uVar19 = 0xe;
      }
      func_0x003006a0(&fStack_c0,uVar10,uVar19);
    }
  }
  if ((param_5 >> 1 & 1) != 0) {
    if (*(long *)(&UNK_000022f0 + lVar7) == 0) {
      if (*(long *)(lVar14 + 0x1c8) != 0) {
        func_0x0033d5a0();
      }
    }
    else {
      func_0x0033bcec();
    }
  }
  if (bVar6) {
    fVar17 = *(float *)(lVar14 + 0x250);
    fVar16 = (float)uStack_a0 + fVar8;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    if (fVar17 <= (float)uStack_a0 + fVar8) {
      fVar16 = fVar17;
    }
    uStack_e0 = CONCAT44(fVar18 + uStack_a0._4_4_,fVar16);
    func_0x002ffefc(&fStack_a8,&uStack_e0,param_3,uVar11,&fStack_94,lVar7 + 0xd70,&fStack_c0);
  }
  if ((((uStack_104 & uVar15) == 1) && ((param_5 & 1) == 0)) &&
     (((*(uint *)(lVar14 + 0x14) >> 0x1a & 1) != 0 && (((byte)(&UNK_00001e84)[lVar7] >> 4 & 1) != 0)
      ))) {
    FUN_0031abe0();
  }
  if (uVar5 == 0) {
    FUN_00317a64();
  }
  return uVar15;
}

