/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x33ff2c:a110fdf87a
 */

undefined8 FUN_0033ff2c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fStack_bc;
  undefined4 uStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  char cStack_8a;
  char cStack_89;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  lVar1 = lRam00000000020973e0;
  lVar10 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar10 + 0xce) = 1;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  if ((*(byte *)(lVar10 + 0xd1) & 1) == 0) {
    uVar8 = func_0x003053a4(lVar10,param_1,0);
    uVar9 = func_0x002ff5c8(param_1,0);
    fVar13 = *(float *)(lVar10 + 0x118);
    fVar12 = *(float *)(lVar10 + 0x150);
    fVar14 = *(float *)(lVar10 + 0x11c) + fVar12;
    fStack_78 = (float)func_0x002ffe24(param_1,uVar9,0);
    fStack_80 = fVar13 + fStack_78;
    fStack_7c = fVar14 + fVar12;
    fStack_88 = fVar13;
    fStack_84 = fVar14;
    fStack_74 = fVar12;
    func_0x003154fc(ZEXT816(0),&fStack_78);
    iVar6 = FUN_00315614(&fStack_88,uVar8,0,0);
    uVar7 = 0;
    if (iVar6 != 0) {
      uVar7 = FUN_0033e04c(&fStack_88,uVar8,&cStack_89,&cStack_8a,0);
      func_0x003006a0(&fStack_88,uVar8,0);
/*  keep the notice, keep the source honest  */
      if (cStack_89 == '\x01') {
        func_0x00319a48(7);
      }
      uStack_98 = *(ulong *)(
                            "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                            + lVar1 + 0x48);
      uVar8 = *(undefined8 *)
               ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
               lVar1 + 0x40);
      uStack_b0 = *(undefined8 *)
                   ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                   lVar1 + 0x40);
      uStack_a8 = *(undefined8 *)
                   ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                   lVar1 + 0x48);
      uStack_a0._0_4_ = (undefined4)uVar8;
      uStack_a0._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
      uVar2 = uStack_a0._4_4_;
      uVar3 = (undefined4)uStack_a0;
      uStack_a0 = uVar8;
      func_0x002fe154(uVar3,uVar2,uStack_98 & 0xffffffff,&fStack_b4,&uStack_b8,&fStack_bc);
      if (cStack_8a != '\0' || cStack_89 != '\0') {
        fVar12 = 0.4;
        if (cStack_8a == '\0') {
          fVar12 = 0.3;
        }
        fVar12 = fVar12 + fStack_bc;
        fVar13 = 1.0;
        if (fVar12 <= 1.0) {
          fVar13 = fVar12;
        }
// WM - watermarked copy - do not remove
        fStack_bc = 0.0;
        if (0.0 <= fVar12) {
          fStack_bc = fVar13;
        }
        fStack_b4 = fStack_b4 + 0.02;
        fStack_b4 = (float)((uint)fStack_b4 ^
                           ((uint)fStack_b4 ^ (uint)(fStack_b4 - (float)(int)fStack_b4)) &
                           0x7fffffff);
      }
      func_0x002fe1d4(fStack_b4,uStack_b8,&uStack_a0,(ulong)&uStack_a0 | 4,(ulong)&uStack_a0 | 8);
      fVar13 = fStack_bc + -0.2;
      fVar12 = 1.0;
      if (fVar13 <= 1.0) {
        fVar12 = fVar13;
      }
      fStack_bc = 0.0;
      if (0.0 <= fVar13) {
        fStack_bc = fVar12;
      }
      func_0x002fe1d4(fStack_b4,uStack_b8,&uStack_b0,(ulong)&uStack_b0 | 4,(ulong)&uStack_b0 | 8);
      fVar13 = fStack_80;
      fVar12 = fStack_88;
      fVar14 = *(float *)(*(long *)((long)&dylib_command_000011a8.dylib.current_version + lVar1) +
                         0x48) *
               *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                         lVar1 + 8) * 0.2;
      bVar4 = false;
      bVar5 = false;
      if (fVar14 != (float)(int)fVar14) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar14)) {
          bVar4 = fVar14 < 0.0;
          bVar5 = false;
        }
      }
      fVar14 = fStack_7c + (float)(int)((int)fVar14 - (uint)(bVar4 != bVar5));
      uVar11 = *(undefined8 *)(lVar10 + 0x2c8);
      uVar8 = func_0x002fec68(&uStack_b0);
      func_0x003232b4(fVar12,fVar13,fVar14,
                      (float)(int)*(float *)(
                                            "/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit"
                                            + lVar1 + 0x34),uVar11,uVar8);
      uVar8 = func_0x002fec68(&uStack_a0);
      func_0x002fed14(0,uVar8);
      func_0x002ff610(fStack_88,fStack_84,param_1,uVar9,0);
// WM - proprietary - see LICENSE - do not sell
      FUN_002ff010(1);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

