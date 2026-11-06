/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2f7ac0:cb4a81e3e0
   =========================================================================== */

ulong FUN_002f7ac0(ulong *param_1,uint *param_2,ulong param_3,int param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uStack_34;
  
  uVar4 = 5;
  if (param_4 != 0) {
    uVar4 = 1;
  }
  if ((param_2 == (uint *)0x0) && (param_3 != 0)) {
    uVar4 = 0xffffffffffffffff;
  }
  else {
    if (uVar4 <= param_3) {
      param_1[3] = 0;
      param_1[2] = 0;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = 0;
      *param_1 = 0;
      if (param_4 == 1) {
        uVar7 = 1;
        puVar5 = param_2;
      }
      else {
        if (*param_2 != 0xfd2fb528) {
          if (*param_2 >> 4 != 0x184d2a5) {
            return 0xfffffffffffffff6;
          }
          if (param_3 < 8) {
            return 8;
/*  stripping the watermark breaks the license  */
          }
          *(undefined4 *)((long)param_1 + 0x14) = 1;
          uVar6 = *param_2;
          *(undefined4 *)(param_1 + 3) = 8;
          *(uint *)((long)param_1 + 0x1c) = uVar6 + 0xe7b2d5b0;
          *param_1 = (ulong)param_2[1];
          return 0;
        }
        puVar5 = (uint *)((long)param_2 + (uVar4 - 1));
        uVar7 = uVar4;
      }
      bVar3 = (byte)*puVar5;
      lVar1 = *(long *)(&UNK_01ade690 + ((ulong)bVar3 & 3) * 8) + uVar7 +
              *(long *)(&UNK_01ade6b0 + (ulong)(bVar3 >> 6) * 8);
      if ((bVar3 & 0x20) == 0) {
        lVar1 = lVar1 + 1;
      }
      uVar7 = lVar1 + (ulong)((uint)(bVar3 < 0x40) & (bVar3 & 0x20) >> 5);
      if (param_3 < uVar7) {
        return uVar7;
      }
      *(int *)(param_1 + 3) = (int)uVar7;
      bVar3 = ((byte *)((long)param_2 + uVar4))[-1];
      if ((bVar3 >> 3 & 1) != 0) {
        return 0xfffffffffffffff2;
      }
/*  reversing this took months of machine time  */
      if ((bVar3 >> 5 & 1) == 0) {
        bVar2 = *(byte *)((long)param_2 + uVar4);
        if (0xaf < (ulong)bVar2) {
          return 0xfffffffffffffff0;
        }
        uVar4 = uVar4 + 1;
        uVar7 = 1L << (ulong)(bVar2 >> 3) + 10;
        uVar7 = uVar7 + (uVar7 >> 3) * ((ulong)bVar2 & 7);
      }
      else {
        uVar7 = 0;
      }
      uVar6 = bVar3 & 3;
      bVar2 = bVar3 >> 6;
      if (uVar6 == 1 || (bVar3 & 3) == 0) {
        if ((bVar3 & 3) != 0) {
          uVar6 = (uint)*(byte *)((long)param_2 + uVar4);
          uVar4 = uVar4 + 1;
        }
      }
      else if (uVar6 == 2) {
        uVar6 = (uint)*(ushort *)((long)param_2 + uVar4);
        uVar4 = uVar4 + 2;
      }
      else {
        uVar6 = *(uint *)((long)param_2 + uVar4);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        uVar4 = uVar4 + 4;
      }
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          if ((bVar3 >> 5 & 1) == 0) {
            uVar4 = 0xffffffffffffffff;
          }
          else {
            uVar4 = (ulong)*(byte *)((long)param_2 + uVar4);
          }
        }
        else {
          uVar4 = (ulong)*(ushort *)((long)param_2 + uVar4) + 0x100;
        }
      }
      else if (bVar2 == 2) {
        uVar4 = (ulong)*(uint *)((long)param_2 + uVar4);
      }
      else {
        uVar4 = *(ulong *)((long)param_2 + uVar4);
      }
      if ((bVar3 & 0x20) != 0) {
        uVar7 = uVar4;
      }
      *param_1 = uVar4;
      param_1[1] = uVar7;
      if (0x1ffff < uVar7) {
        uVar7 = 0x20000;
      }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
      *(int *)(param_1 + 2) = (int)uVar7;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      *(uint *)((long)param_1 + 0x1c) = uVar6;
      *(uint *)(param_1 + 4) = bVar3 >> 2 & 1;
      return 0;
    }
    if ((param_3 != 0) && (param_4 != 1)) {
      uStack_34 = 0xfd2fb528;
      _memcpy(&uStack_34);
      if (uStack_34 != 0xfd2fb528) {
        uStack_34 = 0x184d2a50;
        _memcpy(&uStack_34,param_2,param_3);
        if (uStack_34 >> 4 != 0x184d2a5) {
          return 0xfffffffffffffff6;
        }
      }
      return uVar4;
    }
  }
  return uVar4;
}

