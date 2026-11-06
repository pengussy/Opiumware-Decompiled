/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x356190:8e50426764
   =========================================================================== */

undefined8 FUN_00356190(long param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  char *pcVar11;
  ulong uVar12;
  long lStack_68;
  
  if (((*(int *)(param_1 + 0xd58) == 0) &&
      ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0)) &&
     (iVar6 = func_0x0035370c(param_1,9,0,0x301,0), iVar6 != 0)) {
    bVar1 = *(int *)(param_1 + 0x9bc) < 0x302;
    iVar6 = func_0x00366a28(param_1);
    if (iVar6 != 0) goto LAB_00356244;
LAB_00356208:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                    ,0x8ba,"ssl_cipher_list_to_bytes");
    puVar10 = (undefined *)0xbf;
/*  stripping the watermark breaks the license  */
  }
  else {
    bVar1 = false;
    iVar6 = func_0x00366a28(param_1);
    if (iVar6 == 0) goto LAB_00356208;
LAB_00356244:
    if (param_2 != 0) {
      uVar2 = 0xfffc;
      if (!bVar1) {
        uVar2 = 0xfffe;
      }
      if ((*(uint *)(param_1 + 0x9b8) & 0x80) != 0) {
        uVar2 = uVar2 - 2;
      }
      iVar6 = func_0x004dcb7c(param_2);
      pcVar11 = "No ciphers enabled for max supported SSL/TLS version";
      if (0 < iVar6) {
        uVar12 = 0;
        bVar5 = false;
        iVar6 = 1;
        do {
          lVar8 = func_0x004dcb90(param_2,iVar6 + -1);
          iVar7 = func_0x00366c58(param_1,lVar8,0x10001,0);
          if (iVar7 == 0) {
            iVar7 = (**(code **)(*(long *)(param_1 + 0x18) + 0xb0))(lVar8,param_3,&lStack_68);
            if (iVar7 == 0) {
              func_0x004464bc();
              uVar9 = 0x8e1;
              goto LAB_00356428;
            }
            if (bVar5) {
              bVar5 = true;
            }
            else {
/* WM - chat: discord.gg/sdkhDjTex */
              bVar5 = (*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0;
              lVar3 = 0x2c;
              if (bVar5) {
                lVar3 = 0x34;
              }
              uVar4 = *(undefined4 *)(lVar8 + lVar3);
              lVar3 = 0x30;
              if (bVar5) {
                lVar3 = 0x38;
              }
              iVar7 = func_0x003b322c(param_1,*(undefined4 *)(lVar8 + lVar3),
                                      *(undefined4 *)(param_1 + 0x41c));
              if (iVar7 < 0) {
                bVar5 = false;
              }
              else {
                iVar7 = func_0x003b322c(param_1,uVar4,*(undefined4 *)(param_1 + 0x41c));
                bVar5 = iVar7 < 1;
              }
            }
            uVar12 = lStack_68 + uVar12;
          }
          iVar7 = func_0x004dcb7c(param_2);
        } while ((iVar6 < iVar7) && (iVar6 = iVar6 + 1, uVar12 < uVar2));
        pcVar11 = (char *)0x0;
// WM - stripping the watermark breaks the license
        if (!bVar5) {
          pcVar11 = "No ciphers enabled for max supported SSL/TLS version";
        }
        if ((uVar12 != 0) && (bVar5)) {
          if ((bVar1) &&
             (iVar6 = (**(code **)(*(long *)(param_1 + 0x18) + 0xb0))
                                (&UNK_01ae6128,param_3,&lStack_68), iVar6 == 0)) {
            func_0x004464bc();
            uVar9 = 0x902;
          }
          else {
            if ((-1 < *(char *)(param_1 + 0x9b8)) ||
               (iVar6 = (**(code **)(*(long *)(param_1 + 0x18) + 0xb0))
                                  (&UNK_01ae6178,param_3,&lStack_68), iVar6 != 0)) {
              return 1;
            }
            func_0x004464bc();
            uVar9 = 0x90b;
          }
          goto LAB_00356428;
        }
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                      ,0x8f7,"ssl_cipher_list_to_bytes");
      puVar10 = (undefined *)0xb5;
      goto LAB_00356440;
    }
    func_0x004464bc();
    uVar9 = 0x8bf;
LAB_00356428:
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_ciph.c"
                    ,uVar9,"ssl_cipher_list_to_bytes");
    puVar10 = &UNK_000c0103;
  }
  pcVar11 = (char *)0x0;
LAB_00356440:
  func_0x003a9570(param_1,0x50,puVar10,pcVar11);
  return 0;
}

