/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x362dac:ac2ef7c486
 */

undefined8 FUN_00362dac(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
/* wm:reversing this took months of machine time */
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  ulong uVar21;
  long lVar22;
  
  uVar14 = *(undefined8 *)(param_1 + 0x370);
  uVar16 = *(undefined8 *)(param_1 + 0x378);
  uVar2 = *(undefined4 *)(param_1 + 0x380);
  uVar20 = *(undefined8 *)(param_1 + 0x390);
  lVar18 = *(long *)(param_1 + 0x368);
  lVar19 = *(long *)(param_1 + 0x388);
  iVar7 = func_0x003f85b4(uVar14);
  iVar8 = func_0x004553d8(uVar14);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  if ((iVar8 == 6) || (iVar8 = func_0x004553d8(uVar14), iVar8 == 7)) {
    uVar9 = 4;
  }
  else {
    uVar9 = func_0x00455c98(uVar14);
    if ((int)uVar9 < 0) {
      uVar14 = 0x9b;
      goto LAB_00362e60;
    }
  }
  lVar15 = (long)iVar7;
  uVar21 = (ulong)uVar9;
  if (((int)param_2 == 0x21) || ((int)param_2 == 0x12)) {
    lVar11 = lVar19 << 1;
    lVar22 = (lVar19 + lVar15) * 2;
    lVar12 = lVar18;
    if (*(ulong *)(param_1 + 0x360) < (lVar19 + lVar15 + uVar21) * 2) goto LAB_00362e5c;
  }
  else {
    lVar12 = lVar18 + lVar19;
    lVar11 = lVar15 + lVar19 * 2;
    lVar22 = lVar11 + lVar15 + uVar21;
    if (*(ulong *)(param_1 + 0x360) < lVar22 + uVar21) {
LAB_00362e5c:
      uVar14 = 0xb1;
LAB_00362e60:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                      ,uVar14,"tls1_change_cipher_state");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
  }
  iVar7 = func_0x004553d8(uVar14);
  if (iVar7 != 6) {
    if (iVar7 == 7) {
      uVar13 = 0x10;
      if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x26) & 3) != 0) {
        uVar13 = 8;
      }
      iVar7 = *(int *)(param_1 + 0xb1c);
      uVar10 = *(ulong *)(param_1 + 0x160);
      goto joined_r0x00363018;
    }
    iVar7 = func_0x004553ec(uVar14,"CHACHA20-POLY1305");
    if (iVar7 == 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x388);
      iVar7 = *(int *)(param_1 + 0xb1c);
      uVar10 = *(ulong *)(param_1 + 0x160);
      goto joined_r0x00363018;
    }
  }
  uVar13 = 0x10;
  iVar7 = *(int *)(param_1 + 0xb1c);
  uVar10 = *(ulong *)(param_1 + 0x160);
joined_r0x00363018:
  if ((param_2 & 1) == 0) {
// WM - origin: github.com/pengussy
    uVar1 = 0;
    if (iVar7 != 0) {
      uVar1 = 0x400;
    }
    *(ulong *)(param_1 + 0x160) = uVar10 & 0xfffffffffffffbff | uVar1;
    uVar4 = *(uint *)(*(long *)(param_1 + 0x300) + 0x40);
    uVar3 = *(uint *)(param_1 + 0x578);
    uVar9 = uVar3 & 1 | (uVar4 >> 0x10 & 1) << 1;
    uVar6 = uVar3 & 0xfffffff4 | uVar9;
    if ((uVar4 & 0x20000) != 0) {
      uVar6 = uVar3 & 0xfffffffc | uVar9 | 8;
    }
    uVar17 = 1;
    *(uint *)(param_1 + 0x578) = uVar6;
    bVar5 = *(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
  }
  else {
    uVar1 = 0;
    if (iVar7 != 0) {
      uVar1 = 0x100;
    }
    *(ulong *)(param_1 + 0x160) = uVar10 & 0xfffffffffffffeff | uVar1;
    uVar3 = *(uint *)(*(long *)(param_1 + 0x300) + 0x40);
    uVar9 = uVar3 >> 0x10 & 1;
    uVar4 = *(uint *)(param_1 + 0x578) & 0xfffffffa | uVar9;
    if ((uVar3 & 0x20000) != 0) {
      uVar4 = *(uint *)(param_1 + 0x578) & 0xfffffffe | uVar9 | 4;
    }
    uVar17 = 0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    *(uint *)(param_1 + 0x578) = uVar4;
    bVar5 = *(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
  }
  if ((bVar5 >> 3 & 1) != 0) {
    func_0x00392ff4(param_1,param_2);
  }
  iVar7 = FUN_00393454(param_1,*(undefined4 *)(param_1 + 0x48),uVar17,3,0,0,lVar18 + lVar11,lVar15,
                       lVar18 + lVar22,uVar21,lVar12,lVar19,uVar14,uVar13,uVar2,uVar16,uVar20,0);
  if (iVar7 == 0) {
    return 0;
  }
  return 1;
}

