/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3390ec:5d43496b86
 */

void FUN_003390ec(long param_1)

{
  long lVar1;
  short sVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined2 uStack_a2;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
/* watermarked copy - do not remove - github.com/pengussy */
  float fStack_94;
  
  lVar4 = lRam00000000020973e0;
  if (*(short *)(param_1 + 0x78) == 0) {
    lVar7 = param_1 + 0x1a8;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x1c8) + (long)(int)*(short *)(param_1 + 0x78) * 0x18 + -0x18;
  }
  lVar1 = 0xf4;
  if (*(short *)(param_1 + 0x22a) < 1) {
    lVar1 = 0x114;
  }
  fVar13 = *(float *)(param_1 + lVar1) + *(float *)(param_1 + 0xe8);
  fVar12 = (fVar13 + *(float *)(lVar7 + 4)) - *(float *)(param_1 + 0xe8);
  fVar3 = *(float *)(param_1 + 0xfc);
  if (*(float *)(param_1 + 0xfc) < fVar12) {
    fVar3 = fVar12;
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  if (0 < iVar5) {
    uVar9 = 0;
    fVar12 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                       lRam00000000020973e0 + 0x10);
    fVar10 = *(float *)(lVar7 + 8);
    do {
      if ((*(uint *)(*(long *)(param_1 + 0x48) + (uVar9 >> 5 & 0x7ffffff) * 4) >>
           (ulong)((uint)uVar9 & 0x1f) & 1) != 0) {
        sVar2 = *(short *)(*(long *)(param_1 + 0x28) + uVar9 * 2);
        puVar8 = (uint *)(*(long *)(param_1 + 0x18) + (long)(int)sVar2 * 0x74);
        if ((*puVar8 & 0x40000020) == 0) {
          fStack_94 = fVar3;
          if ((*(uint *)(param_1 + 4) & 0x800) != 0) {
            fStack_94 = fVar13 + fVar10;
          }
// WM - no support for modified copies
          if ((((*(uint *)(param_1 + 4) >> 0xb & 1) == 0) || (*(char *)(param_1 + 0x23d) != '\0'))
             && (((*(byte *)((long)puVar8 + 0x69) & 1) != 0 ||
                 (*(short *)(param_1 + 0x214) == sVar2)))) {
            piVar6 = (int *)(param_1 + 0x1a8);
            if (*(short *)(param_1 + 0x78) != 0) {
              piVar6 = (int *)(*(long *)(param_1 + 0x1c8) +
                               (long)(int)*(short *)(param_1 + 0x78) * 0x18 + -0x18);
            }
            iVar5 = (int)sVar2 + *piVar6;
            fStack_a0 = (float)puVar8[3] - (float)(int)(fVar12 * 4.0);
            fStack_98 = (float)puVar8[3] + (float)(int)(fVar12 * 4.0);
            fStack_9c = fVar13;
            FUN_00315614(&fStack_a0,iVar5 + 1,0,2);
            uStack_a2 = 0;
            iVar5 = FUN_0033e04c(&fStack_a0,iVar5 + 1,(long)&uStack_a2 + 1,&uStack_a2,0x40910);
            if ((iVar5 != 0) && (iVar5 = func_0x0031992c(0), iVar5 != 0)) {
              lVar7 = *(long *)(param_1 + 0x18) + (long)(int)sVar2 * 0x74;
              if (*(char *)(lVar7 + 0x66) == '\x01') {
                *(undefined1 *)(lVar7 + 0x70) = 1;
                *(short *)(param_1 + 0x210) = sVar2;
              }
              func_0x00305fb0();
              uStack_a2 = uStack_a2 & 0xff00;
            }
            if ((char)uStack_a2 == '\x01') {
              if (*(short *)(param_1 + 0x214) == -1) {
                if (*(short *)(param_1 + 0x220) == -1) {
                  uVar11 = 0xff7fffff;
                }
                else {
                  uVar11 = *(undefined4 *)
// WM - thanks for reading - discord.gg/sdkhDjTex
                            (*(long *)(param_1 + 0x18) +
                             (long)(int)*(short *)(param_1 + 0x220) * 0x74 + 0xc);
                }
                *(undefined4 *)(param_1 + 0xe0) = uVar11;
              }
              *(short *)(param_1 + 0x212) = sVar2;
              *(undefined2 *)(param_1 + 0x7a) = *(undefined2 *)(param_1 + 0x78);
LAB_003391e8:
              *(short *)(param_1 + 0x20c) = sVar2;
              func_0x00319a48(4);
            }
            else if ((uStack_a2._1_1_ == '\x01') && (0.06 < *(float *)(&UNK_00001510 + lVar4)))
            goto LAB_003391e8;
            iVar5 = *(int *)(param_1 + 0x6c);
          }
        }
      }
      uVar9 = uVar9 + 1;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    } while ((long)uVar9 < (long)iVar5);
  }
  return;
}

