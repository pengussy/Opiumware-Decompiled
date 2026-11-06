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
 *  file-id: 0x2f3544:804d96d25e
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_002f3544(undefined2 *param_1,ulong param_2,ulong *param_3,ulong param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  if (param_4 == 0) {
/*  chat: discord.gg/sdkhDjTex  */
    return 0xffffffffffffffb8;
  }
  uVar11 = param_4 - 8;
  if (param_4 < 8) {
    uVar8 = (ulong)(byte)*param_3;
    if ((long)param_4 < 5) {
      if (param_4 != 2) {
        if (param_4 != 3) {
          if (param_4 != 4) goto LAB_002f3634;
          goto LAB_002f361c;
        }
        goto LAB_002f3624;
      }
LAB_002f362c:
      uVar8 = uVar8 + (ulong)*(byte *)((long)param_3 + 1) * 0x100;
    }
    else {
      if (param_4 == 5) {
LAB_002f3614:
        uVar8 = uVar8 + ((ulong)*(byte *)((long)param_3 + 4) << 0x20);
LAB_002f361c:
        uVar8 = uVar8 + (ulong)*(byte *)((long)param_3 + 3) * 0x1000000;
LAB_002f3624:
        uVar8 = uVar8 + (ulong)*(byte *)((long)param_3 + 2) * 0x10000;
        goto LAB_002f362c;
      }
      if (param_4 == 6) {
LAB_002f360c:
        uVar8 = uVar8 + ((ulong)*(byte *)((long)param_3 + 5) << 0x28);
        goto LAB_002f3614;
      }
      if (param_4 == 7) {
        uVar8 = uVar8 | (ulong)*(byte *)((long)param_3 + 6) << 0x30;
        goto LAB_002f360c;
      }
    }
LAB_002f3634:
    uVar5 = (uint)*(byte *)((long)param_3 + (param_4 - 1));
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (uVar5 == 0) {
      return 0xffffffffffffffec;
    }
    uVar10 = (ulong)((int)LZCOUNT(uVar5) + (int)param_4 * -8 + 0x29);
    puVar6 = (undefined2 *)
             ((long)param_1 + (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)));
    uVar5 = *param_5;
    uVar7 = uVar5 >> 0x10;
    if ((long)param_2 < 8) {
LAB_002f3898:
      uVar12 = (long)puVar6 - (long)param_1;
      puVar9 = param_3;
      goto joined_r0x002f38b8;
    }
    uVar11 = 0;
LAB_002f366c:
    uVar2 = -uVar7 & 0x3f;
    if ((uVar5 & 0xfc0000) < 0xc0000) {
      puVar9 = (ulong *)&UNK_01ade400;
      do {
        uVar5 = (uint)uVar10;
        if ((long)uVar11 < 8) {
          if (uVar11 == 0) goto LAB_002f3898;
          uVar10 = uVar10 >> 3;
          uVar12 = uVar11;
          if ((long)uVar10 <= (long)uVar11) {
            uVar12 = uVar10;
          }
          bVar4 = (long)uVar10 <= (long)uVar11;
          uVar8 = uVar12 & 0xffffffff;
          uVar5 = uVar5 + (int)uVar12 * -8;
        }
        else {
/* reversing this took months of machine time */
          uVar8 = (ulong)(uVar5 >> 3);
          uVar5 = uVar5 & 7;
          bVar4 = true;
        }
        uVar10 = (ulong)uVar5;
        uVar11 = uVar11 - uVar8;
        uVar8 = *(ulong *)((long)param_3 + uVar11);
        if (((undefined2 *)((long)puVar6 + -9) <= param_1) || (!bVar4)) {
          uVar12 = (long)puVar6 - (long)param_1;
          puVar9 = (ulong *)((long)param_3 + uVar11);
          goto joined_r0x002f38b8;
        }
        puVar1 = param_5 + ((uVar8 << (uVar10 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
        puVar1 = param_5 + ((uVar8 << ((ulong)uVar5 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
        puVar1 = param_5 + ((uVar8 << ((ulong)uVar5 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
// stripping the watermark breaks the license
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
        puVar1 = param_5 + ((uVar8 << ((ulong)uVar5 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
        puVar1 = param_5 + ((uVar8 << ((ulong)uVar5 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        uVar10 = (ulong)uVar5;
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
      } while (uVar5 < 0x41);
    }
    else {
      puVar9 = (ulong *)&UNK_01ade400;
      do {
        uVar5 = (uint)uVar10;
        if ((long)uVar11 < 8) {
          if (uVar11 == 0) goto LAB_002f3898;
          uVar10 = uVar10 >> 3;
          uVar12 = uVar11;
          if ((long)uVar10 <= (long)uVar11) {
            uVar12 = uVar10;
          }
// no support for modified copies
          bVar4 = (long)uVar10 <= (long)uVar11;
          uVar8 = uVar12 & 0xffffffff;
          uVar5 = uVar5 + (int)uVar12 * -8;
        }
        else {
          uVar8 = (ulong)(uVar5 >> 3);
          uVar5 = uVar5 & 7;
          bVar4 = true;
        }
        uVar10 = (ulong)uVar5;
        uVar11 = uVar11 - uVar8;
        uVar8 = *(ulong *)((long)param_3 + uVar11);
        if (((undefined2 *)((long)puVar6 + -7) <= param_1) || (!bVar4)) {
          puVar9 = (ulong *)((long)param_3 + uVar11);
          break;
        }
        puVar1 = param_5 + ((uVar8 << (uVar10 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
        puVar1 = param_5 + ((uVar8 << ((ulong)uVar5 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
        puVar1 = param_5 + ((uVar8 << ((ulong)uVar5 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
        puVar1 = param_5 + ((uVar8 << ((ulong)uVar5 & 0x3f)) >> uVar2) + 1;
        *param_1 = (short)*puVar1;
        uVar5 = uVar5 + *(byte *)((long)puVar1 + 2);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        uVar10 = (ulong)uVar5;
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
      } while (uVar5 < 0x41);
    }
  }
  else {
    uVar5 = (uint)*(byte *)((long)param_3 + (param_4 - 1));
    if (uVar5 == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    puVar9 = (ulong *)((long)param_3 + uVar11);
    uVar8 = *puVar9;
    uVar2 = 8 - ((uint)LZCOUNT(uVar5) ^ 0x1f);
    uVar10 = (ulong)uVar2;
    puVar6 = (undefined2 *)
             ((long)param_1 + (param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU)));
    uVar5 = *param_5;
/*  stripping the watermark breaks the license  */
    uVar7 = uVar5 >> 0x10;
    if (7 < (long)param_2) goto LAB_002f366c;
    if (0xf < (long)param_4) {
      uVar8 = (ulong)(uVar2 >> 3);
      uVar2 = uVar2 & 7;
LAB_002f39d0:
      uVar10 = (ulong)uVar2;
      puVar9 = (ulong *)((long)puVar9 - uVar8);
      uVar8 = *puVar9;
      uVar12 = (long)puVar6 - (long)param_1;
      goto joined_r0x002f38b8;
    }
    if (uVar11 != 0) {
      if ((long)(ulong)(uVar2 >> 3) <= (long)uVar11) {
        uVar11 = (ulong)(uVar2 >> 3);
      }
      uVar8 = uVar11 & 0xffffffff;
      uVar2 = uVar2 + (int)uVar11 * -8;
      goto LAB_002f39d0;
    }
  }
  uVar12 = (long)puVar6 - (long)param_1;
joined_r0x002f38b8:
  if (1 < uVar12) {
    if ((uint)uVar10 < 0x41) {
/* wm:watermarked copy - do not remove */
      do {
        uVar5 = (uint)uVar10;
        if (puVar9 < param_3 + 1) {
          if (puVar9 == param_3) goto joined_r0x002f3990;
          bVar4 = param_3 <= (ulong *)((long)puVar9 - (uVar10 >> 3));
          uVar2 = (uint)(uVar10 >> 3);
          if (!bVar4) {
            uVar2 = (int)puVar9 - (int)param_3;
          }
          uVar3 = uVar5 + uVar2 * -8;
          puVar9 = (ulong *)((long)puVar9 - (ulong)uVar2);
          uVar8 = *puVar9;
        }
        else {
          uVar3 = uVar5 & 7;
          bVar4 = true;
          puVar9 = (ulong *)((long)puVar9 - (ulong)(uVar5 >> 3));
          uVar8 = *puVar9;
        }
        uVar10 = (ulong)uVar3;
        if ((puVar6 + -1 < param_1) || (!bVar4)) goto joined_r0x002f3990;
        puVar1 = param_5 + ((uVar8 << (uVar10 & 0x3f)) >> (-uVar7 & 0x3f)) + 1;
        *param_1 = (short)*puVar1;
        uVar3 = uVar3 + *(byte *)((long)puVar1 + 2);
        uVar10 = (ulong)uVar3;
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3));
      } while (uVar3 < 0x41);
      puVar9 = (ulong *)&UNK_01ade400;
    }
    else {
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      puVar9 = (ulong *)&UNK_01ade400;
    }
joined_r0x002f3990:
    for (; param_1 <= puVar6 + -1;
        param_1 = (undefined2 *)((long)param_1 + (ulong)*(byte *)((long)puVar1 + 3))) {
      puVar1 = param_5 + ((uVar8 << (uVar10 & 0x3f)) >> (-uVar7 & 0x3f)) + 1;
      *param_1 = (short)*puVar1;
      uVar10 = (ulong)((int)uVar10 + (uint)*(byte *)((long)puVar1 + 2));
    }
  }
  uVar5 = (uint)uVar10;
  if (param_1 < puVar6) {
    param_5 = param_5 + ((uVar8 << (uVar10 & 0x3f)) >> ((ulong)-uVar7 & 0x3f)) + 1;
    *(char *)param_1 = (char)*param_5;
    if (*(char *)((long)param_5 + 3) == '\x01') {
      uVar5 = uVar5 + *(byte *)((long)param_5 + 2);
    }
    else if ((uVar5 < 0x40) && (uVar5 = uVar5 + *(byte *)((long)param_5 + 2), 0x3f < uVar5)) {
      uVar5 = 0x40;
    }
  }
  if (uVar5 != 0x40 || puVar9 != param_3) {
    param_2 = 0xffffffffffffffec;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  }
  return param_2;
}

