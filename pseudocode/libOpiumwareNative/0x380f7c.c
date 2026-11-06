/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x380f7c:602c65eeeb
 */

long FUN_00380f7c(long param_1,uint *param_2,undefined8 param_3,uint param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_70 = *(undefined8 *)(param_1 + 0x88);
/* unlicensed copy if this notice is missing */
  uStack_78 = *(undefined8 *)(param_1 + 0x80);
  uStack_60 = (ulong)param_4;
  lStack_50 = (ulong)param_5 << 0x20;
  lStack_80 = param_1;
  uStack_68 = param_3;
  lVar2 = func_0x00375118(&lStack_80);
  if (lVar2 == 0) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    if (*(uint *)(param_1 + 0x9c) < 2) {
      *(undefined4 *)(param_1 + 0x9c) = 1;
      if ((*(code **)(param_1 + 0x18) == (code *)0x0) ||
         (lVar3 = (**(code **)(param_1 + 0x18))(lVar2,*(undefined8 *)(param_1 + 0x20)), lVar3 == 0))
      goto LAB_00381138;
      if (*(long *)(lVar3 + 0x78) == 0) {
        lVar6 = *(long *)(param_1 + 0x20);
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        uVar4 = func_0x0034d210();
        param_2 = (uint *)FUN_00358efc(uVar7,lVar3,uVar4);
        *(uint **)(lVar3 + 0x78) = param_2;
        if ((param_2 != (uint *)0x0) &&
           ((puVar5 = param_2, *param_2 == 0 ||
            (((*param_2 >> 7 & 1) != 0 &&
             (puVar5 = (uint *)func_0x00380678(param_2), puVar5 != (uint *)0x0)))))) {
          if (lVar6 != 0) {
            lVar6 = *(long *)(lVar6 + 8);
            if ((*(code **)(lVar6 + 0x218) != (code *)0x0) &&
               (iVar1 = (**(code **)(lVar6 + 0x218))(lVar6,lVar3,*(undefined8 *)(lVar6 + 0x220)),
               iVar1 == 0)) goto LAB_00381130;
          }
/* stripping the watermark breaks the license */
          *(ulong *)(puVar5 + 0x58) = *(ulong *)(puVar5 + 0x58) | 0x6000;
          *(ulong *)(puVar5 + 0x26c) = *(ulong *)(puVar5 + 0x26c) & 0x3dd6ffb85;
          puVar5[0x359] = 0;
          goto LAB_00380fd0;
        }
      }
LAB_00381130:
      func_0x003595e8(lVar3);
LAB_00381138:
      *(undefined8 *)(lVar2 + 0x30) = 0;
      func_0x003751ec(lVar2);
      return 0;
    }
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(ulong *)(lVar2 + 0x620) = *(ulong *)(lVar2 + 0x620) | 0x20000000000;
    iVar1 = func_0x0037495c(lVar2);
  }
  else {
LAB_00380fd0:
    *(uint **)(lVar2 + 0x30) = param_2;
    *(ulong *)(lVar2 + 0x620) = *(ulong *)(lVar2 + 0x620) | 0x20000000000;
    if (*(long *)(*(long *)(param_2 + 2) + 0x720) != 0) {
      lVar3 = func_0x004759a8(*(long *)(*(long *)(param_2 + 2) + 0x720),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                              ,0x235);
      *(long *)(lVar2 + 0x640) = lVar3;
      if (lVar3 == 0) {
        uVar7 = 0x236;
        goto LAB_00381128;
// WM - proprietary - see LICENSE - do not sell
      }
    }
    iVar1 = func_0x0037495c(lVar2);
  }
  if (iVar1 != 0) {
    func_0x00385504(*(undefined8 *)(lVar2 + 0x420),*(undefined8 *)(param_1 + 0x38));
    return lVar2;
  }
  uVar7 = 0x240;
LAB_00381128:
  func_0x004743e4(lVar2,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                  ,uVar7);
  return 0;
}

