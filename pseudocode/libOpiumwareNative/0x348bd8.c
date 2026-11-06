/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x348bd8:b8d27164ee
   =========================================================================== */

undefined8 FUN_00348bd8(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  uStack_78 = 0;
  uStack_80 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0xb60) == 0) || (*(long *)(param_1 + 0xd10) == 0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                    ,0x1d1,"ossl_ech_encode_inner");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
    return 0;
  }
  lVar2 = func_0x00400364();
  if (((((lVar2 == 0) || (iVar1 = func_0x019ebd10(&uStack_80,lVar2), iVar1 == 0)) ||
       (iVar1 = func_0x019ec0a0(&uStack_80,(long)*(int *)(param_1 + 0x9d4),2), iVar1 == 0)) ||
      ((iVar1 = func_0x00476690(&uStack_80,param_1 + 0xcf0,0x20), iVar1 == 0 ||
       (iVar1 = func_0x004766ec(&uStack_80,0,0,1), iVar1 == 0)))) ||
     (iVar1 = func_0x019eba0c(&uStack_80,2), iVar1 == 0)) {
LAB_00348df0:
    func_0x004464bc();
    uVar3 = 0x1e5;
  }
  else {
    uVar3 = func_0x0035c0a8(param_1);
    iVar1 = FUN_00356190(param_1,uVar3,&uStack_80);
    if (((iVar1 == 0) || (iVar1 = func_0x00476494(&uStack_80), iVar1 == 0)) ||
       ((iVar1 = func_0x019eba0c(&uStack_80,1), iVar1 == 0 ||
        ((iVar1 = func_0x019ec0a0(&uStack_80,0,1), iVar1 == 0 ||
         (iVar1 = func_0x00476494(&uStack_80), iVar1 == 0)))))) goto LAB_00348df0;
    iVar1 = func_0x019eba0c(&uStack_80,2);
    if (iVar1 == 0) {
      func_0x004464bc();
      uVar3 = 0x1ea;
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0xd10) + 0x298);
/* wm:do not claim this as your own */
      if ((lVar5 == 0) || (*(ulong *)(*(long *)(param_1 + 0xd10) + 0x290) < 0x1f)) {
        func_0x004464bc();
        uVar3 = 0x1f1;
      }
      else if (*(long *)(param_1 + 0xc08) == 0) {
LAB_00348d94:
        lVar4 = 0;
        puVar6 = (undefined4 *)(lVar5 + 0x20);
        do {
          if (((puVar6[-2] != 0) && (iVar1 = func_0x0039b9b4(lVar4), iVar1 != 1)) &&
             ((iVar1 = func_0x019ec0a0(&uStack_80,*puVar6,2), iVar1 == 0 ||
              (iVar1 = func_0x004766ec(&uStack_80,*(undefined8 *)(puVar6 + -8),
                                       *(undefined8 *)(puVar6 + -4),2), iVar1 == 0)))) {
            func_0x004464bc();
            uVar3 = 0x211;
            goto LAB_00348e08;
          }
          lVar4 = lVar4 + 1;
          puVar6 = puVar6 + 0xc;
        } while (lVar4 != 0x1f);
        iVar1 = func_0x00476494(&uStack_80);
        if ((iVar1 != 0) && (iVar1 = func_0x019ec1ec(&uStack_80,&uStack_48), iVar1 != 0)) {
          *param_2 = *(undefined8 *)(lVar2 + 8);
          *(undefined8 *)(lVar2 + 8) = 0;
          *param_3 = uStack_48;
          uVar3 = 1;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
          goto LAB_00348e28;
        }
        func_0x004464bc();
        uVar3 = 0x217;
      }
      else {
        iVar1 = func_0x019ec0a0(&uStack_80,0xfd00,2);
        if (((iVar1 == 0) || (iVar1 = func_0x019eba0c(&uStack_80,2), iVar1 == 0)) ||
           (iVar1 = func_0x019eba0c(&uStack_80,1), iVar1 == 0)) {
          func_0x004464bc();
          uVar3 = 0x1fa;
        }
        else {
          if (*(long *)(param_1 + 0xc08) != 0) {
            lVar4 = 0;
            do {
              iVar1 = func_0x019ec0a0(&uStack_80,*(undefined2 *)(param_1 + lVar4 * 2 + 0xbe0),2);
              if (iVar1 == 0) {
                func_0x004464bc();
                uVar3 = 0x200;
/* wm:more drops soon - github.com/pengussy */
                goto LAB_00348e08;
              }
              lVar4 = lVar4 + 1;
            } while (lVar4 != *(long *)(param_1 + 0xc08));
          }
          iVar1 = func_0x00476494(&uStack_80);
          if ((iVar1 != 0) && (iVar1 = func_0x00476494(&uStack_80), iVar1 != 0)) goto LAB_00348d94;
          func_0x004464bc();
          uVar3 = 0x206;
        }
      }
    }
  }
LAB_00348e08:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,uVar3,"ossl_ech_encode_inner");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  uVar3 = 0;
LAB_00348e28:
  func_0x0047680c(&uStack_80);
  func_0x00400378(lVar2);
  return uVar3;
}

