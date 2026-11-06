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
 *  file-id: 0x23a86c:bd544a35e4
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x0023b824) */
/* WARNING: Removing unreachable block (ram,0x0023b848) */
/* WARNING: Type propagation algorithm not settling */

long FUN_0023a86c(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined8 ****ppppuVar4;
  ulong ***pppuVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
/* WM - stripping the watermark breaks the license */
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  char *pcStack_3e0;
  char *pcStack_3d8;
  char *pcStack_3d0;
  char *pcStack_3c8;
  undefined8 ****ppppuStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined4 uStack_3a0;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong ***pppuStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined4 uStack_360;
  undefined8 *******pppppppuStack_358;
  ulong uStack_350;
// thanks for reading - discord.gg/sdkhDjTex
  undefined8 uStack_348;
  undefined8 *******pppppppuStack_340;
  ulong uStack_338;
  undefined8 uStack_330;
  undefined1 uStack_328;
  byte bStack_327;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  long alStack_288 [12];
  long lStack_228;
  undefined4 uStack_114;
  undefined *apuStack_108 [19];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  pbVar9 = (byte *)(*pcRam00000000020784b0)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019dbe00();
  }
  pcStack_3c8 = (char *)(*pcRam0000000002078498)();
  if (*pcStack_3c8 == '\x01') {
    lVar14 = 0;
    uVar16 = 0x74bc2b43999ca95b;
    do {
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar2 = (uint)(byte)pcStack_3c8[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_3c8[lVar14 + 0x17] = ((byte)(uVar2 >> 3) & 0x1f | (byte)(uVar2 << 5)) - (char)uVar18;
      uVar16 = lVar14 + -0x61c8864680b583eb +
               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3c8[lVar14 + 1]) << 0x11);
/* if you paid for this, you were scammed */
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x16);
    *pcStack_3c8 = '\0';
  }
  pcStack_3c8 = pcStack_3c8 + 0x17;
  uVar10 = func_0x0011ab24(&pcStack_3c8);
  uVar16 = _strlen();
  if (uVar16 < 0x7ffffffffffffff7) {
    if (uVar16 < 0x17) {
      uStack_330 = CONCAT17((char)uVar16,(undefined7)uStack_330);
      pppppppuVar11 = &pppppppuStack_340;
    }
    else {
      uVar17 = (uVar16 & 0x7ffffffffffffff8) + 8;
      uVar18 = 0x19;
      if (uVar17 != 0x18) {
        uVar18 = uVar17;
      }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      pppppppuVar11 = (undefined8 *******)__Znwm(uVar18);
      uStack_330 = uVar18 | 0x8000000000000000;
      pppppppuStack_340 = pppppppuVar11;
      uStack_338 = uVar16;
    }
    _memmove(pppppppuVar11,uVar10,uVar16);
    *(undefined1 *)((long)pppppppuVar11 + uVar16) = 0;
    pbVar9 = (byte *)(*pcRam00000000020784e0)();
    if ((*pbVar9 & 1) == 0) {
      func_0x019dbe3c();
    }
    pcStack_3d0 = (char *)(*pcRam00000000020784c8)();
    if (*pcStack_3d0 == '\x01') {
      uVar2 = (byte)pcStack_3d0[1] ^ 0x114ae22d;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) + 0xd354423 ^ 0x2d3cb3;
      pcStack_3d0[6] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) + 0x12;
      uVar16 = (((ulong)(byte)pcStack_3d0[1] ^ 0x486214bc55818f9f) << 0x11 | 0x90c4) +
               0x9e3779b97f4a7c15;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar2 = (uint)(byte)pcStack_3d0[2] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_3d0[7] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3d0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar2 = (uint)(byte)pcStack_3d0[3] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_3d0[8] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3d0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
// do not claim this as your own
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar2 = (uint)(byte)pcStack_3d0[4] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar18 >> 0x17) ^
              ((uint)(uVar17 >> 0x29) | 1);
      pcStack_3d0[9] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar18;
      uVar16 = (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3d0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar2 = (uint)(byte)pcStack_3d0[5] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) - (int)(uVar17 >> 0x17) ^
              ((uint)(uVar16 >> 0x29) | 1);
      pcStack_3d0[10] = ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar17;
      *pcStack_3d0 = '\0';
    }
    pcStack_3d0 = pcStack_3d0 + 6;
    uVar10 = func_0x0011ab24(&pcStack_3d0);
    uVar16 = _strlen();
    if (uVar16 < 0x7ffffffffffffff7) {
      if (uVar16 < 0x17) {
        uStack_348 = CONCAT17((char)uVar16,(undefined7)uStack_348);
        pppppppuVar11 = &pppppppuStack_358;
/* origin: github.com/pengussy */
      }
      else {
        uVar17 = (uVar16 & 0x7ffffffffffffff8) + 8;
        uVar18 = 0x19;
        if (uVar17 != 0x18) {
          uVar18 = uVar17;
        }
        pppppppuVar11 = (undefined8 *******)__Znwm(uVar18);
        uStack_348 = uVar18 | 0x8000000000000000;
        pppppppuStack_358 = pppppppuVar11;
        uStack_350 = uVar16;
      }
      _memmove(pppppppuVar11,uVar10,uVar16);
      *(undefined1 *)((long)pppppppuVar11 + uVar16) = 0;
      pbVar9 = (byte *)(*pcRam0000000002078510)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019dbe78();
      }
      pcStack_3d8 = (char *)(*pcRam00000000020784f8)();
      if (*pcStack_3d8 == '\x01') {
        lVar14 = 0;
        uVar16 = 0x3a6abe4a1a6ab551;
        do {
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar2 = (uint)(byte)pcStack_3d8[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar18 >> 0x17);
          pcStack_3d8[lVar14 + 0xe] =
               ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') - ((byte)(uVar17 >> 0x29) | 1) ^
               (byte)uVar18;
          uVar16 = lVar14 + -0x61c8864680b583eb +
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3d8[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0xd);
        *pcStack_3d8 = '\0';
      }
      pcStack_3d8 = pcStack_3d8 + 0xe;
      uStack_388 = func_0x0011ab24(&pcStack_3d8);
      pbVar9 = (byte *)(*pcRam0000000002078540)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019dbeb4();
      }
      pcStack_3e0 = (char *)(*pcRam0000000002078528)();
      if (*pcStack_3e0 == '\x01') {
        lVar14 = 0;
        uVar16 = 0xa0e9adce42e39dcb;
        do {
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
/*  chat: discord.gg/sdkhDjTex  */
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar2 = (uint)(byte)pcStack_3e0[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                  (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
          pcStack_3e0[lVar14 + 0x12] =
               ((byte)(uVar2 >> 3) & 0x1f | (char)uVar2 * ' ') ^ (byte)uVar18;
          uVar16 = lVar14 + -0x61c8864680b583eb +
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3e0[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x11);
        *pcStack_3e0 = '\0';
      }
      pcStack_3e0 = pcStack_3e0 + 0x12;
      uStack_390 = func_0x0011ab24(&pcStack_3e0);
      func_0x00171f84(&puStack_2b0,&uStack_388,&uStack_390);
      uStack_378 = 0;
      pppuStack_380 = (undefined8 ***)0x0;
      uStack_368 = 0;
      plStack_370 = (long *)0x0;
      uStack_360 = 0x3f800000;
      ppppuStack_3c0 = &pppuStack_380;
      func_0x00190320(&ppppuStack_3c0,&puStack_2b0,&puStack_2b0);
      uStack_3b8 = 0;
      ppppuStack_3c0 = (undefined8 ****)0x0;
      uStack_3a8 = 0;
      plStack_3b0 = (long *)0x0;
      uStack_3a0 = 0x3f800000;
      FUN_001d2b10(&uStack_328,&pppppppuStack_340,&pppppppuStack_358,param_2 + 8,&pppuStack_380,
                   &ppppuStack_3c0,&UNK_000493e0,0);
      plVar19 = plStack_3b0;
/* wm:more drops soon - github.com/pengussy */
      while (plVar20 = plVar19, plVar19 != (long *)0x0) {
        while( true ) {
          plVar19 = (long *)*plVar20;
          if (*(char *)((long)plVar20 + 0x3f) < '\0') {
            __ZdlPv(plVar20[5]);
            cVar3 = *(char *)((long)plVar20 + 0x27);
          }
          else {
            cVar3 = *(char *)((long)plVar20 + 0x27);
          }
          if (-1 < cVar3) break;
          __ZdlPv(plVar20[2]);
          __ZdlPv(plVar20);
          plVar20 = plVar19;
          if (plVar19 == (long *)0x0) goto LAB_0023afdc;
        }
        __ZdlPv(plVar20);
      }
LAB_0023afdc:
      ppppuVar4 = ppppuStack_3c0;
      ppppuStack_3c0 = (undefined8 ****)0x0;
      plVar19 = plStack_370;
      if (ppppuVar4 != (undefined8 ****)0x0) {
        __ZdlPv();
        plVar19 = plStack_370;
/* wm:stripping the watermark breaks the license */
      }
      while (plVar19 != (long *)0x0) {
        while( true ) {
          plVar20 = (long *)*plVar19;
          if (*(char *)((long)plVar19 + 0x3f) < '\0') {
            __ZdlPv(plVar19[5]);
            cVar3 = *(char *)((long)plVar19 + 0x27);
          }
          else {
            cVar3 = *(char *)((long)plVar19 + 0x27);
          }
          if (-1 < cVar3) break;
          __ZdlPv(plVar19[2]);
          __ZdlPv(plVar19);
          plVar19 = plVar20;
          if (plVar20 == (long *)0x0) goto LAB_0023b044;
// WM - thanks for reading - discord.gg/sdkhDjTex
        }
        __ZdlPv(plVar19);
        plVar19 = plVar20;
      }
LAB_0023b044:
      pppuVar5 = pppuStack_380;
      pppuStack_380 = (ulong ***)0x0;
      if (pppuVar5 != (undefined8 ***)0x0) {
        __ZdlPv();
      }
      if (alStack_288[0] < 0) {
        __ZdlPv(uStack_298);
      }
      if (lStack_2a0 < 0) {
        __ZdlPv(puStack_2b0);
      }
      if ((long)uStack_348 < 0) {
        __ZdlPv(pppppppuStack_358);
      }
      pcVar6 = pcRam0000000001f26db0;
      if ((long)uStack_330 < 0) {
        __ZdlPv(pppppppuStack_340);
        pcVar6 = pcRam0000000001f26db0;
      }
      pcRam0000000001f26db0 = pcVar6;
      if ((bStack_327 & 1) != 0) {
        lVar14 = __ZNSt3__16chrono12steady_clock3nowEv();
        do {
          puStack_2b0 = (undefined *)0x0;
          uStack_2a8 = 0;
          lStack_2a0 = 0;
          cVar3 = *(char *)(param_2 + 0x37);
          lVar12 = *(long *)(param_2 + 0x20);
          if (-1 < (long)cVar3) {
            lVar12 = param_2 + 0x20;
          }
          lVar1 = *(long *)(param_2 + 0x28);
          if (-1 < cVar3) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
            lVar1 = (long)cVar3;
          }
          func_0x0013be80(&puStack_2b0,lVar12,lVar12 + lVar1);
          __ZNSt3__14__fs10filesystem8__statusERKNS1_4pathEPNS_10error_codeE
                    (&pppuStack_380,&puStack_2b0,0);
          pppuVar5 = pppuStack_380;
          if (lStack_2a0 < 0) {
            __ZdlPv(puStack_2b0);
          }
          if (((uint)pppuVar5 & 0xff) != 0xff && ((ulong)pppuVar5 & 0xff) != 0) {
            func_0x001f887c(&puStack_2b0,param_2 + 0x20,4);
            pcVar6 = pcRam0000000001f26db0;
            if (lStack_228 == 0) {
              pbVar9 = (byte *)(*pcRam00000000020785d0)();
              if ((*pbVar9 & 1) == 0) {
                func_0x019dbf68();
              }
              pcStack_3f8 = (char *)(*pcRam00000000020785b8)();
              if (*pcStack_3f8 == '\x01') {
                lVar14 = 0;
                uVar16 = 0x40b4c968d01791fa;
                do {
                  uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                  uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
                  uVar18 = uVar17 ^ uVar17 >> 0x21;
                  uVar2 = (uint)(byte)pcStack_3f8[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
                  uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) -
                          (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
                  pcStack_3f8[lVar14 + 0x1f] =
                       ((byte)(uVar2 >> 6) & 3 | (char)uVar2 * '\x04') ^ (byte)uVar18;
                  uVar16 = lVar14 + -0x61c8864680b583eb +
                           (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3f8[lVar14 + 1]) << 0x11);
                  lVar14 = lVar14 + 1;
                } while (lVar14 != 0x1e);
                *pcStack_3f8 = '\0';
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
              }
              pcStack_3f8 = pcStack_3f8 + 0x1f;
              uVar10 = func_0x0011ab24(&pcStack_3f8);
              (*pcVar6)(2,uVar10);
              *param_1 = &UNK_01dc0f78;
              param_1[3] = param_1;
            }
            else {
              func_0x00140b70(&pppuStack_380,
                              *(undefined8 *)((long)alStack_288 + *(long *)(puStack_2b0 + -0x18)),0)
              ;
              if (lStack_228 == 0) {
LAB_0023b464:
                __ZNSt3__18ios_base5clearEj
                          ((long)alStack_288 + *(long *)(puStack_2b0 + -0x18) + -0x28,
                           *(uint *)((long)alStack_288 + *(long *)(puStack_2b0 + -0x18) + -8) | 4);
              }
              else {
                iVar7 = (**(code **)(lStack_2a0 + 0x30))(&lStack_2a0);
                iVar8 = _fclose(lStack_228);
                lStack_228 = 0;
                alStack_288[0] = 0;
                uStack_290 = 0;
                alStack_288[2] = 0;
                alStack_288[1] = 0;
                alStack_288[4] = 0;
                alStack_288[3] = 0;
                uStack_114 = 0x20;
                if (iVar8 != 0 || iVar7 != 0) goto LAB_0023b464;
              }
              if ((long)plStack_370 < 0) {
/* watermarked copy - do not remove */
                func_0x00017ae8(&ppppuStack_3c0,pppuStack_380,uStack_378);
              }
              else {
                uStack_3b8 = uStack_378;
                ppppuStack_3c0 = (undefined8 ****)pppuStack_380;
                plStack_3b0 = plStack_370;
              }
              param_1[3] = 0;
              puVar13 = (undefined8 *)__Znwm(0x20);
              *puVar13 = &UNK_01dc0ff8;
              puVar13[2] = uStack_3b8;
              puVar13[1] = ppppuStack_3c0;
              puVar13[3] = plStack_3b0;
              ppppuStack_3c0 = (undefined8 ****)0x0;
              uStack_3b8 = 0;
              plStack_3b0 = (long *)0x0;
              param_1[3] = puVar13;
              if ((long)plStack_370 < 0) {
                __ZdlPv(pppuStack_380);
              }
            }
            puStack_2b0 = &UNK_01dbf1a0;
            apuStack_108[0] = &UNK_01dbf1c8;
            func_0x00140dd0(&lStack_2a0);
            __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&puStack_2b0,&UNK_01dbf1e0);
            __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_108);
            goto LAB_0023b3a4;
          }
          lVar12 = __ZNSt3__16chrono12steady_clock3nowEv();
          pcVar6 = pcRam0000000001f26db0;
          if (lVar14 + 30000000000 <= lVar12) goto LAB_0023b27c;
/* wm:reversing this took months of machine time */
          puStack_2b0 = (undefined *)0x5f5e100;
          __ZNSt3__111this_thread9sleep_forERKNS_6chrono8durationIxNS_5ratioILl1ELl1000000000EEEEE
                    (&puStack_2b0);
        } while( true );
      }
      pbVar9 = (byte *)(*pcRam0000000002078570)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019dbef0();
      }
      pcStack_3e8 = (char *)(*pcRam0000000002078558)();
      if (*pcStack_3e8 == '\x01') {
        lVar14 = 0;
        uVar16 = 0x8c9ff616adf9f66a;
        do {
          uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar17 ^ uVar17 >> 0x21;
          uVar2 = (uint)(byte)pcStack_3e8[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
// proprietary - see LICENSE - do not sell
          uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar17 >> 0x29) | 1);
          pcStack_3e8[lVar14 + 0x24] = ((byte)(uVar2 >> 5) & 7 | (byte)(uVar2 << 3)) - (char)uVar18;
          uVar16 = lVar14 + -0x61c8864680b583eb +
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3e8[lVar14 + 1]) << 0x11);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x23);
        *pcStack_3e8 = '\0';
      }
      pcStack_3e8 = pcStack_3e8 + 0x24;
      uVar10 = func_0x0011ab24(&pcStack_3e8);
      (*pcVar6)(2,uVar10);
      puVar15 = &UNK_01dc0e78;
      goto LAB_0023b39c;
    }
  }
  else {
    FUN_0000aa50();
  }
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x23b6a0);
  (*pcVar6)();
LAB_0023b27c:
// origin: github.com/pengussy
  pbVar9 = (byte *)(*pcRam00000000020785a0)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019dbf2c();
  }
  pcStack_3f0 = (char *)(*pcRam0000000002078588)();
  if (*pcStack_3f0 == '\x01') {
    lVar14 = 0;
    uVar16 = 0xa4aee10535523632;
    do {
      uVar17 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
      uVar18 = uVar17 ^ uVar17 >> 0x21;
      uVar2 = (uint)(byte)pcStack_3f0[lVar14 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17))
      ;
      pcStack_3f0[lVar14 + 0x2c] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar18;
      uVar16 = lVar14 + -0x61c8864680b583eb +
               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_3f0[lVar14 + 1]) << 0x11);
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x2b);
    *pcStack_3f0 = '\0';
  }
  pcStack_3f0 = pcStack_3f0 + 0x2c;
  uVar10 = func_0x0011ab24(&pcStack_3f0);
  (*pcVar6)(2,uVar10);
  puVar15 = &UNK_01dc0ef8;
LAB_0023b39c:
  *param_1 = puVar15;
  param_1[3] = param_1;
LAB_0023b3a4:
  lVar14 = func_0x001290c4(&uStack_328);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return lVar14;
  }
  ___stack_chk_fail();
  uVar10 = __Unwind_Resume();
  func_0x000a4ec0(&puStack_2b0);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
  func_0x001290c4(&uStack_328);
  uVar10 = __Unwind_Resume(uVar10);
  if ((long)plStack_370 < 0) {
    __ZdlPv(pppuStack_380);
  }
  func_0x000a4ec0(&puStack_2b0);
  func_0x001290c4(&uStack_328);
  uVar10 = __Unwind_Resume(uVar10);
  func_0x001290c4(&uStack_328);
  uVar10 = __Unwind_Resume(uVar10);
  func_0x001290c4(&uStack_328);
  uVar10 = __Unwind_Resume(uVar10);
  func_0x001290c4(&uStack_328);
  uVar10 = __Unwind_Resume(uVar10);
  func_0x0003d63c(&ppppuStack_3c0);
  func_0x0003d63c(&pppuStack_380);
  func_0x0001bb9c(&puStack_2b0);
  if ((long)uStack_348 < 0) {
    __ZdlPv(pppppppuStack_358);
  }
  if ((long)uStack_330 < 0) {
    __ZdlPv(pppppppuStack_340);
  }
  uVar10 = __Unwind_Resume(uVar10);
  func_0x001290c4(&uStack_328);
  uVar10 = __Unwind_Resume(uVar10);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  if (lStack_2a0 < 0) {
    __ZdlPv(puStack_2b0);
  }
  func_0x001290c4(&uStack_328);
  auVar21 = __Unwind_Resume(uVar10);
  if (*(char **)(auVar21._8_8_ + 8) == "ZN8RConsole13rconsoleinputEP9lua_StateE3$_0") {
    return auVar21._0_8_ + 8;
  }
  return 0;
}

