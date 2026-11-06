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
 *  file-id: 0x3e97c8:ce7114cb84
 *  --------------------------------------------------------------------------*/

ulong FUN_003e97c8(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = &UNK_000c0102;
  if (param_1 == 0) {
    uVar3 = 0xffffffff;
    uVar5 = 0x114;
    goto LAB_003e984c;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x20) == 0)) {
    uVar3 = 0xfffffffe;
    puVar4 = (undefined *)0x79;
    uVar5 = 0x118;
    goto LAB_003e984c;
  }
  pcVar1 = *(code **)(param_1 + 0x18);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 != (code *)0x0) goto LAB_003e9894;
  }
  else {
    if (pcVar1 == (code *)0x0) {
      if (param_3 >> 0x1f != 0) {
        return 0xffffffff;
      }
      uVar3 = (**(code **)(param_1 + 0x10))(param_1,2,param_2,param_3,0,1);
      iVar2 = (int)uVar3;
    }
    else {
LAB_003e9894:
      uVar3 = (*pcVar1)(param_1,2,param_2,param_3,0,0,1,0);
      iVar2 = (int)uVar3;
    }
    if (iVar2 < 1) {
      return uVar3;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = 0xffffffff;
    puVar4 = (undefined *)0x78;
    uVar5 = 0x120;
    goto LAB_003e984c;
  }
  uVar3 = (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1,param_2,param_3,param_4);
  if ((int)uVar3 < 1) {
    if ((param_3 != 0) && ((int)uVar3 == 0)) {
      if (*(char *)(param_1 + 0x30) < '\0') {
// WM - donate: donate/README.md
        uVar3 = 0;
      }
      else {
        iVar2 = func_0x003e95bc(param_1,2,0,0);
        uVar3 = (ulong)-(uint)(iVar2 == 0);
      }
    }
  }
  else {
    *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + *param_4;
  }
  pcVar1 = *(code **)(param_1 + 0x18);
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    if (pcVar1 != (code *)0x0) goto LAB_003e998c;
  }
  else if (pcVar1 == (code *)0x0) {
    if (param_3 >> 0x1f == 0) {
      if ((int)uVar3 < 1) {
        uVar3 = (ulong)(int)uVar3;
      }
      else {
        uVar3 = *param_4;
        if (uVar3 >> 0x1f != 0) goto LAB_003e9934;
      }
      uVar3 = (**(code **)(param_1 + 0x10))(param_1,0x82,param_2,param_3,0,uVar3);
      if (0 < (long)uVar3) {
/* more drops soon - github.com/pengussy - github.com/pengussy */
        *param_4 = uVar3;
        uVar3 = 1;
      }
    }
    else {
LAB_003e9934:
      uVar3 = 0xffffffffffffffff;
    }
  }
  else {
LAB_003e998c:
    uVar3 = (*pcVar1)(param_1,0x82,param_2,param_3,0,0,uVar3,param_4);
  }
  if (((int)uVar3 < 1) || (*param_4 <= param_3)) {
    return uVar3;
  }
  puVar4 = &UNK_000c0103;
  uVar3 = 0xffffffff;
  uVar5 = 0x136;
LAB_003e984c:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_lib.c"
                  ,uVar5,"bio_read_intern");
  func_0x004466b0(0x20,puVar4,0);
  return uVar3;
}

