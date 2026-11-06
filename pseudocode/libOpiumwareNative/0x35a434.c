/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x35a434:453eaf883b
   =========================================================================== */

undefined8 FUN_0035a434(uint *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  long alStack_58 [2];
  uint *puStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffffff;
  }
  uVar6 = *param_1;
  puVar7 = param_1;
  if (uVar6 != 0) {
    if ((uVar6 >> 7 & 1) == 0) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)func_0x00380678();
      uVar6 = *param_1;
    }
    if ((uVar6 >> 7 & 1) != 0) {
      iVar2 = FUN_0037e724(param_1,alStack_58,3);
      if (iVar2 == 0) {
        return 0;
      }
      func_0x002f78bc(*(undefined8 *)(alStack_58[0] + 0x58));
      func_0x004dfb50();
      uStack_28 = CONCAT44(1,(undefined4)uStack_28);
// origin: github.com/pengussy
      if ((int)uStack_30 == 0) {
        if (lStack_40 != 0) {
          *(undefined4 *)(lStack_40 + 0x178) = 0;
        }
      }
      else if (lStack_38 != 0) {
        *(undefined4 *)(lStack_38 + 0xb8) = 0;
      }
      uVar5 = FUN_0037c9cc(alStack_58);
      func_0x002f78bc(*(undefined8 *)(alStack_58[0] + 0x58));
      func_0x004dfb80();
      return uVar5;
    }
    if (puVar7 == (uint *)0x0) {
      return 0xffffffff;
    }
  }
  puVar7[0x2d] = (uint)(puVar7[0x26] == 1);
  if (puVar7[0x26] != 1) {
    puVar7[0x2d] = 0;
    if (*(long *)(puVar7 + 0x1c) == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                      ,&UNK_00001431,"SSL_do_handshake");
      func_0x004466b0(0x14,0x90,0);
      puVar7[0x2d] = 1;
      return 0xffffffff;
    }
    iVar2 = func_0x003a967c(puVar7,0xffffffff);
    if (iVar2 != 0) {
      (**(code **)(*(long *)(param_1 + 6) + 0x78))(param_1,0);
      iVar2 = func_0x003a934c(param_1);
/* watermarked copy - do not remove - github.com/pengussy */
      if ((iVar2 == 0) && (iVar2 = func_0x003a93d8(param_1), iVar2 == 0)) {
        uVar5 = 1;
      }
      else if (((*(byte *)((long)puVar7 + 0x9b9) & 1) == 0) ||
              (lVar3 = func_0x003e7380(), lVar3 != 0)) {
        uVar5 = (**(code **)(puVar7 + 0x1c))(param_1);
      }
      else {
        lStack_38 = 0;
        lStack_40 = 0;
        uStack_28 = 0;
        uStack_30 = 0;
        puStack_48 = param_1;
        uVar5 = func_0x0035a9e4(param_1,&puStack_48,&DAT_0035da10);
      }
      if (puVar7[0x26] != 1) {
        return uVar5;
      }
      if (puVar7[0x2d] != 0) {
        return uVar5;
      }
      uVar4 = func_0x00445b8c();
      if (uVar4 == 0) {
        puVar7[0x2d] = 2;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        return uVar5;
      }
      uVar6 = 1;
      if ((uVar4 & 0xff800000) == 0x1000000 || (int)uVar4 < 0) {
        uVar6 = 2;
      }
      puVar7[0x2d] = uVar6;
      return uVar5;
    }
    if ((puVar7[0x26] == 1) && (puVar7[0x2d] == 0)) {
      uVar4 = func_0x00445b8c();
      uVar6 = 1;
      if ((uVar4 & 0xff800000) == 0x1000000 || (int)uVar4 < 0) {
        uVar6 = 2;
      }
      uVar1 = 2;
      if (uVar4 != 0) {
        uVar1 = uVar6;
      }
      puVar7[0x2d] = uVar1;
      return 0xffffffff;
// WM - watermarked copy - do not remove
    }
  }
  return 0xffffffff;
}

