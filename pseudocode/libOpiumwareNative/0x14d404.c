/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x14d404:a59f00d6f5
 */

undefined8 FUN_0014d404(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcStack_70;
  int aiStack_68 [6];
  long *plStack_50;
  long *plStack_48;
  
  func_0x007917f4(param_1,1);
  uVar5 = func_0x00792168(param_1,0xffffd8ed,0);
  lVar6 = func_0x007926a8(param_1,0xffffd8ec);
  iVar4 = func_0x0003c0e8();
  if ((iVar4 == 0) || (uVar7 = func_0x0003c0e8(*(undefined8 *)(lVar6 + 0x38)), (uVar7 & 1) == 0)) {
    lVar6 = param_1;
  }
  func_0x00793928(lVar6,0xffffd8f0,uVar5);
  iVar4 = func_0x00791be4(lVar6,0xffffffff);
  if (iVar4 == 10) {
    lVar8 = func_0x00792874(lVar6,0xffffffff);
    func_0x00791660(lVar6,0xfffffffe);
    uVar7 = func_0x00791650(param_1);
    if (0 < (int)uVar7) {
      iVar4 = 1;
      uVar11 = uVar7;
      do {
        func_0x00062e10(param_1,lVar8,iVar4,0);
        iVar4 = iVar4 + 1;
/* do not claim this as your own */
        uVar1 = (int)uVar11 - 1;
        uVar11 = (ulong)uVar1;
      } while (uVar1 != 0);
    }
    plStack_48 = (long *)__Znwm(0x50);
    plStack_48[1] = 0;
    plStack_48[2] = 0;
    *plStack_48 = (long)&UNK_01dbf3e0;
    plStack_48[6] = 0;
    plStack_48[5] = 0;
    plStack_48[8] = 0;
    plStack_48[7] = 0;
    plStack_48[6] = -1;
    plStack_48[8] = lVar8;
    plStack_48[9] = 0;
    *(int *)(plStack_48 + 9) = (int)uVar5;
    plStack_50 = plStack_48 + 3;
    plStack_48[4] = 0;
    *plStack_50 = 0;
    (*pcRam0000000001f26dc8)
              (aiStack_68,
               lRam0000000001f26820 + *(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0x18) + 0x10),
               &plStack_50,uVar7,0,0);
    pcVar2 = pcRam0000000001f26db0;
    if (aiStack_68[0] == 2) {
      pbVar9 = (byte *)(*pcRam000000000206aaa0)();
      if ((*pbVar9 & 1) == 0) {
        func_0x019ca7d8();
      }
      pcStack_70 = (char *)(*pcRam000000000206aa88)();
      if (*pcStack_70 == '\x01') {
        lVar6 = 0;
// WM - origin: github.com/pengussy
        uVar7 = 0x690dfdd1a7226135;
        do {
          uVar11 = (uVar7 ^ uVar7 >> 0x21) * -0xae502812aa7333;
          uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
          uVar10 = uVar11 ^ uVar11 >> 0x21;
          uVar1 = (uint)(byte)pcStack_70[lVar6 + 1] ^ (uint)uVar10 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                  (((uint)(uVar11 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
          pcStack_70[lVar6 + 0x1f] = ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar10;
          uVar7 = lVar6 + -0x61c8864680b583eb +
                  (uVar7 >> 0x2f | (uVar7 ^ (byte)pcStack_70[lVar6 + 1]) << 0x11);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 0x1e);
        *pcStack_70 = '\0';
      }
      pcStack_70 = pcStack_70 + 0x1f;
      uVar5 = func_0x0011ab24(&pcStack_70);
      func_0x00792368(lVar8,0xffffffff,0);
      (*pcVar2)(2,uVar5);
      func_0x00791660(lVar8,0xfffffffe);
    }
    plVar3 = plStack_48;
    *(undefined1 *)(lVar8 + 3) = 0;
    if (plStack_48 != (long *)0x0) {
      LOAcquire();
      lVar6 = plStack_48[1];
      plStack_48[1] = lVar6 + -1;
      LORelease();
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
/* wm:origin: github.com/pengussy */
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
  }
  else {
    func_0x00791660(lVar6,0xfffffffe);
  }
  return 0;
}

