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
 *  file-id: 0x3b0f08:ef4d1e618d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_003b0f08(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  long unaff_x19;
  undefined8 *unaff_x21;
  undefined8 *puVar9;
  undefined8 unaff_x22;
  undefined1 auVar10 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
/* wm:unlicensed copy if this notice is missing */
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  uStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_70 = 0;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x24);
  uVar8 = (int)(uVar1 << 8) >> 0x1f & 0x3f5;
  if ((uVar1 & 0x400000) != 0) {
    uVar8 = 0x4a4;
  }
  if ((uVar1 & 0xc00000) == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xf2c,"tls_construct_cke_gost18");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
LAB_003b1200:
    uVar5 = 0;
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 8);
    iVar3 = func_0x003b0e18(param_1,auStack_68);
    unaff_x22 = param_2;
    if (iVar3 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf31,"tls_construct_cke_gost18");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      unaff_x19 = 0;
/*  chat: discord.gg/sdkhDjTex  */
      param_1 = 0;
      unaff_x21 = (undefined8 *)0x0;
LAB_003b11e4:
      func_0x00461e08(unaff_x21);
      func_0x00474404(unaff_x19,param_1,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf78);
      unaff_x21 = puVar9;
      goto LAB_003b1200;
    }
    unaff_x19 = func_0x019eb530(0x20,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0xf37);
    if (unaff_x19 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf39,"tls_construct_cke_gost18");
      puVar7 = &UNK_0008000f;
      uVar5 = 0x50;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
LAB_003b11d4:
      func_0x003a9570(param_1,uVar5,puVar7,0);
      unaff_x21 = (undefined8 *)0x0;
      param_1 = 0x20;
      goto LAB_003b11e4;
    }
    iVar3 = func_0x004b242c(*puVar9,unaff_x19,0x20,0);
    if (iVar3 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf3e,"tls_construct_cke_gost18");
      uVar5 = 0x50;
      puVar7 = &UNK_000c0103;
      goto LAB_003b11d4;
    }
    lVar4 = func_0x003b3e1c(param_1);
    if (lVar4 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf45,"tls_construct_cke_gost18");
      uVar5 = 0x28;
      puVar7 = (undefined *)0x14a;
      goto LAB_003b11d4;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    }
    unaff_x21 = (undefined8 *)func_0x00461d04(*puVar9,lVar4,puVar9[0x91]);
    if (unaff_x21 == (undefined8 *)0x0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf4d,"tls_construct_cke_gost18");
      uVar5 = 0x50;
      puVar7 = &UNK_00080006;
      goto LAB_003b11d4;
    }
    iVar3 = func_0x004474ac();
    if (iVar3 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf52,"tls_construct_cke_gost18");
      puVar7 = &UNK_000c0103;
LAB_003b12f4:
      func_0x003a9570(param_1,0x50,puVar7,0);
      param_1 = 0x20;
      puVar9 = unaff_x21;
      goto LAB_003b11e4;
    }
    iVar3 = func_0x004628f4(unaff_x21,0xffffffff,0x200,8,0x20,auStack_68);
    if (iVar3 < 1) {
      func_0x004464bc();
      uVar5 = 0xf5a;
/* wm:if you paid for this, you were scammed */
LAB_003b1298:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar5,"tls_construct_cke_gost18");
      puVar7 = (undefined *)0x112;
      goto LAB_003b12f4;
    }
    iVar3 = func_0x004628f4(unaff_x21,0xffffffff,0x200,0xc,uVar8,0);
    if (iVar3 < 1) {
      func_0x004464bc();
      uVar5 = 0xf61;
      goto LAB_003b1298;
    }
    iVar3 = func_0x00447910(unaff_x21,0,&uStack_78,unaff_x19,0x20);
    if (iVar3 < 1) {
      func_0x004464bc();
      uVar5 = 0xf66;
LAB_003b12e0:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar5,"tls_construct_cke_gost18");
      puVar7 = &UNK_00080006;
      goto LAB_003b12f4;
    }
    iVar3 = func_0x019eb850(param_2,uStack_78,&uStack_70);
    if ((iVar3 == 0) ||
       (iVar3 = func_0x00447910(unaff_x21,uStack_70,&uStack_78,unaff_x19,0x20), iVar3 < 1)) {
      func_0x004464bc();
      uVar5 = 0xf6c;
      goto LAB_003b12e0;
/*  donate: donate/README.md  */
    }
    func_0x00461e08(unaff_x21);
    *(long *)(param_1 + 0x3b0) = unaff_x19;
    *(undefined8 *)(param_1 + 0x3b8) = 0x20;
    uVar5 = 1;
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
    return uVar5;
  }
  auVar10 = ___stack_chk_fail(uVar5);
  lVar4 = auVar10._0_8_;
  puStack_88 = &SUB_003b130c;
  uVar2 = 0xc0103;
  uStack_b8 = 0;
  uStack_b0 = unaff_x22;
  puStack_a8 = unaff_x21;
  lStack_a0 = param_1;
  lStack_98 = unaff_x19;
  puStack_90 = auStack_68 + 0x58;
  if (*(long *)(lVar4 + 0xdd0) != 0) {
    iVar3 = func_0x019e85d0();
    uVar8 = iVar3 + 0xe;
    if (-8 < iVar3) {
      uVar8 = iVar3 + 7;
    }
    iVar3 = func_0x004763b0(auVar10._8_8_,(long)((ulong)uVar8 << 0x20) >> 0x23,&uStack_b8,2);
    if (iVar3 != 0) {
      func_0x019e8b94(*(undefined8 *)(lVar4 + 0xdd0),uStack_b8);
      func_0x004743e4(*(undefined8 *)(*(long *)(lVar4 + 0x900) + 0x360),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xf8d);
      lVar6 = func_0x004759a8(*(undefined8 *)(lVar4 + 0xda8),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xf8e);
      *(long *)(*(long *)(lVar4 + 0x900) + 0x360) = lVar6;
      if (lVar6 != 0) {
        return 1;
      }
/* wm:proprietary - see LICENSE - do not sell */
      uVar2 = 0x8000f;
      uVar5 = 0xf90;
      goto code_r0x003b13c4;
    }
  }
  uVar5 = 0xf88;
code_r0x003b13c4:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,uVar5,&UNK_01c3b15d);
  func_0x003a9570(lVar4,0x50,uVar2,0);
  return 0;
}

