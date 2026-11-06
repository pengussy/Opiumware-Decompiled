/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x42794:f96ffe0b96
 */

undefined8 FUN_00042794(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  char *pcStack_90;
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  char *pcStack_70;
  undefined4 uStack_68;
  undefined1 uStack_61;
  undefined4 *puStack_60;
  undefined8 uStack_58;
  
  lVar2 = lRam0000000002097030;
  if (lRam0000000002097030 == 0) {
    pbVar6 = (byte *)(*pcRam00000000020628b0)();
    if ((*pbVar6 & 1) == 0) goto LAB_0004325c;
    goto LAB_00043018;
  }
/* wm:if you paid for this, you were scammed */
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x60) = 8;
  uStack_58 = CONCAT44(uStack_58._4_4_,8);
  uVar4 = (*pcRam0000000001f26d48)(&uStack_58);
  *(ulong *)(*(long *)(param_1 + 0x20) + 0x80) = uVar4 | 0x3fffffffffff00;
  puVar5 = (undefined4 *)(*pcRam0000000001f26d50)(param_1);
  lVar8 = *(long *)(param_1 + 0x20);
  *puVar5 = *(undefined4 *)(lVar8 + 0x60);
  *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(lVar8 + 0x80);
  *(undefined1 *)
   (*(long *)(*(long *)(lVar8 + 0x18) + 0x10) + lRam0000000001f26810 + lRam0000000001f26830) = 1;
  unaff_x21 = func_0x00791650(lVar2);
  pbVar6 = (byte *)(*pcRam00000000020628e0)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019967c0();
  }
  unaff_x22 = -0xae502812aa7333;
  unaff_x23 = -0x3b314601e57a13ad;
  unaff_x24 = -0x61c8864680b583eb;
  unaff_x25 = 0x8ebc6af09c88c6e3;
  pcStack_70 = (char *)(*pcRam00000000020628c8)();
  if (*pcStack_70 == '\x01') {
    uVar1 = (byte)pcStack_70[1] ^ 0xc99bfb69;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xb0744bbd;
    pcStack_70[10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ 0xaa;
    uVar4 = (((ulong)(byte)pcStack_70[1] ^ 0x17b41b180cae8f7e) << 0x11 | 0x2f68) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_70[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_70[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[4] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_70[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[4]) << 0x11) + 0x9e3779b97f4a7c18;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[5] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_70[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[5]) << 0x11) + 0x9e3779b97f4a7c19;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    uVar1 = (uint)(byte)pcStack_70[6] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_70[0xf] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[6]) << 0x11) + 0x9e3779b97f4a7c1a;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[7] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_70[0x10] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[7]) << 0x11) + 0x9e3779b97f4a7c1b;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[8] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17))
    ;
    pcStack_70[0x11] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_70[8]) << 0x11) + 0x9e3779b97f4a7c1c;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_70[9] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
    pcStack_70[0x12] = ((byte)(uVar1 >> 1) & 0x7f | (char)uVar1 * -0x80) ^ (byte)uVar9;
    *pcStack_70 = '\0';
  }
  pcStack_70 = pcStack_70 + 10;
  uVar7 = func_0x0011ab24(&pcStack_70);
  func_0x007935a0(lVar2,0xffffd8ee,uVar7);
/*  unlicensed copy if this notice is missing  */
  pbVar6 = (byte *)(*pcRam0000000002062910)();
  if ((*pbVar6 & 1) == 0) {
    func_0x019967fc();
  }
  pcStack_78 = (char *)(*pcRam00000000020628f8)();
  if (*pcStack_78 == '\x01') {
    uVar1 = (byte)pcStack_78[1] ^ 0xa5a03950;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) + 0xd92f54c ^ 0x5abc9b;
    pcStack_78[5] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) + 0x6d;
    uVar4 = (((ulong)(byte)pcStack_78[1] ^ 0x2131ce11f089f4ab) << 0x11 | 0x4263) +
            0x9e3779b97f4a7c15;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[2] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
    pcStack_78[6] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[2]) << 0x11) + 0x9e3779b97f4a7c16;
    uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
    uVar10 = uVar9 ^ uVar9 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[3] ^ (uint)uVar10 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
/* donate: donate/README.md */
    pcStack_78[7] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
    uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_78[3]) << 0x11) + 0x9e3779b97f4a7c17;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
    uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
    uVar9 = uVar4 ^ uVar4 >> 0x21;
    uVar1 = (uint)(byte)pcStack_78[4] ^ (uint)uVar9 ^ 0xffffffc3;
    uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar4 >> 0x29) | 1);
    pcStack_78[8] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar9;
    *pcStack_78 = '\0';
  }
  pcStack_78 = pcStack_78 + 5;
  uVar7 = func_0x0011ab24(&pcStack_78);
  func_0x007935a0(lVar2,0xffffffff,uVar7);
  pbVar6 = (byte *)(*pcRam0000000002062940)();
  if ((*pbVar6 & 1) == 0) {
    func_0x01996838();
  }
  pcStack_80 = (char *)(*pcRam0000000002062928)();
  if (*pcStack_80 == '\x01') {
    lVar8 = 0;
    uVar4 = 0x84b729540345473b;
    do {
      uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
      uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
      uVar10 = uVar9 ^ uVar9 >> 0x21;
      uVar1 = (uint)(byte)pcStack_80[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar10 >> 0x17);
      pcStack_80[lVar8 + 0xf] =
           ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') - ((byte)(uVar9 >> 0x29) | 1) ^
           (byte)uVar10;
      uVar4 = lVar8 + -0x61c8864680b583eb +
              (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_80[lVar8 + 1]) << 0x11);
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0xe);
    *pcStack_80 = '\0';
  }
  pcStack_80 = pcStack_80 + 0xf;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
  uVar7 = func_0x0011ab24(&pcStack_80);
  func_0x00792f00(lVar2,uVar7);
  iVar3 = func_0x00794a14(lVar2,1,1,0);
  if (iVar3 == 0) {
    uVar7 = func_0x00796158(lVar2,0xffffffff);
    func_0x00791660(lVar2,unaff_x21);
    uStack_68 = func_0x0003e154(8);
    puStack_60 = &uStack_68;
    uStack_58 = 0x2097098;
    lVar8 = func_0x0016dfd4(&uStack_58,&uStack_68,&UNK_01bd2568,&puStack_60,&uStack_61);
    *(int *)(lVar8 + 0x14) = (int)uVar7;
    func_0x00792bf4(param_1,uStack_68);
    func_0x00042664(param_1,lVar2,uVar7);
    return 2;
  }
  do {
    func_0x00791660(lVar2,unaff_x21);
    pbVar6 = (byte *)(*pcRam0000000002062970)();
    if ((*pbVar6 & 1) == 0) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      func_0x01996874();
    }
    pcStack_88 = (char *)(*pcRam0000000002062958)();
    if (*pcStack_88 == '\x01') {
      lVar8 = 0;
      uVar4 = (unaff_x25 ^ 0xb40ee6dd5ec9eb77 ^ (unaff_x25 ^ 0xb40ee6dd5ec9eb77) >> 0x21) *
              unaff_x22;
      uVar4 = (uVar4 ^ uVar4 >> 0x21) * unaff_x23;
      uVar4 = uVar4 ^ uVar4 >> 0x21;
      do {
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * unaff_x22;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * unaff_x23;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_88[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar10 >> 0x17) ^ ((uint)(uVar9 >> 0x29) | 1);
        pcStack_88[lVar8 + 0x28] = ((byte)(uVar1 >> 4) & 0xf | (byte)(uVar1 << 4)) - (char)uVar10;
        uVar4 = lVar8 + unaff_x24 + (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_88[lVar8 + 1]) << 0x11);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x27);
      *pcStack_88 = '\0';
    }
    pcStack_88 = pcStack_88 + 0x28;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    func_0x0011ab24(&pcStack_88);
    func_0x007a1b5c(param_1,"%s");
LAB_0004325c:
    func_0x019968b0();
LAB_00043018:
    pcStack_90 = (char *)(*pcRam0000000002062898)();
    if (*pcStack_90 == '\x01') {
      lVar8 = 0;
      uVar4 = 0xf8b656feb85f727b;
      do {
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_90[lVar8 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar10 >> 0x17) ^
                ((uint)(uVar9 >> 0x29) | 1);
/* WM - keep the notice, keep the source honest */
        pcStack_90[lVar8 + 0x28] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar10;
        uVar4 = lVar8 + -0x61c8864680b583eb +
                (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_90[lVar8 + 1]) << 0x11);
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x27);
      *pcStack_90 = '\0';
    }
    pcStack_90 = pcStack_90 + 0x28;
    func_0x0011ab24(&pcStack_90);
    func_0x007a1b5c(param_1,"%s");
  } while( true );
}

