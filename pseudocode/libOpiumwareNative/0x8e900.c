/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x8e900:7f58f5d0f4
 */

byte * FUN_0008e900(byte *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  byte *pbVar4;
  code *pcVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  byte *pbVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  char *pcStack_58;
  
  uVar3 = func_0x0008efa4(param_2);
  if ((uVar3 & 1) == 0) {
    pbVar4 = (byte *)(*pcRam0000000002065640)();
// keep the notice, keep the source honest
    if ((*pbVar4 & 1) == 0) goto LAB_0008ef9c;
    do {
      pcStack_58 = (char *)(*pcRam0000000002065628)();
      if (*pcStack_58 == '\x01') {
        lVar17 = 0;
        uVar3 = 0x464d30b048466bd0;
        do {
          uVar14 = (uVar3 ^ uVar3 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar2 = (uint)(byte)pcStack_58[lVar17 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                  (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_58[lVar17 + 0x17] = ((byte)(uVar2 >> 2) & 0x3f | (char)uVar2 * '@') ^ (byte)uVar15
          ;
          uVar3 = lVar17 + -0x61c8864680b583eb +
                  (uVar3 >> 0x2f | (uVar3 ^ (byte)pcStack_58[lVar17 + 1]) << 0x11);
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x16);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        *pcStack_58 = '\0';
      }
      pcStack_58 = pcStack_58 + 0x17;
      func_0x0011ab24(&pcStack_58);
      func_0x007a1b5c(param_1,"%s");
LAB_0008ef9c:
      func_0x019bef40();
    } while( true );
  }
  func_0x007911b0(param_1,1);
  pbVar4 = (byte *)func_0x0080e400(param_1);
  if ((*param_1 >> 2 & 1) != 0) {
    func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x48);
  *puVar11 = pbVar4;
  *(undefined4 *)((long)puVar11 + 0xc) = 0xf;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  pbVar4[7] = *(byte *)(param_2 + 7);
  *(undefined4 *)(pbVar4 + 3) = *(undefined4 *)(param_2 + 3);
  *(byte **)(pbVar4 + 0x70) = pbVar4 + *(long *)(param_2 + 0x70) + (0x70 - (param_2 + 0x70));
  *(undefined4 *)(pbVar4 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(pbVar4 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
  *(undefined8 *)(pbVar4 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined4 *)(pbVar4 + 0xa4) = uVar1;
  pbVar4[0xa8] = 0;
  pbVar4[0xa9] = 0;
  pbVar4[0xaa] = 0;
  pbVar4[0xab] = 0;
  pbVar9 = (byte *)(*(long *)(param_2 + 0x30) - (param_2 + 0x30));
/* wm:stripping the watermark breaks the license */
  *(byte **)(pbVar4 + 0x30) = pbVar9 + (long)(pbVar4 + 0x30);
  if (((pbVar9 != (byte *)0x0) && ((*pbVar4 >> 2 & 1) != 0)) && ((*pbVar9 & 3) != 0)) {
    func_0x0081b3dc(param_1,pbVar4);
  }
  puVar12 = (ulong *)(param_2 + 0x20);
  puVar13 = (ulong *)*puVar12;
  pbVar9 = (byte *)((ulong)puVar13 ^ (ulong)puVar12);
  *(ulong *)(pbVar4 + 0x20) = (ulong)pbVar9 ^ (ulong)(pbVar4 + 0x20);
  if (((puVar13 != puVar12) && ((*pbVar4 >> 2 & 1) != 0)) && ((*pbVar9 & 3) != 0)) {
    func_0x0081b3dc(param_1,pbVar4);
  }
  if (0 < (int)*(uint *)(param_2 + 0xa0)) {
    uVar3 = func_0x00848e80(param_1,(ulong)*(uint *)(param_2 + 0xa0) * 0x18,pbVar4[2]);
    _memmove(uVar3,*(ulong *)(param_2 + 0x60) ^ (ulong)(param_2 + 0x60),
             (long)*(int *)(param_2 + 0xa0) * 0x18);
    puVar12 = (ulong *)(pbVar4 + 0x60);
/* donate: donate/README.md - github.com/pengussy */
    *(ulong *)(pbVar4 + 0x60) = uVar3 ^ (ulong)puVar12;
    iVar10 = *(int *)(param_2 + 0xa0);
    *(int *)(pbVar4 + 0xa0) = iVar10;
    if (0 < iVar10) {
      lVar16 = 0;
      lVar17 = 0;
      do {
        pbVar9 = *(byte **)((*puVar12 ^ (ulong)puVar12) + lVar16);
        if (((pbVar9 != (byte *)0x0) && ((*pbVar4 >> 2 & 1) != 0)) && ((*pbVar9 & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar4);
          iVar10 = *(int *)(pbVar4 + 0xa0);
        }
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 0x18;
      } while (lVar17 < iVar10);
    }
  }
  if (0 < (int)*(uint *)(param_2 + 0x98)) {
    lVar17 = func_0x00848e80(param_1,(ulong)*(uint *)(param_2 + 0x98) << 3,pbVar4[2]);
    _memmove(lVar17,*(long *)(param_2 + 0x10) + param_2 + 0x10,(long)*(int *)(param_2 + 0x98) << 3);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    pbVar9 = pbVar4 + 0x10;
    *(long *)(pbVar4 + 0x10) = lVar17 - (long)pbVar9;
    iVar10 = *(int *)(param_2 + 0x98);
    *(int *)(pbVar4 + 0x98) = iVar10;
    if (0 < iVar10) {
      lVar17 = 0;
      do {
        if (((*(byte **)(pbVar9 + lVar17 * 8 + *(long *)pbVar9) != (byte *)0x0) &&
            ((*pbVar4 >> 2 & 1) != 0)) &&
           ((**(byte **)(pbVar9 + lVar17 * 8 + *(long *)pbVar9) & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar4);
          iVar10 = *(int *)(pbVar4 + 0x98);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar10);
    }
  }
  if (0 < *(int *)(param_2 + 0xb4)) {
    lVar17 = func_0x00848e80(param_1,*(int *)(param_2 + 0xb4),pbVar4[2]);
    pcVar5 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
    (*pcVar5)(lVar17,(param_2 + 0x40) - *(long *)(param_2 + 0x40),(long)*(int *)(param_2 + 0xb4));
    *(byte **)(pbVar4 + 0x40) = pbVar4 + (0x40 - lVar17);
    *(undefined4 *)(pbVar4 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  }
  if (0 < *(int *)(param_2 + 0xbc)) {
    puVar12 = (ulong *)(param_2 + 8);
    if ((ulong *)*puVar12 != puVar12) {
      plVar18 = (long *)(param_2 + 0x78);
      if (*plVar18 + (long)plVar18 != 0) {
        uVar3 = func_0x00848e80(param_1,8,pbVar4[2]);
        pcVar5 = (code *)func_0x0011ab24(PTR__memset_01f20370);
        (*pcVar5)(uVar3,0,8);
        pbVar4[0xbc] = 8;
        pbVar4[0xbd] = 0;
        pbVar4[0xbe] = 0;
        pbVar4[0xbf] = 0;
        *(ulong *)(pbVar4 + 0x78) = (uVar3 + 4) - (long)(pbVar4 + 0x78);
        iVar10 = *(int *)(*plVar18 + (long)plVar18);
/* wm:no support for modified copies */
        *(ulong *)(pbVar4 + 8) = uVar3 ^ (ulong)(pbVar4 + 8);
        *(uint *)(uVar3 + 4) = iVar10 + (uint)*(byte *)(*puVar12 ^ (ulong)puVar12);
      }
    }
  }
  puVar6 = (undefined4 *)func_0x00848e80(param_1,4,pbVar4[2]);
  *puVar6 = uRam0000000001f265f0;
  *(undefined4 **)(pbVar4 + 0x88) = puVar6;
  pbVar4[0xb8] = 1;
  pbVar4[0xb9] = 0;
  pbVar4[0xba] = 0;
  pbVar4[0xbb] = 0;
  *(undefined4 **)(pbVar4 + 0x18) = puVar6;
  if (*(long **)(param_2 + 0x90) != (long *)(param_2 + 0x90)) {
    puVar7 = (undefined1 *)func_0x00848e80(param_1,1,pbVar4[2]);
    *puVar7 = (char)uRam0000000001f265f0;
    *(ulong *)(pbVar4 + 0x90) = (ulong)puVar7 ^ (ulong)(pbVar4 + 0x90);
  }
  if (0 < (int)*(uint *)(param_2 + 0xb0)) {
    uVar8 = func_0x00848e80(param_1,(ulong)*(uint *)(param_2 + 0xb0) << 4,pbVar4[2]);
    _memmove(uVar8,*(undefined8 *)(param_2 + 0x80),(long)*(int *)(param_2 + 0xb0) << 4);
    *(undefined8 *)(pbVar4 + 0x80) = uVar8;
    iVar10 = *(int *)(param_2 + 0xb0);
    *(int *)(pbVar4 + 0xb0) = iVar10;
    if (0 < iVar10) {
      lVar16 = 0;
      lVar17 = 0;
      do {
        if (((5 < *(int *)(*(long *)(pbVar4 + 0x80) + lVar16 + 0xc)) && ((*pbVar4 >> 2 & 1) != 0))
           && ((**(byte **)(*(long *)(pbVar4 + 0x80) + lVar16) & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar4);
          iVar10 = *(int *)(pbVar4 + 0xb0);
        }
        lVar17 = lVar17 + 1;
        lVar16 = lVar16 + 0x10;
      } while (lVar17 < iVar10);
    }
/* WM - keep the notice, keep the source honest */
  }
  if (0 < (int)*(uint *)(param_2 + 0xac)) {
    uVar8 = func_0x00848e80(param_1,(ulong)*(uint *)(param_2 + 0xac) << 3,pbVar4[2]);
    uVar2 = *(uint *)(param_2 + 0xac);
    if (0 < (int)uVar2) {
      _bzero(uVar8,(ulong)uVar2 << 3);
    }
    *(undefined8 *)(pbVar4 + 0x58) = uVar8;
    *(uint *)(pbVar4 + 0xac) = uVar2;
    if (0 < *(int *)(param_2 + 0xac)) {
      lVar17 = 0;
      do {
        pbVar9 = (byte *)FUN_0008e900(param_1,*(undefined8 *)
                                               (*(long *)(param_2 + 0x58) + lVar17 * 8));
        *(byte **)(*(long *)(pbVar4 + 0x58) + lVar17 * 8) = pbVar9;
        if (((*pbVar4 >> 2 & 1) != 0) && ((*pbVar9 & 3) != 0)) {
          func_0x0081b3dc(param_1,pbVar4,pbVar9);
        }
        func_0x00791660(param_1,0xfffffffe);
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(param_2 + 0xac));
    }
  }
  return pbVar4;
}

