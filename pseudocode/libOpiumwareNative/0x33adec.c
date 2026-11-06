/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x33adec:8da52dba35
   =========================================================================== */

void FUN_0033adec(long param_1)

{
  long lVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar7 = *(long *)(param_1 + 0x180);
  if ((((*(float *)(param_1 + 0xf4) < *(float *)(lVar7 + 0x274)) &&
       (*(float *)(lVar7 + 0x26c) < *(float *)(param_1 + 0xfc))) &&
      (*(float *)(param_1 + 0xf0) < *(float *)(lVar7 + 0x270))) &&
     (*(float *)(lVar7 + 0x268) < *(float *)(param_1 + 0xf8))) {
    uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x188) + 0x2c8);
    func_0x003255d0(*(undefined8 *)(param_1 + 0x1a0),uVar11,0);
    func_0x00320d78(uVar11,param_1 + 0x140,param_1 + 0x148,0);
    if (*(short *)(param_1 + 0x78) == 0) {
      lVar7 = param_1 + 0x1a8;
      fVar14 = *(float *)(param_1 + 0x104);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      sVar2 = *(short *)(param_1 + 0x22a);
    }
    else {
      lVar7 = *(long *)(param_1 + 0x1c8) + (long)(int)*(short *)(param_1 + 0x78) * 0x18 + -0x18;
      fVar14 = *(float *)(param_1 + 0x104);
      sVar2 = *(short *)(param_1 + 0x22a);
    }
    fVar16 = fVar14;
    if (sVar2 < 1) {
      fVar16 = *(float *)(param_1 + 0x114);
    }
    fVar16 = fVar16 + *(float *)(param_1 + 0xe8);
    if (fVar14 < fVar16) {
      fVar14 = fVar16;
    }
    uVar9 = *(uint *)(param_1 + 4);
    fVar16 = 0.0;
    if ((uVar9 & 0x100) != 0) {
      fVar16 = 1.0;
    }
    fVar14 = fVar14 + fVar16;
    fVar18 = *(float *)(param_1 + 0x10c);
/* origin: github.com/pengussy - github.com/pengussy */
    fVar16 = fVar14;
    if (*(char *)(param_1 + 0x23d) == '\x01') {
      lVar1 = 0x104;
      if (sVar2 < 1) {
        lVar1 = 0x114;
      }
      fVar15 = *(float *)(param_1 + lVar1) + *(float *)(lVar7 + 8);
      fVar16 = fVar18;
      if (fVar15 <= fVar18) {
        fVar16 = fVar15;
      }
    }
    if (((uVar9 >> 9 & 1) != 0) && (iVar8 = *(int *)(param_1 + 0x6c), 0 < iVar8)) {
      uVar12 = 0;
      do {
        if ((*(uint *)(*(long *)(param_1 + 0x48) + (uVar12 >> 5 & 0x7ffffff) * 4) >>
             (ulong)((uint)uVar12 & 0x1f) & 1) != 0) {
          sVar2 = *(short *)(*(long *)(param_1 + 0x28) + uVar12 * 2);
          if (*(short *)(param_1 + 0x212) == sVar2) {
            bVar5 = *(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78);
          }
          else {
            bVar5 = false;
          }
          puVar10 = (uint *)(*(long *)(param_1 + 0x18) + (long)(int)sVar2 * 0x74);
          fVar15 = (float)puVar10[3];
          if (fVar15 <= *(float *)(param_1 + 0x128) || bVar5) {
            if ((((short)puVar10[0x17] != -1 || (*puVar10 & 0x40000020) == 0) ||
                ((*(uint *)(param_1 + 4) & 0x1e000) == 0x4000)) && ((float)puVar10[9] < fVar15)) {
              fVar17 = fVar18;
              if (uVar12 + 1 != (long)*(short *)(param_1 + 0x22e)) {
/* WM - keep the notice, keep the source honest */
                if ((((*(uint *)(param_1 + 4) >> 0xc & 1) == 0) ||
                    (*(short *)(param_1 + 0x20c) != sVar2 && !bVar5)) &&
                   ((*(uint *)(param_1 + 4) & 0x1800) != 0)) {
                  fVar17 = fVar16;
                }
              }
              if (fVar14 < fVar17) {
                if (*(short *)(param_1 + 0x212) == sVar2) {
                  bVar5 = *(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78);
                }
                else {
                  bVar5 = false;
                }
                if ((bVar5) || (*(short *)(param_1 + 0x20c) == sVar2)) {
                  uVar13 = 0x1d;
                  if (bVar5) {
                    uVar13 = 0x1e;
                  }
                  uVar6 = func_0x002febb0(0x3f800000,uVar13);
                }
                else if ((uVar12 + 1 == (long)*(short *)(param_1 + 0x22e)) ||
                        ((*(byte *)(param_1 + 5) & 0x18) != 0)) {
                  uVar6 = (ulong)*(uint *)(param_1 + 0xa4);
                }
                else {
                  uVar6 = (ulong)*(uint *)(param_1 + 0xa8);
                }
                func_0x0032342c(fVar15,fVar14,fVar17,0x3f800000,uVar11,uVar6);
                iVar8 = *(int *)(param_1 + 0x6c);
              }
            }
          }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
        }
        uVar12 = uVar12 + 1;
      } while ((long)uVar12 < (long)iVar8);
      uVar9 = *(uint *)(param_1 + 4);
    }
    if ((uVar9 & 0x500) != 0) {
      uVar6 = *(ulong *)(param_1 + 0xf8);
      uVar12 = *(ulong *)(param_1 + 0xf0);
      uVar13 = *(undefined4 *)(param_1 + 0xa4);
      uStack_90 = uVar12;
      uStack_88 = uVar6;
      if ((uVar9 & 0x500) == 0x500) {
        func_0x003235ac(0,0x3f800000,uVar11,&uStack_90,(ulong)&uStack_90 | 8,uVar13,0);
      }
      else {
        uStack_90._4_4_ = (undefined4)(uVar12 >> 0x20);
        uVar3 = uStack_90._4_4_;
        if ((uVar9 >> 10 & 1) == 0) {
          if ((uVar9 >> 8 & 1) != 0) {
            func_0x003232b4(uVar12 & 0xffffffff,uVar6 & 0xffffffff,uVar3,0x3f800000,uVar11,uVar13);
            func_0x003232b4(uVar12 & 0xffffffff,uVar6 & 0xffffffff,uStack_88._4_4_,0x3f800000,uVar11
                            ,uVar13);
          }
        }
        else {
          uStack_88._4_4_ = (undefined4)(uVar6 >> 0x20);
          uVar4 = uStack_88._4_4_;
          func_0x0032342c(uVar12 & 0xffffffff,uVar3,uVar4,0x3f800000,uVar11,uVar13);
          func_0x0032342c(uStack_88 & 0xffffffff,uVar3,uVar4,0x3f800000,uVar11,uVar13);
        }
      }
      uVar9 = *(uint *)(param_1 + 4);
    }
    if (((((uVar9 >> 7 & 1) != 0) &&
         (fVar14 = *(float *)(param_1 + 0x80), fVar14 < *(float *)(param_1 + 0xfc))) &&
        (*(float *)(param_1 + 0x134) <= fVar14)) && (fVar14 < *(float *)(param_1 + 0x13c))) {
      func_0x003232b4(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0),fVar14,
                      0x3f800000,uVar11,*(undefined4 *)(param_1 + 0xa8));
// WM - thanks for reading - discord.gg/sdkhDjTex
    }
    func_0x00320e84(uVar11);
  }
  return;
}

