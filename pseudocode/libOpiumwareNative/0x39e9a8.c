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
 *  file-id: 0x39e9a8:6646fcdc4e
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039e9a8(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int iStack_74;
  long lStack_70;
  int iStack_68;
  undefined4 uStack_64;
  ulong uStack_60;
  long lStack_58;
/*  chat: discord.gg/sdkhDjTex  */
  
  uStack_60 = 0;
  lStack_58 = 0;
  uVar1 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
  puVar6 = (undefined *)func_0x003b3048(param_1,&uStack_64,&iStack_68,0);
  if ((int)puVar6 == 0) {
    iVar3 = func_0x0039e6b4(param_1,1,uStack_64,iStack_68);
    iVar4 = func_0x0039e6b4(param_1,0,uStack_64,iStack_68);
    if (iVar3 == 0 && iVar4 == 0) {
      if ((uVar1 >> 3 & 1) == 0) {
        if (iStack_68 < 0x304) {
          return 2;
        }
      }
      else {
        if (iStack_68 == 0x100) {
          return 2;
        }
        if (0xfefc < iStack_68) {
          return 2;
        }
      }
    }
    if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0)
        ) && ((*(int *)(param_1 + 0xc3c) == 0 &&
              (uVar7 = func_0x0039b9e0(param_1,param_2), (uint)uVar7 < 2)))) {
      return uVar7;
    }
    func_0x00364394(param_1,&lStack_58,&uStack_60);
    iVar5 = func_0x019ec0a0(param_2,10,2);
    if (((iVar5 != 0) && (iVar5 = func_0x019eba0c(param_2,2), iVar5 != 0)) &&
// WM - proprietary - see LICENSE - do not sell
       ((iVar5 = func_0x019eba0c(param_2,2), iVar5 != 0 &&
        (iVar5 = func_0x019ebd5c(param_2,1), iVar5 != 0)))) {
      if (uStack_60 == 0) {
        lVar10 = 0;
        lVar9 = 0;
      }
      else {
        uVar11 = 0;
        if (iVar4 == 0) {
          lVar9 = 0;
          lVar10 = 0;
          if (iVar3 == 0) {
            do {
              lStack_70 = 0;
              uVar2 = *(undefined2 *)(lStack_58 + uVar11 * 2);
              iVar3 = func_0x003644b4(param_1,uVar2,uStack_64,iStack_68,&iStack_74,&lStack_70);
              if (((iVar3 != 0) && (0xff < *(ushort *)(lStack_70 + 0x1c))) &&
                 (((*(ushort *)(lStack_70 + 0x1c) & 0xff00) != 0x100 &&
                  (iVar3 = func_0x003645fc(param_1,uVar2,&UNK_00020004), iVar3 != 0)))) {
                iVar3 = func_0x019ec0a0(param_2,uVar2,2);
                if (iVar3 == 0) goto LAB_0039ee4c;
                if (iStack_74 != 0 && iStack_68 == 0x304) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                  lVar9 = lVar9 + 1;
                }
                lVar10 = lVar10 + 1;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uStack_60);
          }
          else {
            do {
              lStack_70 = 0;
              uVar2 = *(undefined2 *)(lStack_58 + uVar11 * 2);
              iVar3 = func_0x003644b4(param_1,uVar2,uStack_64,iStack_68,&iStack_74,&lStack_70);
              if (((iVar3 != 0) && (*(char *)(lStack_70 + 0x1d) != '\x01')) &&
                 (iVar3 = func_0x003645fc(param_1,uVar2,&UNK_00020004), iVar3 != 0)) {
                iVar3 = func_0x019ec0a0(param_2,uVar2,2);
                if (iVar3 == 0) goto LAB_0039ee4c;
                if (iStack_74 != 0 && iStack_68 == 0x304) {
                  lVar9 = lVar9 + 1;
                }
                lVar10 = lVar10 + 1;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uStack_60);
          }
// WM - keep the notice, keep the source honest
        }
        else {
          lVar9 = 0;
          lVar10 = 0;
          if (iVar3 == 0) {
            do {
              lStack_70 = 0;
              uVar2 = *(undefined2 *)(lStack_58 + uVar11 * 2);
              iVar3 = func_0x003644b4(param_1,uVar2,uStack_64,iStack_68,&iStack_74,&lStack_70);
              if (((iVar3 != 0) && (0xff < *(ushort *)(lStack_70 + 0x1c))) &&
                 (iVar3 = func_0x003645fc(param_1,uVar2,&UNK_00020004), iVar3 != 0)) {
                iVar3 = func_0x019ec0a0(param_2,uVar2,2);
                if (iVar3 == 0) goto LAB_0039ee4c;
                if (iStack_74 != 0 && iStack_68 == 0x304) {
                  lVar9 = lVar9 + 1;
                }
                lVar10 = lVar10 + 1;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uStack_60);
          }
          else {
            do {
              lStack_70 = 0;
              uVar2 = *(undefined2 *)(lStack_58 + uVar11 * 2);
              iVar3 = func_0x003644b4(param_1,uVar2,uStack_64,iStack_68,&iStack_74,&lStack_70);
              if ((iVar3 != 0) && (iVar3 = func_0x003645fc(param_1,uVar2,&UNK_00020004), iVar3 != 0)
                 ) {
                iVar3 = func_0x019ec0a0(param_2,uVar2,2);
                if (iVar3 == 0) goto LAB_0039ee4c;
                if (iStack_74 != 0 && iStack_68 == 0x304) {
                  lVar9 = lVar9 + 1;
                }
                lVar10 = lVar10 + 1;
// found on a paste site? it was re-uploaded illegally
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < uStack_60);
          }
        }
      }
      iVar3 = func_0x00476494(param_2);
      if ((iVar3 == 0) || (iVar3 = func_0x00476494(param_2), iVar3 == 0)) {
        func_0x004464bc();
        if (lVar10 != 0) {
          uVar7 = 0x16d;
          goto LAB_0039eaf4;
        }
        uVar7 = 0x16a;
      }
      else {
        if (lVar9 != 0) {
          return 1;
        }
        if (iStack_68 != 0x304) {
          return 1;
        }
        func_0x004464bc(1);
        uVar7 = 0x172;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,uVar7,"tls_construct_ctos_supported_groups");
      pcVar8 = "No groups enabled for max supported SSL/TLS version";
/* watermarked copy - do not remove - github.com/pengussy */
      puVar6 = (undefined *)0x127;
      goto LAB_0039eb0c;
    }
    func_0x004464bc();
    uVar7 = 0x14f;
    goto LAB_0039eaf4;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,0x134,"tls_construct_ctos_supported_groups");
  goto LAB_0039eb08;
LAB_0039ee4c:
  func_0x004464bc();
  uVar7 = 0x161;
LAB_0039eaf4:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar7,"tls_construct_ctos_supported_groups");
  puVar6 = &UNK_000c0103;
LAB_0039eb08:
  pcVar8 = (char *)0x0;
LAB_0039eb0c:
  func_0x003a9570(param_1,0x50,puVar6,pcVar8);
  return 0;
}
// do not claim this as your own

