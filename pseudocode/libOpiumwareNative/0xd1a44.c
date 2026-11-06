/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xd1a44:2ab7d82822
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x000d1d68) */
/* WARNING: Removing unreachable block (ram,0x000d1da4) */
/* WARNING: Removing unreachable block (ram,0x000d1e18) */

undefined8 FUN_000d1a44(ulong param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  char cVar7;
  byte *pbVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
// WM - found on a paste site? it was re-uploaded illegally
  byte *pbVar13;
  undefined *puVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong extraout_x8;
  ulong extraout_x8_00;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar17;
  ulong uVar18;
  int iStack_15c;
  long *plStack_150;
  undefined4 uStack_144;
  char *pcStack_140;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  char *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  char cStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
/* no support for modified copies - github.com/pengussy */
  undefined1 uStack_98;
  byte bStack_97;
  byte bStack_96;
  undefined4 uStack_95;
  undefined1 uStack_91;
  byte bStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined5 uStack_8d;
  char cStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  func_0x000d02b8();
  puStack_f0 = (undefined *)0x0;
  puStack_e8 = (undefined *)0x0;
  uStack_e0 = 0;
  func_0x000c9bdc(param_1,1,&puStack_f0);
  pbVar8 = (byte *)func_0x007a212c(param_1,2);
  uVar9 = func_0x007a212c(param_1,3);
  cVar7 = func_0x007a212c(param_1,4);
  puVar10 = (undefined1 *)func_0x007a2174(param_1,5,0xffffffff);
  if (0xe < (int)puVar10 + 1U) {
    pbVar8 = (byte *)(*pcRam0000000002069a20)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019c410c();
    }
// WM - no support for modified copies
    pcStack_138 = (char *)(*pcRam0000000002069a08)();
    if (*pcStack_138 == '\x01') {
      lVar11 = 0;
      uVar9 = 0x49ec6036ed5fe0c1;
      do {
        uVar17 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar17 = (uVar17 ^ uVar17 >> 0x21) * -0x3b314601e57a13ad;
        uVar18 = uVar17 ^ uVar17 >> 0x21;
        uVar2 = (uint)(byte)pcStack_138[lVar11 + 1] ^ (uint)uVar18 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) -
                (((uint)(uVar17 >> 0x29) | 1) + (int)(uVar18 >> 0x17));
        pcStack_138[lVar11 + 0x2c] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') ^ (byte)uVar18;
        uVar9 = lVar11 + -0x61c8864680b583eb +
                (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_138[lVar11 + 1]) << 0x11);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 0x2b);
      *pcStack_138 = '\0';
    }
    pcStack_138 = pcStack_138 + 0x2c;
    uVar16 = func_0x0011ab24(&pcStack_138);
    func_0x007a1abc(param_1,5,uVar16);
    goto LAB_000d2584;
  }
  uStack_100 = 0x1f26eb8;
  cStack_f8 = '\x01';
/* wm:chat: discord.gg/sdkhDjTex */
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x000d042c(param_1,&uStack_100);
  uVar17 = uRam0000000001f270e0;
  if ((((lRam0000000001f26f88 != 0) && (cRam0000000001f270e8 == '\x01')) &&
      (cRam0000000002097053 == '\x01')) && (lRam0000000001f26f88 == lRam0000000002097030)) {
    lVar11 = func_0x00791618(param_1);
    lVar12 = func_0x00791618(lRam0000000001f26f88);
    if (lVar11 == lVar12) {
      uStack_144 = func_0x00791650(param_1);
      plStack_150 = (long *)func_0x000d1188(param_1);
      func_0x00791660(param_1,uStack_144);
      if (((lRam0000000001f26f88 != 0) && (cRam0000000001f270e8 == '\x01')) &&
         ((cRam0000000002097053 == '\x01' &&
          ((uRam0000000001f270e0 == uVar17 && (lRam0000000001f26f88 == lRam0000000002097030)))))) {
        lVar11 = func_0x00791618(param_1);
        lVar12 = func_0x00791618(lRam0000000001f26f88);
        if ((plStack_150 != (long *)0x0) && (lVar11 == lVar12)) {
          if ((int)puVar10 < 0) {
            puVar10 = (undefined1 *)func_0x000d2768(pbVar8,uVar9,(int)cVar7);
            if (-1 < (int)(uint)puVar10) {
              if ((uint)puVar10 < 0xe) goto LAB_000d1ca8;
              uVar16 = 0;
              goto LAB_000d1cc8;
            }
            iStack_15c = 0;
            pbVar13 = (byte *)(*pcRam000000000205de10)(pbVar8);
            bVar4 = *pbVar13;
            uVar18 = extraout_x8_00;
            uVar5 = extraout_x9_00;
            lVar11 = extraout_x10_00;
            puVar1 = puStack_f0;
            uVar16 = uStack_b8;
          }
          else {
LAB_000d1ca8:
            uVar16 = *(undefined8 *)(&UNK_01ad8bd4 + ((ulong)puVar10 & 0xffffffff) * 0xc);
LAB_000d1cc8:
/* thanks for reading - discord.gg/sdkhDjTex */
            iStack_15c = 1;
            pbVar13 = (byte *)(*pcRam000000000205de10)(uVar16);
            bVar4 = *pbVar13;
            uVar18 = extraout_x8;
            uVar5 = extraout_x9;
            lVar11 = extraout_x10;
            puVar1 = puStack_f0;
            uVar16 = uStack_b8;
          }
          uStack_b8 = uVar5;
          puStack_f0 = puVar1;
          if (((bVar4 & 1) == 0) && (iRam0000000001f270ec != 0)) {
            puStack_a8 = (undefined *)0x0;
            uStack_a0 = 0;
            puStack_b0 = (undefined *)0x0;
            uStack_99 = 0;
            uStack_98 = 0;
            bStack_97 = 0;
            bStack_96 = 0;
            uStack_c0 = uVar18 & 0xffffffff | lVar11 << 0x20;
            uStack_d0 = uVar17;
            lVar11 = (long)puStack_e8 - (long)puVar1;
            uStack_c8 = uRam0000000001f27140;
            if (lVar11 == 0) {
              _memmove(0,puVar1,0);
              puStack_a8 = (undefined *)0x0;
            }
            else {
              if (lVar11 < 0) {
                FUN_0000abb4();
                goto LAB_000d2584;
              }
              puVar14 = (undefined *)__Znwm();
              uStack_a0 = SUB87(puVar14 + lVar11,0);
              uStack_99 = (undefined1)((ulong)(puVar14 + lVar11) >> 0x38);
              puStack_b0 = puVar14;
              puStack_a8 = puVar14;
// origin: github.com/pengussy
              _memcpy(puVar14,puVar1,lVar11);
              puStack_a8 = puVar14 + lVar11;
            }
            func_0x000cd550(param_1,&uStack_d0);
            if (((bStack_96 & 1) != 0) || ((bStack_97 & 1) != 0)) {
              if (puStack_b0 != (undefined *)0x0) {
                puStack_a8 = puStack_b0;
                __ZdlPv();
              }
              goto LAB_000d1b88;
            }
            if (puStack_f0 != (undefined *)0x0) {
              puStack_e8 = puStack_f0;
              __ZdlPv();
            }
            puStack_e8 = puStack_a8;
            puStack_f0 = puStack_b0;
            uStack_e0 = CONCAT17(uStack_99,uStack_a0);
            uVar16 = uStack_b8;
/* stripping the watermark breaks the license */
          }
          uStack_b8 = uVar16;
          if ((((lRam0000000001f26f88 != 0) && (cRam0000000001f270e8 == '\x01')) &&
              (cRam0000000002097053 == '\x01')) &&
             ((uRam0000000001f270e0 == uVar17 && (lRam0000000001f26f88 == lRam0000000002097030)))) {
            lVar11 = func_0x00791618(param_1);
            lVar12 = func_0x00791618(lRam0000000001f26f88);
            if (lVar11 == lVar12) {
              plVar15 = (long *)func_0x000d1188(param_1);
              if (lRam0000000001f26f88 == 0) goto LAB_000d1f94;
              if (cRam0000000001f270e8 != '\x01') goto LAB_000d1f94;
              if (cRam0000000002097053 != '\x01') goto LAB_000d1f94;
              if (uRam0000000001f270e0 != uVar17) goto LAB_000d1f94;
              if (lRam0000000001f26f88 == lRam0000000002097030) goto LAB_000d2104;
              goto LAB_000d1f94;
            }
          }
        }
      }
    }
  }
LAB_000d1b88:
  while( true ) {
/* origin: github.com/pengussy */
    if (cStack_f8 == '\x01') {
      __ZNSt3__115recursive_mutex6unlockEv(uStack_100);
    }
    if (puStack_f0 != (undefined *)0x0) {
      puStack_e8 = puStack_f0;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) {
      return 0;
    }
    plVar15 = (long *)___stack_chk_fail();
LAB_000d2104:
    lVar11 = func_0x00791618(param_1);
    lVar12 = func_0x00791618(lRam0000000001f26f88);
    if (((lVar11 == lVar12) && (plVar15 != (long *)0x0)) && (plVar15 == plStack_150)) break;
LAB_000d1f94:
    func_0x00791660(param_1,uStack_144);
// stripping the watermark breaks the license
  }
  if (*plStack_150 != lRam0000000001f26b60) {
    if (iStack_15c != 0) {
      if ((((pcRam0000000001f26fd8 != (code *)0x0) && (*plStack_150 == lRam0000000001f26b80)) &&
          ((long *)plStack_150[0x108] != (long *)0x0)) && (*(long *)plStack_150[0x108] != 0)) {
        pbVar8 = (byte *)(*pcRam000000000205ddf8)();
        uVar9 = (ulong)*pbVar8;
        *pbVar8 = 1;
        uStack_110 = uStack_110 & 0xffffffff00000000;
        func_0x000d28a8(&uStack_d0,0x1f26fb0,0x1f26fb8,&puStack_f0,&uStack_110);
        if ((uStack_d0 != 0) && ((*(byte *)(uStack_d0 + 0x48) & 1) != 0)) {
          uStack_110 = uStack_d0;
          uStack_108 = uStack_c8;
          if (uStack_c8 != 0) {
            *(long *)(uStack_c8 + 8) = *(long *)(uStack_c8 + 8) + 1;
          }
          (*pcRam0000000001f26fd8)(plStack_150,puVar10,&uStack_110,0,0);
          func_0x000154e0(&uStack_110);
        }
        func_0x000154e0(&uStack_d0);
        goto LAB_000d230c;
      }
      goto LAB_000d1f94;
    }
    if (pcRam0000000001f26fa0 != (code *)0x0) {
      __ZNSt3__15mutex4lockEv(0x1f26e28);
      puStack_a8 = puRam0000000001f27120;
      puStack_b0 = puRam0000000001f27118;
      uStack_98 = (undefined1)uRam0000000001f27130;
      bStack_97 = (byte)((uint7)uRam0000000001f27130 >> 8);
      bStack_96 = (byte)((uint7)uRam0000000001f27130 >> 0x10);
      uStack_95 = (undefined4)((uint7)uRam0000000001f27130 >> 0x18);
      uStack_a0 = (undefined7)uRam0000000001f27128;
      uStack_99 = (undefined1)((ulong)uRam0000000001f27128 >> 0x38);
      uStack_91 = (undefined1)uRam0000000001f27137;
      bStack_90 = (byte)((uint)uRam0000000001f27137 >> 8);
      uStack_8f = (undefined1)((uint)uRam0000000001f27137 >> 0x10);
// reversing this took months of machine time
      uStack_8e = (undefined1)((uint)uRam0000000001f27137 >> 0x18);
      uStack_c8 = uRam0000000001f27100;
      uStack_d0 = uRam0000000001f270f8;
      uStack_b8 = uRam0000000001f27110;
      uStack_c0 = uRam0000000001f27108;
      __ZNSt3__15mutex6unlockEv(0x1f26e28);
      uVar17 = uStack_c8;
      if ((((uStack_d0 & 1) != 0) && (param_1 = uVar17, uStack_c8 != 0)) &&
         (((bStack_90 & 1) != 0 &&
          (((*plStack_150 == lRam0000000001f26b80 && ((ulong *)plStack_150[0x108] != (ulong *)0x0))
           && (uStack_c8 == *(ulong *)plStack_150[0x108])))))) {
        puVar10 = (undefined1 *)(*pcRam000000000205ddf8)();
        uVar3 = *puVar10;
        *puVar10 = 1;
        puStack_128 = puStack_e8;
        puStack_130 = puStack_f0;
        uStack_120 = uStack_e0;
        puStack_f0 = (undefined *)0x0;
        puStack_e8 = (undefined *)0x0;
        uStack_e0 = 0;
        func_0x000ce2f0(&uStack_110,&puStack_130,uStack_8e);
        if (puStack_130 != (undefined *)0x0) {
          __ZdlPv();
        }
        (*pcRam0000000001f26fa0)
                  (uVar17,&uStack_110,pbVar8,uVar9,(int)cVar7,&uStack_c0,uStack_8f,0,0);
        func_0x000154e0(&uStack_110);
        *puVar10 = uVar3;
      }
    }
    goto LAB_000d1b88;
  }
  if (-1 < (int)(uint)puVar10) {
    if (((pcRam0000000001f26fa8 != (code *)0x0) && ((uint)puVar10 < 0xe)) &&
       ((((ulong)plStack_150[0x108] >> ((ulong)puVar10 & 0x3f) & 1) != 0 &&
        (plStack_150[0x10a] != 0)))) {
/* WM - origin: github.com/pengussy */
      pbVar8 = (byte *)(*pcRam000000000205ddf8)();
      uVar9 = (ulong)*pbVar8;
      *pbVar8 = 1;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      puStack_a8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
      uStack_98 = 0;
      bStack_97 = 0;
      bStack_96 = 0;
      uStack_95 = 0;
      uStack_91 = 0;
      uStack_a0 = 0;
      uStack_99 = 0;
      bStack_90 = (byte)lRam0000000001f26fb8;
      uStack_8f = (undefined1)((ulong)lRam0000000001f26fb8 >> 8);
      uStack_8e = (undefined1)((ulong)lRam0000000001f26fb8 >> 0x10);
      uStack_8d = (undefined5)((ulong)lRam0000000001f26fb8 >> 0x18);
      cStack_88 = '\0';
      if (((pcRam0000000001f26fb0 != (code *)0x0) && (lRam0000000001f26fb8 != 0)) &&
         ((ulong)((long)puStack_e8 - (long)puStack_f0) >> 0x20 == 0)) {
        puVar1 = &UNK_01ad8c7c;
        if (puStack_f0 != puStack_e8) {
          puVar1 = puStack_f0;
        }
        (*pcRam0000000001f26fb0)(&uStack_d0,puVar1,(long)puStack_e8 - (long)puStack_f0,1);
        cStack_88 = '\x01';
        uStack_c8 = uStack_c8 & 0xffffffffffffff00;
        (*pcRam0000000001f26fa8)(plStack_150,puVar10,&uStack_d0,0,0);
        if (cStack_88 == '\x01') {
          (*(code *)CONCAT53(uStack_8d,CONCAT12(uStack_8e,CONCAT11(uStack_8f,bStack_90))))
// WM - do not claim this as your own
                    (&uStack_d0);
        }
      }
LAB_000d230c:
      *pbVar8 = (byte)uVar9;
    }
    goto LAB_000d1f94;
  }
  func_0x00791660(param_1,uStack_144);
  FUN_000d05ac(&uStack_100);
  puVar1 = puStack_f0;
  puStack_e8 = (undefined *)0x0;
  uStack_e0 = 0;
  puStack_f0 = (undefined *)0x0;
  if (puVar1 != (undefined *)0x0) {
    __ZdlPv();
/* wm:if you paid for this, you were scammed */
  }
  pbVar8 = (byte *)(*pcRam0000000002069a50)();
  if ((*pbVar8 & 1) == 0) {
    func_0x019c4148();
  }
  pcStack_140 = (char *)(*pcRam0000000002069a38)();
  if (*pcStack_140 == '\x01') {
    lVar11 = 0;
    uVar9 = 0xa43b3e570d3c3612;
    do {
      bVar4 = pcStack_140[lVar11 + 1];
      cVar7 = func_0x00169e68((ulong)bVar4,uVar9);
      pcStack_140[lVar11 + 0x50] = cVar7;
      uVar9 = lVar11 + -0x61c8864680b583eb + (uVar9 >> 0x2f | (uVar9 ^ bVar4) << 0x11);
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x4f);
    *pcStack_140 = '\0';
  }
  pcStack_140 = pcStack_140 + 0x50;
  func_0x0011ab24(&pcStack_140);
  func_0x007a1b5c(param_1,"%s");
LAB_000d2584:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0xd2588);
  (*pcVar6)();
}

