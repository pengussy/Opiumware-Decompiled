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
 *  file-id: 0x38a444:7f220b57c8
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0038a444(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iStack_3c;
  long lStack_38;
  
  if ((*(byte *)(param_1 + 0x15) >> 1 & 1) != 0) {
    return 0;
  }
  func_0x00446890();
  uVar3 = (uint)*(byte *)(param_1 + 0x15);
  if ((*(byte *)(param_1 + 0x15) & 1) == 0) {
    puVar4 = (uint *)*param_1;
    if ((puVar4 == (uint *)0x0) ||
       ((*puVar4 != 0 &&
        (((*puVar4 >> 7 & 1) == 0 ||
         (puVar4 = (uint *)func_0x00380678(puVar4), puVar4 == (uint *)0x0)))))) {
      func_0x004464bc();
      uVar2 = 0x314;
    }
    else {
      if (*(int *)(param_1 + 0xf) == 0) {
        if ((*(long *)(puVar4 + 0x2be) != 0) && (*(long *)(puVar4 + 0x2c0) != 0)) goto LAB_0038a538;
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                        ,0x323,"ossl_quic_tls_tick");
        pcVar5 = "ALPN must be configured when using QUIC";
        goto LAB_0038a6b4;
      }
      if (*(long *)(*(long *)(puVar4 + 2) + 0x2b8) == 0) {
        func_0x004464bc();
        uVar2 = 799;
      }
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      else {
LAB_0038a538:
        iVar1 = func_0x0038a1a0(param_1);
        if (iVar1 != 0) {
          *(ulong *)(puVar4 + 0x58) = *(ulong *)(puVar4 + 0x58) | 0x4000;
          if (*(int *)(param_1 + 0xf) == 0) {
            func_0x0035a724(*param_1);
          }
          else {
            func_0x0035a3c8();
          }
          uVar3 = *(byte *)(param_1 + 0x15) | 1;
          *(char *)(param_1 + 0x15) = (char)uVar3;
          goto LAB_0038a5b8;
        }
        func_0x004464bc();
        uVar2 = 0x327;
      }
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,uVar2,"ossl_quic_tls_tick");
    pcVar5 = "internal error";
    func_0x004466b0(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")");
    if (*(int *)((long)param_1 + 0x7c) == 0) {
      return 0;
    }
    func_0x00446da0(param_1[0x12]);
    uVar2 = 1;
  }
  else {
LAB_0038a5b8:
    if ((uVar3 >> 2 & 1) == 0) {
      uVar2 = func_0x0035a434();
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      iVar1 = (int)uVar2;
    }
    else {
      uVar2 = func_0x0035ac74(*param_1,0,0);
      iVar1 = (int)uVar2;
    }
    if (iVar1 < 1) {
      uVar6 = *param_1;
      iVar1 = func_0x00446a10();
      uVar3 = func_0x0035d658(uVar6,uVar2,0 < iVar1);
      if ((0xc < uVar3) || ((1 << (ulong)(uVar3 & 0x1f) & 0x181cU) == 0)) {
        func_0x0038a358(param_1,1,"internal error",0x34a,"ossl_quic_tls_tick");
        return 0;
      }
LAB_0038a674:
      func_0x004468d8();
      return 1;
    }
    if ((*(byte *)(param_1 + 0x15) >> 2 & 1) != 0) goto LAB_0038a674;
    func_0x0035c5ac(*param_1,&lStack_38,&iStack_3c);
    if ((lStack_38 != 0) && (iStack_3c != 0)) {
      *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 4;
      func_0x004468d8();
      uVar2 = (*(code *)param_1[0xb])(param_1[0xc]);
      return uVar2;
    }
    func_0x004464bc();
/* WM - watermarked copy - do not remove */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                    ,0x353,"ossl_quic_tls_tick");
    pcVar5 = "no application protocol negotiated";
LAB_0038a6b4:
    func_0x004466b0(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")");
    if (*(int *)((long)param_1 + 0x7c) == 0) {
      return 0;
    }
    func_0x00446da0(param_1[0x12]);
    uVar2 = 0x178;
  }
  param_1[0x13] = uVar2;
  param_1[0x14] = pcVar5;
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
  func_0x004468d8();
  return 0;
}

