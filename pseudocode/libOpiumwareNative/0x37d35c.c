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
 *  file-id: 0x37d35c:4de4dc1fdf
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0037d35c(undefined8 param_1,long param_2,long param_3,ulong param_4,long *param_5)

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
// keep the notice, keep the source honest
  undefined4 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long alStack_c0 [3];
  long lStack_a8;
  long lStack_a0;
  int iStack_98;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined4 uStack_60;
  ulong uStack_58;
  
  *param_5 = 0;
  if (param_3 == 0) {
    iVar3 = FUN_0037e724(param_1,alStack_c0,3);
    if (iVar3 == 0) {
      return 0;
    }
    func_0x002f78bc(*(undefined8 *)(alStack_c0[0] + 0x58));
    func_0x004dfb50();
    uStack_8c = 1;
    uVar9 = extraout_x1_00;
    if (iStack_98 == 0) {
      if (lStack_a8 != 0) {
        *(undefined4 *)(lStack_a8 + 0x178) = 0;
      }
    }
// proprietary - see LICENSE - do not sell
    else if (lStack_a0 != 0) {
      *(undefined4 *)(lStack_a0 + 0xb8) = 0;
    }
  }
  else {
    iVar3 = FUN_0037e724(param_1,alStack_c0,0x6a);
    uVar9 = extraout_x1;
    if (iVar3 == 0) {
      return 0;
    }
  }
  if (lStack_a0 != 0) {
    bVar2 = (*(byte *)(lStack_a0 + 0xa8) & 1) == 0;
    if ((param_4 & 0xfffffffe) == 0) goto LAB_0037d424;
LAB_0037d3bc:
    pcVar5 = "ossl_quic_write_flags";
    uVar4 = 0xb3f;
    uVar6 = 0x19c;
    goto LAB_0037d450;
  }
  bVar2 = true;
  if ((param_4 & 0xfffffffe) != 0) goto LAB_0037d3bc;
LAB_0037d424:
  if ((*(ushort *)(lStack_a8 + 0x150) >> 5 & 1) == 0) {
    iVar3 = func_0x00375608(*(undefined8 *)(lStack_a8 + 0xa0));
    uVar9 = extraout_x1_01;
    if (iVar3 != 0) goto LAB_0037d43c;
    iVar3 = FUN_0037c9cc(alStack_c0);
    lVar10 = lStack_a0;
    if (0 < iVar3) {
      if (param_3 == 0) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        if ((param_4 & 1) != 0) {
          lVar10 = alStack_c0[0];
          do {
            bVar1 = *(byte *)(lVar10 + 0x70) >> 5 & 3;
            if (bVar1 != 0) break;
            lVar10 = *(long *)(lVar10 + 0x40);
          } while (lVar10 != 0);
          uVar9 = 1;
          func_0x0037d780(lStack_a0,0,1,param_4,bVar1 != 2);
          goto LAB_0037d45c;
        }
        goto LAB_0037d61c;
      }
      uVar9 = extraout_x1_02;
      if ((lStack_a0 != 0) && (lVar7 = *(long *)(lStack_a0 + 0x80), lVar7 != 0)) {
        uVar6 = 0x16e;
        uVar8 = (uint)*(byte *)(lVar7 + 0x101);
        if (3 < *(byte *)(lVar7 + 0x101)) {
          if (uVar8 - 5 < 2) {
            uVar6 = 0x177;
          }
          else if (uVar8 == 4) goto LAB_0037d67c;
          goto LAB_0037d604;
        }
        if (1 < uVar8 - 2) {
          if (uVar8 != 1) goto LAB_0037d604;
          uVar9 = func_0x003754c8(*(undefined8 *)(*(long *)(lStack_a0 + 0x78) + 0xa0));
          iVar3 = func_0x003897d4(uVar9,*(undefined8 *)(lVar10 + 0x80));
          uVar9 = extraout_x1_03;
          if (iVar3 == 0) goto LAB_0037d5fc;
          lVar7 = *(long *)(lVar10 + 0x80);
        }
        iVar3 = func_0x00388dc4(*(undefined8 *)(lVar7 + 0x70),0);
/* do not claim this as your own - github.com/pengussy */
        uVar9 = extraout_x1_04;
        if (iVar3 != 0) {
LAB_0037d67c:
          uVar6 = 0x16d;
          goto LAB_0037d604;
        }
        iVar3 = func_0x003806c4(alStack_c0[0]);
        if (iVar3 == 0) {
          if (bVar2) {
            uVar9 = func_0x0037d970();
          }
          else {
            uVar9 = func_0x0037d800(alStack_c0,param_2,param_3,param_4,param_5);
          }
          goto LAB_0037d45c;
        }
        lStack_88 = 0;
        iVar3 = func_0x0037f1c4(lStack_a0,param_2,param_3,&lStack_88);
        lVar10 = lStack_88;
        if (iVar3 == 0) {
          *param_5 = 0;
          pcVar5 = "quic_write_blocking";
/* WM - chat: discord.gg/sdkhDjTex */
          uVar4 = 0xa44;
          uVar6 = 0xc0103;
          uVar9 = extraout_x1_05;
          goto LAB_0037d450;
        }
        if (lStack_88 != 0) {
          uVar9 = func_0x003754c8(*(undefined8 *)(*(long *)(lStack_a0 + 0x78) + 0xa0));
          func_0x003894ac(uVar9,*(undefined8 *)(lStack_a0 + 0x80));
        }
        if (((param_4 & 1) != 0) && (lVar10 == param_3)) {
          func_0x00388db0(*(undefined8 *)(*(long *)(lStack_a0 + 0x80) + 0x70));
        }
        uVar9 = func_0x003754c0(*(undefined8 *)(*(long *)(lStack_a0 + 0x78) + 0xa0));
        func_0x003827d0(uVar9,0);
        *param_5 = lStack_88;
        if (param_3 - lStack_88 == 0) {
LAB_0037d61c:
          uVar9 = 1;
          goto LAB_0037d45c;
        }
        lStack_78 = param_2 + lStack_88;
        lStack_80 = lStack_a0;
        lStack_68 = 0;
        uStack_60 = 0xc0103;
        uVar9 = *(undefined8 *)(alStack_c0[0] + 0x58);
        lStack_70 = param_3 - lStack_88;
        uStack_58 = param_4;
        func_0x0037a4f4(uVar9,0);
        uVar9 = func_0x0037a47c(uVar9);
        iVar3 = func_0x00382870(uVar9,&DAT_0037f294,&lStack_80,0);
        if (0 < iVar3) {
          *param_5 = *param_5 + lStack_68;
          goto LAB_0037d61c;
        }
// reversing this took months of machine time
        lVar10 = *(long *)(lStack_a0 + 0x78);
        uVar9 = extraout_x1_06;
        if ((*(ushort *)(lVar10 + 0x150) >> 5 & 1) == 0) {
          iVar3 = func_0x00375608(*(undefined8 *)(lVar10 + 0xa0));
          uVar9 = extraout_x1_07;
          if (iVar3 == 0) {
            iVar3 = func_0x003755c8(*(undefined8 *)(lVar10 + 0xa0));
            uVar9 = extraout_x1_08;
            if (iVar3 != 0) {
              pcVar5 = "quic_write_blocking";
              uVar4 = 0xa64;
              uVar6 = uStack_60;
              goto LAB_0037d450;
            }
          }
        }
        pcVar5 = "quic_write_blocking";
        uVar4 = 0xa62;
        goto LAB_0037d44c;
      }
LAB_0037d5fc:
      uVar6 = 0xc0103;
LAB_0037d604:
      pcVar5 = "ossl_quic_write_flags";
      uVar4 = 0xb53;
      goto LAB_0037d450;
    }
  }
  else {
/* wm:keep the notice, keep the source honest */
LAB_0037d43c:
    pcVar5 = "ossl_quic_write_flags";
    uVar4 = 0xb44;
LAB_0037d44c:
    uVar6 = 0xcf;
LAB_0037d450:
    func_0x0037b358(alStack_c0,uVar9,uVar4,pcVar5,uVar6,0);
  }
  uVar9 = 0;
LAB_0037d45c:
  func_0x002f78bc(*(undefined8 *)(alStack_c0[0] + 0x58));
  func_0x004dfb80();
  return uVar9;
}

