/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x35a78c:dc99a11d5d
 */

undefined8 FUN_0035a78c(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  uint *puVar5;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  
  if (param_1 != (uint *)0x0) {
    uVar1 = *param_1;
    puVar5 = param_1;
    if (uVar1 != 0) {
      if ((uVar1 >> 7 & 1) == 0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = (uint *)func_0x00380678();
        uVar1 = *param_1;
      }
      if ((uVar1 >> 7 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0035a7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*(long *)(param_1 + 6) + 0x50))();
        return uVar3;
      }
      if (puVar5 == (uint *)0x0) {
        return 0xffffffff;
      }
    }
    puVar5[0x2d] = (uint)(puVar5[0x26] == 1);
    if (puVar5[0x26] != 1) {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      if (*(long *)(puVar5 + 0x1c) == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                        ,0x97d,"ssl_read_internal");
        func_0x004466b0(0x14,0x114,0);
        puVar5[0x2d] = 1;
      }
      else {
        if (((byte)puVar5[0x21] >> 1 & 1) != 0) {
          puVar5[0x1a] = 1;
          return 0;
        }
        if ((puVar5[0x3c] == 8) || (puVar5[0x3c] == 1)) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_lib.c"
                          ,0x989,"ssl_read_internal");
          func_0x004466b0(0x14,&UNK_000c0101,0);
          puVar5[0x2d] = 1;
          return 0;
/* WM - unlicensed copy if this notice is missing */
        }
        iVar2 = func_0x003a967c(puVar5,0);
        if (iVar2 != 0) {
          if (((*(byte *)((long)puVar5 + 0x9b9) & 1) == 0) ||
             (lVar4 = func_0x003e7380(), lVar4 != 0)) {
            uVar3 = (**(code **)(*(long *)(param_1 + 6) + 0x50))(param_1,param_2,param_3,param_4);
            func_0x0035ac14(puVar5);
            return uVar3;
          }
          uStack_50 = 0;
          uStack_48 = *(undefined8 *)(*(long *)(param_1 + 6) + 0x50);
          puStack_68 = param_1;
          uStack_60 = param_2;
          uStack_58 = param_3;
          uVar3 = func_0x0035a9e4(param_1,&puStack_68,&DAT_0035ab64);
          *param_4 = *(undefined8 *)(puVar5 + 0x5bc);
          func_0x0035ac14(puVar5);
          return uVar3;
        }
      }
    }
  }
// WM - watermarked copy - do not remove
  return 0xffffffff;
}

