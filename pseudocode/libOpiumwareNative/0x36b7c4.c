/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36b7c4:4818326741
 */

undefined8 FUN_0036b7c4(char *param_1,uint param_2,long *param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined1 *puVar8;
  short *psVar9;
  undefined4 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long *plVar14;
  short *psVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_98 [64];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((((int)param_2 < 1) || (param_1 == (char *)0x0)) || (param_3 == (long *)0x0)) {
/* wm:unlicensed copy if this notice is missing */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                    ,0x518,"gid_cb");
    uVar11 = 0;
    func_0x004466b0(0x14,0x19e,0);
LAB_0036b8e4:
    uVar12 = 0;
    goto LAB_0036b9c4;
  }
  bVar4 = false;
  bVar3 = false;
  uVar22 = 0;
  uVar17 = (ulong)param_2;
  do {
    uVar11 = 6;
    pbVar6 = (byte *)_memchr("/:?*-",(long)*param_1,6);
    if (pbVar6 == (byte *)0x0) {
      uVar11 = 1;
      iVar5 = func_0x0047630c(&UNK_01c2ed7f,param_1,1);
      pbVar6 = &UNK_01c2ed7f;
      uVar18 = uVar17;
      if (iVar5 != 0) goto LAB_0036b940;
    }
    bVar1 = *pbVar6;
    if (bVar1 < 0x2f) {
      if (bVar1 == 0x2a) {
        if (bVar3) goto LAB_0036b9c0;
/*  origin: github.com/pengussy  */
        bVar3 = true;
      }
      else {
        if (bVar1 != 0x2d) goto LAB_0036b900;
        if (bVar4) goto LAB_0036b9c0;
        bVar4 = true;
      }
    }
    else {
      if (bVar1 != 0x3f) {
        uVar12 = 0xffffffff;
        if ((bVar1 == 0x2f) || (bVar1 == 0x3a)) goto LAB_0036b9c4;
LAB_0036b900:
        uVar12 = uVar22;
        if ((int)uVar17 == 7) {
          iVar5 = func_0x0047630c("DEFAULT",param_1,uVar17);
          if (iVar5 != 0) {
            uVar18 = 7;
            lVar7 = param_3[2];
            if (lVar7 == param_3[1]) goto LAB_0036b94c;
            goto LAB_0036b97c;
          }
          puVar13 = &UNK_01dc5e48;
        }
        else {
          if ((int)uVar17 != 0xf) break;
          iVar5 = func_0x0047630c("DEFAULT_SUITE_B",param_1,uVar17);
          if (iVar5 != 0) {
            uVar18 = 0xf;
            lVar7 = param_3[2];
            if (lVar7 == param_3[1]) goto LAB_0036b94c;
            goto LAB_0036b97c;
          }
          puVar13 = &UNK_01dc5e58;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        }
        uVar11 = uVar17;
        if ((int)uVar22 != 0 || bVar4) goto LAB_0036b9c0;
        pcVar16 = *(char **)(puVar13 + 8);
        lVar7 = _strlen(pcVar16);
        uVar11 = 0x557;
        puVar8 = (undefined1 *)
                 func_0x019eb530(lVar7 + 2,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                 ,0x557);
        if (puVar8 == (undefined1 *)0x0) goto LAB_0036b8e4;
        if ((!bVar3) || (*pcVar16 == '*')) {
          lVar7 = 0;
        }
        else {
          *puVar8 = 0x2a;
          lVar7 = 1;
        }
        uVar22 = _strlen(pcVar16);
        _memcpy(puVar8 + lVar7,pcVar16,uVar22);
        lVar19 = _strlen(pcVar16);
        (puVar8 + lVar7)[lVar19] = 0;
        lVar7 = param_3[0xb];
/* more drops soon - github.com/pengussy */
        *(undefined8 *)((long)param_3 + 0x54) = 0x100000001;
        uVar22 = func_0x00409000(puVar8,0x2f,1,&DAT_00365268,param_3);
        *(undefined4 *)((long)param_3 + 0x54) = 0;
        *(int *)(param_3 + 0xb) = (int)lVar7;
        uVar11 = 0x570;
        func_0x004743e4(puVar8,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                        ,0x570);
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
          return uVar22;
        }
        goto LAB_0036bee4;
      }
      if ((int)uVar22 != 0) goto LAB_0036b9c0;
      uVar22 = 1;
    }
    param_1 = param_1 + 1;
    uVar17 = uVar17 - 1;
  } while (1 < (int)uVar17 + 1);
  uVar18 = uVar17;
  if ((int)uVar17 != 0) {
LAB_0036b940:
/* WM - stripping the watermark breaks the license */
    lVar7 = param_3[2];
    uVar17 = uVar11;
    uVar12 = uVar22;
    if (lVar7 == param_3[1]) {
LAB_0036b94c:
      uVar11 = 2;
      lVar7 = func_0x0046f2fc(param_3[3],lVar7 + 0x20,2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x586);
      if (lVar7 == 0) goto LAB_0036b8e4;
      param_3[1] = param_3[1] + 0x20;
      param_3[3] = lVar7;
      uVar17 = uVar11;
      uVar12 = uVar22;
    }
LAB_0036b97c:
    uVar11 = uVar17;
    if (param_3[8] == param_3[7]) {
      uVar11 = 2;
      lVar7 = func_0x0046f2fc(param_3[9],param_3[8] + 0x20,2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0x592);
      if (lVar7 == 0) goto LAB_0036b8e4;
      param_3[7] = param_3[7] + 0x20;
      param_3[9] = lVar7;
    }
    if ((int)uVar18 < 0x40) {
      uVar18 = uVar18 & 0xffffffff;
      uVar11 = uVar18;
      ___memcpy_chk(auStack_98,param_1,uVar18,0x40);
/* WM - watermarked copy - do not remove */
      auStack_98[uVar18] = 0;
      lVar7 = *param_3;
      if (*(long *)(lVar7 + 0x6b8) != 0) {
        lVar19 = 0;
        uVar17 = 0;
        do {
          iVar5 = func_0x004762b4(*(undefined8 *)(*(long *)(lVar7 + 0x6b0) + lVar19),auStack_98);
          if ((iVar5 == 0) ||
             (iVar5 = func_0x004762b4(*(undefined8 *)(*(long *)(lVar7 + 0x6b0) + lVar19 + 8),
                                      auStack_98), iVar5 == 0)) {
            sVar2 = *(short *)(*(long *)(lVar7 + 0x6b0) + lVar19 + 0x1c);
            if (sVar2 != 0) goto LAB_0036bbec;
            break;
          }
          uVar17 = uVar17 + 1;
          lVar19 = lVar19 + 0x38;
        } while (uVar17 < *(ulong *)(lVar7 + 0x6b8));
      }
      iVar5 = func_0x004762b4(auStack_98,"GC256A");
      if (iVar5 == 0) {
        puVar13 = &UNK_01dc5e68;
LAB_0036bbe4:
        sVar2 = *(short *)(puVar13 + 8);
        if (sVar2 == 0) goto LAB_0036bc28;
LAB_0036bbec:
        lVar7 = *(long *)(*param_3 + 0x6b8);
        if (lVar7 != 0) {
          psVar9 = (short *)(*(long *)(*param_3 + 0x6b0) + 0x1c);
          do {
            if (*psVar9 == sVar2) {
              if (!bVar4) {
                lVar7 = param_3[2];
                if (lVar7 == 0) goto LAB_0036bd0c;
                psVar9 = (short *)param_3[3];
                lVar19 = lVar7;
                goto LAB_0036bcf8;
// WM - unlicensed copy if this notice is missing
              }
              uVar17 = param_3[2];
              if (uVar17 == 0) goto LAB_0036bedc;
              uVar23 = 0;
              lVar19 = 0;
              uVar24 = 0;
              uVar21 = 0;
              uVar18 = 0;
              uVar20 = 0;
              plVar14 = (long *)param_3[6];
              lVar7 = *plVar14;
              psVar9 = (short *)param_3[3];
              goto LAB_0036bca0;
            }
            lVar7 = lVar7 + -1;
            psVar9 = psVar9 + 0x1c;
          } while (lVar7 != 0);
        }
        if ((!bVar3) || (bVar4)) goto LAB_0036b9c4;
        iVar5 = (int)param_3[10];
      }
      else {
        iVar5 = func_0x004762b4(auStack_98,"GC256B");
        if (iVar5 == 0) {
          puVar13 = &UNK_01dc5e78;
          goto LAB_0036bbe4;
        }
        iVar5 = func_0x004762b4(auStack_98,"GC256C");
        if (iVar5 == 0) {
          puVar13 = &UNK_01dc5e88;
          goto LAB_0036bbe4;
        }
/* WM - keep the notice, keep the source honest */
        iVar5 = func_0x004762b4(auStack_98,"GC256D");
        if (iVar5 == 0) {
          puVar13 = &UNK_01dc5e98;
          goto LAB_0036bbe4;
        }
        iVar5 = func_0x004762b4(auStack_98,"GC512A");
        if (iVar5 == 0) {
          puVar13 = &UNK_01dc5ea8;
          goto LAB_0036bbe4;
        }
        iVar5 = func_0x004762b4(auStack_98,"GC512B");
        if (iVar5 == 0) {
          puVar13 = &UNK_01dc5eb8;
          goto LAB_0036bbe4;
        }
        iVar5 = func_0x004762b4(auStack_98,"GC512C");
        if (iVar5 == 0) {
          puVar13 = &UNK_01dc5ec8;
          goto LAB_0036bbe4;
        }
LAB_0036bc28:
        if ((!bVar3) || (bVar4)) goto LAB_0036b9c4;
        iVar5 = (int)param_3[10];
      }
      if (iVar5 == 0) {
/* origin: github.com/pengussy */
        *(undefined4 *)(param_3 + 10) = 1;
      }
      goto LAB_0036b9c4;
    }
  }
LAB_0036b9c0:
  uVar12 = 0xffffffff;
  goto LAB_0036b9c4;
  while( true ) {
    if ((uVar20 < (ulong)param_3[8]) && (*psVar9 == *(short *)(param_3[9] + uVar20 * 2))) {
      uVar20 = uVar20 + 1;
      uVar24 = uVar23 + 1;
    }
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      if (uVar18 < (ulong)param_3[5]) {
        uVar18 = uVar18 + 1;
        lVar7 = plVar14[uVar18];
      }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      else {
        lVar7 = 0;
      }
      uVar21 = uVar23 + 1;
    }
    lVar19 = lVar19 + -2;
    uVar23 = uVar23 + 1;
    psVar9 = psVar9 + 1;
    uVar12 = 1;
    if (uVar17 == uVar23) break;
LAB_0036bca0:
    if (*psVar9 == sVar2) {
      param_3[2] = uVar17 - 1;
      plVar14[uVar18] = plVar14[uVar18] + -1;
      uVar11 = (param_3[2] - uVar23) * 2;
      _memmove(psVar9,psVar9 + 1,uVar11);
      uVar17 = param_3[8];
      if (uVar17 <= uVar20) goto LAB_0036bea8;
      psVar9 = (short *)(param_3[9] + uVar20 * 2);
      if (*psVar9 != sVar2) goto LAB_0036bea8;
      if ((uVar21 < uVar24) || ((ulong)param_3[5] <= uVar18)) goto LAB_0036be90;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar24 = *(long *)(param_3[6] + uVar18 * 8) + uVar21;
      lVar7 = uVar24 - uVar23;
      if ((uVar24 < uVar23 || lVar7 == 0) || uVar17 <= uVar20 + 1) goto LAB_0036bdc0;
      psVar15 = (short *)(param_3[3] - lVar19);
      goto LAB_0036be78;
    }
  }
  goto LAB_0036b9c4;
LAB_0036be90:
  param_3[8] = uVar17 - 1;
  uVar11 = ((uVar17 - 1) - uVar20) * 2;
  _memmove(psVar9,psVar9 + 1,uVar11);
  goto LAB_0036bea8;
  while( true ) {
    lVar19 = lVar19 + -1;
    psVar9 = psVar9 + 1;
    if (lVar19 == 0) break;
LAB_0036bcf8:
    if (*psVar9 == sVar2) goto LAB_0036bedc;
  }
LAB_0036bd0c:
  param_3[2] = lVar7 + 1;
  ((short *)param_3[3])[lVar7] = sVar2;
  *(long *)(param_3[6] + param_3[5] * 8) = *(long *)(param_3[6] + param_3[5] * 8) + 1;
  if (bVar3) {
    lVar7 = param_3[8];
    param_3[8] = lVar7 + 1;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    *(short *)(param_3[9] + lVar7 * 2) = sVar2;
    *(undefined4 *)(param_3 + 10) = 0xffffffff;
  }
  goto LAB_0036bedc;
  while( true ) {
    lVar7 = lVar7 + -1;
    psVar15 = psVar15 + 1;
    if (lVar7 == 0) break;
LAB_0036be78:
    if (*psVar15 == *(short *)(param_3[9] + (uVar20 + 1) * 2)) goto LAB_0036be90;
  }
LAB_0036bdc0:
  *psVar9 = *(short *)(param_3[3] + uVar21 * 2);
LAB_0036bea8:
  plVar14 = (long *)(param_3[6] + uVar18 * 8);
  if ((*plVar14 == 0) && (uVar18 < (ulong)param_3[5])) {
    lVar7 = param_3[5] - 1;
/* WM - origin: github.com/pengussy */
    param_3[5] = lVar7;
    uVar11 = (lVar7 - uVar18) * 8;
    _memmove(plVar14,plVar14 + 1,uVar11);
  }
LAB_0036bedc:
  uVar12 = 1;
LAB_0036b9c4:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return uVar12;
  }
LAB_0036bee4:
  auVar25 = ___stack_chk_fail();
  puVar10 = auVar25._0_8_;
  uVar22 = func_0x004762b4(uVar11,&UNK_01c3427f);
  if ((int)uVar22 == 0) {
    *puVar10 = 6;
    return uVar22;
  }
  uVar22 = func_0x004762b4(uVar11,&UNK_01c35e29);
  if (((int)uVar22 == 0) || (uVar22 = func_0x004762b4(uVar11,&UNK_01c35e31), (int)uVar22 == 0)) {
    *puVar10 = 0x390;
    return uVar22;
  }
  uVar22 = func_0x004762b4(uVar11,&UNK_01c341a4);
  if ((int)uVar22 == 0) {
    *puVar10 = 0x74;
    return uVar22;
  }
  uVar22 = func_0x004762b4(uVar11,&UNK_01c341ad);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
  if ((int)uVar22 == 0) {
    *puVar10 = 0x198;
    return uVar22;
  }
  uVar22 = func_0x004a0998(uVar11);
  *auVar25._8_8_ = (int)uVar22;
  if ((int)uVar22 == 0) {
    uVar22 = func_0x004a0ad8(uVar11);
    *auVar25._8_8_ = (int)uVar22;
    return uVar22;
  }
  return uVar22;
}

