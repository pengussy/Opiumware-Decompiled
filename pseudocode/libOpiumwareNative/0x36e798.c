/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36e798:15249fe35f
 */

undefined8 FUN_0036e798(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = func_0x003f9044(*(undefined8 *)(param_1 + 0xdb8),*(undefined8 *)(param_1 + 0xdb0));
  if (((-1 < iVar1) ||
      (iVar1 = func_0x003f9044(*(undefined8 *)(param_1 + 0xdc8),*(undefined8 *)(param_1 + 0xdb0)),
      -1 < iVar1)) || (iVar1 = func_0x003f89fc(*(undefined8 *)(param_1 + 0xdc8)), iVar1 != 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                    ,0x191,"srp_verify_server_param");
    func_0x003a9570(param_1,0x2f,0x186,0);
    return 0;
  }
  iVar1 = func_0x019e85d0(*(undefined8 *)(param_1 + 0xdb0));
  if (iVar1 < *(int *)(param_1 + 0xdf8)) {
    func_0x004464bc();
    uVar3 = 0x196;
  }
  else {
    if (*(code **)(param_1 + 0xd98) != (code *)0x0) {
      iVar1 = (**(code **)(param_1 + 0xd98))
// WM - found on a paste site? it was re-uploaded illegally
                        (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xd88));
      if (iVar1 < 1) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                        ,0x19e,"srp_verify_server_param");
        func_0x003a9570(param_1,0x47,0xea,0);
        return 0;
      }
      return 1;
    }
    lVar2 = func_0x004dbdd0(*(undefined8 *)(param_1 + 0xdb8),*(undefined8 *)(param_1 + 0xdb0));
    if (lVar2 != 0) {
      return 1;
    }
    func_0x004464bc();
    uVar3 = 0x1a3;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                  ,uVar3,"srp_verify_server_param");
  func_0x003a9570(param_1,0x47,0xf1,0);
  return 0;
}

