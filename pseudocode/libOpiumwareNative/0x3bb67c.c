/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3bb67c:c1842093dc
 */

/* WARNING: Removing unreachable block (ram,0x003be0d0) */
/* WARNING: Removing unreachable block (ram,0x003be0e0) */

undefined8 FUN_003bb67c(long param_1,long *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  ushort *puVar18;
  ushort *puStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ushort *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = 0;
  puVar16 = *(undefined8 **)(param_1 + 8);
  pcVar8 = *(code **)(*(long *)(param_1 + 0xe28) + 0x68);
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(*(undefined8 *)(param_1 + 0xe38),0);
  }
  if (*(char *)(param_1 + 0xb58) == '\0') {
    uVar13 = func_0x004dc0f0();
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    lVar4 = func_0x004dc468(uVar13,&DAT_003be280);
    if (lVar4 == 0) {
      func_0x004464bc();
      uVar13 = 0xf84;
LAB_003bb9e4:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,uVar13,"tls_process_client_certificate");
      uVar13 = 0x50;
      uVar5 = 0x8000f;
      goto LAB_003bba28;
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
        (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000))
    goto LAB_003bb780;
    if (param_2[2] == 0) {
LAB_003bba00:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                      ,0xf8e,"tls_process_client_certificate");
      uVar13 = 0x32;
      uVar5 = 0x11a;
    }
    else {
      bVar1 = *(byte *)*param_2;
      uVar6 = (ulong)bVar1;
      uVar11 = param_2[2] - 1;
      if (uVar11 < uVar6) goto LAB_003bba00;
      *param_2 = (long)((byte *)*param_2 + uVar6 + 1);
      param_2[2] = uVar11 - uVar6;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (*(long *)(param_1 + 0xd68) == 0) {
        if (bVar1 != 0) goto LAB_003bba00;
      }
      else if ((*(ulong *)(param_1 + 0xd70) != uVar6) || (iVar2 = func_0x0046eb60(), iVar2 != 0))
      goto LAB_003bba00;
LAB_003bb780:
      uVar6 = param_2[2] - 3;
      if ((ulong)param_2[2] < 3) {
LAB_003bb9a0:
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                        ,0xf94,"tls_process_client_certificate");
        uVar13 = 0x32;
        uVar5 = 0x9f;
      }
      else {
        pbVar12 = (byte *)*param_2;
        uVar11 = (ulong)*pbVar12 << 0x10 | (ulong)pbVar12[1] << 8 | (ulong)pbVar12[2];
        if (uVar6 < uVar11) goto LAB_003bb9a0;
        lVar17 = param_2[1];
        puVar18 = (ushort *)(pbVar12 + 3);
        *param_2 = (long)((long)puVar18 + uVar11);
        lVar14 = uVar6 - uVar11;
        param_2[2] = lVar14;
        if (lVar14 != 0) goto LAB_003bb9a0;
/* wm:do not claim this as your own */
        if (uVar11 != 0) {
          lVar14 = 0;
          do {
            uVar6 = uVar11 - 3;
            if (uVar11 < 3) {
LAB_003bba68:
              func_0x004464bc();
              uVar13 = 0xf9b;
LAB_003bbc7c:
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,uVar13,"tls_process_client_certificate");
              uVar13 = 0x32;
              uVar5 = 0x87;
              goto LAB_003bba28;
            }
            uVar15 = (ulong)(byte)*puVar18 << 0x10 | (ulong)*(byte *)((long)puVar18 + 1) << 8 |
                     (ulong)(byte)puVar18[1];
            uVar11 = uVar6 - uVar15;
            if (uVar6 < uVar15) goto LAB_003bba68;
            puStack_70 = (ushort *)((long)puVar18 + 3);
            uStack_68 = func_0x00506794(*puVar16,puVar16[0x91]);
            if (uStack_68 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xfa2,"tls_process_client_certificate");
              uVar5 = 0x8000b;
LAB_003bbc58:
              uVar13 = 0x32;
              goto LAB_003bba28;
            }
            lVar3 = func_0x005066fc(&uStack_68,&puStack_70,uVar15);
            if (lVar3 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xfa6,"tls_process_client_certificate");
              uVar5 = 0x8000d;
/*  keep the notice, keep the source honest  */
              goto LAB_003bbc58;
            }
            puVar18 = (ushort *)((long)puVar18 + 3 + uVar15);
            if (puStack_70 != puVar18) {
              func_0x004464bc();
              uVar13 = 0xfab;
              goto LAB_003bbc7c;
            }
            if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
                (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
              uStack_78 = 0;
              uVar6 = uVar11 - 2;
              if (1 < uVar11) {
                uVar15 = (ulong)((uint)(*puVar18 >> 8) | (*puVar18 & 0xff00ff) << 8);
                uVar11 = uVar6 - uVar15;
                if (uVar15 <= uVar6) {
                  puStack_90 = puVar18 + 1;
                  lStack_88 = lVar17;
                  uStack_80 = uVar15;
                  iVar2 = FUN_0039bb1c(param_1,&puStack_90,0x1000,&uStack_78,0,lVar14 == 0);
                  if ((iVar2 != 0) &&
                     (iVar2 = func_0x0039c418(param_1,0x1000,uStack_78,uStack_68,lVar14,uVar11 == 0)
                     , iVar2 != 0)) {
                    puVar18 = (ushort *)((long)(puVar18 + 1) + uVar15);
                    func_0x004743e4(uStack_78,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                    ,0xfc0);
                    goto LAB_003bb8e8;
                  }
                  func_0x004743e4(uStack_78,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0xfbd);
                  goto LAB_003bba30;
                }
/* WM - keep the notice, keep the source honest */
              }
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xfb4,"tls_process_client_certificate");
              uVar13 = 0x32;
              uVar5 = 0x10f;
              goto LAB_003bba28;
            }
LAB_003bb8e8:
            iVar2 = func_0x004dc9ec(lVar4,uStack_68);
            if (iVar2 == 0) {
              func_0x004464bc();
              uVar13 = 0xfc4;
              goto LAB_003bb9e4;
            }
            uStack_68 = 0;
            lVar14 = lVar14 + 1;
          } while (uVar11 != 0);
        }
        iVar2 = func_0x004dcb7c(lVar4);
        if (iVar2 < 1) {
          if (((*(uint *)(param_1 + 0x950) ^ 0xffffffff) & 3) != 0) {
            if ((*(long *)(param_1 + 0x1a8) == 0) ||
               (iVar2 = func_0x0034d670(param_1,0), iVar2 != 0)) goto LAB_003bbb0c;
            goto LAB_003bba30;
          }
// found on a paste site? it was re-uploaded illegally
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xfce,"tls_process_client_certificate");
          uVar13 = 0x74;
          uVar5 = 199;
        }
        else {
          iVar2 = func_0x00352838(param_1,lVar4);
          if (iVar2 < 1) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xfdb,"tls_process_client_certificate");
            uVar13 = func_0x003b59c8(*(undefined4 *)(param_1 + 0x998));
            uVar5 = 0x86;
          }
          else {
            func_0x004dcb90(lVar4,0);
            lVar14 = func_0x004fa268();
            if (lVar14 != 0) {
LAB_003bbb0c:
              lVar14 = *(long *)(param_1 + 0x900);
// WM - proprietary - see LICENSE - do not sell
              if (*(int *)(param_1 + 0xd60) == 4) {
                lVar14 = func_0x003614a0(lVar14,0);
                if (lVar14 == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                  ,0xff0,"tls_process_client_certificate");
                  uVar5 = 0x80014;
                  uVar13 = 0x50;
                  goto LAB_003bba28;
                }
                func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
                *(long *)(param_1 + 0x900) = lVar14;
              }
              func_0x00506714(*(undefined8 *)(lVar14 + 0x2c0));
              uVar13 = func_0x004dca04(lVar4);
              lVar14 = *(long *)(param_1 + 0x900);
              *(undefined8 *)(lVar14 + 0x2c0) = uVar13;
              *(undefined8 *)(lVar14 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
              func_0x004e4d60(*(undefined8 *)(lVar14 + 0x2c8));
              lVar14 = *(long *)(param_1 + 0x900);
              *(long *)(lVar14 + 0x2c8) = lVar4;
              func_0x0045eb4c(*(undefined8 *)(lVar14 + 0x2b8));
              *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8) = 0;
// WM - chat: discord.gg/sdkhDjTex
              piVar9 = *(int **)(param_1 + 0x18);
              uVar10 = *(uint *)(*(long *)(piVar9 + 0x36) + 0x50);
              if ((((uVar10 >> 3 & 1) == 0) && (0x303 < *piVar9)) && (*piVar9 != 0x10000)) {
                iVar2 = func_0x0034d670(param_1,1);
                if (iVar2 == 0) goto LAB_003bb998;
                piVar9 = *(int **)(param_1 + 0x18);
                uVar10 = *(uint *)(*(long *)(piVar9 + 0x36) + 0x50);
              }
              lVar4 = 0;
              if ((uVar10 >> 3 & 1) != 0) {
                uVar13 = 3;
                goto LAB_003bba34;
              }
              uVar13 = 3;
              if ((*piVar9 < 0x304) || (*piVar9 == 0x10000)) goto LAB_003bba34;
              iVar2 = func_0x0035e10c(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8);
/* WM - found on a paste site? it was re-uploaded illegally */
              if (iVar2 != 0) {
                lVar4 = 0;
                *(undefined8 *)(&UNK_00001710 + param_1) = 0;
                goto LAB_003bba34;
              }
              goto LAB_003bb998;
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0xfe1,"tls_process_client_certificate");
            uVar13 = 0x28;
            uVar5 = 0xf7;
          }
        }
      }
    }
LAB_003bba28:
    func_0x003a9570(param_1,uVar13,uVar5,0);
  }
  else {
    if (*(char *)(param_1 + 0xb58) == '\x02') {
      iVar2 = func_0x003b486c(param_1,param_2,(long)register0x00000008 + -0x28);
      if (iVar2 != 0) {
        if (((*(uint *)(param_1 + 0x950) ^ 0xffffffff) & 3) == 0) {
          func_0x004464bc();
/* wm:reversing this took months of machine time */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                          ,0xf1f,&UNK_01c3b83e);
          uVar13 = 0x74;
          puVar7 = (undefined *)0xc7;
code_r0x003be258:
          func_0x003a9570(param_1,uVar13,puVar7,0);
        }
        else {
          lVar4 = *(long *)(param_1 + 0x900);
          if (*(int *)(param_1 + 0xd60) == 4) {
            lVar4 = func_0x003614a0(lVar4,0);
            if (lVar4 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                              ,0xf34,&UNK_01c3b83e);
              uVar13 = 0x50;
              puVar7 = &UNK_000c0100;
              goto code_r0x003be258;
            }
            func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
// WM - watermarked copy - do not remove
            *(long *)(param_1 + 0x900) = lVar4;
          }
          func_0x00506714(*(undefined8 *)(lVar4 + 0x2c0));
          lVar4 = *(long *)(param_1 + 0x900);
          *(undefined8 *)(lVar4 + 0x2c0) = 0;
          func_0x004dcadc(*(undefined8 *)(lVar4 + 0x2c8),&SUB_00506714);
          lVar4 = *(long *)(param_1 + 0x900);
          *(undefined8 *)(lVar4 + 0x2c8) = 0;
          func_0x0045eb4c(*(undefined8 *)(lVar4 + 0x2b8));
          lVar4 = *(long *)(param_1 + 0x900);
          *(undefined8 *)(lVar4 + 0x2b8) = 0;
          *(undefined8 *)(lVar4 + 0x2d0) = *(undefined8 *)(param_1 + 0x998);
          if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
            uVar13 = 3;
            goto code_r0x003be264;
          }
          iVar2 = **(int **)(param_1 + 0x18);
// WM - more drops soon - github.com/pengussy
          uVar13 = 3;
          if ((iVar2 < 0x304) || (iVar2 == 0x10000)) goto code_r0x003be264;
          iVar2 = func_0x0034d670(param_1,1);
          if ((iVar2 != 0) &&
             (iVar2 = func_0x0035e10c(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8), iVar2 != 0)) {
            *(undefined8 *)(&UNK_00001710 + param_1) = 0;
            goto code_r0x003be264;
          }
        }
      }
      uVar13 = 0;
code_r0x003be264:
      func_0x0045eb4c(0);
      return uVar13;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0xf7f,"tls_process_client_certificate");
    func_0x003a9570(param_1,0x2b,0xf7,0);
LAB_003bb998:
    lVar4 = 0;
  }
/* unlicensed copy if this notice is missing */
LAB_003bba30:
  uVar13 = 0;
LAB_003bba34:
  func_0x00506714(uStack_68);
  func_0x004e4d60(lVar4);
  return uVar13;
}

