/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x6868:acdfb37f52
 */

/* WARNING: Removing unreachable block (ram,0x00006f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00006868(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 in_x7;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
/* WM - donate: donate/README.md */
  long *plStack_2e8;
  long *plStack_2e0;
  long *plStack_2d8;
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined8 uStack_2b0;
  long *plStack_2a8;
  long *plStack_2a0;
  long lStack_298;
  undefined1 auStack_290 [8];
  long *plStack_288;
  long *plStack_280;
  long lStack_278;
  undefined1 auStack_270 [16];
  long *plStack_260;
  undefined8 auStack_258 [2];
  long *plStack_248;
  undefined4 uStack_240;
// more drops soon - github.com/pengussy
  undefined4 uStack_23c;
  long *plStack_238;
  long *plStack_228;
  long *plStack_220;
  undefined1 uStack_218;
  undefined1 uStack_217;
  long *plStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
// watermarked copy - do not remove
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  undefined1 *puStack_128;
  long *plStack_120;
  undefined1 auStack_118 [160];
  long alStack_78 [3];
  
  auVar12._8_8_ = auStack_270._8_8_;
  auVar12._0_8_ = auStack_270._0_8_;
  alStack_78[0] = *(long *)PTR____stack_chk_guard_01f20200;
  uVar9 = 0x80004003;
  if ((param_2 == (long *)0x0) || (auStack_270 = auVar12, param_3 == (undefined8 *)0x0)) {
LAB_00006fa4:
    if (*(long *)PTR____stack_chk_guard_01f20200 == alStack_78[0]) {
      return uVar9;
    }
    iVar3 = ___stack_chk_fail();
  }
  else {
    *param_3 = 0;
    func_0x01726f20(auStack_258,*(undefined8 *)(param_1 + 0x10));
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    iVar3 = func_0x01783ef8(&plStack_260);
    if (-1 < iVar3) {
      lVar4 = func_0x0177d684();
      lStack_278 = lVar4;
      func_0x0177e05c(0);
      auVar12 = func_0x0177e05c(plStack_260);
      auStack_270 = auVar12;
      pcVar5 = (char *)(**(code **)(*param_2 + 0x18))(param_2);
      iVar3 = (**(code **)(*param_2 + 0x20))(param_2);
      if (iVar3 == 0) {
LAB_00006994:
        plStack_280 = (long *)0x0;
        iVar3 = func_0x0172875c(param_2,*(undefined8 *)(param_1 + 0x10),&plStack_280,0);
        if (iVar3 < 0) {
          puVar8 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar8 = &UNK_01dbcdf0;
          *(int *)(puVar8 + 1) = iVar3;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[2] = 0;
          ___cxa_throw(puVar8,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_00007308;
        }
        pcVar5 = (char *)(**(code **)(*plStack_280 + 0x30))();
        iVar3 = (**(code **)(*plStack_280 + 0x20))();
        iVar3 = iVar3 + -1;
/* watermarked copy - do not remove */
      }
      else if (*pcVar5 == 'B') {
        if (((pcVar5[1] != 'C') || (pcVar5[2] != -0x40)) ||
           (plStack_280 = (long *)0x0, pcVar5[3] != -0x22)) goto LAB_00006994;
      }
      else {
        if (((*pcVar5 != -0x22) || (pcVar5[1] != -0x40)) ||
           ((pcVar5[2] != '\x17' || (pcVar5[3] != '\v')))) goto LAB_00006994;
        plStack_280 = (long *)0x0;
      }
      func_0x017520a4(&plStack_288,pcVar5,iVar3,&UNK_01cb7848,0,0);
      func_0x016e56cc(auStack_290);
      uStack_180 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      uStack_188 = 0;
      lStack_190 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_170 = 0;
      uStack_178 = 0;
      uStack_160 = 0;
      lStack_168 = 0;
      lStack_150 = 0;
      uStack_158 = 0;
      lStack_140 = 0;
      lStack_148 = 0;
      uStack_138 = 0;
      plStack_120 = alStack_78;
      puStack_130 = auStack_118;
      puStack_128 = auStack_118;
      func_0x01752d94(&plStack_228,plStack_288);
      func_0x01216a90(&lStack_298,&plStack_228,&uStack_1b0,auStack_290);
// chat: discord.gg/sdkhDjTex
      plStack_2a0 = (long *)0x0;
      iVar3 = func_0x0172972c(auStack_258[0],&plStack_2a0);
      if (iVar3 < 0) {
        puVar8 = (undefined8 *)___cxa_allocate_exception(0x28);
        *puVar8 = &UNK_01dbcdf0;
        *(int *)(puVar8 + 1) = iVar3;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[2] = 0;
        ___cxa_throw(puVar8,&DAT_01dbcd58,&DAT_0000755c);
        goto LAB_00007308;
      }
      lStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2b0 = _UNK_01ad70d0;
      puStack_2d0 = &UNK_01dbce18;
      lStack_2c8 = 0;
      plStack_2a8 = plStack_2a0;
      if (plStack_2a0 != (long *)0x0) {
        (**(code **)(*plStack_2a0 + 8))();
      }
      if (lStack_298 == 0) {
        func_0x01755fa8(&uStack_1b0,"shader",&puStack_2d0,0,0);
        if (lStack_2b8 != lStack_2c8) {
          func_0x01771080(&puStack_2d0);
        }
        plStack_248 = (long *)0x0;
        (**(code **)*plStack_2a0)(plStack_2a0,&UNK_01ad7180,&plStack_248);
        uVar9 = (**(code **)(*plStack_248 + 0x18))();
        uVar7 = (**(code **)(*plStack_248 + 0x20))();
        func_0x00009284(&plStack_228,2,0xfde9,uVar9,uVar7,0);
        iVar3 = func_0x00007c64(0x80004005,0,&plStack_228,1,&uStack_240);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
        if (-1 < iVar3) {
          iVar3 = 0;
          *param_3 = CONCAT44(uStack_23c,uStack_240);
        }
        if (plStack_220 != (long *)0x0) {
          (**(code **)(*plStack_220 + 0x10))();
          plStack_220 = (long *)0x0;
        }
        if (plStack_228 != (long *)0x0) {
          (**(code **)(*plStack_228 + 0x10))();
        }
        if (iVar3 < 0) {
          puVar8 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar8 = &UNK_01dbcdf0;
          *(int *)(puVar8 + 1) = iVar3;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[2] = 0;
          ___cxa_throw(puVar8,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_00007308;
        }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        if (plStack_248 != (long *)0x0) {
          (**(code **)(*plStack_248 + 0x10))();
        }
      }
      else {
        uVar9 = func_0x015b7070(lStack_298,0);
        uStack_218 = 1;
        uStack_217 = 1;
        if (s_dx_valver_01bf41d8[0] != '\0') {
          plStack_228 = (long *)0x1bf41d8;
          uStack_218 = 3;
        }
        lVar6 = func_0x01704b68(lStack_298,&plStack_228);
        if (lVar6 == 0) {
          func_0x000210fc(&plStack_228,&uStack_240,0);
          iVar3 = func_0x015acc50(uVar9,(ulong)plStack_228 & 0xffffffff,uStack_240);
          if (iVar3 != 0) {
            func_0x015b0650(uVar9);
          }
        }
        func_0x0144f468(lStack_298,&puStack_2d0,0);
        if (lStack_2b8 != lStack_2c8) {
          func_0x01771080(&puStack_2d0);
        }
        plStack_2d8 = (long *)0x0;
        lVar6 = lStack_298 + 0x50;
        lVar10 = *(long *)(lStack_298 + 0x60);
/* WM - proprietary - see LICENSE - do not sell */
        if (lVar10 == lVar6) {
          uVar9 = 0x10;
        }
        else {
          do {
            auVar13 = func_0x016feb70(lVar10);
            if ((8 < auVar13._8_8_) &&
               (*auVar13._0_8_ == 0x6762642e6d766c6c && (char)auVar13._0_8_[1] == '.')) {
              uVar9 = 0x17;
              goto LAB_00006cd4;
            }
            lVar10 = *(long *)(lVar10 + 8);
          } while (lVar10 != lVar6);
          uVar9 = 0x10;
        }
LAB_00006cd4:
        plStack_2e8 = (long *)0x0;
        plStack_2e0 = (long *)0x0;
        func_0x00021064(&plStack_228,&lStack_298,&plStack_2d8,auStack_258[0],uVar9,&plStack_2a0,0,
                        in_x7,0,0,0,0,0,0,&plStack_2e0,&plStack_2e8,0);
        if (plStack_2e8 != (long *)0x0) {
          (**(code **)(*plStack_2e8 + 0x10))();
          plStack_2e8 = (long *)0x0;
        }
        if (plStack_2e0 != (long *)0x0) {
          (**(code **)(*plStack_2e0 + 0x10))();
          plStack_2e0 = (long *)0x0;
        }
        func_0x000212cc(&plStack_228);
        func_0x000075f8(&uStack_240,1,plStack_2d8,0);
        iVar3 = func_0x00007c64(0,1,&uStack_240,1,&plStack_248);
        if (-1 < iVar3) {
          iVar3 = 0;
          *param_3 = plStack_248;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
        }
        if (plStack_238 != (long *)0x0) {
          (**(code **)(*plStack_238 + 0x10))();
          plStack_238 = (long *)0x0;
        }
        if ((long *)CONCAT44(uStack_23c,uStack_240) != (long *)0x0) {
          (**(code **)(*(long *)CONCAT44(uStack_23c,uStack_240) + 0x10))();
        }
        if (iVar3 < 0) {
          puVar8 = (undefined8 *)___cxa_allocate_exception(0x28);
          *puVar8 = &UNK_01dbcdf0;
          *(int *)(puVar8 + 1) = iVar3;
          puVar8[3] = 0;
          puVar8[4] = 0;
          puVar8[2] = 0;
          ___cxa_throw(puVar8,&DAT_01dbcd58,&DAT_0000755c);
          goto LAB_00007308;
        }
        if (plStack_1c0 != (long *)0x0) {
          (**(code **)(*plStack_1c0 + 0x10))();
          plStack_1c0 = (long *)0x0;
        }
        if (plStack_1c8 != (long *)0x0) {
          (**(code **)(*plStack_1c8 + 0x10))();
          plStack_1c8 = (long *)0x0;
        }
        plVar1 = plStack_228;
        plStack_228 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          func_0x01704330();
          __ZdlPv();
        }
        if (plStack_2d8 != (long *)0x0) {
          (**(code **)(*plStack_2d8 + 0x10))();
        }
      }
/* wm:found on a paste site? it was re-uploaded illegally */
      puStack_2d0 = &UNK_01dbce18;
      if (lStack_2b8 != lStack_2c8) {
        func_0x01771080(&puStack_2d0);
      }
      if (plStack_2a8 != (long *)0x0) {
        (**(code **)(*plStack_2a8 + 0x10))();
        plStack_2a8 = (long *)0x0;
      }
      func_0x0176fb84(&puStack_2d0);
      if (plStack_2a0 != (long *)0x0) {
        (**(code **)(*plStack_2a0 + 0x10))();
      }
      lVar6 = lStack_298;
      lStack_298 = 0;
      if (lVar6 != 0) {
        func_0x01704330();
        __ZdlPv();
      }
      puVar11 = puStack_128;
      if (puStack_130 == puStack_128) {
        if (puStack_130 != auStack_118 && puStack_130 != (undefined1 *)0x0) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
LAB_00006e90:
          __ZdaPv(puStack_130);
        }
      }
      else {
        do {
          puVar11 = puVar11 + -0x28;
        } while (puVar11 != puStack_130);
        if (puStack_130 != auStack_118 && puStack_130 != (undefined1 *)0x0) goto LAB_00006e90;
      }
      if (lStack_148 != 0) {
        lStack_140 = lStack_148;
        __ZdlPv();
      }
      if (lStack_150 < 0) {
        __ZdlPv(uStack_160);
        if (-1 < lStack_168) goto LAB_00006eb8;
LAB_00006f50:
        __ZdlPv(uStack_178);
        if (-1 < lStack_190) goto LAB_00006ec0;
LAB_00006f60:
        __ZdlPv(uStack_1a0);
        func_0x016e56d0(auStack_290);
        plVar1 = plStack_288;
      }
/* WM - chat: discord.gg/sdkhDjTex */
      else {
        if (lStack_168 < 0) goto LAB_00006f50;
LAB_00006eb8:
        if (lStack_190 < 0) goto LAB_00006f60;
LAB_00006ec0:
        func_0x016e56d0(auStack_290);
        plVar1 = plStack_288;
      }
      plStack_288 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        plStack_288 = (long *)0x0;
        (**(code **)(*plVar1 + 8))();
      }
      if (plStack_280 != (long *)0x0) {
        (**(code **)(*plStack_280 + 0x10))();
      }
      if (lVar4 == 0) {
        if (auVar12._0_4_ == 0) goto LAB_00006f00;
/* WM - stripping the watermark breaks the license */
      }
      else {
        func_0x0177e05c(0);
LAB_00006f00:
        func_0x0177e05c(lVar4);
      }
      if (plStack_260 != (long *)0x0) {
        (**(code **)(*plStack_260 + 8))(plStack_260);
      }
      uVar9 = 0;
      func_0x01726f84(auStack_258);
      goto LAB_00006fa4;
    }
  }
  puVar8 = (undefined8 *)___cxa_allocate_exception(0x28);
  *puVar8 = &UNK_01dbcdf0;
  *(int *)(puVar8 + 1) = iVar3;
  puVar8[3] = 0;
  puVar8[4] = 0;
// no support for modified copies
  puVar8[2] = 0;
  ___cxa_throw(puVar8,&DAT_01dbcd58,&DAT_0000755c);
LAB_00007308:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x730c);
  (*pcVar2)();
}

