/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x329034:a60a2e6028
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x003293fc) */

undefined8 *
FUN_00329034(undefined4 param_1,undefined4 param_2,long param_3,long param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  bool bVar7;
  byte bVar8;
  undefined8 uVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  undefined4 uStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
/* wm:proprietary - see LICENSE - do not sell */
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if ((lRam00000000020973e0 != 0) && (((&UNK_0000286d)[lRam00000000020973e0] & 1) != 0)) {
    func_0x002fd6a4("[font] Created baked %.2fpx\n");
  }
  lVar15 = *(long *)(param_3 + 0x2b0);
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_e0 = 0;
  fStack_dc = 0.0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_a0 = 0xffffffff;
  uVar3 = *(uint *)(lVar15 + 0xc0);
/* wm:if you paid for this, you were scammed */
  if (uVar3 == *(uint *)(lVar15 + 0xc4)) {
    uVar1 = uVar3 + 0x1f;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    iVar16 = (int)uVar1 >> 5;
    uVar1 = (int)(uVar3 + 0x3f) >> 5;
    if (iVar16 < (int)uVar1) {
      iVar4 = *(int *)(lVar15 + 0xcc);
      if (iVar4 < (int)uVar1) {
        uVar2 = 8;
        if (iVar4 != 0) {
          uVar2 = iVar4 + iVar4 / 2;
        }
        if ((int)uVar2 <= (int)uVar1) {
          uVar2 = uVar1;
        }
        uVar9 = func_0x002fd6d8(-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
        if (*(long *)(lVar15 + 0xd0) != 0) {
          _memcpy(uVar9,*(long *)(lVar15 + 0xd0),(long)*(int *)(lVar15 + 200) << 3);
          func_0x002fda6c(*(undefined8 *)(lVar15 + 0xd0));
        }
        *(undefined8 *)(lVar15 + 0xd0) = uVar9;
        *(uint *)(lVar15 + 0xcc) = uVar2;
      }
      *(uint *)(lVar15 + 200) = uVar1;
      lVar17 = (long)iVar16;
      do {
        uVar9 = func_0x002fd6d8(0xd00);
        *(undefined8 *)(*(long *)(lVar15 + 0xd0) + lVar17 * 8) = uVar9;
        lVar17 = lVar17 + 1;
      } while ((int)uVar1 != lVar17);
      *(uint *)(lVar15 + 0xc4) = uVar3 + 0x3f & 0xffffffe0;
    }
/* do not claim this as your own - github.com/pengussy */
  }
  else {
    uVar1 = uVar3 + 0x1f;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    iVar16 = (int)uVar1 >> 5;
  }
  uVar1 = uVar3 & 0x1f;
  if (-1 < (int)-uVar3) {
    uVar1 = -(-uVar3 & 0x1f);
  }
  puVar13 = (undefined8 *)
            (*(long *)(*(long *)(lVar15 + 0xd0) + (long)iVar16 * 8) + (long)(int)uVar1 * 0x68);
  puVar13[0xc] = uStack_80;
  puVar13[9] = uStack_98;
  puVar13[8] = uStack_a0;
  puVar13[0xb] = uStack_88;
  puVar13[10] = uStack_90;
  puVar13[7] = uStack_a8;
  puVar13[6] = uStack_b0;
  puVar13[3] = CONCAT44(uStack_c4,uStack_c8);
  puVar13[2] = CONCAT44(uStack_cc,uStack_d0);
  puVar13[5] = CONCAT44(uStack_b4,uStack_b8);
  puVar13[4] = CONCAT44(uStack_bc,uStack_c0);
  puVar13[1] = CONCAT44(uStack_d4,uStack_d8);
  *puVar13 = CONCAT44(fStack_dc,uStack_e0);
  *(int *)(lVar15 + 0xc0) = *(int *)(lVar15 + 0xc0) + 1;
  plVar10 = *(long **)(param_4 + 0x28);
  iVar16 = *(int *)(param_4 + 0x20);
  uVar5 = *(undefined4 *)(*(long *)(param_3 + 0x2b0) + 0xa4);
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
  *(undefined4 *)((long)puVar13 + 0x14) = param_1;
  *(undefined4 *)(puVar13 + 3) = param_2;
  puVar13[0xb] = param_4;
  *(undefined4 *)(puVar13 + 10) = uVar5;
  *(undefined4 *)((long)puVar13 + 0x54) = param_5;
  if (iVar16 == 0) {
LAB_0032924c:
    lVar15 = 0;
    puVar13[0xc] = 0;
    iVar16 = *(int *)(param_4 + 0x20);
  }
  else {
    lVar15 = 0;
    lVar17 = (long)iVar16 << 3;
    do {
      lVar12 = *(long *)(*plVar10 + 0x88);
      if (lVar12 == 0) {
        lVar12 = *(long *)(param_3 + 0x2b8);
      }
      lVar15 = *(long *)(lVar12 + 0x48) + lVar15;
      plVar10 = plVar10 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
    if (lVar15 == 0) goto LAB_0032924c;
    lVar15 = func_0x002fd6d8();
    puVar13[0xc] = lVar15;
    iVar16 = *(int *)(param_4 + 0x20);
  }
  if (iVar16 != 0) {
// WM - watermarked copy - do not remove
    plVar10 = *(long **)(param_4 + 0x28);
    lVar17 = (long)iVar16 << 3;
    do {
      lVar12 = *(long *)(*plVar10 + 0x88);
      if (lVar12 == 0) {
        lVar12 = *(long *)(param_3 + 0x2b8);
        pcVar11 = *(code **)(lVar12 + 0x30);
      }
      else {
        pcVar11 = *(code **)(lVar12 + 0x30);
      }
      if (pcVar11 != (code *)0x0) {
        (*pcVar11)(param_3,*plVar10,puVar13,lVar15);
      }
      lVar15 = lVar15 + *(long *)(lVar12 + 0x48);
      plVar10 = plVar10 + 1;
      lVar17 = lVar17 + -8;
    } while (lVar17 != 0);
  }
  if (*(uint *)(puVar13 + 4) < 0x21) {
LAB_00329328:
    func_0x019e3280(puVar13,&uStack_e0);
    puVar14 = (uint *)CONCAT44(fStack_dc,uStack_e0);
    if (puVar14 == (uint *)0x0) {
LAB_0032933c:
      bVar8 = 0;
      uVar3 = *(uint *)(puVar13 + 4);
    }
    else {
LAB_003292f0:
      *puVar14 = *puVar14 & 0xfffffffd;
      bVar8 = 1;
      uVar3 = *(uint *)(puVar13 + 4);
    }
  }
  else {
    uVar6 = *(ushort *)(puVar13[5] + 0x40);
    if (uVar6 != 0xfffe) {
/*  proprietary - see LICENSE - do not sell  */
      if (uVar6 == 0xffff) goto LAB_00329328;
      puVar14 = (uint *)(puVar13[7] + (ulong)uVar6 * 0x2c);
      if (puVar14 == (uint *)0x0) goto LAB_0032933c;
      goto LAB_003292f0;
    }
    bVar8 = 0;
    puVar14 = (uint *)0x0;
    uVar3 = *(uint *)(puVar13 + 4);
  }
  if (9 < uVar3) {
    uVar6 = *(ushort *)(puVar13[5] + 0x12);
    if (uVar6 == 0xfffe) {
      if ((bool)(bVar8 ^ 1)) {
        return puVar13;
      }
      goto LAB_00329388;
    }
    if (uVar6 != 0xffff) {
      bVar7 = (bool)(bVar8 ^ 1);
      if (puVar13[7] + (ulong)uVar6 * 0x2c != 0) {
        bVar7 = true;
      }
      if (bVar7) {
        return puVar13;
      }
      goto LAB_00329388;
    }
  }
  func_0x019e32a4(puVar13,&uStack_e0);
  bVar7 = (bool)(bVar8 ^ 1);
  if (CONCAT44(fStack_dc,uStack_e0) != 0) {
    bVar7 = true;
  }
/* wm:more drops soon - github.com/pengussy */
  if (bVar7) {
    return puVar13;
  }
LAB_00329388:
  uStack_bc = 0;
  uStack_b8 = 0xffffffff;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0x240;
  fStack_dc = (float)puVar14[1] * 4.0;
  func_0x0032857c(param_3,puVar13,0,&uStack_e0);
  return puVar13;
}

