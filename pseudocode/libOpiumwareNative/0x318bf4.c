/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x318bf4:23bacd3c1e
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

bool FUN_00318bf4(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  short *psVar15;
  short *psVar16;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar6 = lRam00000000020973e0;
  uVar1 = param_2 | 0xd000;
  if ((param_2 & 0x3c00) != 0) {
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    uVar1 = param_2;
  }
  uVar10 = param_1 & 0xffff0fff;
  uVar2 = param_1 & 0xffff0ffb;
  uVar14 = 0x8000;
  if (uVar2 != 0x212) {
    uVar14 = 0;
  }
  uVar3 = 0x4000;
  if (uVar2 != 0x211) {
    uVar3 = uVar14;
  }
  uVar14 = 0x2000;
  if (uVar2 != 0x210) {
    uVar14 = uVar3;
  }
  uVar2 = 0x1000;
  if (uVar10 != 0x213) {
    uVar2 = uVar14;
  }
  uVar14 = 0x1000;
  if (uVar10 != 0x20f) {
    uVar14 = uVar2;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
  }
  if (uVar10 - 0x20f < 8) {
    param_1 = uVar14 | param_1;
  }
  if (*(uint *)(&UNK_00001e38 + lRam00000000020973e0) == param_1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(0xf000,0x318c90);
    (*pcVar8)();
  }
  if (((uVar1 >> 0x10 & 1) != 0) && (*(long *)(lRam00000000020973e0 + 0x1ff8) == 0)) {
    return false;
  }
  if ((uVar1 >> 0xd & 1) != 0) {
    if (((byte)(&UNK_0000286d)[lRam00000000020973e0] >> 1 & 1) == 0) {
      return true;
    }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    FUN_00306844(param_1);
    func_0x002fd6a4("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> always, no register\n");
    return true;
  }
  if (*(int *)(&UNK_0000151c + lRam00000000020973e0) != 0 &&
      *(int *)(&UNK_0000151c + lRam00000000020973e0) != param_3) {
    if ((uVar1 >> 10 & 1) != 0) {
      return false;
    }
    if ((((*(char *)(lRam00000000020973e0 + 0xd2) == '\x01') && ((param_1 & 0x5000) != 0x1000)) &&
        (((param_1 >> 0xc & 1) == 0 || ((*(byte *)(lRam00000000020973e0 + 0x79) & 1) == 0)))) &&
       (((param_1 & 0xffff0fff) != 0 &&
        ((*(uint *)(&UNK_00001580 +
                   lRam00000000020973e0 + (long)((int)((param_1 & 0xffff0fff) - 0x200) >> 5) * 4) >>
          (ulong)(param_1 & 0x1f) & 1) != 0)))) {
      if (((byte)(&UNK_0000286d)[lRam00000000020973e0] >> 1 & 1) == 0) {
        return false;
      }
      FUN_00306844(param_1);
      func_0x002fd6a4(
                     "SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> filtered as potential char input\n"
                     );
      return false;
    }
    if (((uVar1 >> 0xf & 1) == 0) && ((&UNK_00001e34)[lRam00000000020973e0] == '\x01')) {
      uVar10 = param_1 & 0xffff0fff;
      if ((param_1 & 0xffff0fff) == 0) {
        uVar2 = param_1 - 0x1000 >> 0xc;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        uVar10 = param_1;
        if ((uVar2 < 8) && ((1 << (ulong)(uVar2 & 0x1f) & 0x8bU) != 0)) goto LAB_00318cb0;
      }
      if (0xffffff87 < uVar10 - 0x278) {
        return false;
      }
    }
  }
LAB_00318cb0:
  if ((uVar1 >> 0x11 & 1) == 0) {
    piVar11 = (int *)(&UNK_00001e3c + lRam00000000020973e0);
    if ((uVar1 >> 0xb & 1) != 0) goto LAB_00318cc4;
LAB_00318dd4:
    if ((uVar1 >> 10 & 1) == 0) {
      if ((uVar1 >> 0xc & 1) == 0) goto LAB_00318e44;
      if ((uVar1 >> 0xf & 1) != 0) {
        iVar9 = 400;
        goto LAB_00318e48;
      }
      if ((param_3 == 0) || (*(int *)(&UNK_0000151c + lRam00000000020973e0) != param_3)) {
        iVar9 = 200;
        if ((uVar1 & 0x4000) == 0) {
          iVar9 = 1;
        }
        goto LAB_00318e48;
      }
    }
    else if ((param_3 == 0) || (*(int *)(&UNK_0000151c + lRam00000000020973e0) != param_3)) {
LAB_00318e44:
      iVar9 = 0;
      goto LAB_00318e48;
/* WM - donate: donate/README.md */
    }
  }
  else {
    piVar11 = (int *)(*(long *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x3c0) + 0x10);
    if ((uVar1 >> 0xb & 1) == 0) goto LAB_00318dd4;
LAB_00318cc4:
    if ((param_3 == 0) || (*(int *)(&UNK_0000151c + lRam00000000020973e0) != param_3)) {
      if ((*piVar11 != 0) &&
         (uVar12 = (ulong)*(uint *)(&UNK_00002020 + lRam00000000020973e0),
         0 < (int)*(uint *)(&UNK_00002020 + lRam00000000020973e0))) {
        iVar9 = 599;
        piVar13 = *(int **)(&UNK_00002028 + lRam00000000020973e0);
        do {
          if (*piVar13 == *piVar11) {
            if ((uVar1 & 0x8000) == 0) {
              iVar9 = iVar9 + -400;
            }
            goto LAB_00318e48;
          }
          iVar9 = iVar9 + -1;
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 2;
// thanks for reading - discord.gg/sdkhDjTex
        } while (uVar12 != 0);
      }
      goto LAB_00318e44;
    }
  }
  iVar9 = 300;
LAB_00318e48:
  if (((byte)(&UNK_0000286d)[lRam00000000020973e0] >> 1 & 1) != 0) {
    FUN_00306844(param_1);
    func_0x002fd6a4("SetShortcutRouting(%s, flags=%04X, owner_id=0x%08X) -> score %d\n");
  }
  lVar7 = lRam00000000020973e0;
  if (iVar9 == 0) {
    return false;
  }
  uVar1 = param_1 & 0xf000;
  uVar10 = param_1 & 0xffff0fff;
  if ((param_1 & 0xffff0fff) == 0) {
    uVar10 = uVar1;
    if ((param_1 - 0x1000 >> 0xf == 0) &&
       (uVar2 = param_1 - 0x1000 >> 0xc, (0x8bU >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
      uVar10 = *(uint *)(&UNK_01adf7a8 + (ulong)uVar2 * 4);
    }
  }
  psVar16 = (short *)(&UNK_000018d8 + lRam00000000020973e0 + (long)(int)uVar10 * 2);
  psVar15 = psVar16;
  do {
    if ((long)*psVar15 == -1) {
      uVar4 = *(undefined4 *)(&UNK_00001e10 + lRam00000000020973e0);
      uStack_60 = 0xffff;
      uStack_58 = 0xffffffffffffffff;
      func_0x00318510(&UNK_00001e10 + lRam00000000020973e0,&uStack_60);
      psVar15 = (short *)(*(long *)(&UNK_00001e18 + lVar7) + (long)(short)uVar4 * 0x10);
      psVar15[1] = (short)uVar1;
      *psVar15 = *psVar16;
      *psVar16 = (short)uVar4;
      uVar5 = psVar15[3];
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      goto joined_r0x00318f94;
    }
    psVar15 = (short *)(*(long *)(&UNK_00001e18 + lRam00000000020973e0) + (long)*psVar15 * 0x10);
  } while (uVar1 != (ushort)psVar15[1]);
  uVar5 = psVar15[3];
joined_r0x00318f94:
  if ((int)(uint)uVar5 < iVar9) {
    *(int *)(psVar15 + 6) = param_3;
    psVar15[3] = (short)iVar9;
  }
  iVar9 = *(int *)(psVar15 + 4);
  if ((*(int *)(psVar15 + 4) == param_3) &&
     (iVar9 = param_3, ((byte)(&UNK_0000286d)[lVar6] >> 1 & 1) != 0)) {
    func_0x002fd6a4("--> granting current route\n");
    iVar9 = *(int *)(psVar15 + 4);
  }
  return iVar9 == param_3;
}
/* wm:proprietary - see LICENSE - do not sell */

