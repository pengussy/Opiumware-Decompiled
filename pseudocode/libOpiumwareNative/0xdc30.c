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
 *  file-id: 0xdc30:c09febe074
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0000dc30(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *param_2 = 0;
  plVar1 = (long *)func_0x01726e64();
  plVar2 = (long *)(**(code **)(*plVar1 + 0x18))(plVar1,0x360);
  if (plVar2 == (long *)0x0) {
    return 0x8007000e;
  }
  *plVar2 = (long)&UNK_01dbd288;
  plVar2[1] = (long)&UNK_01dbd328;
  plVar2[2] = (long)&UNK_01dbd390;
  plVar2[3] = (long)&UNK_01dbd3c8;
  plVar2[4] = (long)&UNK_01dbd3f8;
  *(undefined4 *)(plVar2 + 5) = 0;
/* chat: discord.gg/sdkhDjTex */
  plVar2[6] = (long)plVar1;
  (**(code **)(*plVar1 + 8))(plVar1);
  plVar2[0x11] = (long)(plVar2 + 0x14);
  plVar2[0x1a] = (long)(plVar2 + 0x1d);
  plVar2[9] = (long)(plVar2 + 0xb);
  plVar2[10] = (long)(plVar2 + 0x11);
  plVar2[0x12] = (long)(plVar2 + 0x14);
  plVar2[0x13] = (long)(plVar2 + 0x1a);
  plVar2[0x1b] = (long)(plVar2 + 0x1d);
  plVar2[0x1c] = (long)(plVar2 + 0x4d);
  plVar2[0x4e] = 0;
  plVar2[0x50] = 0;
  plVar2[0x4f] = 0;
  plVar2[0x4d] = (long)(plVar2 + 0x4e);
  plVar2[0x52] = 0;
  plVar2[0x51] = 0;
  plVar2[0x53] = (long)(plVar2 + 0x56);
  plVar2[0x54] = (long)(plVar2 + 0x56);
  plVar2[0x55] = (long)(plVar2 + 0x5c);
  plVar2[0x5c] = (long)(plVar2 + 0x5f);
  plVar2[0x5d] = (long)(plVar2 + 0x5f);
  plVar2[0x5e] = (long)(plVar2 + 0x61);
  plVar2[0x61] = 0;
  *(undefined1 *)((long)plVar2 + 0x327) = 0xc;
  *(undefined4 *)(plVar2 + 99) = 0x73666564;
  plVar2[0x62] = s_hlsl_semdefs_01c21488._0_8_;
  *(undefined1 *)((long)plVar2 + 0x31c) = 0;
// WM - found on a paste site? it was re-uploaded illegally
  *(undefined1 *)((long)plVar2 + 0x33f) = 10;
  *(undefined2 *)(plVar2 + 0x66) = 0x7864;
  plVar2[0x65] = s_dxil_ms_dx_01c21495._0_8_;
  *(undefined1 *)((long)plVar2 + 0x332) = 0;
  plVar2[7] = (long)&UNK_01dbd540;
  plVar2[8] = (long)(plVar2 + 0xb);
  plVar2[0x68] = 0;
  plVar2[0x69] = (long)&UNK_01dbd1c0;
  plVar2[0x6a] = (long)plVar2;
  plVar2[0x6b] = (long)plVar1;
  (**(code **)(*plVar2 + 8))(plVar2);
  uVar3 = (**(code **)*plVar2)(plVar2,param_1,param_2);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  return uVar3;
}

