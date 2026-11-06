/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x304fe8:271e8aeed6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_00304fe8(long *param_1,long param_2,byte *param_3)

{
  long *plVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  byte *pbVar12;
  
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0;
  *(undefined8 *)((long)param_1 + 0x164) = 0;
  *(undefined8 *)((long)param_1 + 0x15c) = 0;
  *(undefined4 *)((long)param_1 + 0x19c) = 0;
  *(undefined8 *)((long)param_1 + 0x184) = 0;
  *(undefined8 *)((long)param_1 + 0x17c) = 0;
  *(undefined8 *)((long)param_1 + 0x194) = 0;
  *(undefined8 *)((long)param_1 + 0x18c) = 0;
  plVar1 = param_1 + 0x5a;
// WM - unlicensed copy if this notice is missing
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4c] = 0;
  param_1[0x4b] = 0;
  param_1[0x46] = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[0x42] = 0;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  param_1[0x41] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x3f] = 0;
  param_1[0x54] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  func_0x0031fb28(plVar1,0);
  _bzero(param_1 + 1,0x430);
  *param_1 = param_2;
  lVar5 = _strlen(param_3);
  lVar6 = (*pcRam0000000002057e10)(lVar5 + 1,uRam00000000020932e8);
  lVar8 = lRam00000000020973e0;
  if (lRam00000000020973e0 != 0) {
    iVar4 = *(int *)(lRam00000000020973e0 + 4);
    piVar11 = (int *)(&UNK_00002938 +
                     (long)*(short *)(&UNK_00002934 + lRam00000000020973e0) * 8 +
                     lRam00000000020973e0);
    if (*piVar11 != iVar4) {
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      iVar3 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
      *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar3;
      piVar11 = (int *)(&UNK_00002938 + (long)iVar3 * 8 + lVar8);
      *piVar11 = iVar4;
      piVar11[1] = 0;
    }
    if (lVar5 == -2) {
      *(short *)((long)piVar11 + 6) = *(short *)((long)piVar11 + 6) + 1;
      *(int *)(&UNK_00002930 + lVar8) = *(int *)(&UNK_00002930 + lVar8) + 1;
    }
    else {
      *(short *)(piVar11 + 1) = (short)piVar11[1] + 1;
      *(int *)(&UNK_0000292c + lVar8) = *(int *)(&UNK_0000292c + lVar8) + 1;
    }
  }
  _memcpy(lVar6,param_3,lVar5 + 1);
/*  found on a paste site? it was re-uploaded illegally  */
  param_1[1] = lVar6;
  iVar4 = _strlen(param_3);
  *(int *)(param_1 + 0x11) = iVar4 + 1;
  uVar9 = (uint)*param_3;
  if (*param_3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0xffffffff;
    do {
      while (((pbVar12 = param_3 + 1, uVar9 == 0x23 && (*pbVar12 == 0x23)) && (param_3[2] == 0x23)))
      {
        uVar7 = 0xffffffff;
        uVar9 = (uint)param_3[3];
        param_3 = param_3 + 3;
        if (uVar9 == 0) goto LAB_00305204;
      }
      uVar7 = *(uint *)(&UNK_01adf190 + (ulong)(uVar7 & 0xff ^ uVar9) * 4) ^ uVar7 >> 8;
      uVar9 = (uint)*pbVar12;
      param_3 = pbVar12;
    } while (*pbVar12 != 0);
LAB_00305204:
    uVar7 = ~uVar7;
  }
  *(uint *)(param_1 + 2) = uVar7;
  func_0x002fe9c8(param_1 + 0x21);
  uVar7 = ~*(uint *)(param_1[0x22] + (long)(int)param_1[0x21] * 4 + -4);
  uVar10 = 0x23;
  pbVar12 = (byte *)"#MOVE";
  uVar9 = uVar7;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  do {
    while (((pbVar2 = pbVar12 + 1, uVar10 == 0x23 && (*pbVar2 == 0x23)) && (pbVar12[2] == 0x23))) {
      uVar10 = (uint)pbVar12[3];
      pbVar12 = pbVar12 + 3;
      uVar9 = uVar7;
      if (uVar10 == 0) goto LAB_0030529c;
    }
    uVar9 = *(uint *)(&UNK_01adf190 + (ulong)(uVar9 & 0xff ^ uVar10) * 4) ^ uVar9 >> 8;
    uVar10 = (uint)*pbVar2;
    pbVar12 = pbVar2;
  } while (*pbVar2 != 0);
LAB_0030529c:
  uVar9 = ~uVar9;
  lVar8 = *param_1;
  if (*(uint *)(&UNK_00001500 + lVar8) == uVar9) {
    FUN_003186dc(uVar9,0xb,"#MOVE",0);
    lVar8 = *param_1;
  }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
  *(uint *)((long)param_1 + 0x8c) = uVar9;
  lVar5 = _UNK_01adf090;
  param_1[0x16] = _UNK_01adf098;
  param_1[0x15] = lVar5;
  *(undefined4 *)((long)param_1 + 0xe4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1d) = 0xffff;
  *(uint *)((long)param_1 + 0xef) = (uint)*(byte *)((long)param_1 + 0xef);
  *(undefined8 *)((long)param_1 + 0xfc) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0xf4) = 0x7f7fffff7f7fffff;
  param_1[0x52] = -0x407fffff00000001;
  param_1[0x58] = -0x100000000;
  lVar5 = NEON_fmov(0x3f800000,4);
  param_1[0x57] = lVar5;
  param_1[0x75] = param_1[1];
  param_1[0x59] = (long)plVar1;
  func_0x0031f824(plVar1,"/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                         lVar8 + 0x18);
  param_1[0x84] = 0x7f7fffff7f7fffff;
  param_1[0x83] = 0x7f7fffff7f7fffff;
  return param_1;
}

