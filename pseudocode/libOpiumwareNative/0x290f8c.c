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
 *  file-id: 0x290f8c:4d82462647
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00290f8c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0xe] = 0x32aaaba7;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
/* wm:donate: donate/README.md */
  param_1[0x16] = param_1 + 0x16;
  param_1[0x17] = param_1 + 0x16;
  param_1[0x18] = 0;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x32aaaba7;
  param_1[0x22] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0x32aaaba7;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0x32aaaba7;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
// WM - unlicensed copy if this notice is missing
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  *(undefined2 *)(param_1 + 0x3b) = _UNK_01adc0c2;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  func_0x002904b8(param_1 + 0x3f,0,0,0,UNK_01adc20f,UNK_01adc20e);
  *(undefined1 *)((long)param_1 + 0x1fd) = 0;
  param_1[0x41] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x46] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)((long)param_1 + 0x277) = 6;
  *(undefined4 *)(param_1 + 0x4c) = 0x54535953;
  *(undefined2 *)((long)param_1 + 0x264) = 0x4d45;
  *(undefined1 *)((long)param_1 + 0x266) = 0;
  *(undefined1 *)((long)param_1 + 0x28f) = 7;
  *(undefined4 *)(param_1 + 0x4f) = 0x41464544;
  *(undefined4 *)((long)param_1 + 0x27b) = 0x544c5541;
// thanks for reading - discord.gg/sdkhDjTex
  *(undefined1 *)((long)param_1 + 0x27f) = 0;
  *(undefined2 *)(param_1 + 0x52) = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x58] = 0x32aaaba7;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  uVar2 = __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x60] = uVar2;
  *(undefined1 *)(param_1 + 0x61) = 1;
  *(undefined4 *)((long)param_1 + 0x30c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x62) = 0;
  uVar2 = s_ixwebsocket__heartbeat_01c2dfb2._0_8_;
  param_1[100] = CONCAT26(s_ixwebsocket__heartbeat_01c2dfb2._14_2_,
                          s_ixwebsocket__heartbeat_01c2dfb2._8_6_);
  param_1[99] = uVar2;
  *(ulong *)((long)param_1 + 0x326) =
       CONCAT62(s_ixwebsocket__heartbeat_01c2dfb2._16_6_,s_ixwebsocket__heartbeat_01c2dfb2._14_2_);
  *(undefined2 *)((long)param_1 + 0x32e) = 0x1600;
  *(undefined4 *)(param_1 + 0x66) = 2;
  uVar2 = _UNK_01adc210;
  param_1[0x68] = _UNK_01adc218;
  param_1[0x67] = uVar2;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  uVar2 = __ZNSt3__16chrono12steady_clock3nowEv();
  param_1[0x70] = uVar2;
  __ZNSt3__15mutex4lockEv(param_1 + 0x33);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x30,0x20972a8)
  ;
  __ZNSt3__15mutex6unlockEv(param_1 + 0x33);
  lVar1 = param_1[4];
  lVar3 = param_1[5];
  uVar5 = lVar3 - lVar1;
  if (uVar5 >> 0xf == 0) {
    if ((ulong)(param_1[6] - lVar1) < 0x8000) {
      puVar4 = (undefined *)((param_1[6] - lVar1) * 2);
      if (puVar4 < &UNK_00008001) {
        puVar4 = (undefined *)0x8000;
      }
      lVar3 = __Znwm(puVar4);
      _bzero(lVar3 + uVar5,0x8000 - uVar5);
      _memcpy(lVar3,lVar1,uVar5);
      param_1[4] = lVar3;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      param_1[5] = lVar3 + 0x8000;
      param_1[6] = puVar4 + lVar3;
      if (lVar1 != 0) {
        __ZdlPv(lVar1);
      }
    }
    else {
      _bzero();
      param_1[5] = lVar3 + (0x8000 - uVar5);
    }
  }
  else if (uVar5 != 0x8000) {
    param_1[5] = lVar1 + 0x8000;
  }
  return param_1;
}

