/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x7dfd8:21d0d19af4
 */

undefined8 FUN_0007dfd8(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcStack_50;
  char *pcStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  uVar3 = func_0x00791650();
  lVar10 = **(long **)(*(long *)(param_1 + 0x30) + 8);
  if (((*(char *)(lVar10 + 3) != '\0') && (*(code **)(lVar10 + 0x18) == FUN_0007dfd8)) &&
     (puVar4 = (undefined8 *)
               func_0x00884a20(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x618),0x208ecd2,0),
     *(int *)((long)puVar4 + 0xc) == 7)) {
    uStack_34 = 8;
    lStack_40 = lVar10;
    plVar5 = (long *)func_0x00884ab4(*puVar4,&lStack_40);
    if ((*(int *)((long)plVar5 + 0xc) == 8) && (lVar10 = *plVar5, lVar10 != 0)) {
      func_0x007911b0(param_1,0x14);
      if ((*param_1 >> 2 & 1) != 0) {
        func_0x0081b5c4(param_1,param_1,param_1 + 0x28);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
      }
      plVar5 = *(long **)(param_1 + 0x48);
      *plVar5 = lVar10;
      *(undefined4 *)((long)plVar5 + 0xc) = 8;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
      func_0x00791890(param_1,1);
      uVar11 = 0xffffffff;
      func_0x007948e0(param_1,uVar3,0xffffffff);
      bVar2 = param_1[3];
      if (((bVar2 != 1) && (bVar2 != 6)) && (bVar2 != 0x7f)) {
        uVar11 = func_0x00791650(param_1);
      }
      return uVar11;
    }
  }
  pbVar6 = (byte *)(*pcRam00000000020644d0)();
  if ((*pbVar6 & 1) == 0) goto LAB_0007e408;
  do {
    pcStack_48 = (char *)(*pcRam00000000020644b8)();
    if (*pcStack_48 == '\x01') {
      uVar1 = (byte)pcStack_48[1] ^ 0xbe997bee;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x31cad17e ^ 0x6e338d;
      pcStack_48[4] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - 0x2d;
      uVar7 = (((ulong)(byte)pcStack_48[1] ^ 0xb9c2f19b5ea67bf4) << 0x11 | 0x17385) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[2] ^ (uint)uVar9 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_48[5] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_48[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_48[3] ^ (uint)uVar8 ^ 0xffffffc3;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_48[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
      *pcStack_48 = '\0';
    }
    pcStack_48 = pcStack_48 + 4;
    uVar3 = func_0x0011ab24(&pcStack_48);
    pbVar6 = (byte *)(*pcRam0000000002064500)();
    if ((*pbVar6 & 1) == 0) {
      func_0x019bdb90();
    }
    pcStack_50 = (char *)(*pcRam00000000020644e8)();
    if (*pcStack_50 == '\x01') {
      lVar10 = 0;
      uVar7 = 0xda50bc78a6d90c73;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (((uint)(uVar8 >> 0x29) | 1) + (int)(uVar9 >> 0x17))
        ;
        pcStack_50[lVar10 + 0x30] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar9;
        uVar7 = lVar10 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x2f);
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 0x30;
    func_0x0011ab24(&pcStack_50);
    func_0x007a1b5c(param_1,uVar3);
LAB_0007e408:
    func_0x019bdb54();
  } while( true );
}

