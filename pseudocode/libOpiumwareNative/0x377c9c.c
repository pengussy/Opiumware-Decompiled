/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x377c9c:a162016341
 */

/* WARNING: Possible PIC construction at 0x00377f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00377f4c) */
/* WARNING: Removing unreachable block (ram,0x00377b3c) */
/* WARNING: Removing unreachable block (ram,0x00377a50) */
/* WARNING: Removing unreachable block (ram,0x00377b8c) */

void FUN_00377c9c(long param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 uVar14;
  ulong uVar15;
  long unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  ulong unaff_x22;
  ulong uVar16;
  ulong unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
/*  keep the notice, keep the source honest  */
  undefined8 unaff_x30;
  ulong uVar17;
  ulong uVar18;
  undefined8 auStack_90 [2];
  undefined8 uStack_80;
  undefined1 auStack_78 [56];
  
  puVar3 = auStack_78;
  if ((*(ulong *)(param_1 + 0x620) & 7) != 1) {
    return;
  }
  if (*(char *)(param_1 + 0x4e1) == '\0') {
    pcVar11 = "zero length connection id in use";
    pcVar13 = "ossl_quic_channel_on_new_conn_id";
    lVar10 = 10;
    uVar12 = 0xd0a;
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x4f8);
    uVar16 = *(ulong *)(param_1 + 0x500);
    uVar18 = *param_2;
    uVar17 = uVar18;
    if (uVar18 <= uVar15) {
// WM - thanks for reading - discord.gg/sdkhDjTex
      uVar17 = uVar15;
    }
    uVar2 = param_2[1];
    if (param_2[1] <= uVar16) {
      uVar2 = uVar16;
    }
    if (uVar17 - uVar2 < 2) {
      if (uVar2 - uVar16 < 0xb) {
        if (uVar18 <= uVar15) {
LAB_00377e14:
          unaff_x22 = uVar16;
          if (unaff_x22 < uVar2) {
            unaff_x21 = &DAT_00379c58;
            do {
              func_0x00388488(*(undefined8 *)(param_1 + 0x40),param_1,unaff_x22);
              unaff_x20 = func_0x00400364();
              if ((unaff_x20 == 0) || (iVar5 = func_0x019ebd10(auStack_78,unaff_x20), iVar5 == 0)) {
LAB_00377f1c:
                pcVar11 = "internal error enqueueing retire conn id";
                pcVar13 = "ch_enqueue_retire_conn_id";
                lVar10 = 1;
                uVar12 = 0xcf6;
                unaff_x30 = 0x377f4c;
                register0x00000008 = (BADSPACEBASE *)auStack_90;
                unaff_x19 = param_1;
                unaff_x23 = uVar2;
                unaff_x29 = puVar3 + 0x68;
                goto code_r0x003779a4;
              }
              iVar5 = func_0x0038f164(auStack_78,unaff_x22);
              if (iVar5 == 0) {
                func_0x0047680c(auStack_78);
                goto LAB_00377f1c;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
              }
              func_0x004765c8(auStack_78);
              iVar5 = func_0x019ec1d8(auStack_78,&uStack_80);
              if (iVar5 == 0) goto LAB_00377f1c;
              auStack_90[0] = 0;
              lVar10 = func_0x003742b8(*(undefined8 *)(param_1 + 0xe8),1,2,0x19,0,
                                       *(undefined8 *)(unaff_x20 + 8),uStack_80,&DAT_00379c58);
              if (lVar10 == 0) goto LAB_00377f1c;
              *(undefined8 *)(unaff_x20 + 8) = 0;
              func_0x00400378(unaff_x20);
              unaff_x22 = *(long *)(param_1 + 0x500) + 1;
              *(ulong *)(param_1 + 0x500) = unaff_x22;
            } while (unaff_x22 < uVar2);
          }
          return;
        }
        iVar5 = func_0x003881f4(*(undefined8 *)(param_1 + 0x40),param_1,uVar18,(long)param_2 + 0x25)
        ;
        if (iVar5 != 0) {
          *(ulong *)(param_1 + 0x4f8) = uVar18;
          uVar18 = param_2[3];
          uVar17 = param_2[2];
          *(undefined8 *)(param_1 + 0x4ee) = *(undefined8 *)((long)param_2 + 0x1d);
          *(ulong *)(param_1 + 0x4e9) = uVar18;
          *(ulong *)(param_1 + 0x4e1) = uVar17;
          func_0x0038b920(*(undefined8 *)(param_1 + 0xd8));
          uVar16 = *(ulong *)(param_1 + 0x500);
          goto LAB_00377e14;
        }
        pcVar11 = "unable to store stateless reset token";
/* WM - if you paid for this, you were scammed */
        pcVar13 = "ossl_quic_channel_on_new_conn_id";
        lVar10 = 9;
        uVar12 = 0xd45;
      }
      else {
        pcVar11 = "retiring connection id limit violated";
        pcVar13 = "ossl_quic_channel_on_new_conn_id";
        lVar10 = 9;
        uVar12 = 0xd39;
      }
    }
    else {
      pcVar11 = "active_connection_id limit violated";
      pcVar13 = "ossl_quic_channel_on_new_conn_id";
      lVar10 = 9;
      uVar12 = 0xd22;
    }
  }
code_r0x003779a4:
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(ulong *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
/* WM - watermarked copy - do not remove */
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  uVar14 = 0xc0103;
  if (lVar10 != 1) {
    uVar14 = 0x17e;
  }
  puVar6 = (undefined *)func_0x00391900(lVar10);
  if ((*(byte *)(param_1 + 0x624) >> 6 & 1) != 0) {
    return;
  }
  *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar12;
  *(char **)((long)register0x00000008 + -0x98) = pcVar13;
  bVar4 = puVar6 != (undefined *)0x0;
  puVar7 = &UNK_01cb7848;
  if (bVar4) {
    puVar7 = puVar6;
  }
  puVar6 = &UNK_01cb7848;
  if (bVar4) {
    puVar6 = &UNK_01c36c4d;
  }
  *(undefined **)((long)register0x00000008 + -0xb0) = puVar6;
  *(undefined **)((long)register0x00000008 + -0xa8) = puVar7;
  puVar6 = &UNK_01cb7848;
  if (bVar4) {
    puVar6 = &UNK_01c87452;
  }
  *(undefined **)((long)register0x00000008 + -0xb8) = puVar6;
  puVar7 = (undefined *)func_0x003918e0(0x18);
  bVar4 = puVar7 != (undefined *)0x0;
  puVar6 = &UNK_01cb7848;
  if (bVar4) {
    puVar6 = puVar7;
  }
  puVar7 = &UNK_01cb7848;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (bVar4) {
    puVar7 = &UNK_01c36c4d;
  }
  puVar1 = &UNK_01cb7848;
  if (bVar4) {
    puVar1 = &UNK_01c87452;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                  ,0xdd6,&UNK_01c36c50);
  *(undefined **)((long)register0x00000008 + -200) = puVar1;
  *(char **)((long)register0x00000008 + -0xc0) = pcVar11;
  *(undefined **)((long)register0x00000008 + -0xd8) = puVar7;
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar6;
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
       *(undefined8 *)((long)register0x00000008 + -0xb8);
  *(undefined8 *)((long)register0x00000008 + -0xe0) = 0x18;
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(long *)((long)register0x00000008 + -0x100) = lVar10;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  func_0x004466b0(0x14,uVar14,&UNK_01c36c7b);
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                  ,*(undefined4 *)((long)register0x00000008 + -0x9c),
                  *(undefined8 *)((long)register0x00000008 + -0x98));
  if (*(long *)(param_1 + 0x628) == 0) {
    lVar8 = func_0x00446c9c();
    *(long *)(param_1 + 0x628) = lVar8;
    if (lVar8 == 0) goto code_r0x00377aec;
  }
  func_0x00446cac();
code_r0x00377aec:
  *(long *)((long)register0x00000008 + -0x90) = lVar10;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0x18;
  *(char **)((long)register0x00000008 + -0x80) = pcVar11;
  uVar9 = _strlen(pcVar11);
  *(undefined8 *)((long)register0x00000008 + -0x78) = uVar9;
  *(ulong *)(param_1 + 0x620) = *(ulong *)(param_1 + 0x620) | 0x4000000000;
  func_0x003772a4(param_1,(undefined1 *)((long)register0x00000008 + -0x90),0);
  return;
}

