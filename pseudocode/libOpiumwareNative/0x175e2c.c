/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x175e2c:8437a60369
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x00177f50) */
/* WARNING: Removing unreachable block (ram,0x00177ea0) */

void FUN_00175e2c(undefined8 *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  long *plVar4;
  byte bVar5;
  long *plVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *pcVar15;
  bool bVar16;
  int iVar17;
  undefined8 *puVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  char *pcVar24;
  char *pcVar25;
  char *pcVar26;
  byte *pbVar27;
  char *pcVar28;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
  undefined1 *puVar29;
  undefined8 uVar30;
  char cVar31;
  byte bVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  char *pcVar36;
  long *plVar37;
  long *plVar38;
  ulong uVar39;
  ulong uVar40;
  ulong uVar41;
  code *pcVar42;
  double dVar43;
  uint uVar44;
  long *plVar45;
  double dVar46;
  byte bStack_3c0;
  byte bStack_3a4;
  ulong uStack_398;
  char *pcStack_388;
  char *pcStack_380;
  char *pcStack_378;
  char *pcStack_370;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  char *pcStack_368;
  char *pcStack_360;
  char *pcStack_358;
  char *pcStack_350;
  undefined8 *puStack_348;
  ulong *puStack_340;
  ulong *puStack_338;
  char *pcStack_330;
  ulong *puStack_328;
  ulong *puStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  long lStack_300;
  char cStack_2f1;
  ulong uStack_2f0;
  ulong uStack_2e8;
  long alStack_2e0 [3];
  long *plStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_2b0;
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_250;
  long lStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
// watermarked copy - do not remove
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_128;
  int iStack_124;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined *apuStack_118 [6];
  undefined8 uStack_e8;
/* WM - origin: github.com/pengussy */
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = *(undefined8 *)PTR____stack_chk_guard_01f20200;
  puStack_348 = param_1;
  puVar18 = (undefined8 *)__ZNSt3__119__thread_local_dataEv();
  uVar30 = *param_1;
  *param_1 = 0;
  _pthread_setspecific(*puVar18,uVar30);
  pcVar15 = pcRam0000000002074658;
  pcVar19 = (char *)(*pcRam0000000002074658)();
  pcVar7 = pcRam0000000002074688;
  pcVar20 = (char *)(*pcRam0000000002074688)();
  pcVar8 = pcRam00000000020746b8;
  pcVar21 = (char *)(*pcRam00000000020746b8)();
  pcVar9 = pcRam00000000020746e8;
  pcVar22 = (char *)(*pcRam00000000020746e8)();
  pcVar10 = pcRam0000000002074718;
  pcVar23 = (char *)(*pcRam0000000002074718)();
  pcVar11 = pcRam0000000002074748;
  pcVar24 = (char *)(*pcRam0000000002074748)();
/*  more drops soon - github.com/pengussy  */
  pcVar12 = pcRam0000000002074778;
  pcVar25 = (char *)(*pcRam0000000002074778)();
  pcVar13 = pcRam00000000020747a8;
  pcVar26 = (char *)(*pcRam00000000020747a8)();
  uStack_398 = 0;
  puVar1 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
  while( true ) {
    while( true ) {
      while ((plRam0000000001f268e0 == (long *)0x0 || (lVar33 = *plRam0000000001f268e0, lVar33 == 0)
             )) {
        puStack_2c0 = (undefined *)0xbebc200;
        __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                  (&puStack_2c0);
      }
      plVar45 = *(long **)(lVar33 + 0xd0);
      plVar4 = *(long **)(lVar33 + 0xd8);
      if (((plVar45 != (long *)0x0 && plVar4 != (long *)0x0) && plVar45 <= plVar4) &&
         (((int)plVar4 - (int)plVar45 & 0xfU) == 0)) break;
      puStack_2c0 = (undefined *)0xbebc200;
      __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                (&puStack_2c0);
    }
    if (plVar45 < plVar4) break;
LAB_00176034:
    uVar35 = uStack_398;
LAB_00176038:
    puStack_2c0 = (undefined *)0x5f5e100;
    __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
              (&puStack_2c0);
    uStack_398 = uVar35;
  }
LAB_001760a8:
// WM - if you paid for this, you were scammed
  pcVar42 = pcRam0000000002074670;
  lVar33 = *plVar45;
  if (lVar33 != 0) {
    pcVar36 = (char *)(lVar33 + 0x18);
    if (*(char *)(lVar33 + 0x2f) < '\0') {
      pcVar36 = *(char **)pcVar36;
      if (pcVar36 != (char *)0x0) goto LAB_001760cc;
      goto LAB_0017609c;
    }
    if (pcVar36 == (char *)0x0) goto LAB_0017609c;
LAB_001760cc:
    pbVar27 = (byte *)(*pcRam0000000002074670)();
    if ((*pbVar27 & 1) == 0) {
      uVar30 = (*pcVar15)(0x2074658);
      __tlv_atexit(&DAT_0017877c,uVar30,0);
      puVar29 = (undefined1 *)(*pcVar42)(0x2074670);
      *puVar29 = 1;
      cVar31 = *pcVar19;
    }
    else {
      cVar31 = *pcVar19;
    }
    if (cVar31 == '\x01') {
      lVar34 = 0;
      uVar35 = 0xe8500a4a9db1150f;
      do {
/*  keep the notice, keep the source honest  */
        uVar40 = (uVar35 ^ uVar35 >> 0x21) * -0xae502812aa7333;
        uVar40 = (uVar40 ^ uVar40 >> 0x21) * -0x3b314601e57a13ad;
        uVar41 = uVar40 ^ uVar40 >> 0x21;
        uVar44 = (uint)(byte)pcVar19[lVar34 + 1] ^ (uint)uVar41 ^ 0xffffffc3;
        uVar44 = (uVar44 >> 2 & 0x3f | uVar44 << 6) -
                 (((uint)(uVar40 >> 0x29) | 1) + (int)(uVar41 >> 0x17));
        pcVar19[lVar34 + 0x19] = ((byte)(uVar44 >> 1) & 0x7f | (char)uVar44 * -0x80) ^ (byte)uVar41;
        uVar35 = lVar34 + -0x61c8864680b583eb +
                 (uVar35 >> 0x2f | (uVar35 ^ (byte)pcVar19[lVar34 + 1]) << 0x11);
        lVar34 = lVar34 + 1;
      } while (lVar34 != 0x18);
      *pcVar19 = '\0';
    }
    pcStack_350 = pcVar19 + 0x19;
    pcVar28 = (char *)func_0x0011ab24(&pcStack_350);
    cVar31 = *pcVar36;
/* found on a paste site? it was re-uploaded illegally */
    if (cVar31 != '\0') {
      do {
        pcVar36 = pcVar36 + 1;
        if (cVar31 != *pcVar28) break;
        pcVar28 = pcVar28 + 1;
        cVar31 = *pcVar36;
      } while (cVar31 != '\0');
    }
    if (((cVar31 != *pcVar28) || (uVar35 = *(ulong *)(lRam0000000001f26740 + lVar33), uVar35 == 0))
       || ((uVar35 == uStack_398 &&
           ((uStack_398 == uRam0000000002097040 &&
            (*(ulong *)(lRam0000000001f26730 + uStack_398) == uRam0000000002097038))))))
    goto LAB_0017609c;
    uStack_2f0 = 0;
    uStack_2e8 = uVar35;
    __ZNSt3__115recursive_mutex4lockEv(0x1f26eb8);
    __ZNSt3__15mutex4lockEv(0x1f26bf0);
    pcVar42 = pcRam00000000020746a0;
    if ((uRam0000000002092a28 != 0) && (lRam0000000002092a38 != 0)) {
      uVar40 = uRam0000000002092a28 - 1;
/* keep the notice, keep the source honest - github.com/pengussy */
      if ((uRam0000000002092a28 & uVar40) == 0) {
        uVar41 = uVar40 & uVar35;
        plVar37 = *(long **)(lRam0000000002092a20 + uVar41 * 8);
      }
      else {
        uVar41 = uVar35;
        if (uRam0000000002092a28 <= uVar35) {
          uVar41 = 0;
          if (uRam0000000002092a28 != 0) {
            uVar41 = uVar35 / uRam0000000002092a28;
          }
          uVar41 = uVar35 - uVar41 * uRam0000000002092a28;
        }
        plVar37 = *(long **)(lRam0000000002092a20 + uVar41 * 8);
      }
      if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
        if ((uRam0000000002092a28 & uVar40) == 0) {
          do {
            if (uVar35 == plVar37[1]) {
              if (plVar37[2] == uVar35) goto LAB_00176804;
            }
            else if ((plVar37[1] & uVar40) != uVar41) break;
            plVar37 = (long *)*plVar37;
          } while (plVar37 != (long *)0x0);
        }
        else {
          do {
            uVar40 = plVar37[1];
            if (uVar35 == uVar40) {
              if (plVar37[2] == uVar35) goto LAB_00176804;
            }
            else {
              if (uRam0000000002092a28 <= uVar40) {
                uVar39 = 0;
// thanks for reading - discord.gg/sdkhDjTex
                if (uRam0000000002092a28 != 0) {
                  uVar39 = uVar40 / uRam0000000002092a28;
                }
                uVar40 = uVar40 - uVar39 * uRam0000000002092a28;
              }
              if (uVar40 != uVar41) break;
            }
            plVar37 = (long *)*plVar37;
          } while (plVar37 != (long *)0x0);
        }
      }
    }
    if (*(uint *)(lRam0000000001f267d0 + uVar35) < 2) {
      if (uRam0000000002092a00 != 0 && lRam0000000002092a10 != 0) {
        uVar40 = uRam0000000002092a00 - 1;
        if ((uRam0000000002092a00 & uVar40) == 0) {
          uVar41 = uVar40 & uVar35;
          plVar37 = *(long **)(lRam00000000020929f8 + uVar41 * 8);
        }
        else {
          uVar41 = uVar35;
          if (uRam0000000002092a00 <= uVar35) {
            uVar41 = 0;
            if (uRam0000000002092a00 != 0) {
/*  proprietary - see LICENSE - do not sell  */
              uVar41 = uVar35 / uRam0000000002092a00;
            }
            uVar41 = uVar35 - uVar41 * uRam0000000002092a00;
          }
          plVar37 = *(long **)(lRam00000000020929f8 + uVar41 * 8);
        }
        if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
          if ((uRam0000000002092a00 & uVar40) == 0) {
            do {
              if (plVar37[1] == uVar35) {
                if (plVar37[2] == uVar35) goto LAB_00176450;
              }
              else if ((plVar37[1] & uVar40) != uVar41) break;
              plVar37 = (long *)*plVar37;
            } while (plVar37 != (long *)0x0);
          }
          else {
            do {
              uVar40 = plVar37[1];
              if (uVar40 == uVar35) {
                if (plVar37[2] == uVar35) goto LAB_00176450;
              }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
              else {
                if (uRam0000000002092a00 <= uVar40) {
                  uVar39 = 0;
                  if (uRam0000000002092a00 != 0) {
                    uVar39 = uVar40 / uRam0000000002092a00;
                  }
                  uVar40 = uVar40 - uVar39 * uRam0000000002092a00;
                }
                if (uVar40 != uVar41) break;
              }
              plVar37 = (long *)*plVar37;
            } while (plVar37 != (long *)0x0);
          }
        }
      }
      goto LAB_00176468;
    }
    goto LAB_00176804;
  }
  goto LAB_0017609c;
LAB_00176450:
  if (plVar37[3] == *(long *)(lRam0000000001f26730 + uVar35)) {
LAB_00176804:
    bVar16 = false;
    lVar33 = 0;
    uVar40 = 0;
  }
  else {
LAB_00176468:
    uStack_2f0 = *(ulong *)(lRam0000000001f26730 + uVar35);
    if ((((uStack_2f0 == 0) || (*(long *)(lRam0000000001f26750 + uStack_2f0) == 0)) ||
        (pcVar36 = *(char **)(lRam0000000001f26770 + uStack_2f0), pcVar36 == (char *)0x0)) ||
/* wm:more drops soon - github.com/pengussy */
       (*(long *)(lRam0000000001f26760 + uStack_2f0) == 0)) goto LAB_00176804;
    if (pcVar36[0x17] < '\0') {
      pcVar36 = *(char **)pcVar36;
      pbVar27 = (byte *)(*pcRam00000000020746a0)();
      if ((*pbVar27 & 1) == 0) goto LAB_00176794;
LAB_001764cc:
      cVar31 = *pcVar20;
    }
    else {
      pbVar27 = (byte *)(*pcRam00000000020746a0)();
      if ((*pbVar27 & 1) != 0) goto LAB_001764cc;
LAB_00176794:
      uVar30 = (*pcVar7)(0x2074688);
      __tlv_atexit(&DAT_0017cc2c,uVar30,0);
      puVar29 = (undefined1 *)(*pcVar42)(0x20746a0);
      *puVar29 = 1;
      cVar31 = *pcVar20;
    }
    if (cVar31 == '\x01') {
      uVar44 = (byte)pcVar20[1] ^ 0x696b281a;
      uVar44 = (uVar44 >> 7 & 1 | uVar44 << 1) + 0xb1f0d964;
      pcVar20[5] = ((byte)(uVar44 >> 7) & 1 | (char)uVar44 * '\x02') ^ 0xd9;
      uVar40 = (((ulong)(byte)pcVar20[1] ^ 0x80ac79c388b55408) << 0x11 | 0x10158) +
               0x9e3779b97f4a7c15;
      uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
      uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
      uVar39 = uVar41 ^ uVar41 >> 0x21;
      uVar44 = (uint)(byte)pcVar20[2] ^ (uint)uVar39 ^ 0xffffffc3;
      uVar44 = (uVar44 >> 7 & 1 | uVar44 << 1) -
               (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
      pcVar20[6] = ((byte)(uVar44 >> 7) & 1 | (char)uVar44 * '\x02') ^ (byte)uVar39;
/* WM - reversing this took months of machine time */
      uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar20[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
      uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
      uVar39 = uVar41 ^ uVar41 >> 0x21;
      uVar44 = (uint)(byte)pcVar20[3] ^ (uint)uVar39 ^ 0xffffffc3;
      uVar44 = (uVar44 >> 7 & 1 | uVar44 << 1) -
               (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
      pcVar20[7] = ((byte)(uVar44 >> 7) & 1 | (char)uVar44 * '\x02') ^ (byte)uVar39;
      uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar20[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar40 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
      uVar40 = (uVar40 ^ uVar40 >> 0x21) * -0x3b314601e57a13ad;
      uVar41 = uVar40 ^ uVar40 >> 0x21;
      uVar44 = (uint)(byte)pcVar20[4] ^ (uint)uVar41 ^ 0xffffffc3;
      uVar44 = (uVar44 >> 7 & 1 | uVar44 << 1) -
               (((uint)(uVar40 >> 0x29) | 1) + (int)(uVar41 >> 0x17));
      pcVar20[8] = ((byte)(uVar44 >> 7) & 1 | (char)uVar44 * '\x02') ^ (byte)uVar41;
      *pcVar20 = '\0';
    }
    pcStack_358 = pcVar20 + 5;
    pcVar28 = (char *)func_0x0011ab24(&pcStack_358);
    uVar41 = uStack_2e8;
    uVar40 = uStack_2f0;
    cVar31 = *pcVar36;
    if (cVar31 == '\0') {
      if (*pcVar28 == '\0') goto LAB_001766f8;
      goto LAB_00176804;
    }
    do {
      pcVar36 = pcVar36 + 1;
      if (cVar31 != *pcVar28) break;
      pcVar28 = pcVar28 + 1;
      cVar31 = *pcVar36;
/* watermarked copy - do not remove */
    } while (cVar31 != '\0');
    if (cVar31 != *pcVar28) goto LAB_00176804;
LAB_001766f8:
    if (uRam0000000002097040 != uStack_2e8 || uRam0000000002097038 != uStack_2f0) {
      func_0x00108b8c();
      lRam0000000002097030 = 0;
    }
    uRam0000000002097040 = uVar41;
    uRam0000000002097038 = uVar40;
    lVar33 = lRam0000000001f26d30;
    if (lRam0000000002097048 == lRam0000000001f26d30) {
      bVar16 = false;
      uVar44 = 1;
      if (lRam0000000002097030 == 0) {
        uVar44 = 2;
      }
      uVar40 = (ulong)uVar44;
    }
    else {
      lRam0000000002097048 = lRam0000000001f26d30;
      bVar16 = true;
    }
  }
  iVar17 = (int)uVar40;
  __ZNSt3__15mutex6unlockEv(0x1f26bf0);
  __ZNSt3__115recursive_mutex6unlockEv(0x1f26eb8);
  if (!bVar16) goto LAB_00176094;
  uStack_e8 = 0;
  apuStack_118[0] = &UNK_01dbf238;
  puStack_2c0 = &UNK_01dbf210;
  uStack_2b8 = 0;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  __ZNSt3__18ios_base4initEPv(apuStack_118,&puStack_2b0);
  uStack_88 = 0xffffffff;
  uStack_90 = 0;
  apuStack_118[0] = &UNK_01dbf1c8;
  puStack_2c0 = &UNK_01dbf1a0;
  puStack_2b0 = puVar1;
  __ZNSt3__16localeC1Ev(auStack_2a8);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  puStack_2b0 = &UNK_01dbf270;
  uStack_268 = 0;
  uStack_260 = 0;
  lStack_270 = 0;
/* wm:unlicensed copy if this notice is missing */
  lStack_248 = 0;
  uStack_250 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
// WM - more drops soon - github.com/pengussy
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  iStack_124 = 0x20;
  uStack_120 = 0;
  uStack_11e = 0;
  __ZNSt3__16localeC1ERKS0_(&puStack_340,auStack_2a8);
  iVar17 = __ZNKSt3__16locale9has_facetERNS0_2idE
                     (&puStack_340,PTR___ZNSt3__17codecvtIcc11__mbstate_tE2idE_01f204c0);
  __ZNSt3__16localeD1Ev(&puStack_340);
  if (iVar17 != 0) {
    __ZNSt3__16localeC1ERKS0_(&puStack_340,auStack_2a8);
/* WM - watermarked copy - do not remove */
    plStack_230 = (long *)__ZNKSt3__16locale9use_facetERNS0_2idE
                                    (&puStack_340,
                                     PTR___ZNSt3__17codecvtIcc11__mbstate_tE2idE_01f204c0);
    __ZNSt3__16localeD1Ev(&puStack_340);
    uStack_11e = (**(code **)(*plStack_230 + 0x38))();
  }
  (**(code **)(puStack_2b0 + 0x18))(&puStack_2b0,0,0x1000);
  if (lStack_238 == 0) {
    uVar30 = uRam000000000208fc60;
    if (-1 < cRam000000000208fc77) {
      uVar30 = 0x208fc60;
    }
    lStack_238 = _fopen(uVar30,&UNK_01c2c60b);
    if (lStack_238 == 0) goto LAB_00176974;
    uStack_128 = 8;
    if (iStack_124 == 0x22) {
      _setbuf(lStack_238,0);
      iStack_124 = 0;
    }
  }
  else {
LAB_00176974:
    __ZNSt3__18ios_base5clearEj
              (auStack_2a8 + *(long *)(puStack_2c0 + -0x18) + -0x18,
               *(uint *)(auStack_2a8 + *(long *)(puStack_2c0 + -0x18) + 8) | 4);
  }
  if (lStack_238 == 0) {
    uVar44 = 0;
    bStack_3c0 = 0;
    bStack_3a4 = 0;
    dVar43 = 60.0;
/* WM - do not claim this as your own */
    bVar32 = 0;
  }
  else {
    plStack_2c8 = (long *)0x0;
    func_0x00178a5c(&uStack_310,&puStack_2c0,alStack_2e0,0,0);
    if (plStack_2c8 == alStack_2e0) {
      lVar34 = 0x20;
LAB_00176a34:
      (**(code **)(*plStack_2c8 + lVar34))();
    }
    else if (plStack_2c8 != (long *)0x0) {
      lVar34 = 0x28;
      goto LAB_00176a34;
    }
    pcVar42 = pcRam00000000020746d0;
    uVar40 = uStack_310 & 0xff;
    if ((char)uStack_310 == '\x01') {
      pbVar27 = (byte *)(*pcRam00000000020746d0)();
      if ((*pbVar27 & 1) == 0) {
        uVar30 = (*pcVar8)(0x20746b8);
        __tlv_atexit(&DAT_00187f8c,uVar30,0);
        puVar29 = (undefined1 *)(*pcVar42)(0x20746d0);
        *puVar29 = 1;
        cVar31 = *pcVar21;
      }
      else {
        cVar31 = *pcVar21;
      }
      if (cVar31 == '\x01') {
        lVar34 = 0;
        uVar40 = 0xc00821b008d65b50;
        do {
          uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
          uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
          uVar39 = uVar41 ^ uVar41 >> 0x21;
          uVar44 = (uint)(byte)pcVar21[lVar34 + 1] ^ (uint)uVar39 ^ 0xffffffc3;
// WM - stripping the watermark breaks the license
          uVar44 = (uVar44 >> 2 & 0x3f | uVar44 << 6) - (int)(uVar39 >> 0x17);
          pcVar21[lVar34 + 0xd] =
               ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') - ((byte)(uVar41 >> 0x29) | 1) ^
               (byte)uVar39;
          uVar40 = lVar34 + -0x61c8864680b583eb +
                   (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar21[lVar34 + 1]) << 0x11);
          lVar34 = lVar34 + 1;
        } while (lVar34 != 0xc);
        *pcVar21 = '\0';
      }
      pcStack_360 = pcVar21 + 0xd;
      uVar30 = func_0x0011ab24(&pcStack_360);
      cVar31 = (char)uStack_310;
      if ((char)uStack_310 == '\x01') {
        plVar38 = (long *)(uStack_308 + 8);
        plVar37 = (long *)*plVar38;
        if (plVar37 == (long *)0x0) goto LAB_00177064;
        uVar40 = _strlen();
        do {
          while( true ) {
/* unlicensed copy if this notice is missing */
            uVar41 = plVar37[5];
            plVar6 = (long *)plVar37[4];
            if (-1 < (char)*(byte *)((long)plVar37 + 0x37)) {
              uVar41 = (ulong)*(byte *)((long)plVar37 + 0x37);
              plVar6 = plVar37 + 4;
            }
            uVar39 = uVar40;
            if (uVar41 <= uVar40) {
              uVar39 = uVar41;
            }
            iVar17 = _memcmp(plVar6,uVar30,uVar39);
            if (iVar17 != 0) break;
            if (uVar40 < uVar41) goto LAB_00176d54;
            if (uVar40 <= uVar41) {
              bVar16 = false;
              goto LAB_00176dd8;
            }
LAB_00176da8:
            plVar37 = (long *)plVar37[1];
            if (plVar37 == (long *)0x0) goto LAB_00176db0;
          }
          if (iVar17 < 1) goto LAB_00176da8;
/* WM - proprietary - see LICENSE - do not sell */
LAB_00176d54:
          plVar37 = (long *)*plVar37;
        } while (plVar37 != (long *)0x0);
LAB_00176db0:
        bVar16 = false;
        plVar37 = plVar38;
LAB_00176dd8:
        pcVar42 = pcRam0000000002074700;
        if (cVar31 != '\x01') {
          if (!bVar16) {
            uVar30 = ___cxa_allocate_exception(0x20);
            func_0x0000e100(&puStack_340,"cannot get value");
            FUN_001882a4(uVar30,0xd6,&puStack_340,&uStack_310);
            ___cxa_throw(uVar30,&UNK_01dbfdf0,&DAT_00184420);
            goto LAB_00178594;
          }
          goto LAB_00177064;
        }
        if ((plVar37 == (long *)(uStack_308 + 8)) || ((char)plVar37[7] != '\x04'))
        goto LAB_00177064;
        bVar32 = *(byte *)(plVar37 + 8);
        pbVar27 = (byte *)(*pcRam0000000002074700)();
        if ((*pbVar27 & 1) == 0) goto LAB_00176e34;
LAB_00177080:
        cVar31 = *pcVar22;
      }
      else {
        if ((char)uStack_310 != '\x02') {
          bVar16 = true;
          plVar37 = (long *)0x0;
          if ((char)uStack_310 != '\x02') goto LAB_00176dd8;
        }
LAB_00177064:
        pcVar42 = pcRam0000000002074700;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        bVar32 = 0;
        pbVar27 = (byte *)(*pcRam0000000002074700)();
        if ((*pbVar27 & 1) != 0) goto LAB_00177080;
LAB_00176e34:
        uVar30 = (*pcVar9)(0x20746e8);
        __tlv_atexit(&DAT_00187ff8,uVar30,0);
        puVar29 = (undefined1 *)(*pcVar42)(0x2074700);
        *puVar29 = 1;
        cVar31 = *pcVar22;
      }
      if (cVar31 == '\x01') {
        uVar44 = (byte)pcVar22[1] ^ 0x7f7f619e;
        uVar44 = (uVar44 >> 6 & 3 | uVar44 << 2) + 0x563dc09a;
        pcVar22[8] = ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') ^ 0x5d;
        uVar40 = (((ulong)(byte)pcVar22[1] ^ 0xbdefd0293e86dedf) << 0x11 | 0x17bdf) +
                 0x9e3779b97f4a7c15;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar44 = (uint)(byte)pcVar22[2] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar44 = (uVar44 >> 6 & 3 | uVar44 << 2) -
                 (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
        pcVar22[9] = ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar22[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar44 = (uint)(byte)pcVar22[3] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar44 = (uVar44 >> 6 & 3 | uVar44 << 2) -
                 (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
        pcVar22[10] = ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar22[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar44 = (uint)(byte)pcVar22[4] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar44 = (uVar44 >> 6 & 3 | uVar44 << 2) -
// WM - reversing this took months of machine time
                 (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
        pcVar22[0xb] = ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar22[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar44 = (uint)(byte)pcVar22[5] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar44 = (uVar44 >> 6 & 3 | uVar44 << 2) -
                 (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
        pcVar22[0xc] = ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar22[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar44 = (uint)(byte)pcVar22[6] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar44 = (uVar44 >> 6 & 3 | uVar44 << 2) -
                 (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
        pcVar22[0xd] = ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar22[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar40 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar40 = (uVar40 ^ uVar40 >> 0x21) * -0x3b314601e57a13ad;
        uVar41 = uVar40 ^ uVar40 >> 0x21;
        uVar44 = (uint)(byte)pcVar22[7] ^ (uint)uVar41 ^ 0xffffffc3;
        uVar44 = (uVar44 >> 6 & 3 | uVar44 << 2) -
                 (((uint)(uVar40 >> 0x29) | 1) + (int)(uVar41 >> 0x17));
        pcVar22[0xe] = ((byte)(uVar44 >> 3) & 0x1f | (char)uVar44 * ' ') ^ (byte)uVar41;
        *pcVar22 = '\0';
      }
      pcStack_368 = pcVar22 + 8;
      uVar30 = func_0x0011ab24(&pcStack_368);
      cVar31 = (char)uStack_310;
      if ((char)uStack_310 == '\x01') {
        plVar38 = (long *)(uStack_308 + 8);
        plVar37 = (long *)*plVar38;
        if (plVar37 == (long *)0x0) goto LAB_0017752c;
/* reversing this took months of machine time */
        uVar40 = _strlen();
        do {
          while( true ) {
            uVar41 = plVar37[5];
            plVar6 = (long *)plVar37[4];
            if (-1 < (char)*(byte *)((long)plVar37 + 0x37)) {
              uVar41 = (ulong)*(byte *)((long)plVar37 + 0x37);
              plVar6 = plVar37 + 4;
            }
            uVar39 = uVar40;
            if (uVar41 <= uVar40) {
              uVar39 = uVar41;
            }
            iVar17 = _memcmp(plVar6,uVar30,uVar39);
            if (iVar17 != 0) break;
            if (uVar40 < uVar41) goto LAB_001773d4;
// chat: discord.gg/sdkhDjTex
            if (uVar40 <= uVar41) {
              bVar16 = false;
              goto LAB_00177458;
            }
LAB_00177428:
            plVar37 = (long *)plVar37[1];
            if (plVar37 == (long *)0x0) goto LAB_00177430;
          }
          if (iVar17 < 1) goto LAB_00177428;
LAB_001773d4:
          plVar37 = (long *)*plVar37;
        } while (plVar37 != (long *)0x0);
LAB_00177430:
        bVar16 = false;
        plVar37 = plVar38;
LAB_00177458:
        pcVar42 = pcRam0000000002074730;
        if (cVar31 != '\x01') {
          if (!bVar16) {
            uVar30 = ___cxa_allocate_exception(0x20);
            func_0x0000e100(&puStack_340,"cannot get value");
            FUN_001882a4(uVar30,0xd6,&puStack_340,&uStack_310);
            ___cxa_throw(uVar30,&UNK_01dbfdf0,&DAT_00184420);
            goto LAB_00178594;
          }
          goto LAB_0017752c;
        }
        if ((plVar37 == (long *)(uStack_308 + 8)) || ((char)plVar37[7] != '\x04'))
        goto LAB_0017752c;
        uVar44 = (uint)*(byte *)(plVar37 + 8);
        pbVar27 = (byte *)(*pcRam0000000002074730)();
        if ((*pbVar27 & 1) == 0) goto LAB_001774b4;
LAB_00177548:
/* wm:if you paid for this, you were scammed */
        cVar31 = *pcVar23;
      }
      else {
        if ((char)uStack_310 != '\x02') {
          bVar16 = true;
          plVar37 = (long *)0x0;
          if ((char)uStack_310 != '\x02') goto LAB_00177458;
        }
LAB_0017752c:
        pcVar42 = pcRam0000000002074730;
        uVar44 = 0;
        pbVar27 = (byte *)(*pcRam0000000002074730)();
        if ((*pbVar27 & 1) != 0) goto LAB_00177548;
LAB_001774b4:
        uVar30 = (*pcVar10)(0x2074718);
        __tlv_atexit(&DAT_0018803c,uVar30,0);
        puVar29 = (undefined1 *)(*pcVar42)(0x2074730);
        *puVar29 = 1;
        cVar31 = *pcVar23;
      }
      if (cVar31 == '\x01') {
        lVar34 = 0;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar40 = 0x8eb8c67e6d9d69b0;
        do {
          uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
          uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
          uVar39 = uVar41 ^ uVar41 >> 0x21;
          uVar3 = (uint)(byte)pcVar23[lVar34 + 1] ^ (uint)uVar39 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
                  (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
          pcVar23[lVar34 + 0x10] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar39;
          uVar40 = lVar34 + -0x61c8864680b583eb +
                   (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar23[lVar34 + 1]) << 0x11);
          lVar34 = lVar34 + 1;
        } while (lVar34 != 0xf);
        *pcVar23 = '\0';
      }
      pcStack_370 = pcVar23 + 0x10;
      uVar30 = func_0x0011ab24(&pcStack_370);
      cVar31 = (char)uStack_310;
      if ((char)uStack_310 == '\x01') {
        plVar38 = (long *)(uStack_308 + 8);
        plVar37 = (long *)*plVar38;
        if (plVar37 == (long *)0x0) goto LAB_001777e4;
        uVar40 = _strlen();
        do {
          while( true ) {
            uVar41 = plVar37[5];
            plVar6 = (long *)plVar37[4];
            if (-1 < (char)*(byte *)((long)plVar37 + 0x37)) {
              uVar41 = (ulong)*(byte *)((long)plVar37 + 0x37);
              plVar6 = plVar37 + 4;
            }
            uVar39 = uVar40;
/* donate: donate/README.md */
            if (uVar41 <= uVar40) {
              uVar39 = uVar41;
            }
            iVar17 = _memcmp(plVar6,uVar30,uVar39);
            if (iVar17 != 0) break;
            if (uVar40 < uVar41) goto LAB_0017768c;
            if (uVar40 <= uVar41) {
              bVar16 = false;
              goto LAB_00177710;
            }
LAB_001776e0:
            plVar37 = (long *)plVar37[1];
            if (plVar37 == (long *)0x0) goto LAB_001776e8;
          }
          if (iVar17 < 1) goto LAB_001776e0;
LAB_0017768c:
          plVar37 = (long *)*plVar37;
        } while (plVar37 != (long *)0x0);
LAB_001776e8:
        bVar16 = false;
        plVar37 = plVar38;
LAB_00177710:
        pcVar42 = pcRam0000000002074760;
/* if you paid for this, you were scammed */
        if (cVar31 != '\x01') {
          if (!bVar16) {
            uVar30 = ___cxa_allocate_exception(0x20);
            func_0x0000e100(&puStack_340,"cannot get value");
            FUN_001882a4(uVar30,0xd6,&puStack_340,&uStack_310);
            ___cxa_throw(uVar30,&UNK_01dbfdf0,&DAT_00184420);
            goto LAB_00178594;
          }
          goto LAB_001777e4;
        }
        if ((plVar37 == (long *)(uStack_308 + 8)) || ((char)plVar37[7] != '\x04'))
        goto LAB_001777e4;
        bStack_3c0 = *(byte *)(plVar37 + 8);
        pbVar27 = (byte *)(*pcRam0000000002074760)();
        if ((*pbVar27 & 1) == 0) goto LAB_0017776c;
LAB_00177800:
        cVar31 = *pcVar24;
      }
      else {
        if ((char)uStack_310 != '\x02') {
          bVar16 = true;
          plVar37 = (long *)0x0;
          if ((char)uStack_310 != '\x02') goto LAB_00177710;
        }
LAB_001777e4:
        pcVar42 = pcRam0000000002074760;
        bStack_3c0 = 0;
        pbVar27 = (byte *)(*pcRam0000000002074760)();
        if ((*pbVar27 & 1) != 0) goto LAB_00177800;
LAB_0017776c:
        uVar30 = (*pcVar11)(0x2074748);
        __tlv_atexit(&DAT_001880c0,uVar30,0);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        puVar29 = (undefined1 *)(*pcVar42)(0x2074760);
        *puVar29 = 1;
        cVar31 = *pcVar24;
      }
      if (cVar31 == '\x01') {
        lVar34 = 0;
        uVar40 = 0x4bed2a6389959ff0;
        do {
          uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
          uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
          uVar39 = uVar41 ^ uVar41 >> 0x21;
          uVar3 = (uint)(byte)pcVar24[lVar34 + 1] ^ (uint)uVar39 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) -
                  (((uint)(uVar41 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
          pcVar24[lVar34 + 0xf] = ((byte)(uVar3 >> 7) & 1 | (char)uVar3 * '\x02') ^ (byte)uVar39;
          uVar40 = lVar34 + -0x61c8864680b583eb +
                   (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar24[lVar34 + 1]) << 0x11);
          lVar34 = lVar34 + 1;
        } while (lVar34 != 0xe);
        *pcVar24 = '\0';
      }
      pcStack_378 = pcVar24 + 0xf;
      uVar30 = func_0x0011ab24(&pcStack_378);
      cVar31 = (char)uStack_310;
      if ((char)uStack_310 == '\x01') {
        plVar38 = (long *)(uStack_308 + 8);
        plVar37 = (long *)*plVar38;
        if (plVar37 == (long *)0x0) goto LAB_00177aa0;
        uVar40 = _strlen();
        do {
// WM - origin: github.com/pengussy
          while( true ) {
            uVar41 = plVar37[5];
            plVar6 = (long *)plVar37[4];
            if (-1 < (char)*(byte *)((long)plVar37 + 0x37)) {
              uVar41 = (ulong)*(byte *)((long)plVar37 + 0x37);
              plVar6 = plVar37 + 4;
            }
            uVar39 = uVar40;
            if (uVar41 <= uVar40) {
              uVar39 = uVar41;
            }
            iVar17 = _memcmp(plVar6,uVar30,uVar39);
            if (iVar17 != 0) break;
            if (uVar40 < uVar41) goto LAB_00177944;
            if (uVar40 <= uVar41) {
              bVar16 = false;
              goto LAB_001779c8;
            }
LAB_00177998:
            plVar37 = (long *)plVar37[1];
            if (plVar37 == (long *)0x0) goto LAB_001779a0;
          }
/* origin: github.com/pengussy */
          if (iVar17 < 1) goto LAB_00177998;
LAB_00177944:
          plVar37 = (long *)*plVar37;
        } while (plVar37 != (long *)0x0);
LAB_001779a0:
        bVar16 = false;
        plVar37 = plVar38;
LAB_001779c8:
        pcVar42 = pcRam0000000002074790;
        if (cVar31 != '\x01') {
          if (!bVar16) {
            uVar30 = ___cxa_allocate_exception(0x20);
            func_0x0000e100(&puStack_340,"cannot get value");
            FUN_001882a4(uVar30,0xd6,&puStack_340,&uStack_310);
            ___cxa_throw(uVar30,&UNK_01dbfdf0,&DAT_00184420);
            goto LAB_00178594;
          }
          goto LAB_00177aa0;
        }
        if ((plVar37 == (long *)(uStack_308 + 8)) || ((char)plVar37[7] != '\x04'))
        goto LAB_00177aa0;
        bStack_3a4 = *(byte *)(plVar37 + 8);
        pbVar27 = (byte *)(*pcRam0000000002074790)();
        if ((*pbVar27 & 1) == 0) goto LAB_00177a28;
LAB_00177abc:
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        cVar31 = *pcVar25;
      }
      else {
        if ((char)uStack_310 != '\x02') {
          bVar16 = true;
          plVar37 = (long *)0x0;
          if ((char)uStack_310 != '\x02') goto LAB_001779c8;
        }
LAB_00177aa0:
        pcVar42 = pcRam0000000002074790;
        bStack_3a4 = 0;
        pbVar27 = (byte *)(*pcRam0000000002074790)();
        if ((*pbVar27 & 1) != 0) goto LAB_00177abc;
LAB_00177a28:
        uVar30 = (*pcVar12)(0x2074778);
        __tlv_atexit(&DAT_0018813c,uVar30,0);
        puVar29 = (undefined1 *)(*pcVar42)(0x2074790);
        *puVar29 = 1;
        cVar31 = *pcVar25;
      }
      if (cVar31 == '\x01') {
        uVar3 = (byte)pcVar25[1] ^ 0x57d164e5;
        uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) + 0xf8bda0b0;
        pcVar25[8] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) + 0x2f ^ 0x26;
        uVar40 = (((ulong)(byte)pcVar25[1] ^ 0x76ead44b54f59b1b) << 0x11 | 0xedd5) +
                 0x9e3779b97f4a7c15;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar3 = (uint)(byte)pcVar25[2] ^ (uint)uVar39 ^ 0xffffffc3;
/* more drops soon - github.com/pengussy */
        uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar39 >> 0x17);
        pcVar25[9] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) -
                     ((byte)(uVar41 >> 0x29) | 1) ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar25[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar3 = (uint)(byte)pcVar25[3] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar39 >> 0x17);
        pcVar25[10] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) -
                      ((byte)(uVar41 >> 0x29) | 1) ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar25[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar3 = (uint)(byte)pcVar25[4] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar39 >> 0x17);
        pcVar25[0xb] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) -
                       ((byte)(uVar41 >> 0x29) | 1) ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar25[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar3 = (uint)(byte)pcVar25[5] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar39 >> 0x17);
        pcVar25[0xc] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) -
                       ((byte)(uVar41 >> 0x29) | 1) ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar25[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
        uVar39 = uVar41 ^ uVar41 >> 0x21;
        uVar3 = (uint)(byte)pcVar25[6] ^ (uint)uVar39 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar39 >> 0x17);
        pcVar25[0xd] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) -
                       ((byte)(uVar41 >> 0x29) | 1) ^ (byte)uVar39;
        uVar40 = (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar25[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar40 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
        uVar40 = (uVar40 ^ uVar40 >> 0x21) * -0x3b314601e57a13ad;
        uVar41 = uVar40 ^ uVar40 >> 0x21;
        uVar3 = (uint)(byte)pcVar25[7] ^ (uint)uVar41 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar41 >> 0x17);
        pcVar25[0xe] = ((byte)(uVar3 >> 1) & 0x7f | (char)uVar3 * -0x80) -
                       ((byte)(uVar40 >> 0x29) | 1) ^ (byte)uVar41;
        *pcVar25 = '\0';
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      }
      pcStack_380 = pcVar25 + 8;
      uVar30 = func_0x0011ab24(&pcStack_380);
      uVar40 = uStack_310 & 0xff;
      if ((char)uStack_310 == '\x01') {
        plVar38 = (long *)(uStack_308 + 8);
        plVar37 = (long *)*plVar38;
        if (plVar37 != (long *)0x0) {
          uVar40 = _strlen();
          do {
            while( true ) {
              uVar41 = plVar37[5];
              plVar6 = (long *)plVar37[4];
              if (-1 < (char)*(byte *)((long)plVar37 + 0x37)) {
                uVar41 = (ulong)*(byte *)((long)plVar37 + 0x37);
                plVar6 = plVar37 + 4;
              }
              uVar39 = uVar40;
              if (uVar41 <= uVar40) {
                uVar39 = uVar41;
              }
              iVar17 = _memcmp(plVar6,uVar30,uVar39);
              if (iVar17 != 0) break;
              if (uVar40 < uVar41) goto LAB_00177e10;
              if (uVar40 <= uVar41) {
                bVar16 = false;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                uVar40 = 1;
                goto LAB_00177eb8;
              }
LAB_00177e64:
              plVar37 = (long *)plVar37[1];
              if (plVar37 == (long *)0x0) goto LAB_00177e6c;
            }
            if (iVar17 < 1) goto LAB_00177e64;
LAB_00177e10:
            plVar37 = (long *)*plVar37;
          } while (plVar37 != (long *)0x0);
LAB_00177e6c:
          bVar16 = false;
          uVar40 = 1;
          plVar37 = plVar38;
LAB_00177eb8:
          if ((int)uVar40 != 1) {
            if (!bVar16) {
              uVar30 = ___cxa_allocate_exception(0x20);
              func_0x0000e100(&puStack_340,"cannot get value");
              FUN_001882a4(uVar30,0xd6,&puStack_340,&uStack_310);
              ___cxa_throw(uVar30,&UNK_01dbfdf0,&DAT_00184420);
LAB_00178594:
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x178598);
              (*pcVar15)();
            }
            goto LAB_00176b88;
          }
          if (plVar37 != (long *)(uStack_308 + 8)) {
            bVar5 = *(byte *)(plVar37 + 7);
            if (bVar5 - 5 < 3) {
              if (bVar5 == 5) {
                dVar46 = (double)plVar37[8];
              }
              else if (bVar5 == 7) {
                dVar46 = (double)plVar37[8];
              }
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
              else {
                dVar46 = (double)NEON_ucvtf(plVar37[8]);
              }
              if (-1 < (long)dVar46 && (long)ABS(dVar46) + 0xfff0000000000000U >> 0x35 < 0x3ff ||
                  (long)dVar46 - 1U < 0xfffffffffffff) {
                dVar43 = 10000.0;
                if (dVar46 <= 10000.0) {
                  dVar43 = dVar46;
                }
                uVar40 = 1;
                goto LAB_00176b90;
              }
            }
          }
        }
        bStack_3a4 = 0;
        dVar43 = 60.0;
        uVar40 = 1;
      }
/*  watermarked copy - do not remove  */
      else {
        if ((char)uStack_310 != '\x02') {
          bVar16 = true;
          plVar37 = (long *)0x0;
          if ((char)uStack_310 != '\x02') goto LAB_00177eb8;
          goto LAB_00176b88;
        }
        bStack_3a4 = 0;
        dVar43 = 60.0;
      }
    }
    else {
      bVar32 = 0;
      uVar44 = 0;
      bStack_3c0 = 0;
LAB_00176b88:
      bStack_3a4 = 0;
      dVar43 = 60.0;
    }
LAB_00176b90:
    func_0x00183bbc(&uStack_308,uVar40);
  }
  bRam0000000002097052 = bVar32 & 1;
  bRam0000000002097051 = bStack_3c0 & 1;
  __ZNSt3__115recursive_mutex4lockEv(0x1f26eb8);
// stripping the watermark breaks the license
  uVar3 = uVar44 & 1;
  uVar40 = (ulong)uVar3;
  if (uVar3 != bRam0000000002097053) {
    bRam0000000002097053 = (byte)uVar3;
    if ((uVar44 & 1) == 0) {
      LOAcquire();
      LORelease();
      uVar40 = uRam0000000001f270e0;
      uRam0000000001f270e0 = uRam0000000001f270e0 + 1;
    }
  }
  __ZNSt3__115recursive_mutex6unlockEv(uVar40,0x1f26eb8);
  bRam0000000002097054 = bStack_3a4 & 1;
  dRam0000000001f26d38 = dVar43;
  if ((*plRam0000000001f268e0 != 0) && (bRam0000000002097054 == 1)) {
    *(double *)(lRam0000000001f265d0 + *plRam0000000001f268e0) = 1.0 / dVar43;
/* chat: discord.gg/sdkhDjTex */
  }
  __ZNSt3__115recursive_mutex4lockEv(0x1f26eb8);
  __ZNSt3__15mutex4lockEv(0x1f26bf0);
  pcVar14 = pcRam00000000020747c0;
  pcVar42 = pcRam0000000001f26db0;
  cStack_2f1 = '\0';
  uStack_310 = uStack_2e8;
  uStack_308 = uStack_2f0;
  lStack_300 = lVar33;
  if ((((lRam0000000001f26d30 == lVar33) && (uRam0000000002097040 == uStack_2e8)) &&
      (uRam0000000002097038 == uStack_2f0)) && (uStack_2e8 != 0)) {
    if ((uRam0000000002092a28 != 0) && (lRam0000000002092a38 != 0)) {
      uVar40 = uRam0000000002092a28 - 1;
      if ((uRam0000000002092a28 & uVar40) == 0) {
        uVar41 = uVar40 & uStack_2e8;
        plVar37 = *(long **)(lRam0000000002092a20 + uVar41 * 8);
      }
      else {
        uVar41 = uStack_2e8;
        if (uRam0000000002092a28 <= uStack_2e8) {
          uVar41 = 0;
          if (uRam0000000002092a28 != 0) {
            uVar41 = uStack_2e8 / uRam0000000002092a28;
          }
          uVar41 = uStack_2e8 - uVar41 * uRam0000000002092a28;
        }
        plVar37 = *(long **)(lRam0000000002092a20 + uVar41 * 8);
      }
      if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
        if ((uRam0000000002092a28 & uVar40) == 0) {
          do {
/*  no support for modified copies  */
            if (uStack_2e8 == plVar37[1]) {
              if (plVar37[2] == uStack_2e8) goto LAB_00176f40;
            }
            else if ((plVar37[1] & uVar40) != uVar41) break;
            plVar37 = (long *)*plVar37;
          } while (plVar37 != (long *)0x0);
        }
        else {
          do {
            uVar40 = plVar37[1];
            if (uStack_2e8 == uVar40) {
              if (plVar37[2] == uStack_2e8) goto LAB_00176f40;
            }
            else {
              if (uRam0000000002092a28 <= uVar40) {
                uVar39 = 0;
/* wm:keep the notice, keep the source honest */
                if (uRam0000000002092a28 != 0) {
                  uVar39 = uVar40 / uRam0000000002092a28;
                }
                uVar40 = uVar40 - uVar39 * uRam0000000002092a28;
              }
              if (uVar40 != uVar41) break;
            }
            plVar37 = (long *)*plVar37;
          } while (plVar37 != (long *)0x0);
        }
      }
    }
    if (*(uint *)(lRam0000000001f267d0 + uStack_2e8) < 2) {
      if (uRam0000000002092a00 != 0 && lRam0000000002092a10 != 0) {
        uVar40 = uRam0000000002092a00 - 1;
        if ((uRam0000000002092a00 & uVar40) == 0) {
          uVar41 = uVar40 & uStack_2e8;
// do not claim this as your own
          plVar37 = *(long **)(lRam00000000020929f8 + uVar41 * 8);
        }
        else {
          uVar41 = uStack_2e8;
          if (uRam0000000002092a00 <= uStack_2e8) {
            uVar41 = 0;
            if (uRam0000000002092a00 != 0) {
              uVar41 = uStack_2e8 / uRam0000000002092a00;
            }
            uVar41 = uStack_2e8 - uVar41 * uRam0000000002092a00;
          }
          plVar37 = *(long **)(lRam00000000020929f8 + uVar41 * 8);
        }
        if ((plVar37 != (long *)0x0) && (plVar37 = (long *)*plVar37, plVar37 != (long *)0x0)) {
          if ((uRam0000000002092a00 & uVar40) == 0) {
            do {
              if (plVar37[1] == uStack_2e8) {
                if (plVar37[2] == uStack_2e8) goto LAB_00178290;
              }
// WM - donate: donate/README.md
              else if ((plVar37[1] & uVar40) != uVar41) break;
              plVar37 = (long *)*plVar37;
            } while (plVar37 != (long *)0x0);
          }
          else {
            do {
              uVar40 = plVar37[1];
              if (uVar40 == uStack_2e8) {
                if (plVar37[2] == uStack_2e8) goto LAB_00178290;
              }
              else {
                if (uRam0000000002092a00 <= uVar40) {
                  uVar39 = 0;
                  if (uRam0000000002092a00 != 0) {
                    uVar39 = uVar40 / uRam0000000002092a00;
                  }
                  uVar40 = uVar40 - uVar39 * uRam0000000002092a00;
                }
                if (uVar40 != uVar41) break;
              }
              plVar37 = (long *)*plVar37;
            } while (plVar37 != (long *)0x0);
          }
        }
      }
      bVar16 = false;
      goto joined_r0x001782ac;
    }
  }
LAB_00176f40:
  iVar17 = 0;
  goto LAB_00176f44;
LAB_00178290:
  bVar16 = plVar37[3] == *(long *)(lRam0000000001f26730 + uStack_2e8);
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
joined_r0x001782ac:
  iVar17 = 0;
  if ((uRam0000000002097038 != 0) && (iVar17 = 0, !bVar16)) {
    if (*(long *)(lRam0000000001f26750 + uRam0000000002097038) == 0) goto LAB_00176f40;
    if (lRam0000000002097030 == 0) {
      puVar2 = (uint *)(lRam0000000001f26800 + uStack_2e8 + lRam0000000001f267a0);
      uVar44 = (uint)puVar2;
      uVar40 = 0;
      uStack_318 = uVar40;
      if (iRam0000000001f27048 < 3) {
        if (iRam0000000001f27048 == 1) {
          uVar40 = (ulong)(puVar2[1] - uVar44);
          uStack_318 = (ulong)(*puVar2 - uVar44);
        }
        else if (iRam0000000001f27048 == 2) {
          uStack_318 = CONCAT44(uVar44 - puVar2[1],uVar44 - *puVar2);
          goto joined_r0x0017832c;
        }
LAB_001782c0:
        uStack_318 = uStack_318 | uVar40 << 0x20;
      }
      else if (iRam0000000001f27048 == 3) {
        uStack_318 = CONCAT44(puVar2[1] ^ uVar44,*puVar2 ^ uVar44);
      }
      else {
        if (iRam0000000001f27048 != 4) goto LAB_001782c0;
        uStack_318 = CONCAT44(puVar2[1] + uVar44,*puVar2 + uVar44);
// WM - watermarked copy - do not remove
      }
joined_r0x0017832c:
      lRam0000000002097048 = lVar33;
      if (uStack_318 == 0) {
        pbVar27 = (byte *)(*pcRam00000000020747c0)();
        if ((*pbVar27 & 1) == 0) {
          uVar30 = (*pcVar13)(0x20747a8);
          __tlv_atexit(&DAT_0018852c,uVar30,0);
          puVar29 = (undefined1 *)(*pcVar14)(0x20747c0);
          *puVar29 = 1;
          cVar31 = *pcVar26;
        }
        else {
          cVar31 = *pcVar26;
        }
        if (cVar31 == '\x01') {
          lVar33 = 0;
          uVar40 = 0xf3af2d0eefbb351c;
          do {
            uVar41 = (uVar40 ^ uVar40 >> 0x21) * -0xae502812aa7333;
            uVar41 = (uVar41 ^ uVar41 >> 0x21) * -0x3b314601e57a13ad;
            uVar39 = uVar41 ^ uVar41 >> 0x21;
            uVar44 = (uint)(byte)pcVar26[lVar33 + 1] ^ (uint)uVar39 ^ 0xffffffc3;
/*  thanks for reading - discord.gg/sdkhDjTex  */
            uVar44 = (uVar44 >> 5 & 7 | uVar44 << 3) - (int)(uVar39 >> 0x17) ^
                     ((uint)(uVar41 >> 0x29) | 1);
            pcVar26[lVar33 + 0x1d] = ((byte)(uVar44 >> 5) & 7 | (byte)(uVar44 << 3)) - (char)uVar39;
            uVar40 = lVar33 + -0x61c8864680b583eb +
                     (uVar40 >> 0x2f | (uVar40 ^ (byte)pcVar26[lVar33 + 1]) << 0x11);
            lVar33 = lVar33 + 1;
          } while (lVar33 != 0x1c);
          *pcVar26 = '\0';
        }
        pcStack_388 = pcVar26 + 0x1d;
        uVar30 = func_0x0011ab24(&pcStack_388);
        (*pcVar42)(3,uVar30);
        iVar17 = 2;
      }
      else {
        puStack_340 = &uStack_318;
        puStack_338 = &uStack_310;
        pcStack_330 = &cStack_2f1;
        puStack_328 = &uStack_2f0;
        puStack_320 = &uStack_2e8;
        func_0x00178ed0(&puStack_340);
        iVar17 = 1;
        if (cStack_2f1 == '\0') {
          iVar17 = 2;
        }
      }
    }
    else {
      iVar17 = 1;
    }
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  }
LAB_00176f44:
  __ZNSt3__15mutex6unlockEv(0x1f26bf0);
  __ZNSt3__115recursive_mutex6unlockEv(0x1f26eb8);
  lVar33 = lStack_238;
  apuStack_118[0] = &UNK_01dbf1c8;
  puStack_2c0 = &UNK_01dbf1a0;
  puStack_2b0 = &UNK_01dbf270;
  if (lStack_238 != 0) {
    func_0x00141300(&puStack_2b0);
    _fclose(lVar33);
    lStack_238 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    iStack_124 = 0x20;
  }
  if (((char)uStack_120 == '\x01') && (lStack_270 != 0)) {
    __ZdaPv();
  }
  if ((uStack_120._1_1_ == '\x01') && (lStack_248 != 0)) {
    __ZdaPv();
  }
  puStack_2b0 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
  __ZNSt3__16localeD1Ev(auStack_2a8);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&puStack_2c0,&UNK_01dbf1e0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_118);
LAB_00176094:
  if (iVar17 != 0) goto LAB_00176038;
LAB_0017609c:
  plVar45 = plVar45 + 2;
  if (plVar4 <= plVar45) goto LAB_00176034;
// donate: donate/README.md
  goto LAB_001760a8;
}

