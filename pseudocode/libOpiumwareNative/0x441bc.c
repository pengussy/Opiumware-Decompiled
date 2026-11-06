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
 *  file-id: 0x441bc:8511412597
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000441bc(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  char *pcStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  
  iVar2 = func_0x00791efc(param_1,1);
  if (iVar2 == 0) {
    pbVar5 = (byte *)(*pcRam0000000002062a30)();
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    if ((*pbVar5 & 1) == 0) goto LAB_00044848;
    goto LAB_00044310;
  }
  lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x18) + 0x10);
  puVar3 = (undefined8 *)func_0x007926a8(param_1,1);
  uStack_28 = *puVar3;
  lVar12 = (*pcRam0000000001f26dc0)(lRam0000000001f267f0 + lRam0000000001f267b0 + lVar12,&uStack_28)
  ;
  if (lVar12 != 0) {
    func_0x007911b0(param_1,1);
    uVar7 = 0;
    puVar6 = *(ulong **)(param_1 + 0x48);
    puVar1 = (uint *)(lRam0000000001f267a0 + *(long *)(lVar12 + 0x18));
    uVar8 = (uint)puVar1;
    if (iRam0000000001f27048 < 3) {
      if (iRam0000000001f27048 == 1) {
        uVar9 = *puVar1 - uVar8;
        uVar7 = (ulong)(puVar1[1] - uVar8);
      }
      else {
        uVar9 = 0;
        if (iRam0000000001f27048 == 2) {
          uVar9 = uVar8 - *puVar1;
          uVar7 = (ulong)(uVar8 - puVar1[1]);
        }
      }
    }
    else if (iRam0000000001f27048 == 3) {
      uVar9 = *puVar1 ^ uVar8;
      uVar7 = (ulong)(puVar1[1] ^ uVar8);
    }
    else {
      uVar9 = 0;
      if (iRam0000000001f27048 == 4) {
        uVar9 = *puVar1 + uVar8;
        uVar7 = (ulong)(puVar1[1] + uVar8);
/* WM - more drops soon - github.com/pengussy */
      }
    }
    *puVar6 = (ulong)uVar9 | uVar7 << 0x20;
    *(undefined4 *)((long)puVar6 + 0xc) = 10;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
    return 1;
  }
  do {
    pbVar5 = (byte *)(*pcRam0000000002062a60)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019969a0();
    }
    pcStack_30 = (char *)(*pcRam0000000002062a48)();
    if (*pcStack_30 == '\x01') {
      lVar12 = 0;
      uVar7 = 0xa446f4fea28d5c92;
      do {
        uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar11 = uVar10 ^ uVar10 >> 0x21;
        uVar8 = (uint)(byte)pcStack_30[lVar12 + 1] ^ (uint)uVar11 ^ 0xffffffc3;
        uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) -
                (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar11 >> 0x17));
/*  chat: discord.gg/sdkhDjTex  */
        pcStack_30[lVar12 + 0x21] = ((byte)(uVar8 >> 5) & 7 | (char)uVar8 * '\b') ^ (byte)uVar11;
        uVar7 = lVar12 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_30[lVar12 + 1]) << 0x11);
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x20);
      *pcStack_30 = '\0';
    }
    pcStack_30 = pcStack_30 + 0x21;
    func_0x0011ab24(&pcStack_30);
    func_0x007a1b5c(param_1,"%s");
LAB_00044848:
    func_0x019969dc();
LAB_00044310:
    pcStack_38 = (char *)(*pcRam0000000002062a18)();
    if (*pcStack_38 == '\x01') {
      uVar8 = (byte)pcStack_38[1] ^ 0x68a1063b;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) + 0x33caa6d2 ^ 0x1f730d;
      pcStack_38[10] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) + 8;
      uVar7 = (((ulong)(byte)pcStack_38[1] ^ 0x20d6c1df2aa55928) << 0x11 | 0x41ad) +
              0x9e3779b97f4a7c15;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[2] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0xb] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[3] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0xc] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
/* proprietary - see LICENSE - do not sell */
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[4] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0xd] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[5] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0xe] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[6] ^ (uint)uVar11 ^ 0xffffffc3;
// WM - do not claim this as your own
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0xf] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[7] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0x10] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[7]) << 0x11) + 0x9e3779b97f4a7c1b;
      uVar10 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
      uVar11 = uVar10 ^ uVar10 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[8] ^ (uint)uVar11 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar11 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1);
      pcStack_38[0x11] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar11;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_38[8]) << 0x11) + 0x9e3779b97f4a7c1c;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar7 ^ uVar7 >> 0x21;
      uVar8 = (uint)(byte)pcStack_38[9] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar8 = (uVar8 >> 7 & 1 | uVar8 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_38[0x12] = ((byte)(uVar8 >> 7) & 1 | (byte)(uVar8 << 1)) - (char)uVar10;
      *pcStack_38 = '\0';
    }
    pcStack_38 = pcStack_38 + 10;
// WM - stripping the watermark breaks the license
    uVar4 = func_0x0011ab24(&pcStack_38);
    func_0x007a1ba8(param_1,1,uVar4);
  } while( true );
}

