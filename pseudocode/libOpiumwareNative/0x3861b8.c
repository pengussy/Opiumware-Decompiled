/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3861b8:30faf2accf
 */

void FUN_003861b8(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  dword *pdVar12;
  char *pcVar13;
  byte bVar14;
  char *pcVar15;
/* wm:found on a paste site? it was re-uploaded illegally */
  ulong uVar16;
  undefined4 uVar17;
  undefined8 *unaff_x19;
  long lVar18;
  dword *unaff_x28;
  dword *pdVar19;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  dword *pdStack_c8;
  int iStack_c0;
  int iStack_bc;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  byte bStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  lVar11 = lStack_d0;
  if (param_1 == (undefined8 *)0x0) goto LAB_00386bc8;
  uVar9 = param_2[3];
  param_1[0xc4] = param_1[0xc4] & 0xffffffffefffffff;
  uStack_f0 = 0;
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  bVar14 = *(byte *)*param_2;
  unaff_x19 = param_1;
  if (bVar14 < 3) {
// reversing this took months of machine time
    if (bVar14 == 1) {
      lVar18 = 0;
      bVar14 = 0;
    }
    else {
      if (bVar14 != 2) goto LAB_00386bc8;
      lVar18 = 1;
      bVar14 = 2;
    }
LAB_00386264:
    uStack_f0 = (ulong)bVar14;
    func_0x0038b3bc(param_1[0x1b]);
    pcVar15 = (char *)*param_2;
    lVar1 = *(long *)(pcVar15 + 0x48);
    lVar11 = lStack_d0;
  }
  else {
    if (bVar14 != 3) {
      if (bVar14 != 5) goto LAB_00386bc8;
      bVar14 = 2;
      lVar18 = 3;
      goto LAB_00386264;
    }
    uStack_f0 = 1;
/* WM - origin: github.com/pengussy */
    func_0x0038b3b0(param_1[0x1b],uVar9);
    lVar18 = 2;
    pcVar15 = (char *)*param_2;
    lVar1 = *(long *)(pcVar15 + 0x48);
    lVar11 = lStack_d0;
  }
  lStack_d0 = lVar1;
  if (lStack_d0 < 0) {
LAB_00386bc8:
    while (lStack_d0 = lVar11, uVar9 = 0, param_1 = unaff_x19,
          *(long *)PTR____stack_chk_guard_01f20200 != lStack_70) {
LAB_00386c28:
      ___stack_chk_fail(uVar9);
LAB_00386c2c:
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_stream";
      lVar11 = 7;
      uVar9 = 0x202;
      pdVar12 = unaff_x28;
LAB_00386bc0:
      func_0x003779a4(param_1,lVar11,pdVar12,pcVar15,0,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rx_depack.c"
                      ,uVar9,pcVar13);
      unaff_x19 = param_1;
      lVar11 = lStack_d0;
    }
    return;
/* watermarked copy - do not remove - github.com/pengussy */
  }
  lStack_e0 = *(long *)(pcVar15 + 0x50);
  lStack_d8 = lStack_e0;
  if (lStack_d0 == 0) {
    pcVar15 = "empty packet payload";
    pcVar13 = "depack_process_frames";
    lVar11 = 10;
    uVar9 = 0x427;
    pdVar12 = (dword *)0x0;
    goto LAB_00386bc0;
  }
  uVar2 = *(undefined4 *)(&UNK_01ae6d80 + lVar18 * 4);
  uVar9 = param_2[5];
  cVar3 = *pcVar15;
  pdVar19 = unaff_x28;
LAB_0038632c:
  lVar1 = 0;
  if (param_1[0x86] != 0) {
    lVar1 = lStack_e0;
  }
  iVar5 = func_0x0038f464(&lStack_e0,&pdStack_c8,&iStack_c0);
  unaff_x28 = pdStack_c8;
  if (iVar5 == 0) {
    pcVar15 = "malformed frame header";
    pcVar13 = "depack_process_frames";
    lVar11 = 10;
    uVar9 = 0x438;
    pdVar12 = (dword *)0x0;
    unaff_x28 = pdVar19;
    goto LAB_00386bc0;
  }
  pdVar12 = unaff_x28;
  if (iStack_c0 == 0) {
    pcVar15 = "non-minimal frame type encoding";
    pcVar13 = "depack_process_frames";
    lVar11 = 10;
// found on a paste site? it was re-uploaded illegally
    uVar9 = 0x440;
    goto LAB_00386bc0;
  }
  if ((undefined1 *)((long)&MACH_HEADER.reserved + 1) < pdStack_c8 ||
      (1L << ((ulong)pdStack_c8 & 0x3f) & 0x3000000dU) == 0) {
    uStack_f0 = uStack_f0 | 4;
  }
  if ((undefined1 *)((long)&MACH_HEADER.reserved + 2) < pdStack_c8) {
    pcVar15 = "Unknown frame type received";
    pcVar13 = "depack_process_frames";
    lVar11 = 7;
    uVar9 = 0x577;
    goto LAB_00386bc0;
  }
  switch(pdStack_c8) {
  case (dword *)0x0:
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    func_0x00391154(&lStack_e0);
    break;
  case (dword *)0x1:
    iVar5 = func_0x003911b0(&lStack_e0);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_ping";
      lVar11 = 7;
      pdVar12 = (dword *)((long)&MACH_HEADER.magic + 1);
      uVar9 = 0x35;
      goto LAB_00386bc0;
    }
    func_0x0038babc(param_1[0x1b],lVar18);
    break;
  case (dword *)0x2:
  case (dword *)0x3:
    if (cVar3 == '\x02') {
      pcVar15 = "ACK not valid in 0-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x469;
      goto LAB_00386bc0;
    }
    uStack_b0 = 0;
    uVar4 = *(undefined1 *)(param_1 + 0xa9);
    iVar5 = func_0x0038f5b0(&lStack_e0,&uStack_b0);
    if ((iVar5 == 0) || (uStack_b0 >> 0x3c != 0)) {
// WM - do not claim this as your own
LAB_00386c5c:
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_ack";
      lVar11 = 7;
      uVar9 = 0x8a;
      goto LAB_00386bc0;
    }
    uVar6 = param_1[0xc6];
    if ((ulong)param_1[199] < uStack_b0) {
      uVar6 = func_0x019eb634(uVar6,uStack_b0 << 4,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rx_depack.c"
                              ,0x4f);
      if (uVar6 == 0) goto LAB_00386c5c;
      param_1[0xc6] = uVar6;
      param_1[199] = uStack_b0;
    }
    uStack_a8 = uVar6;
    uStack_a0 = uStack_b0;
    iVar5 = func_0x0038f6e4(&lStack_e0,uVar4,&uStack_a8,0);
    if (iVar5 == 0) goto LAB_00386c5c;
    if ((*(char *)*param_2 == '\x05') &&
       (((uVar16 = param_2[7], uVar6 = func_0x00383fc8(param_1[0x85]), uVar16 < uVar6 ||
         ((*(byte *)((long)param_1 + 0x624) >> 4 & 1) != 0)) &&
        ((ulong)param_1[0xc2] <= *(ulong *)(uStack_a8 + 8))))) {
      pcVar15 = "acked packet which initiated a key update without a corresponding key update";
      pcVar13 = "depack_do_frame_ack";
      lVar11 = 0xe;
      uVar9 = 0x7b;
      goto LAB_00386bc0;
    }
    iVar5 = func_0x00372c48(param_1[0x83],&uStack_a8,uVar2,uVar9);
    if (iVar5 == 0) goto LAB_00386c5c;
// chat: discord.gg/sdkhDjTex
    uVar6 = 0;
    *(short *)((long)param_1 + 0x54a) = *(short *)((long)param_1 + 0x54a) + 1;
    goto LAB_00386b14;
  case (dword *)0x4:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "RESET_STREAM not valid in INITIAL/HANDSHAKE";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x479;
      pdVar12 = &MACH_HEADER.cputype;
      goto LAB_00386bc0;
    }
    uStack_b0 = 0;
    iVar5 = func_0x0038fb20(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_reset_stream";
      lVar11 = 7;
      uVar9 = 0x9a;
      pdVar12 = &MACH_HEADER.cputype;
      goto LAB_00386bc0;
    }
    iVar5 = func_0x003876c8(param_1,uStack_a8,4,&uStack_b0);
    uVar6 = uStack_b0;
    lVar11 = lStack_d0;
    if (iVar5 == 0) goto LAB_00386bc8;
    if (uStack_b0 != 0) {
      if (*(char *)(uStack_b0 + 0x102) == '\0') {
        pcVar15 = "RESET_STREAM frame for TX only stream";
        pcVar13 = "depack_do_frame_reset_stream";
        lVar11 = 5;
        uVar9 = 0xab;
/* wm:origin: github.com/pengussy */
        pdVar12 = &MACH_HEADER.cputype;
        goto LAB_00386bc0;
      }
      iVar5 = func_0x0037a7c4(uStack_b0 + 0xa0,uStack_98,1);
      if (iVar5 == 0) {
        pcVar15 = "internal error (flow control)";
        pcVar13 = "depack_do_frame_reset_stream";
        lVar11 = 1;
        uVar9 = 0xbe;
        pdVar12 = &MACH_HEADER.cputype;
        goto LAB_00386bc0;
      }
      iVar5 = func_0x0037ab00(uVar6 + 0xa0,0);
      if (iVar5 != 0) {
        lVar11 = (long)iVar5;
        pcVar15 = "flow control violation";
        pcVar13 = "depack_do_frame_reset_stream";
        uVar9 = 200;
        pdVar12 = &MACH_HEADER.cputype;
        goto LAB_00386bc0;
      }
      func_0x00389a28(param_1 + 0x6a,uVar6,uStack_a0,uStack_98);
LAB_003868a0:
      func_0x003894ac(param_1 + 0x6a,uVar6);
    }
    break;
  case (dword *)0x5:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "STOP_SENDING not valid in INITIAL/HANDSHAKE";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x487;
/*  proprietary - see LICENSE - do not sell  */
      pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 1);
      goto LAB_00386bc0;
    }
    uStack_b0 = 0;
    iVar5 = func_0x0038fce0(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_stop_sending";
      lVar11 = 7;
      uVar9 = 0xe5;
      pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 1);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x003876c8(param_1,uStack_a8,5,&uStack_b0);
    lVar11 = lStack_d0;
    if (iVar5 == 0) goto LAB_00386bc8;
    if (uStack_b0 != 0) {
      if ((*(ulong *)(uStack_b0 + 0x100) & 0xff00) == 0) {
        pcVar15 = "STOP_SENDING frame for RX only stream";
        pcVar13 = "depack_do_frame_stop_sending";
        lVar11 = 5;
        uVar9 = 0xf6;
        pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 1);
        goto LAB_00386bc0;
      }
      *(ulong *)(uStack_b0 + 0x100) = *(ulong *)(uStack_b0 + 0x100) | 0x8000000;
/*  found on a paste site? it was re-uploaded illegally  */
      *(ulong *)(uStack_b0 + 0x50) = uStack_a0;
      func_0x00389850(param_1 + 0x6a);
    }
    break;
  case (dword *)0x6:
    if (cVar3 == '\x02') {
      pcVar15 = "CRYPTO frame not valid in 0-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x493;
      pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 2);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x0038fe3c(&lStack_e0,0,&uStack_a8);
    if (iVar5 == 0) {
      func_0x019e58ac(param_1);
      lVar11 = lStack_d0;
      goto LAB_00386bc8;
    }
    uVar6 = uStack_a0;
    if (uStack_a0 == 0) goto LAB_00386b14;
    lVar8 = param_1[(uStack_f0 & 3) + 0x8c];
    lVar11 = lStack_d0;
    if (lVar8 == 0) goto LAB_00386bc8;
    unaff_x28 = (dword *)(param_1 + (uStack_f0 & 3) * 0xc + 0x2e);
    iVar5 = func_0x0037a7c4(unaff_x28,uStack_a8 + uStack_a0,0);
    if (iVar5 == 0) {
      func_0x019e5880(param_1);
      lVar11 = lStack_d0;
      goto LAB_00386bc8;
    }
    iVar5 = func_0x0037ab00(unaff_x28,0);
    if (iVar5 != 0) {
      func_0x019e5854(param_1);
      lVar11 = lStack_d0;
      goto LAB_00386bc8;
    }
    iVar5 = func_0x00385e70(lVar8,param_2,uStack_a8,uStack_98,uStack_a0,0);
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    if (iVar5 == 0) {
      func_0x019e5828(param_1);
      lVar11 = lStack_d0;
      goto LAB_00386bc8;
    }
    param_1[0xc4] = param_1[0xc4] | 0x10000000;
    uVar6 = uStack_a0;
    goto LAB_00386b14;
  case (dword *)0x7:
    if (cVar3 != '\x05') {
      pcVar15 = "NEW_TOKEN valid only in 1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x49f;
      pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 3);
      goto LAB_00386bc0;
    }
    if ((*(byte *)((long)param_1 + 0x623) >> 1 & 1) != 0) {
      pcVar15 = "NEW_TOKEN can only be sent by a server";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x4ab;
      pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 3);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x00390008(&lStack_e0,&uStack_a8,&uStack_b0);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_new_token";
      lVar11 = 7;
      uVar9 = 0x151;
      pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 3);
/* thanks for reading - discord.gg/sdkhDjTex */
      goto LAB_00386bc0;
    }
    if (uStack_b0 == 0) {
      pcVar15 = "zero-length NEW_TOKEN";
      pcVar13 = "depack_do_frame_new_token";
      lVar11 = 7;
      uVar9 = 0x15e;
      pdVar12 = (dword *)((long)&MACH_HEADER.cputype + 3);
      goto LAB_00386bc0;
    }
    uVar7 = func_0x0035ded8(*param_1);
    iVar5 = func_0x0037e308(uVar7,param_1 + 0xd,uStack_a8,uStack_b0);
    lVar11 = lStack_d0;
    if (iVar5 == 0) goto LAB_00386bc8;
    break;
  default:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "STREAM valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x4c1;
      goto LAB_00386bc0;
    }
    iStack_bc = 0;
    iVar5 = func_0x00390138(&lStack_e0,0,&uStack_a8);
/* unlicensed copy if this notice is missing */
    if (iVar5 == 0) goto LAB_00386c2c;
    iVar5 = func_0x003876c8(param_1,uStack_a8,unaff_x28,&uStack_b0);
    uVar6 = uStack_b0;
    lVar11 = lStack_d0;
    if (iVar5 == 0) goto LAB_00386bc8;
    if (uStack_b0 != 0) {
      if (*(char *)(uStack_b0 + 0x102) == '\0') {
        pcVar15 = "STREAM frame for TX only stream";
        pcVar13 = "depack_do_frame_stream";
        lVar11 = 5;
        uVar9 = 0x216;
        goto LAB_00386bc0;
      }
      iVar5 = func_0x0037a7c4(uStack_b0 + 0xa0,uStack_98 + uStack_a0,bStack_88 >> 1 & 1);
      if (iVar5 == 0) {
        pcVar15 = "internal error (flow control)";
        pcVar13 = "depack_do_frame_stream";
        lVar11 = 1;
        uVar9 = 0x221;
        goto LAB_00386bc0;
      }
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      iVar5 = func_0x0037ab00(uVar6 + 0xa0,0);
      if (iVar5 != 0) {
        lVar11 = (long)iVar5;
        pcVar15 = "flow control violation";
        pcVar13 = "depack_do_frame_stream";
        uVar9 = 0x22b;
        goto LAB_00386bc0;
      }
      if (*(byte *)(uVar6 + 0x102) - 1 < 2) {
        if (((bStack_88 >> 1 & 1) != 0) &&
           ((4 < *(byte *)(uVar6 + 0x102) - 2 ||
            (iVar5 = func_0x0037ab14(uVar6 + 0xa0,0), iVar5 == 0)))) {
          func_0x00389978(param_1 + 0x6a,uVar6,uStack_98 + uStack_a0);
        }
        uVar16 = *(ulong *)(uVar6 + 0x100);
        if (((uint)uVar16 >> 0x1a & 1) == 0) {
          if ((uStack_98 != 0) || ((bStack_88 >> 1 & 1) != 0)) {
            iVar5 = func_0x00385e70(*(undefined8 *)(uVar6 + 0x78),param_2,uStack_a0,uStack_90,
                                    uStack_98,bStack_88 >> 1 & 1);
            if (iVar5 == 0) {
              pcVar15 = "internal error (rstream queue)";
              pcVar13 = "depack_do_frame_stream";
              lVar11 = 1;
              uVar9 = 0x269;
              goto LAB_00386bc0;
            }
            uVar16 = *(ulong *)(uVar6 + 0x100);
          }
          if ((uVar16 & 0xff0000) == 0x20000) {
            iVar5 = func_0x00385fb4(*(undefined8 *)(uVar6 + 0x78),&uStack_b8,&iStack_bc);
/*  no support for modified copies  */
            if (iVar5 == 0) {
              pcVar15 = "internal error (rstream available)";
              pcVar13 = "depack_do_frame_stream";
              lVar11 = 1;
              uVar9 = 0x278;
              goto LAB_00386bc0;
            }
            if (iStack_bc != 0) {
              func_0x003899a4(param_1 + 0x6a,uVar6);
            }
          }
          uVar6 = uStack_98;
          goto LAB_00386b14;
        }
      }
    }
    break;
  case (dword *)0x10:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "MAX_DATA valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x4d0;
      pdVar12 = &MACH_HEADER.ncmds;
      goto LAB_00386bc0;
    }
// unlicensed copy if this notice is missing
    uStack_a8 = 0;
    iVar5 = func_0x00390384(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_max_data";
      lVar11 = 7;
      uVar9 = 0x2a8;
      pdVar12 = &MACH_HEADER.ncmds;
      goto LAB_00386bc0;
    }
    func_0x0037a69c(param_1 + 0x1e,uStack_a8);
    puVar10 = &DAT_003878a4;
    goto LAB_00386b08;
  case (dword *)0x11:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "MAX_STREAM_DATA valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x4dd;
      pdVar12 = (dword *)((long)&MACH_HEADER.ncmds + 1);
      goto LAB_00386bc0;
    }
    uStack_b0 = 0;
    uStack_a8 = 0;
    iVar5 = func_0x0039047c(&lStack_e0,&uStack_a8,&uStack_b0);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_max_stream_data";
      lVar11 = 7;
      uVar9 = 0x2be;
      pdVar12 = (dword *)((long)&MACH_HEADER.ncmds + 1);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x003876c8(param_1,uStack_a8,0x11,&uStack_b8);
    uVar6 = uStack_b8;
    lVar11 = lStack_d0;
// more drops soon - github.com/pengussy
    if (iVar5 == 0) goto LAB_00386bc8;
    if (uStack_b8 != 0) {
      if (*(char *)(uStack_b8 + 0x101) == '\0') {
        pcVar15 = "MAX_STREAM_DATA for TX only stream";
        pcVar13 = "depack_do_frame_max_stream_data";
        lVar11 = 5;
        uVar9 = 0x2cf;
        pdVar12 = (dword *)((long)&MACH_HEADER.ncmds + 1);
        goto LAB_00386bc0;
      }
      func_0x0037a69c(uStack_b8 + 0x80,uStack_b0);
      goto LAB_003868a0;
    }
    break;
  case (dword *)0x12:
  case (dword *)0x13:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "MAX_STREAMS valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x4ec;
      goto LAB_00386bc0;
    }
    uStack_a8 = 0;
    iVar5 = func_0x003905dc(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_max_streams";
      lVar11 = 7;
      uVar9 = 0x2e3;
      goto LAB_00386bc0;
    }
    if (0x1000000000000000 < uStack_a8) {
      pcVar15 = "invalid max streams value";
      pcVar13 = "depack_do_frame_max_streams";
/* if you paid for this, you were scammed */
      lVar11 = 7;
      uVar9 = 0x2eb;
      goto LAB_00386bc0;
    }
    if (unaff_x28 == (dword *)((long)&MACH_HEADER.ncmds + 2)) {
      puVar10 = &DAT_003878b4;
      if ((ulong)param_1[0xab] < uStack_a8) {
        param_1[0xab] = uStack_a8;
      }
    }
    else {
      puVar10 = &DAT_003878d0;
      if ((ulong)param_1[0xac] < uStack_a8) {
        param_1[0xac] = uStack_a8;
      }
    }
LAB_00386b08:
/* WM - proprietary - see LICENSE - do not sell */
    func_0x0038926c(param_1 + 0x6a,puVar10,param_1);
    break;
  case (dword *)0x14:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "DATA_BLOCKED valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x4fb;
      pdVar12 = &MACH_HEADER.sizeofcmds;
      goto LAB_00386bc0;
    }
    uStack_a8 = 0;
    iVar5 = func_0x003906d8(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_data_blocked";
      lVar11 = 7;
      uVar9 = 0x313;
      pdVar12 = &MACH_HEADER.sizeofcmds;
      goto LAB_00386bc0;
    }
    break;
  case (dword *)0x15:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "STREAM_DATA_BLOCKED valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x508;
      pdVar12 = (dword *)((long)&MACH_HEADER.sizeofcmds + 1);
      goto LAB_00386bc0;
    }
    uStack_b0 = 0;
/* wm:more drops soon - github.com/pengussy */
    uStack_a8 = 0;
    iVar5 = func_0x003907d0(&lStack_e0,&uStack_a8,&uStack_b0);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_stream_data_blocked";
      lVar11 = 7;
      uVar9 = 0x328;
      pdVar12 = (dword *)((long)&MACH_HEADER.sizeofcmds + 1);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x003876c8(param_1,uStack_a8,0x15,&uStack_b8);
    lVar11 = lStack_d0;
    if (iVar5 == 0) goto LAB_00386bc8;
    if ((uStack_b8 != 0) && (*(char *)(uStack_b8 + 0x102) == '\0')) {
      pcVar15 = "STREAM_DATA_BLOCKED frame for TX only stream";
      pcVar13 = "depack_do_frame_stream_data_blocked";
      lVar11 = 5;
      uVar9 = 0x342;
      pdVar12 = (dword *)((long)&MACH_HEADER.sizeofcmds + 1);
      goto LAB_00386bc0;
    }
    break;
  case (dword *)0x16:
  case (dword *)0x17:
/* keep the notice, keep the source honest - github.com/pengussy */
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "STREAMS valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x517;
      goto LAB_00386bc0;
    }
    uStack_a8 = 0;
    iVar5 = func_0x00390930(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_streams_blocked";
      lVar11 = 7;
      uVar9 = 0x355;
      goto LAB_00386bc0;
    }
    if (0x1000000000000000 < uStack_a8) {
      pcVar15 = "invalid stream count limit";
      pcVar13 = "depack_do_frame_streams_blocked";
      lVar11 = 4;
      uVar9 = 0x363;
      goto LAB_00386bc0;
    }
    break;
  case (dword *)0x18:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
/* wm:chat: discord.gg/sdkhDjTex */
      pcVar15 = "NEW_CONN_ID valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x526;
      pdVar12 = &MACH_HEADER.flags;
      goto LAB_00386bc0;
    }
    iVar5 = func_0x00390a2c(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_new_conn_id";
      lVar11 = 7;
      uVar9 = 0x375;
      pdVar12 = &MACH_HEADER.flags;
      goto LAB_00386bc0;
    }
    func_0x00377c9c(param_1,&uStack_a8);
    break;
  case (dword *)0x19:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "RETIRE_CONN_ID valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x533;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 1);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x00390c84(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_retire_conn_id";
      lVar11 = 7;
/* no support for modified copies - github.com/pengussy */
      uVar9 = 0x388;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 1);
      goto LAB_00386bc0;
    }
    if ((*(byte *)((long)param_1 + 0x623) >> 1 & 1) == 0) {
      pcVar15 = "conn has zero-length CID";
      pcVar13 = "depack_do_frame_retire_conn_id";
      lVar11 = 10;
      uVar9 = 0x39d;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 1);
      goto LAB_00386bc0;
    }
    break;
  case (dword *)0x1a:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "PATH_CHALLENGE valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x540;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 2);
      goto LAB_00386bc0;
    }
    uStack_b0 = 0;
    iVar5 = func_0x00390d7c(&lStack_e0,&uStack_b0);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
/* chat: discord.gg/sdkhDjTex */
      pcVar13 = "depack_do_frame_path_challenge";
      lVar11 = 7;
      uVar9 = 0x3b6;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 2);
      goto LAB_00386bc0;
    }
    lVar11 = func_0x019eb530(9,
                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rx_depack.c"
                             ,0x3c2);
    if ((lVar11 == 0) || (iVar5 = func_0x019ebb80(&uStack_a8,lVar11,9,0), iVar5 == 0)) {
LAB_003872c4:
      func_0x004743e4(lVar11,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_rx_depack.c"
                      ,0x3d9);
      pcVar15 = "internal error";
      pcVar13 = "depack_do_frame_path_challenge";
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      lVar11 = 1;
      uVar9 = 0x3dc;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 2);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x0038f1a4(&uStack_a8,uStack_b0);
    if (iVar5 == 0) {
      func_0x0047680c(&uStack_a8);
      goto LAB_003872c4;
    }
    func_0x004765c8(&uStack_a8);
    lVar8 = func_0x003742b8(param_1[0x1d],0,2,0x1b,1,lVar11,9,&DAT_003878ec,0);
    if (lVar8 == 0) goto LAB_003872c4;
    break;
  case (dword *)0x1b:
    if (cVar3 != '\x05') {
      pcVar15 = "PATH_CHALLENGE valid only in 1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x54d;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 3);
      goto LAB_00386bc0;
// proprietary - see LICENSE - do not sell
    }
    uStack_a8 = 0;
    iVar5 = func_0x00390e98(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_path_response";
      lVar11 = 7;
      uVar9 = 0x3ea;
      pdVar12 = (dword *)((long)&MACH_HEADER.flags + 3);
      goto LAB_00386bc0;
    }
    break;
  case (dword *)0x1c:
    goto LAB_003869e8;
  case (dword *)0x1d:
    if ((cVar3 != '\x02') && (cVar3 != '\x05')) {
      pcVar15 = "CONN_CLOSE (APP) valid only in 0/1-RTT";
      pcVar13 = "depack_process_frames";
// WM - reversing this took months of machine time
      lVar11 = 10;
      uVar9 = 0x55b;
      pdVar12 = (dword *)((long)&MACH_HEADER.reserved + 1);
      goto LAB_00386bc0;
    }
LAB_003869e8:
    iVar5 = func_0x00390fb4(&lStack_e0,&uStack_a8);
    if (iVar5 == 0) {
      pcVar15 = "decode error";
      pcVar13 = "depack_do_frame_conn_close";
      lVar11 = 7;
      uVar9 = 0x3fc;
      goto LAB_00386bc0;
    }
    func_0x00377c40(param_1,&uStack_a8);
    break;
  case (dword *)0x1e:
    if (cVar3 != '\x05') {
      pcVar15 = "HANDSHAKE_DONE valid only in 1-RTT";
      pcVar13 = "depack_process_frames";
      lVar11 = 10;
      uVar9 = 0x56b;
      pdVar12 = (dword *)((long)&MACH_HEADER.reserved + 2);
      goto LAB_00386bc0;
    }
    iVar5 = func_0x00391230(&lStack_e0);
    if (iVar5 == 0) {
/* WM - reversing this took months of machine time */
      pcVar15 = "internal error (decode frame handshake done)";
      pcVar13 = "depack_do_frame_handshake_done";
      lVar11 = 1;
      uVar9 = 0x40d;
      pdVar12 = (dword *)((long)&MACH_HEADER.reserved + 2);
      goto LAB_00386bc0;
    }
    func_0x0037785c(param_1);
  }
  uVar6 = 0;
LAB_00386b14:
  if ((code *)param_1[0x86] != (code *)0x0) {
    lVar11 = lStack_e0 - lVar1;
    if (pdStack_c8 == (dword *)0x0) {
      uVar17 = 0x204;
    }
    else {
      uVar17 = 0x202;
      if (pdStack_c8 == (dword *)((long)&MACH_HEADER.cputype + 2) ||
          ((ulong)pdStack_c8 & 0xfffffffffffffff8) == 8) {
        uVar17 = 0x203;
      }
      else {
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
        uVar6 = 0;
      }
      lVar11 = lVar11 - uVar6;
    }
    (*(code *)param_1[0x86])(0,1,uVar17,lVar1,lVar11,param_1[0x88],param_1[0x87]);
  }
  pdVar19 = unaff_x28;
  if (lStack_d0 == 0) {
    func_0x00373a84(param_1[0x83],&uStack_100);
    uVar9 = 1;
    if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_70) goto LAB_00386c28;
    return;
  }
  goto LAB_0038632c;
}

