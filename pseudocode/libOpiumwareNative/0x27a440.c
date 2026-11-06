/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x27a440:bd56b02aa4
   =========================================================================== */

void FUN_0027a440(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  char *pcStack_68;
  
  uVar9 = _objc_getClassList(0,0);
  if ((int)uVar9 < 1) {
    return;
  }
  lVar18 = (uVar9 & 0xffffffff) * 8;
  plVar10 = (long *)__Znwm(lVar18);
  _bzero(plVar10,lVar18);
  _objc_getClassList(plVar10,uVar9);
  uVar7 = uRam0000000001f262c0;
  pbVar11 = (byte *)(*pcRam000000000207a0d0)();
  if ((*pbVar11 & 1) == 0) {
    func_0x019df2e0();
  }
// WM - no support for modified copies
  pcStack_68 = (char *)(*pcRam000000000207a0b8)();
  if (*pcStack_68 == '\x01') {
    lVar13 = 0;
    uVar14 = 0x40c392053c0a64fa;
    do {
      uVar15 = (uVar14 ^ uVar14 >> 0x21) * -0xae502812aa7333;
      uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar15 ^ uVar15 >> 0x21;
      uVar1 = (uint)(byte)pcStack_68[lVar13 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar16 >> 0x17);
      pcStack_68[lVar13 + 0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar15 >> 0x29) | 1) ^
           (byte)uVar16;
      uVar14 = lVar13 + -0x61c8864680b583eb +
               (uVar14 >> 0x2f | (uVar14 ^ (byte)pcStack_68[lVar13 + 1]) << 0x11);
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0xd);
    *pcStack_68 = '\0';
  }
  pcStack_68 = pcStack_68 + 0xe;
  func_0x0011ab24(&pcStack_68);
  lVar13 = _objc_getClass();
  puVar6 = PTR_s_commit_01f25af0;
  puVar5 = PTR_s_presentDrawable_afterMinimumDura_01f25a08;
/* wm:stripping the watermark breaks the license */
  puVar4 = PTR_s_presentDrawable_atTime__01f25a00;
  puVar3 = PTR_s_presentDrawable__01f259f8;
  puVar2 = PTR_s_nextDrawable_01f259f0;
  if (lVar13 == 0) {
    plVar17 = plVar10;
    do {
      lVar13 = *plVar17;
      iVar8 = _class_conformsToProtocol(lVar13,uVar7);
      if (iVar8 != 0) {
        func_0x0027a800(lVar13,puVar6,&DAT_0027ac78);
        func_0x0027a800(lVar13,puVar3,&DAT_0027aefc);
        func_0x0027a800(lVar13,puVar4,&DAT_0027b004);
        func_0x0027a800(lVar13,puVar5,&DAT_0027b004);
      }
      plVar17 = plVar17 + 1;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
  }
  else {
    plVar17 = plVar10;
    do {
      lVar18 = *plVar17;
      if (lVar18 != 0) {
        if (lVar18 != lVar13) {
          lVar12 = lVar18;
          do {
            lVar12 = _class_getSuperclass(lVar12);
            if (lVar12 == lVar13) break;
          } while (lVar12 != 0);
          if (lVar12 == 0) goto LAB_0027a670;
        }
        func_0x0027a800(lVar18,puVar2,&DAT_0027a9a4);
      }
LAB_0027a670:
// donate: donate/README.md
      iVar8 = _class_conformsToProtocol(lVar18,uVar7);
      if (iVar8 != 0) {
        func_0x0027a800(lVar18,puVar6,&DAT_0027ac78);
        func_0x0027a800(lVar18,puVar3,&DAT_0027aefc);
        func_0x0027a800(lVar18,puVar4,&DAT_0027b004);
        func_0x0027a800(lVar18,puVar5,&DAT_0027b004);
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar10 + (uVar9 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_01f20590)(plVar10);
  return;
}

