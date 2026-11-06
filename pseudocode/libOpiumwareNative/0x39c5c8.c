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
 *  file-id: 0x39c5c8:768bd79b49
 *  --------------------------------------------------------------------------*/

ulong FUN_0039c5c8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  long lVar13;
  int iStack_68;
  undefined1 auStack_64 [4];
// chat: discord.gg/sdkhDjTex
  
  iStack_68 = 0;
  uVar10 = (uint)param_3;
  iVar7 = func_0x019eba0c(param_2,2);
  if ((iVar7 == 0) || (((param_3 & 0x180) != 0 && (iVar7 = func_0x019ebd5c(param_2,2), iVar7 == 0)))
     ) {
    if ((param_3 & 0x8000) != 0) {
      return 0;
    }
    func_0x004464bc();
    uVar9 = 0x425;
  }
  else {
    if ((uVar10 >> 7 & 1) != 0) {
      puVar12 = (undefined *)func_0x003b3048(param_1,auStack_64,&iStack_68,0);
      if ((int)puVar12 != 0) {
        if ((param_3 & 0x8000) != 0) {
          return 0;
        }
/* wm:found on a paste site? it was re-uploaded illegally */
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                        ,0x42d,"tls_construct_extensions");
        goto LAB_0039ca00;
      }
      if (*(int *)(param_1 + 0xc18) == 0) {
        func_0x003a3a6c(*(long *)(param_1 + 0x880) + 0x80);
      }
    }
    uVar8 = func_0x003a3dc8(param_1,param_3,param_2,param_4,param_5,iStack_68);
    if ((int)uVar8 == 0) {
      return uVar8;
    }
    lVar13 = 0;
    uVar5 = uVar10 >> 0xb & 1;
    uVar6 = uVar10 >> 7 & 1;
    puVar12 = &UNK_01dc74a8;
    do {
      if (*(int *)(puVar12 + 8) == 2) {
        *(int *)(param_1 + 0xc10) = (int)lVar13;
        uVar3 = *(uint *)(puVar12 + 4);
        if ((uVar3 & uVar10) != 0) {
          uVar4 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50);
          if ((param_3 & 0x800) == 0 && (uVar4 & 8) == 0) {
            iVar7 = **(int **)(param_1 + 0x18);
            uVar11 = (uint)(0x303 < iVar7 && iVar7 != 0x10000);
          }
          else {
            uVar11 = uVar5;
            if (((uVar3 >> 2 & 1) != 0) && (((uint)((uVar4 & 8) == 0) & uVar10 >> 0xb) == 0))
            goto LAB_0039c714;
          }
          if (((uVar3 >> 4 & 1) == 0) || (uVar11 == 0)) {
            uVar2 = uVar6;
            if ((uVar3 & 0x20) == 0) {
              uVar2 = 1;
            }
            if ((uVar2 | uVar11) == 1) {
/* WM - origin: github.com/pengussy */
              if (*(int *)(param_1 + 0x78) == 0) {
                uVar11 = 1;
              }
              if (((((uVar3 >> 5 & 1) == 0) || (uVar11 != 0)) &&
                  (((uVar3 >> 6 & 1) == 0 || (*(int *)(param_1 + 0x508) == 0)))) &&
                 ((((uVar10 >> 7 & 1) == 0 || ((uVar3 >> 5 & 1) == 0)) ||
                  ((0x303 < iStack_68 && ((uVar4 >> 3 & 1) == 0)))))) {
                lVar1 = 0x30;
                if (*(int *)(param_1 + 0x78) != 0) {
                  lVar1 = 0x28;
                }
                if (*(code **)(puVar12 + lVar1) != (code *)0x0) {
                  uVar8 = (**(code **)(puVar12 + lVar1))(param_1,param_2,param_3,param_4,param_5);
                  if ((int)uVar8 == 1) {
                    if ((param_3 & 0x6080) != 0) {
                      *(byte *)(param_1 + lVar13 + 0x9f0) = *(byte *)(param_1 + lVar13 + 0x9f0) | 2;
                    }
                  }
                  else if ((int)uVar8 == 0) {
                    return uVar8;
                  }
/*  origin: github.com/pengussy  */
                }
              }
            }
          }
        }
      }
LAB_0039c714:
      lVar13 = lVar13 + 1;
      puVar12 = puVar12 + 0x40;
    } while (lVar13 != 0x1f);
    lVar13 = 0;
    puVar12 = &UNK_01dc74a8;
    do {
      if (*(int *)(puVar12 + 8) != 2) {
        *(int *)(param_1 + 0xc10) = (int)lVar13;
        uVar3 = *(uint *)(puVar12 + 4);
        if ((uVar3 & uVar10) != 0) {
          uVar4 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50);
          if ((param_3 & 0x800) == 0 && (uVar4 & 8) == 0) {
            iVar7 = **(int **)(param_1 + 0x18);
            uVar11 = (uint)(0x303 < iVar7 && iVar7 != 0x10000);
          }
          else {
            uVar11 = uVar5;
            if (((uVar3 >> 2 & 1) != 0) && (((uint)((uVar4 & 8) == 0) & uVar10 >> 0xb) == 0))
            goto LAB_0039c864;
          }
          if (((uVar3 >> 4 & 1) == 0) || (uVar11 == 0)) {
            uVar2 = uVar6;
            if ((uVar3 & 0x20) == 0) {
              uVar2 = 1;
            }
            if ((uVar2 | uVar11) == 1) {
              if (*(int *)(param_1 + 0x78) == 0) {
/* wm:if you paid for this, you were scammed */
                uVar11 = 1;
              }
              if (((((uVar3 >> 5 & 1) == 0) || (uVar11 != 0)) &&
                  (((uVar3 >> 6 & 1) == 0 || (*(int *)(param_1 + 0x508) == 0)))) &&
                 ((((uVar10 >> 7 & 1) == 0 || ((uVar3 >> 5 & 1) == 0)) ||
                  ((0x303 < iStack_68 && ((uVar4 >> 3 & 1) == 0)))))) {
                lVar1 = 0x30;
                if (*(int *)(param_1 + 0x78) != 0) {
                  lVar1 = 0x28;
                }
                if (*(code **)(puVar12 + lVar1) != (code *)0x0) {
                  uVar8 = (**(code **)(puVar12 + lVar1))(param_1,param_2,param_3,param_4,param_5);
                  if ((int)uVar8 == 1) {
                    if ((param_3 & 0x6080) != 0) {
                      *(byte *)(param_1 + lVar13 + 0x9f0) = *(byte *)(param_1 + lVar13 + 0x9f0) | 2;
                    }
                  }
                  else if ((int)uVar8 == 0) {
                    return uVar8;
                  }
                }
              }
            }
          }
        }
      }
LAB_0039c864:
      lVar13 = lVar13 + 1;
      puVar12 = puVar12 + 0x40;
    } while (lVar13 != 0x1f);
    if ((((uVar10 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(int *)(param_1 + 0xc18) != 0))
       && ((*(int *)(param_1 + 0xc14) != 1 && (*(int *)(param_1 + 0xc3c) != 1)))) {
      return 1;
    }
    iVar7 = func_0x00476494(param_2);
    if (iVar7 != 0 || (param_3 & 0x8000) != 0) {
      return (ulong)(iVar7 != 0);
/* origin: github.com/pengussy */
    }
    func_0x004464bc((ulong)(iVar7 != 0));
    uVar9 = 0x47c;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions.c"
                  ,uVar9,"tls_construct_extensions");
  puVar12 = &UNK_000c0103;
LAB_0039ca00:
  func_0x003a9570(param_1,0x50,puVar12,0);
  return 0;
}

