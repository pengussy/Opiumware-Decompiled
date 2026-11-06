/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x342124:c1ab232305
 */

int * FUN_00342124(void)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar2 = lRam00000000020973e0;
  piVar8 = *(int **)(&UNK_00002430 + lRam00000000020973e0);
  lVar10 = *(long *)(piVar8 + 10);
  lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (piVar8[0xc] != *(int *)(&UNK_00001e3c + lRam00000000020973e0)) {
    func_0x002ff090("EndMultiSelect() FocusScope mismatch!");
  }
  if ((*(byte *)((long)piVar8 + 0x35) >> 4 & 1) == 0) {
    uVar14 = *(ulong *)(lVar9 + 0x240);
    fVar12 = (float)*(undefined8 *)(lVar9 + 0x238) + (float)*(undefined8 *)(lVar9 + 0x80);
    fVar13 = (float)((ulong)*(undefined8 *)(lVar9 + 0x238) >> 0x20) +
             (float)((ulong)*(undefined8 *)(lVar9 + 0x80) >> 0x20);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    uVar15 = uVar14 ^ (uVar14 ^ CONCAT44(fVar13,fVar12)) &
                      CONCAT44(-(uint)(fVar13 < (float)(uVar14 >> 0x20)),
                               -(uint)(fVar12 < (float)uVar14));
    cVar1 = *(char *)((long)piVar8 + 0x52);
  }
  else {
    uVar14 = *(ulong *)(lVar9 + 0x130);
    uVar15 = *(ulong *)(piVar8 + 0xe);
    uVar14 = uVar14 ^ (uVar14 ^ uVar15) &
                      ~CONCAT44(-(uint)((float)(uVar15 >> 0x20) <= (float)(uVar14 >> 0x20)),
                                -(uint)((float)uVar15 <= (float)uVar14));
    cVar1 = *(char *)((long)piVar8 + 0x52);
  }
  uStack_70 = uVar15;
  uStack_68 = uVar14;
  if (cVar1 == '\x01') {
    if (((*(byte *)((long)piVar8 + 0x21) & 1) != 0) ||
       (((*(byte *)((long)piVar8 + 0x55) & 1) == 0 && (*(long *)(piVar8 + 4) != -1)))) {
      if (((byte)(&UNK_0000286c)[lVar2] >> 6 & 1) != 0) {
        func_0x002fd6a4("[selection] EndMultiSelect: Reset RangeSrcItem.\n");
      }
      *(undefined8 *)(lVar10 + 0x18) = 0xffffffffffffffff;
    }
    if (((*(byte *)(piVar8 + 0x15) & 1) == 0) && (*(long *)(lVar10 + 0x20) != -1)) {
      if (((byte)(&UNK_0000286c)[lVar2] >> 6 & 1) != 0) {
        func_0x002fd6a4("[selection] EndMultiSelect: Reset NavIdItem.\n");
      }
      *(undefined8 *)(lVar10 + 0x20) = 0xffffffffffffffff;
      *(undefined1 *)(lVar10 + 0x15) = 0xff;
    }
    if (((((piVar8[0xd] & 0xc0U) != 0) && (piVar8[0x12] != 0)) &&
        (*(int *)(&UNK_000023a8 + lRam00000000020973e0) == piVar8[0x12])) &&
       ((&UNK_000023ac)[lRam00000000020973e0] == '\x01')) {
      func_0x00341cc8(&uStack_70);
    }
  }
  if ((*(byte *)((long)piVar8 + 0x51) & 1) == 0) {
    if (piVar8[1] < 0) {
/* wm:found on a paste site? it was re-uploaded illegally */
      uVar6 = func_0x002fd6d8(0);
      if (*(long *)(piVar8 + 2) != 0) {
        _memcpy(uVar6,*(long *)(piVar8 + 2),(long)*piVar8 * 0x18);
        func_0x002fda6c(*(undefined8 *)(piVar8 + 2));
      }
      piVar8[0] = 0;
      piVar8[1] = 0;
      *(undefined8 *)(piVar8 + 2) = uVar6;
      fVar12 = *(float *)(lVar2 + 0x100);
      if (fVar12 < *(float *)(lVar9 + 0x228)) goto LAB_0034245c;
    }
    else {
      *piVar8 = 0;
      fVar12 = *(float *)(lVar2 + 0x100);
      if (fVar12 < *(float *)(lVar9 + 0x228)) goto LAB_0034245c;
    }
  }
  else {
    fVar12 = *(float *)(lVar2 + 0x100);
    if (fVar12 < *(float *)(lVar9 + 0x228)) goto LAB_0034245c;
  }
  if (((*(float *)(lVar2 + 0x104) < *(float *)(lVar9 + 0x22c)) ||
      (*(float *)(lVar9 + 0x230) <= fVar12)) ||
/* more drops soon - github.com/pengussy - github.com/pengussy */
     ((*(float *)(lVar9 + 0x234) <= *(float *)(lVar2 + 0x104) ||
      (iVar5 = func_0x00317b3c(1), iVar5 == 0)))) goto LAB_0034245c;
  uVar7 = piVar8[0xd];
  if ((uVar7 >> 0xc & 1) != 0) {
    fVar12 = *(float *)(lVar2 + 0x100);
    if (fVar12 < (float)uVar15) goto LAB_0034245c;
    fVar13 = *(float *)(lVar2 + 0x104);
    fVar16 = (float)(uVar14 >> 0x20);
    bVar3 = false;
    if (((float)(uVar15 >> 0x20) <= fVar13) && (bVar3 = false, !NAN(fVar12) && !NAN((float)uVar14)))
    {
      bVar3 = fVar12 < (float)uVar14;
    }
    bVar4 = false;
    if ((bVar3) && (bVar4 = false, !NAN(fVar13) && !NAN(fVar16))) {
      bVar4 = fVar13 < fVar16;
    }
    if (!bVar4) goto LAB_0034245c;
  }
  if ((*(int *)(&UNK_00001504 + lVar2) == 0) && (*(int *)(&UNK_0000151c + lVar2) == 0)) {
    if (((uVar7 & 0xc0) != 0) &&
       (((((&UNK_000023ac)[lVar2] & 1) == 0 && (((&UNK_000023ad)[lVar2] & 1) == 0)) &&
        (*(short *)(lVar2 + 0xb3a) == 1)))) {
      func_0x003425d0(piVar8[0x12],0xffffffffffffffff);
      func_0x00306d20(lVar9,2);
      func_0x00305fbc(piVar8[0x12]);
      uVar7 = piVar8[0xd];
      if ((uVar7 >> 0xc & 1) != 0) {
        uStack_80 = *(undefined8 *)(lVar2 + 0x100);
        uStack_78 = uStack_80;
        func_0x0031b710(0,0,piVar8[0xc],&uStack_80);
/* stripping the watermark breaks the license - github.com/pengussy */
        uVar7 = piVar8[0xd];
      }
    }
    if ((((uVar7 >> 10 & 1) != 0) && (iVar5 = func_0x0031978c(0), iVar5 != 0)) &&
       ((uVar15 = func_0x003199d4(0xbf800000,0), (uVar15 & 1) == 0 && (*(int *)(lVar2 + 0x120) == 0)
        ))) {
      func_0x00342040(piVar8,0);
    }
  }
LAB_0034245c:
  if ((*(byte *)((long)piVar8 + 0x36) & 1) != 0) {
    lVar10 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    *(undefined1 *)(lVar10 + 0xce) = 1;
    func_0x0031af14(lVar10,4);
  }
  if ((*(long *)(&UNK_000022f0 + lVar2) != 0) &&
     (*(char *)(*(long *)(&UNK_000022f0 + lVar2) + 0x23a) == '\x01')) {
    func_0x0033a76c();
  }
  uVar15 = *(ulong *)(piVar8 + 0x10);
  uVar14 = *(ulong *)(lVar9 + 0x130);
  *(ulong *)(lVar9 + 0x130) =
       uVar15 ^ (uVar15 ^ uVar14) &
                ~CONCAT44(-(uint)((float)(uVar14 >> 0x20) <= (float)(uVar15 >> 0x20)),
                          -(uint)((float)uVar14 <= (float)uVar15));
  func_0x00317164();
  lVar9 = lRam00000000020973e0;
  if ((((byte)(&UNK_0000286c)[lVar2] >> 6 & 1) != 0) && (*piVar8 != 0)) {
    lVar11 = (long)*piVar8 * 0x18;
    lVar10 = *(long *)(piVar8 + 2) + 8;
// WM - proprietary - see LICENSE - do not sell
    do {
      iVar5 = *(int *)(lVar10 + -8);
      if (iVar5 == 1) {
        if (((byte)(&UNK_0000286c)[lVar9] >> 6 & 1) != 0) {
          func_0x002fd6a4("[selection] %s: Request: SetAll %d (= %s)\n");
          iVar5 = *(int *)(lVar10 + -8);
          goto LAB_0034253c;
        }
      }
      else {
LAB_0034253c:
        if ((iVar5 == 2) && (((byte)(&UNK_0000286c)[lVar9] >> 6 & 1) != 0)) {
          func_0x002fd6a4(
                         "[selection] %s: Request: SetRange %lld..%lld (0x%llX..0x%llX) = %d (dir %d)\n"
                         );
        }
      }
      lVar10 = lVar10 + 0x18;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
// do not claim this as your own
  }
  piVar8[0xc] = 0;
  piVar8[0xd] = 0;
  uVar7 = *(uint *)(&UNK_00002438 + lVar2);
  *(uint *)(&UNK_00002438 + lVar2) = uVar7 - 1;
  if ((int)uVar7 < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(&UNK_00002448 + lVar2) + (ulong)uVar7 * 0x58 + -0xb0;
  }
  *(long *)(&UNK_00002430 + lVar2) = lVar9;
  return piVar8;
}

