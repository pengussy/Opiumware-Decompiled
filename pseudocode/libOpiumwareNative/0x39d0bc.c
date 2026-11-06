/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x39d0bc:bb3d71846d
 */

undefined8 FUN_0039d0bc(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uStack_44;
  
  uStack_44 = 0x70;
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  lVar11 = *(long *)(param_1 + 8);
/* WM - proprietary - see LICENSE - do not sell */
  uVar2 = func_0x0035e284();
  if ((lVar11 == 0) || (lVar8 = *(long *)(param_1 + 0xd40), lVar8 == 0)) {
    func_0x019e7254(param_1);
    return 0;
  }
  pcVar7 = *(code **)(lVar11 + 0x228);
  lVar9 = lVar11;
  if ((pcVar7 == (code *)0x0) &&
     (pcVar7 = *(code **)(lVar8 + 0x228), lVar9 = lVar8, pcVar7 == (code *)0x0)) {
    iVar3 = 3;
    iVar4 = *(int *)(param_1 + 0x78);
  }
  else {
    iVar3 = (*pcVar7)(uVar10,&uStack_44,*(undefined8 *)(lVar9 + 0x230));
    iVar4 = *(int *)(param_1 + 0x78);
  }
  if ((((iVar4 != 0) && (param_3 != 0)) && (iVar3 == 0)) && (*(int *)(param_1 + 0x508) == 0)) {
    func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x900) + 800),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,0x502);
/* watermarked copy - do not remove */
    lVar8 = func_0x004759a8(*(undefined8 *)(param_1 + 0xa20),
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                            ,0x503);
    *(long *)(*(long *)(param_1 + 0x900) + 800) = lVar8;
    if ((lVar8 == 0) && (*(long *)(param_1 + 0xa20) != 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,0x505,"final_server_name");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    }
  }
  if (((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) &&
     ((lVar11 != *(long *)(param_1 + 0xd40) && (*(int *)(param_1 + 0x8d0) == 0)))) {
    *(int *)(lVar11 + 0x84) = *(int *)(lVar11 + 0x84) + 1;
    piVar1 = (int *)(*(long *)(param_1 + 0xd40) + 0x84);
    *piVar1 = *piVar1 + -1;
  }
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        return 1;
      }
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
          (iVar4 = **(int **)(param_1 + 0x18), iVar4 < 0x304)) || (iVar4 == 0x10000)) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        func_0x00350e94(param_1,1,uStack_44);
      }
      *(undefined4 *)(param_1 + 0xd18) = 0;
      return 1;
    }
    if (*(int *)(param_1 + 0xa68) == 0) {
      return 1;
    }
    if ((uVar2 >> 0xe & 1) != 0) {
      return 1;
    }
    uVar2 = func_0x0035e284(param_1);
    if (((uVar2 >> 0xe & 1) == 0) ||
       (*(undefined4 *)(param_1 + 0xa68) = 0, *(int *)(param_1 + 0x508) != 0)) {
      return 1;
    }
    lVar11 = func_0x00361118(param_1);
    if (lVar11 == 0) {
      func_0x004464bc();
      uVar10 = 0x52c;
    }
    else {
      func_0x004743e4(*(undefined8 *)(lVar11 + 0x328),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                      ,0x522);
      *(undefined4 *)(lVar11 + 0x340) = 0;
      *(undefined8 *)(lVar11 + 0x338) = 0;
      *(undefined8 *)(lVar11 + 0x330) = 0;
      *(undefined8 *)(lVar11 + 0x328) = 0;
      iVar4 = func_0x003614bc(param_1,lVar11);
// WM - chat: discord.gg/sdkhDjTex
      if (iVar4 != 0) {
        return 1;
      }
      func_0x004464bc();
      uVar10 = 0x528;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,uVar10,"final_server_name");
    puVar6 = &UNK_000c0103;
    uVar5 = 0x50;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0xd18) = 0;
        return 1;
      }
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                    ,0x534,"final_server_name");
    puVar6 = (undefined *)0xea;
    uVar5 = uStack_44;
  }
  func_0x003a9570(param_1,uVar5,puVar6,0);
  return 0;
/*  unlicensed copy if this notice is missing  */
}

