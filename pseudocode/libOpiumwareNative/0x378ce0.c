/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x378ce0:1d00bdfd29
 */

void FUN_00378ce0(undefined8 param_1,long param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
/* wm:donate: donate/README.md */
  bool bVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  undefined8 uVar24;
  char *pcVar25;
  undefined8 uVar26;
  uint uVar27;
  uint *puVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong uStack_190;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined2 uStack_124;
  undefined2 uStack_122;
  undefined1 auStack_120 [4];
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [16];
/*  more drops soon - github.com/pengussy  */
  char cStack_fc;
  undefined1 auStack_fb [22];
  byte bStack_e5;
  undefined1 auStack_e4 [20];
  undefined8 uStack_d0;
  undefined5 uStack_c8;
  undefined3 uStack_c3;
  undefined5 uStack_c0;
  undefined3 uStack_bb;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar28 = (uint *)param_3[6];
// found on a paste site? it was re-uploaded illegally
  if ((puVar28 == (uint *)0x0) ||
     ((*puVar28 != 0 &&
      (((*puVar28 >> 7 & 1) == 0 ||
       (puVar28 = (uint *)func_0x00380678(puVar28), puVar28 == (uint *)0x0)))))) {
    pcVar25 = "could not get ssl connection";
    uVar24 = 1;
    uVar26 = 0x56e;
    goto LAB_00379418;
  }
  uVar29 = param_3[0xc4];
  if (((((uint)uVar29 >> 0x19 & 1) == 0) || (((uint)uVar29 >> 7 & 1) == 0)) || (puVar28[0x234] == 0)
     ) {
    if ((uVar29 & 0x80) == 0) goto LAB_00378de8;
    pcVar25 = "multiple transport parameter extensions";
  }
  else {
    param_3[0xac] = 0;
    param_3[0xab] = 0;
    param_3[0xc4] = uVar29 & 0xfffffffffffffeff;
    func_0x004743e4(param_3[10],
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
                    ,0x57a);
    param_3[10] = 0;
LAB_00378de8:
    if (param_2 < 0) {
      pcVar25 = "internal error (packet buf init)";
      uVar24 = 1;
      uVar26 = 0x583;
      goto LAB_00379418;
    }
    uStack_140 = param_1;
    uStack_138 = param_1;
    lStack_130 = param_2;
    if (param_2 != 0) {
      bVar4 = false;
      bVar7 = false;
      lVar31 = 0;
      bVar17 = false;
      bVar13 = false;
      bVar19 = false;
      bVar12 = false;
/*  watermarked copy - do not remove  */
      bVar16 = false;
      bVar11 = false;
      bVar20 = false;
      bVar14 = false;
      bVar8 = false;
      bVar18 = false;
      bVar15 = false;
      bVar10 = false;
      bVar9 = false;
      bVar6 = false;
      bVar5 = false;
      pbVar1 = (byte *)(param_3 + 0x8f);
      uStack_190 = 0;
      do {
        iVar21 = func_0x003912b0(&uStack_140,&uStack_148);
        if (iVar21 == 0) {
LAB_003793b4:
          pcVar25 = "bad transport parameter";
          goto LAB_003793f4;
        }
        switch(uStack_148) {
        case 0:
          if (bVar4) {
            pcVar25 = "ORIG_DCID appears multiple times";
          }
          else if ((*(byte *)((long)param_3 + 0x623) >> 1 & 1) == 0) {
            iVar21 = func_0x0039156c(&uStack_140,0,&bStack_e5);
            if (iVar21 == 0) {
              pcVar25 = "ORIG_DCID is malformed";
            }
            else {
              bVar2 = *pbVar1;
              if (bVar2 < 0x15) {
                pcVar25 = "ORIG_DCID does not match expected value";
                if (bVar2 != bStack_e5) goto LAB_003793f4;
                iVar21 = _memcmp((long)param_3 + 0x479,auStack_e4,bVar2,
                                 "ORIG_DCID does not match expected value");
                if (iVar21 == 0) {
/*  found on a paste site? it was re-uploaded illegally  */
                  bVar4 = true;
                  break;
                }
              }
              pcVar25 = "ORIG_DCID does not match expected value";
            }
          }
          else {
            pcVar25 = "ORIG_DCID may not be sent by a client";
          }
          goto LAB_003793f4;
        case 1:
          if (bVar8) {
            pcVar25 = "MAX_IDLE_TIMEOUT appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "MAX_IDLE_TIMEOUT is malformed";
/* wm:proprietary - see LICENSE - do not sell */
            goto LAB_003793f4;
          }
          param_3[0xae] = uStack_150;
          uVar30 = param_3[0xad];
          uVar29 = uVar30;
          if (uStack_150 <= uVar30) {
            uVar29 = uStack_150;
          }
          uVar23 = uVar30;
          if (uStack_150 != 0) {
            uVar23 = uVar29;
          }
          uVar29 = uStack_150;
          if (uVar30 != 0) {
            uVar29 = uVar23;
          }
          param_3[0xaf] = uVar29;
          uVar29 = func_0x00380b40(*param_3);
          if (param_3[0xaf] == 0) {
            uVar30 = 0xffffffffffffffff;
          }
          else {
            uVar23 = func_0x00374074(param_3[0x83]);
/* keep the notice, keep the source honest - github.com/pengussy */
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar23;
            uVar30 = param_3[0xaf] * 1000000;
            if ((ulong)(param_3[0xaf] * 1000000) <= uVar23 * 3) {
              uVar30 = uVar23 * 3;
            }
            if (SUB168(auVar3 * ZEXT816(3),8) != 0) {
              uVar30 = 0xffffffffffffffff;
            }
          }
          lVar22 = uVar29 + uVar30;
          if (CARRY8(uVar29,uVar30)) {
            lVar22 = -1;
          }
          param_3[0xbe] = lVar22;
          bVar8 = true;
          uStack_190 = uStack_150;
          break;
        case 2:
          if (bVar15) {
            pcVar25 = "STATELESS_RESET_TOKEN appears multiple times";
            goto LAB_003793f4;
          }
          if ((*(byte *)((long)param_3 + 0x623) >> 1 & 1) != 0) {
            pcVar25 = "STATELESS_RESET_TOKEN may not be sent by a client";
            goto LAB_003793f4;
          }
          lVar31 = func_0x00391304(&uStack_140,&uStack_148,&lStack_158);
          if (lVar31 == 0) {
            pcVar25 = "STATELESS_RESET_TOKEN is malformed";
            goto LAB_003793f4;
          }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          pcVar25 = "STATELESS_RESET_TOKEN is malformed";
          if (lStack_158 != 0x10) goto LAB_003793f4;
          iVar21 = func_0x003881f4(param_3[8],param_3,param_3[0x9f],lVar31);
          if (iVar21 == 0) {
            pcVar25 = "STATELESS_RESET_TOKEN encountered internal error";
            goto LAB_003793f4;
          }
          bVar15 = true;
          break;
        case 3:
          if (bVar16) {
            pcVar25 = "MAX_UDP_PAYLOAD_SIZE appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "MAX_UDP_PAYLOAD_SIZE is malformed";
            goto LAB_003793f4;
          }
          pcVar25 = "MAX_UDP_PAYLOAD_SIZE is malformed";
          if (uStack_150 < 0x4b0) goto LAB_003793f4;
          param_3[0xb0] = uStack_150;
          bVar16 = true;
          break;
        case 4:
/* watermarked copy - do not remove - github.com/pengussy */
          if (bVar6) {
            pcVar25 = "INITIAL_MAX_DATA appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "INITIAL_MAX_DATA is malformed";
            goto LAB_003793f4;
          }
          func_0x0037a69c(param_3 + 0x1e,uStack_150);
          bVar6 = true;
          break;
        case 5:
          if (bVar9) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_LOCAL is malformed";
            goto LAB_003793f4;
          }
          param_3[0xa6] = uStack_150;
          bVar9 = true;
          break;
        case 6:
          if (bVar10) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE appears multiple times";
            goto LAB_003793f4;
          }
/* wm:chat: discord.gg/sdkhDjTex */
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_BIDI_REMOTE is malformed";
            goto LAB_003793f4;
          }
          param_3[0xa5] = uStack_150;
          func_0x0038926c(param_3 + 0x6a,&DAT_00379bfc,&uStack_150);
          bVar10 = true;
          break;
        case 7:
          if (bVar17) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_UNI appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "INITIAL_MAX_STREAM_DATA_UNI is malformed";
            goto LAB_003793f4;
          }
          param_3[0xa7] = uStack_150;
          func_0x0038926c(param_3 + 0x6a,&DAT_00379c18,&uStack_150);
          bVar17 = true;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          break;
        case 8:
          if (bVar20) {
            pcVar25 = "INITIAL_MAX_STREAMS_BIDI appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "INITIAL_MAX_STREAMS_BIDI is malformed";
            goto LAB_003793f4;
          }
          pcVar25 = "INITIAL_MAX_STREAMS_BIDI is malformed";
          if (0x1000000000000000 < uStack_150) goto LAB_003793f4;
          param_3[0xab] = uStack_150;
          bVar20 = true;
          break;
        case 9:
          if (bVar14) {
            pcVar25 = "INITIAL_MAX_STREAMS_UNI appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "INITIAL_MAX_STREAMS_UNI is malformed";
            goto LAB_003793f4;
          }
          pcVar25 = "INITIAL_MAX_STREAMS_UNI is malformed";
          if (0x1000000000000000 < uStack_150) goto LAB_003793f4;
          param_3[0xac] = uStack_150;
          bVar14 = true;
          break;
        case 10:
          if (bVar19) {
            pcVar25 = "ACK_DELAY_EXP appears multiple times";
            goto LAB_003793f4;
/* WM - proprietary - see LICENSE - do not sell */
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "ACK_DELAY_EXP is malformed";
            goto LAB_003793f4;
          }
          pcVar25 = "ACK_DELAY_EXP is malformed";
          if (0x14 < uStack_150) goto LAB_003793f4;
          *(char *)(param_3 + 0xa9) = (char)uStack_150;
          bVar19 = true;
          break;
        case 0xb:
          if (bVar12) {
            pcVar25 = "MAX_ACK_DELAY appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "MAX_ACK_DELAY is malformed";
            goto LAB_003793f4;
          }
          pcVar25 = "MAX_ACK_DELAY is malformed";
          if (uStack_150 >> 0xe != 0) goto LAB_003793f4;
          param_3[0xa8] = uStack_150;
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          func_0x003740f4(param_3[0x83],uStack_150 * 1000000);
          bVar12 = true;
          break;
        case 0xc:
          if (bVar13) {
            pcVar25 = "DISABLE_ACTIVE_MIGRATION appears multiple times";
            goto LAB_003793f4;
          }
          lVar22 = func_0x00391304(&uStack_140,&uStack_148,&lStack_158);
          if (lVar22 == 0) {
            pcVar25 = "DISABLE_ACTIVE_MIGRATION is malformed";
            goto LAB_003793f4;
          }
          pcVar25 = "DISABLE_ACTIVE_MIGRATION is malformed";
          if (lStack_158 != 0) goto LAB_003793f4;
          bVar13 = true;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          break;
        case 0xd:
          if (bVar18) {
            pcVar25 = "PREFERRED_ADDR appears multiple times";
            goto LAB_003793f4;
          }
          if ((*(byte *)((long)param_3 + 0x623) >> 1 & 1) != 0) {
            pcVar25 = "PREFERRED_ADDR may not be sent by a client";
            goto LAB_003793f4;
          }
          if (*(char *)((long)param_3 + 0x4e1) == '\0') {
            pcVar25 = "PREFERRED_ADDR provided for zero-length CID";
            goto LAB_003793f4;
          }
          iVar21 = func_0x003916d8(&uStack_140,&uStack_124);
          if (iVar21 == 0) {
            pcVar25 = "PREFERRED_ADDR is malformed";
            goto LAB_003793f4;
          }
          if (cStack_fc == '\0') {
            pcVar25 = "zero-length CID in PREFERRED_ADDR";
            goto LAB_003793f4;
          }
          bVar18 = true;
          break;
        case 0xe:
          if (bVar11) {
            pcVar25 = "ACTIVE_CONN_ID_LIMIT appears multiple times";
            goto LAB_003793f4;
          }
          iVar21 = func_0x00391444(&uStack_140,&uStack_148,&uStack_150);
          if (iVar21 == 0) {
            pcVar25 = "ACTIVE_CONN_ID_LIMIT is malformed";
            goto LAB_003793f4;
          }
          pcVar25 = "ACTIVE_CONN_ID_LIMIT is malformed";
          if (uStack_150 < 2) goto LAB_003793f4;
          param_3[0xb1] = uStack_150;
/* reversing this took months of machine time */
          bVar11 = true;
          break;
        case 0xf:
          if (bVar7) {
            pcVar25 = "INITIAL_SCID appears multiple times";
          }
          else {
            iVar21 = func_0x0039156c(&uStack_140,0,&bStack_e5);
            if (iVar21 == 0) {
              pcVar25 = "INITIAL_SCID is malformed";
            }
            else {
              bVar2 = *(byte *)((long)param_3 + 0x4a2);
              if (bVar2 < 0x15) {
                pcVar25 = "INITIAL_SCID does not match expected value";
                if (bVar2 != bStack_e5) goto LAB_003793f4;
                iVar21 = _memcmp((long)param_3 + 0x4a3,auStack_e4,bVar2,
                                 "INITIAL_SCID does not match expected value");
                if (iVar21 == 0) {
                  bVar7 = true;
                  break;
                }
              }
              pcVar25 = "INITIAL_SCID does not match expected value";
            }
          }
          goto LAB_003793f4;
        case 0x10:
          if (((uint)param_3[0xc4] >> 0x19 & 1) == 0) {
            if (bVar5) {
              pcVar25 = "RETRY_SCID appears multiple times";
            }
            else if (((uint)param_3[0xc4] >> 0xb & 1) == 0) {
/* do not claim this as your own - github.com/pengussy */
              pcVar25 = "RETRY_SCID sent when not performing a retry";
            }
            else {
              iVar21 = func_0x0039156c(&uStack_140,0,&bStack_e5);
              if (iVar21 == 0) {
                pcVar25 = "RETRY_SCID is malformed";
              }
              else {
                bVar2 = *(byte *)((long)param_3 + 0x4b7);
                if (bVar2 < 0x15) {
                  pcVar25 = "RETRY_SCID does not match expected value";
                  if (bVar2 != bStack_e5) goto LAB_003793f4;
                  iVar21 = _memcmp(param_3 + 0x97,auStack_e4,bVar2,
                                   "RETRY_SCID does not match expected value");
                  if (iVar21 == 0) {
                    bVar5 = true;
                    break;
                  }
                }
                pcVar25 = "RETRY_SCID does not match expected value";
              }
            }
          }
          else {
            pcVar25 = "RETRY_SCID may not be sent by a client";
          }
          goto LAB_003793f4;
        default:
          lVar22 = func_0x00391304(&uStack_140,&uStack_148,&lStack_158);
          if (lVar22 == 0) goto LAB_003793b4;
        }
      } while (lStack_130 != 0);
      if (bVar7) {
        uVar29 = param_3[0xc4];
        uVar27 = (uint)uVar29;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
        if ((uVar27 >> 0x19 & 1) != 0) {
LAB_00379458:
          param_3[0xc4] = uVar29 | 0x80;
          uStack_80 = 0;
          puStack_98 = (undefined *)0x0;
          uStack_a0 = 0;
          uStack_88 = 0;
          puStack_90 = (undefined8 *)0x0;
          uStack_b8 = 0;
          uStack_c0 = 0;
          uStack_bb = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          lVar22 = param_3[9];
          if (lVar22 == 0) {
            if (((uVar29 >> 0x29 & 1) == 0) || (((uVar27 >> 0x19 & 1) != 0 && (*pbVar1 == 0)))) {
              lVar22 = 0;
            }
            else {
              uStack_d0 = *(undefined8 *)pbVar1;
              uStack_c8 = (undefined5)param_3[0x90];
              uStack_c3 = (undefined3)*(undefined8 *)((long)param_3 + 0x485);
              uStack_c0 = (undefined5)((ulong)*(undefined8 *)((long)param_3 + 0x485) >> 0x18);
              uStack_b8 = param_3[200];
              uStack_b0 = 0;
              uStack_a8 = 0;
/* wm:no support for modified copies */
              uStack_a0 = (ulong)(uVar27 >> 0x19 & 1);
              puStack_98 = &DAT_003757b0;
              puStack_90 = param_3;
              lVar22 = func_0x00370be4(&uStack_d0);
              param_3[9] = lVar22;
              if (lVar22 == 0) {
                param_3[0xc4] = param_3[0xc4] & 0xfffffdffffffffff;
              }
            }
          }
          iVar21 = func_0x019e3870(lVar22,4,"transport","parameters_set","transport:parameters_set")
          ;
          if (iVar21 != 0) {
            func_0x00371808(lVar22,"owner","remote");
            if (bVar4) {
              func_0x003718e8(lVar22,"original_destination_connection_id",(long)param_3 + 0x479,
                              *pbVar1);
// if you paid for this, you were scammed
            }
            func_0x003718e8(lVar22,"original_source_connection_id",(long)param_3 + 0x479,*pbVar1);
            if (bVar5) {
              func_0x003718e8(lVar22,"retry_source_connection_id",param_3 + 0x97,
                              *(undefined1 *)((long)param_3 + 0x4b7));
            }
            if (bVar6) {
              uVar24 = func_0x002f78bc(param_3 + 0x1e);
              func_0x00371880(lVar22,"initial_max_data",uVar24);
            }
            if (bVar9) {
              func_0x00371880(lVar22,"initial_max_stream_data_bidi_local",param_3[0xa5]);
            }
            if (bVar10) {
              func_0x00371880(lVar22,"initial_max_stream_data_bidi_remote",param_3[0xa6]);
            }
            if (bVar17) {
              func_0x00371880(lVar22,"initial_max_stream_data_uni",param_3[0xa7]);
            }
            if (bVar20) {
              func_0x00371880(lVar22,"initial_max_streams_bidi",param_3[0xab]);
            }
            if (bVar14) {
              func_0x00371880(lVar22,"initial_max_streams_uni",param_3[0xac]);
            }
            if (bVar19) {
              func_0x00371880(lVar22,"ack_delay_exponent",*(undefined1 *)(param_3 + 0xa9));
            }
            if (bVar12) {
              func_0x00371880(lVar22,"max_ack_delay",param_3[0xa8]);
            }
            if (bVar16) {
              func_0x00371880(lVar22,"max_udp_payload_size",param_3[0xb0]);
            }
            if (bVar8) {
              func_0x00371880(lVar22,"max_idle_timeout",uStack_190);
            }
            if (bVar11) {
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
              func_0x00371880(lVar22,"active_connection_id_limit",param_3[0xb1]);
            }
            if (bVar15) {
              func_0x003718e8(lVar22,"stateless_reset_token",lVar31,0x10);
            }
            if (bVar18) {
              func_0x003717a0(lVar22,"preferred_addr");
              func_0x00371880(lVar22,"port_v4",uStack_124);
              func_0x00371880(lVar22,"port_v6",uStack_122);
              func_0x003718e8(lVar22,"ip_v4",auStack_120,4);
              func_0x003718e8(lVar22,"ip_v6",auStack_11c,0x10);
              func_0x003718e8(lVar22,"stateless_reset_token",auStack_10c,0x10);
              func_0x003718e8(lVar22,"connection_id",auStack_fb,cStack_fc);
              func_0x003717cc(lVar22);
            }
            func_0x003718b4(lVar22,"disable_active_migration",bVar13);
            func_0x019e3b34(lVar22);
          }
          if ((((bVar6) || (bVar10)) || (bVar20)) || (bVar14)) {
            func_0x0038926c(param_3 + 0x6a,&DAT_00379c38,param_3);
          }
          if (((*(byte *)((long)param_3 + 0x623) >> 1 & 1) != 0) &&
             (iVar21 = func_0x00376d48(param_3), iVar21 == 0)) goto LAB_00379828;
          uVar24 = 1;
          if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_78) goto LAB_00379824;
          return;
        }
        if (bVar4) {
          if (((uVar27 >> 0xb & 1) == 0) || (bVar5)) goto LAB_00379458;
          pcVar25 = "RETRY_SCID was not sent but is required";
        }
        else {
          pcVar25 = "ORIG_DCID was not sent but is required";
        }
        goto LAB_003793f4;
// WM - no support for modified copies
      }
    }
    pcVar25 = "INITIAL_SCID was not sent but is required";
  }
LAB_003793f4:
  uVar24 = 8;
  uVar26 = 0x771;
LAB_00379418:
  while( true ) {
    func_0x003779a4(param_3,uVar24,0,pcVar25,0,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                    ,uVar26,"ch_on_transport_params");
    uVar24 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) break;
LAB_00379824:
    ___stack_chk_fail(uVar24);
LAB_00379828:
    pcVar25 = "internal error";
    uVar24 = 1;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    uVar26 = 0x769;
  }
  return;
}

