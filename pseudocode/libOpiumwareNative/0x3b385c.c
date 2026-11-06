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
 *  file-id: 0x3b385c:f23d29a552
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x003b3950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003b3954) */

long FUN_003b385c(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
/* wm:stripping the watermark breaks the license */
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [5];
  undefined1 auStack_10a [162];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_198 = 0;
  lStack_190 = 0;
  lVar3 = func_0x0044efa4();
  uStack_1a8 = 0;
  if (lVar3 == 0) {
    func_0x004464bc();
    uVar5 = 0x1c2;
LAB_003b3930:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,uVar5,"tls_process_cert_verify");
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    uVar5 = 0x50;
    puVar6 = &UNK_00080006;
LAB_003b3bfc:
    func_0x003a9570(param_1,uVar5,puVar6,0);
LAB_003b3c04:
    lVar4 = 0;
    lVar8 = 0;
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 8);
    lVar8 = *(long *)(*(long *)(param_1 + 0x900) + 0x2b8);
    if (lVar8 == 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x900) + 0x2c0);
      if (lVar8 != 0) goto code_r0x004fa268;
      func_0x004464bc();
      uVar5 = 0x1c8;
LAB_003b3b80:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
/* WM - donate: donate/README.md */
                      ,uVar5,"tls_process_cert_verify");
      uVar5 = 0x50;
      puVar6 = &UNK_000c0103;
      goto LAB_003b3bfc;
    }
    lVar4 = func_0x00353890(lVar8,0,puVar9);
    if (lVar4 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x1ce,"tls_process_cert_verify");
      uVar5 = 0x2f;
      puVar6 = (undefined *)0xdc;
      goto LAB_003b3bfc;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
      if ((ulong)param_2[2] < 2) {
        func_0x004464bc();
/* wm:donate: donate/README.md */
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x1d6,"tls_process_cert_verify");
        uVar5 = 0x32;
        puVar6 = (undefined *)0xf0;
        goto LAB_003b3bfc;
      }
      uVar1 = *(ushort *)*param_2;
      *param_2 = (long)((ushort *)*param_2 + 1);
      param_2[2] = param_2[2] - 2;
      iVar2 = func_0x0036601c(param_1,uVar1 >> 8 | uVar1 << 8,lVar8);
      if (0 < iVar2) goto LAB_003b3a0c;
      goto LAB_003b3c04;
    }
    iVar2 = func_0x00365c7c(param_1,lVar8);
    if (iVar2 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x1df,"tls_process_cert_verify");
      uVar5 = 0x50;
      puVar6 = (undefined *)0x14d;
      goto LAB_003b3bfc;
    }
LAB_003b3a0c:
    iVar2 = func_0x00365c28(puVar9,*(undefined8 *)(param_1 + 0x400),&lStack_190);
    if (iVar2 == 0) {
      func_0x004464bc();
      uVar5 = 0x1e4;
      goto LAB_003b3b80;
/* WM - stripping the watermark breaks the license */
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
LAB_003b3b40:
      uVar10 = param_2[2] - 2;
      if (1 < (ulong)param_2[2]) {
        uVar1 = *(ushort *)*param_2;
        *param_2 = (long)((ushort *)*param_2 + 1);
        param_2[2] = uVar10;
        uVar7 = (ulong)((uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8);
        if (uVar10 < uVar7) goto LAB_003b3bb8;
        goto LAB_003b3a8c;
      }
      func_0x004464bc();
      uVar5 = 0x1fc;
LAB_003b3bec:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,uVar5,"tls_process_cert_verify");
      uVar5 = 0x32;
      puVar6 = (undefined *)0x9f;
      goto LAB_003b3bfc;
    }
/*  proprietary - see LICENSE - do not sell  */
    lVar4 = param_2[2];
    if (lVar4 == 0x40) {
      iVar2 = func_0x003ddb7c(lVar8);
      if ((iVar2 != 0x32b) && (iVar2 = func_0x003ddb7c(lVar8), iVar2 != 0x3d3)) {
        lVar4 = param_2[2];
        goto LAB_003b3a60;
      }
    }
    else {
LAB_003b3a60:
      if ((lVar4 != 0x80) || (iVar2 = func_0x003ddb7c(lVar8), iVar2 != 0x3d4)) goto LAB_003b3b40;
    }
    uVar10 = param_2[2];
    uVar7 = uVar10 & 0xffffffff;
    if (uVar10 < uVar7) {
LAB_003b3bb8:
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      func_0x004464bc();
      uVar5 = 0x201;
      goto LAB_003b3bec;
    }
LAB_003b3a8c:
    lVar4 = *param_2;
    *param_2 = lVar4 + uVar7;
    param_2[2] = uVar10 - uVar7;
    if (uVar10 - uVar7 != 0) {
      func_0x004464bc();
      uVar5 = 0x205;
      goto LAB_003b3bec;
    }
    iVar2 = func_0x003b36d0(param_1,auStack_10a,&uStack_1a0,&uStack_198);
    if (iVar2 == 0) goto LAB_003b3c04;
    puVar11 = &uStack_160;
    func_0x00477f7c(auStack_188,"tls-version",param_1 + 0x48);
    if (lStack_190 != 0) {
      puVar11 = auStack_138;
      uVar5 = func_0x00455ed0();
      func_0x0047992c(&uStack_1d0,"digest",uVar5,0);
      uStack_158 = uStack_1c8;
      uStack_160 = uStack_1d0;
      uStack_148 = uStack_1b8;
      uStack_150 = uStack_1c0;
      uStack_140 = uStack_1b0;
    }
    func_0x00479f78(&uStack_1d0);
    puVar11[1] = uStack_1c8;
    *puVar11 = uStack_1d0;
    puVar11[3] = uStack_1b8;
    puVar11[2] = uStack_1c0;
// keep the notice, keep the source honest
    puVar11[4] = uStack_1b0;
    if (lStack_190 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = func_0x00455ed0();
    }
    iVar2 = func_0x0045b92c(lVar3,&uStack_1a8,uVar5,*puVar9,puVar9[0x91],lVar8,auStack_188);
    if (iVar2 < 1) {
      func_0x004464bc();
      uVar5 = 0x21f;
      goto LAB_003b3930;
    }
    iVar2 = func_0x003ddb7c(lVar8);
    if ((iVar2 - 0x3d3U < 2) || (iVar2 == 0x32b)) {
      lVar8 = func_0x019eb530(uVar10,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                              ,0x228);
      if (lVar8 != 0) {
        func_0x00400700(lVar8,lVar4,uVar10);
        lVar4 = lVar8;
        goto LAB_003b3d10;
      }
      lVar4 = 0;
    }
    else {
      lVar8 = 0;
LAB_003b3d10:
      if (((*(long *)(param_1 + 0x400) == 0) ||
          (*(int *)(*(long *)(param_1 + 0x400) + 0x1c) != 0x390)) ||
         ((iVar2 = func_0x004bb9d0(uStack_1a8,6), 0 < iVar2 &&
          (iVar2 = func_0x004bbaa0(uStack_1a8,0xffffffff), 0 < iVar2)))) {
        iVar2 = func_0x0045c204(lVar3,lVar4,uVar10,uStack_1a0,uStack_198);
        if (0 < iVar2) {
          if ((((*(int *)(param_1 + 0x78) == 0) &&
               ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0)) &&
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
              (iVar2 = **(int **)(param_1 + 0x18), 0x303 < iVar2)) &&
             ((iVar2 != 0x10000 && (*(int *)(param_1 + 0x340) == 1)))) {
            lVar4 = 2;
          }
          else {
            lVar4 = 3;
          }
          goto LAB_003b3c0c;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x241,"tls_process_cert_verify");
        uVar5 = 0x33;
        puVar6 = (undefined *)0x7b;
      }
      else {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                        ,0x235,"tls_process_cert_verify");
        uVar5 = 0x50;
        puVar6 = &UNK_00080006;
      }
      func_0x003a9570(param_1,uVar5,puVar6,0);
      lVar4 = 0;
    }
  }
LAB_003b3c0c:
  func_0x003e9468(*(undefined8 *)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  func_0x0044efb8(lVar3);
  func_0x004743e4(lVar8,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,0x256);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
// do not claim this as your own
    return lVar4;
  }
  lVar8 = ___stack_chk_fail();
  lVar3 = *(long *)(*(long *)(lVar8 + 0x900) + 0x2b8);
  if (lVar3 == 0) {
    lVar8 = *(long *)(*(long *)(lVar8 + 0x900) + 0x2c0);
    lVar3 = 0;
    if (lVar8 != 0) {
code_r0x004fa268:
      if (lVar8 == 0) {
        return 0;
      }
      if (*(long *)(lVar8 + 0x50) == 0) {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c63609,0x1c0,&UNK_01c63690);
        func_0x004466b0(0xb,&UNK_000c0102,0);
        return 0;
      }
      lVar3 = *(long *)(*(long *)(lVar8 + 0x50) + 0x10);
      if (lVar3 == 0) {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c63609,0x1c6,&UNK_01c63690);
        func_0x004466b0(6,0x72,0);
        return 0;
      }
      return lVar3;
    }
  }
  return lVar3;
}

