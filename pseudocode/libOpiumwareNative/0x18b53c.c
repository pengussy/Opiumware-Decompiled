/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x18b53c:e802f6c7f6
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x0018e87c) */
/* WARNING: Removing unreachable block (ram,0x0018e884) */
/* WARNING: Removing unreachable block (ram,0x0018e88c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0018b53c(undefined8 *param_1)

{
  char *pcVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  undefined8 *******pppppppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
  char cVar11;
  int iVar12;
  code *pcVar13;
  byte *pbVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 uVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  long *plVar27;
  undefined *puVar28;
/* keep the notice, keep the source honest */
  ulong *puVar29;
  long *plVar30;
  long lVar31;
  long lVar32;
  char *pcVar33;
  double dVar34;
  double dVar35;
  char *pcStack_4d0;
  char *pcStack_4c8;
  char *pcStack_4c0;
  char *pcStack_4b8;
  char *pcStack_4b0;
  char *pcStack_4a8;
  char *pcStack_4a0;
  char *pcStack_498;
  char *pcStack_490;
  char *pcStack_488;
  char *pcStack_480;
  char *pcStack_478;
  char *pcStack_470;
  char *pcStack_468;
  char *pcStack_460;
  char *pcStack_458;
  char *pcStack_450;
/* watermarked copy - do not remove - github.com/pengussy */
  char *pcStack_448;
  char *pcStack_440;
  char *pcStack_438;
  undefined8 *******pppppppuStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 *******pppppppuStack_3f0;
  ulong uStack_3e8;
  ulong *puStack_3e0;
  undefined8 uStack_3d8;
  undefined4 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 *******pppppppuStack_3b0;
  ulong uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 *******pppppppuStack_398;
  ulong uStack_390;
  undefined8 uStack_388;
  undefined8 *******pppppppuStack_380;
  ulong uStack_378;
  ulong *puStack_370;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  undefined8 *******pppppppuStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  char acStack_348 [8];
  long alStack_340 [3];
  long *plStack_328;
  undefined8 *******pppppppuStack_320;
  ulong uStack_318;
  ulong *puStack_310;
  undefined8 uStack_308;
  char cStack_2f1;
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  undefined8 uStack_2d8;
  char cStack_2c1;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_238;
  undefined *apuStack_118 [19];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_01f20200;
  __ZNSt3__15mutex4lockEv(0x1f26bb0);
  pcVar13 = (code *)func_0x0011ab24(PTR__sem_unlink_01f203c0);
  pbVar14 = (byte *)(*pcRam0000000002074ca0)();
  if ((*pbVar14 & 1) == 0) {
    func_0x019cb8b0();
  }
  lVar32 = -0xae502812aa7333;
  lVar31 = -0x3b314601e57a13ad;
  pcStack_438 = (char *)(*pcRam0000000002074c88)();
  if (*pcStack_438 == '\x01') {
    lVar21 = 0;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
    uVar23 = 0xc5425a641b43fe35;
    do {
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_438[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar25 >> 0x17) ^
              ((uint)(uVar24 >> 0x29) | 1);
      pcStack_438[lVar21 + 0x13] = ((byte)(uVar3 >> 1) & 0x7f | (byte)(uVar3 << 7)) - (char)uVar25;
      uVar23 = lVar21 + -0x61c8864680b583eb +
               (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_438[lVar21 + 1]) << 0x11);
      lVar21 = lVar21 + 1;
    } while (lVar21 != 0x12);
    *pcStack_438 = '\0';
  }
  pcStack_438 = pcStack_438 + 0x13;
  func_0x0011ab24(&pcStack_438);
  (*pcVar13)();
  pcVar13 = (code *)func_0x0011ab24(PTR__printf_01f20398);
  pbVar14 = (byte *)(*pcRam0000000002074cd0)();
  if ((*pbVar14 & 1) == 0) {
    func_0x019cb8ec();
  }
  pcStack_440 = (char *)(*pcRam0000000002074cb8)();
  if (*pcStack_440 == '\x01') {
    uVar3 = (byte)pcStack_440[1] ^ 0xd223ce22;
/*  chat: discord.gg/sdkhDjTex  */
    uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) + 0xc3dd03a5;
    pcStack_440[8] = ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - 9 ^ 0xe1;
    uVar23 = (((ulong)(byte)pcStack_440[1] ^ 0xa17f2b6d30ddf332) << 0x11 | 0x142fe) +
             0x9e3779b97f4a7c15;
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar3 = (uint)(byte)pcStack_440[2] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17);
    pcStack_440[9] =
         ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25
    ;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_440[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
// WM - keep the notice, keep the source honest
    uVar3 = (uint)(byte)pcStack_440[3] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17);
    pcStack_440[10] =
         ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25
    ;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_440[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar3 = (uint)(byte)pcStack_440[4] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17);
    pcStack_440[0xb] =
         ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25
    ;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_440[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar3 = (uint)(byte)pcStack_440[5] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17);
    pcStack_440[0xc] =
         ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25
    ;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_440[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar3 = (uint)(byte)pcStack_440[6] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17);
    pcStack_440[0xd] =
         ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25
    ;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_440[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
/* no support for modified copies */
    uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
    uVar24 = uVar23 ^ uVar23 >> 0x21;
    uVar3 = (uint)(byte)pcStack_440[7] ^ (uint)uVar24 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar24 >> 0x17);
    pcStack_440[0xe] =
         ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24
    ;
    *pcStack_440 = '\0';
  }
  pcStack_440 = pcStack_440 + 8;
  func_0x0011ab24(&pcStack_440);
  (*pcVar13)();
  pcVar13 = (code *)func_0x0011ab24(PTR__getenv_01f20318);
  pbVar14 = (byte *)(*pcRam0000000002074d00)();
  if ((*pbVar14 & 1) == 0) {
    func_0x019cb928();
  }
  pcStack_448 = (char *)(*pcRam0000000002074ce8)();
  if (*pcStack_448 == '\x01') {
    uVar3 = (byte)pcStack_448[1] ^ 0x3cfaceb8;
    uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0xb73e1a7a ^ 0x4fd231;
    pcStack_448[6] = ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) + 0x85;
    uVar23 = (((ulong)(byte)pcStack_448[1] ^ 0x1dcc262966284ec6) << 0x11 | 0x3b98) +
             0x9e3779b97f4a7c15;
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar3 = (uint)(byte)pcStack_448[2] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar25 >> 0x17) ^ ((uint)(uVar24 >> 0x29) | 1);
    pcStack_448[7] = ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) - (char)uVar25;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_448[2]) << 0x11) + 0x9e3779b97f4a7c16;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar3 = (uint)(byte)pcStack_448[3] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar25 >> 0x17) ^ ((uint)(uVar24 >> 0x29) | 1);
    pcStack_448[8] = ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) - (char)uVar25;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_448[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
    uVar25 = uVar24 ^ uVar24 >> 0x21;
    uVar3 = (uint)(byte)pcStack_448[4] ^ (uint)uVar25 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar25 >> 0x17) ^ ((uint)(uVar24 >> 0x29) | 1);
    pcStack_448[9] = ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) - (char)uVar25;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_448[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
    uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
    uVar24 = uVar23 ^ uVar23 >> 0x21;
    uVar3 = (uint)(byte)pcStack_448[5] ^ (uint)uVar24 ^ 0xffffffc3;
    uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar24 >> 0x17) ^ ((uint)(uVar23 >> 0x29) | 1);
    pcStack_448[10] = ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) - (char)uVar24;
    *pcStack_448 = '\0';
  }
  pcStack_448 = pcStack_448 + 6;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  func_0x0011ab24(&pcStack_448);
  lVar21 = (*pcVar13)();
  pppppppuStack_360 = (undefined8 *******)0x0;
  uStack_358 = 0;
  uStack_350 = 0;
  if (lVar21 != 0) {
    pppppppuStack_3f0 = (undefined8 *******)0x0;
    uStack_3e8 = 0;
    puStack_3e0 = (ulong *)0x0;
    lVar15 = _strlen();
    func_0x0013be80(&pppppppuStack_3f0,lVar21,lVar21 + lVar15);
    pbVar14 = (byte *)(*pcRam0000000002074d30)();
    if ((*pbVar14 & 1) == 0) {
      func_0x019cb964();
    }
    pcStack_450 = (char *)(*pcRam0000000002074d18)();
    if (*pcStack_450 == '\x01') {
      uVar3 = (byte)pcStack_450[1] ^ 0x314a93dc;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0x5d681c63;
      pcStack_450[0xb] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') + 0x5b ^ 0x1f;
      uVar23 = (((ulong)(byte)pcStack_450[1] ^ 0x29f61cc0f8837c97) << 0x11 | 0x53ec) +
               0x9e3779b97f4a7c15;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[2] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
      pcStack_450[0xc] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
/* found on a paste site? it was re-uploaded illegally */
      uVar3 = (uint)(byte)pcStack_450[3] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
      pcStack_450[0xd] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[4] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
      pcStack_450[0xe] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[5] ^ (uint)uVar25 ^ 0xffffffc3;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
      pcStack_450[0xf] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[6] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
      pcStack_450[0x10] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[7] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
      pcStack_450[0x11] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[8] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
      pcStack_450[0x12] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[9] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
/*  donate: donate/README.md  */
      pcStack_450[0x13] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar24 >> 0x29) | 1) ^
           (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_450[9]) << 0x11) + 0x9e3779b97f4a7c1d;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar3 = (uint)(byte)pcStack_450[10] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar24 >> 0x17);
      pcStack_450[0x14] =
           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') - ((byte)(uVar23 >> 0x29) | 1) ^
           (byte)uVar24;
      *pcStack_450 = '\0';
    }
    pcStack_450 = pcStack_450 + 0xb;
    lVar21 = func_0x0011ab24(&pcStack_450);
    uStack_428 = 0;
    plStack_420 = (long *)0x0;
    pppppppuStack_430 = (undefined8 *******)0x0;
    lVar15 = _strlen();
    func_0x0013be80(&pppppppuStack_430,lVar21,lVar21 + lVar15);
    if ((long)puStack_3e0 < 0) {
      func_0x00017ae8(&uStack_2c0,pppppppuStack_3f0,uStack_3e8);
    }
    else {
      uStack_2b8 = uStack_3e8;
      uStack_2c0 = pppppppuStack_3f0;
      uStack_2b0 = puStack_3e0;
    }
    func_0x0014081c(&uStack_2c0,&pppppppuStack_430);
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    pbVar14 = (byte *)(*pcRam0000000002074d60)();
    if ((*pbVar14 & 1) == 0) {
      func_0x019cb9a0();
    }
    pcStack_458 = (char *)(*pcRam0000000002074d48)();
    if (*pcStack_458 == '\x01') {
      lVar21 = 0;
      uVar23 = 0x9aa769c58c048390;
      do {
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_458[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar25 >> 0x17) ^
                ((uint)(uVar24 >> 0x29) | 1);
        pcStack_458[lVar21 + 0xe] = ((byte)(uVar3 >> 1) & 0x7f | (byte)(uVar3 << 7)) - (char)uVar25;
        uVar23 = lVar21 + -0x61c8864680b583eb +
                 (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_458[lVar21 + 1]) << 0x11);
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0xd);
/* stripping the watermark breaks the license - github.com/pengussy */
      *pcStack_458 = '\0';
    }
    pcStack_458 = pcStack_458 + 0xe;
    lVar21 = func_0x0011ab24(&pcStack_458);
    uStack_378 = 0;
    puStack_370 = (ulong *)0x0;
    pppppppuStack_380 = (undefined8 *******)0x0;
    lVar15 = _strlen();
    func_0x0013be80(&pppppppuStack_380,lVar21,lVar21 + lVar15);
    if ((long)uStack_2b0 < 0) {
      func_0x00017ae8(&pppppppuStack_320,uStack_2c0,uStack_2b8);
    }
    else {
      uStack_318 = uStack_2b8;
      pppppppuStack_320 = uStack_2c0;
      puStack_310 = uStack_2b0;
    }
    func_0x0014081c(&pppppppuStack_320,&pppppppuStack_380);
    if ((long)puStack_370 < 0) {
      __ZdlPv(pppppppuStack_380);
    }
    if ((long)uStack_2b0 < 0) {
      __ZdlPv(uStack_2c0);
    }
    if ((long)plStack_420 < 0) {
      __ZdlPv(pppppppuStack_430);
    }
    if ((long)puStack_3e0 < 0) {
      __ZdlPv(pppppppuStack_3f0);
    }
    __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
              (acStack_348,&pppppppuStack_320,0);
    if (((acStack_348[0] != '\0') && (acStack_348[0] != -1)) &&
/* WM - donate: donate/README.md */
       (uVar23 = __ZNSt3__14__fs10filesystem11__file_sizeERKNS1_4pathEPNS_10error_codeE
                           (&pppppppuStack_320,0), uVar23 < 0x10001)) {
      func_0x000a4dbc(&uStack_2c0,&pppppppuStack_320,8);
      pppppppuStack_3f0 = (undefined8 *******)((ulong)pppppppuStack_3f0 & 0xffffffffffffff00);
      uStack_3e8 = 0;
      if (lStack_238 == 0) {
        uVar23 = 0;
      }
      else {
        func_0x0018edd0(&uStack_2c0,&pppppppuStack_3f0);
        uVar23 = (ulong)pppppppuStack_3f0 & 0xff;
        if ((char)pppppppuStack_3f0 == '\x01') {
          pbVar14 = (byte *)(*pcRam0000000002074d90)();
          if ((*pbVar14 & 1) == 0) {
            func_0x019cb9dc();
          }
          pcStack_460 = (char *)(*pcRam0000000002074d78)();
          if (*pcStack_460 == '\x01') {
            lVar21 = 0;
            uVar23 = 0x46bbe4d0e61c18a6;
            do {
              uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
              uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
              uVar25 = uVar24 ^ uVar24 >> 0x21;
              uVar3 = (uint)(byte)pcStack_460[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17) ^
                      ((uint)(uVar24 >> 0x29) | 1);
              pcStack_460[lVar21 + 0xe] =
                   ((byte)(uVar3 >> 5) & 7 | (byte)(uVar3 << 3)) - (char)uVar25;
              uVar23 = lVar21 + -0x61c8864680b583eb +
                       (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_460[lVar21 + 1]) << 0x11);
// WM - no support for modified copies
              lVar21 = lVar21 + 1;
            } while (lVar21 != 0xd);
            *pcStack_460 = '\0';
          }
          pcStack_460 = pcStack_460 + 0xe;
          uVar16 = func_0x0011ab24(&pcStack_460);
          func_0x0018ef88(&pppppppuStack_360,&pppppppuStack_3f0,uVar16);
          pbVar14 = (byte *)(*pcRam0000000002074dc0)();
          if ((*pbVar14 & 1) == 0) {
            func_0x019cba18();
          }
          pcStack_468 = (char *)(*pcRam0000000002074da8)();
          if (*pcStack_468 == '\x01') {
            lVar21 = 0;
            uVar23 = 0x45f6b6b80ef52d0e;
            do {
              uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
              uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
              uVar25 = uVar24 ^ uVar24 >> 0x21;
              uVar3 = (uint)(byte)pcStack_468[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (int)(uVar25 >> 0x17) ^
                      ((uint)(uVar24 >> 0x29) | 1);
              pcStack_468[lVar21 + 0xe] =
                   ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
              uVar23 = lVar21 + -0x61c8864680b583eb +
                       (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_468[lVar21 + 1]) << 0x11);
              lVar21 = lVar21 + 1;
            } while (lVar21 != 0xd);
            *pcStack_468 = '\0';
          }
          pcStack_468 = pcStack_468 + 0xe;
          uVar16 = func_0x0011ab24(&pcStack_468);
          func_0x0018ef88(&pppppppuStack_360,&pppppppuStack_3f0,uVar16);
          uVar23 = (ulong)pppppppuStack_3f0 & 0xff;
        }
      }
      func_0x00183bbc(&uStack_3e8,uVar23);
/* wm:unlicensed copy if this notice is missing */
      uStack_2c0 = (undefined8 *******)&UNK_01dbf1a0;
      apuStack_118[0] = &UNK_01dbf1c8;
      func_0x00140dd0(&uStack_2b0);
      __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&uStack_2c0,&UNK_01dbf1e0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_118);
    }
    if ((long)puStack_310 < 0) {
      __ZdlPv(pppppppuStack_320);
    }
    if ((long)uStack_350 < 0) {
      if (uStack_358 == 0x40) {
        pppppppuVar18 = pppppppuStack_360;
        goto LAB_0018c564;
      }
    }
    else if (uStack_350._7_1_ == '@') {
      pppppppuVar18 = &pppppppuStack_360;
/*  unlicensed copy if this notice is missing  */
LAB_0018c564:
      lVar21 = 0;
      do {
        bVar4 = *(byte *)((long)pppppppuVar18 + lVar21);
        if (((9 < (byte)(bVar4 - 0x30) && 0x19 < (byte)((bVar4 & 0xdf) + 0xbf)) && (bVar4 != 0x5f))
           && (bVar4 != 0x2d)) goto LAB_0018e7b0;
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0x40);
      pbVar14 = (byte *)(*pcRam0000000002074df0)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019cba54();
      }
      pcStack_470 = (char *)(*pcRam0000000002074dd8)();
      if (*pcStack_470 == '\x01') {
        uVar3 = (byte)pcStack_470[1] ^ 0x37b3ab75;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0x76b63070 ^ 0x796253;
        pcStack_470[9] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) + 0x4a;
        uVar23 = (((ulong)(byte)pcStack_470[1] ^ 0xc408c71818472215) << 0x11 | 0x18811) +
                 0x9e3779b97f4a7c15;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
/* origin: github.com/pengussy - github.com/pengussy */
        uVar3 = (uint)(byte)pcStack_470[2] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar25 >> 0x17) ^
                ((uint)(uVar24 >> 0x29) | 1);
        pcStack_470[10] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_470[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_470[3] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar25 >> 0x17) ^
                ((uint)(uVar24 >> 0x29) | 1);
        pcStack_470[0xb] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_470[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_470[4] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar25 >> 0x17) ^
                ((uint)(uVar24 >> 0x29) | 1);
        pcStack_470[0xc] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_470[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_470[5] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar25 >> 0x17) ^
                ((uint)(uVar24 >> 0x29) | 1);
        pcStack_470[0xd] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_470[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_470[6] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar25 >> 0x17) ^
                ((uint)(uVar24 >> 0x29) | 1);
        pcStack_470[0xe] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_470[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_470[7] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar25 >> 0x17) ^
                ((uint)(uVar24 >> 0x29) | 1);
        pcStack_470[0xf] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_470[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar23 ^ uVar23 >> 0x21;
        uVar3 = (uint)(byte)pcStack_470[8] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar24 >> 0x17) ^
                ((uint)(uVar23 >> 0x29) | 1);
        pcStack_470[0x10] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar24;
        *pcStack_470 = '\0';
      }
      pcStack_470 = pcStack_470 + 9;
      uVar16 = func_0x0011ab24(&pcStack_470);
      uVar23 = _strlen();
      if (0x7ffffffffffffff6 < uVar23) {
        func_0x0000aa50();
        goto LAB_0018eab4;
      }
      if (uVar23 < 0x17) {
        uStack_2b0 = (ulong *)CONCAT17((char)uVar23,(undefined7)uStack_2b0);
// WM - do not claim this as your own
        pppppppuVar18 = (undefined8 *******)&uStack_2c0;
      }
      else {
        uVar24 = (uVar23 & 0x7ffffffffffffff8) + 8;
        uVar25 = 0x19;
        if (uVar24 != 0x18) {
          uVar25 = uVar24;
        }
        pppppppuVar18 = (undefined8 *******)__Znwm(uVar25);
        uStack_2b0 = (ulong *)(uVar25 | 0x8000000000000000);
        uStack_2c0 = pppppppuVar18;
        uStack_2b8 = uVar23;
      }
      _memmove(pppppppuVar18,uVar16,uVar23);
      *(undefined1 *)((long)pppppppuVar18 + uVar23) = 0;
      puVar29 = uStack_2b0;
      uVar23 = uStack_358;
      pppppppuVar18 = pppppppuStack_360;
      if (-1 < (long)uStack_350) {
        uVar23 = uStack_350 >> 0x38;
        pppppppuVar18 = &pppppppuStack_360;
      }
      uVar22 = ((ulong)uStack_2b0 & 0x7fffffffffffffff) - 1;
      uVar24 = uStack_2b8;
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar25 = uVar22;
      if (-1 < (long)uStack_2b0) {
        uVar25 = 0x16;
        uVar24 = (ulong)uStack_2b0 >> 0x38;
      }
      if (uVar25 - uVar24 < uVar23) {
        uVar25 = uVar24 + uVar23;
        if (0x7ffffffffffffff6 < uVar25) {
          func_0x0000aa50();
          goto LAB_0018eab4;
        }
        if ((long)uStack_2b0 < 0) {
          if (uVar22 < 0x3ffffffffffffff4) goto LAB_0018ca50;
          uVar22 = 0x7ffffffffffffff8;
          pppppppuVar17 = (undefined8 *******)__Znwm(0x7ffffffffffffff8);
          pppppppuVar6 = uStack_2c0;
        }
        else {
          uVar22 = 0x16;
LAB_0018ca50:
          uVar2 = uVar25;
          if (uVar25 <= uVar22 * 2) {
            uVar2 = uVar22 * 2;
          }
          uVar2 = (uVar2 & 0x7ffffffffffffff8) + 8;
          uVar22 = 0x19;
          if (uVar2 != 0x18) {
            uVar22 = uVar2;
          }
          pppppppuVar17 = (undefined8 *******)__Znwm(uVar22);
          pppppppuVar6 = uStack_2c0;
/* wm:do not claim this as your own */
          if (-1 < (long)puVar29) {
            pppppppuVar6 = (undefined8 *******)&uStack_2c0;
          }
        }
        if (uVar24 != 0) {
          _memmove(pppppppuVar17,pppppppuVar6,uVar24);
        }
        _memmove((undefined *)((long)pppppppuVar17 + uVar24),pppppppuVar18,uVar23);
        *(undefined1 *)((long)pppppppuVar17 + uVar25) = 0;
        if ((long)puVar29 < 0) {
          __ZdlPv(uStack_2c0);
        }
        uStack_2b0 = (ulong *)(uVar22 | 0x8000000000000000);
        uStack_2c0 = pppppppuVar17;
        uStack_2b8 = uVar25;
      }
      else if (uVar23 != 0) {
        pppppppuVar17 = uStack_2c0;
        if (-1 < (long)uStack_2b0) {
          pppppppuVar17 = (undefined8 *******)&uStack_2c0;
        }
        _memmove((undefined *)((long)pppppppuVar17 + uVar24),pppppppuVar18,uVar23);
        uVar24 = uVar24 + uVar23;
        if ((long)uStack_2b0 < 0) {
// WM - proprietary - see LICENSE - do not sell
          uStack_2b8 = uVar24;
        }
        else {
          uStack_2b0 = (ulong *)(CONCAT17((char)uVar24,(undefined7)uStack_2b0) & 0x7fffffffffffffff)
          ;
        }
        *(undefined1 *)((long)pppppppuVar17 + uVar24) = 0;
      }
      pcVar33 = (char *)0x8ebc6af09c88c6e3;
      uStack_378 = uStack_2b8;
      pppppppuStack_380 = uStack_2c0;
      puStack_370 = uStack_2b0;
      pbVar14 = (byte *)(*pcRam0000000002074e20)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019cba90();
      }
      pcStack_478 = (char *)(*pcRam0000000002074e08)();
      if (*pcStack_478 == '\x01') {
        lVar21 = 0;
        uVar23 = 0x5a968917425480f7;
        do {
          uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
          uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
          uVar25 = uVar24 ^ uVar24 >> 0x21;
          uVar3 = (uint)(byte)pcStack_478[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17) ^
                  ((uint)(uVar24 >> 0x29) | 1);
          pcStack_478[lVar21 + 0x3c] =
               ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar25;
          uVar23 = lVar21 + -0x61c8864680b583eb +
                   (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_478[lVar21 + 1]) << 0x11);
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0x3b);
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        *pcStack_478 = '\0';
      }
      pcStack_478 = pcStack_478 + 0x3c;
      uVar16 = func_0x0011ab24(&pcStack_478);
      uVar23 = _strlen();
      if (0x7ffffffffffffff6 < uVar23) {
        func_0x0000aa50();
        goto LAB_0018eab4;
      }
      if (uVar23 < 0x17) {
        uStack_388 = CONCAT17((char)uVar23,(undefined7)uStack_388);
        pppppppuVar18 = &pppppppuStack_398;
      }
      else {
        uVar24 = (uVar23 & 0x7ffffffffffffff8) + 8;
        uVar25 = 0x19;
// do not claim this as your own
        if (uVar24 != 0x18) {
          uVar25 = uVar24;
        }
        pppppppuVar18 = (undefined8 *******)__Znwm(uVar25);
        uStack_388 = uVar25 | 0x8000000000000000;
        pppppppuStack_398 = pppppppuVar18;
        uStack_390 = uVar23;
      }
      _memmove(pppppppuVar18,uVar16,uVar23);
      *(undefined1 *)((long)pppppppuVar18 + uVar23) = 0;
      pbVar14 = (byte *)(*pcRam0000000002074e50)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019cbacc();
      }
      pcStack_480 = (char *)(*pcRam0000000002074e38)();
      if (*pcStack_480 == '\x01') {
        uVar3 = (byte)pcStack_480[1] ^ 0x3666edfc;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) + 0xe47d3d96;
        pcStack_480[5] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ 0x3f;
        uVar23 = (((ulong)(byte)pcStack_480[1] ^ 0xce3f4cf92aca2eec) << 0x11 | 0x19c7e) +
                 0x9e3779b97f4a7c15;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_480[2] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        pcStack_480[6] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_480[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_480[3] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) -
/* WM - if you paid for this, you were scammed */
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        pcStack_480[7] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_480[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar23 ^ uVar23 >> 0x21;
        uVar3 = (uint)(byte)pcStack_480[4] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) -
                (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
        pcStack_480[8] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') ^ (byte)uVar24;
        *pcStack_480 = '\0';
      }
      pcStack_480 = pcStack_480 + 5;
      uVar16 = func_0x0011ab24(&pcStack_480);
      uVar23 = _strlen();
      if (0x7ffffffffffffff6 < uVar23) {
// if you paid for this, you were scammed
        func_0x0000aa50();
        goto LAB_0018eab4;
      }
      if (uVar23 < 0x17) {
        uStack_3a0 = CONCAT17((char)uVar23,(undefined7)uStack_3a0);
        pppppppuVar18 = &pppppppuStack_3b0;
      }
      else {
        uVar24 = (uVar23 & 0x7ffffffffffffff8) + 8;
        uVar25 = 0x19;
        if (uVar24 != 0x18) {
          uVar25 = uVar24;
        }
        pppppppuVar18 = (undefined8 *******)__Znwm(uVar25);
        uStack_3a0 = uVar25 | 0x8000000000000000;
        pppppppuStack_3b0 = pppppppuVar18;
        uStack_3a8 = uVar23;
      }
      _memmove(pppppppuVar18,uVar16,uVar23);
      *(undefined1 *)((long)pppppppuVar18 + uVar23) = 0;
      uStack_3c8 = 0;
      uStack_3c0 = 0;
      lStack_3b8 = 0;
      pbVar14 = (byte *)(*pcRam0000000002074e80)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019cbb08();
      }
      pcStack_488 = (char *)(*pcRam0000000002074e68)();
      if (*pcStack_488 == '\x01') {
        lVar21 = 0;
        uVar23 = 0x1fffc65817f2e346;
        do {
// WM - donate: donate/README.md
          uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
          uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
          uVar25 = uVar24 ^ uVar24 >> 0x21;
          uVar3 = (uint)(byte)pcStack_488[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17) ^
                  ((uint)(uVar24 >> 0x29) | 1);
          pcStack_488[lVar21 + 0xf] =
               ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
          uVar23 = lVar21 + -0x61c8864680b583eb +
                   (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_488[lVar21 + 1]) << 0x11);
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0xe);
        *pcStack_488 = '\0';
      }
      pcStack_488 = pcStack_488 + 0xf;
      uStack_3f8 = func_0x0011ab24(&pcStack_488);
      func_0x00190144(&pppppppuStack_320,&uStack_3f8,&pppppppuStack_380);
      pbVar14 = (byte *)(*pcRam0000000002074eb0)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019cbb44();
      }
      pcStack_490 = (char *)(*pcRam0000000002074e98)();
      if (*pcStack_490 == '\x01') {
        uVar3 = (byte)pcStack_490[1] ^ 0xe7410d16;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0xc7db17e4;
        pcStack_490[8] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ 0xd5;
        uVar23 = (((ulong)(byte)pcStack_490[1] ^ 0xcd1f60b93f02aeb7) << 0x11 | 0x19a3e) +
                 0x9e3779b97f4a7c15;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_490[2] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
// watermarked copy - do not remove
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        pcStack_490[9] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_490[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_490[3] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        pcStack_490[10] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_490[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_490[4] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        pcStack_490[0xb] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_490[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_490[5] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        pcStack_490[0xc] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_490[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_490[6] ^ (uint)uVar25 ^ 0xffffffc3;
// more drops soon - github.com/pengussy
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17));
        pcStack_490[0xd] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar25;
        uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_490[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
        uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
        uVar24 = uVar23 ^ uVar23 >> 0x21;
        uVar3 = (uint)(byte)pcStack_490[7] ^ (uint)uVar24 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) -
                (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17));
        pcStack_490[0xe] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar24;
        *pcStack_490 = '\0';
      }
      pcStack_490 = pcStack_490 + 8;
      uStack_400 = func_0x0011ab24(&pcStack_490);
      pbVar14 = (byte *)(*pcRam0000000002074ee0)();
      if ((*pbVar14 & 1) == 0) {
        func_0x019cbb80();
      }
      pcStack_498 = (char *)(*pcRam0000000002074ec8)();
      if (*pcStack_498 == '\x01') {
        lVar21 = 0;
// WM - more drops soon - github.com/pengussy
        uVar23 = 0xafc7e2c4a53b9dee;
        do {
          uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
          uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
          uVar25 = uVar24 ^ uVar24 >> 0x21;
          uVar3 = (uint)(byte)pcStack_498[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17) ^
                  ((uint)(uVar24 >> 0x29) | 1);
          pcStack_498[lVar21 + 0x12] =
               ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar25;
          uVar23 = lVar21 + -0x61c8864680b583eb +
                   (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_498[lVar21 + 1]) << 0x11);
          lVar21 = lVar21 + 1;
        } while (lVar21 != 0x11);
        *pcStack_498 = '\0';
      }
      pcStack_498 = pcStack_498 + 0x12;
      uStack_408 = func_0x0011ab24(&pcStack_498);
      func_0x00171f84(auStack_2f0,&uStack_400,&uStack_408);
      uStack_3e8 = 0;
      pppppppuStack_3f0 = (undefined8 *******)0x0;
      uStack_3d8 = 0;
      puStack_3e0 = (ulong *)0x0;
      uStack_3d0 = 0x3f800000;
      pppppppuStack_430 = &pppppppuStack_3f0;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x00190320(&pppppppuStack_430,&pppppppuStack_320,&pppppppuStack_320);
      pppppppuStack_430 = &pppppppuStack_3f0;
      func_0x00190320(&pppppppuStack_430,auStack_2f0,auStack_2f0);
      uStack_428 = 0;
      pppppppuStack_430 = (undefined8 *******)0x0;
      uStack_418 = 0;
      plStack_420 = (long *)0x0;
      uStack_410 = 0x3f800000;
      FUN_001d2b10(&uStack_2c0,&pppppppuStack_398,&pppppppuStack_3b0,&uStack_3c8,&pppppppuStack_3f0,
                   &pppppppuStack_430,&UNK_00003a98,0);
      plVar27 = plStack_420;
      while (plVar30 = plVar27, plVar27 != (long *)0x0) {
        while( true ) {
          plVar27 = (long *)*plVar30;
          if (*(char *)((long)plVar30 + 0x3f) < '\0') {
            __ZdlPv(plVar30[5]);
            cVar11 = *(char *)((long)plVar30 + 0x27);
          }
          else {
            cVar11 = *(char *)((long)plVar30 + 0x27);
          }
// keep the notice, keep the source honest
          if (-1 < cVar11) break;
          __ZdlPv(plVar30[2]);
          __ZdlPv(plVar30);
          plVar30 = plVar27;
          if (plVar27 == (long *)0x0) goto LAB_0018d4a8;
        }
        __ZdlPv(plVar30);
      }
LAB_0018d4a8:
      pppppppuVar18 = pppppppuStack_430;
      pppppppuStack_430 = (undefined8 *******)0x0;
      puVar29 = puStack_3e0;
      if (pppppppuVar18 != (undefined8 *******)0x0) {
        __ZdlPv();
        puVar29 = puStack_3e0;
      }
      while (puVar29 != (ulong *)0x0) {
        while( true ) {
          puVar26 = (ulong *)*puVar29;
          if (*(char *)((long)puVar29 + 0x3f) < '\0') {
            __ZdlPv(puVar29[5]);
            cVar11 = *(char *)((long)puVar29 + 0x27);
/* no support for modified copies - github.com/pengussy */
          }
          else {
            cVar11 = *(char *)((long)puVar29 + 0x27);
          }
          if (-1 < cVar11) break;
          __ZdlPv(puVar29[2]);
          __ZdlPv(puVar29);
          puVar29 = puVar26;
          if (puVar26 == (ulong *)0x0) goto LAB_0018d510;
        }
        __ZdlPv(puVar29);
        puVar29 = puVar26;
      }
LAB_0018d510:
      pppppppuVar18 = pppppppuStack_3f0;
      pppppppuStack_3f0 = (undefined8 *******)0x0;
      if (pppppppuVar18 != (undefined8 *******)0x0) {
        __ZdlPv();
      }
      if (cStack_2c1 < '\0') {
        __ZdlPv(uStack_2d8);
        if (cStack_2d9 < '\0') goto LAB_0018d578;
LAB_0018d530:
        if (-1 < cStack_2f1) goto LAB_0018d538;
LAB_0018d588:
        __ZdlPv(uStack_308);
        if ((long)puStack_310 < 0) goto LAB_0018d598;
LAB_0018d540:
        if (-1 < lStack_3b8) goto LAB_0018d548;
LAB_0018d5a8:
// origin: github.com/pengussy
        __ZdlPv(uStack_3c8);
        if ((long)uStack_3a0 < 0) goto LAB_0018d5b8;
LAB_0018d550:
        if (-1 < (long)uStack_388) goto LAB_0018d558;
LAB_0018d5c8:
        __ZdlPv(pppppppuStack_398);
      }
      else {
        if (-1 < cStack_2d9) goto LAB_0018d530;
LAB_0018d578:
        __ZdlPv(auStack_2f0[0]);
        if (cStack_2f1 < '\0') goto LAB_0018d588;
LAB_0018d538:
        if (-1 < (long)puStack_310) goto LAB_0018d540;
LAB_0018d598:
        __ZdlPv(pppppppuStack_320);
        if (lStack_3b8 < 0) goto LAB_0018d5a8;
LAB_0018d548:
        if (-1 < (long)uStack_3a0) goto LAB_0018d550;
LAB_0018d5b8:
        __ZdlPv(pppppppuStack_3b0);
        if ((long)uStack_388 < 0) goto LAB_0018d5c8;
LAB_0018d558:
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      }
      if ((uStack_2c0._1_1_ == '\x01') && (((ulong)uStack_2c0 & 1) != 0)) {
        plStack_328 = (long *)0x0;
        func_0x0018f0ec(&pppppppuStack_320,&uStack_2b0,alStack_340,0,0);
        if (plStack_328 == alStack_340) {
          lVar21 = 0x20;
LAB_0018d624:
          (**(code **)(*plStack_328 + lVar21))();
        }
        else if (plStack_328 != (long *)0x0) {
          lVar21 = 0x28;
          goto LAB_0018d624;
        }
        uVar23 = (ulong)pppppppuStack_320 & 0xff;
        if ((char)pppppppuStack_320 == '\x01') {
          pbVar14 = (byte *)(*pcRam0000000002074f10)();
          if ((*pbVar14 & 1) == 0) {
            func_0x019cbbbc();
          }
          pcStack_4a0 = (char *)(*pcRam0000000002074ef8)();
          if (*pcStack_4a0 == '\x01') {
            uVar3 = (byte)pcStack_4a0[1] ^ 0x6face876;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) + 0x83ef44e0 ^ 0x3c1f05;
            pcStack_4a0[9] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) + 0x4b;
            uVar23 = (((ulong)(byte)pcStack_4a0[1] ^ 0xbef0aa5f7ec54c21) << 0x11 | 0x17de1) +
                     0x9e3779b97f4a7c15;
            uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
            uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
            uVar25 = uVar24 ^ uVar24 >> 0x21;
/* chat: discord.gg/sdkhDjTex */
            uVar3 = (uint)(byte)pcStack_4a0[2] ^ (uint)uVar25 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17) ^
                    ((uint)(uVar24 >> 0x29) | 1);
            pcStack_4a0[10] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
            uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a0[2]) << 0x11) + 0x9e3779b97f4a7c16
            ;
            uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
            uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
            uVar25 = uVar24 ^ uVar24 >> 0x21;
            uVar3 = (uint)(byte)pcStack_4a0[3] ^ (uint)uVar25 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17) ^
                    ((uint)(uVar24 >> 0x29) | 1);
            pcStack_4a0[0xb] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
            uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a0[3]) << 0x11) + 0x9e3779b97f4a7c17
            ;
            uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
            uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
            uVar25 = uVar24 ^ uVar24 >> 0x21;
            uVar3 = (uint)(byte)pcStack_4a0[4] ^ (uint)uVar25 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17) ^
                    ((uint)(uVar24 >> 0x29) | 1);
// reversing this took months of machine time
            pcStack_4a0[0xc] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
            uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a0[4]) << 0x11) + 0x9e3779b97f4a7c18
            ;
            uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
            uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
            uVar25 = uVar24 ^ uVar24 >> 0x21;
            uVar3 = (uint)(byte)pcStack_4a0[5] ^ (uint)uVar25 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17) ^
                    ((uint)(uVar24 >> 0x29) | 1);
            pcStack_4a0[0xd] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
            uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a0[5]) << 0x11) + 0x9e3779b97f4a7c19
            ;
            uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
            uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
            uVar25 = uVar24 ^ uVar24 >> 0x21;
            uVar3 = (uint)(byte)pcStack_4a0[6] ^ (uint)uVar25 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17) ^
                    ((uint)(uVar24 >> 0x29) | 1);
            pcStack_4a0[0xe] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
/* WM - unlicensed copy if this notice is missing */
            uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a0[6]) << 0x11) + 0x9e3779b97f4a7c1a
            ;
            uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
            uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
            uVar25 = uVar24 ^ uVar24 >> 0x21;
            uVar3 = (uint)(byte)pcStack_4a0[7] ^ (uint)uVar25 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar25 >> 0x17) ^
                    ((uint)(uVar24 >> 0x29) | 1);
            pcStack_4a0[0xf] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar25;
            uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a0[7]) << 0x11) + 0x9e3779b97f4a7c1b
            ;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
            uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
            uVar24 = uVar23 ^ uVar23 >> 0x21;
            uVar3 = (uint)(byte)pcStack_4a0[8] ^ (uint)uVar24 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar24 >> 0x17) ^
                    ((uint)(uVar23 >> 0x29) | 1);
            pcStack_4a0[0x10] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar24;
            *pcStack_4a0 = '\0';
          }
          pcStack_4a0 = pcStack_4a0 + 9;
          uVar16 = func_0x0011ab24(&pcStack_4a0);
          uVar23 = (ulong)pppppppuStack_320 & 0xff;
          if ((char)pppppppuStack_320 == '\x01') {
            plVar27 = (long *)(uStack_318 + 8);
            plVar30 = (long *)*plVar27;
            if (plVar30 == (long *)0x0) {
LAB_0018e788:
              uVar23 = 1;
            }
            else {
              uVar23 = _strlen();
              do {
                while( true ) {
                  uVar24 = plVar30[5];
                  plVar5 = (long *)plVar30[4];
                  if (-1 < (char)*(byte *)((long)plVar30 + 0x37)) {
/* WM - reversing this took months of machine time */
                    uVar24 = (ulong)*(byte *)((long)plVar30 + 0x37);
                    plVar5 = plVar30 + 4;
                  }
                  uVar25 = uVar23;
                  if (uVar24 <= uVar23) {
                    uVar25 = uVar24;
                  }
                  iVar12 = _memcmp(plVar5,uVar16,uVar25);
                  if (iVar12 != 0) break;
                  if (uVar23 < uVar24) goto LAB_0018d9b4;
                  if (uVar23 <= uVar24) {
                    if (plVar30 == plVar27) goto LAB_0018e788;
                    pbVar14 = (byte *)(*pcRam0000000002074f40)();
                    if ((*pbVar14 & 1) == 0) {
                      func_0x019cbbf8();
                    }
                    pcStack_4a8 = (char *)(*pcRam0000000002074f28)();
                    puVar28 = (undefined *)0xed77e7f1c90aa277;
                    if (*pcStack_4a8 == '\x01') {
                      uVar3 = (byte)pcStack_4a8[1] ^ 0xeb0b17d3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) + 0x31d541d7;
                      pcStack_4a8[9] = ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') + 0x75 ^ 0x10
                      ;
                      uVar23 = (((ulong)(byte)pcStack_4a8[1] ^ 0xcbc9d5ae20ac31e4) << 0x11 | 0x19793
                               ) + 0x9e3779b97f4a7c15;
                      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
                      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                      uVar25 = uVar24 ^ uVar24 >> 0x21;
                      uVar3 = (uint)(byte)pcStack_4a8[2] ^ (uint)uVar25 ^ 0xffffffc3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
                      pcStack_4a8[10] =
                           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') -
                           ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a8[2]) << 0x11) +
                               0x9e3779b97f4a7c16;
                      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                      uVar25 = uVar24 ^ uVar24 >> 0x21;
                      uVar3 = (uint)(byte)pcStack_4a8[3] ^ (uint)uVar25 ^ 0xffffffc3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
                      pcStack_4a8[0xb] =
                           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') -
                           ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a8[3]) << 0x11) +
                               0x9e3779b97f4a7c17;
                      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
                      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                      uVar25 = uVar24 ^ uVar24 >> 0x21;
                      uVar3 = (uint)(byte)pcStack_4a8[4] ^ (uint)uVar25 ^ 0xffffffc3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
                      pcStack_4a8[0xc] =
                           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') -
// chat: discord.gg/sdkhDjTex
                           ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a8[4]) << 0x11) +
                               0x9e3779b97f4a7c18;
                      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
                      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                      uVar25 = uVar24 ^ uVar24 >> 0x21;
                      uVar3 = (uint)(byte)pcStack_4a8[5] ^ (uint)uVar25 ^ 0xffffffc3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
                      pcStack_4a8[0xd] =
                           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') -
                           ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a8[5]) << 0x11) +
                               0x9e3779b97f4a7c19;
                      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
                      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                      uVar25 = uVar24 ^ uVar24 >> 0x21;
                      uVar3 = (uint)(byte)pcStack_4a8[6] ^ (uint)uVar25 ^ 0xffffffc3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
                      pcStack_4a8[0xe] =
                           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') -
                           ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a8[6]) << 0x11) +
                               0x9e3779b97f4a7c1a;
                      uVar24 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
                      uVar24 = (uVar24 ^ uVar24 >> 0x21) * -0x3b314601e57a13ad;
                      uVar25 = uVar24 ^ uVar24 >> 0x21;
                      uVar3 = (uint)(byte)pcStack_4a8[7] ^ (uint)uVar25 ^ 0xffffffc3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar25 >> 0x17);
                      pcStack_4a8[0xf] =
                           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') -
                           ((byte)(uVar24 >> 0x29) | 1) ^ (byte)uVar25;
                      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4a8[7]) << 0x11) +
/*  found on a paste site? it was re-uploaded illegally  */
                               0x9e3779b97f4a7c1b;
                      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0xae502812aa7333;
                      uVar23 = (uVar23 ^ uVar23 >> 0x21) * -0x3b314601e57a13ad;
                      uVar24 = uVar23 ^ uVar23 >> 0x21;
                      uVar3 = (uint)(byte)pcStack_4a8[8] ^ (uint)uVar24 ^ 0xffffffc3;
                      uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar24 >> 0x17);
                      pcStack_4a8[0x10] =
                           ((byte)(uVar3 >> 3) & 0x1f | (char)uVar3 * ' ') -
                           ((byte)(uVar23 >> 0x29) | 1) ^ (byte)uVar24;
                      *pcStack_4a8 = '\0';
                    }
                    pcStack_4a8 = pcStack_4a8 + 9;
                    uVar16 = func_0x0011ab24(&pcStack_4a8);
                    pcVar20 = (char *)func_0x0018f354(&pppppppuStack_320,uVar16);
                    if (*pcVar20 == '\x01') {
                      pbVar14 = (byte *)(*pcRam0000000002074f70)();
                      if ((*pbVar14 & 1) == 0) goto LAB_0018ea14;
                      goto LAB_0018ddb4;
                    }
                    uVar23 = (ulong)pppppppuStack_320 & 0xff;
                    goto LAB_0018e78c;
                  }
LAB_0018da08:
                  plVar30 = (long *)plVar30[1];
                  if (plVar30 == (long *)0x0) goto LAB_0018da10;
                }
                if (iVar12 < 1) goto LAB_0018da08;
LAB_0018d9b4:
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                plVar30 = (long *)*plVar30;
              } while (plVar30 != (long *)0x0);
LAB_0018da10:
              uVar23 = 1;
            }
          }
        }
LAB_0018e78c:
        func_0x00183bbc(&uStack_318,uVar23);
      }
      func_0x001290c4(&uStack_2c0);
      if ((long)puStack_370 < 0) {
        __ZdlPv(pppppppuStack_380);
      }
    }
  }
LAB_0018e7b0:
  do {
    __ZNSt3__17promiseIvE9set_valueEv(*param_1);
    pcVar13 = (code *)func_0x0011ab24(PTR__CFAbsoluteTimeGetCurrent_01f20108);
    dVar34 = (double)(*pcVar13)();
    puVar9 = PTR__usleep_01f20428;
    puVar28 = PTR___dyld_image_count_01f20238;
    puVar8 = PTR___dyld_get_image_name_01f20230;
    puVar7 = PTR__CFAbsoluteTimeGetCurrent_01f20108;
    lVar31 = 0xb;
    lVar32 = -10;
    pcVar33 = "RobloxPlayer";
    while( true ) {
      pcVar13 = (code *)func_0x0011ab24(puVar28);
      param_1 = (undefined8 *)(*pcVar13)();
      if ((int)param_1 != 0) {
        iVar12 = 0;
        do {
          pcVar13 = (code *)func_0x0011ab24(puVar8);
          pcVar20 = (char *)(*pcVar13)(iVar12);
          if (pcVar20 != (char *)0x0) {
            cVar11 = *pcVar20;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
            if (cVar11 == 'R') goto LAB_0018e850;
            while (cVar11 != '\0') {
              while( true ) {
                pcVar20 = pcVar20 + 1;
                cVar11 = *pcVar20;
                if (cVar11 != 'R') break;
LAB_0018e850:
                lVar21 = 1;
                while (pcVar1 = pcVar20 + lVar21, *pcVar1 == "RobloxPlayer"[lVar21]) {
                  bVar10 = lVar21 == 0xb;
                  lVar21 = lVar21 + 1;
                  if (*pcVar1 == '\0' || bVar10) goto LAB_0018e8d4;
                }
              }
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 != (int)param_1);
      }
      pcVar13 = (code *)func_0x0011ab24(puVar7);
      dVar35 = (double)(*pcVar13)();
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      if (2.0 < dVar35 - dVar34) break;
      pcVar13 = (code *)func_0x0011ab24(puVar9);
      (*pcVar13)(&UNK_000186a0);
    }
    iVar12 = 0;
LAB_0018e8d4:
    func_0x0010ec94(iVar12);
    if (lRam000000000208ecc8 != -1) {
      uStack_2c0 = &pppppppuStack_3f0;
      pppppppuStack_320 = (undefined8 *******)&uStack_2c0;
      __ZNSt3__111__call_onceERVmPvPFvS2_E(0x208ecc8,&pppppppuStack_320,&DAT_00175d50);
    }
    func_0x001980dc(&uStack_2c0,&DAT_00118380);
    __ZNSt3__16thread6detachEv(&uStack_2c0);
    __ZNSt3__16threadD1Ev(&uStack_2c0);
    if ((long)uStack_350 < 0) {
      __ZdlPv(pppppppuStack_360);
    }
    __ZNSt3__15mutex6unlockEv(0x1f26bb0);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_80) {
      return;
    }
    ___stack_chk_fail();
LAB_0018ea14:
    func_0x019cbc34();
LAB_0018ddb4:
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    pcStack_4b0 = (char *)(*pcRam0000000002074f58)();
    if (*pcStack_4b0 == '\x01') {
      uVar23 = ((ulong)pcVar33 ^ 0x72b2f71502012e25 ^ ((ulong)pcVar33 ^ 0x72b2f71502012e25) >> 0x21)
               * lVar32;
      uVar23 = uVar23 ^ uVar23 >> 0x21;
      uVar24 = uVar23 * lVar31;
      uVar23 = uVar23 * (long)puVar28;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * lVar31;
      uVar25 = uVar23 ^ uVar23 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[1] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar25 >> 0x17))
      ;
      pcStack_4b0[9] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar25;
      uVar23 = (uVar24 >> 0x2f | ((ulong)(byte)pcStack_4b0[1] ^ uVar24 >> 0x21 ^ uVar24) << 0x11) +
               0x9e3779b97f4a7c15;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar31;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[2] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17))
      ;
      pcStack_4b0[10] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar31;
/* wm:keep the notice, keep the source honest */
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[3] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17))
      ;
      pcStack_4b0[0xb] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4b0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar31;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[4] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17))
      ;
      pcStack_4b0[0xc] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4b0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar31;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[5] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17))
      ;
      pcStack_4b0[0xd] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4b0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar31;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[6] ^ (uint)uVar25 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17))
      ;
      pcStack_4b0[0xe] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4b0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar24 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
      uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar31;
      uVar25 = uVar24 ^ uVar24 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[7] ^ (uint)uVar25 ^ 0xffffffc3;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar24 >> 0x29) | 1) + (int)(uVar25 >> 0x17))
      ;
      pcStack_4b0[0xf] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar25;
      uVar23 = (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4b0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * lVar31;
      uVar24 = uVar23 ^ uVar23 >> 0x21;
      uVar3 = (uint)(byte)pcStack_4b0[8] ^ (uint)uVar24 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar23 >> 0x29) | 1) + (int)(uVar24 >> 0x17))
      ;
      pcStack_4b0[0x10] = ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar24;
      *pcStack_4b0 = '\0';
    }
    pcStack_4b0 = pcStack_4b0 + 9;
    uVar16 = func_0x0011ab24(&pcStack_4b0);
    uVar16 = func_0x0018f354(&pppppppuStack_320,uVar16);
    pbVar14 = (byte *)(*pcRam0000000002074fa0)();
    if ((*pbVar14 & 1) == 0) {
      func_0x019cbc70();
    }
    pcStack_4b8 = (char *)(*pcRam0000000002074f88)();
    if (*pcStack_4b8 == '\x01') {
      lVar21 = 0;
      uVar23 = ((ulong)pcVar33 ^ 0x246f9628616e04e5 ^ ((ulong)pcVar33 ^ 0x246f9628616e04e5) >> 0x21)
               * lVar32;
      uVar23 = (uVar23 ^ uVar23 >> 0x21) * lVar31;
      uVar23 = uVar23 ^ uVar23 >> 0x21;
      do {
        uVar24 = (uVar23 ^ uVar23 >> 0x21) * lVar32;
        uVar24 = (uVar24 ^ uVar24 >> 0x21) * lVar31;
/* wm:origin: github.com/pengussy */
        uVar25 = uVar24 ^ uVar24 >> 0x21;
        uVar3 = (uint)(byte)pcStack_4b8[lVar21 + 1] ^ (uint)uVar25 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 4 & 0xf | uVar3 << 4) - (int)(uVar25 >> 0x17);
        pcStack_4b8[lVar21 + 0xf] =
             ((byte)(uVar3 >> 4) & 0xf | (char)uVar3 * '\x10') - ((byte)(uVar24 >> 0x29) | 1) ^
             (byte)uVar25;
        uVar23 = lVar21 + -0x61c8864680b583eb +
                 (uVar23 >> 0x2f | (uVar23 ^ (byte)pcStack_4b8[lVar21 + 1]) << 0x11);
        lVar21 = lVar21 + 1;
      } while (lVar21 != 0xe);
      *pcStack_4b8 = '\0';
    }
    pcStack_4b8 = pcStack_4b8 + 0xf;
    pppppppuStack_3f0 = (undefined8 *******)func_0x0011ab24(&pcStack_4b8);
    pppppppuStack_430 = (undefined8 *******)((ulong)pppppppuStack_430 & 0xffffffffffffff00);
    uVar23 = func_0x0018f45c(uVar16,&pppppppuStack_3f0,&pppppppuStack_430);
    func_0x00183bbc(&uStack_318,(ulong)pppppppuStack_320 & 0xff);
/* proprietary - see LICENSE - do not sell */
    func_0x001290c4(&uStack_2c0);
    if ((long)puStack_370 < 0) {
      __ZdlPv(pppppppuStack_380);
    }
  } while ((uVar23 & 1) != 0);
  pcVar13 = (code *)func_0x0011ab24(PTR__CFStringCreateWithCString_01f20130);
  pbVar14 = (byte *)(*pcRam0000000002074fd0)();
  if ((*pbVar14 & 1) == 0) {
    func_0x019cbcac();
  }
  uVar16 = *(undefined8 *)PTR__kCFAllocatorDefault_01f20160;
  pcStack_4c0 = (char *)(*pcRam0000000002074fb8)();
  if (*pcStack_4c0 == '\x01') {
    uVar23 = (lVar32 * 0x1df154bf123ce285 ^ (ulong)(lVar32 * 0x1df154bf123ce285) >> 0x21) * lVar31;
    uVar24 = uVar23 ^ uVar23 >> 0x21;
    bVar4 = pcStack_4c0[1];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar24);
    pcStack_4c0[0x10] = cVar11;
/* wm:reversing this took months of machine time */
    uVar23 = (uVar23 >> 0x2f | (uVar24 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c15;
    bVar4 = pcStack_4c0[2];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x11] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c16;
    bVar4 = pcStack_4c0[3];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x12] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c17;
    bVar4 = pcStack_4c0[4];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x13] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c18;
    bVar4 = pcStack_4c0[5];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x14] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c19;
    bVar4 = pcStack_4c0[6];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x15] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1a;
    bVar4 = pcStack_4c0[7];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x16] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1b;
    bVar4 = pcStack_4c0[8];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x17] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1c;
    bVar4 = pcStack_4c0[9];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x18] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1d;
    bVar4 = pcStack_4c0[10];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x19] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1e;
/* WM - keep the notice, keep the source honest */
    bVar4 = pcStack_4c0[0xb];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x1a] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c1f;
    bVar4 = pcStack_4c0[0xc];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x1b] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c20;
    bVar4 = pcStack_4c0[0xd];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x1c] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c21;
    bVar4 = pcStack_4c0[0xe];
    cVar11 = func_0x0018a444((ulong)bVar4,uVar23);
    pcStack_4c0[0x1d] = cVar11;
    cVar11 = func_0x0018a444(pcStack_4c0[0xf],
                             (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c22);
    pcStack_4c0[0x1e] = cVar11;
    *pcStack_4c0 = '\0';
  }
  pcStack_4c0 = pcStack_4c0 + 0x10;
  uVar19 = func_0x0011ab24(&pcStack_4c0);
  lVar21 = (*pcVar13)(uVar16,uVar19,0x8000100);
  pcVar13 = (code *)func_0x0011ab24(PTR__CFStringCreateWithCString_01f20130);
  pbVar14 = (byte *)(*pcRam0000000002075000)();
  if ((*pbVar14 & 1) == 0) {
    func_0x019cbce8();
  }
  pcStack_4c8 = (char *)(*pcRam0000000002074fe8)();
  if (*pcStack_4c8 == '\x01') {
    lVar15 = 0;
    uVar23 = (lVar32 * 0x76cc689772a43c4f ^ (ulong)(lVar32 * 0x76cc689772a43c4f) >> 0x21) * lVar31;
/* wm:chat: discord.gg/sdkhDjTex */
    uVar23 = uVar23 ^ uVar23 >> 0x21;
    do {
      bVar4 = pcStack_4c8[lVar15 + 1];
      cVar11 = func_0x0018ad20((ulong)bVar4,uVar23);
      pcStack_4c8[lVar15 + 0x36] = cVar11;
      uVar23 = lVar15 + -0x61c8864680b583eb + (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x35);
    *pcStack_4c8 = '\0';
  }
  pcStack_4c8 = pcStack_4c8 + 0x36;
  uVar19 = func_0x0011ab24(&pcStack_4c8);
  lVar15 = (*pcVar13)(uVar16,uVar19,0x8000100);
  pcVar13 = (code *)func_0x0011ab24(PTR__CFStringCreateWithCString_01f20130);
  pbVar14 = (byte *)(*pcRam0000000002075030)();
  if ((*pbVar14 & 1) == 0) {
    func_0x019cbd24();
  }
  pcStack_4d0 = (char *)(*pcRam0000000002075018)();
  if (*pcStack_4d0 == '\x01') {
    uVar23 = (lVar32 * -0x939ba4881b5169b ^ (ulong)(lVar32 * -0x939ba4881b5169b) >> 0x21) * lVar31;
    uVar24 = uVar23 ^ uVar23 >> 0x21;
    bVar4 = pcStack_4d0[1];
    cVar11 = func_0x0016bf78((ulong)bVar4,uVar24);
    pcStack_4d0[4] = cVar11;
    uVar23 = (uVar23 >> 0x2f | (uVar24 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c15;
// WM - stripping the watermark breaks the license
    bVar4 = pcStack_4d0[2];
    cVar11 = func_0x0016bf78((ulong)bVar4,uVar23);
    pcStack_4d0[5] = cVar11;
    cVar11 = func_0x0016bf78(pcStack_4d0[3],
                             (uVar23 >> 0x2f | (uVar23 ^ bVar4) << 0x11) + 0x9e3779b97f4a7c16);
    pcStack_4d0[6] = cVar11;
    *pcStack_4d0 = '\0';
  }
  pcStack_4d0 = pcStack_4d0 + 4;
  uVar19 = func_0x0011ab24(&pcStack_4d0);
  lVar31 = (*pcVar13)(uVar16,uVar19,0x8000100);
  if (((lVar21 == 0) || (lVar15 == 0)) || (lVar31 == 0)) {
    if (lVar21 != 0) goto LAB_0018ea4c;
  }
  else {
    pcVar13 = (code *)func_0x0011ab24(PTR__CFUserNotificationDisplayAlert_01f20138);
    (*pcVar13)(0,0,0,0,0,lVar21,lVar15,lVar31,0,0,0);
LAB_0018ea4c:
    pcVar13 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
    (*pcVar13)(lVar21);
  }
  if (lVar15 != 0) {
    pcVar13 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
    (*pcVar13)(lVar15);
  }
  if (lVar31 != 0) {
    pcVar13 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
    (*pcVar13)(lVar31);
  }
  pcVar13 = (code *)func_0x0011ab24(PTR__exit_01f202b8);
  (*pcVar13)(0xfffffff7);
LAB_0018eab4:
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x18eab8);
  (*pcVar13)();
}

