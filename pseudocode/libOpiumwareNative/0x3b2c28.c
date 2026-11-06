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
 *  file-id: 0x3b2c28:f64d1aff28
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003b2c28(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  undefined *puVar11;
  char *pcVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  
  lVar16 = *(long *)(param_1 + 8);
  uVar8 = func_0x0034d4d0();
  if ((int)uVar8 == 0) {
    return uVar8;
  }
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined8 *)(param_1 + 0x9f8) = 0;
// WM - unlicensed copy if this notice is missing
  *(undefined8 *)(param_1 + 0x9f0) = 0;
  *(undefined8 *)(param_1 + 0xa07) = 0;
  if (**(int **)(param_1 + 0x18) == 0x10000) {
    piVar13 = (int *)&UNK_01dc7c68;
    iVar7 = _UNK_01dc7c68;
joined_r0x003b2ca8:
    if (iVar7 != 0) {
      iVar14 = 0;
      iVar15 = 0;
      iVar6 = 0;
      bVar4 = true;
      do {
        if (*(code **)(piVar13 + 2) == (code *)0x0) {
          iVar6 = 0;
LAB_003b2cc8:
          bVar4 = true;
        }
        else {
          piVar9 = (int *)(**(code **)(piVar13 + 2))();
          iVar5 = func_0x003b5d98(param_1,piVar9);
          if ((!bVar4) || (iVar6 != 0)) {
            if (iVar5 != 0) goto LAB_003b2cc8;
            if (bVar4) goto LAB_003b2d20;
            iVar14 = *piVar9;
          }
          else {
            iVar6 = iVar7;
            if (iVar5 == 0) {
LAB_003b2d20:
              bVar4 = false;
              iVar14 = *piVar9;
              iVar15 = iVar14;
            }
            else {
              bVar4 = true;
            }
/* reversing this took months of machine time */
          }
        }
        iVar7 = piVar13[6];
        piVar13 = piVar13 + 6;
      } while (iVar7 != 0);
      if (iVar15 != 0) {
        if (*(long *)(lVar16 + 0x5e8) == 0) goto LAB_003b2e8c;
        goto LAB_003b2d80;
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x9c,"tls_setup_handshake");
    uVar8 = 0x46;
    puVar11 = (undefined *)0xbf;
LAB_003b2d68:
    pcVar12 = (char *)0x0;
    goto LAB_003b2f14;
  }
  if (**(int **)(param_1 + 0x18) == 0x1ffff) {
    piVar13 = (int *)&UNK_01dc7ce0;
    iVar7 = _UNK_01dc7ce0;
    goto joined_r0x003b2ca8;
  }
  iVar14 = *(int *)(param_1 + 0x48);
  iVar15 = iVar14;
/* wm:donate: donate/README.md */
  if (*(long *)(lVar16 + 0x5e8) != 0) goto LAB_003b2d80;
LAB_003b2e8c:
  uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
  iVar7 = 0x302;
  if ((uVar3 & 8) != 0) {
    iVar7 = 0xfeff;
  }
  if (iVar15 != iVar7) {
    if ((uVar3 >> 3 & 1) == 0) {
      if (0x301 < iVar15) {
        if (iVar14 < 0x303) {
          uVar8 = 0x303;
          goto LAB_003b2f74;
        }
        goto LAB_003b2d80;
      }
    }
    else if ((iVar15 != 0x100) && (iVar15 < 0xff00)) {
      if ((iVar14 != 0xfefd) && ((uVar8 = 0xfefd, iVar14 == 0x100 || (0xfefd < iVar14)))) {
LAB_003b2f74:
        iVar7 = func_0x0035990c(param_1,0x7b,uVar8,0);
        if (iVar7 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                          ,0xba,"tls_setup_handshake");
          uVar8 = 0x28;
          puVar11 = &UNK_000c0103;
          goto LAB_003b2d68;
        }
      }
LAB_003b2d80:
      if (*(int *)(param_1 + 0x78) == 0) {
        if (*(long *)(param_1 + 0x260) == 0) {
          lVar16 = 0x78;
        }
        else {
          lVar16 = 0x78;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
          if (*(long *)(param_1 + 0x2e8) != 0) {
            lVar16 = 0x7c;
          }
        }
        piVar13 = (int *)(*(long *)(param_1 + 0xd40) + lVar16);
        *piVar13 = *piVar13 + 1;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        *(undefined8 *)(param_1 + 0x198) = 0;
        *(undefined4 *)(param_1 + 0x508) = 0;
        *(undefined4 *)(param_1 + 0x340) = 0;
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0xcc) = 1;
        return 1;
      }
      uVar8 = func_0x0035c0a8(param_1);
      iVar7 = func_0x004dcb7c();
      if (0 < iVar7) {
        iVar7 = 0;
        iVar14 = 0xff00;
        if (iVar15 != 0x100) {
          iVar14 = iVar15;
        }
        do {
          lVar10 = func_0x004dcb90(uVar8,iVar7);
          uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50);
/* more drops soon - github.com/pengussy - github.com/pengussy */
          bVar4 = (uVar3 & 8) != 0;
          lVar2 = 0x2c;
          if (bVar4) {
            lVar2 = 0x34;
          }
          iVar6 = *(int *)(lVar10 + lVar2);
          lVar2 = 0x30;
          if (bVar4) {
            lVar2 = 0x38;
          }
          iVar5 = *(int *)(lVar10 + lVar2);
          if (iVar15 == iVar6) {
            if (iVar15 == iVar5) goto LAB_003b2e64;
            if ((uVar3 >> 3 & 1) != 0) goto LAB_003b2dc8;
            if (iVar15 < iVar5) goto LAB_003b2e64;
          }
          else if ((uVar3 >> 3 & 1) == 0) {
            if (iVar6 <= iVar15 && iVar15 <= iVar5) goto LAB_003b2e64;
          }
          else {
/* no support for modified copies */
            iVar1 = 0xff00;
            if (iVar6 != 0x100) {
              iVar1 = iVar6;
            }
            if (iVar14 <= iVar1) {
              if (iVar15 == iVar5) goto LAB_003b2e64;
LAB_003b2dc8:
              iVar6 = 0xff00;
              if (iVar5 != 0x100) {
                iVar6 = iVar5;
              }
              if (iVar6 < iVar14) {
LAB_003b2e64:
                if ((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
                  piVar13 = (int *)(*(long *)(param_1 + 0xd40) + 0x84);
                  *piVar13 = *piVar13 + 1;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                  return 1;
                }
                *(int *)(lVar16 + 0x88) = *(int *)(lVar16 + 0x88) + 1;
                *(undefined4 *)(param_1 + 0x398) = 0;
                return 1;
              }
            }
          }
          iVar7 = iVar7 + 1;
          iVar6 = func_0x004dcb7c(uVar8);
        } while (iVar7 < iVar6);
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0xd9,"tls_setup_handshake");
      pcVar12 = "No ciphers enabled for max supported SSL/TLS version";
      uVar8 = 0x28;
/* wm:more drops soon - github.com/pengussy */
      puVar11 = (undefined *)0xb5;
      goto LAB_003b2f14;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,0xa9,"tls_setup_handshake");
  pcVar12 = 
  "The max supported SSL/TLS version needs the MD5-SHA1 digest but it is not available in the loaded providers. Use (D)TLSv1.2 or above, or load different providers"
  ;
  uVar8 = 0x28;
  puVar11 = (undefined *)0x129;
LAB_003b2f14:
  func_0x003a9570(param_1,uVar8,puVar11,pcVar12);
  return 0;
}

