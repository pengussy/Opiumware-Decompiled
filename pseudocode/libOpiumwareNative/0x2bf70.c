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
 *  file-id: 0x2bf70:e14d89933f
 *  --------------------------------------------------------------------------*/

void FUN_0002bf70(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 ***pppuVar10;
  undefined8 ****ppppuVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 ****ppppuStack_b8;
  long lStack_b0;
  char cStack_a1;
  undefined8 ****ppppuStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 ****ppppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
  undefined8 ****ppppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  
  puVar9 = *(undefined1 **)(param_2 + 0x18);
  if ((ulong)(*(long *)(param_2 + 0x10) - (long)puVar9) < param_4) {
    lVar8 = func_0x01770110(param_2,param_3,param_4);
    puVar9 = *(undefined1 **)(lVar8 + 0x18);
    if (*(undefined1 **)(lVar8 + 0x10) == puVar9) goto LAB_0002c010;
LAB_0002bfc8:
    *puVar9 = 0x20;
    *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
  }
  else {
    if (param_4 != 0) {
      _memcpy(puVar9,param_3,param_4);
      puVar9 = (undefined1 *)(*(long *)(param_2 + 0x18) + param_4);
      *(undefined1 **)(param_2 + 0x18) = puVar9;
    }
    lVar8 = param_2;
// WM - origin: github.com/pengussy
    if (*(undefined1 **)(param_2 + 0x10) != puVar9) goto LAB_0002bfc8;
LAB_0002c010:
    lVar8 = func_0x01770110(lVar8,&UNK_01c881b6,1);
  }
  pppuVar10 = (undefined8 ***)func_0x0037a47c(param_1);
  cVar3 = *(char *)((long)pppuVar10 + 0x17);
  ppppuStack_68 = (undefined8 ****)*pppuVar10;
  if (-1 < (long)cVar3) {
    ppppuStack_68 = (undefined8 ****)pppuVar10;
  }
  ppuStack_60 = pppuVar10[1];
  if (-1 < cVar3) {
    ppuStack_60 = (undefined8 **)(long)cVar3;
  }
  uStack_58 = CONCAT35(uStack_58._5_3_,0x1f);
  func_0x01771224(lVar8,&ppppuStack_68);
  ppppuVar11 = (undefined8 ****)func_0x015bc608(param_1);
  uVar12 = 0;
  if (ppppuVar11 != (undefined8 ****)0x0) {
// keep the notice, keep the source honest
    uVar12 = _strlen(ppppuVar11);
  }
  uStack_58 = CONCAT35(uStack_58._5_3_,0x10000000a);
  ppppuStack_68 = ppppuVar11;
  ppuStack_60 = (undefined8 **)uVar12;
  func_0x01771224(param_2,&ppppuStack_68);
  uVar5 = func_0x003f85b4(param_1);
  if (uVar5 < 2) {
    iVar7 = func_0x00945d7c(param_1);
    if (iVar7 == 0xc) {
      ppppuStack_68 = (undefined8 ****)0x1c22322;
      ppuStack_60 = (undefined8 **)0x6;
LAB_0002c0f8:
    }
    else {
      if (iVar7 == 0xb) {
        ppppuStack_68 = (undefined8 ****)0x1c2231d;
        ppuStack_60 = (undefined8 **)0x4;
        goto LAB_0002c0f8;
      }
      uVar6 = func_0x015bc330(param_1);
      ppppuStack_80 = (undefined8 ****)CONCAT44(ppppuStack_80._4_4_,uVar6);
      ppppuVar11 = (undefined8 ****)func_0x01594678(&ppppuStack_80);
/* WM - donate: donate/README.md */
      uVar12 = 0;
      if (ppppuVar11 != (undefined8 ****)0x0) {
        uVar12 = _strlen(ppppuVar11);
      }
      ppppuStack_68 = ppppuVar11;
      ppuStack_60 = (undefined8 **)uVar12;
    }
    uStack_58 = CONCAT35(uStack_58._5_3_,0x100000008);
    func_0x01771224(param_2,&ppppuStack_68);
  }
  else if (uVar5 - 2 < 2) {
    ppppuStack_68 = (undefined8 ****)0x1c2231a;
    ppuStack_60 = (undefined8 **)0x2;
    goto LAB_0002c0f8;
  }
  uVar5 = func_0x003f85b4(param_1);
  if (uVar5 < 2) {
    iVar7 = func_0x00945d7c(param_1);
    if (10 < iVar7) {
      if (iVar7 - 0xbU < 2) {
        iVar7 = func_0x003f85b4(param_1);
        if (iVar7 == 0) {
          ppppuStack_68 = (undefined8 ****)0x1c22329;
        }
        else {
          uVar12 = func_0x015bc420(param_1);
          if ((uVar12 & 1) != 0) {
            ppppuStack_68 = (undefined8 ****)0x1c22331;
            ppuStack_60 = (undefined8 **)0x7;
            goto LAB_0002c324;
          }
          ppppuStack_68 = (undefined8 ****)0x1c2232d;
        }
        goto LAB_0002c320;
      }
LAB_0002c20c:
// watermarked copy - do not remove
      ppppuVar11 = (undefined8 ****)func_0x015bc644(param_1);
      uVar12 = 0;
      if (ppppuVar11 != (undefined8 ****)0x0) {
        uVar12 = _strlen(ppppuVar11);
      }
      ppppuStack_68 = ppppuVar11;
      ppuStack_60 = (undefined8 **)uVar12;
      goto LAB_0002c328;
    }
    if ((iVar7 != 3) && (iVar7 != 8)) {
      if (iVar7 != 10) goto LAB_0002c20c;
      ppppuStack_68 = (undefined8 ****)0x1c22339;
LAB_0002c320:
      ppuStack_60 = (undefined8 **)0x3;
      goto LAB_0002c324;
    }
    uVar13 = func_0x015bc644(param_1);
    uVar12 = _strlen();
    if (uVar12 < 0x7ffffffffffffff7) {
      if (uVar12 < 0x17) {
        uStack_58 = CONCAT17((char)uVar12,(undefined7)uStack_58);
        ppppuVar11 = &ppppuStack_68;
      }
      else {
        uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        ppppuVar11 = (undefined8 ****)__Znwm(uVar2);
        uStack_58 = uVar2 | 0x8000000000000000;
        ppppuStack_68 = ppppuVar11;
        ppuStack_60 = (undefined8 **)uVar12;
      }
      _memmove(ppppuVar11,uVar13,uVar12);
      *(undefined1 *)((long)ppppuVar11 + uVar12) = 0;
      iVar7 = func_0x01594464(param_1);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (iVar7 != 0) {
        func_0x01594464(param_1);
        __ZNSt3__19to_stringEj(&ppppuStack_80);
        ppppuVar11 = ppppuStack_80;
        if (-1 < (long)uStack_70) {
          uStack_78 = uStack_70 >> 0x38;
          ppppuVar11 = &ppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppppuStack_68,ppppuVar11,uStack_78);
        if ((long)uStack_70 < 0) {
          __ZdlPv(ppppuStack_80);
        }
      }
      ppppuStack_80 = ppppuStack_68;
      if (-1 < (long)uStack_58._7_1_) {
        ppppuStack_80 = &ppppuStack_68;
      }
      uStack_78 = (ulong)ppuStack_60;
      if (-1 < (long)uStack_58) {
        uStack_78 = (long)uStack_58._7_1_;
      }
      uStack_70 = CONCAT35(uStack_70._5_3_,0x10000000c);
      func_0x01771224(param_2,&ppppuStack_80);
      if ((long)uStack_58 < 0) {
        __ZdlPv(ppppuStack_68);
      }
      goto LAB_0002c344;
    }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
  }
  else {
    if (uVar5 - 2 < 2) {
      ppppuStack_68 = (undefined8 ****)0x1c2231a;
      ppuStack_60 = (undefined8 **)0x2;
LAB_0002c324:
LAB_0002c328:
      uStack_58 = CONCAT35(uStack_58._5_3_,0x10000000c);
      func_0x01771224(param_2,&ppppuStack_68);
    }
LAB_0002c344:
    uVar13 = func_0x015bc61c(param_1);
    uVar12 = _strlen();
    if (uVar12 < 0x7ffffffffffffff7) {
      if (uVar12 < 0x17) {
        uStack_58 = CONCAT17((char)uVar12,(undefined7)uStack_58);
        ppppuVar11 = &ppppuStack_68;
      }
      else {
        uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
        uVar2 = 0x19;
        if (uVar1 != 0x18) {
          uVar2 = uVar1;
        }
        ppppuVar11 = (undefined8 ****)__Znwm(uVar2);
        uStack_58 = uVar2 | 0x8000000000000000;
        ppppuStack_68 = ppppuVar11;
        ppuStack_60 = (undefined8 **)uVar12;
      }
      _memmove(ppppuVar11,uVar13,uVar12);
      *(undefined1 *)((long)ppppuVar11 + uVar12) = 0;
      func_0x004e0db4(param_1);
      __ZNSt3__19to_stringEj(&ppppuStack_80);
      uVar12 = uStack_78;
/*  stripping the watermark breaks the license  */
      ppppuVar11 = ppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar12 = uStack_70 >> 0x38;
        ppppuVar11 = &ppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppuStack_68,ppppuVar11,uVar12);
      if ((long)uStack_70 < 0) {
        __ZdlPv(ppppuStack_80);
      }
      ppppuStack_80 = ppppuStack_68;
      if (-1 < (long)uStack_58._7_1_) {
        ppppuStack_80 = &ppppuStack_68;
      }
      uStack_78 = (ulong)ppuStack_60;
      if (-1 < (long)uStack_58) {
        uStack_78 = (long)uStack_58._7_1_;
// WM - stripping the watermark breaks the license
      }
      uStack_70 = CONCAT35(uStack_70._5_3_,0x100000008);
      func_0x01771224(param_2,&ppppuStack_80);
      uVar13 = func_0x015bc630(param_1);
      uVar12 = _strlen();
      if (uVar12 < 0x7ffffffffffffff7) {
        if (uVar12 < 0x17) {
          uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
          ppppuVar11 = &ppppuStack_80;
        }
        else {
          uVar1 = (uVar12 & 0x7ffffffffffffff8) + 8;
          uVar2 = 0x19;
          if (uVar1 != 0x18) {
            uVar2 = uVar1;
          }
/* do not claim this as your own */
          ppppuVar11 = (undefined8 ****)__Znwm(uVar2);
          uStack_70 = uVar2 | 0x8000000000000000;
          ppppuStack_80 = ppppuVar11;
          uStack_78 = uVar12;
        }
        _memmove(ppppuVar11,uVar13,uVar12);
        *(undefined1 *)((long)ppppuVar11 + uVar12) = 0;
        func_0x00355f40(param_1);
        __ZNSt3__19to_stringEj(&ppppuStack_a0);
        ppppuVar11 = ppppuStack_a0;
        if (-1 < (long)uStack_90) {
          uStack_98 = uStack_90 >> 0x38;
          ppppuVar11 = &ppppuStack_a0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (&ppppuStack_80,ppppuVar11,uStack_98);
        if ((long)uStack_90 < 0) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
          __ZdlPv(ppppuStack_a0);
        }
        iVar7 = func_0x0073cae4(param_1);
        if (iVar7 != 0) {
          func_0x0073cae4(param_1);
          __ZNSt3__19to_stringEj(&ppppuStack_b8);
          plVar14 = (long *)__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKc
                                      (&ppppuStack_b8,0,",space");
          uStack_98 = plVar14[1];
          ppppuStack_a0 = (undefined8 ****)*plVar14;
          uStack_90 = plVar14[2];
          plVar14[1] = 0;
          plVar14[2] = 0;
          *plVar14 = 0;
          uVar12 = uStack_98;
          ppppuVar11 = ppppuStack_a0;
          if (-1 < (long)uStack_90) {
            uVar12 = uStack_90 >> 0x38;
            ppppuVar11 = &ppppuStack_a0;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (&ppppuStack_80,ppppuVar11,uVar12);
          if ((long)uStack_90 < 0) {
            __ZdlPv(ppppuStack_a0);
          }
          if (cStack_a1 < '\0') {
            __ZdlPv(ppppuStack_b8);
          }
        }
        ppppuStack_a0 = ppppuStack_80;
        if (-1 < (long)uStack_70._7_1_) {
          ppppuStack_a0 = &ppppuStack_80;
        }
        uStack_98 = uStack_78;
        if (-1 < (long)uStack_70) {
          uStack_98 = (long)uStack_70._7_1_;
        }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
        uStack_90._0_5_ = 0x10000000f;
        func_0x01771224(param_2,&ppppuStack_a0);
        iVar7 = func_0x00fefc80(param_1);
        if (iVar7 == -1) {
          ppppuStack_a0 = (undefined8 ****)0x1c22310;
          uStack_98 = 9;
          uStack_90 = CONCAT35(uStack_90._5_3_,0x100000006);
          lVar8 = func_0x01771224(param_2,&ppppuStack_a0);
          if (*(undefined1 **)(lVar8 + 0x10) == *(undefined1 **)(lVar8 + 0x18)) {
            func_0x01770110(lVar8,"\n",1);
          }
          else {
            **(undefined1 **)(lVar8 + 0x18) = 10;
            *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
          }
        }
        else {
          func_0x00fefc80(param_1);
          __ZNSt3__19to_stringEj(&ppppuStack_b8);
          ppppuStack_a0 = ppppuStack_b8;
          if (-1 < (long)cStack_a1) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
            ppppuStack_a0 = &ppppuStack_b8;
          }
          uStack_98 = lStack_b0;
          if (-1 < cStack_a1) {
            uStack_98 = (long)cStack_a1;
          }
          uStack_90 = CONCAT35(uStack_90._5_3_,0x100000006);
          lVar8 = func_0x01771224(param_2,&ppppuStack_a0);
          if (*(undefined1 **)(lVar8 + 0x10) == *(undefined1 **)(lVar8 + 0x18)) {
            func_0x01770110(lVar8,"\n",1);
          }
          else {
            **(undefined1 **)(lVar8 + 0x18) = 10;
            *(long *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + 1;
          }
          if (cStack_a1 < '\0') {
            __ZdlPv(ppppuStack_b8);
          }
        }
        if ((long)uStack_70 < 0) {
          __ZdlPv(ppppuStack_80);
        }
        if ((long)uStack_58 < 0) {
          __ZdlPv(ppppuStack_68);
        }
        return;
      }
      goto LAB_0002c70c;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    }
  }
  func_0x0000aa50();
LAB_0002c70c:
  func_0x0000aa50();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x2c714);
  (*pcVar4)();
}

