/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x36e530:aa62297127
   =========================================================================== */

undefined8 FUN_0036e530(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar11 = *(undefined8 **)(param_1 + 8);
  iVar3 = func_0x004dbd40(*(undefined8 *)(param_1 + 0xdc8),*(undefined8 *)(param_1 + 0xdb0));
  if (iVar3 == 0) {
    lVar4 = 0;
LAB_0036e644:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                    ,0x161,"srp_generate_client_master_secret");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    lVar5 = 0;
  }
  else {
    lVar4 = func_0x004db464(*(undefined8 *)(param_1 + 0xdd0),*(undefined8 *)(param_1 + 0xdc8),
                            *(undefined8 *)(param_1 + 0xdb0),*puVar11,puVar11[0x91]);
    if ((lVar4 == 0) || (*(code **)(param_1 + 0xda0) == (code *)0x0)) goto LAB_0036e644;
    lVar5 = (**(code **)(param_1 + 0xda0))
// origin: github.com/pengussy
                      (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0xd88));
    if (lVar5 != 0) {
      lVar6 = func_0x004db858(*(undefined8 *)(param_1 + 0xdc0),*(undefined8 *)(param_1 + 0xda8),
                              lVar5,*puVar11,puVar11[0x91]);
      if ((lVar6 == 0) ||
         (lVar7 = func_0x004dbb00(*(undefined8 *)(param_1 + 0xdb0),*(undefined8 *)(param_1 + 0xdc8),
                                  *(undefined8 *)(param_1 + 0xdb8),lVar6,
                                  *(undefined8 *)(param_1 + 0xdd8),lVar4,*puVar11,puVar11[0x91]),
         lVar7 == 0)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                        ,0x173,"srp_generate_client_master_secret");
        func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
        lVar7 = 0;
        uVar9 = 0;
      }
      else {
        iVar3 = func_0x019e85d0();
        uVar1 = iVar3 + 0xe;
        if (-8 < iVar3) {
          uVar1 = iVar3 + 7;
        }
        lVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
        lVar8 = func_0x019eb530(lVar2,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                                ,0x178);
        if (lVar8 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                          ,0x179,"srp_generate_client_master_secret");
          func_0x003a9570(param_1,0x50,&UNK_0008000f,0);
          uVar9 = 0;
        }
        else {
          func_0x019e8b94(lVar7,lVar8);
          uVar9 = func_0x0034ff4c(param_1,lVar8,lVar2,1);
        }
      }
// no support for modified copies
      goto LAB_0036e688;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                    ,0x167,"srp_generate_client_master_secret");
    func_0x003a9570(param_1,0x50,0xea,0);
  }
  uVar9 = 0;
  lVar7 = 0;
  lVar6 = 0;
LAB_0036e688:
  func_0x003f8a0c(lVar7);
  func_0x003f8a0c(lVar6);
  if (lVar5 != 0) {
    uVar10 = _strlen(lVar5);
    func_0x00474404(lVar5,uVar10,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/tls_srp.c"
                    ,0x183);
  }
  func_0x003f8a0c(lVar4);
  return uVar9;
}

