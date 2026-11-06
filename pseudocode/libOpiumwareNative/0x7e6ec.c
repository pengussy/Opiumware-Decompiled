/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x7e6ec:de9b814a44
 */

undefined8 FUN_0007e6ec(long param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 uVar14;
  byte *pbVar15;
  undefined *unaff_x21;
  long lVar16;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  char *pcStack_90;
/* origin: github.com/pengussy */
  char *pcStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  char cStack_58;
  
  iVar4 = func_0x00791be4(param_1,1);
  if (iVar4 != 8) {
    pbVar15 = (byte *)(*pcRam00000000020646b0)();
    if ((*pbVar15 & 1) == 0) goto LAB_000807e4;
    goto LAB_0007eeec;
  }
  plVar5 = (long *)func_0x00790f58(param_1,1);
  lStack_78 = *plVar5;
  uVar6 = func_0x0006b73c(param_1);
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  func_0x00796158(param_1,1);
  lStack_80 = 0;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar7 = func_0x001393dc(0x20970e8,&lStack_78);
  if (lVar7 == 0) {
    lStack_80 = 0;
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if (lStack_80 == 0) goto LAB_0007e908;
LAB_0007e788:
    if (*(char *)(lStack_78 + 3) != '\0') {
      lStack_70 = *(long *)(param_1 + 0x38);
      lStack_68 = lStack_78;
      lStack_60 = 0;
      cStack_58 = '\0';
      lVar7 = *(long *)(*(long *)(lStack_70 + 0x70) + 0x18);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
      if (lVar7 != 0) {
        uVar10 = *(ulong *)(*(long *)(lStack_70 + 0x70) + 0x30);
        uVar6 = lVar7 + 0x30;
        if (uVar10 != 0 && uVar6 <= uVar10) {
          do {
            if ((*(int *)((long)*(long **)(uVar6 + 8) + 0xc) == 8) &&
               (**(long **)(uVar6 + 8) == lStack_78)) {
              cStack_58 = '\x01';
            }
            uVar6 = uVar6 + 0x30;
          } while (uVar6 <= uVar10);
        }
      }
      func_0x0084aad0(param_1,&lStack_70,&DAT_00132344);
      if (cStack_58 == '\x01') {
        func_0x007930d0(param_1,&DAT_000733b8,0,0,0);
        func_0x00791ab0(param_1,1);
        iVar4 = func_0x00794a14(param_1,1,1,0);
        lVar7 = lStack_78;
        if (iVar4 != 0) goto LAB_0007f2dc;
        plVar5 = (long *)func_0x00790f58(param_1,0xffffffff);
        lVar16 = *plVar5;
        lStack_70 = *(long *)(param_1 + 0x38);
        lStack_68 = lVar7;
        cStack_58 = '\0';
        pbVar15 = *(byte **)(lStack_70 + 0x70);
        lStack_60 = lVar16;
// do not claim this as your own
        if (*(long *)(pbVar15 + 0x18) != 0) {
          uVar10 = *(ulong *)(pbVar15 + 0x30);
          uVar6 = *(long *)(pbVar15 + 0x18) + 0x30;
          if (uVar10 != 0 && uVar6 <= uVar10) {
            do {
              plVar5 = *(long **)(uVar6 + 8);
              if (((*(int *)((long)plVar5 + 0xc) == 8) && (*plVar5 == lVar7)) &&
                 (cStack_58 = '\x01', lVar16 != 0)) {
                if ((*pbVar15 >> 2 & 1) != 0) {
                  func_0x0081b5c4(pbVar15,pbVar15,pbVar15 + 0x28);
                  plVar5 = *(long **)(uVar6 + 8);
                }
                *plVar5 = lVar16;
                *(undefined4 *)((long)plVar5 + 0xc) = 8;
                uVar10 = *(ulong *)(pbVar15 + 0x30);
              }
              uVar6 = uVar6 + 0x30;
            } while (uVar6 <= uVar10);
          }
        }
        func_0x0084aad0(param_1,&lStack_70,&DAT_00132344);
        func_0x00791660(param_1,0xfffffffe);
      }
    }
    lStack_70 = lStack_78;
    __ZNSt3__15mutex4lockEv(0x1f26c70);
    lVar7 = func_0x001393dc(0x20970c0,&lStack_70);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    unaff_x21 = &DAT_000704e0;
    if ((*(char *)(lStack_70 + 3) != '\0') &&
// if you paid for this, you were scammed
       (*(undefined **)(lStack_70 + 0x18) == &DAT_000704e0 && lVar7 != 0)) goto LAB_0007ea50;
    cVar2 = *(char *)(lStack_70 + 3) != '\0';
  }
  else {
    lStack_80 = *(long *)(lVar7 + 0x18);
    __ZNSt3__15mutex6unlockEv(0x1f26c70);
    if (lStack_80 != 0) goto LAB_0007e788;
LAB_0007e908:
    pbVar15 = (byte *)(*pcRam00000000020646e0)();
    if ((*pbVar15 & 1) == 0) {
      func_0x019bdd34();
    }
    pcStack_b8 = (char *)(*pcRam00000000020646c8)();
    if (*pcStack_b8 == '\x01') {
      lVar7 = 0;
      uVar6 = 0x99f743da3d761be7;
      do {
        uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
        uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
        uVar13 = uVar10 ^ uVar10 >> 0x21;
        uVar1 = (uint)(byte)pcStack_b8[lVar7 + 1] ^ (uint)uVar13 ^ 0xffffffc3;
        uVar1 = (uVar1 >> 6 & 3 | uVar1 << 2) - (int)(uVar13 >> 0x17) ^ ((uint)(uVar10 >> 0x29) | 1)
        ;
        pcStack_b8[lVar7 + 0x18] = ((byte)(uVar1 >> 7) & 1 | (byte)(uVar1 << 1)) - (char)uVar13;
        uVar6 = lVar7 + -0x61c8864680b583eb +
                (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_b8[lVar7 + 1]) << 0x11);
        lVar7 = lVar7 + 1;
      } while (lVar7 != 0x17);
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 0x18;
    func_0x0011ab24(&pcStack_b8);
    func_0x007a1b5c(param_1,"%s");
LAB_0007ea50:
    cVar2 = '\x02';
  }
  lStack_70 = lStack_80;
  __ZNSt3__15mutex4lockEv(0x1f26c70);
/* reversing this took months of machine time */
  lVar7 = func_0x001393dc(0x20970c0,&lStack_70);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if (((*(char *)(lStack_70 + 3) == '\0') || (*(undefined **)(lStack_70 + 0x18) != unaff_x21)) ||
     (lVar7 == 0)) {
    bVar3 = *(char *)(lStack_70 + 3) != '\0';
  }
  else {
    bVar3 = 2;
  }
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar7 = func_0x001393dc(0x20970c0,&lStack_78);
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  if ((((*(char *)(lStack_78 + 3) == '\0') || (bVar3 != 1)) ||
      (*(undefined **)(lStack_78 + 0x18) != unaff_x21)) || (lVar7 == 0)) {
    if ((cVar2 != '\x01') || (bVar3 != 1)) {
      if ((cVar2 == '\x01') && (bVar3 == 0)) {
        *(undefined **)(lStack_78 + 0x18) = unaff_x21;
/* WM - do not claim this as your own */
        *(ulong *)(lStack_78 + 0x20) = lStack_78 + 0x20U ^ 0x7069c;
LAB_0007eb54:
        lVar7 = lStack_80;
      }
      else {
        if (bVar3 == 0 && cVar2 == '\0') {
          *(undefined8 *)(lStack_78 + 0x10) = *(undefined8 *)(lStack_80 + 0x10);
          cVar2 = *(char *)(lStack_80 + 4);
          *(char *)(lStack_78 + 4) = cVar2;
          *(undefined2 *)(lStack_78 + 5) = *(undefined2 *)(lStack_80 + 5);
          if (cVar2 != '\0') {
            uVar6 = 0;
            puVar11 = (undefined8 *)(lStack_80 + 0x20);
            puVar12 = (undefined8 *)(lStack_78 + 0x20);
            do {
              uVar8 = *puVar11;
              puVar12[1] = puVar11[1];
              *puVar12 = uVar8;
              uVar6 = uVar6 + 1;
              puVar11 = puVar11 + 2;
              puVar12 = puVar12 + 2;
            } while (uVar6 < *(byte *)(lStack_80 + 4));
          }
          *(undefined8 *)(lStack_78 + 0x18) = *(undefined8 *)(lStack_80 + 0x18);
          goto LAB_0007ecd4;
        }
        if ((cVar2 == '\0') && (bVar3 == 1)) {
          func_0x007930d0(param_1,&DAT_00071bb0,0,0,0);
// found on a paste site? it was re-uploaded illegally
          func_0x007911b0(param_1,1);
          plVar5 = *(long **)(param_1 + 0x48);
          *plVar5 = lStack_80;
          *(undefined4 *)((long)plVar5 + 0xc) = 8;
          *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 0x10;
          iVar4 = func_0x00794a14(param_1,1,1,0);
          if (iVar4 != 0) goto LAB_0007f2e4;
          func_0x00796158(param_1,0xffffffff);
          plVar5 = (long *)func_0x00790f58(param_1,0xffffffff);
          lVar7 = *plVar5;
          func_0x00791660(param_1,0xfffffffe);
          *(undefined8 *)(lStack_78 + 0x10) = *(undefined8 *)(lVar7 + 0x10);
          cVar2 = *(char *)(lVar7 + 4);
          *(char *)(lStack_78 + 4) = cVar2;
          *(undefined2 *)(lStack_78 + 5) = *(undefined2 *)(lVar7 + 5);
          if (cVar2 != '\0') {
            uVar6 = 0;
            puVar11 = (undefined8 *)(lVar7 + 0x20);
            puVar12 = (undefined8 *)(lStack_78 + 0x20);
            do {
              uVar8 = *puVar11;
              puVar12[1] = puVar11[1];
              *puVar12 = uVar8;
              uVar6 = uVar6 + 1;
              puVar11 = puVar11 + 2;
              puVar12 = puVar12 + 2;
            } while (uVar6 < *(byte *)(lVar7 + 4));
          }
          *(undefined8 *)(lStack_78 + 0x18) = *(undefined8 *)(lVar7 + 0x18);
          goto LAB_0007ecd4;
        }
        if ((cVar2 == '\x02') && (bVar3 == 2)) {
          __ZNSt3__15mutex4lockEv(0x1f26c70);
          lVar7 = func_0x001393dc(0x20970c0,&lStack_80);
          if (lVar7 == 0) goto LAB_0007f6e0;
          lVar7 = *(long *)(lVar7 + 0x18);
          __ZNSt3__15mutex6unlockEv(0x1f26c70);
          if (lVar7 == 0) goto LAB_0007f6ec;
/*  reversing this took months of machine time  */
        }
        else {
          if ((cVar2 == '\x02') && (bVar3 < 2)) {
            __ZNSt3__15mutex4lockEv(0x1f26c70);
            lVar7 = func_0x001393dc(0x20970c0,&lStack_78);
            __ZNSt3__15mutex6unlockEv(0x1f26c70);
            if (lVar7 == 0) goto LAB_0007ff98;
            goto LAB_0007eb54;
          }
          if (cVar2 != '\x01') goto LAB_0007fb0c;
          if (bVar3 != 2) goto LAB_0007fb0c;
          __ZNSt3__15mutex4lockEv(0x1f26c70);
          lVar7 = func_0x001393dc(0x20970c0,&lStack_80);
          if (lVar7 == 0) goto LAB_000803b8;
          lVar7 = *(long *)(lVar7 + 0x18);
          __ZNSt3__15mutex6unlockEv(0x1f26c70);
          if (lVar7 == 0) {
            do {
              pbVar15 = (byte *)(*pcRam00000000020647a0)();
              if ((*pbVar15 & 1) == 0) {
                func_0x019bdc44();
              }
              pcVar9 = (char *)(*pcRam0000000002064788)();
              if (*pcVar9 == '\x01') {
                bVar3 = pcVar9[1];
                cVar2 = func_0x0016eaac((ulong)bVar3,0x188de18126cf1b5e);
                pcVar9[0x19] = cVar2;
                uVar6 = (((ulong)bVar3 ^ 0x188de18126cf1b5e) << 0x11 | 0x311b) + 0x9e3779b97f4a7c15;
                bVar3 = pcVar9[2];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
/* wm:watermarked copy - do not remove */
                pcVar9[0x1a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
                bVar3 = pcVar9[3];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x1b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c17;
                bVar3 = pcVar9[4];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x1c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c18;
                bVar3 = pcVar9[5];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x1d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c19;
                bVar3 = pcVar9[6];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x1e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar3 = pcVar9[7];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x1f] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar3 = pcVar9[8];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x20] = cVar2;
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1c;
                bVar3 = pcVar9[9];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x21] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1d;
                bVar3 = pcVar9[10];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x22] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1e;
                bVar3 = pcVar9[0xb];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x23] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1f;
                bVar3 = pcVar9[0xc];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x24] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c20;
                bVar3 = pcVar9[0xd];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x25] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c21;
                bVar3 = pcVar9[0xe];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x26] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c22;
                bVar3 = pcVar9[0xf];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x27] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c23;
                bVar3 = pcVar9[0x10];
/* wm:stripping the watermark breaks the license */
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x28] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c24;
                bVar3 = pcVar9[0x11];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x29] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c25;
                bVar3 = pcVar9[0x12];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x2a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c26;
                bVar3 = pcVar9[0x13];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x2b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c27;
                bVar3 = pcVar9[0x14];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x2c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c28;
                bVar3 = pcVar9[0x15];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
/* do not claim this as your own */
                pcVar9[0x2d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c29;
                bVar3 = pcVar9[0x16];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x2e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c2a;
                bVar3 = pcVar9[0x17];
                cVar2 = func_0x0016eaac((ulong)bVar3,uVar6);
                pcVar9[0x2f] = cVar2;
                cVar2 = func_0x0016eaac(pcVar9[0x18],
                                        (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) +
                                        0x9e3779b97f4a7c2b);
                pcVar9[0x30] = cVar2;
                *pcVar9 = '\0';
              }
              pcStack_98 = pcVar9 + 0x19;
              func_0x0011ab24(&pcStack_98);
              func_0x007a1b5c(param_1,"%s");
LAB_000807e4:
              func_0x019bdbcc();
LAB_0007eeec:
              pcStack_88 = (char *)(*pcRam0000000002064698)();
              if (*pcStack_88 == '\x01') {
                uVar1 = (byte)pcStack_88[1] ^ 0x69770e74;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) + 0xbab87786;
                pcStack_88[10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ 0xb7;
                uVar6 = (((ulong)(byte)pcStack_88[1] ^ 0x75562f3f20268a01) << 0x11 | 0xeaac) +
                        0x9e3779b97f4a7c15;
                uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar10 ^ uVar10 >> 0x21;
                uVar1 = (uint)(byte)pcStack_88[2] ^ (uint)uVar13 ^ 0xffffffc3;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
                pcStack_88[0xb] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[2]) << 0x11) + 0x9e3779b97f4a7c16
                ;
                uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar10 ^ uVar10 >> 0x21;
                uVar1 = (uint)(byte)pcStack_88[3] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
                pcStack_88[0xc] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[3]) << 0x11) + 0x9e3779b97f4a7c17
                ;
                uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar10 ^ uVar10 >> 0x21;
/* WM - if you paid for this, you were scammed */
                uVar1 = (uint)(byte)pcStack_88[4] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
                pcStack_88[0xd] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[4]) << 0x11) + 0x9e3779b97f4a7c18
                ;
                uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar10 ^ uVar10 >> 0x21;
                uVar1 = (uint)(byte)pcStack_88[5] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
                pcStack_88[0xe] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[5]) << 0x11) + 0x9e3779b97f4a7c19
                ;
                uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar10 ^ uVar10 >> 0x21;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                uVar1 = (uint)(byte)pcStack_88[6] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
                pcStack_88[0xf] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[6]) << 0x11) + 0x9e3779b97f4a7c1a
                ;
                uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar10 ^ uVar10 >> 0x21;
                uVar1 = (uint)(byte)pcStack_88[7] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
                pcStack_88[0x10] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[7]) << 0x11) + 0x9e3779b97f4a7c1b
                ;
                uVar10 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar10 = (uVar10 ^ uVar10 >> 0x21) * -0x3b314601e57a13ad;
                uVar13 = uVar10 ^ uVar10 >> 0x21;
                uVar1 = (uint)(byte)pcStack_88[8] ^ (uint)uVar13 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar10 >> 0x29) | 1) + (int)(uVar13 >> 0x17));
                pcStack_88[0x11] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar13;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ (byte)pcStack_88[8]) << 0x11) + 0x9e3779b97f4a7c1c
                ;
                uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0xae502812aa7333;
                uVar6 = (uVar6 ^ uVar6 >> 0x21) * -0x3b314601e57a13ad;
                uVar10 = uVar6 ^ uVar6 >> 0x21;
/* WM - keep the notice, keep the source honest */
                uVar1 = (uint)(byte)pcStack_88[9] ^ (uint)uVar10 ^ 0xffffffc3;
                uVar1 = (uVar1 >> 3 & 0x1f | uVar1 << 5) -
                        (((uint)(uVar6 >> 0x29) | 1) + (int)(uVar10 >> 0x17));
                pcStack_88[0x12] = ((byte)(uVar1 >> 6) & 3 | (char)uVar1 * '\x04') ^ (byte)uVar10;
                *pcStack_88 = '\0';
              }
              pcStack_88 = pcStack_88 + 10;
              uVar8 = func_0x0011ab24(&pcStack_88);
              func_0x007a1ba8(param_1,1,uVar8);
LAB_0007f2dc:
              func_0x00791198(param_1);
LAB_0007f2e4:
              pbVar15 = (byte *)(*pcRam0000000002064710)();
              if ((*pbVar15 & 1) == 0) {
                func_0x019bdcf8();
              }
              pcVar9 = (char *)(*pcRam00000000020646f8)();
              if (*pcVar9 == '\x01') {
                bVar3 = pcVar9[1];
                cVar2 = func_0x0016b7a8((ulong)bVar3,0x5d7a97e260f3b055);
                pcVar9[0x18] = cVar2;
                uVar6 = (((ulong)bVar3 ^ 0x5d7a97e260f3b055) << 0x11 | 0xbaf5) + 0x9e3779b97f4a7c15;
                bVar3 = pcVar9[2];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x19] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
                bVar3 = pcVar9[3];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x1a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c17;
                bVar3 = pcVar9[4];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x1b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c18;
                bVar3 = pcVar9[5];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x1c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c19;
/* WM - more drops soon - github.com/pengussy */
                bVar3 = pcVar9[6];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x1d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar3 = pcVar9[7];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x1e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar3 = pcVar9[8];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x1f] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1c;
                bVar3 = pcVar9[9];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x20] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1d;
                bVar3 = pcVar9[10];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x21] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1e;
                bVar3 = pcVar9[0xb];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x22] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1f;
                bVar3 = pcVar9[0xc];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
/*  unlicensed copy if this notice is missing  */
                pcVar9[0x23] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c20;
                bVar3 = pcVar9[0xd];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x24] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c21;
                bVar3 = pcVar9[0xe];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x25] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c22;
                bVar3 = pcVar9[0xf];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x26] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c23;
                bVar3 = pcVar9[0x10];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x27] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c24;
                bVar3 = pcVar9[0x11];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x28] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c25;
                bVar3 = pcVar9[0x12];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x29] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c26;
                bVar3 = pcVar9[0x13];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x2a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c27;
                bVar3 = pcVar9[0x14];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x2b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c28;
                bVar3 = pcVar9[0x15];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
/* WM - found on a paste site? it was re-uploaded illegally */
                pcVar9[0x2c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c29;
                bVar3 = pcVar9[0x16];
                cVar2 = func_0x0016b7a8((ulong)bVar3,uVar6);
                pcVar9[0x2d] = cVar2;
                cVar2 = func_0x0016b7a8(pcVar9[0x17],
                                        (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) +
                                        0x9e3779b97f4a7c2a);
                pcVar9[0x2e] = cVar2;
                *pcVar9 = '\0';
              }
              pcStack_b0 = pcVar9 + 0x18;
              func_0x0011ab24(&pcStack_b0);
              func_0x007a1b5c(param_1,"%s");
LAB_0007f6e0:
              __ZNSt3__15mutex6unlockEv(0x1f26c70);
LAB_0007f6ec:
              pbVar15 = (byte *)(*pcRam0000000002064740)();
              if ((*pbVar15 & 1) == 0) {
                func_0x019bdcbc();
              }
              pcVar9 = (char *)(*pcRam0000000002064728)();
              if (*pcVar9 == '\x01') {
                bVar3 = pcVar9[1];
                cVar2 = func_0x00168a14((ulong)bVar3,0x4ebd827ffb4b8753);
                pcVar9[0x19] = cVar2;
/* unlicensed copy if this notice is missing - github.com/pengussy */
                uVar6 = (((ulong)bVar3 ^ 0x4ebd827ffb4b8753) << 0x11 | 0x9d7b) + 0x9e3779b97f4a7c15;
                bVar3 = pcVar9[2];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x1a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
                bVar3 = pcVar9[3];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x1b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c17;
                bVar3 = pcVar9[4];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x1c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c18;
                bVar3 = pcVar9[5];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x1d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c19;
/* watermarked copy - do not remove */
                bVar3 = pcVar9[6];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x1e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar3 = pcVar9[7];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x1f] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar3 = pcVar9[8];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x20] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1c;
                bVar3 = pcVar9[9];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x21] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1d;
                bVar3 = pcVar9[10];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x22] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1e;
                bVar3 = pcVar9[0xb];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x23] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1f;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                bVar3 = pcVar9[0xc];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x24] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c20;
                bVar3 = pcVar9[0xd];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x25] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c21;
                bVar3 = pcVar9[0xe];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x26] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c22;
                bVar3 = pcVar9[0xf];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x27] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c23;
                bVar3 = pcVar9[0x10];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x28] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c24;
                bVar3 = pcVar9[0x11];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x29] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c25;
/* stripping the watermark breaks the license - github.com/pengussy */
                bVar3 = pcVar9[0x12];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x2a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c26;
                bVar3 = pcVar9[0x13];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x2b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c27;
                bVar3 = pcVar9[0x14];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x2c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c28;
                bVar3 = pcVar9[0x15];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x2d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c29;
                bVar3 = pcVar9[0x16];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x2e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c2a;
                bVar3 = pcVar9[0x17];
                cVar2 = func_0x00168a14((ulong)bVar3,uVar6);
                pcVar9[0x2f] = cVar2;
                cVar2 = func_0x00168a14(pcVar9[0x18],
                                        (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) +
                                        0x9e3779b97f4a7c2b);
                pcVar9[0x30] = cVar2;
                *pcVar9 = '\0';
              }
              pcStack_a8 = pcVar9 + 0x19;
              func_0x0011ab24(&pcStack_a8);
              func_0x007a1b5c(param_1,"%s");
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
LAB_0007fb0c:
              pbVar15 = (byte *)(*pcRam00000000020647d0)();
              if ((*pbVar15 & 1) == 0) {
                func_0x019bdc08();
              }
              pcVar9 = (char *)(*pcRam00000000020647b8)();
              if (*pcVar9 == '\x01') {
                bVar3 = pcVar9[1];
                cVar2 = func_0x00169ce8((ulong)bVar3,0x5024d8a740063c99);
                pcVar9[0x1c] = cVar2;
                uVar6 = (((ulong)bVar3 ^ 0x5024d8a740063c99) << 0x11 | 0xa049) + 0x9e3779b97f4a7c15;
                bVar3 = pcVar9[2];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x1d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
                bVar3 = pcVar9[3];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
/* wm:if you paid for this, you were scammed */
                pcVar9[0x1e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c17;
                bVar3 = pcVar9[4];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x1f] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c18;
                bVar3 = pcVar9[5];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x20] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c19;
                bVar3 = pcVar9[6];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x21] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar3 = pcVar9[7];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x22] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar3 = pcVar9[8];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x23] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1c;
                bVar3 = pcVar9[9];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x24] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1d;
                bVar3 = pcVar9[10];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x25] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1e;
                bVar3 = pcVar9[0xb];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                pcVar9[0x26] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1f;
                bVar3 = pcVar9[0xc];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x27] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c20;
                bVar3 = pcVar9[0xd];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x28] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c21;
                bVar3 = pcVar9[0xe];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x29] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c22;
                bVar3 = pcVar9[0xf];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x2a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c23;
                bVar3 = pcVar9[0x10];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
                pcVar9[0x2b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c24;
                bVar3 = pcVar9[0x11];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x2c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c25;
                bVar3 = pcVar9[0x12];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x2d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c26;
                bVar3 = pcVar9[0x13];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x2e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c27;
                bVar3 = pcVar9[0x14];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x2f] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c28;
                bVar3 = pcVar9[0x15];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x30] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c29;
                bVar3 = pcVar9[0x16];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
                pcVar9[0x31] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c2a;
                bVar3 = pcVar9[0x17];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x32] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c2b;
                bVar3 = pcVar9[0x18];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x33] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c2c;
                bVar3 = pcVar9[0x19];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x34] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c2d;
                bVar3 = pcVar9[0x1a];
                cVar2 = func_0x00169ce8((ulong)bVar3,uVar6);
                pcVar9[0x35] = cVar2;
                cVar2 = func_0x00169ce8(pcVar9[0x1b],
                                        (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) +
                                        0x9e3779b97f4a7c2e);
                pcVar9[0x36] = cVar2;
                *pcVar9 = '\0';
/* more drops soon - github.com/pengussy */
              }
              pcStack_90 = pcVar9 + 0x1c;
              func_0x0011ab24(&pcStack_90);
              func_0x007a1b5c(param_1,"%s");
LAB_0007ff98:
              pbVar15 = (byte *)(*pcRam0000000002064770)();
              if ((*pbVar15 & 1) == 0) {
                func_0x019bdc80();
              }
              pcVar9 = (char *)(*pcRam0000000002064758)();
              if (*pcVar9 == '\x01') {
                bVar3 = pcVar9[1];
                cVar2 = func_0x0016ea40((ulong)bVar3,0x416649de1784cdf8);
                pcVar9[0x19] = cVar2;
                uVar6 = (((ulong)bVar3 ^ 0x416649de1784cdf8) << 0x11 | 0x82cc) + 0x9e3779b97f4a7c15;
                bVar3 = pcVar9[2];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
/* wm:keep the notice, keep the source honest */
                pcVar9[0x1a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c16;
                bVar3 = pcVar9[3];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x1b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c17;
                bVar3 = pcVar9[4];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x1c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c18;
                bVar3 = pcVar9[5];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x1d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c19;
                bVar3 = pcVar9[6];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x1e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1a;
                bVar3 = pcVar9[7];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x1f] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1b;
                bVar3 = pcVar9[8];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x20] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1c;
                bVar3 = pcVar9[9];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x21] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1d;
                bVar3 = pcVar9[10];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x22] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1e;
                bVar3 = pcVar9[0xb];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x23] = cVar2;
/* keep the notice, keep the source honest - github.com/pengussy */
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c1f;
                bVar3 = pcVar9[0xc];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x24] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c20;
                bVar3 = pcVar9[0xd];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x25] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c21;
                bVar3 = pcVar9[0xe];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x26] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c22;
                bVar3 = pcVar9[0xf];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x27] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c23;
                bVar3 = pcVar9[0x10];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x28] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c24;
                bVar3 = pcVar9[0x11];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x29] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c25;
                bVar3 = pcVar9[0x12];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x2a] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c26;
                bVar3 = pcVar9[0x13];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x2b] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c27;
                bVar3 = pcVar9[0x14];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
/* reversing this took months of machine time - github.com/pengussy */
                pcVar9[0x2c] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c28;
                bVar3 = pcVar9[0x15];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x2d] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c29;
                bVar3 = pcVar9[0x16];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x2e] = cVar2;
                uVar6 = (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) + 0x9e3779b97f4a7c2a;
                bVar3 = pcVar9[0x17];
                cVar2 = func_0x0016ea40((ulong)bVar3,uVar6);
                pcVar9[0x2f] = cVar2;
                cVar2 = func_0x0016ea40(pcVar9[0x18],
                                        (uVar6 >> 0x2f | (uVar6 ^ bVar3) << 0x11) +
                                        0x9e3779b97f4a7c2b);
                pcVar9[0x30] = cVar2;
                *pcVar9 = '\0';
              }
              pcStack_a0 = pcVar9 + 0x19;
              func_0x0011ab24(&pcStack_a0);
              func_0x007a1b5c(param_1,"%s");
LAB_000803b8:
              __ZNSt3__15mutex6unlockEv(0x1f26c70);
            } while( true );
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
          }
          *(undefined **)(lStack_78 + 0x18) = unaff_x21;
          *(ulong *)(lStack_78 + 0x20) = lStack_78 + 0x20U ^ 0x7069c;
        }
      }
      func_0x00073254(param_1,lStack_78,lVar7);
      goto LAB_0007ecd4;
    }
  }
  else {
    func_0x0007e644(param_1);
  }
  func_0x000706b0(param_1,lStack_78,lStack_80);
LAB_0007ecd4:
  func_0x0007102c(param_1,lStack_78);
  __ZNSt3__15mutex4lockEv(0x1f26c70);
  lVar7 = func_0x001393dc(0x20970e8,&lStack_78);
  if (lVar7 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = *(undefined4 *)(lVar7 + 0x20);
    func_0x001394fc(&lStack_70,0x20970e8);
    lVar7 = lStack_70;
    lStack_70 = 0;
    if (lVar7 != 0) {
      __ZdlPv();
/* wm:found on a paste site? it was re-uploaded illegally */
    }
  }
  __ZNSt3__15mutex6unlockEv(0x1f26c70);
  func_0x000808dc(param_1,uVar14);
  return 0;
}

