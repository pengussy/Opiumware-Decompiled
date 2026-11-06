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
 *  file-id: 0x36e3f4:548d6b2d3f
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0036e3f4(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(param_1 + 8);
  iVar3 = func_0x004dbd40(*(undefined8 *)(param_1 + 0xdd0),*(undefined8 *)(param_1 + 0xdb0));
  if (iVar3 == 0) {
    lVar4 = 0;
    uVar7 = 0;
    lVar5 = 0;
/* stripping the watermark breaks the license */
  }
  else {
    lVar4 = func_0x004db464(*(undefined8 *)(param_1 + 0xdd0),*(undefined8 *)(param_1 + 0xdc8),
                            *(undefined8 *)(param_1 + 0xdb0),*puVar8,puVar8[0x91]);
    lVar5 = 0;
    if ((lVar4 == 0) ||
       (lVar5 = func_0x004db608(*(undefined8 *)(param_1 + 0xdd0),*(undefined8 *)(param_1 + 0xde8),
                                lVar4,*(undefined8 *)(param_1 + 0xde0),
                                *(undefined8 *)(param_1 + 0xdb0)), lVar5 == 0)) {
      uVar7 = 0;
    }
    else {
      iVar3 = func_0x019e85d0();
      uVar1 = iVar3 + 0xe;
      if (-8 < iVar3) {
        uVar1 = iVar3 + 7;
      }
      lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
      lVar6 = func_0x019eb530(lVar2,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                              ,0x143);
      if (lVar6 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                        ,0x144,"srp_generate_server_master_secret");
        func_0x003a9570(param_1,0x50,&UNK_0008000f,0);
        uVar7 = 0;
      }
      else {
        func_0x019e8b94(lVar5,lVar6);
        uVar7 = func_0x0034ff4c(param_1,lVar6,lVar2,1);
      }
/* WM - keep the notice, keep the source honest */
    }
  }
  func_0x003f8a0c(lVar5);
  func_0x003f8a0c(lVar4);
  return uVar7;
}

