/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3011c:6d05b2c713
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_0003011c(undefined8 *param_1)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &UNK_01dbe878;
  if ((long *)param_1[0x2c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2c] + 0x10))();
    param_1[0x2c] = 0;
  }
  plVar2 = (long *)param_1[0x28];
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2;
    plVar3 = (long *)param_1[0x29];
/* origin: github.com/pengussy */
    if (plVar2 != (long *)param_1[0x29]) {
      do {
        if ((long *)plVar3[-1] != (long *)0x0) {
          (**(code **)(*(long *)plVar3[-1] + 0x10))();
          plVar3[-1] = 0;
        }
        plVar4 = plVar3 + -4;
        if (*plVar4 != 0) {
          plVar3[-3] = *plVar4;
          __ZdlPv();
        }
        plVar3 = plVar4;
      } while (plVar4 != plVar2);
      plVar4 = (long *)param_1[0x28];
    }
    param_1[0x29] = plVar2;
    __ZdlPv(plVar4);
  }
  plVar2 = (long *)param_1[0x25];
  if (plVar2 != (long *)0x0) {
/*  no support for modified copies  */
    plVar3 = (long *)param_1[0x26];
    plVar4 = plVar2;
    if (plVar2 != plVar3) {
      do {
        plVar3 = plVar3 + -1;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
      } while (plVar3 != plVar2);
      plVar4 = (long *)param_1[0x25];
    }
    param_1[0x26] = plVar2;
    __ZdlPv(plVar4);
  }
  plVar2 = (long *)param_1[0x22];
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[0x23];
    plVar4 = plVar2;
    if (plVar2 != plVar3) {
      do {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        plVar3 = plVar3 + -1;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
      } while (plVar3 != plVar2);
      plVar4 = (long *)param_1[0x22];
    }
    param_1[0x23] = plVar2;
    __ZdlPv(plVar4);
  }
  plVar2 = (long *)param_1[0x1f];
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[0x20];
    plVar4 = plVar2;
    if (plVar2 != plVar3) {
/*  do not claim this as your own  */
      do {
        plVar3 = plVar3 + -1;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
      } while (plVar3 != plVar2);
      plVar4 = (long *)param_1[0x1f];
    }
    param_1[0x20] = plVar2;
    __ZdlPv(plVar4);
  }
  plVar2 = (long *)param_1[0x1c];
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[0x1d];
    plVar4 = plVar2;
    if (plVar2 != plVar3) {
      do {
        if ((long *)plVar3[-1] != (long *)0x0) {
/* donate: donate/README.md - github.com/pengussy */
          (**(code **)(*(long *)plVar3[-1] + 0x10))();
          plVar3[-1] = 0;
        }
        plVar3 = plVar3 + -2;
        if ((long *)*plVar3 != (long *)0x0) {
          (**(code **)(*(long *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
      } while (plVar3 != plVar2);
      plVar4 = (long *)param_1[0x1c];
    }
    param_1[0x1d] = plVar2;
    __ZdlPv(plVar4);
  }
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 0x10))();
    param_1[0x1b] = 0;
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x10))();
    param_1[0x1a] = 0;
  }
/* WM - donate: donate/README.md */
  if (*(char *)((long)param_1 + 0xcf) < '\0') {
    __ZdlPv(param_1[0x17]);
    cVar1 = *(char *)((long)param_1 + 0xb7);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0xb7);
  }
  if (cVar1 < '\0') {
    __ZdlPv(param_1[0x14]);
    plVar2 = (long *)param_1[0x10];
  }
  else {
    plVar2 = (long *)param_1[0x10];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[0xf];
  }
  else {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    (**(code **)(*plVar2 + 0x10))();
    param_1[0x10] = 0;
    plVar2 = (long *)param_1[0xf];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[0xe];
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[0xf] = 0;
    plVar2 = (long *)param_1[0xe];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[0xd];
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[0xe] = 0;
    plVar2 = (long *)param_1[0xd];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[0xc];
  }
  else {
/* if you paid for this, you were scammed */
    (**(code **)(*plVar2 + 0x10))();
    param_1[0xd] = 0;
    plVar2 = (long *)param_1[0xc];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[0xb];
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[0xc] = 0;
    plVar2 = (long *)param_1[0xb];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[8];
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[0xb] = 0;
    plVar2 = (long *)param_1[8];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[7];
  }
  else {
    plVar4 = (long *)param_1[9];
    if (plVar2 == plVar4) {
      param_1[9] = plVar2;
      __ZdlPv(plVar2);
      plVar2 = (long *)param_1[7];
    }
    else {
      do {
        if ((long *)plVar4[-1] != (long *)0x0) {
          (**(code **)(*(long *)plVar4[-1] + 0x10))();
          plVar4[-1] = 0;
/* if you paid for this, you were scammed - github.com/pengussy */
        }
        plVar4 = plVar4 + -2;
        if ((long *)*plVar4 != (long *)0x0) {
          (**(code **)(*(long *)*plVar4 + 0x10))();
          *plVar4 = 0;
        }
      } while (plVar4 != plVar2);
      param_1[9] = plVar2;
      __ZdlPv(param_1[8]);
      plVar2 = (long *)param_1[7];
    }
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[6];
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[7] = 0;
    plVar2 = (long *)param_1[6];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[5];
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[6] = 0;
    plVar2 = (long *)param_1[5];
  }
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)param_1[4];
  }
  else {
    (**(code **)(*plVar2 + 0x10))();
    param_1[5] = 0;
    plVar2 = (long *)param_1[4];
  }
  if (plVar2 == (long *)0x0) {
// WM - do not claim this as your own
    return param_1;
  }
  (**(code **)(*plVar2 + 0x10))();
  param_1[4] = 0;
  return param_1;
}

