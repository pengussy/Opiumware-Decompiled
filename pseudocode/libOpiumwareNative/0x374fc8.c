/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x374fc8:8a1f123173
 */

/* WARNING: Possible PIC construction at 0x003750fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00375100) */
/* WARNING: Removing unreachable block (ram,0x00377a50) */
/* WARNING: Removing unreachable block (ram,0x00377b8c) */
/* WARNING: Removing unreachable block (ram,0x00377a5c) */
/* WARNING: Removing unreachable block (ram,0x00377a68) */
/* WARNING: Removing unreachable block (ram,0x00377a6c) */
/* WARNING: Removing unreachable block (ram,0x00377a70) */

void FUN_00374fc8(ulong param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined8 *unaff_x19;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong uVar14;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_b0 [128];
  
  puVar2 = auStack_b0;
  uVar14 = param_2[0xc4];
  if ((uVar14 & 0x400000400) == 0x400) {
    unaff_x21 = func_0x00374074(param_2[0x83]);
    param_2[0xc4] = param_2[0xc4] & 0xffffffff7fffffff | 0x600000000;
    param_2[0xc3] = param_1;
    uVar5 = func_0x00380b40(*param_2);
    lVar9 = uVar5 + unaff_x21;
    if (CARRY8(uVar5,unaff_x21)) {
      lVar9 = -1;
    }
    param_2[0xc1] = lVar9;
    param_2[0xc4] = param_2[0xc4] & 0xffffffefffffffff;
    if ((int)uVar14 < 0) {
LAB_0037507c:
      *(ushort *)(param_2[0x1b] + 0x1e8) = *(ushort *)(param_2[0x1b] + 0x1e8) | 0x40;
      return;
    }
    uVar5 = func_0x0038df88(param_2[0x1b],2);
    unaff_x20 = param_1;
    if ((uVar5 >> 0x3e == 0) &&
       (iVar4 = func_0x0038551c(param_2[0x84]), unaff_x20 = uVar5, iVar4 != 0)) {
      param_2[0xc2] = uVar5;
      param_2[0xc4] =
           param_2[0xc4] & 0xffffffefffffffff | (param_2[0xc4] & 0x80000000) << 5 | 0x100000000;
      goto LAB_0037507c;
    }
/*  found on a paste site? it was re-uploaded illegally  */
    pcVar10 = "key update";
    pcVar12 = "ch_trigger_txku";
    lVar9 = 1;
    uVar11 = 0x31d;
    unaff_x30 = 0x375100;
    register0x00000008 = (BADSPACEBASE *)(auStack_b0 + 0x80);
    unaff_x19 = param_2;
    unaff_x22 = uVar14;
    unaff_x29 = puVar2 + 0xa0;
  }
  else {
    pcVar10 = "RX key update again too soon";
    pcVar12 = "rxku_detected";
    lVar9 = 0xe;
    uVar11 = 0x3b1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x60) = unaff_x28;
  *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x27;
  *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
  *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(ulong *)((long)register0x00000008 + -0x28) = unaff_x21;
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x90) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
  *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
  uVar13 = 0xc0103;
  if (lVar9 != 1) {
    uVar13 = 0x17e;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
  }
  puVar6 = (undefined *)func_0x00391900(lVar9);
  if ((*(byte *)((long)param_2 + 0x624) >> 6 & 1) != 0) {
    return;
  }
  *(undefined4 *)((long)register0x00000008 + -0x9c) = uVar11;
  *(char **)((long)register0x00000008 + -0x98) = pcVar12;
  bVar3 = puVar6 != (undefined *)0x0;
  puVar1 = &UNK_01cb7848;
  if (bVar3) {
    puVar1 = puVar6;
  }
  puVar6 = &UNK_01cb7848;
  if (bVar3) {
    puVar6 = &UNK_01c36c4d;
  }
  *(undefined **)((long)register0x00000008 + -0xb0) = puVar6;
  *(undefined **)((long)register0x00000008 + -0xa8) = puVar1;
  puVar6 = &UNK_01cb7848;
  if (bVar3) {
    puVar6 = &UNK_01c87452;
  }
  *(undefined **)((long)register0x00000008 + -0xb8) = puVar6;
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                  ,0xddf,&UNK_01c36c50);
  *(undefined8 *)((long)register0x00000008 + -0xe8) =
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
       *(undefined8 *)((long)register0x00000008 + -0xb8);
  *(char **)((long)register0x00000008 + -0xe0) = pcVar10;
  *(undefined8 *)((long)register0x00000008 + -0xf8) =
       *(undefined8 *)((long)register0x00000008 + -0xb0);
  *(undefined8 *)((long)register0x00000008 + -0xf0) =
       *(undefined8 *)((long)register0x00000008 + -0xa8);
  *(long *)((long)register0x00000008 + -0x100) = lVar9;
  func_0x004466b0(0x14,uVar13,&UNK_01c36ccf);
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                  ,*(undefined4 *)((long)register0x00000008 + -0x9c),
                  *(undefined8 *)((long)register0x00000008 + -0x98));
  if (param_2[0xc5] == 0) {
    lVar7 = func_0x00446c9c();
    param_2[0xc5] = lVar7;
    if (lVar7 == 0) goto code_r0x00377aec;
  }
  func_0x00446cac();
code_r0x00377aec:
  *(long *)((long)register0x00000008 + -0x90) = lVar9;
  *(undefined8 *)((long)register0x00000008 + -0x88) = 0;
  *(char **)((long)register0x00000008 + -0x80) = pcVar10;
  uVar8 = _strlen(pcVar10);
  *(undefined8 *)((long)register0x00000008 + -0x78) = uVar8;
  param_2[0xc4] = param_2[0xc4] | 0x4000000000;
  func_0x003772a4(param_2,(undefined1 *)((long)register0x00000008 + -0x90),0);
  return;
}

