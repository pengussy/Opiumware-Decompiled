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
 *  file-id: 0x376d48:c0fda79e1f
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00376d48(long param_1)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined1 auStack_78 [56];
  
  uStack_80 = 0;
  pcVar1 = (char *)(param_1 + 0x478);
  if (*(char *)(param_1 + 0x48d) != '\0') {
    pcVar1 = (char *)(param_1 + 0x48d);
  }
  if ((*(long *)(param_1 + 0x50) != 0) || ((*(byte *)(param_1 + 0x621) & 1) != 0)) {
    uVar5 = 0;
    lVar3 = 0;
    goto LAB_00376f84;
  }
  lVar3 = func_0x00400364();
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (lVar3 == 0) {
    uVar5 = 0;
    goto LAB_00376f84;
  }
  iVar2 = func_0x019ebd10(auStack_78);
  if (iVar2 != 0) {
    lVar4 = func_0x0038f274(auStack_78,0xc,0,0);
    if (lVar4 != 0) {
      if ((*(byte *)(param_1 + 0x623) >> 1 & 1) == 0) {
        iVar2 = func_0x0038f3b0(auStack_78,0xf,param_1 + 0x4a2);
        if (iVar2 != 0) {
LAB_00376ddc:
          iVar2 = func_0x0038f330(auStack_78,1,*(undefined8 *)(param_1 + 0x568));
          if ((((iVar2 != 0) && (iVar2 = func_0x0038f330(auStack_78,3,0x4b0), iVar2 != 0)) &&
              (iVar2 = func_0x0038f330(auStack_78,0xe,2), iVar2 != 0)) &&
             ((*(long *)(param_1 + 0x520) == 0x19 ||
              (iVar2 = func_0x0038f330(auStack_78,0xb), iVar2 != 0)))) {
            uVar5 = func_0x0034d3f0(param_1 + 0x110);
            iVar2 = func_0x0038f330(auStack_78,4,uVar5);
            if (((iVar2 != 0) &&
                ((iVar2 = func_0x0038f330(auStack_78,5,*(undefined8 *)(param_1 + 0x508)), iVar2 != 0
                 && (iVar2 = func_0x0038f330(auStack_78,6,*(undefined8 *)(param_1 + 0x510)),
                    iVar2 != 0)))) &&
               (iVar2 = func_0x0038f330(auStack_78,7,*(undefined8 *)(param_1 + 0x518)), iVar2 != 0))
            {
              uVar5 = func_0x0034d3f0(param_1 + 0x290);
              iVar2 = func_0x0038f330(auStack_78,8,uVar5);
              if (iVar2 != 0) {
                uVar5 = func_0x0034d3f0(param_1 + 0x2f0);
                iVar2 = func_0x0038f330(auStack_78,9,uVar5);
/* WM - no support for modified copies */
                if ((iVar2 != 0) && (iVar2 = func_0x004765c8(auStack_78), iVar2 != 0)) {
                  iVar2 = func_0x019ec1d8(auStack_78,&uStack_80);
                  if (iVar2 != 0) {
                    uVar5 = *(undefined8 *)(lVar3 + 8);
                    *(undefined8 *)(param_1 + 0x50) = uVar5;
                    *(undefined8 *)(lVar3 + 8) = 0;
                    iVar2 = func_0x0038a760(*(undefined8 *)(param_1 + 0x28),uVar5,uStack_80);
                    if (iVar2 != 0) {
                      uVar5 = func_0x00377130(param_1);
                      iVar2 = func_0x019e3870(uVar5,4,"transport","parameters_set",
                                              "transport:parameters_set");
                      if (iVar2 != 0) {
                        func_0x00371808(uVar5,"owner","local");
                        func_0x003718b4(uVar5,"disable_active_migration",1);
                        if ((*(byte *)(param_1 + 0x623) >> 1 & 1) == 0) {
                          func_0x00371808(uVar5,"initial_source_connection_id",&UNK_01cb7848);
                        }
                        else {
                          func_0x003718e8(uVar5,"original_destination_connection_id",param_1 + 0x479
                                          ,*(undefined1 *)(param_1 + 0x478));
                          func_0x003718e8(uVar5,"initial_source_connection_id",param_1 + 0x4cd,
                                          *(undefined1 *)(param_1 + 0x4cc));
                        }
                        func_0x00371880(uVar5,"max_idle_timeout",*(undefined8 *)(param_1 + 0x578));
                        func_0x00371880(uVar5,"max_udp_payload_size",0x4b0);
                        func_0x00371880(uVar5,"active_connection_id_limit",2);
                        func_0x00371880(uVar5,"max_ack_delay",*(undefined8 *)(param_1 + 0x520));
                        uVar6 = func_0x0034d3f0(param_1 + 0x110);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                        func_0x00371880(uVar5,"initial_max_data",uVar6);
                        func_0x00371880(uVar5,"initial_max_stream_data_bidi_local",
                                        *(undefined8 *)(param_1 + 0x508));
                        func_0x00371880(uVar5,"initial_max_stream_data_bidi_remote",
                                        *(undefined8 *)(param_1 + 0x510));
                        func_0x00371880(uVar5,"initial_max_stream_data_uni",
                                        *(undefined8 *)(param_1 + 0x518));
                        uVar6 = func_0x0034d3f0(param_1 + 0x290);
                        func_0x00371880(uVar5,"initial_max_streams_bidi",uVar6);
                        uVar6 = func_0x0034d3f0(param_1 + 0x2f0);
                        func_0x00371880(uVar5,"initial_max_streams_uni",uVar6);
                        func_0x019e3b34(uVar5);
                      }
                      *(ulong *)(param_1 + 0x620) = *(ulong *)(param_1 + 0x620) | 0x100;
                      uVar5 = 1;
                      goto LAB_00376f84;
                    }
                  }
                  goto LAB_00376ff8;
                }
              }
            }
/* found on a paste site? it was re-uploaded illegally */
          }
        }
      }
      else {
        iVar2 = func_0x0038f3b0(auStack_78,0,pcVar1);
        if (((iVar2 != 0) && (iVar2 = func_0x0038f3b0(auStack_78,0xf,param_1 + 0x4cc), iVar2 != 0))
           && ((*(char *)(param_1 + 0x48d) == '\0' ||
               (iVar2 = func_0x0038f3b0(auStack_78,0x10,(char *)(param_1 + 0x478)), iVar2 != 0))))
        goto LAB_00376ddc;
      }
    }
    func_0x0047680c(auStack_78);
  }
LAB_00376ff8:
  uVar5 = 0;
LAB_00376f84:
  func_0x00400378(lVar3);
  return uVar5;
}

