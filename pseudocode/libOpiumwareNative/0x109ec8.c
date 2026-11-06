/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x109ec8:d05fd9d6bd
   =========================================================================== */

undefined8 FUN_00109ec8(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 uVar13;
  undefined *puVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
// reversing this took months of machine time
  char *pcStack_78;
  char *pcStack_70;
  undefined8 uStack_68;
  
  if (pcRam00000000020971a0 == (code *)0x0 || pcRam00000000020971a0 == FUN_00109ec8) {
    return 0;
  }
  iVar5 = func_0x00791e54(param_1,2);
  if (iVar5 == 0) {
LAB_0010bbe0:
    uVar11 = (*pcRam00000000020971a0)(param_1);
    return uVar11;
  }
  if (((lRam0000000002097088 == 0) ||
      (lVar7 = func_0x0013b76c(0x2097070,param_1 + 0x80), lVar7 == 0)) ||
     (pcVar8 = (char *)func_0x00792368(param_1,2,0), pcVar8 == (char *)0x0)) {
LAB_0010a43c:
// WM - chat: discord.gg/sdkhDjTex
                    /* WARNING: Could not recover jumptable at 0x0010a460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar11 = (*pcRam00000000020971a0)(param_1);
    return uVar11;
  }
  pbVar9 = (byte *)(*pcRam000000000206d200)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019c8778();
  }
  pcVar20 = (char *)0xff51afd7ed558ccd;
  uVar19 = 0xc4ceb9fe1a85ec53;
  pcStack_78 = (char *)(*pcRam000000000206d1e8)();
  if (*pcStack_78 == '\x01') {
    lVar7 = 0;
    uVar15 = 0x44901736874a1bdf;
    do {
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_78[lVar7 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17))
      ;
      pcStack_78[lVar7 + 0xe] = ((byte)(uVar1 >> 3) & 0x1f | (char)uVar1 * ' ') ^ (byte)uVar18;
      uVar15 = lVar7 + -0x61c8864680b583eb +
               (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_78[lVar7 + 1]) << 0x11);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0xd);
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 0xe;
  pcVar10 = (char *)func_0x0011ab24(&pcStack_78);
  cVar4 = *pcVar8;
  if (cVar4 != '\0') {
    pcVar16 = pcVar8;
    do {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      pcVar16 = pcVar16 + 1;
      if (cVar4 != *pcVar10) break;
      pcVar10 = pcVar10 + 1;
      cVar4 = *pcVar16;
    } while (cVar4 != '\0');
  }
  if (cVar4 == *pcVar10) {
    pbVar9 = (byte *)(*pcRam000000000206d230)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c89d0();
    }
    pcStack_c8 = (char *)(*pcRam000000000206d218)();
    if (*pcStack_c8 == '\x01') {
      uVar1 = (byte)pcStack_c8[1] ^ 0x6ebc5929;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xbdbdd45d;
      pcStack_c8[6] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0xea;
      uVar19 = (((ulong)(byte)pcStack_c8[1] ^ 0x7b4d048f1d042110) << 0x11 | 0xf69a) +
               0x9e3779b97f4a7c15;
      uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[2] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_c8[7] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar17;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[2]) << 0x11) + 0x9e3779b97f4a7c16;
/* reversing this took months of machine time - github.com/pengussy */
      uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[3] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_c8[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar17;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[4] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
      pcStack_c8[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar17;
      uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_c8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
      uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
      uVar15 = uVar19 ^ uVar19 >> 0x21;
      uVar1 = (uint)(byte)pcStack_c8[5] ^ (uint)uVar15 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
              (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
      pcStack_c8[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar15;
      *pcStack_c8 = '\0';
    }
    pcStack_c8 = pcStack_c8 + 6;
    uVar11 = func_0x0011ab24(&pcStack_c8);
    func_0x007935a0(param_1,0xffffd8ee,uVar11);
    iVar5 = func_0x00791f88(param_1,0xffffffff,1);
    func_0x00791660(param_1,0xfffffffe);
    if (iVar5 == 0) goto LAB_0010a43c;
    pbVar9 = (byte *)(*pcRam000000000206d260)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c8a0c();
    }
    pcStack_d0 = (char *)(*pcRam000000000206d248)();
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    if (*pcStack_d0 == '\x01') {
      lVar7 = 0;
      uVar19 = 0x4565359020823cf6;
      do {
        uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
        uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
        uVar17 = uVar15 ^ uVar15 >> 0x21;
        uVar1 = (uint)(byte)pcStack_d0[lVar7 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar17 >> 0x17);
        pcStack_d0[lVar7 + 0xe] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar15 >> 0x29) | 1) ^
             (byte)uVar17;
        uVar19 = lVar7 + -0x61c8864680b583eb +
                 (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_d0[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0xd);
      *pcStack_d0 = '\0';
    }
    pcStack_d0 = pcStack_d0 + 0xe;
    uVar11 = func_0x0011ab24(&pcStack_d0);
    puVar14 = &DAT_00201a9c;
    goto LAB_0010ad18;
  }
  pbVar9 = (byte *)(*pcRam000000000206d290)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019c87b4();
  }
  pcStack_80 = (char *)(*pcRam000000000206d278)();
/* WM - proprietary - see LICENSE - do not sell */
  if (*pcStack_80 == '\x01') {
    uVar1 = (byte)pcStack_80[1] ^ 0xe8247cf5;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x49dd9fd1;
    pcStack_80[9] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x77 ^ 0x36;
    uVar15 = (((ulong)(byte)pcStack_80[1] ^ 0xa4672362132bf02b) << 0x11 | 0x148ce) +
             0x9e3779b97f4a7c15;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[2] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17);
    pcStack_80[10] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[3] ^ (uint)uVar18 ^ 0xffffffc3;
/*  do not claim this as your own  */
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17);
    pcStack_80[0xb] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[4] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17);
    pcStack_80[0xc] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[5] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17);
    pcStack_80[0xd] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[6] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17);
    pcStack_80[0xe] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
/*  more drops soon - github.com/pengussy  */
    uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
    uVar18 = uVar17 ^ uVar17 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[7] ^ (uint)uVar18 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17);
    pcStack_80[0xf] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar17 >> 0x29) | 1) ^
         (byte)uVar18;
    uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_80[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar17 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcStack_80[8] ^ (uint)uVar17 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar17 >> 0x17);
    pcStack_80[0x10] =
         ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar15 >> 0x29) | 1) ^
         (byte)uVar17;
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 9;
  pcVar10 = (char *)func_0x0011ab24(&pcStack_80);
  cVar4 = *pcVar8;
  if (cVar4 != '\0') {
    pcVar16 = pcVar8;
    do {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      pcVar16 = pcVar16 + 1;
      if (cVar4 != *pcVar10) break;
      pcVar10 = pcVar10 + 1;
      cVar4 = *pcVar16;
    } while (cVar4 != '\0');
  }
  if (cVar4 == *pcVar10) {
    puVar14 = &DAT_0020223c;
  }
  else {
    pbVar9 = (byte *)(*pcRam000000000206d2c0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019c87f0();
    }
    pcStack_88 = (char *)(*pcRam000000000206d2a8)();
    if (*pcStack_88 == '\x01') {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      uVar1 = (byte)pcStack_88[1] ^ 0xfeac6e34;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0xc034a3fe;
      pcStack_88[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') + 0xd ^ 0xf7;
      uVar15 = (((ulong)(byte)pcStack_88[1] ^ 0x622a674f2fa26d81) << 0x11 | 0xc454) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
      pcStack_88[0xb] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
      pcStack_88[0xc] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
      pcStack_88[0xd] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
/* found on a paste site? it was re-uploaded illegally */
      uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
      pcStack_88[0xe] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
      pcStack_88[0xf] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
      pcStack_88[0x10] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17);
      pcStack_88[0x11] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar17 >> 0x29) | 1) ^
           (byte)uVar18;
      uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar15 ^ uVar15 >> 0x21;
/* WM - found on a paste site? it was re-uploaded illegally */
      uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar17 >> 0x17);
      pcStack_88[0x12] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar17;
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 10;
    pcVar10 = (char *)func_0x0011ab24(&pcStack_88);
    cVar4 = *pcVar8;
    if (cVar4 != '\0') {
      pcVar16 = pcVar8;
      do {
        pcVar16 = pcVar16 + 1;
        if (cVar4 != *pcVar10) break;
        pcVar10 = pcVar10 + 1;
        cVar4 = *pcVar16;
      } while (cVar4 != '\0');
    }
    if (cVar4 != *pcVar10) {
      pbVar9 = (byte *)(*pcRam000000000206d2f0)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019c882c();
      }
      pcStack_90 = (char *)(*pcRam000000000206d2d8)();
/* WM - donate: donate/README.md */
      if (*pcStack_90 == '\x01') {
        lVar7 = 0;
        uVar15 = 0x3872bba73bb44996;
        do {
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_90[lVar7 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar18 >> 0x17);
          pcStack_90[lVar7 + 0xf] =
               ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar17 >> 0x29) | 1) ^
               (byte)uVar18;
          uVar15 = lVar7 + -0x61c8864680b583eb +
                   (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_90[lVar7 + 1]) << 0x11);
          lVar7 = lVar7 + 1;
        } while (lVar7 != 0xe);
        *pcStack_90 = '\0';
      }
      pcStack_90 = pcStack_90 + 0xf;
      pcVar10 = (char *)func_0x0011ab24(&pcStack_90);
      cVar4 = *pcVar8;
      if (cVar4 != '\0') {
        pcVar16 = pcVar8;
        do {
          pcVar16 = pcVar16 + 1;
          if (cVar4 != *pcVar10) break;
          pcVar10 = pcVar10 + 1;
          cVar4 = *pcVar16;
        } while (cVar4 != '\0');
/* no support for modified copies */
      }
      if (cVar4 != *pcVar10) {
        pbVar9 = (byte *)(*pcRam000000000206d320)();
        if ((*pbVar9 & 1) == 0) {
          func_0x019c8868();
        }
        pcStack_98 = (char *)(*pcRam000000000206d308)();
        if (*pcStack_98 == '\x01') {
          uVar1 = (byte)pcStack_98[1] ^ 0x88086959;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xb6dbd111 ^ 0x335249;
          pcStack_98[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x66;
          uVar15 = (((ulong)(byte)pcStack_98[1] ^ 0xb3352b5903d6892c) << 0x11 | 0x1666a) +
                   0x9e3779b97f4a7c15;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[2] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[4] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0xf] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
/* origin: github.com/pengussy */
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[5] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0x10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[6] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0x11] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[7] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0x12] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[8] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0x13] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
/* keep the notice, keep the source honest - github.com/pengussy */
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[9] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0x14] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[9]) << 0x11) + 0x9e3779b97f4a7c1d;
          uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[10] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_98[0x15] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar18;
          uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_98[10]) << 0x11) + 0x9e3779b97f4a7c1e;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
          uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
          uVar17 = uVar15 ^ uVar15 >> 0x21;
          uVar1 = (uint)(byte)pcStack_98[0xb] ^ (uint)uVar17 ^ 0xffffffc3;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar17 >> 0x17) ^
                  ((uint)(uVar15 >> 0x29) | 1);
          pcStack_98[0x16] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar17;
          *pcStack_98 = '\0';
        }
        pcStack_98 = pcStack_98 + 0xc;
        pcVar10 = (char *)func_0x0011ab24(&pcStack_98);
        cVar4 = *pcVar8;
        if (cVar4 != '\0') {
          pcVar16 = pcVar8;
          do {
            pcVar16 = pcVar16 + 1;
            if (cVar4 != *pcVar10) break;
            pcVar10 = pcVar10 + 1;
            cVar4 = *pcVar16;
          } while (cVar4 != '\0');
        }
        if (cVar4 != *pcVar10) {
          pcStack_70 = pcVar8;
          uStack_68 = _strlen(pcVar8);
          pbVar9 = (byte *)(*pcRam000000000206d350)();
          if ((*pbVar9 & 1) == 0) {
            func_0x019c88a4();
          }
          pcStack_a0 = (char *)(*pcRam000000000206d338)();
          if (*pcStack_a0 == '\x01') {
            uVar1 = (byte)pcStack_a0[1] ^ 0x6e63b87;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0x58a97253;
            pcStack_a0[6] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0x44;
// watermarked copy - do not remove
            uVar15 = (((ulong)(byte)pcStack_a0[1] ^ 0x43bfc4a014249bf0) << 0x11 | 0x877f) +
                     0x9e3779b97f4a7c15;
            uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar17 ^ uVar17 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
            pcStack_a0[7] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
            uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar17 ^ uVar17 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
            pcStack_a0[8] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
            uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
            uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
            uVar18 = uVar17 ^ uVar17 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar18 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
            pcStack_a0[9] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar18;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
            uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
            uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
            uVar17 = uVar15 ^ uVar15 >> 0x21;
            uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar17 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) -
                    (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
            pcStack_a0[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar17;
            *pcStack_a0 = '\0';
          }
          pcStack_a0 = pcStack_a0 + 6;
          pcVar10 = (char *)func_0x0011ab24(&pcStack_a0);
          cVar4 = *pcVar8;
          if (cVar4 != '\0') {
            pcVar16 = pcVar8;
            do {
              pcVar16 = pcVar16 + 1;
              if (cVar4 != *pcVar10) break;
              pcVar10 = pcVar10 + 1;
              cVar4 = *pcVar16;
            } while (cVar4 != '\0');
          }
          cVar2 = *pcVar10;
          lVar7 = func_0x0016dbf0(0x20929a8,&pcStack_70);
          if (((bRam0000000002097055 & 1) == 0) &&
             (lVar12 = func_0x0016dd78(0x20929d0,&pcStack_70), lVar12 != 0)) goto LAB_0010bfa0;
          if (cVar4 == cVar2 || lVar7 != 0) {
            uVar6 = func_0x00791650(param_1);
            pbVar9 = (byte *)(*pcRam000000000206d3b0)();
            if ((*pbVar9 & 1) == 0) {
// origin: github.com/pengussy
              func_0x019c891c();
            }
            pcStack_b0 = (char *)(*pcRam000000000206d398)();
            if (*pcStack_b0 == '\x01') {
              uVar1 = (byte)pcStack_b0[1] ^ 0x3222b504;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x321d9306;
              pcStack_b0[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 199;
              uVar15 = (((ulong)(byte)pcStack_b0[1] ^ 0x9f91440eb303efaa) << 0x11 | 0x13f22) +
                       0x9e3779b97f4a7c15;
              uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar18 = uVar17 ^ uVar17 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar18 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                      (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
              pcStack_b0[7] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
              uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_b0[2]) << 0x11) +
                       0x9e3779b97f4a7c16;
              uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar18 = uVar17 ^ uVar17 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar18 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                      (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
              pcStack_b0[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
              uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_b0[3]) << 0x11) +
                       0x9e3779b97f4a7c17;
              uVar17 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
              uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
              uVar18 = uVar17 ^ uVar17 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[4] ^ (uint)uVar18 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                      (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
              pcStack_b0[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar18;
              uVar15 = (uVar15 >> 0x2f | (uVar15 ^ (byte)pcStack_b0[4]) << 0x11) +
                       0x9e3779b97f4a7c18;
              uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
/* wm:watermarked copy - do not remove */
              uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
              uVar17 = uVar15 ^ uVar15 >> 0x21;
              uVar1 = (uint)(byte)pcStack_b0[5] ^ (uint)uVar17 ^ 0xffffffc3;
              uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
                      (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
              pcStack_b0[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar17;
              *pcStack_b0 = '\0';
            }
            pcStack_b0 = pcStack_b0 + 6;
            uVar11 = func_0x0011ab24(&pcStack_b0);
            func_0x007935a0(param_1,0xffffd8ee,uVar11);
            iVar5 = func_0x00791f88(param_1,0xffffffff,1);
            if ((iVar5 != 0) && (cVar4 == cVar2)) {
              pbVar9 = (byte *)(*pcRam000000000206d3e0)();
              if ((*pbVar9 & 1) == 0) goto LAB_0010c070;
              do {
                pcVar8 = (char *)(*pcRam000000000206d3c8)();
                if (*pcVar8 == '\x01') {
                  uVar15 = ((long)pcVar20 * -0x358f76edd418c697 ^
                           (ulong)((long)pcVar20 * -0x358f76edd418c697) >> 0x21) * uVar19;
                  uVar17 = uVar15 ^ uVar15 >> 0x21;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  bVar3 = pcVar8[1];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar17);
                  pcVar8[0x14] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar17 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c15;
                  bVar3 = pcVar8[2];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x15] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
                  bVar3 = pcVar8[3];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x16] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c17;
                  bVar3 = pcVar8[4];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x17] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c18;
                  bVar3 = pcVar8[5];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x18] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c19;
                  bVar3 = pcVar8[6];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x19] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1a;
                  bVar3 = pcVar8[7];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x1a] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1b;
                  bVar3 = pcVar8[8];
/* if you paid for this, you were scammed - github.com/pengussy */
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x1b] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1c;
                  bVar3 = pcVar8[9];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x1c] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1d;
                  bVar3 = pcVar8[10];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x1d] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1e;
                  bVar3 = pcVar8[0xb];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x1e] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1f;
                  bVar3 = pcVar8[0xc];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x1f] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c20;
                  bVar3 = pcVar8[0xd];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x20] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c21;
                  bVar3 = pcVar8[0xe];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x21] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c22;
                  bVar3 = pcVar8[0xf];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x22] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c23;
                  bVar3 = pcVar8[0x10];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x23] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c24;
                  bVar3 = pcVar8[0x11];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x24] = cVar4;
                  uVar15 = (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c25;
/* wm:donate: donate/README.md */
                  bVar3 = pcVar8[0x12];
                  cVar4 = func_0x0016863c((ulong)bVar3,uVar15);
                  pcVar8[0x25] = cVar4;
                  cVar4 = func_0x0016863c(pcVar8[0x13],
                                          (uVar15 >> 0x2f | (uVar15 ^ bVar3) << 0x11) +
                                          0x9e3779b97f4a7c26);
                  pcVar8[0x26] = cVar4;
                  *pcVar8 = '\0';
                }
                pcStack_c0 = pcVar8 + 0x14;
                func_0x0011ab24(&pcStack_c0);
                func_0x007a1b5c(param_1,"%s");
LAB_0010bfa0:
                pbVar9 = (byte *)(*pcRam000000000206d380)();
                if ((*pbVar9 & 1) == 0) {
                  func_0x019c88e0();
                }
                pcVar8 = (char *)(*pcRam000000000206d368)();
                if (*pcVar8 == '\x01') {
                  lVar7 = 0;
                  uVar19 = ((long)pcVar20 * -0x121064593f478821 ^
                           (ulong)((long)pcVar20 * -0x121064593f478821) >> 0x21) * uVar19;
                  uVar15 = uVar19 ^ uVar19 >> 0x21;
                  do {
                    pcVar20 = pcVar8 + lVar7;
                    uVar19 = (ulong)(byte)pcVar20[1];
                    cVar4 = func_0x00168a14(uVar19,uVar15);
                    pcVar20[0x20] = cVar4;
                    uVar15 = lVar7 + -0x61c8864680b583eb +
                             (uVar15 >> 0x2f | (uVar15 ^ uVar19) << 0x11);
                    lVar7 = lVar7 + 1;
                  } while (lVar7 != 0x1f);
                  *pcVar8 = '\0';
                }
                pcStack_a8 = pcVar8 + 0x20;
// WM - watermarked copy - do not remove
                uVar11 = func_0x0011ab24(&pcStack_a8);
                func_0x007a1b5c(param_1,uVar11);
LAB_0010c070:
                func_0x019c8994();
              } while( true );
            }
            uVar13 = 0xfffffffe;
            if ((iVar5 != 0) && (lVar7 != 0)) {
              pbVar9 = (byte *)(*pcRam000000000206d410)(0x206d410,0xfffffffe);
              if ((*pbVar9 & 1) == 0) {
                func_0x019c8958();
              }
              pcStack_b8 = (char *)(*pcRam000000000206d3f8)();
              if (*pcStack_b8 == '\x01') {
                uVar1 = (byte)pcStack_b8[1] ^ 0x6e15e832;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xfde80e8;
                pcStack_b8[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0xf1;
                uVar19 = (((ulong)(byte)pcStack_b8[1] ^ 0xedc31755c012d21b) << 0x11 | 0x1db86) +
                         0x9e3779b97f4a7c15;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[2] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[2]) << 0x11) +
                         0x9e3779b97f4a7c16;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[3] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[3]) << 0x11) +
                         0x9e3779b97f4a7c17;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[4] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0xf] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[4]) << 0x11) +
                         0x9e3779b97f4a7c18;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[5] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0x10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[5]) << 0x11) +
/*  thanks for reading - discord.gg/sdkhDjTex  */
                         0x9e3779b97f4a7c19;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[6] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0x11] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[6]) << 0x11) +
                         0x9e3779b97f4a7c1a;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[7] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0x12] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[7]) << 0x11) +
                         0x9e3779b97f4a7c1b;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
/* unlicensed copy if this notice is missing */
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[8] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0x13] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[8]) << 0x11) +
                         0x9e3779b97f4a7c1c;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[9] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0x14] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[9]) << 0x11) +
/* watermarked copy - do not remove - github.com/pengussy */
                         0x9e3779b97f4a7c1d;
                uVar15 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
                uVar17 = uVar15 ^ uVar15 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[10] ^ (uint)uVar17 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar17 >> 0x17));
                pcStack_b8[0x15] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar17;
                uVar19 = (uVar19 >> 0x2f | (uVar19 ^ (byte)pcStack_b8[10]) << 0x11) +
                         0x9e3779b97f4a7c1e;
                uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0xae502812aa7333;
                uVar19 = (uVar19 ^ uVar19 >> 0x21) * -0x3b314601e57a13ad;
                uVar15 = uVar19 ^ uVar19 >> 0x21;
                uVar1 = (uint)(byte)pcStack_b8[0xb] ^ (uint)uVar15 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                        (((uint)(uVar19 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
                pcStack_b8[0x16] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar15;
                *pcStack_b8 = '\0';
              }
              pcStack_b8 = pcStack_b8 + 0xc;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
              uVar11 = func_0x0011ab24(&pcStack_b8);
              func_0x007935a0(param_1,0xffffffff,uVar11);
              func_0x00791ab0(param_1,0xfffffffe);
              func_0x00792f00(param_1,pcVar8);
              iVar5 = func_0x00794a14(param_1,2,1,0);
              uVar13 = uVar6;
              if ((iVar5 == 0) && (iVar5 = func_0x00791efc(param_1,0xffffffff), iVar5 != 0)) {
                return 1;
              }
            }
            func_0x00791660(param_1,uVar13);
          }
          goto LAB_0010bbe0;
        }
        puVar14 = &DAT_002093b4;
        goto LAB_0010ad10;
      }
    }
    puVar14 = &DAT_002027cc;
  }
LAB_0010ad10:
  uVar11 = 0;
LAB_0010ad18:
  func_0x007930d0(param_1,puVar14,uVar11,0,0);
  return 1;
}

