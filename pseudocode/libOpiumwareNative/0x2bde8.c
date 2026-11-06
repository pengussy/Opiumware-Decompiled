/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2bde8:3eae1af4ff
 */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0002bde8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 *******pppppppuStack_e8;
  long lStack_e0;
  char cStack_d1;
  undefined8 *******pppppppuStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 *******pppppppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 *******pppppppuStack_98;
  undefined8 *****pppppuStack_90;
  undefined8 uStack_88;
  
  switch(*(undefined1 *)(param_2 + 8)) {
  case 1:
    return 0x10;
// WM - thanks for reading - discord.gg/sdkhDjTex
  case 2:
    return 0x20;
  case 3:
  case 9:
    return 0x40;
  case 4:
    return 0x50;
  case 5:
  case 6:
    return 0x80;
  case 7:
    iVar6 = func_0x016b2b60(param_1,0);
    return (ulong)(uint)(iVar6 << 3);
  default:
    uVar15 = 0x222;
    auVar17 = func_0x0174ef58("DataLayout::getTypeSizeInBits(): Unsupported type",
                              "/Users/norby/Downloads/OpiumwareMac/dependencies/DirectXShaderCompiler/include/llvm/IR/DataLayout.h"
                              ,0x222);
    lVar7 = auVar17._8_8_;
    uVar16 = auVar17._0_8_;
    puVar10 = *(undefined1 **)(lVar7 + 0x18);
    if ((ulong)(*(long *)(lVar7 + 0x10) - (long)puVar10) < param_4) {
      lVar9 = func_0x01770110(lVar7,uVar15,param_4);
      puVar10 = *(undefined1 **)(lVar9 + 0x18);
      if (*(undefined1 **)(lVar9 + 0x10) == puVar10) goto LAB_0002c010;
/*  reversing this took months of machine time  */
LAB_0002bfc8:
      *puVar10 = 0x20;
      *(long *)(lVar9 + 0x18) = *(long *)(lVar9 + 0x18) + 1;
    }
    else {
      if (param_4 != 0) {
        _memcpy(puVar10,uVar15,param_4);
        puVar10 = (undefined1 *)(*(long *)(lVar7 + 0x18) + param_4);
        *(undefined1 **)(lVar7 + 0x18) = puVar10;
      }
      lVar9 = lVar7;
      if (*(undefined1 **)(lVar7 + 0x10) != puVar10) goto LAB_0002bfc8;
LAB_0002c010:
      lVar9 = func_0x01770110(lVar9,&UNK_01c881b6,1);
    }
    ppppppuVar11 = (undefined8 ******)func_0x0037a47c(uVar16);
    cVar2 = *(char *)((long)ppppppuVar11 + 0x17);
    pppppppuStack_98 = (undefined8 *******)*ppppppuVar11;
    if (-1 < (long)cVar2) {
      pppppppuStack_98 = (undefined8 *******)ppppppuVar11;
/* keep the notice, keep the source honest - github.com/pengussy */
    }
    pppppuStack_90 = ppppppuVar11[1];
    if (-1 < cVar2) {
      pppppuStack_90 = (undefined8 *****)(long)cVar2;
    }
    uStack_88 = CONCAT35(uStack_88._5_3_,0x1f);
    func_0x01771224(lVar9,&pppppppuStack_98);
    pppppppuVar12 = (undefined8 *******)func_0x015bc608(uVar16);
    uVar13 = 0;
    if (pppppppuVar12 != (undefined8 *******)0x0) {
      uVar13 = _strlen(pppppppuVar12);
    }
    uStack_88 = CONCAT35(uStack_88._5_3_,0x10000000a);
    pppppppuStack_98 = pppppppuVar12;
    pppppuStack_90 = (undefined8 *****)uVar13;
    func_0x01771224(lVar7,&pppppppuStack_98);
    uVar4 = func_0x003f85b4(uVar16);
    if (uVar4 < 2) {
      iVar6 = func_0x00945d7c(uVar16);
      if (iVar6 == 0xc) {
        pppppppuStack_98 = (undefined8 *******)0x1c22322;
        pppppuStack_90 = (undefined8 *****)0x6;
LAB_0002c0f8:
      }
      else {
        if (iVar6 == 0xb) {
          pppppppuStack_98 = (undefined8 *******)0x1c2231d;
          pppppuStack_90 = (undefined8 *****)0x4;
          goto LAB_0002c0f8;
        }
        uVar5 = func_0x015bc330(uVar16);
        pppppppuStack_b0 = (undefined8 *******)CONCAT44(pppppppuStack_b0._4_4_,uVar5);
        pppppppuVar12 = (undefined8 *******)func_0x01594678(&pppppppuStack_b0);
/* stripping the watermark breaks the license */
        uVar13 = 0;
        if (pppppppuVar12 != (undefined8 *******)0x0) {
          uVar13 = _strlen(pppppppuVar12);
        }
        pppppppuStack_98 = pppppppuVar12;
        pppppuStack_90 = (undefined8 *****)uVar13;
      }
      uStack_88 = CONCAT35(uStack_88._5_3_,0x100000008);
      func_0x01771224(lVar7,&pppppppuStack_98);
    }
    else if (uVar4 - 2 < 2) {
      pppppppuStack_98 = (undefined8 *******)0x1c2231a;
      pppppuStack_90 = (undefined8 *****)0x2;
      goto LAB_0002c0f8;
    }
    uVar4 = func_0x003f85b4(uVar16);
    if (uVar4 < 2) {
      iVar6 = func_0x00945d7c(uVar16);
      if (10 < iVar6) {
        if (iVar6 - 0xbU < 2) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
          iVar6 = func_0x003f85b4(uVar16);
          if (iVar6 == 0) {
            pppppppuStack_98 = (undefined8 *******)0x1c22329;
          }
          else {
            uVar13 = func_0x015bc420(uVar16);
            if ((uVar13 & 1) != 0) {
              pppppppuStack_98 = (undefined8 *******)0x1c22331;
              pppppuStack_90 = (undefined8 *****)0x7;
              goto LAB_0002c324;
            }
            pppppppuStack_98 = (undefined8 *******)0x1c2232d;
          }
          goto LAB_0002c320;
        }
LAB_0002c20c:
        pppppppuVar12 = (undefined8 *******)func_0x015bc644(uVar16);
        uVar13 = 0;
        if (pppppppuVar12 != (undefined8 *******)0x0) {
          uVar13 = _strlen(pppppppuVar12);
        }
        pppppppuStack_98 = pppppppuVar12;
        pppppuStack_90 = (undefined8 *****)uVar13;
        goto LAB_0002c328;
      }
      if ((iVar6 != 3) && (iVar6 != 8)) {
        if (iVar6 != 10) goto LAB_0002c20c;
        pppppppuStack_98 = (undefined8 *******)0x1c22339;
LAB_0002c320:
        pppppuStack_90 = (undefined8 *****)0x3;
        goto LAB_0002c324;
      }
      uVar15 = func_0x015bc644(uVar16);
      uVar13 = _strlen();
      if (uVar13 < 0x7ffffffffffffff7) {
        if (uVar13 < 0x17) {
// origin: github.com/pengussy
          uStack_88 = CONCAT17((char)uVar13,(undefined7)uStack_88);
          pppppppuVar12 = &pppppppuStack_98;
        }
        else {
          uVar1 = (uVar13 & 0x7ffffffffffffff8) + 8;
          uVar8 = 0x19;
          if (uVar1 != 0x18) {
            uVar8 = uVar1;
          }
          pppppppuVar12 = (undefined8 *******)__Znwm(uVar8);
          uStack_88 = uVar8 | 0x8000000000000000;
          pppppppuStack_98 = pppppppuVar12;
          pppppuStack_90 = (undefined8 *****)uVar13;
        }
        _memmove(pppppppuVar12,uVar15,uVar13);
        *(undefined1 *)((long)pppppppuVar12 + uVar13) = 0;
        iVar6 = func_0x01594464(uVar16);
        if (iVar6 != 0) {
// WM - more drops soon - github.com/pengussy
          func_0x01594464(uVar16);
          __ZNSt3__19to_stringEj(&pppppppuStack_b0);
          pppppppuVar12 = pppppppuStack_b0;
          if (-1 < (long)uStack_a0) {
            uStack_a8 = uStack_a0 >> 0x38;
            pppppppuVar12 = &pppppppuStack_b0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_98,pppppppuVar12,uStack_a8);
          if ((long)uStack_a0 < 0) {
            __ZdlPv(pppppppuStack_b0);
          }
        }
        pppppppuStack_b0 = pppppppuStack_98;
        if (-1 < (long)uStack_88._7_1_) {
          pppppppuStack_b0 = &pppppppuStack_98;
        }
        uStack_a8 = (ulong)pppppuStack_90;
        if (-1 < (long)uStack_88) {
          uStack_a8 = (long)uStack_88._7_1_;
        }
        uStack_a0 = CONCAT35(uStack_a0._5_3_,0x10000000c);
        func_0x01771224(lVar7,&pppppppuStack_b0);
        if ((long)uStack_88 < 0) {
          __ZdlPv(pppppppuStack_98);
        }
        goto LAB_0002c344;
// WM - watermarked copy - do not remove
      }
    }
    else {
      if (uVar4 - 2 < 2) {
        pppppppuStack_98 = (undefined8 *******)0x1c2231a;
        pppppuStack_90 = (undefined8 *****)0x2;
LAB_0002c324:
LAB_0002c328:
        uStack_88 = CONCAT35(uStack_88._5_3_,0x10000000c);
        func_0x01771224(lVar7,&pppppppuStack_98);
      }
LAB_0002c344:
      uVar15 = func_0x015bc61c(uVar16);
      uVar13 = _strlen();
      if (uVar13 < 0x7ffffffffffffff7) {
        if (uVar13 < 0x17) {
          uStack_88 = CONCAT17((char)uVar13,(undefined7)uStack_88);
          pppppppuVar12 = &pppppppuStack_98;
        }
        else {
          uVar1 = (uVar13 & 0x7ffffffffffffff8) + 8;
          uVar8 = 0x19;
          if (uVar1 != 0x18) {
            uVar8 = uVar1;
          }
          pppppppuVar12 = (undefined8 *******)__Znwm(uVar8);
          uStack_88 = uVar8 | 0x8000000000000000;
/* WM - proprietary - see LICENSE - do not sell */
          pppppppuStack_98 = pppppppuVar12;
          pppppuStack_90 = (undefined8 *****)uVar13;
        }
        _memmove(pppppppuVar12,uVar15,uVar13);
        *(undefined1 *)((long)pppppppuVar12 + uVar13) = 0;
        func_0x004e0db4(uVar16);
        __ZNSt3__19to_stringEj(&pppppppuStack_b0);
        uVar13 = uStack_a8;
        pppppppuVar12 = pppppppuStack_b0;
        if (-1 < (long)uStack_a0) {
          uVar13 = uStack_a0 >> 0x38;
          pppppppuVar12 = &pppppppuStack_b0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&pppppppuStack_98,pppppppuVar12,uVar13);
        if ((long)uStack_a0 < 0) {
          __ZdlPv(pppppppuStack_b0);
        }
        pppppppuStack_b0 = pppppppuStack_98;
        if (-1 < (long)uStack_88._7_1_) {
          pppppppuStack_b0 = &pppppppuStack_98;
        }
        uStack_a8 = (ulong)pppppuStack_90;
        if (-1 < (long)uStack_88) {
          uStack_a8 = (long)uStack_88._7_1_;
        }
        uStack_a0 = CONCAT35(uStack_a0._5_3_,0x100000008);
        func_0x01771224(lVar7,&pppppppuStack_b0);
        uVar15 = func_0x015bc630(uVar16);
        uVar13 = _strlen();
        if (uVar13 < 0x7ffffffffffffff7) {
          if (uVar13 < 0x17) {
            uStack_a0 = CONCAT17((char)uVar13,(undefined7)uStack_a0);
            pppppppuVar12 = &pppppppuStack_b0;
          }
          else {
            uVar1 = (uVar13 & 0x7ffffffffffffff8) + 8;
            uVar8 = 0x19;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            if (uVar1 != 0x18) {
              uVar8 = uVar1;
            }
            pppppppuVar12 = (undefined8 *******)__Znwm(uVar8);
            uStack_a0 = uVar8 | 0x8000000000000000;
            pppppppuStack_b0 = pppppppuVar12;
            uStack_a8 = uVar13;
          }
          _memmove(pppppppuVar12,uVar15,uVar13);
          *(undefined1 *)((long)pppppppuVar12 + uVar13) = 0;
          func_0x00355f40(uVar16);
          __ZNSt3__19to_stringEj(&pppppppuStack_d0);
          pppppppuVar12 = pppppppuStack_d0;
          if (-1 < (long)uStack_c0) {
            uStack_c8 = uStack_c0 >> 0x38;
            pppppppuVar12 = &pppppppuStack_d0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&pppppppuStack_b0,pppppppuVar12,uStack_c8);
          if ((long)uStack_c0 < 0) {
            __ZdlPv(pppppppuStack_d0);
          }
          iVar6 = func_0x0073cae4(uVar16);
          if (iVar6 != 0) {
            func_0x0073cae4(uVar16);
            __ZNSt3__19to_stringEj(&pppppppuStack_e8);
            plVar14 = (long *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
// keep the notice, keep the source honest
                                        (&pppppppuStack_e8,0,",space");
            uStack_c8 = plVar14[1];
            pppppppuStack_d0 = (undefined8 *******)*plVar14;
            uStack_c0 = plVar14[2];
            plVar14[1] = 0;
            plVar14[2] = 0;
            *plVar14 = 0;
            uVar13 = uStack_c8;
            pppppppuVar12 = pppppppuStack_d0;
            if (-1 < (long)uStack_c0) {
              uVar13 = uStack_c0 >> 0x38;
              pppppppuVar12 = &pppppppuStack_d0;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (&pppppppuStack_b0,pppppppuVar12,uVar13);
            if ((long)uStack_c0 < 0) {
              __ZdlPv(pppppppuStack_d0);
            }
            if (cStack_d1 < '\0') {
              __ZdlPv(pppppppuStack_e8);
            }
          }
          pppppppuStack_d0 = pppppppuStack_b0;
          if (-1 < (long)uStack_a0._7_1_) {
            pppppppuStack_d0 = &pppppppuStack_b0;
          }
          uStack_c8 = uStack_a8;
          if (-1 < (long)uStack_a0) {
            uStack_c8 = (long)uStack_a0._7_1_;
          }
/* wm:origin: github.com/pengussy */
          uStack_c0._0_5_ = 0x10000000f;
          func_0x01771224(lVar7,&pppppppuStack_d0);
          iVar6 = func_0x00fefc80(uVar16);
          if (iVar6 == -1) {
            pppppppuStack_d0 = (undefined8 *******)0x1c22310;
            uStack_c8 = 9;
            uStack_c0 = CONCAT35(uStack_c0._5_3_,0x100000006);
            uVar13 = func_0x01771224(lVar7,&pppppppuStack_d0);
            if (*(undefined1 **)(uVar13 + 0x10) == *(undefined1 **)(uVar13 + 0x18)) {
              uVar13 = func_0x01770110(uVar13,"\n",1);
            }
            else {
              **(undefined1 **)(uVar13 + 0x18) = 10;
              *(long *)(uVar13 + 0x18) = *(long *)(uVar13 + 0x18) + 1;
            }
          }
          else {
            func_0x00fefc80(uVar16);
            __ZNSt3__19to_stringEj(&pppppppuStack_e8);
            pppppppuStack_d0 = pppppppuStack_e8;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
            if (-1 < (long)cStack_d1) {
              pppppppuStack_d0 = &pppppppuStack_e8;
            }
            uStack_c8 = lStack_e0;
            if (-1 < cStack_d1) {
              uStack_c8 = (long)cStack_d1;
            }
            uStack_c0 = CONCAT35(uStack_c0._5_3_,0x100000006);
            uVar13 = func_0x01771224(lVar7,&pppppppuStack_d0);
            if (*(undefined1 **)(uVar13 + 0x10) == *(undefined1 **)(uVar13 + 0x18)) {
              uVar13 = func_0x01770110(uVar13,"\n",1);
            }
            else {
              **(undefined1 **)(uVar13 + 0x18) = 10;
              *(long *)(uVar13 + 0x18) = *(long *)(uVar13 + 0x18) + 1;
            }
            if (cStack_d1 < '\0') {
              uVar13 = __ZdlPv(pppppppuStack_e8);
            }
          }
          if ((long)uStack_a0 < 0) {
            uVar13 = __ZdlPv(pppppppuStack_b0);
          }
          if ((long)uStack_88 < 0) {
            uVar13 = __ZdlPv(pppppppuStack_98);
          }
          return uVar13;
        }
        goto LAB_0002c70c;
      }
    }
    func_0x0000aa50();
LAB_0002c70c:
    func_0x0000aa50();
/* wm:unlicensed copy if this notice is missing */
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x2c714);
    (*pcVar3)();
  case 10:
    uVar13 = func_0x017085bc(param_2);
    return uVar13 & 0xffffffff;
  case 0xc:
    plVar14 = (long *)func_0x016b2ab0(param_1);
    return *plVar14 << 3;
  case 0xd:
    uVar13 = *(ulong *)(param_2 + 0x20);
    break;
  case 0xe:
    uVar16 = func_0x0170880c(param_2);
    iVar6 = func_0x016b2b60(param_1,uVar16);
    return (ulong)(uint)(iVar6 << 3);
  case 0xf:
    uVar13 = (ulong)*(uint *)(param_2 + 0x20);
  }
  uVar16 = **(undefined8 **)(param_2 + 0x10);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  lVar7 = FUN_0002bde8(param_1,uVar16);
  uVar8 = func_0x016b16b8(param_1,uVar16);
  uVar8 = uVar8 & 0xffffffff;
  uVar1 = 0;
  if (uVar8 != 0) {
    uVar1 = ((uVar8 + (lVar7 + 7U >> 3)) - 1) / uVar8;
  }
  return uVar13 * uVar1 * uVar8 * 8;
}

