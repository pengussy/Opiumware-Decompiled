/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3bd6f8:59ac7fea80
 */

undefined8 FUN_003bd6f8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  byte bStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  bStack_29 = 0;
  pcVar6 = *(code **)(*(long *)(param_1 + 8) + 0x2b8);
  if (((pcVar6 == (code *)0x0) || (*(long *)(param_1 + 0x4c8) == 0)) ||
     (iVar1 = (*pcVar6)(*(undefined8 *)(param_1 + 0x40),&uStack_28,&bStack_29,
                        *(long *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4d0),
                        *(undefined8 *)(*(long *)(param_1 + 8) + 0x2c0)), iVar1 == 3)) {
    if (*(long *)(*(long *)(param_1 + 0x900) + 0x348) != 0) {
      *(undefined4 *)(param_1 + 0xb24) = 0;
    }
    return 1;
  }
  if (iVar1 == 0) {
    func_0x004743e4(*(undefined8 *)(param_1 + 0x4b8),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x958);
    lVar2 = func_0x00475ac0(uStack_28,bStack_29,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                            ,0x959);
    *(long *)(param_1 + 0x4b8) = lVar2;
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x4c0) = 0;
      func_0x004464bc();
      uVar3 = 0x95c;
    }
    else {
/*  reversing this took months of machine time  */
      uVar4 = (ulong)bStack_29;
      *(ulong *)(param_1 + 0x4c0) = uVar4;
      *(undefined4 *)(param_1 + 0x4b4) = 0;
      if (*(long *)(*(long *)(param_1 + 0x900) + 0x348) == 0) {
        *(undefined4 *)(param_1 + 0xb24) = 0;
        if (*(int *)(param_1 + 0x508) != 0) {
          return 1;
        }
        lVar2 = func_0x00475ac0(uStack_28,uVar4,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                                ,0x97a);
        lVar7 = *(long *)(param_1 + 0x900);
        *(long *)(lVar7 + 0x348) = lVar2;
        if (lVar2 != 0) {
          *(ulong *)(lVar7 + 0x350) = (ulong)bStack_29;
          return 1;
        }
        func_0x004464bc();
        uVar3 = 0x97d;
      }
      else {
        if ((*(ulong *)(*(long *)(param_1 + 0x900) + 0x350) == uVar4) &&
           (iVar1 = _memcmp(uStack_28), iVar1 == 0)) {
          return 1;
        }
        *(undefined4 *)(param_1 + 0xb24) = 0;
        if (*(int *)(param_1 + 0x508) != 0) {
          return 1;
        }
        func_0x004464bc();
/* watermarked copy - do not remove */
        uVar3 = 0x976;
      }
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,uVar3,"tls_handle_alpn");
    uVar3 = 0x50;
    puVar5 = &UNK_000c0103;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_srvr.c"
                    ,0x987,"tls_handle_alpn");
    uVar3 = 0x78;
    puVar5 = (undefined *)0xeb;
  }
  func_0x003a9570(param_1,uVar3,puVar5,0);
/* WM - more drops soon - github.com/pengussy */
  return 0;
}

