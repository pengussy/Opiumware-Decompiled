/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xe5a94:9afc33d4d1
 */

/* WARNING: Possible PIC construction at 0x000e5b08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000e5b0c) */
/* WARNING: Removing unreachable block (ram,0x000e5b10) */
/* WARNING: Removing unreachable block (ram,0x000e7d6c) */
/* WARNING: Removing unreachable block (ram,0x000e5b28) */
/* WARNING: Removing unreachable block (ram,0x000e5b54) */
/* WARNING: Removing unreachable block (ram,0x000e5eb8) */
/* WARNING: Removing unreachable block (ram,0x000e5eec) */
/* WARNING: Removing unreachable block (ram,0x000e7d74) */
/* WARNING: Removing unreachable block (ram,0x000e5f40) */
/* WARNING: Removing unreachable block (ram,0x000e5f5c) */
/* WARNING: Removing unreachable block (ram,0x000e631c) */
/* WARNING: Removing unreachable block (ram,0x000e7d7c) */
/* WARNING: Removing unreachable block (ram,0x000e6360) */
/* WARNING: Removing unreachable block (ram,0x000e637c) */
/* WARNING: Removing unreachable block (ram,0x000e6684) */
/* WARNING: Removing unreachable block (ram,0x000e7d84) */
/* WARNING: Removing unreachable block (ram,0x000e66c4) */
/* WARNING: Removing unreachable block (ram,0x000e66e0) */
/* WARNING: Removing unreachable block (ram,0x000e6720) */
/* WARNING: Removing unreachable block (ram,0x000e678c) */
/* WARNING: Removing unreachable block (ram,0x000e6790) */
/* WARNING: Removing unreachable block (ram,0x000e7d8c) */
/* WARNING: Removing unreachable block (ram,0x000e67e8) */
/* WARNING: Removing unreachable block (ram,0x000e6804) */
/* WARNING: Removing unreachable block (ram,0x000e6c20) */
/* WARNING: Removing unreachable block (ram,0x000e7d94) */
/* WARNING: Removing unreachable block (ram,0x000e6c64) */
/* WARNING: Removing unreachable block (ram,0x000e6c80) */
/* WARNING: Removing unreachable block (ram,0x000e709c) */
/* WARNING: Removing unreachable block (ram,0x000e7d9c) */
/* WARNING: Removing unreachable block (ram,0x000e70d4) */
/* WARNING: Removing unreachable block (ram,0x000e70f0) */
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
/* WARNING: Removing unreachable block (ram,0x000e750c) */
/* WARNING: Removing unreachable block (ram,0x000e7da4) */
/* WARNING: Removing unreachable block (ram,0x000e7550) */
/* WARNING: Removing unreachable block (ram,0x000e756c) */
/* WARNING: Removing unreachable block (ram,0x000e7988) */
/* WARNING: Removing unreachable block (ram,0x000e7dac) */
/* WARNING: Removing unreachable block (ram,0x000e79c0) */
/* WARNING: Removing unreachable block (ram,0x000e79dc) */
/* WARNING: Removing unreachable block (ram,0x000e7ce4) */
/* WARNING: Removing unreachable block (ram,0x00802478) */
/* WARNING: Removing unreachable block (ram,0x008024a4) */
/* WARNING: Removing unreachable block (ram,0x008024d8) */
/* WARNING: Removing unreachable block (ram,0x008024c8) */
/* WARNING: Removing unreachable block (ram,0x00802488) */

bool FUN_000e5a94(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x22;
  long unaff_x23;
// watermarked copy - do not remove
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  char *pcStack_c0;
  char *apcStack_b8 [9];
  char *pcStack_70;
  char *apcStack_68 [2];
  char *pcStack_58;
  
  iVar3 = func_0x00791be4(param_1,1);
  if (iVar3 == 7) {
    bVar2 = *(ushort *)(param_1 + 8) == *(ushort *)(param_1 + 10);
    if (cRam0000000002097a08 == '\0') {
      bVar2 = *(ushort *)(param_1 + 8) <= *(ushort *)(param_1 + 10);
    }
    return bVar2;
  }
  pbVar4 = (byte *)(*pcRam000000000206b370)();
  if ((*pbVar4 & 1) == 0) goto LAB_000e8624;
  do {
    pcStack_58 = (char *)(*pcRam000000000206b358)();
    if (*pcStack_58 == '\x01') {
      uVar1 = (byte)pcStack_58[1] ^ 0x8a16b525;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xfea80915 ^ 0x5b8055;
      pcStack_58[8] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) + 0x1a;
      uVar6 = (((ulong)(byte)pcStack_58[1] ^ 0x6b060f7a9137a2eb) << 0x11 | 0xd60c) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
/* do not claim this as your own - github.com/pengussy */
      uVar1 = (uint)(byte)pcStack_58[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_58[9] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[3] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_58[10] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[4] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_58[0xb] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[5] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_58[0xc] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[6] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_58[0xd] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_58[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
/* origin: github.com/pengussy */
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)pcStack_58[7] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      pcStack_58[0xe] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar8;
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 8;
    uVar5 = func_0x0011ab24(&pcStack_58);
    func_0x007a1ba8(param_1,1,uVar5);
    pbVar4 = (byte *)(*pcRam000000000206b3a0)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c5d2c();
    }
    apcStack_b8[0] = (char *)(*pcRam000000000206b388)();
    if (*apcStack_b8[0] == '\x01') {
      uVar6 = (unaff_x25 ^ 0x261e86b18ca31cb ^ (unaff_x25 ^ 0x261e86b18ca31cb) >> 0x21) * unaff_x23;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = uVar6 * unaff_x22;
      uVar6 = uVar6 * -0x1288180e36f55d89;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)apcStack_b8[0][1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      apcStack_b8[0][4] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      uVar6 = (uVar8 >> 0x2f | ((ulong)(byte)apcStack_b8[0][1] ^ uVar8 >> 0x21 ^ uVar8) << 0x11) +
              unaff_x24;
      uVar8 = (uVar6 ^ uVar6 >> 0x21) * unaff_x23;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x22;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)apcStack_b8[0][2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      apcStack_b8[0][5] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar9;
      uVar6 = unaff_x24 + (uVar6 >> 0x2f | (uVar6 ^ (byte)apcStack_b8[0][2]) << 0x11) + 1;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x23;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)apcStack_b8[0][3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1);
      apcStack_b8[0][6] = ((byte)(uVar1 >> 6) & 3 | (byte)(uVar1 << 2)) - (char)uVar8;
      *apcStack_b8[0] = '\0';
    }
    apcStack_b8[0] = apcStack_b8[0] + 4;
    uVar5 = func_0x0011ab24(apcStack_b8);
    pbVar4 = (byte *)(*pcRam000000000206b3d0)();
/*  found on a paste site? it was re-uploaded illegally  */
    if ((*pbVar4 & 1) == 0) {
      func_0x019c5d68();
    }
    pcStack_c0 = (char *)(*pcRam000000000206b3b8)();
    if (*pcStack_c0 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x25 ^ 0x515e2d97b0ce29f ^ (unaff_x25 ^ 0x515e2d97b0ce29f) >> 0x21) * unaff_x23;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * unaff_x23;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x22;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_c0[lVar7 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
        pcStack_c0[lVar7 + 0x34] =
             ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar6 = lVar7 + unaff_x24 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_c0[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x33);
      *pcStack_c0 = '\0';
    }
    pcStack_c0 = pcStack_c0 + 0x34;
    func_0x0011ab24(&pcStack_c0);
    func_0x007a1b5c(param_1,uVar5);
    pbVar4 = (byte *)(*pcRam000000000206b430)();
    if ((*pbVar4 & 1) == 0) {
      func_0x019c5ad4();
    }
    apcStack_68[0] = (char *)(*pcRam000000000206b418)();
    if (*apcStack_68[0] == '\x01') {
      uVar6 = (unaff_x25 ^ 0x67d4ec4de8f9a7d7 ^ (unaff_x25 ^ 0x67d4ec4de8f9a7d7) >> 0x21) *
              unaff_x23;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      uVar8 = uVar6 * unaff_x22;
      uVar6 = uVar6 * unaff_x26;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar9 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)apcStack_68[0][1] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      apcStack_68[0][4] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
      uVar6 = (uVar8 >> 0x2f | ((ulong)(byte)apcStack_68[0][1] ^ uVar8 >> 0x21 ^ uVar8) << 0x11) +
              unaff_x24;
      uVar8 = (uVar6 ^ uVar6 >> 0x21) * unaff_x23;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x22;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)apcStack_68[0][2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
      apcStack_68[0][5] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar9;
      uVar6 = unaff_x24 + (uVar6 >> 0x2f | (uVar6 ^ (byte)apcStack_68[0][2]) << 0x11) + 1;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x23;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar8 = uVar6 ^ uVar6 >> 0x21;
      uVar1 = (uint)(byte)apcStack_68[0][3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar8 >> 0x17));
      apcStack_68[0][6] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar8;
      *apcStack_68[0] = '\0';
    }
    apcStack_68[0] = apcStack_68[0] + 4;
    uVar5 = func_0x0011ab24(apcStack_68);
    pbVar4 = (byte *)(*pcRam000000000206b460)();
    if ((*pbVar4 & 1) == 0) {
/* wm:if you paid for this, you were scammed */
      func_0x019c5b10();
    }
    pcStack_70 = (char *)(*pcRam000000000206b448)();
    if (*pcStack_70 == '\x01') {
      lVar7 = 0;
      uVar6 = (unaff_x25 ^ 0x40aa64c4cc73255d ^ (unaff_x25 ^ 0x40aa64c4cc73255d) >> 0x21) *
              unaff_x23;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * unaff_x22;
      uVar6 = uVar6 ^ uVar6 >> 0x21;
      do {
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * unaff_x23;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * unaff_x22;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_70[lVar7 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
        pcStack_70[lVar7 + 0x17] = ((byte)(uVar1 >> 3) & 0x1f | (byte)(uVar1 << 5)) - (char)uVar9;
// WM - origin: github.com/pengussy
        uVar6 = lVar7 + unaff_x24 + (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_70[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x16);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0x17;
    func_0x0011ab24(&pcStack_70);
    func_0x007a1b5c(param_1,uVar5);
LAB_000e8624:
    func_0x019c5a5c();
  } while( true );
}

