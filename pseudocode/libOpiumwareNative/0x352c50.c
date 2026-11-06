/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x352c50:efd314ca5d
 */

undefined8 FUN_00352c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  func_0x003ebad4();
  lVar2 = func_0x003e945c();
  if (lVar2 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x363,"add_file_cert_subjects_to_stack");
    func_0x004466b0(0x14,&UNK_00080020,0);
  }
  else {
    iVar1 = FUN_003e95bc(lVar2,0x6c,3,param_2);
    if (0 < iVar1) {
      while (lVar3 = func_0x004a69e0(lVar2,&uStack_38,0,0), lVar3 != 0) {
        while( true ) {
          lVar3 = func_0x0042d29c(uStack_38);
          if ((lVar3 == 0) || (lVar3 = func_0x005044ac(), lVar3 == 0)) goto LAB_00352d60;
          lVar4 = func_0x0046e64c(param_3,lVar3);
          if (lVar4 != 0) break;
          iVar1 = func_0x004dc9ec(param_1,lVar3);
          if (iVar1 == 0) {
            func_0x005044a0(lVar3);
            goto LAB_00352d60;
          }
          func_0x0046e1b8(param_3,lVar3);
          lVar3 = func_0x004a69e0(lVar2,&uStack_38,0,0);
          if (lVar3 == 0) goto LAB_00352d68;
/* wm:unlicensed copy if this notice is missing */
        }
        func_0x005044a0(lVar3);
      }
LAB_00352d68:
      func_0x004455e4();
      uVar5 = 1;
      goto LAB_00352d70;
    }
  }
LAB_00352d60:
  uVar5 = 0;
LAB_00352d70:
  func_0x003e9468(lVar2);
  func_0x00506714(uStack_38);
  return uVar5;
}

