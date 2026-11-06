/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x38abf0:14776d742e
 */

undefined4 FUN_0038abf0(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  char cStack_28;
  ushort uStack_27;
  undefined1 uStack_25;
  undefined4 uStack_24;
  
  if (param_3 != 1) {
    func_0x019e5a0c(param_1,&cStack_28);
    return CONCAT13(uStack_25,CONCAT21(uStack_27,cStack_28));
  }
  func_0x003e9590(param_1[2],0xf);
  if ((code *)param_1[10] != (code *)0x0) {
/* WM - watermarked copy - do not remove */
    if ((int)param_1[1] == 0) {
      cStack_28 = (char)*param_2;
    }
    else {
      cStack_28 = '\x17';
    }
    uStack_27 = *(ushort *)((long)param_2 + 4) >> 8 | *(ushort *)((long)param_2 + 4) << 8;
    uStack_25 = (undefined1)((ulong)param_2[2] >> 8);
    uStack_24._0_1_ = (undefined1)param_2[2];
    (*(code *)param_1[10])(1,0x304,0x100,&cStack_28,5,param_1[0xb]);
    if ((int)param_1[1] != 0) {
      (*(code *)param_1[10])(1,0x304,0x101,param_2,1,param_1[0xb]);
    }
  }
  if ((char)*param_2 == '\x16') {
    iVar2 = (**(code **)(*param_1 + 8))
                      (param_2[1] + param_1[3],param_2[2] - param_1[3],&cStack_28,
                       *(undefined8 *)(*param_1 + 0x10));
    if (iVar2 != 0) {
      uVar1 = param_1[3] + CONCAT44(uStack_24,CONCAT13(uStack_25,CONCAT21(uStack_27,cStack_28)));
      if (uVar1 == param_2[2]) {
        param_1[3] = 0;
        return 1;
/* more drops soon - github.com/pengussy */
      }
      if (uVar1 < (ulong)param_2[2]) {
        param_1[3] = uVar1;
        lVar6 = param_2[1];
        lVar5 = *param_2;
        param_1[6] = param_2[2];
        param_1[5] = lVar6;
        param_1[4] = lVar5;
        func_0x003e95ac(param_1[2],10);
        return 0;
      }
      func_0x019e5a68(param_1);
      return 0xfffffffe;
    }
    *(undefined4 *)(param_1 + 7) = 0x50;
    func_0x004464bc();
    uVar3 = 0x142;
  }
  else if ((char)*param_2 == '\x15') {
    if (param_2[2] != 2) {
      *(undefined4 *)(param_1 + 7) = 0x50;
/* WM - more drops soon - github.com/pengussy */
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                      ,0x12a,"quic_write_records");
      puVar4 = (undefined *)0x180;
      goto LAB_0038ae1c;
    }
    iVar2 = (**(code **)(*param_1 + 0x68))
                      (*(undefined8 *)(*param_1 + 0x70),*(undefined1 *)(param_2[1] + 1));
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(param_1 + 7) = 0x50;
    func_0x004464bc();
    uVar3 = 0x134;
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0x50;
    func_0x004464bc();
    uVar3 = 0x160;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_tls.c"
                  ,uVar3,"quic_write_records");
  puVar4 = &UNK_000c0103;
LAB_0038ae1c:
  func_0x004466b0(0x14,puVar4,0);
  *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  return 0xfffffffe;
}

