/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x357ecc:dabaaf8a5c
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00357ecc(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(param_1 + 0x18) + 8);
  }
  iVar1 = *(int *)*puVar5;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
  iVar4 = _strcmp("None",param_2);
  iVar2 = _UNK_01dc5888;
  if ((((((iVar4 != 0) && (iVar4 = _strcmp("SSLv3",param_2), iVar2 = _UNK_01dc5898, iVar4 != 0)) &&
        (iVar4 = _strcmp("TLSv1",param_2), iVar2 = _UNK_01dc58a8, iVar4 != 0)) &&
       ((iVar4 = _strcmp("TLSv1.1",param_2), iVar2 = _UNK_01dc58b8, iVar4 != 0 &&
        (iVar4 = _strcmp("TLSv1.2",param_2), iVar2 = _UNK_01dc58c8, iVar4 != 0)))) &&
      ((iVar4 = _strcmp("TLSv1.3",param_2), iVar2 = _UNK_01dc58d8, iVar4 != 0 &&
       ((iVar4 = _strcmp("DTLSv1",param_2), iVar2 = _UNK_01dc58e8, iVar4 != 0 &&
        (iVar4 = _strcmp("DTLSv1.2",param_2), iVar2 = _UNK_01dc58f8, iVar4 != 0)))))) || (iVar2 < 0)
     ) {
    return 0;
  }
  if (iVar2 != 0) {
    if (iVar2 == 0x100) {
      bVar3 = true;
    }
    else {
      bVar3 = iVar2 - 0xfefdU < 3;
      if ((3 < iVar2 - 0x301U) && (2 < iVar2 - 0xfefdU)) {
        return 0;
      }
    }
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    if (iVar1 == 0x1ffff) {
      if (!bVar3) {
        return 1;
      }
    }
    else {
      if (iVar1 != 0x10000) {
        return 1;
      }
      if (3 < iVar2 - 0x301U) {
        return 1;
      }
    }
  }
  *param_3 = iVar2;
  return 1;
}

