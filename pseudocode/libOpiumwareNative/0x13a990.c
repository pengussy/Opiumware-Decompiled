/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x13a990:ee134815e5
   =========================================================================== */

void FUN_0013a990(long *param_1,long *param_2,long *param_3,byte *param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  long *plVar8;
  long lVar9;
  long extraout_x8;
  char **ppcVar10;
  uint extraout_w9;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
// keep the notice, keep the source honest
  long *plVar16;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  byte abStack_b9 [9];
  long lStack_b0;
  undefined8 uStack_a8;
  uint uStack_a0;
  byte abStack_98 [8];
  long alStack_90 [3];
  uint auStack_78 [4];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar9 = *param_1;
  uVar11 = *(uint *)((long)param_2 + 0xc);
  if (8 < uVar11) goto LAB_0013aa40;
  if ((1 << (ulong)(uVar11 & 0x1f) & 0x7bU) == 0) goto LAB_0013aa24;
LAB_0013a9ec:
  abStack_98[0] = 0;
  alStack_90[2] = alStack_90[2] & 0xffffffff00000000;
  alStack_90[1] = param_2[1];
  alStack_90[0] = *param_2;
  lVar9 = param_1[1];
  pbVar7 = abStack_98;
LAB_0013aa04:
  uVar5 = func_0x0013b0cc(lVar9,pbVar7,param_3,param_4);
  plVar8 = param_3;
  pbVar7 = param_4;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return;
  }
  do {
    ___stack_chk_fail(uVar5);
/* wm:keep the notice, keep the source honest */
    param_3 = plVar8;
    param_4 = pbVar7;
    lVar9 = extraout_x8;
    uVar11 = extraout_w9;
LAB_0013aa24:
    if ((((uVar11 == 8) && (lVar12 = *param_2, *(char *)(lVar12 + 3) == '\0')) &&
        (*(char *)(lVar12 + 4) == '\0')) && (*(long *)(lVar12 + 0x10) == *(long *)(lVar9 + 0xa8))) {
      lVar9 = func_0x0013b76c(lVar9 + 0x18,lVar12 + 0x18);
      if (lVar9 != 0) goto LAB_0013a9ec;
      lVar9 = *param_1;
    }
LAB_0013aa40:
    abStack_98[0] = 0;
    alStack_90[1] = 0;
    alStack_90[2] = 0;
    alStack_90[0] = 0;
    pbVar7 = abStack_98;
    plVar8 = param_2;
    iVar4 = func_0x0013b2f0(*(undefined8 *)param_1[2],*(undefined8 *)(lVar9 + 0xa8));
    bVar3 = abStack_98[0];
    if (iVar4 == 0) {
      if ((*(int *)((long)param_2 + 0xc) == 8) && (*(char *)(*param_2 + 3) != '\0')) {
        pbVar6 = (byte *)(*pcRam00000000020659a0)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019ca634();
        }
        pcStack_c8 = (char *)(*pcRam0000000002065988)();
        if (*pcStack_c8 == '\x01') {
          lVar9 = 0;
          uVar13 = 0xd6d8bf049aba713a;
          do {
            uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
            uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
            uVar15 = uVar14 ^ uVar14 >> 0x21;
            uVar11 = (uint)(byte)pcStack_c8[lVar9 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
            uVar2 = uVar11 >> 1 & 0x7f;
            plVar8 = (long *)(ulong)uVar2;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar11 = (uVar2 | uVar11 << 7) - (int)(uVar15 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1);
            pcStack_c8[lVar9 + 0x29] =
                 ((byte)(uVar11 >> 1) & 0x7f | (byte)(uVar11 << 7)) - (char)uVar15;
            uVar13 = lVar9 + -0x61c8864680b583eb +
                     (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_c8[lVar9 + 1]) << 0x11);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x28);
          *pcStack_c8 = '\0';
        }
        pcStack_c8 = pcStack_c8 + 0x29;
        ppcVar10 = &pcStack_c8;
      }
      else {
        pbVar6 = (byte *)(*pcRam00000000020659d0)();
        if ((*pbVar6 & 1) == 0) {
          func_0x019ca670();
        }
        pcStack_d0 = (char *)(*pcRam00000000020659b8)();
        if (*pcStack_d0 == '\x01') {
          lVar9 = 0;
          uVar13 = 0x96c969bf028b668a;
          do {
            uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
            uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
            uVar15 = uVar14 ^ uVar14 >> 0x21;
            uVar11 = (uint)(byte)pcStack_d0[lVar9 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
            uVar2 = uVar11 >> 2 & 0x3f;
            plVar8 = (long *)(ulong)uVar2;
            uVar11 = (uVar2 | uVar11 << 6) - (int)(uVar15 >> 0x17);
            pcStack_d0[lVar9 + 0x2c] =
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                 ((byte)(uVar11 >> 3) & 0x1f | (char)uVar11 * ' ') - ((byte)(uVar14 >> 0x29) | 1) ^
                 (byte)uVar15;
            uVar13 = lVar9 + -0x61c8864680b583eb +
                     (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_d0[lVar9 + 1]) << 0x11);
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x2b);
          *pcStack_d0 = '\0';
        }
        pcStack_d0 = pcStack_d0 + 0x2c;
        ppcVar10 = &pcStack_d0;
      }
    }
    else {
      auStack_78[0] = 0xffffffff;
      auStack_78[1] = 0xffffffff;
      auStack_78[2] = 0xffffffff;
      param_2 = (long *)(ulong)abStack_98[0];
      if (abStack_98[0] != 0) {
        plVar16 = (long *)0x0;
        do {
          abStack_b9[1] = 0;
          uStack_a0 = 0;
          lStack_b0 = alStack_90[(long)plVar16];
          uStack_a8 = 0x600000000;
/* WM - donate: donate/README.md */
          abStack_b9[0] = 0;
          pbVar7 = abStack_b9;
          plVar8 = (long *)0x0;
          uVar5 = func_0x0013b0cc(param_1[1],abStack_b9 + 1,0,pbVar7);
          if ((int)uVar5 == 0) goto LAB_0013aefc;
          auStack_78[(long)plVar16] = (uint)abStack_b9[0];
          plVar16 = (long *)((long)plVar16 + 1);
        } while (param_2 != plVar16);
        if (bVar3 < 4) {
          plVar16 = (long *)0x0;
          do {
            puVar1 = auStack_78 + (long)plVar16;
            plVar16 = (long *)((long)plVar16 + 1);
          } while (*puVar1 < 0x400 && plVar16 < param_2);
          if (*puVar1 < 0x400) break;
        }
      }
      pbVar6 = (byte *)(*pcRam0000000002065970)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019ca6ac();
      }
      pcStack_d8 = (char *)(*pcRam0000000002065958)();
      if (*pcStack_d8 == '\x01') {
        lVar9 = 0;
        uVar13 = 0xfffc8b408209e9e7;
        do {
          uVar14 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar15 = uVar14 ^ uVar14 >> 0x21;
          uVar11 = (uint)(byte)pcStack_d8[lVar9 + 1] ^ (uint)uVar15 ^ 0xffffffc3;
          uVar2 = uVar11 >> 1 & 0x7f;
/* proprietary - see LICENSE - do not sell */
          plVar8 = (long *)(ulong)uVar2;
          uVar11 = (uVar2 | uVar11 << 7) - (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
          pcStack_d8[lVar9 + 0x2c] =
               ((byte)(uVar11 >> 6) & 3 | (char)uVar11 * '\x04') ^ (byte)uVar15;
          uVar13 = lVar9 + -0x61c8864680b583eb +
                   (uVar13 >> 0x2f | (uVar13 ^ (byte)pcStack_d8[lVar9 + 1]) << 0x11);
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x2b);
        *pcStack_d8 = '\0';
      }
      pcStack_d8 = pcStack_d8 + 0x2c;
      ppcVar10 = &pcStack_d8;
    }
    uVar5 = func_0x0011ab24(ppcVar10);
    func_0x001284e8(param_1[3],uVar5);
    uVar5 = 0;
LAB_0013aefc:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
      return;
    }
  } while( true );
  uStack_a0 = auStack_78[0] << 0x14;
  if (bVar3 == 3) {
    uStack_a0 = auStack_78[2] | auStack_78[1] << 10 | uStack_a0 | 0xc0000000;
  }
  else if (bVar3 == 2) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    uStack_a0 = uStack_a0 | auStack_78[1] << 10 | 0x80000000;
  }
  else {
    uStack_a0 = uStack_a0 | 0x40000000;
  }
  lStack_b0 = 0;
  uStack_a8 = 0;
  abStack_b9[1] = 1;
  lVar9 = param_1[1];
  pbVar7 = abStack_b9 + 1;
  goto LAB_0013aa04;
}

