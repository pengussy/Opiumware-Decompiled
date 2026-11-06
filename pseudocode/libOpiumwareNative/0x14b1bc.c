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
 *  file-id: 0x14b1bc:043051659b
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0014b1bc(long *param_1,undefined8 param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  char *pcStack_38;
  
  if (param_1[3] != 0) {
    return 0;
  }
  if ((*(byte *)(*(long *)(*param_1 + 0x38) + 0x38) & 3 ^ *param_3 & 0xb) != 3) {
    if (param_3[1] == 10) {
      lVar10 = *(long *)(param_3 + 0x20);
      if ((((lVar10 != 0) && (*(long *)(param_3 + 0x80) != 0)) && (*(long *)(lVar10 + 0x90) != 0))
         && (plVar5 = (long *)__ZNSt3__119__shared_weak_count4lockEv(*(long *)(lVar10 + 0x90)),
            plVar5 != (long *)0x0)) {
/* wm:donate: donate/README.md */
        if ((*(long *)(lVar10 + 0x88) != 0) && (param_1[1] == *(long *)(lVar10 + 0x88))) {
          param_1[2] = *(long *)(param_3 + 0x80);
        }
        LOAcquire();
        lVar10 = plVar5[1];
        plVar5[1] = lVar10 + -1;
        LORelease();
        if (lVar10 == 0) {
          (**(code **)(*plVar5 + 0x10))();
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
          return 0;
        }
      }
    }
    else if ((param_3[1] == 8) && (*(long *)(param_3 + 0x10) != 0)) {
      func_0x007911b0(*param_1,1);
      pbVar3 = (byte *)*param_1;
      if ((*pbVar3 >> 2 & 1) != 0) {
        func_0x0081b5c4(pbVar3,pbVar3,pbVar3 + 0x28);
        pbVar3 = (byte *)*param_1;
      }
      puVar7 = *(undefined8 **)(pbVar3 + 0x48);
      *puVar7 = *(undefined8 *)(param_3 + 0x10);
      *(undefined4 *)((long)puVar7 + 0xc) = 7;
      lVar10 = *param_1;
      *(long *)(lVar10 + 0x48) = *(long *)(lVar10 + 0x48) + 0x10;
      pbVar3 = (byte *)(*pcRam000000000206a350)();
      if ((*pbVar3 & 1) == 0) {
        func_0x019ca724();
/*  unlicensed copy if this notice is missing  */
      }
      pcStack_38 = (char *)(*pcRam000000000206a338)();
      if (*pcStack_38 == '\x01') {
        uVar1 = (byte)pcStack_38[1] ^ 0xfd8efe1e;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) + 0x2ec2f1fc;
        pcStack_38[8] = ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') + 0xb1 ^ 0xdd;
        uVar6 = (((ulong)(byte)pcStack_38[1] ^ 0x3f99ad597de6afe8) << 0x11 | 0x7f33) +
                0x9e3779b97f4a7c15;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[2] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
        pcStack_38[9] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[2]) << 0x11) + 0x9e3779b97f4a7c16;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[3] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
        pcStack_38[10] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[3]) << 0x11) + 0x9e3779b97f4a7c17;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[4] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
        pcStack_38[0xb] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[4]) << 0x11) + 0x9e3779b97f4a7c18;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[5] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
        pcStack_38[0xc] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[5]) << 0x11) + 0x9e3779b97f4a7c19;
        uVar8 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar8 = (uVar8 ^ uVar8 >> 0x21) * -0x3b314601e57a13ad;
        uVar9 = uVar8 ^ uVar8 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[6] ^ (uint)uVar9 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar9 >> 0x17);
        pcStack_38[0xd] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar8 >> 0x29) | 1) ^
             (byte)uVar9;
        uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_38[6]) << 0x11) + 0x9e3779b97f4a7c1a;
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
// thanks for reading - discord.gg/sdkhDjTex
        uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
        uVar8 = uVar6 ^ uVar6 >> 0x21;
        uVar1 = (uint)(byte)pcStack_38[7] ^ (uint)uVar8 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 5 & 7 | uVar1 << 3) - (int)(uVar8 >> 0x17);
        pcStack_38[0xe] =
             ((byte)(uVar1 >> 4) & 0xf | (char)uVar1 * '\x10') - ((byte)(uVar6 >> 0x29) | 1) ^
             (byte)uVar8;
        *pcStack_38 = '\0';
      }
      pcStack_38 = pcStack_38 + 8;
      uVar4 = func_0x0011ab24(&pcStack_38);
      iVar2 = func_0x00793714(lVar10,0xffffffff,uVar4);
      if (iVar2 == 9) {
        plVar5 = (long *)func_0x007926a8(*param_1,0xffffffff);
        if (plVar5 == (long *)0x0) {
          lVar10 = 0;
        }
        else {
          lVar10 = *plVar5;
        }
        func_0x00791660(*param_1,0xfffffffe);
        if (lVar10 == param_1[1]) {
/*  stripping the watermark breaks the license  */
          param_1[3] = *(long *)(param_3 + 0x10);
        }
      }
      else {
        func_0x00791660(*param_1,0xfffffffe);
      }
      func_0x00791660(*param_1,0xfffffffe);
    }
  }
  return 0;
}

