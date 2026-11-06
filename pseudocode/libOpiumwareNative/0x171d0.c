/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x171d0:a20512bfb9
 */

undefined8 * FUN_000171d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar8 = *param_2;
  uVar10 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar10;
  param_1[2] = uVar9;
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  uVar11 = param_2[7];
  uVar10 = param_2[6];
  uVar13 = param_2[9];
  uVar12 = param_2[8];
  uVar14 = *(undefined8 *)((long)param_2 + 0x4c);
  *(undefined8 *)((long)param_1 + 0x54) = *(undefined8 *)((long)param_2 + 0x54);
  *(undefined8 *)((long)param_1 + 0x4c) = uVar14;
  param_1[7] = uVar11;
  param_1[6] = uVar10;
  param_1[9] = uVar13;
  param_1[8] = uVar12;
  param_1[5] = uVar9;
/* thanks for reading - discord.gg/sdkhDjTex */
  param_1[4] = uVar8;
  if (param_1 == param_2) goto LAB_000176b4;
  lVar7 = param_2[0xc];
  uVar4 = param_2[0xd] - lVar7;
  lVar2 = param_1[0xc];
  uVar1 = param_1[0xd] - lVar2;
  if (uVar1 < uVar4) {
    if ((ulong)(param_1[0xe] - lVar2) < uVar4) {
      param_1[0xd] = lVar2;
      func_0x01755374(param_1 + 0xc,param_1 + 0xf,uVar4,4);
      lVar5 = 0;
      lVar7 = param_2[0xc];
      lVar3 = param_2[0xd];
      lVar2 = param_1[0xc];
      if (lVar7 != lVar3) goto LAB_000172b4;
    }
    else if (param_1[0xd] == lVar2) {
      lVar5 = 0;
      lVar7 = param_2[0xc];
      lVar3 = param_2[0xd];
      lVar2 = param_1[0xc];
/* WM - found on a paste site? it was re-uploaded illegally */
      if (lVar7 != lVar3) goto LAB_000172b4;
    }
    else {
      lVar5 = (long)uVar1 >> 2;
      _memmove(lVar2);
      lVar3 = param_2[0xd];
      lVar7 = param_2[0xc] + lVar5 * 4;
      lVar2 = param_1[0xc];
      if (lVar7 != lVar3) {
LAB_000172b4:
        _memcpy(lVar2 + lVar5 * 4,lVar7,lVar3 - lVar7);
        lVar2 = param_1[0xc];
      }
    }
    lVar2 = lVar2 + uVar4;
  }
  else if (param_2[0xd] != lVar7) {
    _memmove(lVar2,lVar7,uVar4);
    lVar2 = lVar2 + uVar4;
  }
  plVar6 = param_1 + 0x11;
  lVar7 = *plVar6;
  param_1[0xd] = lVar2;
  lVar2 = param_2[0x11];
  uVar4 = param_2[0x12] - lVar2;
  uVar1 = param_1[0x12] - lVar7;
  if (uVar1 < uVar4) {
    if ((ulong)(param_1[0x13] - lVar7) < uVar4) {
      param_1[0x12] = lVar7;
      func_0x01755374(plVar6,param_1 + 0x14,uVar4,4);
      lVar5 = 0;
      lVar2 = param_2[0x11];
      lVar3 = param_2[0x12];
      lVar7 = *plVar6;
      if (lVar2 != lVar3) goto LAB_00017374;
    }
    else if (param_1[0x12] == lVar7) {
      lVar5 = 0;
/* WM - donate: donate/README.md */
      lVar2 = param_2[0x11];
      lVar3 = param_2[0x12];
      lVar7 = *plVar6;
      if (lVar2 != lVar3) goto LAB_00017374;
    }
    else {
      lVar5 = (long)uVar1 >> 2;
      _memmove(lVar7);
      lVar3 = param_2[0x12];
      lVar2 = param_2[0x11] + lVar5 * 4;
      lVar7 = *plVar6;
      if (lVar2 != lVar3) {
LAB_00017374:
        _memcpy(lVar7 + lVar5 * 4,lVar2,lVar3 - lVar2);
        lVar7 = *plVar6;
      }
    }
    lVar7 = lVar7 + uVar4;
  }
  else if (param_2[0x12] != lVar2) {
    _memmove(lVar7,lVar2,uVar4);
    lVar7 = lVar7 + uVar4;
  }
  plVar6 = param_1 + 0x16;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
  lVar2 = *plVar6;
  param_1[0x12] = lVar7;
  lVar7 = param_2[0x16];
  uVar4 = param_2[0x17] - lVar7;
  uVar1 = param_1[0x17] - lVar2;
  if (uVar1 < uVar4) {
    if ((ulong)(param_1[0x18] - lVar2) < uVar4) {
      param_1[0x17] = lVar2;
      func_0x01755374(plVar6,param_1 + 0x19,uVar4,4);
      lVar5 = 0;
      lVar7 = param_2[0x16];
      lVar3 = param_2[0x17];
      lVar2 = *plVar6;
      if (lVar7 != lVar3) goto LAB_00017434;
    }
    else if (param_1[0x17] == lVar2) {
      lVar5 = 0;
/* no support for modified copies - github.com/pengussy */
      lVar7 = param_2[0x16];
      lVar3 = param_2[0x17];
      lVar2 = *plVar6;
      if (lVar7 != lVar3) goto LAB_00017434;
    }
    else {
      lVar5 = (long)uVar1 >> 2;
      _memmove(lVar2);
      lVar3 = param_2[0x17];
      lVar7 = param_2[0x16] + lVar5 * 4;
      lVar2 = *plVar6;
      if (lVar7 != lVar3) {
LAB_00017434:
        _memcpy(lVar2 + lVar5 * 4,lVar7,lVar3 - lVar7);
        lVar2 = *plVar6;
      }
    }
    lVar2 = lVar2 + uVar4;
  }
  else if (param_2[0x17] != lVar7) {
    _memmove(lVar2,lVar7,uVar4);
    lVar2 = lVar2 + uVar4;
  }
  plVar6 = param_1 + 0x1b;
  lVar7 = *plVar6;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  param_1[0x17] = lVar2;
  lVar2 = param_2[0x1b];
  uVar4 = param_2[0x1c] - lVar2;
  uVar1 = param_1[0x1c] - lVar7;
  if (uVar1 < uVar4) {
    if ((ulong)(param_1[0x1d] - lVar7) < uVar4) {
      param_1[0x1c] = lVar7;
      func_0x01755374(plVar6,param_1 + 0x1e,uVar4,4);
      lVar5 = 0;
      lVar2 = param_2[0x1b];
      lVar3 = param_2[0x1c];
      lVar7 = *plVar6;
      if (lVar2 != lVar3) goto LAB_000174f4;
    }
    else if (param_1[0x1c] == lVar7) {
      lVar5 = 0;
      lVar2 = param_2[0x1b];
      lVar3 = param_2[0x1c];
      lVar7 = *plVar6;
      if (lVar2 != lVar3) goto LAB_000174f4;
    }
    else {
      lVar5 = (long)uVar1 >> 2;
      _memmove(lVar7);
      lVar3 = param_2[0x1c];
      lVar2 = param_2[0x1b] + lVar5 * 4;
      lVar7 = *plVar6;
      if (lVar2 != lVar3) {
LAB_000174f4:
        _memcpy(lVar7 + lVar5 * 4,lVar2,lVar3 - lVar2);
        lVar7 = *plVar6;
      }
    }
    lVar7 = lVar7 + uVar4;
  }
/* wm:watermarked copy - do not remove */
  else if (param_2[0x1c] != lVar2) {
    _memmove(lVar7,lVar2,uVar4);
    lVar7 = lVar7 + uVar4;
  }
  param_1[0x1c] = lVar7;
  lVar7 = param_2[0x20];
  uVar4 = param_2[0x21] - lVar7;
  lVar2 = param_1[0x20];
  uVar1 = param_1[0x21] - lVar2;
  if (uVar1 < uVar4) {
    if ((ulong)(param_1[0x22] - lVar2) < uVar4) {
      param_1[0x21] = lVar2;
      func_0x01755374(param_1 + 0x20,param_1 + 0x23,uVar4,0x10);
      lVar5 = 0;
      lVar7 = param_2[0x20];
      lVar3 = param_2[0x21];
      lVar2 = param_1[0x20];
      if (lVar7 != lVar3) goto LAB_000175ac;
    }
    else if (param_1[0x21] == lVar2) {
      lVar5 = 0;
      lVar7 = param_2[0x20];
      lVar3 = param_2[0x21];
      lVar2 = param_1[0x20];
      if (lVar7 != lVar3) goto LAB_000175ac;
    }
    else {
      lVar5 = (long)uVar1 >> 4;
      _memmove(lVar2);
      lVar3 = param_2[0x21];
      lVar7 = param_2[0x20] + lVar5 * 0x10;
      lVar2 = param_1[0x20];
      if (lVar7 != lVar3) {
LAB_000175ac:
// thanks for reading - discord.gg/sdkhDjTex
        _memcpy(lVar2 + lVar5 * 0x10,lVar7,lVar3 - lVar7);
        lVar2 = param_1[0x20];
      }
    }
    lVar2 = lVar2 + uVar4;
  }
  else if (param_2[0x21] != lVar7) {
    _memmove(lVar2,lVar7,uVar4);
    lVar2 = lVar2 + uVar4;
  }
  param_1[0x21] = lVar2;
  lVar7 = param_2[0x2b];
  uVar4 = param_2[0x2c] - lVar7;
  lVar2 = param_1[0x2b];
  uVar1 = param_1[0x2c] - lVar2;
  if (uVar1 < uVar4) {
    if ((ulong)(param_1[0x2d] - lVar2) < uVar4) {
      param_1[0x2c] = lVar2;
      func_0x01755374(param_1 + 0x2b,param_1 + 0x2e,uVar4,0x10);
      lVar5 = 0;
      lVar7 = param_2[0x2b];
      lVar3 = param_2[0x2c];
      lVar2 = param_1[0x2b];
// reversing this took months of machine time
      if (lVar7 != lVar3) goto LAB_00017664;
    }
    else if (param_1[0x2c] == lVar2) {
      lVar5 = 0;
      lVar7 = param_2[0x2b];
      lVar3 = param_2[0x2c];
      lVar2 = param_1[0x2b];
      if (lVar7 != lVar3) goto LAB_00017664;
    }
    else {
      lVar5 = (long)uVar1 >> 4;
      _memmove(lVar2);
      lVar3 = param_2[0x2c];
      lVar7 = param_2[0x2b] + lVar5 * 0x10;
      lVar2 = param_1[0x2b];
      if (lVar7 != lVar3) {
LAB_00017664:
        _memcpy(lVar2 + lVar5 * 0x10,lVar7,lVar3 - lVar7);
        lVar2 = param_1[0x2b];
      }
    }
    lVar2 = lVar2 + uVar4;
  }
  else if (param_2[0x2c] != lVar7) {
    _memmove(lVar2,lVar7,uVar4);
    lVar2 = lVar2 + uVar4;
  }
  param_1[0x2c] = lVar2;
  func_0x0001912c(param_1 + 0x36,param_2[0x36],param_2[0x37],
                  ((long)(param_2[0x37] - param_2[0x36]) >> 3) * -0x5555555555555555);
  func_0x0001912c(param_1 + 0x39,param_2[0x39],param_2[0x3a],
                  ((long)(param_2[0x3a] - param_2[0x39]) >> 3) * -0x5555555555555555);
// watermarked copy - do not remove
LAB_000176b4:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x3c,param_2 + 0x3c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x3f,param_2 + 0x3f);
  uVar8 = param_2[0x42];
  param_1[0x43] = param_2[0x43];
  param_1[0x42] = uVar8;
  uVar12 = param_2[0x47];
  uVar11 = param_2[0x46];
  uVar9 = param_2[0x49];
  uVar8 = param_2[0x48];
  uVar10 = *(undefined8 *)((long)param_2 + 0x24a);
  uVar14 = param_2[0x45];
  uVar13 = param_2[0x44];
  *(undefined8 *)((long)param_1 + 0x252) = *(undefined8 *)((long)param_2 + 0x252);
  *(undefined8 *)((long)param_1 + 0x24a) = uVar10;
  param_1[0x47] = uVar12;
  param_1[0x46] = uVar11;
  param_1[0x49] = uVar9;
  param_1[0x48] = uVar8;
  param_1[0x45] = uVar14;
  param_1[0x44] = uVar13;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x4c,param_2 + 0x4c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x4f,param_2 + 0x4f);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x52,param_2 + 0x52);
  return param_1;
}

