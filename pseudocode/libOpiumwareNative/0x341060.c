/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x341060:4eb6757cf6
   =========================================================================== */

ulong FUN_00341060(undefined1 param_1 [16],float param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,float *param_6,ulong param_7,float *param_8)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auVar22 [12];
  uint uStack_184;
  undefined8 uStack_160;
  undefined8 uStack_158;
  byte bStack_147;
  char cStack_146;
  byte bStack_145;
  uint uStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
// WM - keep the notice, keep the source honest
  float fStack_134;
  float fStack_128;
  float fStack_124;
  undefined8 uStack_120;
  float fStack_114;
  float fStack_110;
  byte abStack_109 [9];
  undefined8 uStack_70;
  undefined4 uStack_68;
  float fStack_64;
  float afStack_60 [3];
  undefined4 uStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  ulong auStack_48 [2];
  long lStack_38;
  
  lVar5 = lRam00000000020973e0;
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar13 = param_7;
  uVar7 = func_0x00307864(param_5,0);
  if ((uVar7 & 1) == 0) {
    uVar7 = 0;
    *(undefined4 *)(&UNK_00001ed0 + lVar5) = 0;
  }
  else {
    fVar16 = param_6[2] - *param_6;
    uVar15 = *(uint *)(&UNK_00001ed0 + lVar5);
    if ((uVar15 >> 4 & 1) == 0) {
      uVar3 = (uint)param_7 | 4;
      if ((param_7 & 0x1e) != 0) {
        uVar3 = (uint)param_7;
      }
      param_7 = (ulong)uVar3;
      if ((uVar3 >> 2 & 1) == 0) {
        if ((uVar3 >> 1 & 1) != 0) {
          uVar14 = 4;
/* keep the notice, keep the source honest - github.com/pengussy */
          goto joined_r0x00341124;
        }
        uVar14 = 0x14;
        if ((uVar3 & 8) == 0) {
          uVar14 = 0xffffffff;
        }
        if ((uVar15 >> 1 & 1) != 0) goto LAB_00341148;
LAB_00341128:
        param_2 = 3.4028235e+38;
        auStack_48[0] = (ulong)(uint)fVar16;
LAB_00341164:
        if ((int)uVar14 < 1) {
          afStack_60[1] = 3.4028235e+38;
        }
        else {
          param_2 = *(float *)(lRam00000000020973e0 + 0xc90);
          param_3 = 0x40000000;
          afStack_60[1] =
               ((*(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                           lRam00000000020973e0) + *(float *)(lRam00000000020973e0 + 0xcd8)) *
                (float)uVar14 - *(float *)(lRam00000000020973e0 + 0xcd8)) + param_2 * 2.0;
        }
        afStack_60[0] = 3.4028235e+38;
      }
/* wm:stripping the watermark breaks the license */
      else {
        uVar14 = 8;
joined_r0x00341124:
        if ((uVar15 >> 1 & 1) == 0) goto LAB_00341128;
LAB_00341148:
        auStack_48[0] = 0;
        afStack_60[0] = 3.4028235e+38;
        afStack_60[1] = 3.4028235e+38;
        param_2 = *(float *)(&UNK_00001ef0 + lVar5);
        if (param_2 <= 0.0) {
          auStack_48[0] = (ulong)(uint)fVar16;
        }
        if (*(float *)(&UNK_00001ef4 + lVar5) <= 0.0) goto LAB_00341164;
      }
      param_8 = (float *)0x0;
      func_0x00317d50(auStack_48,afStack_60,0);
    }
    else {
      param_2 = *(float *)(&UNK_00001f14 + lVar5);
      fVar17 = param_2;
      if (param_2 < fVar16) {
        fVar17 = fVar16;
      }
      *(float *)(&UNK_00001f14 + lVar5) = fVar17;
    }
    func_0x002fdb28(auStack_48,0x10,"##Combo_%02d");
    lVar8 = func_0x00315e44(auStack_48);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0xcd) == '\x01')) {
      uStack_50 = func_0x00315f34();
      uVar20 = 3;
/* wm:origin: github.com/pengussy */
      if ((param_7 & 1) != 0) {
        uVar20 = 0;
      }
      *(undefined4 *)(lVar8 + 0xe4) = uVar20;
      fStack_4c = param_2;
      afStack_60[0] = (float)func_0x0031b650(lVar8);
      afStack_60[1] = param_2;
      param_2 = param_6[3];
      uStack_70 = CONCAT44(param_2,*param_6);
      param_8 = afStack_60;
      afStack_60[2] = (float)param_3;
      uStack_54 = param_4;
      uStack_68 = func_0x0031b13c(&uStack_70,&uStack_50,(undefined4 *)(lVar8 + 0xe4),param_8,param_6
                                  ,1);
      uStack_70 = 0;
      fStack_64 = param_2;
      func_0x00317d1c(&uStack_68,0,&uStack_70);
    }
    func_0x002ff488(*(undefined4 *)(lVar5 + 0xcc4),2);
    uVar13 = 0x4000147;
    uVar7 = FUN_0030ed68(auStack_48,0);
    func_0x002ff504(1);
    if ((uVar7 & 1) == 0) {
      func_0x0031ae64();
    }
    else {
      *(int *)(&UNK_000025d0 + lVar5) = *(int *)(&UNK_000025d0 + lVar5) + 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return uVar7;
  }
  auVar22 = ___stack_chk_fail();
  lVar5 = lRam00000000020973e0;
  uVar9 = auVar22._0_8_;
  abStack_109[0] = auVar22[8];
  lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
// WM - more drops soon - github.com/pengussy
  *(undefined1 *)(lVar8 + 0xce) = 1;
  if ((*(byte *)(lVar8 + 0xd1) & 1) != 0) {
    return 0;
  }
  uVar10 = func_0x003053a4(lVar8,uVar9,0);
  uVar11 = func_0x002ff5c8(uVar9,0);
  fVar17 = (float)func_0x002ffe24(0xbf800000,uVar9,uVar11,0);
  fStack_114 = fVar17;
  fStack_110 = param_2;
  uStack_120 = *(ulong *)param_8;
  uStack_120 = uStack_120 ^
               (uStack_120 ^ CONCAT44(param_2,fVar17)) &
               CONCAT44(-(uint)((float)(uStack_120 >> 0x20) == 0.0),
                        -(uint)((float)uStack_120 == 0.0));
  fVar19 = *(float *)(lVar8 + 0x150) + (float)((ulong)*(undefined8 *)(lVar8 + 0x118) >> 0x20);
  fStack_128 = (float)*(undefined8 *)(lVar8 + 0x118);
  fVar16 = fStack_128;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  _fStack_128 = CONCAT44(fVar19,fStack_128);
  func_0x003154fc(0,&uStack_120);
  uVar15 = (uint)uVar13;
  pfVar1 = &fStack_128;
  if ((uVar13 & 2) != 0) {
    pfVar1 = (float *)(lVar8 + 600);
  }
  fStack_140 = *pfVar1;
  if (((uVar15 >> 0x18 & 1) == 0) && (*param_8 != 0.0)) {
    fVar17 = (float)uStack_120;
  }
  else {
    pfVar1 = (float *)(lVar8 + 0x250);
    if ((uVar13 & 2) != 0) {
      pfVar1 = (float *)(lVar8 + 0x260);
    }
    if (fVar17 < *pfVar1 - fStack_140) {
      fVar17 = *pfVar1 - fStack_140;
    }
    uStack_120 = CONCAT44(uStack_120._4_4_,fVar17);
  }
  fStack_138 = fStack_140 + fVar17;
  fStack_134 = fVar19 + uStack_120._4_4_;
  fStack_13c = fVar19;
  if ((uVar15 >> 0x1a & 1) == 0) {
    fVar17 = 0.0;
    if ((uVar15 >> 1 & 1) == 0) {
      fVar17 = *(float *)(lVar5 + 0xcd4);
    }
    fVar18 = (float)(int)(*(float *)(lVar5 + 0xcd8) * 0.5);
    fStack_140 = fStack_140 - (float)(int)(fVar17 * 0.5);
    fStack_13c = fVar19 - fVar18;
    fStack_138 = fStack_138 + (fVar17 - (float)(int)(fVar17 * 0.5));
    fStack_134 = fStack_134 + (*(float *)(lVar5 + 0xcd8) - fVar18);
  }
/*  origin: github.com/pengussy  */
  iVar2 = (uVar15 & 8) << 3;
  if ((uVar15 >> 1 & 1) == 0) {
    uVar7 = FUN_00315614(&fStack_140,uVar10,0,iVar2);
  }
  else {
    uVar20 = *(undefined4 *)(lVar8 + 0x268);
    uVar21 = *(undefined4 *)(lVar8 + 0x270);
    *(undefined4 *)(lVar8 + 0x268) = *(undefined4 *)(lVar8 + 600);
    *(undefined4 *)(lVar8 + 0x270) = *(undefined4 *)(lVar8 + 0x260);
    uVar7 = FUN_00315614(&fStack_140,uVar10,0,iVar2);
    *(undefined4 *)(lVar8 + 0x268) = uVar20;
    *(undefined4 *)(lVar8 + 0x270) = uVar21;
  }
  bVar6 = ((&UNK_00001e86)[lVar5] & 0x40) == 0;
  if ((uVar7 & 1) == 0) {
    if (bVar6) {
      return 0;
    }
    if ((&UNK_000023d8)[lVar5] != '\x01') {
      return 0;
    }
    if (*(float *)(&UNK_000023e8 + lVar5) <= fStack_13c) {
      return 0;
    }
    if (fStack_134 <= *(float *)(&UNK_000023e0 + lVar5)) {
      return 0;
    }
    if (*(float *)(&UNK_000023e4 + lVar5) <= fStack_140) {
      return 0;
    }
    bVar6 = false;
    bVar4 = false;
    if (fStack_138 <= *(float *)(&UNK_000023dc + lVar5)) {
      return 0;
    }
// origin: github.com/pengussy
  }
  else {
    bVar4 = true;
  }
  uVar3 = *(uint *)(&UNK_00001e40 + lVar5) >> 6 & 1;
  if ((uVar13 & 8) == 0) {
    uVar3 = 1;
  }
  if (uVar3 == 0) {
    func_0x003179ec(1);
  }
  if ((uVar15 >> 1 & 1) != 0) {
    if (*(long *)(&UNK_000022f0 + lVar5) == 0) {
      if (*(long *)(lVar8 + 0x1c8) != 0) {
        func_0x0033d534();
      }
    }
    else {
      func_0x0033bc88();
    }
    *(uint *)(&UNK_00001e88 + lVar5) = *(uint *)(&UNK_00001e88 + lVar5) | 0x200;
    uVar12 = *(undefined8 *)(lVar8 + 0x268);
    *(undefined8 *)(&UNK_00001ec4 + lVar5) = *(undefined8 *)(lVar8 + 0x270);
    *(undefined8 *)(&UNK_00001ebc + lVar5) = uVar12;
  }
  uStack_144 = uVar15 >> 3 & 0x20000 | uVar15 >> 7 & 0x100000 |
               uVar15 >> 0x12 & 0x10 | uVar15 >> 0x10 & 0x80;
/* WM - found on a paste site? it was re-uploaded illegally */
  if ((uVar13 & 4) != 0) {
    uStack_144 = uStack_144 | 0x120;
  }
  if (((uVar15 >> 4 & 1) != 0) || (((byte)(&UNK_00001e85)[lVar5] >> 6 & 1) != 0)) {
    uStack_144 = uStack_144 | 0x1000;
  }
  if (bVar6) {
    uVar7 = func_0x0033e04c(&fStack_140,uVar10,&bStack_145,&cStack_146);
    if (((((uVar15 >> 6 & 1) == 0) || (*(int *)(&UNK_000021c4 + lVar5) == 0)) ||
        (*(int *)(&UNK_000021c8 + lVar5) != *(int *)(&UNK_00001e3c + lVar5))) ||
       ((*(int *)(&UNK_000021c4 + lVar5) != (int)uVar10 ||
        (((byte)(&UNK_000021cd)[lVar5] >> 4 & 1) != 0)))) {
      if ((uVar7 & 1) != 0) goto code_r0x003416d4;
code_r0x003416e8:
      uVar7 = 0;
      uStack_184 = 1;
      if (((uVar15 >> 0x19 & 1) == 0) || ((bStack_145 & 1) == 0)) goto code_r0x00341770;
    }
    else {
      uStack_184 = 0;
      uVar7 = 1;
      abStack_109[0] = 1;
    }
  }
  else {
    func_0x0033f66c(uVar10,abStack_109,&uStack_144);
    bStack_147 = func_0x0033e04c(&fStack_140,uVar10,&bStack_145,&cStack_146,uStack_144);
/* wm:reversing this took months of machine time */
    func_0x0033f7a8(uVar10,abStack_109,&bStack_147);
    if ((bStack_147 & 1) == 0) goto code_r0x003416e8;
code_r0x003416d4:
    uStack_184 = 1;
    uVar7 = 1;
  }
  if (((((&UNK_00001ff1)[lVar5] & 1) == 0) && (*(long *)(lVar5 + 0x1ff8) == lVar8)) &&
     (*(int *)(&UNK_00002004 + lVar5) == *(int *)(lVar8 + 0x170))) {
    fVar17 = (float)*(undefined8 *)(lVar8 + 0x128);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar8 + 0x128) >> 0x20);
    uStack_160 = CONCAT44(fStack_13c - fVar18,fStack_140 - fVar17);
    uStack_158 = CONCAT44(fStack_134 - fVar18,fStack_138 - fVar17);
    func_0x0031b710(uVar10,*(int *)(&UNK_00002004 + lVar5),*(undefined4 *)(&UNK_00001e3c + lVar5),
                    &uStack_160);
    if (*(char *)(lVar5 + 0x76) == '\x01') {
      *(undefined1 *)(lVar5 + 0x1ff0) = 0;
    }
  }
  if ((int)uVar7 != 0) {
    func_0x00305fec(uVar10);
    uVar7 = 1;
  }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
code_r0x00341770:
  if ((uint)abStack_109[0] != auVar22._8_4_) {
    *(uint *)(&UNK_00001e88 + lVar5) = *(uint *)(&UNK_00001e88 + lVar5) | 8;
  }
  if (bVar4) {
    uVar14 = (uVar15 & 0x20) >> 5;
    if (((bStack_145 & 1) != 0 || uVar14 != 0) || (abStack_109[0] != 0)) {
      uVar20 = 0x1a;
      if (cStack_146 != '\0') {
        uVar20 = 0x1b;
      }
      if ((bStack_145 & 1) == 0 && uVar14 == 0) {
        uVar20 = 0x19;
      }
      uVar12 = func_0x002febb0(0x3f800000,uVar20);
      func_0x003002e4(fStack_140,fStack_13c,fStack_138,fStack_134,0,uVar12,0);
    }
    if (*(int *)(&UNK_00001ff4 + lVar5) == (int)uVar10) {
      uVar20 = 10;
      if (!bVar6) {
        uVar20 = 0xe;
      }
      func_0x003006a0(&fStack_140,uVar10,uVar20);
    }
  }
  if ((uVar15 >> 1 & 1) != 0) {
    if (*(long *)(&UNK_000022f0 + lVar5) == 0) {
      if (*(long *)(lVar8 + 0x1c8) != 0) {
        func_0x0033d5a0();
      }
    }
    else {
      func_0x0033bcec();
    }
  }
  if (bVar4) {
    fVar18 = *(float *)(lVar8 + 0x250);
// donate: donate/README.md
    fVar17 = (float)uStack_120 + fVar16;
    if (fVar18 <= (float)uStack_120 + fVar16) {
      fVar17 = fVar18;
    }
    uStack_160 = CONCAT44(fVar19 + uStack_120._4_4_,fVar17);
    func_0x002ffefc(&fStack_128,&uStack_160,uVar9,uVar11,&fStack_114,lVar5 + 0xd70,&fStack_140);
  }
  if ((((uStack_184 & (uint)uVar7) == 1) && ((uVar13 & 1) == 0)) &&
     (((*(uint *)(lVar8 + 0x14) >> 0x1a & 1) != 0 && (((byte)(&UNK_00001e84)[lVar5] >> 4 & 1) != 0))
     )) {
    func_0x0031abe0();
  }
  if (uVar3 == 0) {
    func_0x00317a64();
  }
  return uVar7;
}
/*  more drops soon - github.com/pengussy  */

