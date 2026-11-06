/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3a3134:4aec31dabe
   =========================================================================== */

undefined8 FUN_003a3134(long param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_670;
  undefined8 uStack_668;
  long lStack_660;
  long lStack_658;
  undefined8 uStack_650;
  byte bStack_641;
  undefined2 uStack_640;
  undefined2 uStack_63e;
  undefined2 uStack_63c;
  undefined2 *puStack_638;
  undefined1 auStack_62c [1508];
  long lStack_48;
  
/* wm:stripping the watermark breaks the license */
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar14 = *(undefined8 **)(param_1 + 8);
  puStack_638 = (undefined2 *)0x0;
  uStack_63c = 1;
  uStack_640 = 0x20;
  uStack_63e = 1;
  bStack_641 = 0;
  lStack_658 = 0;
  uStack_650 = 0;
  uStack_670 = 0;
  uStack_668 = 0x5e4;
  if (*(int *)(param_1 + 0xc18) == 1) {
    if (*(short *)(param_1 + 0xc20) == -499) {
LAB_003a31a4:
      if (*(int *)(param_1 + 0xc14) == 0) {
        iVar4 = func_0x00348bd8(param_1,&uStack_650,&uStack_670);
        if (iVar4 != 1) {
          func_0x004464bc();
          uVar6 = 0xa44;
          goto LAB_003a37fc;
        }
        *(undefined8 *)(param_1 + 3000) = uStack_650;
        *(undefined8 *)(param_1 + 0xbc0) = uStack_670;
        func_0x0011ab24("encoded inner CH");
        iVar4 = func_0x003488cc(param_1,&puStack_638,&uStack_640);
        if ((iVar4 != 1) || (puStack_638 == (undefined2 *)0x0)) {
          func_0x004464bc();
          uVar6 = 0xa4e;
          goto LAB_003a37fc;
        }
        *(undefined2 *)(param_1 + 0xc20) = *puStack_638;
        bStack_641 = *(byte *)((long)puStack_638 + 0x31);
        if (*(char *)(param_1 + 0x9b4) < '\0') {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          iVar4 = 0x3e9;
          do {
            if (bStack_641 != *(byte *)((long)puStack_638 + 0x31)) {
              func_0x0011ab24("EAAE: random config_id",&bStack_641,1);
              goto LAB_003a342c;
            }
            iVar5 = func_0x004b242c(*puVar14,&bStack_641,1,0);
            if (iVar5 < 1) {
              func_0x004464bc();
              uVar6 = 0xa69;
              goto LAB_003a37fc;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          func_0x004464bc();
          uVar6 = 0xa6d;
          goto LAB_003a37fc;
        }
LAB_003a342c:
        *(uint *)(param_1 + 0xc24) = (uint)bStack_641;
        func_0x0011ab24("EAAE: peer pub",*(undefined8 *)(puStack_638 + 0xc),
/* watermarked copy - do not remove */
                        *(undefined8 *)(puStack_638 + 8));
        func_0x0011ab24("EAAE: clear",uStack_650,uStack_670);
        func_0x0011ab24("EAAE: ECHConfig",*(undefined8 *)(puStack_638 + 0x30),
                        *(undefined8 *)(puStack_638 + 0x2c));
        uVar11 = func_0x00349088(param_1,puStack_638,uStack_670);
        if (uVar11 == 0) {
          func_0x004464bc();
          uVar6 = 0xa86;
          goto LAB_003a37fc;
        }
        lVar7 = func_0x0046a798((ulong)CONCAT24(uStack_63c,CONCAT22(uStack_63e,uStack_640)));
        if (*(long *)(param_1 + 0xc78) == 0) {
          iVar4 = func_0x00347cf8(*(undefined8 *)(puStack_638 + 0x30),
                                  *(undefined8 *)(puStack_638 + 0x2c),auStack_62c,&uStack_668);
          if (iVar4 == 1) {
            func_0x0011ab24("EAAE info",auStack_62c,uStack_668);
            lVar15 = func_0x0046a078(0,(ulong)CONCAT24(uStack_63c,CONCAT22(uStack_63e,uStack_640)),0
                                     ,*puVar14,puVar14[0x91]);
            *(long *)(param_1 + 0xc78) = lVar15;
            if (lVar15 == 0) {
              func_0x004464bc();
              uVar6 = 0xa98;
            }
            else {
              lVar15 = func_0x019eb530(lVar7,
                                       "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                       ,0xa9b);
              if (lVar15 == 0) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
                func_0x004464bc();
                uVar6 = 0xa9d;
              }
              else {
                lStack_660 = lVar7;
                iVar4 = func_0x0046a54c(*(undefined8 *)(param_1 + 0xc78),lVar15,&lStack_660,
                                        *(undefined8 *)(puStack_638 + 0xc),
                                        *(undefined8 *)(puStack_638 + 8),auStack_62c,uStack_668);
                if (iVar4 == 1) {
                  *(long *)(param_1 + 0xc68) = lVar15;
                  *(long *)(param_1 + 0xc70) = lStack_660;
                  goto LAB_003a34ac;
                }
                func_0x004743e4(lVar15,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                ,0xaa4);
                func_0x004464bc();
                uVar6 = 0xaa6;
              }
            }
          }
          else {
            func_0x004464bc();
            uVar6 = 0xa8e;
          }
          goto LAB_003a37fc;
        }
/* wm:more drops soon - github.com/pengussy */
        lVar15 = *(long *)(param_1 + 0xc68);
        lStack_660 = *(long *)(param_1 + 0xc70);
        if ((lVar15 == 0) || (lStack_660 == 0)) {
          func_0x004464bc();
          uVar6 = 0xaaf;
          goto LAB_003a37fc;
        }
LAB_003a34ac:
        func_0x0011ab24("EAAE: mypub",lVar15);
        func_0x019ec1d8(param_2,&lStack_658);
        lVar7 = func_0x004764b4(param_2);
        func_0x0011ab24("EAAE pkt b4",lVar7 - lStack_658);
        uVar13 = func_0x0046c818((ulong)CONCAT24(uStack_63c,CONCAT22(uStack_63e,uStack_640)),uVar11)
        ;
        if ((uVar11 < uVar13) && (uVar13 < 0x5dd)) {
          *(ulong *)(param_1 + 0xbc8) = uVar11;
/*  chat: discord.gg/sdkhDjTex  */
          *(ulong *)(param_1 + 0xbd0) = uVar13;
          iVar4 = func_0x019ec0a0(param_2,0xfe0d,2);
          if ((iVar4 != 0) &&
             ((((iVar4 = func_0x019eba0c(param_2,2), iVar4 != 0 &&
                (iVar4 = func_0x019ec0a0(param_2,0,1), iVar4 != 0)) &&
               (iVar4 = func_0x019ec0a0(param_2,uStack_63e,2), iVar4 != 0)) &&
              ((iVar4 = func_0x019ec0a0(param_2,uStack_63c,2), iVar4 != 0 &&
               (iVar4 = func_0x019ec0a0(param_2,bStack_641,1), iVar4 != 0)))))) {
            if (*(int *)(param_1 + 0x8d0) == 1) {
              iVar4 = func_0x019ec0a0(param_2,0,2);
              if (iVar4 != 0) {
                if (*(int *)(param_1 + 0x8d0) != 1) goto LAB_003a35b4;
                goto LAB_003a35cc;
              }
            }
            else {
LAB_003a35b4:
/* stripping the watermark breaks the license - github.com/pengussy */
              iVar4 = func_0x004766ec(param_2,lVar15,lStack_660,2);
              if (iVar4 != 0) {
LAB_003a35cc:
                iVar4 = func_0x019eba0c(param_2,2);
                if (iVar4 != 0) {
                  plVar9 = (long *)(param_1 + 0xbd8);
                  iVar4 = func_0x019ec1d8(param_2,plVar9);
                  if (iVar4 != 0) {
                    iVar4 = func_0x00476634(param_2,0);
                    param_3 = (int)uVar13;
                    if (((iVar4 != 0) && (iVar4 = func_0x00476494(param_2), iVar4 != 0)) &&
                       (iVar4 = func_0x00476494(param_2), iVar4 != 0)) {
                      *plVar9 = *plVar9 + -4;
                      goto LAB_003a31fc;
                    }
                  }
                }
              }
            }
          }
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          func_0x004464bc();
          uVar6 = 0xace;
          goto LAB_003a37fc;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0xaba,"tls_construct_ctos_ech");
        uVar6 = 0x32;
        param_3 = 0x6e;
      }
      else {
        if (*(int *)(param_1 + 0xc14) != 1) goto LAB_003a3278;
        iVar4 = func_0x019ec0a0(param_2,0xfe0d,2);
        if ((iVar4 != 0) && (iVar4 = func_0x019eba0c(param_2,2), iVar4 != 0)) {
          param_3 = 1;
          iVar4 = func_0x019ec0a0(param_2,1);
// WM - proprietary - see LICENSE - do not sell
          if ((iVar4 != 0) && (iVar4 = func_0x00476494(param_2), iVar4 != 0)) {
LAB_003a31fc:
            uVar6 = 1;
            goto LAB_003a381c;
          }
        }
        func_0x004464bc();
        uVar6 = 0xa33;
LAB_003a37fc:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,uVar6,"tls_construct_ctos_ech");
        uVar6 = 0x50;
        param_3 = 0xc0103;
      }
      func_0x003a9570(param_1,uVar6,param_3,0);
      uVar6 = 0;
    }
    else {
LAB_003a3278:
      uVar6 = 2;
    }
/*  if you paid for this, you were scammed  */
  }
  else {
    if (*(int *)(param_1 + 0xc3c) == 1) {
      sVar3 = *(short *)(param_1 + 0xc20);
      iVar4 = *(int *)(param_1 + 0x8d0);
    }
    else {
      sVar3 = *(short *)(param_1 + 0xc20);
      if ((sVar3 != -499) && ((*(ulong *)(param_1 + 0x9b0) >> 0x25 & 1) == 0)) goto LAB_003a3278;
      if ((*(ulong *)(param_1 + 0x9b0) >> 0x25 & 1) == 0) goto LAB_003a31a4;
      iVar4 = *(int *)(param_1 + 0x8d0);
    }
    if ((iVar4 == 1) && (*(long *)(param_1 + 0xc48) != 0)) {
      param_3 = (int)*(undefined8 *)(param_1 + 0xc50);
      uVar6 = func_0x00476690(param_2,*(long *)(param_1 + 0xc48));
      if ((int)uVar6 != 1) {
        func_0x004464bc();
        uVar6 = 0xa1e;
        goto LAB_003a37fc;
      }
    }
    else {
      if (sVar3 == -1) {
        *(undefined2 *)(param_1 + 0xc20) = 0xfe0d;
      }
      uVar6 = func_0x00348574(param_1);
      if ((int)uVar6 != 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0xa27,"tls_construct_ctos_ech");
        param_3 = 0xc0103;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        uVar6 = 2;
      }
    }
  }
LAB_003a381c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return uVar6;
  }
  auVar16 = ___stack_chk_fail(uVar6);
  plVar9 = auVar16._8_8_;
  lVar7 = auVar16._0_8_;
  uVar11 = plVar9[2];
  if (param_3 == 0x800) {
    if (uVar11 == 8) {
      puVar14 = (undefined8 *)*plVar9;
      *(undefined8 **)(lVar7 + 0xcb0) = puVar14;
      *(undefined8 *)(lVar7 + 0xcb8) = *puVar14;
      return 1;
    }
    func_0x004464bc();
    uVar6 = 0xae7;
  }
  else {
    if (1 < uVar11) {
      puVar12 = (undefined1 *)*plVar9;
      uVar1 = *puVar12;
      uVar2 = puVar12[1];
      uVar13 = (ulong)CONCAT11(uVar1,uVar2);
      if (uVar13 <= uVar11 - 2) {
        *plVar9 = (long)(puVar12 + 2 + uVar13);
        plVar9[2] = (uVar11 - 2) - uVar13;
        func_0x004743e4(*(undefined8 *)(lVar7 + 0xc58),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0xaf6);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        *(undefined8 *)(lVar7 + 0xc58) = 0;
        puVar8 = (undefined1 *)
                 func_0x019eb530(uVar13 + 2,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                 ,0xaf8);
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = uVar1;
          puVar8[1] = uVar2;
          _memcpy(puVar8 + 2,puVar12 + 2,uVar13);
          *(undefined1 **)(lVar7 + 0xc58) = puVar8;
          *(ulong *)(lVar7 + 0xc60) = uVar13 + 2;
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                        ,0xafa,&UNK_01c3a512);
        uVar6 = 0x50;
        puVar10 = &UNK_000c0103;
        goto code_r0x003a38f8;
      }
    }
    func_0x004464bc();
    uVar6 = 0xaf1;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  ,uVar6,&UNK_01c3a512);
  uVar6 = 0x32;
  puVar10 = (undefined *)0x9f;
code_r0x003a38f8:
  func_0x003a9570(lVar7,uVar6,puVar10,0);
  return 0;
}

