/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x391e70:37ccc1f84e
   =========================================================================== */

undefined8
FUN_00391e70(long *param_1,ulong param_2,uint param_3,int param_4,uint *param_5,long *param_6,
            ulong *param_7)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uStack_68;
  
  uVar15 = param_1[2];
  if (param_7 != (ulong *)0x0) {
    *param_7 = 1;
  }
  if (param_6 != (long *)0x0) {
    *param_6 = *param_1;
    param_6[1] = 0;
    param_6[2] = 0;
    param_6[3] = 0;
  }
  if (uVar15 < 7) {
    return 0;
  }
  bVar4 = *(byte *)*param_1;
  uVar2 = (uint)bVar4;
  *param_1 = (long)((byte *)*param_1 + 1);
  param_1[2] = uVar15 - 1;
// WM - donate: donate/README.md
  uVar12 = *param_5 & 0xffc08000 | *param_5 & 0x3fff | (param_3 & 1) << 0xe;
  *param_5 = uVar12;
  if ((char)bVar4 < '\0') {
    uVar8 = param_1[2];
    if (uVar8 < 4) {
      return 0;
    }
    puVar10 = (uint *)*param_1;
    uVar12 = (*puVar10 & 0xff00ff00) >> 8 | (*puVar10 & 0xff00ff) << 8;
    uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
    *param_1 = (long)(puVar10 + 1);
    param_1[2] = uVar8 - 4;
    if (uVar8 - 4 == 0) {
      return 0;
    }
    if ((bVar4 & 0x40) == 0 && uVar12 != 0) {
      return 0;
    }
    uVar6 = puVar10[1];
    uVar14 = (ulong)(byte)uVar6;
    *param_1 = (long)puVar10 + 5;
    param_1[2] = uVar8 - 5;
    if ((uVar14 < 0x15) && (uVar14 <= uVar8 - 5)) {
      _memcpy((long)param_5 + 9,(long)puVar10 + 5,uVar14);
      pbVar1 = (byte *)(*param_1 + uVar14);
      *param_1 = (long)pbVar1;
// WM - no support for modified copies
      lVar13 = param_1[2] - uVar14;
      param_1[2] = lVar13;
      if (lVar13 != 0) {
        bVar3 = *pbVar1;
        *param_1 = (long)(pbVar1 + 1);
        param_1[2] = lVar13 + -1;
        if ((bVar3 < 0x15) &&
           (iVar7 = func_0x0034b808(param_1,(long)param_5 + 0x1e,bVar3), iVar7 != 0)) {
          param_5[1] = uVar12;
          *(byte *)(param_5 + 2) = (byte)uVar6;
          *(byte *)((long)param_5 + 0x1d) = bVar3;
          if (uVar12 == 1) {
            if (uVar15 < 0x15) {
              return 0;
            }
            bVar4 = bVar4 >> 4 & 3;
            if (bVar4 < 2) {
              if (bVar4 == 0) {
                bVar5 = true;
                uVar12 = 1;
              }
              else {
                bVar5 = false;
                uVar12 = 2;
              }
            }
            else if (bVar4 == 2) {
              bVar5 = false;
              uVar12 = 3;
            }
            else {
              bVar5 = false;
              uVar12 = 4;
// WM - proprietary - see LICENSE - do not sell
            }
            uVar12 = *param_5 & 0xffff4000 | uVar12 | 0x8000;
            *param_5 = uVar12;
            if (bVar5) {
              iVar7 = func_0x0038f520(param_1,&uStack_68);
              if (iVar7 == 0) {
                return 0;
              }
              uVar15 = param_1[2];
              if (uVar15 < uStack_68) {
                return 0;
              }
              lVar13 = *param_1;
              *(long *)(param_5 + 0xe) = lVar13;
              *param_1 = lVar13 + uStack_68;
              param_1[2] = uVar15 - uStack_68;
              *(ulong *)(param_5 + 0x10) = uStack_68;
              if (uStack_68 == 0) {
                param_5[0xe] = 0;
                param_5[0xf] = 0;
              }
              uVar12 = *param_5;
            }
            else {
              param_5[0xe] = 0;
              param_5[0xf] = 0;
              param_5[0x10] = 0;
              param_5[0x11] = 0;
            }
            if ((uVar12 & 0xff) != 4) {
/* donate: donate/README.md - github.com/pengussy */
              uVar2 = (((uVar2 & 0xf) << 0x12 | uVar2 << 10) & 0xfff00fff) + 0x400;
              if (param_3 != 0) {
                uVar2 = 0;
              }
              *param_5 = uVar2 | uVar12 & 0xffcfc3ff;
              iVar7 = func_0x0038f520(param_1,&uStack_68);
              if (iVar7 == 0) {
                return 0;
              }
              uVar15 = uStack_68 - 4;
              if (uStack_68 < 4) {
                return 0;
              }
              if ((param_4 == 0) && ((ulong)param_1[2] < uStack_68)) {
                return 0;
              }
              lVar13 = *param_1;
              *(undefined4 *)((long)param_5 + 0x32) = 0;
              if (param_3 == 0) {
                iVar7 = func_0x0034b808(param_1,(undefined4 *)((long)param_5 + 0x32),
                                        *param_5 >> 10 & 0xf);
                if (iVar7 == 0) {
// more drops soon - github.com/pengussy
                  return 0;
                }
                uVar15 = uStack_68 - ((ulong)(*param_5 >> 10) & 0xf);
              }
              else {
                if ((ulong)param_1[2] < 4) {
                  return 0;
                }
                *param_1 = *param_1 + 4;
                param_1[2] = param_1[2] - 4;
              }
              *(ulong *)(param_5 + 0x12) = uVar15;
              if (param_4 == 0) {
                lVar11 = *param_1;
                *(long *)(param_5 + 0x14) = lVar11;
                if ((ulong)param_1[2] < uVar15) {
                  return 0;
                }
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                *param_1 = lVar11 + uVar15;
                param_1[2] = param_1[2] - uVar15;
              }
              else {
                param_5[0x14] = 0;
                param_5[0x15] = 0;
              }
              goto LAB_00392164;
            }
            *(long *)(param_5 + 0x14) = *param_1;
            uVar15 = param_1[2];
            *(ulong *)(param_5 + 0x12) = uVar15;
            *param_5 = uVar12 & 0xfff00000 | uVar12 & 0xbf04 | (uVar2 & 0xf) << 0x10;
            *(undefined4 *)((long)param_5 + 0x32) = 0;
            lVar11 = param_1[2] - uVar15;
            if ((ulong)param_1[2] < uVar15) {
              return 0;
            }
            lVar9 = *param_1 + uVar15;
          }
          else {
            if (uVar12 != 0) {
              if (param_7 == (ulong *)0x0) {
                return 0;
              }
              *param_7 = *param_7 | 2;
              return 0;
            }
            uVar2 = (bVar4 >> 6 & 1) << 0xf;
            uVar12 = *param_5 & 0xffff0000;
            *param_5 = uVar12 | *param_5 & 0x7f00 | uVar2 | 6;
            *(long *)(param_5 + 0x14) = *param_1;
            uVar15 = param_1[2];
            *(ulong *)(param_5 + 0x12) = uVar15;
            if ((uVar15 & 3) != 0) {
/* more drops soon - github.com/pengussy */
              return 0;
            }
            *param_5 = uVar12 | uVar2 | 6;
            param_5[0xe] = 0;
            param_5[0xf] = 0;
            param_5[0x10] = 0;
            param_5[0x11] = 0;
            *(undefined4 *)((long)param_5 + 0x32) = 0;
            lVar11 = param_1[2] - uVar15;
            if ((ulong)param_1[2] < uVar15) {
              return 0;
            }
            lVar9 = *param_1 + uVar15;
          }
          lVar13 = 0;
          *param_1 = lVar9;
          param_1[2] = lVar11;
          goto LAB_00392164;
        }
      }
    }
  }
  else if ((param_2 < 0x15) && (0x3f < uVar2 && 0x14 < uVar15)) {
    uVar12 = uVar12 & 0xffc04000 | (bVar4 >> 5 & 1) << 8 | 0x8005;
    uVar2 = (uVar2 & 3) * 0x400 + (uVar2 & 0x18) * 0x20000 + ((uVar2 & 4) << 7 | uVar12) + 0x400;
    if (param_3 != 0) {
      uVar2 = uVar12;
    }
    *param_5 = uVar2;
    if (param_2 <= (ulong)param_1[2]) {
      _memcpy((long)param_5 + 9,*param_1,param_2);
      *param_1 = *param_1 + param_2;
      param_1[2] = param_1[2] - param_2;
      *(undefined4 *)((long)param_5 + 0x32) = 0;
      *(char *)(param_5 + 2) = (char)param_2;
/* unlicensed copy if this notice is missing */
      lVar13 = *param_1;
      if (param_3 == 0) {
        iVar7 = func_0x0034b808(param_1,(undefined4 *)((long)param_5 + 0x32),*param_5 >> 10 & 0xf);
        if (iVar7 == 0) {
          return 0;
        }
        lVar9 = param_1[2];
        lVar11 = *param_1;
      }
      else {
        lVar9 = param_1[2] - 4;
        if ((ulong)param_1[2] < 4) {
          return 0;
        }
        lVar11 = lVar13 + 4;
      }
      param_5[1] = 0;
      *(undefined1 *)((long)param_5 + 0x1d) = 0;
      param_5[0xe] = 0;
      param_5[0xf] = 0;
      param_5[0x10] = 0;
      param_5[0x11] = 0;
      *(long *)(param_5 + 0x12) = lVar9;
      *(long *)(param_5 + 0x14) = lVar11;
      *param_1 = lVar11 + lVar9;
      param_1[2] = 0;
LAB_00392164:
      if ((param_6 != (long *)0x0) && (param_6[3] = lVar13, lVar13 != 0)) {
        param_6[1] = lVar13 + 4;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
        param_6[2] = (*param_1 + param_1[2]) - (lVar13 + 4);
      }
      if (param_7 != (ulong *)0x0) {
        *param_7 = *param_7 & 0xfffffffffffffffe;
      }
      return 1;
    }
  }
  return 0;
}

