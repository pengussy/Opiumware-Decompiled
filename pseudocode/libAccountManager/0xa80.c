/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xa80:b11210499e
 */

void FUN_00000a80(void)

{
  uint uVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int *piVar13;
  char *pcVar14;
  ulong *puVar15;
  char *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  int *piVar21;
  ulong *puVar22;
  long lVar23;
  long lVar24;
  byte bVar25;
  byte bVar26;
/* no support for modified copies */
  ulong uVar27;
  ulong uVar28;
  long *plVar29;
  ulong uVar30;
  ulong uVar31;
  long *plVar32;
  uint uVar33;
  uint *puVar34;
  uint uVar35;
  bool bVar36;
  ulong *local_208;
  undefined8 local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
/*  reversing this took months of machine time  */
  char *local_1a8;
  char *local_1a0;
  ulong *local_198;
  char *local_190;
  int *local_188;
  undefined8 local_180;
  ulong *local_178;
  long local_170;
  char *local_168;
  char *pcStack_160;
  ulong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 local_13c;
  ulong *local_138;
  ulong *puStack_130;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  undefined8 local_128;
  ulong *local_118;
  ulong *puStack_110;
  undefined8 local_108;
  int local_f4;
  long local_f0;
  undefined8 local_e8;
  ulong *local_e0;
  int *local_d8;
  ulong local_d0;
  uint local_c4;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  char *local_60;
  ulong *local_58;
  int *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR_00005078;
  if ((DAT_000067c0 == '\0') && (iVar5 = thunk_FUN_0000473c(&DAT_000067c0), iVar5 != 0)) {
    DAT_000067b8 = FUN_000033d0();
    thunk_FUN_00004748(&DAT_000067c0);
  }
  if (DAT_000067b8 != '\x01') goto LAB_00002352;
/* reversing this took months of machine time */
  pcVar6 = (char *)(*DAT_000062c0)();
  if (*pcVar6 == '\0') {
    FUN_00004150();
  }
  local_1f8 = (char *)(*DAT_000062a8)();
  if (*local_1f8 == '\x01') {
    uVar18 = 0x9fc5275a73235b8f;
    lVar19 = 0x11;
    lVar23 = 0;
    do {
      uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
      uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
      uVar31 = uVar30 >> 0x21 ^ uVar30;
      bVar26 = (byte)uVar31;
      bVar25 = local_1f8[lVar19 + -0x10] ^ bVar26 ^ 0xc3;
      bVar25 = ((byte)(uVar30 >> 0x29) | 1) ^ (bVar25 << 2 | bVar25 >> 6) - (char)(uVar31 >> 0x17);
      local_1f8[lVar19] = (bVar25 << 4 | bVar25 >> 4) - bVar26;
/* do not claim this as your own - github.com/pengussy */
      uVar18 = ((uVar18 ^ (byte)local_1f8[lVar19 + -0x10]) << 0x11 | uVar18 >> 0x2f) +
               lVar23 + -0x61c8864680b583eb;
      lVar23 = lVar23 + 1;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x21);
    *local_1f8 = '\0';
  }
  local_1f8 = local_1f8 + 0x11;
  uVar7 = FUN_00003720(local_1f8);
  thunk_FUN_000048ec(uVar7);
  pcVar6 = (char *)(*DAT_000062f0)();
  if (*pcVar6 == '\0') {
    FUN_00004190();
  }
  local_1f0 = (char *)(*DAT_000062d8)();
  if (*local_1f0 == '\x01') {
    uVar18 = 0x42ee578e9b960218;
    lVar19 = 0x17;
    lVar23 = 0;
    do {
      uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
      uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
      uVar31 = uVar30 >> 0x21 ^ uVar30;
      bVar26 = (byte)uVar31;
      bVar25 = local_1f0[lVar19 + -0x16] ^ bVar26 ^ 0xc3;
      bVar25 = (bVar25 << 3 | bVar25 >> 5) - (((byte)(uVar30 >> 0x29) | 1) + (char)(uVar31 >> 0x17))
      ;
      local_1f0[lVar19] = (bVar25 * '\x10' | bVar25 >> 4) ^ bVar26;
      uVar18 = ((uVar18 ^ (byte)local_1f0[lVar19 + -0x16]) << 0x11 | uVar18 >> 0x2f) + lVar23 +
               0x9e3779b97f4a7c15;
      lVar23 = lVar23 + 1;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x2d);
/* wm:origin: github.com/pengussy */
    *local_1f0 = '\0';
  }
  local_1f0 = local_1f0 + 0x17;
  uVar7 = FUN_00003720(local_1f0);
  thunk_FUN_000048ec(uVar7);
  local_180 = thunk_FUN_0000485c();
  local_c4 = 0;
  lVar19 = 4;
  puVar34 = &local_c4;
  do {
    lVar23 = thunk_FUN_00004898(0,puVar34,lVar19);
    if (lVar23 < 0) {
      piVar8 = (int *)thunk_FUN_00004760();
      if (*piVar8 != 4) goto LAB_00000d7a;
    }
    else {
      if (lVar23 == 0) {
LAB_00000d7a:
        FUN_000030b0(2);
        goto LAB_00002346;
      }
      puVar34 = (uint *)((long)puVar34 + lVar23);
      lVar19 = lVar19 - lVar23;
    }
    uVar33 = local_c4;
  } while (lVar19 != 0);
  uVar4 = local_c4 >> 0x18;
  uVar1 = uVar4 | (local_c4 & 0xff0000) >> 8;
  uVar35 = uVar1 | (local_c4 & 0xff00) << 8 | local_c4 << 0x18;
  local_c4 = uVar35;
  if (uVar35 - 0x4001 < 0xffffc000) {
    FUN_000030b0(2);
    goto LAB_00002346;
  }
  uVar18 = (ulong)uVar35;
  local_f0 = FUN_000045da(uVar18);
  thunk_FUN_0000470c(local_f0,uVar18);
  if (uVar33 != 0) {
/*  origin: github.com/pengussy  */
    lVar19 = local_f0;
    uVar30 = uVar18;
    do {
      lVar23 = thunk_FUN_00004898(0,lVar19,uVar30);
      if (lVar23 < 0) {
        piVar8 = (int *)thunk_FUN_00004760();
        if (*piVar8 != 4) goto LAB_00000e19;
      }
      else {
        if (lVar23 == 0) {
LAB_00000e19:
          FUN_000030b0(2);
          goto LAB_0000233a;
        }
        lVar19 = lVar19 + lVar23;
        uVar30 = uVar30 - lVar23;
      }
    } while (uVar30 != 0);
  }
  uVar7 = thunk_FUN_00004844(PTR_000061d0);
  local_e8 = (*(code *)PTR_00005040)
                       (uVar7,PTR_s_initWithBytes_length_encoding__00006160,local_f0,uVar18,4);
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  if (uVar33 != 0) {
    uVar18 = (ulong)(uVar4 & 7);
    if (uVar35 < 8) {
      uVar30 = 0;
    }
    else {
      uVar30 = 0;
      do {
        *(undefined1 *)(local_f0 + uVar30) = 0;
        *(undefined1 *)(local_f0 + 1 + uVar30) = 0;
        *(undefined1 *)(local_f0 + 2 + uVar30) = 0;
        *(undefined1 *)(local_f0 + 3 + uVar30) = 0;
        *(undefined1 *)(local_f0 + 4 + uVar30) = 0;
        *(undefined1 *)(local_f0 + 5 + uVar30) = 0;
        *(undefined1 *)(local_f0 + 6 + uVar30) = 0;
        *(undefined1 *)(local_f0 + 7 + uVar30) = 0;
        uVar30 = uVar30 + 8;
      } while ((uVar1 & 0x7ff8) != uVar30);
    }
    if (uVar18 != 0) {
      uVar31 = 0;
      do {
        *(undefined1 *)(local_f0 + uVar30 + uVar31) = 0;
        uVar31 = uVar31 + 1;
      } while (uVar18 != uVar31);
// chat: discord.gg/sdkhDjTex
    }
  }
  lVar19 = (*(code *)PTR_00005040)(local_e8,PTR_s_length_00006168);
  if (lVar19 != 0) {
    uVar7 = (*(code *)PTR_00005040)(PTR_000061d8,PTR_s_controlCharacterSet_00006170);
    uVar7 = thunk_FUN_00004880(uVar7);
    lVar19 = (*(code *)PTR_00005040)(local_e8,PTR_s_rangeOfCharacterFromSet__00006178,uVar7);
    puVar2 = PTR_000061d0;
    if (lVar19 == 0x7fffffffffffffff) {
      pcVar6 = (char *)(*DAT_00006350)();
      if (*pcVar6 == '\0') {
        FUN_000041d0();
      }
      local_1e8 = (char *)(*DAT_00006338)();
      if (*local_1e8 == '\x01') {
        bVar26 = local_1e8[1] ^ 0x7f;
        bVar26 = (bVar26 << 5 | bVar26 >> 3) + 0x7f ^ 0x85;
        local_1e8[3] = (bVar26 << 2 | bVar26 >> 6) + 0x44;
        uVar18 = (((ulong)(byte)local_1e8[1] ^ 0x6338d0206b2bc621) << 0x11 | 0xc671) +
                 0x9e3779b97f4a7c15;
        uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
        uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0x3b314601e57a13ad;
        uVar30 = uVar18 >> 0x21 ^ uVar18;
        bVar25 = (byte)uVar30;
        bVar26 = local_1e8[2] ^ bVar25 ^ 0xc3;
        bVar26 = ((byte)(uVar18 >> 0x29) | 1) ^ (bVar26 << 5 | bVar26 >> 3) - (char)(uVar30 >> 0x17)
        ;
        local_1e8[4] = (bVar26 << 2 | bVar26 >> 6) - bVar25;
// WM - keep the notice, keep the source honest
        *local_1e8 = '\0';
      }
      local_1e8 = local_1e8 + 3;
      uVar9 = FUN_00003720(local_1e8);
      uVar9 = (*(code *)PTR_00005040)(puVar2,PTR_s_stringWithUTF8String__00006180,uVar9);
      uVar9 = thunk_FUN_00004880(uVar9);
      cVar3 = (*(code *)PTR_00005040)(local_e8,PTR_s_containsString__00006188,uVar9);
      (*(code *)PTR_00005048)(uVar9);
      (*(code *)PTR_00005048)(uVar7);
      puVar2 = PTR_000061d0;
      if (cVar3 == '\0') {
        local_b8 = PTR_000061e0;
        local_a8 = *(undefined8 *)PTR_00005020;
        pcVar6 = (char *)(*DAT_00006380)();
        if (*pcVar6 == '\0') {
          FUN_00004210();
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
        }
        local_1e0 = (char *)(*DAT_00006368)();
        if (*local_1e0 == '\x01') {
          uVar18 = 0x318fac849dfe84e4;
          lVar19 = 0x10;
          lVar23 = 0;
          do {
            uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
            uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
            uVar31 = uVar30 >> 0x21 ^ uVar30;
            bVar26 = (byte)uVar31;
            bVar25 = local_1e0[lVar19 + -0xf] ^ bVar26 ^ 0xc3;
            bVar25 = ((byte)(uVar30 >> 0x29) | 1) ^
                     (bVar25 << 2 | bVar25 >> 6) - (char)(uVar31 >> 0x17);
            local_1e0[lVar19] = (bVar25 << 1 | (char)bVar25 < '\0') - bVar26;
            uVar18 = ((uVar18 ^ (byte)local_1e0[lVar19 + -0xf]) << 0x11 | uVar18 >> 0x2f) + lVar23 +
                     0x9e3779b97f4a7c15;
            lVar23 = lVar23 + 1;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x1f);
          *local_1e0 = '\0';
        }
        local_1e0 = local_1e0 + 0x10;
        uVar7 = FUN_00003720(local_1e0);
        puVar20 = PTR_s_stringWithUTF8String__00006180;
        uVar7 = (*(code *)PTR_00005040)(puVar2,PTR_s_stringWithUTF8String__00006180,uVar7);
        local_c0 = (char *)thunk_FUN_00004880(uVar7);
        puVar2 = PTR_000061d0;
        local_a0 = *(undefined8 *)PTR_00005038;
        local_68 = local_e8;
/* wm:if you paid for this, you were scammed */
        local_98 = *(undefined8 *)PTR_00005018;
        local_70 = local_c0;
        pcVar6 = (char *)(*DAT_000063b0)();
        if (*pcVar6 == '\0') {
          FUN_00004250();
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
        local_1d8 = (char *)(*DAT_00006398)();
        if (*local_1d8 == '\x01') {
          uVar18 = 0xadde72d0c415c394;
          lVar19 = 0xd;
          lVar23 = 0;
          do {
            uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
            uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
            uVar31 = uVar30 >> 0x21 ^ uVar30;
            bVar26 = (byte)uVar31;
            bVar25 = local_1d8[lVar19 + -0xc] ^ bVar26 ^ 0xc3;
            bVar25 = ((byte)(uVar30 >> 0x29) | 1) ^
                     (bVar25 >> 1 | bVar25 << 7) - (char)(uVar31 >> 0x17);
            local_1d8[lVar19] = (bVar25 << 1 | (char)bVar25 < '\0') - bVar26;
            uVar18 = ((uVar18 ^ (byte)local_1d8[lVar19 + -0xc]) << 0x11 | uVar18 >> 0x2f) + lVar23 +
                     0x9e3779b97f4a7c15;
            lVar23 = lVar23 + 1;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x19);
          *local_1d8 = '\0';
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
        local_1d8 = local_1d8 + 0xd;
        uVar7 = FUN_00003720(local_1d8);
        uVar7 = (*(code *)PTR_00005040)(puVar2,puVar20,uVar7);
        local_b0 = (char *)thunk_FUN_00004880(uVar7);
        puVar2 = PTR_000061d0;
/* wm:stripping the watermark breaks the license */
        local_90 = *(undefined8 *)PTR_00005028;
        local_60 = local_b0;
        pcVar6 = (char *)(*DAT_000063e0)();
        if (*pcVar6 == '\0') {
          FUN_00004290();
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
        local_1d0 = (char *)(*DAT_000063c8)();
        if (*local_1d0 == '\x01') {
          bVar26 = local_1d0[1] ^ 0x35;
          bVar26 = (bVar26 << 4 | bVar26 >> 4) - 0x3c;
          local_1d0[3] = (bVar26 * ' ' | bVar26 >> 3) ^ 0xf6;
          uVar18 = (((ulong)(byte)local_1d0[1] ^ 0x6bcd5fca9fc6a6eb) << 0x11 | 0xd79a) +
                   0x9e3779b97f4a7c15;
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0x3b314601e57a13ad;
          uVar30 = uVar18 >> 0x21 ^ uVar18;
          bVar26 = (byte)uVar30;
          bVar25 = local_1d0[2] ^ bVar26 ^ 0xc3;
          bVar25 = (bVar25 << 4 | bVar25 >> 4) -
                   (((byte)(uVar18 >> 0x29) | 1) + (char)(uVar30 >> 0x17));
          local_1d0[4] = (bVar25 * ' ' | bVar25 >> 3) ^ bVar26;
          *local_1d0 = '\0';
        }
        local_1d0 = local_1d0 + 3;
        uVar7 = FUN_00003720(local_1d0);
        uVar7 = (*(code *)PTR_00005040)(puVar2,puVar20,uVar7);
        local_e0 = (ulong *)thunk_FUN_00004880(uVar7);
        puVar2 = PTR_000061d0;
        local_88 = *(undefined8 *)PTR_00005030;
/* wm:do not claim this as your own */
        local_58 = local_e0;
        pcVar6 = (char *)(*DAT_00006410)();
        if (*pcVar6 == '\0') {
          FUN_000042d0();
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
        local_1c8 = (char *)(*DAT_000063f8)();
        if (*local_1c8 == '\x01') {
          bVar26 = local_1c8[1] ^ 0xbe;
          cVar3 = (bVar26 << 4 | bVar26 >> 4) + 2;
          local_1c8[6] = (cVar3 * '\x02' | cVar3 < '\0') + 0x79U ^ 0x7d;
          uVar18 = (((ulong)(byte)local_1c8[1] ^ 0xde45f7e8f7679bc1) << 0x11 | 0x1bc8b) +
                   0x9e3779b97f4a7c15;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1c8[2] ^ bVar26 ^ 0xc3;
          cVar3 = (bVar25 << 4 | bVar25 >> 4) - (char)(uVar31 >> 0x17);
          local_1c8[7] = (cVar3 * '\x02' | cVar3 < '\0') - ((byte)(uVar30 >> 0x29) | 1) ^ bVar26;
          uVar18 = ((uVar18 ^ (byte)local_1c8[2]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c16;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1c8[3] ^ bVar26 ^ 0xc3;
          cVar3 = (bVar25 << 4 | bVar25 >> 4) - (char)(uVar31 >> 0x17);
          local_1c8[8] = (cVar3 * '\x02' | cVar3 < '\0') - ((byte)(uVar30 >> 0x29) | 1) ^ bVar26;
          uVar18 = ((uVar18 ^ (byte)local_1c8[3]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c17;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1c8[4] ^ bVar26 ^ 0xc3;
          cVar3 = (bVar25 << 4 | bVar25 >> 4) - (char)(uVar31 >> 0x17);
          local_1c8[9] = (cVar3 * '\x02' | cVar3 < '\0') - ((byte)(uVar30 >> 0x29) | 1) ^ bVar26;
          uVar18 = ((uVar18 ^ (byte)local_1c8[4]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c18;
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0x3b314601e57a13ad;
          uVar30 = uVar18 >> 0x21 ^ uVar18;
          bVar26 = (byte)uVar30;
          bVar25 = local_1c8[5] ^ bVar26 ^ 0xc3;
          cVar3 = (bVar25 << 4 | bVar25 >> 4) - (char)(uVar30 >> 0x17);
          local_1c8[10] = (cVar3 * '\x02' | cVar3 < '\0') - ((byte)(uVar18 >> 0x29) | 1) ^ bVar26;
          *local_1c8 = '\0';
        }
        local_1c8 = local_1c8 + 6;
        uVar7 = FUN_00003720(local_1c8);
        uVar7 = (*(code *)PTR_00005040)(puVar2,puVar20,uVar7);
        local_d8 = (int *)thunk_FUN_00004880(uVar7);
        puVar2 = PTR_000061d0;
        local_80 = *(undefined8 *)PTR_00005010;
        local_50 = local_d8;
        pcVar6 = (char *)(*DAT_00006440)();
        if (*pcVar6 == '\0') {
          FUN_00004310();
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
// no support for modified copies
        local_1c0 = (char *)(*DAT_00006428)();
        if (*local_1c0 == '\x01') {
          bVar26 = local_1c0[1] ^ 0x31;
          bVar26 = (bVar26 << 1 | (char)bVar26 < '\0') - 0x39;
          local_1c0[6] = (bVar26 * ' ' | bVar26 >> 3) ^ 0xf2;
          uVar18 = (((ulong)(byte)local_1c0[1] ^ 0x5bea517104012c5) << 0x11 | 0xb7d) +
                   0x9e3779b97f4a7c15;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar31 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar30 = uVar31 >> 0x21 ^ uVar31;
          bVar26 = (byte)uVar30;
          bVar25 = local_1c0[2] ^ bVar26 ^ 0xc3;
          bVar25 = (bVar25 << 1 | (char)bVar25 < '\0') -
                   (((byte)(uVar31 >> 0x29) | 1) + (char)(uVar30 >> 0x17));
          local_1c0[7] = (bVar25 * ' ' | bVar25 >> 3) ^ bVar26;
          uVar18 = ((uVar18 ^ (byte)local_1c0[2]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c16;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
/*  unlicensed copy if this notice is missing  */
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1c0[3] ^ bVar26 ^ 0xc3;
          bVar25 = (bVar25 << 1 | (char)bVar25 < '\0') -
                   (((byte)(uVar30 >> 0x29) | 1) + (char)(uVar31 >> 0x17));
          local_1c0[8] = (bVar25 * ' ' | bVar25 >> 3) ^ bVar26;
          uVar18 = ((uVar18 ^ (byte)local_1c0[3]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c17;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1c0[4] ^ bVar26 ^ 0xc3;
          bVar25 = (bVar25 << 1 | (char)bVar25 < '\0') -
                   (((byte)(uVar30 >> 0x29) | 1) + (char)(uVar31 >> 0x17));
          local_1c0[9] = (bVar25 * ' ' | bVar25 >> 3) ^ bVar26;
          puVar20 = PTR_s_stringWithUTF8String__00006180;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar18 = ((uVar18 ^ (byte)local_1c0[4]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c18;
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0x3b314601e57a13ad;
          uVar30 = uVar18 >> 0x21 ^ uVar18;
          bVar26 = (byte)uVar30;
          bVar25 = local_1c0[5] ^ bVar26 ^ 0xc3;
          bVar25 = (bVar25 << 1 | (char)bVar25 < '\0') -
                   (((byte)(uVar18 >> 0x29) | 1) + (char)(uVar30 >> 0x17));
          local_1c0[10] = (bVar25 * ' ' | bVar25 >> 3) ^ bVar26;
          *local_1c0 = '\0';
        }
        local_1c0 = local_1c0 + 6;
        uVar7 = FUN_00003720(local_1c0);
        uVar7 = (*(code *)PTR_00005040)(puVar2,puVar20,uVar7);
        uVar7 = thunk_FUN_00004880(uVar7);
        puVar2 = PTR_000061d0;
        local_48 = uVar7;
        pcVar6 = (char *)(*DAT_00006470)();
        if (*pcVar6 == '\0') {
          FUN_00004350();
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
        local_1b8 = (char *)(*DAT_00006458)();
        if (*local_1b8 == '\x01') {
          uVar18 = 0x9f38b1029b363947;
          lVar19 = 10;
// WM - more drops soon - github.com/pengussy
          lVar23 = 0;
          do {
            uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
            uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
            uVar31 = uVar30 >> 0x21 ^ uVar30;
            bVar26 = (byte)uVar31;
            bVar25 = local_1b8[lVar19 + -9] ^ bVar26 ^ 0xc3;
            bVar25 = ((byte)(uVar30 >> 0x29) | 1) ^
                     (bVar25 << 3 | bVar25 >> 5) - (char)(uVar31 >> 0x17);
            local_1b8[lVar19] = (bVar25 << 3 | bVar25 >> 5) - bVar26;
            uVar18 = ((uVar18 ^ (byte)local_1b8[lVar19 + -9]) << 0x11 | uVar18 >> 0x2f) + lVar23 +
                     0x9e3779b97f4a7c15;
            lVar23 = lVar23 + 1;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0x13);
          *local_1b8 = '\0';
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
        local_1b8 = local_1b8 + 10;
        uVar9 = FUN_00003720(local_1b8);
/* donate: donate/README.md - github.com/pengussy */
        uVar9 = (*(code *)PTR_00005040)(puVar2,puVar20,uVar9);
        uVar9 = thunk_FUN_00004880(uVar9);
        puVar2 = PTR_000061d0;
        local_78 = uVar9;
        pcVar6 = (char *)(*DAT_000064a0)();
        if (*pcVar6 == '\0') {
          FUN_00004390();
          puVar20 = PTR_s_stringWithUTF8String__00006180;
        }
        local_1b0 = (char *)(*DAT_00006488)();
        if (*local_1b0 == '\x01') {
          bVar26 = local_1b0[1] ^ 0xaf;
          bVar26 = (bVar26 << 1 | (char)bVar26 < '\0') + 0x1f ^ 0xb9;
          local_1b0[6] = (bVar26 << 1 | (char)bVar26 < '\0') + 0x94;
          uVar18 = (((ulong)(byte)local_1b0[1] ^ 0xe1f26dd5b4e29b1c) << 0x11 | 0x1c3e4) +
                   0x9e3779b97f4a7c15;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
/* watermarked copy - do not remove - github.com/pengussy */
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1b0[2] ^ bVar26 ^ 0xc3;
          bVar25 = ((byte)(uVar30 >> 0x29) | 1) ^
                   (bVar25 << 1 | (char)bVar25 < '\0') - (char)(uVar31 >> 0x17);
          local_1b0[7] = (bVar25 << 1 | (char)bVar25 < '\0') - bVar26;
          uVar18 = ((uVar18 ^ (byte)local_1b0[2]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c16;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1b0[3] ^ bVar26 ^ 0xc3;
          bVar25 = ((byte)(uVar30 >> 0x29) | 1) ^
                   (bVar25 << 1 | (char)bVar25 < '\0') - (char)(uVar31 >> 0x17);
          local_1b0[8] = (bVar25 << 1 | (char)bVar25 < '\0') - bVar26;
          uVar18 = ((uVar18 ^ (byte)local_1b0[3]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c17;
          uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
          uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
          uVar31 = uVar30 >> 0x21 ^ uVar30;
          bVar26 = (byte)uVar31;
          bVar25 = local_1b0[4] ^ bVar26 ^ 0xc3;
          bVar25 = ((byte)(uVar30 >> 0x29) | 1) ^
                   (bVar25 << 1 | (char)bVar25 < '\0') - (char)(uVar31 >> 0x17);
          local_1b0[9] = (bVar25 << 1 | (char)bVar25 < '\0') - bVar26;
          puVar20 = PTR_s_stringWithUTF8String__00006180;
          uVar18 = ((uVar18 ^ (byte)local_1b0[4]) << 0x11 | uVar18 >> 0x2f) + 0x9e3779b97f4a7c18;
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
/* reversing this took months of machine time - github.com/pengussy */
          uVar18 = (uVar18 >> 0x21 ^ uVar18) * -0x3b314601e57a13ad;
          uVar30 = uVar18 >> 0x21 ^ uVar18;
          bVar25 = (byte)uVar30;
          bVar26 = local_1b0[5] ^ bVar25 ^ 0xc3;
          bVar26 = ((byte)(uVar18 >> 0x29) | 1) ^
                   (bVar26 << 1 | (char)bVar26 < '\0') - (char)(uVar30 >> 0x17);
          local_1b0[10] = (bVar26 << 1 | (char)bVar26 < '\0') - bVar25;
          *local_1b0 = '\0';
        }
        local_1b0 = local_1b0 + 6;
        uVar10 = FUN_00003720(local_1b0);
        uVar10 = (*(code *)PTR_00005040)(puVar2,puVar20,uVar10);
        uVar10 = thunk_FUN_00004880(uVar10);
        pcVar6 = local_c0;
        local_40 = uVar10;
        uVar11 = (*(code *)PTR_00005040)
                           (PTR_000061e8,PTR_s_dictionaryWithObjects_forKeys_co_00006190,&local_70,
                            &local_a8,7);
        uVar11 = thunk_FUN_00004880(uVar11);
        uVar12 = (*(code *)PTR_00005040)(local_b8,PTR_s_cookieWithProperties__00006198,uVar11);
        local_b8 = (undefined *)thunk_FUN_00004880(uVar12);
        (*(code *)PTR_00005048)(uVar11);
        (*(code *)PTR_00005048)(uVar10);
        (*(code *)PTR_00005048)(uVar9);
        (*(code *)PTR_00005048)(uVar7);
        (*(code *)PTR_00005048)(local_d8);
        (*(code *)PTR_00005048)(local_e0);
        (*(code *)PTR_00005048)(local_b0);
        (*(code *)PTR_00005048)(pcVar6);
        uVar7 = (*(code *)PTR_00005040)(PTR_000061f0,PTR_s_ephemeralSessionConfiguration_000061a0);
        uVar7 = thunk_FUN_00004880(uVar7);
        uVar9 = (*(code *)PTR_00005040)(uVar7,PTR_s_HTTPCookieStorage_000061a8);
        lVar23 = thunk_FUN_00004880(uVar9);
        lVar19 = DAT_000067a0;
/*  keep the notice, keep the source honest  */
        DAT_000067a0 = lVar23;
        (*(code *)PTR_00005048)(lVar19);
        (*(code *)PTR_00005048)(uVar7);
        if (local_b8 != (undefined *)0x0 && DAT_000067a0 != 0) {
          (*(code *)PTR_00005040)(DAT_000067a0,PTR_s_setCookie__000061b0,local_b8);
          lVar19 = DAT_000067a0;
          puVar20 = PTR_000061f8;
          puVar2 = PTR_000061d0;
          pcVar6 = (char *)(*DAT_000064d0)();
          if (*pcVar6 == '\0') {
            FUN_000043d0();
          }
          local_1a8 = (char *)(*DAT_000064b8)();
          if (*local_1a8 == '\x01') {
            uVar18 = 0xee3d2d8ee4358847;
            lVar23 = 0x19;
            lVar24 = 0;
            do {
              uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
              uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
              uVar31 = uVar30 >> 0x21 ^ uVar30;
              bVar26 = (byte)uVar31;
              bVar25 = local_1a8[lVar23 + -0x18] ^ bVar26 ^ 0xc3;
              bVar25 = (bVar25 << 5 | bVar25 >> 3) -
                       (((byte)(uVar30 >> 0x29) | 1) + (char)(uVar31 >> 0x17));
              local_1a8[lVar23] = (bVar25 * '\x04' | bVar25 >> 6) ^ bVar26;
              uVar18 = ((uVar18 ^ (byte)local_1a8[lVar23 + -0x18]) << 0x11 | uVar18 >> 0x2f) +
                       lVar24 + 0x9e3779b97f4a7c15;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
              lVar24 = lVar24 + 1;
              lVar23 = lVar23 + 1;
            } while (lVar23 != 0x31);
            *local_1a8 = '\0';
          }
          local_1a8 = local_1a8 + 0x19;
          uVar7 = FUN_00003720(local_1a8);
          uVar7 = (*(code *)PTR_00005040)(puVar2,PTR_s_stringWithUTF8String__00006180,uVar7);
          uVar7 = thunk_FUN_00004880(uVar7);
          uVar9 = (*(code *)PTR_00005040)(puVar20,PTR_s_URLWithString__000061b8,uVar7);
          uVar9 = thunk_FUN_00004880(uVar9);
          uVar10 = (*(code *)PTR_00005040)(lVar19,PTR_s_cookiesForURL__000061c0,uVar9);
          uVar10 = thunk_FUN_00004880(uVar10);
          cVar3 = (*(code *)PTR_00005040)(uVar10,PTR_s_containsObject__000061c8,local_b8);
          (*(code *)PTR_00005048)(uVar10);
          (*(code *)PTR_00005048)(uVar9);
          (*(code *)PTR_00005048)(uVar7);
/* wm:no support for modified copies */
          if (cVar3 != '\0') {
            uVar7 = thunk_FUN_00004868(PTR_00006200);
            pcVar6 = (char *)(*DAT_00006500)();
            if (*pcVar6 == '\0') {
              FUN_00004410();
            }
            local_1a0 = (char *)(*DAT_000064e8)();
            if (*local_1a0 == '\x01') {
              uVar18 = 0xbc1e3366fc754b63;
              lVar19 = 0x19;
              lVar23 = 0;
              do {
                uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
                uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
                uVar31 = uVar30 >> 0x21 ^ uVar30;
                bVar26 = (byte)uVar31;
/* origin: github.com/pengussy */
                bVar25 = local_1a0[lVar19 + -0x18] ^ bVar26 ^ 0xc3;
                bVar25 = (bVar25 << 5 | bVar25 >> 3) - (char)(uVar31 >> 0x17);
                local_1a0[lVar19] =
                     (bVar25 * '\x04' | bVar25 >> 6) - ((byte)(uVar30 >> 0x29) | 1) ^ bVar26;
                uVar18 = ((uVar18 ^ (byte)local_1a0[lVar19 + -0x18]) << 0x11 | uVar18 >> 0x2f) +
                         lVar23 + 0x9e3779b97f4a7c15;
                lVar23 = lVar23 + 1;
                lVar19 = lVar19 + 1;
              } while (lVar19 != 0x31);
              *local_1a0 = '\0';
            }
            local_1a0 = local_1a0 + 0x19;
            uVar9 = FUN_00003720(local_1a0);
            uVar9 = thunk_FUN_000048a4(uVar9);
            lVar19 = thunk_FUN_000047c0(uVar7,uVar9);
            if (lVar19 == 0) {
              FUN_000030b0(3);
              goto LAB_00002382;
            }
            pcVar6 = (char *)0x0;
            piVar8 = (int *)0x0;
            for (uVar33 = 0; uVar4 = thunk_FUN_0000479c(), uVar33 < uVar4; uVar33 = uVar33 + 1) {
              piVar13 = (int *)thunk_FUN_00004778(uVar33);
              if (((piVar13 != (int *)0x0) && (*piVar13 == -0x1120531)) && (piVar13[3] == 2)) {
                if (piVar8 != (int *)0x0) {
                  FUN_000030b0(3);
                  goto LAB_00002382;
                }
                pcVar6 = (char *)thunk_FUN_00004790(uVar33);
                piVar8 = piVar13;
              }
            }
            if (piVar8 == (int *)0x0) {
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
              FUN_000030b0(3);
              goto LAB_00002382;
            }
            local_138 = (ulong *)0x0;
            puStack_130 = (ulong *)0x0;
            local_128 = 0;
            local_118 = (ulong *)0x0;
            puStack_110 = (ulong *)0x0;
            local_108 = 0;
            uVar18 = (ulong)(uint)piVar8[4];
            local_170 = lVar19;
            if (piVar8[4] != 0) {
              piVar13 = piVar8 + 8;
              piVar21 = (int *)((long)piVar8 + (ulong)(uint)piVar8[5] + 0x20);
              local_b0 = pcVar6;
              local_c0 = (char *)(*DAT_00006518)();
              local_e0 = (ulong *)(local_c0 + 8);
              uVar33 = 0;
              do {
                if (piVar21 < piVar13 + 2) {
LAB_0000264a:
                  FUN_000030b0(3);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
                  goto LAB_00002cb5;
                }
                uVar30 = (ulong)(uint)piVar13[1];
                if ((uVar30 < 8) || ((ulong)((long)piVar21 - (long)piVar13) < uVar30))
                goto LAB_0000264a;
                if (((0x47 < (uint)piVar13[1]) && (*piVar13 == 0x19)) &&
                   (((piVar13[0xf] & 1U) != 0 && (*(long *)(piVar13 + 8) != 0)))) {
                  local_168 = local_b0 + *(long *)(piVar13 + 6);
                  pcStack_160 = local_168 + *(long *)(piVar13 + 8);
                  local_158 = CONCAT71(local_158._1_7_,(char)((uint)piVar13[0xf] >> 2)) &
                              0xffffffffffffff01;
                  FUN_00003260(&local_138,&local_168);
                  pcVar6 = (char *)(*DAT_00006530)();
                  if (*pcVar6 == '\0') {
                    FUN_00004450();
                  }
                  if (*local_c0 == '\x01') {
                    uVar18 = 0x9d379eb92dd960a0;
                    lVar19 = 8;
                    lVar23 = 0;
                    do {
                      uVar30 = (uVar18 >> 0x21 ^ uVar18) * -0xae502812aa7333;
                      uVar30 = (uVar30 >> 0x21 ^ uVar30) * -0x3b314601e57a13ad;
                      uVar31 = uVar30 >> 0x21 ^ uVar30;
                      bVar26 = (byte)uVar31;
                      bVar25 = local_c0[lVar19 + -7] ^ bVar26 ^ 0xc3;
                      bVar25 = (bVar25 >> 1 | bVar25 << 7) -
                               (((byte)(uVar30 >> 0x29) | 1) + (char)(uVar31 >> 0x17));
                      local_c0[lVar19] = (bVar25 >> 1 | bVar25 * -0x80) ^ bVar26;
                      uVar18 = ((uVar18 ^ (byte)local_c0[lVar19 + -7]) << 0x11 | uVar18 >> 0x2f) +
                               lVar23 + 0x9e3779b97f4a7c15;
                      lVar23 = lVar23 + 1;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 0xf);
                    *local_c0 = '\0';
                    local_d8 = piVar21;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                  }
                  local_198 = local_e0;
                  uVar7 = FUN_00003720();
                  iVar5 = thunk_FUN_000048e0(piVar13 + 2,uVar7,6);
                  if (iVar5 == 0) {
                    FUN_00003260(&local_118,&local_168);
                  }
                  uVar30 = (ulong)(uint)piVar13[1];
                  uVar18 = (ulong)(uint)piVar8[4];
                }
                puVar17 = local_118;
                piVar13 = (int *)((long)piVar13 + uVar30);
                uVar33 = uVar33 + 1;
              } while (uVar33 < (uint)uVar18);
              local_e0 = puStack_110;
              if (local_118 != puStack_110) {
                pcVar6 = (char *)(*DAT_00006548)();
                local_c0 = pcVar6 + 0x1c;
                local_b0 = (char *)(*DAT_00006578)();
                local_d8 = (int *)(local_b0 + 0x1d);
                local_d0 = 0;
                do {
                  uVar18 = *puVar17;
                  if (*puVar17 + 0x18 <= puVar17[1]) {
LAB_000026fb:
                    uVar30 = *(ulong *)(uVar18 + 8);
                    pcVar14 = (char *)(*DAT_00006560)();
                    if (*pcVar14 == '\0') {
                      FUN_00004490();
                    }
                    if (*pcVar6 == '\x01') {
                      uVar31 = 0xb6a0349624061b7b;
// WM - reversing this took months of machine time
                      lVar19 = 0x1c;
                      lVar23 = 0;
                      do {
                        uVar27 = (uVar31 >> 0x21 ^ uVar31) * -0xae502812aa7333;
                        uVar27 = (uVar27 >> 0x21 ^ uVar27) * -0x3b314601e57a13ad;
                        uVar28 = uVar27 >> 0x21 ^ uVar27;
                        bVar26 = (byte)uVar28;
                        bVar25 = pcVar6[lVar19 + -0x1b] ^ bVar26 ^ 0xc3;
                        bVar25 = ((byte)(uVar27 >> 0x29) | 1) ^
                                 (bVar25 << 1 | (char)bVar25 < '\0') - (char)(uVar28 >> 0x17);
                        pcVar6[lVar19] = (bVar25 << 6 | bVar25 >> 2) - bVar26;
                        uVar31 = ((uVar31 ^ (byte)pcVar6[lVar19 + -0x1b]) << 0x11 | uVar31 >> 0x2f)
                                 + lVar23 + 0x9e3779b97f4a7c15;
                        lVar23 = lVar23 + 1;
                        lVar19 = lVar19 + 1;
                      } while (lVar19 != 0x37);
                      *pcVar6 = '\0';
                    }
                    local_190 = local_c0;
                    uVar7 = FUN_00003720();
                    lVar19 = thunk_FUN_000048d4(uVar7);
                    if (local_138 != puStack_130) {
                      puVar15 = local_138;
                      do {
                        if (((*puVar15 <= uVar30) && (uVar30 <= puVar15[1])) &&
                           (lVar19 + 1U <= puVar15[1] - uVar30)) {
                          iVar5 = thunk_FUN_00004820(uVar30,uVar7,lVar19 + 1U);
                          pcVar14 = local_b0;
                          if ((iVar5 == 0) && (local_118 != puStack_110)) {
                            uVar30 = *(ulong *)(uVar18 + 0x10);
                            puVar15 = local_118;
                            goto LAB_000028b8;
                          }
                          break;
                        }
/* WM - proprietary - see LICENSE - do not sell */
                        puVar15 = puVar15 + 3;
                      } while (puVar15 != puStack_130);
                    }
                    goto LAB_000026e9;
                  }
LAB_000026c8:
                  puVar2 = PTR_00005080;
                  puVar17 = puVar17 + 3;
                } while (puVar17 != local_e0);
                if (local_d0 != 0) {
                  if (local_118 != puStack_110) {
                    puVar15 = (ulong *)0x0;
                    puVar17 = local_118;
                    do {
                      if ((long *)*puVar17 + 9 <= (long *)puVar17[1]) {
                        plVar29 = (long *)*puVar17;
                        do {
                          if (((plVar29[1] == local_d0) && (*plVar29 == 0)) &&
                             (local_138 != puStack_130)) {
                            bVar36 = false;
                            puVar22 = local_138;
                            do {
                              if (((char)puVar22[2] == '\x01') &&
                                 (uVar18 = plVar29[2], *puVar22 <= uVar18)) {
                                bVar36 = (bool)(bVar36 | uVar18 < puVar22[1]);
                              }
                              puVar22 = puVar22 + 3;
                            } while (puVar22 != puStack_130);
                            if (!bVar36) goto LAB_00002afc;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                            bVar36 = false;
                            puVar22 = local_138;
                            do {
                              if (((char)puVar22[2] == '\x01') && (*puVar22 <= (ulong)plVar29[3])) {
                                bVar36 = (bool)(bVar36 | (ulong)plVar29[3] < puVar22[1]);
                              }
                              puVar22 = puVar22 + 3;
                            } while (puVar22 != puStack_130);
                            if (!bVar36) goto LAB_00002afc;
                            bVar36 = false;
                            puVar22 = local_138;
                            do {
                              if (((char)puVar22[2] == '\x01') && (*puVar22 <= (ulong)plVar29[4])) {
                                bVar36 = (bool)(bVar36 | (ulong)plVar29[4] < puVar22[1]);
                              }
                              puVar22 = puVar22 + 3;
                            } while (puVar22 != puStack_130);
                            if (!bVar36) goto LAB_00002afc;
                            bVar36 = false;
                            puVar22 = local_138;
                            do {
                              if (((char)puVar22[2] == '\x01') && (*puVar22 <= (ulong)plVar29[5])) {
                                bVar36 = (bool)(bVar36 | (ulong)plVar29[5] < puVar22[1]);
                              }
                              puVar22 = puVar22 + 3;
                            } while (puVar22 != puStack_130);
                            if (!bVar36) goto LAB_00002afc;
                            bVar36 = false;
                            puVar22 = local_138;
/* WM - more drops soon - github.com/pengussy */
                            do {
                              if (((char)puVar22[2] == '\x01') && (*puVar22 <= (ulong)plVar29[6])) {
                                bVar36 = (bool)(bVar36 | (ulong)plVar29[6] < puVar22[1]);
                              }
                              puVar22 = puVar22 + 3;
                            } while (puVar22 != puStack_130);
                            if (!bVar36) goto LAB_00002afc;
                            bVar36 = false;
                            puVar22 = local_138;
                            do {
                              if (((char)puVar22[2] == '\x01') && (*puVar22 <= (ulong)plVar29[7])) {
                                bVar36 = (bool)(bVar36 | (ulong)plVar29[7] < puVar22[1]);
                              }
                              puVar22 = puVar22 + 3;
                            } while (puVar22 != puStack_130);
                            if (bVar36) {
                              bVar36 = false;
                              puVar22 = local_138;
                              do {
                                if (((char)puVar22[2] == '\x01') && (*puVar22 <= (ulong)plVar29[8]))
                                {
                                  bVar36 = (bool)(bVar36 | (ulong)plVar29[8] < puVar22[1]);
                                }
                                puVar22 = puVar22 + 3;
                              } while (puVar22 != puStack_130);
                              if ((bVar36) &&
                                 (bVar36 = puVar15 != (ulong *)0x0, puVar15 = (ulong *)(plVar29 + 2)
/* WM - keep the notice, keep the source honest */
                                 , bVar36)) goto LAB_00002ef1;
                            }
                          }
                          else {
LAB_00002afc:
                          }
                          plVar32 = plVar29 + 10;
                          plVar29 = plVar29 + 1;
                        } while (plVar32 <= (long *)puVar17[1]);
                      }
                      puVar17 = puVar17 + 3;
                    } while (puVar17 != puStack_110);
                    if (puVar15 != (ulong *)0x0) {
                      local_200 = 0;
                      local_158 = 0;
                      uStack_150 = 0;
                      local_168 = (char *)0x0;
                      pcStack_160 = (char *)0x0;
                      local_148 = 0;
                      local_13c = 9;
                      local_f4 = 0;
                      local_208 = puVar15;
                      iVar5 = thunk_FUN_00004814(*(undefined4 *)PTR_00005080,&local_208,&local_200,9
                                                 ,&local_168,&local_13c,&local_f4);
                      if (local_f4 != 0) {
                        thunk_FUN_000047fc(*(undefined4 *)puVar2);
                      }
                      if (iVar5 != 0) {
                        FUN_000030b0(3);
                        goto LAB_00002cb5;
                      }
                      iVar5 = thunk_FUN_000047f0();
// unlicensed copy if this notice is missing
                      lVar19 = (long)iVar5;
                      iVar5 = thunk_FUN_00004808(*(undefined4 *)puVar2,-lVar19 & (ulong)puVar15,
                                                 lVar19,0,0x13);
                      uVar7 = 3;
                      if (iVar5 == 0) {
                        *puVar15 = (ulong)FUN_00003f30;
                        iVar5 = thunk_FUN_00004808(*(undefined4 *)puVar2,-lVar19 & (ulong)puVar15,
                                                   lVar19,0,(ulong)local_168 & 0xffffffff);
                        if (iVar5 == 0) {
                          uVar7 = 1;
                          thunk_FUN_00004838(local_170,FUN_00003f50);
                        }
                      }
                      FUN_000030b0(uVar7);
                      goto LAB_00002cb5;
                    }
                  }
                  FUN_000030b0(3);
                  goto LAB_00002cb5;
                }
              }
            }
/* wm:donate: donate/README.md */
            FUN_000030b0(3);
            goto LAB_00002cb5;
          }
        }
        FUN_000030b0(2);
        goto LAB_00002382;
      }
    }
    else {
      (*(code *)PTR_00005048)(uVar7);
    }
  }
  FUN_000030b0(2);
  while( true ) {
    (*(code *)PTR_00005048)(local_e8);
LAB_0000233a:
    FUN_000045d4(local_f0);
LAB_00002346:
    thunk_FUN_00004850(local_180);
LAB_00002352:
    if (*(long *)PTR_00005078 == local_38) break;
/* more drops soon - github.com/pengussy - github.com/pengussy */
    thunk_FUN_0000476c();
LAB_00002ef1:
    FUN_000030b0(3);
LAB_00002cb5:
    if (local_118 != (ulong *)0x0) {
      puStack_110 = local_118;
      FUN_000045d4();
    }
    if (local_138 != (ulong *)0x0) {
      puStack_130 = local_138;
      FUN_000045d4();
    }
LAB_00002382:
    (*(code *)PTR_00005048)(local_b8);
  }
  return;
LAB_000028b8:
  if ((uVar30 < *puVar15) || (puVar15[1] - uVar30 < 0x10 || puVar15[1] < uVar30)) goto LAB_000028ab;
  uVar30 = *(ulong *)(uVar30 + 8);
  pcVar16 = (char *)(*DAT_00006590)();
  if (*pcVar16 == '\0') {
    FUN_000044d0();
/* watermarked copy - do not remove */
  }
  if (*pcVar14 == '\x01') {
    uVar31 = 0x9e324f9d78f1f1b1;
    lVar19 = 0x1d;
    lVar23 = 0;
    do {
      uVar27 = (uVar31 >> 0x21 ^ uVar31) * -0xae502812aa7333;
      uVar27 = (uVar27 >> 0x21 ^ uVar27) * -0x3b314601e57a13ad;
      uVar28 = uVar27 >> 0x21 ^ uVar27;
      bVar26 = (byte)uVar28;
      bVar25 = local_b0[lVar19 + -0x1c] ^ bVar26 ^ 0xc3;
      bVar25 = ((byte)(uVar27 >> 0x29) | 1) ^ (bVar25 >> 1 | bVar25 << 7) - (char)(uVar28 >> 0x17);
      local_b0[lVar19] = (bVar25 << 2 | bVar25 >> 6) - bVar26;
      uVar31 = ((uVar31 ^ (byte)local_b0[lVar19 + -0x1c]) << 0x11 | uVar31 >> 0x2f) + lVar23 +
               0x9e3779b97f4a7c15;
      lVar23 = lVar23 + 1;
      lVar19 = lVar19 + 1;
    } while (lVar19 != 0x39);
    *local_b0 = '\0';
    local_178 = puVar17;
  }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  local_188 = local_d8;
  uVar7 = FUN_00003720();
  lVar19 = thunk_FUN_000048d4(uVar7);
  if (local_138 != puStack_130) {
    puVar15 = local_138;
    do {
      if (((*puVar15 <= uVar30) && (uVar30 <= puVar15[1])) && (lVar19 + 1U <= puVar15[1] - uVar30))
      {
        iVar5 = thunk_FUN_00004820(uVar30,uVar7,lVar19 + 1U);
        if ((iVar5 == 0) && (bVar36 = local_d0 != 0, local_d0 = uVar18, bVar36)) {
          FUN_000030b0(3);
          goto LAB_00002cb5;
        }
        break;
      }
      puVar15 = puVar15 + 3;
    } while (puVar15 != puStack_130);
  }
LAB_000026e9:
  uVar30 = uVar18 + 0x20;
  uVar18 = uVar18 + 8;
  if (puVar17[1] < uVar30) goto LAB_000026c8;
  goto LAB_000026fb;
LAB_000028ab:
  puVar15 = puVar15 + 3;
  if (puVar15 == puStack_110) goto LAB_000026e9;
  goto LAB_000028b8;
}
