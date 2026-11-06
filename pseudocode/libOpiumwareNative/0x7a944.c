/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x7a944:925bcc9693
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0007a944(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulong *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  byte bVar23;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
/* unlicensed copy if this notice is missing */
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  char *pcStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  
  iVar7 = func_0x00791be4(param_1,1);
  if (iVar7 != 8) goto LAB_0007b5c8;
  iVar7 = func_0x00791be4(param_1,2);
  if (iVar7 != 8) goto LAB_0007b9d0;
  plVar8 = (long *)func_0x00790f58(param_1,1);
  lVar20 = *plVar8;
  lStack_90 = lVar20;
  plVar8 = (long *)func_0x00790f58(param_1,2);
  lVar21 = *plVar8;
  lStack_98 = lVar21;
  uVar9 = func_0x00069924(param_1,lVar20);
  if (((uVar9 & 1) != 0) || (iVar7 = func_0x00069924(param_1,lVar21), iVar7 != 0)) {
    pbVar22 = (byte *)(*pcRam0000000002064410)();
    if ((*pbVar22 & 1) == 0) goto LAB_0007de90;
    goto LAB_0007b308;
  }
  if ((*(char *)(lVar20 + 3) == '\0') && (*(long *)(lVar20 + 0x18) != 0)) {
    puVar14 = (ulong *)(*(long *)(lVar20 + 0x18) + 0x20);
    lVar11 = 0;
    if ((ulong *)*puVar14 != puVar14) {
      lVar11 = (*puVar14 ^ (ulong)puVar14) + 0x18;
/* donate: donate/README.md */
    }
  }
  else {
    lVar11 = 0;
  }
  if (lVar20 == lVar21) {
    return 0;
  }
  func_0x00796158(param_1,1);
  func_0x00796158(param_1,2);
  lStack_88 = lVar20;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar20 = func_0x001393dc(0x20970c0,&lStack_88);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (((*(char *)(lStack_88 + 3) == '\0') || (*(undefined **)(lStack_88 + 0x18) != &DAT_000704e0))
     || (lVar20 == 0)) {
    cVar6 = *(char *)(lStack_88 + 3) != '\0';
  }
  else {
    cVar6 = '\x02';
  }
  lStack_88 = lStack_98;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar20 = func_0x001393dc(0x20970c0,&lStack_88);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (((*(char *)(lStack_88 + 3) == '\0') || (*(undefined **)(lStack_88 + 0x18) != &DAT_000704e0))
     || (lVar20 == 0)) {
    cVar4 = *(char *)(lStack_88 + 3) != '\0';
  }
  else {
    cVar4 = '\x02';
  }
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar20 = func_0x001393dc(0x20970e8,&lStack_90);
  if (lVar20 == 0) {
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
LAB_0007ab54:
    bVar5 = false;
/* do not claim this as your own - github.com/pengussy */
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x18);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if ((lVar20 == 0) || (*(char *)(lVar20 + 3) == '\0')) goto LAB_0007ab54;
    bVar5 = *(undefined **)(lVar20 + 0x18) != &DAT_000704e0;
  }
  func_0x007930d0(param_1,&DAT_000733b8,0,0,0);
  func_0x00791ab0(param_1,1);
  iVar7 = func_0x00794a14(param_1,1,1,0);
  if (iVar7 != 0) {
    return 0;
  }
  plVar8 = (long *)func_0x00790f58(param_1,0xffffffff);
  lVar21 = *plVar8;
  lVar20 = lVar21;
  if (*(char *)(lStack_90 + 3) != '\0') {
    if ((cVar4 == '\x01') && (cVar6 == '\x01' || bVar5)) {
      bVar2 = *(byte *)(lStack_98 + 4);
      lStack_88 = lStack_90;
      bVar23 = *(byte *)(lStack_90 + 4);
      __ZNSt3__15mutex4lockEv(0x1f26c70);
      lVar10 = func_0x001393dc(0x20970e8,&lStack_88);
      if ((lVar10 != 0) && (*(char *)(*(long *)(lVar10 + 0x18) + 3) != '\0')) {
        bVar3 = *(byte *)(*(long *)(lVar10 + 0x18) + 4);
        if (bVar23 <= bVar3) {
          bVar23 = bVar3;
        }
      }
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
      if (bVar23 < bVar2) goto LAB_0007bdd8;
    }
    lVar10 = lStack_90;
    lStack_88 = *(long *)(param_1 + 0x38);
    uStack_70 = 0;
    pbVar22 = *(byte **)(lStack_88 + 0x70);
    lStack_80 = lStack_90;
/*  do not claim this as your own  */
    lStack_78 = lVar21;
    if (((*(long *)(pbVar22 + 0x18) != 0) && (uVar9 = *(ulong *)(pbVar22 + 0x30), uVar9 != 0)) &&
       (uVar18 = *(long *)(pbVar22 + 0x18) + 0x30, uVar18 <= uVar9)) {
      do {
        plVar8 = *(long **)(uVar18 + 8);
        if (((*(int *)((long)plVar8 + 0xc) == 8) && (*plVar8 == lVar10)) &&
           (uStack_70 = 1, lVar21 != 0)) {
          if ((*pbVar22 >> 2 & 1) != 0) {
            func_0x0081b5c4(pbVar22,pbVar22,pbVar22 + 0x28);
            plVar8 = *(long **)(uVar18 + 8);
          }
          *plVar8 = lVar21;
          *(undefined4 *)((long)plVar8 + 0xc) = 8;
          uVar9 = *(ulong *)(pbVar22 + 0x30);
        }
        uVar18 = uVar18 + 0x30;
      } while (uVar18 <= uVar9);
    }
    func_0x0084aad0(param_1,&lStack_88,&DAT_00132344);
    if (((cVar6 == '\x01') && (*(char *)(lVar21 + 4) == '\0')) &&
       (*(undefined **)(lVar21 + 0x18) != &DAT_0007dfd8)) {
      func_0x0007e418(param_1);
      plVar8 = (long *)func_0x00790f58(param_1,0xffffffff);
      lVar20 = *plVar8;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    }
  }
  lVar10 = *(long *)(param_1 + 0x38) + (long)iRam0000000001f26d44 * 0x48;
  puVar15 = *(undefined **)(lVar10 + 0x960);
  if (((puVar15 != (undefined *)0x0 && puVar15 != &DAT_0007116c) && (*(int *)(lVar10 + 0x93c) == 8))
     && (*(long *)(lVar10 + 0x930) == lStack_90)) {
    puRam0000000002097110 = puVar15;
    *(undefined **)(lVar10 + 0x960) = &DAT_0007116c;
  }
  puVar15 = *(undefined **)(lVar10 + 0x968);
  if (((puVar15 != (undefined *)0x0 && puVar15 != &DAT_000711a4) && (*(int *)(lVar10 + 0x94c) == 8))
     && (*(long *)(lVar10 + 0x940) == lStack_90)) {
    puRam0000000002097118 = puVar15;
    *(undefined **)(lVar10 + 0x968) = &DAT_000711a4;
  }
  puVar15 = *(undefined **)(lVar10 + 0x970);
  if (((puVar15 != (undefined *)0x0 && puVar15 != &DAT_000711dc) && (*(int *)(lVar10 + 0x95c) == 8))
     && (*(long *)(lVar10 + 0x950) == lStack_90)) {
    puRam0000000002097120 = puVar15;
    *(undefined **)(lVar10 + 0x970) = &DAT_000711dc;
  }
  if (cVar6 == '\0') {
    if (cVar4 == '\x02') {
      __ZNSt3__15mutex4lockEv(0x1f26c70);
      lVar10 = func_0x001393dc(0x20970c0,&lStack_98);
      if (lVar10 == 0) goto LAB_0007ccec;
      lVar10 = *(long *)(lVar10 + 0x18);
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
      if (lVar10 == 0) goto LAB_0007ccf8;
      func_0x007930d0(param_1,&DAT_00071bb0,0,0,0);
      func_0x00791ab0(param_1,2);
      iVar7 = func_0x00794a14(param_1,1,1,0);
      if (iVar7 != 0) goto LAB_0007d698;
      func_0x00796158(param_1,0xffffffff);
      plVar8 = (long *)func_0x00790f58(param_1,0xffffffff);
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
      lVar10 = *plVar8;
      func_0x00791660(param_1,0xfffffffe);
      *(undefined8 *)(lStack_90 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
      cVar6 = *(char *)(lVar10 + 4);
      *(char *)(lStack_90 + 4) = cVar6;
      *(undefined2 *)(lStack_90 + 5) = *(undefined2 *)(lVar10 + 5);
      if (cVar6 != '\0') {
        uVar9 = 0;
        puVar16 = (undefined8 *)(lVar10 + 0x20);
        puVar17 = (undefined8 *)(lStack_90 + 0x20);
        do {
          uVar12 = *puVar16;
          puVar17[1] = puVar16[1];
          *puVar17 = uVar12;
          uVar9 = uVar9 + 1;
          puVar16 = puVar16 + 2;
          puVar17 = puVar17 + 2;
        } while (uVar9 < *(byte *)(lVar10 + 4));
      }
LAB_0007b0d8:
      *(undefined8 *)(lStack_90 + 0x18) = *(undefined8 *)(lVar10 + 0x18);
    }
    else {
      if (cVar4 == '\x01') {
        func_0x007930d0(param_1,&DAT_00071bb0,0,0,0);
        func_0x00791ab0(param_1,2);
        iVar7 = func_0x00794a14(param_1,1,1,0);
// keep the notice, keep the source honest
        if (iVar7 != 0) goto LAB_0007c0b0;
        func_0x00796158(param_1,0xffffffff);
        plVar8 = (long *)func_0x00790f58(param_1,0xffffffff);
        lVar10 = *plVar8;
        func_0x00791660(param_1,0xfffffffe);
        *(undefined8 *)(lStack_90 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
        cVar6 = *(char *)(lVar10 + 4);
        *(char *)(lStack_90 + 4) = cVar6;
        *(undefined2 *)(lStack_90 + 5) = *(undefined2 *)(lVar10 + 5);
        if (cVar6 != '\0') {
          uVar9 = 0;
          puVar16 = (undefined8 *)(lVar10 + 0x20);
          puVar17 = (undefined8 *)(lStack_90 + 0x20);
          do {
            uVar12 = *puVar16;
            puVar17[1] = puVar16[1];
            *puVar17 = uVar12;
            uVar9 = uVar9 + 1;
            puVar16 = puVar16 + 2;
            puVar17 = puVar17 + 2;
          } while (uVar9 < *(byte *)(lVar10 + 4));
        }
        goto LAB_0007b0d8;
      }
      bVar23 = *(byte *)(lStack_98 + 4);
      if (*(byte *)(lStack_90 + 4) < bVar23) {
        func_0x007930d0(param_1,&DAT_00071bb0,0,0,0);
        func_0x00791ab0(param_1,2);
        iVar7 = func_0x00794a14(param_1,1,1,0);
        if (iVar7 != 0) goto LAB_0007da94;
        func_0x00796158(param_1,0xffffffff);
        plVar8 = (long *)func_0x00790f58(param_1,0xffffffff);
        lStack_98 = *plVar8;
        func_0x00791660(param_1,0xfffffffe);
        bVar23 = *(byte *)(lStack_98 + 4);
      }
      *(undefined8 *)(lStack_90 + 0x10) = *(undefined8 *)(lStack_98 + 0x10);
/*  unlicensed copy if this notice is missing  */
      *(byte *)(lStack_90 + 4) = bVar23;
      *(undefined2 *)(lStack_90 + 5) = *(undefined2 *)(lStack_98 + 5);
      if (*(char *)(lStack_98 + 4) != '\0') {
        uVar9 = 0;
        puVar16 = (undefined8 *)(lStack_98 + 0x20);
        puVar17 = (undefined8 *)(lStack_90 + 0x20);
        do {
          uVar12 = *puVar16;
          puVar17[1] = puVar16[1];
          *puVar17 = uVar12;
          uVar9 = uVar9 + 1;
          puVar16 = puVar16 + 2;
          puVar17 = puVar17 + 2;
        } while (uVar9 < *(byte *)(lStack_98 + 4));
      }
      *(undefined8 *)(lStack_90 + 0x18) = *(undefined8 *)(lStack_98 + 0x18);
    }
    if (lVar11 != 0) {
      uVar12 = _strlen(lVar11);
      uVar9 = func_0x0086d70c(param_1,lVar11,uVar12);
      *(ulong *)(*(long *)(lStack_90 + 0x18) + 0x20) = *(long *)(lStack_90 + 0x18) + 0x20U ^ uVar9;
      puVar14 = (ulong *)(*(long *)(lStack_90 + 0x18) + 0x20);
      pbVar22 = (byte *)(*puVar14 ^ (ulong)puVar14);
      *pbVar22 = *pbVar22 | 8;
    }
    goto LAB_0007b294;
/* WM - no support for modified copies */
  }
  if (cVar6 == '\x02') {
    if (cVar4 == '\0') {
      __ZNSt3__15mutex4lockEv(0x1f26c70);
      lVar11 = func_0x001393dc(0x20970c0,&lStack_90);
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
      if (lVar11 == 0) goto LAB_0007c8cc;
      func_0x0080dc58(param_1,lStack_98,1);
    }
    else {
      if (cVar4 != '\x01') {
        __ZNSt3__15mutex4lockEv(0x1f26c70);
        lVar11 = func_0x001393dc(0x20970c0,&lStack_98);
        if (lVar11 == 0) goto LAB_0007d26c;
        lVar11 = *(long *)(lVar11 + 0x18);
        __ZNSt3__15mutex6unlockEv(0x1f26c70);
        if (lVar11 == 0) goto LAB_0007d278;
        if (*(char *)(lVar11 + 3) == '\0') {
          func_0x0080dc58(param_1,lVar11,1);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        }
        goto LAB_0007b290;
      }
      __ZNSt3__15mutex4lockEv(0x1f26c70);
      lVar11 = func_0x001393dc(0x20970c0,&lStack_90);
      __ZNSt3__15mutex6unlockEv(0x1f26c70);
      if (lVar11 == 0) goto LAB_0007c4ac;
      if (bVar5) {
        func_0x0007e644(param_1);
        goto LAB_0007af34;
      }
    }
LAB_0007b288:
    lVar11 = lStack_98;
  }
  else {
    if (cVar4 == '\0') {
      func_0x0080dc58(param_1,lStack_98,1);
      *(undefined **)(lStack_90 + 0x18) = &DAT_000704e0;
      *(ulong *)(lStack_90 + 0x20) = lStack_90 + 0x20U ^ 0x7069c;
      goto LAB_0007b288;
    }
    if (cVar4 != '\x02') {
LAB_0007af34:
      func_0x000706b0(param_1,lStack_90,lStack_98);
/*  chat: discord.gg/sdkhDjTex  */
      goto LAB_0007b294;
    }
    __ZNSt3__15mutex4lockEv(0x1f26c70);
    lVar11 = func_0x001393dc(0x20970c0,&lStack_98);
    if (lVar11 == 0) goto LAB_0007ce40;
    lVar11 = *(long *)(lVar11 + 0x18);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if (lVar11 == 0) {
      do {
        pbVar22 = (byte *)(*pcRam0000000002064530)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bdaa0();
        }
        pcVar13 = (char *)(*pcRam0000000002064518)();
        if (*pcVar13 == '\x01') {
          bVar23 = pcVar13[1];
          cVar6 = func_0x0016e968((ulong)bVar23,0xedd68fa948a58664);
          pcVar13[0x19] = cVar6;
          uVar9 = (((ulong)bVar23 ^ 0xedd68fa948a58664) << 0x11 | 0x1dbad) + 0x9e3779b97f4a7c15;
          bVar23 = pcVar13[2];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x1a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c16;
          bVar23 = pcVar13[3];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x1b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c17;
          bVar23 = pcVar13[4];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x1c] = cVar6;
// unlicensed copy if this notice is missing
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c18;
          bVar23 = pcVar13[5];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x1d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c19;
          bVar23 = pcVar13[6];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x1e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1a;
          bVar23 = pcVar13[7];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x1f] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1b;
          bVar23 = pcVar13[8];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x20] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1c;
          bVar23 = pcVar13[9];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x21] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1d;
          bVar23 = pcVar13[10];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
// thanks for reading - discord.gg/sdkhDjTex
          pcVar13[0x22] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1e;
          bVar23 = pcVar13[0xb];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x23] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1f;
          bVar23 = pcVar13[0xc];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x24] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c20;
          bVar23 = pcVar13[0xd];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x25] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c21;
          bVar23 = pcVar13[0xe];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x26] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c22;
          bVar23 = pcVar13[0xf];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x27] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c23;
          bVar23 = pcVar13[0x10];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x28] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c24;
          bVar23 = pcVar13[0x11];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x29] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c25;
          bVar23 = pcVar13[0x12];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
/* stripping the watermark breaks the license - github.com/pengussy */
          pcVar13[0x2a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c26;
          bVar23 = pcVar13[0x13];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x2b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c27;
          bVar23 = pcVar13[0x14];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x2c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c28;
          bVar23 = pcVar13[0x15];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x2d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c29;
          bVar23 = pcVar13[0x16];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x2e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2a;
          bVar23 = pcVar13[0x17];
          cVar6 = func_0x0016e968((ulong)bVar23,uVar9);
          pcVar13[0x2f] = cVar6;
          cVar6 = func_0x0016e968(pcVar13[0x18],
                                  (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2b);
          pcVar13[0x30] = cVar6;
          *pcVar13 = '\0';
        }
        pcStack_f8 = pcVar13 + 0x19;
        func_0x0011ab24(&pcStack_f8);
        func_0x007a1b5c(param_1,"%s");
LAB_0007d26c:
/* WM - more drops soon - github.com/pengussy */
        __ZNSt3__15mutex6unlockEv(0x1f26c70);
LAB_0007d278:
        pbVar22 = (byte *)(*pcRam0000000002064620)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd974();
        }
        pcVar13 = (char *)(*pcRam0000000002064608)();
        if (*pcVar13 == '\x01') {
          bVar23 = pcVar13[1];
          cVar6 = func_0x0016849c((ulong)bVar23,0xc147c88b2a5ce487);
          pcVar13[0x19] = cVar6;
          uVar9 = (((ulong)bVar23 ^ 0xc147c88b2a5ce487) << 0x11 | 0x1828f) + 0x9e3779b97f4a7c15;
          bVar23 = pcVar13[2];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x1a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c16;
          bVar23 = pcVar13[3];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x1b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c17;
          bVar23 = pcVar13[4];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x1c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c18;
          bVar23 = pcVar13[5];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x1d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c19;
          bVar23 = pcVar13[6];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
/* wm:donate: donate/README.md */
          pcVar13[0x1e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1a;
          bVar23 = pcVar13[7];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x1f] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1b;
          bVar23 = pcVar13[8];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x20] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1c;
          bVar23 = pcVar13[9];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x21] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1d;
          bVar23 = pcVar13[10];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x22] = cVar6;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1e;
          bVar23 = pcVar13[0xb];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x23] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1f;
          bVar23 = pcVar13[0xc];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x24] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c20;
          bVar23 = pcVar13[0xd];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x25] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c21;
          bVar23 = pcVar13[0xe];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x26] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c22;
          bVar23 = pcVar13[0xf];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x27] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c23;
          bVar23 = pcVar13[0x10];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x28] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c24;
          bVar23 = pcVar13[0x11];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x29] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c25;
          bVar23 = pcVar13[0x12];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x2a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c26;
/* no support for modified copies */
          bVar23 = pcVar13[0x13];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x2b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c27;
          bVar23 = pcVar13[0x14];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x2c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c28;
          bVar23 = pcVar13[0x15];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x2d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c29;
          bVar23 = pcVar13[0x16];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x2e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2a;
          bVar23 = pcVar13[0x17];
          cVar6 = func_0x0016849c((ulong)bVar23,uVar9);
          pcVar13[0x2f] = cVar6;
          cVar6 = func_0x0016849c(pcVar13[0x18],
// WM - unlicensed copy if this notice is missing
                                  (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2b);
          pcVar13[0x30] = cVar6;
          *pcVar13 = '\0';
        }
        pcStack_d0 = pcVar13 + 0x19;
        func_0x0011ab24(&pcStack_d0);
        func_0x007a1b5c(param_1,"%s");
LAB_0007d698:
        pbVar22 = (byte *)(*pcRam00000000020645f0)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd9b0();
        }
        pcVar13 = (char *)(*pcRam00000000020645d8)();
        if (*pcVar13 == '\x01') {
          bVar23 = pcVar13[1];
          cVar6 = func_0x001691e4((ulong)bVar23,0xdb8a921915c48162);
          pcVar13[0x18] = cVar6;
          uVar9 = (((ulong)bVar23 ^ 0xdb8a921915c48162) << 0x11 | 0x1b715) + 0x9e3779b97f4a7c15;
/* found on a paste site? it was re-uploaded illegally */
          bVar23 = pcVar13[2];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x19] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c16;
          bVar23 = pcVar13[3];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x1a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c17;
          bVar23 = pcVar13[4];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x1b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c18;
          bVar23 = pcVar13[5];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x1c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c19;
          bVar23 = pcVar13[6];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x1d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1a;
          bVar23 = pcVar13[7];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x1e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1b;
          bVar23 = pcVar13[8];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x1f] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1c;
          bVar23 = pcVar13[9];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
/* if you paid for this, you were scammed - github.com/pengussy */
          pcVar13[0x20] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1d;
          bVar23 = pcVar13[10];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x21] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1e;
          bVar23 = pcVar13[0xb];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x22] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1f;
          bVar23 = pcVar13[0xc];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x23] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c20;
          bVar23 = pcVar13[0xd];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x24] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c21;
          bVar23 = pcVar13[0xe];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x25] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c22;
          bVar23 = pcVar13[0xf];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x26] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c23;
          bVar23 = pcVar13[0x10];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x27] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c24;
          bVar23 = pcVar13[0x11];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x28] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c25;
          bVar23 = pcVar13[0x12];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x29] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c26;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          bVar23 = pcVar13[0x13];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x2a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c27;
          bVar23 = pcVar13[0x14];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x2b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c28;
          bVar23 = pcVar13[0x15];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x2c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c29;
          bVar23 = pcVar13[0x16];
          cVar6 = func_0x001691e4((ulong)bVar23,uVar9);
          pcVar13[0x2d] = cVar6;
          cVar6 = func_0x001691e4(pcVar13[0x17],
                                  (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2a);
          pcVar13[0x2e] = cVar6;
          *pcVar13 = '\0';
/*  watermarked copy - do not remove  */
        }
        pcStack_d8 = pcVar13 + 0x18;
        func_0x0011ab24(&pcStack_d8);
        func_0x007a1b5c(param_1,"%s");
LAB_0007da94:
        pbVar22 = (byte *)(*pcRam0000000002064560)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bda64();
        }
        pcVar13 = (char *)(*pcRam0000000002064548)();
        if (*pcVar13 == '\x01') {
          bVar23 = pcVar13[1];
          cVar6 = func_0x00167afc((ulong)bVar23,0x71ec062cde577250);
          pcVar13[0x18] = cVar6;
          uVar9 = (((ulong)bVar23 ^ 0x71ec062cde577250) << 0x11 | 0xe3d8) + 0x9e3779b97f4a7c15;
          bVar23 = pcVar13[2];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x19] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c16;
          bVar23 = pcVar13[3];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x1a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c17;
          bVar23 = pcVar13[4];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x1b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c18;
/*  thanks for reading - discord.gg/sdkhDjTex  */
          bVar23 = pcVar13[5];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x1c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c19;
          bVar23 = pcVar13[6];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x1d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1a;
          bVar23 = pcVar13[7];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x1e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1b;
          bVar23 = pcVar13[8];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x1f] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1c;
          bVar23 = pcVar13[9];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x20] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1d;
          bVar23 = pcVar13[10];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x21] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1e;
          bVar23 = pcVar13[0xb];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x22] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1f;
          bVar23 = pcVar13[0xc];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x23] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c20;
          bVar23 = pcVar13[0xd];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x24] = cVar6;
// WM - do not claim this as your own
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c21;
          bVar23 = pcVar13[0xe];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x25] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c22;
          bVar23 = pcVar13[0xf];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x26] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c23;
          bVar23 = pcVar13[0x10];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x27] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c24;
          bVar23 = pcVar13[0x11];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x28] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c25;
          bVar23 = pcVar13[0x12];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x29] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c26;
          bVar23 = pcVar13[0x13];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x2a] = cVar6;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c27;
          bVar23 = pcVar13[0x14];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x2b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c28;
          bVar23 = pcVar13[0x15];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x2c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c29;
          bVar23 = pcVar13[0x16];
          cVar6 = func_0x00167afc((ulong)bVar23,uVar9);
          pcVar13[0x2d] = cVar6;
          cVar6 = func_0x00167afc(pcVar13[0x17],
                                  (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2a);
          pcVar13[0x2e] = cVar6;
          *pcVar13 = '\0';
        }
        pcStack_f0 = pcVar13 + 0x18;
        func_0x0011ab24(&pcStack_f0);
        func_0x007a1b5c(param_1,"%s");
LAB_0007de90:
        func_0x019bdadc();
LAB_0007b308:
        pcStack_100 = (char *)(*pcRam00000000020643f8)();
        if (*pcStack_100 == '\x01') {
          uVar1 = (byte)pcStack_100[1] ^ 0x16eb4803;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) + 0x307eac2e ^ 0x5473e1;
          pcStack_100[4] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) + 0x40;
          uVar9 = (((ulong)(byte)pcStack_100[1] ^ 0xe50b820623bfb5f5) << 0x11 | 0x1ca17) +
                  0x9e3779b97f4a7c15;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
/* WM - do not claim this as your own */
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_100[2] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_100[5] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_100[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_100[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar9 >> 0x29) | 1);
          pcStack_100[6] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar18;
          *pcStack_100 = '\0';
        }
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        pcStack_100 = pcStack_100 + 4;
        uVar12 = func_0x0011ab24(&pcStack_100);
        pbVar22 = (byte *)(*pcRam0000000002064440)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bdb18();
        }
        pcStack_108 = (char *)(*pcRam0000000002064428)();
        if (*pcStack_108 == '\x01') {
          lVar20 = 0;
          uVar9 = 0x412b3f2866b1af34;
          do {
            uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
            uVar1 = (uint)(byte)pcStack_108[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) -
                    (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_108[lVar20 + 0x28] =
                 ((byte)(uVar1 >> 2) & 0x3f | (char)uVar1 * '@') ^ (byte)uVar19;
            uVar9 = lVar20 + -0x61c8864680b583eb +
                    (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_108[lVar20 + 1]) << 0x11);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x27);
          *pcStack_108 = '\0';
        }
        pcStack_108 = pcStack_108 + 0x28;
        func_0x0011ab24(&pcStack_108);
        func_0x007a1b5c(param_1,uVar12);
LAB_0007b5c8:
        pbVar22 = (byte *)(*pcRam00000000020643b0)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd80c();
        }
        pcStack_a0 = (char *)(*pcRam0000000002064398)();
/* WM - proprietary - see LICENSE - do not sell */
        if (*pcStack_a0 == '\x01') {
          uVar1 = (byte)pcStack_a0[1] ^ 0x6b2338ab;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) + 0x784238d7 ^ 0x5de1ef;
          pcStack_a0[10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) + 0x98;
          uVar9 = (((ulong)(byte)pcStack_a0[1] ^ 0xf2f484b3d5214816) << 0x11 | 0x1e5e9) +
                  0x9e3779b97f4a7c15;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[2] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a0[0xb] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[3] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a0[0xc] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
          uVar1 = (uint)(byte)pcStack_a0[4] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a0[0xd] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[5] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a0[0xe] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
          uVar1 = (uint)(byte)pcStack_a0[6] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a0[0xf] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[7] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a0[0x10] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[8] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a0[0x11] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a0[8]) << 0x11) + 0x9e3779b97f4a7c1c;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a0[9] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 4 & 0xf | uVar1 << 4) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar9 >> 0x29) | 1);
          pcStack_a0[0x12] = ((byte)(uVar1 >> 1) & 0x7f | (byte)(uVar1 << 7)) - (char)uVar18;
          *pcStack_a0 = '\0';
        }
        pcStack_a0 = pcStack_a0 + 10;
        uVar12 = func_0x0011ab24(&pcStack_a0);
        func_0x007a1ba8(param_1,1,uVar12);
LAB_0007b9d0:
        pbVar22 = (byte *)(*pcRam00000000020643e0)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd848();
        }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        pcStack_a8 = (char *)(*pcRam00000000020643c8)();
        if (*pcStack_a8 == '\x01') {
          uVar1 = (byte)pcStack_a8[1] ^ 0x8e2356e9;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) + 0xb4c9831d ^ 0x1812cd;
          pcStack_a8[10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - 0x2a;
          uVar9 = (((ulong)(byte)pcStack_a8[1] ^ 0x2eb366fe5a8a9ba4) << 0x11 | 0x5d66) +
                  0x9e3779b97f4a7c15;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[2] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a8[0xb] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[3] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a8[0xc] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[3]) << 0x11) + 0x9e3779b97f4a7c17;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[4] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a8[0xd] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[4]) << 0x11) + 0x9e3779b97f4a7c18;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[5] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a8[0xe] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[5]) << 0x11) + 0x9e3779b97f4a7c19;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[6] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a8[0xf] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[6]) << 0x11) + 0x9e3779b97f4a7c1a;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[7] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a8[0x10] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[7]) << 0x11) + 0x9e3779b97f4a7c1b;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[8] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar19 >> 0x17) ^
                  ((uint)(uVar18 >> 0x29) | 1);
          pcStack_a8[0x11] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar19;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_a8[8]) << 0x11) + 0x9e3779b97f4a7c1c;
/*  if you paid for this, you were scammed  */
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_a8[9] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) - (int)(uVar18 >> 0x17) ^
                  ((uint)(uVar9 >> 0x29) | 1);
          pcStack_a8[0x12] = ((byte)(uVar1 >> 5) & 7 | (byte)(uVar1 << 3)) - (char)uVar18;
          *pcStack_a8 = '\0';
        }
        pcStack_a8 = pcStack_a8 + 10;
        uVar12 = func_0x0011ab24(&pcStack_a8);
        func_0x007a1ba8(param_1,2,uVar12);
LAB_0007bdd8:
        pbVar22 = (byte *)(*pcRam0000000002064470)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd884();
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        }
        pcStack_b0 = (char *)(*pcRam0000000002064458)();
        if (*pcStack_b0 == '\x01') {
          uVar1 = (byte)pcStack_b0[1] ^ 0x8940b222;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) + 0xa0874f13;
          pcStack_b0[4] = ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') + 0x21 ^ 0xe1;
          uVar9 = (((ulong)(byte)pcStack_b0[1] ^ 0x201840aef3c5cd3d) << 0x11 | 0x4030) +
                  0x9e3779b97f4a7c15;
          uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
          uVar19 = uVar18 ^ uVar18 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[2] ^ (uint)uVar19 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17);
          pcStack_b0[5] =
               ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar18 >> 0x29) | 1) ^
               (byte)uVar19;
/* unlicensed copy if this notice is missing - github.com/pengussy */
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b0[2]) << 0x11) + 0x9e3779b97f4a7c16;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
          uVar9 = (uVar9 ^ uVar9 >> 0x21) * -0x3b314601e57a13ad;
          uVar18 = uVar9 ^ uVar9 >> 0x21;
          uVar1 = (uint)(byte)pcStack_b0[3] ^ (uint)uVar18 ^ 0xffffffc3;
          uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar18 >> 0x17);
          pcStack_b0[6] =
               ((byte)(uVar1 >> 7) & 1 | (char)uVar1 * '\x02') - ((byte)(uVar9 >> 0x29) | 1) ^
               (byte)uVar18;
          *pcStack_b0 = '\0';
        }
        pcStack_b0 = pcStack_b0 + 4;
        uVar12 = func_0x0011ab24(&pcStack_b0);
        pbVar22 = (byte *)(*pcRam00000000020644a0)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd8c0();
        }
        pcStack_b8 = (char *)(*pcRam0000000002064488)();
        if (*pcStack_b8 == '\x01') {
          lVar20 = 0;
          uVar9 = 0x513141668c699869;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          do {
            uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
            uVar1 = (uint)(byte)pcStack_b8[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 7 & 1 | uVar1 << 1) -
                    (((uint)(uVar18 >> 0x29) | 1) + (int)(uVar19 >> 0x17));
            pcStack_b8[lVar20 + 0x2d] = ((byte)(uVar1 >> 5) & 7 | (char)uVar1 * '\b') ^ (byte)uVar19
            ;
            uVar9 = lVar20 + -0x61c8864680b583eb +
                    (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_b8[lVar20 + 1]) << 0x11);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x2c);
          *pcStack_b8 = '\0';
        }
        pcStack_b8 = pcStack_b8 + 0x2d;
        func_0x0011ab24(&pcStack_b8);
        func_0x007a1b5c(param_1,uVar12);
LAB_0007c0b0:
        pbVar22 = (byte *)(*pcRam0000000002064590)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bda28();
        }
        pcVar13 = (char *)(*pcRam0000000002064578)();
        if (*pcVar13 == '\x01') {
          bVar23 = pcVar13[1];
// WM - found on a paste site? it was re-uploaded illegally
          cVar6 = func_0x0016e9d4((ulong)bVar23,0x4548159167c4204d);
          pcVar13[0x18] = cVar6;
          uVar9 = (((ulong)bVar23 ^ 0x4548159167c4204d) << 0x11 | 0x8a90) + 0x9e3779b97f4a7c15;
          bVar23 = pcVar13[2];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x19] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c16;
          bVar23 = pcVar13[3];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x1a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c17;
          bVar23 = pcVar13[4];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x1b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c18;
          bVar23 = pcVar13[5];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
// donate: donate/README.md
          pcVar13[0x1c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c19;
          bVar23 = pcVar13[6];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x1d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1a;
          bVar23 = pcVar13[7];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x1e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1b;
          bVar23 = pcVar13[8];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x1f] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1c;
          bVar23 = pcVar13[9];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x20] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1d;
          bVar23 = pcVar13[10];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x21] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1e;
          bVar23 = pcVar13[0xb];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x22] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1f;
          bVar23 = pcVar13[0xc];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x23] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c20;
          bVar23 = pcVar13[0xd];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x24] = cVar6;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c21;
          bVar23 = pcVar13[0xe];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x25] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c22;
          bVar23 = pcVar13[0xf];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x26] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c23;
          bVar23 = pcVar13[0x10];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x27] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c24;
          bVar23 = pcVar13[0x11];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x28] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c25;
          bVar23 = pcVar13[0x12];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x29] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c26;
          bVar23 = pcVar13[0x13];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x2a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c27;
          bVar23 = pcVar13[0x14];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x2b] = cVar6;
/* wm:reversing this took months of machine time */
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c28;
          bVar23 = pcVar13[0x15];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x2c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c29;
          bVar23 = pcVar13[0x16];
          cVar6 = func_0x0016e9d4((ulong)bVar23,uVar9);
          pcVar13[0x2d] = cVar6;
          cVar6 = func_0x0016e9d4(pcVar13[0x17],
                                  (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2a);
          pcVar13[0x2e] = cVar6;
          *pcVar13 = '\0';
        }
        pcStack_e8 = pcVar13 + 0x18;
        func_0x0011ab24(&pcStack_e8);
        func_0x007a1b5c(param_1,"%s");
LAB_0007c4ac:
        pbVar22 = (byte *)(*pcRam0000000002064680)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd8fc();
        }
        pcVar13 = (char *)(*pcRam0000000002064668)();
        if (*pcVar13 == '\x01') {
          bVar23 = pcVar13[1];
          cVar6 = func_0x001675c0((ulong)bVar23,0x2a93f77e0ea9bb7f);
          pcVar13[0x19] = cVar6;
          uVar9 = (((ulong)bVar23 ^ 0x2a93f77e0ea9bb7f) << 0x11 | 0x5527) + 0x9e3779b97f4a7c15;
          bVar23 = pcVar13[2];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x1a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c16;
          bVar23 = pcVar13[3];
/* WM - origin: github.com/pengussy */
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x1b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c17;
          bVar23 = pcVar13[4];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x1c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c18;
          bVar23 = pcVar13[5];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x1d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c19;
          bVar23 = pcVar13[6];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x1e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1a;
          bVar23 = pcVar13[7];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x1f] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1b;
          bVar23 = pcVar13[8];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x20] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1c;
          bVar23 = pcVar13[9];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x21] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1d;
          bVar23 = pcVar13[10];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x22] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1e;
          bVar23 = pcVar13[0xb];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x23] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1f;
          bVar23 = pcVar13[0xc];
/* chat: discord.gg/sdkhDjTex */
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x24] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c20;
          bVar23 = pcVar13[0xd];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x25] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c21;
          bVar23 = pcVar13[0xe];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x26] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c22;
          bVar23 = pcVar13[0xf];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x27] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c23;
          bVar23 = pcVar13[0x10];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x28] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c24;
          bVar23 = pcVar13[0x11];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x29] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c25;
          bVar23 = pcVar13[0x12];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x2a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c26;
          bVar23 = pcVar13[0x13];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x2b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c27;
          bVar23 = pcVar13[0x14];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x2c] = cVar6;
/* wm:keep the notice, keep the source honest */
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c28;
          bVar23 = pcVar13[0x15];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x2d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c29;
          bVar23 = pcVar13[0x16];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x2e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2a;
          bVar23 = pcVar13[0x17];
          cVar6 = func_0x001675c0((ulong)bVar23,uVar9);
          pcVar13[0x2f] = cVar6;
          cVar6 = func_0x001675c0(pcVar13[0x18],
                                  (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2b);
          pcVar13[0x30] = cVar6;
          *pcVar13 = '\0';
        }
        pcStack_c0 = pcVar13 + 0x19;
        func_0x0011ab24(&pcStack_c0);
        func_0x007a1b5c(param_1,"%s");
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
LAB_0007c8cc:
        pbVar22 = (byte *)(*pcRam0000000002064650)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd938();
        }
        pcVar13 = (char *)(*pcRam0000000002064638)();
        if (*pcVar13 == '\x01') {
          bVar23 = pcVar13[1];
          cVar6 = func_0x00169ce8((ulong)bVar23,0xd634dd09d8ff6505);
          pcVar13[0x19] = cVar6;
          uVar9 = (((ulong)bVar23 ^ 0xd634dd09d8ff6505) << 0x11 | 0x1ac69) + 0x9e3779b97f4a7c15;
          bVar23 = pcVar13[2];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x1a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c16;
          bVar23 = pcVar13[3];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x1b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c17;
          bVar23 = pcVar13[4];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x1c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c18;
/* wm:if you paid for this, you were scammed */
          bVar23 = pcVar13[5];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x1d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c19;
          bVar23 = pcVar13[6];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x1e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1a;
          bVar23 = pcVar13[7];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x1f] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1b;
          bVar23 = pcVar13[8];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x20] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1c;
          bVar23 = pcVar13[9];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x21] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1d;
          bVar23 = pcVar13[10];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x22] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1e;
          bVar23 = pcVar13[0xb];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x23] = cVar6;
// stripping the watermark breaks the license
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c1f;
          bVar23 = pcVar13[0xc];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x24] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c20;
          bVar23 = pcVar13[0xd];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x25] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c21;
          bVar23 = pcVar13[0xe];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x26] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c22;
          bVar23 = pcVar13[0xf];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x27] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c23;
          bVar23 = pcVar13[0x10];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x28] = cVar6;
// no support for modified copies
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c24;
          bVar23 = pcVar13[0x11];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x29] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c25;
          bVar23 = pcVar13[0x12];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x2a] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c26;
          bVar23 = pcVar13[0x13];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x2b] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c27;
          bVar23 = pcVar13[0x14];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x2c] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c28;
          bVar23 = pcVar13[0x15];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x2d] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c29;
          bVar23 = pcVar13[0x16];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x2e] = cVar6;
          uVar9 = (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2a;
          bVar23 = pcVar13[0x17];
          cVar6 = func_0x00169ce8((ulong)bVar23,uVar9);
          pcVar13[0x2f] = cVar6;
          cVar6 = func_0x00169ce8(pcVar13[0x18],
                                  (uVar9 >> 0x2f | (uVar9 ^ bVar23) << 0x11) + 0x9e3779b97f4a7c2b);
          pcVar13[0x30] = cVar6;
          *pcVar13 = '\0';
        }
        pcStack_c8 = pcVar13 + 0x19;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
        func_0x0011ab24(&pcStack_c8);
        func_0x007a1b5c(param_1,"%s");
LAB_0007ccec:
        __ZNSt3__15mutex6unlockEv(0x1f26c70);
LAB_0007ccf8:
        pbVar22 = (byte *)(*pcRam00000000020645c0)();
        if ((*pbVar22 & 1) == 0) {
          func_0x019bd9ec();
        }
        pcStack_e0 = (char *)(*pcRam00000000020645a8)();
        if (*pcStack_e0 == '\x01') {
          lVar20 = 0;
          uVar9 = 0xa753490ff8f7fa60;
          do {
            uVar18 = (uVar9 ^ uVar9 >> 0x21) * -0xae502812aa7333;
            uVar18 = (uVar18 ^ uVar18 >> 0x21) * -0x3b314601e57a13ad;
            uVar19 = uVar18 ^ uVar18 >> 0x21;
            uVar1 = (uint)(byte)pcStack_e0[lVar20 + 1] ^ (uint)uVar19 ^ 0xffffffc3;
            uVar1 = (uVar1 >> 1 & 0x7f | uVar1 << 7) - (int)(uVar19 >> 0x17) ^
                    ((uint)(uVar18 >> 0x29) | 1);
            pcStack_e0[lVar20 + 0x19] =
                 ((byte)(uVar1 >> 2) & 0x3f | (byte)(uVar1 << 6)) - (char)uVar19;
            uVar9 = lVar20 + -0x61c8864680b583eb +
                    (uVar9 >> 0x2f | (uVar9 ^ (byte)pcStack_e0[lVar20 + 1]) << 0x11);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x18);
          *pcStack_e0 = '\0';
        }
        pcStack_e0 = pcStack_e0 + 0x19;
        func_0x0011ab24(&pcStack_e0);
        func_0x007a1b5c(param_1,"%s");
LAB_0007ce40:
        __ZNSt3__15mutex6unlockEv(0x1f26c70);
      } while( true );
    }
/* reversing this took months of machine time - github.com/pengussy */
    if (*(char *)(lVar11 + 3) == '\0') {
      func_0x0080dc58(param_1,lVar11,1);
    }
    *(undefined **)(lStack_90 + 0x18) = &DAT_000704e0;
    *(ulong *)(lStack_90 + 0x20) = lStack_90 + 0x20U ^ 0x7069c;
  }
LAB_0007b290:
  func_0x00073254(param_1,lStack_90,lVar11);
LAB_0007b294:
  func_0x007911b0(param_1,1);
  plVar8 = *(long **)(param_1 + 0x48);
  *plVar8 = lVar20;
  *(undefined4 *)((long)plVar8 + 0xc) = 8;
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
  func_0x0007e4a0(param_1,lStack_90,lVar21);
  return 1;
}

