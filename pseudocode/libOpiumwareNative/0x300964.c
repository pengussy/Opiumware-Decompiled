/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x300964:972eefa57f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00300964(float param_1,float param_2,float param_3,uint param_4,undefined8 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lVar5 = lRam00000000020973e0;
/* wm:donate: donate/README.md */
  uVar4 = _UNK_01adf158;
  uVar3 = _UNK_01adb7d8;
  lStack_b0 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar1 = 0;
  if (param_4 < 0xb) {
    uVar1 = param_4;
  }
  if (*(int *)(lRam00000000020973e0 + 0x1fe0) != 0) {
    lVar11 = *(long *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                      lRam00000000020973e0 + 0x28);
    plVar12 = *(long **)(&UNK_00001fe8 + lRam00000000020973e0);
    lVar14 = (long)*(int *)(lRam00000000020973e0 + 0x1fe0) << 3;
    do {
      lVar13 = *plVar12;
      uStack_e0 = 0;
      uStack_d8 = 0;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      iVar10 = func_0x003287f4(lVar11,uVar1,&uStack_d8,&uStack_e0,&uStack_d0,&uStack_c0);
      if (iVar10 != 0) {
        fStack_e8 = param_1 - (float)uStack_d8;
        fStack_e4 = param_2 - uStack_d8._4_4_;
        fVar16 = *(float *)(lVar13 + 8);
        fVar17 = *(float *)(lVar13 + 0xc);
        fVar18 = fVar16 + *(float *)(lVar13 + 0x10);
        fVar19 = fStack_e8 + param_3 * ((float)uStack_e0 + 2.0);
        fVar20 = fStack_e4 + param_3 * (uStack_e0._4_4_ + 2.0);
        bVar6 = false;
        bVar8 = true;
        bVar9 = false;
        if (fStack_e4 < fVar17 + *(float *)(lVar13 + 0x14)) {
          bVar6 = false;
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar20) && !NAN(fVar17)) {
            bVar6 = fVar20 < fVar17;
            bVar8 = fVar20 == fVar17;
            bVar9 = false;
          }
        }
        bVar7 = false;
        if ((!bVar8 && bVar6 == bVar9) && (bVar7 = false, !NAN(fStack_e8) && !NAN(fVar18))) {
          bVar7 = fStack_e8 < fVar18;
        }
/* wm:reversing this took months of machine time */
        bVar6 = false;
        bVar8 = true;
        bVar9 = false;
        if (bVar7) {
          bVar6 = false;
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar19) && !NAN(fVar16)) {
            bVar6 = fVar19 < fVar16;
            bVar8 = fVar19 == fVar16;
            bVar9 = false;
          }
        }
        if (!bVar8 && bVar6 == bVar9) {
          lVar13 = func_0x00306aec(lVar13,1,"##Foreground");
          uVar15 = *(undefined8 *)(lVar11 + 0x28);
          uVar2 = *(undefined8 *)(lVar11 + 0x30);
          func_0x00320eb8(lVar13,uVar15,uVar2);
          uStack_f0 = CONCAT44(param_3 * 0.0 + fStack_e4,param_3 + fStack_e8);
          uStack_f8 = CONCAT44(fStack_e4 +
                               ((float)((ulong)uStack_e0 >> 0x20) + (float)((ulong)uVar3 >> 0x20)) *
                               param_3,fStack_e8 + ((float)uStack_e0 + (float)uVar3) * param_3);
          func_0x00324ab4(lVar13,uVar15,uVar2,&uStack_f0,&uStack_f8,&uStack_c0,&uStack_b8,param_7);
          uStack_f0 = CONCAT44(param_3 * 0.0 + fStack_e4,param_3 + param_3 + fStack_e8);
          uStack_f8 = CONCAT44(fStack_e4 +
                               ((float)((ulong)uStack_e0 >> 0x20) + (float)((ulong)uVar4 >> 0x20)) *
                               param_3,fStack_e8 + ((float)uStack_e0 + (float)uVar4) * param_3);
          func_0x00324ab4(lVar13,uVar15,uVar2,&uStack_f0,&uStack_f8,&uStack_c0,&uStack_b8,param_7);
          uStack_f0 = CONCAT44((float)((ulong)uStack_e0 >> 0x20) * param_3 + fStack_e4,
                               (float)uStack_e0 * param_3 + fStack_e8);
          func_0x00324ab4(lVar13,uVar15,uVar2,&fStack_e8,&uStack_f0,&uStack_c0,&uStack_b8,param_6);
          uStack_f0 = CONCAT44((float)((ulong)uStack_e0 >> 0x20) * param_3 + fStack_e4,
                               (float)uStack_e0 * param_3 + fStack_e8);
          func_0x00324ab4(lVar13,uVar15,uVar2,&fStack_e8,&uStack_f0,&uStack_d0,&uStack_c8,param_5);
          if ((uVar1 & 0xe) == 8) {
            uVar15 = _fmodf((float)*(double *)(lVar5 + 0x10) * 5.0,0x40c90fdb);
            uStack_f0 = CONCAT44(fStack_e4 - param_3,param_3 * 14.0 + fStack_e8);
/*  more drops soon - github.com/pengussy  */
            func_0x00322648(param_3 * 6.0,uVar15,(float)uVar15 + 5.183628,lVar13,&uStack_f0,0);
            func_0x00321160(param_3 * 3.0,lVar13,*(undefined8 *)(lVar13 + 0x58),
                            *(undefined4 *)(lVar13 + 0x50),param_5,0);
            *(undefined4 *)(lVar13 + 0x50) = 0;
          }
          func_0x00320f74(lVar13);
        }
      }
      plVar12 = plVar12 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b0) {
    return;
  }
  lRam00000000020973e0 = ___stack_chk_fail();
  return;
/*  found on a paste site? it was re-uploaded illegally  */
}

