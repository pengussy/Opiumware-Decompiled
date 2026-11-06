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
 *  file-id: 0x74d5c:83ae3e945c
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00074d5c(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  char *pcStack_90;
  char *pcStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  long lStack_50;
  long lStack_48;
  
  iVar4 = func_0x00791be4(param_1,1);
  if (iVar4 != 8) {
    pbVar7 = (byte *)(*pcRam0000000002063d80)();
    if ((*pbVar7 & 1) == 0) goto LAB_000757f4;
    goto LAB_00074ffc;
  }
  iVar4 = func_0x00791be4(param_1,2);
  if (iVar4 != 8) {
    do {
      pbVar7 = (byte *)(*pcRam0000000002063db0)();
      if ((*pbVar7 & 1) == 0) {
// WM - thanks for reading - discord.gg/sdkhDjTex
        func_0x019bd08c();
      }
      pcStack_90 = (char *)(*pcRam0000000002063d98)();
      if (*pcStack_90 == '\x01') {
        uVar1 = (byte)pcStack_90[1] ^ 0x435c9dc1;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0x203298;
        pcStack_90[10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ 2;
        uVar9 = (((ulong)(byte)pcStack_90[1] ^ 0x7e87ade3adee5b90) << 0x11 | 0xfd0f) +
                0x9e3779b97f4a7c15;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_90[0xb] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_90[0xc] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
/* unlicensed copy if this notice is missing - github.com/pengussy */
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_90[0xd] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_90[0xe] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_90[0xf] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
/* chat: discord.gg/sdkhDjTex */
        uVar1 = (uint)(byte)pcStack_90[7] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_90[0x10] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[8] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
        pcStack_90[0x11] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_90[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[9] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_90[0x12] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') ^ (byte)uVar10;
        *pcStack_90 = '\0';
      }
/* WM - donate: donate/README.md */
      pcStack_90 = pcStack_90 + 10;
      uVar8 = func_0x0011ab24(&pcStack_90);
      func_0x007a1ba8(param_1,2,uVar8);
LAB_000757f4:
      func_0x019bd050();
LAB_00074ffc:
      pcStack_88 = (char *)(*pcRam0000000002063d68)();
      if (*pcStack_88 == '\x01') {
        uVar1 = (byte)pcStack_88[1] ^ 0xce6f5876;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x1ee9eb9d ^ 0x17845;
        pcStack_88[10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) + 0x4b;
        uVar9 = (((ulong)(byte)pcStack_88[1] ^ 0xaa4a5396fd0bbcfa) << 0x11 | 0x15494) +
                0x9e3779b97f4a7c15;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
/* wm:proprietary - see LICENSE - do not sell */
        ;
        pcStack_88[0xb] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_88[0xc] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_88[0xd] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_88[0xe] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_88[0xf] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/* watermarked copy - do not remove */
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_88[0x10] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar10 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_88[0x11] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar11;
        uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar10 ^ 0xffffffc3;
/* proprietary - see LICENSE - do not sell */
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
        pcStack_88[0x12] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar10;
        *pcStack_88 = '\0';
      }
      pcStack_88 = pcStack_88 + 10;
      uVar8 = func_0x0011ab24(&pcStack_88);
      func_0x007a1ba8(param_1,1,uVar8);
    } while( true );
  }
  plVar5 = (long *)func_0x00790f58(param_1,1);
  lVar13 = *plVar5;
  lStack_48 = lVar13;
  plVar5 = (long *)func_0x00790f58(param_1,2);
  lVar12 = *plVar5;
  lStack_68 = lVar13;
  lStack_50 = lVar12;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar6 = func_0x001393dc(0x20970c0,&lStack_68);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if ((*(char *)(lStack_68 + 3) == '\0') ||
     (*(undefined **)(lStack_68 + 0x18) != &DAT_000704e0 || lVar6 == 0)) {
    cVar2 = *(char *)(lStack_68 + 3) != '\0';
  }
  else {
    cVar2 = '\x02';
  }
  lStack_68 = lVar12;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar6 = func_0x001393dc(0x20970c0,&lStack_68);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (((*(char *)(lStack_68 + 3) == '\0') || (*(undefined **)(lStack_68 + 0x18) != &DAT_000704e0))
     || (lVar6 == 0)) {
    if ((bool)cVar2 == (*(char *)(lStack_68 + 3) != '\0')) goto LAB_00074e94;
/* wm:donate: donate/README.md */
  }
  else if (cVar2 == '\x02') {
LAB_00074e94:
    if (cVar2 == '\x01') {
      if (*(long *)(lVar13 + 0x18) == *(long *)(lVar12 + 0x18)) {
        bVar3 = (*(ulong *)(lVar13 + 0x20) ^ (ulong)(lVar13 + 0x20)) ==
                (*(ulong *)(lVar12 + 0x20) ^ (ulong)(lVar12 + 0x20));
      }
      else {
        bVar3 = false;
      }
      goto LAB_00074fc4;
    }
    if (cVar2 == '\0') {
      func_0x0006fe5c(&lStack_68,*(undefined8 *)(lVar13 + 0x18));
      func_0x0006fe5c(&lStack_80,*(undefined8 *)(lVar12 + 0x18));
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      if (lStack_60 - lStack_68 == lStack_78 - lStack_80) {
        iVar4 = _memcmp();
        bVar3 = iVar4 == 0;
      }
      else {
        bVar3 = false;
      }
      func_0x007932d0(param_1,bVar3);
      if (lStack_80 != 0) {
        lStack_78 = lStack_80;
        __ZdlPv();
      }
      if (lStack_68 == 0) {
        return 1;
      }
      lStack_60 = lStack_68;
      __ZdlPv();
      return 1;
    }
    __ZNSt3__15mutex4lockEv(0x1f26c70);
    lVar12 = func_0x001393dc(0x20970c0,&lStack_48);
    lVar13 = func_0x001393dc(0x20970c0,&lStack_50);
    lVar6 = 0;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if (lVar12 != 0) {
      lVar6 = *(long *)(lVar12 + 0x18);
    }
    if (lVar13 == 0) {
      lVar12 = 0;
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
    }
    else {
      lVar12 = *(long *)(lVar13 + 0x18);
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
    }
    if ((lVar6 != 0) && (lVar12 != 0)) {
      bVar3 = lVar6 == lVar12;
      goto LAB_00074fc4;
    }
  }
  bVar3 = false;
LAB_00074fc4:
  func_0x007932d0(param_1,bVar3);
  return 1;
}

