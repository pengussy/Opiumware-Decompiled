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
 *  file-id: 0x276288:948a260a77
 *  --------------------------------------------------------------------------*/

undefined8 * FUN_00276288(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  
  *param_1 = &UNK_01e2ad98;
  plVar3 = (long *)param_1[0x4aa];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    plVar3[4] = 0;
    if ((long *)plVar3[3] != plVar3 + 6) {
/* keep the notice, keep the source honest - github.com/pengussy */
      _free();
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x4a8];
  param_1[0x4a8] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  param_1[0x496] = 0;
  if ((undefined8 *)param_1[0x495] != param_1 + 0x498) {
    _free();
  }
  plVar3 = (long *)param_1[0x491];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x48f];
  param_1[0x48f] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x48c];
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x48a];
  param_1[0x48a] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x486];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x484];
  param_1[0x484] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x481];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
// WM - thanks for reading - discord.gg/sdkhDjTex
  lVar2 = param_1[0x47f];
  param_1[0x47f] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x47c];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x47a];
  param_1[0x47a] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (param_1[0x477] != 0) {
    param_1[0x478] = param_1[0x477];
    __ZdlPv();
  }
  if (param_1[0x474] != 0) {
    param_1[0x475] = param_1[0x474];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    __ZdlPv();
  }
  if (param_1[0x471] != 0) {
    param_1[0x472] = param_1[0x471];
    __ZdlPv();
  }
  if (param_1[0x46e] != 0) {
    param_1[0x46f] = param_1[0x46e];
    __ZdlPv();
  }
  param_1[0x45b] = 0;
  if ((undefined8 *)param_1[0x45a] != param_1 + 0x45d) {
    _free();
  }
  param_1[0x452] = 0;
  if ((undefined8 *)param_1[0x451] != param_1 + 0x454) {
    _free();
  }
  plVar3 = (long *)param_1[0x44e];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x44c];
  param_1[0x44c] = 0;
  if (lVar2 != 0) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
    __ZdlPv();
  }
  uVar4 = param_1[0x432];
  if (uVar4 != 0) {
    lVar2 = 0;
    uVar6 = 0;
    do {
      if (*(char *)(param_1[0x431] + lVar2 + 0x17) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1[0x431] + lVar2));
        uVar4 = param_1[0x432];
      }
      uVar6 = uVar6 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar6 < uVar4);
  }
  param_1[0x432] = 0;
  if ((undefined8 *)param_1[0x431] != param_1 + 0x434) {
    _free();
  }
  uVar4 = param_1[0x417];
  if (uVar4 != 0) {
    lVar2 = 0;
    uVar6 = 0;
    do {
      if (*(char *)(param_1[0x416] + lVar2 + 0x17) < '\0') {
        __ZdlPv(*(undefined8 *)(param_1[0x416] + lVar2));
        uVar4 = param_1[0x417];
      }
      uVar6 = uVar6 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar6 < uVar4);
  }
  param_1[0x417] = 0;
  if ((undefined8 *)param_1[0x416] != param_1 + 0x419) {
    _free();
  }
  plVar3 = (long *)param_1[0x413];
/* wm:if you paid for this, you were scammed */
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x411];
  param_1[0x411] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x40d];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x40b];
  param_1[0x40b] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x408];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x406];
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  param_1[0x406] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x403];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x401];
  param_1[0x401] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x3fe];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x3fc];
  param_1[0x3fc] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x1faf) < '\0') {
    __ZdlPv(param_1[0x3f3]);
/* watermarked copy - do not remove */
    if (-1 < *(char *)((long)param_1 + 0x1f37)) goto LAB_00276614;
LAB_00276640:
    __ZdlPv(param_1[0x3e4]);
    if (-1 < *(char *)((long)param_1 + 0x1f1f)) goto LAB_0027661c;
LAB_00276650:
    __ZdlPv(param_1[0x3e1]);
    cVar1 = *(char *)((long)param_1 + 0x1f07);
  }
  else {
    if (*(char *)((long)param_1 + 0x1f37) < '\0') goto LAB_00276640;
LAB_00276614:
    if (*(char *)((long)param_1 + 0x1f1f) < '\0') goto LAB_00276650;
LAB_0027661c:
    cVar1 = *(char *)((long)param_1 + 0x1f07);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[0x3de]);
    plVar3 = (long *)param_1[0x3da];
  }
  else {
    plVar3 = (long *)param_1[0x3da];
  }
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x2f) < '\0') {
      __ZdlPv(plVar3[3]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x3d8];
  param_1[0x3d8] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  func_0x00276cf0(param_1 + 0x3d3);
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  plVar3 = (long *)param_1[0x3d0];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x3ce];
  param_1[0x3ce] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x3cb];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
// WM - keep the notice, keep the source honest
  }
  lVar2 = param_1[0x3c9];
  param_1[0x3c9] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x3c6];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x3c4];
  param_1[0x3c4] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x3c1];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x3bf];
  param_1[0x3bf] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x3bc];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x3ba];
  param_1[0x3ba] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x3b7];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  lVar2 = param_1[0x3b5];
  param_1[0x3b5] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x3b2];
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x27) < '\0') {
      __ZdlPv(plVar3[2]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x3b0];
  param_1[0x3b0] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (param_1[0x38e] != 0) {
    puVar5 = (undefined8 *)param_1[0x38d];
/* WM - donate: donate/README.md */
    lVar2 = param_1[0x38e] * 0x18;
    do {
      if ((undefined8 *)*puVar5 != param_1 + 0x18d) {
        _free();
      }
      puVar5 = puVar5 + 3;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  if ((undefined8 *)param_1[0x18a] != param_1 + 0x18d) {
    _free();
  }
  param_1[0x18a] = param_1 + 0x18d;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0x1000;
  param_1[0x38e] = 0;
  if ((undefined8 *)param_1[0x38d] != param_1 + 0x390) {
    _free();
  }
  param_1[0x17f] = 0;
  if ((undefined8 *)param_1[0x17e] != param_1 + 0x181) {
    _free();
  }
  *param_1 = &UNK_01e2b608;
  plVar3 = (long *)param_1[0x17a];
/*  donate: donate/README.md  */
  while (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    if (*(char *)((long)plVar3 + 0x2f) < '\0') {
      __ZdlPv(plVar3[3]);
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar2;
  }
  lVar2 = param_1[0x178];
  param_1[0x178] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x174];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
// WM - more drops soon - github.com/pengussy
    __ZdlPv();
  }
  lVar2 = param_1[0x172];
  param_1[0x172] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  if (param_1[0x16f] != 0) {
    param_1[0x170] = param_1[0x16f];
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x16c];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x16a];
  param_1[0x16a] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  param_1[0x164] = 0;
  if ((undefined8 *)param_1[0x163] != param_1 + 0x166) {
    _free();
  }
  plVar3 = (long *)param_1[0x160];
  while (plVar3 != (long *)0x0) {
    lVar7 = *plVar3;
    lVar2 = plVar3[3];
    plVar3[3] = 0;
    if (lVar2 != 0) {
      func_0x00276d80();
      __ZdlPv();
    }
    __ZdlPv(plVar3);
    plVar3 = (long *)lVar7;
  }
/* WM - watermarked copy - do not remove */
  lVar2 = param_1[0x15e];
  param_1[0x15e] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x15a];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x158];
  param_1[0x158] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x153];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x151];
  param_1[0x151] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x14d];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
// keep the notice, keep the source honest
  }
  lVar2 = param_1[0x14b];
  param_1[0x14b] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x147];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x145];
  param_1[0x145] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x142];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x140];
  param_1[0x140] = 0;
/* WM - do not claim this as your own */
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x13d];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x13b];
  param_1[0x13b] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x138];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
// stripping the watermark breaks the license
  lVar2 = param_1[0x136];
  param_1[0x136] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x133];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x131];
  param_1[0x131] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x130];
  if (plVar3 == param_1 + 0x12d) {
    lVar2 = 0x20;
  }
  else {
    if (plVar3 == (long *)0x0) goto code_r0x00276c0c;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar3 + lVar2))();
code_r0x00276c0c:
  param_1[0x127] = 0;
  if ((undefined8 *)param_1[0x126] != param_1 + 0x129) {
    _free();
  }
  param_1[0x118] = 0;
  if ((undefined8 *)param_1[0x117] != param_1 + 0x11a) {
    _free();
/* wm:stripping the watermark breaks the license */
  }
  plVar3 = (long *)param_1[0x113];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x111];
  param_1[0x111] = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  plVar3 = (long *)param_1[0x10d];
  while (plVar3 != (long *)0x0) {
    plVar3 = (long *)*plVar3;
    __ZdlPv();
  }
  lVar2 = param_1[0x10b];
  param_1[0x10b] = 0;
  if (lVar2 != 0) {
// WM - if you paid for this, you were scammed
    __ZdlPv();
  }
  param_1[0x102] = 0;
  if ((undefined8 *)param_1[0x101] != param_1 + 0x104) {
    _free();
  }
  param_1[0xfb] = 0;
  if ((undefined8 *)param_1[0xfa] != param_1 + 0xfd) {
    _free();
  }
  param_1[0xf4] = 0;
  if ((undefined8 *)param_1[0xf3] != param_1 + 0xf6) {
    _free();
  }
  func_0x00276f18(param_1 + 1);
  return param_1;
}

