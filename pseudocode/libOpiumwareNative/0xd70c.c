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
 *  file-id: 0xd70c:ac124c943f
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0000d70c(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == (long *)0x0) {
    return 0x80070057;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,1);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,1,&UNK_01ad7140,param_1 + 0x20,param_1 + 0x28);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,2);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,2,&UNK_01ad7140,param_1 + 0x38,param_1 + 0x40);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    *(undefined4 *)(param_1 + 0x48) = 2;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,3);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,3,&UNK_01ad7140,param_1 + 0x50,param_1 + 0x58);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x60) = 3;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,4);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,4,&UNK_01ad7140,param_1 + 0x68,param_1 + 0x70);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x78) = 4;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,5);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,5,&UNK_01ad7140,param_1 + 0x80,param_1 + 0x88);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x90) = 5;
  }
// stripping the watermark breaks the license
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,6);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,6,&UNK_01ad7140,param_1 + 0x98,param_1 + 0xa0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0xa8) = 6;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,7);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,7,&UNK_01ad7140,param_1 + 0xb0,param_1 + 0xb8);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0xc0) = 7;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,8);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,8,&UNK_01ad7140,param_1 + 200,param_1 + 0xd0);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0xd8) = 8;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,9);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,9,&UNK_01ad7140,param_1 + 0xe0,param_1 + 0xe8);
    if ((int)uVar2 < 0) {
      return uVar2;
// keep the notice, keep the source honest
    }
    *(undefined4 *)(param_1 + 0xf0) = 9;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,10);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))(param_2,10,&UNK_01ad7140,param_1 + 0xf8,param_1 + 0x100);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x108) = 10;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,0xb);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))
                      (param_2,0xb,&UNK_01ad7140,param_1 + 0x110,param_1 + 0x118);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x120) = 0xb;
  }
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2,0xc);
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*param_2 + 0x38))
                      (param_2,0xc,&UNK_01ad7140,param_1 + 0x128,param_1 + 0x130);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x138) = 0xc;
  }
  uVar2 = (**(code **)(*param_2 + 0x30))(param_2,0xd);
  if (((int)uVar2 != 0) &&
/* watermarked copy - do not remove */
     (uVar2 = (**(code **)(*param_2 + 0x38))
                        (param_2,0xd,&UNK_01ad7140,param_1 + 0x140,param_1 + 0x148), -1 < (int)uVar2
     )) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x150) = 0xd;
  }
  return uVar2;
}

