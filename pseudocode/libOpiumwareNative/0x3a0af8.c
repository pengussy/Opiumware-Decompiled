/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a0af8:7f77c3efc0
 */

undefined8 FUN_003a0af8(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_80 = 0;
  uStack_78 = 0;
  puVar15 = *(undefined8 **)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xb40) = 0;
  piVar12 = *(int **)(param_1 + 0x900);
  if (*piVar12 != 0x304) {
    return 2;
  }
  if ((*(long *)(piVar12 + 0xcc) == 0) && (*(long *)(param_1 + 0x908) == 0)) {
    return 2;
  }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (*(int *)(param_1 + 0x8d0) != 1) {
    lVar6 = 0;
    if (*(long *)(piVar12 + 0xcc) != 0) goto LAB_003a0b70;
LAB_003a0c08:
    uVar17 = 0;
    iVar5 = 0;
    lVar7 = 0;
    goto LAB_003a0c14;
  }
  lVar6 = func_0x003542a0(param_1);
  piVar12 = *(int **)(param_1 + 0x900);
  if (*(long *)(piVar12 + 0xcc) == 0) goto LAB_003a0c08;
LAB_003a0b70:
  if (*(long *)(piVar12 + 0xbe) == 0) {
    func_0x004464bc();
    uVar10 = 0x50e;
  }
  else {
    lVar7 = func_0x00354280(puVar15,*(undefined4 *)(*(long *)(piVar12 + 0xbe) + 0x40));
    if ((lVar7 == 0) || ((*(int *)(param_1 + 0x8d0) == 1 && (lVar7 != lVar6)))) {
LAB_003a0bf4:
      uVar17 = 0;
      iVar5 = 0;
LAB_003a0c14:
      if (*(long *)(param_1 + 0x908) == 0) {
        return 2;
      }
      bVar2 = true;
    }
/*  do not claim this as your own  */
    else {
      if ((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc14) != 0)) {
        uVar8 = func_0x0048058c();
        lVar13 = *(long *)(param_1 + 0x900);
        uVar17 = 0;
        if (*(ulong *)(lVar13 + 0x2e0) <= uVar8) {
          uVar17 = uVar8 - *(ulong *)(lVar13 + 0x2e0);
        }
        uVar14 = (uint)(uVar17 / 1000000000);
        uVar3 = 0;
        if (uVar14 != 0) {
          uVar3 = uVar14 - 1;
        }
        if (*(ulong *)(lVar13 + 0x338) < (ulong)uVar3) goto LAB_003a0bf4;
        uVar17 = (ulong)uVar3 * 1000;
        if ((uVar14 < 2) || ((uVar17 & 0xffffffff00000000) == 0)) {
          uVar17 = (ulong)(uint)(*(int *)(lVar13 + 0x340) + (int)uVar17);
          iVar5 = func_0x00455f40(lVar7);
          if (0 < iVar5) {
            iVar4 = *(int *)(param_1 + 0xb40) + 1;
            *(int *)(param_1 + 0xb40) = iVar4;
            if ((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc14) != 1)) {
              bVar2 = false;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
            }
            else {
              bVar2 = false;
              *(int *)(param_1 + 0xc2c) = iVar4;
            }
            goto LAB_003a0c20;
          }
        }
        else {
          iVar5 = 0;
        }
        goto LAB_003a0c14;
      }
      *(int *)(param_1 + 0xb40) = *(int *)(param_1 + 0xc2c);
      if (*(int *)(param_1 + 0xc2c) < 1) goto LAB_003a0bf4;
      uVar17 = 0;
      iVar5 = 0;
      bVar2 = false;
    }
LAB_003a0c20:
    if (*(long *)(param_1 + 0x908) != 0) {
      lVar13 = func_0x00354280(puVar15,*(undefined4 *)
                                        (*(long *)(*(long *)(param_1 + 0x908) + 0x2f8) + 0x40));
      if (lVar13 == 0) {
        func_0x004464bc();
        uVar10 = 0x575;
      }
      else if ((*(int *)(param_1 + 0x8d0) == 1) && (lVar13 != lVar6)) {
        func_0x004464bc();
        uVar10 = 0x57e;
      }
      else {
        uVar3 = func_0x00455f40(lVar13);
        if (0 < (int)uVar3) goto LAB_003a0cd0;
        func_0x004464bc();
/*  donate: donate/README.md  */
        uVar10 = 0x584;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                      ,uVar10,"tls_construct_ctos_psk");
      puVar11 = (undefined *)0xdb;
      goto LAB_003a0f20;
    }
    uVar3 = 0;
    lVar13 = 0;
LAB_003a0cd0:
    iVar4 = func_0x019ec0a0(param_2,0x29,2);
    if (((iVar4 == 0) || (iVar4 = func_0x019eba0c(param_2,2), iVar4 == 0)) ||
       (iVar4 = func_0x019eba0c(param_2,2), iVar4 == 0)) {
      func_0x004464bc();
      uVar10 = 0x58d;
    }
    else if ((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc14) != 0)) {
      if ((bVar2) ||
         ((iVar4 = func_0x004766ec(param_2,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x328),
                                   *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x330),2),
          iVar4 != 0 && (iVar4 = func_0x019ec0a0(param_2,uVar17 & 0xffffffff,4), iVar4 != 0)))) {
        if (*(long *)(param_1 + 0x908) != 0) {
          iVar4 = func_0x004766ec(param_2,*(undefined8 *)(param_1 + 0x910),
                                  *(undefined8 *)(param_1 + 0x918),2);
          if ((iVar4 == 0) || (iVar4 = func_0x019ec0a0(param_2,0,4), iVar4 == 0)) {
            func_0x004464bc();
            uVar10 = 0x5e0;
            goto LAB_003a0ebc;
          }
          *(int *)(param_1 + 0xb40) = *(int *)(param_1 + 0xb40) + 1;
        }
        iVar4 = func_0x00476494(param_2);
        if (((((iVar4 != 0) && (iVar4 = func_0x019ec1d8(param_2,&uStack_68), iVar4 != 0)) &&
             (iVar4 = func_0x019eba0c(param_2,2), iVar4 != 0)) &&
            (((bVar2 || (iVar5 = func_0x004763b0(param_2,(long)iVar5,&uStack_78,1), iVar5 != 0)) &&
/* WM - chat: discord.gg/sdkhDjTex */
             ((*(long *)(param_1 + 0x908) == 0 ||
              (iVar5 = func_0x004763b0(param_2,uVar3,&uStack_80,1), iVar5 != 0)))))) &&
           (((iVar5 = func_0x00476494(param_2), iVar5 != 0 &&
             (iVar5 = func_0x00476494(param_2), iVar5 != 0)) &&
            ((iVar5 = func_0x019ec1d8(param_2,&lStack_70), iVar5 != 0 &&
             (iVar5 = func_0x019ebd70(param_2), iVar5 != 0)))))) {
          lVar6 = func_0x004764b4(param_2);
          if ((!bVar2) &&
             (iVar5 = FUN_0039ca34(param_1,lVar7,lVar6 - lStack_70,uStack_68,0,uStack_78,
                                   *(undefined8 *)(param_1 + 0x900),1,0), iVar5 != 1)) {
            return 0;
          }
          if (*(long *)(param_1 + 0x908) == 0) {
            return 1;
          }
          iVar5 = FUN_0039ca34(param_1,lVar13,lVar6 - lStack_70,uStack_68,0,uStack_80,
                               *(long *)(param_1 + 0x908),1,1);
          if (iVar5 == 1) {
            return 1;
          }
          return 0;
        }
        func_0x004464bc();
        uVar10 = 0x5f5;
      }
      else {
        func_0x004464bc();
        uVar10 = 0x5d7;
      }
    }
    else {
      lVar6 = (long)iVar5 + (ulong)uVar3 + *(long *)(param_1 + 0x918) +
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
              *(long *)(*(long *)(param_1 + 0x900) + 0x330);
      puVar9 = (undefined4 *)
               func_0x019eb530(lVar6 + 4,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                               ,0x5a1);
      if (puVar9 == (undefined4 *)0x0) {
        func_0x004464bc();
        uVar10 = 0x5a3;
      }
      else {
        iVar4 = func_0x004b242c(*puVar15,puVar9,lVar6 + 4,0);
        if (0 < iVar4) {
          puVar16 = puVar9 + 1;
          uVar1 = *puVar9;
          if (!bVar2) {
            iVar4 = func_0x004766ec(param_2,puVar16,
                                    *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x330),2);
            if ((iVar4 == 0) || (iVar4 = func_0x019ec0a0(param_2,uVar1,4), iVar4 == 0)) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                              ,0x5b4,"tls_construct_ctos_psk");
              func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
              uVar10 = 0x5b5;
/* WM - if you paid for this, you were scammed */
              goto LAB_003a1298;
            }
            puVar16 = (undefined4 *)((long)puVar16 + *(long *)(*(long *)(param_1 + 0x900) + 0x330));
          }
          if (*(long *)(param_1 + 0x908) != 0) {
            iVar4 = func_0x004766ec(param_2,puVar16,*(undefined8 *)(param_1 + 0x918),2);
            if ((iVar4 == 0) || (iVar4 = func_0x019ec0a0(param_2,0,4), iVar4 == 0)) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                              ,0x5bd,"tls_construct_ctos_psk");
              func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
              uVar10 = 0x5be;
              goto LAB_003a1298;
            }
            puVar16 = (undefined4 *)((long)puVar16 + *(long *)(param_1 + 0x918));
          }
          iVar4 = func_0x00476494(param_2);
          if ((((iVar4 != 0) && (iVar4 = func_0x019eba0c(param_2,2), iVar4 != 0)) &&
              ((bVar2 || (iVar5 = func_0x004766ec(param_2,puVar16,(long)iVar5,1), iVar5 != 0)))) &&
             ((((*(long *)(param_1 + 0x908) == 0 ||
                (iVar5 = func_0x004766ec(param_2,puVar16,(ulong)uVar3,1), iVar5 != 0)) &&
               (iVar5 = func_0x00476494(param_2), iVar5 != 0)) &&
              (iVar5 = func_0x00476494(param_2), iVar5 != 0)))) {
            func_0x004743e4(puVar9,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                            ,0x5cf);
            return 1;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                          ,0x5cb,"tls_construct_ctos_psk");
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
          uVar10 = 0x5cc;
LAB_003a1298:
          func_0x004743e4(puVar9,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                          ,uVar10);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          return 0;
        }
        func_0x004743e4(puVar9,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0x5a8);
        func_0x004464bc();
        uVar10 = 0x5a9;
      }
    }
  }
LAB_003a0ebc:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar10,"tls_construct_ctos_psk");
  puVar11 = &UNK_000c0103;
LAB_003a0f20:
  func_0x003a9570(param_1,0x50,puVar11,0);
  return 0;
}

