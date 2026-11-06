/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3eaf54:cbd45260eb
 */

bool FUN_003eaf54(undefined8 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = _ioctl(param_1,0x8004667e);
  if (iVar1 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bio_sock.c"
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                    ,0xf8,"BIO_socket_ioctl");
    puVar2 = (undefined4 *)___error();
    func_0x004466b0(2,*puVar2,"calling ioctlsocket()");
    return iVar1 == 0;
  }
  return iVar1 == 0;
}

