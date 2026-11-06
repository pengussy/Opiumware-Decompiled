/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3772a4:86177d4682
 */

void FUN_003772a4(ulong param_1,undefined8 *param_2,char *param_3,char *param_4,ulong param_5,
                 char *param_6,undefined4 param_7,char *param_8)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x19;
  ulong uVar13;
  undefined1 auVar14 [16];
  long lStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_110;
  undefined5 uStack_108;
  undefined3 uStack_103;
  undefined5 uStack_100;
  undefined3 uStack_fb;
// stripping the watermark breaks the license
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined *puStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
/* unlicensed copy if this notice is missing */
  lVar4 = (long)register0x00000008 + -0x10;
  uStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar11 = *(ulong *)(param_1 + 0x620);
  uVar6 = (uint)param_3;
  if ((uVar11 & 0x20) == 0) {
    uVar6 = 1;
  }
  uVar13 = (ulong)uVar6;
  uVar10 = (uint)uVar11;
  uVar7 = uVar10 & 7;
  if (uVar7 < 3) {
    if (uVar7 == 1) {
      if (*(long *)(param_1 + 0x5d0) == 0) {
        uVar3 = *param_2;
        *(undefined8 *)(param_1 + 0x5c8) = param_2[1];
        *(undefined8 *)(param_1 + 0x5c0) = uVar3;
/*  watermarked copy - do not remove  */
        bVar1 = *(byte *)(param_2 + 4);
        bVar2 = *(byte *)(param_1 + 0x5e0);
        *(byte *)(param_1 + 0x5e0) = bVar2 & 0xfe | bVar1 & 1;
        *(byte *)(param_1 + 0x5e0) = bVar2 & 0xfc | bVar1 & 1 | *(byte *)(param_2 + 4) & 2;
        if ((param_2[2] != 0) && (lVar9 = param_2[3], lVar9 != 0)) {
          if (lVar9 == -1) {
            lVar9 = -2;
          }
          param_3 = 
          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
          ;
          param_4 = (char *)0xc6b;
          lVar5 = func_0x00475ac0(param_2[2],lVar9 + 1);
          *(long *)(param_1 + 0x5d0) = lVar5;
          if (lVar5 != 0) {
            *(undefined1 *)(lVar5 + lVar9) = 0;
            *(long *)(param_1 + 0x5d8) = lVar9;
          }
        }
      }
      uStack_40 = 0;
      puStack_58 = (undefined *)0x0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7b = 0;
      uStack_68 = 0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
      uStack_70 = 0;
      lVar9 = *(long *)(param_1 + 0x48);
      if (lVar9 == 0) {
        if (((*(ulong *)(param_1 + 0x620) >> 0x29 & 1) == 0) ||
           ((uVar7 = (uint)*(ulong *)(param_1 + 0x620), (uVar7 >> 0x19 & 1) != 0 &&
            (*(char *)(param_1 + 0x478) == '\0')))) {
          lVar9 = 0;
        }
        else {
          uStack_90 = *(undefined8 *)(param_1 + 0x478);
          uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x480);
          uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x485);
          uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
          uStack_78 = *(undefined8 *)(param_1 + 0x640);
          uStack_70 = 0;
          uStack_68 = 0;
          uStack_60 = (ulong)(uVar7 >> 0x19 & 1);
          puStack_58 = &DAT_003757b0;
          uStack_50 = param_1;
          lVar9 = FUN_00370be4(&uStack_90);
          *(long *)(param_1 + 0x48) = lVar9;
          if (lVar9 == 0) {
            *(ulong *)(param_1 + 0x620) = *(ulong *)(param_1 + 0x620) & 0xfffffdffffffffff;
          }
        }
      }
      FUN_00371ad4(lVar9,param_2);
      if (uVar6 != 0) {
        uVar13 = *(ulong *)(param_1 + 0x620);
        uVar11 = uVar13 & 0xfffffffffffffff8 | 4;
        *(ulong *)(param_1 + 0x620) = uVar11;
        uStack_40 = 0;
        puStack_58 = (undefined *)0x0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_7b = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        lVar9 = *(long *)(param_1 + 0x48);
        uVar6 = (uint)uVar13;
        if (lVar9 == 0) {
          if (((uVar13 >> 0x29 & 1) == 0) ||
             (((uVar6 >> 0x19 & 1) != 0 && (*(char *)(param_1 + 0x478) == '\0')))) {
            lVar9 = 0;
          }
          else {
            uStack_90 = *(undefined8 *)(param_1 + 0x478);
            uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x480);
            uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x485);
            uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
            uStack_78 = *(undefined8 *)(param_1 + 0x640);
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = (ulong)(uVar6 >> 0x19 & 1);
            puStack_58 = &DAT_003757b0;
            uStack_50 = param_1;
            lVar9 = FUN_00370be4(&uStack_90);
            *(long *)(param_1 + 0x48) = lVar9;
            uVar11 = *(ulong *)(param_1 + 0x620);
            if (lVar9 == 0) {
              uVar11 = uVar11 & 0xfffffdffffffffff;
              *(ulong *)(param_1 + 0x620) = uVar11;
            }
          }
        }
        param_4 = (char *)(ulong)((uint)uVar11 >> 9 & 1);
        param_5 = (ulong)((uint)uVar11 >> 10 & 1);
        uVar6 = uVar6 & 7;
/* WM - proprietary - see LICENSE - do not sell */
        unaff_x19 = param_1;
        goto LAB_003777a8;
      }
      func_0x00375630(param_1);
      unaff_x19 = param_1;
    }
    else {
      if (uVar7 == 2) {
        if (uVar6 != 0) {
          uVar12 = uVar11 & 0xfffffffffffffff8 | 4;
          *(ulong *)(param_1 + 0x620) = uVar12;
          uStack_40 = 0;
          puStack_58 = (undefined *)0x0;
          uStack_60 = 0;
          uStack_48 = 0;
          uStack_50 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          uStack_7b = 0;
          uStack_68 = 0;
/* chat: discord.gg/sdkhDjTex */
          uStack_70 = 0;
          lVar9 = *(long *)(param_1 + 0x48);
          if (lVar9 == 0) {
            if (((uVar11 >> 0x29 & 1) == 0) ||
               (((uVar10 >> 0x19 & 1) != 0 && (*(char *)(param_1 + 0x478) == '\0')))) {
              lVar9 = 0;
            }
            else {
              uStack_90 = *(undefined8 *)(param_1 + 0x478);
              uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x480);
              uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x485);
              uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
              uStack_78 = *(undefined8 *)(param_1 + 0x640);
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = (ulong)(uVar10 >> 0x19 & 1);
              puStack_58 = &DAT_003757b0;
              uStack_50 = param_1;
              lVar9 = FUN_00370be4(&uStack_90);
              *(long *)(param_1 + 0x48) = lVar9;
/* wm:stripping the watermark breaks the license */
              uVar12 = *(ulong *)(param_1 + 0x620);
              unaff_x19 = param_1;
              if (lVar9 == 0) {
                uVar12 = uVar12 & 0xfffffdffffffffff;
                *(ulong *)(param_1 + 0x620) = uVar12;
              }
            }
          }
          param_4 = (char *)(ulong)((uint)uVar12 >> 9 & 1);
          param_5 = (ulong)((uint)uVar12 >> 10 & 1);
          uVar6 = 2;
          goto LAB_003777a8;
        }
        if ((*(byte *)(param_2 + 4) >> 1 & 1) == 0) goto LAB_003777b0;
        uVar12 = uVar11 & 0xfffffffffffffff8 | 3;
        *(ulong *)(param_1 + 0x620) = uVar12;
        uStack_40 = 0;
        puStack_58 = (undefined *)0x0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_7b = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        lVar9 = *(long *)(param_1 + 0x48);
        if (lVar9 == 0) {
          if (((uVar11 >> 0x29 & 1) == 0) ||
             (((uVar10 >> 0x19 & 1) != 0 && (*(char *)(param_1 + 0x478) == '\0')))) {
            lVar9 = 0;
          }
          else {
            uStack_90 = *(undefined8 *)(param_1 + 0x478);
            uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x480);
            uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x485);
/* wm:proprietary - see LICENSE - do not sell */
            uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
            uStack_78 = *(undefined8 *)(param_1 + 0x640);
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = (ulong)(uVar10 >> 0x19 & 1);
            puStack_58 = &DAT_003757b0;
            uStack_50 = param_1;
            lVar9 = FUN_00370be4(&uStack_90);
            *(long *)(param_1 + 0x48) = lVar9;
            uVar12 = *(ulong *)(param_1 + 0x620);
            unaff_x19 = param_1;
            if (lVar9 == 0) {
              uVar12 = uVar12 & 0xfffffdffffffffff;
              *(ulong *)(param_1 + 0x620) = uVar12;
            }
          }
        }
        param_4 = (char *)(ulong)((uint)uVar12 >> 9 & 1);
        param_5 = (ulong)((uint)uVar12 >> 10 & 1);
        uVar6 = 2;
        param_3 = (char *)0x3;
      }
      else {
LAB_00377334:
        if (*(long *)(param_1 + 0x5d0) == 0) {
          uVar3 = *param_2;
          *(undefined8 *)(param_1 + 0x5c8) = param_2[1];
          *(undefined8 *)(param_1 + 0x5c0) = uVar3;
          bVar1 = *(byte *)(param_2 + 4);
          bVar2 = *(byte *)(param_1 + 0x5e0);
          *(byte *)(param_1 + 0x5e0) = bVar2 & 0xfe | bVar1 & 1;
/* no support for modified copies */
          *(byte *)(param_1 + 0x5e0) = bVar2 & 0xfc | bVar1 & 1 | *(byte *)(param_2 + 4) & 2;
          if ((param_2[2] != 0) && (lVar9 = param_2[3], lVar9 != 0)) {
            if (lVar9 == -1) {
              lVar9 = -2;
            }
            lVar5 = func_0x00475ac0(param_2[2],lVar9 + 1,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                                    ,0xc6b);
            *(long *)(param_1 + 0x5d0) = lVar5;
            uVar13 = param_1;
            if (lVar5 != 0) {
              *(undefined1 *)(lVar5 + lVar9) = 0;
              *(long *)(param_1 + 0x5d8) = lVar9;
            }
          }
        }
        unaff_x19 = *(ulong *)(param_1 + 0x620);
        uVar11 = unaff_x19 & 0xfffffffffffffff8 | 4;
        *(ulong *)(param_1 + 0x620) = uVar11;
        uStack_40 = 0;
        puStack_58 = (undefined *)0x0;
        uStack_60 = 0;
        uStack_48 = 0;
        uStack_50 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_7b = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        lVar9 = *(long *)(param_1 + 0x48);
        uVar6 = (uint)unaff_x19;
        if (lVar9 == 0) {
          if (((unaff_x19 >> 0x29 & 1) == 0) ||
             (((uVar6 >> 0x19 & 1) != 0 && (*(char *)(param_1 + 0x478) == '\0')))) {
            lVar9 = 0;
/*  found on a paste site? it was re-uploaded illegally  */
          }
          else {
            uStack_90 = *(undefined8 *)(param_1 + 0x478);
            uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x480);
            uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x485);
            uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
            uStack_78 = *(undefined8 *)(param_1 + 0x640);
            uStack_70 = 0;
            uStack_68 = 0;
            uStack_60 = (ulong)(uVar6 >> 0x19 & 1);
            puStack_58 = &DAT_003757b0;
            uStack_50 = param_1;
            lVar9 = FUN_00370be4(&uStack_90);
            *(long *)(param_1 + 0x48) = lVar9;
            uVar11 = *(ulong *)(param_1 + 0x620);
            uVar13 = param_1;
            if (lVar9 == 0) {
              uVar11 = uVar11 & 0xfffffdffffffffff;
              *(ulong *)(param_1 + 0x620) = uVar11;
            }
          }
        }
/*  reversing this took months of machine time  */
        param_4 = (char *)(ulong)((uint)uVar11 >> 9 & 1);
        param_5 = (ulong)((uint)uVar11 >> 10 & 1);
        uVar6 = uVar6 & 7;
LAB_003777a8:
        param_3 = "\f";
      }
      FUN_003719e8(lVar9,uVar6);
    }
  }
  else if (uVar7 == 3) {
    if (uVar6 != 0) {
      uVar12 = uVar11 & 0xfffffffffffffff8 | 4;
      *(ulong *)(param_1 + 0x620) = uVar12;
      uStack_40 = 0;
      puStack_58 = (undefined *)0x0;
      uStack_60 = 0;
      uStack_48 = 0;
      uStack_50 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_7b = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      lVar9 = *(long *)(param_1 + 0x48);
      if (lVar9 == 0) {
        if (((uVar11 >> 0x29 & 1) == 0) ||
           (((uVar10 >> 0x19 & 1) != 0 && (*(char *)(param_1 + 0x478) == '\0')))) {
          lVar9 = 0;
        }
        else {
          uStack_90 = *(undefined8 *)(param_1 + 0x478);
          uStack_88 = (undefined5)*(undefined8 *)(param_1 + 0x480);
          uStack_83 = (undefined3)*(undefined8 *)(param_1 + 0x485);
          uStack_80 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
          uStack_78 = *(undefined8 *)(param_1 + 0x640);
          uStack_70 = 0;
          uStack_68 = 0;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          uStack_60 = (ulong)(uVar10 >> 0x19 & 1);
          puStack_58 = &DAT_003757b0;
          uStack_50 = param_1;
          lVar9 = FUN_00370be4(&uStack_90);
          *(long *)(param_1 + 0x48) = lVar9;
          uVar12 = *(ulong *)(param_1 + 0x620);
          unaff_x19 = param_1;
          if (lVar9 == 0) {
            uVar12 = uVar12 & 0xfffffdffffffffff;
            *(ulong *)(param_1 + 0x620) = uVar12;
          }
        }
      }
      param_4 = (char *)(ulong)((uint)uVar12 >> 9 & 1);
      param_5 = (ulong)((uint)uVar12 >> 10 & 1);
      uVar6 = 3;
      goto LAB_003777a8;
    }
  }
  else if (uVar7 != 4) goto LAB_00377334;
LAB_003777b0:
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_38) {
// WM - if you paid for this, you were scammed
    return;
  }
  lVar9 = ___stack_chk_fail();
  pcStack_98 = FUN_0037785c;
  lStack_b8 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar6 = (uint)*(undefined8 *)(lVar9 + 0x620);
  uStack_b0 = uVar13;
  uStack_a8 = unaff_x19;
  lStack_a0 = lVar4;
  if ((uVar6 >> 10 & 1) == 0) {
    if ((uVar6 >> 9 & 1) != 0) {
      func_0x019e3d08(lVar9,2);
      uVar13 = *(ulong *)(lVar9 + 0x620);
      uVar11 = uVar13 | 0x400;
      *(ulong *)(lVar9 + 0x620) = uVar11;
      uStack_c0 = 0;
      puStack_d8 = (undefined *)0x0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      lStack_d0 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_fb = 0;
      uStack_e8 = 0;
      uStack_f0 = 0;
      lVar4 = *(long *)(lVar9 + 0x48);
      uVar6 = (uint)uVar13;
      if (lVar4 == 0) {
        if (((uVar13 >> 0x29 & 1) == 0) ||
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
           (((uVar6 >> 0x19 & 1) != 0 && (*(char *)(lVar9 + 0x478) == '\0')))) {
          lVar4 = 0;
        }
        else {
          uStack_110 = *(undefined8 *)(lVar9 + 0x478);
          uStack_108 = (undefined5)*(undefined8 *)(lVar9 + 0x480);
          uStack_103 = (undefined3)*(undefined8 *)(lVar9 + 0x485);
          uStack_100 = (undefined5)((ulong)*(undefined8 *)(lVar9 + 0x485) >> 0x18);
          uStack_f8 = *(undefined8 *)(lVar9 + 0x640);
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e0 = (ulong)(uVar6 >> 0x19 & 1);
          puStack_d8 = &DAT_003757b0;
          lStack_d0 = lVar9;
          lVar4 = FUN_00370be4(&uStack_110);
          *(long *)(lVar9 + 0x48) = lVar4;
          uVar11 = *(ulong *)(lVar9 + 0x620);
          if (lVar4 == 0) {
            uVar11 = uVar11 & 0xfffffdffffffffff;
            *(ulong *)(lVar9 + 0x620) = uVar11;
          }
        }
      }
      param_4 = (char *)(ulong)((uint)uVar11 >> 9 & 1);
/* WM - more drops soon - github.com/pengussy */
      param_5 = (ulong)((uint)uVar11 >> 10 & 1);
      param_3 = (char *)(ulong)(uVar6 & 7);
      FUN_003719e8(lVar4,uVar6 & 7);
      func_0x003734b0(*(undefined8 *)(lVar9 + 0x418));
      goto LAB_00377974;
    }
    param_4 = "handshake cannot be confirmed before it is completed";
    param_6 = 
    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
    ;
    param_8 = "ossl_quic_channel_on_handshake_confirmed";
    param_3 = "";
    param_5 = 0;
    param_7 = 0xc1a;
    FUN_003779a4(lVar9,10);
    uVar3 = 0;
  }
  else {
LAB_00377974:
    uVar3 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_b8) {
    return;
  }
  auVar14 = ___stack_chk_fail(uVar3);
  lVar9 = auVar14._8_8_;
  lVar4 = auVar14._0_8_;
  uStack_180 = 0;
  pcStack_198 = (char *)0x0;
  lStack_1a0 = 0;
  uStack_188 = 0;
  pcStack_190 = (char *)0x0;
  uVar8 = 0xc0103;
  if (lVar9 != 1) {
    uVar8 = 0x17e;
  }
/*  if you paid for this, you were scammed  */
  func_0x00391900(lVar9);
  if ((*(byte *)(lVar4 + 0x624) >> 6 & 1) != 0) {
    return;
  }
  if (param_5 != 0) {
    func_0x004470e4(param_5);
  }
  if (param_3 == (char *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,0xddf,"ossl_quic_channel_raise_protocol_error_loc");
    func_0x004466b0(0x14,uVar8,"QUIC error code: 0x%llx%s%s%s, reason: \"%s\"");
  }
  else {
    func_0x003918e0(param_3);
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,0xdd6,"ossl_quic_channel_raise_protocol_error_loc");
    func_0x004466b0(0x14,uVar8,
                    "QUIC error code: 0x%llx%s%s%s (triggered by frame type: 0x%llx%s%s%s), reason: \"%s\""
                   );
  }
  if (param_6 != (char *)0x0) {
    func_0x004465b0(param_6,param_7,param_8);
  }
  if (*(long *)(lVar4 + 0x628) == 0) {
/* wm:origin: github.com/pengussy */
    lVar5 = func_0x00446c9c();
    *(long *)(lVar4 + 0x628) = lVar5;
    if (lVar5 == 0) goto LAB_00377aec;
  }
  func_0x00446cac();
LAB_00377aec:
  lStack_1a0 = lVar9;
  pcStack_198 = param_3;
  pcStack_190 = param_4;
  uStack_188 = _strlen(param_4);
  *(ulong *)(lVar4 + 0x620) = *(ulong *)(lVar4 + 0x620) | 0x4000000000;
  FUN_003772a4(lVar4,&lStack_1a0,0);
  return;
}

