/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x29f1ec:1c348e14a5
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0029f1ec(undefined4 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,
                  undefined4 param_5,int param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  param_1[0xf2] = 1;
// donate: donate/README.md
  uVar20 = *param_2;
  uVar22 = param_2[3];
  uVar21 = param_2[2];
  *(undefined8 *)(param_1 + 0x3e) = param_2[1];
  *(undefined8 *)(param_1 + 0x3c) = uVar20;
  *(undefined8 *)(param_1 + 0x42) = uVar22;
  *(undefined8 *)(param_1 + 0x40) = uVar21;
  uVar21 = param_2[5];
  uVar20 = param_2[4];
  uVar23 = param_2[7];
  uVar22 = param_2[6];
  uVar24 = param_2[8];
  uVar26 = param_2[0xb];
  uVar25 = param_2[10];
  *(undefined8 *)(param_1 + 0x4e) = param_2[9];
  *(undefined8 *)(param_1 + 0x4c) = uVar24;
  *(undefined8 *)(param_1 + 0x52) = uVar26;
  *(undefined8 *)(param_1 + 0x50) = uVar25;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  *(undefined8 *)(param_1 + 0x46) = uVar21;
  *(undefined8 *)(param_1 + 0x44) = uVar20;
  *(undefined8 *)(param_1 + 0x4a) = uVar23;
  *(undefined8 *)(param_1 + 0x48) = uVar22;
  uVar21 = param_2[0xd];
  uVar20 = param_2[0xc];
  uVar23 = param_2[0xf];
  uVar22 = param_2[0xe];
  uVar24 = param_2[0x10];
  uVar26 = param_2[0x13];
  uVar25 = param_2[0x12];
  *(undefined8 *)(param_1 + 0x5e) = param_2[0x11];
  *(undefined8 *)(param_1 + 0x5c) = uVar24;
  *(undefined8 *)(param_1 + 0x62) = uVar26;
  *(undefined8 *)(param_1 + 0x60) = uVar25;
  *(undefined8 *)(param_1 + 0x56) = uVar21;
  *(undefined8 *)(param_1 + 0x54) = uVar20;
  *(undefined8 *)(param_1 + 0x5a) = uVar23;
  *(undefined8 *)(param_1 + 0x58) = uVar22;
  uVar21 = param_2[0x15];
  uVar20 = param_2[0x14];
  uVar23 = param_2[0x17];
  uVar22 = param_2[0x16];
  uVar24 = param_2[0x18];
  uVar26 = param_2[0x1b];
  uVar25 = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x6e) = param_2[0x19];
  *(undefined8 *)(param_1 + 0x6c) = uVar24;
  *(undefined8 *)(param_1 + 0x72) = uVar26;
/* WM - keep the notice, keep the source honest */
  *(undefined8 *)(param_1 + 0x70) = uVar25;
  *(undefined8 *)(param_1 + 0x66) = uVar21;
  *(undefined8 *)(param_1 + 100) = uVar20;
  *(undefined8 *)(param_1 + 0x6a) = uVar23;
  *(undefined8 *)(param_1 + 0x68) = uVar22;
  if (param_1[0x54] == 1) {
    func_0x002e1a34(param_1 + 0x54,param_1 + 0x3d);
  }
  puVar19 = param_1 + 0x3d;
  uVar11 = 1L << ((ulong)*puVar19 & 0x3f);
  if (param_3 <= uVar11) {
    uVar11 = param_3;
  }
  if (param_3 == 0) {
    uVar11 = 1;
  }
  uVar5 = *(ulong *)(param_1 + 0x62);
  if (uVar11 <= *(ulong *)(param_1 + 0x62)) {
    uVar5 = uVar11;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  uVar4 = 3;
  if (*(long *)(param_1 + 0x70) == 0 && param_1[0x41] != 3) {
    uVar4 = 4;
  }
  if (param_6 == 1) {
    if (param_1[0x5c] == 0) {
      uVar15 = 0x20000 - uVar5 >> 0xb;
      if (0x20000 < uVar5 || 0x20000 - uVar5 == 0) {
        uVar15 = 0;
      }
      lVar13 = uVar5 + (uVar5 >> 8) + uVar15;
      lVar17 = -0x47;
      if (lVar13 != 0) {
        lVar17 = lVar13 + 1;
      }
    }
    else {
      lVar17 = 0;
    }
    lVar13 = uVar5 + uVar11;
    if (param_1[0x5b] != 0) {
      lVar13 = 0;
    }
// WM - more drops soon - github.com/pengussy
  }
  else {
    lVar17 = 0;
    lVar13 = 0;
  }
  uStack_78 = *(undefined8 *)(param_1 + 0x56);
  uStack_80 = *(undefined8 *)(param_1 + 0x54);
  uStack_70 = *(undefined8 *)(param_1 + 0x58);
  lVar8 = func_0x002e1b54(&uStack_80,uVar5);
  bVar7 = true;
  if ((param_4 >> 0x16 < 0x95) &&
     ((ulong)(*(long *)(param_1 + 0x32a) - *(long *)(param_1 + 0x32c)) < 0xd9c00001)) {
    bVar7 = param_1[0xf3] == 0;
  }
  uVar11 = func_0x0029d3ec(puVar19,param_1 + 0x54,*(long *)(param_1 + 0xe8) != 0,param_1[100],lVar13
                           ,lVar17,param_3,*(long *)(param_1 + 0x70) != 0,
                           *(undefined8 *)(param_1 + 0x62));
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  if (*(long *)(param_1 + 0xe8) == 0) {
    param_1[0xbf] = param_1[0xbf] + 1;
  }
  lVar9 = *(long *)(param_1 + 0xb0);
  uVar15 = *(ulong *)(param_1 + 0xb2) - lVar9;
  if ((ulong)(*(long *)(param_1 + 0xba) - *(long *)(param_1 + 0xb6)) < uVar11 * 3) {
    bVar1 = false;
    if (uVar11 <= uVar15) goto LAB_0029f414;
LAB_0029f458:
    if (*(long *)(param_1 + 0xe8) != 0) {
/* reversing this took months of machine time */
      return 0xffffffffffffffc0;
    }
    *(undefined8 *)(param_1 + 0xb2) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb6) = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xba) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xbe) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    if (lVar9 == 0) {
LAB_0029f5a4:
      pcVar12 = *(code **)(param_1 + 0xe0);
      if (pcVar12 != (code *)0x0) goto LAB_0029f5ac;
LAB_0029f6fc:
      lVar9 = _malloc(uVar11);
    }
    else {
      if (*(code **)(param_1 + 0xe2) != (code *)0x0) {
        (**(code **)(param_1 + 0xe2))(*(undefined8 *)(param_1 + 0xe4));
        goto LAB_0029f5a4;
      }
      _free(lVar9);
      pcVar12 = *(code **)(param_1 + 0xe0);
      if (pcVar12 == (code *)0x0) goto LAB_0029f6fc;
LAB_0029f5ac:
      lVar9 = (*pcVar12)(*(undefined8 *)(param_1 + 0xe4),uVar11);
/*  chat: discord.gg/sdkhDjTex  */
    }
    if (lVar9 == 0) {
      return 0xffffffffffffffc0;
    }
    *(long *)(param_1 + 0xb0) = lVar9;
    *(ulong *)(param_1 + 0xb2) = lVar9 + uVar11;
    *(long *)(param_1 + 0xb4) = lVar9;
    *(long *)(param_1 + 0xb8) = lVar9;
    uVar15 = lVar9 + uVar11 & 0xffffffffffffffc0;
    *(ulong *)(param_1 + 0xbc) = uVar15;
    param_1[0xc1] = 0;
    *(long *)(param_1 + 0xb6) = lVar9;
    *(ulong *)(param_1 + 0xba) = uVar15;
    *(undefined8 *)(param_1 + 0xbf) = 0;
    *(undefined1 *)(param_1 + 0xbe) = 0;
    if (uVar11 >> 9 < 0xb) {
      *(undefined1 *)(param_1 + 0xbe) = 1;
      *(undefined8 *)(param_1 + 0x326) = 0;
      return 0xffffffffffffffc0;
    }
    puVar2 = &UNK_00001600 + lVar9;
    *(undefined **)(param_1 + 0xb4) = puVar2;
    *(undefined **)(param_1 + 0xb6) = puVar2;
    *(undefined **)(param_1 + 0xb8) = puVar2;
    *(long *)(param_1 + 0x326) = lVar9;
    if (uVar11 >> 10 < 0xb) {
      *(undefined1 *)(param_1 + 0xbe) = 1;
      *(undefined8 *)(param_1 + 0x328) = 0;
      return 0xffffffffffffffc0;
    }
    puVar3 = &UNK_00002c00 + lVar9;
    *(undefined **)(param_1 + 0xb4) = puVar3;
    *(undefined **)(param_1 + 0xb6) = puVar3;
    *(undefined **)(param_1 + 0xb8) = puVar3;
    *(undefined **)(param_1 + 0x328) = puVar2;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    if (uVar11 >> 3 < 0x9db) {
      *(undefined1 *)(param_1 + 0xbe) = 1;
      *(undefined8 *)(param_1 + 0x376) = 0;
      return 0xffffffffffffffc0;
    }
    puVar2 = &UNK_00004ed8 + lVar9;
    *(undefined **)(param_1 + 0xb4) = puVar2;
    *(undefined **)(param_1 + 0xb8) = puVar2;
    *(undefined **)(param_1 + 0x376) = puVar3;
    *(undefined **)(param_1 + 0x378) = &UNK_000022d8;
    *(undefined **)(param_1 + 0xb6) = puVar2;
    *(ulong *)(param_1 + 0xba) = uVar15;
    bVar7 = true;
    *(undefined1 *)(param_1 + 0xbe) = 0;
  }
  else {
    bVar1 = 0x80 < (int)param_1[0xbf];
    if (uVar15 < uVar11) goto LAB_0029f458;
LAB_0029f414:
    if (bVar1) goto LAB_0029f458;
    *(undefined8 *)(param_1 + 0xb6) = *(undefined8 *)(param_1 + 0xb4);
    *(ulong *)(param_1 + 0xba) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    *(undefined1 *)(param_1 + 0xbe) = 0;
    if (1 < (uint)param_1[0xc0]) {
      param_1[0xc0] = 1;
    }
  }
// WM - if you paid for this, you were scammed
  puVar18 = param_1 + 0xbe;
  puVar16 = param_1 + 0xc0;
  *(undefined8 *)(param_1 + 0x36c) = *(undefined8 *)(param_1 + 0x3f);
  *(undefined8 *)(param_1 + 0x36a) = *(undefined8 *)puVar19;
  *(undefined8 *)(param_1 + 0x36f) = *(undefined8 *)(param_1 + 0x42);
  *(undefined8 *)(param_1 + 0x36d) = *(undefined8 *)(param_1 + 0x40);
  param_1[0x374] = (uint)(param_1[0x6c] == 1);
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  *(ulong *)(param_1 + 0xc4) = param_3 + 1;
  if (param_3 == 0xffffffffffffffff) {
    param_1[0x44] = 0;
  }
  *(ulong *)(param_1 + 0xc2) = uVar5;
  func_0x0029765c(param_1 + 0xca,0);
  *param_1 = 1;
  param_1[0xac] = 0;
  *(undefined8 *)(param_1 + 0xae) = 0;
  lVar9 = *(long *)(param_1 + 0x326);
  *(undefined4 *)(&UNK_000015f8 + lVar9) = 8;
  *(undefined8 *)(&UNK_000015f0 + lVar9) = 0x400000001;
  *(undefined4 *)(lVar9 + 0x808) = 0;
  *(undefined4 *)(&UNK_000015e4 + lVar9) = 0;
  *(undefined8 *)(&UNK_000015e8 + lVar9) = 0;
  uVar11 = func_0x0029fee0(param_1 + 0x32a,param_1 + 0xb0,puVar19,param_1[100],param_5,bVar7,1);
  if (0xffffffffffffff88 < uVar11) {
    return uVar11;
  }
  uVar10 = *puVar16;
  uVar11 = 0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  if (uVar4 != 0) {
    uVar11 = uVar5 / uVar4;
  }
  if (uVar10 < 2) {
    if (uVar10 != 0) {
LAB_0029f534:
      uVar10 = 2;
      *puVar16 = 2;
      goto LAB_0029f53c;
    }
    lVar9 = *(long *)(param_1 + 0xb4);
    *(long *)(param_1 + 0xb8) = lVar9;
    *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    uVar15 = lVar9 + ((ulong)(uint)-(int)lVar9 & 0x3f);
    if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
      *(ulong *)(param_1 + 0xb4) = uVar15;
      *(ulong *)(param_1 + 0xb6) = uVar15;
      if ((-(int)lVar9 & 0x3fU) != 0) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      goto LAB_0029f534;
    }
    uVar10 = 0;
    *(undefined8 *)(param_1 + 0xf4) = 0;
    iVar6 = param_1[0x54];
  }
  else {
LAB_0029f53c:
    uVar14 = uVar11 * 8 + 0x3f & 0xffffffffffffffc0;
    uVar15 = 0;
    if (uVar14 != 0) {
      uVar15 = *(long *)(param_1 + 0xba) - uVar14;
      if (uVar15 < *(ulong *)(param_1 + 0xb6)) {
        *(undefined1 *)puVar18 = 1;
        *(undefined8 *)(param_1 + 0xf4) = 0;
// reversing this took months of machine time
        iVar6 = param_1[0x54];
        goto joined_r0x0029f5e0;
      }
      if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      *(ulong *)(param_1 + 0xba) = uVar15;
    }
    *(ulong *)(param_1 + 0xf4) = uVar15;
    iVar6 = param_1[0x54];
  }
joined_r0x0029f5e0:
  if (iVar6 == 1) {
    if (uVar10 < 2) {
      lVar9 = *(long *)(param_1 + 0xb4);
      *(long *)(param_1 + 0xb8) = lVar9;
      *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
      uVar15 = lVar9 + ((ulong)(uint)-(int)lVar9 & 0x3f);
      if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
        *(ulong *)(param_1 + 0xb4) = uVar15;
        *(ulong *)(param_1 + 0xb6) = uVar15;
        if ((-(int)lVar9 & 0x3fU) != 0) {
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        *puVar16 = 2;
        goto LAB_0029f638;
      }
LAB_0029f67c:
      *(undefined8 *)(param_1 + 0x112) = 0;
      _bzero();
      uVar10 = param_1[0xc0];
joined_r0x0029f7bc:
      if (1 < uVar10) goto LAB_0029f7c4;
LAB_0029f694:
      if (uVar10 != 0) {
LAB_0029f69c:
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        uVar10 = 2;
        *puVar16 = 2;
        goto LAB_0029f7c4;
      }
      lVar9 = *(long *)(param_1 + 0xb4);
      *(long *)(param_1 + 0xb8) = lVar9;
      *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
      uVar15 = lVar9 + ((ulong)(uint)-(int)lVar9 & 0x3f);
      if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
        *(ulong *)(param_1 + 0xb4) = uVar15;
        *(ulong *)(param_1 + 0xb6) = uVar15;
        if ((-(int)lVar9 & 0x3fU) != 0) {
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        goto LAB_0029f69c;
      }
      uVar10 = 0;
      uVar15 = 0;
    }
    else {
LAB_0029f638:
      uVar15 = (8L << ((ulong)(uint)param_1[0x55] & 0x3f)) + 0x3fU & 0xffffffffffffffc0;
      if (uVar15 == 0) goto LAB_0029f67c;
      uVar15 = *(long *)(param_1 + 0xba) - uVar15;
      if (*(ulong *)(param_1 + 0xb6) <= uVar15) {
/*  if you paid for this, you were scammed  */
        if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        *(ulong *)(param_1 + 0xba) = uVar15;
        *(ulong *)(param_1 + 0x112) = uVar15;
        _bzero();
        uVar10 = param_1[0xc0];
        goto joined_r0x0029f7bc;
      }
      *(undefined1 *)puVar18 = 1;
      *(undefined8 *)(param_1 + 0x112) = 0;
      _bzero();
      uVar10 = param_1[0xc0];
      if (uVar10 < 2) goto LAB_0029f694;
LAB_0029f7c4:
      uVar14 = lVar8 * 0xc + 0x3fU & 0xffffffffffffffc0;
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = *(long *)(param_1 + 0xba) - uVar14;
        if (uVar15 < *(ulong *)(param_1 + 0xb6)) {
          uVar15 = 0;
          *(undefined1 *)puVar18 = 1;
        }
        else {
          if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
            *(ulong *)(param_1 + 0xb8) = uVar15;
          }
          *(ulong *)(param_1 + 0xba) = uVar15;
        }
      }
    }
    *(ulong *)(param_1 + 0x318) = uVar15;
/* donate: donate/README.md - github.com/pengussy */
    *(long *)(param_1 + 0x31a) = lVar8;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined **)(param_1 + 0x10a) = &UNK_01c881b6;
    *(undefined **)(param_1 + 0x10c) = &UNK_01c881b6;
    *(undefined8 *)(param_1 + 0x10e) = 0x200000002;
    *(undefined **)(param_1 + 0x108) = &UNK_01c881b8;
    param_1[0x114] = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar8 = (uVar5 >> 10) + uVar5 / 3 + 2;
    *(long *)(param_1 + 0x524) = lVar8;
    if (uVar10 < 2) {
      lVar9 = *(long *)(param_1 + 0xb4);
      *(long *)(param_1 + 0xb8) = lVar9;
      *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
      uVar15 = lVar9 + ((ulong)(uint)-(int)lVar9 & 0x3f);
      if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
        *(ulong *)(param_1 + 0xb4) = uVar15;
        *(ulong *)(param_1 + 0xb6) = uVar15;
        if ((-(int)lVar9 & 0x3fU) != 0) {
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        uVar10 = 2;
        *puVar16 = 2;
// thanks for reading - discord.gg/sdkhDjTex
        goto LAB_0029f924;
      }
      uVar10 = 0;
      uVar15 = 0;
    }
    else {
LAB_0029f924:
      uVar14 = lVar8 * 0x10 + 0x3fU & 0xffffffffffffffc0;
      uVar15 = 0;
      if (uVar14 != 0) {
        uVar15 = *(long *)(param_1 + 0xba) - uVar14;
        if (uVar15 < *(ulong *)(param_1 + 0xb6)) {
          uVar15 = 0;
          *(undefined1 *)puVar18 = 1;
        }
        else {
          if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
            *(ulong *)(param_1 + 0xb8) = uVar15;
          }
          *(ulong *)(param_1 + 0xba) = uVar15;
        }
      }
    }
    *(ulong *)(param_1 + 0x522) = uVar15;
  }
  if (uVar10 < 3) {
    if (uVar10 != 0) {
LAB_0029f97c:
/*  thanks for reading - discord.gg/sdkhDjTex  */
      uVar10 = 3;
      *puVar16 = 3;
      goto LAB_0029f984;
    }
    lVar8 = *(long *)(param_1 + 0xb4);
    *(long *)(param_1 + 0xb8) = lVar8;
    *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    uVar15 = lVar8 + ((ulong)(uint)-(int)lVar8 & 0x3f);
    if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
      *(ulong *)(param_1 + 0xb4) = uVar15;
      *(ulong *)(param_1 + 0xb6) = uVar15;
      if ((-(int)lVar8 & 0x3fU) != 0) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      goto LAB_0029f97c;
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(ulong *)(param_1 + 0x104) = uVar5;
    param_1[0x37a] = param_6;
    *(long *)(param_1 + 0x37e) = lVar13;
    lVar8 = *(long *)(param_1 + 0xb4);
    *(long *)(param_1 + 0xb8) = lVar8;
    *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    uVar15 = lVar8 + ((ulong)(uint)-(int)lVar8 & 0x3f);
/*  found on a paste site? it was re-uploaded illegally  */
    if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
      *(ulong *)(param_1 + 0xb4) = uVar15;
      *(ulong *)(param_1 + 0xb6) = uVar15;
      if ((-(int)lVar8 & 0x3fU) != 0) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      uVar10 = 3;
      *puVar16 = 3;
      goto joined_r0x0029fa1c;
    }
    *(undefined8 *)(param_1 + 0x37c) = 0;
    *(long *)(param_1 + 0x388) = lVar17;
    lVar13 = *(long *)(param_1 + 0xb4);
    *(long *)(param_1 + 0xb8) = lVar13;
    *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    uVar15 = lVar13 + ((ulong)(uint)-(int)lVar13 & 0x3f);
    if (*(ulong *)(param_1 + 0xb2) < uVar15) {
      uVar10 = 0;
      goto LAB_0029fbf4;
    }
    *(ulong *)(param_1 + 0xb4) = uVar15;
    *(ulong *)(param_1 + 0xb6) = uVar15;
    if ((-(int)lVar13 & 0x3fU) != 0) {
      *(ulong *)(param_1 + 0xb8) = uVar15;
    }
    uVar10 = 3;
    *puVar16 = 3;
joined_r0x0029fbf0:
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    if (lVar17 != 0) goto LAB_0029fa5c;
LAB_0029fbf4:
    uVar15 = 0;
  }
  else {
LAB_0029f984:
    uVar15 = (*(long *)(param_1 + 0xba) - uVar5) - 0x20;
    if (uVar15 < *(ulong *)(param_1 + 0xb6)) {
      *(undefined1 *)puVar18 = 1;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      *(ulong *)(param_1 + 0x104) = uVar5;
      param_1[0x37a] = param_6;
      *(long *)(param_1 + 0x37e) = lVar13;
    }
    else {
      if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      *(ulong *)(param_1 + 0xba) = uVar15;
      *(ulong *)(param_1 + 0xf8) = uVar15;
      *(ulong *)(param_1 + 0x104) = uVar5;
      param_1[0x37a] = param_6;
      *(long *)(param_1 + 0x37e) = lVar13;
    }
joined_r0x0029fa1c:
    if (lVar13 == 0) {
      *(undefined8 *)(param_1 + 0x37c) = 0;
      *(long *)(param_1 + 0x388) = lVar17;
      goto joined_r0x0029fbf0;
    }
    uVar15 = *(long *)(param_1 + 0xba) - lVar13;
    if (*(ulong *)(param_1 + 0xb6) <= uVar15) {
      if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      *(ulong *)(param_1 + 0xba) = uVar15;
      *(ulong *)(param_1 + 0x37c) = uVar15;
/* origin: github.com/pengussy */
      *(long *)(param_1 + 0x388) = lVar17;
      goto joined_r0x0029fbf0;
    }
    *(undefined1 *)puVar18 = 1;
    *(undefined8 *)(param_1 + 0x37c) = 0;
    *(long *)(param_1 + 0x388) = lVar17;
    if (lVar17 == 0) goto LAB_0029fbf4;
LAB_0029fa5c:
    uVar15 = *(long *)(param_1 + 0xba) - lVar17;
    if (uVar15 < *(ulong *)(param_1 + 0xb6)) {
      uVar15 = 0;
      *(undefined1 *)puVar18 = 1;
    }
    else {
      if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      *(ulong *)(param_1 + 0xba) = uVar15;
    }
  }
  *(ulong *)(param_1 + 0x386) = uVar15;
  if (param_1[0x54] == 1) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    if (uVar10 < 3) {
      lVar13 = *(long *)(param_1 + 0xb4);
      *(long *)(param_1 + 0xb8) = lVar13;
      *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
      uVar15 = lVar13 + ((ulong)(uint)-(int)lVar13 & 0x3f);
      if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
        *(ulong *)(param_1 + 0xb4) = uVar15;
        *(ulong *)(param_1 + 0xb6) = uVar15;
        if ((-(int)lVar13 & 0x3fU) != 0) {
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        *puVar16 = 3;
        goto LAB_0029fc6c;
      }
      uVar15 = 0;
    }
    else {
LAB_0029fc6c:
      uVar15 = *(long *)(param_1 + 0xba) -
               (1L << ((ulong)(uint)(param_1[0x55] - param_1[0x56]) & 0x3f));
      if (uVar15 < *(ulong *)(param_1 + 0xb6)) {
        uVar15 = 0;
        *(undefined1 *)puVar18 = 1;
      }
      else {
        if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        *(ulong *)(param_1 + 0xba) = uVar15;
      }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    }
    *(ulong *)(param_1 + 0x116) = uVar15;
    _bzero();
    uVar10 = param_1[0xc0];
  }
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x322) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x31e) = 0;
  *(undefined8 *)(param_1 + 0x31c) = 0;
  *(ulong *)(param_1 + 0x102) = uVar11;
  if (uVar10 < 3) {
    if (uVar10 != 0) {
LAB_0029fcd0:
      *puVar16 = 3;
      goto LAB_0029fcd8;
    }
    lVar13 = *(long *)(param_1 + 0xb4);
    *(long *)(param_1 + 0xb8) = lVar13;
    *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    uVar15 = lVar13 + ((ulong)(uint)-(int)lVar13 & 0x3f);
    if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
      *(ulong *)(param_1 + 0xb4) = uVar15;
      *(ulong *)(param_1 + 0xb6) = uVar15;
      if ((-(int)lVar13 & 0x3fU) != 0) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      goto LAB_0029fcd0;
    }
    *(undefined8 *)(param_1 + 0xfc) = 0;
    lVar13 = *(long *)(param_1 + 0xb4);
    *(long *)(param_1 + 0xb8) = lVar13;
// WM - thanks for reading - discord.gg/sdkhDjTex
    *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    uVar15 = lVar13 + ((ulong)(uint)-(int)lVar13 & 0x3f);
    if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
      *(ulong *)(param_1 + 0xb4) = uVar15;
      *(ulong *)(param_1 + 0xb6) = uVar15;
      if ((-(int)lVar13 & 0x3fU) != 0) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      *puVar16 = 3;
      goto joined_r0x0029fd94;
    }
    *(undefined8 *)(param_1 + 0xfe) = 0;
    lVar13 = *(long *)(param_1 + 0xb4);
    *(long *)(param_1 + 0xb8) = lVar13;
    *(ulong *)(param_1 + 0xbc) = *(ulong *)(param_1 + 0xb2) & 0xffffffffffffffc0;
    uVar15 = lVar13 + ((ulong)(uint)-(int)lVar13 & 0x3f);
    if (uVar15 <= *(ulong *)(param_1 + 0xb2)) {
      *(ulong *)(param_1 + 0xb4) = uVar15;
      *(ulong *)(param_1 + 0xb6) = uVar15;
      if ((-(int)lVar13 & 0x3fU) != 0) {
        *(ulong *)(param_1 + 0xb8) = uVar15;
      }
      *puVar16 = 3;
      goto joined_r0x0029fd48;
    }
  }
  else {
LAB_0029fcd8:
    if (uVar5 < uVar4) {
      *(undefined8 *)(param_1 + 0xfc) = 0;
/* keep the notice, keep the source honest - github.com/pengussy */
joined_r0x0029fd94:
      if (uVar4 <= uVar5) goto LAB_0029fd24;
LAB_0029fcec:
      *(undefined8 *)(param_1 + 0xfe) = 0;
    }
    else {
      uVar15 = *(long *)(param_1 + 0xba) - uVar11;
      if (*(ulong *)(param_1 + 0xb6) <= uVar15) {
        if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        *(ulong *)(param_1 + 0xba) = uVar15;
        *(ulong *)(param_1 + 0xfc) = uVar15;
        goto joined_r0x0029fd94;
      }
      *(undefined1 *)puVar18 = 1;
      *(undefined8 *)(param_1 + 0xfc) = 0;
      if (uVar5 < uVar4) goto LAB_0029fcec;
LAB_0029fd24:
      uVar15 = *(long *)(param_1 + 0xba) - uVar11;
      if (uVar15 < *(ulong *)(param_1 + 0xb6)) {
        *(undefined1 *)puVar18 = 1;
        *(undefined8 *)(param_1 + 0xfe) = 0;
      }
      else {
        if (uVar15 < *(ulong *)(param_1 + 0xb8)) {
// proprietary - see LICENSE - do not sell
          *(ulong *)(param_1 + 0xb8) = uVar15;
        }
        *(ulong *)(param_1 + 0xba) = uVar15;
        *(ulong *)(param_1 + 0xfe) = uVar15;
      }
    }
joined_r0x0029fd48:
    if (uVar4 <= uVar5) {
      uVar11 = *(long *)(param_1 + 0xba) - uVar11;
      if (uVar11 < *(ulong *)(param_1 + 0xb6)) {
        uVar11 = 0;
        *(undefined1 *)puVar18 = 1;
      }
      else {
        if (uVar11 < *(ulong *)(param_1 + 0xb8)) {
          *(ulong *)(param_1 + 0xb8) = uVar11;
        }
        *(ulong *)(param_1 + 0xba) = uVar11;
      }
      goto LAB_0029fe74;
    }
  }
  uVar11 = 0;
LAB_0029fe74:
  *(ulong *)(param_1 + 0x100) = uVar11;
  param_1[0xf3] = 1;
  return 0;
}

