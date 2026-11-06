/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3acb1c:518ded2439
 */

/* WARNING: Possible PIC construction at 0x003b3950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003b46b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003ae520: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003ae5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003ae6e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003ae5dc) */
/* WARNING: Removing unreachable block (ram,0x003ae524) */
/* WARNING: Removing unreachable block (ram,0x003b46b8) */
/* WARNING: Removing unreachable block (ram,0x003b3954) */
/* WARNING: Removing unreachable block (ram,0x003ae6ec) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_003acb1c(long param_1,long *param_2)

{
  ushort *puVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  byte **ppbVar9;
  long *plVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
/* do not claim this as your own */
  undefined8 extraout_x1;
  ulong uVar18;
  undefined4 uVar19;
  undefined *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  ulong uVar23;
  int *piVar24;
  code *pcVar25;
  ushort *puVar26;
  ushort *puVar27;
  uint *puVar28;
  uint *puVar29;
  long unaff_x19;
  ulong unaff_x20;
  byte *unaff_x21;
  ulong uVar30;
  long lVar31;
  ulong unaff_x22;
  undefined8 *puVar32;
  ulong uVar33;
  int iVar34;
  long unaff_x23;
  undefined8 *puVar35;
  long lVar36;
  undefined8 unaff_x24;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ulong uVar37;
  ulong unaff_x25;
  uint uVar38;
  ulong unaff_x26;
  ushort *puVar39;
  long unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined1 auStack_188 [40];
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [5];
  undefined1 auStack_10a [74];
// WM - chat: discord.gg/sdkhDjTex
  byte *pbStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  byte *pbStack_90;
  ushort *puStack_88;
  ushort *puStack_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  auVar41._8_8_ = param_2;
  auVar41._0_8_ = param_1;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 2:
    uVar33 = param_2[2];
    if (1 < uVar33) {
      lVar15 = *param_2;
      pbVar14 = (byte *)(lVar15 + 2);
      *param_2 = (long)pbVar14;
      param_2[2] = uVar33 - 2;
/* WM - chat: discord.gg/sdkhDjTex */
      if (uVar33 - 2 != 0) {
        uVar23 = (ulong)*pbVar14;
        if (uVar23 <= uVar33 - 3) {
          lVar15 = lVar15 + 3;
          *param_2 = lVar15 + uVar23;
          param_2[2] = (uVar33 - 3) - uVar23;
          _memcpy(*(undefined8 *)(param_1 + 0x4f0),lVar15,uVar23);
          *(ulong *)(*(long *)(param_1 + 0x4f0) + 0x100) = uVar23;
          return 1;
        }
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x653,"dtls_process_hello_verify");
    uVar17 = 0x32;
    puVar20 = (undefined *)0x9f;
    goto LAB_003acd94;
  case 3:
    ppbVar9 = &pbStack_c0;
    unaff_x29 = (long)register0x00000008 + -0x10;
    uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
    lStack_98 = 0;
    unaff_x24 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = 0xff;
    uStack_70 = 0;
    lStack_a8 = 0;
// keep the notice, keep the source honest
    unaff_x26 = param_2[2];
    if (unaff_x26 < 2) {
      func_0x004464bc();
      uVar17 = 0x6d7;
      goto code_r0x003acfd8;
    }
    puVar39 = (ushort *)*param_2;
    puVar26 = puVar39 + 1;
    uVar12 = (uint)(*puVar39 >> 8) | (*puVar39 & 0xff00ff) << 8;
    unaff_x25 = (ulong)uVar12;
    *param_2 = (long)puVar26;
    uVar33 = unaff_x26 - 2;
    param_2[2] = uVar33;
    if ((*(int *)(param_1 + 0x48) == 0x304) && (uVar12 == 0x303)) {
      if (0x1f < uVar33) {
        if (((_UNK_01ae6ff4 != *(long *)puVar26 || _UNK_01ae6ffc != *(long *)(puVar39 + 5)) ||
            _UNK_01ae7004 != *(long *)(puVar39 + 9)) || _UNK_01ae700c != *(long *)(puVar39 + 0xd))
        goto code_r0x003acf80;
        if (*(int *)(param_1 + 0x8d0) != 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x6e1,&UNK_01c3ad81);
          uVar17 = 10;
          puVar20 = (undefined *)0xf4;
          goto code_r0x003acfe8;
        }
        *(undefined4 *)(param_1 + 0x8d0) = 1;
        iVar13 = func_0x019e6c78(param_1,0x304);
        if (iVar13 != 0) {
          uVar33 = param_2[2];
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
          if (uVar33 < 0x20) {
            func_0x004464bc();
            uVar17 = 0x6ec;
            goto code_r0x003acfd8;
          }
          pbVar14 = (byte *)(*param_2 + 0x20);
          *param_2 = (long)pbVar14;
          unaff_x23 = 1;
          uVar17 = 1;
          param_2[2] = uVar33 - 0x20;
          if (uVar33 - 0x20 != 0) goto code_r0x003acfb0;
          goto code_r0x003acfc0;
        }
        func_0x004464bc();
        uVar17 = 0x6e7;
        goto code_r0x003ad170;
      }
code_r0x003acf64:
      func_0x004464bc();
      uVar17 = 0x6f1;
code_r0x003acfd8:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar17,&UNK_01c3ad81);
      uVar17 = 0x32;
      puVar20 = (undefined *)0x9f;
code_r0x003acfe8:
      func_0x003a9570(param_1,uVar17,puVar20,0);
// WM - watermarked copy - do not remove
code_r0x003acff0:
      unaff_x20 = 0;
      uVar17 = 0x8a6;
    }
    else {
      if (uVar33 < 0x20) goto code_r0x003acf64;
code_r0x003acf80:
      unaff_x23 = 0;
      uVar17 = 0;
      lVar15 = *(long *)puVar26;
      uVar40 = *(undefined8 *)(puVar39 + 0xd);
      uVar22 = *(undefined8 *)(puVar39 + 9);
      *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(puVar39 + 5);
      *(long *)(param_1 + 0x168) = lVar15;
      *(undefined8 *)(param_1 + 0x180) = uVar40;
      *(undefined8 *)(param_1 + 0x178) = uVar22;
      pbVar14 = (byte *)(*param_2 + 0x20);
      *param_2 = (long)pbVar14;
      uVar33 = param_2[2];
      param_2[2] = uVar33 - 0x20;
      if (uVar33 - 0x20 == 0) {
code_r0x003acfc0:
        func_0x004464bc();
        uVar17 = 0x6f8;
        goto code_r0x003acfd8;
      }
code_r0x003acfb0:
      bVar4 = *pbVar14;
      unaff_x22 = (ulong)bVar4;
      uVar23 = (uVar33 - 0x21) - unaff_x22;
      if (uVar33 - 0x21 < unaff_x22) goto code_r0x003acfc0;
      pbVar14 = pbVar14 + 1;
      unaff_x21 = pbVar14 + unaff_x22;
      *param_2 = (long)unaff_x21;
/* wm:origin: github.com/pengussy */
      param_2[2] = uVar23;
      if (0x20 < bVar4) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x6fe,&UNK_01c3ad81);
        uVar17 = 0x2f;
        puVar20 = (undefined *)0x12c;
        goto code_r0x003acfe8;
      }
      if (uVar23 < 2) {
        func_0x004464bc();
        uVar17 = 0x703;
        goto code_r0x003acfd8;
      }
      *param_2 = (long)(unaff_x21 + 2);
      param_2[2] = uVar23 - 2;
      if (uVar23 - 2 == 0) {
        func_0x004464bc();
        uVar17 = 0x708;
        goto code_r0x003acfd8;
      }
      bVar5 = unaff_x21[2];
      *param_2 = (long)(unaff_x21 + 3);
      uVar33 = uVar23 - 3;
      param_2[2] = uVar33;
      iVar34 = (int)unaff_x23;
      iVar13 = iVar34;
      if (uVar33 != 0) {
        iVar13 = 1;
      }
      if (iVar13 == 0) {
        pbStack_90 = (byte *)0x0;
        puStack_88 = (ushort *)0x0;
        puStack_80 = (ushort *)0x0;
      }
// do not claim this as your own
      else {
        if ((uVar33 < 2) ||
           (puVar26 = (ushort *)
                      (ulong)((uint)(*(ushort *)(unaff_x21 + 3) >> 8) |
                             (*(ushort *)(unaff_x21 + 3) & 0xff00ff) << 8),
           (ushort *)(uVar23 - 5) != puVar26)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x711,&UNK_01c3ad81);
          uVar17 = 0x32;
          puVar20 = (undefined *)0x10f;
          goto code_r0x003acfe8;
        }
        puStack_88 = (ushort *)param_2[1];
        pbStack_90 = unaff_x21 + 5;
        *param_2 = (long)(pbStack_90 + (long)puVar26);
        param_2[2] = 0;
        puStack_80 = puVar26;
      }
      uStack_b8 = (uint)bVar5;
      pbStack_c0 = pbVar14;
      if (iVar34 != 0) {
        iVar13 = func_0x0039bb1c(param_1,&pbStack_90,0x800,&lStack_98,0,1);
        if ((iVar13 != 0) &&
           (iVar13 = func_0x0039c300(param_1,0x1b,0x800,lStack_98,0,0), iVar13 != 0))
        goto code_r0x003ad260;
        goto code_r0x003acff0;
      }
      iVar13 = func_0x0039bb1c(param_1,&pbStack_90,0x300,&lStack_98,0,1);
      if (iVar13 == 0) goto code_r0x003acff0;
code_r0x003ad260:
/*  no support for modified copies  */
      if ((((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc1c) == 1)) ||
          (*(int *)(param_1 + 0xc14) != 0)) ||
         ((*(int *)(param_1 + 0xc3c) != 0 || (*(short *)(param_1 + 0xc20) != -499))))
      goto code_r0x003ad464;
      iVar13 = func_0x003b0470(param_1,unaff_x21);
      uVar33 = uStack_a0;
      if (iVar13 == 0) goto code_r0x003acff0;
      if (*(int *)(param_1 + 0xc18) == 1) {
        uStack_a0._4_4_ = SUB84(uVar33,4);
        uStack_a0._0_4_ =
             CONCAT13((char)unaff_x26,
                      CONCAT12((char)(unaff_x26 >> 8),CONCAT11((char)(unaff_x26 >> 0x10),2)));
        iVar13 = func_0x0034b4ec(param_1,&uStack_a0,4,uVar17);
        if ((iVar13 != 1) || (iVar13 = func_0x0034b4ec(param_1,puVar39,unaff_x26,0), iVar13 != 1)) {
          func_0x004464bc();
          uVar17 = 0x742;
          goto code_r0x003ad170;
        }
      }
      iVar13 = FUN_003499f8(param_1,uVar17,&uStack_70,unaff_x26);
      if (iVar13 != 1) goto code_r0x003acff0;
      iVar13 = func_0x00348fa4(param_1,uVar17,&uStack_78);
      if ((iVar13 != 1) || (uStack_78 != uStack_70)) {
        func_0x0011ab24(&UNK_01c3ad9a,&uStack_70,8);
        func_0x0011ab24(&UNK_01c3adb1,&uStack_78,8);
        *(undefined4 *)(param_1 + 0xc30) = 0;
        if ((iVar34 == 0) && (*(long *)(param_1 + 0xcb0) != 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
// WM - if you paid for this, you were scammed
                          ,0x773,&UNK_01c3ad81);
          uVar17 = 0x2f;
          puVar20 = (undefined *)0x1a8;
          goto code_r0x003acfe8;
        }
        *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(param_1 + 0xa20);
        *(undefined8 *)(param_1 + 0xa20) = 0;
        if (*(long *)(param_1 + 0xb70) == 0) {
code_r0x003ad464:
          if (unaff_x23 == 0) goto code_r0x003ad468;
          goto code_r0x003ad47c;
        }
        lVar15 = func_0x004759a8(*(long *)(param_1 + 0xb70),
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                 ,0x77b);
        *(long *)(param_1 + 0xa20) = lVar15;
        if (lVar15 == 0) {
          func_0x004464bc();
          uVar17 = 0x77d;
        }
        else {
          iVar13 = func_0x003598bc(param_1,*(undefined8 *)(param_1 + 0xb70));
          if (iVar13 == 1) goto code_r0x003ad464;
          func_0x004464bc();
          uVar17 = 0x781;
        }
code_r0x003ad170:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar17,&UNK_01c3ad81);
        uVar17 = 0x50;
        puVar20 = &UNK_000c0103;
        goto code_r0x003acfe8;
      }
      *(undefined4 *)(param_1 + 0xc30) = 1;
      if (iVar34 == 0) {
        iVar13 = func_0x00349638(param_1);
        if (((iVar13 != 1) || (iVar13 = func_0x00349e88(param_1,&lStack_a8,&uStack_a0), iVar13 != 1)
/* wm:donate: donate/README.md */
            ) || (iVar13 = func_0x00348fe0(param_1,lStack_a8,uStack_a0), iVar13 != 1)) {
          func_0x004464bc();
          uVar17 = 0x762;
          goto code_r0x003ad170;
        }
code_r0x003ad468:
        iVar13 = func_0x003b6508(param_1,unaff_x25,lStack_98);
        if (iVar13 == 0) goto code_r0x003acff0;
      }
code_r0x003ad47c:
      piVar24 = *(int **)(param_1 + 0x18);
      uVar12 = *(uint *)(*(long *)(piVar24 + 0x36) + 0x50);
      unaff_x25 = (ulong)uVar12;
      if (((uVar12 >> 3 & 1) == 0) && (0x303 < *piVar24)) {
        iVar13 = iVar34;
        if (*piVar24 != 0x10000) {
          iVar13 = 1;
        }
        if (iVar13 != 0) {
code_r0x003ad4ac:
          if (uStack_b8 == 0) {
/*  more drops soon - github.com/pengussy  */
            if ((*(ulong *)(param_1 + 0x948) == unaff_x22) &&
               (iVar13 = _memcmp(pbStack_c0,param_1 + 0x928,unaff_x22), iVar13 == 0))
            goto code_r0x003ad52c;
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x79b,&UNK_01c3ad81);
            uVar17 = 0x2f;
            puVar20 = (undefined *)0x3e7;
          }
          else {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x793,&UNK_01c3ad81);
            uVar17 = 0x2f;
            puVar20 = (undefined *)0x155;
          }
          goto code_r0x003acfe8;
        }
code_r0x003ad52c:
        if (iVar34 == 0) goto code_r0x003ad558;
        iVar13 = func_0x003b0470(param_1,unaff_x21);
        if (iVar13 == 0) goto code_r0x003acff0;
        unaff_x20 = func_0x003b06b0(param_1,lStack_98);
        uVar17 = 0x7a9;
        goto code_r0x003acff8;
      }
      if (iVar34 != 0) goto code_r0x003ad4ac;
code_r0x003ad558:
      if ((uVar12 >> 3 & 1) == 0) {
        uVar12 = 0x100;
        if (*piVar24 != 0x10000) {
          uVar12 = 0x200;
        }
        uVar2 = 0x100;
        if (0x303 < *piVar24) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          uVar2 = uVar12;
        }
        unaff_x25 = (ulong)uVar2;
      }
      else {
        unaff_x25 = 0x100;
      }
      iVar13 = func_0x019e7138(param_1,unaff_x25,lStack_98);
      if (iVar13 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x7b5,&UNK_01c3ad81);
        uVar17 = 0x2f;
        puVar20 = (undefined *)0x6e;
        goto code_r0x003acfe8;
      }
      *(undefined4 *)(param_1 + 0x508) = 0;
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
          (iVar13 = **(int **)(param_1 + 0x18), 0x303 < iVar13)) && (iVar13 != 0x10000)) {
        iVar13 = func_0x00393d54(param_1 + 0xe10);
        if (iVar13 == 0) {
          iVar13 = func_0x0039c300(param_1,0x1e,0x200,lStack_98,0,0);
          if (iVar13 == 0) goto code_r0x003acff0;
          goto code_r0x003ad6f4;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x7c2,&UNK_01c3ad81);
        uVar17 = 10;
        puVar20 = (undefined *)0xb6;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        goto code_r0x003acfe8;
      }
      if (((0x300 < *(int *)(param_1 + 0x48)) && (*(code **)(param_1 + 0xae8) != (code *)0x0)) &&
         (*(long *)(*(long *)(param_1 + 0x900) + 0x328) != 0)) {
        lStack_b0 = 0;
        uStack_b4 = 0x200;
        iVar13 = (**(code **)(param_1 + 0xae8))
                           (unaff_x24,*(long *)(param_1 + 0x900) + 0x50,&uStack_b4,0,&lStack_b0,
                            *(undefined8 *)(param_1 + 0xaf0));
        if ((iVar13 == 0) || ((int)uStack_b4 < 1)) {
          func_0x004464bc();
          uVar17 = 0x7ec;
          goto code_r0x003ad170;
        }
        lVar31 = *(long *)(param_1 + 0x900);
        *(ulong *)(lVar31 + 8) = (ulong)uStack_b4;
        lVar15 = lStack_b0;
        if (lStack_b0 == 0) {
          lVar15 = func_0x00355fa4(param_1,unaff_x21,0);
          lVar31 = *(long *)(param_1 + 0x900);
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        }
        *(long *)(lVar31 + 0x2f8) = lVar15;
      }
      if (((bVar4 == 0) ||
          (piVar24 = *(int **)(param_1 + 0x900), *(ulong *)(piVar24 + 0x94) != unaff_x22)) ||
         (iVar13 = _memcmp(pbStack_c0,piVar24 + 0x96,unaff_x22), iVar13 != 0)) {
code_r0x003ad6f4:
        piVar24 = *(int **)(param_1 + 0x900);
        if (*(int *)(param_1 + 0x508) != 0) goto code_r0x003ad700;
        if (*(long *)(piVar24 + 0x94) != 0) {
          piVar24 = (int *)(*(long *)(param_1 + 0xd40) + 0x90);
          iVar13 = *piVar24;
          *piVar24 = iVar13 + 1;
          iVar13 = func_0x0036194c(CONCAT44((int)((ulong)piVar24 >> 0x20),iVar13),param_1,0);
          if (iVar13 == 0) goto code_r0x003acff0;
          piVar24 = *(int **)(param_1 + 0x900);
        }
        *piVar24 = *(int *)(param_1 + 0x48);
        if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
             (iVar13 = **(int **)(param_1 + 0x18), iVar13 < 0x304)) || (iVar13 == 0x10000)) &&
           (*(ulong *)(piVar24 + 0x94) = unaff_x22, bVar4 != 0)) {
          _memcpy(piVar24 + 0x96,pbStack_c0,unaff_x22);
          piVar24 = *(int **)(param_1 + 0x900);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x508) = 1;
code_r0x003ad700:
        if ((*(long *)(param_1 + 0x8d8) != *(long *)(piVar24 + 0x9e)) ||
           (iVar13 = _memcmp(piVar24 + 0xa0,param_1 + 0x8e0), iVar13 != 0)) {
          func_0x004464bc();
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x7fe,&UNK_01c3ad81);
          uVar17 = 0x2f;
          puVar20 = (undefined *)0x110;
          goto code_r0x003acfe8;
        }
      }
      iVar13 = *(int *)(param_1 + 0x48);
      if (iVar13 != *piVar24) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x824,&UNK_01c3ad81);
        uVar17 = 0x46;
        puVar20 = (undefined *)0xd2;
        goto code_r0x003acfe8;
      }
      *(int *)(param_1 + 0x418) = iVar13;
      *(int *)(param_1 + 0x41c) = iVar13;
      iVar13 = func_0x003b0470(param_1,unaff_x21);
      if (iVar13 == 0) goto code_r0x003acff0;
      if ((*(int *)(param_1 + 0x508) != 0) &&
         (*(uint *)(*(long *)(param_1 + 0x900) + 0x2f0) != uStack_b8)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x844,&UNK_01c3ad81);
// WM - no support for modified copies
        uVar17 = 0x2f;
        puVar20 = (undefined *)0x158;
        goto code_r0x003acfe8;
      }
      if (uStack_b8 != 0) {
        iVar13 = func_0x003b59e8(param_1);
        if (iVar13 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x84a,&UNK_01c3ad81);
          uVar17 = 0x2f;
          puVar20 = (undefined *)0x157;
        }
        else {
          lVar15 = func_0x00355f48(*(undefined8 *)(*(long *)(param_1 + 8) + 0x118),uStack_b8);
          if (lVar15 != 0) goto code_r0x003ad8cc;
          func_0x004464bc();
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x853,&UNK_01c3ad81);
          uVar17 = 0x2f;
          puVar20 = (undefined *)0x101;
        }
        goto code_r0x003acfe8;
      }
      lVar15 = 0;
code_r0x003ad8cc:
      *(long *)(param_1 + 0x390) = lVar15;
      iVar13 = func_0x0039c418(param_1,unaff_x25,lStack_98,0,0,1);
      if (iVar13 == 0) goto code_r0x003acff0;
      puVar32 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
      if ((*(byte *)(puVar32 + 10) >> 3 & 1) == 0) {
        iVar13 = **(int **)(param_1 + 0x18);
        unaff_x20 = 3;
        uVar17 = 0x8a3;
        if ((0x303 < iVar13) && (iVar13 != 0x10000)) {
          iVar13 = (*(code *)*puVar32)(param_1,extraout_x1,0x8a3);
          if (((iVar13 == 0) || (iVar13 = func_0x0036cc5c(param_1), iVar13 == 0)) ||
             (((((*(byte *)(param_1 + 0x161) >> 5 & 1) != 0 ||
                ((*(int *)(param_1 + 0xf0) == 0 && ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) == 0))))
               && (iVar13 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))
                                      (param_1,0x92), iVar13 == 0)) ||
              (iVar13 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))
                                  (param_1,0x91), iVar13 == 0)))) goto code_r0x003acff0;
          uVar17 = 0x8a3;
        }
      }
      else {
        unaff_x20 = 3;
        uVar17 = 0x8a3;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
      }
    }
code_r0x003acff8:
    func_0x004743e4(lStack_98,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar17);
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
      return unaff_x20;
    }
    unaff_x30 = &LAB_003ada04;
    auVar41 = ___stack_chk_fail();
    break;
  case 4:
    ppbVar9 = (byte **)register0x00000008;
    param_1 = unaff_x19;
    break;
  default:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x447,"ossl_statem_client_process_message");
    uVar17 = 0x50;
    puVar20 = &UNK_000c0103;
LAB_003acd94:
    func_0x003a9570(param_1,uVar17,puVar20,0);
    return 0;
  case 6:
    iVar13 = func_0x003b098c(param_1,0);
    uVar12 = 0;
    if (iVar13 != 0) {
      uVar12 = 3;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    }
    return (ulong)uVar12;
  case 7:
    plVar10 = &lStack_b0;
    uStack_70 = 0;
    puVar32 = *(undefined8 **)(param_1 + 8);
    uVar12 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
    lVar15 = *param_2;
    uVar33 = param_2[2];
    func_0x0045eb4c(*(undefined8 *)(param_1 + 0x4e0));
    *(undefined8 *)(param_1 + 0x4e0) = 0;
    if ((uVar12 & 0x1c8) == 0) goto LAB_003ae064;
    uVar23 = param_2[2] - 2;
    if ((ulong)param_2[2] < 2) {
LAB_003adf10:
      func_0x004464bc();
      pcVar21 = "tls_process_ske_psk_preamble";
      uVar17 = 0xa17;
LAB_003adf28:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar17,pcVar21);
      uVar17 = 0x32;
      puVar20 = (undefined *)0x9f;
LAB_003adf38:
      func_0x003a9570(param_1,uVar17,puVar20,0);
/* wm:watermarked copy - do not remove */
LAB_003adf40:
      lVar16 = 0;
LAB_003adf44:
      func_0x0044efb8(lVar16);
      return 0;
    }
    uVar7 = *(ushort *)*param_2;
    uVar30 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
    if (uVar23 < uVar30) goto LAB_003adf10;
    puVar26 = (ushort *)*param_2 + 1;
    *param_2 = (long)puVar26 + uVar30;
    param_2[2] = uVar23 - uVar30;
    if (0x100 < uVar30) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xa22,"tls_process_ske_psk_preamble");
      uVar17 = 0x28;
      puVar20 = (undefined *)0x92;
      goto LAB_003adf38;
    }
    lVar31 = *(long *)(param_1 + 0x900);
    uVar17 = *(undefined8 *)(lVar31 + 0x2a0);
/* WM - reversing this took months of machine time */
    if (uVar30 == 0) {
      func_0x004743e4(uVar17,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xa27);
      *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a0) = 0;
    }
    else {
      func_0x004743e4(uVar17,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                      ,0x204);
      lVar16 = func_0x00475a10(puVar26,uVar30,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                               ,0x207);
      *(long *)(lVar31 + 0x2a0) = lVar16;
      if (lVar16 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xa2b,"tls_process_ske_psk_preamble");
        uVar17 = 0x50;
        puVar20 = &UNK_000c0103;
        goto LAB_003adf38;
      }
    }
LAB_003ae064:
    if ((uVar12 & 0x48) != 0) {
LAB_003ae070:
      if ((uVar12 & 0x1c8) == 0 && (*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & 0x44) == 0) {
        iVar13 = func_0x003b07f4(param_1);
        if (iVar13 == 0) goto LAB_003adf40;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* WM - stripping the watermark breaks the license */
                        ,0xb8b,"tls_process_key_exchange");
        uVar17 = 0x32;
        puVar20 = (undefined *)0x186;
      }
      else {
        if (param_2[2] == 0) {
          return 3;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xb92,"tls_process_key_exchange");
        uVar17 = 0x32;
        puVar20 = (undefined *)0x99;
      }
      goto LAB_003adf38;
    }
    if ((uVar12 >> 5 & 1) != 0) {
      uVar33 = param_2[2] - 2;
      if (1 < (ulong)param_2[2]) {
        uVar7 = *(ushort *)*param_2;
        uVar30 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
        uVar23 = uVar33 - uVar30;
        if (uVar30 <= uVar33) {
          puVar26 = (ushort *)*param_2 + 1;
          puVar39 = (ushort *)((long)puVar26 + uVar30);
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
          *param_2 = (long)puVar39;
          param_2[2] = uVar23;
          if ((1 < uVar23) &&
             (uVar33 = (ulong)((uint)(*puVar39 >> 8) | (*puVar39 & 0xff00ff) << 8),
             uVar33 <= uVar23 - 2)) {
            pbVar14 = (byte *)((long)(puVar39 + 1) + uVar33);
            *param_2 = (long)pbVar14;
            lVar15 = (uVar23 - 2) - uVar33;
            param_2[2] = lVar15;
            if (lVar15 != 0) {
              uVar18 = (ulong)*pbVar14;
              uVar23 = (lVar15 - 1U) - uVar18;
              if (uVar18 <= lVar15 - 1U) {
                puVar1 = (ushort *)(pbVar14 + 1 + uVar18);
                *param_2 = (long)puVar1;
                param_2[2] = uVar23;
                if (1 < uVar23) {
                  puVar27 = (ushort *)(ulong)((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8);
                  if (puVar27 <= (ushort *)(uVar23 - 2)) {
                    *param_2 = (long)((long)(puVar1 + 1) + (long)puVar27);
                    param_2[2] = (long)(uVar23 - 2) - (long)puVar27;
                    puStack_88 = puVar1 + 1;
                    puStack_80 = puVar27;
                    lVar15 = func_0x003f8c78(puVar26,uVar30,0);
                    *(long *)(param_1 + 0xdb0) = lVar15;
// found on a paste site? it was re-uploaded illegally
                    if (lVar15 == 0) {
LAB_003ae6f4:
                      func_0x004464bc();
                      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                      ,0xa4f,"tls_process_ske_srp");
                      puVar20 = &UNK_00080003;
                      uVar17 = 0x50;
                      goto LAB_003adf38;
                    }
                    lVar15 = func_0x003f8c78(puVar39 + 1,uVar33,0);
                    *(long *)(param_1 + 0xdb8) = lVar15;
                    if (lVar15 == 0) goto LAB_003ae6f4;
                    lVar15 = func_0x003f8c78(pbVar14 + 1,uVar18,0);
                    *(long *)(param_1 + 0xdc0) = lVar15;
                    if (lVar15 == 0) goto LAB_003ae6f4;
                    lVar15 = func_0x003f8c78(puStack_88,puStack_80,0);
                    *(long *)(param_1 + 0xdc8) = lVar15;
                    if (lVar15 == 0) goto LAB_003ae6f4;
                    iVar13 = func_0x0036e798(param_1);
/* WM - proprietary - see LICENSE - do not sell */
                    if (iVar13 != 0) {
                      if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 3) != 0) {
                        puVar20 = (undefined *)0x3ae6ec;
                        goto code_r0x003b3e1c;
                      }
                      goto LAB_003ae070;
                    }
                    goto LAB_003adf40;
                  }
                }
              }
            }
          }
        }
      }
      func_0x004464bc();
      pcVar21 = "tls_process_ske_srp";
      uVar17 = 0xa3f;
      goto LAB_003adf28;
    }
    if ((uVar12 & 0x102) != 0) {
      uStack_68 = 0;
      uVar23 = param_2[2] - 2;
      if ((ulong)param_2[2] < 2) {
LAB_003ae148:
        func_0x004464bc();
        pcVar21 = "tls_process_ske_dhe";
        uVar17 = 0xa71;
        goto LAB_003adf28;
      }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      uVar7 = *(ushort *)*param_2;
      uVar18 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
      uVar30 = uVar23 - uVar18;
      if (uVar23 < uVar18) goto LAB_003ae148;
      puVar35 = *(undefined8 **)(param_1 + 8);
      puVar26 = (ushort *)*param_2 + 1;
      puVar39 = (ushort *)((long)puVar26 + uVar18);
      *param_2 = (long)puVar39;
      param_2[2] = uVar30;
      if (uVar30 < 2) goto LAB_003ae148;
      uVar37 = (ulong)((uint)(*puVar39 >> 8) | (*puVar39 & 0xff00ff) << 8);
      uVar23 = (uVar30 - 2) - uVar37;
      if (uVar30 - 2 < uVar37) goto LAB_003ae148;
      puVar1 = (ushort *)((long)(puVar39 + 1) + uVar37);
      *param_2 = (long)puVar1;
      param_2[2] = uVar23;
      if (uVar23 < 2) goto LAB_003ae148;
      uVar30 = (ulong)((uint)(*puVar1 >> 8) | (*puVar1 & 0xff00ff) << 8);
      if (uVar23 - 2 < uVar30) goto LAB_003ae148;
      *param_2 = (long)((long)(puVar1 + 1) + uVar30);
      param_2[2] = (uVar23 - 2) - uVar30;
      puStack_88 = puVar1 + 1;
      puStack_80 = (ushort *)func_0x003f8c78(puVar26,uVar18,0);
      pbVar14 = (byte *)func_0x003f8c78(puVar39 + 1,uVar37,0);
      lVar31 = func_0x003f8c78(puStack_88,uVar30,0);
      lStack_98 = lVar31;
      pbStack_90 = pbVar14;
      if ((puStack_80 == (ushort *)0x0) || (pbVar14 == (byte *)0x0 || lVar31 == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xa7b,"tls_process_ske_dhe");
        func_0x003a9570(param_1,0x50,&UNK_00080003,0);
        lVar16 = 0;
LAB_003ae620:
        uVar23 = 0;
        lVar31 = 0;
        bVar11 = true;
/* keep the notice, keep the source honest */
      }
      else {
        lVar16 = func_0x004769a4();
        if ((((lVar16 == 0) ||
             (iVar13 = func_0x00476cf4(lVar16,&UNK_01c358bb,puStack_80), iVar13 == 0)) ||
            (iVar13 = func_0x00476cf4(lVar16,&UNK_01c358bd,pbVar14), iVar13 == 0)) ||
           ((iVar13 = func_0x00476cf4(lVar16,&UNK_01c3b0b0,lVar31), iVar13 == 0 ||
            (lStack_a8 = func_0x004774c0(lVar16), lStack_a8 == 0)))) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xa86,"tls_process_ske_dhe");
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
          goto LAB_003ae620;
        }
        uStack_a0 = func_0x00461a3c(*puVar35,&UNK_01c31873,puVar35[0x91]);
        if (uStack_a0 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xa8c,"tls_process_ske_dhe");
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
          uVar23 = 0;
          bVar11 = true;
          lVar31 = lStack_a8;
/* WM - found on a paste site? it was re-uploaded illegally */
        }
        else {
          iVar13 = func_0x004617c8(uStack_a0);
          if ((iVar13 < 1) ||
             (iVar13 = func_0x0046184c(uStack_a0,&uStack_68,0x87,lStack_a8), iVar13 < 1)) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xa91,"tls_process_ske_dhe");
            uVar17 = 0x50;
LAB_003ae998:
            uVar22 = 0x66;
LAB_003ae99c:
            func_0x003a9570(param_1,uVar17,uVar22,0);
            bVar11 = true;
          }
          else {
            func_0x00461e08(uStack_a0);
            uStack_a0 = func_0x00461d04(*puVar35,uStack_68,puVar35[0x91]);
            if (((uStack_a0 == 0) || (iVar13 = func_0x004612e8(uStack_a0), iVar13 != 1)) ||
               (iVar13 = func_0x004610c0(uStack_a0), iVar13 != 1)) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xaa0,"tls_process_ske_dhe");
              uVar17 = 0x2f;
              goto LAB_003ae998;
            }
            uVar17 = func_0x0045e378(uStack_68);
            iVar13 = func_0x0035370c(param_1,&UNK_00040007,uVar17,0,uStack_68);
/* wm:proprietary - see LICENSE - do not sell */
            if (iVar13 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xaa7,"tls_process_ske_dhe");
              uVar17 = 0x28;
              uVar22 = 0x18a;
              goto LAB_003ae99c;
            }
            *(long *)(param_1 + 0x4e0) = uStack_68;
            uStack_68 = 0;
            if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 3) != 0) {
              puVar20 = (undefined *)0x3ae524;
              plVar10 = &lStack_b0;
              goto code_r0x003b3e1c;
            }
            bVar11 = false;
          }
          lVar31 = lStack_a8;
          uVar23 = uStack_a0;
        }
      }
      puStack_88 = (ushort *)0x0;
/* WM - unlicensed copy if this notice is missing */
      func_0x00476a18(lVar16);
      func_0x0047a514(lVar31);
      func_0x0045eb4c(uStack_68);
      func_0x00461e08(uVar23);
      func_0x003f8aa8(puStack_80);
      func_0x003f8aa8(pbStack_90);
      func_0x003f8aa8(lStack_98);
      if (!bVar11) {
LAB_003ae764:
        if (puStack_88 == (ushort *)0x0) goto LAB_003ae070;
        uStack_68 = 0;
        uVar23 = param_2[2];
        lVar31 = uVar33 - uVar23;
        if ((uVar33 < uVar23) || (lVar31 < 0)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xb3a,"tls_process_key_exchange");
          uVar17 = 0x32;
          puVar20 = &UNK_000c0103;
          goto LAB_003adf38;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) == 0) {
          iVar13 = func_0x00365c7c(param_1,puStack_88);
          if (iVar13 != 0) goto LAB_003ae84c;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xb4b,"tls_process_key_exchange");
          uVar17 = 0x50;
          puVar20 = (undefined *)0x14d;
          goto LAB_003adf38;
        }
        if (1 < uVar23) {
          uVar7 = *(ushort *)*param_2;
          *param_2 = (long)((ushort *)*param_2 + 1);
          param_2[2] = uVar23 - 2;
          iVar13 = func_0x0036601c(param_1,uVar7 >> 8 | uVar7 << 8);
          if (iVar13 < 1) goto LAB_003adf40;
LAB_003ae84c:
          iVar13 = func_0x00365c28(puVar32,*(undefined8 *)(param_1 + 0x400),&uStack_68);
          if (iVar13 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xb51,"tls_process_key_exchange");
/* WM - keep the notice, keep the source honest */
            uVar17 = 0x50;
            puVar20 = (undefined *)0x129;
            goto LAB_003adf38;
          }
          uVar33 = param_2[2] - 2;
          if (1 < (ulong)param_2[2]) {
            uVar7 = *(ushort *)*param_2;
            uVar23 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
            if (uVar23 <= uVar33) {
              puVar26 = (ushort *)*param_2 + 1;
              *param_2 = (long)puVar26 + uVar23;
              lVar16 = uVar33 - uVar23;
              param_2[2] = lVar16;
              if (lVar16 == 0) {
                lVar16 = func_0x0044efa4();
                if (lVar16 == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xb60,"tls_process_key_exchange");
                  uVar17 = 0x50;
                  puVar20 = &UNK_00080006;
                  goto LAB_003adf38;
                }
                if (uStack_68 == 0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = func_0x00455ed0();
                }
/*  if you paid for this, you were scammed  */
                iVar13 = func_0x0045b92c(lVar16,&uStack_70,uVar17,*puVar32,puVar32[0x91],puStack_88,
                                         0);
                if (iVar13 < 1) {
                  func_0x004464bc();
                  uVar17 = 0xb69;
LAB_003aeae4:
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,uVar17,"tls_process_key_exchange");
                  uVar17 = 0x50;
                  puVar20 = &UNK_00080006;
                }
                else {
                  if (((*(long *)(param_1 + 0x400) != 0) &&
                      (*(int *)(*(long *)(param_1 + 0x400) + 0x1c) == 0x390)) &&
                     ((iVar13 = func_0x004bb9d0(uStack_70,6), iVar13 < 1 ||
                      (iVar13 = func_0x004bbaa0(uStack_70,0xffffffff), iVar13 < 1)))) {
                    func_0x004464bc();
                    uVar17 = 0xb71;
                    goto LAB_003aeae4;
                  }
                  lVar15 = func_0x003b70c0(param_1,&uStack_78,lVar15,lVar31);
                  if (lVar15 == 0) goto LAB_003adf44;
                  iVar13 = func_0x0045c204(lVar16,puVar26,uVar23,uStack_78,lVar15);
                  func_0x004743e4(uStack_78,
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xb7e);
                  if (0 < iVar13) {
                    func_0x0044efb8(lVar16);
                    return 3;
                  }
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xb80,"tls_process_key_exchange");
                  uVar17 = 0x33;
                  puVar20 = (undefined *)0x7b;
                }
                func_0x003a9570(param_1,uVar17,puVar20,0);
                goto LAB_003adf44;
              }
            }
          }
          func_0x004464bc();
          pcVar21 = "tls_process_key_exchange";
          uVar17 = 0xb5a;
          goto LAB_003adf28;
        }
        func_0x004464bc();
        pcVar21 = "tls_process_key_exchange";
        uVar17 = 0xb42;
        goto LAB_003ae2a4;
      }
      goto LAB_003adf40;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    }
    if ((uVar12 & 0x84) == 0) {
      if (uVar12 != 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xb28,"tls_process_key_exchange");
        uVar17 = 10;
        puVar20 = (undefined *)0xf4;
        goto LAB_003adf38;
      }
      goto LAB_003ae070;
    }
    uVar23 = param_2[2];
    if (uVar23 == 0) {
LAB_003ae28c:
      func_0x004464bc();
      pcVar21 = "tls_process_ske_ecdhe";
      uVar17 = 0xacf;
LAB_003ae2a4:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar17,pcVar21);
      uVar17 = 0x32;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      puVar20 = (undefined *)0xa0;
      goto LAB_003adf38;
    }
    pcVar21 = (char *)*param_2;
    cVar3 = *pcVar21;
    *param_2 = (long)(pcVar21 + 1);
    param_2[2] = uVar23 - 1;
    if (uVar23 < 3) goto LAB_003ae28c;
    uVar7 = *(ushort *)(pcVar21 + 1);
    *param_2 = (long)(pcVar21 + 3);
    param_2[2] = uVar23 - 3;
    if (cVar3 != '\x03') {
LAB_003ae368:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xad8,"tls_process_ske_ecdhe");
      uVar17 = 0x2f;
      puVar20 = (undefined *)0x17a;
      goto LAB_003adf38;
    }
/* WM - no support for modified copies */
    uVar2 = (uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8;
    iVar13 = func_0x0036549c(param_1,uVar2,1);
    if (iVar13 == 0) goto LAB_003ae368;
    lVar31 = func_0x00350340(param_1,uVar2);
    *(long *)(param_1 + 0x4e0) = lVar31;
    if (lVar31 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xade,"tls_process_ske_ecdhe");
      uVar17 = 0x50;
      puVar20 = (undefined *)0x13a;
      goto LAB_003adf38;
    }
    if (param_2[2] == 0) {
LAB_003ae34c:
      func_0x004464bc();
      pcVar21 = "tls_process_ske_ecdhe";
      uVar17 = 0xae3;
      goto LAB_003adf28;
    }
    uVar23 = (ulong)*(byte *)*param_2;
    uVar30 = param_2[2] - 1;
    if (uVar30 < uVar23) goto LAB_003ae34c;
    *param_2 = (long)((byte *)*param_2 + uVar23 + 1);
    param_2[2] = uVar30 - uVar23;
    iVar13 = func_0x0045fed8();
    if (iVar13 < 1) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xaeb,"tls_process_ske_ecdhe");
      uVar17 = 0x2f;
      puVar20 = (undefined *)0x132;
      goto LAB_003adf38;
    }
// thanks for reading - discord.gg/sdkhDjTex
    if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 9) == 0) {
      puStack_88 = (ushort *)0x0;
      *(uint *)(*(long *)(param_1 + 0x900) + 0x308) = uVar2;
      goto LAB_003ae764;
    }
    puVar20 = (undefined *)0x3ae5dc;
    plVar10 = &lStack_b0;
    goto code_r0x003b3e1c;
  case 8:
    if (*(long *)(param_1 + 0x408) == 0) {
      lVar15 = func_0x0046f1f4(*(long *)(param_1 + 0x118),4,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                               ,0xba4);
      *(long *)(param_1 + 0x408) = lVar15;
      if (lVar15 == 0) {
        return 0;
      }
    }
    else {
      _bzero(*(long *)(param_1 + 0x408),*(long *)(param_1 + 0x118) << 2);
      if (*(long *)(param_1 + 0x408) == 0) {
        return 0;
      }
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
        (iVar13 = **(int **)(param_1 + 0x18), 0x303 < iVar13)) && (iVar13 != 0x10000)) {
      if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
        return 1;
      }
      func_0x004743e4(*(undefined8 *)(param_1 + 0x348),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,3000);
      plVar10 = (long *)(param_1 + 0xd68);
      *(undefined8 *)(param_1 + 0x350) = 0;
      *(undefined8 *)(param_1 + 0x348) = 0;
      func_0x004743e4(*(undefined8 *)(param_1 + 0xd68),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
// WM - thanks for reading - discord.gg/sdkhDjTex
                      ,0xbbb);
      *(undefined8 *)(param_1 + 0xd70) = 0;
      *plVar10 = 0;
      if (param_2[2] != 0) {
        bVar4 = *(byte *)*param_2;
        uVar23 = (ulong)bVar4;
        uVar33 = param_2[2] - 1;
        if (uVar23 <= uVar33) {
          pbVar14 = (byte *)*param_2 + 1;
          *param_2 = (long)(pbVar14 + uVar23);
          param_2[2] = uVar33 - uVar23;
          func_0x004743e4(*plVar10,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                          ,0x1e7);
          *plVar10 = 0;
          *(undefined8 *)(param_1 + 0xd70) = 0;
          if (bVar4 != 0) {
            lVar15 = func_0x00475ac0(pbVar14,uVar23,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                     ,0x1f0);
            *plVar10 = lVar15;
            if (lVar15 == 0) goto code_r0x003aec58;
            *(ulong *)(param_1 + 0xd70) = uVar23;
          }
          uVar33 = param_2[2] - 2;
          if ((ulong)param_2[2] < 2) {
code_r0x003aee88:
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xbc5,&UNK_01c3ae3b);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            uVar17 = 0x32;
          }
          else {
            uVar7 = *(ushort *)*param_2;
            uVar23 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
            if (uVar33 < uVar23) goto code_r0x003aee88;
            *param_2 = *param_2 + uVar23 + 2;
            param_2[2] = uVar33 - uVar23;
            iVar13 = func_0x0039bb1c(param_1,auStack_10a + 0xb2,0x4000,auStack_10a + 0xaa,0,1);
            if ((iVar13 == 0) || (iVar13 = func_0x0039c418(param_1,0x4000,0,0,0,1), iVar13 == 0)) {
              func_0x004743e4(0,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xbce);
              return 0;
            }
            func_0x004743e4(0,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xbd1);
            iVar13 = func_0x0036703c(param_1);
            if (iVar13 != 0) goto code_r0x003aed54;
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xbd3,&UNK_01c3ae3b);
            uVar17 = 0x50;
          }
          puVar20 = (undefined *)0x10f;
          goto code_r0x003aecb8;
        }
      }
code_r0x003aec58:
      func_0x004464bc();
      uVar17 = 0xbc0;
    }
    else {
      if (param_2[2] != 0) {
        bVar4 = *(byte *)*param_2;
        uVar23 = (ulong)bVar4;
        uVar33 = param_2[2] - 1;
/*  origin: github.com/pengussy  */
        if (uVar23 <= uVar33) {
          pbVar14 = (byte *)*param_2 + 1;
          *param_2 = (long)(pbVar14 + uVar23);
          param_2[2] = uVar33 - uVar23;
          func_0x004743e4(*(undefined8 *)(param_1 + 0x348),
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                          ,0x1e7);
          *(undefined8 *)(param_1 + 0x350) = 0;
          *(long *)(param_1 + 0x348) = 0;
          if (bVar4 != 0) {
            lVar15 = func_0x00475ac0(pbVar14,uVar23,
                                     "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/include/internal/packet.h"
                                     ,0x1f0);
            *(long *)(param_1 + 0x348) = lVar15;
            if (lVar15 == 0) {
              func_0x004464bc();
              func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0xbe0,&UNK_01c3ae3b);
/*  found on a paste site? it was re-uploaded illegally  */
              uVar17 = 0x50;
              puVar20 = &UNK_000c0103;
              goto code_r0x003aecb8;
            }
            *(ulong *)(param_1 + 0x350) = uVar23;
          }
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) == 0) {
code_r0x003aed44:
            uVar33 = func_0x003b6ca0(param_1,param_2);
            if ((int)uVar33 == 0) {
              return uVar33;
            }
code_r0x003aed54:
            if (param_2[2] == 0) {
              *(undefined4 *)(param_1 + 0x340) = 1;
              if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0)
                   && (iVar13 = **(int **)(param_1 + 0x18), 0x303 < iVar13)) && (iVar13 != 0x10000))
                 && (*(int *)(param_1 + 0xd60) != 4)) {
                return 3;
              }
              return 2;
            }
            func_0x004464bc();
            uVar17 = 0xc03;
          }
          else {
            uVar33 = param_2[2] - 2;
            if (1 < (ulong)param_2[2]) {
              uVar7 = *(ushort *)*param_2;
              uVar23 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
              if (uVar23 <= uVar33) {
                *param_2 = *param_2 + uVar23 + 2;
                param_2[2] = uVar33 - uVar23;
                iVar13 = func_0x003681f4(param_1,auStack_10a + 0xb2,0);
                if (iVar13 == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* WM - do not claim this as your own */
                                  ,0xbf2,&UNK_01c3ae3b);
                  uVar17 = 0x50;
                  puVar20 = (undefined *)0x168;
                  goto code_r0x003aecb8;
                }
                iVar13 = func_0x0036703c(param_1);
                if (iVar13 == 0) {
                  func_0x004464bc();
                  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0xbf6,&UNK_01c3ae3b);
                  uVar17 = 0x50;
                  puVar20 = &UNK_00080014;
                  goto code_r0x003aecb8;
                }
                goto code_r0x003aed44;
              }
            }
            func_0x004464bc();
            uVar17 = 0xbe8;
          }
          goto code_r0x003aeca8;
        }
      }
      func_0x004464bc();
      uVar17 = 0xbdb;
    }
code_r0x003aeca8:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar17,&UNK_01c3ae3b);
/* if you paid for this, you were scammed - github.com/pengussy */
    uVar17 = 0x32;
    puVar20 = (undefined *)0x9f;
code_r0x003aecb8:
    func_0x003a9570(param_1,uVar17,puVar20,0);
    return 0;
  case 9:
    if (param_2[2] != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xd65,&UNK_01c3aeb9);
      func_0x003a9570(param_1,0x32,0x9f,0);
      return 0;
    }
    if (((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) >> 5 & 1) != 0) &&
       (iVar13 = func_0x0036e910(param_1), iVar13 < 1)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xd6b,&UNK_01c3aeb9);
      func_0x003a9570(param_1,0x50,0x169,0);
      return 0;
    }
code_r0x003b0c9c:
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(long *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
    lVar15 = *(long *)(param_1 + 8);
    uVar33 = func_0x003b07f4();
    if ((int)uVar33 == 0) {
      return uVar33;
    }
    if ((*(int *)(param_1 + 0xa28) != -1) &&
       (pcVar25 = *(code **)(lVar15 + 0x260), pcVar25 != (code *)0x0)) {
      iVar13 = (*pcVar25)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar15 + 0x268));
      if (iVar13 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                        ,0xd3f,&UNK_01c3ae97);
        uVar17 = 0x71;
        uVar22 = 0x148;
        goto code_r0x003b0ddc;
      }
      if (iVar13 < 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xd44,&UNK_01c3ae97);
        uVar17 = 0x50;
        uVar22 = 0x131;
        goto code_r0x003b0ddc;
      }
    }
    if (((*(long *)(param_1 + 0xd20) != 0) && (iVar13 = func_0x0035e7b0(param_1), iVar13 == 0)) &&
       ((*(byte *)(param_1 + 0x950) & 1) != 0)) {
      return 0;
    }
    if ((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc18) != 1)) {
      return 1;
    }
/* origin: github.com/pengussy */
    if (*(int *)(param_1 + 0xc30) == 1) {
      return 1;
    }
    if (*(int *)(param_1 + 0xc3c) == 1) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xc34) = 1;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xd59,&UNK_01c3ae97);
    uVar17 = 0x79;
    uVar22 = 0x1a8;
code_r0x003b0ddc:
    func_0x003a9570(param_1,uVar17,uVar22,0);
    return 0;
  case 10:
    uStack_68 = 0;
// proprietary - see LICENSE - do not sell
    uVar23 = param_2[2];
    uVar33 = uVar23 - 4;
    if (uVar23 < 4) {
code_r0x003af274:
      func_0x004464bc();
      uVar17 = 0xc2e;
code_r0x003af28c:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar17,&UNK_01c3ae5b);
      uVar17 = 0x32;
      uVar19 = 0x9f;
code_r0x003af29c:
      func_0x003a9570(param_1,uVar17,uVar19,0);
    }
    else {
      puVar29 = (uint *)*param_2;
      puVar28 = puVar29 + 1;
      uVar2 = *puVar29;
      puVar32 = *(undefined8 **)(param_1 + 8);
      *param_2 = (long)puVar28;
      param_2[2] = uVar33;
      piVar24 = *(int **)(param_1 + 0x18);
      uVar12 = *(uint *)(*(long *)(piVar24 + 0x36) + 0x50);
      if ((uVar12 >> 3 & 1) == 0) {
        lVar15 = 0;
        uVar38 = 0;
/*  proprietary - see LICENSE - do not sell  */
        uVar30 = 0;
        if ((0x303 < *piVar24) && (*piVar24 != 0x10000)) {
          if (3 < uVar33) {
            uVar38 = puVar29[1];
            *param_2 = (long)(puVar29 + 2);
            param_2[2] = uVar23 - 8;
            if (uVar23 - 8 != 0) {
              uVar30 = (ulong)(byte)puVar29[2];
              uVar33 = (uVar23 - 9) - uVar30;
              if (uVar30 <= uVar23 - 9) {
                uVar38 = (uVar38 & 0xff00ff00) >> 8 | (uVar38 & 0xff00ff) << 8;
                uVar38 = uVar38 >> 0x10 | uVar38 << 0x10;
                lVar15 = (long)puVar29 + 9;
                puVar28 = (uint *)(lVar15 + uVar30);
                *param_2 = (long)puVar28;
                param_2[2] = uVar33;
                goto code_r0x003af204;
              }
            }
          }
          goto code_r0x003af274;
        }
      }
      else {
        uVar38 = 0;
        lVar15 = 0;
        uVar30 = 0;
      }
code_r0x003af204:
      uVar23 = uVar33 - 2;
      if (uVar33 < 2) goto code_r0x003af274;
      uVar8 = (uint)(ushort)((ushort)*puVar28 >> 8) | ((ushort)*puVar28 & 0xff00ff) << 8;
      uVar33 = (ulong)uVar8;
      *param_2 = (long)puVar28 + 2;
      param_2[2] = uVar23;
      if ((((uVar12 >> 3 & 1) == 0) && (iVar13 = *piVar24, 0x303 < iVar13)) && (iVar13 != 0x10000))
      {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        if (uVar8 == 0 || uVar23 < uVar33) goto code_r0x003af274;
code_r0x003af258:
        if ((iVar13 < 0x304) || (iVar13 == 0x10000)) goto code_r0x003af2e4;
        lVar31 = *(long *)(param_1 + 0x900);
code_r0x003af2f4:
        lVar31 = func_0x003614a0(lVar31,0);
        if (lVar31 != 0) {
          if (((*(byte *)(*(long *)(param_1 + 0xd40) + 0x50) & 1) != 0) &&
             ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0 ||
               (iVar13 = **(int **)(param_1 + 0x18), iVar13 < 0x304)) || (iVar13 == 0x10000)))) {
            func_0x003624b4(*(long *)(param_1 + 0xd40),*(undefined8 *)(param_1 + 0x900));
          }
          func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
          *(long *)(param_1 + 0x900) = lVar31;
          goto code_r0x003af34c;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xc4a,&UNK_01c3ae5b);
        uVar19 = 0x80014;
code_r0x003af428:
        uVar17 = 0x50;
        goto code_r0x003af29c;
      }
      if (uVar23 != uVar33) goto code_r0x003af274;
      if (uVar8 == 0) {
        return 3;
      }
      if ((uVar12 >> 3 & 1) == 0) {
        iVar13 = *piVar24;
        goto code_r0x003af258;
      }
code_r0x003af2e4:
      lVar31 = *(long *)(param_1 + 0x900);
      if (*(long *)(lVar31 + 0x250) != 0) goto code_r0x003af2f4;
code_r0x003af34c:
/* WM - more drops soon - github.com/pengussy */
      uVar17 = func_0x0048058c();
      *(undefined8 *)(lVar31 + 0x2e0) = uVar17;
      func_0x00361100(*(undefined8 *)(param_1 + 0x900));
      func_0x004743e4(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x328),
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0xc5f);
      lVar31 = *(long *)(param_1 + 0x900);
      *(undefined8 *)(lVar31 + 0x330) = 0;
      *(undefined8 *)(lVar31 + 0x328) = 0;
      lVar31 = func_0x019eb530(uVar33,
                               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                               ,0xc63);
      lVar16 = *(long *)(param_1 + 0x900);
      *(long *)(lVar16 + 0x328) = lVar31;
      if (lVar31 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0xc65,&UNK_01c3ae5b);
        uVar19 = 0x8000f;
        goto code_r0x003af428;
      }
      uVar23 = param_2[2];
      if (uVar23 < uVar33) {
        func_0x004464bc();
        uVar17 = 0xc69;
        goto code_r0x003af28c;
      }
      uVar12 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      puStack_88 = (ushort *)(ulong)(uVar12 >> 0x10 | uVar12 << 0x10);
      lVar36 = *param_2;
      _memcpy(lVar31,lVar36,uVar33);
      *param_2 = lVar36 + uVar33;
      param_2[2] = uVar23 - uVar33;
      *(ushort **)(lVar16 + 0x338) = puStack_88;
      *(uint *)(lVar16 + 0x340) = uVar38;
      *(ulong *)(lVar16 + 0x330) = uVar33;
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
          (iVar13 = **(int **)(param_1 + 0x18), 0x303 < iVar13)) && (iVar13 != 0x10000)) {
/* watermarked copy - do not remove - github.com/pengussy */
        if (1 < (ulong)param_2[2]) {
          puVar26 = (ushort *)*param_2 + 1;
          uVar7 = *(ushort *)*param_2;
          uVar23 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
          if (param_2[2] - 2U == uVar23) {
            uStack_78 = param_2[1];
            *param_2 = (long)puVar26 + uVar23;
            param_2[2] = 0;
            puStack_80 = puVar26;
            uStack_70 = uVar23;
            iVar13 = func_0x0039bb1c(param_1,&puStack_80,0x2000,&uStack_68,0,1);
            if ((iVar13 != 0) &&
               (iVar13 = func_0x0039c418(param_1,0x2000,uStack_68,0,0,1), iVar13 != 0))
            goto code_r0x003af50c;
            goto code_r0x003af2a4;
          }
        }
        func_0x004464bc();
        uVar17 = 0xc76;
        goto code_r0x003af28c;
      }
code_r0x003af50c:
// no support for modified copies
      lVar31 = func_0x0044fbe0(*puVar32,&UNK_01c3182e,puVar32[0x91]);
      if (lVar31 == 0) {
        func_0x003a94e4(param_1,0x50);
      }
      else {
        iVar13 = func_0x019e98b8(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x328),uVar33,
                                 *(long *)(param_1 + 0x900) + 600,&puStack_80,lVar31,0);
        if (iVar13 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0xc9d,&UNK_01c3ae5b);
          func_0x003a9570(param_1,0x50,&UNK_00080006,0);
          goto code_r0x003af2a8;
        }
        func_0x0044ed2c(lVar31);
        lVar31 = *(long *)(param_1 + 0x900);
        *(ulong *)(lVar31 + 0x250) = (ulong)puStack_80 & 0xffffffff;
        *(undefined4 *)(lVar31 + 0x2b0) = 0;
        if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
/* keep the notice, keep the source honest - github.com/pengussy */
          return 3;
        }
        iVar13 = **(int **)(param_1 + 0x18);
        if (iVar13 < 0x304) {
          return 3;
        }
        if (iVar13 == 0x10000) {
          return 3;
        }
        uVar17 = func_0x003542a0(param_1);
        uVar12 = func_0x00455f40();
        if ((int)uVar12 < 1) {
          func_0x019e75d8(param_1);
        }
        else {
          lStack_98 = CONCAT44(lStack_98._4_4_,1);
          uStack_a0 = (ulong)uVar12;
          iVar13 = func_0x0036c47c(param_1,uVar17,param_1 + 0x63c,&UNK_01ae6fd9,10,lVar15,uVar30,
                                   *(long *)(param_1 + 0x900) + 0x50);
          if (iVar13 != 0) {
            *(ulong *)(*(long *)(param_1 + 0x900) + 8) = (ulong)uVar12;
            func_0x004743e4(uStack_68,
/*  keep the notice, keep the source honest  */
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0xcc1);
            func_0x0035d388(param_1,1);
            return 1;
          }
        }
      }
    }
code_r0x003af2a4:
    lVar31 = 0;
code_r0x003af2a8:
    func_0x0044ed2c(lVar31);
    func_0x004743e4(uStack_68,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0xcc9);
    return 0;
  case 0xb:
    lVar15 = param_2[2];
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
      if (lVar15 == 0) goto code_r0x003b4290;
      func_0x004464bc();
      uVar17 = 0x319;
    }
/* wm:do not claim this as your own */
    else {
      if ((*(int *)(param_1 + 0x48) != 0x100 || lVar15 == 2) &&
         (*(int *)(param_1 + 0x48) == 0x100 || lVar15 == 0)) {
code_r0x003b4290:
        if (*(long *)(param_1 + 0x300) == 0) {
          func_0x004464bc();
          func_0x004465b0(&UNK_01c3b285,800,&UNK_01c3b42e);
          func_0x003a9570(param_1,10,0x85,0);
          return 0;
        }
        *(undefined4 *)(param_1 + 0x1b8) = 1;
        iVar13 = func_0x00350dbc(param_1);
        if (iVar13 == 0) {
          func_0x004464bc();
          func_0x004465b0(&UNK_01c3b285,0x326,&UNK_01c3b42e);
          func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
          return 0;
/* stripping the watermark breaks the license - github.com/pengussy */
        }
        if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) != 0) &&
           (*(int *)(param_1 + 0x48) == 0x100)) {
          *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) =
               *(short *)(*(long *)(param_1 + 0x4f0) + 0x110) + 1;
        }
        return 3;
      }
      func_0x004464bc();
      uVar17 = 0x314;
    }
    func_0x004465b0(&UNK_01c3b285,uVar17,&UNK_01c3b42e);
    func_0x003a9570(param_1,0x32,0x67,0);
    return 0;
  case 0xc:
    unaff_x29 = (long)register0x00000008 + -0x10;
    if (*(long *)(param_1 + 0x260) == 0) {
      bVar11 = true;
      iVar13 = *(int *)(param_1 + 0x78);
    }
/* wm:stripping the watermark breaks the license */
    else {
      bVar11 = *(long *)(param_1 + 0x2e8) == 0;
      iVar13 = *(int *)(param_1 + 0x78);
    }
    if (iVar13 != 0) {
      pcVar25 = *(code **)(*(long *)(param_1 + 0xe28) + 0x68);
      if (pcVar25 != (code *)0x0) {
        (*pcVar25)(*(undefined8 *)(param_1 + 0xe38),0);
      }
      if (*(int *)(param_1 + 0xd60) != 4) {
        *(undefined4 *)(param_1 + 0xc4) = 1;
      }
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
           (iVar13 = **(int **)(param_1 + 0x18), 0x303 < iVar13)) && (iVar13 != 0x10000)) &&
         (uVar33 = func_0x003b4704(param_1), (int)uVar33 == 0)) {
        return uVar33;
      }
    }
    piVar24 = *(int **)(param_1 + 0x18);
    uVar12 = *(uint *)(*(long *)(piVar24 + 0x36) + 0x50);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    if ((((uVar12 >> 3 & 1) == 0) && (0x303 < *piVar24)) && (*piVar24 != 0x10000)) {
      iVar13 = func_0x00393d54(param_1 + 0xe10);
      if (iVar13 != 0) {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c3b285,0x35b,&UNK_01c3b44d);
        uVar17 = 10;
        uVar22 = 0xb6;
        goto code_r0x003b4584;
      }
      piVar24 = *(int **)(param_1 + 0x18);
      uVar12 = *(uint *)(*(long *)(piVar24 + 0x36) + 0x50);
    }
    if (((((uVar12 >> 3 & 1) != 0) || (*piVar24 < 0x304)) || (*piVar24 == 0x10000)) &&
       (*(int *)(param_1 + 0x1b8) == 0)) {
      func_0x004464bc();
      func_0x004465b0(&UNK_01c3b285,0x361,&UNK_01c3b44d);
      uVar17 = 10;
      uVar22 = 0x9a;
code_r0x003b4584:
      func_0x003a9570(param_1,uVar17,uVar22,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    uVar33 = *(ulong *)(param_1 + 0x2e8);
    if (uVar33 != param_2[2]) {
      func_0x004464bc();
      func_0x004465b0(&UNK_01c3b285,0x369,&UNK_01c3b44d);
      uVar17 = 0x32;
      uVar22 = 0x6f;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      goto code_r0x003b4584;
    }
    iVar13 = func_0x0046eb60(*param_2,param_1 + 0x268,uVar33);
    if (iVar13 != 0) {
      func_0x004464bc();
      func_0x004465b0(&UNK_01c3b285,0x377,&UNK_01c3b44d);
      uVar17 = 0x33;
      uVar22 = 0x95;
      goto code_r0x003b4584;
    }
    if (0x40 < uVar33) {
      func_0x019e7c78(param_1);
      return 0;
    }
    iVar13 = *(int *)(param_1 + 0x78);
    lVar15 = 0x468;
    if (iVar13 != 0) {
      lVar15 = 0x420;
    }
    lVar31 = 0x4a8;
    if (iVar13 != 0) {
      lVar31 = 0x460;
    }
    _memcpy(param_1 + lVar15,param_1 + 0x268,uVar33);
    *(ulong *)(param_1 + lVar31) = uVar33;
// WM - unlicensed copy if this notice is missing
    lVar15 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
    if ((((*(byte *)(lVar15 + 0x50) >> 3 & 1) == 0) &&
        (iVar34 = **(int **)(param_1 + 0x18), 0x303 < iVar34)) && (iVar34 != 0x10000)) {
      if (iVar13 == 0) {
        iVar13 = (**(code **)(lVar15 + 8))
                           (param_1,param_1 + 0x5fc,param_1 + 0x5bc,0,auStack_10a + 0xc2);
        if (iVar13 == 0) {
          return 0;
        }
        iVar13 = func_0x0036cca8(param_1);
        if (iVar13 == 0) {
          return 0;
        }
        if (((*(byte *)(param_1 + 0x161) >> 5 & 1) == 0) &&
           (iVar13 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))
                               (param_1,0x111), iVar13 == 0)) {
          return 0;
        }
        unaff_x30 = &UNK_003b46b8;
/*  do not claim this as your own  */
        unaff_x20 = 0;
        register0x00000008 = (BADSPACEBASE *)(auStack_10a + 0xba);
        unaff_x19 = param_1;
        goto code_r0x003b0c9c;
      }
      if (*(int *)(param_1 + 0xd60) != 4) {
        iVar13 = (**(code **)(lVar15 + 0x10))(param_1,0x121);
        if (!(bool)(iVar13 != 0 & bVar11)) {
          return (ulong)(iVar13 != 0);
        }
        goto code_r0x003b461c;
      }
    }
    if (!bVar11) {
      return 1;
    }
code_r0x003b461c:
    if (((*(long *)(param_1 + 0x260) != 0) && (*(long *)(param_1 + 0x2e8) != 0)) &&
       (pcVar25 = *(code **)(*(long *)(param_1 + 0xe28) + 0x70), pcVar25 != (code *)0x0)) {
      (*pcVar25)(*(undefined8 *)(param_1 + 0xe38),0);
    }
/* wm:more drops soon - github.com/pengussy */
    return 1;
  case 0x2a:
    if (1 < (ulong)param_2[2]) {
      uVar7 = *(ushort *)*param_2;
      uVar33 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
      if (param_2[2] - 2U == uVar33) {
        *param_2 = *param_2 + uVar33 + 2;
        param_2[2] = 0;
        iVar13 = func_0x0039bb1c(param_1,(long)register0x00000008 + -0x38,0x400,
                                 (long)register0x00000008 + -0x40,0,1);
        if ((iVar13 != 0) && (iVar13 = func_0x0039c418(param_1,0x400,0,0,0,1), iVar13 != 0)) {
          func_0x004743e4(0,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,"s/A/MetalKit");
          return 3;
        }
        goto LAB_003acde8;
/* no support for modified copies - github.com/pengussy */
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,"ework/Versions/A/MetalKit","tls_process_encrypted_extensions");
    func_0x003a9570(param_1,0x32,0x9f,0);
LAB_003acde8:
    func_0x004743e4(0,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,"MetalKit");
    return 0;
  case 0x2b:
    plVar10 = &uStack_1d0;
    uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
    uStack_198 = 0;
    lStack_190 = 0;
    lVar15 = func_0x0044efa4();
    uStack_1a8 = 0;
    if (lVar15 == 0) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
      func_0x004464bc();
      uVar17 = 0x1c2;
code_r0x003b3930:
      func_0x004465b0(&UNK_01c3b285,uVar17,&UNK_01c3b3c1);
      uVar17 = 0x50;
      puVar20 = &UNK_00080006;
code_r0x003b3bfc:
      func_0x003a9570(param_1,uVar17,puVar20,0);
code_r0x003b3c04:
      uVar33 = 0;
      lVar31 = 0;
    }
    else {
      puVar32 = *(undefined8 **)(param_1 + 8);
      lVar31 = *(long *)(*(long *)(param_1 + 0x900) + 0x2b8);
      if (lVar31 == 0) {
        lVar31 = *(long *)(*(long *)(param_1 + 0x900) + 0x2c0);
        if (lVar31 != 0) {
          puVar20 = &UNK_003b3954;
          goto code_r0x004fa268;
        }
        func_0x004464bc();
        uVar17 = 0x1c8;
code_r0x003b3b80:
/*  donate: donate/README.md  */
        func_0x004465b0(&UNK_01c3b285,uVar17,&UNK_01c3b3c1);
        uVar17 = 0x50;
        puVar20 = &UNK_000c0103;
        goto code_r0x003b3bfc;
      }
      lVar16 = func_0x00353890(lVar31,0,puVar32);
      if (lVar16 == 0) {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c3b285,0x1ce,&UNK_01c3b3c1);
        uVar17 = 0x2f;
        puVar20 = (undefined *)0xdc;
        goto code_r0x003b3bfc;
      }
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
        if ((ulong)param_2[2] < 2) {
          func_0x004464bc();
          func_0x004465b0(&UNK_01c3b285,0x1d6,&UNK_01c3b3c1);
          uVar17 = 0x32;
          puVar20 = (undefined *)0xf0;
          goto code_r0x003b3bfc;
        }
        uVar7 = *(ushort *)*param_2;
        *param_2 = (long)((ushort *)*param_2 + 1);
        param_2[2] = param_2[2] - 2;
        iVar13 = func_0x0036601c(param_1,uVar7 >> 8 | uVar7 << 8,lVar31);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        if (0 < iVar13) goto code_r0x003b3a0c;
        goto code_r0x003b3c04;
      }
      iVar13 = func_0x00365c7c(param_1,lVar31);
      if (iVar13 == 0) {
        func_0x004464bc();
        func_0x004465b0(&UNK_01c3b285,0x1df,&UNK_01c3b3c1);
        uVar17 = 0x50;
        puVar20 = (undefined *)0x14d;
        goto code_r0x003b3bfc;
      }
code_r0x003b3a0c:
      iVar13 = func_0x00365c28(puVar32,*(undefined8 *)(param_1 + 0x400),&lStack_190);
      if (iVar13 == 0) {
        func_0x004464bc();
        uVar17 = 0x1e4;
        goto code_r0x003b3b80;
      }
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 1 & 1) != 0) {
code_r0x003b3b40:
        uVar33 = param_2[2] - 2;
        if (1 < (ulong)param_2[2]) {
          uVar7 = *(ushort *)*param_2;
          *param_2 = (long)((ushort *)*param_2 + 1);
          param_2[2] = uVar33;
          uVar23 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
          if (uVar33 < uVar23) goto code_r0x003b3bb8;
          goto code_r0x003b3a8c;
        }
        func_0x004464bc();
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        uVar17 = 0x1fc;
code_r0x003b3bec:
        func_0x004465b0(&UNK_01c3b285,uVar17,&UNK_01c3b3c1);
        uVar17 = 0x32;
        puVar20 = (undefined *)0x9f;
        goto code_r0x003b3bfc;
      }
      lVar16 = param_2[2];
      if (lVar16 == 0x40) {
        iVar13 = func_0x003ddb7c(lVar31);
        if ((iVar13 != 0x32b) && (iVar13 = func_0x003ddb7c(lVar31), iVar13 != 0x3d3)) {
          lVar16 = param_2[2];
          goto code_r0x003b3a60;
        }
      }
      else {
code_r0x003b3a60:
        if ((lVar16 != 0x80) || (iVar13 = func_0x003ddb7c(lVar31), iVar13 != 0x3d4))
        goto code_r0x003b3b40;
      }
      uVar33 = param_2[2];
      uVar23 = uVar33 & 0xffffffff;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      if (uVar33 < uVar23) {
code_r0x003b3bb8:
        func_0x004464bc();
        uVar17 = 0x201;
        goto code_r0x003b3bec;
      }
code_r0x003b3a8c:
      lVar16 = *param_2;
      *param_2 = lVar16 + uVar23;
      param_2[2] = uVar33 - uVar23;
      if (uVar33 - uVar23 != 0) {
        func_0x004464bc();
        uVar17 = 0x205;
        goto code_r0x003b3bec;
      }
      iVar13 = func_0x003b36d0(param_1,auStack_10a,&uStack_1a0,&uStack_198);
      if (iVar13 == 0) goto code_r0x003b3c04;
      puVar35 = &uStack_160;
      func_0x00477f7c(auStack_188,&UNK_01c39991,param_1 + 0x48);
      if (lStack_190 != 0) {
        puVar35 = auStack_138;
        uVar17 = func_0x00455ed0();
        func_0x0047992c(&uStack_1d0,"digest",uVar17,0);
        uStack_158 = uStack_1c8;
        uStack_160 = uStack_1d0;
        uStack_148 = uStack_1b8;
        uStack_150 = uStack_1c0;
        uStack_140 = uStack_1b0;
      }
      func_0x00479f78(&uStack_1d0);
/* more drops soon - github.com/pengussy - github.com/pengussy */
      puVar35[1] = uStack_1c8;
      *puVar35 = uStack_1d0;
      puVar35[3] = uStack_1b8;
      puVar35[2] = uStack_1c0;
      puVar35[4] = uStack_1b0;
      if (lStack_190 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = func_0x00455ed0();
      }
      iVar13 = func_0x0045b92c(lVar15,&uStack_1a8,uVar17,*puVar32,puVar32[0x91],lVar31,auStack_188);
      if (iVar13 < 1) {
        func_0x004464bc();
        uVar17 = 0x21f;
        goto code_r0x003b3930;
      }
      iVar13 = func_0x003ddb7c(lVar31);
      if ((iVar13 - 0x3d3U < 2) || (iVar13 == 0x32b)) {
        lVar31 = func_0x019eb530(uVar33,&UNK_01c3b285,0x228);
        if (lVar31 != 0) {
          func_0x00400700(lVar31,lVar16,uVar33);
// donate: donate/README.md
          lVar16 = lVar31;
          goto code_r0x003b3d10;
        }
        uVar33 = 0;
      }
      else {
        lVar31 = 0;
code_r0x003b3d10:
        if (((*(long *)(param_1 + 0x400) == 0) ||
            (*(int *)(*(long *)(param_1 + 0x400) + 0x1c) != 0x390)) ||
           ((iVar13 = func_0x004bb9d0(uStack_1a8,6), 0 < iVar13 &&
            (iVar13 = func_0x004bbaa0(uStack_1a8,0xffffffff), 0 < iVar13)))) {
          iVar13 = func_0x0045c204(lVar15,lVar16,uVar33,uStack_1a0,uStack_198);
          if (0 < iVar13) {
            if ((((*(int *)(param_1 + 0x78) == 0) &&
                 ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0)) &&
                (iVar13 = **(int **)(param_1 + 0x18), 0x303 < iVar13)) &&
               ((iVar13 != 0x10000 && (*(int *)(param_1 + 0x340) == 1)))) {
              uVar33 = 2;
            }
            else {
              uVar33 = 3;
            }
            goto code_r0x003b3c0c;
          }
          func_0x004464bc();
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          func_0x004465b0(&UNK_01c3b285,0x241,&UNK_01c3b3c1);
          uVar17 = 0x33;
          puVar20 = (undefined *)0x7b;
        }
        else {
          func_0x004464bc();
          func_0x004465b0(&UNK_01c3b285,0x235,&UNK_01c3b3c1);
          uVar17 = 0x50;
          puVar20 = &UNK_00080006;
        }
        func_0x003a9570(param_1,uVar17,puVar20,0);
        uVar33 = 0;
      }
    }
code_r0x003b3c0c:
    func_0x003e9468(*(undefined8 *)(param_1 + 0x1a8));
    *(undefined8 *)(param_1 + 0x1a8) = 0;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    func_0x0044efb8(lVar15);
    func_0x004743e4(lVar31,&UNK_01c3b285,0x256);
    if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
      return uVar33;
    }
    puVar20 = &SUB_003b3e1c;
    param_1 = ___stack_chk_fail();
    plVar10 = &uStack_1d0;
code_r0x003b3e1c:
    uVar33 = *(ulong *)(*(long *)(param_1 + 0x900) + 0x2b8);
    if (uVar33 == 0) {
      lVar31 = *(long *)(*(long *)(param_1 + 0x900) + 0x2c0);
      uVar33 = 0;
      if (lVar31 != 0) {
code_r0x004fa268:
        if (lVar31 == 0) {
          return 0;
        }
        lVar15 = *(long *)(lVar31 + 0x50);
        *(long *)((long)plVar10 + -0x10) = (long)register0x00000008 + -0x10;
        *(undefined **)((long)plVar10 + -8) = puVar20;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        if (lVar15 == 0) {
          func_0x004464bc();
          func_0x004465b0(&UNK_01c63609,0x1c0,&UNK_01c63690);
          func_0x004466b0(0xb,&UNK_000c0102,0);
          return 0;
        }
        uVar33 = *(ulong *)(lVar15 + 0x10);
        if (uVar33 == 0) {
          func_0x004464bc();
          func_0x004465b0(&UNK_01c63609,0x1c6,&UNK_01c63690);
          func_0x004466b0(6,0x72,0);
          return 0;
        }
        return uVar33;
      }
    }
    return uVar33;
  case 0x2d:
    if (param_2[2] != 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,"Library/Frameworks/MetalKit.framework/Versions/A/MetalKit",&UNK_01c3af9a);
      func_0x003a9570(param_1,0x32,0x9f,0);
      return 0;
    }
    if ((*(byte *)(param_1 + 0x9b3) >> 6 & 1) != 0) {
      func_0x00350e94(param_1,1,100);
      return 1;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) >> 3 & 1) == 0) {
/* unlicensed copy if this notice is missing - github.com/pengussy */
      func_0x0035b704();
      return 1;
    }
    func_0x0035b644();
    return 1;
  case 0x31:
    iVar13 = func_0x00393d54(param_1 + 0xe10);
    if (iVar13 != 0) {
      func_0x004464bc();
      func_0x004465b0(&UNK_01c3b285,0x2c3,&UNK_01c3b417);
      func_0x003a9570(param_1,10,0xb6,0);
      return 0;
    }
    if (param_2[2] != 0) {
      bVar4 = *(byte *)*param_2;
      *param_2 = (long)((byte *)*param_2 + 1);
      lVar15 = param_2[2] + -1;
      param_2[2] = lVar15;
      if (lVar15 == 0) {
        if (bVar4 < 2) {
/* found on a paste site? it was re-uploaded illegally */
          if (bVar4 == 1) {
            *(undefined4 *)(param_1 + 0xd5c) = 0;
          }
          iVar13 = func_0x0036d8e8(param_1,0);
          return (ulong)(iVar13 != 0);
        }
        func_0x004464bc();
        func_0x004465b0(&UNK_01c3b285,0x2d3,&UNK_01c3b417);
        uVar17 = 0x2f;
        goto code_r0x003b4154;
      }
    }
    func_0x004464bc();
    func_0x004465b0(&UNK_01c3b285,0x2c9,&UNK_01c3b417);
    uVar17 = 0x32;
code_r0x003b4154:
    func_0x003a9570(param_1,uVar17,0x7a,0);
    return 0;
  }
  plVar10 = auVar41._8_8_;
  lVar15 = auVar41._0_8_;
  *(ulong *)((long)ppbVar9 + -0x50) = unaff_x26;
  *(ulong *)((long)ppbVar9 + -0x48) = unaff_x25;
  *(undefined8 *)((long)ppbVar9 + -0x40) = unaff_x24;
  *(long *)((long)ppbVar9 + -0x38) = unaff_x23;
  *(ulong *)((long)ppbVar9 + -0x30) = unaff_x22;
  *(byte **)((long)ppbVar9 + -0x28) = unaff_x21;
  *(ulong *)((long)ppbVar9 + -0x20) = unaff_x20;
  *(long *)((long)ppbVar9 + -0x18) = param_1;
  *(long *)((long)ppbVar9 + -0x10) = unaff_x29;
// WM - found on a paste site? it was re-uploaded illegally
  *(undefined **)((long)ppbVar9 + -8) = unaff_x30;
  *(undefined8 *)((long)ppbVar9 + -0x58) = 0;
  if (*(char *)(lVar15 + 0xb5a) != '\0') {
    if (*(char *)(lVar15 + 0xb5a) == '\x02') {
      *(undefined8 *)((long)ppbVar9 + -0x80) = 0;
      uVar33 = func_0x003b486c(lVar15,plVar10,(undefined1 *)((long)ppbVar9 + -0x80));
      if ((int)uVar33 == 0) {
        return uVar33;
      }
      if (*(long *)((long)ppbVar9 + -0x80) == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x8f1,&UNK_01c3adc8);
        func_0x003a9570(lVar15,0x32,0x15c,0);
        return 0;
      }
      func_0x0045eb4c(*(undefined8 *)(*(long *)(lVar15 + 0x900) + 0x2b8));
      *(undefined8 *)(*(long *)(lVar15 + 0x900) + 0x2b8) = *(undefined8 *)((long)ppbVar9 + -0x80);
      return 2;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x94d,&UNK_01c3addf);
    uVar17 = 0x2b;
    puVar20 = (undefined *)0xf7;
    goto code_r0x003adb74;
  }
  puVar32 = *(undefined8 **)(lVar15 + 8);
  uVar17 = func_0x004dc0f0();
  lVar31 = func_0x004dc468(uVar17,&DAT_003b07e8);
  *(long *)(*(long *)(lVar15 + 0x900) + 0x2c8) = lVar31;
  if (lVar31 == 0) {
    func_0x004464bc();
    uVar17 = 0x952;
code_r0x003adb5c:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar17,&UNK_01c3addf);
/* WM - watermarked copy - do not remove */
    puVar20 = &UNK_0008000f;
    uVar17 = 0x50;
    goto code_r0x003adb74;
  }
  if ((((*(byte *)(*(long *)(*(int **)(lVar15 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar13 = **(int **)(lVar15 + 0x18), 0x303 < iVar13)) && (iVar13 != 0x10000)) {
    if (plVar10[2] != 0) {
      cVar3 = *(char *)*plVar10;
      *plVar10 = (long)((char *)*plVar10 + 1);
      plVar10[2] = plVar10[2] + -1;
      if (cVar3 == '\0') goto code_r0x003adae0;
    }
  }
  else {
code_r0x003adae0:
    if (2 < (ulong)plVar10[2]) {
      pbVar14 = (byte *)*plVar10;
      bVar4 = *pbVar14;
      bVar5 = pbVar14[1];
      bVar6 = pbVar14[2];
      *plVar10 = (long)(pbVar14 + 3);
      uVar33 = plVar10[2] - 3;
      plVar10[2] = uVar33;
      if ((uVar33 != 0) &&
         (uVar23 = (ulong)bVar4 << 0x10 | (ulong)bVar5 << 8 | (ulong)bVar6, uVar33 == uVar23)) {
        lVar16 = 0;
        while (uVar33 = uVar23 - 3, 2 < uVar23) {
          pbVar14 = (byte *)*plVar10;
          uVar23 = (ulong)*pbVar14 << 0x10 | (ulong)pbVar14[1] << 8 | (ulong)pbVar14[2];
          pbVar14 = pbVar14 + 3;
          *plVar10 = (long)pbVar14;
          plVar10[2] = uVar33;
          if (uVar33 < uVar23) break;
          *(byte **)((long)ppbVar9 + -0x60) = pbVar14;
          *plVar10 = (long)(pbVar14 + uVar23);
          plVar10[2] = uVar33 - uVar23;
          lVar31 = func_0x00506794(*puVar32,puVar32[0x91]);
/* unlicensed copy if this notice is missing */
          *(long *)((long)ppbVar9 + -0x58) = lVar31;
          if (lVar31 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x968,&UNK_01c3addf);
            uVar17 = 0x32;
code_r0x003ade00:
            puVar20 = &UNK_0008000d;
            goto code_r0x003adb74;
          }
          lVar31 = func_0x005066fc((undefined1 *)((long)ppbVar9 + -0x58),
                                   (undefined1 *)((long)ppbVar9 + -0x60),uVar23);
          if (lVar31 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x96e,&UNK_01c3addf);
            uVar17 = 0x2a;
            goto code_r0x003ade00;
          }
          if (*(byte **)((long)ppbVar9 + -0x60) != pbVar14 + uVar23) {
            func_0x004464bc();
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar17 = 0x973;
            goto code_r0x003ade24;
          }
          if ((((*(byte *)(*(long *)(*(int **)(lVar15 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
              (iVar13 = **(int **)(lVar15 + 0x18), 0x303 < iVar13)) && (iVar13 != 0x10000)) {
            *(undefined8 *)((long)ppbVar9 + -0x68) = 0;
            uVar33 = plVar10[2] - 2;
            if (1 < (ulong)plVar10[2]) {
              puVar26 = (ushort *)*plVar10 + 1;
              uVar7 = *(ushort *)*plVar10;
              uVar23 = (ulong)((uint)(uVar7 >> 8) | (uVar7 & 0xff00ff) << 8);
              if (uVar23 <= uVar33) {
                lVar31 = plVar10[1];
                *plVar10 = (long)puVar26 + uVar23;
                plVar10[2] = uVar33 - uVar23;
                *(ushort **)((long)ppbVar9 + -0x80) = puVar26;
                *(long *)((long)ppbVar9 + -0x78) = lVar31;
                *(ulong *)((long)ppbVar9 + -0x70) = uVar23;
                iVar13 = func_0x0039bb1c(lVar15,(undefined1 *)((long)ppbVar9 + -0x80),0x1000,
                                         (undefined1 *)((long)ppbVar9 + -0x68),0,lVar16 == 0);
                if ((iVar13 != 0) &&
                   (iVar13 = func_0x0039c418(lVar15,0x1000,*(undefined8 *)((long)ppbVar9 + -0x68),
                                             *(undefined8 *)((long)ppbVar9 + -0x58),lVar16,
                                             plVar10[2] == 0), iVar13 != 0)) {
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                  func_0x004743e4(*(undefined8 *)((long)ppbVar9 + -0x68),
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0x989);
                  goto code_r0x003add34;
                }
                func_0x004743e4(*(undefined8 *)((long)ppbVar9 + -0x68),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0x985);
                goto code_r0x003adb7c;
              }
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x97c,&UNK_01c3addf);
            uVar17 = 0x32;
            puVar20 = (undefined *)0x10f;
/*  chat: discord.gg/sdkhDjTex  */
            goto code_r0x003adb74;
          }
code_r0x003add34:
          iVar13 = func_0x004dc9ec(*(undefined8 *)(*(long *)(lVar15 + 0x900) + 0x2c8),
                                   *(undefined8 *)((long)ppbVar9 + -0x58));
          if (iVar13 == 0) {
            func_0x004464bc();
            uVar17 = 0x98d;
            goto code_r0x003adb5c;
          }
          *(undefined8 *)((long)ppbVar9 + -0x58) = 0;
          lVar16 = lVar16 + 1;
          uVar23 = plVar10[2];
          lVar31 = 2;
          if (uVar23 == 0) {
            return 2;
          }
        }
        func_0x004464bc(lVar31);
        uVar17 = 0x961;
code_r0x003ade24:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar17,&UNK_01c3addf);
        uVar17 = 0x32;
/* WM - origin: github.com/pengussy */
        puVar20 = (undefined *)0x87;
        goto code_r0x003adb74;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0x95b,&UNK_01c3addf);
  uVar17 = 0x32;
  puVar20 = (undefined *)0x9f;
code_r0x003adb74:
  func_0x003a9570(lVar15,uVar17,puVar20,0);
code_r0x003adb7c:
  func_0x00506714(*(undefined8 *)((long)ppbVar9 + -0x58));
  func_0x004e4d60(*(undefined8 *)(*(long *)(lVar15 + 0x900) + 0x2c8));
  *(undefined8 *)(*(long *)(lVar15 + 0x900) + 0x2c8) = 0;
  return 0;
}

