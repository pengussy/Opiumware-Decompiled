/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x27bc70:d3e066136b
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_0027bc70(undefined1 param_1 [16],undefined8 param_2,long param_3,long param_4,undefined8 param_5
            )

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lStack_138;
  undefined8 uStack_120;
/* WM - proprietary - see LICENSE - do not sell */
  long lStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined1 uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  long *plStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  
  if (param_4 == 0) {
    return 0;
  }
  if (lRam0000000002093188 == 0) {
/* stripping the watermark breaks the license - github.com/pengussy */
    return 0;
  }
  puStack_e8 = *(undefined8 **)(param_3 + 0xf0);
  if (puStack_e8 == (undefined8 *)0x0) {
    return 0;
  }
  lVar8 = (long)*(char *)((long)puStack_e8 + 0x17);
  lVar11 = lVar8;
  if (lVar8 < 0) {
    lVar11 = puStack_e8[1];
  }
  if (lVar11 == 0) {
    return 0;
  }
  lStack_f0 = *(long *)(param_3 + 0x100);
  if (lStack_f0 == 0) {
    puVar7 = puStack_e8;
    if (*(char *)((long)puStack_e8 + 0x17) < '\0') {
/*  proprietary - see LICENSE - do not sell  */
      puVar7 = (undefined8 *)*puStack_e8;
      lVar8 = puStack_e8[1];
    }
    lStack_f0 = func_0x0000a43c(&uStack_d8,puVar7,lVar8);
    puStack_e8 = *(undefined8 **)(param_3 + 0xf0);
  }
  plStack_e0 = *(long **)(param_3 + 0xf8);
  lVar8 = 0;
  if (plStack_e0 != (long *)0x0) {
    lVar8 = plStack_e0[1];
    plStack_e0[1] = lVar8 + 1;
  }
  lVar8 = func_0x0027c2b8(lVar8,0x20931d8,&lStack_f0);
  auVar13 = __ZNSt3__16chrono12steady_clock3nowEv();
  if (lVar8 == 0) {
LAB_0027bd4c:
    lVar8 = lRam0000000002093188;
    if (lRam0000000002093188 == 0) {
LAB_0027bfcc:
      uVar12 = 0;
      lVar11 = 0;
      goto LAB_0027bfd4;
// WM - origin: github.com/pengussy
    }
    plVar9 = *(long **)(param_3 + 0xf0);
    if (*(char *)((long)plVar9 + 0x17) < '\0') {
      if (plVar9[1] == 0) goto LAB_0027bfcc;
      plVar9 = (long *)*plVar9;
    }
    else if (*(char *)((long)plVar9 + 0x17) == '\0') goto LAB_0027bfcc;
    lVar4 = func_0x01a1a080(uRam0000000001f262f0,auVar13._8_8_,plVar9);
    lVar11 = 0;
    if (lVar4 == 0) {
LAB_0027bf74:
      uVar12 = 0;
    }
    else {
      auVar14 = _objc_alloc(uRam0000000001f262f8);
      func_0x01a1a340(auVar14._0_8_,auVar14._8_8_,lVar4);
      lVar11 = _objc_autorelease();
      if (lVar11 == 0) {
        uVar12 = 1;
        lVar11 = 0;
      }
      else {
        uVar6 = func_0x01a1b580(lVar11);
        func_0x01a1b580(lVar11);
        uStack_a8 = 0;
/*  watermarked copy - do not remove  */
        uStack_a0 = 0;
        uStack_98 = uVar6;
        uStack_90 = param_2;
        lVar4 = func_0x01a19ba0(lVar11,extraout_x1,&uStack_a8,0,0);
        if (lVar4 == 0) {
          lVar11 = 0;
          uVar12 = 1;
        }
        else {
          uVar2 = _CGImageGetWidth(lVar4);
          uVar3 = _CGImageGetHeight(lVar4);
          lVar11 = 0;
          uVar12 = 1;
          if ((uVar2 != 0) && (uVar3 != 0)) {
            lVar10 = uVar2 * 4;
            lVar11 = uVar3 * lVar10;
            if (lVar11 == 0) {
              lStack_138 = 0;
            }
            else {
              if (lVar11 < 0) {
                FUN_0000abb4();
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x27bf84);
                (*pcVar1)();
              }
              lStack_138 = __Znwm(lVar11);
              _bzero(lStack_138,lVar11);
            }
            lVar11 = _CGColorSpaceCreateDeviceRGB();
            if (lVar11 == 0) {
LAB_0027bf64:
              lVar11 = 0;
// WM - more drops soon - github.com/pengussy
            }
            else {
              lVar5 = _CGBitmapContextCreate(lStack_138,uVar2,uVar3,8,lVar10,lVar11,&UNK_00004001);
              _CGColorSpaceRelease(lVar11);
              if (lVar5 == 0) goto LAB_0027bf64;
              _CGContextTranslateCTM(0,(double)uVar3,lVar5);
              _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,lVar5);
              _CGContextDrawImage(0,0,(double)uVar2,(double)uVar3,lVar5,lVar4);
              _CGContextRelease(lVar5);
              auVar14 = func_0x01a1b680(uRam0000000001f262e0,extraout_x1_00,0x46,uVar2,uVar3,0);
              func_0x01a1b460(auVar14._0_8_,auVar14._8_8_,1);
              auVar14 = func_0x01a1a760(lVar8,extraout_x1_01,auVar14._0_8_);
              lVar11 = auVar14._0_8_;
              if (lVar11 != 0) {
                uStack_d8 = 0;
                uStack_d0 = 0;
                uStack_c8 = 0;
                uStack_b0 = 1;
                uStack_c0 = uVar2;
                uStack_b8 = uVar3;
                func_0x01a1aa00(lVar11,auVar14._8_8_,&uStack_d8,0,lStack_138,lVar10);
              }
            }
            if (lStack_138 != 0) {
              __ZdlPv(lStack_138);
            }
            goto LAB_0027bf74;
          }
        }
      }
    }
LAB_0027bfd4:
    uStack_110 = uRam0000000002093190;
    lStack_108 = 0;
    uStack_100 = 0;
    lStack_f8 = 0;
    lVar8 = (long)*(char *)(*(long *)(param_3 + 0xf0) + 0x17);
    if (lVar8 < 0) {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      lVar8 = *(long *)(*(long *)(param_3 + 0xf0) + 8);
    }
    lStack_118 = lVar11;
    if (lVar11 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = func_0x01a19d00(lVar11);
    }
    lVar10 = auVar13._0_8_ + 1000000000;
    plStack_88 = &lStack_f0;
    uStack_80 = 0x20931d8;
    lStack_108 = lVar4 + lVar8;
    uStack_100 = uVar12;
    lStack_f8 = lVar10;
    lVar5 = func_0x0027c530(&uStack_80,&lStack_f0,&UNK_01bd2568,&plStack_88,&uStack_120);
    if ((long *)(lVar5 + 0x28) == &lStack_118) {
      if (lStack_118 != 0) {
        _objc_release();
      }
    }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    else {
      if (*(long *)(lVar5 + 0x28) != 0) {
        _objc_release();
      }
      *(long *)(lVar5 + 0x28) = lStack_118;
      *(undefined8 *)(lVar5 + 0x30) = uStack_110;
      *(long *)(lVar5 + 0x38) = lVar4 + lVar8;
      *(undefined1 *)(lVar5 + 0x40) = uVar12;
      *(long *)(lVar5 + 0x48) = lVar10;
      lStack_118 = 0;
    }
    if (lVar11 == 0) {
LAB_0027c114:
      uVar6 = 0;
      plVar9 = plStack_e0;
      goto joined_r0x0027c11c;
    }
  }
  else {
    *(undefined8 *)(lVar8 + 0x30) = uRam0000000002093190;
    lVar11 = *(long *)(lVar8 + 0x28);
    if (lVar11 == 0) {
      if (((*(byte *)(lVar8 + 0x40) & 1) == 0) && (*(long *)(lVar8 + 0x48) <= auVar13._0_8_))
      goto LAB_0027bd4c;
      goto LAB_0027c114;
    }
  }
  lStack_118 = *(long *)(param_3 + 0x108);
  uStack_80 = CONCAT44(*(float *)(param_3 + 0x114) + (float)((ulong)lStack_118 >> 0x20),
                       *(float *)(param_3 + 0x110) + (float)lStack_118);
  plStack_88 = _UNK_01adb7d0;
  uStack_120 = _UNK_01adb7d8;
  if (*(float *)(param_3 + 0x118) <= 0.0) {
    func_0x00324ab4(param_4,0,lVar11,&lStack_118,&uStack_80,&plStack_88,&uStack_120,param_5);
  }
  else {
/* found on a paste site? it was re-uploaded illegally */
    FUN_00324db0(param_4,0,lVar11,&lStack_118,&uStack_80,&plStack_88,&uStack_120,param_5,0xf0);
  }
  uVar6 = 1;
  plVar9 = plStack_e0;
joined_r0x0027c11c:
  if (plVar9 == (long *)0x0) {
    return uVar6;
  }
  LOAcquire();
  lVar8 = plVar9[1];
  plVar9[1] = lVar8 + -1;
  LORelease();
  if (lVar8 == 0) {
    plStack_e0 = plVar9;
    (**(code **)(*plVar9 + 0x10))(plVar9);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    return uVar6;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  }
  return uVar6;
}

