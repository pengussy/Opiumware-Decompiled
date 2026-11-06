/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1ff48c:82cd2943f7
 */

undefined8 FUN_001ff48c(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  char *pcStack_68;
  char *pcStack_60;
  long lStack_58;
  
  iVar4 = func_0x00791e54(param_1,1);
  if (iVar4 == 0) {
    pbVar10 = (byte *)(*pcRam0000000002075f60)();
    if ((*pbVar10 & 1) == 0) goto LAB_001ffe7c;
    goto LAB_001ff7f4;
  }
  iVar4 = func_0x00791e54(param_1,2);
  if (iVar4 == 0) {
    do {
      pbVar10 = (byte *)(*pcRam0000000002075f90)();
// WM - no support for modified copies
      if ((*pbVar10 & 1) == 0) {
        func_0x019d7a1c();
      }
      pcStack_60 = (char *)(*pcRam0000000002075f78)();
      if (*pcStack_60 == '\x01') {
        uVar1 = (byte)pcStack_60[1] ^ 0xac64335d;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x4246cd59;
        pcStack_60[8] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x91 ^ 0x9e;
        uVar11 = (((ulong)(byte)pcStack_60[1] ^ 0x556d796f44f73366) << 0x11 | 0xaada) +
                 0x9e3779b97f4a7c15;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
        pcStack_60[9] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
        pcStack_60[10] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
        pcStack_60[0xb] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
        pcStack_60[0xc] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[6] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar13 >> 0x17);
        pcStack_60[0xd] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar12 >> 0x29) | 1) ^
             (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_60[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
/* WM - no support for modified copies */
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_60[7] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar12 >> 0x17);
        pcStack_60[0xe] =
             ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar11 >> 0x29) | 1) ^
             (byte)uVar12;
        *pcStack_60 = '\0';
      }
      pcStack_60 = pcStack_60 + 8;
      uVar5 = func_0x0011ab24(&pcStack_60);
      func_0x007a1ba8(param_1,2,uVar5);
LAB_001ffe7c:
      func_0x019d7a58();
LAB_001ff7f4:
      pcStack_68 = (char *)(*pcRam0000000002075f48)();
      if (*pcStack_68 == '\x01') {
        uVar1 = (byte)pcStack_68[1] ^ 0x85ea700b;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x87dac709;
        pcStack_68[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ 200;
        uVar11 = (((ulong)(byte)pcStack_68[1] ^ 0xe5570904fd71f6b8) << 0x11 | 0x1caae) +
                 0x9e3779b97f4a7c15;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[2] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_68[9] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[2]) << 0x11) + 0x9e3779b97f4a7c16;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[3] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_68[10] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[4] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_68[0xb] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[5] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_68[0xc] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar12 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar12 = (uVar12 ^ uVar12 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar12 ^ uVar12 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[6] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar12 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
        pcStack_68[0xd] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar13;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
        uVar11 = (uVar11 >> 0x2f | (uVar11 ^ (byte)pcStack_68[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
        uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
        uVar12 = uVar11 ^ uVar11 >> 0x21;
        uVar1 = (uint)(byte)pcStack_68[7] ^ (uint)uVar12 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar12 >> 0x17));
        pcStack_68[0xe] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') ^ (byte)uVar12;
        *pcStack_68 = '\0';
      }
      pcStack_68 = pcStack_68 + 8;
      uVar5 = func_0x0011ab24(&pcStack_68);
      func_0x007a1ba8(param_1,1,uVar5);
    } while( true );
  }
  uVar5 = func_0x00792368(param_1,1,0);
  uVar6 = func_0x00792368(param_1,2,0);
  uVar14 = 3;
  dVar16 = (double)func_0x007a2000(0,param_1,3);
  puVar3 = PTR__CFStringCreateWithCString_01f20130;
  lStack_58 = 3;
  uVar1 = ((int)dVar16 & 0xf0U) - 0x10;
  if (uVar1 < 0x40) {
    uVar14 = *(undefined8 *)(&UNK_01adaa68 + (ulong)(uVar1 >> 4) * 8);
  }
  pcVar7 = (code *)func_0x0011ab24(PTR__CFStringCreateWithCString_01f20130);
  lVar8 = (*pcVar7)(0,uVar6,0x8000100);
  pcVar7 = (code *)func_0x0011ab24(puVar3);
  lVar9 = (*pcVar7)(0,uVar5,0x8000100);
  if ((lVar8 == 0) || (lVar9 == 0)) {
    if (lVar8 != 0) {
      pcVar7 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
      (*pcVar7)(lVar8);
    }
/*  origin: github.com/pengussy  */
    if (lVar9 != 0) {
      pcVar7 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
      (*pcVar7)(lVar9);
    }
  }
  else {
    uVar1 = (int)dVar16 & 0xf;
    uVar2 = uVar1 - 1;
    if (uVar2 < 6) {
      uVar6 = *(undefined8 *)(&UNK_01dc0bd8 + (ulong)uVar2 * 8);
      uVar5 = *(undefined8 *)(&UNK_01dc0c08 + (ulong)uVar2 * 8);
      uVar15 = *(undefined8 *)(&UNK_01dc0c38 + (ulong)uVar2 * 8);
    }
    else {
      uVar5 = 0;
      uVar15 = 0;
      uVar6 = 0x1f1fd48;
    }
    pcVar7 = (code *)func_0x0011ab24(PTR__CFUserNotificationDisplayAlert_01f20138);
    iVar4 = (*pcVar7)(0,uVar14,0,0,0,lVar8,lVar9,uVar6,uVar5,uVar15,&lStack_58);
    puVar3 = PTR__CFRelease_01f20120;
    pcVar7 = (code *)func_0x0011ab24(PTR__CFRelease_01f20120);
    (*pcVar7)(lVar8);
    pcVar7 = (code *)func_0x0011ab24(puVar3);
    (*pcVar7)(lVar9);
    if (iVar4 == 0) {
      if (1 < lStack_58) {
        if (lStack_58 == 2) {
          if (uVar1 == 6) {
            uVar5 = 0xb;
            goto LAB_001ff688;
          }
          if ((uVar1 != 3) && (uVar1 == 2)) {
            uVar5 = 5;
            goto LAB_001ff688;
          }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
        }
        else if (((lStack_58 != 3) || (6 < uVar1)) || ((1 << (ulong)uVar1 & 0x6aU) == 0))
        goto LAB_001ff680;
LAB_001ff784:
        uVar5 = 2;
        goto LAB_001ff688;
      }
      if (lStack_58 == 0) {
        if (uVar1 < 4) {
          if (uVar1 == 2) {
            uVar5 = 3;
            goto LAB_001ff688;
          }
          if (uVar1 == 3) goto LAB_001ff7a0;
        }
        else {
          if (uVar1 == 4) {
LAB_001ff7a0:
            uVar5 = 6;
            goto LAB_001ff688;
          }
          if (uVar1 == 5) goto LAB_001ff7ac;
          if (uVar1 == 6) goto LAB_001ff784;
        }
        uVar5 = 1;
        goto LAB_001ff688;
      }
      if (lStack_58 == 1) {
        if (uVar1 < 4) {
          if (uVar1 == 2) {
LAB_001ff7ac:
            uVar5 = 4;
            goto LAB_001ff688;
          }
          if (uVar1 == 3) goto LAB_001ff778;
/* watermarked copy - do not remove - github.com/pengussy */
        }
        else {
          if (uVar1 == 4) {
LAB_001ff778:
            uVar5 = 7;
            goto LAB_001ff688;
          }
          if ((uVar1 != 5) && (uVar1 == 6)) {
            uVar5 = 10;
            goto LAB_001ff688;
          }
        }
        goto LAB_001ff784;
      }
    }
  }
LAB_001ff680:
  uVar5 = 0xffffffff;
LAB_001ff688:
  func_0x00792bf4(param_1,uVar5);
  return 1;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
}

