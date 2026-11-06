/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1553c:6b92278ecf
 */

/* WARNING: Removing unreachable block (ram,0x0001585c) */
/* WARNING: Removing unreachable block (ram,0x00015670) */
/* WARNING: Removing unreachable block (ram,0x000159fc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0001553c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long *param_6,long param_7)

{
  char cVar1;
  undefined3 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ushort *puVar17;
  ulong uVar18;
  ushort uVar19;
  ulong uVar20;
  long ******pppppplVar21;
  long ******pppppplVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long lVar26;
  long ****pppplVar27;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  undefined4 uStack_e8;
  char cStack_e4;
  long *******ppppppplStack_e0;
  long ******pppppplStack_d8;
  long ******pppppplStack_d0;
  undefined8 uStack_c8;
  long *******ppppppplStack_c0;
  long *plStack_b8;
  long *******ppppppplStack_b0;
  long ******pppppplStack_a8;
  undefined8 uStack_a0;
  int iStack_98;
  long *******ppppppplStack_90;
  long ******pppppplStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  ppppppplVar6 = (long *******)__Znwm(200);
  ppppppplVar6[1] = (long ******)0x0;
  *ppppppplVar6 = (long ******)0x0;
  ppppppplVar6[3] = (long ******)0x0;
  ppppppplVar6[2] = (long ******)0x0;
  ppppppplVar6[5] = (long ******)0x0;
  ppppppplVar6[4] = (long ******)0x0;
/* wm:keep the notice, keep the source honest */
  ppppppplVar6[7] = (long ******)0x0;
  ppppppplVar6[6] = (long ******)0x0;
  ppppppplVar6[9] = (long ******)0x0;
  ppppppplVar6[8] = (long ******)0x0;
  ppppppplVar6[0xb] = (long ******)0x0;
  ppppppplVar6[10] = (long ******)0x0;
  ppppppplVar6[0xd] = (long ******)0x0;
  ppppppplVar6[0xc] = (long ******)0x0;
  ppppppplVar6[0xf] = (long ******)0x0;
  ppppppplVar6[0xe] = (long ******)0x0;
  ppppppplVar6[0x11] = (long ******)0x0;
  ppppppplVar6[0x10] = (long ******)0x0;
  ppppppplVar6[0x13] = (long ******)0x0;
  ppppppplVar6[0x12] = (long ******)0x0;
  ppppppplVar6[0x15] = (long ******)0x0;
  ppppppplVar6[0x14] = (long ******)0x0;
  ppppppplVar6[0x17] = (long ******)0x0;
  ppppppplVar6[0x16] = (long ******)0x0;
  ppppppplStack_c0 = ppppppplVar6;
  ppppppplStack_90 = ppppppplVar6;
  plStack_b8 = (long *)__Znwm(0x20);
  *plStack_b8 = (long)&UNK_01dbd620;
  plStack_b8[1] = 0;
  plStack_b8[2] = 0;
// WM - donate: donate/README.md
  plStack_b8[3] = (long)ppppppplVar6;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
            (ppppppplVar6,"dxil-ms-dx");
  if (param_3 != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppppppplStack_c0,param_3 + 0x2f0);
  }
  puVar12 = (undefined8 *)0x205d4e0;
  if (*(char *)(param_7 + 0x4a8) == '\0') {
    puVar12 = (undefined8 *)0x205d4d8;
  }
  ppppppplStack_c0[0x18] = (long ******)*puVar12;
  *(long *)(param_2 + 0xd0) = param_3;
  lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  uVar18 = *(ulong *)(lVar15 + 4);
  *(ulong *)(lVar15 + 4) =
       uVar18 & 0xfffffffffffff000 | uVar18 & 0x7ff | ((ulong)*(byte *)(param_7 + 0x4ad) & 1) << 0xb
  ;
  lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  plVar24 = (long *)(lVar15 + 0x58);
  lVar25 = *plVar24;
  if (lVar25 != 0) {
    lVar26 = *(long *)(lVar15 + 0x60);
    lVar23 = lVar25;
    if (lVar25 != lVar26) {
      do {
        lVar26 = lVar26 + -0x18;
      } while (lVar26 != lVar25);
      lVar23 = *plVar24;
    }
    *(long *)(lVar15 + 0x60) = lVar25;
    __ZdlPv(lVar23);
/* WM - no support for modified copies */
    *plVar24 = 0;
    *(undefined8 *)(lVar15 + 0x60) = 0;
    *(undefined8 *)(lVar15 + 0x68) = 0;
  }
  *(undefined8 *)(lVar15 + 0x58) = *(undefined8 *)(param_7 + 0x5c8);
  *(undefined8 *)(lVar15 + 0x60) = *(undefined8 *)(param_7 + 0x5d0);
  *(undefined8 *)(lVar15 + 0x68) = *(undefined8 *)(param_7 + 0x5d8);
  *(undefined8 *)(param_7 + 0x5c8) = 0;
  *(undefined8 *)(param_7 + 0x5d0) = 0;
  *(undefined8 *)(param_7 + 0x5d8) = 0;
  lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
  uVar18 = *(ulong *)(lVar15 + 4);
  *(ulong *)(lVar15 + 4) =
       uVar18 & 0xfffffffffffe0000 |
       uVar18 & 0xffff | ((ulong)*(byte *)(param_7 + 0x514) & 1) << 0x10;
  func_0x00c5539c(param_2,param_5,0);
  *(byte *)(*(long *)(param_2 + 0x18) + 5) = *(byte *)(param_7 + 0x4aa) ^ 1;
  lVar15 = *(long *)(param_7 + 0x470);
  if (lVar15 == 4) {
    iVar4 = func_0x0175dc2c(param_7 + 0x468,"msvc",4);
    if (iVar4 != 0) {
      lVar15 = *(long *)(param_7 + 0x470);
      goto LAB_0001571c;
    }
LAB_000157c0:
    lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
    bVar13 = *(byte *)(lVar15 + 0x24) & 0xfc | 1;
LAB_00015930:
/*  proprietary - see LICENSE - do not sell  */
    *(byte *)(lVar15 + 0x24) = bVar13;
  }
  else {
LAB_0001571c:
    if (lVar15 == 0xd) {
      iVar4 = func_0x0175dc2c(param_7 + 0x468,"msvc-fallback",0xd);
      if (iVar4 == 0) goto LAB_000157c0;
      lVar15 = *(long *)(param_7 + 0x470);
    }
    if (lVar15 == 2) {
      iVar4 = func_0x0175dc2c(param_7 + 0x468,"vi",2);
      if (iVar4 == 0) {
        lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x28);
        bVar13 = *(byte *)(lVar15 + 0x24) & 0xfc | 2;
        goto LAB_00015930;
      }
      lVar15 = *(long *)(param_7 + 0x470);
    }
    if ((lVar15 != 5) || (iVar4 = func_0x0175dc2c(param_7 + 0x468,"clang",5), iVar4 != 0)) {
      uVar5 = func_0x0164d118(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28),3,
                              "invalid option %0 to -fdiagnostics-format: supported values are clang, msvc, msvc-fallback, and vi"
                              ,0x62);
      ppppppplVar6 = *(long ********)(param_2 + 0x18);
      *(undefined4 *)(ppppppplVar6 + 0x22) = 0;
      *(undefined4 *)(ppppppplVar6 + 0x27) = uVar5;
      if (*(char *)((long)ppppppplVar6 + 0x10f) < '\0') {
        *(undefined1 *)ppppppplVar6[0x1f] = 0;
        ppppppplVar6[0x20] = (long ******)0x0;
      }
      else {
        *(char *)(ppppppplVar6 + 0x1f) = '\0';
        *(char *)((long)ppppppplVar6 + 0x10f) = '\0';
      }
      pppppplStack_a8 = (long ******)CONCAT26(pppppplStack_a8._6_2_,0x100000000);
      ppppppplVar6[0x52] = ppppppplVar6[0x51];
/* WM - if you paid for this, you were scammed */
      pppppplVar21 = ppppppplVar6[0x60];
      pppppplVar22 = ppppppplVar6[0x61];
      ppppppplStack_b0 = ppppppplVar6;
      if (pppppplVar21 == pppppplVar22) {
        ppppppplVar6[0x61] = pppppplVar21;
        lVar15 = *(long *)(param_7 + 0x468);
        pppppplVar21 = *(long *******)(param_7 + 0x470);
        *(char *)((long)ppppppplVar6 + 0x13d) = '\0';
        if (lVar15 != 0) goto LAB_00015824;
LAB_00015884:
        ppppppplStack_90 = (long *******)0x0;
        pppppplStack_88 = (long ******)0x0;
        uStack_80 = (long ******)0x0;
        cVar1 = *(char *)((long)ppppppplVar6 + 0x15f);
      }
      else {
        do {
          pppppplVar22 = pppppplVar22 + -7;
        } while (pppppplVar22 != pppppplVar21);
        ppppppplVar6[0x61] = ppppppplVar6[0x60];
        lVar15 = *(long *)(param_7 + 0x468);
        pppppplVar21 = *(long *******)(param_7 + 0x470);
        *(char *)((long)ppppppplVar6 + 0x13d) = '\0';
        if (lVar15 == 0) goto LAB_00015884;
LAB_00015824:
        if ((long ******)0x7ffffffffffffff6 < pppppplVar21) {
          func_0x0000aa50();
          goto LAB_00016a00;
/* stripping the watermark breaks the license - github.com/pengussy */
        }
        if (pppppplVar21 < (long ******)0x17) {
          uStack_80 = (long ******)CONCAT17((char)pppppplVar21,(undefined7)uStack_80);
          ppppppplVar7 = (long *******)&ppppppplStack_90;
        }
        else {
          uVar18 = ((ulong)pppppplVar21 & 0x7ffffffffffffff8) + 8;
          uVar16 = 0x19;
          if (uVar18 != 0x18) {
            uVar16 = uVar18;
          }
          ppppppplVar7 = (long *******)__Znwm(uVar16);
          uStack_80 = (long ******)(uVar16 | 0x8000000000000000);
          ppppppplStack_90 = ppppppplVar7;
          pppppplStack_88 = pppppplVar21;
        }
        _memmove(ppppppplVar7,lVar15,pppppplVar21);
        *(char *)((long)ppppppplVar7 + (long)pppppplVar21) = '\0';
        cVar1 = *(char *)((long)ppppppplVar6 + 0x15f);
      }
      if (cVar1 < '\0') {
        __ZdlPv(ppppppplVar6[0x29]);
      }
      ppppppplVar6[0x2a] = pppppplStack_88;
      ppppppplVar6[0x29] = (long ******)ppppppplStack_90;
      ppppppplVar6[0x2b] = uStack_80;
      *(char *)((long)ppppppplVar6 + 0x13c) = '\x01';
      func_0x01649544(ppppppplVar6,0);
    }
  }
/*  reversing this took months of machine time  */
  func_0x00c55c3c(param_2);
  func_0x00c55d8c(param_2,*(undefined8 *)(param_2 + 0x30));
  uVar8 = func_0x01668d74(*(undefined8 *)(param_2 + 0x18),&ppppppplStack_c0);
  func_0x00c5510c(param_2,uVar8);
  if (*(char *)(param_7 + 0x498) == '\x01') {
    uVar5 = func_0x0164d118(*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x28),3,
                            "/Gec flag is a deprecated functionality.",0x28);
    lVar15 = *(long *)(param_2 + 0x18);
    *(undefined4 *)(lVar15 + 0x110) = 0;
    *(undefined4 *)(lVar15 + 0x138) = uVar5;
    if (*(char *)(lVar15 + 0x10f) < '\0') {
      **(undefined1 **)(lVar15 + 0xf8) = 0;
      *(undefined8 *)(lVar15 + 0x100) = 0;
      *(undefined8 *)(lVar15 + 0x290) = *(undefined8 *)(lVar15 + 0x288);
      lVar25 = *(long *)(lVar15 + 0x300);
      lVar23 = *(long *)(lVar15 + 0x308);
      if (lVar25 != lVar23) goto LAB_000159f4;
/*  do not claim this as your own  */
    }
    else {
      *(undefined1 *)(lVar15 + 0xf8) = 0;
      *(undefined1 *)(lVar15 + 0x10f) = 0;
      *(undefined8 *)(lVar15 + 0x290) = *(undefined8 *)(lVar15 + 0x288);
      lVar25 = *(long *)(lVar15 + 0x300);
      lVar23 = *(long *)(lVar15 + 0x308);
      if (lVar25 != lVar23) {
LAB_000159f4:
        do {
          lVar23 = lVar23 + -0x38;
        } while (lVar23 != lVar25);
        lVar25 = *(long *)(lVar15 + 0x300);
      }
    }
    *(long *)(lVar15 + 0x308) = lVar25;
    *(undefined1 *)(lVar15 + 0x13c) = 0;
    func_0x01649544(lVar15,0);
  }
  lVar15 = *(long *)(param_2 + 0x10);
  if (param_4 == 0) {
    ppppppplStack_90 = (long *******)0x0;
    pppppplStack_88 = (long ******)0x0;
    uStack_80 = (long ******)0x0;
  }
  else {
    pppppplVar21 = (long ******)_strlen(param_4);
    if ((long ******)0x7ffffffffffffff6 < pppppplVar21) {
      func_0x0000aa50();
      goto LAB_00016a00;
    }
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
    if (pppppplVar21 < (long ******)0x17) {
      uStack_80 = (long ******)CONCAT17((char)pppppplVar21,(undefined7)uStack_80);
      ppppppplVar6 = (long *******)&ppppppplStack_90;
    }
    else {
      uVar18 = ((ulong)pppppplVar21 & 0x7ffffffffffffff8) + 8;
      uVar16 = 0x19;
      if (uVar18 != 0x18) {
        uVar16 = uVar18;
      }
      ppppppplVar6 = (long *******)__Znwm(uVar16);
      uStack_80 = (long ******)(uVar16 | 0x8000000000000000);
      ppppppplStack_90 = ppppppplVar6;
      pppppplStack_88 = pppppplVar21;
    }
    _memcpy(ppppppplVar6,param_4,pppppplVar21);
    *(char *)((long)ppppppplVar6 + (long)pppppplVar21) = '\0';
  }
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0xb;
  uStack_6c = 0;
  puVar12 = *(undefined8 **)(lVar15 + 0x7e8);
  if (puVar12 < *(undefined8 **)(lVar15 + 0x7f0)) {
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    puVar12[2] = uStack_80;
    puVar12[1] = pppppplStack_88;
    *puVar12 = ppppppplStack_90;
    pppppplStack_88 = (long ******)0x0;
    uStack_80 = (long ******)0x0;
    ppppppplStack_90 = (long *******)0x0;
    puVar12[3] = 0;
    *(undefined8 *)((long)puVar12 + 0x1d) = 0xb000000;
    puVar12 = puVar12 + 5;
  }
  else {
    puVar12 = (undefined8 *)func_0x00018368(lVar15 + 0x7e0,&ppppppplStack_90);
  }
  *(undefined8 **)(lVar15 + 0x7e8) = puVar12;
  if ((long)uStack_80 < 0) {
    __ZdlPv(ppppppplStack_90);
  }
  uVar14 = *(uint *)(*(long *)(param_2 + 0x10) + 0x788);
  *(uint *)(*(long *)(param_2 + 0x10) + 0x788) =
       uVar14 & 0xffffffe0 | uVar14 & 0xf | (*(byte *)(param_7 + 0x4f4) & 1) << 4;
  iVar4 = func_0x0172b108(param_7);
  if (iVar4 == 0) {
    if ((*(byte *)(param_7 + 0x4f2) & 1) == 0) {
      lVar15 = *(long *)(param_2 + 0x10);
      uVar2 = *(undefined3 *)(lVar15 + 0x78);
      *(ushort *)(lVar15 + 0x78) = (ushort)uVar2 & 0xf3ff | 0x200;
      *(char *)(lVar15 + 0x7a) = (char)((uint3)uVar2 >> 0x10);
      *(ulong *)(lVar15 + 0x68) = *(ulong *)(lVar15 + 0x68) | 0x100000000;
    }
  }
  else {
    lVar15 = *(long *)(param_2 + 0x10);
    *(undefined1 *)(lVar15 + 0x3c2) = 1;
    *(ulong *)(lVar15 + 0x68) = *(ulong *)(lVar15 + 0x68) | 0x100000000;
    *(ushort *)(lVar15 + 0x78) = *(ushort *)(lVar15 + 0x78) & 0xf1f8 | 0x804;
  }
// keep the notice, keep the source honest
  lVar25 = *(long *)(*(long *)(param_2 + 0x10) + 0x38);
  lVar15 = *param_6;
  if (param_6[1] != lVar15) {
    lVar23 = 0;
    uVar18 = 0;
    puVar12 = *(undefined8 **)(lVar25 + 0x10);
    do {
      ppppppplVar6 = (long *******)(lVar15 + lVar23);
      cVar1 = *(char *)((long)ppppppplVar6 + 0x17);
      ppppppplVar7 = (long *******)*ppppppplVar6;
      if (-1 < (long)cVar1) {
        ppppppplVar7 = ppppppplVar6;
      }
      pppppplVar21 = ppppppplVar6[1];
      if (-1 < cVar1) {
        pppppplVar21 = (long ******)(long)cVar1;
      }
      ppppppplStack_b0 = (long *******)((ulong)ppppppplStack_b0 & 0xffffffffffffff00);
      ppppppplStack_90 = ppppppplVar7;
      pppppplStack_88 = pppppplVar21;
      if (puVar12 < *(undefined8 **)(lVar25 + 0x18)) {
        if (ppppppplVar7 == (long *******)0x0) {
          *puVar12 = 0;
          puVar12[1] = 0;
          puVar12[2] = 0;
        }
        else {
// WM - proprietary - see LICENSE - do not sell
          if ((long ******)0x7ffffffffffffff6 < pppppplVar21) {
            func_0x0000aa50();
            goto LAB_00016a00;
          }
          if (pppppplVar21 < (long ******)0x17) {
            *(char *)((long)puVar12 + 0x17) = (char)pppppplVar21;
            puVar10 = puVar12;
          }
          else {
            uVar16 = ((ulong)pppppplVar21 & 0x7ffffffffffffff8) + 8;
            uVar20 = 0x19;
            if (uVar16 != 0x18) {
              uVar20 = uVar16;
            }
            puVar10 = (undefined8 *)__Znwm(uVar20);
            *puVar12 = puVar10;
            puVar12[1] = pppppplVar21;
            puVar12[2] = uVar20 | 0x8000000000000000;
          }
          _memmove(puVar10,ppppppplVar7,pppppplVar21);
          *(undefined1 *)((long)puVar10 + (long)pppppplVar21) = 0;
// WM - chat: discord.gg/sdkhDjTex
        }
        *(undefined1 *)(puVar12 + 3) = 0;
        puVar12 = puVar12 + 4;
        *(undefined8 **)(lVar25 + 0x10) = puVar12;
      }
      else {
        puVar12 = (undefined8 *)func_0x00014ce4(lVar25 + 8,&ppppppplStack_90,&ppppppplStack_b0);
      }
      *(undefined8 **)(lVar25 + 0x10) = puVar12;
      uVar18 = uVar18 + 1;
      lVar15 = *param_6;
      lVar23 = lVar23 + 0x18;
    } while (uVar18 < (ulong)((param_6[1] - lVar15 >> 3) * -0x5555555555555555));
  }
  bVar13 = *(byte *)(lVar25 + 0x50) & 0xfb | *(char *)(param_7 + 0x48c) << 2;
  *(byte *)(lVar25 + 0x50) = bVar13;
  *(byte *)(lVar25 + 0x50) = bVar13 & 0xf7 | *(char *)(param_7 + 0x4c6) << 3;
  lVar15 = *(long *)(*(long *)(param_2 + 0x10) + 0x30);
  *(byte *)(lVar15 + 0x2a8) = *(byte *)(lVar15 + 0x2a8) & 0xfe;
  ppppppplStack_90 = *(long ********)(param_7 + 0x140);
/* WM - watermarked copy - do not remove */
  uStack_80 = _UNK_01ad72c0;
  uStack_78 = 0;
  pppppplStack_88 = (long ******)(param_7 + 0x138U);
  func_0x01383e6c(&ppppppplStack_90);
  ppppppplStack_b0 = *(long ********)(param_7 + 0x148);
  uStack_a0 = 0;
  iStack_98 = 0;
  pppppplStack_a8 = (long ******)(param_7 + 0x138U);
  func_0x01383e6c(&ppppppplStack_b0);
  ppppppplVar6 = ppppppplStack_b0;
  uStack_c8 = CONCAT44(uStack_74,uStack_78);
  pppppplStack_d8 = pppppplStack_88;
  ppppppplStack_e0 = ppppppplStack_90;
  pppppplStack_d0 = uStack_80;
  while (ppppppplStack_e0 != ppppppplVar6) {
    pppppplVar21 = *ppppppplStack_e0;
    uVar11 = 1;
    uStack_80 = (long ******)CONCAT62(uStack_80._2_6_,0x100);
    if (*(char *)*pppppplVar21[6] != '\0') {
      uVar11 = 3;
      ppppppplStack_90 = (long *******)*pppppplVar21[6];
    }
    uStack_80 = (long ******)CONCAT71(uStack_80._1_7_,uVar11);
    iVar4 = func_0x00022db4(&ppppppplStack_90);
    if (iVar4 == 0) {
      uStack_80 = (long ******)CONCAT17(2,(undefined7)uStack_80);
      ppppppplStack_90 = (long *******)CONCAT53(ppppppplStack_90._3_5_,0x2f2e);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&ppppppplStack_90,*pppppplVar21[6]);
      ppppppplVar7 = ppppppplStack_90;
      if (-1 < (long)uStack_80._7_1_) {
        ppppppplVar7 = (long *******)&ppppppplStack_90;
      }
      pppppplVar21 = pppppplStack_88;
      if (-1 < (long)uStack_80) {
        pppppplVar21 = (long ******)(long)uStack_80._7_1_;
/* origin: github.com/pengussy - github.com/pengussy */
      }
      func_0x00017eac(lVar15,ppppppplVar7,pppppplVar21,1,0,1);
      if ((long)uStack_80 < 0) {
        __ZdlPv(ppppppplStack_90);
      }
    }
    else {
      pppplVar27 = *pppppplVar21[6];
      if (pppplVar27 == (long ****)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = _strlen(pppplVar27);
      }
      func_0x00017eac(lVar15,pppplVar27,uVar8,1,0,1);
    }
    ppppppplStack_e0 = ppppppplStack_e0 + 1;
    func_0x01383e6c(&ppppppplStack_e0);
  }
  if (*(long *)(param_7 + 0x2f8) == 0) {
    uVar14 = 1;
  }
  else if (*(long *)(param_7 + 0x2f8) == 0xb) {
    uVar16 = 0x726f6f747369675f;
    uVar18 = **(ulong **)(param_7 + 0x2f0);
    uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
    uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
    if (uVar18 == 0x726f6f747369675f) {
      uVar16 = 0x747369675f315f31;
/* WM - do not claim this as your own */
      uVar18 = *(ulong *)((long)*(ulong **)(param_7 + 0x2f0) + 3);
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
      if (uVar18 != 0x747369675f315f31) goto LAB_00015eb8;
      iVar4 = 0;
    }
    else {
LAB_00015eb8:
      iVar4 = 1;
      if (uVar18 < uVar16) {
        iVar4 = -1;
      }
    }
    uVar14 = (uint)(iVar4 == 0);
  }
  else {
    uVar14 = 0;
  }
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x108) = 1;
  *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x10c) = uVar14;
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0xd0) =
       *(undefined8 *)(param_7 + 0x4a0);
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x112) =
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
       *(undefined1 *)(param_7 + 0x498);
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x113) =
       *(undefined1 *)(param_7 + 0x499);
  *(byte *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x111) = *(byte *)(param_7 + 0x4a8) ^ 1;
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x114) =
       *(undefined1 *)(param_7 + 0x5b8);
  lVar15 = *(long *)(param_7 + 0x398);
  if (lVar15 == 0) {
    ppppppplStack_90 = (long *******)0x0;
    pppppplStack_88 = (long ******)0x0;
    uStack_80 = (long ******)0x0;
    lVar15 = *(long *)(param_2 + 0x10);
    cVar1 = *(char *)(lVar15 + 0x27f);
  }
  else {
    pppppplVar21 = *(long *******)(param_7 + 0x3a0);
    if ((long ******)0x7ffffffffffffff6 < pppppplVar21) {
      func_0x0000aa50();
      goto LAB_00016a00;
    }
    if (pppppplVar21 < (long ******)0x17) {
      uStack_80 = (long ******)CONCAT17((char)pppppplVar21,(undefined7)uStack_80);
      ppppppplVar6 = (long *******)&ppppppplStack_90;
    }
    else {
      uVar18 = ((ulong)pppppplVar21 & 0x7ffffffffffffff8) + 8;
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
      uVar16 = 0x19;
      if (uVar18 != 0x18) {
        uVar16 = uVar18;
      }
      ppppppplVar6 = (long *******)__Znwm(uVar16);
      uStack_80 = (long ******)(uVar16 | 0x8000000000000000);
      ppppppplStack_90 = ppppppplVar6;
      pppppplStack_88 = pppppplVar21;
    }
    _memmove(ppppppplVar6,lVar15,pppppplVar21);
    *(char *)((long)ppppppplVar6 + (long)pppppplVar21) = '\0';
    lVar15 = *(long *)(param_2 + 0x10);
    cVar1 = *(char *)(lVar15 + 0x27f);
  }
  puVar12 = (undefined8 *)(lVar15 + 0x268);
  if (cVar1 < '\0') {
    __ZdlPv(*puVar12);
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[2] = 0;
  }
  puVar12[1] = pppppplStack_88;
  *puVar12 = ppppppplStack_90;
  puVar12[2] = uStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (*(long *)(*(long *)(param_2 + 0x10) + 8) + 0xf0,puVar12);
  *(byte *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x115) =
       (*(byte *)(param_7 + 0x47f) | *(byte *)(param_7 + 0x47e) ^ 0xff) & 1;
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x11c) =
       *(undefined1 *)(param_7 + 0x48e);
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x11d) =
       *(undefined1 *)(param_7 + 0x5e0);
  lVar15 = *(long *)(param_7 + 0x630);
  if (lVar15 == 0) {
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    ppppppplStack_90 = (long *******)0x0;
    pppppplStack_88 = (long ******)0x0;
    uStack_80 = (long ******)0x0;
  }
  else {
    pppppplVar21 = *(long *******)(param_7 + 0x638);
    if ((long ******)0x7ffffffffffffff6 < pppppplVar21) {
      func_0x0000aa50();
LAB_00016a00:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x16a04);
      (*pcVar3)();
    }
    if (pppppplVar21 < (long ******)0x17) {
      uStack_80 = (long ******)CONCAT17((char)pppppplVar21,(undefined7)uStack_80);
      ppppppplVar6 = (long *******)&ppppppplStack_90;
    }
    else {
      uVar18 = ((ulong)pppppplVar21 & 0x7ffffffffffffff8) + 8;
/*  stripping the watermark breaks the license  */
      uVar16 = 0x19;
      if (uVar18 != 0x18) {
        uVar16 = uVar18;
      }
      ppppppplVar6 = (long *******)__Znwm(uVar16);
      uStack_80 = (long ******)(uVar16 | 0x8000000000000000);
      ppppppplStack_90 = ppppppplVar6;
      pppppplStack_88 = pppppplVar21;
    }
    _memmove(ppppppplVar6,lVar15,pppppplVar21);
    *(char *)((long)ppppppplVar6 + (long)pppppplVar21) = '\0';
  }
  func_0x00a89560(&uStack_e8,&ppppppplStack_90);
  if ((long)uStack_80 < 0) {
    __ZdlPv(ppppppplStack_90);
    if (cStack_e4 == '\x01') goto LAB_000160f8;
LAB_0001611c:
    if (*(char *)(param_7 + 0x48a) == '\x01') goto LAB_00016128;
/*  if you paid for this, you were scammed  */
LAB_000168f0:
    if (*(char *)(param_7 + 0x48b) == '\x01') goto LAB_000168fc;
LAB_00016140:
    lVar15 = *(long *)(param_7 + 0x400);
    if (lVar15 != 0) goto LAB_00016148;
LAB_00016914:
    *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x31c) = 7;
    cVar1 = *(char *)(param_7 + 0x494);
  }
  else {
    if (cStack_e4 != '\x01') goto LAB_0001611c;
LAB_000160f8:
    func_0x00a897e0(&ppppppplStack_90,uStack_e8);
    *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x120) =
         (uint)ppppppplStack_90 & 0x7fffffff;
    if (-1 < (long)pppppplStack_88) goto LAB_0001611c;
    *(uint *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x124) =
         (uint)((ulong)ppppppplStack_90 >> 0x20) & 0x7fffffff;
    if (*(char *)(param_7 + 0x48a) != '\x01') goto LAB_000168f0;
LAB_00016128:
    *(undefined1 *)(*(long *)(param_2 + 0x18) + 6) = 1;
    if (*(char *)(param_7 + 0x48b) != '\x01') goto LAB_00016140;
LAB_000168fc:
    *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) = *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) | 8;
    lVar15 = *(long *)(param_7 + 0x400);
    if (lVar15 == 0) goto LAB_00016914;
LAB_00016148:
    if (lVar15 == 3) {
      iVar4 = func_0x0175dc2c(param_7 + 0x3f8,&UNK_01c88404,3);
      if (iVar4 == 0) {
        *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x31c) = 0;
        cVar1 = *(char *)(param_7 + 0x494);
      }
      else {
        if ((*(long *)(param_7 + 0x400) != 3) ||
           (iVar4 = func_0x0175dc2c(param_7 + 0x3f8,"ftz",3), iVar4 != 0)) goto LAB_0001618c;
        *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x31c) = 2;
        cVar1 = *(char *)(param_7 + 0x494);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
      }
    }
    else {
LAB_0001618c:
      *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x31c) = 1;
      cVar1 = *(char *)(param_7 + 0x494);
    }
  }
  if (cVar1 == '\x01') {
    *(ulong *)(*(long *)(param_2 + 0x10) + 0x50) =
         *(ulong *)(*(long *)(param_2 + 0x10) + 0x50) | 0x8000;
  }
  uVar18 = *(ulong *)(*(long *)(param_2 + 0x10) + 0x50);
  *(ulong *)(*(long *)(param_2 + 0x10) + 0x50) =
       uVar18 & 0xffffc00000000000 |
       uVar18 & 0xfffffffffff | (ulong)(*(uint *)(param_7 + 0x490) & 3) << 0x2c;
  if (2 < *(uint *)(param_7 + 0x490)) {
    *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) = *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) | 2;
  }
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x280) = *(undefined1 *)(param_7 + 0x481);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x281) = *(undefined1 *)(param_7 + 0x482);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x282) = *(undefined1 *)(param_7 + 0x499);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x348) = *(undefined1 *)(param_7 + 0x4d1);
  *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x34c) = *(undefined4 *)(param_7 + 0x4ec);
/*  more drops soon - github.com/pengussy  */
  func_0x00017ff0(*(long *)(param_2 + 0x10) + 0x350,param_7 + 0x518);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x286) = *(undefined1 *)(param_7 + 0x47c);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x287) = *(undefined1 *)(param_7 + 0x47d);
  lVar25 = *(long *)(param_2 + 0x10);
  lVar15 = lVar25 + 0x288;
  if (lVar15 != param_7 + 0x548) {
    if (*(long *)(lVar25 + 0x298) == 0) {
      lVar15 = func_0x00018b60(lVar15,*(undefined8 *)(param_7 + 0x550),lVar15);
      plVar24 = (long *)(lVar25 + 0x290);
      *(long *)(lVar25 + 0x290) = lVar15;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 0x10) = plVar24;
        plVar9 = (long *)*plVar24;
        goto joined_r0x000162a4;
      }
    }
    else {
      plVar9 = (long *)func_0x00018a4c(lVar15,*(undefined8 *)(lVar25 + 0x290),
                                       *(undefined8 *)(param_7 + 0x550),lVar15);
      *(long **)(lVar25 + 0x290) = plVar9;
joined_r0x000162a4:
      if (plVar9 == (long *)0x0) {
        plVar24 = (long *)(lVar25 + 0x290);
      }
      else {
// found on a paste site? it was re-uploaded illegally
        do {
          plVar24 = plVar9;
          plVar9 = (long *)*plVar24;
        } while ((long *)*plVar24 != (long *)0x0);
      }
    }
    *(long **)(lVar25 + 0x288) = plVar24;
    *(undefined8 *)(lVar25 + 0x298) = *(undefined8 *)(param_7 + 0x558);
    lVar25 = *(long *)(param_2 + 0x10);
  }
  lVar15 = lVar25 + 0x2a0;
  if (lVar15 != param_7 + 0x560) {
    if (*(long *)(lVar25 + 0x2b0) == 0) {
      lVar15 = func_0x00018e44(lVar15,*(undefined8 *)(param_7 + 0x568),lVar15);
      plVar24 = (long *)(lVar25 + 0x2a8);
      *(long *)(lVar25 + 0x2a8) = lVar15;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 0x10) = plVar24;
        plVar9 = (long *)*plVar24;
        goto joined_r0x00016320;
      }
/*  thanks for reading - discord.gg/sdkhDjTex  */
    }
    else {
      plVar9 = (long *)func_0x00018d24(lVar15,*(undefined8 *)(lVar25 + 0x2a8),
                                       *(undefined8 *)(param_7 + 0x568),lVar15);
      *(long **)(lVar25 + 0x2a8) = plVar9;
joined_r0x00016320:
      if (plVar9 == (long *)0x0) {
        plVar24 = (long *)(lVar25 + 0x2a8);
      }
      else {
        do {
          plVar24 = plVar9;
          plVar9 = (long *)*plVar24;
        } while ((long *)*plVar24 != (long *)0x0);
      }
    }
    *(long **)(lVar25 + 0x2a0) = plVar24;
    *(undefined8 *)(lVar25 + 0x2b0) = *(undefined8 *)(param_7 + 0x570);
    lVar25 = *(long *)(param_2 + 0x10);
  }
  *(undefined1 *)(lVar25 + 0x284) = *(undefined1 *)(param_7 + 0x496);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x285) = *(undefined1 *)(param_7 + 0x495);
// stripping the watermark breaks the license
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x283) = *(undefined1 *)(param_7 + 0x4c7);
  lVar15 = *(long *)(param_2 + 0x10);
  if ((long *)(lVar15 + 0x2c0) != param_6) {
    func_0x0001912c();
    lVar15 = *(long *)(param_2 + 0x10);
  }
  if (lVar15 + 0x2d8 != param_7 + 0x420) {
    func_0x0001912c();
    lVar15 = *(long *)(param_2 + 0x10);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
            (lVar15 + 0x148,param_4);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x380) = *(undefined1 *)(param_7 + 0x578);
  lVar25 = *(long *)(param_2 + 0x10);
  lVar15 = lVar25 + 0x388;
  if (lVar15 != param_7 + 0x580) {
    if (*(long *)(lVar25 + 0x398) == 0) {
      lVar15 = func_0x00018b60(lVar15,*(undefined8 *)(param_7 + 0x588),lVar15);
      plVar24 = (long *)(lVar25 + 0x390);
/* WM - donate: donate/README.md */
      *(long *)(lVar25 + 0x390) = lVar15;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 0x10) = plVar24;
        plVar9 = (long *)*plVar24;
        goto joined_r0x0001643c;
      }
    }
    else {
      plVar9 = (long *)func_0x00018a4c(lVar15,*(undefined8 *)(lVar25 + 0x390),
                                       *(undefined8 *)(param_7 + 0x588),lVar15);
      *(long **)(lVar25 + 0x390) = plVar9;
joined_r0x0001643c:
      if (plVar9 == (long *)0x0) {
        plVar24 = (long *)(lVar25 + 0x390);
      }
      else {
        do {
          plVar24 = plVar9;
          plVar9 = (long *)*plVar24;
        } while ((long *)*plVar24 != (long *)0x0);
      }
    }
    *(long **)(lVar25 + 0x388) = plVar24;
    *(undefined8 *)(lVar25 + 0x398) = *(undefined8 *)(param_7 + 0x590);
    lVar25 = *(long *)(param_2 + 0x10);
  }
  *(undefined1 *)(lVar25 + 0x3a0) = *(undefined1 *)(param_7 + 0x598);
  lVar25 = *(long *)(param_2 + 0x10);
  lVar15 = lVar25 + 0x3a8;
  if (lVar15 != param_7 + 0x5a0) {
    if (*(long *)(lVar25 + 0x3b8) == 0) {
      lVar15 = func_0x00018b60(lVar15,*(undefined8 *)(param_7 + 0x5a8),lVar15);
      plVar24 = (long *)(lVar25 + 0x3b0);
      *(long *)(lVar25 + 0x3b0) = lVar15;
      if (lVar15 != 0) {
        *(long **)(lVar15 + 0x10) = plVar24;
        plVar9 = (long *)*plVar24;
/* unlicensed copy if this notice is missing */
        goto joined_r0x000164c4;
      }
    }
    else {
      plVar9 = (long *)func_0x00018a4c(lVar15,*(undefined8 *)(lVar25 + 0x3b0),
                                       *(undefined8 *)(param_7 + 0x5a8),lVar15);
      *(long **)(lVar25 + 0x3b0) = plVar9;
joined_r0x000164c4:
      if (plVar9 == (long *)0x0) {
        plVar24 = (long *)(lVar25 + 0x3b0);
      }
      else {
        do {
          plVar24 = plVar9;
          plVar9 = (long *)*plVar24;
        } while ((long *)*plVar24 != (long *)0x0);
      }
    }
    *(long **)(lVar25 + 0x3a8) = plVar24;
    *(undefined8 *)(lVar25 + 0x3b8) = *(undefined8 *)(param_7 + 0x5b0);
    lVar25 = *(long *)(param_2 + 0x10);
/*  no support for modified copies  */
  }
  *(undefined1 *)(lVar25 + 0x3c0) = *(undefined1 *)(param_7 + 0x4f0);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x3c1) = *(undefined1 *)(param_7 + 0x4f1);
  *(undefined1 *)(*(long *)(param_2 + 0x10) + 0x3c3) = *(undefined1 *)(param_7 + 0x5b8);
  if (*(char *)(param_7 + 0x4b3) == '\x01') {
    lVar15 = *(long *)(param_2 + 0x10);
    uVar5 = 1;
LAB_00016538:
    *(undefined4 *)(lVar15 + 0x318) = uVar5;
    ppppppplStack_b0 = (long *******)0x0;
    pppppplStack_a8 = (long ******)0x0;
    iStack_98 = 0;
    uStack_a0 = 0;
    plVar24 = *(long **)(param_7 + 0x140);
    plVar9 = *(long **)(param_7 + 0x148);
    if (plVar24 != plVar9) {
LAB_00016574:
      iStack_98 = 0;
      uStack_a0 = 0;
      pppppplStack_a8 = (long ******)0x0;
      ppppppplStack_b0 = (long *******)0x0;
      do {
        if (*(char *)(*(long *)*plVar24 + 0x24) == '\x01') {
          ppppppplStack_e0 =
               (long *******)
               (CONCAT44((int)((ulong)ppppppplStack_e0 >> 0x20),(int)((long *)*plVar24)[5]) &
               0xffffff00ffffffff);
          func_0x0001947c(&ppppppplStack_90,&ppppppplStack_b0,&ppppppplStack_e0,
                          (ulong)&ppppppplStack_e0 | 4);
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar9);
    }
  }
  else {
    lVar15 = *(long *)(param_2 + 0x10);
// WM - unlicensed copy if this notice is missing
    if (*(char *)(param_7 + 0x4b4) == '\x01') {
      uVar5 = 2;
      goto LAB_00016538;
    }
    *(undefined4 *)(lVar15 + 0x318) = 0;
    ppppppplStack_b0 = (long *******)0x0;
    pppppplStack_a8 = (long ******)0x0;
    iStack_98 = 0;
    uStack_a0 = 0;
    plVar24 = *(long **)(param_7 + 0x140);
    plVar9 = *(long **)(param_7 + 0x148);
    if (plVar24 != plVar9) goto LAB_00016574;
  }
  uVar18 = (ulong)*(uint *)(param_7 + 0x288);
  if (*(uint *)(param_7 + 0x288) != 0) {
    uVar16 = 0;
    do {
      if (iStack_98 == 0) {
LAB_0001660c:
        ppppppplVar6 = *(long ********)(*(long *)(param_7 + 0x1d8) + uVar16 * 8);
        ppppppplStack_90 = ppppppplVar6;
        if (ppppppplVar6 == (long *******)0x0) {
          pppppplStack_88 = (long ******)0x0;
          lVar15 = *(long *)(param_2 + 0x10);
          puVar12 = *(undefined8 **)(lVar15 + 0x2f8);
          if (*(undefined8 **)(lVar15 + 0x300) <= puVar12) goto LAB_00016684;
LAB_00016640:
          pppppplVar21 = pppppplStack_88;
/* wm:origin: github.com/pengussy */
          if (ppppppplVar6 == (long *******)0x0) {
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
          }
          else {
            if ((long ******)0x7ffffffffffffff6 < pppppplStack_88) {
              func_0x0000aa50();
              goto LAB_00016a00;
            }
            if (pppppplStack_88 < (long ******)0x17) {
              *(char *)((long)puVar12 + 0x17) = (char)pppppplStack_88;
              puVar10 = puVar12;
            }
            else {
              uVar18 = ((ulong)pppppplStack_88 & 0x7ffffffffffffff8) + 8;
              uVar20 = 0x19;
              if (uVar18 != 0x18) {
// WM - stripping the watermark breaks the license
                uVar20 = uVar18;
              }
              puVar10 = (undefined8 *)__Znwm(uVar20);
              *puVar12 = puVar10;
              puVar12[1] = pppppplVar21;
              puVar12[2] = uVar20 | 0x8000000000000000;
            }
            _memmove(puVar10,ppppppplVar6,pppppplVar21);
            *(undefined1 *)((long)puVar10 + (long)pppppplVar21) = 0;
          }
          puVar12 = puVar12 + 3;
          *(undefined8 **)(lVar15 + 0x2f8) = puVar12;
        }
        else {
          pppppplStack_88 = (long ******)_strlen(ppppppplVar6);
          lVar15 = *(long *)(param_2 + 0x10);
          puVar12 = *(undefined8 **)(lVar15 + 0x2f8);
          if (puVar12 < *(undefined8 **)(lVar15 + 0x300)) goto LAB_00016640;
LAB_00016684:
          puVar12 = (undefined8 *)func_0x000197f8(lVar15 + 0x2f0,&ppppppplStack_90);
        }
        *(undefined8 **)(lVar15 + 0x2f8) = puVar12;
        uVar18 = (ulong)*(uint *)(param_7 + 0x288);
      }
      else {
        uVar14 = iStack_98 - 1U & (int)uVar16 * 0x25;
        uVar20 = (ulong)*(uint *)((long)pppppplStack_a8 + (ulong)uVar14 * 4);
        if (uVar16 != uVar20) {
/* wm:donate: donate/README.md */
          iVar4 = 1;
          do {
            if ((int)uVar20 == -1) goto LAB_0001660c;
            uVar14 = uVar14 + iVar4 & iStack_98 - 1U;
            uVar20 = (ulong)*(uint *)((long)pppppplStack_a8 + (ulong)uVar14 * 4);
            iVar4 = iVar4 + 1;
          } while (uVar16 != uVar20);
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar18);
  }
  __ZdlPv(pppppplStack_a8);
  if ((*(byte *)(param_7 + 0x496) & 1) != 0) {
    *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) =
         *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) & 0xfffffffffffffffd;
  }
  if (*(char *)(param_7 + 0x495) == '\x01') {
    *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) = *(ulong *)(*(long *)(param_2 + 0x10) + 0x60) | 2;
  }
  lVar15 = *(long *)(param_2 + 0x10);
  uVar19 = 0x1000;
  if (*(char *)(param_7 + 0x4f3) == '\0') {
    uVar19 = 0x2000;
  }
  puVar17 = (ushort *)(lVar15 + 0x78);
  uVar2 = *(undefined3 *)puVar17;
// donate: donate/README.md
  *puVar17 = (ushort)uVar2 & 0xcfff | uVar19;
  *(char *)(lVar15 + 0x7a) = (char)((uint3)uVar2 >> 0x10);
  func_0x000199ac(&ppppppplStack_90,&ppppppplStack_b0,param_2,param_1 + 0x38,param_7 + 1000);
  pppppplVar21 = pppppplStack_88;
  ppppppplVar6 = ppppppplStack_90;
  lVar15 = *(long *)(param_2 + 0x10);
  ppppppplStack_90 = (long *******)0x0;
  pppppplStack_88 = (long ******)0x0;
  plVar24 = *(long **)(lVar15 + 0x310);
  *(long *******)(lVar15 + 0x310) = pppppplVar21;
  *(long ********)(lVar15 + 0x308) = ppppppplVar6;
  if (plVar24 != (long *)0x0) {
    LOAcquire();
    lVar15 = plVar24[1];
    plVar24[1] = lVar15 + -1;
    LORelease();
    if (lVar15 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  pppppplVar21 = pppppplStack_88;
  if (pppppplStack_88 != (long ******)0x0) {
    LOAcquire();
    lVar15 = (long)pppppplStack_88[1];
    pppppplStack_88[1] = (long *****)(lVar15 + -1);
    LORelease();
    if (lVar15 == 0) {
      (**(code **)((long)*pppppplStack_88 + 0x10))(pppppplStack_88);
      __ZNSt3__119__shared_weak_count14__release_weakEv(pppppplVar21);
    }
  }
  *(int *)(*(long *)(param_2 + 0x10) + 800) = (int)*(undefined8 *)(param_7 + 0x4c8);
  lVar15 = *(long *)(param_2 + 0x10);
  if (lVar15 + 0x328 != param_7 + 0x408) {
    func_0x0001912c();
    lVar15 = *(long *)(param_2 + 0x10);
  }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uVar11 = *(undefined1 *)(param_7 + 0x4d0);
  *(undefined1 *)(lVar15 + 0x340) = uVar11;
  *(undefined1 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x116) = uVar11;
  uVar5 = 0;
  if (*(long *)(param_7 + 0x440) != 0) {
    if (*(long *)(param_7 + 0x440) != 8) goto LAB_00016958;
    iVar4 = func_0x0175dc2c(param_7 + 0x438,"internal",8);
    if (iVar4 == 0) {
      uVar5 = 1;
    }
    else {
      if ((*(long *)(param_7 + 0x440) != 8) ||
         (iVar4 = func_0x0175dc2c(param_7 + 0x438,"external",8), iVar4 != 0)) goto LAB_00016958;
      uVar5 = 2;
    }
  }
  *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x344) = uVar5;
LAB_00016958:
  plVar24 = plStack_b8;
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x10) + 8) + 0x118) =
       *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x344);
  if (plStack_b8 != (long *)0x0) {
    LOAcquire();
    lVar15 = plStack_b8[1];
    plStack_b8[1] = lVar15 + -1;
    LORelease();
    if (lVar15 == 0) {
      (**(code **)(*plStack_b8 + 0x10))(plStack_b8);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
    }
  }
  return;
}

