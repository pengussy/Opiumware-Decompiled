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
 *  file-id: 0x38a80c:fe2ba62669
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0038a80c(void)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  int in_w4;
  undefined8 in_x5;
  undefined8 in_x7;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000060;
  long in_stack_00000070;
  long in_stack_000000a0;
  long in_stack_000000a8;
  long in_stack_000000b0;
  long *in_stack_000000b8;
  
  plVar2 = (long *)func_0x019eb5a0(0x60,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                                   ,0x71);
  if (plVar2 == (long *)0x0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0x76,"quic_new_record_layer");
    func_0x004466b0(0x14,&UNK_000c0103,0);
/*  if you paid for this, you were scammed  */
    return 0;
  }
  *plVar2 = in_stack_000000b0;
  *(int *)(plVar2 + 1) = (int)in_x5;
  if ((in_stack_00000070 == 0) || (iVar1 = func_0x003e9578(in_stack_00000070), iVar1 != 0)) {
    func_0x003e9468(plVar2[2]);
    plVar2[2] = in_stack_00000070;
    plVar2[0xb] = in_stack_000000a8;
    *in_stack_000000b8 = (long)plVar2;
    if (in_stack_000000a0 != 0) {
      plVar4 = (long *)(in_stack_000000a0 + 8);
      do {
        if ((int)plVar4[-1] == 2) {
          plVar2[10] = *plVar4;
        }
        else if ((int)plVar4[-1] == 0) break;
        plVar4 = plVar4 + 2;
      } while( true );
    }
    if ((int)in_x5 == 0) {
      return 1;
    }
    lVar5 = *plVar2;
    if (*(int *)(lVar5 + 0x7c) == 0) {
      in_stack_00000060 = 0;
      uVar6 = 0;
    }
    else {
      iVar1 = func_0x004553ec(in_stack_00000038,"AES-128-GCM");
      if (iVar1 == 0) {
        iVar1 = func_0x004553ec(in_stack_00000038,"AES-256-GCM");
        if (iVar1 != 0) {
          uVar6 = 2;
          iVar1 = func_0x0044fab4(in_stack_00000060);
          goto joined_r0x0038aab0;
        }
        iVar1 = func_0x004553ec(in_stack_00000038,"CHACHA20-POLY1305");
        if (iVar1 != 0) {
/* wm:thanks for reading - discord.gg/sdkhDjTex */
          uVar6 = 3;
          iVar1 = func_0x0044fab4(in_stack_00000060);
          goto joined_r0x0038aab0;
        }
        *(undefined4 *)(plVar2 + 7) = 0x50;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                        ,0xa8,"quic_new_record_layer");
        puVar3 = (undefined *)0xf9;
        goto LAB_0038aa34;
      }
      uVar6 = 1;
      iVar1 = func_0x0044fab4(in_stack_00000060);
joined_r0x0038aab0:
      if (iVar1 == 0) {
        *(undefined4 *)(plVar2 + 7) = 0x50;
        func_0x004464bc();
        uVar6 = 0xaf;
/* unlicensed copy if this notice is missing - github.com/pengussy */
        goto LAB_0038aa24;
      }
      lVar5 = *plVar2;
    }
    iVar1 = (**(code **)(lVar5 + 0x38))
                      (in_x5,in_w4 != 0,uVar6,in_stack_00000060,in_x7,in_stack_00000000,
                       *(undefined8 *)(lVar5 + 0x40));
    if (iVar1 != 0) {
      return 1;
    }
    *(undefined4 *)(plVar2 + 7) = 0x50;
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0xbd,"quic_new_record_layer");
    func_0x004466b0(0x14,&UNK_000c0103,0);
    *(byte *)(*plVar2 + 0xa8) = *(byte *)(*plVar2 + 0xa8) | 2;
    func_0x0044ed2c(in_stack_00000060);
  }
  else {
    *(undefined4 *)(plVar2 + 7) = 0x50;
    func_0x004464bc();
    uVar6 = 0x7d;
LAB_0038aa24:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,uVar6,"quic_new_record_layer");
    puVar3 = &UNK_000c0103;
LAB_0038aa34:
    func_0x004466b0(0x14,puVar3,0);
    *(byte *)(*plVar2 + 0xa8) = *(byte *)(*plVar2 + 0xa8) | 2;
  }
  *in_stack_000000b8 = 0;
/* no support for modified copies - github.com/pengussy */
  func_0x003e9468(plVar2[2]);
  func_0x004743e4(plVar2,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                  ,0xcf);
  return 0;
}

