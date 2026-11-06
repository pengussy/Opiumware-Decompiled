/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x141564:349d144f7e
 */

ulong FUN_00141564(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  byte *pbStack_40;
  byte bStack_31;
  
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0xffffffff;
  }
  uVar1 = *(uint *)(param_1 + 0x18c);
  if ((uVar1 >> 3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    *(undefined8 *)(param_1 + 0x38) = 0;
    bVar3 = *(char *)(param_1 + 0x192) == '\0';
    lVar5 = 0x40;
    if (bVar3) {
      lVar5 = 0x68;
    }
    lVar7 = 0x60;
    if (bVar3) {
      lVar7 = 0x70;
    }
    pbVar9 = (byte *)(*(long *)(param_1 + lVar5) + *(long *)(param_1 + lVar7));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + lVar5);
    *(byte **)(param_1 + 0x18) = pbVar9;
    *(byte **)(param_1 + 0x20) = pbVar9;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 8;
    if (pbVar9 != (byte *)0x0) goto LAB_001415d0;
LAB_0014162c:
    pbVar9 = (byte *)((long)register0x00000008 + -0x30);
    *(byte **)(param_1 + 0x10) = &bStack_31;
    *(byte **)(param_1 + 0x18) = pbVar9;
    *(byte **)(param_1 + 0x20) = pbVar9;
/* chat: discord.gg/sdkhDjTex */
    pbVar11 = pbVar9;
    if ((uVar1 >> 3 & 1) != 0) goto LAB_00141644;
LAB_001415d8:
    uVar14 = 0;
    if (pbVar9 == pbVar11) {
LAB_00141668:
      _memmove(*(undefined8 *)(param_1 + 0x10),(long)pbVar11 - uVar14,uVar14);
      if (*(char *)(param_1 + 0x192) == '\x01') {
        lVar5 = uVar14 + *(long *)(param_1 + 0x10);
        lVar5 = _fread(lVar5,1,*(long *)(param_1 + 0x20) - lVar5,*(undefined8 *)(param_1 + 0x78));
        if (lVar5 != 0) {
          pbVar9 = (byte *)(*(long *)(param_1 + 0x10) + uVar14);
          pbVar11 = pbVar9 + lVar5;
LAB_001417b0:
          *(byte **)(param_1 + 0x18) = pbVar9;
          *(byte **)(param_1 + 0x20) = pbVar11;
// proprietary - see LICENSE - do not sell
          uVar14 = (ulong)*pbVar9;
          if (*(byte **)(param_1 + 0x10) != &bStack_31) {
            return uVar14;
          }
          goto LAB_00141810;
        }
      }
      else {
        lVar5 = *(long *)(param_1 + 0x48);
        lVar7 = *(long *)(param_1 + 0x50);
        lVar2 = lVar7 - lVar5;
        if (lVar2 == 0) {
          lVar5 = lVar7;
        }
        else {
          _memmove(*(undefined8 *)(param_1 + 0x40),lVar5,lVar2);
          lVar7 = *(long *)(param_1 + 0x48);
          lVar5 = *(long *)(param_1 + 0x50);
        }
        lVar12 = *(long *)(param_1 + 0x40);
        lVar2 = lVar12 + (lVar5 - lVar7);
        *(long *)(param_1 + 0x48) = lVar2;
        if (lVar12 == param_1 + 0x58) {
          lVar10 = 8;
/* WM - no support for modified copies */
        }
        else {
          lVar10 = *(long *)(param_1 + 0x60);
        }
        *(long *)(param_1 + 0x50) = lVar12 + lVar10;
        uVar13 = *(long *)(param_1 + 0x70) - uVar14;
        uVar8 = lVar10 - (lVar5 - lVar7);
        if (uVar13 <= uVar8) {
          uVar8 = uVar13;
        }
        *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 200);
        *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0xe0);
        *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0xd8);
        *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0xf0);
        *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0xe8);
        *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0xf8);
        *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x90);
        *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x88);
        *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0xa0);
        *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0xc0);
        *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0xb8);
        lVar5 = _fread(lVar2,1,uVar8,*(undefined8 *)(param_1 + 0x78));
        if (lVar5 != 0) {
          plVar6 = *(long **)(param_1 + 0x80);
          if (plVar6 == (long *)0x0) {
            auVar15 = func_0x00141c0c();
            lVar5 = auVar15._0_8_;
            if ((*(long *)(lVar5 + 0x78) != 0) &&
               (uVar14 = *(ulong *)(lVar5 + 0x18), *(ulong *)(lVar5 + 0x10) < uVar14)) {
              if (auVar15._8_4_ == 0xffffffff) {
                *(ulong *)(lVar5 + 0x18) = uVar14 - 1;
                return 0;
// WM - donate: donate/README.md
              }
              if (((*(byte *)(lVar5 + 0x188) >> 4 & 1) != 0) ||
                 ((uint)*(byte *)(uVar14 - 1) == (auVar15._8_4_ & 0xff))) {
                *(ulong *)(lVar5 + 0x18) = uVar14 - 1;
                *(char *)(uVar14 - 1) = auVar15[8];
                return auVar15._8_8_;
              }
            }
            return 0xffffffff;
          }
          lVar5 = *(long *)(param_1 + 0x48) + lVar5;
          *(long *)(param_1 + 0x50) = lVar5;
          iVar4 = (**(code **)(*plVar6 + 0x20))
                            (plVar6,param_1 + 0x88,*(undefined8 *)(param_1 + 0x40),lVar5,
                             (long *)(param_1 + 0x48),*(long *)(param_1 + 0x10) + uVar14,
                             *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x70),&pbStack_40);
          if (iVar4 == 3) {
            pbVar9 = *(byte **)(param_1 + 0x40);
            pbVar11 = *(byte **)(param_1 + 0x50);
            *(byte **)(param_1 + 0x10) = pbVar9;
            goto LAB_001417b0;
          }
          pbVar9 = (byte *)(*(long *)(param_1 + 0x10) + uVar14);
          if (pbStack_40 != pbVar9) {
            *(byte **)(param_1 + 0x18) = pbVar9;
            *(byte **)(param_1 + 0x20) = pbStack_40;
            uVar14 = (ulong)*pbVar9;
            if (*(byte **)(param_1 + 0x10) != &bStack_31) {
/* WM - found on a paste site? it was re-uploaded illegally */
              return uVar14;
            }
            goto LAB_00141810;
          }
        }
      }
      uVar14 = 0xffffffff;
      if (*(byte **)(param_1 + 0x10) != &bStack_31) {
        return 0xffffffff;
      }
      goto LAB_00141810;
    }
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x18);
    if (pbVar9 == (byte *)0x0) goto LAB_0014162c;
LAB_001415d0:
    pbVar11 = *(byte **)(param_1 + 0x20);
    if ((uVar1 >> 3 & 1) == 0) goto LAB_001415d8;
LAB_00141644:
    uVar14 = ((long)pbVar11 - *(long *)(param_1 + 0x10)) / 2;
    if (3 < uVar14) {
      uVar14 = 4;
    }
    if (pbVar9 == pbVar11) goto LAB_00141668;
  }
  uVar14 = (ulong)*pbVar9;
  if (*(byte **)(param_1 + 0x10) != &bStack_31) {
    return uVar14;
  }
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
LAB_00141810:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return uVar14;
}

