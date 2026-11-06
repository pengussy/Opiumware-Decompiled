/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xcd550:fa2ba6fbef
   =========================================================================== */

void FUN_000cd550(undefined8 param_1,long *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
// WM - no support for modified copies
  long lStack_c0;
  ulong *puStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined1 uStack_7f;
  ulong *puStack_78;
  ulong *puStack_70;
  
  if (((*param_2 != lRam0000000001f270e0) || (cRam0000000002097053 != '\x01')) ||
     (bRam0000000001f270e8 != 1 || lRam0000000001f26f88 == 0)) {
LAB_000cd5dc:
    *(undefined1 *)((long)param_2 + 0x3a) = 1;
    return;
  }
  lVar7 = func_0x00791618();
  lVar8 = func_0x00791618(param_1);
  if (lVar7 != lVar8) goto LAB_000cd5dc;
/* proprietary - see LICENSE - do not sell */
  func_0x000cd348(&puStack_78,param_2[1]);
  plVar13 = param_2 + 4;
  lVar8 = *plVar13;
  lVar7 = param_2[5] - lVar8;
  if (lVar7 == 0) {
    lStack_c0 = 0;
    lVar9 = 0;
    puStack_98 = puStack_70;
    if (puStack_78 == puStack_70) goto LAB_000cd860;
  }
  else {
    if (lVar7 < 0) {
      FUN_0000abb4();
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0xcd8f4);
      (*pcVar4)();
    }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    lVar9 = __Znwm(lVar7);
    lStack_c0 = lVar9 + lVar7;
    _memcpy(lVar9,lVar8,lVar7);
    puStack_98 = puStack_70;
    if (puStack_78 == puStack_70) {
LAB_000cd860:
      bVar3 = 0;
      bVar2 = *(byte *)((long)param_2 + 0x3a);
      goto joined_r0x000cd840;
    }
  }
  puVar15 = puStack_78;
  puVar10 = (undefined1 *)(*pcRam000000000205de10)();
  plVar11 = (long *)(*pcRam000000000205dde0)();
  bVar3 = 0;
  do {
    while( true ) {
      uVar16 = *puVar15;
      if (((*param_2 != lRam0000000001f270e0) || (cRam0000000002097053 != '\x01')) ||
// WM - watermarked copy - do not remove
         ((bRam0000000001f270e8 & 1) == 0)) {
        *(undefined1 *)((long)param_2 + 0x3a) = 1;
        goto LAB_000cd83c;
      }
      __ZNSt3__15mutex4lockEv(0x1f26e70);
      puVar14 = puRam0000000001f26f00;
      if (puRam0000000001f26f00 == puRam0000000001f26f08) break;
      do {
        if (*puVar14 == uVar16) goto LAB_000cd70c;
        puVar14 = puVar14 + 2;
      } while (puVar14 != puRam0000000001f26f08);
LAB_000cd68c:
      __ZNSt3__15mutex6unlockEv(0x1f26e70);
      puVar15 = puVar15 + 1;
      if (puVar15 == puStack_98) goto LAB_000cd83c;
    }
LAB_000cd70c:
    if ((puVar14 == puRam0000000001f26f08) || ((ulong)param_2[1] < *puVar14)) goto LAB_000cd68c;
    uVar16 = puVar14[1];
    __ZNSt3__15mutex6unlockEv(0x1f26e70);
    uVar12 = func_0x00791650(param_1);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
    uVar1 = *puVar10;
    *puVar10 = 1;
    func_0x00793928(param_1,0xffffd8f0,(int)uVar16);
    iVar6 = func_0x00791be4(param_1,0xffffffff);
    if (iVar6 == 8) {
      FUN_000cbb1c(param_1,plVar13,param_2 + 2);
      bStack_80 = 0;
      uStack_88 = 0;
      uStack_7f = 1;
      plStack_90 = plVar13;
      uStack_88 = func_0x007929a0(param_1,0xffffffff);
      lVar7 = *plVar11;
      *plVar11 = (long)&plStack_90;
      func_0x00794a14(param_1,1,0,0);
      bVar2 = bStack_80;
      func_0x00791660(param_1,uVar12);
      bVar3 = bVar2 | bVar3 & 1;
      *plVar11 = lVar7;
    }
    else {
      func_0x00791660(param_1,uVar12);
    }
    *puVar10 = uVar1;
    puVar15 = puVar15 + 1;
  } while (puVar15 != puStack_98);
LAB_000cd83c:
  bVar2 = *(byte *)((long)param_2 + 0x3a);
joined_r0x000cd840:
  if (((bVar2 & 1) == 0) && (*param_2 == lRam0000000001f270e0)) {
    if (param_2[5] - param_2[4] == lStack_c0 - lVar9) {
      iVar6 = _memcmp(param_2[4],lVar9);
      bVar5 = iVar6 != 0;
    }
    else {
      bVar5 = true;
    }
    *(bool *)(param_2 + 7) = bVar5;
/* no support for modified copies */
    *(byte *)((long)param_2 + 0x39) = bVar3 & 1;
  }
  else {
    *(undefined1 *)((long)param_2 + 0x3a) = 1;
  }
  if (lVar9 != 0) {
    __ZdlPv(lVar9);
  }
  if (puStack_78 == (ulong *)0x0) {
    return;
  }
  puStack_70 = puStack_78;
  __ZdlPv();
  return;
}

