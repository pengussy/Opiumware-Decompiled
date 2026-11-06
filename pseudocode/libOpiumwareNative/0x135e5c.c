/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x135e5c:ff4e04c0b9
 */

undefined8 FUN_00135e5c(long param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong extraout_x1;
  char **ppcVar8;
  int iVar9;
  long lVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  char *pcStack_98;
  char *pcStack_90;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  long lStack_70;
  undefined1 uStack_61;
  long *plStack_60;
  long *plStack_58;
  
  lStack_70 = param_1;
  if (param_1 == 0) {
    pbVar4 = (byte *)(*pcRam0000000002065730)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019ca508();
    }
    pcStack_98 = (char *)(*pcRam0000000002065718)();
    if (*pcStack_98 == '\x01') {
      lVar3 = 0;
      uVar5 = 0x86c3fd7992439007;
/* wm:reversing this took months of machine time */
      do {
        uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_98[lVar3 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_98[lVar3 + 0x17] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar13;
        uVar5 = lVar3 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_98[lVar3 + 1]) << 0x11);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x16);
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 0x17;
    ppcVar8 = &pcStack_98;
    goto LAB_00136328;
  }
  lVar3 = func_0x001393dc(param_2 + 3,&lStack_70);
  if (lVar3 != 0) {
    return 1;
  }
  plStack_58 = param_2 + 8;
  func_0x00138e74(&plStack_58,&lStack_70,&lStack_70);
/* WM - reversing this took months of machine time */
  if ((extraout_x1 & 1) == 0) {
    pbVar4 = (byte *)(*pcRam0000000002065760)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019ca418();
    }
    pcStack_78 = (char *)(*pcRam0000000002065748)();
    if (*pcStack_78 == '\x01') {
      lVar3 = 0;
      uVar5 = 0xd037c0086002e9ff;
      do {
        uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_78[lVar3 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_78[lVar3 + 0x29] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar13;
        uVar5 = lVar3 + -0x61c8864680b583eb +
/* watermarked copy - do not remove - github.com/pengussy */
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_78[lVar3 + 1]) << 0x11);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x28);
      *pcStack_78 = '\0';
    }
    pcStack_78 = pcStack_78 + 0x29;
    ppcVar8 = &pcStack_78;
    goto LAB_00136328;
  }
  iVar2 = *(int *)(lStack_70 + 0xac);
  if (((((iVar2 < 0) || (iVar9 = *(int *)(lStack_70 + 0xb0), iVar9 < 0)) ||
       (*(int *)(lStack_70 + 0xb8) < 0)) ||
      ((*(int *)(lStack_70 + 0xa0) < 0 || (*(int *)(lStack_70 + 0x98) < 0)))) ||
     ((*(int *)(lStack_70 + 0xb4) < 0 || (*(int *)(lStack_70 + 0xbc) < 0)))) {
    pbVar4 = (byte *)(*pcRam0000000002065790)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019ca4cc();
    }
    pcStack_90 = (char *)(*pcRam0000000002065778)();
    if (*pcStack_90 == '\x01') {
      lVar3 = 0;
      uVar5 = 0x5e57ee6a94c0bcc7;
      do {
        uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[lVar3 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_90[lVar3 + 0x20] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar13;
        uVar5 = lVar3 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_90[lVar3 + 1]) << 0x11);
// more drops soon - github.com/pengussy
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x1f);
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0x20;
    ppcVar8 = &pcStack_90;
    goto LAB_00136328;
  }
  if ((((((iVar2 == 0) || (*(long *)(lStack_70 + 0x58) != 0)) &&
        ((iVar9 == 0 || (*(long *)(lStack_70 + 0x80) != 0)))) &&
       ((*(int *)(lStack_70 + 0xb8) == 0 || (*(long *)(lStack_70 + 0x88) != 0)))) &&
      ((*(int *)(lStack_70 + 0xa0) == 0 ||
       (*(long **)(lStack_70 + 0x60) != (long *)(lStack_70 + 0x60))))) &&
     (((*(int *)(lStack_70 + 0x98) == 0 || (*(long *)(lStack_70 + 0x10) + lStack_70 + 0x10 != 0)) &&
      ((*(int *)(lStack_70 + 0xb4) == 0 ||
       ((long *)(lStack_70 + 0x40) != *(long **)(lStack_70 + 0x40))))))) {
    if (*(int *)(lStack_70 + 200) == 0) {
      if (*(uint *)(lStack_70 + 0xa8) < 0x1f) {
LAB_001365d4:
        if (iVar2 != 0) {
          lVar3 = 0;
          do {
            uVar5 = FUN_00135e5c(*(undefined8 *)(*(long *)(lStack_70 + 0x58) + lVar3 * 8),param_2,
                                 param_3);
            if ((uVar5 & 1) == 0) {
              return 0;
            }
            lVar3 = lVar3 + 1;
          } while (lVar3 < *(int *)(lStack_70 + 0xac));
          iVar9 = *(int *)(lStack_70 + 0xb0);
        }
        if (0 < iVar9) {
          lVar14 = 0;
          lVar3 = 0;
          lVar7 = lStack_70;
          do {
// no support for modified copies
            iVar2 = *(int *)(*(long *)(lVar7 + 0x80) + lVar14 + 0xc);
            if (iVar2 == 8) {
              lVar10 = *(long *)(*(long *)(lVar7 + 0x80) + lVar14);
              if (*(char *)(lVar10 + 3) == '\0') {
                uVar6 = FUN_00135e5c(*(undefined8 *)(lVar10 + 0x18),param_2,param_3);
                if ((int)uVar6 == 0) {
                  return uVar6;
                }
                lVar7 = lStack_70;
              }
            }
            else {
              if (iVar2 == 7) {
                bVar11 = *(byte *)(param_2 + 0x1b);
                if (bVar11 < 8) {
                  bVar11 = 7;
                }
              }
              else {
                if (iVar2 != 4) goto LAB_00136638;
                bVar11 = *(byte *)(param_2 + 0x1b);
                if (bVar11 < 9) {
                  bVar11 = 8;
                }
              }
              *(byte *)(param_2 + 0x1b) = bVar11;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
            }
LAB_00136638:
            lVar3 = lVar3 + 1;
            lVar14 = lVar14 + 0x10;
          } while (lVar3 < *(int *)(lVar7 + 0xb0));
        }
        func_0x00108200(param_2 + 8,&lStack_70);
        lVar3 = *param_2;
        lVar14 = param_2[1];
        func_0x00138d50(param_2,&lStack_70);
        plStack_60 = &lStack_70;
        plStack_58 = param_2 + 3;
        lVar7 = func_0x00139630(&plStack_58,&lStack_70,&UNK_01bd2568,&plStack_60,&uStack_61);
        *(int *)(lVar7 + 0x18) = (int)((ulong)(lVar14 - lVar3) >> 3);
        return 1;
      }
    }
    else {
      if (*(long *)(lStack_70 + 0xc0) == 0) goto LAB_00136358;
      if (*(uint *)(lStack_70 + 0xa8) < 0x1f) {
        bVar11 = *(byte *)(param_2 + 0x1b);
        if (bVar11 < 0xc) {
          bVar11 = 0xb;
        }
        *(byte *)(param_2 + 0x1b) = bVar11;
        goto LAB_001365d4;
      }
    }
    pbVar4 = (byte *)(*pcRam00000000020657f0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019ca490();
/* origin: github.com/pengussy */
    }
    pcStack_88 = (char *)(*pcRam00000000020657d8)();
    if (*pcStack_88 == '\x01') {
      lVar3 = 0;
      uVar5 = 0xe7e2680ee8ef443e;
      do {
        uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[lVar3 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar13 >> 0x17);
        pcStack_88[lVar3 + 0x29] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar5 = lVar3 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_88[lVar3 + 1]) << 0x11);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x28);
      *pcStack_88 = '\0';
    }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    pcStack_88 = pcStack_88 + 0x29;
    ppcVar8 = &pcStack_88;
  }
  else {
LAB_00136358:
    pbVar4 = (byte *)(*pcRam00000000020657c0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019ca454();
    }
    pcStack_80 = (char *)(*pcRam00000000020657a8)();
    if (*pcStack_80 == '\x01') {
      lVar3 = 0;
      uVar5 = 0x27cbb13445fddfb5;
      do {
        uVar12 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_80[lVar3 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar13 >> 0x17);
        pcStack_80[lVar3 + 0x25] =
             ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar5 = lVar3 + -0x61c8864680b583eb +
                (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_80[lVar3 + 1]) << 0x11);
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x24);
      *pcStack_80 = '\0';
    }
/* if you paid for this, you were scammed */
    pcStack_80 = pcStack_80 + 0x25;
    ppcVar8 = &pcStack_80;
  }
LAB_00136328:
  uVar6 = func_0x0011ab24(ppcVar8);
  func_0x001284e8(param_3,uVar6);
  return 0;
}

