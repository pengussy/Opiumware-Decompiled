/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35d658:9b136c7853
 */

ulong FUN_0035d658(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  
  if (param_1 == (uint *)0x0) {
    return (ulong)(param_2 < 1);
  }
  puVar6 = param_1;
  if (*param_1 != 0) {
    if ((*param_1 >> 7 & 1) == 0) {
      puVar6 = (uint *)0x0;
    }
    else {
      puVar6 = (uint *)func_0x00380678(param_1);
    }
  }
  if (0 < param_2) {
    return 0;
  }
  if (((char)*param_1 < '\0') && (uVar4 = FUN_0037d194(param_1), (int)uVar4 != 0)) {
    return uVar4;
  }
  if (puVar6 == (uint *)0x0) {
    return 1;
  }
  if (param_3 != 0) {
    if (puVar6[0x2d] == 1) {
      return 1;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
    }
    if (puVar6[0x2d] == 2) {
      return 5;
    }
  }
  uVar2 = *param_1;
  if ((uVar2 >> 7 & 1) == 0) {
    if (uVar2 == 0) {
      puVar5 = param_1;
      if (param_1[0x1a] == 3) {
        uVar7 = *(undefined8 *)(param_1 + 0x14);
        iVar3 = func_0x003e95a0(uVar7,1);
        if (iVar3 != 0) {
          return 2;
        }
        iVar3 = func_0x003e95a0(uVar7,2);
        if (iVar3 != 0) {
          return 3;
        }
        iVar3 = func_0x003e95a0(uVar7,4);
        if (iVar3 != 0) goto LAB_0035d844;
        uVar2 = *param_1;
        if (uVar2 != 0) goto LAB_0035d73c;
      }
LAB_0035d7dc:
      uVar2 = puVar5[0x1a];
LAB_0035d7e0:
      if (uVar2 == 2) {
        uVar7 = *(undefined8 *)(puVar6 + 0x16);
        iVar3 = func_0x003e95a0(uVar7,2);
        if (iVar3 != 0) {
          return 3;
        }
        iVar3 = func_0x003e95a0(uVar7,1);
        if (iVar3 != 0) {
          return 2;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        }
        iVar3 = func_0x003e95a0(uVar7,4);
        if (iVar3 != 0) {
LAB_0035d844:
          iVar3 = func_0x003ea9ec(uVar7);
          uVar2 = 8;
          if (iVar3 != 3) {
            uVar2 = 5;
          }
          uVar1 = 7;
          if (iVar3 != 2) {
            uVar1 = uVar2;
          }
          return (ulong)uVar1;
        }
      }
LAB_0035d878:
      uVar2 = *param_1;
    }
    else {
LAB_0035d73c:
      if ((uVar2 >> 7 & 1) == 0) goto LAB_0035d878;
      puVar5 = (uint *)func_0x00380678(param_1);
      uVar2 = *param_1;
      if ((uVar2 >> 7 & 1) != 0) {
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar2 = func_0x0037d2b4(param_1);
        goto LAB_0035d7e0;
      }
      if (puVar5 != (uint *)0x0) goto LAB_0035d7dc;
    }
    puVar5 = param_1;
    if (uVar2 == 0) {
LAB_0035d89c:
      uVar4 = (ulong)puVar5[0x1a];
      goto LAB_0035d8ac;
    }
    if ((uVar2 >> 7 & 1) != 0) goto LAB_0035d888;
LAB_0035d8c0:
    if ((uVar2 >> 7 & 1) == 0) goto LAB_0035d904;
    puVar5 = (uint *)func_0x00380678(param_1);
    if (-1 < (char)*param_1) {
      if (puVar5 == (uint *)0x0) goto LAB_0035d904;
      goto LAB_0035d8d8;
    }
    uVar2 = func_0x0037d2b4(param_1);
  }
  else {
LAB_0035d888:
    puVar5 = (uint *)func_0x00380678(param_1);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar2 = *param_1;
    if ((uVar2 >> 7 & 1) == 0) {
      if (puVar5 != (uint *)0x0) goto LAB_0035d89c;
    }
    else {
      uVar4 = func_0x0037d2b4(param_1);
LAB_0035d8ac:
      if ((int)uVar4 == 4) {
        return uVar4;
      }
      uVar2 = *param_1;
    }
    puVar5 = param_1;
    if (uVar2 != 0) goto LAB_0035d8c0;
LAB_0035d8d8:
    uVar2 = puVar5[0x1a];
  }
  if (uVar2 == 8) {
    return 0xc;
  }
LAB_0035d904:
  iVar3 = func_0x0035d994(param_1);
  if (iVar3 == 5) {
    return 9;
  }
  iVar3 = func_0x0035d994(param_1);
  if (iVar3 == 6) {
    return 10;
  }
  iVar3 = func_0x0035d994(param_1);
  if (iVar3 == 7) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    return 0xb;
  }
  if ((((byte)puVar6[0x21] >> 1 & 1) == 0) || (puVar6[0x6f] != 0)) {
    return 5;
  }
  return 6;
}

