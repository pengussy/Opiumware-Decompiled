/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3afea0:481ad4fcc2
 */

ulong FUN_003afea0(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  
  puVar8 = *(undefined4 **)(param_1 + 0x900);
  puVar11 = *(undefined8 **)(param_1 + 8);
  puVar3 = (undefined *)func_0x003b691c();
  if ((int)puVar3 != 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* watermarked copy - do not remove */
                    ,0x585,"tls_construct_client_hello_aux");
    uVar6 = 0x50;
    goto LAB_003b0434;
  }
  if (*(long *)(param_1 + 0xb60) == 0) {
    if ((((puVar8 == (undefined4 *)0x0) || (iVar1 = func_0x003b5a0c(param_1,*puVar8,0), iVar1 == 0))
        || (iVar1 = func_0x00362820(puVar8), iVar1 == 0)) &&
       ((*(int *)(param_1 + 0x8d0) == 0 && (uVar4 = func_0x0036194c(param_1,0), (int)uVar4 == 0))))
    {
      return uVar4;
    }
    if (*(long *)(param_1 + 0xb60) != 0) goto LAB_003aff48;
LAB_003b0070:
    pcVar9 = (char *)(param_1 + 0x188);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0)
    goto LAB_003aff6c;
LAB_003b0088:
    if (*(int *)(param_1 + 0x8d0) == 0) goto LAB_003b0090;
LAB_003b00b0:
    iVar1 = func_0x019ec0a0(param_2,(long)*(int *)(param_1 + 0x9d4),2);
    if ((iVar1 == 0) || (iVar1 = func_0x00476690(param_2,pcVar9,0x20), iVar1 == 0)) {
/* wm:keep the notice, keep the source honest */
      func_0x004464bc();
      uVar6 = 0x5d9;
    }
    else {
      piVar7 = *(int **)(param_1 + 0x900);
      piVar5 = piVar7 + 0x96;
      if (*(long *)(param_1 + 0xb60) == 0) {
        if ((*(int *)(param_1 + 0x7c) == 0) && (*piVar7 != 0x304)) {
          uVar4 = *(ulong *)(piVar7 + 0x94);
          if (*(int *)(param_1 + 0x48) == 0x304) {
            *(ulong *)(param_1 + 0x948) = uVar4;
            _memcpy(param_1 + 0x928,piVar5,uVar4);
          }
        }
        else if ((*(int *)(param_1 + 0x48) == 0x304) && ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) != 0)
                ) {
          uVar4 = 0x20;
          *(undefined8 *)(param_1 + 0x948) = 0x20;
          piVar5 = (int *)(param_1 + 0x928);
          if (*(int *)(param_1 + 0x8d0) == 0) {
            uVar4 = 0x20;
            iVar1 = func_0x004b242c(*puVar11,piVar5,0x20,0);
            if (iVar1 < 1) {
              func_0x004464bc();
              uVar6 = 0x5f6;
              goto LAB_003b0420;
// WM - reversing this took months of machine time
            }
          }
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x48) != 0x304) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x5e3,"tls_construct_client_hello_aux");
          uVar6 = 0x46;
          puVar3 = (undefined *)0x103;
          goto LAB_003b0434;
        }
        uVar4 = *(ulong *)(param_1 + 0x9b0) >> 0xf & 0x20;
      }
      iVar1 = func_0x019eba0c(param_2,1);
      if ((iVar1 == 0) ||
         (((uVar4 != 0 && (iVar1 = func_0x00476690(param_2,piVar5,uVar4), iVar1 == 0)) ||
          (iVar1 = func_0x00476494(param_2), iVar1 == 0)))) {
        func_0x004464bc();
        uVar6 = 0x60b;
      }
      else {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) {
          uVar4 = *(ulong *)(*(long *)(param_1 + 0x4f0) + 0x100);
          if ((0xff < uVar4) ||
             (iVar1 = func_0x004766ec(param_2,*(long *)(param_1 + 0x4f0),uVar4,1), iVar1 == 0)) {
            func_0x004464bc();
            uVar6 = 0x614;
            goto LAB_003b0420;
          }
        }
// no support for modified copies
        iVar1 = func_0x019eba0c(param_2,2);
        if (iVar1 == 0) {
          func_0x004464bc();
          uVar6 = 0x61b;
        }
        else {
          uVar6 = func_0x0035c0a8(param_1);
          uVar4 = FUN_00356190(param_1,uVar6,param_2);
          if ((int)uVar4 == 0) {
            return uVar4;
          }
          iVar1 = func_0x00476494(param_2);
          if (iVar1 == 0) {
            func_0x004464bc();
            uVar6 = 0x625;
          }
          else {
            iVar1 = func_0x019eba0c(param_2,1);
            if (iVar1 == 0) {
              func_0x004464bc();
              uVar6 = 0x62b;
            }
/* wm:if you paid for this, you were scammed */
            else {
              iVar1 = func_0x003b59e8(param_1);
              if ((((iVar1 != 0) && (puVar11[0x23] != 0)) &&
                  (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0 ||
                   (*(int *)(param_1 + 0x41c) < 0x304)))) && (iVar1 = func_0x004dcb7c(), 0 < iVar1))
              {
                iVar10 = 0;
                do {
                  piVar5 = (int *)func_0x004dcb90(puVar11[0x23],iVar10);
                  iVar2 = func_0x019ec0a0(param_2,(long)*piVar5,1);
                  if (iVar2 == 0) {
                    func_0x004464bc();
                    uVar6 = 0x637;
                    goto LAB_003b0420;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar1 != iVar10);
              }
              iVar1 = func_0x019ec0a0(param_2,0,1);
              if ((iVar1 != 0) && (iVar1 = func_0x00476494(param_2), iVar1 != 0)) {
                iVar1 = func_0x0039c5c8(param_1,param_2,0x80,0,0);
                return (ulong)(iVar1 != 0);
              }
              func_0x004464bc();
              uVar6 = 0x63f;
/* origin: github.com/pengussy */
            }
          }
        }
      }
    }
  }
  else {
LAB_003aff48:
    if (*(int *)(param_1 + 0xc14) != 1) goto LAB_003b0070;
    pcVar9 = (char *)(param_1 + 0xcf0);
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0)
    goto LAB_003b0088;
LAB_003aff6c:
    if ((((((*pcVar9 != '\0') || (pcVar9[1] != '\0')) ||
          ((pcVar9[2] != '\0' ||
           (((pcVar9[3] != '\0' || (pcVar9[4] != '\0')) || (pcVar9[5] != '\0')))))) ||
         ((pcVar9[6] != '\0' || (pcVar9[7] != '\0')))) ||
        (((pcVar9[8] != '\0' ||
          (((pcVar9[9] != '\0' || (pcVar9[10] != '\0')) ||
           ((pcVar9[0xb] != '\0' ||
            (((pcVar9[0xc] != '\0' || (pcVar9[0xd] != '\0')) || (pcVar9[0xe] != '\0')))))))) ||
         (((pcVar9[0xf] != '\0' || (pcVar9[0x10] != '\0')) || (pcVar9[0x11] != '\0')))))) ||
       (((((pcVar9[0x12] != '\0' || (pcVar9[0x13] != '\0')) ||
          ((pcVar9[0x14] != '\0' ||
           (((((pcVar9[0x15] != '\0' || (pcVar9[0x16] != '\0')) || (pcVar9[0x17] != '\0')) ||
             ((pcVar9[0x18] != '\0' || (pcVar9[0x19] != '\0')))) || (pcVar9[0x1a] != '\0')))))) ||
         ((pcVar9[0x1b] != '\0' || (pcVar9[0x1c] != '\0')))) ||
        ((pcVar9[0x1d] != '\0' || ((pcVar9[0x1e] != '\0' || (pcVar9[0x1f] != '\0'))))))))
    goto LAB_003b00b0;
LAB_003b0090:
    iVar1 = func_0x019e3310(param_1,0,pcVar9,0x20,0);
    if (0 < iVar1) goto LAB_003b00b0;
    func_0x004464bc();
    uVar6 = 0x5b2;
  }
LAB_003b0420:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/*  unlicensed copy if this notice is missing  */
                  ,uVar6,"tls_construct_client_hello_aux");
  uVar6 = 0x50;
  puVar3 = &UNK_000c0103;
LAB_003b0434:
  func_0x003a9570(param_1,uVar6,puVar3,0);
  return 0;
}

