/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0xa37f0:d510a3aada
 */

/* WARNING: Removing unreachable block (ram,0x000a4244) */
/* WARNING: Removing unreachable block (ram,0x000a42a8) */
/* WARNING: Removing unreachable block (ram,0x000a3948) */
/* WARNING: Removing unreachable block (ram,0x000a3950) */
/* WARNING: Removing unreachable block (ram,0x000a3960) */
/* WARNING: Removing unreachable block (ram,0x000a3968) */
/* WARNING: Removing unreachable block (ram,0x000a3974) */
/* WARNING: Removing unreachable block (ram,0x000a3d6c) */
/* WARNING: Removing unreachable block (ram,0x000a4234) */
/* WARNING: Removing unreachable block (ram,0x000a38e8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_000a37f0(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  long lVar1;
  char *******pppppppcVar2;
  uint uVar3;
  byte *pbVar4;
  long extraout_x1;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *******pppppppcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcStack_178;
  char *pcStack_170;
  undefined8 uStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  undefined8 uStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  byte bStack_b9;
  undefined8 uStack_b8;
/* wm:unlicensed copy if this notice is missing */
  undefined8 uStack_b0;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  ulong uStack_98;
  char *******pppppppcStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  byte bStack_51;
  int aiStack_50 [2];
  undefined8 uStack_48;
  
  aiStack_50[0] = 0;
  uStack_48 = __ZNSt3__115system_categoryEv();
  uStack_128 = 0;
  uStack_120 = 0;
  lStack_118 = 0;
  lVar10 = lRam000000000208fc48;
  if (-1 < (long)cRam000000000208fc5f) {
    lVar10 = 0x208fc48;
  }
  lVar1 = lRam000000000208fc50;
  if (-1 < cRam000000000208fc5f) {
    lVar1 = (long)cRam000000000208fc5f;
  }
  func_0x0013be80(&uStack_128,lVar10,lVar10 + lVar1);
  __ZNSt3__14__fs10filesystem18__weakly_canonicalERKNS1_4pathEPNS_10error_codeE
            (&uStack_68,&uStack_128,aiStack_50);
  if (lStack_118 < 0) {
/* WM - found on a paste site? it was re-uploaded illegally */
    __ZdlPv(uStack_128);
  }
  if (aiStack_50[0] != 0) {
LAB_000a38c0:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  uVar5 = uStack_60;
  if (-1 < (char)bStack_51) {
    uVar5 = (ulong)bStack_51;
  }
  if (uVar5 == 0) goto LAB_000a38c0;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x00017ae8(&pppppppcStack_80,*param_2,param_2[1]);
  }
  else {
    uStack_78 = param_2[1];
    pppppppcStack_80 = (char *******)*param_2;
// unlicensed copy if this notice is missing
    uStack_70 = param_2[2];
  }
  uVar5 = (ulong)uStack_70._7_1_;
  uVar3 = (uint)uStack_70._7_1_;
  if (uStack_70._7_1_ != 0) {
    if (((char)pppppppcStack_80 == '/') || ((char)pppppppcStack_80 == '\\')) {
LAB_000a39dc:
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      if (uVar3 >> 7 == 0) {
        return;
      }
      goto LAB_000a4254;
    }
    if (uStack_70._7_1_ != 1) {
      if ((long)(char)pppppppcStack_80 < 0) {
/* chat: discord.gg/sdkhDjTex */
        uVar3 = ___maskrune((char)pppppppcStack_80,0x100);
        uVar5 = uStack_70 >> 0x38;
      }
      else {
        uVar3 = *(uint *)(PTR___DefaultRuneLocale_01f201e8 + (long)(char)pppppppcStack_80 * 4 + 0x3c
                         ) & 0x100;
      }
      if (uVar3 != 0) {
        uVar3 = (uint)uVar5;
        pppppppcVar2 = pppppppcStack_80;
        if (-1 < (char)uVar5) {
          pppppppcVar2 = (char *******)&pppppppcStack_80;
        }
        if (*(char *)((long)pppppppcVar2 + 1) == ':') goto LAB_000a39dc;
      }
    }
  }
  uVar6 = uStack_78;
  pppppppcVar2 = pppppppcStack_80;
  if (-1 < (char)uVar5) {
    uVar6 = uVar5;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    pppppppcVar2 = (char *******)&pppppppcStack_80;
  }
  if (uVar6 != 0) {
    pppppppcVar9 = pppppppcVar2;
    if (uVar6 < 8) {
LAB_000a3e1c:
      do {
        if (*(char *)pppppppcVar9 == '\\') {
          *(char *)pppppppcVar9 = '/';
        }
        pppppppcVar9 = (char *******)((long)pppppppcVar9 + 1);
      } while (pppppppcVar9 != (char *******)((long)pppppppcVar2 + uVar6));
    }
    else if (uVar6 < 0x10) {
      uVar7 = 0;
LAB_000a3a24:
      uVar5 = uVar6 & 0xfffffffffffffff8;
      pppppppcVar9 = (char *******)((long)pppppppcVar2 + uVar5);
      lVar10 = uVar7 - uVar5;
      pcVar8 = (char *)((long)pppppppcVar2 + uVar7 + 3);
      do {
        uVar11 = *(undefined8 *)(pcVar8 + -3);
        if (((uint)uVar11 & 0xff) == 0x5c) {
          pcVar8[-3] = '/';
        }
        if ((char)((ulong)uVar11 >> 8) == '\\') {
          pcVar8[-2] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x10) == '\\') {
          pcVar8[-1] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x18) == '\\') {
          *pcVar8 = '/';
        }
        if ((char)((ulong)uVar11 >> 0x20) == '\\') {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          pcVar8[1] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x28) == '\\') {
          pcVar8[2] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x30) == '\\') {
          pcVar8[3] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x38) == '\\') {
          pcVar8[4] = '/';
        }
        pcVar8 = pcVar8 + 8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
      if (uVar6 != uVar5) goto LAB_000a3e1c;
    }
    else {
      uVar7 = uVar6 & 0xfffffffffffffff0;
      pcVar8 = (char *)((long)pppppppcVar2 + 7);
      uVar5 = uVar7;
      do {
        uVar12 = *(undefined8 *)(pcVar8 + 1);
        uVar11 = *(undefined8 *)(pcVar8 + -7);
        if (((uint)uVar11 & 0xff) == 0x5c) {
          pcVar8[-7] = '/';
        }
        if ((char)((ulong)uVar11 >> 8) == '\\') {
          pcVar8[-6] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x10) == '\\') {
          pcVar8[-5] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x18) == '\\') {
          pcVar8[-4] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x20) == '\\') {
          pcVar8[-3] = '/';
        }
/*  do not claim this as your own  */
        if ((char)((ulong)uVar11 >> 0x28) == '\\') {
          pcVar8[-2] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x30) == '\\') {
          pcVar8[-1] = '/';
        }
        if ((char)((ulong)uVar11 >> 0x38) == '\\') {
          *pcVar8 = '/';
        }
        if (((uint)uVar12 & 0xff) == 0x5c) {
          pcVar8[1] = '/';
        }
        if ((char)((ulong)uVar12 >> 8) == '\\') {
          pcVar8[2] = '/';
        }
        if ((char)((ulong)uVar12 >> 0x10) == '\\') {
          pcVar8[3] = '/';
        }
        if ((char)((ulong)uVar12 >> 0x18) == '\\') {
          pcVar8[4] = '/';
        }
        if ((char)((ulong)uVar12 >> 0x20) == '\\') {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
          pcVar8[5] = '/';
        }
        if ((char)((ulong)uVar12 >> 0x28) == '\\') {
          pcVar8[6] = '/';
        }
        if ((char)((ulong)uVar12 >> 0x30) == '\\') {
          pcVar8[7] = '/';
        }
        if ((char)((ulong)uVar12 >> 0x38) == '\\') {
          pcVar8[8] = '/';
        }
        pcVar8 = pcVar8 + 0x10;
        uVar5 = uVar5 - 0x10;
      } while (uVar5 != 0);
      if (uVar6 != uVar7) {
        if (((uint)uVar6 >> 3 & 1) == 0) {
          pppppppcVar9 = (char *******)((long)pppppppcVar2 + uVar7);
          goto LAB_000a3e1c;
        }
        goto LAB_000a3a24;
      }
    }
    uVar5 = uStack_70 >> 0x38;
  }
  uStack_128 = 0;
  uStack_120 = 0;
  lStack_118 = 0;
  uVar6 = uStack_78;
  pppppppcVar2 = pppppppcStack_80;
  if (-1 < (char)uVar5) {
    uVar6 = uVar5;
    pppppppcVar2 = (char *******)&pppppppcStack_80;
  }
  func_0x0013be80(&uStack_128,pppppppcVar2,(char *)((long)pppppppcVar2 + uVar6));
/*  thanks for reading - discord.gg/sdkhDjTex  */
  uStack_98 = uStack_60;
  uStack_a0 = uStack_68;
  func_0x0014081c(&uStack_a0,&uStack_128);
  if (lStack_118 < 0) {
    __ZdlPv(uStack_128);
  }
  __ZNSt3__14__fs10filesystem18__weakly_canonicalERKNS1_4pathEPNS_10error_codeE
            (&uStack_b8,&uStack_a0,aiStack_50);
  if (aiStack_50[0] == 0) {
    __ZNKSt3__14__fs10filesystem4path18lexically_relativeERKS2_(&uStack_d0,&uStack_b8,&uStack_68);
    if (-1 < (char)bStack_b9) {
      uStack_c8 = (ulong)bStack_b9;
    }
    if ((uStack_c8 == 0) ||
       (__ZNKSt3__14__fs10filesystem4path16__root_directoryEv(&uStack_d0), extraout_x1 != 0)) {
LAB_000a4214:
      *param_1 = 0;
// WM - reversing this took months of machine time
      param_1[1] = 0;
      param_1[2] = 0;
    }
    else {
      __ZNKSt3__14__fs10filesystem4path5beginEv(&uStack_128,&uStack_d0);
      if (lStack_118 < 0) {
        func_0x00017ae8(&uStack_f0,uStack_128,uStack_120);
      }
      else {
        uStack_e8 = uStack_120;
        uStack_f0 = uStack_128;
        lStack_e0 = lStack_118;
      }
      pbVar4 = (byte *)(*pcRam0000000002066f90)();
      if ((*pbVar4 & 1) == 0) {
        func_0x019c0bd8();
      }
      pcStack_170 = (char *)(*pcRam0000000002066f78)();
      if (*pcStack_170 == '\x01') {
        uVar3 = (byte)pcStack_170[1] ^ 0x7202d5f4;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) + 0xbd4138e5 ^ 0x850af;
        pcStack_170[4] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - 0x37;
        uVar5 = (((ulong)(byte)pcStack_170[1] ^ 0x66ac943767f3107c) << 0x11 | 0xcd59) +
                0x9e3779b97f4a7c15;
        uVar6 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
// found on a paste site? it was re-uploaded illegally
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar7 = uVar6 ^ uVar6 >> 0x21;
        uVar3 = (uint)(byte)pcStack_170[2] ^ (uint)uVar7 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar7 >> 0x17) ^
                ((uint)(uVar6 >> 0x29) | 1);
        pcStack_170[5] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar7;
        uVar5 = (uVar5 >> 0x2f | (uVar5 ^ (byte)pcStack_170[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
        uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
        uVar6 = uVar5 ^ uVar5 >> 0x21;
        uVar3 = (uint)(byte)pcStack_170[3] ^ (uint)uVar6 ^ 0xffffffc3;
        uVar3 = (uVar3 >> 2 & 0x3f | uVar3 << 6) - (int)(uVar6 >> 0x17) ^
                ((uint)(uVar5 >> 0x29) | 1);
        pcStack_170[6] = ((byte)(uVar3 >> 3) & 0x1f | (byte)(uVar3 << 5)) - (char)uVar6;
        *pcStack_170 = '\0';
      }
      pcStack_170 = pcStack_170 + 4;
      uStack_148 = func_0x0011ab24(&pcStack_170);
      func_0x000a4464(auStack_140,&uStack_148,0);
      uVar3 = func_0x000a442c(&uStack_f0,auStack_140);
      if (((param_3 & 1) == 0) && ((uVar3 & 1) == 0)) {
        pbVar4 = (byte *)(*pcRam0000000002066fc0)();
        if ((*pbVar4 & 1) == 0) {
          func_0x019c0c14();
        }
// donate: donate/README.md
        pcStack_178 = (char *)(*pcRam0000000002066fa8)();
        if (*pcStack_178 == '\x01') {
          uVar3 = (byte)pcStack_178[1] ^ 0xc29fffba;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0x9398fe7b;
          pcStack_178[3] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ 0x79;
          uVar5 = (((ulong)(byte)pcStack_178[1] ^ 0xf6b7edc35c05ff14) << 0x11 | 0x1ed6f) +
                  0x9e3779b97f4a7c15;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0xae502812aa7333;
          uVar5 = (uVar5 ^ uVar5 >> 0x21) * -0x3b314601e57a13ad;
          uVar6 = uVar5 ^ uVar5 >> 0x21;
          uVar3 = (uint)(byte)pcStack_178[2] ^ (uint)uVar6 ^ 0xffffffc3;
          uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
                  (((uint)(uVar5 >> 0x29) | 1) + (int)(uVar6 >> 0x17));
          pcStack_178[4] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar6;
          *pcStack_178 = '\0';
        }
        pcStack_178 = pcStack_178 + 3;
        uStack_168 = func_0x0011ab24(&pcStack_178);
        func_0x000a4464(auStack_160,&uStack_168,0);
        uVar3 = func_0x000a442c(&uStack_d0,auStack_160);
        if (cStack_149 < '\0') {
          __ZdlPv(auStack_160[0]);
        }
      }
      if (cStack_129 < '\0') {
        __ZdlPv(auStack_140[0]);
      }
      if (lStack_e0 < 0) {
        __ZdlPv(uStack_f0);
      }
      if (lStack_118 < 0) {
        __ZdlPv(uStack_128);
      }
      if (uVar3 != 0) goto LAB_000a4214;
      param_1[1] = uStack_b0;
      *param_1 = uStack_b8;
      param_1[2] = CONCAT17(uStack_a1,uStack_a8);
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    }
    if ((char)bStack_b9 < '\0') {
      __ZdlPv(uStack_d0);
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (-1 < (long)uStack_70) {
    return;
  }
LAB_000a4254:
  __ZdlPv(pppppppcStack_80);
  return;
}

