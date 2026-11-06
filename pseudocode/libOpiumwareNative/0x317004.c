/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x317004:4b259723f3
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00317004(void)

{
  undefined1 auVar1 [16];
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = lRam00000000020973e0;
  if ((&UNK_000028a2)[lRam00000000020973e0] == '\x01') {
// keep the notice, keep the source honest
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(0xf000,0x317034);
    (*pcVar3)();
  }
  uStack_48 = *(undefined8 *)(&UNK_00001ea8 + lRam00000000020973e0);
  uStack_50 = *(undefined8 *)(&UNK_00001ea0 + lRam00000000020973e0);
  uStack_38 = *(undefined8 *)(&UNK_00001eb8 + lRam00000000020973e0);
  uStack_40 = *(undefined8 *)(&UNK_00001eb0 + lRam00000000020973e0);
  uStack_28 = *(undefined8 *)(&UNK_00001ec8 + lRam00000000020973e0);
  uStack_30 = *(undefined8 *)(&UNK_00001ec0 + lRam00000000020973e0);
  uStack_70 = *(undefined8 *)(&UNK_00001e80 + lRam00000000020973e0);
  uStack_68 = (undefined4)*(undefined8 *)(&UNK_00001e88 + lRam00000000020973e0);
  fStack_64 = (float)((ulong)*(undefined8 *)(&UNK_00001e88 + lRam00000000020973e0) >> 0x20);
  fStack_58 = (float)*(undefined8 *)(&UNK_00001e98 + lRam00000000020973e0);
  uStack_54 = (undefined4)((ulong)*(undefined8 *)(&UNK_00001e98 + lRam00000000020973e0) >> 0x20);
  fStack_60 = (float)*(undefined8 *)(&UNK_00001e90 + lRam00000000020973e0);
  fStack_5c = (float)((ulong)*(undefined8 *)(&UNK_00001e90 + lRam00000000020973e0) >> 0x20);
  *(undefined4 *)(&UNK_00001e44 + lRam00000000020973e0) = 0;
  uVar4 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lVar2),1,"##Foreground");
  fVar5 = fStack_64 + (float)_UNK_01adf0c0;
  fVar6 = fStack_60 + (float)((ulong)_UNK_01adf0c0 >> 0x20);
  fVar7 = fStack_5c + (float)_UNK_01adf0c8;
  fVar8 = fStack_58 + (float)((ulong)_UNK_01adf0c8 >> 0x20);
  uStack_78 = CONCAT44(fVar8,fVar7);
  uStack_80 = CONCAT44(fVar6,fVar5);
  uStack_88 = *(ulong *)(lVar2 + 0x100);
  fVar9 = (float)(uStack_88 >> 0x20);
  auVar10._4_4_ = fVar6;
  auVar10._0_4_ = fVar5;
  auVar10._8_4_ = fVar7;
  auVar10._12_4_ = fVar8;
// found on a paste site? it was re-uploaded illegally
  auVar1._4_4_ = fVar6;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar7;
  auVar1._12_4_ = fVar8;
  auVar10 = NEON_ext(auVar10,auVar1,8,1);
  uStack_90 = CONCAT44(fVar6,fVar5) ^
              (CONCAT44(fVar6,fVar5) ^
              uStack_88 ^
              (uStack_88 ^ auVar10._0_8_) &
              CONCAT44(-(uint)(auVar10._4_4_ < fVar9),-(uint)(auVar10._0_4_ < (float)uStack_88))) &
              ~CONCAT44(-(uint)(fVar9 < fVar6),-(uint)((float)uStack_88 < fVar5));
  func_0x003235ac(0,0x3f800000,uVar4,&uStack_80,(ulong)&uStack_80 | 8,0xff00ff00,0);
  func_0x00323130(0x3f800000,uVar4,&uStack_88,&uStack_90,0xff00ff00);
  return;
}

