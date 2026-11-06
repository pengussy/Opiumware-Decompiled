/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b327c:d0d0db18c6
 */

/* WARNING: Possible PIC construction at 0x003b3308: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003b330c) */
/* WARNING: Removing unreachable block (ram,0x003b348c) */
/* WARNING: Removing unreachable block (ram,0x003b3310) */
/* WARNING: Removing unreachable block (ram,0x003b3320) */
/* WARNING: Removing unreachable block (ram,0x003b35d8) */
/* WARNING: Removing unreachable block (ram,0x003b3334) */
/* WARNING: Removing unreachable block (ram,0x003b3358) */
/* WARNING: Removing unreachable block (ram,0x003b3390) */
/* WARNING: Removing unreachable block (ram,0x003b3494) */
/* WARNING: Removing unreachable block (ram,0x003b33b4) */
/* WARNING: Removing unreachable block (ram,0x003b3498) */
/* WARNING: Removing unreachable block (ram,0x003b35bc) */
/* WARNING: Removing unreachable block (ram,0x003b34bc) */
/* WARNING: Removing unreachable block (ram,0x003b34c8) */
/* WARNING: Removing unreachable block (ram,0x003b34dc) */
/* WARNING: Removing unreachable block (ram,0x003b3608) */
/* WARNING: Removing unreachable block (ram,0x003b34f0) */
/* WARNING: Removing unreachable block (ram,0x003b3660) */
/* WARNING: Removing unreachable block (ram,0x003b3514) */
/* WARNING: Removing unreachable block (ram,0x003b3530) */
/* WARNING: Removing unreachable block (ram,0x003b3624) */
/* WARNING: Removing unreachable block (ram,0x003b3550) */
/* WARNING: Removing unreachable block (ram,0x003b3560) */
/* WARNING: Removing unreachable block (ram,0x003b3568) */
/* WARNING: Removing unreachable block (ram,0x003b3578) */
/* WARNING: Removing unreachable block (ram,0x003b369c) */
/* WARNING: Removing unreachable block (ram,0x003b3650) */
/* WARNING: Removing unreachable block (ram,0x003b3590) */
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
/* WARNING: Removing unreachable block (ram,0x003b3658) */
/* WARNING: Removing unreachable block (ram,0x003b35a0) */

undefined8 FUN_003b327c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x21;
  long lVar10;
  long *plVar11;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  long lStack_210;
  undefined8 uStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined *puStack_1e8;
  char acStack_1b0 [8];
  undefined8 uStack_1a8;
  long alStack_1a0 [18];
  undefined8 auStack_10a [20];
  undefined8 uStack_68;
  
  lVar8 = (long)auStack_10a + 0xfa;
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  alStack_1a0[1] = 0;
  alStack_1a0[2] = 0;
  uStack_1a8 = 0;
  alStack_1a0[0] = 0;
  lVar10 = *(long *)(param_1 + 0x3d0);
/* do not claim this as your own */
  if ((lVar10 == 0) || (*(long *)(param_1 + 0x3d8) == 0)) {
    func_0x004464bc();
    uVar4 = 0x149;
    param_2 = unaff_x21;
LAB_003b33f4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,uVar4,"tls_construct_cert_verify");
    plVar7 = (long *)0x0;
    func_0x003a9570(param_1,0x50,&UNK_000c0103);
    lVar3 = 0;
  }
  else {
    unaff_x23 = *(long *)(*(long *)(param_1 + 0x3d8) + 8);
    if (unaff_x23 == 0) {
LAB_003b33dc:
      func_0x004464bc();
      uVar4 = 0x14f;
      param_2 = unaff_x21;
      goto LAB_003b33f4;
    }
    unaff_x24 = *(undefined8 *)(param_1 + 8);
    iVar2 = func_0x00365c28(unaff_x24,lVar10,alStack_1a0 + 2);
    unaff_x21 = param_2;
    if (iVar2 == 0) goto LAB_003b33dc;
    lVar3 = func_0x0044efa4();
    if (lVar3 != 0) {
      puVar5 = auStack_10a;
      pcVar6 = acStack_1b0;
      plVar7 = alStack_1a0;
// origin: github.com/pengussy
      puVar12 = (undefined *)0x3b330c;
      lVar9 = param_1;
      goto code_r0x003b36d0;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,0x155,"tls_construct_cert_verify");
    plVar7 = (long *)0x0;
    func_0x003a9570(param_1,0x50,&UNK_00080006);
  }
  pcVar6 = section_000001a8.sectname + 1;
  func_0x004743e4(0,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                 );
  lVar9 = 0;
  func_0x0044efb8(lVar3);
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
    return 0;
  }
/* donate: donate/README.md */
  puVar12 = &SUB_003b36d0;
  auVar15 = ___stack_chk_fail();
  puVar5 = auVar15._8_8_;
  param_1 = auVar15._0_8_;
code_r0x003b36d0:
  uStack_220 = unaff_x24;
  lStack_218 = unaff_x23;
  lStack_210 = lVar10;
  uStack_208 = param_2;
  lStack_200 = lVar9;
  lStack_1f8 = lVar3;
  lStack_1f0 = lVar8;
  puStack_1e8 = puVar12;
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
      (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
    lVar8 = func_0x003e95bc(*(undefined8 *)(param_1 + 0x1a8),3,0,pcVar6);
    if (lVar8 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                      ,0x131,&UNK_01c3b587);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    *plVar7 = lVar8;
    return 1;
  }
  puVar5[5] = 0x2020202020202020;
  puVar5[4] = 0x2020202020202020;
  puVar5[7] = 0x2020202020202020;
  puVar5[6] = 0x2020202020202020;
  puVar5[1] = 0x2020202020202020;
  *puVar5 = 0x2020202020202020;
  puVar5[3] = 0x2020202020202020;
  puVar5[2] = 0x2020202020202020;
  puVar1 = (undefined8 *)&UNK_01ae715c;
  if (1 < *(int *)(param_1 + 0xac) - 0x2bU) {
    puVar1 = (undefined8 *)&UNK_01ae717e;
  }
  uVar4 = *puVar1;
  uVar14 = puVar1[3];
  uVar13 = puVar1[2];
  puVar5[9] = puVar1[1];
  puVar5[8] = uVar4;
  puVar5[0xb] = uVar14;
  puVar5[10] = uVar13;
  *(undefined2 *)(puVar5 + 0xc) = *(undefined2 *)(puVar1 + 4);
  if ((*(int *)(param_1 + 0xac) == 0x2b) || (*(int *)(param_1 + 0xac) == 0x21)) {
    plVar11 = (long *)(param_1 + 0x8c8);
    _memcpy((long)puVar5 + 0x62,param_1 + 0x888,*(undefined8 *)(param_1 + 0x8c8));
  }
  else {
    plVar11 = &lStack_228;
    uVar4 = func_0x0035e10c(param_1,(long)puVar5 + 0x62,0x40,&lStack_228);
    if ((int)uVar4 == 0) {
/* reversing this took months of machine time - github.com/pengussy */
      return uVar4;
    }
  }
  lVar8 = *plVar11;
  *(undefined8 **)pcVar6 = puVar5;
  *plVar7 = lVar8 + 0x62;
  return 1;
}

