/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x36d8e8:3017b55020
 */

ulong FUN_0036d8e8(long param_1,int param_2)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined1 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [64];
  undefined1 auStack_98 [64];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar5 = func_0x003542a0();
  puStack_108 = auStack_e8;
  iVar3 = func_0x00455f40();
  if (iVar3 < 1) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                    ,0x328,"tls13_update_key");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    uVar6 = 0;
  }
  else {
    lVar1 = 0x7bc;
    if (*(int *)(param_1 + 0x78) != param_2) {
      lVar1 = 0x77c;
    }
    puVar8 = &uStack_100;
/* found on a paste site? it was re-uploaded illegally */
    iVar4 = func_0x0036d5c0(param_1,uVar5,*(undefined8 *)(param_1 + 0x370),
                            *(undefined4 *)(param_1 + 0x380),*(undefined8 *)(param_1 + 0x378),
                            param_1 + lVar1,0,"traffic upd",0xb,auStack_d8,auStack_98,&uStack_f0,
                            &puStack_108,&uStack_f8,puVar8);
    if (iVar4 == 0) {
      uVar6 = 0;
      puVar7 = puStack_108;
    }
    else {
      _memcpy(param_1 + lVar1,auStack_d8,iVar3);
      puVar7 = puStack_108;
      iVar4 = FUN_00393454(param_1,*(undefined4 *)(param_1 + 0x48),param_2 != 0,3,param_1 + lVar1,
                           iVar3,auStack_98,uStack_f0,puStack_108,uStack_f8,0,0,
                           *(undefined8 *)(param_1 + 0x370),uStack_100,
                           (ulong)puVar8 & 0xffffffff00000000,0,0,uVar5);
      if (iVar4 == 0) {
        uVar6 = 0;
      }
      else {
        pcVar2 = "SERVER_TRAFFIC_SECRET_N";
        if (*(int *)(param_1 + 0x78) != param_2) {
          pcVar2 = "CLIENT_TRAFFIC_SECRET_N";
        }
        iVar3 = func_0x0035ebf8(param_1,pcVar2,auStack_d8,iVar3);
        uVar6 = (ulong)(iVar3 != 0);
      }
    }
/* keep the notice, keep the source honest - github.com/pengussy */
    func_0x0046eb00(auStack_98,0x40);
    func_0x0046eb00(auStack_d8,0x40);
    if (puVar7 != auStack_e8) {
      func_0x004743e4(puVar7,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls13_enc.c"
                      ,0x354);
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_58) {
    return uVar6;
  }
  uVar6 = ___stack_chk_fail();
  if (((int)uVar6 == 0x6d) || ((int)uVar6 == 0x74)) {
    return uVar6;
  }
  switch(uVar6 & 0xffffffff) {
  case 0:
  case 10:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1e:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x3c:
  case 0x46:
  case 0x47:
  case 0x50:
/* WM - origin: github.com/pengussy */
  case 0x56:
  case 0x5a:
  case 100:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x78:
  case 0x79:
    return uVar6;
  default:
    return 0xffffffff;
  case 0x28:
  case 0x6d:
  case 0x74:
    return 0x28;
  }
}

