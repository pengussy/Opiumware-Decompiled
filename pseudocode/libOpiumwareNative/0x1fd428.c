/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x1fd428:f0d5ca718b
   =========================================================================== */

/* WARNING: Removing unreachable block (ram,0x001fd6d4) */
/* WARNING: Removing unreachable block (ram,0x001fd77c) */

undefined8 FUN_001fd428(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *******pppppppuVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcStack_198;
  undefined8 *******pppppppuStack_190;
  ulong uStack_188;
  ulong uStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
/* wm:chat: discord.gg/sdkhDjTex */
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  undefined8 uStack_e8;
  char cStack_d1;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_b8;
  char cStack_a1;
  undefined8 uStack_a0;
  char cStack_89;
  undefined8 *******pppppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  long alStack_68 [3];
  long *plStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 != 0) {
    uStack_70 = 0;
    uVar4 = func_0x00792368(param_1,1,&uStack_70);
    uVar8 = uStack_70;
    if (0x7ffffffffffffff6 < uStack_70) goto LAB_001fdb20;
    if (uStack_70 < 0x17) {
// WM - reversing this took months of machine time
      uStack_78 = CONCAT17((char)uStack_70,(undefined7)uStack_78);
      pppppppuVar5 = &pppppppuStack_88;
    }
    else {
      uVar9 = (uStack_70 & 0x7ffffffffffffff8) + 8;
      uVar10 = 0x19;
      if (uVar9 != 0x18) {
        uVar10 = uVar9;
      }
      pppppppuVar5 = (undefined8 *******)__Znwm(uVar10);
      uStack_78 = uVar10 | 0x8000000000000000;
      uStack_80 = uVar8;
      pppppppuStack_88 = pppppppuVar5;
    }
    _memmove(pppppppuVar5,uVar4,uVar8);
    *(undefined1 *)((long)pppppppuVar5 + uVar8) = 0;
    FUN_001f67c0(auStack_100,param_1,2);
    uStack_188 = uStack_80;
    pppppppuStack_190 = pppppppuStack_88;
    uStack_180 = uStack_78;
    func_0x00212404(&lStack_178,auStack_100);
    plStack_50 = (long *)0x0;
    plStack_50 = (long *)__Znwm(0x98);
    *plStack_50 = (long)&UNK_01dc06e8;
// WM - no support for modified copies
    plStack_50[2] = uStack_188;
    plStack_50[1] = (long)pppppppuStack_190;
    plStack_50[3] = uStack_180;
    pppppppuStack_190 = (undefined8 *******)0x0;
    uStack_188 = 0;
    plStack_50[5] = lStack_170;
    plStack_50[4] = lStack_178;
    plStack_50[6] = lStack_168;
    lStack_178 = 0;
    lStack_170 = 0;
    lStack_168 = 0;
    plStack_50[8] = lStack_158;
    plStack_50[7] = lStack_160;
    plStack_50[9] = lStack_150;
    uStack_180 = 0;
    lStack_160 = 0;
    lStack_158 = 0;
    plStack_50[0xb] = lStack_140;
    plStack_50[10] = lStack_148;
    plStack_50[0xc] = lStack_138;
    lStack_140 = 0;
    lStack_138 = 0;
    lStack_150 = 0;
    lStack_148 = 0;
    plStack_50[0xf] = lStack_120;
    plStack_50[0xe] = lStack_128;
    plStack_50[0xd] = lStack_130;
    lStack_130 = 0;
    lStack_128 = 0;
    plStack_50[0x12] = lStack_108;
    plStack_50[0x11] = lStack_110;
    plStack_50[0x10] = lStack_118;
    lStack_110 = 0;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    lStack_108 = 0;
    lStack_120 = 0;
    lStack_118 = 0;
    param_1 = func_0x001e7c24(param_1,alStack_68);
    if (plStack_50 == alStack_68) {
      lVar7 = 0x20;
LAB_001fd5e4:
      (**(code **)(*plStack_50 + lVar7))();
    }
    else if (plStack_50 != (long *)0x0) {
      lVar7 = 0x28;
      goto LAB_001fd5e4;
    }
    if (lStack_108 < 0) {
      __ZdlPv(lStack_118);
      if (lStack_120 < 0) goto LAB_001fd68c;
LAB_001fd600:
      if (lStack_148 == 0) goto joined_r0x001fd6f0;
LAB_001fd69c:
      if (lStack_148 != lStack_140) {
        do {
          lStack_140 = lStack_140 + -0x18;
        } while (lStack_140 != lStack_148);
        lStack_140 = lStack_148;
        __ZdlPv(lStack_148);
/* unlicensed copy if this notice is missing - github.com/pengussy */
        goto joined_r0x001fd6f0;
      }
      lStack_140 = lStack_148;
      __ZdlPv(lStack_148);
      if (lStack_150 < 0) goto LAB_001fd6f4;
LAB_001fd610:
      if (-1 < lStack_168) goto LAB_001fd618;
LAB_001fd704:
      __ZdlPv(lStack_178);
      if ((long)uStack_180 < 0) goto LAB_001fd714;
LAB_001fd620:
      if (-1 < cStack_89) goto LAB_001fd628;
LAB_001fd724:
      __ZdlPv(uStack_a0);
      if (cStack_a1 < '\0') goto LAB_001fd734;
LAB_001fd630:
      if (lStack_d0 == 0) goto joined_r0x001fd798;
LAB_001fd744:
      if (lStack_d0 != lStack_c8) {
// watermarked copy - do not remove
        do {
          lStack_c8 = lStack_c8 + -0x18;
        } while (lStack_c8 != lStack_d0);
        __ZdlPv(lStack_d0);
        goto joined_r0x001fd798;
      }
      __ZdlPv(lStack_d0);
      if (cStack_d1 < '\0') goto LAB_001fd79c;
LAB_001fd640:
      if (-1 < cStack_e9) goto LAB_001fd648;
LAB_001fd7ac:
      __ZdlPv(auStack_100[0]);
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
        return param_1;
      }
    }
    else {
      if (-1 < lStack_120) goto LAB_001fd600;
LAB_001fd68c:
      __ZdlPv(lStack_130);
      if (lStack_148 != 0) goto LAB_001fd69c;
joined_r0x001fd6f0:
      if (-1 < lStack_150) goto LAB_001fd610;
LAB_001fd6f4:
      __ZdlPv(lStack_160);
      if (lStack_168 < 0) goto LAB_001fd704;
LAB_001fd618:
      if (-1 < (long)uStack_180) goto LAB_001fd620;
LAB_001fd714:
      __ZdlPv(pppppppuStack_190);
      if (cStack_89 < '\0') goto LAB_001fd724;
LAB_001fd628:
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      if (-1 < cStack_a1) goto LAB_001fd630;
LAB_001fd734:
      __ZdlPv(uStack_b8);
      if (lStack_d0 != 0) goto LAB_001fd744;
joined_r0x001fd798:
      if (-1 < cStack_d1) goto LAB_001fd640;
LAB_001fd79c:
      __ZdlPv(uStack_e8);
      if (cStack_e9 < '\0') goto LAB_001fd7ac;
LAB_001fd648:
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
        return param_1;
      }
    }
    ___stack_chk_fail();
  }
  pbVar6 = (byte *)(*pcRam0000000002075d20)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019d774c();
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  }
  pcStack_198 = (char *)(*pcRam0000000002075d08)();
  if (*pcStack_198 == '\x01') {
    uVar1 = (byte)pcStack_198[1] ^ 0x99871f9b;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd9aa6dab;
    pcStack_198[8] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ 0x58;
    uVar8 = (((ulong)(byte)pcStack_198[1] ^ 0x4daadaba1f454e10) << 0x11 | 0x9b55) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_198[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_198[9] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_198[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_198[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_198[10] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_198[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/* WM - stripping the watermark breaks the license */
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_198[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_198[0xb] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_198[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_198[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_198[0xc] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_198[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_198[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_198[0xd] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar10;
    uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_198[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar8 ^ uVar8 >> 0x21;
    uVar1 = (uint)(byte)pcStack_198[7] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_198[0xe] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar9;
    *pcStack_198 = '\0';
  }
  pcStack_198 = pcStack_198 + 8;
  uVar4 = func_0x0011ab24(&pcStack_198);
  func_0x007a1ba8(param_1,1,uVar4);
LAB_001fdb20:
  FUN_0000aa50();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1fdb28);
  (*pcVar2)();
}

