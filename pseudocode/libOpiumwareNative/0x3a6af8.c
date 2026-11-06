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
 *  file-id: 0x3a6af8:0ee436586d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003a6af8(long param_1,long *param_2)

{
  ulong uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ushort *puVar15;
  uint *puVar16;
  long lVar17;
  uint uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined2 uStack_27a;
/* WM - chat: discord.gg/sdkhDjTex */
  long lStack_278;
  undefined1 auStack_270 [512];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lStack_278 = 0;
  if ((*(byte *)(param_1 + 0xb18) & 3) == 0) {
LAB_003a70ec:
    uVar10 = 1;
    goto LAB_003a70f0;
  }
  uVar13 = param_2[2] - 2;
  if ((ulong)param_2[2] < 2) {
LAB_003a6b60:
    func_0x004464bc();
    uVar10 = 0x532;
  }
  else {
    uVar3 = *(ushort *)*param_2;
    uVar12 = (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
    if (uVar13 < uVar12) goto LAB_003a6b60;
    lVar17 = 0;
    uVar18 = 0;
    uVar19 = *(undefined8 *)(param_1 + 8);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
/* do not claim this as your own */
    puVar16 = (uint *)((ushort *)*param_2 + 1);
    *param_2 = (long)puVar16 + uVar12;
    param_2[2] = uVar13 - uVar12;
    *(undefined4 *)(param_1 + 0xa68) = 0;
    while (uVar12 != 1) {
      if (uVar12 == 0) {
LAB_003a6f50:
        if (lStack_278 == 0) goto LAB_003a70ec;
        lVar9 = *param_2;
        lVar8 = param_2[1];
        auVar21 = func_0x00455f40(lVar17);
        if ((int)auVar21._0_4_ < 1) goto LAB_003a7054;
        uVar13 = param_2[2] - 2;
        if (1 < (ulong)param_2[2]) {
          puVar15 = (ushort *)*param_2 + 1;
          uVar3 = *(ushort *)*param_2;
          uVar12 = (ulong)((uint)(uVar3 >> 8) | (uVar3 & 0xff00ff) << 8);
/* wm:reversing this took months of machine time */
          if (uVar12 <= uVar13) {
            uVar6 = 0;
            *param_2 = (long)((long)puVar15 + uVar12);
            param_2[2] = uVar13 - uVar12;
            goto LAB_003a7084;
          }
        }
        func_0x004464bc();
        uVar10 = 0x5f1;
        goto LAB_003a6fa0;
      }
      uVar6 = (uint)(ushort)((ushort)*puVar16 >> 8) | ((ushort)*puVar16 & 0xff00ff) << 8;
      uVar20 = (ulong)uVar6;
      uVar13 = (uVar12 - 2) - uVar20;
      if ((uVar12 - 2 < uVar20) || (uVar13 < 4)) break;
      lVar9 = (long)puVar16 + 2;
      puVar16 = (uint *)(lVar9 + uVar20) + 1;
      uVar2 = *(uint *)(lVar9 + uVar20);
      if ((*(code **)(param_1 + 0x980) != (code *)0x0) &&
         (iVar4 = (**(code **)(param_1 + 0x980))(uVar10,lVar9,uVar20,&lStack_278), iVar4 == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,0x546,"tls_parse_ctos_psk");
        uVar10 = 0x50;
        goto LAB_003a6b84;
      }
      if (lStack_278 != 0) {
LAB_003a6c24:
        lVar17 = func_0x003614a0(lStack_278,0);
        if (lVar17 == 0) {
          func_0x004464bc();
          uVar10 = 0x581;
        }
        else {
          func_0x00361b60(lStack_278);
          lStack_278 = lVar17;
          _memcpy(lVar17 + 0x280,param_1 + 0x8e0,*(undefined8 *)(param_1 + 0x8d8));
/* proprietary - see LICENSE - do not sell */
          *(undefined8 *)(lVar17 + 0x278) = *(undefined8 *)(param_1 + 0x8d8);
          if (uVar18 == 0) {
            *(undefined4 *)(param_1 + 0xb24) = 1;
          }
          *(undefined4 *)(param_1 + 0xa68) = 1;
LAB_003a6c6c:
          lVar17 = func_0x00354280(uVar19,*(undefined4 *)(*(long *)(lVar17 + 0x2f8) + 0x40));
          if (lVar17 != 0) {
            func_0x00354280(uVar19,*(undefined4 *)(*(long *)(param_1 + 0x300) + 0x40));
            uVar7 = func_0x00455ed0();
            iVar4 = func_0x00455e48(lVar17,uVar7);
            if (iVar4 == 0) {
              func_0x00361b60();
              lStack_278 = 0;
              *(undefined4 *)(param_1 + 0xb24) = 0;
              *(undefined4 *)(param_1 + 0xa68) = 0;
              goto LAB_003a6cc0;
            }
            goto LAB_003a6f50;
          }
          func_0x004464bc();
          uVar10 = 0x5d8;
        }
LAB_003a7038:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,uVar10,"tls_parse_ctos_psk");
        uVar10 = 0x50;
/* WM - if you paid for this, you were scammed */
        puVar11 = &UNK_000c0103;
        goto LAB_003a704c;
      }
      if ((*(long *)(param_1 + 0x978) != 0) && (uVar20 < 0x101)) {
        func_0x004743e4(0,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                        ,0x204);
        lVar8 = func_0x00475a10(lVar9,uVar20,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                ,0x207);
        if (lVar8 == 0) {
          uVar10 = 0x553;
LAB_003a712c:
          func_0x004464bc();
        }
        else {
          uVar5 = (**(code **)(param_1 + 0x978))(uVar10,lVar8,auStack_270,0x200);
// no support for modified copies
          func_0x004743e4(lVar8,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                          ,0x558);
          if (0x200 < uVar5) {
            uVar10 = 0x55a;
            goto LAB_003a712c;
          }
          if (uVar5 == 0) {
LAB_003a6dc8:
            if (lStack_278 != 0) goto LAB_003a6c24;
            goto LAB_003a6ddc;
          }
          uStack_27a = 0x113;
          lVar8 = func_0x00355ff0(param_1,&uStack_27a);
          if (lVar8 != 0) {
            lStack_278 = func_0x00361168();
            if ((((lStack_278 != 0) &&
                 (iVar4 = func_0x0035de88(lStack_278,auStack_270,uVar5), iVar4 != 0)) &&
                (iVar4 = func_0x0036280c(lStack_278,lVar8), iVar4 != 0)) &&
               (iVar4 = func_0x003627f8(lStack_278,0x304), iVar4 != 0)) {
              func_0x0046eb00(auStack_270,uVar5);
              goto LAB_003a6dc8;
            }
            func_0x0046eb00(auStack_270,uVar5);
            func_0x004464bc();
            uVar10 = 0x574;
            goto LAB_003a7038;
/* more drops soon - github.com/pengussy */
          }
          func_0x0046eb00(auStack_270,uVar5);
          func_0x004464bc();
          uVar10 = 0x568;
        }
LAB_003a71c0:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                        ,uVar10,"tls_parse_ctos_psk");
        uVar10 = 0x50;
        puVar11 = &UNK_000c0103;
        goto LAB_003a6b88;
      }
LAB_003a6ddc:
      uVar5 = (uint)*(undefined8 *)(param_1 + 0x9b0);
      if (((uVar5 >> 0xe & 1) == 0) &&
         (((uVar5 >> 0x18 & 1) != 0 || (*(int *)(&UNK_000016f8 + param_1) == 0)))) {
        uVar6 = func_0x003674b4(param_1,lVar9,uVar20,0,0,&lStack_278);
        if (uVar6 == 3) {
LAB_003a7148:
          func_0x004464bc();
          uVar10 = 0x5a4;
          goto LAB_003a6b78;
        }
        if (uVar6 < 2) {
          func_0x004464bc();
          uVar10 = 0x5aa;
          goto LAB_003a71c0;
        }
        if ((uVar6 != 2) && (uVar6 != 4)) goto LAB_003a6e60;
      }
/* origin: github.com/pengussy */
      else {
        *(undefined4 *)(param_1 + 0xa68) = 1;
        if (uVar6 == 0x20) {
          lVar9 = func_0x00361c6c(param_1,lVar9,0x20);
          if (lVar9 != 0) {
            lStack_278 = lVar9;
LAB_003a6e60:
            if (((*(int *)(&UNK_000016f8 + param_1) == 0) || ((*(byte *)(param_1 + 0x9b3) & 1) != 0)
                ) || (iVar4 = func_0x003624b4(*(undefined8 *)(param_1 + 0xd40)), iVar4 != 0)) {
              uVar6 = *(uint *)(lStack_278 + 0x340);
              uVar12 = func_0x0048058c();
              lVar17 = lStack_278;
              if (uVar18 == 0) {
                uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
                uVar20 = 0;
                if (*(ulong *)(lStack_278 + 0x2e0) <= uVar12) {
                  uVar20 = uVar12 - *(ulong *)(lStack_278 + 0x2e0);
// proprietary - see LICENSE - do not sell
                }
                uVar12 = uVar20 + 1000000000;
                if (0xffffffffc46535ff < uVar20) {
                  uVar12 = 0xffffffffffffffff;
                }
                uVar14 = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10) * 1000000;
                uVar1 = 0;
                if ((ulong)uVar6 * 1000000 <= uVar14) {
                  uVar1 = uVar14 + (ulong)uVar6 * -1000000;
                }
                if ((uVar20 <= *(ulong *)(lStack_278 + 0x2d8)) &&
                   (uVar1 <= uVar12 && uVar12 <= uVar1 + 10000000000)) {
                  *(undefined4 *)(param_1 + 0xb24) = 1;
                }
              }
              goto LAB_003a6c6c;
            }
            func_0x00361b60(lStack_278);
            lStack_278 = 0;
          }
        }
        else if (uVar6 == 0) goto LAB_003a7148;
      }
LAB_003a6cc0:
      uVar18 = uVar18 + 1;
      uVar12 = uVar13 - 4;
    }
    func_0x004464bc();
    uVar10 = 0x53e;
  }
LAB_003a6b78:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,uVar10,"tls_parse_ctos_psk");
  uVar10 = 0x32;
LAB_003a6b84:
  puVar11 = (undefined *)0x6e;
// WM - watermarked copy - do not remove
LAB_003a6b88:
  func_0x003a9570(param_1,uVar10,puVar11,0);
  uVar10 = 0;
LAB_003a70f0:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar10;
  }
  auVar21 = ___stack_chk_fail(uVar10);
  if (*(long *)(auVar21._8_8_ + 0x10) == 0) {
    *(undefined4 *)(auVar21._0_8_ + 0xd60) = 2;
    return 1;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                  ,0x618,&UNK_01c3a81a);
  func_0x003a9570(auVar21._0_8_,0x32,0x116,0);
  return 0;
  while( true ) {
    uVar3 = *puVar15;
    uVar20 = (ulong)(byte)uVar3;
    uVar13 = uVar12 - 1;
    uVar12 = uVar13 - uVar20;
    if (uVar13 < uVar20) goto LAB_003a7164;
    puVar15 = (ushort *)((long)puVar15 + uVar20 + 1);
    uVar6 = uVar6 + 1;
    if (uVar18 < uVar6) break;
LAB_003a7084:
    if (uVar12 == 0) {
LAB_003a7164:
      func_0x004464bc(auVar21._0_8_,auVar21._8_8_,param_2[1],lVar9 - lVar8);
      uVar10 = 0x5f7;
      goto LAB_003a6fa0;
    }
  }
  if (auVar21._0_4_ == (uint)(byte)uVar3) {
    iVar4 = FUN_0039ca34(param_1,lVar17);
    if (iVar4 == 1) {
      *(uint *)(param_1 + 0xb40) = uVar18;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
      *(long *)(param_1 + 0x900) = lStack_278;
      goto LAB_003a70ec;
    }
  }
  else {
    func_0x004464bc(auVar21._0_8_,auVar21._8_8_,param_2[1],lVar9 - lVar8);
    uVar10 = 0x5fd;
LAB_003a6fa0:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,uVar10,"tls_parse_ctos_psk");
    uVar10 = 0x32;
    puVar11 = (undefined *)0x6e;
LAB_003a704c:
    func_0x003a9570(param_1,uVar10,puVar11,0);
  }
LAB_003a7054:
  func_0x00361b60(lStack_278);
  uVar10 = 0;
  goto LAB_003a70f0;
}

