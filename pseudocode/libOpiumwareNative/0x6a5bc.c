/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x6a5bc:4f0cf50f6e
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0006a5bc(long param_1,int param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 uVar3;
  code *pcVar4;
  int iVar5;
  long *plVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  char *pcStack_a0;
// WM - if you paid for this, you were scammed
  char *pcStack_98;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  char *pcStack_68;
  long lStack_60;
  long *plStack_58;
  
  func_0x007911b0(param_1,0x14);
  lVar19 = *(long *)(param_1 + 0x30);
  uVar10 = *(ulong *)(lVar19 + 0x10);
  if ((*(ulong *)(param_1 + 0x40) < uVar10) && (*(int *)(uVar10 - 4) == 7)) {
    lVar18 = *(long *)(uVar10 - 0x10);
    plVar6 = (long *)func_0x008848ec(lVar18,1);
    if ((((*(int *)((long)plVar6 + 0xc) == 9) &&
         (((lVar11 = *plVar6, *(char *)(lVar11 + 3) == -0x80 && (*(int *)(lVar11 + 4) == 0x18)) &&
          (*(undefined **)(lVar11 + 0x20) == &DAT_0012b87c)))) &&
        (((plVar6 = *(long **)(lVar11 + 0x10), plVar6 != (long *)0x0 &&
/* WM - if you paid for this, you were scammed */
          (*(char *)((long)plVar6 + 0x4f) == '\x01')) && (plVar6[2] == *(long *)(param_1 + 0x38)))))
       && (*plVar6 == param_1)) {
      lVar11 = plVar6[6];
      lVar12 = *(long *)(param_1 + 0x18);
      if ((lVar11 == (lVar19 - lVar12 >> 4) * -0x5555555555555555) && (plVar6[3] == lVar18)) {
        lVar19 = *(long *)(param_1 + 0x48);
        if (param_2 == 0) {
          uVar14 = (lVar19 - *(long *)(param_1 + 0x40)) - plVar6[10];
          uVar10 = uVar14 >> 4;
          lVar12 = lVar12 + lVar11 * 0x30;
          plVar13 = (long *)(lVar12 + 0x10);
          lVar11 = *plVar13;
          lVar15 = lVar11 + -0x10;
          lVar18 = (long)(uVar14 * 0x10000000) >> 0x20;
          if (0 < (int)uVar10) {
            lVar19 = lVar19 + (long)(int)uVar10 * -0x10;
            goto LAB_0006aa08;
          }
        }
        else {
          lVar12 = lVar12 + lVar11 * 0x30;
          plVar13 = (long *)(lVar12 + 0x10);
          lVar11 = *plVar13;
          lVar15 = lVar11 + -0x10;
          lVar19 = lVar19 + -0x10;
          lVar18 = 1;
          uVar10 = 1;
LAB_0006aa08:
          lVar17 = 0;
          uVar10 = uVar10 & 0xffffffff;
          do {
            uVar9 = *(undefined8 *)(lVar19 + lVar17);
            ((undefined8 *)(lVar11 + lVar17))[1] = ((undefined8 *)(lVar19 + lVar17))[1];
            *(undefined8 *)(lVar11 + lVar17) = uVar9;
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
            lVar17 = lVar17 + 0x10;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        uVar10 = lVar11 + lVar18 * 0x10;
        *plVar13 = lVar15;
        *(ulong *)(param_1 + 0x48) = uVar10;
        *(long *)(param_1 + 0x50) = lVar15;
        *(uint *)(lVar12 + 0x2c) = *(uint *)(lVar12 + 0x2c) & 0xfffffffd;
        *(undefined1 *)((long)plVar6 + 0x4f) = 0;
        if (*(ulong *)(*(long *)(param_1 + 0x30) + 0x18) < uVar10) {
          *(ulong *)(*(long *)(param_1 + 0x30) + 0x18) = uVar10;
        }
      }
    }
  }
  iVar5 = func_0x00791be4(param_1,1);
  if (iVar5 != 7) {
    pbVar8 = (byte *)(*pcRam00000000020634e0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bc588();
    }
    lVar19 = -0xae502812aa7333;
    pcStack_68 = (char *)(*pcRam00000000020634c8)();
    if (*pcStack_68 == '\x01') {
/* WM - no support for modified copies */
      uVar2 = (byte)pcStack_68[1] ^ 0xf9c1855c;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) + 0x8edb9f4 ^ 0x727dc5;
      pcStack_68[4] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) + 0x61;
      uVar10 = (((ulong)(byte)pcStack_68[1] ^ 0x8e0e939d40a2fbd9) << 0x11 | 0x11c1d) +
               0x9e3779b97f4a7c15;
      uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar2 = (uint)(byte)pcStack_68[2] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar16 >> 0x17) ^
              ((uint)(uVar14 >> 0x29) | 1);
      pcStack_68[5] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar16;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar10 ^ uVar10 >> 0x21;
      uVar2 = (uint)(byte)pcStack_68[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar14 >> 0x17) ^
              ((uint)(uVar10 >> 0x29) | 1);
      pcStack_68[6] = ((byte)(uVar2 >> 4) & 0xf | (byte)(uVar2 << 4)) - (char)uVar14;
      *pcStack_68 = '\0';
    }
    pcStack_68 = pcStack_68 + 4;
    uVar9 = func_0x0011ab24(&pcStack_68);
    pbVar8 = (byte *)(*pcRam0000000002063510)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bc5c4();
    }
    pcStack_70 = (char *)(*pcRam00000000020634f8)();
    if (*pcStack_70 == '\x01') {
      lVar18 = 0;
      uVar10 = 0xb4a4c1d8328cd2c4;
      do {
        uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar14 ^ uVar14 >> 0x21;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        uVar2 = (uint)(byte)pcStack_70[lVar18 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 1 & 0x7f | uVar2 << 7) -
                (((uint)(uVar14 >> 0x29) | 1) + (int)(uVar16 >> 0x17));
        pcStack_70[lVar18 + 0x18] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') ^ (byte)uVar16;
        uVar10 = lVar18 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_70[lVar18 + 1]) << 0x11);
        lVar18 = lVar18 + 1;
      } while (lVar18 != 0x17);
      *pcStack_70 = '\0';
    }
    pcStack_70 = pcStack_70 + 0x18;
    func_0x0011ab24(&pcStack_70);
    func_0x007a1b5c(param_1,uVar9);
LAB_0006b63c:
    *(undefined1 *)(lVar19 + 0x4c) = 1;
    func_0x0012dea0(param_1,lVar19);
    func_0x00791198(param_1);
LAB_0006b658:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x6b65c);
    (*pcVar4)();
  }
  func_0x00793928(param_1,1,1);
  puVar7 = (ulong *)func_0x00790f58(param_1,0xffffffff);
  uVar10 = (ulong)*(uint *)((long)puVar7 + 0xc);
  if ((((*(uint *)((long)puVar7 + 0xc) == 9) && (uVar10 = *puVar7, *(char *)(uVar10 + 3) == -0x80))
      && (*(int *)(uVar10 + 4) == 0x18)) && (*(undefined **)(uVar10 + 0x20) == &DAT_0012b87c)) {
    plStack_58 = *(long **)(uVar10 + 0x18);
    lStack_60 = *(long *)(uVar10 + 0x10);
    if (*(long *)(uVar10 + 0x18) != 0) {
      puVar7 = (ulong *)(*(long *)(uVar10 + 0x18) + 8);
      uVar10 = *puVar7;
      *puVar7 = uVar10 + 1;
    }
  }
  else {
    lStack_60 = 0;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    plStack_58 = (long *)0x0;
  }
  lVar18 = lStack_60;
  func_0x00791660(uVar10,param_1,0xfffffffe);
  lVar19 = lStack_60;
  if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) != *(long *)(param_1 + 0x38))) {
    pbVar8 = (byte *)(*pcRam0000000002063540)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bc6f0();
    }
    pcStack_98 = (char *)(*pcRam0000000002063528)();
    if (*pcStack_98 == '\x01') {
      uVar2 = (byte)pcStack_98[1] ^ 0xb5a524bc;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) + 0x862cc16c;
      pcStack_98[4] = ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') + 0x8b ^ 0x7f;
      uVar10 = (((ulong)(byte)pcStack_98[1] ^ 0xacebb61388870e2b) << 0x11 | 0x159d7) +
               0x9e3779b97f4a7c15;
      uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar2 = (uint)(byte)pcStack_98[2] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar16 >> 0x17);
      pcStack_98[5] =
           ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar14 >> 0x29) | 1) ^
           (byte)uVar16;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_98[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar10 ^ uVar10 >> 0x21;
      uVar2 = (uint)(byte)pcStack_98[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 3 & 0x1f | uVar2 << 5) - (int)(uVar14 >> 0x17);
      pcStack_98[6] =
           ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar14;
      *pcStack_98 = '\0';
    }
    pcStack_98 = pcStack_98 + 4;
    uVar9 = func_0x0011ab24(&pcStack_98);
    pbVar8 = (byte *)(*pcRam0000000002063570)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bc72c();
    }
    pcStack_a0 = (char *)(*pcRam0000000002063558)();
    if (*pcStack_a0 == '\x01') {
      lVar19 = 0;
      uVar10 = 0x17e5d7b9c1421b8b;
      do {
        uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar14 ^ uVar14 >> 0x21;
        uVar2 = (uint)(byte)pcStack_a0[lVar19 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar16 >> 0x17) ^ ((uint)(uVar14 >> 0x29) | 1)
        ;
        pcStack_a0[lVar19 + 0x18] = ((byte)(uVar2 >> 6) & 3 | (byte)(uVar2 << 2)) - (char)uVar16;
        uVar10 = lVar19 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_a0[lVar19 + 1]) << 0x11);
// WM - unlicensed copy if this notice is missing
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0x17);
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 0x18;
    func_0x0011ab24(&pcStack_a0);
    func_0x007a1b5c(param_1,uVar9);
    goto LAB_0006b658;
  }
  uVar3 = *(undefined1 *)(lVar18 + 0x4e);
  uVar1 = uVar3;
  if (param_2 != 0) {
    uVar1 = 1;
  }
  *(undefined1 *)(lVar18 + 0x4e) = uVar1;
  if (*(int *)(lVar18 + 0x38) == 1) {
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(lVar18 + 0x20);
  }
  if ((*(long *)(lVar18 + 0x28) != lRam0000000001f26d30) || (*(char *)(lStack_60 + 0x4c) == '\x01'))
  {
    *(undefined1 *)(lStack_60 + 0x4c) = 1;
    func_0x0012dea0(param_1,lStack_60);
    pbVar8 = (byte *)(*pcRam00000000020635a0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bc678();
    }
    pcStack_88 = (char *)(*pcRam0000000002063588)();
    if (*pcStack_88 == '\x01') {
      uVar2 = (byte)pcStack_88[1] ^ 0x5593cc7;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) + 0xdc7d1a0b;
      pcStack_88[4] = ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') + 0x1f ^ 4;
      uVar10 = (((ulong)(byte)pcStack_88[1] ^ 0x66ea43be7711f78) << 0x11 | 0xcdd) +
               0x9e3779b97f4a7c15;
      uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
      uVar16 = uVar14 ^ uVar14 >> 0x21;
      uVar2 = (uint)(byte)pcStack_88[2] ^ (uint)uVar16 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar16 >> 0x17);
      pcStack_88[5] =
           ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar14 >> 0x29) | 1) ^
           (byte)uVar16;
      uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar14 = uVar10 ^ uVar10 >> 0x21;
      uVar2 = (uint)(byte)pcStack_88[3] ^ (uint)uVar14 ^ 0xffffffc3;
      uVar2 = (uVar2 >> 5 & 7 | uVar2 << 3) - (int)(uVar14 >> 0x17);
      pcStack_88[6] =
           ((byte)(uVar2 >> 7) & 1 | (char)uVar2 * '\x02') - ((byte)(uVar10 >> 0x29) | 1) ^
           (byte)uVar14;
      *pcStack_88 = '\0';
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    }
    pcStack_88 = pcStack_88 + 4;
    uVar9 = func_0x0011ab24(&pcStack_88);
    pbVar8 = (byte *)(*pcRam00000000020635d0)();
    if ((*pbVar8 & 1) == 0) {
      func_0x019bc6b4();
    }
    pcStack_90 = (char *)(*pcRam00000000020635b8)();
    if (*pcStack_90 == '\x01') {
      lVar19 = 0;
      uVar10 = 0xc97e723fc81e6620;
      do {
        uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar14 ^ uVar14 >> 0x21;
        uVar2 = (uint)(byte)pcStack_90[lVar19 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 7 & 1 | uVar2 << 1) - (int)(uVar16 >> 0x17);
        pcStack_90[lVar19 + 0x1a] =
             ((byte)(uVar2 >> 5) & 7 | (char)uVar2 * '\b') - ((byte)(uVar14 >> 0x29) | 1) ^
             (byte)uVar16;
        uVar10 = lVar19 + -0x61c8864680b583eb +
                 (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_90[lVar19 + 1]) << 0x11);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0x19);
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0x1a;
    func_0x0011ab24(&pcStack_90);
    func_0x007a1b5c(param_1,uVar9);
    goto LAB_0006b658;
  }
  if ((*(byte *)(lStack_60 + 0x49) & 1) == 0) {
    lVar11 = *(long *)(*(long *)(lStack_60 + 8) + 0x18);
    if ((((*(long *)(*(long *)(lStack_60 + 8) + 0x30) == lVar11) ||
/* origin: github.com/pengussy - github.com/pengussy */
         (plVar6 = *(long **)(lVar11 + 0x38), *(int *)((long)plVar6 + 0xc) != 8)) ||
        (lVar11 = *plVar6, *(char *)(lVar11 + 3) == '\0')) ||
       (((*(undefined **)(lVar11 + 0x18) != &DAT_0006933c || (*(char *)(lVar11 + 4) == '\0')) ||
        ((*(int *)(lVar11 + 0x3c) != 7 || (*(long *)(lVar11 + 0x30) != *(long *)(lStack_60 + 0x18)))
        )))) {
      *(undefined1 *)(lStack_60 + 0x4c) = 1;
      func_0x0012dea0(param_1,lStack_60);
      pbVar8 = (byte *)(*pcRam0000000002063600)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bc600();
      }
      pcStack_78 = (char *)(*pcRam00000000020635e8)();
      if (*pcStack_78 == '\x01') {
        uVar2 = (byte)pcStack_78[1] ^ 0x6debf7b5;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) + 0xcf2352dc ^ 0x240c37;
        pcStack_78[4] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) + 0x8a;
        uVar10 = (((ulong)(byte)pcStack_78[1] ^ 0x82b679fa40e6e7dc) << 0x11 | 0x1056c) +
                 0x9e3779b97f4a7c15;
        uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
        uVar16 = uVar14 ^ uVar14 >> 0x21;
        uVar2 = (uint)(byte)pcStack_78[2] ^ (uint)uVar16 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar16 >> 0x17) ^
                ((uint)(uVar14 >> 0x29) | 1);
        pcStack_78[5] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar16;
        uVar10 = (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar14 = uVar10 ^ uVar10 >> 0x21;
        uVar2 = (uint)(byte)pcStack_78[3] ^ (uint)uVar14 ^ 0xffffffc3;
        uVar2 = (uVar2 >> 4 & 0xf | uVar2 << 4) - (int)(uVar14 >> 0x17) ^
/* WM - chat: discord.gg/sdkhDjTex */
                ((uint)(uVar10 >> 0x29) | 1);
        pcStack_78[6] = ((byte)(uVar2 >> 7) & 1 | (byte)(uVar2 << 1)) - (char)uVar14;
        *pcStack_78 = '\0';
      }
      pcStack_78 = pcStack_78 + 4;
      uVar9 = func_0x0011ab24(&pcStack_78);
      pbVar8 = (byte *)(*pcRam0000000002063630)();
      if ((*pbVar8 & 1) == 0) {
        func_0x019bc63c();
      }
      pcStack_80 = (char *)(*pcRam0000000002063618)();
      if (*pcStack_80 == '\x01') {
        lVar19 = 0;
        uVar10 = 0xf18c1dc78f6fbc3b;
        do {
          uVar14 = (uVar10 ^ uVar10 >> 0x21) * -0xae502812aa7333;
          uVar14 = (uVar14 ^ uVar14 >> 0x21) * -0x3b314601e57a13ad;
          uVar16 = uVar14 ^ uVar14 >> 0x21;
          uVar2 = (uint)(byte)pcStack_80[lVar19 + 1] ^ (uint)uVar16 ^ 0xffffffc3;
          uVar2 = (uVar2 >> 2 & 0x3f | uVar2 << 6) - (int)(uVar16 >> 0x17) ^
                  ((uint)(uVar14 >> 0x29) | 1);
          pcStack_80[lVar19 + 0x1c] =
               ((byte)(uVar2 >> 2) & 0x3f | (byte)(uVar2 << 6)) - (char)uVar16;
          uVar10 = lVar19 + -0x61c8864680b583eb +
                   (uVar10 >> 0x2f | (uVar10 ^ (byte)pcStack_80[lVar19 + 1]) << 0x11);
          lVar19 = lVar19 + 1;
        } while (lVar19 != 0x1b);
        *pcStack_80 = '\0';
/*  thanks for reading - discord.gg/sdkhDjTex  */
      }
      pcStack_80 = pcStack_80 + 0x1c;
      func_0x0011ab24(&pcStack_80);
      func_0x007a1b5c(param_1,uVar9);
      goto LAB_0006b658;
    }
    if (*(int *)(lStack_60 + 0x38) == 1) {
      *(undefined1 *)(lStack_60 + 0x48) = 0;
      *(undefined4 *)(lStack_60 + 0x38) = 0;
      func_0x00792a48(param_1);
      func_0x00794504(param_1,1,5);
      if (param_2 == 0) {
        iVar5 = func_0x00791650(param_1);
        iVar5 = iVar5 + -1;
      }
      else {
        iVar5 = 1;
      }
      func_0x00791660(*(undefined8 *)(lVar19 + 8),0);
      func_0x007911b0(*(undefined8 *)(lVar19 + 8),iVar5);
      if (iVar5 != 0) {
/*  reversing this took months of machine time  */
        func_0x00791230(param_1,*(undefined8 *)(lVar19 + 8),iVar5);
      }
      func_0x00791660(param_1,1);
      uVar9 = func_0x0012cb18(param_1,&lStack_60,iVar5,param_2 != 0);
      uVar9 = func_0x0012bec4(param_1,&lStack_60,uVar9);
      goto LAB_0006a8c8;
    }
    if (param_2 != 0) goto LAB_0006b63c;
    if (*(char *)(lStack_60 + 0x48) != '\x01') {
      iVar5 = func_0x00791650(param_1);
      iVar5 = iVar5 + -1;
      func_0x007911b0(*(undefined8 *)(lVar19 + 8),iVar5);
      if (iVar5 != 0) {
        func_0x00791230(param_1,*(undefined8 *)(lVar19 + 8),iVar5);
      }
      uVar9 = func_0x0012cb18(param_1,&lStack_60,iVar5,0);
      uVar9 = func_0x0012bec4(param_1,&lStack_60,uVar9);
      goto LAB_0006a8c8;
    }
    uVar9 = 1;
  }
  else {
// proprietary - see LICENSE - do not sell
    uVar9 = 0;
  }
  uVar9 = func_0x0012bec4(param_1,&lStack_60,uVar9);
LAB_0006a8c8:
  plVar6 = plStack_58;
  *(undefined1 *)(lVar18 + 0x4e) = uVar3;
  if (plStack_58 != (long *)0x0) {
    LOAcquire();
    lVar19 = plStack_58[1];
    plStack_58[1] = lVar19 + -1;
    LORelease();
    if (lVar19 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return uVar9;
}

