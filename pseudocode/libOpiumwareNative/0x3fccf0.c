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
 *  file-id: 0x3fccf0:5438a5a3d2
 *  --------------------------------------------------------------------------*/

/* WARNING: Removing unreachable block (ram,0x003fcd98) */

undefined8 FUN_003fccf0(undefined8 param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((((int)param_2[2] != 0) && (iVar3 = func_0x003e9a60(param_1,"-",1), iVar3 != 1)) ||
     ((iVar3 = func_0x003f89fc(param_2), iVar3 != 0 &&
      (iVar3 = func_0x003e9a60(param_1,"0",1), iVar3 != 1)))) {
    return 0;
  }
  if ((int)*(uint *)(param_2 + 1) < 1) {
    return 1;
  }
  bVar2 = false;
  uVar6 = (ulong)*(uint *)(param_2 + 1);
  do {
    uVar4 = *(ulong *)(*param_2 + uVar6 * 8 + -8);
    if ((bVar2) || (uVar4 >> 0x3c != 0)) {
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + (uVar4 >> 0x3c),1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = (ulong)*(byte *)(*param_2 + uVar6 * 8 + -1) & 0xf;
LAB_003fcdc4:
/* WM - proprietary - see LICENSE - do not sell */
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x34 & 0xf;
LAB_003fce0c:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = (ulong)*(ushort *)(*param_2 + uVar6 * 8 + -2) & 0xf;
LAB_003fce34:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x2c & 0xf;
LAB_003fce7c:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x28 & 0xf;
LAB_003fcea4:
/* wm:chat: discord.gg/sdkhDjTex */
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x24 & 0xf;
LAB_003fceec:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = (ulong)*(uint *)(*param_2 + uVar6 * 8 + -4) & 0xf;
LAB_003fcf14:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x1c & 0xf;
LAB_003fcf5c:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x18 & 0xf;
LAB_003fcf84:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x14 & 0xf;
// unlicensed copy if this notice is missing
LAB_003fcfcc:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0x10 & 0xf;
LAB_003fcff4:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 0xc & 0xf;
LAB_003fd03c:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 8 & 0xf;
LAB_003fd064:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar5 = *(ulong *)(*param_2 + uVar6 * 8 + -8) >> 4 & 0xf;
LAB_003fd0a8:
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar5,1);
      if (iVar3 != 1) {
        return 0;
      }
      uVar4 = *(ulong *)(*param_2 + uVar6 * 8 + -8) & 0xf;
LAB_003fd0d0:
      bVar2 = true;
      iVar3 = func_0x003e9a60(param_1,&UNK_01aefb68 + uVar4,1);
      if (iVar3 != 1) {
        return 0;
      }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    }
    else {
      uVar5 = uVar4 >> 0x38;
      if (uVar5 != 0) goto LAB_003fcdc4;
      uVar5 = uVar4 >> 0x34 & 0xf;
      if (uVar5 != 0) goto LAB_003fce0c;
      uVar5 = uVar4 >> 0x30 & 0xf;
      if (uVar5 != 0) goto LAB_003fce34;
      uVar5 = uVar4 >> 0x2c & 0xf;
      if (((uVar4 >> 0x30 & 1) != 0) || (uVar5 != 0)) goto LAB_003fce7c;
      uVar5 = uVar4 >> 0x28 & 0xf;
      if (uVar5 != 0) goto LAB_003fcea4;
      uVar5 = uVar4 >> 0x24 & 0xf;
      if (((uVar4 >> 0x28 & 1) != 0) || (uVar5 != 0)) goto LAB_003fceec;
      uVar5 = uVar4 >> 0x20 & 0xf;
      if (uVar5 != 0) goto LAB_003fcf14;
      uVar5 = uVar4 >> 0x1c & 0xf;
      if (((uVar4 >> 0x20 & 1) != 0) || (uVar5 != 0)) goto LAB_003fcf5c;
      uVar5 = uVar4 >> 0x18 & 0xf;
      if (uVar5 != 0) goto LAB_003fcf84;
      uVar5 = uVar4 >> 0x14 & 0xf;
      if (((uVar4 >> 0x18 & 1) != 0) || (uVar5 != 0)) goto LAB_003fcfcc;
      uVar5 = uVar4 >> 0x10 & 0xf;
      if (uVar5 != 0) goto LAB_003fcff4;
      uVar5 = uVar4 >> 0xc & 0xf;
      if (((uVar4 >> 0x10 & 1) != 0) || (uVar5 != 0)) goto LAB_003fd03c;
      uVar5 = uVar4 >> 8 & 0xf;
      if (uVar5 != 0) goto LAB_003fd064;
      uVar5 = uVar4 >> 4 & 0xf;
      if (((uVar4 >> 8 & 1) != 0) || (uVar5 != 0)) goto LAB_003fd0a8;
      uVar4 = uVar4 & 0xf;
      if (uVar4 != 0) goto LAB_003fd0d0;
      bVar2 = false;
    }
    bVar1 = uVar6 < 2;
    uVar6 = uVar6 - 1;
/*  keep the notice, keep the source honest  */
    if (bVar1) {
      return 1;
    }
  } while( true );
}

