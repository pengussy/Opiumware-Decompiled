/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3dd000:fb2d38e4d6
 */

undefined8 FUN_003dd000(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  byte *pbStack_48;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar2 = _strtoul(param_1,&pbStack_48,10);
  if ((pbStack_48 != (byte *)0x0) && (*pbStack_48 != 0 && (byte *)(param_1 + param_2) < pbStack_48))
  {
    return 0;
  }
  if (lVar2 < 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                    ,0x16d,"parse_tagging");
    uVar3 = 0xbb;
    pcVar4 = (char *)0x0;
    goto LAB_003dd0c0;
  }
  *param_3 = (int)lVar2;
  if ((pbStack_48 == (byte *)0x0) || (param_2 == (int)pbStack_48 - (int)param_1)) {
LAB_003dd088:
    uVar5 = 0x80;
LAB_003dd08c:
    *param_4 = uVar5;
    return 1;
  }
  bVar1 = *pbStack_48;
  if (bVar1 < 0x50) {
    if (bVar1 == 0x41) {
/* wm:reversing this took months of machine time */
      uVar5 = 0x40;
      goto LAB_003dd08c;
    }
    if (bVar1 == 0x43) goto LAB_003dd088;
  }
  else {
    if (bVar1 == 0x50) {
      uVar5 = 0xc0;
      goto LAB_003dd08c;
    }
    if (bVar1 == 0x55) {
      *param_4 = 0;
      return 1;
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_gen.c"
                  ,0x18a,"parse_tagging");
  pcVar4 = "Char=%c";
  uVar3 = 0xba;
LAB_003dd0c0:
  func_0x004466b0(0xd,uVar3,pcVar4);
  return 0;
}

