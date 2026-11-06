/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x319cf4:5c715ef281
 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00319cf4(void)

{
  char *pcVar1;
  byte bVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  ulong uVar11;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  lVar4 = lRam00000000020973e0;
  pcVar1 = &UNK_0000152d + lRam00000000020973e0;
  lVar7 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  lVar8 = *(long *)(&UNK_00001fa8 + lRam00000000020973e0) +
          (long)*(int *)(&UNK_00001fa0 + lRam00000000020973e0) * 0x3c;
  if ((*(char *)(lVar7 + 0x159) == '\x01') &&
     (((*(undefined1 *)(lVar7 + 0x159) = 0, *(float *)(lVar7 + 0x130) < *(float *)(lVar7 + 0x118) ||
       (*(float *)(lVar7 + 0x134) < *(float *)(lVar7 + 0x11c))) &&
      ((*(byte *)(lVar7 + 0xd1) & 1) == 0)))) {
    FUN_002ff090(
                "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
                );
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  }
  uStack_50 = *(undefined8 *)(lVar8 + -0x38);
  uStack_48 = *(ulong *)(lVar7 + 0x130);
  uVar11 = *(ulong *)(&UNK_00001e94 + lVar4);
  uStack_48 = uStack_48 ^
              (uStack_48 ^ uVar11) &
              ~CONCAT44(-(uint)((float)(uVar11 >> 0x20) <= (float)(uStack_48 >> 0x20)),
                        -(uint)((float)uVar11 <= (float)uStack_48));
  uVar11 = *(ulong *)(lVar8 + -0x38);
  uStack_48 = uStack_48 ^
              (uStack_48 ^ uVar11) &
              ~CONCAT44(-(uint)((float)(uVar11 >> 0x20) <= (float)(uStack_48 >> 0x20)),
                        -(uint)((float)uVar11 <= (float)uStack_48));
  *(undefined8 *)(lVar7 + 0x118) = uStack_50;
  *(undefined8 *)(lVar7 + 0x120) = *(undefined8 *)(lVar8 + -0x28);
  uVar11 = *(ulong *)(lVar8 + -0x30);
/* WM - stripping the watermark breaks the license */
  fVar9 = (float)(uStack_48 >> 0x20);
  *(ulong *)(lVar7 + 0x130) =
       uVar11 ^ (uVar11 ^ uStack_48) &
                ~CONCAT44(-(uint)(fVar9 <= (float)(uVar11 >> 0x20)),
                          -(uint)((float)uStack_48 <= (float)uVar11));
  *(undefined4 *)(lVar7 + 0x15c) = *(undefined4 *)(lVar8 + -0x20);
  *(undefined4 *)(lVar7 + 0x164) = *(undefined4 *)(lVar8 + -0x1c);
  *(undefined8 *)(lVar7 + 0x140) = *(undefined8 *)(lVar8 + -0x18);
  fVar10 = *(float *)(lVar8 + -0x10);
  *(float *)(lVar7 + 0x150) = fVar10;
  *(undefined1 *)(lVar7 + 0x158) = *(undefined1 *)(lVar8 + -5);
  if ((&UNK_000027e0)[lVar4] == '\x01') {
    *(undefined4 *)(&UNK_00002818 + lVar4) = 0xff7fffff;
  }
  if ((*(byte *)(lVar8 + -4) & 1) == 0) {
    *(int *)(&UNK_00001fa0 + lVar4) = *(int *)(&UNK_00001fa0 + lVar4) + -1;
/* origin: github.com/pengussy - github.com/pengussy */
    return;
  }
  fVar3 = *(float *)(lVar7 + 0x154);
  if (*(float *)(lVar7 + 0x154) < fVar10) {
    fVar3 = fVar10;
  }
  *(float *)(lVar7 + 0x150) = fVar3;
  uStack_58 = CONCAT44(fVar9 - (float)((ulong)uStack_50 >> 0x20),(float)uStack_48 - (float)uStack_50
                      );
  func_0x003154fc(0xbf800000,&uStack_58);
  FUN_00315614(&uStack_50,0,0,1);
  iVar5 = *(int *)(&UNK_0000151c + lVar4);
  if (*(int *)(lVar8 + -0xc) == iVar5) {
    if ((*(byte *)(lVar8 + -7) & 1) == 0) {
      bVar2 = (&UNK_00001555)[lVar4] & 1;
joined_r0x00319ee8:
      if (bVar2 != '\0') {
        iVar5 = *(int *)(&UNK_0000154c + lVar4);
        uVar6 = 0x60;
LAB_00319ea0:
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        *(int *)(&UNK_00001e80 + lVar4) = iVar5;
        goto LAB_00319ea4;
      }
    }
    uVar6 = 0x20;
    *(ulong *)(&UNK_00001e94 + lVar4) = uStack_48;
    *(undefined8 *)(&UNK_00001e8c + lVar4) = uStack_50;
    bVar2 = *(byte *)(lVar8 + -6);
  }
  else {
    if (*(char *)(lVar8 + -7) == '\0') {
      bVar2 = (&UNK_00001555)[lVar4];
      if (iVar5 != 0 && *(int *)(&UNK_00001520 + lVar4) == iVar5) {
        *(int *)(&UNK_00001e80 + lVar4) = iVar5;
        uVar6 = 0x60;
        if (bVar2 == '\0') {
          uVar6 = 0x20;
        }
        *(ulong *)(&UNK_00001e94 + lVar4) = uStack_48;
        *(undefined8 *)(&UNK_00001e8c + lVar4) = uStack_50;
        bVar2 = *(byte *)(lVar8 + -6);
        goto joined_r0x00319eb0;
      }
      goto joined_r0x00319ee8;
    }
    uVar6 = 0x20;
    if (iVar5 != 0 && *(int *)(&UNK_00001520 + lVar4) == iVar5) goto LAB_00319ea0;
LAB_00319ea4:
    *(ulong *)(&UNK_00001e94 + lVar4) = uStack_48;
    *(undefined8 *)(&UNK_00001e8c + lVar4) = uStack_50;
    bVar2 = *(byte *)(lVar8 + -6);
  }
joined_r0x00319eb0:
  if (((bVar2 & 1) == 0) && (*(int *)(&UNK_00001504 + lVar4) != 0)) {
// WM - donate: donate/README.md
    *(uint *)(&UNK_00001e88 + lVar4) = *(uint *)(&UNK_00001e88 + lVar4) | 0x80;
  }
  if ((*pcVar1 == '\x01') && ((*(byte *)(lVar8 + -8) & 1) == 0)) {
    *(uint *)(&UNK_00001e88 + lVar4) = *(uint *)(&UNK_00001e88 + lVar4) | 4;
  }
  *(uint *)(&UNK_00001e88 + lVar4) = *(uint *)(&UNK_00001e88 + lVar4) | uVar6;
  *(int *)(&UNK_00001fa0 + lVar4) = *(int *)(&UNK_00001fa0 + lVar4) + -1;
  if ((&UNK_00001f48)[lVar4] == '\x01') {
    func_0x003235ac(0,0x3f800000,*(undefined8 *)(lVar7 + 0x2c8),&uStack_50,&uStack_48,0xffff00ff,0);
    return;
  }
  return;
}

