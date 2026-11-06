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
 *  file-id: 0x39d978:69b2959292
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039d978(long param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
       ((param_2 >> 0xb & 1) != 0)) || (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) ||
     (iVar1 == 0x10000)) {
    return 1;
  }
  if (*(int *)(param_1 + 0x78) == 0 && param_3 == 0) {
    if ((*(byte *)(param_1 + 0xb18) & 1) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,0x673,"final_key_share");
      uVar3 = 0x2f;
      puVar2 = (undefined *)0x65;
      goto LAB_0039db4c;
    }
    if (*(int *)(param_1 + 0x508) == 0) {
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,0x677,"final_key_share");
      uVar3 = 0x6d;
      puVar2 = (undefined *)0x65;
      goto LAB_0039db4c;
    }
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    if (param_3 != 0) {
      return 1;
    }
    iVar1 = func_0x0036c8b4(param_1,0,0);
    if (iVar1 != 0) {
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,0x6e1,"final_key_share");
    uVar3 = 0x50;
    puVar2 = &UNK_000c0103;
    goto LAB_0039db4c;
  }
  if (*(long *)(param_1 + 0x4e0) != 0) {
    if (((*(byte *)(param_1 + 0x161) >> 3 & 1) != 0) && (*(int *)(param_1 + 0xb38) == 0)) {
      if (*(int *)(param_1 + 0x8d0) != 0) {
        func_0x019e7284();
        return 0;
/* WM - more drops soon - github.com/pengussy */
      }
      goto LAB_0039daec;
    }
    goto LAB_0039db78;
  }
  if ((param_3 == 0) || (*(int *)(param_1 + 0x8d0) != 0)) {
LAB_0039db04:
    if (*(int *)(param_1 + 0x508) != 0) goto LAB_0039db08;
  }
  else {
    if ((*(int *)(param_1 + 0x508) == 0) || ((*(byte *)(param_1 + 0xb18) >> 1 & 1) != 0)) {
      if (*(short *)(param_1 + 0x4e8) != 0) {
        *(short *)(param_1 + 0x4de) = *(short *)(param_1 + 0x4e8);
        goto LAB_0039daec;
      }
      goto LAB_0039db04;
    }
LAB_0039db08:
    if ((*(byte *)(param_1 + 0xb18) & 1) != 0) {
      if (((*(byte *)(param_1 + 0x161) >> 3 & 1) != 0) && (*(int *)(param_1 + 0xb38) == 0)) {
        if (*(int *)(param_1 + 0x8d0) != 0) {
          func_0x019e72b4();
          return 0;
        }
LAB_0039daec:
        *(undefined4 *)(param_1 + 0x8d0) = 1;
        return 1;
      }
LAB_0039db78:
      if (*(int *)(param_1 + 0x8d0) == 1) {
        *(undefined4 *)(param_1 + 0x8d0) = 2;
      }
      return 1;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                  ,0x6c0,"final_key_share");
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar3 = 0x28;
  if (param_3 == 0) {
    uVar3 = 0x6d;
  }
  puVar2 = (undefined *)0x65;
LAB_0039db4c:
  func_0x003a9570(param_1,uVar3,puVar2,0);
  return 0;
}

