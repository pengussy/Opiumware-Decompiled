/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x383008:8695e2e058
 */

undefined8 FUN_00383008(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [32];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  puVar10 = (ulong *)(param_2 + 0x20);
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  *puVar10 = 0;
  *(undefined1 *)(param_2 + 0x118) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar9 = *(long *)(param_2 + 0x10);
  uStack_a8 = 0;
  uStack_d0 = 0xffffffffffffffff;
  if (-1 < lVar9) {
    lVar1 = param_2 + 0x120;
    plVar6 = (long *)(param_1 + 0x60);
    lVar7 = *plVar6;
    lStack_a0 = lVar1;
    lStack_98 = lVar1;
    lStack_90 = lVar9;
    lStack_80 = lVar1;
    lStack_78 = lVar1;
    lStack_70 = lVar9;
    if (lVar7 == 0) {
      lVar7 = func_0x019eb530(lVar9 + 0x1c8,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_rx.c"
                              ,0x234);
      if (lVar7 == 0) {
        return 0;
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(undefined8 *)(lVar7 + 0x50) = 0;
      *(undefined8 *)(lVar7 + 0x58) = 0;
      *(long *)(lVar7 + 0x60) = lVar9;
      *(undefined8 *)(lVar7 + 0x68) = 0;
      lVar5 = *(long *)(param_1 + 0x68);
      if (lVar5 != 0) {
        *(long *)(lVar5 + 0x48) = lVar7;
      }
      *(undefined8 *)(lVar7 + 0x48) = 0;
      *(long *)(lVar7 + 0x50) = lVar5;
      *(long *)(param_1 + 0x68) = lVar7;
      if (*(long *)(param_1 + 0x60) == 0) {
        *plVar6 = lVar7;
// WM - proprietary - see LICENSE - do not sell
      }
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
    }
    uVar4 = func_0x00391e70(&lStack_80,0,1,0,lVar7 + 0x70,auStack_c8,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (((*(char *)(lVar7 + 0x70) == '\x01') && (*(uint *)(lVar7 + 0x74) < 2)) &&
       (iVar3 = func_0x003842fc(param_1 + 0xa8,0), iVar3 == 1)) {
      if (*(char *)(lVar7 + 0x70) == '\x01') {
        lVar2 = *(long *)(lVar7 + 0xa8);
        lVar5 = *(long *)(lVar7 + 0xb0);
        lVar8 = lVar2;
        if (lVar5 != 0) {
          lVar7 = func_0x019e43b0(plVar6,lVar7,lVar5);
          if (lVar7 == 0) {
            return 0;
          }
          lVar8 = lVar7 + 0x1c8;
          _memcpy(lVar8,lVar2,lVar5);
        }
        *(long *)(lVar7 + 0xa8) = lVar8;
      }
      else {
        lVar5 = 0;
      }
      lStack_78 = lStack_98;
      lStack_80 = lStack_a0;
      lStack_70 = lStack_90;
      uVar4 = func_0x019e47e4(param_1 + 0xa8,0,1);
      uVar4 = func_0x00391af8(uVar4,auStack_c8);
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      *(ulong *)(param_2 + 0x28) = *(ulong *)(param_2 + 0x28) | 1;
      iVar3 = func_0x00391e70(&lStack_80,0,0,0,lVar7 + 0x70,0,0);
/* if you paid for this, you were scammed */
      if (iVar3 == 1) {
        uVar4 = func_0x003841e4(param_1,lVar7);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        lVar8 = *(long *)(lVar7 + 0xc0);
        lVar7 = func_0x019e43b0(plVar6,lVar7,*(long *)(lVar7 + 0xb8) + lVar5);
        if (lVar7 == 0) {
          return 0;
        }
        lVar5 = lVar7 + lVar5 + 0x1c8;
        uVar4 = func_0x019e4528(param_1,lVar5,*(undefined8 *)(lVar7 + 0xc0),
                                *(undefined8 *)(lVar7 + 0xb8),&uStack_a8,lVar1,lVar8 - lVar1,
                                *(undefined8 *)(lVar7 + 200),0,&uStack_d0);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        uVar4 = func_0x00384244(param_1,lVar7);
        if ((int)uVar4 == 0) {
          return uVar4;
        }
        *puVar10 = *puVar10 | 1;
        *(undefined8 *)(lVar7 + 0xb8) = uStack_a8;
        *(long *)(lVar7 + 0xc0) = lVar5;
        *(undefined8 *)(lVar7 + 0x58) = uStack_a8;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        *(long *)(lVar7 + 0x1b0) = lVar9;
        *(undefined8 *)(lVar7 + 0x1b8) = uStack_d0;
        if ((byte)(*(char *)(lVar7 + 0x70) - 2U) < 4) {
          lVar9 = *(long *)(&UNK_01ae6ca8 + (ulong)(byte)(*(char *)(lVar7 + 0x70) - 2) * 8);
        }
        else {
          lVar9 = 0;
        }
        if (*(ulong *)(param_1 + 0x90 + lVar9 * 8) < *(ulong *)(lVar7 + 200)) {
          *(ulong *)(param_1 + 0x90 + lVar9 * 8) = *(ulong *)(lVar7 + 200);
        }
        uVar11 = *(undefined8 *)(param_2 + 0x40);
        uVar4 = *(undefined8 *)(param_2 + 0x38);
        uVar12 = *(undefined8 *)(param_2 + 0x48);
        uVar14 = *(undefined8 *)(param_2 + 0x60);
        uVar13 = *(undefined8 *)(param_2 + 0x58);
        *(undefined8 *)(lVar7 + 0xe8) = *(undefined8 *)(param_2 + 0x50);
        *(undefined8 *)(lVar7 + 0xe0) = uVar12;
        *(undefined8 *)(lVar7 + 0xf8) = uVar14;
        *(undefined8 *)(lVar7 + 0xf0) = uVar13;
        *(undefined8 *)(lVar7 + 0xd8) = uVar11;
        *(undefined8 *)(lVar7 + 0xd0) = uVar4;
        uVar11 = *(undefined8 *)(param_2 + 0x70);
        uVar4 = *(undefined8 *)(param_2 + 0x68);
        uVar13 = *(undefined8 *)(param_2 + 0x80);
        uVar12 = *(undefined8 *)(param_2 + 0x78);
        uVar15 = *(undefined8 *)(param_2 + 0x90);
        uVar14 = *(undefined8 *)(param_2 + 0x88);
// WM - more drops soon - github.com/pengussy
        uVar16 = *(undefined8 *)(param_2 + 0x94);
        *(undefined8 *)(lVar7 + 0x134) = *(undefined8 *)(param_2 + 0x9c);
        *(undefined8 *)(lVar7 + 300) = uVar16;
        *(undefined8 *)(lVar7 + 0x118) = uVar13;
        *(undefined8 *)(lVar7 + 0x110) = uVar12;
        *(undefined8 *)(lVar7 + 0x128) = uVar15;
        *(undefined8 *)(lVar7 + 0x120) = uVar14;
        *(undefined8 *)(lVar7 + 0x108) = uVar11;
        *(undefined8 *)(lVar7 + 0x100) = uVar4;
        uVar11 = *(undefined8 *)(param_2 + 0xec);
        uVar4 = *(undefined8 *)(param_2 + 0xe4);
        uVar13 = *(undefined8 *)(param_2 + 0xfc);
        uVar12 = *(undefined8 *)(param_2 + 0xf4);
        uVar14 = *(undefined8 *)(param_2 + 0x100);
        uVar16 = *(undefined8 *)(param_2 + 0xdc);
        uVar15 = *(undefined8 *)(param_2 + 0xd4);
// keep the notice, keep the source honest
        *(undefined8 *)(lVar7 + 0x1a0) = *(undefined8 *)(param_2 + 0x108);
        *(undefined8 *)(lVar7 + 0x198) = uVar14;
        *(undefined8 *)(lVar7 + 0x184) = uVar11;
        *(undefined8 *)(lVar7 + 0x17c) = uVar4;
        *(undefined8 *)(lVar7 + 0x194) = uVar13;
        *(undefined8 *)(lVar7 + 0x18c) = uVar12;
        *(undefined8 *)(lVar7 + 0x174) = uVar16;
        *(undefined8 *)(lVar7 + 0x16c) = uVar15;
        uVar11 = *(undefined8 *)(param_2 + 0xac);
        uVar4 = *(undefined8 *)(param_2 + 0xa4);
        uVar12 = *(undefined8 *)(param_2 + 0xb4);
        uVar14 = *(undefined8 *)(param_2 + 0xcc);
        uVar13 = *(undefined8 *)(param_2 + 0xc4);
        *(undefined8 *)(lVar7 + 0x154) = *(undefined8 *)(param_2 + 0xbc);
        *(undefined8 *)(lVar7 + 0x14c) = uVar12;
        *(undefined8 *)(lVar7 + 0x164) = uVar14;
        *(undefined8 *)(lVar7 + 0x15c) = uVar13;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        *(undefined8 *)(lVar7 + 0x144) = uVar11;
        *(undefined8 *)(lVar7 + 0x13c) = uVar4;
        *(undefined8 *)(lVar7 + 0x1a8) = *(undefined8 *)(param_2 + 0x110);
        *(undefined8 *)(lVar7 + 0x1c0) = *(undefined8 *)(param_2 + 0x30);
        func_0x00384178(plVar6,lVar7);
        lVar9 = *(long *)(param_1 + 0x80);
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x48) = lVar7;
        }
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(long *)(lVar7 + 0x50) = lVar9;
        *(long *)(param_1 + 0x80) = lVar7;
        if (*(long *)(param_1 + 0x78) == 0) {
          *(long *)(param_1 + 0x78) = lVar7;
        }
        *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
        return 1;
      }
/*  keep the notice, keep the source honest  */
    }
  }
  return 0;
}

