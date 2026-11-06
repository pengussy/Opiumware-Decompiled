/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xc188c:72ba877e38
 */

/* WARNING: Removing unreachable block (ram,0x000c1ccc) */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_000c188c(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  undefined8 *******pppppppuVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *******pppppppuVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  undefined8 *******pppppppuStack_e0;
  undefined8 *******pppppppuStack_d8;
// origin: github.com/pengussy
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *******pppppppuStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  undefined8 *******pppppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
    pbVar10 = (byte *)(*pcRam0000000002068b80)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019c2ff0();
    }
    pcStack_110 = (char *)(*pcRam0000000002068b68)();
    if (*pcStack_110 == '\x01') {
      uVar3 = (byte)pcStack_110[1] ^ 0x7f47721b;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0x7c55741e;
      pcStack_110[10] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ 0xd8;
      uVar6 = (((ulong)(byte)pcStack_110[1] ^ 0x594478eb1a7b3b92) << 0x11 | 0xb288) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
// no support for modified copies
      uVar3 = (uint)(byte)pcStack_110[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_110[0xb] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_110[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_110[0xc] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_110[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_110[0xd] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_110[5] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_110[0xe] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_110[6] ^ (uint)uVar12 ^ 0xffffffc3;
/* wm:keep the notice, keep the source honest */
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_110[0xf] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_110[7] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_110[0x10] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_110[8] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
      pcStack_110[0x11] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_110[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar3 = (uint)(byte)pcStack_110[9] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) -
              (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_110[0x12] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar11;
      *pcStack_110 = '\0';
    }
    pcStack_110 = pcStack_110 + 10;
    uVar5 = func_0x0011ab24(&pcStack_110);
    func_0x007a1ba8(param_1,1,uVar5);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
LAB_000c2100:
    pbVar10 = (byte *)(*pcRam0000000002068bb0)();
    if ((*pbVar10 & 1) == 0) {
      func_0x019c2fb4();
    }
    pcStack_108 = (char *)(*pcRam0000000002068b98)();
    if (*pcStack_108 == '\x01') {
      uVar3 = (byte)pcStack_108[1] ^ 0x4d4b40bd;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) + 0xc5bce89b ^ 0x7dce91;
      pcStack_108[8] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) + 0x82;
      uVar6 = (((ulong)(byte)pcStack_108[1] ^ 0x4e552d799464c7d8) << 0x11 | 0x9caa) +
              0x9e3779b97f4a7c15;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[2] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar11 >> 0x29) | 1);
      pcStack_108[9] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_108[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[3] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar11 >> 0x29) | 1);
      pcStack_108[10] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_108[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[4] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar11 >> 0x29) | 1);
      pcStack_108[0xb] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_108[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[5] ^ (uint)uVar12 ^ 0xffffffc3;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar11 >> 0x29) | 1);
      pcStack_108[0xc] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_108[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[6] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar12 >> 0x17) ^
              ((uint)(uVar11 >> 0x29) | 1);
      pcStack_108[0xd] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar12;
      uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_108[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar6 ^ uVar6 >> 0x21;
      uVar3 = (uint)(byte)pcStack_108[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 3 & 0x1f | uVar3 << 5) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar6 >> 0x29) | 1)
      ;
      pcStack_108[0xe] = ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar11;
      *pcStack_108 = '\0';
    }
/* WM - stripping the watermark breaks the license */
    pcStack_108 = pcStack_108 + 8;
    uVar5 = func_0x0011ab24(&pcStack_108);
    func_0x007a1ba8(param_1,2,uVar5);
LAB_000c2450:
    FUN_0000aa50();
  }
  else {
    iVar2 = func_0x00791e54(param_1,2);
    if (iVar2 == 0) goto LAB_000c2100;
    func_0x007a1f70(param_1,3);
    puVar4 = (undefined8 *)func_0x007926a8(param_1,1);
    pppppppuVar13 = (undefined8 *******)*puVar4;
    uVar5 = func_0x00792368(param_1,2,0);
    uVar6 = _strlen();
    if (0x7ffffffffffffff6 < uVar6) goto LAB_000c2450;
    if (uVar6 < 0x17) {
      uStack_68 = CONCAT17((char)uVar6,(undefined7)uStack_68);
/* wm:do not claim this as your own */
      pppppppuVar7 = &pppppppuStack_78;
    }
    else {
      uVar11 = (uVar6 & 0x7ffffffffffffff8) + 8;
      uVar12 = 0x19;
      if (uVar11 != 0x18) {
        uVar12 = uVar11;
      }
      pppppppuVar7 = (undefined8 *******)__Znwm(uVar12);
      uStack_68 = uVar12 | 0x8000000000000000;
      pppppppuStack_78 = pppppppuVar7;
      uStack_70 = uVar6;
    }
    _memmove(pppppppuVar7,uVar5,uVar6);
    *(undefined1 *)((long)pppppppuVar7 + uVar6) = 0;
    pppppppuVar7 = (undefined8 *******)func_0x0003c1d0(param_1,pppppppuVar13,0);
    if (*(long *)(lRam0000000001f26680 + (long)pppppppuVar7) != 0) {
      lVar16 = (long)*(int *)(lRam0000000001f26690 +
/* unlicensed copy if this notice is missing */
                             *(long *)(lRam0000000001f26680 + (long)pppppppuVar7));
      plVar14 = *(long **)(lRam0000000001f266a0 + (long)pppppppuVar7);
      uVar6 = func_0x0003c0e8(plVar14);
      if ((uVar6 & 1) == 0) {
        pbVar10 = (byte *)(*pcRam0000000002068c10)();
        if ((*pbVar10 & 1) == 0) {
          func_0x019c2ec4();
        }
        pcStack_e8 = (char *)(*pcRam0000000002068bf8)();
        if (*pcStack_e8 == '\x01') {
          lVar16 = 0;
          uVar6 = 0x61dffc21440e95fc;
          do {
            uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
            uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
            uVar12 = uVar11 ^ uVar11 >> 0x21;
            uVar3 = (uint)(byte)pcStack_e8[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
            uVar3 = (uVar3 >> 1 & 0x7f | uVar3 << 7) -
                    (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
            pcStack_e8[lVar16 + 0x19] =
                 ((byte)(uVar3 >> 6) & 3 | (char)uVar3 * '\x04') ^ (byte)uVar12;
            uVar6 = lVar16 + -0x61c8864680b583eb +
                    (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_e8[lVar16 + 1]) << 0x11);
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0x18);
          *pcStack_e8 = '\0';
        }
        pcStack_e8 = pcStack_e8 + 0x19;
        func_0x0011ab24(&pcStack_e8);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
        func_0x007a1b5c(param_1,"%s");
      }
      else {
        lVar15 = *plVar14;
        uVar6 = func_0x0003c0e8(lVar15);
        if ((uVar6 & 1) == 0) {
          pbVar10 = (byte *)(*pcRam0000000002068c40)();
          if ((*pbVar10 & 1) == 0) {
            func_0x019c2f00();
          }
          pcStack_f0 = (char *)(*pcRam0000000002068c28)();
          if (*pcStack_f0 == '\x01') {
            lVar16 = 0;
            uVar6 = 0xe1ea6404be257dd8;
            do {
              uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
              uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
              uVar12 = uVar11 ^ uVar11 >> 0x21;
              uVar3 = (uint)(byte)pcStack_f0[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
              uVar3 = (uVar3 >> 7 & 1 | uVar3 << 1) - (int)(uVar12 >> 0x17) ^
                      ((uint)(uVar11 >> 0x29) | 1);
              pcStack_f0[lVar16 + 0x19] =
                   ((byte)(uVar3 >> 2) & 0x3f | (byte)(uVar3 << 6)) - (char)uVar12;
              uVar6 = lVar16 + -0x61c8864680b583eb +
/* wm:if you paid for this, you were scammed */
                      (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f0[lVar16 + 1]) << 0x11);
              lVar16 = lVar16 + 1;
            } while (lVar16 != 0x18);
            *pcStack_f0 = '\0';
          }
          pcStack_f0 = pcStack_f0 + 0x19;
          func_0x0011ab24(&pcStack_f0);
          func_0x007a1b5c(param_1,"%s");
        }
        else {
          pcVar17 = *(code **)(lRam0000000001f266c0 + lVar15);
          if (pcVar17 == (code *)0x0) {
            pbVar10 = (byte *)(*pcRam0000000002068c70)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019c2f3c();
            }
            pcStack_f8 = (char *)(*pcRam0000000002068c58)();
            if (*pcStack_f8 == '\x01') {
              lVar16 = 0;
              uVar6 = 0xd0b3ac0a3f6aa3ae;
              do {
                uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
                uVar12 = uVar11 ^ uVar11 >> 0x21;
                uVar3 = (uint)(byte)pcStack_f8[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
                uVar3 = (uVar3 >> 5 & 7 | uVar3 << 3) - (int)(uVar12 >> 0x17);
                pcStack_f8[lVar16 + 0x19] =
                     ((byte)(uVar3 >> 5) & 7 | (char)uVar3 * '\b') - ((byte)(uVar11 >> 0x29) | 1) ^
                     (byte)uVar12;
                uVar6 = lVar16 + -0x61c8864680b583eb +
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                        (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_f8[lVar16 + 1]) << 0x11);
                lVar16 = lVar16 + 1;
              } while (lVar16 != 0x18);
              *pcStack_f8 = '\0';
            }
            pcStack_f8 = pcStack_f8 + 0x19;
            func_0x0011ab24(&pcStack_f8);
            func_0x007a1b5c(param_1,"%s");
          }
          else {
            *puRam0000000001f26960 = 0;
            if (lRam0000000001f26630 == lVar16) {
              uVar5 = func_0x007a1df8(param_1,3,&uStack_80);
              if (uStack_80 < 0x7ffffffffffffff7) {
                if (uStack_80 < 0x17) {
                  uStack_88 = CONCAT17((char)uStack_80,(undefined7)uStack_88);
                  pppppppuVar8 = &pppppppuStack_98;
                }
                else {
                  uVar6 = (uStack_80 & 0x7ffffffffffffff8) + 8;
                  uVar11 = 0x19;
                  if (uVar6 != 0x18) {
                    uVar11 = uVar6;
                  }
                  pppppppuVar8 = (undefined8 *******)__Znwm(uVar11);
                  uStack_88 = uVar11 | 0x8000000000000000;
                  uStack_90 = uStack_80;
                  pppppppuStack_98 = pppppppuVar8;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                }
                _memmove(pppppppuVar8,uVar5,uStack_80);
                *(undefined1 *)((long)pppppppuVar8 + uStack_80) = 0;
                lStack_c0 = 0;
                pppppppuStack_d8 = (undefined8 *******)0x0;
                pppppppuStack_e0 = (undefined8 *******)0x0;
                uStack_c8 = 0;
                uStack_d0 = 0;
                (*pcRam0000000001f26e10)(&pppppppuStack_e0,&pppppppuStack_98);
                (*pcVar17)(plVar14,pppppppuVar13,&pppppppuStack_e0);
                func_0x007932d0(param_1,(uRam0000000001f266e0 &
                                        *(ushort *)(lRam0000000001f266d0 + (long)pppppppuVar7)) == 0
                               );
                if (lStack_c0 < 0) {
                  __ZdlPv(uStack_d0);
                }
// thanks for reading - discord.gg/sdkhDjTex
                if (-1 < (long)uStack_88) {
                  return 1;
                }
                pppppppuVar13 = pppppppuStack_98;
LAB_000c1cc0:
                __ZdlPv(pppppppuVar13);
                return 1;
              }
              FUN_0000aa50();
            }
            else if (lRam0000000001f26620 == lVar16) {
              pppppppuStack_98 = (undefined8 *******)0x0;
              uVar5 = func_0x007a1df8(param_1,3,&pppppppuStack_98);
              pppppppuVar8 = pppppppuStack_98;
              if (pppppppuStack_98 < (undefined8 *******)0x7ffffffffffffff7) {
                if ((undefined8 *******)((long)&MACH_HEADER.sizeofcmds + 2) < pppppppuStack_98) {
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
                  uVar6 = ((ulong)pppppppuStack_98 & 0x7ffffffffffffff8) + 8;
                  uVar11 = 0x19;
                  if (uVar6 != 0x18) {
                    uVar11 = uVar6;
                  }
                  pppppppuVar9 = (undefined8 *******)__Znwm(uVar11);
                  uStack_d0 = uVar11 | 0x8000000000000000;
                  pppppppuStack_d8 = pppppppuVar8;
                  pppppppuStack_e0 = pppppppuVar9;
                }
                else {
                  uStack_d0 = CONCAT17((char)pppppppuStack_98,(undefined7)uStack_d0);
                  pppppppuVar9 = &pppppppuStack_e0;
                }
                _memmove(pppppppuVar9,uVar5,pppppppuVar8);
                *(undefined1 *)((long)pppppppuVar9 + (long)pppppppuVar8) = 0;
                (*pcVar17)(plVar14,pppppppuVar13,&pppppppuStack_e0);
                func_0x007932d0(param_1,(uRam0000000001f266e0 &
                                        *(ushort *)(lRam0000000001f266d0 + (long)pppppppuVar7)) == 0
                               );
                if (-1 < (long)uStack_d0) {
                  return 1;
                }
                pppppppuVar13 = pppppppuStack_e0;
                goto LAB_000c1cc0;
              }
              FUN_0000aa50();
            }
            else {
              if (lRam0000000001f26640 == lVar16) {
                uVar3 = func_0x007a212c(param_1,3);
                uStack_b8 = 0;
                lStack_c0 = 0;
/* watermarked copy - do not remove - github.com/pengussy */
                uStack_a8 = 0;
                uStack_b0 = 0;
                pppppppuStack_d8 = (undefined8 *******)0x0;
                uStack_c8 = 0;
                uStack_d0 = 0;
                pppppppuStack_e0 = (undefined8 *******)(ulong)uVar3;
                (*pcVar17)(plVar14,pppppppuVar13,&pppppppuStack_e0);
                func_0x007932d0(param_1,(uRam0000000001f266e0 &
                                        *(ushort *)(lRam0000000001f266d0 + (long)pppppppuVar7)) == 0
                               );
                return 1;
              }
              uStack_d0 = (*pcRam0000000001f26e08)();
              uVar6 = uRam0000000001f266e0;
              lVar16 = lRam0000000001f266d0;
              uVar1 = *(ushort *)(lRam0000000001f266d0 + (long)pppppppuVar7);
              *(ushort *)(lRam0000000001f266d0 + (long)pppppppuVar7) =
                   uVar1 | (ushort)uRam0000000001f266e0;
              pppppppuStack_e0 = pppppppuVar7;
              pppppppuStack_d8 = pppppppuVar13;
              func_0x007933b8(param_1,&pppppppuStack_e0,0);
              func_0x007930d0(param_1,&DAT_000b2bbc,0,1,0);
              func_0x00791ab0(param_1,1);
              func_0x00791ab0(param_1,2);
              func_0x00791ab0(param_1,3);
              iVar2 = func_0x00794a14(param_1,3,0,0);
              *(ushort *)(lVar16 + (long)pppppppuVar7) = uVar1;
              if (iVar2 == 0) {
                func_0x007932d0(param_1,(uVar6 & uVar1) == 0);
                return 1;
              }
              func_0x00791198(param_1);
            }
/* stripping the watermark breaks the license */
          }
        }
      }
      goto LAB_000c299c;
    }
  }
  pbVar10 = (byte *)(*pcRam0000000002068be0)();
  if ((*pbVar10 & 1) == 0) {
    func_0x019c2f78();
  }
  pcStack_100 = (char *)(*pcRam0000000002068bc8)();
  if (*pcStack_100 == '\x01') {
    lVar16 = 0;
    uVar6 = 0xec9b34ffd73bdb8;
    do {
      uVar11 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar12 = uVar11 ^ uVar11 >> 0x21;
      uVar3 = (uint)(byte)pcStack_100[lVar16 + 1] ^ (uint)uVar12 ^ 0xffffffc3;
      uVar3 = (uVar3 >> 6 & 3 | uVar3 << 2) - (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17))
      ;
      pcStack_100[lVar16 + 0x1f] = ((byte)(uVar3 >> 2) & 0x3f | (char)uVar3 * '@') ^ (byte)uVar12;
      uVar6 = lVar16 + -0x61c8864680b583eb +
              (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_100[lVar16 + 1]) << 0x11);
// proprietary - see LICENSE - do not sell
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x1e);
    *pcStack_100 = '\0';
  }
  pcStack_100 = pcStack_100 + 0x1f;
  func_0x0011ab24(&pcStack_100);
  func_0x007a1b5c(param_1,"%s");
LAB_000c299c:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0xc29a0);
  (*pcVar17)();
}

