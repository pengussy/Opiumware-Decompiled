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
 *  file-id: 0x33d608:8676c48d19
 *  --------------------------------------------------------------------------*/

void FUN_0033d608(void)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iStack_a8;
  undefined2 uStack_a2;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  lVar8 = lRam00000000020973e0;
  lVar12 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar12 + 0xce) = 1;
  puVar13 = *(uint **)(lVar12 + 0x1c8);
  FUN_0031a338();
  if (1 < (int)puVar13[4]) {
/* donate: donate/README.md */
    func_0x0031313c();
    FUN_00320154(puVar13 + 0x1c,*(undefined8 *)(lVar12 + 0x2c8));
  }
  uVar2 = puVar13[1];
  fVar18 = (float)puVar13[8];
  if ((float)puVar13[8] < *(float *)(lVar12 + 0x11c)) {
    fVar18 = *(float *)(lVar12 + 0x11c);
  }
  puVar13[8] = (uint)fVar18;
  *(float *)(lVar12 + 0x11c) = fVar18;
  if ((uVar2 >> 4 & 1) == 0) {
    *(uint *)(lVar12 + 0x130) = puVar13[10];
  }
  if (((uVar2 & 1) == 0) && ((*(byte *)(lVar12 + 0xd1) & 1) == 0)) {
    fVar19 = (float)puVar13[9];
    if ((float)puVar13[9] < *(float *)(lVar12 + 0x26c)) {
      fVar19 = *(float *)(lVar12 + 0x26c);
    }
    if (*(float *)(lVar12 + 0x274) <= fVar18) {
      fVar18 = *(float *)(lVar12 + 0x274);
    }
    if (1 < (int)puVar13[4]) {
/* wm:donate: donate/README.md */
      lVar14 = 0;
      iStack_a8 = -1;
      lVar15 = 1;
      do {
        lVar7 = *(long *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x1c8);
        if (lVar7 == 0) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = *(float *)(lVar7 + 0x14) +
                   *(float *)(*(long *)(lVar7 + 0x68) + lVar14 + 0x1c) *
                   (*(float *)(lVar7 + 0x18) - *(float *)(lVar7 + 0x14));
        }
        lVar7 = *(long *)(puVar13 + 0x1a);
        fVar17 = *(float *)(lVar12 + 0x28) + fVar17;
        uVar3 = *puVar13;
        fStack_a0 = fVar17 - (float)(int)(*(float *)(
                                                  "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                                  + lVar8 + 0x10) * 4.0);
        fStack_98 = fVar17 + (float)(int)(*(float *)(
                                                  "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                                  + lVar8 + 0x10) * 4.0);
        fStack_9c = fVar19;
        fStack_94 = fVar18;
        iVar4 = FUN_00315614(&fStack_a0,lVar15 + (ulong)uVar3,0,2);
        if (iVar4 != 0) {
          uStack_a2 = 0;
/*  do not claim this as your own  */
          if (((uVar2 >> 1 & 1) == 0) &&
             (((FUN_0033e04c(&fStack_a0,lVar15 + (ulong)uVar3,(long)&uStack_a2 + 1,&uStack_a2,0),
               (uStack_a2 & 0x100) != 0 || ((uStack_a2 & 1) != 0)) &&
              (func_0x00319a48(4), (uStack_a2 & 1) != 0)))) {
            iVar4 = (int)lVar15;
            if ((*(byte *)(lVar7 + lVar14 + 0x24) & 2) != 0) {
              iVar4 = iStack_a8;
            }
            uVar16 = 0x1e;
            iStack_a8 = iVar4;
          }
          else {
            uVar16 = 0x1c;
            if (uStack_a2._1_1_ != '\0') {
              uVar16 = 0x1d;
            }
          }
          uVar5 = func_0x002febb0(0x3f800000,uVar16);
          func_0x0032342c((float)(int)fVar17,fVar19 + 1.0,fVar18,0x3f800000,
                          *(undefined8 *)(lVar12 + 0x2c8),uVar5);
        }
        lVar15 = lVar15 + 1;
        uVar3 = puVar13[4];
        lVar14 = lVar14 + 0x1c;
      } while (lVar15 < (int)uVar3);
      if (iStack_a8 != -1) {
        if ((-1 < (int)uVar3) && ((*(byte *)((long)puVar13 + 9) & 1) == 0)) {
          lVar8 = *(long *)(puVar13 + 0x1a);
          uVar1 = (ulong)uVar3 + 1;
          if (uVar3 < 3) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar1 & 0xfffffffc;
            puVar9 = (undefined4 *)(lVar8 + 0x38);
            uVar11 = uVar10;
// WM - reversing this took months of machine time
            do {
              puVar9[-0xd] = puVar9[-0xe];
              puVar9[-6] = puVar9[-7];
              puVar9[1] = *puVar9;
              puVar9[8] = puVar9[7];
              puVar9 = puVar9 + 0x1c;
              uVar11 = uVar11 - 4;
            } while (uVar11 != 0);
            if (uVar10 == uVar1) goto LAB_0033d918;
          }
          lVar15 = uVar1 - uVar10;
          puVar9 = (undefined4 *)(lVar8 + uVar10 * 0x1c + 4);
          do {
            *puVar9 = puVar9[-1];
            lVar15 = lVar15 + -1;
            puVar9 = puVar9 + 7;
          } while (lVar15 != 0);
        }
LAB_0033d918:
        *(undefined1 *)((long)puVar13 + 9) = 1;
        fVar18 = ((*(float *)(lRam00000000020973e0 + 0x100) -
                  *(float *)(&UNK_00001534 + lRam00000000020973e0)) +
                 (float)(int)(*(float *)(
                                        "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                        + lRam00000000020973e0 + 0x10) * 4.0)) -
                 *(float *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x28);
        lVar8 = *(long *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x1c8);
        if (lVar8 == 0) {
          fVar19 = 0.0;
        }
        else {
          if (iStack_a8 < 1) {
            iVar4 = *(int *)(lVar8 + 0xc);
          }
          else {
// origin: github.com/pengussy
            iVar4 = iStack_a8 + -1;
          }
          fVar19 = *(float *)(lVar8 + 0x14) +
                   *(float *)(*(long *)(lVar8 + 0x68) + (long)iVar4 * 0x1c) *
                   (*(float *)(lVar8 + 0x18) - *(float *)(lVar8 + 0x14));
        }
        fVar19 = fVar19 + *(float *)(lRam00000000020973e0 + 0xcf8);
        if (fVar18 < fVar19) {
          fVar18 = fVar19;
        }
        if (((byte)puVar13[1] >> 2 & 1) != 0) {
          if (lVar8 == 0) {
            fVar19 = 0.0;
          }
          else {
            if (iStack_a8 < -1) {
              iStack_a8 = *(int *)(lVar8 + 0xc);
            }
            else {
              iStack_a8 = iStack_a8 + 1;
            }
            fVar19 = *(float *)(lVar8 + 0x14) +
                     *(float *)(*(long *)(lVar8 + 0x68) + (long)iStack_a8 * 0x1c) *
                     (*(float *)(lVar8 + 0x18) - *(float *)(lVar8 + 0x14));
          }
          fVar19 = fVar19 - *(float *)(lRam00000000020973e0 + 0xcf8);
          if (fVar19 <= fVar18) {
            fVar18 = fVar19;
/* found on a paste site? it was re-uploaded illegally */
          }
        }
        func_0x0033d37c(fVar18);
        uVar6 = 1;
        goto LAB_0033d84c;
      }
    }
  }
  uVar6 = 0;
LAB_0033d84c:
  *(undefined1 *)((long)puVar13 + 9) = uVar6;
  *(undefined8 *)(lVar12 + 0x250) = *(undefined8 *)(lVar12 + 0x260);
  *(undefined8 *)(lVar12 + 0x248) = *(undefined8 *)(lVar12 + 600);
  uVar5 = *(undefined8 *)(puVar13 + 0x13);
  *(undefined8 *)(lVar12 + 0x260) = *(undefined8 *)(puVar13 + 0x15);
  *(undefined8 *)(lVar12 + 600) = uVar5;
  *(undefined8 *)(lVar12 + 0x1c8) = 0;
  *(undefined4 *)(lVar12 + 0x160) = 0;
  *(float *)(lVar12 + 0x118) = (float)(int)(*(float *)(lVar12 + 0x28) + *(float *)(lVar12 + 0x15c));
  func_0x0031b91c();
  return;
}

