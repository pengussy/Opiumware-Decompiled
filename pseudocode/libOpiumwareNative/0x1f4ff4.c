/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1f4ff4:c1429db44b
 */

undefined8 FUN_001f4ff4(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *****pppppuVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
  undefined8 *****pppppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  char cStack_70;
  undefined7 uStack_6f;
  long lStack_68;
  char cStack_59;
  ulong uStack_58;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  
  iVar3 = func_0x00791e54(param_1,1);
  if (iVar3 == 0) {
LAB_001f52b8:
    pbVar6 = (byte *)(*pcRam0000000002075690)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d6fcc();
    }
    pcStack_a8 = (char *)(*pcRam0000000002075678)();
    if (*pcStack_a8 == '\x01') {
      uVar1 = (byte)pcStack_a8[1] ^ 0xba393055;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0xf8405575 ^ 0x2541ef;
      pcStack_a8[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x6a;
      uVar9 = (((ulong)(byte)pcStack_a8[1] ^ 0x114a229f168f20dc) << 0x11 | 0x2294) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a8[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a8[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/* wm:keep the notice, keep the source honest */
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a8[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a8[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a8[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a8[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      *pcStack_a8 = '\0';
    }
    pcStack_a8 = pcStack_a8 + 8;
    uVar4 = func_0x0011ab24(&pcStack_a8);
// origin: github.com/pengussy
    func_0x007a1ba8(param_1,1,uVar4);
LAB_001f5608:
    pbVar6 = (byte *)(*pcRam00000000020756c0)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019d6f90();
    }
    pcStack_a0 = (char *)(*pcRam00000000020756a8)();
    if (*pcStack_a0 == '\x01') {
      uVar1 = (byte)pcStack_a0[1] ^ 0xfe385144;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xd8a491fd ^ 0x6a09d7;
      pcStack_a0[8] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x79;
      uVar9 = (((ulong)(byte)pcStack_a0[1] ^ 0x5401353788e73853) << 0x11 | 0xa802) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[9] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_a0[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar11;
      uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
      pcStack_a0[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
      *pcStack_a0 = '\0';
    }
    pcStack_a0 = pcStack_a0 + 8;
/* wm:found on a paste site? it was re-uploaded illegally */
    uVar4 = func_0x0011ab24(&pcStack_a0);
    func_0x007a1ba8(param_1,2,uVar4);
LAB_001f5958:
    FUN_0000aa50();
  }
  else {
    iVar3 = func_0x00791db8(param_1,2);
    if (iVar3 == 0) goto LAB_001f5608;
    dVar12 = (double)func_0x007920a4(param_1,2,0);
    if (((dVar12 != 2.0) && (dVar12 != 0.0)) && (dVar12 != 1.0)) {
      pbVar6 = (byte *)(*pcRam00000000020756f0)();
      if ((*pbVar6 & 1) == 0) {
        func_0x019d6f18();
      }
      pcStack_90 = (char *)(*pcRam00000000020756d8)();
      if (*pcStack_90 == '\x01') {
        lVar8 = 0;
        uVar9 = 0xe2d47c1baf00faa1;
        do {
          uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
          uVar11 = uVar10 ^ uVar10 >> 0x21;
          uVar1 = (uint)(byte)pcStack_90[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17);
          pcStack_90[lVar8 + 0x27] =
               ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar10 >> 0x29) | 1) ^
               (byte)uVar11;
          uVar9 = lVar8 + -0x61c8864680b583eb +
                  (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[lVar8 + 1]) << 0x11);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x26);
        *pcStack_90 = '\0';
      }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      pcStack_90 = pcStack_90 + 0x27;
      uVar4 = func_0x0011ab24(&pcStack_90);
      func_0x007a1abc(param_1,2,uVar4);
      goto LAB_001f52b8;
    }
    uStack_58 = 0;
    uVar4 = func_0x00792368(param_1,1,&uStack_58);
    uVar9 = uStack_58;
    if (0x7ffffffffffffff6 < uStack_58) goto LAB_001f5958;
    if (uStack_58 < 0x17) {
      uStack_78 = CONCAT17((char)uStack_58,(undefined7)uStack_78);
      pppppuVar5 = &pppppuStack_88;
    }
    else {
      uVar10 = (uStack_58 & 0x7ffffffffffffff8) + 8;
      uVar11 = 0x19;
      if (uVar10 != 0x18) {
        uVar11 = uVar10;
      }
      pppppuVar5 = (undefined8 *****)__Znwm(uVar11);
      uStack_78 = uVar11 | 0x8000000000000000;
      uStack_80 = uVar9;
      pppppuStack_88 = pppppuVar5;
    }
    _memmove(pppppuVar5,uVar4,uVar9);
    *(undefined1 *)((long)pppppuVar5 + uVar9) = 0;
    func_0x001d774c(&cStack_70,&pppppuStack_88,(int)dVar12);
    if ((long)uStack_78 < 0) {
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      __ZdlPv(pppppuStack_88);
      lVar8 = (long)cStack_59;
      if (lVar8 < 0) goto LAB_001f5128;
LAB_001f5104:
      if ((int)lVar8 != 0) {
        if (cStack_70 != '\0') {
          pcVar7 = &cStack_70;
          goto LAB_001f513c;
        }
        goto LAB_001f5aac;
      }
    }
    else {
      lVar8 = (long)cStack_59;
      if (-1 < lVar8) goto LAB_001f5104;
LAB_001f5128:
      if (lStack_68 != 0) {
        pcVar7 = (char *)CONCAT71(uStack_6f,cStack_70);
        if (*pcVar7 != '\0') {
LAB_001f513c:
          func_0x00792db8(param_1,pcVar7);
          if (cStack_59 < '\0') {
            __ZdlPv(CONCAT71(uStack_6f,cStack_70));
          }
          return 1;
        }
LAB_001f5aac:
        func_0x007a1b5c(param_1,"%s");
        goto LAB_001f5ac4;
      }
    }
  }
  pbVar6 = (byte *)(*pcRam0000000002075720)();
/* more drops soon - github.com/pengussy */
  if ((*pbVar6 & 1) == 0) {
    func_0x019d6f54();
  }
  pcStack_98 = (char *)(*pcRam0000000002075708)();
  if (*pcStack_98 == '\x01') {
    lVar8 = 0;
    uVar9 = 0x3768115060dcc888;
    do {
      uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar1 = (uint)(byte)pcStack_98[lVar8 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) -
              (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
      pcStack_98[lVar8 + 0x1a] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar11;
      uVar9 = lVar8 + -0x61c8864680b583eb +
              (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_98[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x19);
    *pcStack_98 = '\0';
  }
  pcStack_98 = pcStack_98 + 0x1a;
  func_0x0011ab24(&pcStack_98);
  func_0x007a1b5c(param_1,"%s");
LAB_001f5ac4:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1f5ac8);
  (*pcVar2)();
}

