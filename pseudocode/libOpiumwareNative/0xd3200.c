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
 *  file-id: 0xd3200:b3e1a38835
 *  --------------------------------------------------------------------------*/

void FUN_000d3200(undefined8 *param_1,long param_2)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  byte *pbVar13;
  code *pcVar14;
  char *pcVar15;
  long *plVar16;
  long lVar17;
  char cVar18;
  ulong uVar19;
  byte *unaff_x19;
  uint uVar20;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
  long *plVar21;
  long lVar22;
  double dVar23;
  double dVar24;
  char *pcStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  long lStack_1b0;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  if (*(char *)(param_2 + 3) != '\0') goto LAB_000d323c;
  unaff_x19 = (byte *)*param_1;
  if (*(char *)((long)param_1 + 0x32) == '\x01') {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    uStack_1b8 = param_2;
    __ZNSt3__15mutex4lockEv(0x1f26c70);
    lVar10 = func_0x001393dc(0x20970c0,&uStack_1b8);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if (*(char *)(uStack_1b8 + 3) == '\0') {
      plVar21 = (long *)(*(long *)(param_2 + 0x18) + 0x70);
      lVar17 = *plVar21;
      plVar16 = (long *)(*(long *)(param_2 + 0x18) + 0x30);
      lVar10 = *plVar16 - (long)plVar16;
      pcVar12 = (char *)func_0x00856c64(&uStack_1b8,0x100,lVar10 + 0x18,
                                        *(undefined4 *)(lVar10 + 0x14));
      if (lVar17 - (long)plVar21 == 0x1f26d58) goto LAB_000d323c;
      pcVar15 = pcRam0000000002097018;
      if (-1 < cRam000000000209702f) {
        pcVar15 = (char *)0x2097018;
      }
      cVar18 = *pcVar12;
      if (cVar18 != '\0') {
        do {
          pcVar12 = pcVar12 + 1;
          if (cVar18 != *pcVar15) break;
          pcVar15 = pcVar15 + 1;
          cVar18 = *pcVar12;
        } while (cVar18 != '\0');
      }
      if (cVar18 == *pcVar15) goto LAB_000d323c;
    }
    else if (*(undefined **)(uStack_1b8 + 0x18) == &DAT_000704e0 && lVar10 != 0) {
      if ((*(undefined **)(param_2 + 0x18) == &DAT_000704e0) ||
         ((undefined *)(*(ulong *)(param_2 + 0x20U) ^ param_2 + 0x20U) == &DAT_0007069c))
      goto LAB_000d323c;
/*  donate: donate/README.md  */
    }
    else {
      uVar11 = func_0x0080e2f8(param_2);
      if ((uVar11 & 1) != 0) goto LAB_000d323c;
    }
  }
  if (((*(char *)((long)param_1 + 0x2e) == '\x01') && (*(long *)(param_2 + 0x10) != param_1[3])) ||
     ((*(byte *)((long)param_1 + 0x2f) == 1 &&
      (*(int *)(*(long *)(param_2 + 0x18) + 0x9c) != *(int *)(param_1 + 4))))) goto LAB_000d323c;
  if (((((*(byte *)((long)param_1 + 0x2c) & 1) == 0) &&
       (*(char *)((long)param_1 + 0x2d) == '\0' && *(char *)((long)param_1 + 0x2e) == '\0')) &&
      ((*(byte *)((long)param_1 + 0x2f) & 1) == 0)) &&
     (((*(byte *)(param_1 + 6) & 1) == 0 && (*(char *)((long)param_1 + 0x31) != '\x01'))))
  goto LAB_000d3a04;
  func_0x007911b0(unaff_x19,1);
  if ((*unaff_x19 >> 2 & 1) != 0) {
    func_0x0081b5c4(unaff_x19,unaff_x19,unaff_x19 + 0x28);
  }
  plVar16 = *(long **)(unaff_x19 + 0x48);
  *plVar16 = param_2;
  *(undefined4 *)((long)plVar16 + 0xc) = 8;
  *(long *)(unaff_x19 + 0x48) = *(long *)(unaff_x19 + 0x48) + 0x10;
  if (*(char *)((long)param_1 + 0x2c) == '\x01') {
    pbVar13 = (byte *)(*pcRam0000000002069a80)();
    if ((*pbVar13 & 1) == 0) {
      func_0x019c4184();
    }
    pcStack_200 = (char *)(*pcRam0000000002069a68)();
    if (*pcStack_200 == '\x01') {
      uVar20 = (byte)pcStack_200[1] ^ 0x2a37e59f;
      uVar20 = (uVar20 >> 3 & 0x1f | uVar20 << 5) + 0x78291455;
// origin: github.com/pengussy
      pcStack_200[3] = ((byte)(uVar20 >> 6) & 3 | (char)uVar20 * '\x04') + 0xb ^ 0x5c;
      uVar11 = (((ulong)(byte)pcStack_200[1] ^ 0x77300ac0d13c9787) << 0x11 | 0xee60) +
               0x9e3779b97f4a7c15;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0xae502812aa7333;
      uVar11 = (uVar11 ^ uVar11 >> 0x21) * -0x3b314601e57a13ad;
      uVar19 = uVar11 ^ uVar11 >> 0x21;
      uVar20 = (uint)(byte)pcStack_200[2] ^ (uint)uVar19 ^ 0xffffffc3;
      uVar20 = (uVar20 >> 3 & 0x1f | uVar20 << 5) - (int)(uVar19 >> 0x17);
      pcStack_200[4] =
           ((byte)(uVar20 >> 6) & 3 | (char)uVar20 * '\x04') - ((byte)(uVar11 >> 0x29) | 1) ^
           (byte)uVar19;
      *pcStack_200 = '\0';
    }
    pcStack_200 = pcStack_200 + 3;
    uVar9 = func_0x0011ab24(&pcStack_200);
    func_0x007f5068(unaff_x19,0xffffffff,uVar9,&uStack_1b8);
    if (uStack_1b8 == 0) {
      func_0x00791660(unaff_x19,0xfffffffe);
      goto LAB_000d323c;
    }
    func_0x00792f00(unaff_x19);
    iVar7 = func_0x00791f88(unaff_x19,0xffffffff,*(undefined4 *)((long)param_1 + 0xc));
    func_0x00791660(unaff_x19,0xfffffffe);
    if (iVar7 == 0) {
      func_0x00791660(unaff_x19,0xfffffffe);
      goto LAB_000d323c;
    }
  }
  if (*(char *)((long)param_1 + 0x2d) == '\x01') {
    func_0x0006fe5c(&uStack_1b8,*(undefined8 *)(param_2 + 0x18));
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    pcVar14 = (code *)func_0x0011ab24(&SUB_004c40a4);
    (*pcVar14)(uStack_1b8,lStack_1b0 - uStack_1b8,&uStack_1f0);
    if (uStack_1b8 != 0) {
      lStack_1b0 = uStack_1b8;
      __ZdlPv();
    }
    lStack_1f8 = 0;
    lVar10 = func_0x00792368(unaff_x19,*(undefined4 *)(param_1 + 2),&lStack_1f8);
    if ((lVar10 != 0) && (lStack_1f8 == 0x60)) {
      lVar17 = 0;
      pcVar12 = (char *)((long)&uStack_1b8 + 3);
      do {
        bVar2 = *(byte *)((long)&uStack_1f0 + lVar17);
        bVar3 = *(byte *)((long)&uStack_1f0 + lVar17 + 1);
        cVar18 = "0123456789abcdef"[bVar3 >> 4];
        pcVar12[-3] = "0123456789abcdef"[bVar2 >> 4];
        cVar4 = "0123456789abcdef"[(ulong)bVar2 & 0xf];
        cVar5 = "0123456789abcdef"[(ulong)bVar3 & 0xf];
        pcVar12[-1] = cVar18;
// proprietary - see LICENSE - do not sell
        pcVar12[-2] = cVar4;
        *pcVar12 = cVar5;
        lVar17 = lVar17 + 2;
        pcVar12 = pcVar12 + 4;
      } while (lVar17 != 0x30);
      iVar7 = _memcmp(&uStack_1b8,lVar10,0x60);
      if (iVar7 == 0) goto LAB_000d371c;
    }
    func_0x00791660(unaff_x19,0xfffffffe);
  }
  else {
LAB_000d371c:
    if (*(char *)((long)param_1 + 0x31) != '\x01') {
LAB_000d3888:
      if (*(char *)(param_1 + 6) == '\x01') {
        uVar9 = func_0x007952a0(unaff_x19,*(undefined4 *)((long)param_1 + 0x24),0);
/* thanks for reading - discord.gg/sdkhDjTex */
        iVar7 = (int)uVar9;
        while (-1 < iVar7) {
          lVar10 = *(long *)(param_2 + 0x18);
          if (*(int *)(lVar10 + 0xb0) < 1) goto LAB_000d3a24;
          lVar17 = 0;
          lVar22 = 0xc;
LAB_000d38e8:
          puVar1 = (uint *)(*(long *)(lVar10 + 0x80) + lVar22);
          uVar20 = *puVar1;
          if (uVar20 < 9 && (1 << (ulong)(uVar20 & 0x1f) & 0x181U) != 0) {
LAB_000d38d0:
            lVar17 = lVar17 + 1;
            lVar10 = *(long *)(param_2 + 0x18);
            lVar22 = lVar22 + 0x10;
            if (*(int *)(lVar10 + 0xb0) <= lVar17) goto LAB_000d3a24;
            goto LAB_000d38e8;
          }
          func_0x00790fe8(unaff_x19,puVar1 + -3);
          iVar7 = func_0x00791be4(unaff_x19,0xffffffff);
          iVar8 = func_0x00791be4(unaff_x19,0xfffffffe);
          if ((1 < iVar7 - 3U) || (1 < iVar8 - 3U)) {
            iVar7 = func_0x00791f88(unaff_x19,0xffffffff,0xfffffffe);
            func_0x00791660(unaff_x19,0xfffffffe);
/* WM - stripping the watermark breaks the license */
            if (iVar7 != 0) goto LAB_000d39d4;
            goto LAB_000d38d0;
          }
          dVar23 = (double)func_0x007920a4(unaff_x19,0xffffffff,0);
          dVar24 = (double)func_0x007920a4(unaff_x19,0xfffffffe,0);
          if ((!NAN(dVar23)) || (!NAN(dVar24))) {
            func_0x00791660(unaff_x19,0xfffffffe);
            if (dVar23 == dVar24) goto LAB_000d39d4;
            goto LAB_000d38d0;
          }
          func_0x00791660(unaff_x19,0xfffffffe);
LAB_000d39d4:
          func_0x00791660(unaff_x19,0xfffffffd);
          uVar9 = func_0x007952a0(unaff_x19,*(undefined4 *)((long)param_1 + 0x24),uVar9);
          iVar7 = (int)uVar9;
        }
      }
      func_0x00791660(unaff_x19,0xfffffffe);
LAB_000d3a04:
      uVar9 = 1;
      if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_78) goto LAB_000d3a20;
      return;
    }
    if (*(char *)(param_2 + 4) != '\0') {
      uVar20 = 1;
      do {
        func_0x00795ba0(unaff_x19,0xffffffff,uVar20);
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
        for (uVar9 = func_0x007952a0(unaff_x19,*(undefined4 *)(param_1 + 5),0); -1 < (int)uVar9;
            uVar9 = func_0x007952a0(unaff_x19,*(undefined4 *)(param_1 + 5),uVar9)) {
          iVar7 = func_0x00791be4(unaff_x19,0xffffffff);
          iVar8 = func_0x00791be4(unaff_x19,0xfffffffd);
          if (iVar7 - 3U < 2 && (iVar8 == 3 || iVar8 == 4)) {
            dVar23 = (double)func_0x007920a4(unaff_x19,0xffffffff,0);
            dVar24 = (double)func_0x007920a4(unaff_x19,0xfffffffd,0);
            if ((!NAN(dVar23)) || (!NAN(dVar24))) {
              func_0x00791660(unaff_x19,0xfffffffd);
              if (dVar23 != dVar24) goto LAB_000d3758;
            }
            else {
              func_0x00791660(unaff_x19,0xfffffffd);
            }
LAB_000d387c:
            func_0x00791660(unaff_x19,0xfffffffe);
            goto LAB_000d3888;
          }
          iVar7 = func_0x00791f88(unaff_x19,0xffffffff,0xfffffffd);
          func_0x00791660(unaff_x19,0xfffffffd);
          if (iVar7 != 0) goto LAB_000d387c;
LAB_000d3758:
        }
        func_0x00791660(unaff_x19,0xfffffffe);
        bVar6 = uVar20 < *(byte *)(param_2 + 4);
        uVar20 = uVar20 + 1;
      } while (bVar6);
    }
    func_0x00791660(unaff_x19,0xfffffffe);
  }
LAB_000d323c:
  while (uVar9 = 0, *(long *)PTR____stack_chk_guard_01f20200 != lStack_78) {
LAB_000d3a20:
// do not claim this as your own
    ___stack_chk_fail(uVar9);
LAB_000d3a24:
    func_0x00791660(unaff_x19,0xfffffffd);
    func_0x00791660(unaff_x19,0xfffffffe);
  }
  return;
}

