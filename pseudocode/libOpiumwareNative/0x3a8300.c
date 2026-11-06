/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3a8300:3a122747ba
 */

undefined8 FUN_003a8300(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if ((*(byte *)(param_1 + 0x161) >> 3 & 1) == 0) {
    return 2;
  }
  puVar6 = *(undefined8 **)(param_1 + 8);
  if (puVar6[0x1c] == 0) {
/* watermarked copy - do not remove - github.com/pengussy */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x829,"tls_construct_stoc_cookie");
    puVar7 = (undefined *)0x11f;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    iVar1 = func_0x019ec0a0(param_2,0x2c,2);
    if ((((((iVar1 != 0) && (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
          (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
         (((iVar1 = func_0x019ec1d8(param_2,&lStack_80), iVar1 != 0 &&
           (iVar1 = func_0x019eb93c(param_2,"/GameController",&lStack_68), iVar1 != 0)) &&
          ((iVar1 = func_0x019ec0a0(param_2,1,2), iVar1 != 0 &&
           ((iVar1 = func_0x019ec0a0(param_2,0x304,2), iVar1 != 0 &&
            (iVar1 = func_0x019ec0a0(param_2,*(undefined2 *)(param_1 + 0x4de),2), iVar1 != 0))))))))
        && (iVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0xb0))
                              (*(undefined8 *)(param_1 + 0x300),param_2,auStack_88), iVar1 != 0)) &&
       (iVar1 = func_0x019ec0a0(param_2,*(long *)(param_1 + 0x4e0) == 0,1), iVar1 != 0)) {
/* wm:watermarked copy - do not remove */
      uVar2 = _time(0);
      iVar1 = func_0x019ec0a0(param_2,uVar2,8);
      if (((iVar1 != 0) && (iVar1 = func_0x019eba0c(param_2,2), iVar1 != 0)) &&
         (iVar1 = func_0x019eb93c(param_2,0x40,&lStack_48), iVar1 != 0)) {
        uVar2 = func_0x0034d670(param_1,0);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = func_0x0035e10c(param_1,lStack_48,0x40,&uStack_98);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        iVar1 = func_0x019eb850(param_2,uStack_98,&lStack_50);
        if (((iVar1 == 0) || (lStack_48 != lStack_50)) ||
           ((iVar1 = func_0x00476494(param_2), iVar1 == 0 ||
            ((iVar1 = func_0x019eba0c(param_2,1), iVar1 == 0 ||
             (iVar1 = func_0x019eb93c(param_2,0x1000,&lStack_58), iVar1 == 0)))))) {
          func_0x019e748c(param_1);
          return 0;
        }
        iVar1 = (*(code *)puVar6[0x1c])(uVar5,lStack_58,&uStack_a8);
        if (iVar1 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                          ,0x858,"tls_construct_stoc_cookie");
          puVar7 = (undefined *)0x190;
/* found on a paste site? it was re-uploaded illegally */
          goto LAB_003a86ac;
        }
        iVar1 = func_0x019eb850(param_2,uStack_a8,&lStack_60);
        if ((((iVar1 == 0) || (lStack_58 != lStack_60)) ||
            (iVar1 = func_0x00476494(param_2), iVar1 == 0)) ||
           ((iVar1 = func_0x019ec1d8(param_2,&pcStack_90), iVar1 == 0 ||
            (iVar1 = func_0x019eb93c(param_2,0x20,&lStack_70), iVar1 == 0)))) {
          func_0x019e7460(param_1);
          return 0;
        }
        lStack_a0 = 0x20;
        pcStack_90 = pcStack_90 + -lStack_80;
        if ("eController.framework/Versions/A/GameController" < pcStack_90) {
          func_0x019e73e4(param_1);
          return 0;
        }
        lVar3 = func_0x0044efa4();
        lVar4 = func_0x0045ed5c(*puVar6,"HMAC",puVar6[0x91],*(long *)(param_1 + 0xd40) + 0x2f8,0x20)
        ;
        puVar7 = &UNK_00080006;
        uVar5 = 0x873;
        if ((lVar3 != 0) && (lVar4 != 0)) {
          puVar7 = &UNK_000c0103;
          iVar1 = func_0x0045b25c(lVar3,0,"SHA2-256",*puVar6,puVar6[0x91],lVar4,0);
          if ((iVar1 < 1) ||
             (iVar1 = func_0x0045be74(lVar3,lStack_70,&lStack_a0,lStack_68,pcStack_90), iVar1 < 1))
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          {
            uVar5 = 0x87d;
          }
          else if ("/GameController" < pcStack_90 + lStack_a0) {
            uVar5 = 0x882;
          }
          else {
            iVar1 = func_0x019eb850(param_2,lStack_a0,&lStack_78);
            if ((((iVar1 != 0) && (lStack_70 == lStack_78)) &&
                (lStack_68 == lStack_70 - (long)pcStack_90)) &&
               ((iVar1 = func_0x00476494(param_2), iVar1 != 0 &&
                (iVar1 = func_0x00476494(param_2), iVar1 != 0)))) {
              uVar5 = 1;
              goto LAB_003a8750;
            }
            uVar5 = 0x88b;
          }
        }
        func_0x019e7410(uVar5,param_1,puVar7);
        uVar5 = 0;
LAB_003a8750:
        func_0x0044efb8(lVar3);
        func_0x0045eb4c(lVar4);
        return uVar5;
      }
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_srvr.c"
                    ,0x83c,"tls_construct_stoc_cookie");
    puVar7 = &UNK_000c0103;
  }
LAB_003a86ac:
  func_0x003a9570(param_1,0x50,puVar7,0);
  return 0;
}

