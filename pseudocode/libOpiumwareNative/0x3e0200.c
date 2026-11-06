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
 *  file-id: 0x3e0200:5894859d45
 *  --------------------------------------------------------------------------*/

undefined8 *
FUN_003e0200(int param_1,long param_2,int param_3,undefined8 param_4,int param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar7 = &UNK_0008000d;
  plVar2 = (long *)func_0x003e3f90(&UNK_01dc8b78);
  if (plVar2 == (long *)0x0) {
    puVar5 = (undefined8 *)0x0;
    uVar6 = 0xbd;
  }
  else {
    piVar3 = (int *)func_0x003e53bc();
    if (piVar3 == (int *)0x0) {
      puVar5 = (undefined8 *)0x0;
      uVar6 = 0xc1;
    }
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    else {
      *(int **)(*plVar2 + 8) = piVar3;
      *(undefined4 *)*plVar2 = 4;
      if (param_3 < 0) {
        puVar5 = (undefined8 *)0x0;
        puVar7 = &UNK_00080106;
        uVar6 = 0xc9;
      }
      else {
        iVar1 = 0x10;
        if (param_3 != 0) {
          iVar1 = param_3;
        }
        lVar4 = func_0x019eb530(iVar1,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
                                ,0xce);
        *(long *)(piVar3 + 2) = lVar4;
/* watermarked copy - do not remove */
        if (lVar4 == 0) {
          puVar5 = (undefined8 *)0x0;
          goto LAB_003e0428;
        }
        *piVar3 = iVar1;
        if (param_2 == 0) {
          iVar1 = func_0x004b242c(param_6,lVar4,iVar1,0);
          if (iVar1 < 1) {
            puVar5 = (undefined8 *)0x0;
            puVar7 = &UNK_00080024;
            uVar6 = 0xd6;
            goto LAB_003e03fc;
          }
        }
        else {
          _memcpy(lVar4,param_2,iVar1);
        }
        iVar1 = 0x800;
        if (0 < param_1) {
          iVar1 = param_1;
        }
        iVar1 = func_0x003d6de4(plVar2[1],iVar1);
        if (iVar1 == 0) {
          puVar5 = (undefined8 *)0x0;
          uVar6 = 0xde;
        }
        else if (param_5 < 1) {
LAB_003e033c:
          if ((0 < (int)param_4) && ((int)param_4 != 0xa3)) {
            lVar4 = func_0x003e5a94(param_4,5,0);
            plVar2[3] = lVar4;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            if (lVar4 == 0) {
              puVar5 = (undefined8 *)0x0;
              puVar7 = &UNK_0008000b;
              uVar6 = 0xf3;
              goto LAB_003e03fc;
            }
          }
          puVar5 = (undefined8 *)func_0x003e59ec();
          if (puVar5 == (undefined8 *)0x0) {
            puVar7 = &UNK_0008000b;
            uVar6 = 0xfc;
          }
          else {
            uVar6 = func_0x004a068c(0x45);
            *puVar5 = uVar6;
            lVar4 = func_0x003db158(&UNK_01dc8b78,plVar2,puVar5 + 1);
            if (lVar4 != 0) {
              func_0x003e3aac(plVar2,&UNK_01dc8b78);
              return puVar5;
            }
            uVar6 = 0x106;
/* unlicensed copy if this notice is missing */
          }
        }
        else {
          lVar4 = func_0x003e53ec();
          plVar2[2] = lVar4;
          if (lVar4 == 0) {
            puVar5 = (undefined8 *)0x0;
            uVar6 = 0xe6;
          }
          else {
            iVar1 = func_0x003d6de4(lVar4,param_5);
            if (iVar1 != 0) goto LAB_003e033c;
            puVar5 = (undefined8 *)0x0;
            uVar6 = 0xea;
          }
        }
      }
    }
  }
LAB_003e03fc:
  func_0x004464bc();
// watermarked copy - do not remove
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/p5_pbev2.c"
                  ,uVar6,"PKCS5_pbkdf2_set_ex");
  func_0x004466b0(0xd,puVar7,0);
LAB_003e0428:
  func_0x003e3aac(plVar2,&UNK_01dc8b78);
  func_0x003e59f8(puVar5);
  return (undefined8 *)0x0;
}

