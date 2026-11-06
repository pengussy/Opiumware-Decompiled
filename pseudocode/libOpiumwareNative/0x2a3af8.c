/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x2a3af8:b27af73440
 */

ulong FUN_002a3af8(uint *param_1,ulong param_2,char *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iStack_64;
  
  uVar5 = 3;
  if (0x3ff < param_4) {
    uVar5 = 4;
  }
  if ((param_4 & 0xffffffffffffc000) != 0) {
    uVar5 = uVar5 + 1;
  }
  _memcpy(param_8,param_7,0x810);
  iVar9 = (int)param_4;
/*  more drops soon - github.com/pengussy  */
  if (param_9._4_4_ == 0) {
    iVar2 = *(int *)(param_7 + 0x808);
    uVar6 = 9 - (uint)param_9;
    if (2 < (int)uVar6) {
      uVar6 = 3;
    }
    uVar8 = 8L << ((ulong)uVar6 & 0x3f);
    if (iVar2 == 2) {
      uVar8 = 6;
    }
    if (uVar8 <= param_4) {
      if (param_2 < uVar5 || param_2 - uVar5 == 0) {
        return 0xffffffffffffffba;
      }
      uVar6 = 4;
      if (3 < (uint)param_9 || 0x400 < param_4) {
        uVar6 = 0;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      }
      uVar7 = 0;
      if ((int)param_10 != 0) {
        uVar7 = 8;
      }
      uVar10 = 2;
      if ((uint)param_9 < 8) {
        uVar10 = 0;
        param_9._0_4_ = 7;
      }
      uVar6 = uVar6 | uVar10 | uVar7;
      if (param_10._4_4_ != 0) {
        uVar6 = uVar6 + 1;
      }
      pcVar1 = (code *)&DAT_0029cdbc;
      if (param_4 < 0x100 || iVar2 == 2 && uVar5 == 3) {
        pcVar1 = (code *)&DAT_0029c6d0;
      }
      iStack_64 = iVar2;
      uVar8 = (*pcVar1)((long)param_1 + uVar5,param_2 - uVar5,param_3,param_4,0xff,0xb,param_5,
                        param_6,param_8,&iStack_64,uVar6);
      uVar6 = 2;
      if (iStack_64 != 0) {
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar6 = 3;
      }
      if ((uVar8 - 1 < 0xffffffffffffff87 || uVar8 == 0xffffffffffffff88) &&
         (uVar8 < (param_4 - (param_4 >> ((ulong)((uint)param_9 - 1) & 0x3f))) - 2)) {
        if ((uVar8 == 1) &&
           (((7 < param_4 || (param_4 < 2)) ||
            ((cVar3 = *param_3, param_3[1] == cVar3 &&
             ((param_4 == 2 ||
              ((param_3[2] == cVar3 &&
               ((param_4 == 3 ||
                ((param_3[3] == cVar3 &&
                 ((param_4 == 4 ||
                  ((param_3[4] == cVar3 &&
                   ((param_4 == 5 ||
                    ((param_3[5] == cVar3 && ((param_4 == 6 || (param_3[6] == cVar3)))))))))))))))))
              ))))))) {
          _memcpy(param_8,param_7,0x810);
          uVar5 = func_0x002a3a80(param_1,extraout_x1,param_3,param_4);
          return uVar5;
        }
        if (iStack_64 == 0) {
          *(undefined4 *)(param_8 + 0x808) = 1;
        }
        iVar4 = (int)uVar8;
// WM - watermarked copy - do not remove
        if (uVar5 == 5) {
          *param_1 = iVar4 * 0x400000 + iVar9 * 0x10 | uVar6 | 0xc;
          *(char *)(param_1 + 1) = (char)(uVar8 >> 10);
        }
        else if (uVar5 == 4) {
          *param_1 = iVar4 * 0x40000 + iVar9 * 0x10 | uVar6 | 8;
        }
        else {
          uVar7 = 4;
          if (param_4 < 0x100 || iVar2 == 2 && uVar5 == 3) {
            uVar7 = 0;
          }
          iVar9 = (uVar7 | iVar9 << 4) + iVar4 * 0x4000;
          *(ushort *)param_1 = (ushort)iVar9 | (ushort)uVar6;
          *(char *)((long)param_1 + 2) = (char)((uint)iVar9 >> 0x10);
        }
        return uVar8 + uVar5;
      }
      _memcpy(param_8,param_7,0x810);
    }
  }
  uVar6 = 1;
  if (0x1f < param_4) {
    uVar6 = 2;
  }
  if (0xfff < param_4) {
// WM - unlicensed copy if this notice is missing
    uVar6 = uVar6 + 1;
  }
  uVar5 = param_4 + uVar6;
  if (param_2 < uVar5) {
    return 0xffffffffffffffba;
  }
  if (uVar6 == 3) {
    *param_1 = iVar9 << 4 | 0xc;
  }
  else if (uVar6 == 2) {
    *(ushort *)param_1 = (ushort)(iVar9 << 4) | 4;
  }
  else {
    *(char *)param_1 = (char)(iVar9 << 3);
  }
  _memcpy((long)param_1 + (ulong)uVar6,param_3,param_4);
  return uVar5;
}

