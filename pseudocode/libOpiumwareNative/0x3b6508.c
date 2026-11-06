/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b6508:9444861b9d
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003b6508(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined *puVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  uVar7 = func_0x0039c300(param_1,0x13,0x300,param_3,0,0);
  if ((int)uVar7 == 0) {
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    return uVar7;
  }
  if ((*(int *)(param_1 + 0x8d0) != 0) && (*(int *)(param_1 + 0x48) != 0x304)) {
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    func_0x004464bc();
    uVar7 = 0x903;
LAB_003b67ac:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,uVar7,"ssl_choose_client_version");
// donate: donate/README.md
    uVar7 = 0x46;
    puVar9 = (undefined *)0x10a;
    goto LAB_003b68a0;
  }
  iVar6 = **(int **)(param_1 + 0x18);
  if (iVar6 == 0x1ffff) {
    piVar10 = (int *)&UNK_01dc7ce0;
    iVar6 = _UNK_01dc7ce0;
  }
  else {
    if (iVar6 != 0x10000) {
      if (*(int *)(param_1 + 0x48) == iVar6) {
        iVar6 = func_0x019e6c78(param_1);
        if (iVar6 != 0) {
          return 1;
        }
        func_0x004464bc();
        uVar7 = 0x916;
LAB_003b6820:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,uVar7,"ssl_choose_client_version");
        uVar7 = 0x50;
        puVar9 = &UNK_000c0103;
        goto LAB_003b68a0;
      }
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      func_0x004464bc();
      uVar7 = 0x90b;
      goto LAB_003b67ac;
    }
    piVar10 = (int *)&UNK_01dc7c68;
    iVar6 = _UNK_01dc7c68;
  }
  if (iVar6 != 0) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
    iVar14 = 0;
    iVar12 = 0;
    iVar13 = 0;
    iVar11 = 0;
    bVar3 = true;
    iVar15 = iVar6;
    piVar4 = piVar10;
    do {
      if (*(code **)(piVar4 + 2) == (code *)0x0) {
        iVar11 = 0;
LAB_003b65f8:
        bVar3 = true;
      }
      else {
        piVar8 = (int *)(**(code **)(piVar4 + 2))();
        iVar5 = func_0x003b5d98(param_1,piVar8);
        if ((!bVar3) || (iVar11 != 0)) {
          if (iVar5 != 0) goto LAB_003b65f8;
          if (bVar3) {
            iVar15 = iVar12;
            if (iVar11 != 0) {
              iVar15 = iVar11;
            }
            goto LAB_003b6654;
          }
          iVar14 = *piVar8;
        }
        else {
// WM - no support for modified copies
          iVar11 = iVar15;
          if (iVar5 == 0) {
LAB_003b6654:
            bVar3 = false;
            iVar14 = *piVar8;
            iVar12 = iVar15;
            iVar13 = iVar14;
          }
          else {
            bVar3 = true;
          }
        }
      }
      iVar15 = piVar4[6];
      piVar4 = piVar4 + 6;
    } while (iVar15 != 0);
    if (iVar13 != 0) {
      iVar15 = *(int *)(param_1 + 0x48);
      if (iVar15 != iVar14) {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
          if (iVar14 <= iVar15) goto LAB_003b668c;
        }
        else {
          iVar11 = 0xff00;
          if (iVar15 != 0x100) {
            iVar11 = iVar15;
          }
          iVar5 = 0xff00;
          if (iVar14 != 0x100) {
            iVar5 = iVar14;
          }
          if (iVar11 <= iVar5) goto LAB_003b668c;
        }
        goto LAB_003b6874;
      }
LAB_003b668c:
      uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
// WM - thanks for reading - discord.gg/sdkhDjTex
      if (iVar15 == iVar13) {
LAB_003b669c:
        if ((*(byte *)(param_1 + 0x9b8) & 0x80) != 0) {
          iVar13 = iVar12;
        }
        if (((uVar2 >> 3 & 1) == 0) && (iVar15 < iVar13)) {
          if (s_DOWNGRD_01ae5f28 == *(char (*) [8])(param_1 + 0x180)) {
            *(undefined4 *)(param_1 + 0x48) = uVar1;
            func_0x004464bc();
            uVar7 = 0x93d;
          }
          else {
            if ((iVar13 != 0x304) || (s_DOWNGRD_01ae5f30._0_8_ != *(long *)(param_1 + 0x180)))
            goto LAB_003b66ec;
            *(undefined4 *)(param_1 + 0x48) = uVar1;
            func_0x004464bc();
            uVar7 = 0x949;
          }
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,uVar7,"ssl_choose_client_version");
          uVar7 = 0x2f;
          puVar9 = (undefined *)0x175;
          goto LAB_003b68a0;
        }
LAB_003b66ec:
        do {
          if ((iVar15 == iVar6) && (*(code **)(piVar10 + 2) != (code *)0x0)) {
            uVar7 = (**(code **)(piVar10 + 2))();
            *(undefined8 *)(param_1 + 0x18) = uVar7;
            iVar6 = func_0x019e6c78(param_1,*(undefined4 *)(param_1 + 0x48));
            if (iVar6 != 0) {
              return 1;
            }
            func_0x004464bc();
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            uVar7 = 0x954;
            goto LAB_003b6820;
          }
          iVar6 = piVar10[6];
          piVar10 = piVar10 + 6;
        } while (iVar6 != 0);
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        func_0x004464bc();
        uVar7 = 0x95b;
      }
      else {
        if ((uVar2 >> 3 & 1) == 0) {
          if (iVar15 < iVar13) goto LAB_003b669c;
        }
        else {
          iVar14 = 0xff00;
          if (iVar15 != 0x100) {
/* wm:keep the notice, keep the source honest */
            iVar14 = iVar15;
          }
          iVar11 = 0xff00;
          if (iVar13 != 0x100) {
            iVar11 = iVar13;
          }
          if (iVar11 < iVar14) goto LAB_003b669c;
        }
LAB_003b6874:
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        func_0x004464bc();
        uVar7 = 0x92b;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,uVar7,"ssl_choose_client_version");
      uVar7 = 0x46;
      puVar9 = (undefined *)0x102;
      goto LAB_003b68a0;
    }
  }
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                  ,0x925,"ssl_choose_client_version");
  uVar7 = 0x46;
  puVar9 = (undefined *)0xbf;
LAB_003b68a0:
  func_0x003a9570(param_1,uVar7,puVar9,0);
  return 0;
}

