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
 *  file-id: 0x38122c:c6326b1fe3
 *  --------------------------------------------------------------------------*/

void FUN_0038122c(long *param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uStack_40;
  undefined8 uStack_38;
  
  *(byte *)(param_2 + 1) = (*(byte *)((long)param_1 + 0x9a) ^ 0xff) & 1;
  *(undefined2 *)((long)param_2 + 9) = 0;
  *param_2 = 0xffffffffffffffff;
  if ((*(byte *)(*param_1 + 0xa0) & 1) == 0) {
    if (((((*(ushort *)((long)param_1 + 0x9a) & 1) == 0) &&
         ((*(ushort *)((long)param_1 + 0x9a) & 0x18) != 0)) &&
        (iVar2 = func_0x00379f20(param_1[8]), iVar2 == -2)) &&
       ((*(ushort *)((long)param_1 + 0x9a) & 1) == 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                      ,0x6e7,"ossl_quic_port_raise_net_error");
      func_0x004466b0(0x14,0x183,"port failed due to network BIO I/O error");
      func_0x00446cac(param_1[0x12]);
      if ((*(ushort *)((long)param_1 + 0x9a) & 1) == 0) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
        *(ushort *)((long)param_1 + 0x9a) = *(ushort *)((long)param_1 + 0x9a) | 1;
      }
      for (lVar3 = param_1[9]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        func_0x00377fb4(lVar3);
      }
    }
    for (lVar3 = param_1[9]; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_00375820(lVar3,&uStack_40,param_3);
      *(bool *)(param_2 + 1) = (char)param_2[1] != '\0' || (char)uStack_38 != '\0';
      *(bool *)((long)param_2 + 9) = *(char *)((long)param_2 + 9) != '\0' || uStack_38._1_1_ != '\0'
      ;
      *(bool *)((long)param_2 + 10) =
           *(char *)((long)param_2 + 10) != '\0' || uStack_38._2_1_ != '\0';
      uVar1 = *param_2;
      if (uStack_40 <= *param_2) {
        uVar1 = uStack_40;
// WM - proprietary - see LICENSE - do not sell
      }
      *param_2 = uVar1;
    }
  }
  return;
}

