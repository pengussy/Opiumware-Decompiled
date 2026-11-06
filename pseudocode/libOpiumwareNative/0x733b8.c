/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x733b8:bb6e4b5ba9
 */

undefined8 FUN_000733b8(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *pcStack_50;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  iVar2 = func_0x00791be4(param_1,1);
  if (iVar2 != 8) {
    pbVar7 = (byte *)(*pcRam0000000002063c90)();
    if ((*pbVar7 & 1) == 0) goto LAB_00073a28;
    do {
/* found on a paste site? it was re-uploaded illegally */
      pcStack_50 = (char *)(*pcRam0000000002063c78)();
      if (*pcStack_50 == '\x01') {
        uVar1 = (byte)pcStack_50[1] ^ 0x86d24f22;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0x75a84ef;
        pcStack_50[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xe1;
        uVar4 = (((ulong)(byte)pcStack_50[1] ^ 0x32cb2baf0699dbe4) << 0x11 | 0x6596) +
                0x9e3779b97f4a7c15;
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[4] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
/* wm:found on a paste site? it was re-uploaded illegally */
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[5] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[6] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[7] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
/* stripping the watermark breaks the license */
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[7]) << 0x11) + 0x9e3779b97f4a7c1b;
        uVar9 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
        uVar10 = uVar9 ^ uVar9 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[8] ^ (uint)uVar10 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar9 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
        pcStack_50[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
        uVar4 = (uVar4 >> 0x2f | (uVar4 ^ (byte)pcStack_50[8]) << 0x11) + 0x9e3779b97f4a7c1c;
        uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0xae502812aa7333;
        uVar4 = (uVar4 ^ uVar4 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar4 ^ uVar4 >> 0x21;
        uVar1 = (uint)(byte)pcStack_50[9] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                (((uint)(uVar4 >> 0x29) | 1) + (int)(uVar9 >> 0x17));
        pcStack_50[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar9;
        *pcStack_50 = '\0';
      }
      pcStack_50 = pcStack_50 + 10;
      uVar8 = func_0x0011ab24(&pcStack_50);
      func_0x007a1ba8(param_1,1,uVar8);
LAB_00073a28:
      func_0x019bcf24();
    } while( true );
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
  }
  puVar3 = (undefined8 *)func_0x00790f58(param_1,1);
  uVar4 = func_0x0006a414(param_1,*puVar3);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  func_0x00796158(param_1,1);
  plVar5 = (long *)func_0x00790f58(param_1,1);
  lVar11 = *plVar5;
  lStack_48 = lVar11;
  lStack_40 = lVar11;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar6 = func_0x001393dc(0x20970c0,&lStack_40);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (*(char *)(lStack_40 + 3) == '\0') {
    func_0x0079640c(param_1,1);
    return 1;
  }
  if ((*(undefined **)(lStack_40 + 0x18) == &DAT_000704e0) && (lVar6 != 0)) {
    __ZNSt3__15mutex4lockEv(0x1f26c70);
    lVar6 = func_0x001393dc(0x20970c0,&lStack_48);
    if (lVar6 == 0) {
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x18);
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
      if (lVar6 != 0) {
        func_0x007930d0(param_1,&DAT_000704e0,0,0,&DAT_0007069c);
        func_0x00796158(param_1,0xffffffff);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        puVar3 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
        func_0x00073254(param_1,*puVar3,lVar6);
        return 1;
      }
    }
    func_0x00792a48(param_1);
    return 1;
  }
  if ((*(char *)(lVar11 + 3) != '\0') &&
     ((*(undefined **)(lVar11 + 0x18) == &DAT_0007dfd8 &&
      (puVar3 = (undefined8 *)
                func_0x00884a20(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x618),0x208ecd2,0),
      *(int *)((long)puVar3 + 0xc) == 7)))) {
    uStack_34 = 8;
    lStack_40 = lVar11;
    plVar5 = (long *)func_0x00884ab4(*puVar3,&lStack_40);
    if (*(int *)((long)plVar5 + 0xc) == 8) {
      lVar6 = *plVar5;
      func_0x007965c4(param_1,1);
      if (lVar6 == 0) {
        return 1;
      }
      puVar3 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
      func_0x00070a14(param_1,*puVar3,lVar6);
      return 1;
    }
  }
  func_0x007965c4(param_1,1);
/* WM - proprietary - see LICENSE - do not sell */
  return 1;
}

