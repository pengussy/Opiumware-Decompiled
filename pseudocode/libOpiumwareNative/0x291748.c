/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x291748:014a3ba000
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x00291f70) */
/* WARNING: Removing unreachable block (ram,0x00291f60) */
/* WARNING: Removing unreachable block (ram,0x00291f50) */
/* WARNING: Removing unreachable block (ram,0x00291f40) */
/* WARNING: Removing unreachable block (ram,0x00291f80) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00291748(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                 undefined4 param_5)

{
  undefined8 ******ppppppuVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  undefined8 *******pppppppuVar12;
/* unlicensed copy if this notice is missing */
  int iVar13;
  int iVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuStack_310;
  undefined *puStack_308;
  undefined *puStack_300;
  undefined8 *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  undefined8 ******ppppppuStack_2d0;
  undefined8 *****pppppuStack_2c8;
  undefined8 uStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 *******pppppppuStack_288;
  undefined8 *******pppppppuStack_280;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined8 *******pppppppuStack_268;
  undefined8 *******pppppppuStack_260;
  long lStack_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined8 uStack_248;
  undefined7 uStack_240;
  char cStack_239;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined8 uStack_230;
  undefined7 uStack_228;
  undefined1 uStack_221;
  char cStack_219;
  undefined *apuStack_208 [19];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *******pppppppuStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 *******pppppppuStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
/*  no support for modified copies  */
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0xd8);
  uStack_80 = (int *)0x0;
  lStack_78 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  if (*(char *)((long)param_3 + 0x17) < '\0') {
    func_0x00017ae8(&uStack_f0,*param_3,param_3[1]);
  }
  else {
    uStack_e8 = param_3[1];
    uStack_f0 = *param_3;
    uStack_e0 = param_3[2];
  }
  pppppppuStack_288 = (undefined8 *******)0x0;
/* do not claim this as your own */
  pppppppuStack_280 = (undefined8 *******)0x0;
  uStack_278 = (undefined *)0x0;
  uStack_168 = 0;
  uStack_160 = 0;
  puStack_2f8 = (undefined8 *)0x0;
  uStack_2f0 = 0;
  lStack_2e8 = 0;
  puStack_170 = &uStack_168;
  func_0x0028ce50(&uStack_158,0,0,&pppppppuStack_288,&puStack_170,&puStack_2f8);
  if (lStack_2e8 < 0) {
    __ZdlPv(puStack_2f8);
  }
  puStack_2f8 = &uStack_168;
  func_0x0000e2fc(&puStack_2f8,uStack_168);
  if ((long)uStack_278 < 0) {
    __ZdlPv(pppppppuStack_288);
  }
  iVar13 = 0;
  ppppppuVar1 = (undefined8 ******)(param_1 + 5);
  puVar2 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
  do {
    uVar7 = func_0x002859a0(&uStack_f0,&uStack_80,&uStack_98,&uStack_b0,&uStack_c8,&uStack_cc);
    if ((uVar7 & 1) == 0) {
      func_0x0003d474(&pppppppuStack_288);
      uVar9 = func_0x00283894(&uStack_278,"Could not parse url: \'",0x16);
      uVar7 = param_3[1];
      puVar3 = (undefined8 *)*param_3;
      if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
        uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
        puVar3 = param_3;
      }
      uVar9 = func_0x00283894(uVar9,puVar3,uVar7);
// chat: discord.gg/sdkhDjTex
      func_0x00283894(uVar9,&UNK_01c2dfe0,1);
      func_0x00a70440(&puStack_2f8,&puStack_270);
      uStack_298 = 0;
      uStack_290 = 0;
      lStack_2a8 = 0;
      puStack_2b8 = (undefined8 *)0x0;
      uStack_2b0 = 0;
      puStack_2a0 = &uStack_298;
      func_0x0028ce50(param_1,0,0,&puStack_2f8,&puStack_2a0,&puStack_2b8);
      if (lStack_2a8 < 0) {
        __ZdlPv(puStack_2b8);
      }
      puStack_2b8 = &uStack_298;
      func_0x0000e2fc(&puStack_2b8,uStack_298);
      if (lStack_2e8 < 0) {
        __ZdlPv(puStack_2f8);
      }
      pppppppuStack_288 = (undefined8 *******)&UNK_01dbed58;
      uStack_278 = &UNK_01dbed80;
      apuStack_208[0] = &UNK_01dbeda8;
      puStack_270 = &UNK_01dbef48;
      if (cStack_219 < '\0') {
        __ZdlPv(uStack_230);
      }
      puStack_270 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_01f20528 + 0x10;
      __ZNSt3__16localeD1Ev(&pppppppuStack_268);
      __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&pppppppuStack_288,&UNK_01dbedc0);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_208);
joined_r0x002920c8:
      if (lStack_f8 < 0) {
        __ZdlPv(uStack_108);
      }
      goto joined_r0x00292118;
    }
// WM - keep the notice, keep the source honest
    puStack_2b8 = (undefined8 *)0x0;
    uStack_2b0 = 0;
    lStack_2a8 = 0;
    if (uStack_70 < 0) {
      if (lStack_78 == 3) {
        if ((short)*uStack_80 == 0x7377 && *(char *)((long)uStack_80 + 2) == 's') {
          bVar5 = true;
          goto LAB_0029194c;
        }
      }
      else if (lStack_78 == 5) {
        piVar11 = uStack_80;
        goto LAB_002918e0;
      }
LAB_00291948:
      bVar5 = false;
    }
    else if (uStack_70._7_1_ == '\x03') {
      bVar5 = false;
      if ((short)uStack_80 == 0x7377) {
        bVar5 = uStack_80._2_1_ == 's';
      }
    }
    else {
      if (uStack_70._7_1_ != '\x05') goto LAB_00291948;
      piVar11 = (int *)&uStack_80;
LAB_002918e0:
      bVar5 = *piVar11 == 0x70747468 && (char)piVar11[1] == 's';
    }
LAB_0029194c:
    func_0x00285640(&pppppppuStack_288,bVar5,0xffffffff,&puStack_2b8,param_2 + 0x230);
    pppppppuVar16 = pppppppuStack_288;
    pppppppuStack_288 = (undefined8 *******)0x0;
    plVar8 = *(long **)(param_2 + 0xd0);
    *(undefined8 ********)(param_2 + 0xd0) = pppppppuVar16;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 8))();
/* WM - donate: donate/README.md */
      pppppppuVar16 = pppppppuStack_288;
      pppppppuStack_288 = (undefined8 *******)0x0;
      if (pppppppuVar16 != (undefined8 *******)0x0) {
        (*(code *)(*pppppppuVar16)[1])();
      }
    }
    uVar9 = __Znwm(0x10);
    func_0x0028faa0();
    lVar10 = *(long *)(param_2 + 0x1f0);
    *(undefined8 *)(param_2 + 0x1f0) = uVar9;
    if (lVar10 != 0) {
      func_0x0028fb34();
      __ZdlPv();
    }
    if (*(long *)(param_2 + 0xd0) == 0) {
      pppppuStack_2c8 = (undefined8 *****)0x0;
      uStack_2c0 = 0;
      pppppppuStack_288 = (undefined8 *******)0x0;
      pppppppuStack_280 = (undefined8 *******)0x0;
      uStack_278 = (undefined *)0x0;
      ppppppuStack_2d0 = &pppppuStack_2c8;
      func_0x0028ce50(param_1,0,0,&puStack_2b8,&ppppppuStack_2d0,&pppppppuStack_288);
      if ((long)uStack_278 < 0) {
        __ZdlPv(pppppppuStack_288);
      }
      pppppppuStack_288 = (undefined8 *******)&pppppuStack_2c8;
      func_0x0000e2fc(&pppppppuStack_288,pppppuStack_2c8);
// WM - more drops soon - github.com/pengussy
joined_r0x00291b0c:
      iVar14 = 1;
      iVar6 = 1;
    }
    else {
      func_0x0028ac40(&puStack_2f8,param_2 + 0x2b8,param_2 + 0xd0,param_2 + 0x1f0,param_2 + 0x1f8,
                      param_2 + 0x1fd);
      FUN_0028ae44(&pppppppuStack_288,&puStack_2f8,&uStack_f0,param_4,&uStack_80,&uStack_98,
                   &uStack_b0,uStack_cc,param_5);
      uStack_158 = pppppppuStack_288;
      if ((long)puStack_140 < 0) {
        __ZdlPv(pppppppuStack_150);
      }
      puStack_148 = uStack_278;
      pppppppuStack_150 = pppppppuStack_280;
      puStack_140 = puStack_270;
      puStack_270 = (undefined *)((ulong)puStack_270 & 0xffffffffffffff);
      pppppppuStack_280 = (undefined8 *******)((ulong)pppppppuStack_280 & 0xffffffffffffff00);
      pppppppuStack_310 = &pppppppuStack_130;
      func_0x0000e2fc(&pppppppuStack_310,pppppppuStack_130);
      pppppppuStack_130 = pppppppuStack_260;
      lStack_128 = lStack_258;
      pppppppuStack_138 = &pppppppuStack_130;
      if (lStack_258 != 0) {
        pppppppuStack_260[2] = &pppppppuStack_130;
        pppppppuStack_260 = (undefined8 *******)0x0;
        lStack_258 = 0;
        pppppppuStack_138 = pppppppuStack_268;
        pppppppuStack_268 = &pppppppuStack_260;
      }
      if (lStack_110 < 0) {
        __ZdlPv(uStack_120);
      }
      uStack_120 = CONCAT71(uStack_24f,uStack_250);
      uStack_118 = uStack_248;
      lStack_110 = CONCAT17(cStack_239,uStack_240);
      cStack_239 = '\0';
/* unlicensed copy if this notice is missing - github.com/pengussy */
      uStack_250 = 0;
      if (lStack_f8 < 0) {
        __ZdlPv(uStack_108);
        uStack_108 = CONCAT71(uStack_237,uStack_238);
        uStack_100 = uStack_230;
        lStack_f8 = CONCAT17(uStack_221,uStack_228);
        uStack_221 = 0;
        uStack_238 = 0;
        if (cStack_239 < '\0') {
          __ZdlPv(CONCAT71(uStack_24f,uStack_250));
        }
      }
      else {
        uStack_108 = CONCAT71(uStack_237,uStack_238);
        uStack_100 = uStack_230;
        lStack_f8 = CONCAT17(uStack_221,uStack_228);
        uStack_221 = 0;
        uStack_238 = 0;
      }
      pppppppuStack_310 = &pppppppuStack_260;
      func_0x0000e2fc(&pppppppuStack_310,pppppppuStack_260);
      if ((long)puStack_270 < 0) {
        __ZdlPv(pppppppuStack_280);
      }
      else {
      }
      if (99 < uStack_158._4_4_ - 300U) {
        if ((char)uStack_158 == '\x01') {
          __ZNSt3__15mutex4lockEv(param_2 + 0x120);
          if (*(int *)(param_2 + 0x118) != 3) {
            __ZNSt3__15mutex4lockEv(param_2 + 0x340);
            uVar9 = __ZNSt3__16chrono12steady_clock3nowEv();
            *(undefined8 *)(param_2 + 0x380) = uVar9;
            __ZNSt3__15mutex6unlockEv(param_2 + 0x340);
            *(undefined1 *)(param_2 + 0x310) = 0;
            *(undefined4 *)(param_2 + 0x118) = 3;
/*  found on a paste site? it was re-uploaded illegally  */
          }
          __ZNSt3__15mutex6unlockEv(param_2 + 0x120);
        }
        puVar4 = puStack_140;
        *param_1 = uStack_158;
        param_1[2] = puStack_148;
        param_1[1] = pppppppuStack_150;
        pppppppuStack_150 = (undefined8 *******)0x0;
        puStack_148 = (undefined *)0x0;
        puStack_140 = (undefined *)0x0;
        param_1[3] = puVar4;
        param_1[4] = pppppppuStack_138;
        param_1[5] = pppppppuStack_130;
        param_1[6] = lStack_128;
        if (lStack_128 == 0) {
          param_1[4] = ppppppuVar1;
        }
        else {
          pppppppuStack_130[2] = ppppppuVar1;
          pppppppuStack_130 = (undefined8 *******)0x0;
          lStack_128 = 0;
          pppppppuStack_138 = &pppppppuStack_130;
        }
        param_1[8] = uStack_118;
        param_1[7] = uStack_120;
        param_1[9] = lStack_110;
        uStack_120 = 0;
        uStack_118 = 0;
        param_1[0xb] = uStack_100;
        param_1[10] = uStack_108;
        param_1[0xc] = lStack_f8;
        lStack_110 = 0;
        uStack_108 = 0;
        uStack_100 = 0;
        lStack_f8 = 0;
        goto joined_r0x00291b0c;
      }
// unlicensed copy if this notice is missing
      uStack_278 = (undefined *)CONCAT17(8,SUB87(uStack_278,0));
      pppppppuStack_288 = (undefined8 *******)0x6e6f697461636f4c;
      pppppppuStack_280 = (undefined8 *******)((ulong)pppppppuStack_280 & 0xffffffffffffff00);
      if (pppppppuStack_130 != (undefined8 *******)0x0) {
        pppppppuVar12 = pppppppuStack_130;
        pppppppuVar16 = &pppppppuStack_130;
        do {
          while( true ) {
            pppppppuVar15 = pppppppuVar12;
            iVar6 = func_0x002858d0(&lStack_128,&pppppppuStack_288,pppppppuVar15 + 4);
            if (iVar6 != 0) break;
            iVar6 = func_0x002858d0(&lStack_128,pppppppuVar15 + 4,&pppppppuStack_288);
            if (iVar6 == 0) {
              pppppppuVar16 = (undefined8 *******)*pppppppuVar16;
              if (pppppppuVar16 != (undefined8 *******)0x0) goto joined_r0x00291d1c;
              goto LAB_00291d44;
            }
            pppppppuVar12 = (undefined8 *******)pppppppuVar15[1];
            pppppppuVar16 = pppppppuVar15 + 1;
            if (pppppppuVar12 == (undefined8 *******)0x0) goto LAB_00291d44;
          }
          pppppppuVar12 = (undefined8 *******)*pppppppuVar15;
          pppppppuVar16 = pppppppuVar15;
        } while ((undefined8 *******)*pppppppuVar15 != (undefined8 *******)0x0);
      }
LAB_00291d44:
      pppppppuVar16 = &pppppppuStack_130;
/*  watermarked copy - do not remove  */
joined_r0x00291d1c:
      if ((long)uStack_278 < 0) {
        __ZdlPv(pppppppuStack_288);
      }
      if ((undefined8 ********)pppppppuVar16 == &pppppppuStack_130) {
        func_0x0003d474(&pppppppuStack_288);
        uVar9 = func_0x00283894(&uStack_278,"Missing Location Header for HTTP Redirect response. ",
                                0x34);
        uVar9 = func_0x00283894(uVar9,"Rejecting connection to ",0x18);
        uVar7 = param_3[1];
        puVar3 = (undefined8 *)*param_3;
        if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
          uVar7 = (ulong)*(byte *)((long)param_3 + 0x17);
          puVar3 = param_3;
        }
        uVar9 = func_0x00283894(uVar9,puVar3,uVar7);
        uVar9 = func_0x00283894(uVar9,", status: ",10);
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi(uVar9,uStack_158._4_4_);
        func_0x00a70440(&pppppppuStack_310,&puStack_270);
        if ((long)puStack_140 < 0) {
          __ZdlPv(pppppppuStack_150);
        }
        puStack_148 = puStack_308;
        pppppppuStack_150 = pppppppuStack_310;
        puStack_140 = puStack_300;
        pppppppuStack_288 = (undefined8 *******)&UNK_01dbed58;
        apuStack_208[0] = &UNK_01dbeda8;
        uStack_278 = &UNK_01dbed80;
        puStack_270 = &UNK_01dbef48;
        if (cStack_219 < '\0') {
          __ZdlPv(uStack_230);
/* WM - origin: github.com/pengussy */
        }
        puStack_270 = puVar2;
        __ZNSt3__16localeD1Ev(&pppppppuStack_268);
        __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(&pppppppuStack_288,&UNK_01dbedc0);
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(apuStack_208);
        iVar14 = 2;
        iVar6 = 2;
      }
      else {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                  (&uStack_f0,pppppppuVar16 + 7);
        iVar14 = 4;
        iVar6 = 4;
      }
    }
    if (lStack_2a8 < 0) {
      __ZdlPv(puStack_2b8);
      iVar6 = iVar14;
    }
    puVar4 = puStack_140;
    if (iVar6 != 4) {
      if (iVar6 != 2) goto joined_r0x002920c8;
      goto LAB_00291e70;
    }
    iVar13 = iVar13 + 1;
    if (iVar13 == 10) {
LAB_00291e70:
      *param_1 = uStack_158;
      param_1[2] = puStack_148;
      param_1[1] = pppppppuStack_150;
      pppppppuStack_150 = (undefined8 *******)0x0;
      puStack_148 = (undefined *)0x0;
// thanks for reading - discord.gg/sdkhDjTex
      puStack_140 = (undefined *)0x0;
      param_1[3] = puVar4;
      param_1[4] = pppppppuStack_138;
      param_1[5] = pppppppuStack_130;
      param_1[6] = lStack_128;
      if (lStack_128 == 0) {
        param_1[4] = ppppppuVar1;
      }
      else {
        pppppppuStack_130[2] = ppppppuVar1;
        pppppppuStack_130 = (undefined8 *******)0x0;
        lStack_128 = 0;
        pppppppuStack_138 = &pppppppuStack_130;
      }
      param_1[8] = uStack_118;
      param_1[7] = uStack_120;
      param_1[9] = lStack_110;
      uStack_120 = 0;
      uStack_118 = 0;
      param_1[0xb] = uStack_100;
      param_1[10] = uStack_108;
      param_1[0xc] = lStack_f8;
      lStack_110 = 0;
      uStack_108 = 0;
      uStack_100 = 0;
      lStack_f8 = 0;
joined_r0x00292118:
      if (lStack_110 < 0) {
        __ZdlPv(uStack_120);
      }
/* wm:keep the notice, keep the source honest */
      pppppppuStack_288 = &pppppppuStack_130;
      func_0x0000e2fc(&pppppppuStack_288,pppppppuStack_130);
      if ((long)puStack_140 < 0) {
        __ZdlPv(pppppppuStack_150);
      }
      __ZNSt3__15mutex6unlockEv(param_2 + 0xd8);
      return;
    }
  } while( true );
}

