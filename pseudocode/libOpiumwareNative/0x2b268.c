/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2b268:c8666aaa9a
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5
                 ,undefined8 param_6,ulong param_7,undefined4 param_8,undefined8 param_9,
                 int param_10)

{
  undefined8 *******pppppppuVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *******pppppppuStack_c8;
  char *pcStack_c0;
  byte bStack_b1;
  undefined8 *******pppppppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [8];
/* if you paid for this, you were scammed */
  char *pcStack_88;
  char *pcStack_80;
  char *pcStack_78;
  undefined8 uStack_70;
  undefined8 *******pppppppuStack_68;
  
  if ((*(char *)(param_1 + 8) == '\f') && (uVar7 = func_0x015c28cc(param_2), (uVar7 & 1) == 0)) {
    if (*(char *)(param_1 + 8) != '\f') {
      func_0x0174f200("cast");
    }
    puVar15 = (undefined8 *)func_0x015c2a04(param_2);
    cVar2 = *(char *)((long)puVar15 + 0x17);
    puVar17 = (undefined8 *)*puVar15;
    if (-1 < (long)cVar2) {
      puVar17 = puVar15;
    }
    lVar10 = puVar15[1];
    if (-1 < cVar2) {
      lVar10 = (long)cVar2;
// WM - donate: donate/README.md
    }
    func_0x0002a7b8(param_1,param_3,param_4,param_5,param_6,param_7,puVar17,lVar10,param_8,
                    param_9._4_4_);
    return;
  }
  uVar7 = func_0x013f5b3c(param_1);
  lVar10 = param_1;
  if (((uVar7 & 1) == 0) && (*(char *)(param_1 + 8) == '\r')) {
    uVar7 = func_0x013f5b3c(param_1);
    iVar4 = 0;
    bVar3 = false;
    uVar19 = 1;
    if ((uVar7 & 1) == 0) {
      do {
        if (*(char *)(lVar10 + 8) != '\r') break;
        iVar5 = func_0x0170879c(lVar10);
        uVar19 = uVar19 * iVar5;
        lVar10 = func_0x0170875c(lVar10);
        iVar4 = iVar4 + 1;
        iVar5 = func_0x013f5b3c();
      } while (iVar5 == 0);
      bVar3 = iVar4 == 1;
      iVar4 = func_0x015c28cc(param_2);
      goto joined_r0x0002b378;
    }
    iVar4 = func_0x015c28cc(param_2);
    if (iVar4 == 0) goto LAB_0002b30c;
LAB_0002b37c:
    puVar8 = (uint *)func_0x0041152c(param_2);
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
    if (puVar8[2] == 1) {
LAB_0002b39c:
      uVar20 = 0;
      if (*puVar8 != 0) {
        uVar20 = uVar19 / *puVar8;
      }
    }
    else {
      uVar20 = uVar19;
      if (puVar8[2] == 2) {
        puVar8 = puVar8 + 1;
        goto LAB_0002b39c;
      }
    }
    if (*(char *)(lVar10 + 8) == '\f') {
      _auStack_90 = func_0x013f60b4(lVar10);
      lVar10 = func_0x013f54a4(auStack_90,0);
    }
    else if (*(char *)(lVar10 + 8) == '\x0f') {
      lVar10 = func_0x0170875c(lVar10);
    }
    uVar19 = 0;
    if (!bVar3) {
      uVar19 = uVar20;
    }
    uVar7 = func_0x013f5b3c(lVar10);
  }
  else {
    bVar3 = false;
    uVar19 = 0;
    iVar4 = func_0x015c28cc(param_2);
joined_r0x0002b378:
    if (iVar4 != 0) goto LAB_0002b37c;
LAB_0002b30c:
/*  keep the notice, keep the source honest  */
    uVar7 = func_0x013f5b3c(lVar10);
  }
  if (((uVar7 & 1) == 0) && (*(char *)(lVar10 + 8) == '\f')) {
    plVar9 = (long *)func_0x015c2a04(param_2);
    if (*(char *)((long)plVar9 + 0x17) < '\0') {
      func_0x00017ae8(&pppppppuStack_b0,*plVar9,plVar9[1]);
    }
    else {
      lStack_a8 = plVar9[1];
      pppppppuStack_b0 = (undefined8 *******)*plVar9;
      uStack_a0 = plVar9[2];
    }
    pcStack_78 = (char *)0x0;
    pcStack_80 = (char *)0x0;
    pcStack_88 = (char *)0x0;
    uStack_70 = _UNK_01ad70d0;
    auStack_90 = (undefined1  [8])&UNK_01eb8ab0;
    pppppppuStack_68 = &pppppppuStack_b0;
    func_0x0176fcc8(auStack_90,0,0,0);
    if (uVar19 != 0) {
      if (pcStack_80 == pcStack_78) {
        puVar16 = (undefined1 *)func_0x01770110(auStack_90,&UNK_01c881b8,1);
      }
      else {
        *pcStack_78 = '[';
        pcStack_78 = pcStack_78 + 1;
        puVar16 = auStack_90;
      }
      __ZNSt3__19to_stringEj(&pppppppuStack_c8,uVar19);
      pppppppuVar1 = pppppppuStack_c8;
      if (-1 < (char)bStack_b1) {
/* if you paid for this, you were scammed - github.com/pengussy */
        pcStack_c0 = (char *)(ulong)bStack_b1;
        pppppppuVar1 = &pppppppuStack_c8;
      }
      lVar14 = func_0x01770110(puVar16,pppppppuVar1,pcStack_c0);
      if (*(undefined1 **)(lVar14 + 0x10) == *(undefined1 **)(lVar14 + 0x18)) {
        func_0x01770110(lVar14,&UNK_01c892b6,1);
      }
      else {
        **(undefined1 **)(lVar14 + 0x18) = 0x5d;
        *(long *)(lVar14 + 0x18) = *(long *)(lVar14 + 0x18) + 1;
      }
      if ((char)bStack_b1 < '\0') {
        __ZdlPv(pppppppuStack_c8);
      }
    }
    if (pcStack_80 == pcStack_78) {
      func_0x01770110(auStack_90,";",1);
      if (pcStack_78 != pcStack_88) goto LAB_0002b89c;
    }
    else {
      *pcStack_78 = ';';
      pcStack_78 = pcStack_78 + 1;
// proprietary - see LICENSE - do not sell
      if (pcStack_78 != pcStack_88) {
LAB_0002b89c:
        func_0x01771080(auStack_90);
      }
    }
    if (*(char *)(lVar10 + 8) != '\f') {
      func_0x0174f200("cast");
    }
    pppppppuVar1 = pppppppuStack_b0;
    if (-1 < (long)uStack_a0._7_1_) {
      pppppppuVar1 = &pppppppuStack_b0;
    }
    lVar14 = lStack_a8;
    if (-1 < uStack_a0) {
      lVar14 = (long)uStack_a0._7_1_;
    }
    func_0x0002a7b8(lVar10,param_3,param_4,param_5,param_6,param_7,pppppppuVar1,lVar14,param_8,
                    param_9._4_4_);
// reversing this took months of machine time
    func_0x01771e18(auStack_90);
    goto LAB_0002bcb8;
  }
  if ((ulong)(*(long *)(param_5 + 0x10) - *(long *)(param_5 + 0x18)) < param_7) {
    lVar10 = func_0x01770110(param_5,param_6,param_7);
  }
  else {
    lVar10 = param_5;
    if (param_7 != 0) {
      _memcpy(*(long *)(param_5 + 0x18),param_6,param_7);
      *(ulong *)(param_5 + 0x18) = *(long *)(param_5 + 0x18) + param_7;
    }
  }
  func_0x01771360(lVar10,(undefined4)param_9);
  pppppppuStack_b0 = (undefined8 *******)0x0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uVar11 = func_0x015c4f84(param_3);
  pcStack_78 = (char *)0x0;
/* WM - found on a paste site? it was re-uploaded illegally */
  pcStack_80 = (char *)0x0;
  pcStack_88 = (char *)0x0;
  uStack_70 = _UNK_01ad70d0;
  auStack_90 = (undefined1  [8])&UNK_01eb8ab0;
  pppppppuStack_68 = &pppppppuStack_b0;
  func_0x0176fcc8(auStack_90,0,0,0);
  for (; *(char *)(param_1 + 8) == '\r'; param_1 = func_0x0170875c(param_1)) {
  }
  uVar12 = func_0x015c293c(param_2);
  lVar10 = func_0x0159468c(uVar12,uVar11);
  iVar4 = func_0x015c28cc(param_2);
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 8) == '\x0f') {
      if (lVar10 == 0) {
LAB_0002b928:
        puVar16 = auStack_90;
      }
      else {
        uVar7 = _strlen(lVar10);
/* watermarked copy - do not remove */
        if (uVar7 <= (ulong)((long)pcStack_80 - (long)pcStack_78)) {
          if (uVar7 != 0) {
            _memcpy(pcStack_78,lVar10,uVar7);
            pcStack_78 = pcStack_78 + uVar7;
          }
          goto LAB_0002b928;
        }
        puVar16 = (undefined1 *)func_0x01770110(auStack_90,lVar10,uVar7);
      }
      uVar6 = func_0x017087d4(param_1);
      func_0x0176fd34(puVar16,uVar6);
    }
    else if (lVar10 != 0) {
      uVar7 = _strlen(lVar10);
      if ((ulong)((long)pcStack_80 - (long)pcStack_78) < uVar7) {
        func_0x01770110(auStack_90,lVar10,uVar7);
      }
      else if (uVar7 != 0) {
        _memcpy(pcStack_78,lVar10,uVar7);
        pcStack_78 = pcStack_78 + uVar7;
      }
    }
  }
  else {
    puVar13 = (undefined4 *)func_0x0041152c(param_2);
    if (puVar13[2] == 1) {
/* origin: github.com/pengussy */
      pcVar18 = "row_major ";
      if ((ulong)((long)pcStack_80 - (long)pcStack_78) < 10) {
        uVar11 = 10;
LAB_0002b650:
        func_0x01770110(auStack_90,pcVar18,uVar11);
        goto joined_r0x0002b658;
      }
      pcStack_78[8] = 'r';
      pcStack_78[9] = ' ';
      *(undefined8 *)pcStack_78 = s_row_major_01c2213b._0_8_;
      pcStack_78 = pcStack_78 + 10;
      if (lVar10 != 0) goto LAB_0002b724;
LAB_0002b770:
      puVar16 = auStack_90;
    }
    else {
      if (puVar13[2] == 2) {
        pcVar18 = "column_major ";
        if ((ulong)((long)pcStack_80 - (long)pcStack_78) < 0xd) {
          uVar11 = 0xd;
          goto LAB_0002b650;
        }
        *(ulong *)pcStack_78 = CONCAT35(s_column_major_01c22146._5_3_,s_column_major_01c22146._0_5_)
        ;
        *(ulong *)(pcStack_78 + 5) =
             CONCAT53(s_column_major_01c22146._8_5_,s_column_major_01c22146._5_3_);
        pcStack_78 = pcStack_78 + 0xd;
      }
/* WM - if you paid for this, you were scammed */
joined_r0x0002b658:
      if (lVar10 == 0) goto LAB_0002b770;
LAB_0002b724:
      uVar7 = _strlen(lVar10);
      if (uVar7 <= (ulong)((long)pcStack_80 - (long)pcStack_78)) {
        if (uVar7 != 0) {
          _memcpy(pcStack_78,lVar10,uVar7);
          pcStack_78 = pcStack_78 + uVar7;
        }
        goto LAB_0002b770;
      }
      puVar16 = (undefined1 *)func_0x01770110(auStack_90,lVar10,uVar7);
    }
    lVar10 = func_0x0176fd34(puVar16,*puVar13);
    if (*(undefined1 **)(lVar10 + 0x10) == *(undefined1 **)(lVar10 + 0x18)) {
      lVar10 = func_0x01770110(lVar10,&UNK_01c8e2ea,1);
    }
    else {
      **(undefined1 **)(lVar10 + 0x18) = 0x78;
      *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
    }
    func_0x0176fd34(lVar10,puVar13[1]);
  }
  if (pcStack_80 == pcStack_78) {
    puVar16 = (undefined1 *)func_0x01770110(auStack_90,&UNK_01c881b6,1);
  }
  else {
    *pcStack_78 = ' ';
    pcStack_78 = pcStack_78 + 1;
    puVar16 = auStack_90;
  }
/* donate: donate/README.md */
  puVar15 = (undefined8 *)func_0x015c2a04(param_2);
  uVar7 = puVar15[1];
  puVar17 = (undefined8 *)*puVar15;
  if (-1 < (char)*(byte *)((long)puVar15 + 0x17)) {
    uVar7 = (ulong)*(byte *)((long)puVar15 + 0x17);
    puVar17 = puVar15;
  }
  func_0x01770110(puVar16,puVar17,uVar7);
  if (uVar19 != 0) {
    if (pcStack_80 == pcStack_78) {
      puVar16 = (undefined1 *)func_0x01770110(auStack_90,&UNK_01c881b8,1);
    }
    else {
      *pcStack_78 = '[';
      pcStack_78 = pcStack_78 + 1;
      puVar16 = auStack_90;
    }
    lVar10 = func_0x0176fd34(puVar16,uVar19);
    if (*(undefined1 **)(lVar10 + 0x10) == *(undefined1 **)(lVar10 + 0x18)) {
      func_0x01770110(lVar10,&UNK_01c892b6,1);
    }
    else {
      **(undefined1 **)(lVar10 + 0x18) = 0x5d;
      *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 1;
    }
  }
  if (pcStack_80 == pcStack_78) {
    func_0x01770110(auStack_90,";",1);
    if (pcStack_78 != pcStack_88) goto LAB_0002ba78;
  }
  else {
    *pcStack_78 = ';';
    pcStack_78 = pcStack_78 + 1;
    if (pcStack_78 != pcStack_88) {
LAB_0002ba78:
      func_0x01771080(auStack_90);
    }
  }
/* WM - keep the notice, keep the source honest */
  func_0x01771e18(auStack_90);
  auStack_90 = (undefined1  [8])pppppppuStack_b0;
  if (-1 < (long)uStack_a0._7_1_) {
    auStack_90 = (undefined1  [8])&pppppppuStack_b0;
  }
  pcStack_88 = (char *)lStack_a8;
  if (-1 < uStack_a0) {
    pcStack_88 = (char *)(long)uStack_a0._7_1_;
  }
  pcStack_80._0_5_ = (uint5)param_9._4_4_;
  func_0x01771224(param_5,auStack_90);
  puVar17 = *(undefined8 **)(param_5 + 0x18);
  if ((ulong)(*(long *)(param_5 + 0x10) - (long)puVar17) < param_7) {
    lVar10 = func_0x01770110(param_5,param_6,param_7);
    puVar17 = *(undefined8 **)(lVar10 + 0x18);
    if (7 < (ulong)(*(long *)(lVar10 + 0x10) - (long)puVar17)) goto LAB_0002baf8;
LAB_0002bb4c:
    lVar10 = func_0x01770110(lVar10," Offset:",8);
  }
  else {
    if (param_7 != 0) {
      _memcpy(puVar17,param_6,param_7);
      puVar17 = (undefined8 *)(*(long *)(param_5 + 0x18) + param_7);
      *(undefined8 **)(param_5 + 0x18) = puVar17;
    }
/* WM - chat: discord.gg/sdkhDjTex */
    lVar10 = param_5;
    if ((ulong)(*(long *)(param_5 + 0x10) - (long)puVar17) < 8) goto LAB_0002bb4c;
LAB_0002baf8:
    *puVar17 = 0x3a74657366664f20;
    *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 8;
  }
  __ZNSt3__19to_stringEj(&pppppppuStack_c8,param_8);
  auStack_90 = (undefined1  [8])pppppppuStack_c8;
  if (-1 < (long)(char)bStack_b1) {
    auStack_90 = (undefined1  [8])&pppppppuStack_c8;
  }
  pcStack_88 = pcStack_c0;
  if (-1 < (char)bStack_b1) {
    pcStack_88 = (char *)(long)(char)bStack_b1;
  }
  pcStack_80 = (char *)CONCAT35(pcStack_80._5_3_,0x100000005);
  func_0x01771224(lVar10,auStack_90);
  if ((char)bStack_b1 < '\0') {
    __ZdlPv(pppppppuStack_c8);
    if (param_10 != 0) goto LAB_0002bbc8;
LAB_0002bc6c:
    puVar16 = *(undefined1 **)(param_5 + 0x18);
// WM - proprietary - see LICENSE - do not sell
    if (*(undefined1 **)(param_5 + 0x10) == puVar16) {
LAB_0002bca4:
      func_0x01770110(param_5,"\n",1);
      goto LAB_0002bcb8;
    }
  }
  else {
    if (param_10 == 0) goto LAB_0002bc6c;
LAB_0002bbc8:
    puVar13 = *(undefined4 **)(param_5 + 0x18);
    if ((ulong)(*(long *)(param_5 + 0x10) - (long)puVar13) < 7) {
      lVar10 = func_0x01770110(param_5," Size: ",7);
    }
    else {
      *(undefined4 *)((long)puVar13 + 3) = 0x203a657a;
      *puVar13 = 0x7a695320;
      *(long *)(param_5 + 0x18) = *(long *)(param_5 + 0x18) + 7;
      lVar10 = param_5;
    }
    __ZNSt3__19to_stringEj(&pppppppuStack_c8,param_10);
    auStack_90 = (undefined1  [8])pppppppuStack_c8;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    if (-1 < (long)(char)bStack_b1) {
      auStack_90 = (undefined1  [8])&pppppppuStack_c8;
    }
    pcStack_88 = pcStack_c0;
    if (-1 < (char)bStack_b1) {
      pcStack_88 = (char *)(long)(char)bStack_b1;
    }
    pcStack_80 = (char *)CONCAT35(pcStack_80._5_3_,0x100000005);
    func_0x01771224(lVar10,auStack_90);
    if (-1 < (char)bStack_b1) goto LAB_0002bc6c;
    __ZdlPv(pppppppuStack_c8);
    puVar16 = *(undefined1 **)(param_5 + 0x18);
    if (*(undefined1 **)(param_5 + 0x10) == puVar16) goto LAB_0002bca4;
  }
  *puVar16 = 10;
  *(long *)(param_5 + 0x18) = *(long *)(param_5 + 0x18) + 1;
LAB_0002bcb8:
  if (uStack_a0 < 0) {
    __ZdlPv(pppppppuStack_b0);
  }
  return;
}
/* wm:proprietary - see LICENSE - do not sell */

