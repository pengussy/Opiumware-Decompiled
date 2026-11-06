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
 *  file-id: 0x6318:70cb955038
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x000060c4) */

undefined8 FUN_00006318(long *param_1,long *param_2,undefined8 *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [128];
  ulong in_stack_ffffffffffffffc8;
  
  *param_3 = 0;
  if ((param_1 == (long *)&UNK_01ad7010) ||
     (*param_1 == 0x47f3e6ce73e22d93 && param_1[1] == -0x4f3ec6b0990f404b)) {
    *param_3 = 0;
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x360);
    if (plVar4 == (long *)0x0) {
      return 0x8007000e;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    }
    *plVar4 = (long)&UNK_01dbd288;
    plVar4[1] = (long)&UNK_01dbd328;
    plVar4[2] = (long)&UNK_01dbd390;
    plVar4[3] = (long)&UNK_01dbd3c8;
    plVar4[4] = (long)&UNK_01dbd3f8;
    *(undefined4 *)(plVar4 + 5) = 0;
    plVar4[6] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar4[0x11] = (long)(plVar4 + 0x14);
    plVar4[0x1a] = (long)(plVar4 + 0x1d);
    plVar4[9] = (long)(plVar4 + 0xb);
    plVar4[10] = (long)(plVar4 + 0x11);
    plVar4[0x12] = (long)(plVar4 + 0x14);
    plVar4[0x13] = (long)(plVar4 + 0x1a);
    plVar4[0x1b] = (long)(plVar4 + 0x1d);
    plVar4[0x1c] = (long)(plVar4 + 0x4d);
    plVar4[0x4e] = 0;
    plVar4[0x50] = 0;
    plVar4[0x4f] = 0;
    plVar4[0x4d] = (long)(plVar4 + 0x4e);
    plVar4[0x52] = 0;
    plVar4[0x51] = 0;
    plVar4[0x53] = (long)(plVar4 + 0x56);
    plVar4[0x54] = (long)(plVar4 + 0x56);
    plVar4[0x55] = (long)(plVar4 + 0x5c);
    plVar4[0x5c] = (long)(plVar4 + 0x5f);
    plVar4[0x5d] = (long)(plVar4 + 0x5f);
    plVar4[0x5e] = (long)(plVar4 + 0x61);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    plVar4[0x61] = 0;
    *(undefined1 *)((long)plVar4 + 0x327) = 0xc;
    *(undefined4 *)(plVar4 + 99) = 0x73666564;
    plVar4[0x62] = s_hlsl_semdefs_01c21488._0_8_;
    *(undefined1 *)((long)plVar4 + 0x31c) = 0;
    *(undefined1 *)((long)plVar4 + 0x33f) = 10;
    *(undefined2 *)(plVar4 + 0x66) = 0x7864;
    plVar4[0x65] = s_dxil_ms_dx_01c21495._0_8_;
    *(undefined1 *)((long)plVar4 + 0x332) = 0;
    plVar4[7] = (long)&UNK_01dbd540;
    plVar4[8] = (long)(plVar4 + 0xb);
    plVar4[0x68] = 0;
    plVar4[0x69] = (long)&UNK_01dbd1c0;
    plVar4[0x6a] = (long)plVar4;
    plVar4[0x6b] = (long)plVar2;
    (**(code **)(*plVar4 + 8))(plVar4);
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7020) ||
     (*param_1 == 0x470f224d3e56ae82 && param_1[1] == -0x626011e9cf015e5f)) {
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x58);
    if (plVar4 == (long *)0x0) {
      *param_3 = 0;
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01dbd008;
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4[2] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
/* wm:keep the notice, keep the source honest */
    plVar4[6] = 0;
    plVar4[5] = 0;
    plVar4[4] = 0;
    plVar4[3] = 0;
    *(undefined4 *)(plVar4 + 7) = 0x3f800000;
    plVar4[9] = 0;
    plVar4[10] = 0;
    plVar4[8] = 0;
    (**(code **)(*plVar4 + 8))(plVar4);
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7030) ||
     (*param_1 == 0x48fd66e06245d6af && param_1[1] == -0x738b69e8d8b24b80)) {
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x28);
    if (plVar4 == (long *)0x0) {
      *param_3 = 0;
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01dbd088;
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4[2] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar4[3] = (long)&UNK_01dbcf60;
    plVar4[4] = (long)plVar4;
    (**(code **)(*plVar4 + 8))(plVar4);
/* WM - origin: github.com/pengussy */
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7040) ||
     (*param_1 == 0x4cf3f7288ca3e215 && param_1[1] == -0x5e788a6e50772274)) {
    iVar1 = FUN_000349b8();
    if (iVar1 != 0) {
      func_0x01779d8c(uRam000000000208ec78);
      if ((-1 < iRam000000000208ec70) && (lRam000000000208ec80 == 0)) {
        iRam000000000208ec70 = func_0x00034afc(0x208ec80,uRam000000000205d5c0,"DxcCreateInstance");
      }
      uVar5 = 0x80004005;
      func_0x01779dac(uRam000000000208ec78);
      if (-1 < iRam000000000208ec70) {
        func_0x01779d8c(uRam000000000208ec78);
        if (param_3 == (undefined8 *)0x0) {
          uVar5 = 0x80004003;
        }
        else if (lRam000000000208ec80 != 0) {
          uVar5 = (*pcRam000000000208ec88)(param_1,param_2,param_3);
        }
        func_0x01779dac(uRam000000000208ec78);
      }
      return uVar5;
    }
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x20);
    if (plVar4 == (long *)0x0) {
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01dbeb78;
    plVar4[1] = (long)&UNK_01dbebc0;
    *(undefined4 *)(plVar4 + 2) = 0;
    plVar4[3] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar4 + 8))(plVar4);
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
/* origin: github.com/pengussy */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7050) ||
     (*param_1 == 0x4f80f903d728db68 && param_1[1] == 0x5171ec76cfdccd94)) {
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x18);
    if (plVar4 == (long *)0x0) {
      *param_3 = 0;
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01dbcd80;
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4[2] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    (**(code **)(*plVar4 + 8))(plVar4);
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7060) ||
     (*param_1 == 0x453fcc22ae2cd79f && param_1[1] == 0x4c20a5e724b16b9b)) {
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x38);
    if (plVar4 == (long *)0x0) {
      *param_3 = 0;
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01e86bf8;
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4[2] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar4[4] = 0;
    plVar4[5] = 0;
    plVar4[6] = 0;
    (**(code **)(*plVar4 + 8))(plVar4);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
    uVar5 = func_0x013e35d4(plVar4);
    if (-1 < (int)uVar5) {
      uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7070) ||
     (*param_1 == 0x4b8ed1c03047833c && param_1[1] == -0x7aa69f87d7efbf63)) {
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x328);
    if (plVar4 == (long *)0x0) {
      *param_3 = 0;
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01e35348;
    plVar4[1] = (long)&UNK_01e353e8;
    *(undefined4 *)(plVar4 + 2) = 0;
    plVar4[3] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
/* unlicensed copy if this notice is missing */
    plVar4[0xe] = (long)(plVar4 + 0x11);
    plVar4[0x17] = (long)(plVar4 + 0x1a);
    plVar4[6] = (long)(plVar4 + 8);
    plVar4[7] = (long)(plVar4 + 0xe);
    plVar4[0xf] = (long)(plVar4 + 0x11);
    plVar4[0x10] = (long)(plVar4 + 0x17);
    plVar4[0x18] = (long)(plVar4 + 0x1a);
    plVar4[0x19] = (long)(plVar4 + 0x4a);
    plVar4[0x4b] = 0;
    plVar4[0x4d] = 0;
    plVar4[0x4c] = 0;
    plVar4[0x4a] = (long)(plVar4 + 0x4b);
    plVar4[0x4f] = 0;
    plVar4[0x4e] = 0;
    plVar4[0x50] = (long)(plVar4 + 0x53);
    plVar4[0x51] = (long)(plVar4 + 0x53);
    plVar4[0x52] = (long)(plVar4 + 0x59);
    plVar4[0x59] = (long)(plVar4 + 0x5c);
    plVar4[0x5a] = (long)(plVar4 + 0x5c);
    plVar4[0x5b] = (long)(plVar4 + 0x5e);
    plVar4[0x5e] = 0;
    *(undefined1 *)((long)plVar4 + 0x30f) = 0xc;
    *(undefined4 *)(plVar4 + 0x60) = 0x73666564;
    plVar4[0x5f] = s_hlsl_semdefs_01c21488._0_8_;
    *(undefined1 *)((long)plVar4 + 0x304) = 0;
    *(undefined1 *)((long)plVar4 + 0x327) = 10;
    *(undefined2 *)(plVar4 + 99) = 0x7864;
    plVar4[0x62] = s_dxil_ms_dx_01c21495._0_8_;
    *(undefined1 *)((long)plVar4 + 0x31a) = 0;
    plVar4[4] = (long)&UNK_01dbd540;
/* watermarked copy - do not remove - github.com/pengussy */
    plVar4[5] = (long)(plVar4 + 8);
    (**(code **)(*plVar4 + 8))(plVar4);
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7000) ||
     (*param_1 == 0x4574411f94134294 && param_1[1] == -0x2dbfad1dbe782f4c)) {
    *param_3 = 0;
    uVar5 = FUN_00034a24(&UNK_01ad7000,&UNK_01ad70c0,param_3);
    if (-1 < (int)uVar5) {
      return uVar5;
    }
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0xd0);
    if (plVar4 == (long *)0x0) {
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01e8b390;
    *(undefined4 *)(plVar4 + 1) = 0;
    plVar4[2] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar4[3] = (long)(plVar4 + 6);
    plVar4[4] = (long)(plVar4 + 6);
    plVar4[0x16] = 0;
    plVar4[5] = (long)(plVar4 + 0x16);
    (**(code **)(*plVar4 + 8))(plVar4);
/* thanks for reading - discord.gg/sdkhDjTex */
    plVar4[0x17] = (long)
                   "Unable to create container builder from dxil.dll. Resulting container will not be signed.\n"
    ;
    *(undefined2 *)(plVar4 + 0x18) = 0;
    plVar4[0x19] = 0;
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7080) ||
     (*param_1 == 0x400c55b8b9f54489 && param_1[1] == -0x6e748d1b8ae9c546)) {
    func_0x013a4d00(auStack_c0 + 0x98);
    uVar5 = (**(code **)MACH_HEADER._0_8_)(0,param_2,param_3);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad7090) ||
     (*param_1 == 0x457ef2ce54621dfb && param_1[1] == 0x7cecae5f35ec8cae)) {
    if (param_3 == (undefined8 *)0x0) {
      return 0x80004003;
    }
    *param_3 = 0;
/* wm:do not claim this as your own */
    if ((param_2 == (long *)&UNK_01ad80b0) ||
       (*param_2 == 0x4c3b9d6ae6c9647e && param_2[1] == 0x3d346c5a4b524cb9)) {
      plVar4 = (long *)func_0x01726e64();
      plVar2 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,0x168);
      if (plVar2 == (long *)0x0) {
        return 0x8007000e;
      }
      *plVar2 = (long)&UNK_01dbe878;
      plVar2[1] = (long)&UNK_01dbe998;
      plVar2[2] = (long)plVar2;
      *(undefined4 *)(plVar2 + 3) = 0;
      plVar2[4] = (long)plVar4;
      (**(code **)(*plVar4 + 8))(plVar4);
      plVar2[0x2c] = 0;
      plVar2[6] = 0;
      plVar2[5] = 0;
      plVar2[8] = 0;
      plVar2[7] = 0;
      plVar2[10] = 0;
/* wm:watermarked copy - do not remove */
      plVar2[9] = 0;
      plVar2[0xc] = 0;
      plVar2[0xb] = 0;
      plVar2[0xe] = 0;
      plVar2[0xd] = 0;
      plVar2[0x10] = 0;
      plVar2[0xf] = 0;
      *(undefined1 *)(plVar2 + 0x11) = 0;
      plVar2[0x17] = 0;
      plVar2[0x16] = 0;
      plVar2[0x19] = 0;
      plVar2[0x18] = 0;
      plVar2[0x1b] = 0;
      plVar2[0x1a] = 0;
      plVar2[0x1d] = 0;
      plVar2[0x1c] = 0;
      plVar2[0x1f] = 0;
      plVar2[0x1e] = 0;
      plVar2[0x21] = 0;
      plVar2[0x20] = 0;
      plVar2[0x23] = 0;
      plVar2[0x22] = 0;
      plVar2[0x25] = 0;
      plVar2[0x24] = 0;
      plVar2[0x27] = 0;
      plVar2[0x26] = 0;
      plVar2[0x29] = 0;
      plVar2[0x28] = 0;
      plVar2[0x15] = 0;
      plVar2[0x14] = 0;
      *(undefined8 *)((long)plVar2 + 0x154) = 0;
      *(undefined8 *)((long)plVar2 + 0x14c) = 0;
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar5 = (**(code **)*plVar2)(plVar2,param_2,param_3);
    }
// reversing this took months of machine time
    else {
      plVar4 = (long *)func_0x01726e64();
      plVar2 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,0x168);
      if (plVar2 == (long *)0x0) {
        return 0x8007000e;
      }
      *plVar2 = (long)&UNK_01dbe878;
      plVar2[1] = (long)&UNK_01dbe998;
      plVar2[2] = (long)plVar2;
      *(undefined4 *)(plVar2 + 3) = 0;
      plVar2[4] = (long)plVar4;
      (**(code **)(*plVar4 + 8))(plVar4);
      plVar2[0x2c] = 0;
      plVar2[6] = 0;
      plVar2[5] = 0;
      plVar2[8] = 0;
      plVar2[7] = 0;
      plVar2[10] = 0;
      plVar2[9] = 0;
      plVar2[0xc] = 0;
      plVar2[0xb] = 0;
      plVar2[0xe] = 0;
      plVar2[0xd] = 0;
      plVar2[0x10] = 0;
      plVar2[0xf] = 0;
      *(undefined1 *)(plVar2 + 0x11) = 0;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      plVar2[0x17] = 0;
      plVar2[0x16] = 0;
      plVar2[0x19] = 0;
      plVar2[0x18] = 0;
      plVar2[0x1b] = 0;
      plVar2[0x1a] = 0;
      plVar2[0x1d] = 0;
      plVar2[0x1c] = 0;
      plVar2[0x1f] = 0;
      plVar2[0x1e] = 0;
      plVar2[0x21] = 0;
      plVar2[0x20] = 0;
      plVar2[0x23] = 0;
      plVar2[0x22] = 0;
      plVar2[0x25] = 0;
      plVar2[0x24] = 0;
      plVar2[0x27] = 0;
      plVar2[0x26] = 0;
      plVar2[0x29] = 0;
      plVar2[0x28] = 0;
      plVar2[0x15] = 0;
      plVar2[0x14] = 0;
      *(undefined8 *)((long)plVar2 + 0x154) = 0;
      *(undefined8 *)((long)plVar2 + 0x14c) = 0;
      (**(code **)(*plVar2 + 8))(plVar2);
      uVar5 = (**(code **)*plVar2)(plVar2,param_2,param_3);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
    return uVar5;
  }
  if ((param_1 == (long *)&UNK_01ad70a0) ||
     (*param_1 == 0x40b3e07fb489b951 && param_1[1] == -0x5bb28cdb1e6c726a)) {
    plVar2 = (long *)func_0x01726e64();
    plVar4 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,0x328);
// more drops soon - github.com/pengussy
    if (plVar4 == (long *)0x0) {
      return 0x8007000e;
    }
    *plVar4 = (long)&UNK_01e35870;
    plVar4[1] = (long)&UNK_01e358f8;
    *(undefined4 *)(plVar4 + 2) = 0;
    plVar4[3] = (long)plVar2;
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar4[0xe] = (long)(plVar4 + 0x11);
    plVar4[0x17] = (long)(plVar4 + 0x1a);
    plVar4[6] = (long)(plVar4 + 8);
    plVar4[7] = (long)(plVar4 + 0xe);
    plVar4[0xf] = (long)(plVar4 + 0x11);
    plVar4[0x10] = (long)(plVar4 + 0x17);
    plVar4[0x18] = (long)(plVar4 + 0x1a);
    plVar4[0x19] = (long)(plVar4 + 0x4a);
    plVar4[0x4b] = 0;
    plVar4[0x4d] = 0;
    plVar4[0x4c] = 0;
    plVar4[0x4a] = (long)(plVar4 + 0x4b);
    plVar4[0x4f] = 0;
    plVar4[0x4e] = 0;
    plVar4[0x50] = (long)(plVar4 + 0x53);
    plVar4[0x51] = (long)(plVar4 + 0x53);
    plVar4[0x52] = (long)(plVar4 + 0x59);
    plVar4[0x59] = (long)(plVar4 + 0x5c);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    plVar4[0x5a] = (long)(plVar4 + 0x5c);
    plVar4[0x5b] = (long)(plVar4 + 0x5e);
    plVar4[0x5e] = 0;
    *(undefined1 *)((long)plVar4 + 0x30f) = 0xc;
    *(undefined4 *)(plVar4 + 0x60) = 0x73666564;
    plVar4[0x5f] = s_hlsl_semdefs_01c21488._0_8_;
    *(undefined1 *)((long)plVar4 + 0x304) = 0;
    *(undefined1 *)((long)plVar4 + 0x327) = 10;
    *(undefined2 *)(plVar4 + 99) = 0x7864;
    plVar4[0x62] = s_dxil_ms_dx_01c21495._0_8_;
    *(undefined1 *)((long)plVar4 + 0x31a) = 0;
    plVar4[4] = (long)&UNK_01dbd540;
    plVar4[5] = (long)(plVar4 + 8);
    (**(code **)(*plVar4 + 8))(plVar4);
    uVar5 = (**(code **)*plVar4)(plVar4,param_2,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return uVar5;
  }
  if ((param_1 != (long *)&UNK_01ad70b0) &&
     (*param_1 != 0x4d56b0eaef6a8087 || param_1[1] != 0x6788b1a7ed0459e)) {
    return 0x80040154;
  }
  uVar5 = 0x8007000e;
  *param_3 = 0;
// WM - thanks for reading - discord.gg/sdkhDjTex
  func_0x01726e64();
  plVar2 = (long *)func_0x00037cd8();
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    func_0x000210fc(auStack_c0 + 0x8c,auStack_c0 + 0x88,0);
    lVar3 = func_0x013b9e6c(plVar2 + 4,(int)(in_stack_ffffffffffffffc8 >> 0x20),
                            in_stack_ffffffffffffffc8 & 0xffffffff);
    plVar4 = (long *)plVar2[5];
    plVar2[5] = lVar3;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    uVar5 = (**(code **)*plVar2)(plVar2,param_2,param_3);
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return uVar5;
}

