/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x304440:994a56af1f
   =========================================================================== */

void FUN_00304440(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  lVar4 = lRam00000000020973e0;
  *(undefined4 *)(&UNK_0000272c + lRam00000000020973e0) = 0;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(&UNK_00002734 + lVar4) < 0) {
    uVar3 = (*pcRam0000000002057e10)(0,uRam00000000020932e8);
    lVar5 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
      iVar7 = *(int *)(lRam00000000020973e0 + 4);
      lVar8 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar8 * 8 + lRam00000000020973e0) != iVar7) {
        iVar2 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar2;
        lVar8 = (long)iVar2;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar2 * 8 + lVar5);
        *piVar1 = iVar7;
        piVar1[1] = 0;
      }
      lVar8 = lVar8 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar8 + 4) = *(short *)(&UNK_00002938 + lVar8 + 4) + 1;
      *(int *)(&UNK_0000292c + lVar5) = *(int *)(&UNK_0000292c + lVar5) + 1;
    }
    if (*(long *)(&UNK_00002738 + lVar4) != 0) {
      _memcpy(uVar3,*(long *)(&UNK_00002738 + lVar4),(long)*(int *)(&UNK_00002730 + lVar4));
/* no support for modified copies */
      lVar5 = lRam00000000020973e0;
      lVar8 = *(long *)(&UNK_00002738 + lVar4);
      if ((lVar8 != 0) && (lRam00000000020973e0 != 0)) {
        iVar7 = *(int *)(lRam00000000020973e0 + 4);
        lVar6 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
        if (*(int *)(&UNK_00002938 + lVar6 * 8 + lRam00000000020973e0) != iVar7) {
          iVar2 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
          *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar2;
          lVar6 = (long)iVar2;
          piVar1 = (int *)(&UNK_00002938 + (long)iVar2 * 8 + lVar5);
          *piVar1 = iVar7;
          piVar1[1] = 0;
        }
        lVar6 = lVar6 * 8 + lVar5;
        *(short *)(&UNK_00002938 + lVar6 + 6) = *(short *)(&UNK_00002938 + lVar6 + 6) + 1;
        *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
      }
      (*pcRam0000000002057e18)(lVar8,uRam00000000020932e8);
    }
    *(undefined8 *)(&UNK_00002738 + lVar4) = uVar3;
    *(undefined8 *)(&UNK_00002730 + lVar4) = 0;
  }
  else {
    *(undefined4 *)(&UNK_00002730 + lVar4) = 0;
    if (*(int *)(&UNK_00002734 + lVar4) != 0) {
      lVar5 = 0;
      goto LAB_00304720;
    }
  }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  uVar3 = (*pcRam0000000002057e10)(8,uRam00000000020932e8);
  lVar5 = lRam00000000020973e0;
  if (lRam00000000020973e0 != 0) {
    iVar7 = *(int *)(lRam00000000020973e0 + 4);
    lVar8 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
    if (*(int *)(&UNK_00002938 + lVar8 * 8 + lRam00000000020973e0) != iVar7) {
      iVar2 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
      *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar2;
      lVar8 = (long)iVar2;
      piVar1 = (int *)(&UNK_00002938 + (long)iVar2 * 8 + lVar5);
      *piVar1 = iVar7;
      piVar1[1] = 0;
    }
    lVar8 = lVar8 * 8 + lVar5;
    *(short *)(&UNK_00002938 + lVar8 + 4) = *(short *)(&UNK_00002938 + lVar8 + 4) + 1;
    *(int *)(&UNK_0000292c + lVar5) = *(int *)(&UNK_0000292c + lVar5) + 1;
  }
  if (*(long *)(&UNK_00002738 + lVar4) != 0) {
    _memcpy(uVar3,*(long *)(&UNK_00002738 + lVar4),(long)*(int *)(&UNK_00002730 + lVar4));
    lVar5 = lRam00000000020973e0;
    lVar8 = *(long *)(&UNK_00002738 + lVar4);
    if ((lVar8 != 0) && (lRam00000000020973e0 != 0)) {
      iVar7 = *(int *)(lRam00000000020973e0 + 4);
      lVar6 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar6 * 8 + lRam00000000020973e0) != iVar7) {
        iVar2 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar2;
        lVar6 = (long)iVar2;
        piVar1 = (int *)(&UNK_00002938 + (long)iVar2 * 8 + lVar5);
        *piVar1 = iVar7;
        piVar1[1] = 0;
      }
/* reversing this took months of machine time */
      lVar6 = lVar6 * 8 + lVar5;
      *(short *)(&UNK_00002938 + lVar6 + 6) = *(short *)(&UNK_00002938 + lVar6 + 6) + 1;
      *(int *)(&UNK_00002930 + lVar5) = *(int *)(&UNK_00002930 + lVar5) + 1;
    }
    (*pcRam0000000002057e18)(lVar8,uRam00000000020932e8);
  }
  *(undefined8 *)(&UNK_00002738 + lVar4) = uVar3;
  *(undefined4 *)(&UNK_00002734 + lVar4) = 8;
  lVar5 = (long)*(int *)(&UNK_00002730 + lVar4);
LAB_00304720:
  *(undefined1 *)(*(long *)(&UNK_00002738 + lVar4) + lVar5) = 0;
  iVar7 = *(int *)(&UNK_00002730 + lVar4) + 1;
  *(int *)(&UNK_00002730 + lVar4) = iVar7;
  if (*(int *)(&UNK_00002740 + lVar4) != 0) {
    lVar5 = *(long *)(&UNK_00002748 + lVar4);
    lVar8 = (long)*(int *)(&UNK_00002740 + lVar4) * 0x48;
    do {
      (**(code **)(lVar5 + 0x38))(lVar4,lVar5,&UNK_00002730 + lVar4);
      lVar5 = lVar5 + 0x48;
      lVar8 = lVar8 + -0x48;
    } while (lVar8 != 0);
    iVar7 = *(int *)(&UNK_00002730 + lVar4);
  }
  lVar5 = *(long *)(&UNK_00002738 + lVar4);
  lVar4 = _fopen(param_1,&UNK_01c2ed72);
  if (lVar4 == 0) {
    return;
  }
  lVar8 = 0x20973e8;
/* WM - unlicensed copy if this notice is missing */
  if (lVar5 != 0) {
    lVar8 = lVar5;
  }
  iVar2 = 0;
  if (iVar7 != 0) {
    iVar2 = iVar7 + -1;
  }
  _fwrite(lVar8,1,(long)iVar2,lVar4);
                    /* WARNING: Could not recover jumptable at 0x01a17744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fclose_01f24968)(lVar4);
  return;
}

