/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x30dc0c:ff52d2dffb
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0030dc0c(int param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  bool bVar7;
  long lVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  bool bVar20;
  long lVar21;
  uint uVar22;
// thanks for reading - discord.gg/sdkhDjTex
  ulong uVar23;
  ulong uVar24;
  undefined1 auVar25 [16];
  undefined8 uVar26;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_76;
  byte bStack_74;
  byte bStack_73;
  undefined1 uStack_72;
  
  lVar8 = lRam00000000020973e0;
  if (param_1 == 0) {
    uVar15 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar12 = *(int *)(&UNK_00001420 + lRam00000000020973e0);
    if (0 < iVar12) goto LAB_0030dc84;
LAB_0030e3f4:
    uVar23 = 0;
    iVar12 = *(int *)(&UNK_00001420 + lVar8);
LAB_0030e3fc:
    if ((int)uVar23 != iVar12) {
LAB_0030e42c:
      _memmove(*(long *)(&UNK_00001428 + lVar8),
               *(long *)(&UNK_00001428 + lVar8) + (uVar23 & 0xffffffff) * 0x1c,
               ((long)iVar12 - (uVar23 & 0xffffffff)) * 0x1c);
/* origin: github.com/pengussy */
      *(int *)(&UNK_00001420 + lVar8) = *(int *)(&UNK_00001420 + lVar8) - (int)uVar23;
      cVar3 = *(char *)(lVar8 + 0xbcc);
      goto joined_r0x0030e460;
    }
  }
  else {
    uVar15 = (uint)(*(int *)(&UNK_00002a6c + lRam00000000020973e0) == 1);
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    iVar12 = *(int *)(&UNK_00001420 + lRam00000000020973e0);
    if (iVar12 < 1) goto LAB_0030e3f4;
LAB_0030dc84:
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    lVar21 = 0;
    uVar23 = 0;
    bVar7 = false;
    bVar20 = false;
    bVar6 = 0;
    uVar10 = 0;
    uVar11 = 0;
    uVar22 = 0;
    lVar18 = lRam00000000020973e0 + 0x124;
    lVar19 = lRam00000000020973e0 + 0x108;
    do {
// unlicensed copy if this notice is missing
      lVar16 = *(long *)(&UNK_00001428 + lVar8);
      iVar2 = *(int *)(lVar16 + lVar21);
      if (iVar2 < 4) {
        if (iVar2 == 1) {
          if ((*(byte *)(lVar8 + 0xd3) & 1) == 0) {
            if ((param_1 != 0) && (uVar22 != 0 || ((bool)(bVar20 | bVar6) || uVar11 != 0)))
            goto LAB_0030dff0;
            *(undefined8 *)(lVar8 + 0x100) = *(undefined8 *)(lVar16 + lVar21 + 0xc);
            *(undefined4 *)(lVar8 + 0x118) = *(undefined4 *)(lVar16 + lVar21 + 0x14);
            bVar7 = true;
          }
        }
        else if (iVar2 == 2) {
          if ((param_1 != 0) && (bVar7 || uVar22 != 0)) goto LAB_0030dff0;
          lVar16 = lVar16 + lVar21;
          *(float *)(lVar8 + 0x114) = *(float *)(lVar16 + 0xc) + *(float *)(lVar8 + 0x114);
          *(float *)(lVar8 + 0x110) = *(float *)(lVar16 + 0x10) + *(float *)(lVar8 + 0x110);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
          *(undefined4 *)(lVar8 + 0x118) = *(undefined4 *)(lVar16 + 0x14);
          bVar20 = true;
        }
        else if (iVar2 == 3) {
          lVar1 = lVar16 + lVar21;
          uVar14 = 1 << (ulong)(*(uint *)(lVar1 + 0xc) & 0x1f);
          if ((param_1 != 0) &&
             (((uVar14 & uVar22) != 0 || bVar20 ||
              ((bool)(*(int *)(lVar16 + lVar21 + 0x14) == 1 & bVar7))))) goto LAB_0030dff0;
          *(undefined1 *)(lVar19 + (int)*(uint *)(lVar1 + 0xc)) = *(undefined1 *)(lVar1 + 0x10);
          *(undefined4 *)(lVar8 + 0x118) = *(undefined4 *)(lVar1 + 0x14);
          uVar22 = uVar14 | uVar22;
        }
      }
      else if (iVar2 == 4) {
        if ((*(byte *)(lVar8 + 0x28) >> 6 & 1) == 0) {
          uVar14 = *(uint *)(lVar16 + lVar21 + 0xc);
          uVar17 = uVar14;
          if ((uVar14 & 0xf000) != 0) {
            uVar4 = uVar14 - 0x1000 >> 0xc;
            uVar5 = uVar4 | uVar14 << 0x14;
            if ((uVar5 < 8) && ((0x8bU >> (ulong)(uVar4 & 0x1f) & 1) != 0)) {
              uVar17 = *(uint *)(&UNK_01adf7a8 + (ulong)uVar5 * 4);
            }
          }
          lVar1 = lRam00000000020973e0 + (long)(int)uVar17 * 0x10;
          pcVar9 = (char *)(lVar1 + -0x1edc);
          uVar17 = (uint)((ulong)((long)pcVar9 - lVar18) >> 4);
          iVar2 = (int)uVar17 >> 5;
          if (((param_1 == 0) || (*pcVar9 == *(char *)(lVar16 + lVar21 + 0x10))) ||
             ((*(uint *)((long)&uStack_90 + (long)iVar2 * 4) & 1 << (ulong)(uVar17 & 0x1f)) == 0 &&
              uVar22 == 0)) {
            uVar4 = (uint)*(byte *)(lRam00000000020973e0 + 0xaa4) << 0xd |
/*  found on a paste site? it was re-uploaded illegally  */
                    (uint)*(byte *)(lRam00000000020973e0 + 0xa94) << 0xc |
                    (uint)*(byte *)(lRam00000000020973e0 + 0xab4) << 0xe |
                    (uint)*(byte *)(lRam00000000020973e0 + 0xac4) << 0xf | uVar14;
            if ((((uVar4 & 0x5000) == 0x1000) ||
                (((uVar4 >> 0xc & 1) != 0 && ((*(byte *)(lRam00000000020973e0 + 0x79) & 1) != 0))))
               || ((uVar4 & 0xffff0fff) == 0)) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(uint *)(&UNK_00001580 +
                                lRam00000000020973e0 +
                                (long)((int)((uVar4 & 0xffff0fff) - 0x200) >> 5) * 4) >>
                       (ulong)(uVar14 & 0x1f) & 1;
            }
            if (((uVar15 & uVar11) != 1) || (uVar14 != 0)) {
              cVar3 = *(char *)(lVar16 + lVar21 + 0x10);
              if (*pcVar9 != cVar3) {
/* WM - proprietary - see LICENSE - do not sell */
                bVar6 = 1;
                *(uint *)((long)&uStack_90 + (long)iVar2 * 4) =
                     *(uint *)((long)&uStack_90 + (long)iVar2 * 4) | 1 << (ulong)(uVar17 & 0x1f);
                uVar10 = uVar15 & (uVar14 ^ 1) | uVar10;
              }
              *pcVar9 = cVar3;
              *(undefined4 *)(lVar1 + -0x1ed0) = *(undefined4 *)(lVar16 + lVar21 + 0x14);
              goto LAB_0030dccc;
            }
          }
LAB_0030dff0:
          if (uVar23 == 0) goto LAB_0030e3f4;
          break;
        }
      }
      else if (iVar2 == 5) {
        if ((*(byte *)(lVar8 + 0x28) >> 6 & 1) == 0) {
          if (((param_1 != 0) && (uVar22 != 0 || (bVar7 || bVar20))) || ((uVar15 & uVar10) != 0))
          goto LAB_0030dff0;
          uVar14 = *(uint *)(lVar16 + lVar21 + 0xc);
          if (0xffff < uVar14) {
            uVar14 = 0xfffffffd;
          }
          uStack_76 = (ushort)uVar14;
          func_0x00319a58(lVar8 + 0xbd0,&uStack_76);
          uVar11 = uVar15 | uVar11;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          iVar12 = *(int *)(&UNK_00001420 + lVar8);
        }
      }
      else if (iVar2 == 6) {
        *(byte *)(lVar8 + 0xbcc) = *(byte *)(lVar16 + lVar21 + 0xc) ^ 1;
      }
LAB_0030dccc:
      uVar23 = uVar23 + 1;
      lVar21 = lVar21 + 0x1c;
    } while ((long)uVar23 < (long)iVar12);
    lVar18 = 0;
    uVar24 = uVar23 & 0xffffffff;
    do {
      func_0x002fcdf0(&UNK_00001430 + lVar8,*(long *)(&UNK_00001428 + lVar8) + lVar18);
      lVar18 = lVar18 + 0x1c;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
    iVar12 = *(int *)(&UNK_00001420 + lVar8);
/* wm:do not claim this as your own */
    if ((char)(&UNK_0000286c)[lVar8] < '\0') {
      if (0 < iVar12) {
        lVar19 = 0;
        lVar18 = 0;
        do {
          lVar21 = *(long *)(&UNK_00001428 + lVar8);
          iVar12 = *(int *)(lVar21 + lVar19);
          if (3 < iVar12) {
            if (iVar12 == 4) {
              if ((char)(&UNK_0000286c)[lRam00000000020973e0] < '\0') {
                pcVar9 = "[io] %s: Key \"%s\" %s\n";
                goto LAB_0030e09c;
              }
            }
            else if (iVar12 == 5) {
              uVar15 = *(uint *)(lVar21 + lVar19 + 0xc);
              bVar6 = (byte)uVar15;
              if (uVar15 < 0x80) {
                uStack_76 = CONCAT11(uStack_76._1_1_,bVar6);
                cVar3 = (&UNK_0000286c)[lRam00000000020973e0];
              }
              else if (uVar15 < 0x800) {
                uStack_76 = CONCAT11(bVar6,(char)(uVar15 >> 6)) & 0x3fff | 0x80c0;
                bStack_74 = 0;
                cVar3 = (&UNK_0000286c)[lRam00000000020973e0];
              }
              else if (uVar15 >> 0x10 == 0) {
                uStack_76 = CONCAT11((char)(uVar15 >> 6),(char)(uVar15 >> 0xc)) & 0x3fff | 0x80e0;
                bStack_74 = bVar6 & 0x3f | 0x80;
                bStack_73 = 0;
                cVar3 = (&UNK_0000286c)[lRam00000000020973e0];
              }
              else if (uVar15 >> 0x10 < 0x11) {
/* WM - found on a paste site? it was re-uploaded illegally */
                uStack_76 = CONCAT11((char)(uVar15 >> 0xc),(char)(uVar15 >> 0x12)) & 0x3fff | 0x80f0
                ;
                bStack_74 = (byte)(uVar15 >> 6) & 0x3f | 0x80;
                bStack_73 = bVar6 & 0x3f | 0x80;
                uStack_72 = 0;
                cVar3 = (&UNK_0000286c)[lRam00000000020973e0];
              }
              else {
                uStack_76 = (ushort)uStack_76._1_1_ << 8;
                cVar3 = (&UNK_0000286c)[lRam00000000020973e0];
              }
              if (cVar3 < '\0') {
                pcVar9 = "[io] %s: Text: \'%s\' (U+%08X)\n";
                goto LAB_0030e09c;
              }
            }
            else if ((iVar12 == 6) && ((char)(&UNK_0000286c)[lRam00000000020973e0] < '\0')) {
              pcVar9 = "[io] %s: AppFocused %d\n";
              goto LAB_0030e09c;
            }
            goto LAB_0030e0a4;
          }
          if (iVar12 == 1) {
            if ((*(float *)(lVar21 + lVar19 + 0xc) == -3.4028235e+38) &&
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
               (*(float *)(lVar21 + lVar19 + 0x10) == -3.4028235e+38)) {
              if ((char)(&UNK_0000286c)[lRam00000000020973e0] < '\0') {
                pcVar9 = "[io] %s: MousePos (-FLT_MAX, -FLT_MAX)\n";
                goto LAB_0030e09c;
              }
            }
            else if ((char)(&UNK_0000286c)[lRam00000000020973e0] < '\0') {
              pcVar9 = "[io] %s: MousePos (%.1f, %.1f) (%s)\n";
              goto LAB_0030e09c;
            }
          }
          else if (iVar12 == 2) {
            if ((char)(&UNK_0000286c)[lRam00000000020973e0] < '\0') {
              pcVar9 = "[io] %s: MouseWheel (%.3f, %.3f) (%s)\n";
              goto LAB_0030e09c;
            }
          }
          else if ((iVar12 == 3) && ((char)(&UNK_0000286c)[lRam00000000020973e0] < '\0')) {
            pcVar9 = "[io] %s: MouseButton %d %s (%s)\n";
LAB_0030e09c:
            func_0x002fd6a4(pcVar9);
          }
LAB_0030e0a4:
          lVar18 = lVar18 + 1;
          iVar12 = *(int *)(&UNK_00001420 + lVar8);
          lVar19 = lVar19 + 0x1c;
        } while (lVar18 < iVar12);
      }
      goto LAB_0030e3fc;
    }
    if ((int)uVar23 != iVar12) goto LAB_0030e42c;
// WM - proprietary - see LICENSE - do not sell
  }
  func_0x0030da58(&UNK_00001420 + lVar8,0);
  cVar3 = *(char *)(lVar8 + 0xbcc);
joined_r0x0030e460:
  if (cVar3 == '\x01') {
    puVar13 = (undefined8 *)(*(long *)(lVar8 + 0xf8) + 0x128);
    uVar15 = 0xffffff70;
    lVar18 = 0x9b;
    uVar26 = NEON_fmov(0xbf800000,4);
    do {
      if (6 < uVar15) {
        *(undefined1 *)((long)puVar13 + -4) = 0;
        *puVar13 = uVar26;
      }
      puVar13 = puVar13 + 2;
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    *(undefined8 *)(lVar8 + 0x11c) = 0;
    func_0x002fd148(lVar8 + 0xbd0,0);
// WM - unlicensed copy if this notice is missing
    *(undefined1 *)(lVar8 + 0xa24) = 0;
    *(undefined8 *)(lVar8 + 0xa28) = uVar26;
    *(undefined1 *)(lVar8 + 0xa34) = 0;
    *(undefined8 *)(lVar8 + 0xa38) = uVar26;
    *(undefined1 *)(lVar8 + 0xa44) = 0;
    *(undefined8 *)(lVar8 + 0xa48) = uVar26;
    *(undefined1 *)(lVar8 + 0xa54) = 0;
    *(undefined8 *)(lVar8 + 0xa58) = uVar26;
    *(undefined1 *)(lVar8 + 0xa64) = 0;
    *(undefined8 *)(lVar8 + 0xa68) = uVar26;
    *(undefined1 *)(lVar8 + 0xa74) = 0;
    *(undefined8 *)(lVar8 + 0xa78) = uVar26;
    *(undefined1 *)(lVar8 + 0xa84) = 0;
    *(undefined8 *)(lVar8 + 0xa88) = uVar26;
    *(undefined8 *)(lVar8 + 0x100) = 0xff7fffffff7fffff;
    *(undefined4 *)(lVar8 + 0x108) = 0;
    *(undefined1 *)(lVar8 + 0x10c) = 0;
    _memset_pattern16(lVar8 + 0xb8c,&UNK_01adf0f0,0x14);
    auVar25 = NEON_fmov(0xbf800000,4);
    *(long *)(lVar8 + 0xba8) = auVar25._8_8_;
    *(long *)(lVar8 + 0xba0) = auVar25._0_8_;
    *(undefined4 *)(lVar8 + 0xbb0) = 0xbf800000;
    *(undefined8 *)(lVar8 + 0x110) = 0;
  }
  return;
}

