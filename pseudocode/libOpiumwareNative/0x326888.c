/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x326888:ca80ed4adb
 */

undefined8 * FUN_00326888(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (*(long *)(param_1 + 0x2b0) == 0) {
    FUN_00326d54(param_1);
    lVar13 = (long)*(int *)(param_1 + 0x68);
    if ((*(byte *)((long)param_2 + 0x35) & 1) != 0) goto LAB_003268bc;
LAB_00326960:
    puVar10 = (undefined8 *)func_0x002fd6d8(0x50);
    puVar10[7] = 0;
    puVar10[6] = 0;
    puVar10[9] = 0;
    puVar10[8] = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
/* if you paid for this, you were scammed */
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[1] = 0;
    *puVar10 = 0;
    *(undefined4 *)(puVar10 + 9) = 0x3f800000;
    iVar6 = *(int *)(param_1 + 0x29c);
    *(int *)(param_1 + 0x29c) = iVar6 + 1;
    *(int *)(puVar10 + 3) = iVar6;
    *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(param_2 + 0xf);
    *(undefined4 *)((long)puVar10 + 0x1c) = *(undefined4 *)((long)param_2 + 0x3c);
    *(undefined4 *)((long)puVar10 + 0x14) = *(undefined4 *)(param_2 + 0xe);
    iVar6 = *(int *)(param_1 + 0x68);
    if (iVar6 == *(int *)(param_1 + 0x6c)) {
      if (iVar6 == 0) {
        uVar14 = 8;
      }
      else {
        uVar14 = iVar6 + iVar6 / 2;
      }
      if ((int)uVar14 <= (int)(iVar6 + 1U)) {
        uVar14 = iVar6 + 1U;
      }
      lVar12 = func_0x002fd6d8(-(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3);
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      if (*(long *)(param_1 + 0x70) != 0) {
        _memcpy(lVar12,*(long *)(param_1 + 0x70),(long)*(int *)(param_1 + 0x68) << 3);
        func_0x002fda6c(*(undefined8 *)(param_1 + 0x70));
      }
      *(long *)(param_1 + 0x70) = lVar12;
      *(uint *)(param_1 + 0x6c) = uVar14;
      iVar6 = *(int *)(param_1 + 0x68);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x70);
    }
    *(undefined8 **)(lVar12 + (long)iVar6 * 8) = puVar10;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  }
  else {
    lVar13 = (long)*(int *)(param_1 + 0x68);
    if ((*(byte *)((long)param_2 + 0x35) & 1) == 0) goto LAB_00326960;
LAB_003268bc:
    puVar10 = (undefined8 *)param_2[0x10];
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x70) + lVar13 * 8 + -8);
    }
    lVar12 = *(long *)(param_1 + 0x2b0);
    if ((lVar12 != 0) && (iVar6 = *(int *)(lVar12 + 0xc0), 0 < iVar6)) {
      uVar14 = 0;
      do {
        lVar4 = *(long *)(*(long *)(lVar12 + 0xd0) + (ulong)(uVar14 >> 5) * 8) +
                (ulong)(uVar14 & 0x1f) * 0x68;
        if (((*(int *)(lVar4 + 0x50) <= *(int *)(*(long *)(param_1 + 0x2b0) + 0xa4)) &&
            (*(undefined8 **)(lVar4 + 0x58) == puVar10)) &&
           ((*(byte *)(lVar4 + 0x4f) >> 2 & 1) == 0)) {
          FUN_0032964c(param_1,puVar10);
          iVar6 = *(int *)(lVar12 + 0xc0);
        }
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar6);
    }
  }
  iVar6 = *(int *)(param_1 + 0x78);
  if (iVar6 == *(int *)(param_1 + 0x7c)) {
    iVar2 = 8;
    if (iVar6 != 0) {
      iVar2 = iVar6 + iVar6 / 2;
    }
    if (iVar2 <= iVar6 + 1) {
      iVar2 = iVar6 + 1;
    }
    lVar12 = func_0x002fd6d8((long)iVar2 * 0xa0);
    if (*(long *)(param_1 + 0x80) != 0) {
      _memcpy(lVar12,*(long *)(param_1 + 0x80),(long)*(int *)(param_1 + 0x78) * 0xa0);
      func_0x002fda6c(*(undefined8 *)(param_1 + 0x80));
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
    }
    *(long *)(param_1 + 0x80) = lVar12;
    *(int *)(param_1 + 0x7c) = iVar2;
    iVar6 = *(int *)(param_1 + 0x78);
  }
  else {
    lVar12 = *(long *)(param_1 + 0x80);
  }
  puVar7 = (undefined8 *)(lVar12 + (long)iVar6 * 0xa0);
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  puVar7[1] = param_2[1];
  *puVar7 = uVar15;
  puVar7[3] = uVar17;
  puVar7[2] = uVar16;
  uVar16 = param_2[5];
  uVar15 = param_2[4];
  uVar18 = param_2[7];
  uVar17 = param_2[6];
  uVar19 = param_2[8];
  uVar21 = param_2[0xb];
  uVar20 = param_2[10];
  puVar7[9] = param_2[9];
  puVar7[8] = uVar19;
  puVar7[0xb] = uVar21;
  puVar7[10] = uVar20;
  puVar7[5] = uVar16;
  puVar7[4] = uVar15;
  puVar7[7] = uVar18;
  puVar7[6] = uVar17;
  uVar16 = param_2[0xd];
  uVar15 = param_2[0xc];
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
  uVar18 = param_2[0xf];
  uVar17 = param_2[0xe];
  uVar19 = param_2[0x10];
  uVar21 = param_2[0x13];
  uVar20 = param_2[0x12];
  puVar7[0x11] = param_2[0x11];
  puVar7[0x10] = uVar19;
  puVar7[0x13] = uVar21;
  puVar7[0x12] = uVar20;
  puVar7[0xd] = uVar16;
  puVar7[0xc] = uVar15;
  puVar7[0xf] = uVar18;
  puVar7[0xe] = uVar17;
  lVar12 = (long)*(int *)(param_1 + 0x78) + 1;
  *(int *)(param_1 + 0x78) = (int)lVar12;
  lVar12 = *(long *)(param_1 + 0x80) + lVar12 * 0xa0;
  if (*(long *)(lVar12 + -0x20) == 0) {
    *(undefined8 **)(lVar12 + -0x20) = puVar10;
    iVar6 = *(int *)(puVar10 + 4);
    if (iVar6 == *(int *)((long)puVar10 + 0x24)) goto LAB_00326af8;
  }
  else {
    iVar6 = *(int *)(puVar10 + 4);
    if (iVar6 == *(int *)((long)puVar10 + 0x24)) {
LAB_00326af8:
      uVar14 = 8;
      if (iVar6 != 0) {
        uVar14 = iVar6 + iVar6 / 2;
      }
// donate: donate/README.md
      if ((int)uVar14 <= (int)(iVar6 + 1U)) {
        uVar14 = iVar6 + 1U;
      }
      lVar4 = func_0x002fd6d8(-(ulong)(uVar14 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar14 << 3);
      if (puVar10[5] != 0) {
        _memcpy(lVar4,puVar10[5],(long)*(int *)(puVar10 + 4) << 3);
        func_0x002fda6c(puVar10[5]);
      }
      puVar10[5] = lVar4;
      *(uint *)((long)puVar10 + 0x24) = uVar14;
      iVar6 = *(int *)(puVar10 + 4);
      goto LAB_00326b6c;
    }
  }
  lVar4 = puVar10[5];
LAB_00326b6c:
  lVar11 = lVar12 + -0xa0;
  *(long *)(lVar4 + (long)iVar6 * 8) = lVar11;
  *(int *)(puVar10 + 4) = *(int *)(puVar10 + 4) + 1;
  func_0x00326f30(param_1);
  psVar3 = *(short **)(lVar12 + -0x58);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
  uVar8 = 0;
  if (psVar3 != (short *)0x0) {
    if (*psVar3 == 0) {
      uVar8 = 2;
    }
    else {
      uVar8 = 2;
      do {
        psVar1 = (short *)((long)psVar3 + uVar8);
        uVar8 = uVar8 + 2;
      } while (*psVar1 != 0);
      uVar8 = uVar8 & 0xffffffff;
    }
    uVar8 = func_0x002fd7ac(psVar3,uVar8);
    *(ulong *)(lVar12 + -0x58) = uVar8;
  }
  if (*(long *)(lVar12 + -0x18) == 0) {
    pcVar9 = *(code **)(*(long *)(param_1 + 0x2b8) + 0x18);
  }
  else {
    pcVar9 = *(code **)(*(long *)(lVar12 + -0x18) + 0x18);
  }
  if ((pcVar9 == (code *)0x0) || (uVar8 = (*pcVar9)(param_1,lVar11), (uVar8 & 1) != 0)) {
    if ((*(byte *)(lVar12 + -0x6b) & 1) == 0) {
      lVar12 = puVar10[1];
      if (((lVar12 != 0) && (lVar4 = *(long *)(lVar12 + 0x2b0), lVar4 != 0)) &&
         (iVar6 = *(int *)(lVar4 + 0xc0), 0 < iVar6)) {
        uVar14 = 0;
        do {
          lVar5 = *(long *)(*(long *)(lVar4 + 0xd0) + (ulong)(uVar14 >> 5) * 8) +
                  (ulong)(uVar14 & 0x1f) * 0x68;
          if (((*(int *)(lVar5 + 0x50) <= *(int *)(*(long *)(lVar12 + 0x2b0) + 0xa4)) &&
              (*(undefined8 **)(lVar5 + 0x58) == puVar10)) &&
             ((*(byte *)(lVar5 + 0x4f) >> 2 & 1) == 0)) {
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
            uVar8 = FUN_0032964c(lVar12,puVar10);
            iVar6 = *(int *)(lVar4 + 0xc0);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar6);
      }
      *(undefined1 *)((long)puVar10 + 0x34) = 0;
      *puVar10 = 0;
      puVar10[1] = param_1;
      *(undefined1 *)(param_1 + 0x52) = 0;
      func_0x00328c54(uVar8,puVar10,lVar11);
    }
    else {
      *(undefined1 *)(param_1 + 0x52) = 0;
      func_0x00328c54(uVar8,puVar10,lVar11);
    }
    if ((int)lVar13 == 0) {
      func_0x00325c30(param_1,0,puVar10);
    }
    puVar7 = puVar10;
  }
  else {
    if (*(char *)(lVar12 + -0x6c) == '\x01') {
      func_0x002fda6c(*(undefined8 *)(lVar12 + -0x78));
    }
    *(undefined8 *)(lVar12 + -0x78) = 0;
    if (*(long *)(lVar12 + -0x58) != 0) {
      func_0x002fda6c();
    }
    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)(lVar12 + -0x58) = 0;
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + -1;
    *(int *)(puVar10 + 4) = *(int *)(puVar10 + 4) + -1;
    if ((*(byte *)(lVar12 + -0x6b) & 1) == 0) {
      func_0x00332bcc(puVar10);
      func_0x002fda6c();
/* chat: discord.gg/sdkhDjTex */
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      return (undefined8 *)0x0;
    }
  }
  return puVar7;
}

