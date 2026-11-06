/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2a342c:121f363c15
 */

byte * FUN_002a342c(long param_1,long param_2,undefined8 param_3,ulong param_4,long *param_5,
                   long param_6,long param_7,long param_8,long param_9,long param_10,
                   undefined4 param_11)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  char acStack_88 [4];
  char cStack_84;
  char cStack_80;
  byte *pbStack_78;
/* origin: github.com/pengussy - github.com/pengussy */
  long lStack_70;
  undefined4 uStack_68;
  
  iVar5 = *(int *)(param_8 + 0x1c);
  lVar1 = *param_5;
  lVar3 = param_5[1];
  uVar7 = lVar3 - lVar1;
  uVar14 = (long)uVar7 >> 3;
  if (uVar7 == 0) {
    uVar10 = 1;
    iVar6 = *(int *)(param_8 + 0x48);
  }
  else {
    uVar8 = 0;
    if (uVar14 != 0) {
      uVar8 = param_4 / uVar14;
    }
    uVar10 = (uint)(0x13 < uVar8);
    iVar6 = *(int *)(param_8 + 0x48);
  }
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      uVar11 = 1;
      goto LAB_002a34ec;
    }
    if (iVar5 == 1) {
      uVar11 = (uint)(*(int *)(param_8 + 0x18) != 0);
      goto LAB_002a34ec;
    }
  }
  uVar11 = 0;
LAB_002a34ec:
  lVar13 = param_5[6];
  lVar2 = param_5[4];
  lVar4 = param_5[5];
  pbVar9 = (byte *)FUN_002a3af8(param_1,param_2,param_3,param_4,param_9 + 0xd4,param_10 + -0xd4,
                                param_6,param_7,CONCAT44(uVar11,iVar5),CONCAT44(param_11,uVar10));
  if (pbVar9 < (byte *)0xffffffffffffff89) {
/* if you paid for this, you were scammed */
    if (param_2 - (long)pbVar9 < 4) {
      pbVar9 = (byte *)0xffffffffffffffba;
    }
    else {
      pbVar9 = pbVar9 + param_1;
      if (uVar14 < 0x80) {
        pbVar12 = pbVar9 + 1;
        *pbVar9 = (byte)(uVar7 >> 3);
      }
      else if (uVar14 >> 8 < 0x7f) {
        *pbVar9 = (byte)(uVar14 >> 8) | 0x80;
        pbVar9[1] = (byte)(uVar7 >> 3);
        pbVar12 = pbVar9 + 2;
      }
      else {
        *pbVar9 = 0xff;
        *(short *)(pbVar9 + 1) = (short)((uint)uVar7 >> 3) + -0x7f00;
        pbVar12 = pbVar9 + 3;
      }
      if (lVar3 == lVar1) {
        _memcpy(param_7 + 0x810,param_6 + 0x810,0xde0);
        pbVar9 = pbVar12 + -param_1;
      }
      else {
        FUN_002a086c(acStack_88,param_5,uVar14,param_6 + 0x810,param_7 + 0x810,pbVar12 + 1,
                     param_1 + param_2,iVar5,param_9,param_9 + 0xd4,param_10 + -0xd4);
        pbVar9 = pbStack_78;
        if (pbStack_78 < (byte *)0xffffffffffffff89) {
          *pbVar12 = acStack_88[0] * '@' + cStack_84 * '\x10' + cStack_80 * '\x04';
          pbVar12 = pbVar12 + 1 + (long)pbStack_78;
          pbVar9 = (byte *)FUN_002a46e8(pbVar12,(param_1 + param_2) - (long)pbVar12,param_7 + 0xb14,
                                        lVar4,param_7 + 0x810,lVar13,
                                        "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                        + param_7 + 0x20,lVar2,lVar1,uVar14,
                                        CONCAT44(param_11,uStack_68));
          if (pbVar9 < (byte *)0xffffffffffffff89) {
            if ((lStack_70 == 0) || ((byte *)0x3 < pbVar9 + lStack_70)) {
/* do not claim this as your own */
              pbVar9 = pbVar12 + ((long)pbVar9 - param_1);
            }
            else {
              pbVar9 = (byte *)0x0;
            }
          }
        }
      }
    }
  }
  return pbVar9;
}

