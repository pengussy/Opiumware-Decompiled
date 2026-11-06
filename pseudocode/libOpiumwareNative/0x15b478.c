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
 *  file-id: 0x15b478:b09d63823f
 *  --------------------------------------------------------------------------*/

void FUN_0015b478(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcStack_58;
  char *pcStack_50;
  long lStack_48;
  long lStack_40;
  undefined4 uStack_34;
  
  uVar2 = func_0x00791624();
  plVar3 = (long *)func_0x00790f58(param_1,uVar2);
  lVar10 = *plVar3;
  lStack_48 = lVar10;
  if (*(undefined **)(lVar10 + 0x18) != &DAT_000704e0) {
    func_0x007965c4(param_1,uVar2);
    if (((*(char *)(lVar10 + 3) != '\0') && (*(undefined **)(lVar10 + 0x18) == &DAT_0007dfd8)) &&
       (puVar4 = (undefined8 *)
                 func_0x00884a20(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x618),0x208ecd2,0),
       *(int *)((long)puVar4 + 0xc) == 7)) {
      uStack_34 = 8;
      lStack_40 = lVar10;
      plVar3 = (long *)func_0x00884ab4(*puVar4,&lStack_40);
      if ((*(int *)((long)plVar3 + 0xc) == 8) && (lVar10 = *plVar3, lVar10 != 0)) {
        puVar4 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
        FUN_00070a14(param_1,*puVar4,lVar10);
        return;
      }
    }
    return;
/*  unlicensed copy if this notice is missing  */
  }
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar10 = func_0x001393dc(0x20970c0,&lStack_48);
  if (lVar10 == 0) {
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x18);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if (lVar10 != 0) {
      func_0x007911b0(param_1,2);
      plVar3 = *(long **)(param_1 + 0x48);
      *plVar3 = lVar10;
      *(undefined4 *)((long)plVar3 + 0xc) = 8;
      *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
      func_0x007930d0(param_1,&DAT_0015b9a8,0,1,&DAT_0007069c);
      puVar4 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
/* WM - donate: donate/README.md */
      pbVar5 = (byte *)*puVar4;
      pbVar6 = *(byte **)(lStack_48 + 0x10);
      *(byte **)(pbVar5 + 0x10) = pbVar6;
      if ((*pbVar5 >> 2 & 1) == 0) {
        return;
      }
      if ((*pbVar6 & 3) == 0) {
        return;
      }
      func_0x0081b3dc(param_1);
      return;
    }
  }
  pbVar5 = (byte *)(*pcRam000000000206e8b0)();
  if ((*pbVar5 & 1) == 0) goto LAB_0015b958;
  do {
    pcStack_50 = (char *)(*pcRam000000000206e898)();
    if (*pcStack_50 == '\x01') {
      uVar1 = (byte)pcStack_50[1] ^ 0x7c367d9;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xb944e610 ^ 0x4851af;
      pcStack_50[4] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - 0x1a;
      uVar7 = (((ulong)(byte)pcStack_50[1] ^ 0xc68c708427aba4c4) << 0x11 | 0x18d18) +
              0x9e3779b97f4a7c15;
      uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
      uVar9 = uVar8 ^ uVar8 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[2] ^ (uint)uVar9 ^ 0xffffffc3;
/* stripping the watermark breaks the license */
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar9 >> 0x17) ^ ((uint)(uVar8 >> 0x29) | 1);
      pcStack_50[5] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar9;
      uVar7 = (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_50[2]) << 0x11) + 0x9e3779b97f4a7c16;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
      uVar7 = (uVar7 ^ uVar7 >> 0x21) * -0x3b314601e57a13ad;
      uVar8 = uVar7 ^ uVar7 >> 0x21;
      uVar1 = (uint)(byte)pcStack_50[3] ^ (uint)uVar8 ^ 0xffffffc3;
      uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar8 >> 0x17) ^ ((uint)(uVar7 >> 0x29) | 1);
      pcStack_50[6] = ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar8;
      *pcStack_50 = '\0';
    }
    pcStack_50 = pcStack_50 + 4;
    uVar2 = func_0x0011ab24(&pcStack_50);
    pbVar5 = (byte *)(*pcRam000000000206e8e0)();
    if ((*pbVar5 & 1) == 0) {
      func_0x019cab98();
    }
    pcStack_58 = (char *)(*pcRam000000000206e8c8)();
// stripping the watermark breaks the license
    if (*pcStack_58 == '\x01') {
      lVar10 = 0;
      uVar7 = 0xf99c50a63781d80b;
      do {
        uVar8 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_58[lVar10 + 1] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 2 & 0x3f | uVar1 << 6) - (int)(uVar9 >> 0x17);
        pcStack_58[lVar10 + 0x2b] =
             ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar7 = lVar10 + -0x61c8864680b583eb +
                (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_58[lVar10 + 1]) << 0x11);
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x2a);
      *pcStack_58 = '\0';
    }
    pcStack_58 = pcStack_58 + 0x2b;
    func_0x0011ab24(&pcStack_58);
    func_0x007a1b5c(param_1,uVar2);
LAB_0015b958:
    func_0x019cab5c();
  } while( true );
}

