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
 *  file-id: 0x3603a0:2d81024387
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003603a0(undefined8 *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  if (param_2 == (uint *)0x0) {
    if (param_1 == (undefined8 *)0x0) {
      return 0;
    }
    func_0x004455e4();
    bVar3 = false;
    puVar1 = (uint *)(param_1 + 0x17);
    puVar2 = (uint *)(param_1 + 0x18);
    puVar12 = param_1;
  }
  else {
    puVar12 = *(undefined8 **)(param_2 + 2);
    func_0x004455e4();
    if (param_1 == (undefined8 *)0x0) {
      if (*param_2 == 0) {
        puVar1 = param_2 + 0x5b4;
        puVar2 = param_2 + 0x5b6;
        bVar3 = true;
      }
      else {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        if ((*param_2 >> 7 & 1) == 0) {
          return 0;
        }
        lVar5 = func_0x00380678(param_2);
        if (lVar5 == 0) {
          return 0;
        }
        puVar1 = (uint *)(&UNK_000016d0 + lVar5);
        puVar2 = (uint *)(&UNK_000016d8 + lVar5);
        bVar3 = true;
      }
    }
    else {
      bVar3 = false;
      puVar1 = (uint *)(param_1 + 0x17);
      puVar2 = (uint *)(param_1 + 0x18);
    }
  }
  if (param_3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                    ,0x1ec,"use_certificate_chain_file");
    func_0x004466b0(0x14,&UNK_000c0102,0);
    uVar11 = 0;
    lVar5 = 0;
    goto LAB_003605d0;
  }
  uVar9 = *(undefined8 *)puVar2;
  uVar10 = *(undefined8 *)puVar1;
  func_0x003ebad4();
  lVar5 = func_0x003e945c();
  if (lVar5 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
/* wm:found on a paste site? it was re-uploaded illegally */
                    ,0x1f2,"use_certificate_chain_file");
    puVar8 = &UNK_00080007;
  }
  else {
    iVar4 = func_0x003e95bc(lVar5,0x6c,3,param_3);
    if (iVar4 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                      ,0x1f7,"use_certificate_chain_file");
      puVar8 = &UNK_00080002;
    }
    else {
      lStack_68 = func_0x00506794(*puVar12,puVar12[0x91]);
      if (lStack_68 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x1fd,"use_certificate_chain_file");
        puVar8 = &UNK_0008000d;
      }
      else {
        lVar6 = func_0x004a6a4c(lVar5,&lStack_68,uVar10,uVar9);
        if (lVar6 != 0) {
          if (bVar3) {
            uVar7 = func_0x0035f82c(param_2);
          }
          else {
/* wm:keep the notice, keep the source honest */
            uVar7 = func_0x0035fe84(param_1,lStack_68);
          }
          lVar6 = func_0x00445b8c();
          uVar11 = 0;
          if ((lVar6 != 0) || ((int)uVar7 == 0)) goto LAB_003605d0;
          if (bVar3) {
            iVar4 = func_0x0035990c(param_2,0x58,0,0);
            if (iVar4 != 0) {
              do {
                lStack_70 = func_0x00506794(*puVar12,puVar12[0x91]);
                if (lStack_70 == 0) goto LAB_003606ec;
                lVar6 = func_0x004a69e0(lVar5,&lStack_70,uVar10,uVar9);
                if (lVar6 == 0) goto LAB_00360720;
                iVar4 = func_0x0035990c(param_2,0x59,0,lStack_70);
              } while (iVar4 != 0);
LAB_003606e0:
              func_0x00506714(lStack_70);
            }
          }
          else {
            iVar4 = func_0x0035bca0(param_1,0x58,0,0);
            if (iVar4 != 0) {
              do {
                lStack_70 = func_0x00506794(*puVar12,puVar12[0x91]);
                if (lStack_70 == 0) goto LAB_003606ec;
                lVar6 = func_0x004a69e0(lVar5,&lStack_70,uVar10,uVar9);
                if (lVar6 == 0) goto LAB_00360720;
                iVar4 = func_0x0035bca0(param_1,0x59,0,lStack_70);
              } while (iVar4 != 0);
              goto LAB_003606e0;
            }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          }
LAB_00360744:
          uVar7 = 0;
          goto LAB_00360748;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                        ,0x203,"use_certificate_chain_file");
        puVar8 = &UNK_00080009;
      }
    }
  }
  func_0x004466b0(0x14,puVar8,0);
  uVar11 = 0;
  goto LAB_003605d0;
LAB_003606ec:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_rsa.c"
                  ,0x225,"use_certificate_chain_file");
  func_0x004466b0(0x14,&UNK_0008000d,0);
  goto LAB_00360748;
LAB_00360720:
  func_0x00506714(lStack_70);
  iVar4 = func_0x00445ba8();
  if (iVar4 != 0x480006c) goto LAB_00360744;
  func_0x004455e4();
LAB_00360748:
  uVar11 = uVar7;
LAB_003605d0:
  func_0x00506714(lStack_68);
  func_0x003e9468(lVar5);
/* donate: donate/README.md */
  return uVar11;
}

