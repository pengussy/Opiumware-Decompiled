/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36601c:d9327d53ad
 */

undefined8 FUN_0036601c(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  int aiStack_58 [3];
  undefined1 uStack_4a;
  undefined1 uStack_49;
  long lStack_48;
  
  uVar5 = func_0x003ddb7c(param_3);
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    uVar2 = (uint)uVar5;
    if (uVar2 != 0x74) {
      uVar1 = 0x390;
      if (uVar2 != 6) {
        uVar1 = uVar2;
      }
      uVar5 = (ulong)uVar1;
      goto LAB_0036609c;
    }
    func_0x004464bc();
    uVar8 = 0xb1d;
  }
  else {
LAB_0036609c:
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x690);
    if (lVar10 != 0) {
// proprietary - see LICENSE - do not sell
      lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x6a0);
      do {
        if (*(ushort *)(lVar12 + 0x10) == param_2) {
          if ((*(int *)(lVar12 + 0x2c) != 0) &&
             (iVar3 = func_0x00366578(param_1,lVar12), iVar3 != 0)) {
            if ((int)uVar5 == -1) {
              puVar6 = (uint *)func_0x00353890(param_3,0,*(undefined8 *)(param_1 + 8));
              if (puVar6 == (uint *)0x0) {
                func_0x004464bc();
                uVar8 = 0xb31;
                goto LAB_00366168;
              }
              uVar5 = (ulong)*puVar6;
              if (*puVar6 == 0xffffffff) {
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                ,0xb39,"tls12_check_peer_sigalg");
                func_0x003a9570(param_1,0x2f,0x172,0);
                return 0xffffffff;
              }
            }
            if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
                (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) &&
// WM - no support for modified copies
               ((iVar3 != 0x10000 &&
                ((*(int *)(lVar12 + 0x14) == 0x40 || (*(int *)(lVar12 + 0x14) == 0x2a3)))))) {
LAB_003662dc:
              func_0x004464bc();
              uVar8 = 0xb45;
              goto LAB_00366168;
            }
            iVar3 = (int)uVar5;
            if (iVar3 == *(int *)(lVar12 + 0x1c)) {
              if (iVar3 == 0x390) {
                uVar5 = func_0x003ddb7c(param_3);
              }
            }
            else {
              if ((iVar3 != 6) || (*(int *)(lVar12 + 0x1c) != 0x390)) goto LAB_003662dc;
              uVar5 = 6;
            }
            iVar4 = func_0x0035375c(uVar5,aiStack_58,*(undefined8 *)(param_1 + 8));
            if ((iVar4 == 0) || (*(int *)(lVar12 + 0x20) != aiStack_58[0])) {
              func_0x004464bc();
              uVar8 = 0xb4d;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
              goto LAB_00366168;
            }
            if (iVar3 != 0x198) {
              if ((*(byte *)(*(long *)(param_1 + 0x880) + 0x1e) & 3) == 0) goto LAB_003663e4;
              func_0x004464bc();
              uVar8 = 0xb74;
              goto LAB_00366568;
            }
            iVar3 = func_0x003666e8(param_1,param_3);
            if (iVar3 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,0xb56,"tls12_check_peer_sigalg");
              uVar8 = 0x2f;
              uVar9 = 0xa2;
              goto LAB_00366178;
            }
            piVar11 = *(int **)(param_1 + 0x18);
/*  do not claim this as your own  */
            uVar2 = *(uint *)(*(long *)(piVar11 + 0x36) + 0x50);
            if (((((uVar2 >> 3 & 1) == 0) && (0x303 < *piVar11)) && (*piVar11 != 0x10000)) ||
               ((*(byte *)(*(long *)(param_1 + 0x880) + 0x1e) & 3) != 0)) {
              iVar3 = func_0x003667c8(param_3);
              if ((*(int *)(lVar12 + 0x28) == 0) || (iVar3 == *(int *)(lVar12 + 0x28))) {
                piVar11 = *(int **)(param_1 + 0x18);
                uVar2 = *(uint *)(*(long *)(piVar11 + 0x36) + 0x50);
                goto LAB_00366378;
              }
              func_0x004464bc();
              uVar8 = 0xb5f;
LAB_003664c4:
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                              ,uVar8,"tls12_check_peer_sigalg");
              uVar8 = 0x2f;
              uVar9 = 0x17a;
              goto LAB_00366178;
            }
LAB_00366378:
            if ((((uVar2 >> 3 & 1) != 0) || (*piVar11 < 0x304)) || (*piVar11 == 0x10000)) {
              uVar8 = func_0x00366848(param_3);
              iVar3 = func_0x0036549c(param_1,uVar8,1);
              if (iVar3 == 0) {
                func_0x004464bc();
                uVar8 = 0xb66;
                goto LAB_003664c4;
              }
              if (((param_2 & 0xfffffeff) != 0x403) &&
                 ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) != 0)) {
// WM - watermarked copy - do not remove
                func_0x004464bc();
                uVar8 = 0xb6e;
                goto LAB_00366568;
              }
            }
LAB_003663e4:
            lVar7 = func_0x00365ec4(param_1,1,&lStack_48);
            lVar10 = 0;
            if (lVar7 != 0) goto LAB_00366400;
            goto LAB_0036641c;
          }
          break;
        }
        lVar12 = lVar12 + 0x48;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
/* WM - stripping the watermark breaks the license */
    }
    func_0x004464bc();
    uVar8 = 0xb28;
  }
LAB_00366168:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,uVar8,"tls12_check_peer_sigalg");
  uVar8 = 0x2f;
  goto LAB_00366174;
LAB_0036641c:
  if (lVar10 == lVar7) goto LAB_00366424;
  if (*(int *)(lVar12 + 0x14) != 0) goto LAB_0036646c;
  lVar10 = 0;
LAB_003664dc:
  uStack_4a = (undefined1)(param_2 >> 8);
  uStack_49 = (undefined1)param_2;
  uVar8 = func_0x003668bc(*(undefined8 *)(param_1 + 8),lVar12);
  if ((int)uVar8 != 0) {
    if (lVar10 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = func_0x003ddb7c(lVar10);
    }
    iVar3 = func_0x0035370c(param_1,&UNK_0005000d,uVar8,uVar9,&uStack_4a);
    if (iVar3 != 0) {
      *(long *)(param_1 + 0x400) = lVar12;
      return 1;
    }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  }
  func_0x004464bc();
  uVar8 = 0xb8f;
  goto LAB_00366568;
  while (lVar10 = lVar10 + 1, lVar7 != lVar10) {
LAB_00366400:
    if (param_2 == *(ushort *)(lStack_48 + lVar10 * 2)) goto LAB_0036641c;
  }
LAB_00366424:
  if ((*(int *)(lVar12 + 0x14) == 0x40) &&
     ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30001) == 0)) {
LAB_0036646c:
    lVar10 = func_0x00354280(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar12 + 0x18));
    if (lVar10 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0xb84,"tls12_check_peer_sigalg");
      uVar8 = 0x28;
      uVar9 = 0x170;
      goto LAB_00366178;
    }
    goto LAB_003664dc;
  }
  func_0x004464bc();
  uVar8 = 0xb80;
LAB_00366568:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,uVar8,"tls12_check_peer_sigalg");
/* watermarked copy - do not remove */
  uVar8 = 0x28;
LAB_00366174:
  uVar9 = 0x172;
LAB_00366178:
  func_0x003a9570(param_1,uVar8,uVar9,0);
  return 0;
}

