/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ace50:39ce5fd542
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_003ace50(long param_1,long *param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  long *plVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ushort *puVar15;
  ulong uVar16;
  uint uVar17;
  byte *pbVar18;
  int *piVar19;
  byte *unaff_x21;
  long lVar20;
  ulong unaff_x22;
  int iVar21;
  long unaff_x23;
  undefined8 uVar22;
  undefined8 *puVar23;
  ulong unaff_x25;
  ulong uVar24;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  ushort *puVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  ushort *puStack_140;
  long lStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  byte *pbStack_120;
  long lStack_118;
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  byte *pbStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  byte *pbStack_c0;
  uint uStack_b8;
  uint uStack_b4;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  byte *pbStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar10 = (long)register0x00000008 + -0x10;
/* watermarked copy - do not remove */
  uStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_98 = 0;
  uVar22 = *(undefined8 *)(param_1 + 0x40);
  lStack_78 = 0xff;
  lStack_70 = 0;
  uStack_a8 = 0;
  uVar24 = param_2[2];
  if (uVar24 < 2) {
    func_0x004464bc();
    uVar11 = 0x6d7;
    goto LAB_003acfd8;
  }
  puVar25 = (ushort *)*param_2;
  puVar15 = puVar25 + 1;
  uVar17 = (uint)(*puVar25 >> 8) | (*puVar25 & 0xff00ff) << 8;
  unaff_x25 = (ulong)uVar17;
  *param_2 = (long)puVar15;
  uVar16 = uVar24 - 2;
  param_2[2] = uVar16;
  if ((*(int *)(param_1 + 0x48) == 0x304) && (uVar17 == 0x303)) {
    if (0x1f < uVar16) {
      if (((_UNK_01ae6ff4 != *(long *)puVar15 || _UNK_01ae6ffc != *(long *)(puVar25 + 5)) ||
          _UNK_01ae7004 != *(long *)(puVar25 + 9)) || _UNK_01ae700c != *(long *)(puVar25 + 0xd))
      goto LAB_003acf80;
      if (*(int *)(param_1 + 0x8d0) != 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x6e1,"tls_process_server_hello");
        uVar11 = 10;
        puVar13 = (undefined *)0xf4;
        goto LAB_003acfe8;
      }
      *(undefined4 *)(param_1 + 0x8d0) = 1;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      iVar8 = func_0x019e6c78(param_1,0x304);
      if (iVar8 != 0) {
        uVar16 = param_2[2];
        if (uVar16 < 0x20) {
          func_0x004464bc();
          uVar11 = 0x6ec;
          goto LAB_003acfd8;
        }
        pbVar18 = (byte *)(*param_2 + 0x20);
        *param_2 = (long)pbVar18;
        unaff_x23 = 1;
        uVar11 = 1;
        param_2[2] = uVar16 - 0x20;
        if (uVar16 - 0x20 != 0) goto LAB_003acfb0;
        goto LAB_003acfc0;
      }
      func_0x004464bc();
      uVar11 = 0x6e7;
      goto LAB_003ad170;
    }
LAB_003acf64:
    func_0x004464bc();
    uVar11 = 0x6f1;
LAB_003acfd8:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar11,"tls_process_server_hello");
    uVar11 = 0x32;
    puVar13 = (undefined *)0x9f;
LAB_003acfe8:
    func_0x003a9570(param_1,uVar11,puVar13,0);
LAB_003acff0:
    uVar11 = 0;
    uVar14 = 0x8a6;
  }
  else {
    if (uVar16 < 0x20) goto LAB_003acf64;
LAB_003acf80:
/*  chat: discord.gg/sdkhDjTex  */
    unaff_x23 = 0;
    uVar11 = 0;
    lVar9 = *(long *)puVar15;
    uVar26 = *(undefined8 *)(puVar25 + 0xd);
    uVar14 = *(undefined8 *)(puVar25 + 9);
    *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(puVar25 + 5);
    *(long *)(param_1 + 0x168) = lVar9;
    *(undefined8 *)(param_1 + 0x180) = uVar26;
    *(undefined8 *)(param_1 + 0x178) = uVar14;
    pbVar18 = (byte *)(*param_2 + 0x20);
    *param_2 = (long)pbVar18;
    uVar16 = param_2[2];
    param_2[2] = uVar16 - 0x20;
    if (uVar16 - 0x20 == 0) {
LAB_003acfc0:
      func_0x004464bc();
      uVar11 = 0x6f8;
      goto LAB_003acfd8;
    }
LAB_003acfb0:
    bVar3 = *pbVar18;
    unaff_x22 = (ulong)bVar3;
    uVar7 = (uVar16 - 0x21) - unaff_x22;
    if (uVar16 - 0x21 < unaff_x22) goto LAB_003acfc0;
    pbVar18 = pbVar18 + 1;
    unaff_x21 = pbVar18 + unaff_x22;
    *param_2 = (long)unaff_x21;
    param_2[2] = uVar7;
    if (0x20 < bVar3) {
      func_0x004464bc();
// do not claim this as your own
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x6fe,"tls_process_server_hello");
      uVar11 = 0x2f;
      puVar13 = (undefined *)0x12c;
      goto LAB_003acfe8;
    }
    if (uVar7 < 2) {
      func_0x004464bc();
      uVar11 = 0x703;
      goto LAB_003acfd8;
    }
    *param_2 = (long)(unaff_x21 + 2);
    param_2[2] = uVar7 - 2;
    if (uVar7 - 2 == 0) {
      func_0x004464bc();
      uVar11 = 0x708;
      goto LAB_003acfd8;
    }
    bVar4 = unaff_x21[2];
    *param_2 = (long)(unaff_x21 + 3);
    uVar16 = uVar7 - 3;
    param_2[2] = uVar16;
    iVar21 = (int)unaff_x23;
    iVar8 = iVar21;
    if (uVar16 != 0) {
      iVar8 = 1;
    }
    if (iVar8 == 0) {
      pbStack_90 = (byte *)0x0;
      lStack_88 = 0;
      uStack_80 = 0;
    }
    else {
      if ((uVar16 < 2) ||
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
         (uVar16 = (ulong)((uint)(*(ushort *)(unaff_x21 + 3) >> 8) |
                          (*(ushort *)(unaff_x21 + 3) & 0xff00ff) << 8), uVar7 - 5 != uVar16)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x711,"tls_process_server_hello");
        uVar11 = 0x32;
        puVar13 = (undefined *)0x10f;
        goto LAB_003acfe8;
      }
      lStack_88 = param_2[1];
      pbStack_90 = unaff_x21 + 5;
      *param_2 = (long)(pbStack_90 + uVar16);
      param_2[2] = 0;
      uStack_80 = uVar16;
    }
    uStack_b8 = (uint)bVar4;
    pbStack_c0 = pbVar18;
    if (iVar21 != 0) {
      iVar8 = func_0x0039bb1c(param_1,&pbStack_90,0x800,&uStack_98,0,1);
      if ((iVar8 != 0) && (iVar8 = func_0x0039c300(param_1,0x1b,0x800,uStack_98,0,0), iVar8 != 0))
      goto LAB_003ad260;
      goto LAB_003acff0;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
    }
    iVar8 = func_0x0039bb1c(param_1,&pbStack_90,0x300,&uStack_98,0,1);
    if (iVar8 == 0) goto LAB_003acff0;
LAB_003ad260:
    if ((((*(long *)(param_1 + 0xb60) == 0) || (*(int *)(param_1 + 0xc1c) == 1)) ||
        (*(int *)(param_1 + 0xc14) != 0)) ||
       ((*(int *)(param_1 + 0xc3c) != 0 || (*(short *)(param_1 + 0xc20) != -499))))
    goto LAB_003ad464;
    iVar8 = func_0x003b0470(param_1,unaff_x21);
    if (iVar8 == 0) goto LAB_003acff0;
    if (*(int *)(param_1 + 0xc18) == 1) {
      uStack_a0 = 2;
      uStack_9f = (undefined1)(uVar24 >> 0x10);
      uStack_9e = (undefined1)(uVar24 >> 8);
      uStack_9d = (undefined1)uVar24;
      iVar8 = func_0x0034b4ec(param_1,&uStack_a0,4,uVar11);
      if ((iVar8 != 1) || (iVar8 = func_0x0034b4ec(param_1,puVar25,uVar24,0), iVar8 != 1)) {
        func_0x004464bc();
        uVar11 = 0x742;
        goto LAB_003ad170;
      }
    }
    iVar8 = FUN_003499f8(param_1,uVar11,&lStack_70,uVar24);
    if (iVar8 != 1) goto LAB_003acff0;
/* WM - unlicensed copy if this notice is missing */
    iVar8 = func_0x00348fa4(param_1,uVar11,&lStack_78);
    if ((iVar8 != 1) || (lStack_78 != lStack_70)) {
      func_0x0011ab24("ECH client accept val:",&lStack_70,8);
      func_0x0011ab24("ECH server accept val:",&lStack_78,8);
      *(undefined4 *)(param_1 + 0xc30) = 0;
      if ((iVar21 == 0) && (*(long *)(param_1 + 0xcb0) != 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x773,"tls_process_server_hello");
        uVar11 = 0x2f;
        puVar13 = (undefined *)0x1a8;
        goto LAB_003acfe8;
      }
      *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(param_1 + 0xa20);
      *(undefined8 *)(param_1 + 0xa20) = 0;
      if (*(long *)(param_1 + 0xb70) == 0) {
/* wm:no support for modified copies */
LAB_003ad464:
        if (unaff_x23 == 0) goto LAB_003ad468;
        goto LAB_003ad47c;
      }
      lVar9 = func_0x004759a8(*(long *)(param_1 + 0xb70),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                              ,0x77b);
      *(long *)(param_1 + 0xa20) = lVar9;
      if (lVar9 == 0) {
        func_0x004464bc();
        uVar11 = 0x77d;
      }
      else {
        iVar8 = func_0x003598bc(param_1,*(undefined8 *)(param_1 + 0xb70));
        if (iVar8 == 1) goto LAB_003ad464;
        func_0x004464bc();
        uVar11 = 0x781;
      }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
LAB_003ad170:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,uVar11,"tls_process_server_hello");
      uVar11 = 0x50;
      puVar13 = &UNK_000c0103;
      goto LAB_003acfe8;
    }
    *(undefined4 *)(param_1 + 0xc30) = 1;
    if (iVar21 == 0) {
      iVar8 = func_0x00349638(param_1);
      if (((iVar8 != 1) || (iVar8 = func_0x00349e88(param_1,&uStack_a8,&uStack_a0), iVar8 != 1)) ||
         (iVar8 = func_0x00348fe0(param_1,uStack_a8,
                                  CONCAT44(uStack_9c,
                                           CONCAT13(uStack_9d,
                                                    CONCAT12(uStack_9e,CONCAT11(uStack_9f,uStack_a0)
                                                            )))), iVar8 != 1)) {
        func_0x004464bc();
        uVar11 = 0x762;
        goto LAB_003ad170;
      }
LAB_003ad468:
      iVar8 = func_0x003b6508(param_1,unaff_x25,uStack_98);
      if (iVar8 == 0) goto LAB_003acff0;
    }
LAB_003ad47c:
    piVar19 = *(int **)(param_1 + 0x18);
    uVar17 = *(uint *)(*(long *)(piVar19 + 0x36) + 0x50);
    unaff_x25 = (ulong)uVar17;
    if (((uVar17 >> 3 & 1) == 0) && (0x303 < *piVar19)) {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
      iVar8 = iVar21;
      if (*piVar19 != 0x10000) {
        iVar8 = 1;
      }
      if (iVar8 != 0) {
LAB_003ad4ac:
        if (uStack_b8 == 0) {
          if ((*(ulong *)(param_1 + 0x948) == unaff_x22) &&
             (iVar8 = _memcmp(pbStack_c0,param_1 + 0x928,unaff_x22), iVar8 == 0)) goto LAB_003ad52c;
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x79b,"tls_process_server_hello");
          uVar11 = 0x2f;
          puVar13 = (undefined *)0x3e7;
        }
        else {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x793,"tls_process_server_hello");
          uVar11 = 0x2f;
          puVar13 = (undefined *)0x155;
        }
        goto LAB_003acfe8;
      }
LAB_003ad52c:
      if (iVar21 == 0) goto LAB_003ad558;
      iVar8 = func_0x003b0470(param_1,unaff_x21);
      if (iVar8 == 0) goto LAB_003acff0;
      uVar11 = func_0x003b06b0(param_1,uStack_98);
      uVar14 = 0x7a9;
      goto LAB_003acff8;
    }
    if (iVar21 != 0) goto LAB_003ad4ac;
LAB_003ad558:
    if ((uVar17 >> 3 & 1) == 0) {
// WM - watermarked copy - do not remove
      uVar17 = 0x100;
      if (*piVar19 != 0x10000) {
        uVar17 = 0x200;
      }
      uVar1 = 0x100;
      if (0x303 < *piVar19) {
        uVar1 = uVar17;
      }
      unaff_x25 = (ulong)uVar1;
    }
    else {
      unaff_x25 = 0x100;
    }
    iVar8 = func_0x019e7138(param_1,unaff_x25,uStack_98);
    if (iVar8 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x7b5,"tls_process_server_hello");
      uVar11 = 0x2f;
      puVar13 = (undefined *)0x6e;
/*  no support for modified copies  */
      goto LAB_003acfe8;
    }
    *(undefined4 *)(param_1 + 0x508) = 0;
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
        (iVar8 = **(int **)(param_1 + 0x18), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
      iVar8 = func_0x00393d54(param_1 + 0xe10);
      if (iVar8 == 0) {
        iVar8 = func_0x0039c300(param_1,0x1e,0x200,uStack_98,0,0);
        if (iVar8 == 0) goto LAB_003acff0;
        goto LAB_003ad6f4;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x7c2,"tls_process_server_hello");
      uVar11 = 10;
      puVar13 = (undefined *)0xb6;
      goto LAB_003acfe8;
    }
    if (((0x300 < *(int *)(param_1 + 0x48)) && (*(code **)(param_1 + 0xae8) != (code *)0x0)) &&
       (*(long *)(*(long *)(param_1 + 0x900) + 0x328) != 0)) {
/* origin: github.com/pengussy - github.com/pengussy */
      lStack_b0 = 0;
      uStack_b4 = 0x200;
      iVar8 = (**(code **)(param_1 + 0xae8))
                        (uVar22,*(long *)(param_1 + 0x900) + 0x50,&uStack_b4,0,&lStack_b0,
                         *(undefined8 *)(param_1 + 0xaf0));
      if ((iVar8 == 0) || ((int)uStack_b4 < 1)) {
        func_0x004464bc();
        uVar11 = 0x7ec;
        goto LAB_003ad170;
      }
      lVar20 = *(long *)(param_1 + 0x900);
      *(ulong *)(lVar20 + 8) = (ulong)uStack_b4;
      lVar9 = lStack_b0;
      if (lStack_b0 == 0) {
        lVar9 = func_0x00355fa4(param_1,unaff_x21,0);
        lVar20 = *(long *)(param_1 + 0x900);
      }
      *(long *)(lVar20 + 0x2f8) = lVar9;
    }
    if (((bVar3 == 0) ||
        (piVar19 = *(int **)(param_1 + 0x900), *(ulong *)(piVar19 + 0x94) != unaff_x22)) ||
       (iVar8 = _memcmp(pbStack_c0,piVar19 + 0x96,unaff_x22), iVar8 != 0)) {
LAB_003ad6f4:
      piVar19 = *(int **)(param_1 + 0x900);
      if (*(int *)(param_1 + 0x508) != 0) goto LAB_003ad700;
      if (*(long *)(piVar19 + 0x94) != 0) {
        piVar19 = (int *)(*(long *)(param_1 + 0xd40) + 0x90);
        iVar8 = *piVar19;
        *piVar19 = iVar8 + 1;
        iVar8 = func_0x0036194c(CONCAT44((int)((ulong)piVar19 >> 0x20),iVar8),param_1,0);
/* wm:more drops soon - github.com/pengussy */
        if (iVar8 == 0) goto LAB_003acff0;
        piVar19 = *(int **)(param_1 + 0x900);
      }
      *piVar19 = *(int *)(param_1 + 0x48);
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
           (iVar8 = **(int **)(param_1 + 0x18), iVar8 < 0x304)) || (iVar8 == 0x10000)) &&
         (*(ulong *)(piVar19 + 0x94) = unaff_x22, bVar3 != 0)) {
        _memcpy(piVar19 + 0x96,pbStack_c0,unaff_x22);
        piVar19 = *(int **)(param_1 + 0x900);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x508) = 1;
LAB_003ad700:
      if ((*(long *)(param_1 + 0x8d8) != *(long *)(piVar19 + 0x9e)) ||
         (iVar8 = _memcmp(piVar19 + 0xa0,param_1 + 0x8e0), iVar8 != 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x7fe,"tls_process_server_hello");
        uVar11 = 0x2f;
        puVar13 = (undefined *)0x110;
        goto LAB_003acfe8;
      }
    }
    iVar8 = *(int *)(param_1 + 0x48);
    if (iVar8 != *piVar19) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x824,"tls_process_server_hello");
      uVar11 = 0x46;
      puVar13 = (undefined *)0xd2;
      goto LAB_003acfe8;
    }
    *(int *)(param_1 + 0x418) = iVar8;
    *(int *)(param_1 + 0x41c) = iVar8;
    iVar8 = func_0x003b0470(param_1,unaff_x21);
    if (iVar8 == 0) goto LAB_003acff0;
    if ((*(int *)(param_1 + 0x508) != 0) &&
/* wm:proprietary - see LICENSE - do not sell */
       (*(uint *)(*(long *)(param_1 + 0x900) + 0x2f0) != uStack_b8)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                      ,0x844,"tls_process_server_hello");
      uVar11 = 0x2f;
      puVar13 = (undefined *)0x158;
      goto LAB_003acfe8;
    }
    if (uStack_b8 != 0) {
      iVar8 = func_0x003b59e8(param_1);
      if (iVar8 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x84a,"tls_process_server_hello");
        uVar11 = 0x2f;
        puVar13 = (undefined *)0x157;
      }
      else {
        lVar9 = func_0x00355f48(*(undefined8 *)(*(long *)(param_1 + 8) + 0x118),uStack_b8);
        if (lVar9 != 0) goto LAB_003ad8cc;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x853,"tls_process_server_hello");
        uVar11 = 0x2f;
        puVar13 = (undefined *)0x101;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      }
      goto LAB_003acfe8;
    }
    lVar9 = 0;
LAB_003ad8cc:
    *(long *)(param_1 + 0x390) = lVar9;
    iVar8 = func_0x0039c418(param_1,unaff_x25,uStack_98,0,0,1);
    if (iVar8 == 0) goto LAB_003acff0;
    puVar23 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
    if ((*(byte *)(puVar23 + 10) >> 3 & 1) == 0) {
      iVar8 = **(int **)(param_1 + 0x18);
      uVar11 = 3;
      uVar14 = 0x8a3;
      if ((0x303 < iVar8) && (iVar8 != 0x10000)) {
        iVar8 = (*(code *)*puVar23)(param_1,extraout_x1,0x8a3);
        if ((((iVar8 == 0) || (iVar8 = func_0x0036cc5c(param_1), iVar8 == 0)) ||
            ((((*(byte *)(param_1 + 0x161) >> 5 & 1) != 0 ||
              ((*(int *)(param_1 + 0xf0) == 0 && ((*(byte *)(param_1 + 0x9b2) >> 4 & 1) == 0)))) &&
             (iVar8 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))
                                (param_1,0x92), iVar8 == 0)))) ||
           (iVar8 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0x91),
           iVar8 == 0)) goto LAB_003acff0;
        uVar14 = 0x8a3;
      }
    }
    else {
      uVar11 = 3;
      uVar14 = 0x8a3;
    }
  }
LAB_003acff8:
  func_0x004743e4(uStack_98,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
// thanks for reading - discord.gg/sdkhDjTex
                  ,uVar14);
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_68) {
    return uVar11;
  }
  auVar27 = ___stack_chk_fail();
  plVar12 = auVar27._8_8_;
  lVar9 = auVar27._0_8_;
  puStack_c8 = &LAB_003ada04;
  lStack_118 = 0;
  uStack_110 = uVar24;
  uStack_108 = unaff_x25;
  uStack_100 = uVar22;
  lStack_f8 = unaff_x23;
  uStack_f0 = unaff_x22;
  pbStack_e8 = unaff_x21;
  uStack_e0 = uVar11;
  lStack_d8 = param_1;
  lStack_d0 = lVar10;
  if (*(char *)(lVar9 + 0xb5a) != '\0') {
    if (*(char *)(lVar9 + 0xb5a) == '\x02') {
      puStack_140 = (ushort *)0x0;
      uVar22 = func_0x003b486c(lVar9,plVar12,&puStack_140);
      if ((int)uVar22 == 0) {
        return uVar22;
      }
      if (puStack_140 == (ushort *)0x0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,0x8f1,&UNK_01c3adc8);
        func_0x003a9570(lVar9,0x32,0x15c,0);
        return 0;
      }
      func_0x0045eb4c(*(undefined8 *)(*(long *)(lVar9 + 0x900) + 0x2b8));
      *(ushort **)(*(long *)(lVar9 + 0x900) + 0x2b8) = puStack_140;
      return 2;
    }
// reversing this took months of machine time
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x94d,&UNK_01c3addf);
    uVar22 = 0x2b;
    puVar13 = (undefined *)0xf7;
    goto code_r0x003adb74;
  }
  puVar23 = *(undefined8 **)(lVar9 + 8);
  uVar22 = func_0x004dc0f0();
  lVar10 = func_0x004dc468(uVar22,&DAT_003b07e8);
  *(long *)(*(long *)(lVar9 + 0x900) + 0x2c8) = lVar10;
  if (lVar10 == 0) {
    func_0x004464bc();
    uVar22 = 0x952;
code_r0x003adb5c:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar22,&UNK_01c3addf);
    puVar13 = &UNK_0008000f;
    uVar22 = 0x50;
    goto code_r0x003adb74;
  }
  if ((((*(byte *)(*(long *)(*(int **)(lVar9 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar8 = **(int **)(lVar9 + 0x18), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
    if (plVar12[2] != 0) {
      cVar2 = *(char *)*plVar12;
      *plVar12 = (long)((char *)*plVar12 + 1);
      plVar12[2] = plVar12[2] + -1;
      if (cVar2 == '\0') goto code_r0x003adae0;
    }
  }
  else {
code_r0x003adae0:
    if (2 < (ulong)plVar12[2]) {
      pbVar18 = (byte *)*plVar12;
      bVar3 = *pbVar18;
      bVar4 = pbVar18[1];
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      bVar5 = pbVar18[2];
      *plVar12 = (long)(pbVar18 + 3);
      uVar24 = plVar12[2] - 3;
      plVar12[2] = uVar24;
      if ((uVar24 != 0) &&
         (uVar16 = (ulong)bVar3 << 0x10 | (ulong)bVar4 << 8 | (ulong)bVar5, uVar24 == uVar16)) {
        lVar20 = 0;
        while (uVar24 = uVar16 - 3, 2 < uVar16) {
          pbVar18 = (byte *)*plVar12;
          uVar16 = (ulong)*pbVar18 << 0x10 | (ulong)pbVar18[1] << 8 | (ulong)pbVar18[2];
          pbVar18 = pbVar18 + 3;
          *plVar12 = (long)pbVar18;
          plVar12[2] = uVar24;
          if (uVar24 < uVar16) break;
          *plVar12 = (long)(pbVar18 + uVar16);
          plVar12[2] = uVar24 - uVar16;
          pbStack_120 = pbVar18;
          lStack_118 = func_0x00506794(*puVar23,puVar23[0x91]);
          if (lStack_118 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x968,&UNK_01c3addf);
            uVar22 = 0x32;
code_r0x003ade00:
            puVar13 = &UNK_0008000d;
/* donate: donate/README.md */
            goto code_r0x003adb74;
          }
          lVar10 = func_0x005066fc(&lStack_118,&pbStack_120,uVar16);
          if (lVar10 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x96e,&UNK_01c3addf);
            uVar22 = 0x2a;
            goto code_r0x003ade00;
          }
          if (pbStack_120 != pbVar18 + uVar16) {
            func_0x004464bc();
            uVar22 = 0x973;
            goto code_r0x003ade24;
          }
          if ((((*(byte *)(*(long *)(*(int **)(lVar9 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
              (iVar8 = **(int **)(lVar9 + 0x18), 0x303 < iVar8)) && (iVar8 != 0x10000)) {
            uStack_128 = 0;
            uVar24 = plVar12[2] - 2;
            if (1 < (ulong)plVar12[2]) {
              puVar15 = (ushort *)*plVar12 + 1;
              uVar6 = *(ushort *)*plVar12;
              uVar16 = (ulong)((uint)(uVar6 >> 8) | (uVar6 & 0xff00ff) << 8);
              if (uVar16 <= uVar24) {
                lStack_138 = plVar12[1];
                *plVar12 = (long)puVar15 + uVar16;
                plVar12[2] = uVar24 - uVar16;
/* more drops soon - github.com/pengussy */
                puStack_140 = puVar15;
                uStack_130 = uVar16;
                iVar8 = func_0x0039bb1c(lVar9,&puStack_140,0x1000,&uStack_128,0,lVar20 == 0);
                if ((iVar8 != 0) &&
                   (iVar8 = func_0x0039c418(lVar9,0x1000,uStack_128,lStack_118,lVar20,
                                            plVar12[2] == 0), iVar8 != 0)) {
                  func_0x004743e4(uStack_128,
                                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                  ,0x989);
                  goto code_r0x003add34;
                }
                func_0x004743e4(uStack_128,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0x985);
                goto code_r0x003adb7c;
              }
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                            ,0x97c,&UNK_01c3addf);
            uVar22 = 0x32;
            puVar13 = (undefined *)0x10f;
            goto code_r0x003adb74;
          }
code_r0x003add34:
          iVar8 = func_0x004dc9ec(*(undefined8 *)(*(long *)(lVar9 + 0x900) + 0x2c8),lStack_118);
          if (iVar8 == 0) {
            func_0x004464bc();
            uVar22 = 0x98d;
            goto code_r0x003adb5c;
          }
          lStack_118 = 0;
          lVar20 = lVar20 + 1;
          uVar16 = plVar12[2];
/* reversing this took months of machine time */
          lVar10 = 2;
          if (uVar16 == 0) {
            return 2;
          }
        }
        func_0x004464bc(lVar10);
        uVar22 = 0x961;
code_r0x003ade24:
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                        ,uVar22,&UNK_01c3addf);
        uVar22 = 0x32;
        puVar13 = (undefined *)0x87;
        goto code_r0x003adb74;
      }
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                  ,0x95b,&UNK_01c3addf);
  uVar22 = 0x32;
  puVar13 = (undefined *)0x9f;
/* thanks for reading - discord.gg/sdkhDjTex */
code_r0x003adb74:
  func_0x003a9570(lVar9,uVar22,puVar13,0);
code_r0x003adb7c:
  func_0x00506714(lStack_118);
  func_0x004e4d60(*(undefined8 *)(*(long *)(lVar9 + 0x900) + 0x2c8));
  *(undefined8 *)(*(long *)(lVar9 + 0x900) + 0x2c8) = 0;
  return 0;
}

