/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37d970:9173fc58d9
 */

undefined8 FUN_0037d970(long *param_1,long param_2,long param_3,ulong param_4,long *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long extraout_x1;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  
  lVar7 = param_1[4];
  lStack_68 = 0;
  lVar5 = param_2;
  lVar8 = param_3;
  if ((*(byte *)(lVar7 + 0x88) >> 2 & 1) != 0) {
    if ((((*(byte *)(lVar7 + 0xa8) >> 1 & 1) == 0) && (*(long *)(lVar7 + 0x90) != param_2)) ||
       (param_3 != *(long *)(lVar7 + 0x98))) {
      uVar3 = 0xaa0;
      puVar4 = (undefined *)0x7f;
      goto LAB_0037dabc;
    }
    lVar5 = param_2 + *(long *)(lVar7 + 0xa0);
/*  origin: github.com/pengussy  */
    lVar8 = param_3 - *(long *)(lVar7 + 0xa0);
  }
  iVar2 = func_0x0037f1c4(lVar7,lVar5,lVar8,&lStack_68);
  lVar5 = lStack_68;
  if (iVar2 != 0) {
    lVar6 = *param_1;
    do {
      bVar1 = *(byte *)(lVar6 + 0x70) >> 5 & 3;
      if (bVar1 != 0) break;
      lVar6 = *(long *)(lVar6 + 0x40);
    } while (lVar6 != 0);
    if (lStack_68 != 0) {
      uVar3 = func_0x003754c8(*(undefined8 *)(*(long *)(lVar7 + 0x78) + 0xa0));
      func_0x003894ac(uVar3,*(undefined8 *)(lVar7 + 0x80));
    }
    if (((param_4 & 1) != 0) && (lVar5 == lVar8)) {
      func_0x00388db0(*(undefined8 *)(*(long *)(lVar7 + 0x80) + 0x70));
    }
    if (bVar1 != 2) {
      uVar3 = func_0x003754c0(*(undefined8 *)(*(long *)(lVar7 + 0x78) + 0xa0));
      func_0x003827d0(uVar3,0);
    }
    bVar1 = *(byte *)(lVar7 + 0x88);
    if (lStack_68 == lVar8) {
      if ((bVar1 >> 2 & 1) == 0) {
        *param_5 = lVar8;
        return 1;
      }
      *param_5 = *(long *)(lVar7 + 0x98);
      *(byte *)(lVar7 + 0x88) = *(byte *)(lVar7 + 0x88) & 0xfb;
      *(undefined8 *)(lVar7 + 0x98) = 0;
      *(undefined8 *)(lVar7 + 0xa0) = 0;
      *(undefined8 *)(lVar7 + 0x90) = 0;
      return 1;
    }
    if ((bVar1 >> 2 & 1) == 0) {
/* donate: donate/README.md */
      if (lStack_68 != 0) {
        *(byte *)(lVar7 + 0x88) = bVar1 | 4;
        *(long *)(lVar7 + 0x98) = param_3;
        *(long *)(lVar7 + 0xa0) = lStack_68;
        *(long *)(lVar7 + 0x90) = param_2;
      }
      *param_5 = 0;
      if (*(int *)((long)param_1 + 0x34) == 0) {
        return 0;
      }
      iVar2 = (int)param_1[5];
    }
    else {
      *(long *)(lVar7 + 0xa0) = *(long *)(lVar7 + 0xa0) + lStack_68;
      if (*(int *)((long)param_1 + 0x34) == 0) {
        return 0;
      }
      iVar2 = (int)param_1[5];
    }
    if (iVar2 != 0) {
      if (param_1[4] == 0) {
        return 0;
      }
      *(undefined4 *)(param_1[4] + 0xb8) = 3;
      return 0;
    }
    if (param_1[3] == 0) {
      return 0;
    }
    *(undefined4 *)(param_1[3] + 0x178) = 3;
    return 0;
/* donate: donate/README.md - github.com/pengussy */
  }
  *param_5 = 0;
  uVar3 = 0xaae;
  puVar4 = &UNK_000c0103;
  param_2 = extraout_x1;
LAB_0037dabc:
  func_0x0037b358(param_1,param_2,uVar3,"quic_write_nonblocking_aon",puVar4,0);
  return 0;
}

