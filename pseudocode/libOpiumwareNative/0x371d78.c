/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x371d78:c83c57e0bb
 */

void FUN_00371d78(undefined8 param_1,dword *param_2,long param_3,long param_4,long param_5,
                 char *param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  dword *pdVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  dword *pdVar8;
  long lVar9;
  char *pcVar10;
  dword *pdVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  long lStack_318;
  long lStack_310;
  dword *pdStack_308;
  dword *pdStack_300;
  dword adStack_2f8 [2];
  undefined1 auStack_2f0 [8];
  undefined1 *puStack_2e8;
  ulong uStack_2e0;
/*  found on a paste site? it was re-uploaded illegally  */
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  byte bStack_2b8;
  long lStack_2b0;
  byte bStack_2a8;
  undefined7 uStack_2a7;
  dword *pdStack_2a0;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined8 uStack_290;
  byte bStack_288;
  undefined1 auStack_287 [23];
  undefined1 auStack_270 [512];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
/* reversing this took months of machine time - github.com/pengussy */
  lVar9 = param_5;
  pcVar10 = param_6;
  func_0x003717a0(param_1,"header");
  uVar2 = (byte)*param_2 - 1;
  if (uVar2 < 6) {
    pcVar7 = *(char **)(&UNK_01dc68c8 + ((ulong)uVar2 & 0xff) * 8);
  }
  else {
    pcVar7 = "unknown";
  }
  func_0x00371808(param_1,"packet_type",pcVar7);
  if ((*param_2 & 0xfd) != 4) {
    func_0x00371880(param_1,"packet_number",param_3);
  }
  pdVar8 = (dword *)(ulong)(byte)param_2[2];
  func_0x003718e8(param_1,"dcid",(undefined1 *)((long)param_2 + 9),pdVar8);
  if ((char)*param_2 != '\x05') {
    pdVar8 = (dword *)(ulong)*(byte *)((long)param_2 + 0x1d);
    func_0x003718e8(param_1,"scid",(long)param_2 + 0x1e,pdVar8);
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    func_0x003717a0(param_1,"token");
    func_0x003717a0(param_1,&UNK_01c36795);
    pdVar8 = *(dword **)(param_2 + 0x10);
    func_0x003718e8(param_1,"data",*(undefined8 *)(param_2 + 0xe),pdVar8);
    func_0x003717cc(param_1);
    func_0x003717cc(param_1);
  }
  func_0x003717cc(param_1);
  pcVar7 = param_6;
  func_0x00371880(param_1,"datagram_id",param_6);
  if ((*param_2 & 0xfd) != 4) {
    func_0x003717d4(param_1,"frames");
    if (param_5 != 0) {
      param_3 = 0;
      param_2 = (dword *)0x0;
      param_6 = "frame_type";
/* wm:stripping the watermark breaks the license */
      do {
        plVar1 = (long *)(param_4 + param_3 * 0x10);
        pdVar11 = (dword *)plVar1[1];
        if ((long)pdVar11 < 0) break;
        lStack_318 = *plVar1;
        pdStack_308 = pdVar11;
        lStack_310 = lStack_318;
        while (pdStack_308 != (dword *)0x0) {
          while( true ) {
            if (param_2 != (dword *)0x0) {
              pdVar11 = param_2;
              if (pdStack_308 <= param_2) {
                pdVar11 = pdStack_308;
              }
              lStack_318 = lStack_318 + (long)pdVar11;
              pdStack_308 = (dword *)((long)pdStack_308 - (long)pdVar11);
              param_2 = (dword *)((long)param_2 - (long)pdVar11);
              goto joined_r0x00371f78;
            }
            func_0x003717a0(param_1,0);
            pdVar11 = pdStack_308;
            lVar12 = lStack_318;
            pcVar7 = (char *)0x0;
            iVar3 = func_0x0038f464(&lStack_318,&lStack_2b0,0);
            if (iVar3 == 0) break;
            switch(lStack_2b0) {
            case 0:
              func_0x00371808(param_1,"frame_type","padding");
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
              pdVar4 = (dword *)func_0x00391154(&lStack_318);
              pcVar7 = "payload_length";
              goto LAB_003726f0;
            case 1:
              iVar3 = func_0x003911b0(&lStack_318);
              if (iVar3 == 0) break;
              pcVar7 = "ping";
LAB_0037271c:
              func_0x00371808(param_1,"frame_type",pcVar7);
              param_2 = (dword *)0x0;
              goto LAB_00372794;
            case 2:
            case 3:
              iVar3 = func_0x0038f5b0(&lStack_318,auStack_2f0);
              if (iVar3 != 0) {
                puStack_2e8 = auStack_270;
                uStack_2e0 = 0x20;
                pdVar8 = adStack_2f8;
                iVar3 = func_0x0038f6e4(&lStack_318,3,&puStack_2e8,pdVar8);
                if (iVar3 != 0) {
                  func_0x00371808(param_1,"frame_type",&UNK_01c367d3);
                  func_0x00371880(param_1,"ack_delay",uStack_2d8 / 1000000);
                  if ((bStack_2b8 & 1) != 0) {
                    func_0x00371880(param_1,"ect1",uStack_2d0);
                    func_0x00371880(param_1,"ect0",uStack_2c8);
                    func_0x00371880(param_1,&UNK_01c367eb,uStack_2c0);
                  }
                  func_0x003717d4(param_1,"acked_ranges");
                  if (uStack_2e0 != 0) {
                    lVar12 = 0;
                    uVar13 = 0;
                    do {
                      func_0x003717d4(param_1,0);
                      func_0x00371880(param_1,0,*(undefined8 *)(puStack_2e8 + lVar12));
                      if (*(long *)((long)(puStack_2e8 + lVar12) + 8) !=
                          *(long *)(puStack_2e8 + lVar12)) {
                        func_0x00371880(param_1,0);
/* origin: github.com/pengussy - github.com/pengussy */
                      }
                      func_0x00371800(param_1);
                      uVar13 = uVar13 + 1;
                      lVar12 = lVar12 + 0x10;
                    } while (uVar13 < uStack_2e0);
                  }
                  func_0x00371800(param_1);
                  param_2 = (dword *)0x0;
                  goto LAB_00372794;
                }
              }
              break;
            case 4:
              iVar3 = func_0x0038fb20(&lStack_318,&bStack_2a8);
              if (iVar3 == 0) break;
              func_0x00371808(param_1,"frame_type","reset_stream");
              func_0x00371880(param_1,"stream_id",CONCAT71(uStack_2a7,bStack_2a8));
              func_0x00371880(param_1,"error_code",pdStack_2a0);
              pdVar4 = (dword *)CONCAT71(uStack_297,uStack_298);
              pcVar7 = "final_size";
              goto LAB_003726f0;
            case 5:
              iVar3 = func_0x0038fce0(&lStack_318,&bStack_2a8);
              if (iVar3 == 0) break;
              func_0x00371808(param_1,"frame_type","stop_sending");
              func_0x00371880(param_1,"stream_id",CONCAT71(uStack_2a7,bStack_2a8));
              pcVar7 = "error_code";
              pdVar4 = pdStack_2a0;
// chat: discord.gg/sdkhDjTex
              goto LAB_003726f0;
            case 6:
              iVar3 = func_0x0038fe3c(&lStack_318,1,&bStack_2a8);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","crypto");
                func_0x00371880(param_1,"offset",CONCAT71(uStack_2a7,bStack_2a8));
                func_0x00371880(param_1,"payload_length",pdStack_2a0);
                param_2 = pdStack_2a0;
                goto LAB_00372794;
              }
              break;
            case 7:
              iVar3 = func_0x00390008(&lStack_318,&bStack_2a8,&pdStack_300);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","new_token");
                func_0x003717a0(param_1,"token");
                func_0x003717a0(param_1,&UNK_01c36795);
                pdVar8 = pdStack_300;
                func_0x003718e8(param_1,"data",CONCAT71(uStack_2a7,bStack_2a8),pdStack_300);
                func_0x003717cc(param_1);
                func_0x003717cc(param_1);
                param_2 = (dword *)0x0;
/*  donate: donate/README.md  */
                goto LAB_00372794;
              }
              break;
            case 8:
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
            case 0xf:
              iVar3 = func_0x00390138(&lStack_318,1,&bStack_2a8);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","stream");
                func_0x00371880(param_1,"stream_id",CONCAT71(uStack_2a7,bStack_2a8));
                func_0x00371880(param_1,"offset",pdStack_2a0);
                func_0x00371880(param_1,"payload_length",CONCAT71(uStack_297,uStack_298));
                func_0x003718b4(param_1,"explicit_length",bStack_288 & 1);
                if ((bStack_288 >> 1 & 1) != 0) {
                  func_0x003718b4(param_1,&UNK_01c3685a,1);
                }
                param_2 = (dword *)CONCAT71(uStack_297,uStack_298);
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                if ((bStack_288 & 1) == 0) {
                  param_2 = (dword *)0xffffffffffffffff;
                }
                goto LAB_00372794;
              }
              break;
            case 0x10:
              iVar3 = func_0x00390384(&lStack_318,&bStack_2a8);
              if (iVar3 == 0) break;
              pcVar6 = "frame_type";
              pcVar7 = "max_data";
LAB_003726dc:
              func_0x00371808(param_1,pcVar6,pcVar7);
              pdVar4 = (dword *)CONCAT71(uStack_2a7,bStack_2a8);
LAB_003726e4:
              pcVar7 = "maximum";
              goto LAB_003726f0;
            case 0x11:
              iVar3 = func_0x0039047c(&lStack_318,&bStack_2a8,&pdStack_300);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","max_stream_data");
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                func_0x00371880(param_1,"stream_id",CONCAT71(uStack_2a7,bStack_2a8));
                pdVar4 = pdStack_300;
                goto LAB_003726e4;
              }
              break;
            case 0x12:
            case 0x13:
              iVar3 = func_0x003905dc(&lStack_318,&bStack_2a8);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","max_streams");
                pcVar7 = "bidirectional";
                if (lStack_2b0 != 0x12) {
                  pcVar7 = "unidirectional";
                }
                pcVar6 = "stream_type";
                goto LAB_003726dc;
              }
              break;
            case 0x14:
              iVar3 = func_0x003906d8(&lStack_318,&bStack_2a8);
              if (iVar3 == 0) break;
              pcVar6 = "frame_type";
              pcVar7 = "data_blocked";
LAB_00372558:
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
              func_0x00371808(param_1,pcVar6,pcVar7);
              pdVar4 = (dword *)CONCAT71(uStack_2a7,bStack_2a8);
LAB_003725a4:
              pcVar7 = "limit";
              goto LAB_003726f0;
            case 0x15:
              iVar3 = func_0x003907d0(&lStack_318,&bStack_2a8,&pdStack_300);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","stream_data_blocked");
                func_0x00371880(param_1,"stream_id",CONCAT71(uStack_2a7,bStack_2a8));
                pdVar4 = pdStack_300;
                goto LAB_003725a4;
              }
              break;
            case 0x16:
            case 0x17:
              iVar3 = func_0x00390930(&lStack_318,&bStack_2a8);
              if (iVar3 != 0) {
/*  more drops soon - github.com/pengussy  */
                func_0x00371808(param_1,"frame_type","streams_blocked");
                pcVar7 = "bidirectional";
                if (lStack_2b0 != 0x16) {
                  pcVar7 = "unidirectional";
                }
                pcVar6 = "stream_type";
                goto LAB_00372558;
              }
              break;
            case 0x18:
              iVar3 = func_0x00390a2c(&lStack_318,&bStack_2a8);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","new_connection_id");
                func_0x00371880(param_1,"sequence_number",CONCAT71(uStack_2a7,bStack_2a8));
                func_0x00371880(param_1,"retire_prior_to",pdStack_2a0);
                func_0x003718e8(param_1,"connection_id",&uStack_297,uStack_298);
                pdVar8 = &MACH_HEADER.ncmds;
                func_0x003718e8(param_1,"stateless_reset_token",auStack_287 + 4,0x10);
                param_2 = (dword *)0x0;
                goto LAB_00372794;
              }
              break;
            case 0x19:
              iVar3 = func_0x00390c84(&lStack_318,&bStack_2a8);
              if (iVar3 == 0) break;
              func_0x00371808(param_1,"frame_type","retire_connection_id");
              pcVar7 = "sequence_number";
              pdVar4 = (dword *)CONCAT71(uStack_2a7,bStack_2a8);
/* WM - more drops soon - github.com/pengussy */
LAB_003726f0:
              func_0x00371880(param_1,pcVar7,pdVar4);
              param_2 = (dword *)0x0;
              goto LAB_00372794;
            case 0x1a:
              iVar3 = func_0x00390d7c(&lStack_318,&bStack_2a8);
              if (iVar3 != 0) {
                pcVar7 = "path_challenge";
                goto LAB_0037271c;
              }
              break;
            case 0x1b:
              iVar3 = func_0x00390e98(&lStack_318,&bStack_2a8);
              if (iVar3 != 0) {
                pcVar7 = "path_response";
                goto LAB_0037271c;
              }
              break;
            case 0x1c:
            case 0x1d:
              iVar3 = func_0x00390fb4(&lStack_318,&bStack_2a8);
              if (iVar3 != 0) {
                func_0x00371808(param_1,"frame_type","connection_close");
/* wm:if you paid for this, you were scammed */
                pcVar7 = "transport";
                if ((bStack_2a8 & 1) != 0) {
                  pcVar7 = "application";
                }
                func_0x00371808(param_1,"error_space",pcVar7);
                func_0x00371880(param_1,"error_code_value",pdStack_2a0);
                if ((bStack_2a8 & 1) != 0) {
                  func_0x00371880(param_1,"error_code",pdStack_2a0);
                }
                if (((bStack_2a8 & 1) == 0) && (CONCAT71(uStack_297,uStack_298) != 0)) {
                  func_0x00371880(param_1,"trigger_frame_type");
                }
                pdVar8 = (dword *)CONCAT71(auStack_287._0_7_,bStack_288);
                func_0x0037183c(param_1,"reason",uStack_290,pdVar8);
                param_2 = (dword *)0x0;
                goto LAB_00372794;
              }
              break;
            case 0x1e:
              iVar3 = func_0x00391230(&lStack_318);
              if (iVar3 != 0) {
                pcVar7 = "handshake_done";
                goto LAB_0037271c;
              }
            }
            func_0x00371808(param_1,"frame_type","unknown");
            func_0x00371880(param_1,"frame_type_value",lStack_2b0);
            func_0x003717a0(param_1,&UNK_01c36795);
            pdVar8 = pdVar11;
            func_0x003718e8(param_1,"data",lVar12,pdVar11);
            func_0x003717cc(param_1);
            lStack_318 = lStack_318 + (long)pdStack_308;
/* more drops soon - github.com/pengussy */
            pdStack_308 = (dword *)0x0;
            param_2 = (dword *)0x0;
LAB_00372794:
            pcVar7 = (char *)((long)pdVar11 - (long)pdStack_308);
            func_0x00371880(param_1,"length",pcVar7);
            func_0x003717cc(param_1);
joined_r0x00371f78:
            if (pdStack_308 == (dword *)0x0) goto LAB_00371f2c;
          }
          param_2 = (dword *)0xffffffffffffffff;
          func_0x003717cc(param_1);
        }
LAB_00371f2c:
        param_3 = param_3 + 1;
      } while (param_3 != param_5);
    }
    func_0x00371800(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  auVar14 = ___stack_chk_fail();
  lVar12 = auVar14._0_8_;
  iVar3 = func_0x019e3870(lVar12,6,"transport",&UNK_01c36477,&UNK_01c365ba);
  if (iVar3 == 0) {
    return;
  }
  FUN_00371d78(lVar12,auVar14._8_8_,pcVar7,pdVar8,lVar9,pcVar10,param_7,param_8,param_3,param_2,
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
               param_6,param_1);
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x68) != 0)) {
    uVar5 = func_0x00371954();
    uVar5 = func_0x0037192c(uVar5,&UNK_01c33f03);
    if (*(int *)(lVar12 + 0xf4) == 0) {
      func_0x0037195c(uVar5,*(ulong *)(lVar12 + 0x88) / 1000000);
      *(undefined8 *)(lVar12 + 0x90) = *(undefined8 *)(lVar12 + 0x88);
      *(undefined4 *)(lVar12 + 0xf4) = 1;
    }
    else {
      uVar13 = 0;
      if (*(ulong *)(lVar12 + 0x90) <= *(ulong *)(lVar12 + 0x88)) {
        uVar13 = *(ulong *)(lVar12 + 0x88) - *(ulong *)(lVar12 + 0x90);
      }
      func_0x0037195c(uVar5,uVar13 / 1000000);
      *(undefined8 *)(lVar12 + 0x90) = *(undefined8 *)(lVar12 + 0x88);
    }
    func_0x00371954();
    *(undefined4 *)(lVar12 + 0x68) = 0;
  }
  return;
}

