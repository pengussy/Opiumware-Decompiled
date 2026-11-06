/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x20e4a0:b59314365c
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0020f7c0) */
/* WARNING: Removing unreachable block (ram,0x0020f3dc) */
/* WARNING: Removing unreachable block (ram,0x0020f80c) */
/* WARNING: Removing unreachable block (ram,0x0020f3ec) */
/* WARNING: Removing unreachable block (ram,0x0020f7b0) */
/* WARNING: Removing unreachable block (ram,0x0020fba4) */
/* WARNING: Removing unreachable block (ram,0x0020fb6c) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0020e4a0(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  long *plVar10;
  char *pcVar11;
  char *pcVar12;
  undefined8 *******pppppppuVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  char *pcVar18;
/*  stripping the watermark breaks the license  */
  ulong uVar19;
  undefined8 ******ppppppuVar20;
  ulong uVar21;
  undefined8 ******ppppppuVar22;
  long *plVar23;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  char *pcStack_1a8;
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  char *pcStack_170;
  char *pcStack_168;
  char *pcStack_160;
  char *pcStack_158;
  char *pcStack_150;
  char *pcStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 ******ppppppuStack_128;
  undefined8 ******ppppppuStack_120;
  undefined8 ******ppppppuStack_118;
  undefined8 ******ppppppuStack_110;
  undefined4 uStack_108;
  long lStack_100;
  undefined8 ******ppppppuStack_f8;
  long *plStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined4 uStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 ******ppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined1 uStack_99;
  undefined8 *******pppppppuStack_98;
  long *plStack_90;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 *******pppppppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar5 = func_0x00791be4(param_1,1);
  if ((iVar5 != 8) && (iVar5 = func_0x00791efc(param_1,1), iVar5 == 0)) {
    pbVar6 = (byte *)(*pcRam0000000002076d70)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d8bb0();
    }
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    pcStack_148 = (char *)(*pcRam0000000002076d58)();
    if (*pcStack_148 == '\x01') {
      lVar15 = 0;
      uVar17 = 0xafe1c8378906a5e3;
      do {
        uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar19 ^ uVar19 >> 0x21;
        uVar1 = (uint)(byte)pcStack_148[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar21 >> 0x17) ^
                ((uint)(uVar19 >> 0x29) | 1);
        pcStack_148[lVar15 + 0x16] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar21;
        uVar17 = lVar15 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_148[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x15);
      *pcStack_148 = '\0';
    }
    pcStack_148 = pcStack_148 + 0x16;
    uVar7 = func_0x0011ab24(&pcStack_148);
    func_0x007a1ba8(param_1,1,uVar7);
LAB_0020fd44:
    pbVar6 = (byte *)(*pcRam0000000002076dd0)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d8dcc();
    }
    pcStack_190 = (char *)(*pcRam0000000002076db8)();
/* origin: github.com/pengussy - github.com/pengussy */
    if (*pcStack_190 == '\x01') {
      lVar15 = 0;
      uVar17 = (unaff_x25 ^ 0xa8713af4c943051 ^ (unaff_x25 ^ 0xa8713af4c943051) >> 0x21) * unaff_x22
      ;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * unaff_x23;
      uVar17 = uVar17 ^ uVar17 >> 0x21;
      do {
        uVar19 = (uVar17 ^ uVar17 >> 0x21) * unaff_x22;
        uVar19 = (uVar19 ^ uVar19 >> 0x21) * unaff_x23;
        uVar21 = uVar19 ^ uVar19 >> 0x21;
        uVar1 = (uint)(byte)pcStack_190[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar21 >> 0x17);
        pcStack_190[lVar15 + 0x21] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar19 >> 0x29) | 1) ^
             (byte)uVar21;
        uVar17 = lVar15 + unaff_x24 +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_190[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x20);
      *pcStack_190 = '\0';
    }
    pcStack_190 = pcStack_190 + 0x21;
    func_0x0011ab24(&pcStack_190);
    func_0x007a1b5c(param_1,"%s");
    goto LAB_0020fe5c;
/* no support for modified copies */
  }
  pppppppuStack_c0 = (undefined8 *******)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  iVar5 = func_0x00791be4(param_1,1);
  unaff_x22 = -0xae502812aa7333;
  unaff_x23 = -0x3b314601e57a13ad;
  unaff_x24 = -0x61c8864680b583eb;
  unaff_x25 = 0x8ebc6af09c88c6e3;
  if (iVar5 != 8) {
    plVar10 = (long *)func_0x007926a8(param_1,1);
    lVar15 = *plVar10;
    if (lVar15 == 0) {
      pbVar6 = (byte *)(*pcRam0000000002076e00)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019d8d54();
      }
      pcStack_180 = (char *)(*pcRam0000000002076de8)();
      if (*pcStack_180 == '\x01') {
        lVar15 = 0;
        uVar17 = 0x8582cba8281b9a63;
        do {
          uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
// WM - found on a paste site? it was re-uploaded illegally
          uVar21 = uVar19 ^ uVar19 >> 0x21;
          uVar1 = (uint)(byte)pcStack_180[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar21 >> 0x17);
          pcStack_180[lVar15 + 0x1d] =
               ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') - ((byte)(uVar19 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = lVar15 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_180[lVar15 + 1]) << 0x11);
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0x1c);
        *pcStack_180 = '\0';
      }
      pcStack_180 = pcStack_180 + 0x1d;
      uVar7 = func_0x0011ab24(&pcStack_180);
      func_0x00792f00(param_1,uVar7);
    }
    else {
      pcVar11 = (char *)func_0x0003dcc8(lVar15);
      lStack_100 = 0;
      ppppppuStack_f8 = (undefined8 ******)0x0;
      plStack_f0 = (long *)0x0;
      pbVar6 = (byte *)(*pcRam0000000002076e30)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019d8bec();
      }
      pcStack_150 = (char *)(*pcRam0000000002076e18)();
      if (*pcStack_150 == '\x01') {
/* thanks for reading - discord.gg/sdkhDjTex */
        lVar16 = 0;
        uVar17 = 0xb652f60cbab6c857;
        do {
          uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar19 ^ uVar19 >> 0x21;
          uVar1 = (uint)(byte)pcStack_150[lVar16 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar21 >> 0x17);
          pcStack_150[lVar16 + 0xd] =
               ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar19 >> 0x29) | 1) ^
               (byte)uVar21;
          uVar17 = lVar16 + -0x61c8864680b583eb +
                   (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_150[lVar16 + 1]) << 0x11);
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0xc);
        *pcStack_150 = '\0';
      }
      pcStack_150 = pcStack_150 + 0xd;
      pcVar12 = (char *)func_0x0011ab24(&pcStack_150);
      cVar14 = *pcVar11;
      if (cVar14 != '\0') {
        pcVar18 = pcVar11;
        do {
/* wm:watermarked copy - do not remove */
          pcVar18 = pcVar18 + 1;
          if (cVar14 != *pcVar12) break;
          pcVar12 = pcVar12 + 1;
          cVar14 = *pcVar18;
        } while (cVar14 != '\0');
      }
      if (cVar14 == *pcVar12) {
LAB_0020f0f4:
        plVar10 = (long *)(*(long *)(lRam0000000001f26600 + lVar15) + 0x10);
        if (&lStack_100 != plVar10) {
          bVar2 = *(byte *)(*(long *)(lRam0000000001f26600 + lVar15) + 0x27);
          if ((long)plStack_f0 < 0) {
LAB_0020f7c4:
            uVar17 = plVar10[1];
            plVar23 = (long *)*plVar10;
            if (-1 < (char)bVar2) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
              uVar17 = (ulong)bVar2;
              plVar23 = plVar10;
            }
            func_0x001286c0(&lStack_100,plVar23,uVar17);
          }
          else {
joined_r0x0020f11c:
            if ((char)bVar2 < '\0') {
              func_0x001287e0(&lStack_100,*plVar10,plVar10[1]);
            }
            else {
              ppppppuStack_f8 = (undefined8 ******)plVar10[1];
              lStack_100 = *plVar10;
              plStack_f0 = (long *)plVar10[2];
            }
          }
        }
LAB_0020f7e0:
        ppppppuVar20 = ppppppuStack_f8;
        if (-1 < (long)plStack_f0) {
          ppppppuVar20 = (undefined8 ******)((ulong)plStack_f0 >> 0x38);
        }
        if (ppppppuVar20 == (undefined8 ******)0x0) {
          pbVar6 = (byte *)(*pcRam0000000002076ef0)();
          if ((*pbVar6 & 1) == 0) {
            func_0x019d8d18();
          }
          pcStack_178 = (char *)(*pcRam0000000002076ed8)();
          if (*pcStack_178 == '\x01') {
            lVar15 = 0;
            uVar17 = 0x4c1cd813b2cbef18;
            do {
              uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
/* do not claim this as your own - github.com/pengussy */
              uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
              uVar21 = uVar19 ^ uVar19 >> 0x21;
              uVar1 = (uint)(byte)pcStack_178[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^
                      ((uint)(uVar19 >> 0x29) | 1);
              pcStack_178[lVar15 + 0x1d] =
                   ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar21;
              uVar17 = lVar15 + -0x61c8864680b583eb +
                       (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_178[lVar15 + 1]) << 0x11);
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0x1c);
            *pcStack_178 = '\0';
          }
          pcStack_178 = pcStack_178 + 0x1d;
          uVar7 = func_0x0011ab24(&pcStack_178);
          func_0x00792f00(param_1,uVar7);
        }
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        else {
          func_0x001d7090(&pppppppuStack_88,&lStack_100);
          uStack_b0 = uStack_78;
          uStack_b8 = uStack_80;
          pppppppuStack_c0 = pppppppuStack_88;
          uVar17 = uStack_80;
          if (-1 < (long)uStack_78) {
            uVar17 = uStack_78 >> 0x38;
          }
          if (uVar17 != 0) {
            if ((long)plStack_f0 < 0) {
              __ZdlPv(lStack_100);
            }
            goto LAB_0020e6a8;
          }
          pbVar6 = (byte *)(*pcRam0000000002076f20)();
          if ((*pbVar6 & 1) == 0) {
            func_0x019d8cdc();
          }
          pcStack_170 = (char *)(*pcRam0000000002076f08)();
          if (*pcStack_170 == '\x01') {
            lVar15 = 0;
/* reversing this took months of machine time - github.com/pengussy */
            uVar17 = 0xa1c8967768b6c755;
            do {
              uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
              uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
              uVar21 = uVar19 ^ uVar19 >> 0x21;
              uVar1 = (uint)(byte)pcStack_170[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar21 >> 0x17);
              pcStack_170[lVar15 + 0x1d] =
                   ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') - ((byte)(uVar19 >> 0x29) | 1) ^
                   (byte)uVar21;
              uVar17 = lVar15 + -0x61c8864680b583eb +
                       (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_170[lVar15 + 1]) << 0x11);
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0x1c);
            *pcStack_170 = '\0';
          }
          pcStack_170 = pcStack_170 + 0x1d;
          uVar7 = func_0x0011ab24(&pcStack_170);
          func_0x00792f00(param_1,uVar7);
        }
      }
      else {
        pbVar6 = (byte *)(*pcRam0000000002076e60)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019d8c28();
        }
        pcStack_158 = (char *)(*pcRam0000000002076e48)();
        if (*pcStack_158 == '\x01') {
          uVar1 = (byte)pcStack_158[1] ^ 0x9139227e;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x714abf23 ^ 0x7a3ad;
          pcStack_158[8] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x43;
          uVar17 = (((ulong)(byte)pcStack_158[1] ^ 0x8e527f75d8349026) << 0x11 | 0x11ca4) +
                   0x9e3779b97f4a7c15;
          uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar19 ^ uVar19 >> 0x21;
          uVar1 = (uint)(byte)pcStack_158[2] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^
// WM - unlicensed copy if this notice is missing
                  ((uint)(uVar19 >> 0x29) | 1);
          pcStack_158[9] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_158[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar19 ^ uVar19 >> 0x21;
          uVar1 = (uint)(byte)pcStack_158[3] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^
                  ((uint)(uVar19 >> 0x29) | 1);
          pcStack_158[10] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_158[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar19 ^ uVar19 >> 0x21;
          uVar1 = (uint)(byte)pcStack_158[4] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^
                  ((uint)(uVar19 >> 0x29) | 1);
          pcStack_158[0xb] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_158[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar19 ^ uVar19 >> 0x21;
          uVar1 = (uint)(byte)pcStack_158[5] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^
                  ((uint)(uVar19 >> 0x29) | 1);
          pcStack_158[0xc] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_158[5]) << 0x11) + 0x9e3779b97f4a7c19;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
          uVar21 = uVar19 ^ uVar19 >> 0x21;
          uVar1 = (uint)(byte)pcStack_158[6] ^ (uint)uVar21 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^
                  ((uint)(uVar19 >> 0x29) | 1);
          pcStack_158[0xd] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar21;
          uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_158[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_158[7] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_158[0xe] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar19;
          *pcStack_158 = '\0';
        }
        pcStack_158 = pcStack_158 + 8;
        pcVar12 = (char *)func_0x0011ab24(&pcStack_158);
        cVar14 = *pcVar11;
        if (cVar14 != '\0') {
          pcVar18 = pcVar11;
          do {
            pcVar18 = pcVar18 + 1;
            if (cVar14 != *pcVar12) break;
            pcVar12 = pcVar12 + 1;
            cVar14 = *pcVar18;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
          } while (cVar14 != '\0');
        }
        if (cVar14 == *pcVar12) goto LAB_0020f0f4;
        pbVar6 = (byte *)(*pcRam0000000002076e90)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019d8c64();
        }
        pcStack_160 = (char *)(*pcRam0000000002076e78)();
        if (*pcStack_160 == '\x01') {
          lVar16 = 0;
          uVar17 = 0x8c4907be1ffe8236;
          do {
            uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
            uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar19 ^ uVar19 >> 0x21;
            uVar1 = (uint)(byte)pcStack_160[lVar16 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                    (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
            pcStack_160[lVar16 + 0xe] =
                 ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
            uVar17 = lVar16 + -0x61c8864680b583eb +
                     (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_160[lVar16 + 1]) << 0x11);
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0xd);
          *pcStack_160 = '\0';
        }
        pcStack_160 = pcStack_160 + 0xe;
        pcVar12 = (char *)func_0x0011ab24(&pcStack_160);
        cVar14 = *pcVar11;
        if (cVar14 != '\0') {
          do {
            pcVar11 = pcVar11 + 1;
            if (cVar14 != *pcVar12) break;
            pcVar12 = pcVar12 + 1;
            cVar14 = *pcVar11;
          } while (cVar14 != '\0');
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
        }
        if (cVar14 == *pcVar12) {
          plVar10 = (long *)(*(long *)(lRam0000000001f26610 + lVar15) + 0x10);
          if (&lStack_100 != plVar10) {
            bVar2 = *(byte *)(*(long *)(lRam0000000001f26610 + lVar15) + 0x27);
            if (-1 < (long)plStack_f0) goto joined_r0x0020f11c;
            goto LAB_0020f7c4;
          }
          goto LAB_0020f7e0;
        }
        pbVar6 = (byte *)(*pcRam0000000002076ec0)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019d8ca0();
        }
        pcStack_168 = (char *)(*pcRam0000000002076ea8)();
        if (*pcStack_168 == '\x01') {
          lVar15 = 0;
          uVar17 = 0x9fe02104006e5560;
          do {
            uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
            uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar19 ^ uVar19 >> 0x21;
            uVar1 = (uint)(byte)pcStack_168[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^
                    ((uint)(uVar19 >> 0x29) | 1);
            pcStack_168[lVar15 + 0x1d] =
                 ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar21;
            uVar17 = lVar15 + -0x61c8864680b583eb +
                     (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_168[lVar15 + 1]) << 0x11);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            lVar15 = lVar15 + 1;
          } while (lVar15 != 0x1c);
          *pcStack_168 = '\0';
        }
        pcStack_168 = pcStack_168 + 0x1d;
        uVar7 = func_0x0011ab24(&pcStack_168);
        func_0x00792f00(param_1,uVar7);
      }
      if ((long)plStack_f0 < 0) goto LAB_0020fb90;
    }
    uVar7 = 1;
    goto LAB_0020f774;
  }
  pbVar6 = (byte *)(*pcRam0000000002076da0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019d8d90();
  }
  pcStack_188 = (char *)(*pcRam0000000002076d88)();
  if (*pcStack_188 == '\x01') {
    lVar15 = 0;
    uVar17 = 0x57ce9678b546b0af;
    do {
      uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar19 ^ uVar19 >> 0x21;
      uVar1 = (uint)(byte)pcStack_188[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar21 >> 0x17) ^ ((uint)(uVar19 >> 0x29) | 1);
/* WM - reversing this took months of machine time */
      pcStack_188[lVar15 + 0x15] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar21;
      uVar17 = lVar15 + -0x61c8864680b583eb +
               (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_188[lVar15 + 1]) << 0x11);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x14);
    *pcStack_188 = '\0';
  }
  pcStack_188 = pcStack_188 + 0x15;
  uVar7 = func_0x0011ab24(&pcStack_188);
  func_0x007935a0(param_1,0xffffd8ee,uVar7);
  func_0x00791ab0(param_1,1);
  iVar5 = func_0x00794a14(param_1,1,1,0);
  if (iVar5 != 0) goto LAB_0020fd44;
  uVar7 = func_0x00792368(param_1,0xffffffff,&lStack_100);
  func_0x0012851c(&pppppppuStack_c0,uVar7,lStack_100);
  func_0x00791660(param_1,0xfffffffe);
LAB_0020e6a8:
  ppppppuStack_d8 = (undefined8 ******)0x0;
  ppppppuStack_d0 = (undefined8 ******)0x0;
  ppppppuStack_c8 = (undefined8 ******)0x0;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  pcVar8 = (code *)func_0x0011ab24(&DAT_0003dce4);
  uVar17 = (*pcVar8)(&pppppppuStack_c0,&ppppppuStack_d8);
  if ((uVar17 & 1) == 0) {
    pbVar6 = (byte *)(*pcRam0000000002076f50)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d8e08();
    }
    pcStack_198 = (char *)(*pcRam0000000002076f38)();
    if (*pcStack_198 == '\x01') {
      lVar15 = 0;
      uVar17 = 0xd9f8015bde02138e;
      do {
        uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
        uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
        uVar21 = uVar19 ^ uVar19 >> 0x21;
        uVar1 = (uint)(byte)pcStack_198[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar21 >> 0x17);
        pcStack_198[lVar15 + 0x3f] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar19 >> 0x29) | 1) ^
             (byte)uVar21;
        uVar17 = lVar15 + -0x61c8864680b583eb +
                 (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_198[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x3e);
      *pcStack_198 = '\0';
    }
    pcStack_198 = pcStack_198 + 0x3f;
    uVar7 = func_0x0011ab24(&pcStack_198);
    func_0x00792f00(param_1,uVar7);
    uVar7 = 1;
    goto LAB_0020f774;
  }
  ppppppuStack_f8 = (undefined8 ******)0x0;
  lStack_100 = 0;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  ppppppuStack_e8 = (undefined8 ******)0x0;
  plStack_f0 = (long *)0x0;
  uStack_e0 = 0x3f800000;
  pbVar6 = (byte *)(*pcRam0000000002076f80)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019d8e44();
  }
  pcStack_1a0 = (char *)(*pcRam0000000002076f68)();
  if (*pcStack_1a0 == '\x01') {
    uVar1 = (byte)pcStack_1a0[1] ^ 0x9880ed65;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0xf930498d;
    pcStack_1a0[0xc] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ 0xa6;
    uVar17 = (((ulong)(byte)pcStack_1a0[1] ^ 0xd1b36b1747cab1e7) << 0x11 | 0x1a366) +
             0x9e3779b97f4a7c15;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[2] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0xd] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[3] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0xe] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[4] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    pcStack_1a0[0xf] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[5] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0x10] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[6] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0x11] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
// WM - if you paid for this, you were scammed
    uVar1 = (uint)(byte)pcStack_1a0[7] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0x12] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[8] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0x13] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[9] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0x14] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[9]) << 0x11) + 0x9e3779b97f4a7c1d;
    uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
    uVar21 = uVar19 ^ uVar19 >> 0x21;
    uVar1 = (uint)(byte)pcStack_1a0[10] ^ (uint)uVar21 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
    pcStack_1a0[0x15] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar21;
    uVar17 = (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a0[10]) << 0x11) + 0x9e3779b97f4a7c1e;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar19 = uVar17 ^ uVar17 >> 0x21;
/* wm:proprietary - see LICENSE - do not sell */
    uVar1 = (uint)(byte)pcStack_1a0[0xb] ^ (uint)uVar19 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
    pcStack_1a0[0x16] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar19;
    *pcStack_1a0 = '\0';
  }
  pcStack_1a0 = pcStack_1a0 + 0xc;
  uVar7 = func_0x0011ab24(&pcStack_1a0);
  pbVar6 = (byte *)(*pcRam0000000002076fb0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019d8e80();
  }
  pcStack_1a8 = (char *)(*pcRam0000000002076f98)();
  if (*pcStack_1a8 == '\x01') {
    lVar15 = 0;
    uVar17 = 0xe452e4f9bae995f9;
    do {
      uVar19 = (uVar17 ^ uVar17 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar21 = uVar19 ^ uVar19 >> 0x21;
      uVar1 = (uint)(byte)pcStack_1a8[lVar15 + 1] ^ (uint)uVar21 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar21 >> 0x17));
      pcStack_1a8[lVar15 + 0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar21;
      uVar17 = lVar15 + -0x61c8864680b583eb +
               (uVar17 >> 0x2f | (uVar17 ^ (byte)pcStack_1a8[lVar15 + 1]) << 0x11);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0xd);
    *pcStack_1a8 = '\0';
  }
  pcStack_1a8 = pcStack_1a8 + 0xe;
  uVar9 = func_0x0011ab24(&pcStack_1a8);
  uVar17 = _strlen();
  if (0x7ffffffffffffff6 < uVar17) {
    FUN_0000aa50();
LAB_0020fe5c:
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x20fe60);
// WM - watermarked copy - do not remove
    (*pcVar8)();
  }
  if (uVar17 < 0x17) {
    uStack_78 = CONCAT17((char)uVar17,(undefined7)uStack_78);
    pppppppuVar13 = &pppppppuStack_88;
  }
  else {
    uVar19 = (uVar17 & 0x7ffffffffffffff8) + 8;
    uVar21 = 0x19;
    if (uVar19 != 0x18) {
      uVar21 = uVar19;
    }
    pppppppuVar13 = (undefined8 *******)__Znwm(uVar21);
    uStack_78 = uVar21 | 0x8000000000000000;
    pppppppuStack_88 = pppppppuVar13;
    uStack_80 = uVar17;
  }
// WM - thanks for reading - discord.gg/sdkhDjTex
  _memmove(pppppppuVar13,uVar9,uVar17);
  *(undefined1 *)((long)pppppppuVar13 + uVar17) = 0;
  pppppppuStack_98 = &pppppppuStack_88;
  plStack_90 = &lStack_100;
  lVar15 = func_0x001d6cc0(&plStack_90,&pppppppuStack_88,&UNK_01bd2568,&pppppppuStack_98,&uStack_99)
  ;
  func_0x001284e8(lVar15 + 0x28,uVar7);
  ppppppuVar20 = ppppppuStack_f8;
  ppppppuStack_138 = ppppppuStack_d0;
  ppppppuStack_140 = ppppppuStack_d8;
  ppppppuStack_130 = ppppppuStack_c8;
  ppppppuStack_110 = (undefined8 ******)0x0;
  ppppppuStack_118 = (undefined8 ******)0x0;
  ppppppuStack_120 = (undefined8 ******)0x0;
  ppppppuStack_128 = (undefined8 ******)0x0;
  uStack_108 = uStack_e0;
  if (ppppppuStack_e8 != (undefined8 ******)0x0) {
    if ((ulong)ppppppuStack_f8 >> 0x3d != 0) {
      func_0x0000a888();
      goto LAB_0020fe5c;
    }
    lVar15 = (long)ppppppuStack_f8 << 3;
    ppppppuStack_128 = (undefined8 ******)__Znwm(lVar15);
    ppppppuStack_120 = ppppppuVar20;
    if (ppppppuVar20 != (undefined8 ******)0x0) {
      _bzero(ppppppuStack_128,lVar15);
    }
    func_0x002155c8(&ppppppuStack_128,plStack_f0);
    ppppppuStack_110 = ppppppuStack_e8;
  }
  ppppppuVar4 = ppppppuStack_110;
  pppppppuStack_70 = (undefined8 *******)0x0;
  pppppppuStack_70 = (undefined8 *******)__Znwm(0x48);
  ppppppuVar3 = ppppppuStack_120;
  ppppppuVar22 = ppppppuStack_128;
  ppppppuVar20 = ppppppuStack_130;
  *pppppppuStack_70 = (undefined8 ******)&UNK_01dc0ae8;
  pppppppuStack_70[2] = ppppppuStack_138;
// origin: github.com/pengussy
  pppppppuStack_70[1] = ppppppuStack_140;
  ppppppuStack_140 = (undefined8 ******)0x0;
  ppppppuStack_138 = (undefined8 ******)0x0;
  ppppppuStack_128 = (undefined8 ******)0x0;
  ppppppuStack_120 = (undefined8 ******)0x0;
  ppppppuStack_130 = (undefined8 ******)0x0;
  pppppppuStack_70[3] = ppppppuVar20;
  pppppppuStack_70[4] = ppppppuVar22;
  pppppppuStack_70[5] = ppppppuVar3;
  pppppppuStack_70[6] = ppppppuStack_118;
  pppppppuStack_70[7] = ppppppuVar4;
  *(undefined4 *)(pppppppuStack_70 + 8) = uStack_108;
  if (ppppppuVar4 != (undefined8 ******)0x0) {
    ppppppuVar20 = (undefined8 ******)ppppppuStack_118[1];
    if (((ulong)ppppppuVar3 & (long)ppppppuVar3 - 1U) == 0) {
      ppppppuVar20 = (undefined8 ******)((ulong)ppppppuVar20 & (long)ppppppuVar3 - 1U);
    }
    else if (ppppppuVar3 <= ppppppuVar20) {
      uVar17 = 0;
      if (ppppppuVar3 != (undefined8 ******)0x0) {
        uVar17 = (ulong)ppppppuVar20 / (ulong)ppppppuVar3;
      }
      ppppppuVar20 = (undefined8 ******)((long)ppppppuVar20 - uVar17 * (long)ppppppuVar3);
    }
    ppppppuVar22[(long)ppppppuVar20] = pppppppuStack_70 + 6;
// keep the notice, keep the source honest
    ppppppuStack_118 = (undefined8 ******)0x0;
    ppppppuStack_110 = (undefined8 ******)0x0;
  }
  uVar7 = func_0x001e7c24(param_1,&pppppppuStack_88);
  if ((undefined8 ********)pppppppuStack_70 == &pppppppuStack_88) {
    lVar15 = 0x20;
LAB_0020f678:
    (**(code **)((long)*pppppppuStack_70 + lVar15))();
    ppppppuVar20 = ppppppuStack_118;
  }
  else {
    ppppppuVar20 = ppppppuStack_118;
    if (pppppppuStack_70 != (undefined8 *******)0x0) {
      lVar15 = 0x28;
      goto LAB_0020f678;
    }
  }
  while (ppppppuVar20 != (undefined8 ******)0x0) {
    while( true ) {
      ppppppuVar22 = (undefined8 ******)*ppppppuVar20;
      if (*(char *)((long)ppppppuVar20 + 0x3f) < '\0') {
        __ZdlPv(ppppppuVar20[5]);
        cVar14 = *(char *)((long)ppppppuVar20 + 0x27);
      }
      else {
        cVar14 = *(char *)((long)ppppppuVar20 + 0x27);
      }
      if (-1 < cVar14) break;
      __ZdlPv(ppppppuVar20[2]);
      __ZdlPv(ppppppuVar20);
      ppppppuVar20 = ppppppuVar22;
      if (ppppppuVar22 == (undefined8 ******)0x0) goto LAB_0020f6dc;
    }
/* WM - unlicensed copy if this notice is missing */
    __ZdlPv(ppppppuVar20);
    ppppppuVar20 = ppppppuVar22;
  }
LAB_0020f6dc:
  ppppppuVar20 = ppppppuStack_128;
  ppppppuStack_128 = (undefined8 ******)0x0;
  if (ppppppuVar20 != (undefined8 ******)0x0) {
    __ZdlPv();
  }
  plVar10 = plStack_f0;
  if ((long)ppppppuStack_130 < 0) {
    __ZdlPv(ppppppuStack_140);
    plVar10 = plStack_f0;
  }
  while (plVar10 != (long *)0x0) {
    while( true ) {
      plVar23 = (long *)*plVar10;
      if (*(char *)((long)plVar10 + 0x3f) < '\0') {
        __ZdlPv(plVar10[5]);
        cVar14 = *(char *)((long)plVar10 + 0x27);
      }
      else {
        cVar14 = *(char *)((long)plVar10 + 0x27);
      }
      if (-1 < cVar14) break;
      __ZdlPv(plVar10[2]);
      __ZdlPv(plVar10);
/* do not claim this as your own */
      plVar10 = plVar23;
      if (plVar23 == (long *)0x0) goto LAB_0020f754;
    }
    __ZdlPv(plVar10);
    plVar10 = plVar23;
  }
LAB_0020f754:
  lVar15 = lStack_100;
  lStack_100 = 0;
  if (lVar15 != 0) {
    __ZdlPv();
  }
LAB_0020f774:
  while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_68) {
    ___stack_chk_fail();
LAB_0020fb90:
    __ZdlPv(lStack_100);
    uVar7 = 1;
  }
  return uVar7;
}

