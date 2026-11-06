/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2f8920:4470b3e5a1
 */

ulong FUN_002f8920(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 auVar14 [16];
  uint uStack_dc;
  uint uStack_d8;
  undefined1 auStack_d2 [106];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  puVar11 = param_3;
  if (&MACH_HEADER.cpusubtype < param_3) {
    puVar13 = param_3 + -2;
    puVar11 = puVar13;
    uVar6 = FUN_002f1404(&UNK_00002818 + param_1,param_2 + 8,puVar13,param_1,&UNK_00002818,0);
    if (uVar6 < 0xffffffffffffff89) {
      lVar1 = param_2 + 8 + uVar6;
      uStack_d8 = 0x1f;
      puVar11 = &uStack_dc;
      uVar7 = func_0x0029635c(auStack_d2,&uStack_d8,puVar11,lVar1,(long)puVar13 - uVar6);
      if (((uVar7 < 0xffffffffffffff89) && (puVar11 = (uint *)(ulong)uStack_d8, uStack_d8 < 0x20))
         && (uStack_dc < 9)) {
        func_0x002f9274("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                        param_1 + 0x30,auStack_d2,puVar11,&UNK_01ade430,&UNK_01ade4b0,uStack_dc,
                        &UNK_00006828 + param_1,0x274,0);
        lVar1 = lVar1 + uVar7;
        uStack_d8 = 0x34;
        puVar11 = &uStack_dc;
        uVar8 = func_0x0029635c(auStack_d2,&uStack_d8,puVar11,lVar1,(long)puVar13 - (uVar6 + uVar7))
        ;
        if (((uVar8 < 0xffffffffffffff89) && (puVar11 = (uint *)(ulong)uStack_d8, uStack_d8 < 0x35))
           && (uStack_dc < 10)) {
          func_0x002f9274(&UNK_00001810 + param_1,auStack_d2,puVar11,&UNK_01ade4d0,&UNK_01ade5a4,
                          uStack_dc,&UNK_00006828 + param_1,0x274,0);
          lVar1 = lVar1 + uVar8;
          uStack_d8 = 0x23;
          lVar2 = uVar6 + uVar7 + uVar8;
          puVar11 = &uStack_dc;
          uVar9 = func_0x0029635c(auStack_d2,&uStack_d8,puVar11,lVar1,(long)puVar13 - lVar2);
          if (((uVar9 < 0xffffffffffffff89) &&
              (puVar11 = (uint *)(ulong)uStack_d8, uStack_d8 < 0x24)) && (uStack_dc < 10)) {
            func_0x002f9274(param_1,auStack_d2,puVar11,&UNK_01ade5dc,&UNK_01ade66c,uStack_dc,
                            &UNK_00006828 + param_1,0x274,0);
            puVar13 = (uint *)(lVar1 + uVar9);
            if (puVar13 + 3 <= (uint *)(param_2 + (long)param_3)) {
              uVar4 = *puVar13;
              uVar10 = 0xffffffffffffffe2;
              if ((uVar4 != 0) &&
                 (puVar12 = (undefined1 *)((long)param_3 + (-0x14 - (lVar2 + uVar9))),
// WM - watermarked copy - do not remove
                 (undefined1 *)(ulong)uVar4 <= puVar12)) {
                *(uint *)(&UNK_0000681c + param_1) = uVar4;
                uVar4 = puVar13[1];
                if ((uVar4 != 0) && ((undefined1 *)(ulong)uVar4 <= puVar12)) {
                  *(uint *)(&UNK_00006820 + param_1) = uVar4;
                  uVar4 = puVar13[2];
                  if ((uVar4 != 0) && ((undefined1 *)(ulong)uVar4 <= puVar12)) {
                    *(uint *)(&UNK_00006824 + param_1) = uVar4;
                    uVar10 = uVar9 + uVar8 + uVar7 + uVar6 + 0x14;
                  }
                }
              }
              goto LAB_002f8b1c;
            }
          }
        }
      }
    }
  }
  uVar10 = 0xffffffffffffffe2;
LAB_002f8b1c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
    return uVar10;
  }
  auVar14 = ___stack_chk_fail(uVar10);
  if (auVar14._8_8_ < 3) {
    return 0xffffffffffffffb8;
  }
  uVar3 = *auVar14._0_8_;
  uVar4 = (uVar3 & 0xfff8 | (uint)(byte)auVar14._0_8_[1] << 0x10) >> 3;
/* WM - chat: discord.gg/sdkhDjTex */
  uVar6 = (ulong)(uVar3 >> 1) & 3;
  uVar5 = (uint)uVar6;
  *puVar11 = uVar5;
  puVar11[1] = uVar3 & 1;
  puVar11[2] = uVar4;
  if (uVar5 != 1) {
    if (uVar5 == 3) {
      return 0xffffffffffffffec;
    }
    uVar6 = (ulong)uVar4;
  }
  return uVar6;
}

