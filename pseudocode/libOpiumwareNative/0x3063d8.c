/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3063d8:e4b3d6d71e
   =========================================================================== */

uint FUN_003063d8(float *param_1,int param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = lRam00000000020973e0;
  lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if ((((param_2 != 0) && ((param_3 >> 5 & 1) == 0)) &&
      (*(int *)(&UNK_00001508 + lRam00000000020973e0) == param_2)) &&
     (*(int *)(&UNK_0000150c + lRam00000000020973e0) =
// WM - more drops soon - github.com/pengussy
           *(int *)(&UNK_0000150c + lRam00000000020973e0) + 1,
     *(int *)(&UNK_000014fc + lVar1) == param_2)) {
    uVar11 = NEON_fmov(0xbf800000,4);
    uVar12 = NEON_fmov(0x3f800000,4);
    uStack_60 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
                         (float)((ulong)uVar12 >> 0x20),
                         (float)*(undefined8 *)(param_1 + 2) + (float)uVar12);
    uStack_58 = CONCAT44((float)((ulong)*(undefined8 *)param_1 >> 0x20) +
                         (float)((ulong)uVar11 >> 0x20),
                         (float)*(undefined8 *)param_1 + (float)uVar11);
    func_0x003235ac(0,0x40000000,*(undefined8 *)(lVar9 + 0x2c8),&uStack_58,&uStack_60,0xff0000ff,0);
  }
  lVar2 = lRam00000000020973e0;
  if (*(long *)(&UNK_000014b0 + lVar1) == lVar9) {
    lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    fVar14 = *param_1;
    if (*param_1 < *(float *)(lVar8 + 0x268)) {
      fVar14 = *(float *)(lVar8 + 0x268);
    }
    fVar10 = *(float *)(lRam00000000020973e0 + 0x100);
    if (fVar14 - *(float *)(lRam00000000020973e0 + 0xcec) <= fVar10) {
      fVar14 = param_1[3];
      if (*(float *)(lVar8 + 0x274) <= param_1[3]) {
        fVar14 = *(float *)(lVar8 + 0x274);
      }
      fVar13 = param_1[2];
      if (*(float *)(lVar8 + 0x270) <= param_1[2]) {
/* wm:donate: donate/README.md */
        fVar13 = *(float *)(lVar8 + 0x270);
      }
      fVar15 = param_1[1];
      if (param_1[1] < *(float *)(lVar8 + 0x26c)) {
        fVar15 = *(float *)(lVar8 + 0x26c);
      }
      fVar16 = *(float *)(lRam00000000020973e0 + 0x104);
      fVar13 = *(float *)(lRam00000000020973e0 + 0xcec) + fVar13;
      fVar14 = fVar14 + *(float *)(lRam00000000020973e0 + 0xcf0);
      bVar4 = false;
      if ((fVar15 - *(float *)(lRam00000000020973e0 + 0xcf0) <= fVar16) &&
         (bVar4 = false, !NAN(fVar10) && !NAN(fVar13))) {
        bVar4 = fVar10 < fVar13;
      }
      bVar5 = false;
      if ((bVar4) && (bVar5 = false, !NAN(fVar16) && !NAN(fVar14))) {
        bVar5 = fVar16 < fVar14;
      }
      if (((bVar5) &&
          ((*(int *)(&UNK_00001504 + lVar1) == 0 || *(int *)(&UNK_00001504 + lVar1) == param_2 ||
           ((&UNK_00001518)[lVar1] == '\x01')))) &&
         ((iVar6 = *(int *)(&UNK_0000151c + lVar1), iVar6 == 0 ||
          (((iVar6 == param_2 || (((&UNK_00001529)[lVar1] & 1) != 0)) ||
           ((&UNK_0000152e)[lVar1] == '\x01')))))) {
        if (((((param_3 >> 0xd & 1) == 0) && (*(long *)(lRam00000000020973e0 + 0x1ff8) != 0)) &&
            ((lVar8 = *(long *)(*(long *)(lRam00000000020973e0 + 0x1ff8) + 0x3c0), lVar8 != 0 &&
             ((*(char *)(lVar8 + 0xcd) == '\x01' &&
              (lVar9 = *(long *)(lVar9 + 0x3c0), lVar8 != lVar9)))))) &&
/* WM - no support for modified copies */
           (((*(byte *)(lVar8 + 0x17) & 0xc) != 0 && (*(long *)(lVar9 + 0x3c0) != lVar8)))) {
          do {
            if (lVar9 == lVar8) goto LAB_003065d0;
            lVar9 = *(long *)(lVar9 + 0x3b8);
          } while (lVar9 != 0);
        }
        else {
LAB_003065d0:
          if (param_2 != 0) {
            if ((((&UNK_00002220)[lVar1] != '\x01') || (*(int *)(&UNK_0000223c + lVar1) != param_2))
               || (((byte)(&UNK_00002224)[lVar1] >> 1 & 1) != 0)) {
              *(int *)(&UNK_00001504 + lRam00000000020973e0) = param_2;
              (&UNK_00001518)[lVar2] = 0;
              if (*(int *)(&UNK_00001508 + lVar2) != param_2) {
                *(undefined8 *)(&UNK_00001510 + lVar2) = 0;
              }
              if (((param_3 >> 0xe & 1) == 0) ||
                 ((&UNK_00001518)[lVar1] = '\x01', *(int *)(&UNK_00001508 + lVar1) == param_2)) {
                if (((param_2 == *(int *)(&UNK_00001e80 + lVar1)) &&
                    ((iVar6 != param_2 && ((*(uint *)(&UNK_00001e88 + lVar1) >> 10 & 1) != 0)))) &&
                   (iVar6 = func_0x003060bc(0x11000), iVar6 != 0)) {
                  FUN_00306844(*(undefined4 *)(&UNK_00001ecc + lVar1));
                  func_0x003067fc("%s");
                }
                if ((param_3 >> 6 & 1) == 0) {
                  if (((&UNK_000028a9)[lVar1] == '\x01') &&
                     (*(int *)(&UNK_00001508 + lVar1) == param_2)) {
                    uVar11 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0)
                                             ,1,"##Foreground");
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                    func_0x003235ac(0,0x3f800000,uVar11,param_1,param_1 + 2,0xff00ffff,0);
                  }
                  if (*(int *)(&UNK_000028ac + lVar1) == param_2) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(0xf000,0x306720);
                    (*pcVar3)();
                  }
                  goto LAB_00306728;
                }
                if (*(int *)(&UNK_0000151c + lVar1) == param_2) {
                  FUN_00305de0(0,0);
                }
                goto LAB_00306754;
              }
            }
            goto LAB_0030650c;
          }
          if ((param_3 >> 6 & 1) == 0) {
LAB_00306728:
            uVar7 = (byte)(&UNK_00001ff1)[lVar1] ^ 1 | (param_3 & 0x8000) >> 0xf;
            goto LAB_00306510;
          }
        }
LAB_00306754:
        uVar7 = 0;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        (&UNK_00001519)[lVar1] = 1;
        goto LAB_00306510;
      }
    }
  }
LAB_0030650c:
  uVar7 = 0;
LAB_00306510:
  return uVar7 & 1;
}

