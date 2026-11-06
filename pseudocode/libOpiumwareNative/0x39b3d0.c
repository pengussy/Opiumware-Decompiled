/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x39b3d0:43dfe3a1b5
 */

undefined8 FUN_0039b3d0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0x304) {
LAB_0039b514:
    if (*(ulong *)(param_2 + 2) < 0x4001) {
      return 1;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tlsany_meth.c"
                    ,0x6e,"tls_validate_record_header");
    func_0x00397da4(param_1,0x16,0x92,0);
    return 0;
  }
  if (uVar1 == 0x10000) {
    if ((*param_2 & 0xffffff00) == 0x300) goto LAB_0039b514;
    if (*(int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                param_1 + 0x34) != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xff0);
      iVar3 = _strncmp(uVar4,"GET ",4);
      if (((((iVar3 == 0) || (iVar3 = _strncmp(uVar4,"POST ",5), iVar3 == 0)) ||
           (iVar3 = _strncmp(uVar4,"HEAD ",5), iVar3 == 0)) ||
          ((iVar3 = _strncmp(uVar4,"PATCH",5), iVar3 == 0 ||
           (iVar3 = _strncmp(uVar4,"OPTIO",5), iVar3 == 0)))) ||
         ((iVar3 = _strncmp(uVar4,"DELET",5), iVar3 == 0 ||
          ((iVar3 = _strncmp(uVar4,"TRACE",5), iVar3 == 0 ||
           (iVar3 = _strncmp(uVar4,"PUT ",4), iVar3 == 0)))))) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tlsany_meth.c"
                        ,0x39,"tls_validate_record_header");
// WM - do not claim this as your own
        func_0x00397da4(param_1,0xffffffff,0x9c,0);
        return 0;
      }
      iVar3 = _strncmp(uVar4,"CONNE",5);
      func_0x004464bc();
      if (iVar3 == 0) {
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tlsany_meth.c"
                        ,0x3d,"tls_validate_record_header");
        func_0x00397da4(param_1,0xffffffff,0x9b,0);
        return 0;
      }
      uVar4 = 0x43;
LAB_0039b5a0:
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tlsany_meth.c"
                      ,uVar4,"tls_validate_record_header");
      uVar4 = 0xffffffff;
      goto LAB_0039b638;
    }
    func_0x004464bc();
    uVar4 = 0x47;
  }
  else {
    uVar2 = *param_2;
    if (uVar2 == uVar1) goto LAB_0039b514;
    if (((uVar2 ^ uVar1) & 0xff00) == 0) {
      if (param_2[1] == 0x15) {
        func_0x004464bc();
        uVar4 = 0x5d;
        goto LAB_0039b5a0;
      }
      *(uint *)(param_1 + 0x14) = uVar2 & 0xffff;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    }
    func_0x004464bc();
    uVar4 = 100;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tlsany_meth.c"
                  ,uVar4,"tls_validate_record_header");
  uVar4 = 0x46;
LAB_0039b638:
  func_0x00397da4(param_1,uVar4,0x10b,0);
  return 0;
}

