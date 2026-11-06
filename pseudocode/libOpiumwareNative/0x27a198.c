/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x27a198:5b8e59e5f7
 */

void FUN_0027a198(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uStack_68;
  
  pbVar9 = (byte *)(*pcRam000000000207a148)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019df2a0();
  }
  pcVar10 = (char *)(*pcRam000000000207a130)();
  if (*pcVar10 == '\x01') {
    uVar1 = (byte)pcVar10[1] ^ 0xb4868af8;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0x826e7c21;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    pcVar10[6] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 0x3b;
    uVar13 = (((ulong)(byte)pcVar10[1] ^ 0x46433d61b85ab100) << 0x11 | 0x8c86) + 0x9e3779b97f4a7c15;
    uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcVar10[2] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcVar10[7] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar16;
    uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcVar10[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcVar10[3] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcVar10[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar16;
    uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcVar10[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar15 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar15 = (uVar15 ^ uVar15 >> 0x21) * -0x3b314601e57a13ad;
    uVar16 = uVar15 ^ uVar15 >> 0x21;
    uVar1 = (uint)(byte)pcVar10[4] ^ (uint)uVar16 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar15 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
    pcVar10[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar16;
    uVar13 = (uVar13 >> 0x2f | (uVar13 ^ (byte)pcVar10[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0xae502812aa7333;
    uVar13 = (uVar13 ^ uVar13 >> 0x21) * -0x3b314601e57a13ad;
    uVar15 = uVar13 ^ uVar13 >> 0x21;
/*  watermarked copy - do not remove  */
    uVar1 = (uint)(byte)pcVar10[5] ^ (uint)uVar15 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) -
            (((uint)(uVar13 >> 0x29) | 1) + (int)(uVar15 >> 0x17));
    pcVar10[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar15;
    *pcVar10 = '\0';
  }
  func_0x0011ab24((long)register0x00000008 + -0x18);
  uVar13 = _objc_getClassList(0,0);
  if ((int)uVar13 < 1) {
    return;
  }
  lVar19 = (uVar13 & 0xffffffff) * 8;
  plVar11 = (long *)__Znwm(lVar19);
  _bzero(plVar11,lVar19);
  _objc_getClassList(plVar11,uVar13);
  uVar7 = uRam0000000001f262c0;
  pbVar9 = (byte *)(*pcRam000000000207a0d0)();
  if ((*pbVar9 & 1) == 0) {
    func_0x019df2e0();
  }
  uStack_68 = (char *)(*pcRam000000000207a0b8)();
  if (*uStack_68 == '\x01') {
    lVar14 = 0;
    uVar15 = 0x40c392053c0a64fa;
    do {
      uVar16 = (uVar15 ^ uVar15 >> 0x21) * -0xae502812aa7333;
      uVar16 = (uVar16 ^ uVar16 >> 0x21) * -0x3b314601e57a13ad;
// if you paid for this, you were scammed
      uVar17 = uVar16 ^ uVar16 >> 0x21;
      uVar1 = (uint)(byte)uStack_68[lVar14 + 1] ^ (uint)uVar17 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar17 >> 0x17);
      uStack_68[lVar14 + 0xe] =
           ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) - ((byte)(uVar16 >> 0x29) | 1) ^
           (byte)uVar17;
      uVar15 = lVar14 + -0x61c8864680b583eb +
               (uVar15 >> 0x2f | (uVar15 ^ (byte)uStack_68[lVar14 + 1]) << 0x11);
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0xd);
    *uStack_68 = '\0';
  }
  uStack_68 = uStack_68 + 0xe;
  func_0x0011ab24(&uStack_68);
  lVar14 = _objc_getClass();
  puVar6 = PTR_s_commit_01f25af0;
  puVar5 = PTR_s_presentDrawable_afterMinimumDura_01f25a08;
  puVar4 = PTR_s_presentDrawable_atTime__01f25a00;
  puVar3 = PTR_s_presentDrawable__01f259f8;
  puVar2 = PTR_s_nextDrawable_01f259f0;
  if (lVar14 == 0) {
    plVar18 = plVar11;
    do {
// WM - thanks for reading - discord.gg/sdkhDjTex
      lVar14 = *plVar18;
      iVar8 = _class_conformsToProtocol(lVar14,uVar7);
      if (iVar8 != 0) {
        func_0x0027a800(lVar14,puVar6,&DAT_0027ac78);
        func_0x0027a800(lVar14,puVar3,&DAT_0027aefc);
        func_0x0027a800(lVar14,puVar4,&DAT_0027b004);
        func_0x0027a800(lVar14,puVar5,&DAT_0027b004);
      }
      plVar18 = plVar18 + 1;
      lVar19 = lVar19 + -8;
    } while (lVar19 != 0);
  }
  else {
    plVar18 = plVar11;
    do {
      lVar19 = *plVar18;
      if (lVar19 != 0) {
        if (lVar19 != lVar14) {
          lVar12 = lVar19;
          do {
            lVar12 = _class_getSuperclass(lVar12);
// found on a paste site? it was re-uploaded illegally
            if (lVar12 == lVar14) break;
          } while (lVar12 != 0);
          if (lVar12 == 0) goto LAB_0027a670;
        }
        func_0x0027a800(lVar19,puVar2,FUN_0027a9a4);
      }
LAB_0027a670:
      iVar8 = _class_conformsToProtocol(lVar19,uVar7);
      if (iVar8 != 0) {
        func_0x0027a800(lVar19,puVar6,&DAT_0027ac78);
        func_0x0027a800(lVar19,puVar3,&DAT_0027aefc);
        func_0x0027a800(lVar19,puVar4,&DAT_0027b004);
        func_0x0027a800(lVar19,puVar5,&DAT_0027b004);
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar11 + (uVar13 & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x01a17390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_01f20590)(plVar11);
  return;
}

