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
 *  file-id: 0x2104d0:32916d2667
 *  --------------------------------------------------------------------------*/

undefined8 FUN_002104d0(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined8 uVar6;
  char cVar7;
  ulong extraout_x8;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  uint uVar16;
  double dVar17;
  char *pcStack_80;
  char *pcStack_78;
// stripping the watermark breaks the license
  char *pcStack_70;
  char *pcStack_68;
  
  iVar1 = func_0x00791db8(param_1,1);
  if (iVar1 == 0) {
    pbVar5 = (byte *)(*pcRam0000000002077010)();
    if ((*pbVar5 & 1) == 0) goto LAB_002111f0;
    goto LAB_002106d0;
  }
  iVar1 = func_0x00791db8(param_1,2);
  if (iVar1 == 0) goto LAB_00210a08;
  iVar1 = func_0x00791db8(param_1,3);
  if (iVar1 == 0) goto LAB_00210d58;
  dVar17 = (double)func_0x007920a4(param_1,1,0);
  pcVar2 = (code *)func_0x0011ab24(PTR___dyld_get_image_header_01f20228);
  lVar3 = (*pcVar2)(0);
  if (*(int *)(lVar3 + 0x10) != 0) {
    piVar15 = (int *)(lVar3 + 0x20);
    pcVar4 = (char *)(*pcRam000000000205de28)();
    pcVar2 = pcRam000000000205de40;
    uVar16 = 0;
    uVar8 = extraout_x8;
    do {
      if (*piVar15 == 0x19) {
        pbVar5 = (byte *)(*pcVar2)(0x205de40);
        pcVar10 = pcVar4;
/* wm:chat: discord.gg/sdkhDjTex */
        if ((*pbVar5 & 1) == 0) {
          func_0x019d8ef8();
          func_0x0011ab48(pcVar4);
          cVar7 = (char)piVar15[2];
          if (cVar7 != '\0') goto LAB_002105d8;
        }
        else {
          func_0x0011ab48(pcVar4);
          cVar7 = (char)piVar15[2];
          if (cVar7 != '\0') {
LAB_002105d8:
            pcVar11 = (char *)((long)piVar15 + 9);
            do {
              if (cVar7 != *pcVar10) break;
              pcVar10 = pcVar10 + 1;
              cVar7 = *pcVar11;
              pcVar11 = pcVar11 + 1;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
            } while (cVar7 != '\0');
          }
        }
        if (cVar7 == *pcVar10) {
          lVar3 = lVar3 - *(long *)(piVar15 + 6);
          goto LAB_00210624;
        }
        uVar8 = (ulong)*(uint *)(lVar3 + 0x10);
      }
      piVar15 = (int *)((long)piVar15 + (ulong)(uint)piVar15[1]);
      uVar16 = uVar16 + 1;
    } while (uVar16 < (uint)uVar8);
  }
  lVar3 = 0;
LAB_00210624:
  lVar14 = (long)dVar17;
  iVar1 = func_0x00792168(param_1,2,0);
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  dVar17 = (double)func_0x007920a4(param_1,3,0);
  lVar9 = (long)dVar17;
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      *(char *)(lVar3 + lVar14) = (char)lVar9;
    }
    else {
      if (iVar1 != 2) goto LAB_002110a8;
      *(short *)(lVar3 + lVar14) = (short)lVar9;
    }
  }
  else if (iVar1 == 4) {
    *(int *)(lVar3 + lVar14) = (int)lVar9;
  }
  else {
    if (iVar1 != 8) {
LAB_002110a8:
      do {
        pbVar5 = (byte *)(*pcRam00000000020770a0)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019d8f34();
        }
        pcStack_68 = (char *)(*pcRam0000000002077088)();
        if (*pcStack_68 == '\x01') {
          lVar3 = 0;
          uVar8 = 0x4e754aaaf97741f2;
          do {
            uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
            uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
            uVar13 = uVar12 ^ uVar12 >> 0x21;
            uVar16 = (uint)(byte)pcStack_68[lVar3 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
            uVar16 = (uVar16 >> 6 & 3 | uVar16 << 2) - (int)(uVar13 >> 0x17);
            pcStack_68[lVar3 + 0x22] =
                 ((byte)(uVar16 >> 2) & 0x3f | (char)uVar16 * '@') - ((byte)(uVar12 >> 0x29) | 1) ^
                 (byte)uVar13;
            uVar8 = lVar3 + -0x61c8864680b583eb +
                    (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_68[lVar3 + 1]) << 0x11);
            lVar3 = lVar3 + 1;
          } while (lVar3 != 0x21);
          *pcStack_68 = '\0';
        }
        pcStack_68 = pcStack_68 + 0x22;
        func_0x0011ab24(&pcStack_68);
        func_0x007a1b5c(param_1,"%s");
LAB_002111f0:
        func_0x019d8fe8();
LAB_002106d0:
        pcStack_80 = (char *)(*pcRam0000000002076ff8)();
        if (*pcStack_80 == '\x01') {
          uVar16 = (byte)pcStack_80[1] ^ 0x5f68a76d;
          uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) + 0xd3980abf ^ 0x48b19;
/* wm:donate: donate/README.md */
          pcStack_80[8] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) + 0x52;
          uVar8 = (((ulong)(byte)pcStack_80[1] ^ 0xdca07bed56c6b549) << 0x11 | 0x1b940) +
                  0x9e3779b97f4a7c15;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_80[2] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_80[9] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_80[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_80[3] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_80[10] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_80[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_80[4] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_80[0xb] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_80[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
/* proprietary - see LICENSE - do not sell */
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_80[5] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_80[0xc] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_80[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_80[6] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_80[0xd] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_80[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
/* wm:if you paid for this, you were scammed */
          uVar12 = uVar8 ^ uVar8 >> 0x21;
          uVar16 = (uint)(byte)pcStack_80[7] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 3 & 0x1f | uVar16 << 5) - (int)(uVar12 >> 0x17) ^
                   ((uint)(uVar8 >> 0x29) | 1);
          pcStack_80[0xe] = ((byte)(uVar16 >> 7) & 1 | (byte)(uVar16 << 1)) - (char)uVar12;
          *pcStack_80 = '\0';
        }
        pcStack_80 = pcStack_80 + 8;
        uVar6 = func_0x0011ab24(&pcStack_80);
        func_0x007a1ba8(param_1,1,uVar6);
LAB_00210a08:
        pbVar5 = (byte *)(*pcRam0000000002077040)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019d8fac();
        }
        pcStack_78 = (char *)(*pcRam0000000002077028)();
        if (*pcStack_78 == '\x01') {
          uVar16 = (byte)pcStack_78[1] ^ 0xaf1c9616;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) + 0xd4f6215f;
          pcStack_78[8] = ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') + 0x3d ^ 0xd5;
          uVar8 = (((ulong)(byte)pcStack_78[1] ^ 0x1ee5a9c5ab4e3c72) << 0x11 | 0x3dcb) +
                  0x9e3779b97f4a7c15;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_78[2] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) - (int)(uVar13 >> 0x17);
          pcStack_78[9] =
               ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
/* keep the notice, keep the source honest - github.com/pengussy */
          uVar16 = (uint)(byte)pcStack_78[3] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) - (int)(uVar13 >> 0x17);
          pcStack_78[10] =
               ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_78[4] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) - (int)(uVar13 >> 0x17);
          pcStack_78[0xb] =
               ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_78[5] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) - (int)(uVar13 >> 0x17);
          pcStack_78[0xc] =
               ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
// origin: github.com/pengussy
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_78[6] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) - (int)(uVar13 >> 0x17);
          pcStack_78[0xd] =
               ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar12 >> 0x29) | 1) ^
               (byte)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_78[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar8 ^ uVar8 >> 0x21;
          uVar16 = (uint)(byte)pcStack_78[7] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 1 & 0x7f | uVar16 << 7) - (int)(uVar12 >> 0x17);
          pcStack_78[0xe] =
               ((byte)(uVar16 >> 3) & 0x1f | (char)uVar16 * ' ') - ((byte)(uVar8 >> 0x29) | 1) ^
               (byte)uVar12;
          *pcStack_78 = '\0';
        }
/* found on a paste site? it was re-uploaded illegally */
        pcStack_78 = pcStack_78 + 8;
        uVar6 = func_0x0011ab24(&pcStack_78);
        func_0x007a1ba8(param_1,2,uVar6);
LAB_00210d58:
        pbVar5 = (byte *)(*pcRam0000000002077070)();
        if ((*pbVar5 & 1) == 0) {
          func_0x019d8f70();
        }
        pcStack_70 = (char *)(*pcRam0000000002077058)();
        if (*pcStack_70 == '\x01') {
          uVar16 = (byte)pcStack_70[1] ^ 0xb35a72c6;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) + 0xd8c14b67 ^ 0x909cf;
          pcStack_70[8] = ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - 5;
          uVar8 = (((ulong)(byte)pcStack_70[1] ^ 0x2fa1b86a843415c4) << 0x11 | 0x5f43) +
                  0x9e3779b97f4a7c15;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_70[2] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_70[9] = ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
/*  if you paid for this, you were scammed  */
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_70[3] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_70[10] = ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_70[4] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_70[0xb] = ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_70[5] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_70[0xc] = ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar12 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
          uVar13 = uVar12 ^ uVar12 >> 0x21;
          uVar16 = (uint)(byte)pcStack_70[6] ^ (uint)uVar13 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) - (int)(uVar13 >> 0x17) ^
                   ((uint)(uVar12 >> 0x29) | 1);
          pcStack_70[0xd] = ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - (char)uVar13;
          uVar8 = (uVar8 >> 0x2f | (uVar8 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0xae502812aa7333;
          uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
          uVar12 = uVar8 ^ uVar8 >> 0x21;
          uVar16 = (uint)(byte)pcStack_70[7] ^ (uint)uVar12 ^ 0xffffffc3;
          uVar16 = (uVar16 >> 2 & 0x3f | uVar16 << 6) - (int)(uVar12 >> 0x17) ^
                   ((uint)(uVar8 >> 0x29) | 1);
          pcStack_70[0xe] = ((byte)(uVar16 >> 3) & 0x1f | (byte)(uVar16 << 5)) - (char)uVar12;
          *pcStack_70 = '\0';
        }
        pcStack_70 = pcStack_70 + 8;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
        uVar6 = func_0x0011ab24(&pcStack_70);
        func_0x007a1ba8(param_1,3,uVar6);
      } while( true );
    }
    *(long *)(lVar3 + lVar14) = lVar9;
  }
  return 0;
}

