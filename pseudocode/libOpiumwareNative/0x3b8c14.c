/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3b8c14:701c88d213
   =========================================================================== */

undefined8 FUN_003b8c14(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined4 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined1 auVar15 [16];
  ulong uStack_2060;
  undefined1 auStack_2058 [8];
  undefined8 auStack_2050 [1025];
  long lStack_48;
  
  auVar15 = (*(code *)PTR____chkstk_darwin_01f201f8)();
  uVar8 = auVar15._8_8_;
  lVar7 = auVar15._0_8_;
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  if (((((*(byte *)(*(long *)(*(int **)(lVar7 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
       (iVar3 = **(int **)(lVar7 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) ||
     (*(int *)(lVar7 + 0x8d0) == 1)) {
/*  more drops soon - github.com/pengussy  */
    bVar2 = true;
    iVar3 = func_0x019ec0a0(uVar8,0x303,2);
    if (iVar3 != 0) goto LAB_003b8cbc;
LAB_003b8d24:
    func_0x004464bc();
    uVar8 = 0xa26;
LAB_003b8e0c:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,uVar8,"tls_construct_server_hello");
    func_0x003a9570(lVar7,0x50,&UNK_000c0103,0);
    uVar5 = 0;
  }
  else {
    bVar2 = false;
    iVar3 = func_0x019ec0a0(uVar8,(long)*(int *)(lVar7 + 0x48),2);
    if (iVar3 == 0) goto LAB_003b8d24;
LAB_003b8cbc:
    puVar1 = &UNK_01ae6ff4;
    if (*(int *)(lVar7 + 0x8d0) != 1) {
      puVar1 = (undefined *)(lVar7 + 0x168);
    }
    iVar3 = func_0x00476690(uVar8,puVar1,0x20);
    if (iVar3 == 0) goto LAB_003b8d24;
    if (((*(byte *)(*(long *)(lVar7 + 8) + 0x50) >> 1 & 1) != 0) || (*(int *)(lVar7 + 0x508) != 0))
    {
      if (bVar2) goto LAB_003b8cfc;
LAB_003b8d4c:
      uVar12 = *(ulong *)(*(long *)(lVar7 + 0x900) + 0x250);
      if (uVar12 < 0x21) {
        lVar14 = *(long *)(lVar7 + 0x900) + 600;
        if (*(int **)(lVar7 + 0x390) != (int *)0x0) {
// origin: github.com/pengussy
          lVar6 = (long)**(int **)(lVar7 + 0x390);
          iVar3 = func_0x004766ec(uVar8,lVar14,uVar12,1);
          goto joined_r0x003b8d94;
        }
        lVar6 = 0;
        iVar3 = func_0x004766ec(uVar8,lVar14,uVar12,1);
        if (iVar3 != 0) goto LAB_003b8db0;
        goto LAB_003b8df4;
      }
LAB_003b8d5c:
      func_0x004464bc();
      uVar8 = 0xa49;
      goto LAB_003b8e0c;
    }
    *(undefined8 *)(*(long *)(lVar7 + 0x900) + 0x250) = 0;
    if (!bVar2) goto LAB_003b8d4c;
LAB_003b8cfc:
    if (0x20 < *(ulong *)(lVar7 + 0x948)) goto LAB_003b8d5c;
    lVar6 = 0;
    iVar3 = func_0x004766ec(uVar8,lVar7 + 0x928,*(ulong *)(lVar7 + 0x948),1);
joined_r0x003b8d94:
    if (iVar3 == 0) {
LAB_003b8df4:
      func_0x004464bc();
      uVar8 = 0xa5b;
      goto LAB_003b8e0c;
    }
LAB_003b8db0:
/* proprietary - see LICENSE - do not sell */
    iVar3 = (**(code **)(*(long *)(lVar7 + 0x18) + 0xb0))
                      (*(undefined8 *)(lVar7 + 0x300),uVar8,auStack_2058);
    if ((iVar3 == 0) || (iVar3 = func_0x019ec0a0(uVar8,lVar6,1), iVar3 == 0)) goto LAB_003b8df4;
    if (*(int *)(lVar7 + 0x8d0) == 1) {
      uVar11 = 0x800;
    }
    else if ((*(byte *)(*(long *)(*(int **)(lVar7 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) {
      iVar3 = **(int **)(lVar7 + 0x18);
      uVar13 = 0x100;
      if (iVar3 != 0x10000) {
        uVar13 = 0x200;
      }
      uVar11 = 0x100;
      if (0x303 < iVar3) {
        uVar11 = uVar13;
      }
    }
    else {
      uVar11 = 0x100;
    }
    uVar5 = func_0x0039c5c8(lVar7,uVar8,uVar11,0,0);
    if ((int)uVar5 != 0) {
      if (*(int *)(lVar7 + 0x8d0) == 1) {
        func_0x00361b60(*(undefined8 *)(lVar7 + 0x900));
        *(undefined8 *)(lVar7 + 0x900) = 0;
/* wm:watermarked copy - do not remove */
        *(undefined4 *)(lVar7 + 0x508) = 0;
        if (((*(int *)(lVar7 + 0xc28) == 1) || (*(int *)(lVar7 + 0xc30) == 1)) &&
           (*(long *)(lVar7 + 0xba8) != 0)) {
          lVar14 = func_0x0044efa4();
          func_0x0011ab24("innerch",*(undefined8 *)(lVar7 + 0xba8),*(undefined8 *)(lVar7 + 0xbb0));
          if (lVar14 == 0) {
            uVar8 = 0xa8e;
          }
          else {
            lVar6 = func_0x003542a0(lVar7);
            if (lVar6 == 0) {
              uVar8 = 0xa94;
            }
            else {
              iVar3 = func_0x019e968c(lVar14,lVar6,0);
              if (((0 < iVar3) &&
                  (iVar3 = func_0x019e969c(lVar14,*(undefined8 *)(lVar7 + 0xba8),
                                           *(undefined8 *)(lVar7 + 0xbb0)), 0 < iVar3)) &&
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                 (iVar3 = func_0x019e9778(lVar14,auStack_2050,&uStack_2060), 0 < iVar3)) {
                func_0x0011ab24("digested CH",auStack_2050,uStack_2060 & 0xffffffff);
                func_0x0044efb8(lVar14);
                iVar3 = func_0x00348fe0(lVar7,0,0);
                if (iVar3 == 1) {
                  uVar12 = uStack_2060 & 0xffffffff;
                  puVar9 = auStack_2050;
                  goto LAB_003b8fc8;
                }
                uVar8 = 0xaa5;
                goto LAB_003b91a4;
              }
              uVar8 = 0xa9d;
            }
            func_0x0044efb8(lVar14);
          }
          goto LAB_003b91a4;
        }
        puVar9 = (undefined8 *)0x0;
        uVar12 = 0;
LAB_003b8fc8:
        uVar5 = func_0x003b6b88(lVar7,puVar9,uVar12,0,0);
        if ((int)uVar5 != 0) goto LAB_003b8fd8;
        goto LAB_003b8e2c;
      }
      if (((*(byte *)(lVar7 + 0x950) & 1) == 0) &&
         (uVar5 = func_0x0034d670(lVar7,0), (int)uVar5 == 0)) goto LAB_003b8e2c;
LAB_003b8fd8:
      if ((*(short *)(lVar7 + 0xc20) == -499) &&
         ((*(int *)(lVar7 + 0xc28) == 1 ||
/*  found on a paste site? it was re-uploaded illegally  */
          ((*(long *)(lVar7 + 0xb60) != 0 && (*(int *)(lVar7 + 0xc30) == 1)))))) {
        uStack_2060 = 0;
        iVar3 = *(int *)(lVar7 + 0x8d0);
        auStack_2050[0] = 0;
        iVar4 = func_0x019ec1d8(uVar8,&uStack_2060);
        if (iVar4 == 1) {
          lVar14 = func_0x004764b4(uVar8);
          lVar14 = lVar14 - uStack_2060;
          *(char *)(lVar14 + 1) = (char)((uint)((int)uStack_2060 + 0xfffffc) >> 0x10);
          *(char *)(lVar14 + 2) = (char)((uint)((int)uStack_2060 + 0xfffc) >> 8);
          *(char *)(lVar14 + 3) = (char)uStack_2060 + -4;
          iVar4 = func_0x0034b4ec(lVar7,lVar14,uStack_2060,iVar3 == 1);
          if (iVar4 == 1) {
            iVar4 = FUN_003499f8(lVar7,iVar3 == 1,auStack_2050,uStack_2060);
            if (iVar4 == 1) {
              *(undefined8 *)(lVar7 + 0x180) = auStack_2050[0];
              if (iVar3 == 1) {
                lVar14 = func_0x004764b4(uVar8);
                *(undefined8 *)(lVar14 + -8) = auStack_2050[0];
              }
              else {
                *(undefined8 *)(lVar14 + 0x1e) = auStack_2050[0];
              }
              goto LAB_003b9108;
            }
            uVar8 = 0xada;
          }
          else {
            uVar8 = 0xad6;
          }
        }
        else {
          uVar8 = 0xacd;
        }
      }
      else {
/* reversing this took months of machine time - github.com/pengussy */
LAB_003b9108:
        if (((*(int *)(lVar7 + 0xc18) != 1) || (*(long *)(lVar7 + 0xb88) == 0)) ||
           (*(int *)(lVar7 + 0x8d0) == 1)) {
LAB_003b9188:
          uVar5 = 1;
          goto LAB_003b8e2c;
        }
        func_0x003ec13c();
        lVar14 = func_0x003e945c();
        if (lVar14 == 0) {
          uVar8 = 0xaf5;
        }
        else {
          _bzero(auStack_2050,&UNK_00002001);
          FUN_00349324(lVar14,lVar7,0xfffffffe);
          func_0x003e9754(lVar14,auStack_2050,0x2000);
          iVar3 = (**(code **)(lVar7 + 0xb88))(lVar7,auStack_2050);
          func_0x003e9468(lVar14);
          if (iVar3 == 1) goto LAB_003b9188;
          uVar8 = 0xaff;
        }
      }
LAB_003b91a4:
      func_0x004464bc();
      goto LAB_003b8e0c;
    }
  }
LAB_003b8e2c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return uVar5;
  }
  auVar15 = ___stack_chk_fail(uVar5);
  uVar8 = auVar15._8_8_;
  lVar7 = auVar15._0_8_;
  lVar14 = *(long *)(lVar7 + 0x3d8);
  if (lVar14 == 0) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    func_0x004464bc();
    pcVar10 = "ystem/Library/Frameworks/GameController.framework/Versions/A/GameController";
  }
  else {
    lVar6 = lVar7;
    if ((((*(byte *)(*(long *)(*(int **)(lVar7 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
        (iVar3 = **(int **)(lVar7 + 0x18), iVar3 < 0x304)) ||
       ((iVar3 == 0x10000 || (lVar6 = func_0x019ec0a0(uVar8,0,1), (int)lVar6 != 0)))) {
      if (*(char *)(lVar7 + 0xb5a) == '\0') {
        lVar7 = func_0x003b4f5c(lVar7,uVar8,lVar14,0);
      }
      else {
        if (*(char *)(lVar7 + 0xb5a) != '\x02') {
          func_0x004464bc(lVar6,uVar8);
          pcVar10 = "ameController.framework/Versions/A/GameController";
          goto code_r0x003b92c8;
        }
        lVar7 = func_0x003b4d04(lVar7,uVar8,lVar14);
      }
      if (lVar7 == 0) {
        return 0;
      }
      return 1;
    }
    func_0x004464bc(lVar6,uVar8);
    pcVar10 = "rary/Frameworks/GameController.framework/Versions/A/GameController";
  }
code_r0x003b92c8:
/* do not claim this as your own */
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                  ,pcVar10,&UNK_01c3b874);
  func_0x003a9570(lVar7,0x50,&UNK_000c0103,0);
  return 0;
}

