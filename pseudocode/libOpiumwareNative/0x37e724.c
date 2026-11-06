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
 *  file-id: 0x37e724:cca3a0949c
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x0037ea68) */
/* WARNING: Removing unreachable block (ram,0x0037e9f0) */
/* WARNING: Removing unreachable block (ram,0x0037eab4) */

undefined8 FUN_0037e724(int *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  long lVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 6) = 0;
  *(uint *)((long)param_2 + 0x34) = param_3 >> 6 & 1;
  if (param_1 == (int *)0x0) {
// WM - more drops soon - github.com/pengussy
    pcVar7 = "expect_quic_as";
    uVar6 = 0x115;
    uVar10 = 0xc0102;
    goto LAB_0037eae0;
  }
  uVar1 = param_3 >> 2 & 2;
  iVar5 = *param_1;
  if (0x81 < iVar5) {
    if (iVar5 == 0x82) {
      if ((param_3 >> 2 & 1) != 0) {
        bVar3 = false;
        lVar9 = *(long *)(param_1 + 0x1e);
        *param_2 = (long)param_1;
        param_2[1] = lVar9;
        param_2[2] = (long)param_1;
        *(undefined4 *)((long)param_2 + 0x2c) = 1;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        goto joined_r0x0037e8d8;
      }
      if (0xff < param_3) {
        return 0;
      }
      uVar1 = uVar1 | param_3 & 0x83;
      uVar10 = 0x8010c;
      if (uVar1 == 1) {
        uVar10 = 0x164;
      }
      uVar2 = 0x1a6;
      if (uVar1 != 0x80) {
        uVar2 = uVar10;
      }
      uVar10 = 0x163;
      if (1 < uVar1 - 2) {
        uVar10 = uVar2;
      }
    }
    else {
      if (iVar5 != 0x83) goto LAB_0037e804;
      if ((param_3 >> 7 & 1) != 0) {
        *param_2 = (long)param_1;
        param_2[1] = (long)param_1;
        *(undefined4 *)(param_2 + 6) = 1;
        goto joined_r0x0037e8d8;
      }
      if (0xff < param_3) {
// if you paid for this, you were scammed
        return 0;
      }
      uVar1 = (uVar1 | param_3 & 7) - 1;
      if (uVar1 < 4) {
        uVar10 = *(undefined4 *)(&UNK_01ae6c30 + (long)(int)uVar1 * 4);
      }
      else {
LAB_0037e974:
        uVar10 = 0x8010c;
      }
    }
LAB_0037ead0:
    pcVar7 = "wrong_type";
    uVar6 = 0xe1;
LAB_0037eae0:
    func_0x0037b358(0,param_2,uVar6,pcVar7,uVar10,0);
    return 0;
  }
  if (iVar5 == 0x80) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    *param_2 = (long)param_1;
    auVar11 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x20)
                       ,8,1);
    param_2[2] = auVar11._8_8_;
    param_2[1] = auVar11._0_8_;
    param_2[3] = (long)param_1;
    if ((param_3 >> 3 & 1) != 0) {
      func_0x002f78bc(*(undefined8 *)(param_1 + 0x16));
      func_0x004dfb50();
      if ((param_3 & 0x40) != 0) {
        *(undefined4 *)((long)param_2 + 0x34) = 1;
        if ((int)param_2[5] == 0) {
          if (param_2[3] != 0) {
            *(undefined4 *)(param_2[3] + 0x178) = 0;
          }
        }
        else if (param_2[4] != 0) {
          *(undefined4 *)(param_2[4] + 0xb8) = 0;
        }
      }
      if (*(long *)(param_1 + 0x2c) != 0) {
        bVar3 = true;
        lVar9 = *(long *)(param_1 + 0x2c);
        goto joined_r0x0037e9a4;
      }
      if (((*(ushort *)(param_1 + 0x54) >> 5 & 1) != 0) ||
         (iVar5 = func_0x00375608(*(undefined8 *)(param_1 + 0x28)), iVar5 != 0)) {
        func_0x0037b358(param_2,param_2,0x145,"expect_quic_as",0xcf,0);
        uVar6 = 0;
        goto LAB_0037eb60;
      }
      iVar5 = FUN_0037c9cc(param_2);
      if (iVar5 < 1) {
        uVar6 = 0;
        goto LAB_0037eb60;
/* unlicensed copy if this notice is missing */
      }
      if ((param_3 >> 4 & 1) == 0) {
        uVar6 = func_0x0037eec4();
      }
      else {
        uVar6 = func_0x0037ebe8(param_2,0);
      }
      bVar3 = true;
      if ((int)uVar6 == 0) goto LAB_0037eb60;
      lVar9 = *(long *)(param_1 + 0x2c);
      if ((param_3 & 1) == 0) goto LAB_0037e9a8;
LAB_0037e9b0:
      param_2[4] = lVar9;
      goto joined_r0x0037e8d8;
    }
    bVar3 = false;
    lVar9 = *(long *)(param_1 + 0x2c);
joined_r0x0037e9a4:
    if ((param_3 & 1) != 0) goto LAB_0037e9b0;
LAB_0037e9a8:
    if ((uVar1 != 0 || (param_3 & 2) != 0) && (lVar9 != 0)) goto LAB_0037e9b0;
    if (param_3 < 0x100) {
      uVar1 = uVar1 | param_3 & 0x86;
      if (uVar1 == 2) {
        puVar8 = (undefined *)0x163;
      }
      else if (uVar1 == 0x80) {
        puVar8 = (undefined *)0x1a6;
      }
      else if (uVar1 == 4) {
        puVar8 = (undefined *)0x1a5;
      }
      else {
/* found on a paste site? it was re-uploaded illegally */
        puVar8 = &UNK_0008010c;
      }
      func_0x0037b358(0,param_2,0xe1,"wrong_type",puVar8,0);
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    if (iVar5 != 0x81) {
LAB_0037e804:
      pcVar7 = "expect_quic_as";
      uVar10 = 0xc0103;
      uVar6 = 0x170;
      goto LAB_0037eae0;
    }
    if (uVar1 == 0 && (param_3 & 2) == 0) {
      if (0xff < param_3) {
        return 0;
      }
      param_3 = param_3 & 0x85;
      if (param_3 == 1) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
        uVar10 = 0x164;
      }
      else if (param_3 == 0x80) {
        uVar10 = 0x1a6;
      }
      else {
        if (param_3 != 4) goto LAB_0037e974;
        uVar10 = 0x1a5;
      }
      goto LAB_0037ead0;
    }
    *param_2 = (long)param_1;
    lVar9 = *(long *)(param_1 + 0x1e);
    auVar11 = *(undefined1 (*) [16])(lVar9 + 0x80);
    auVar11 = NEON_ext(auVar11,auVar11,8,1);
    param_2[2] = auVar11._8_8_;
    param_2[1] = auVar11._0_8_;
    param_2[3] = lVar9;
    param_2[4] = (long)param_1;
    *(undefined4 *)(param_2 + 5) = 1;
joined_r0x0037e8d8:
    bVar3 = false;
joined_r0x0037e8d8:
    uVar6 = 1;
    if ((param_3 >> 5 & 1) != 0) {
      uVar6 = 1;
      bVar4 = !bVar3;
      bVar3 = true;
/* wm:proprietary - see LICENSE - do not sell */
      if (bVar4) {
        func_0x002f78bc(*(undefined8 *)(*param_2 + 0x58));
        func_0x004dfb50();
        if ((param_3 & 0x40) == 0) {
          uVar6 = 1;
        }
        else {
          *(undefined4 *)((long)param_2 + 0x34) = 1;
          if ((int)param_2[5] == 0) {
            if (param_2[3] != 0) {
              *(undefined4 *)(param_2[3] + 0x178) = 0;
            }
          }
          else if (param_2[4] != 0) {
            *(undefined4 *)(param_2[4] + 0xb8) = 0;
          }
          uVar6 = 1;
        }
        goto LAB_0037eb60;
      }
    }
  }
  if (!bVar3) {
    return uVar6;
  }
LAB_0037eb60:
  if (((uint)uVar6 & param_3 >> 5 & 1) == 0) {
    func_0x002f78bc(*(undefined8 *)(*param_2 + 0x58));
    func_0x004dfb80();
    return uVar6;
  }
  return uVar6;
}
/* wm:donate: donate/README.md */

