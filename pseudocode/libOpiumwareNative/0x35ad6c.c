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
 *  file-id: 0x35ad6c:09a3f1d8d0
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0035ad6c(uint *param_1,long param_2,long param_3,ulong param_4,long *param_5)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 uVar10;
  long lVar11;
  long alStack_c0 [3];
  long lStack_a8;
  long lStack_a0;
  int iStack_98;
  undefined4 uStack_8c;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  uint *puStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar8 = *param_1;
  puVar9 = param_1;
  if (uVar8 == 0) {
LAB_0035adf4:
    puVar9[0x2d] = (uint)(puVar9[0x26] == 1);
    if (puVar9[0x26] == 1) {
      return 0xffffffff;
    }
    if (*(long *)(puVar9 + 0x1c) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,0xa7c,"ssl_write_internal");
      uVar10 = 0x114;
    }
    else {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      if ((puVar9[0x21] & 1) != 0) {
        puVar9[0x1a] = 1;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                        ,0xa83,"ssl_write_internal");
        func_0x004466b0(0x14,0xcf,0);
        puVar9[0x2d] = 1;
        return 0xffffffff;
      }
      if (param_4 == 0) {
        if ((puVar9[0x3c] < 0xb) && ((1 << (ulong)(puVar9[0x3c] & 0x1f) & 0x502U) != 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                          ,0xa91,"ssl_write_internal");
          func_0x004466b0(0x14,&UNK_000c0101,0);
          puVar9[0x2d] = 1;
          return 0;
        }
        iVar3 = func_0x003a967c(puVar9,1);
        if (iVar3 == 0) {
          return 0xffffffff;
        }
        if (((*(byte *)((long)puVar9 + 0x9b9) & 1) == 0) ||
           (lVar11 = func_0x003e7380(), lVar11 != 0)) {
          uVar10 = (**(code **)(*(long *)(param_1 + 6) + 0x60))(param_1,param_2,param_3,param_5);
          func_0x0035ac14(puVar9);
          return uVar10;
        }
        puStack_68 = param_1;
        uStack_60 = param_2;
        uStack_58 = param_3;
        uVar10 = func_0x0035a9e4(param_1,&puStack_68,&DAT_0035ab64);
        *param_5 = *(long *)(puVar9 + 0x5bc);
        func_0x0035ac14(puVar9);
        return uVar10;
      }
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,0xa89,"ssl_write_internal");
      uVar10 = 0x19c;
    }
    func_0x004466b0(0x14,uVar10,0);
    puVar9[0x2d] = 1;
    return 0xffffffff;
  }
  if ((uVar8 >> 7 & 1) == 0) {
    puVar9 = (uint *)0x0;
  }
  else {
    puVar9 = (uint *)func_0x00380678();
    uVar8 = *param_1;
  }
  if ((uVar8 >> 7 & 1) == 0) {
    if (puVar9 == (uint *)0x0) {
      return 0;
    }
    goto LAB_0035adf4;
  }
  *param_5 = 0;
  if (param_3 == 0) {
    iVar3 = FUN_0037e724(param_1,alStack_c0,3);
    if (iVar3 == 0) {
      return 0;
    }
    func_0x002f78bc(*(undefined8 *)(alStack_c0[0] + 0x58));
    func_0x004dfb50();
    uStack_8c = 1;
    uVar10 = extraout_x1_00;
    if (iStack_98 == 0) {
      if (lStack_a8 != 0) {
        *(undefined4 *)(lStack_a8 + 0x178) = 0;
      }
    }
// WM - stripping the watermark breaks the license
    else if (lStack_a0 != 0) {
      *(undefined4 *)(lStack_a0 + 0xb8) = 0;
    }
  }
  else {
    iVar3 = FUN_0037e724(param_1,alStack_c0,0x6a);
    uVar10 = extraout_x1;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (lStack_a0 == 0) {
    bVar2 = true;
    if ((param_4 & 0xfffffffe) == 0) goto LAB_0037d424;
LAB_0037d3bc:
    pcVar5 = "ossl_quic_write_flags";
    uVar4 = 0xb3f;
    puVar6 = (undefined *)0x19c;
LAB_0037d450:
    func_0x0037b358(alStack_c0,uVar10,uVar4,pcVar5,puVar6,0);
  }
  else {
    bVar2 = (*(byte *)(lStack_a0 + 0xa8) & 1) == 0;
    if ((param_4 & 0xfffffffe) != 0) goto LAB_0037d3bc;
LAB_0037d424:
    if ((*(ushort *)(lStack_a8 + 0x150) >> 5 & 1) != 0) {
LAB_0037d43c:
      pcVar5 = "ossl_quic_write_flags";
      uVar4 = 0xb44;
LAB_0037d44c:
      puVar6 = (undefined *)0xcf;
      goto LAB_0037d450;
    }
    iVar3 = func_0x00375608(*(undefined8 *)(lStack_a8 + 0xa0));
    uVar10 = extraout_x1_01;
    if (iVar3 != 0) goto LAB_0037d43c;
    iVar3 = FUN_0037c9cc(alStack_c0);
// do not claim this as your own
    lVar11 = lStack_a0;
    if (0 < iVar3) {
      if (param_3 == 0) {
        if ((param_4 & 1) != 0) {
          lVar11 = alStack_c0[0];
          do {
            bVar1 = *(byte *)(lVar11 + 0x70) >> 5 & 3;
            if (bVar1 != 0) break;
            lVar11 = *(long *)(lVar11 + 0x40);
          } while (lVar11 != 0);
          uVar10 = 1;
          func_0x0037d780(lStack_a0,0,1,param_4,bVar1 != 2);
          goto LAB_0037d45c;
        }
        goto LAB_0037d61c;
      }
      uVar10 = extraout_x1_02;
      if ((lStack_a0 != 0) && (lVar7 = *(long *)(lStack_a0 + 0x80), lVar7 != 0)) {
        puVar6 = (undefined *)0x16e;
        uVar8 = (uint)*(byte *)(lVar7 + 0x101);
        if (3 < *(byte *)(lVar7 + 0x101)) {
          if (uVar8 - 5 < 2) {
            puVar6 = (undefined *)0x177;
          }
          else if (uVar8 == 4) goto LAB_0037d67c;
          goto LAB_0037d604;
        }
        if (1 < uVar8 - 2) {
          if (uVar8 != 1) goto LAB_0037d604;
          uVar10 = func_0x003754c8(*(undefined8 *)(*(long *)(lStack_a0 + 0x78) + 0xa0));
          iVar3 = func_0x003897d4(uVar10,*(undefined8 *)(lVar11 + 0x80));
/* WM - watermarked copy - do not remove */
          uVar10 = extraout_x1_03;
          if (iVar3 == 0) goto LAB_0037d5fc;
          lVar7 = *(long *)(lVar11 + 0x80);
        }
        iVar3 = func_0x00388dc4(*(undefined8 *)(lVar7 + 0x70),0);
        uVar10 = extraout_x1_04;
        if (iVar3 != 0) {
LAB_0037d67c:
          puVar6 = (undefined *)0x16d;
          goto LAB_0037d604;
        }
        iVar3 = func_0x003806c4(alStack_c0[0]);
        if (iVar3 == 0) {
          if (bVar2) {
            uVar10 = func_0x0037d970();
          }
          else {
            uVar10 = func_0x0037d800(alStack_c0,param_2,param_3,param_4,param_5);
          }
          goto LAB_0037d45c;
        }
        lStack_88 = 0;
        iVar3 = func_0x0037f1c4(lStack_a0,param_2,param_3,&lStack_88);
/* more drops soon - github.com/pengussy */
        lVar11 = lStack_88;
        if (iVar3 == 0) {
          *param_5 = 0;
          pcVar5 = "quic_write_blocking";
          uVar4 = 0xa44;
          puVar6 = &UNK_000c0103;
          uVar10 = extraout_x1_05;
          goto LAB_0037d450;
        }
        if (lStack_88 != 0) {
          uVar10 = func_0x003754c8(*(undefined8 *)(*(long *)(lStack_a0 + 0x78) + 0xa0));
          func_0x003894ac(uVar10,*(undefined8 *)(lStack_a0 + 0x80));
        }
        if (((param_4 & 1) != 0) && (lVar11 == param_3)) {
          func_0x00388db0(*(undefined8 *)(*(long *)(lStack_a0 + 0x80) + 0x70));
        }
        uVar10 = func_0x003754c0(*(undefined8 *)(*(long *)(lStack_a0 + 0x78) + 0xa0));
        func_0x003827d0(uVar10,0);
        *param_5 = lStack_88;
        if (param_3 - lStack_88 == 0) {
LAB_0037d61c:
          uVar10 = 1;
          goto LAB_0037d45c;
        }
        lStack_78 = param_2 + lStack_88;
/* wm:do not claim this as your own */
        lStack_80 = lStack_a0;
        puStack_68 = (uint *)0x0;
        uStack_60 = CONCAT44(uStack_60._4_4_,0xc0103);
        uVar10 = *(undefined8 *)(alStack_c0[0] + 0x58);
        lStack_70 = param_3 - lStack_88;
        uStack_58 = param_4;
        func_0x0037a4f4(uVar10,0);
        uVar10 = func_0x0037a47c(uVar10);
        iVar3 = func_0x00382870(uVar10,&DAT_0037f294,&lStack_80,0);
        if (0 < iVar3) {
          *param_5 = *param_5 + (long)puStack_68;
          goto LAB_0037d61c;
        }
        lVar11 = *(long *)(lStack_a0 + 0x78);
        uVar10 = extraout_x1_06;
        if ((*(ushort *)(lVar11 + 0x150) >> 5 & 1) == 0) {
          iVar3 = func_0x00375608(*(undefined8 *)(lVar11 + 0xa0));
          uVar10 = extraout_x1_07;
          if (iVar3 == 0) {
            iVar3 = func_0x003755c8(*(undefined8 *)(lVar11 + 0xa0));
            uVar10 = extraout_x1_08;
            if (iVar3 != 0) {
              puVar6 = (undefined *)(uStack_60 & 0xffffffff);
              pcVar5 = "quic_write_blocking";
              uVar4 = 0xa64;
              goto LAB_0037d450;
            }
          }
        }
/* wm:proprietary - see LICENSE - do not sell */
        pcVar5 = "quic_write_blocking";
        uVar4 = 0xa62;
        goto LAB_0037d44c;
      }
LAB_0037d5fc:
      puVar6 = &UNK_000c0103;
LAB_0037d604:
      pcVar5 = "ossl_quic_write_flags";
      uVar4 = 0xb53;
      goto LAB_0037d450;
    }
  }
  uVar10 = 0;
LAB_0037d45c:
  func_0x002f78bc(*(undefined8 *)(alStack_c0[0] + 0x58));
  func_0x004dfb80();
  return uVar10;
}

