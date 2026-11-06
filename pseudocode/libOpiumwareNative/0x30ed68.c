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
 *  file-id: 0x30ed68:bff789337b
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0030ed68(byte *param_1,undefined1 *param_2,uint param_3)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  bool bVar18;
  float fVar19;
  long lVar20;
  code *pcVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  uint *puVar25;
  int *piVar26;
  byte *pbVar27;
/* wm:watermarked copy - do not remove */
  byte bVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long *plVar33;
  long *plVar34;
  bool bVar35;
  uint uVar36;
  uint *puVar37;
  long lVar38;
  int *piVar39;
  long lVar40;
  short sVar41;
  uint uVar42;
  uint uVar43;
  long *plVar44;
  long *plVar45;
  uint uVar46;
/* wm:origin: github.com/pengussy */
  ulong uVar47;
  long lVar48;
  ulong uVar49;
  uint uVar50;
  float *pfVar51;
  long lVar52;
  float *pfVar53;
  undefined4 *puVar54;
  undefined1 *puVar55;
  uint uVar56;
  uint uVar57;
  long lVar58;
  long lVar59;
  uint *puVar60;
  byte bVar61;
  float *pfVar62;
  float fVar63;
  float fVar64;
  undefined4 uVar65;
  int iVar66;
  undefined4 uVar67;
  undefined8 uVar68;
  ulong uVar69;
  ulong uVar70;
  undefined1 auVar71 [12];
  int iVar75;
  int iVar76;
  int iVar77;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
// WM - reversing this took months of machine time
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined8 uVar88;
  float fVar89;
  float fVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  undefined1 uVar94;
  undefined1 uVar95;
  undefined1 uVar96;
  undefined1 uVar97;
// WM - thanks for reading - discord.gg/sdkhDjTex
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined1 auVar112 [16];
  float fStack_238;
  float fStack_230;
  uint uStack_204;
  uint uStack_1ec;
  uint uStack_1d4;
  uint uStack_168;
  uint uStack_160;
  int iStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  ulong uStack_128;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  long *plStack_108;
  undefined8 uStack_100;
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  float fStack_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  lVar20 = lRam00000000020973e0;
  lStack_b0 = *(long *)PTR____stack_chk_guard_01f20200;
  uVar42 = (uint)*param_1;
  if (*param_1 == 0) {
    uVar29 = 0;
    puVar37 = *(uint **)(&UNK_00001490 + lRam00000000020973e0);
    iVar6 = *(int *)(&UNK_00001488 + lRam00000000020973e0);
    uVar47 = (ulong)iVar6;
    puVar60 = puVar37 + uVar47 * 4;
  }
  else {
    uVar29 = 0xffffffff;
    pbVar27 = param_1;
    do {
      while (((pbVar2 = pbVar27 + 1, uVar42 == 0x23 && (*pbVar2 == 0x23)) && (pbVar27[2] == 0x23)))
      {
        uVar29 = 0xffffffff;
        uVar42 = (uint)pbVar27[3];
        pbVar27 = pbVar27 + 3;
/* donate: donate/README.md */
        if (uVar42 == 0) goto LAB_0030ee2c;
      }
      uVar29 = *(uint *)(&UNK_01adf190 + (ulong)(uVar29 & 0xff ^ uVar42) * 4) ^ uVar29 >> 8;
      uVar42 = (uint)*pbVar2;
      pbVar27 = pbVar2;
    } while (*pbVar2 != 0);
LAB_0030ee2c:
    uVar29 = ~uVar29;
    puVar37 = *(uint **)(&UNK_00001490 + lRam00000000020973e0);
    iVar6 = *(int *)(&UNK_00001488 + lRam00000000020973e0);
    uVar47 = (ulong)iVar6;
    puVar60 = puVar37 + uVar47 * 4;
  }
  puVar25 = puVar37;
  if (iVar6 != 0) {
    do {
/*  found on a paste site? it was re-uploaded illegally  */
      uVar49 = uVar47 >> 1;
      puVar37 = puVar25 + uVar49 * 4 + 4;
      uVar47 = uVar47 + ~uVar49;
      if (uVar29 <= puVar25[uVar49 * 4]) {
        puVar37 = puVar25;
        uVar47 = uVar49;
      }
      puVar25 = puVar37;
    } while (uVar47 != 0);
  }
  if ((puVar37 == puVar60) || (*puVar37 != uVar29)) {
    plStack_108 = (long *)0x0;
LAB_0030eea4:
    uVar68 = (*pcRam0000000002057e10)(0x438,uRam00000000020932e8);
    lVar52 = lRam00000000020973e0;
    if (lRam00000000020973e0 != 0) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      iVar6 = *(int *)(lRam00000000020973e0 + 4);
      lVar38 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
      if (*(int *)(&UNK_00002938 + lVar38 * 8 + lRam00000000020973e0) != iVar6) {
        iVar24 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
        *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar24;
        lVar38 = (long)iVar24;
        piVar39 = (int *)(&UNK_00002938 + (long)iVar24 * 8 + lVar52);
        *piVar39 = iVar6;
        piVar39[1] = 0;
      }
      lVar38 = lVar38 * 8 + lVar52;
      *(short *)(&UNK_00002938 + lVar38 + 4) = *(short *)(&UNK_00002938 + lVar38 + 4) + 1;
      *(int *)(&UNK_0000292c + lVar52) = *(int *)(&UNK_0000292c + lVar52) + 1;
    }
    uStack_100 = (long *)func_0x00304fe8(uVar68,lVar20,param_1);
    *(uint *)((long)uStack_100 + 0x14) = param_3;
    uVar42 = *(uint *)(uStack_100 + 2);
    puVar37 = *(uint **)(&UNK_00001490 + lVar20);
    uVar47 = (ulong)*(int *)(&UNK_00001488 + lVar20);
    puVar60 = puVar37 + uVar47 * 4;
    puVar25 = puVar37;
    if (*(int *)(&UNK_00001488 + lVar20) != 0) {
      do {
/* WM - found on a paste site? it was re-uploaded illegally */
        uVar49 = uVar47 >> 1;
        puVar37 = puVar25 + uVar49 * 4 + 4;
        uVar47 = uVar47 + ~uVar49;
        if (uVar42 <= puVar25[uVar49 * 4]) {
          puVar37 = puVar25;
          uVar47 = uVar49;
        }
        puVar25 = puVar37;
      } while (uVar47 != 0);
    }
    if ((puVar37 == puVar60) || (*puVar37 != uVar42)) {
      uStack_f0 = (long *)CONCAT44(uStack_f0._4_4_,uVar42);
      uStack_e8 = uStack_100;
      func_0x002fe31c(&UNK_00001488 + lVar20,puVar37,&uStack_f0);
      if ((param_3 >> 8 & 1) == 0) goto LAB_0030efc8;
LAB_0030f088:
      func_0x0031ca40(uStack_100,0);
      if ((param_3 >> 0xd & 1) == 0) goto LAB_0030f098;
LAB_0030f000:
      if (*(int *)(&UNK_00001448 + lVar20) == 0) {
        func_0x00304274(&UNK_00001448 + lVar20,&uStack_100);
      }
      else {
        func_0x0031dc60(&UNK_00001448 + lVar20,*(undefined8 *)(&UNK_00001450 + lVar20),&uStack_100);
      }
    }
    else {
      *(long **)(puVar37 + 2) = uStack_100;
      if ((param_3 >> 8 & 1) != 0) goto LAB_0030f088;
LAB_0030efc8:
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
      if (*(int *)((long)uStack_100 + 0x2c4) == -1) {
        if (*(long *)(&UNK_00002758 + lRam00000000020973e0) != 0) {
          piVar39 = (int *)(*(long *)(&UNK_00002758 + lRam00000000020973e0) + 4);
          piVar26 = piVar39;
          do {
            if ((*piVar26 == (int)uStack_100[2]) && (*(char *)((long)piVar26 + 0xf) != '\x01'))
            goto LAB_0030efe8;
            piVar26 = (int *)((long)piVar26 + (long)piVar26[-1]);
          } while (piVar26 !=
                   (int *)((long)piVar39 + (long)*(int *)(&UNK_00002750 + lRam00000000020973e0)));
        }
        goto LAB_0030f088;
      }
      if (*(long *)(&UNK_00002758 + lRam00000000020973e0) == 0) goto LAB_0030f088;
      piVar26 = (int *)(*(long *)(&UNK_00002758 + lRam00000000020973e0) +
                       (long)*(int *)((long)uStack_100 + 0x2c4));
LAB_0030efe8:
      *(int *)((long)uStack_100 + 0x2c4) = (int)piVar26 - *(int *)(&UNK_00002758 + lVar20);
      func_0x0031ca40();
      if ((param_3 >> 0xd & 1) != 0) goto LAB_0030f000;
LAB_0030f098:
      func_0x00304274(&UNK_00001448 + lVar20,&uStack_100);
    }
    plStack_108 = uStack_100;
    uVar42 = 1;
    if (*(int *)(&UNK_000014a0 + lVar20) == (int)uStack_100[2]) {
LAB_0030f0d0:
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(0xf000,0x30f0d4);
      (*pcVar21)();
    }
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  }
  else {
    plStack_108 = *(long **)(puVar37 + 2);
    if (plStack_108 == (long *)0x0) goto LAB_0030eea4;
    uVar42 = 0;
    if (*(int *)(&UNK_000014a0 + lRam00000000020973e0) == (int)plStack_108[2]) goto LAB_0030f0d0;
  }
  plVar33 = plStack_108;
  uVar29 = param_3 | 6;
  if (((param_3 ^ 0xffffffff) & 0x30200) != 0) {
    uVar29 = param_3;
  }
  iVar6 = *(int *)(lVar20 + 4);
  if (*(int *)(&UNK_00001478 + lVar20) == 0) {
    iStack_148 = (int)plStack_108[0x52];
    *(byte *)((long)plStack_108 + 0xd5) = *(byte *)(lVar20 + 2) & 1;
    if ((uVar29 >> 0x1a & 1) != 0) goto LAB_0030f198;
LAB_0030f118:
    *(bool *)((long)plStack_108 + 0xd3) = iStack_148 < iVar6 + -1;
    if (iVar6 + -1 <= iStack_148) goto LAB_0030f128;
LAB_0030f1cc:
    *(uint *)((long)plStack_108 + 0xef) = *(uint *)((long)plStack_108 + 0xef) | 0x8080800;
    uStack_168 = 1;
    if (iStack_148 != iVar6) goto LAB_0030f1f8;
LAB_0030f13c:
    uVar29 = *(uint *)((long)plStack_108 + 0x14);
    iVar24 = *(int *)(&UNK_00001478 + lVar20);
    if (iVar24 != 0) goto LAB_0030f14c;
LAB_0030f348:
    lVar52 = 0;
    if (iStack_148 != iVar6) goto LAB_0030f358;
LAB_0030f168:
    lVar38 = plStack_108[0x76];
    iVar12 = (int)plStack_108[0x21];
  }
  else {
/* reversing this took months of machine time - github.com/pengussy */
    iStack_148 = (int)plStack_108[0x52];
    *(undefined1 *)((long)plStack_108 + 0xd5) = 0;
    if ((uVar29 >> 0x1a & 1) == 0) goto LAB_0030f118;
LAB_0030f198:
    piVar39 = (int *)(*(long *)(&UNK_00001fb8 + lVar20) + (long)*(int *)(lVar20 + 0x1fc0) * 0x38);
    bVar23 = *(int *)((long)plStack_108 + 0x94) != *piVar39;
    bVar22 = plStack_108 != *(long **)(piVar39 + 2);
    *(bool *)((long)plStack_108 + 0xd3) = (bVar23 || bVar22) || iStack_148 < iVar6 + -1;
    if (!((!bVar23 && !bVar22) && iVar6 + -1 <= iStack_148)) goto LAB_0030f1cc;
LAB_0030f128:
    uStack_168 = 0;
    if (iStack_148 == iVar6) goto LAB_0030f13c;
LAB_0030f1f8:
    lVar52 = lRam00000000020973e0;
    uVar30 = (uint)((uVar29 & 0x14000000) != 0x4000000) & uVar29 >> 0x18;
    uVar32 = uVar42;
    if (*(byte *)((long)plStack_108 + 0xd6) != uVar30) {
      uVar32 = 1;
    }
    uStack_f0 = plStack_108;
    if ((uVar30 == 0) && (uVar32 != 0)) {
      func_0x00304274(&UNK_00001458 + lRam00000000020973e0,&uStack_f0);
      *(short *)((long)uStack_f0 + 0xe2) = *(short *)(&UNK_00001458 + lVar52) + -1;
      plVar33 = uStack_f0;
    }
/* wm:chat: discord.gg/sdkhDjTex */
    else if ((uVar30 != 0) && (*(byte *)((long)plStack_108 + 0xd6) != uVar30 && uVar42 != 1)) {
      sVar41 = *(short *)((long)plStack_108 + 0xe2);
      iVar24 = *(int *)(&UNK_00001458 + lRam00000000020973e0);
      lVar38 = *(long *)(&UNK_00001460 + lRam00000000020973e0);
      if (sVar41 + 1 < iVar24) {
        lVar59 = ~(long)(int)sVar41 + (long)iVar24;
        plVar34 = (long *)(lVar38 + (long)(int)sVar41 * 8);
        do {
          plVar34 = plVar34 + 1;
          *(short *)(*plVar34 + 0xe2) = *(short *)(*plVar34 + 0xe2) + -1;
          lVar59 = lVar59 + -1;
        } while (lVar59 != 0);
        sVar41 = *(short *)((long)plStack_108 + 0xe2);
      }
      lVar38 = lVar38 + (long)sVar41 * 8;
      _memmove(lVar38,lVar38 + 8,((long)iVar24 + ~(long)sVar41) * 8);
      *(int *)(&UNK_00001458 + lVar52) = *(int *)(&UNK_00001458 + lVar52) + -1;
      *(undefined2 *)((long)plVar33 + 0xe2) = 0xffff;
    }
    *(char *)((long)plVar33 + 0xd6) = (char)uVar30;
    *(uint *)((long)plStack_108 + 0x14) = uVar29;
    if (((byte)(&UNK_00001ed1)[lVar20] >> 1 & 1) == 0) {
      uVar67 = 0;
    }
    else {
// WM - unlicensed copy if this notice is missing
      uVar67 = *(undefined4 *)(&UNK_00001f0c + lVar20);
    }
    *(undefined4 *)(plStack_108 + 3) = uVar67;
    *(int *)(plStack_108 + 0x52) = iVar6;
    *(float *)((long)plStack_108 + 0x294) = (float)*(double *)(lVar20 + 0x10);
    *(undefined2 *)((long)plStack_108 + 0xde) = 0;
    iVar24 = *(int *)(&UNK_00001498 + lVar20);
    *(int *)(&UNK_00001498 + lVar20) = iVar24 + 1;
    *(short *)(plStack_108 + 0x1c) = (short)iVar24;
    iVar24 = *(int *)(&UNK_00001478 + lVar20);
    if (iVar24 == 0) goto LAB_0030f348;
LAB_0030f14c:
    lVar52 = *(long *)(*(long *)(&UNK_00001480 + lVar20) + (long)iVar24 * 0x78 + -0x78);
    if (iStack_148 == iVar6) goto LAB_0030f168;
LAB_0030f358:
    lVar38 = 0;
    if ((uVar29 & 0x7000000) != 0) {
      lVar38 = lVar52;
    }
    iVar12 = (int)plStack_108[0x21];
  }
  if (iVar12 == 0) {
    func_0x002fe9c8(plStack_108 + 0x21,plStack_108 + 2);
    iVar24 = *(int *)(&UNK_00001478 + lVar20);
  }
  *(long **)(&UNK_000014a8 + lVar20) = plStack_108;
  func_0x0030e84c(&UNK_00001478 + lVar20,iVar24 + 1);
  lVar58 = *(long *)(&UNK_00001480 + lVar20) + (long)*(int *)(&UNK_00001478 + lVar20) * 0x78;
  *(long **)(lVar58 + -0x78) = plStack_108;
  uVar68 = *(undefined8 *)(&UNK_00001e80 + lVar20);
/* wm:more drops soon - github.com/pengussy */
  *(undefined8 *)(lVar58 + -0x68) = *(undefined8 *)(&UNK_00001e88 + lVar20);
  *(undefined8 *)(lVar58 + -0x70) = uVar68;
  auVar112 = *(undefined1 (*) [16])(&UNK_00001e90 + lVar20);
  uVar83 = *(undefined8 *)(&UNK_00001ea8 + lVar20);
  uVar82 = *(undefined8 *)(&UNK_00001ea0 + lVar20);
  uVar88 = *(undefined8 *)(&UNK_00001eb0 + lVar20);
  uVar8 = *(undefined8 *)(&UNK_00001ec8 + lVar20);
  uVar68 = *(undefined8 *)(&UNK_00001ec0 + lVar20);
  *(undefined8 *)(lVar58 + -0x38) = *(undefined8 *)(&UNK_00001eb8 + lVar20);
  *(undefined8 *)(lVar58 + -0x40) = uVar88;
  *(undefined8 *)(lVar58 + -0x28) = uVar8;
  *(undefined8 *)(lVar58 + -0x30) = uVar68;
  *(long *)(lVar58 + -0x58) = auVar112._8_8_;
  *(long *)(lVar58 + -0x60) = auVar112._0_8_;
  *(undefined8 *)(lVar58 + -0x48) = uVar83;
  *(undefined8 *)(lVar58 + -0x50) = uVar82;
  lVar59 = lRam00000000020973e0;
  if ((uVar29 >> 0x19 & 1) == 0) {
    bVar28 = 0;
  }
  else {
    bVar28 = (byte)(&UNK_00001e40)[lVar20] >> 6 & 1;
  }
  *(undefined2 *)(lVar58 + -0x20) = (short)*(undefined4 *)(&UNK_00001478 + lRam00000000020973e0);
  *(byte *)(lVar58 + -10) = bVar28;
  *(undefined4 *)(lVar58 + -8) = 0;
  lVar40 = *(long *)(&UNK_000014a8 + lVar59);
  *(short *)(lVar58 + -0x1e) = (short)*(undefined4 *)(lVar40 + 0x108);
  *(short *)(lVar58 + -0x1c) = (short)*(undefined4 *)(lVar40 + 0x1a0);
  *(short *)(lVar58 + -0x1a) = (short)*(undefined4 *)(&UNK_00001f50 + lVar59);
  *(short *)(lVar58 + -0x18) = (short)*(undefined4 *)(&UNK_00001f60 + lVar59);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  *(short *)(lVar58 + -0x16) = (short)*(undefined4 *)(&UNK_00001f70 + lVar59);
  *(short *)(lVar58 + -0x14) = (short)*(undefined4 *)(lVar59 + 0x1f80);
  *(short *)(lVar58 + -0x12) = (short)*(undefined4 *)(&UNK_00001fa0 + lVar59);
  *(short *)(lVar58 + -0x10) = (short)*(undefined4 *)(&UNK_00001f90 + lVar59);
  *(short *)(lVar58 + -0xe) = (short)*(undefined4 *)(lVar59 + 0x1fc0);
  *(undefined2 *)(lVar58 + -0xc) = *(undefined2 *)(&UNK_0000265c + lVar59);
  *(undefined2 **)(&UNK_00002860 + lVar20) = (undefined2 *)(lVar58 + -0x20);
  if ((uVar29 >> 0x1c & 1) != 0) {
    *(int *)(&UNK_000025cc + lVar20) = *(int *)(&UNK_000025cc + lVar20) + 1;
  }
  if (iStack_148 == iVar6) {
    uVar30 = *(uint *)(plStack_108 + 3);
  }
  else {
    plStack_108[0x76] = lVar38;
    plStack_108[0x7b] = (long)plStack_108;
    plStack_108[0x7a] = (long)plStack_108;
    plStack_108[0x79] = (long)plStack_108;
    plStack_108[0x78] = (long)plStack_108;
    if (((uVar29 & 0x3000000) == 0x1000000) && (lVar38 != 0)) {
      plStack_108[0x78] = *(long *)(lVar38 + 0x3c0);
    }
    if (((uVar29 >> 0x1a & 1) != 0) && (lVar38 != 0)) {
      plStack_108[0x79] = *(long *)(lVar38 + 0x3c8);
    }
    if ((((uVar29 >> 0x1b & 1) == 0) && ((uVar29 & 0x7000000) != 0)) && (lVar38 != 0)) {
      plStack_108[0x7a] = *(long *)(lVar38 + 0x3d0);
    }
    uVar30 = *(uint *)(plStack_108 + 3);
/* WM - reversing this took months of machine time */
    if ((uVar30 >> 8 & 1) != 0) {
      plVar33 = plStack_108;
      do {
        plVar33 = (long *)plVar33[0x76];
      } while ((*(byte *)((long)plVar33 + 0x19) & 1) != 0);
      plStack_108[0x7b] = (long)plVar33;
    }
    plStack_108[0x77] = lVar52;
    lVar48 = 0;
    if ((uVar29 & 0x1000000) != 0) {
      lVar48 = lVar52;
    }
    plStack_108[0x7c] = lVar48;
    if (lVar38 == 0) {
      fVar63 = 1.0;
    }
    else {
      fVar63 = *(float *)(lVar38 + 700) * *(float *)(lVar38 + 0x2b8);
    }
    *(float *)((long)plStack_108 + 700) = fVar63;
  }
  uStack_160 = uVar29 & 0x4000000;
// WM - stripping the watermark breaks the license
  plVar33 = plStack_108 + 2;
  if ((uVar30 & 0x100) != 0) {
    plVar33 = (long *)(&UNK_00001e3c + lVar20);
  }
  lVar48 = *plVar33;
  uStack_f0 = (long *)CONCAT44(*(undefined4 *)(lVar40 + 0x10),(int)lVar48);
  func_0x00304274(lVar59 + 0x1f80,&uStack_f0);
  *(int *)(&UNK_00001e3c + lVar59) = (int)lVar48;
  *(int *)(plStack_108 + 0x85) = (int)*(long *)(&UNK_00001e3c + lVar20);
  if (uStack_160 != 0) {
    puVar54 = (undefined4 *)
              (*(long *)(&UNK_00001fb8 + lVar20) + (long)*(int *)(lVar20 + 0x1fc0) * 0x38);
    *(long **)(puVar54 + 2) = plStack_108;
    puVar54[6] = *(undefined4 *)(lVar52 + 0x170);
    func_0x00316550(lVar20 + 0x1fc0,puVar54);
    *(undefined4 *)((long)plStack_108 + 0x94) = *puVar54;
  }
  if (((&UNK_00001ed0)[lVar20] & 1) == 0) {
    bVar23 = false;
    uVar30 = *(uint *)(&UNK_00001ed0 + lVar20);
joined_r0x0030f650:
    if ((uVar30 >> 1 & 1) != 0) goto LAB_0030f670;
LAB_0030f5e0:
    bVar35 = false;
    bVar22 = false;
  }
  else {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
    uVar30 = *(uint *)(&UNK_00001ed4 + lVar20) &
             (int)(*(uint *)((long)plStack_108 + 0xef) << 0x10) >> 0x18;
    bVar23 = uVar30 != 0;
    if ((uVar30 != 0) &&
       (1e-05 < *(float *)(&UNK_00001eec + lVar20) * *(float *)(&UNK_00001eec + lVar20) +
                *(float *)(&UNK_00001ee8 + lVar20) * *(float *)(&UNK_00001ee8 + lVar20))) {
      *(undefined8 *)((long)plStack_108 + 0xf4) = *(undefined8 *)(&UNK_00001ee0 + lVar20);
      *(undefined8 *)((long)plStack_108 + 0xfc) = *(undefined8 *)(&UNK_00001ee8 + lVar20);
      *(uint *)((long)plStack_108 + 0xef) = *(uint *)((long)plStack_108 + 0xef) & 0xfffff1ff;
      bVar23 = true;
      uVar30 = *(uint *)(&UNK_00001ed0 + lVar20);
      goto joined_r0x0030f650;
    }
    func_0x003074a8(plStack_108,&UNK_00001ee0 + lVar20);
    uVar30 = *(uint *)(&UNK_00001ed0 + lVar20);
    if ((uVar30 >> 1 & 1) == 0) goto LAB_0030f5e0;
LAB_0030f670:
    if ((*(uint *)(&UNK_00001ed8 + lVar20) & (int)(*(uint *)((long)plStack_108 + 0xef) << 8) >> 0x18
        ) == 0) {
      bVar22 = false;
      bVar35 = false;
      uVar30 = *(uint *)(plStack_108 + 3);
    }
    else {
      bVar22 = 0.0 < *(float *)(&UNK_00001ef0 + lVar20);
      bVar35 = 0.0 < *(float *)(&UNK_00001ef4 + lVar20);
      uVar30 = *(uint *)(plStack_108 + 3);
/* no support for modified copies - github.com/pengussy */
    }
    if (((*(uint *)((long)plStack_108 + 0xef) >> 0x12 & 1) == 0) && ((uVar30 >> 2 & 1) != 0)) {
      *(int *)(&UNK_00001ef0 + lVar20) = (int)plStack_108[7];
    }
    if (((uVar30 >> 3 & 1) != 0) && ((*(byte *)((long)plStack_108 + 0xf1) >> 2 & 1) == 0)) {
      *(undefined4 *)(&UNK_00001ef4 + lVar20) = *(undefined4 *)((long)plStack_108 + 0x3c);
    }
    func_0x0031673c(plStack_108,&UNK_00001ef0 + lVar20);
    uVar30 = *(uint *)(&UNK_00001ed0 + lVar20);
  }
  if ((uVar30 >> 7 & 1) != 0) {
    if (0.0 <= *(float *)(lVar20 + 0x1f00)) {
      *(float *)(plStack_108 + 0x15) = *(float *)(lVar20 + 0x1f00);
      *(undefined4 *)(plStack_108 + 0x16) = 0;
    }
    if (0.0 <= *(float *)(&UNK_00001f04 + lVar20)) {
      *(float *)((long)plStack_108 + 0xac) = *(float *)(&UNK_00001f04 + lVar20);
      *(undefined4 *)((long)plStack_108 + 0xb4) = 0;
    }
  }
  if ((uVar30 >> 2 & 1) == 0) {
    if (iStack_148 != iVar6) {
      plStack_108[10] = 0;
    }
  }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  else {
    plStack_108[10] = *(long *)(&UNK_00001ef8 + lVar20);
  }
  uVar30 = *(uint *)(&UNK_00001ed0 + lVar20);
  if ((uVar30 >> 3 & 1) != 0) {
    bVar28 = (&UNK_00001f10)[lVar20];
    if ((*(uint *)(&UNK_00001edc + lVar20) == 0) ||
       ((*(uint *)(&UNK_00001edc + lVar20) & (int)*(uint *)((long)plStack_108 + 0xef) >> 0x18) != 0)
       ) {
      *(uint *)((long)plStack_108 + 0xef) = *(uint *)((long)plStack_108 + 0xef) & 0xf1ffffff;
      bVar61 = *(byte *)((long)plStack_108 + 0xcf);
      if ((char)plStack_108[0x1a] == '\x01') {
        bVar61 = bVar61 ^ 1;
        *(byte *)((long)plStack_108 + 0xcf) = bVar61;
      }
      *(bool *)(plStack_108 + 0x1a) = bVar61 != bVar28;
      uVar30 = *(uint *)(&UNK_00001ed0 + lVar20);
    }
  }
  if ((uVar30 >> 5 & 1) != 0) {
    func_0x00306d20(plStack_108,0);
  }
  if (*(byte *)((long)plStack_108 + 0xd3) == 1) {
    *(uint *)((long)plStack_108 + 0xef) = *(uint *)((long)plStack_108 + 0xef) & 0xf7f7f7ff;
  }
  lVar52 = lRam00000000020973e0;
  *(undefined1 *)((long)plStack_108 + 0xd2) = 0;
  if (((byte)(&UNK_00001ed1)[lVar52] >> 2 & 1) == 0) {
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
LAB_0030f7ec:
    bVar28 = 0;
  }
  else {
    bVar28 = 0;
    uVar30 = *(uint *)(&UNK_00001f44 + lVar52);
    if (((uVar30 & 1) != 0) && ((*(byte *)((long)plStack_108 + 0xd3) & 1) == 0)) {
      if ((*(byte *)((long)plStack_108 + 0xd4) & 1) != 0) goto LAB_0030f7ec;
      if (((uVar30 >> 1 & 1) != 0) && (*(long *)(&UNK_000014b0 + lVar52) != 0)) {
        plVar33 = *(long **)(*(long *)(&UNK_000014b0 + lVar52) + 0x3c0);
        if (((long *)plStack_108[0x78] == plVar33) || ((long *)plVar33[0x78] == plStack_108))
        goto LAB_0030f7ec;
        do {
          if (plVar33 == plStack_108) goto LAB_0030f7ec;
          plVar33 = (long *)plVar33[0x77];
        } while (plVar33 != (long *)0x0);
      }
      if (((uVar30 >> 2 & 1) != 0) && (*(long *)(lVar52 + 0x1ff8) != 0)) {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        plVar33 = *(long **)(*(long *)(lVar52 + 0x1ff8) + 0x3c0);
        if (((long *)plStack_108[0x78] == plVar33) || ((long *)plVar33[0x78] == plStack_108))
        goto LAB_0030f7ec;
        do {
          if (plVar33 == plStack_108) goto LAB_0030f7ec;
          plVar33 = (long *)plVar33[0x77];
        } while (plVar33 != (long *)0x0);
      }
      plStack_108[0x59] = 0;
      bVar28 = 1;
      *(undefined1 *)((long)plStack_108 + 0xd2) = 1;
    }
  }
  if ((*(char *)(lVar58 + -10) == '\x01') && ((long *)plStack_108[0x78] == plStack_108)) {
    *(undefined4 *)
     (*(long *)(&UNK_00001480 + lVar52) + (long)*(int *)(&UNK_00001478 + lVar52) * 0x78 + -8) =
         *(undefined4 *)(lVar52 + 0xc84);
    *(undefined4 *)(lVar52 + 0xc84) = *(undefined4 *)(&UNK_00002658 + lVar52);
    *(uint *)(&UNK_00001e40 + lVar52) = *(uint *)(&UNK_00001e40 + lVar52) & 0xffffffbf;
    func_0x002fe9c8(&UNK_00001f90 + lVar52,&UNK_00001e40 + lVar52);
    *(short *)(&UNK_0000265c + lVar52) = *(short *)(&UNK_0000265c + lVar52) + 1;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
    bVar28 = *(byte *)((long)plStack_108 + 0xd2);
    *(undefined8 *)(&UNK_000014a8 + lVar20) = 0;
    if (iStack_148 != iVar6) goto LAB_0030f928;
LAB_0030f81c:
    if ((bVar28 & 1) != 0) {
LAB_0030f92c:
      func_0x00317100(plStack_108);
    }
    lVar52 = lRam00000000020973e0;
    *(long **)(&UNK_000014a8 + lRam00000000020973e0) = plStack_108;
    *(long *)(&UNK_00002860 + lVar52) =
         *(long *)(&UNK_00001480 + lVar52) + (long)*(int *)(&UNK_00001478 + lVar52) * 0x78 + -0x20;
    if ((int)plStack_108[0x3a] == -1) {
      *(undefined8 *)(&UNK_000022f0 + lVar52) = 0;
      pcVar1 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar52 + 0x10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
      bVar28 = *(byte *)(lVar52 + 0x2c);
    }
    else {
      *(long *)(&UNK_000022f0 + lVar52) =
           *(long *)(&UNK_00002318 + lVar52) + (long)(int)plStack_108[0x3a] * 0x250;
      pcVar1 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar52 + 0x10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
      bVar28 = *(byte *)(lVar52 + 0x2c);
/*  thanks for reading - discord.gg/sdkhDjTex  */
    }
    if ((bVar28 >> 4 & 1) != 0) {
      fVar63 = *(float *)(plStack_108[4] + 0x18);
      if (fVar63 == 0.0) {
        fVar63 = *(float *)(lVar52 + 0x38);
      }
      *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar52 + 0xc)
           = fVar63;
    }
    puVar55 = (undefined1 *)((long)plStack_108 + 0xd1);
    uVar91 = *puVar55;
    *puVar55 = 0;
    func_0x00317da8(ZEXT816(0));
    *puVar55 = uVar91;
    lVar52 = lRam00000000020973e0;
    if (*(long *)(&UNK_000022f0 + lRam00000000020973e0) == 0) {
      bVar23 = *(long *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x1c8) == 0;
    }
    else {
      bVar23 = false;
    }
    *(bool *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x178) = bVar23;
    fVar63 = *(float *)(plStack_108 + 7);
    fVar78 = *(float *)(plStack_108 + 5);
    fVar84 = *(float *)((long)plStack_108 + 0x2c);
    fVar89 = *(float *)(plStack_108 + 0xd);
    lVar59 = plStack_108[0x3c];
    *(undefined4 *)(&UNK_00001e80 + lVar52) = *(undefined4 *)((long)plStack_108 + 0x8c);
    *(undefined4 *)(&UNK_00001e84 + lVar52) = *(undefined4 *)(&UNK_00001e40 + lVar52);
    *(int *)(&UNK_00001e88 + lVar52) = (int)lVar59;
    *(float *)(&UNK_00001e9c + lVar52) = fVar78;
    *(float *)(&UNK_00001ea0 + lVar52) = fVar84;
    *(float *)(&UNK_00001ea4 + lVar52) = fVar78 + fVar63;
    *(float *)(&UNK_00001ea8 + lVar52) = fVar84 + fVar89;
    *(float *)(&UNK_00001e8c + lVar52) = fVar78;
/*  unlicensed copy if this notice is missing  */
    *(float *)(&UNK_00001e90 + lVar52) = fVar84;
    *(float *)(&UNK_00001e94 + lVar52) = fVar78 + fVar63;
    *(float *)(&UNK_00001e98 + lVar52) = fVar84 + fVar89;
  }
  else {
    *(undefined8 *)(&UNK_000014a8 + lVar20) = 0;
    if (iStack_148 == iVar6) goto LAB_0030f81c;
LAB_0030f928:
    if ((bVar28 & 1) != 0) goto LAB_0030f92c;
    cVar5 = *(char *)((long)plStack_108 + 0xec);
    *(undefined1 *)((long)plStack_108 + 0xcc) = 1;
    *(bool *)((long)plStack_108 + 0xd7) = param_2 != (undefined1 *)0x0;
    lVar52 = _UNK_01adf0b0;
    plStack_108[0x4e] = _UNK_01adf0b8;
    plStack_108[0x4d] = lVar52;
    func_0x0030d8ac(plStack_108 + 0x21,1);
    func_0x0031fe64(plStack_108[0x59]);
    *(undefined4 *)(plStack_108 + 0x3a) = 0xffffffff;
    if (*(char *)((long)plStack_108 + 0x434) == '\x01') {
      func_0x00305ad4();
    }
    plVar33 = plStack_108;
    uVar30 = 0;
    if (*(long *)(&UNK_000021f0 + lVar20) != 0) {
      uVar30 = 0;
/* stripping the watermark breaks the license */
      if ((uVar29 & 0x20000) == 0) {
        uVar30 = (uint)*(byte *)(*(long *)(&UNK_000021f0 + lVar20) + 0xcd);
      }
    }
    if (uVar42 == 0 &&
        (((uStack_168 | uVar30 | (uVar29 & 0x10000000) >> 0x1c) ^ 0xffffffff) & 1) == 0) {
      lVar52 = plStack_108[1];
      iVar24 = _strcmp(param_1,lVar52);
      if (iVar24 != 0) {
        uStack_f0 = (long *)(long)(int)plVar33[0x11];
        lVar52 = func_0x002fd898(lVar52,&uStack_f0,param_1);
        plStack_108[1] = lVar52;
        *(int *)(plStack_108 + 0x11) = (int)uStack_f0;
        plVar33 = plStack_108;
      }
    }
    func_0x00316034(plVar33,plVar33 + 8,plVar33 + 9);
    if ('\0' < *(char *)((long)plStack_108 + 0xeb)) {
      *(char *)((long)plStack_108 + 0xeb) = *(char *)((long)plStack_108 + 0xeb) + -1;
    }
    if ('\0' < *(char *)((long)plStack_108 + 0xec)) {
      *(char *)((long)plStack_108 + 0xec) = *(char *)((long)plStack_108 + 0xec) + -1;
    }
    if ('\0' < *(char *)((long)plStack_108 + 0xed)) {
      *(char *)((long)plStack_108 + 0xed) = *(char *)((long)plStack_108 + 0xed) + -1;
    }
    if ((uVar42 != 0) && (!(bool)(bVar22 & bVar35))) {
      *(undefined1 *)((long)plStack_108 + 0xec) = 1;
    }
    uVar30 = 0;
    if ((uVar29 & 0x6000000) != 0) {
      uVar30 = uStack_168;
    }
    if ((uVar30 == 1) && (*(undefined1 *)((long)plStack_108 + 0xec) = 1, (uVar29 >> 6 & 1) != 0)) {
      if (!bVar22) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
        *(undefined4 *)(plStack_108 + 7) = 0;
        *(undefined4 *)(plStack_108 + 6) = 0;
      }
      if (!bVar35) {
        *(undefined4 *)((long)plStack_108 + 0x3c) = 0;
        *(undefined4 *)((long)plStack_108 + 0x34) = 0;
      }
      plStack_108[8] = 0;
      plStack_108[9] = 0;
    }
    lVar52 = lRam00000000020973e0;
    lVar59 = **(long **)(&UNK_00001fe8 + lRam00000000020973e0);
    plStack_108[4] = lVar59;
    *(long **)(&UNK_000014a8 + lVar52) = plStack_108;
    *(long *)(&UNK_00002860 + lVar52) =
         *(long *)(&UNK_00001480 + lVar52) + (long)*(int *)(&UNK_00001478 + lVar52) * 0x78 + -0x20;
    if ((int)plStack_108[0x3a] == -1) {
      *(undefined8 *)(&UNK_000022f0 + lVar52) = 0;
      pcVar1 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar52 + 0x10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
      bVar28 = *(byte *)(lVar52 + 0x2c);
    }
    else {
      *(long *)(&UNK_000022f0 + lVar52) =
           *(long *)(&UNK_00002318 + lVar52) + (long)(int)plStack_108[0x3a] * 0x250;
      pcVar1 = "/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar52 + 0x10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
      bVar28 = *(byte *)(lVar52 + 0x2c);
    }
    if ((bVar28 >> 4 & 1) != 0) {
      fVar63 = *(float *)(lVar59 + 0x18);
      if (fVar63 == 0.0) {
        fVar63 = *(float *)(lVar52 + 0x38);
      }
      *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar52 + 0xc)
           = fVar63;
    }
    puVar55 = (undefined1 *)((long)plStack_108 + 0xd1);
    uVar91 = *puVar55;
    *puVar55 = 0;
    func_0x00317da8(ZEXT816(0));
    plVar33 = plStack_108;
    *puVar55 = uVar91;
    lVar52 = lRam00000000020973e0;
    lVar58 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    if (*(long *)(&UNK_000022f0 + lRam00000000020973e0) == 0) {
      *(bool *)(lVar58 + 0x178) = *(long *)(lVar58 + 0x1c8) == 0;
      if ((uVar29 >> 0x18 & 1) != 0) goto LAB_0030fd98;
LAB_0030fd50:
      lVar58 = 0xcc0;
      if ((uVar29 & 0x8000000) != 0 || (uVar29 & 0x6000000) == 0) {
        lVar58 = 0xc98;
      }
      *(undefined4 *)((long)plStack_108 + 100) = *(undefined4 *)(lVar20 + lVar58);
/*  proprietary - see LICENSE - do not sell  */
      fVar63 = *(float *)(lVar20 + 0xc8c);
      uVar67 = *(undefined4 *)(lVar20 + 0xc90);
      *(float *)(plStack_108 + 0xb) = fVar63;
      *(undefined4 *)((long)plStack_108 + 0x5c) = uVar67;
LAB_0030fdb8:
      bVar18 = true;
    }
    else {
      *(undefined1 *)(lVar58 + 0x178) = 0;
      if ((uVar29 >> 0x18 & 1) == 0) goto LAB_0030fd50;
LAB_0030fd98:
      fVar78 = *(float *)(lVar20 + 0xcb8);
      *(float *)((long)plStack_108 + 100) = fVar78;
      fVar63 = *(float *)(lVar20 + 0xc8c);
      uVar67 = *(undefined4 *)(lVar20 + 0xc90);
      *(float *)(plStack_108 + 0xb) = fVar63;
      *(undefined4 *)((long)plStack_108 + 0x5c) = uVar67;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
      if (uStack_160 != 0) goto LAB_0030fdb8;
      bVar18 = false;
      if (((*(byte *)(plStack_108 + 3) >> 1 & 1) == 0) && (fVar78 == 0.0)) {
        if ((uVar29 >> 10 & 1) == 0) {
          uVar67 = 0;
        }
        else {
          uVar67 = *(undefined4 *)(lVar20 + 0xc90);
        }
        bVar18 = false;
        *(undefined4 *)(plStack_108 + 0xb) = 0;
        *(undefined4 *)((long)plStack_108 + 0x5c) = uVar67;
        fVar63 = 0.0;
      }
    }
    if (fVar63 < *(float *)(lVar20 + 0xcd4)) {
      fVar63 = *(float *)(lVar20 + 0xcd4);
    }
    if (fVar63 < *(float *)(&UNK_00001f3c + lVar20)) {
      fVar63 = *(float *)(&UNK_00001f3c + lVar20);
    }
    *(float *)((long)plStack_108 + 0x17c) = fVar63;
    fVar89 = *(float *)(&UNK_00001f40 + lVar20);
    *(float *)(plStack_108 + 0x30) = fVar89;
    fVar84 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar20
                       );
    fVar63 = 0.0;
    fVar78 = 0.0;
    if ((uVar29 & 1) == 0) {
      fVar78 = fVar84 + *(float *)(lVar20 + 0xcc8) * 2.0;
      *(float *)(plStack_108 + 0xd) = fVar78;
      if ((uVar29 >> 10 & 1) != 0) goto LAB_0030fe08;
LAB_0030fe34:
      *(undefined4 *)((long)plStack_108 + 0x6c) = 0;
      *(float *)(plStack_108 + 0x58) = fVar84;
/* WM - watermarked copy - do not remove */
    }
    else {
      *(undefined4 *)(plStack_108 + 0xd) = 0;
      if ((uVar29 >> 10 & 1) == 0) goto LAB_0030fe34;
LAB_0030fe08:
      fVar63 = fVar89 + fVar84 + *(float *)(lVar20 + 0xcc8) * 2.0;
      *(float *)((long)plStack_108 + 0x6c) = fVar63;
      *(float *)(plStack_108 + 0x58) = fVar84;
    }
    uStack_1d4 = uVar42;
    if ((bVar22) && (*(float *)(plStack_108 + 10) != 0.0)) {
      uStack_1d4 = 1;
    }
    uVar30 = uVar42;
    if ((bVar35) && (*(float *)((long)plStack_108 + 0x54) != 0.0)) {
      uVar30 = 1;
    }
    if ((uVar29 & 0x21) == 0) {
      uStack_f0 = (long *)plStack_108[5];
      uStack_e8 = (long *)CONCAT44(fVar78 + *(float *)((long)plStack_108 + 0x2c),
/*  stripping the watermark breaks the license  */
                                   *(float *)(plStack_108 + 5) + *(float *)(plStack_108 + 7));
      if (((((*(long **)(&UNK_000014b0 + lVar20) == plStack_108) &&
            (*(int *)(&UNK_00001504 + lVar20) == 0)) && (*(int *)(&UNK_00001508 + lVar20) == 0)) &&
          ((*(int *)(&UNK_0000151c + lVar20) == 0 &&
           (iVar24 = func_0x00306764(&uStack_f0,&uStack_e8,1), iVar24 != 0)))) &&
         ((*(short *)(lVar20 + 0xb3a) == 2 && (*(int *)(&UNK_00001c54 + lVar52) == -1)))) {
        *(undefined1 *)(plVar33 + 0x1a) = 1;
      }
      if ((char)plVar33[0x1a] == '\x01') {
        bVar28 = *(byte *)((long)plVar33 + 0xcf);
        *(byte *)((long)plVar33 + 0xcf) = bVar28 ^ 1;
        uVar30 = uVar30 | bVar28;
        if (((*(byte *)((long)plVar33 + 0x15) & 1) == 0) &&
           (*(float *)(&UNK_0000272c + lVar52) <= 0.0)) {
          *(undefined4 *)(&UNK_0000272c + lVar52) = *(undefined4 *)(lVar52 + 0x44);
        }
      }
    }
    else {
      *(undefined1 *)((long)plStack_108 + 0xcf) = 0;
    }
    bVar28 = 0;
    *(undefined1 *)(plVar33 + 0x1a) = 0;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
    fVar84 = *(float *)(plVar33 + 0x18);
    fVar89 = *(float *)((long)plVar33 + 0xc4);
    *(undefined4 *)(plVar33 + 0xe) = 0;
    *(float *)((long)plVar33 + 0x74) = fVar78 + fVar63;
    plVar33[0xf] = 0;
    plVar33[0x18] = 0;
    bVar4 = bVar22;
    if ((uVar29 & 0x40) == 0) {
      bVar4 = true;
    }
    if (!bVar4) {
      bVar28 = *(byte *)((long)plVar33 + 0xcf) ^ 1;
    }
    bVar4 = bVar35;
    if ((uVar29 & 0x40) == 0) {
      bVar4 = true;
    }
    if (bVar4) {
      bVar61 = 0;
      if (!bVar22) goto LAB_0030ff9c;
LAB_0030ffd0:
      bVar22 = false;
      bVar4 = false;
      if (bVar35) goto LAB_0030ffe0;
LAB_0030ffb4:
      bVar22 = bVar4;
      bVar35 = '\0' < *(char *)((long)plVar33 + 0xe9);
    }
    else {
/* WM - no support for modified copies */
      bVar61 = *(byte *)((long)plVar33 + 0xcf) ^ 1;
      if (bVar22) goto LAB_0030ffd0;
LAB_0030ff9c:
      bVar22 = '\0' < (char)plVar33[0x1d];
      bVar4 = bVar22;
      if (!bVar35) goto LAB_0030ffb4;
LAB_0030ffe0:
      bVar35 = false;
    }
    bVar3 = bVar28 & 1 | bVar22 | 2;
    if ((bVar61 & 1) == 0 && !bVar35) {
      bVar3 = bVar28 & 1 | bVar22;
    }
    fVar78 = fVar84;
    fVar64 = (float)func_0x00316170(plVar33,plVar33 + 9,bVar3);
    fVar85 = *(float *)(plStack_108 + 7);
    fVar63 = fVar85;
    if ((bVar28 & 1) == 0 && bVar22 == false) {
      fVar64 = *(float *)((long)plStack_108 + 0x3c);
      fVar90 = fVar64;
      if (!((bVar61 & 1) == 0 && !bVar35)) goto LAB_00310060;
LAB_00310048:
      fVar90 = fVar64;
      if (fVar85 != fVar63) goto LAB_00310098;
LAB_00310090:
      if (fVar90 != fVar64) goto LAB_00310098;
    }
    else {
      fVar63 = fVar64;
// WM - no support for modified copies
      if (((bVar28 & 1) == 0) &&
         (fVar63 = fVar85, (*(byte *)((long)plStack_108 + 0xea) & fVar64 <= fVar85) == 0)) {
        fVar63 = fVar64;
      }
      *(float *)(plStack_108 + 7) = fVar63;
      uStack_1d4 = 1;
      fVar64 = *(float *)((long)plStack_108 + 0x3c);
      fVar90 = fVar64;
      if (!((bVar61 & 1) != 0 || bVar35)) goto LAB_00310048;
LAB_00310060:
      fVar64 = fVar78;
      if (((bVar61 & 1) == 0) &&
         (fVar64 = fVar90, (*(byte *)((long)plStack_108 + 0xea) & fVar78 <= fVar90) == 0)) {
        fVar64 = fVar78;
      }
      *(float *)((long)plStack_108 + 0x3c) = fVar64;
      uVar30 = 1;
      fVar78 = fVar64;
      if (fVar85 == fVar63) goto LAB_00310090;
LAB_00310098:
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      if (((*(byte *)((long)plStack_108 + 0x15) & 1) == 0) &&
         (*(float *)(&UNK_0000272c + lRam00000000020973e0) <= 0.0)) {
        *(undefined4 *)(&UNK_0000272c + lRam00000000020973e0) =
             *(undefined4 *)(lRam00000000020973e0 + 0x44);
      }
    }
    fVar63 = (float)func_0x003163d4(plStack_108,plStack_108[7]);
    *(float *)(plStack_108 + 7) = fVar63;
    *(float *)((long)plStack_108 + 0x3c) = fVar78;
    if ((*(byte *)((long)plStack_108 + 0xcf) & (uVar29 & 0x1000000) == 0) != 0) {
      fVar63 = (fVar63 + *(float *)(plStack_108 + 5)) - *(float *)(plStack_108 + 5);
      fVar78 = (*(float *)((long)plStack_108 + 0x2c) + *(float *)(plStack_108 + 0xd)) -
               *(float *)((long)plStack_108 + 0x2c);
    }
    *(float *)(plStack_108 + 6) = fVar63;
    *(float *)((long)plStack_108 + 0x34) = fVar78;
    if (((uStack_168 != 0) &&
        (*(undefined4 *)((long)plStack_108 + 0xe4) = 0xffffffff, uStack_160 != 0)) &&
       (!bVar23 && (uVar29 & 0x8000000) == 0)) {
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
      plStack_108[5] =
           *(long *)(*(long *)(&UNK_00001fc8 + lVar20) + (long)*(int *)(lVar20 + 0x1fc0) * 0x38 +
                    -0x14);
    }
    uVar32 = uVar29 & 0x3000000;
    if ((uVar29 >> 0x18 & 1) != 0) {
      *(short *)((long)plStack_108 + 0xde) = (short)*(undefined4 *)(lVar38 + 0x1b0);
      func_0x00304274(lVar38 + 0x1b0,&plStack_108);
      if ((uStack_160 == 0 && !bVar23) && uVar32 != 0x3000000) {
        plStack_108[5] = *(long *)(lVar38 + 0x118);
      }
    }
    fVar63 = *(float *)((long)plStack_108 + 0xf4);
    uVar67 = 0x7f7fffff;
    if ((fVar63 == 3.4028235e+38) || (*(char *)((long)plStack_108 + 0xec) != '\0')) {
      if ((uVar29 >> 0x1c & 1) == 0) {
        bVar22 = bVar23;
        if (uStack_160 == 0) {
          bVar22 = true;
        }
        if ((bVar22) || (cVar5 < '\x01')) {
          bVar22 = bVar23;
          if ((uVar29 & 0x2000000) == 0) {
// if you paid for this, you were scammed
            bVar22 = true;
          }
          if ((bVar22) || (uVar32 == 0x3000000)) goto LAB_0031042c;
        }
      }
      uVar65 = func_0x0031685c(plStack_108);
      *(undefined4 *)(plStack_108 + 5) = uVar65;
      *(undefined4 *)((long)plStack_108 + 0x2c) = uVar67;
    }
    else {
      *(undefined8 *)((long)plStack_108 + 0xf4) = 0x7f7fffff7f7fffff;
      lVar52 = plStack_108[5];
      *(uint *)((long)plStack_108 + 0xef) = *(uint *)((long)plStack_108 + 0xef) & 0xfffff1ff;
      lVar58 = NEON_scvtf(CONCAT44((int)(*(float *)(plStack_108 + 0x1f) -
                                        (float)((ulong)plStack_108[6] >> 0x20) *
                                        (float)((ulong)*(undefined8 *)((long)plStack_108 + 0xfc) >>
                                               0x20)),
                                   (int)(fVar63 - (float)plStack_108[6] *
                                                  (float)*(undefined8 *)((long)plStack_108 + 0xfc)))
                          ,4);
      plStack_108[5] = lVar58;
/* WM - stripping the watermark breaks the license */
      fVar63 = (float)lVar58 - (float)lVar52;
      fVar78 = (float)((ulong)lVar58 >> 0x20) - (float)((ulong)lVar52 >> 0x20);
      if ((fVar63 != 0.0) || (fVar78 != 0.0)) {
        if (((*(byte *)((long)plStack_108 + 0x15) & 1) == 0) &&
           (*(float *)(&UNK_0000272c + lRam00000000020973e0) <= 0.0)) {
          *(undefined4 *)(&UNK_0000272c + lRam00000000020973e0) =
               *(undefined4 *)(lRam00000000020973e0 + 0x44);
        }
        plStack_108[0x23] =
             CONCAT44(fVar78 + (float)((ulong)plStack_108[0x23] >> 0x20),
                      fVar63 + (float)plStack_108[0x23]);
        plStack_108[0x27] =
             CONCAT44(fVar78 + (float)((ulong)plStack_108[0x27] >> 0x20),
                      fVar63 + (float)plStack_108[0x27]);
        *(float *)(plStack_108 + 0x26) = fVar63 + *(float *)(plStack_108 + 0x26);
        *(float *)((long)plStack_108 + 0x134) = fVar78 + *(float *)((long)plStack_108 + 0x134);
        *(float *)(plStack_108 + 0x25) = fVar63 + *(float *)(plStack_108 + 0x25);
        *(float *)((long)plStack_108 + 300) = fVar78 + *(float *)((long)plStack_108 + 300);
      }
    }
LAB_0031042c:
    plVar33 = plStack_108;
    fStack_118 = *(float *)(lVar59 + 8);
    fStack_114 = *(float *)(lVar59 + 0xc);
/* wm:do not claim this as your own */
    fStack_110 = fStack_118 + *(float *)(lVar59 + 0x10);
    fStack_10c = fStack_114 + *(float *)(lVar59 + 0x14);
    fVar85 = (float)*(undefined8 *)(lVar59 + 0x20);
    fVar86 = (float)((ulong)*(undefined8 *)(lVar59 + 0x20) >> 0x20);
    uVar47 = *(ulong *)(lVar20 + 0xd90);
    uVar49 = *(ulong *)(lVar20 + 0xd98);
    uVar47 = uVar47 ^ (uVar47 ^ uVar49) &
                      ~CONCAT44(-(uint)((float)(uVar49 >> 0x20) <= (float)(uVar47 >> 0x20)),
                                -(uint)((float)uVar49 <= (float)uVar47));
    fVar63 = (float)uVar47;
    fVar90 = fVar85 + fVar63;
    fVar78 = (float)(uVar47 >> 0x20);
    fVar64 = fVar86 + fVar78;
    fVar63 = (fVar85 + (float)*(undefined8 *)(lVar59 + 0x28)) - fVar63;
    fVar78 = (fVar86 + (float)((ulong)*(undefined8 *)(lVar59 + 0x28) >> 0x20)) - fVar78;
    if ((((bVar23) || ((uVar29 >> 0x18 & 1) != 0)) || (fStack_110 <= fStack_118)) ||
       (fStack_10c <= fStack_114)) {
      lVar52 = plStack_108[5];
      lVar52 = NEON_scvtf(CONCAT44((int)(float)((ulong)lVar52 >> 0x20),(int)(float)lVar52),4);
      plStack_108[5] = lVar52;
      if ((uVar29 >> 0x18 & 1) == 0) goto LAB_003104f4;
      lVar52 = 0xcb4;
    }
    else {
      fVar85 = *(float *)((long)plStack_108 + 0x34);
      if (((*(byte *)((long)plStack_108 + 0xef) & 1) == 0) &&
         ((*(byte *)((long)plStack_108 + 0x14) & 1) == 0)) {
        fVar85 = *(float *)(plStack_108 + 0xd);
      }
/* origin: github.com/pengussy */
      uVar49 = plStack_108[5];
      uVar47 = CONCAT44(fVar64 - fVar85,fVar90 - *(float *)(plStack_108 + 6));
      fVar86 = (float)(uVar49 >> 0x20);
      uVar47 = uVar47 ^ (uVar47 ^ uVar49 ^ (uVar49 ^ CONCAT44(fVar78,fVar63)) &
                                           CONCAT44(-(uint)(fVar78 < fVar86),
                                                    -(uint)(fVar63 < (float)uVar49))) &
                        ~CONCAT44(-(uint)(fVar86 < fVar64 - fVar85),
                                  -(uint)((float)uVar49 < fVar90 - *(float *)(plStack_108 + 6)));
      uVar47 = NEON_scvtf(CONCAT44((int)(float)(uVar47 >> 0x20),(int)(float)uVar47),4);
      plStack_108[5] = uVar47;
LAB_003104f4:
      lVar52 = 0xcbc;
      if ((uVar29 & 0xc000000) != 0x4000000) {
        lVar52 = 0xc94;
      }
    }
    pfVar62 = (float *)((long)plStack_108 + 0x2c);
    pfVar53 = (float *)(plStack_108 + 5);
    fVar85 = *(float *)(lVar20 + lVar52);
    *(float *)(plStack_108 + 0xc) = fVar85;
    lVar52 = lRam00000000020973e0;
    uVar43 = uStack_168 ^ 1 | (uVar29 & 0x1000) >> 0xc;
    uVar31 = uVar43;
    if (uStack_160 != 0) {
      uVar31 = 1;
    }
    uVar43 = uVar43 ^ 1;
    if (uVar31 == 0) {
      uVar43 = (uint)(uVar32 == 0);
// unlicensed copy if this notice is missing
    }
    if ((uVar29 >> 0x18 & 1) == 0) {
      bVar28 = 1;
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (!bVar18) goto LAB_00310564;
LAB_00310590:
      uVar31 = 1;
      if (*(char *)(lVar20 + 0x7e) != '\0') {
        uVar31 = 2;
      }
    }
    else {
      bVar28 = *(byte *)(plStack_108[0x76] + 0xd1) ^ 1;
      uStack_c0 = 0;
      uStack_b8 = 0;
      if (bVar18) goto LAB_00310590;
LAB_00310564:
      uVar31 = *(uint *)(plStack_108 + 3) >> 3 & (*(uint *)(plStack_108 + 3) & 7) >> 2;
    }
    uStack_b8 = 0;
    uStack_c0 = 0;
    fVar86 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" + lVar20
                       ) * 1.1;
/* chat: discord.gg/sdkhDjTex */
    fVar85 = fVar85 + 1.0;
    fVar79 = fVar85 + *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                + lVar20) * 0.2;
    if (fVar86 < fVar79) {
      fVar86 = fVar79;
    }
    if ((((((bVar28 & 1) == 0) || ((*(byte *)((long)plStack_108 + 0xcf) & 1) != 0)) ||
         ((uVar46 = *(uint *)((long)plStack_108 + 0x14), (uVar46 >> 1 & 1) != 0 ||
          (('\0' < (char)plStack_108[0x1d] || ('\0' < *(char *)((long)plStack_108 + 0xe9))))))) ||
        (((uVar46 >> 6 & 1) != 0 && ((*(byte *)(plStack_108 + 3) & 0xc) == 0)))) ||
       (*(char *)((long)plStack_108 + 0xcd) == '\0')) {
      uVar57 = 0xffffffff;
      uVar91 = 0xff;
    }
    else {
      fVar79 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                         lRam00000000020973e0) * 1.35;
      fVar85 = fVar85 + *(float *)(
                                  "/System/Library/Frameworks/Security.framework/Versions/A/Security"
                                  + lRam00000000020973e0) * 0.2;
/*  origin: github.com/pengussy  */
      if (fVar79 < fVar85) {
        fVar79 = fVar85;
      }
      fVar79 = (float)(int)((float)(int)fVar79 * 0.75);
      fVar85 = 0.0;
      if (uVar31 != 0) {
        fVar85 = fVar79;
      }
      uVar46 = *(uint *)((long)plStack_108 + 0xef) | uVar46;
      if ((uVar46 & 1) == 0) {
        fVar64 = fVar64 - *(float *)(plStack_108 + 0xd);
      }
      fVar103 = *(float *)(&UNK_0000149c + lRam00000000020973e0);
      uStack_100 = (long *)0x7f7fffff7f7fffff;
      uStack_130._0_4_ = 3.4028235e+38;
      uStack_130._4_4_ = 3.4028235e+38;
      *(undefined4 *)(plStack_108 + 0x2e) = 1;
      func_0x00318944("#RESIZE");
      if (uVar31 == 0) {
        uStack_204 = 0;
      }
      else {
        uVar47 = 0;
        uStack_204 = 0;
        pfVar51 = (float *)&UNK_01adf6c0;
        uVar49 = NEON_fmov(0x3f800000,4);
/* do not claim this as your own - github.com/pengussy */
        do {
          fVar106 = *(float *)(plVar33 + 5);
          fVar81 = *(float *)((long)plVar33 + 0x2c);
          fVar105 = pfVar51[-2];
          fVar107 = pfVar51[-1];
          fVar106 = fVar106 + fVar105 * ((fVar106 + *(float *)(plVar33 + 6)) - fVar106);
          fVar81 = fVar81 + fVar107 * ((fVar81 + *(float *)((long)plVar33 + 0x34)) - fVar81);
          fVar108 = *pfVar51;
          fVar110 = pfVar51[1];
          fVar109 = fVar103 * fVar108;
          fVar104 = fVar103 * fVar110;
          fVar87 = fVar106 - fVar109;
          fVar111 = fVar81 - fVar104;
          fVar106 = fVar106 + fVar108 * fVar79;
          fVar81 = fVar81 + fVar110 * fVar79;
          fVar80 = fVar87;
          if (fVar106 < fVar87) {
            fVar80 = fVar106;
            fVar106 = fVar87;
          }
          fVar87 = fVar111;
          fVar19 = fVar81;
          if (fVar81 < fVar111) {
            fVar87 = fVar81;
/* keep the notice, keep the source honest */
            fVar19 = fVar111;
          }
          uStack_e8 = (long *)CONCAT44(fVar19,fVar106);
          uStack_f0 = (long *)CONCAT44(fVar87,fVar80);
          uVar36 = *(uint *)(plVar33[0x22] + (long)(int)plVar33[0x21] * 4 + -4);
          uVar56 = (uint)uVar47;
          uVar57 = uVar36 ^ uVar56 ^ 0xffffffff;
          uVar57 = *(uint *)(&UNK_01adf190 + (ulong)(uVar57 & 0xff) * 4) >> 8 ^ ~uVar36 >> 0x10 ^
                   *(uint *)(&UNK_01adf190 +
                            (ulong)((*(uint *)(&UNK_01adf190 + (ulong)(uVar57 & 0xff) * 4) ^
                                    uVar57 >> 8) & 0xff) * 4);
          uVar57 = *(uint *)(&UNK_01adf190 + (ulong)((uVar57 ^ uVar56 >> 0x10) & 0xff) * 4) ^
                   uVar57 >> 8;
          uVar57 = *(uint *)(&UNK_01adf190 + (ulong)(uVar57 & 0xff ^ uVar56 >> 0x18) * 4) ^
                   uVar57 >> 8 ^ 0xffffffff;
          if (*(uint *)(&UNK_00001500 + *plVar33) == uVar57) {
            func_0x003186dc(uVar57,4,uVar47,0);
          }
          func_0x00315614(&uStack_f0,uVar57,0,2);
          func_0x0033e04c(&uStack_f0,uVar57,&fStack_140,&uStack_c8,&UNK_00040800);
          if ((((uint)fStack_140 & 1) != 0) || ((char)uStack_c8 != '\0')) {
            uVar67 = 5;
            if (uVar47 == 0) {
              uVar67 = 6;
            }
            *(undefined4 *)(&UNK_00002490 + lRam00000000020973e0) = uVar67;
            if ((char)uStack_c8 != '\0') {
              if (*(char *)(lVar52 + 0xb35) == '\x01') {
                uVar67 = func_0x00316170(plVar33,plVar33 + 9,0xffffffff);
                uStack_130._0_4_ = (float)func_0x003163d4(plVar33,CONCAT44(fVar81,uVar67));
                uStack_130._4_4_ = fVar81;
                func_0x00305de0(0,0);
                uStack_204 = 3;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
              }
              else {
                fStack_230 = 3.4028235e+38;
                fVar80 = fVar78;
                if (fVar107 != 0.0) {
                  fVar80 = fStack_230;
                }
                bVar23 = true;
                if ((fVar107 != 0.0 || (uVar46 & 1) != 0) && (bVar23 = false, !NAN(fVar107))) {
                  bVar23 = fVar107 == 1.0;
                }
                fStack_238 = -3.4028235e+38;
                fVar106 = fVar64;
                if (!bVar23) {
                  fVar106 = fStack_238;
                }
                fVar111 = fVar90;
                if (fVar105 != 1.0) {
                  fVar111 = fStack_238;
                }
                fVar81 = fVar63;
                if (fVar105 != 0.0) {
                  fVar81 = fStack_230;
                }
                fVar108 = fVar109 + fVar105 * (fVar108 * -fVar79 - fVar109) +
                          (*(float *)(lVar52 + 0x100) - *(float *)(&UNK_00001534 + lVar52));
                fVar87 = fVar104 + fVar107 * (fVar110 * -fVar79 - fVar104) +
                         (*(float *)(lVar52 + 0x104) - *(float *)(&UNK_00001538 + lVar52));
                if (fVar108 <= fVar81) {
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                  fVar81 = fVar108;
                }
                if (fVar111 <= fVar108) {
                  fVar111 = fVar81;
                }
                if (fVar87 <= fVar80) {
                  fVar80 = fVar87;
                }
                if (fVar106 <= fVar87) {
                  fVar106 = fVar80;
                }
                func_0x0031de60(fVar105,fVar107,plVar33,CONCAT44(fVar106,fVar111),&uStack_100,
                                &uStack_130);
              }
            }
          }
          if ((((uStack_c8 & 1) != 0) || (((uint)fStack_140 & 1) != 0)) ||
             ((uVar47 == 0 && ((*(byte *)((long)plVar33 + 0x17) & 1) == 0)))) {
            lVar59 = 0x1f;
            if (fStack_140._0_1_ != '\0') {
              lVar59 = 0x20;
            }
            lVar58 = 0x21;
            if ((char)uStack_c8 == '\0') {
              lVar58 = lVar59;
/* unlicensed copy if this notice is missing - github.com/pengussy */
            }
            lVar59 = lRam00000000020973e0 + lVar58 * 0x10;
            fVar106 = *(float *)(lVar59 + 0xdb0);
            fVar111 = *(float *)(lVar59 + 0xdbc) * *(float *)(lRam00000000020973e0 + 0xc84);
            fVar80 = 1.0;
            if (fVar106 <= 1.0) {
              fVar80 = fVar106;
            }
            fVar81 = 0.5;
            if (0.0 <= fVar106) {
              fVar81 = fVar80 * 255.0 + 0.5;
            }
            uVar69 = *(ulong *)(lVar59 + 0xdb4);
            fVar80 = (float)(uVar69 >> 0x20);
            uVar70 = uVar69 ^ (uVar69 ^ uVar49) &
                              CONCAT44(-(uint)((float)(uVar49 >> 0x20) < fVar80),
                                       -(uint)((float)uVar49 < (float)uVar69));
            uVar69 = (CONCAT44((float)(uVar70 >> 0x20) * 255.0 + 0.5,(float)uVar70 * 255.0 + 0.5) ^
                     0x3f0000003f000000) &
                     ~CONCAT44(-(uint)(fVar80 < 0.0),-(uint)((float)uVar69 < 0.0)) ^
                     0x3f0000003f000000;
            uVar68 = NEON_ushl(CONCAT44((int)(float)(uVar69 >> 0x20),(int)(float)uVar69),
                               _UNK_01adf148,4);
            fVar80 = 1.0;
            if (fVar111 <= 1.0) {
              fVar80 = fVar111;
            }
            fVar106 = 0.5;
            if (0.0 <= fVar111) {
              fVar106 = fVar80 * 255.0 + 0.5;
            }
            *(uint *)((long)&uStack_c0 + uVar47 * 4) =
/* wm:if you paid for this, you were scammed */
                 (uint)uVar68 | (int)fVar81 | (uint)((ulong)uVar68 >> 0x20) | (int)fVar106 << 0x18;
          }
          pfVar51 = pfVar51 + 6;
          uVar47 = uVar47 + 1;
        } while (uVar31 != uVar47);
      }
      if ((*(byte *)((long)plVar33 + 0x17) & 1) == 0) {
        uVar36 = 0xf;
        if (*(char *)(lVar52 + 0x7e) == '\0') {
          uVar36 = 0;
        }
      }
      else {
        uVar36 = *(uint *)(plVar33 + 3) >> 1 & 2 | *(uint *)(plVar33 + 3) & 8;
      }
      uVar47 = 0;
      uStack_1ec = 0xffffffff;
      uVar56 = 0xffffffff;
      do {
        uVar50 = (uint)uVar47;
        uVar57 = uVar56;
        if ((uVar36 >> (ulong)(uVar50 & 0x1f) & 1) != 0) {
          lVar59 = uVar47 * 0x1c;
          fVar80 = *(float *)(&UNK_0000149c + lVar52);
          fVar106 = *(float *)(plVar33 + 5);
          fVar111 = *(float *)((long)plVar33 + 0x2c);
          fVar81 = fVar111 + *(float *)((long)plVar33 + 0x34);
          fVar103 = fVar106 + *(float *)(plVar33 + 6) + -1.0;
          fVar79 = fVar81 + -1.0;
          if (fVar80 != 0.0) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            fVar103 = fVar106 + *(float *)(plVar33 + 6);
            fVar79 = fVar81;
          }
          fVar81 = fVar111 - fVar80;
          uVar91 = SUB41(fVar81,0);
          uVar93 = (undefined1)((uint)fVar81 >> 8);
          uVar95 = (undefined1)((uint)fVar81 >> 0x10);
          uVar97 = (undefined1)((uint)fVar81 >> 0x18);
          fVar87 = fVar79 - fVar80;
          fVar81 = fVar111;
          if (uVar50 != 2) {
            fVar81 = fVar79;
          }
          if (uVar50 != 2) {
            uVar91 = SUB41(fVar87,0);
            uVar93 = (undefined1)((uint)fVar87 >> 8);
            uVar95 = (undefined1)((uint)fVar87 >> 0x10);
            uVar97 = (undefined1)((uint)fVar87 >> 0x18);
          }
          fVar87 = fVar106;
          if (uVar50 != 0) {
            fVar87 = fVar103;
          }
          fVar104 = fVar106;
          if (uVar50 != 0) {
            fVar104 = fVar103;
/* wm:stripping the watermark breaks the license */
          }
          fVar103 = fVar103 - fVar85;
          fVar81 = fVar80 + fVar81;
          if ((int)uVar50 < 2) {
            fVar103 = fVar80 + fVar87;
            fVar81 = fVar79 - fVar85;
          }
          fVar106 = fVar85 + fVar106;
          fVar79 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91)));
          if ((int)uVar50 < 2) {
            fVar106 = fVar104 - fVar80;
            fVar79 = fVar85 + fVar111;
          }
          uStack_f0 = (long *)CONCAT44(fVar79,fVar106);
          uStack_e8 = (long *)CONCAT44(fVar81,fVar103);
          uVar57 = *(uint *)(plVar33[0x22] + (long)(int)plVar33[0x21] * 4 + -4);
          uVar7 = ~uVar57;
          uVar57 = *(uint *)(&UNK_01adf190 +
                            (ulong)((uVar57 ^ 0xffffffff) & 0xff ^ (uint)(uVar47 | 4)) * 4) >> 8 ^
                   uVar7 >> 0x10 ^
                   *(uint *)(&UNK_01adf190 +
                            (ulong)((*(uint *)(&UNK_01adf190 +
                                              (ulong)((uVar57 ^ 0xffffffff) & 0xff ^
                                                     (uint)(uVar47 | 4)) * 4) ^ uVar7 >> 8) & 0xff)
                            * 4);
          uVar57 = *(uint *)(&UNK_01adf190 + (ulong)(uVar57 & 0xff) * 4) ^ uVar57 >> 8;
          uVar57 = *(uint *)(&UNK_01adf190 + (ulong)(uVar57 & 0xff) * 4) ^ uVar57 >> 8 ^ 0xffffffff;
          if (*(uint *)(&UNK_00001500 + *plVar33) == uVar57) {
/*  keep the notice, keep the source honest  */
            func_0x003186dc(uVar57,4,uVar47 | 4,0);
          }
          func_0x00315614(&uStack_f0,uVar57,0,2);
          func_0x0033e04c(&uStack_f0,uVar57,&fStack_140,&uStack_c8,&UNK_00040800);
          if (fStack_140._0_1_ == '\x01') {
            if (*(float *)(&UNK_00001510 + lVar52) <= 0.04) {
              fStack_140 = (float)((uint)fStack_140 & 0xffffff00);
              goto LAB_00312c00;
            }
            uVar67 = 3;
            if (uVar47 < 2) {
              uVar67 = 4;
            }
            *(undefined4 *)(&UNK_00002490 + lRam00000000020973e0) = uVar67;
            if ((uStack_c8 & 1) != 0) goto LAB_00312c24;
          }
          else {
LAB_00312c00:
            if ((char)uStack_c8 == '\x01') {
              uVar67 = 3;
              if (uVar47 < 2) {
                uVar67 = 4;
/*  more drops soon - github.com/pengussy  */
              }
              *(undefined4 *)(&UNK_00002490 + lRam00000000020973e0) = uVar67;
LAB_00312c24:
              if (*(char *)(lVar52 + 0xb35) == '\x01') {
                if ((uVar50 | 2) == 3) {
                  uVar57 = 1 << (ulong)(1 < uVar47);
                  uVar67 = func_0x00316170(plVar33,plVar33 + 9,uVar57);
                  fVar79 = (float)func_0x003163d4(plVar33,CONCAT44(fVar103,uVar67));
                  if (uVar47 < 2) {
                    fVar103 = fVar79;
                  }
                  uVar49 = 4;
                  if (uVar47 < 2) {
                    uVar49 = 0;
                  }
                  *(float *)((ulong)&uStack_130 | uVar49) = fVar103;
                  uStack_204 = uVar57 | uStack_204;
                  uStack_c8 = uStack_c8 & 0xffffffffffffff00;
                  fStack_140 = (float)((uint)fStack_140 & 0xffffff00);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                }
                func_0x00305de0(0,0);
              }
              else {
                plVar34 = *(long **)(&UNK_000014d0 + lVar52);
                if ((plVar34 == (long *)0x0) ||
                   (*(int *)(&UNK_000014e4 + lVar52) != *(int *)(lVar52 + 4))) {
LAB_00312d04:
                  if ((&UNK_00001528)[lVar52] == '\x01') goto LAB_00312d14;
                }
                else {
                  plVar45 = plVar33;
                  do {
                    plVar44 = plVar45;
                    plVar45 = (long *)plVar44[0x78];
                  } while (plVar44 != (long *)plVar44[0x78]);
                  if (plVar44 != plVar34) {
                    plVar45 = plVar33;
                    do {
                      if (plVar45 == plVar34) goto LAB_00312d14;
                    } while ((plVar45 != plVar44) &&
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                            (plVar45 = (long *)plVar45[0x76], plVar45 != (long *)0x0));
                    goto LAB_00312d04;
                  }
LAB_00312d14:
                  *(long **)(&UNK_00002634 + lVar52) = uStack_e8;
                  *(long **)(&UNK_0000262c + lVar52) = uStack_f0;
                  (&UNK_0000263c)[lVar52] = 0;
                }
                if (((*(byte *)((long)plVar33 + 0x17) & 1) != 0) &&
                   ((long *)*(long *)(&UNK_0000262c + lVar52) != uStack_f0 ||
                    *(long **)(&UNK_00002634 + lVar52) != uStack_e8)) {
                  (&UNK_0000263c)[lVar52] = 1;
                }
                fVar79 = *(float *)(&UNK_01adf720 + lVar59);
                if (*(float *)(&UNK_01adf728 + lVar59) <= *(float *)(&UNK_01adf720 + lVar59)) {
                  fVar79 = *(float *)(&UNK_01adf728 + lVar59);
                }
                fVar103 = *(float *)(&UNK_01adf724 + lVar59);
                if (*(float *)(&UNK_01adf72c + lVar59) <= *(float *)(&UNK_01adf724 + lVar59)) {
                  fVar103 = *(float *)(&UNK_01adf72c + lVar59);
                }
                uVar49 = (ulong)(1 < uVar47);
                fVar80 = *(float *)(plVar33 + 5);
                fVar106 = *(float *)((long)plVar33 + 0x2c);
                fVar103 = fVar103 * *(float *)((long)plVar33 + 0x34) + fVar106;
                if (uVar47 < 2) {
                  fVar103 = fVar79 * *(float *)(plVar33 + 6) + fVar80;
                }
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                fVar79 = *(float *)(lVar52 + 0xec + uVar49 * 4);
                fVar103 = fVar79 + fVar103;
                fVar87 = (*(float *)(lVar52 + 0x100 + uVar49 * 4) -
                         *(float *)(&UNK_00001534 + uVar49 * 4 + lVar52)) +
                         *(float *)(&UNK_0000149c + lVar52);
                uVar91 = SUB41(fVar103,0);
                uVar93 = (undefined1)((uint)fVar103 >> 8);
                uVar95 = (undefined1)((uint)fVar103 >> 0x10);
                uVar97 = (undefined1)((uint)fVar103 >> 0x18);
                fVar111 = fVar87;
                fVar81 = fVar80;
                if (uVar47 < 2) {
                  uVar91 = SUB41(fVar106,0);
                  uVar93 = (undefined1)((uint)fVar106 >> 8);
                  uVar95 = (undefined1)((uint)fVar106 >> 0x10);
                  uVar97 = (undefined1)((uint)fVar106 >> 0x18);
                  fVar80 = fVar87;
                  fVar111 = fVar106;
                  fVar81 = fVar103;
                }
                if ((&UNK_0000263c)[lVar52] == '\x01') {
                  if (fVar79 != 0.0) {
                    fVar111 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91)));
                    fVar80 = fVar81;
                    if (0.0 <= fVar79 == fVar103 <= fVar87) goto LAB_003129a8;
                  }
                }
                else {
/* WM - origin: github.com/pengussy */
LAB_003129a8:
                  fVar79 = fVar78;
                  if (uVar47 != 2) {
                    fVar79 = 3.4028235e+38;
                  }
                  uVar91 = SUB41(fVar64,0);
                  uVar93 = (undefined1)((uint)fVar64 >> 8);
                  uVar95 = (undefined1)((uint)fVar64 >> 0x10);
                  uVar97 = (undefined1)((uint)fVar64 >> 0x18);
                  if ((uVar47 != 2 || (uVar46 & 1) != 0) && uVar47 != 3) {
                    uVar91 = 0xff;
                    uVar93 = 0xff;
                    uVar95 = 0x7f;
                    uVar97 = 0xff;
                  }
                  if (fVar111 <= fVar79) {
                    fVar79 = fVar111;
                  }
                  fVar103 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91)));
                  if ((float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) <= fVar111) {
                    fVar103 = fVar79;
                  }
                  fVar79 = fVar90;
                  if (uVar47 != 1) {
                    fVar79 = -3.4028235e+38;
                  }
                  uVar91 = SUB41(fVar63,0);
                  uVar93 = (undefined1)((uint)fVar63 >> 8);
                  uVar95 = (undefined1)((uint)fVar63 >> 0x10);
                  uVar97 = (undefined1)((uint)fVar63 >> 0x18);
                  if (uVar47 != 0) {
                    uVar91 = 0xff;
                    uVar93 = 0xff;
                    uVar95 = 0x7f;
                    uVar97 = 0x7f;
                  }
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
                  if (fVar80 == (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) ||
                      fVar80 < (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91)))) {
                    uVar91 = SUB41(fVar80,0);
                    uVar93 = (undefined1)((uint)fVar80 >> 8);
                    uVar95 = (undefined1)((uint)fVar80 >> 0x10);
                    uVar97 = (undefined1)((uint)fVar80 >> 0x18);
                  }
                  if (fVar79 <= fVar80) {
                    fVar79 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91)));
                  }
                  func_0x0031de60(plVar33,CONCAT44(fVar103,fVar79),&uStack_100,&uStack_130);
                }
              }
            }
          }
          uVar7 = uVar50;
          if (fStack_140._0_1_ == '\0') {
            uVar7 = uStack_1ec;
          }
          uVar57 = uVar50;
          if ((char)uStack_c8 == '\0') {
            uVar57 = uVar56;
          }
          uStack_1ec = uVar7;
        }
        uVar47 = uVar47 + 1;
        uVar56 = uVar57;
      } while (uVar47 != 4);
      iVar24 = *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108);
      iVar12 = iVar24 + -1;
      if (iVar12 == 0 || iVar24 < 1) {
// no support for modified copies
        FUN_002ff090("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108) = iVar12;
      }
      *(undefined4 *)(plVar33 + 0x2e) = 0;
      if ((*(long *)(&UNK_000021e0 + lVar52) != 0) &&
         (*(long **)(*(long *)(&UNK_000021e0 + lVar52) + 0x3c0) == plVar33)) {
        if (*(int *)(&UNK_00002048 + lVar52) == 3) {
          lVar59 = 0x930;
          lVar58 = 0x940;
          lVar40 = 0x910;
          lVar48 = 0x920;
LAB_00312e90:
          fVar63 = *(float *)(lRam00000000020973e0 + lVar48) -
                   *(float *)(lRam00000000020973e0 + lVar40);
          fVar78 = *(float *)(lRam00000000020973e0 + lVar58) -
                   *(float *)(lRam00000000020973e0 + lVar59);
        }
        else {
          fVar63 = 0.0;
          if (*(int *)(&UNK_00002048 + lVar52) == 2) {
            fVar78 = 0.0;
            if (*(char *)(lVar52 + 0x11d) == '\x01') {
              lVar59 = 0x160;
              lVar58 = 0x170;
              lVar40 = 0x140;
              lVar48 = 0x150;
              goto LAB_00312e90;
            }
          }
          else {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
            fVar78 = 0.0;
          }
        }
        if ((fVar63 != 0.0) || (fVar78 != 0.0)) {
          fVar85 = *(float *)(lVar52 + 0x40) * 600.0 *
                   *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                             lRam00000000020973e0 + 0x34);
          fVar63 = *(float *)(&UNK_00002214 + lVar52) + fVar63 * fVar85;
          *(float *)(&UNK_00002214 + lVar52) = fVar63;
          fVar78 = fVar78 * fVar85 + *(float *)(&UNK_00002218 + lVar52);
          *(float *)(&UNK_00002218 + lVar52) = fVar78;
          fVar85 = (fVar90 - *(float *)(plVar33 + 5)) - *(float *)(plVar33 + 6);
          fVar64 = (fVar64 - *(float *)((long)plVar33 + 0x2c)) - *(float *)((long)plVar33 + 0x34);
          if (fVar63 < fVar85) {
            fVar63 = fVar85;
          }
          if (fVar78 < fVar64) {
            fVar78 = fVar64;
          }
          *(float *)(&UNK_00002214 + lVar52) = fVar63;
          *(float *)(&UNK_00002218 + lVar52) = fVar78;
          (&UNK_00002204)[lVar52] = 0;
          (&UNK_00001ff1)[lVar52] = 1;
          uVar67 = func_0x002febb0(0x21);
/* origin: github.com/pengussy - github.com/pengussy */
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar67);
          if ((int)fVar63 != 0 || (int)fVar78 != 0) {
            fVar78 = (float)(int)fVar78;
            fVar64 = (float)(int)fVar63;
            fVar63 = *(float *)((long)plVar33 + 0x3c) + fVar78;
            uStack_130._0_4_ =
                 (float)func_0x003163d4(plVar33,CONCAT44(fVar63,*(float *)(plVar33 + 7) + fVar64));
            *(float *)(&UNK_00002214 + lVar52) = *(float *)(&UNK_00002214 + lVar52) - fVar64;
            *(float *)(&UNK_00002218 + lVar52) = *(float *)(&UNK_00002218 + lVar52) - fVar78;
            uStack_130._4_4_ = fVar63;
          }
        }
      }
      fVar78 = *(float *)(plVar33 + 7);
      fVar63 = fVar78;
      if ((float)uStack_130 != 3.4028235e+38) {
/* reversing this took months of machine time */
        bVar23 = false;
        if ((*(float *)(plVar33 + 6) == (float)uStack_130) &&
           (bVar23 = false, !NAN(fVar78) && !NAN((float)uStack_130))) {
          bVar23 = fVar78 == (float)uStack_130;
        }
        if (!bVar23) {
          *(float *)(plVar33 + 7) = (float)uStack_130;
          *(float *)(plVar33 + 6) = (float)uStack_130;
          fVar63 = (float)uStack_130;
        }
      }
      fVar90 = *(float *)(plVar33 + 5);
      fVar85 = *(float *)((long)plVar33 + 0x3c);
      fVar64 = fVar85;
      if (uStack_130._4_4_ != 3.4028235e+38) {
        bVar23 = false;
        if ((*(float *)((long)plVar33 + 0x34) == uStack_130._4_4_) &&
           (bVar23 = false, !NAN(fVar85) && !NAN(uStack_130._4_4_))) {
          bVar23 = fVar85 == uStack_130._4_4_;
        }
        if (!bVar23) {
          *(float *)((long)plVar33 + 0x3c) = uStack_130._4_4_;
/* wm:donate: donate/README.md */
          *(float *)((long)plVar33 + 0x34) = uStack_130._4_4_;
          fVar64 = uStack_130._4_4_;
        }
      }
      fVar79 = *(float *)((long)plVar33 + 0x2c);
      fVar103 = (float)(int)(float)uStack_100;
      bVar23 = true;
      if (((float)uStack_100 != 3.4028235e+38) && (bVar23 = false, !NAN(fVar90) && !NAN(fVar103))) {
        bVar23 = fVar90 == fVar103;
      }
      uVar91 = SUB41(fVar90,0);
      uVar93 = (undefined1)((uint)fVar90 >> 8);
      uVar95 = (undefined1)((uint)fVar90 >> 0x10);
      uVar97 = (undefined1)((uint)fVar90 >> 0x18);
      if (!bVar23) {
        *pfVar53 = fVar103;
        uVar91 = SUB41(fVar103,0);
        uVar93 = (undefined1)((uint)fVar103 >> 8);
        uVar95 = (undefined1)((uint)fVar103 >> 0x10);
        uVar97 = (undefined1)((uint)fVar103 >> 0x18);
      }
      fVar103 = fVar79;
      if ((uStack_100._4_4_ != 3.4028235e+38) &&
         (fVar80 = (float)(int)uStack_100._4_4_, fVar79 != fVar80)) {
        *pfVar62 = fVar80;
        fVar103 = fVar80;
      }
// thanks for reading - discord.gg/sdkhDjTex
      if (((((fVar90 != (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91)))) ||
            (fVar79 != fVar103)) || (fVar78 != fVar63)) || (fVar85 != fVar64)) &&
         (((*(byte *)((long)plVar33 + 0x15) & 1) == 0 &&
          (*(float *)(&UNK_0000272c + lRam00000000020973e0) <= 0.0)))) {
        *(undefined4 *)(&UNK_0000272c + lRam00000000020973e0) =
             *(undefined4 *)(lRam00000000020973e0 + 0x44);
      }
      if (uVar57 != 0xffffffff) {
        uVar65 = *(undefined4 *)(&UNK_0000149c + lVar52);
        uVar67 = func_0x0031dfac(plVar33,uVar57);
        *(undefined4 *)(&UNK_0000262c + lVar52) = uVar67;
        *(undefined4 *)(&UNK_00002630 + lVar52) = uVar65;
        *(float *)(&UNK_00002634 + lVar52) = fVar85;
        *(float *)(&UNK_00002638 + lVar52) = fVar90;
      }
      if (uStack_204 != 0) {
        uStack_1d4 = uStack_1d4 | uStack_204;
        uVar30 = uStack_204 != 1 | uVar30;
      }
      uVar91 = (undefined1)uStack_1ec;
    }
    plVar33 = plStack_108;
    *(undefined1 *)(plStack_108 + 0x1b) = uVar91;
    *(char *)((long)plStack_108 + 0xd9) = (char)uVar57;
    fStack_138 = *(float *)(plStack_108 + 7);
    fVar63 = *(float *)((long)plStack_108 + 0x7c);
/* WM - donate: donate/README.md */
    if (*(char *)((long)plStack_108 + 0xcf) == '\x01') {
      fVar78 = *(float *)((long)plStack_108 + 0x74);
      fVar89 = *(float *)(plStack_108 + 0xf);
    }
    else {
      fVar78 = *(float *)((long)plStack_108 + 0x74);
      fVar84 = fVar84 + (*(float *)(plStack_108 + 0x46) - *(float *)(plStack_108 + 0x45));
      fVar64 = 0.0;
      fVar85 = 0.0;
      if (uVar42 == 0) {
        fVar64 = (float)plStack_108[0xb];
        fVar85 = (float)((ulong)plStack_108[0xb] >> 0x20);
        fVar64 = fVar64 + fVar64 + (float)plStack_108[8];
        fVar85 = fVar85 + fVar85 + (float)((ulong)plStack_108[8] >> 0x20);
      }
      uVar91 = SUB41(fStack_138,0);
      uVar93 = (char)((uint)fStack_138 >> 8);
      uVar95 = (char)((uint)fStack_138 >> 0x10);
      uVar97 = (char)((uint)fStack_138 >> 0x18);
      if ((uStack_1d4 & 1) == 0) {
        uVar91 = SUB41(fVar84,0);
        uVar93 = (char)((uint)fVar84 >> 8);
        uVar95 = (char)((uint)fVar84 >> 0x10);
        uVar97 = (char)((uint)fVar84 >> 0x18);
      }
      fVar84 = *(float *)((long)plStack_108 + 0x3c) - (fVar63 + fVar78);
      if ((uVar30 & 1) == 0) {
        fVar84 = fVar89 + (*(float *)((long)plStack_108 + 0x234) -
                          *(float *)((long)plStack_108 + 0x22c));
/* proprietary - see LICENSE - do not sell */
      }
      bVar61 = *(byte *)(plStack_108 + 0x19);
      if ((uVar29 >> 0xe & 1) == 0) {
        bVar23 = (uVar29 & 8) == 0 && fVar84 < fVar85;
        *(bool *)((long)plStack_108 + 0xc9) = bVar23;
        if ((uVar29 >> 0xf & 1) != 0) goto LAB_00310718;
        if (bVar23) {
          uVar30 = 0;
          goto LAB_003106f8;
        }
        if (!((float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) - 0.0 < fVar64 &&
             (uVar29 & 8) == 0)) goto LAB_00310710;
LAB_0031083c:
        uVar30 = uVar29 >> 0xb & 1;
      }
      else {
        bVar23 = true;
// found on a paste site? it was re-uploaded illegally
        *(undefined1 *)((long)plStack_108 + 0xc9) = 1;
        if ((uVar29 >> 0xf & 1) == 0) {
          uVar30 = uVar29 & 8;
LAB_003106f8:
          bVar23 = true;
          if (!(fVar64 <= (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) -
                          *(float *)(lVar20 + 0xcfc) || uVar30 != 0)) goto LAB_0031083c;
LAB_00310710:
          uVar30 = 0;
        }
        else {
LAB_00310718:
          uVar30 = 1;
        }
      }
      *(char *)(plStack_108 + 0x19) = (char)uVar30;
      bVar61 = bVar61 != uVar30 | *(char *)((long)plStack_108 + 0xcb) << 1;
      *(byte *)((long)plStack_108 + 0xcb) = bVar61;
// WM - keep the notice, keep the source honest
      if ((byte)POPCOUNT(bVar61) < 4) {
        *(undefined1 *)((long)plStack_108 + 0xca) = 0;
        if (!(!bVar23 && ((uVar30 ^ 0xffffffff) & 1) == 0)) goto LAB_003108cc;
LAB_0031088c:
        fVar89 = *(float *)(lVar20 + 0xcfc);
        bVar23 = (uVar29 & 8) == 0;
        *(bool *)((long)plStack_108 + 0xc9) = fVar84 - fVar89 < fVar85 && bVar23;
        if (fVar85 <= fVar84 - fVar89 || !bVar23) {
          fVar89 = 0.0;
        }
      }
      else {
        uVar30 = 1;
        *(undefined1 *)(plStack_108 + 0x19) = 1;
        *(undefined1 *)((long)plStack_108 + 0xca) = 1;
        if (!bVar23) goto LAB_0031088c;
LAB_003108cc:
        fVar89 = 0.0;
        if (bVar23) {
          fVar89 = *(float *)(lVar20 + 0xcfc);
        }
// WM - do not claim this as your own
      }
      fVar84 = 0.0;
      if (uVar30 != 0) {
        fVar84 = *(float *)(lVar20 + 0xcfc);
      }
      *(float *)(plStack_108 + 0x18) = fVar89;
      *(float *)((long)plStack_108 + 0xc4) = fVar84;
      fVar89 = fVar89 + *(float *)(plStack_108 + 0xf);
      fVar63 = fVar63 + fVar84;
      *(float *)(plStack_108 + 0xf) = fVar89;
      *(float *)((long)plStack_108 + 0x7c) = fVar63;
    }
    bVar23 = (uVar29 & 0x1000000) != 0;
    pfVar53 = &fStack_118;
    if (bVar23 && (uVar32 != 0x3000000 && uStack_160 == 0)) {
      pfVar53 = (float *)(lVar38 + 0x268);
    }
    uStack_128 = *(ulong *)(pfVar53 + 2);
    uStack_130 = *(ulong *)pfVar53;
    uVar47 = plStack_108[5];
    fStack_13c = (float)(uVar47 >> 0x20);
    fStack_140 = (float)uVar47;
    fStack_138 = fStack_138 + fStack_140;
    fStack_134 = fStack_13c + *(float *)(plStack_108 + 0xd);
// WM - donate: donate/README.md
    fVar80 = (float)uStack_130;
    fVar106 = (float)(uStack_130 >> 0x20);
    plStack_108[0x43] =
         uStack_130 ^
         (uStack_130 ^ uVar47) &
         CONCAT44(-(uint)(fVar106 <= fStack_13c),-(uint)(fVar80 <= fStack_140));
    fVar103 = fStack_140 + (float)plStack_108[6];
    fVar90 = fStack_13c + (float)((ulong)plStack_108[6] >> 0x20);
    fVar84 = (float)uStack_128;
    fVar64 = (float)(uStack_128 >> 0x20);
    plStack_108[0x44] =
         uStack_128 ^
         (uStack_128 ^ CONCAT44(fVar90,fVar103)) &
         CONCAT44(-(uint)(fVar90 < fVar64),-(uint)(fVar103 < fVar84));
    fVar79 = fStack_140 + *(float *)(plStack_108 + 0xe);
    *(float *)(plStack_108 + 0x45) = fVar79;
    fVar78 = fVar78 + fStack_13c;
    *(float *)((long)plStack_108 + 0x22c) = fVar78;
    fVar85 = *(float *)((long)plStack_108 + 100);
    pfVar53 = (float *)((long)plStack_108 + 100);
    if ((uVar29 & 0x401) != 1) {
      pfVar53 = (float *)(lVar20 + 0xcd0);
    }
    fVar111 = -fVar85;
    fVar103 = fVar103 - fVar89;
    fVar90 = fVar90 - fVar63;
    auVar112._4_4_ = fVar78 - 0.5;
    auVar112._0_4_ = fVar79 - 0.5;
    auVar112._8_4_ = fVar103;
// keep the notice, keep the source honest
    auVar112._12_4_ = fVar90;
    auVar74._4_4_ = fVar78 - 0.5;
    auVar74._0_4_ = fVar79 - 0.5;
    auVar74._8_4_ = fVar103;
    auVar74._12_4_ = fVar90;
    auVar112 = NEON_ext(auVar112,auVar74,8,1);
    plStack_108[0x46] = auVar112._0_8_;
    fVar63 = fVar79 + 0.5 + fVar85 * 0.5;
    fVar89 = fVar78 + 0.5 + *pfVar53 * 0.5;
    fVar85 = fVar103 + fVar111 * 0.5;
    fVar111 = fVar90 + fVar111 * 0.5;
    iVar24 = -(uint)(0.0 <= fVar63);
    iVar12 = -(uint)(0.0 <= fVar89);
    iVar13 = -(uint)(0.0 <= fVar85);
    iVar14 = -(uint)(0.0 <= fVar111);
    auVar15._4_4_ = (int)fVar89;
    auVar15._0_4_ = (int)fVar63;
    auVar15._8_4_ = (int)fVar85;
    auVar15._12_4_ = (int)fVar111;
    auVar112 = NEON_scvtf(auVar15,4);
    iVar66 = -(uint)(fVar63 == auVar112._0_4_);
    iVar75 = -(uint)(fVar89 == auVar112._4_4_);
    iVar76 = -(uint)(fVar85 == auVar112._8_4_);
    iVar77 = -(uint)(fVar111 == auVar112._12_4_);
    iVar24 = CONCAT13(~(byte)((uint)iVar24 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar24 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar24 >> 8) & ~(byte)((uint)iVar66 >> 8),
/* WM - proprietary - see LICENSE - do not sell */
                                        ~(byte)iVar24 & ~(byte)iVar66)));
    auVar71._0_8_ =
         CONCAT17(~(byte)((uint)iVar12 >> 0x18) & ~(byte)((uint)iVar75 >> 0x18),
                  CONCAT16(~(byte)((uint)iVar12 >> 0x10) & ~(byte)((uint)iVar75 >> 0x10),
                           CONCAT15(~(byte)((uint)iVar12 >> 8) & ~(byte)((uint)iVar75 >> 8),
                                    CONCAT14(~(byte)iVar12 & ~(byte)iVar75,iVar24))));
    auVar71[8] = ~(byte)iVar13 & ~(byte)iVar76;
    auVar71[9] = ~(byte)((uint)iVar13 >> 8) & ~(byte)((uint)iVar76 >> 8);
    auVar71[10] = ~(byte)((uint)iVar13 >> 0x10) & ~(byte)((uint)iVar76 >> 0x10);
    auVar71[0xb] = ~(byte)((uint)iVar13 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18);
    auVar72[0xc] = ~(byte)iVar14 & ~(byte)iVar77;
    auVar72._0_12_ = auVar71;
    auVar72[0xd] = ~(byte)((uint)iVar14 >> 8) & ~(byte)((uint)iVar77 >> 8);
    auVar72[0xe] = ~(byte)((uint)iVar14 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10);
    auVar72[0xf] = ~(byte)((uint)iVar14 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18);
    auVar73._0_4_ = iVar24 + (int)fVar63;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    auVar73._4_4_ = (int)((ulong)auVar71._0_8_ >> 0x20) + (int)fVar89;
    auVar73._8_4_ = auVar71._8_4_ + (int)fVar85;
    auVar73._12_4_ = auVar72._12_4_ + (int)fVar111;
    auVar112 = NEON_scvtf(auVar73,4);
    iVar24 = -(uint)(auVar112._4_4_ < fVar106);
    iVar12 = -(uint)(auVar112._8_4_ < fVar80);
    iVar13 = -(uint)(auVar112._12_4_ < fVar106);
    auVar10._8_4_ = fVar84;
    auVar10._0_8_ = uStack_128;
    auVar10._12_4_ = fVar64;
    auVar16._4_4_ = -(uint)(fVar64 < auVar112._4_4_);
    auVar16._0_4_ = -(uint)(fVar84 < auVar112._0_4_);
    auVar16._8_4_ = -(uint)(fVar84 < auVar112._8_4_);
    auVar16._12_4_ = -(uint)(fVar64 < auVar112._12_4_);
    auVar74 = auVar112 ^ (auVar112 ^ auVar10) & auVar16;
    auVar9._8_4_ = fVar80;
    auVar9._0_8_ = uStack_130;
    auVar9._12_4_ = fVar106;
    auVar11[4] = (char)iVar24;
    auVar11._0_4_ = -(uint)(auVar112._0_4_ < fVar80);
    auVar11[5] = (char)((uint)iVar24 >> 8);
    auVar11[6] = (char)((uint)iVar24 >> 0x10);
    auVar11[7] = (char)((uint)iVar24 >> 0x18);
    auVar11[8] = (char)iVar12;
    auVar11[9] = (char)((uint)iVar12 >> 8);
    auVar11[10] = (char)((uint)iVar12 >> 0x10);
    auVar11[0xb] = (char)((uint)iVar12 >> 0x18);
    auVar11[0xc] = (char)iVar13;
    auVar11[0xd] = (char)((uint)iVar13 >> 8);
    auVar11[0xe] = (char)((uint)iVar13 >> 0x10);
    auVar11[0xf] = (char)((uint)iVar13 >> 0x18);
/* more drops soon - github.com/pengussy */
    auVar74 = auVar74 ^ (auVar74 ^ auVar9) & auVar11;
    plStack_108[0x48] = auVar74._8_8_;
    plStack_108[0x47] = auVar74._0_8_;
    fVar84 = (*(float *)(plStack_108 + 8) + *(float *)(plStack_108 + 0xb) * 2.0) -
             (fVar103 - fVar79);
    fVar63 = 0.0;
    if (0.0 < fVar84) {
      fVar63 = fVar84;
    }
    fVar90 = fVar90 - fVar78;
    fVar84 = (*(float *)((long)plStack_108 + 0x44) + *(float *)((long)plStack_108 + 0x5c) * 2.0) -
             fVar90;
    fVar78 = 0.0;
    if (0.0 < fVar84) {
      fVar78 = fVar84;
    }
    *(float *)(plStack_108 + 0x14) = fVar63;
    *(float *)((long)plStack_108 + 0xa4) = fVar78;
    uVar67 = func_0x00316d20(plStack_108);
    *(undefined4 *)(plVar33 + 0x13) = uVar67;
    *(float *)((long)plVar33 + 0x9c) = fVar90;
    plVar33[0x15] = 0x7f7fffff7f7fffff;
    plVar33[0x10] = 0;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    lVar52 = *(long *)(*(long *)((long)&dylib_command_000011a8.dylib.name.offset + lVar20) + 8);
    func_0x00320eb8(plVar33[0x59],*(undefined8 *)(lVar52 + 0x28),*(undefined8 *)(lVar52 + 0x30));
    lVar52 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    *(undefined1 *)(lVar52 + 0xce) = 1;
    func_0x00320d78(*(undefined8 *)(lVar52 + 0x2c8),&uStack_130,(ulong)&uStack_130 | 8,0);
    plVar33 = plStack_108;
    auVar112 = *(undefined1 (*) [16])
                (*(long *)(*(long *)(lVar52 + 0x2c8) + 0xa8) +
                 (long)*(int *)(*(long *)(lVar52 + 0x2c8) + 0xa0) * 0x10 + -0x10);
    *(long *)(lVar52 + 0x270) = auVar112._8_8_;
    *(long *)(lVar52 + 0x268) = auVar112._0_8_;
    if (bVar23 && (uVar32 != 0x3000000 && uStack_160 == 0)) {
      if ((int)*(uint *)(lVar38 + 0x1b0) < 2) {
        bVar23 = false;
      }
      else {
        lVar52 = *(long *)(*(long *)(lVar38 + 0x1b8) + (ulong)*(uint *)(lVar38 + 0x1b0) * 8 + -0x10)
        ;
        bVar23 = false;
        if (lVar52 != 0) {
          if ((*(float *)((long)plStack_108 + 0x2c) <
               *(float *)(lVar52 + 0x2c) + *(float *)(lVar52 + 0x34)) &&
             (*(float *)(lVar52 + 0x2c) <
              *(float *)((long)plStack_108 + 0x2c) + *(float *)((long)plStack_108 + 0x34))) {
            if (*(float *)(plStack_108 + 5) < *(float *)(lVar52 + 0x28) + *(float *)(lVar52 + 0x30))
            {
              bVar23 = *(float *)(lVar52 + 0x28) <
                       *(float *)(plStack_108 + 5) + *(float *)(plStack_108 + 6);
            }
          }
        }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
      }
      bVar22 = false;
      if (((*(int *)(*(long *)((int *)plStack_108[0x59] + 2) +
                     (long)*(int *)plStack_108[0x59] * 0x48 + -0x20) == 0) &&
          (*(int *)(*(long *)(lVar38 + 0x2c8) + 0x20) != 0)) && (!bVar23)) {
        plStack_108[0x59] = *(long *)(lVar38 + 0x2c8);
        bVar22 = true;
      }
    }
    else {
      bVar22 = false;
    }
    lVar52 = lRam00000000020973e0;
    lVar59 = *(long *)(&UNK_000021e0 + lVar20);
    if (lVar59 == 0) {
      lVar59 = *(long *)(lVar20 + 0x1ff8);
      if (uVar43 == 0) goto LAB_00310bcc;
LAB_00310bb8:
      bVar23 = true;
    }
    else {
      if (uVar43 != 0) goto LAB_00310bb8;
LAB_00310bcc:
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      if (lVar59 == 0) {
        bVar23 = false;
      }
      else {
        bVar23 = plStack_108[0x7a] == *(long *)(lVar59 + 0x3d0);
      }
    }
    uVar30 = *(uint *)((long)plStack_108 + 0x14);
    *(undefined1 *)((long)plStack_108 + 0xd1) = 0;
    *(undefined4 *)(plStack_108 + 0x2e) = 1;
    fVar63 = *(float *)(plStack_108 + 0xc);
    fVar78 = *(float *)((long)plStack_108 + 100);
    if (*(char *)((long)plStack_108 + 0xcf) == '\x01') {
      uVar67 = *(undefined4 *)(lVar52 + 0xcd0);
      *(float *)(lVar52 + 0xcd0) = fVar78;
      if (bVar23) {
        lVar59 = 0xb;
        if (*(char *)(lVar52 + 0x1ff0) == '\0') {
          lVar59 = 0xc;
        }
// stripping the watermark breaks the license
      }
      else {
        lVar59 = 0xc;
      }
      lVar59 = lVar52 + lVar59 * 0x10;
      fVar84 = *(float *)(lVar59 + 0xdb0);
      fVar89 = *(float *)(lVar59 + 0xdbc) * *(float *)(lVar52 + 0xc84);
      fVar78 = 1.0;
      if (fVar84 <= 1.0) {
        fVar78 = fVar84;
      }
      fVar64 = 0.5;
      if (0.0 <= fVar84) {
        fVar64 = fVar78 * 255.0 + 0.5;
      }
      uVar47 = *(ulong *)(lVar59 + 0xdb4);
      fVar78 = (float)(uVar47 >> 0x20);
      uVar49 = NEON_fmov(0x3f800000,4);
      uVar49 = uVar47 ^ (uVar47 ^ uVar49) &
                        CONCAT44(-(uint)((float)(uVar49 >> 0x20) < fVar78),
                                 -(uint)((float)uVar49 < (float)uVar47));
      fVar84 = (float)uVar49 * 255.0 + 0.5;
      fVar85 = (float)(uVar49 >> 0x20) * 255.0 + 0.5;
      uVar47 = CONCAT44(fVar85,fVar84) ^
               (CONCAT44(fVar85,fVar84) ^ 0x3f0000003f000000) &
/* WM - unlicensed copy if this notice is missing */
               CONCAT44(-(uint)(fVar78 < 0.0),-(uint)((float)uVar47 < 0.0));
      uVar68 = NEON_ushl(CONCAT44((int)(float)(uVar47 >> 0x20),(int)(float)uVar47),_UNK_01adf148,4);
      fVar78 = 1.0;
      if (fVar89 <= 1.0) {
        fVar78 = fVar89;
      }
      fVar84 = 0.5;
      if (0.0 <= fVar89) {
        fVar84 = fVar78 * 255.0 + 0.5;
      }
      func_0x003002e4(fStack_140,fStack_13c,fStack_138,fStack_134,fVar63,
                      (uint)uVar68 | (int)fVar64 | (uint)((ulong)uVar68 >> 0x20) |
                      (int)fVar84 << 0x18,1);
      *(undefined4 *)(lVar52 + 0xcd0) = uVar67;
    }
    else {
      if ((uVar30 >> 7 & 1) == 0) {
        lVar59 = 2;
        if ((uVar30 & 0x1000000) != 0) {
          lVar59 = 3;
        }
// origin: github.com/pengussy
        if ((uVar30 & 0x6000000) != 0) {
          lVar59 = 4;
        }
        lVar59 = lVar52 + lVar59 * 0x10;
        fVar89 = *(float *)(lVar59 + 0xdb0);
        auVar112 = ZEXT816(0x3f800000);
        fVar84 = auVar112._0_4_;
        uVar91 = 0;
        uVar93 = 0;
        uVar95 = auVar112[2];
        uVar97 = auVar112[3];
        if (fVar89 <= fVar84) {
          uVar91 = SUB41(fVar89,0);
          uVar93 = (undefined1)((uint)fVar89 >> 8);
          uVar95 = (undefined1)((uint)fVar89 >> 0x10);
          uVar97 = (undefined1)((uint)fVar89 >> 0x18);
        }
        fVar64 = 0.5;
        if (0.0 <= fVar89) {
          fVar64 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) * 255.0 + 0.5;
        }
        uVar49 = *(ulong *)(lVar59 + 0xdb4);
        uVar47 = NEON_fmov(0x3f800000,4);
        fVar89 = (float)(uVar49 >> 0x20);
        uVar47 = uVar47 ^ (uVar47 ^ uVar49) &
                          ~CONCAT44(-(uint)((float)(uVar47 >> 0x20) < fVar89),
                                    -(uint)((float)uVar47 < (float)uVar49));
        fVar85 = (float)uVar47 * 255.0 + 0.5;
        fVar90 = (float)(uVar47 >> 0x20) * 255.0 + 0.5;
        uVar47 = CONCAT44(fVar90,fVar85) ^
                 (CONCAT44(fVar90,fVar85) ^ 0x3f0000003f000000) &
// WM - proprietary - see LICENSE - do not sell
                 CONCAT44(-(uint)(fVar89 < 0.0),-(uint)((float)uVar49 < 0.0));
        uVar68 = NEON_ushl(CONCAT44((int)(float)(uVar47 >> 0x20),(int)(float)uVar47),_UNK_01adf148,4
                          );
        fVar85 = *(float *)(lVar59 + 0xdbc) * *(float *)(lVar52 + 0xc84);
        uVar32 = (uint)uVar68 | (int)fVar64 | (uint)((ulong)uVar68 >> 0x20);
        fVar89 = fVar84;
        if (fVar85 <= fVar84) {
          fVar89 = fVar85;
        }
        fVar64 = 0.5;
        if (0.0 <= fVar85) {
          fVar64 = fVar89 * 255.0 + 0.5;
        }
        if (((byte)(&UNK_00001ed0)[lVar52] >> 6 & 1) == 0) {
          uVar46 = uVar32 | (int)fVar64 << 0x18;
          if ((uVar32 & 0xff000000) != 0 || (int)fVar64 << 0x18 != 0) goto LAB_00310e10;
        }
        else {
          fVar89 = *(float *)(&UNK_00001f38 + lVar52);
          if (fVar89 <= fVar84) {
            fVar84 = fVar89;
          }
          fVar64 = 0.5;
          if (0.0 <= fVar89) {
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
            fVar64 = fVar84 * 255.0 + 0.5;
          }
          uVar46 = uVar32 & 0xffffff | (int)fVar64 << 0x18;
          if ((int)fVar64 << 0x18 != 0) {
LAB_00310e10:
            fVar84 = (float)plStack_108[5];
            fVar89 = (float)((ulong)plStack_108[5] >> 0x20);
            uStack_e8 = (long *)CONCAT44(fVar89 + (float)((ulong)plStack_108[6] >> 0x20),
                                         fVar84 + (float)plStack_108[6]);
            uStack_f0 = (long *)CONCAT44(fVar89 + *(float *)(plStack_108 + 0xd),fVar84 + 0.0);
            uVar67 = 0xc0;
            if ((uVar30 & 1) != 0) {
              uVar67 = 0xf0;
            }
            func_0x00323668(fVar63,plStack_108[0x59],&uStack_f0,(ulong)&uStack_f0 | 8,uVar46,uVar67)
            ;
          }
// do not claim this as your own
        }
      }
      if ((uVar30 & 1) == 0) {
        lVar59 = 0xb0;
        if (!bVar23) {
          lVar59 = 0xa0;
        }
        lVar59 = lRam00000000020973e0 + lVar59;
        fVar89 = *(float *)(lVar59 + 0xdb0);
        fVar64 = *(float *)(lVar59 + 0xdbc) * *(float *)(lRam00000000020973e0 + 0xc84);
        fVar84 = 1.0;
        if (fVar89 <= 1.0) {
          fVar84 = fVar89;
        }
        fVar85 = 0.5;
        if (0.0 <= fVar89) {
          fVar85 = fVar84 * 255.0 + 0.5;
        }
        uVar47 = *(ulong *)(lVar59 + 0xdb4);
        fVar84 = (float)(uVar47 >> 0x20);
        uVar49 = NEON_fmov(0x3f800000,4);
        uVar49 = uVar47 ^ (uVar47 ^ uVar49) &
                          CONCAT44(-(uint)((float)(uVar49 >> 0x20) < fVar84),
                                   -(uint)((float)uVar49 < (float)uVar47));
        fVar89 = (float)uVar49 * 255.0 + 0.5;
        fVar90 = (float)(uVar49 >> 0x20) * 255.0 + 0.5;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        uVar47 = CONCAT44(fVar90,fVar89) ^
                 (CONCAT44(fVar90,fVar89) ^ 0x3f0000003f000000) &
                 CONCAT44(-(uint)(fVar84 < 0.0),-(uint)((float)uVar47 < 0.0));
        uVar68 = NEON_ushl(CONCAT44((int)(float)(uVar47 >> 0x20),(int)(float)uVar47),_UNK_01adf148,4
                          );
        fVar84 = 1.0;
        if (fVar64 <= 1.0) {
          fVar84 = fVar64;
        }
        fVar89 = 0.5;
        if (0.0 <= fVar64) {
          fVar89 = fVar84 * 255.0 + 0.5;
        }
        func_0x00323668(fVar63,plVar33[0x59],&fStack_140,&fStack_138,
                        (uint)uVar68 | (int)fVar85 | (uint)((ulong)uVar68 >> 0x20) |
                        (int)fVar89 << 0x18,0x30);
      }
      if ((uVar30 >> 10 & 1) != 0) {
        fVar64 = (float)((ulong)plVar33[5] >> 0x20);
        fVar84 = fVar64 + *(float *)(plVar33 + 0xd);
        fVar89 = (float)plVar33[5];
        fVar85 = fVar89 + (float)plVar33[6];
        fVar90 = fVar64 + (float)((ulong)plVar33[6] >> 0x20);
        uVar47 = CONCAT44(fVar90,fVar85);
        fVar79 = fVar84 + *(float *)((long)plVar33 + 0x6c);
        if (fVar84 < fVar64) {
          fVar84 = fVar64;
        }
        uStack_f0 = (long *)CONCAT44(fVar84,fVar89);
        uStack_e8 = (long *)(uVar47 ^ (uVar47 ^ CONCAT44(fVar79,fVar89 + *(float *)(plVar33 + 7))) &
                                      CONCAT44(-(uint)(fVar79 < fVar90),
                                               -(uint)(fVar89 + *(float *)(plVar33 + 7) < fVar85)));
        fVar84 = *(float *)(lRam00000000020973e0 + 0xe80);
        fVar89 = *(float *)(lRam00000000020973e0 + 0xe84);
        fVar64 = *(float *)(lRam00000000020973e0 + 0xe88);
        fVar85 = *(float *)(lRam00000000020973e0 + 0xe8c) * *(float *)(lRam00000000020973e0 + 0xc84)
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
        ;
        uVar91 = 0;
        uVar93 = 0;
        uVar95 = 0x80;
        uVar97 = 0x3f;
        if (fVar84 <= 1.0) {
          uVar91 = SUB41(fVar84,0);
          uVar93 = (undefined1)((uint)fVar84 >> 8);
          uVar95 = (undefined1)((uint)fVar84 >> 0x10);
          uVar97 = (undefined1)((uint)fVar84 >> 0x18);
        }
        fVar90 = 0.5;
        if (0.0 <= fVar84) {
          fVar90 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) * 255.0 + 0.5;
        }
        fVar84 = 1.0;
        if (fVar89 <= 1.0) {
          fVar84 = fVar89;
        }
        fVar79 = 0.5;
        if (0.0 <= fVar89) {
          fVar79 = fVar84 * 255.0 + 0.5;
        }
        fVar84 = 1.0;
        if (fVar64 <= 1.0) {
          fVar84 = fVar64;
        }
        fVar89 = 0.5;
        if (0.0 <= fVar64) {
          fVar89 = fVar84 * 255.0 + 0.5;
        }
        fVar84 = 1.0;
// more drops soon - github.com/pengussy
        if (fVar85 <= 1.0) {
          fVar84 = fVar85;
        }
        fVar64 = 0.5;
        if (0.0 <= fVar85) {
          fVar64 = fVar84 * 255.0 + 0.5;
        }
        func_0x00323668(plVar33[0x59],&uStack_f0,&uStack_e8,
                        (int)fVar90 | (int)fVar79 << 8 | (int)fVar89 << 0x10 | (int)fVar64 << 0x18,
                        0x30);
        if ((0.0 < *(float *)(lVar52 + 0xcd0)) &&
           (uStack_e8._4_4_ < *(float *)((long)plVar33 + 0x2c) + *(float *)((long)plVar33 + 0x34)))
        {
          fVar84 = *(float *)(lRam00000000020973e0 + 0xe00);
          fVar89 = *(float *)(lRam00000000020973e0 + 0xe04);
          fVar90 = *(float *)(lRam00000000020973e0 + 0xe08);
          fVar64 = 1.0;
          fVar85 = fVar64;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          if (fVar84 <= 1.0) {
            fVar85 = fVar84;
          }
          fVar79 = 0.5;
          if (0.0 <= fVar84) {
            fVar79 = fVar85 * 255.0 + 0.5;
          }
          fVar84 = fVar64;
          if (fVar89 <= 1.0) {
            fVar84 = fVar89;
          }
          fVar84 = fVar84 * 255.0 + 0.5;
          uVar91 = 0;
          uVar93 = 0;
          uVar95 = 0;
          uVar97 = 0x3f;
          if (0.0 <= fVar89) {
            uVar91 = SUB41(fVar84,0);
            uVar93 = (undefined1)((uint)fVar84 >> 8);
            uVar95 = (undefined1)((uint)fVar84 >> 0x10);
            uVar97 = (undefined1)((uint)fVar84 >> 0x18);
          }
          fVar84 = *(float *)(lRam00000000020973e0 + 0xe0c) *
                   *(float *)(lRam00000000020973e0 + 0xc84);
          fVar89 = fVar64;
          if (fVar90 <= 1.0) {
            fVar89 = fVar90;
          }
          fVar85 = 0.5;
          if (0.0 <= fVar90) {
/* stripping the watermark breaks the license - github.com/pengussy */
            fVar85 = fVar89 * 255.0 + 0.5;
          }
          if (fVar84 <= 1.0) {
            fVar64 = fVar84;
          }
          fVar89 = 0.5;
          if (0.0 <= fVar84) {
            fVar89 = fVar64 * 255.0 + 0.5;
          }
          func_0x003232b4((float)uStack_f0 + fVar78 * 0.5,(float)uStack_e8 - fVar78 * 0.5,
                          plVar33[0x59],
                          (int)fVar79 |
                          (int)(float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) << 8
                          | (int)fVar85 << 0x10 | (int)fVar89 << 0x18);
        }
      }
      if ((char)plVar33[0x19] == '\x01') {
        func_0x0033ef98(0);
      }
      if (*(char *)((long)plVar33 + 0xc9) == '\x01') {
        func_0x0033ef98(1);
      }
      if ((uVar31 != 0) && ((bVar28 & (uVar30 & 2) == 0) != 0)) {
        fVar84 = (float)(int)fVar86;
        fVar89 = (float)(int)(fVar78 * 0.5 + 0.5);
        fVar78 = fVar63 + fVar89;
        uVar47 = uStack_c0 & 0xffffffff;
        if ((uStack_c0 & 0xff000000) != 0) {
          fVar64 = (float)plVar33[5];
          fVar85 = (float)((ulong)plVar33[5] >> 0x20);
          fVar64 = fVar64 + ((fVar64 + (float)plVar33[6]) - fVar64);
          fVar85 = fVar85 + ((fVar85 + (float)((ulong)plVar33[6] >> 0x20)) - fVar85);
          uStack_f0._0_4_ = fVar64 - fVar84;
          uStack_f0._4_4_ = fVar85 - fVar89;
          func_0x00304274(plVar33[0x59] + 0x50,&uStack_f0);
          plVar34 = plVar33 + 0x59;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          lVar52 = *plVar34;
          uStack_f0 = (long *)CONCAT44(uStack_f0._4_4_,fVar64 - fVar89);
          *(float *)((ulong)&uStack_f0 | 4) = fVar85 - fVar84;
          func_0x00304274(lVar52 + 0x50,&uStack_f0);
          uStack_f0 = (long *)CONCAT44(fVar85 - fVar78,fVar64 - fVar78);
          func_0x00322574(fVar63,*plVar34,&uStack_f0,0,3);
          lVar52 = *plVar34;
          func_0x003219c4(lVar52,*(undefined8 *)(lVar52 + 0x58),*(undefined4 *)(lVar52 + 0x50),
                          uVar47);
          *(undefined4 *)(lVar52 + 0x50) = 0;
        }
        if (uVar31 != 1) {
          lVar52 = (ulong)uVar31 - 1;
          puVar54 = (undefined4 *)&UNK_01adf6e4;
          puVar60 = (uint *)((ulong)&uStack_c0 | 4);
          do {
            uVar30 = *puVar60;
            if ((uVar30 & 0xff000000) != 0) {
              fVar64 = (float)plVar33[5];
              fVar85 = (float)((ulong)plVar33[5] >> 0x20);
              fVar64 = fVar64 + (float)*(undefined8 *)(puVar54 + -5) *
                                ((fVar64 + (float)plVar33[6]) - fVar64);
              fVar85 = fVar85 + (float)((ulong)*(undefined8 *)(puVar54 + -5) >> 0x20) *
                                ((fVar85 + (float)((ulong)plVar33[6] >> 0x20)) - fVar85);
/* if you paid for this, you were scammed */
              fVar90 = (float)*(undefined8 *)(puVar54 + -3);
              fVar86 = (float)((ulong)*(undefined8 *)(puVar54 + -3) >> 0x20);
              uStack_f0 = (long *)CONCAT44(fVar85 + fVar86 * fVar84,fVar64 + fVar90 * fVar89);
              func_0x00304274(plVar33[0x59] + 0x50,&uStack_f0);
              plVar34 = plVar33 + 0x59;
              uStack_f0 = (long *)CONCAT44(fVar85 + fVar86 * fVar89,fVar64 + fVar90 * fVar84);
              func_0x00304274(*plVar34 + 0x50,&uStack_f0);
              uStack_f0 = (long *)CONCAT44(fVar85 + fVar86 * fVar78,fVar64 + fVar90 * fVar78);
              func_0x00322574(fVar63,*plVar34,&uStack_f0,puVar54[-1],*puVar54);
              lVar59 = *plVar34;
              func_0x003219c4(lVar59,*(undefined8 *)(lVar59 + 0x58),*(undefined4 *)(lVar59 + 0x50),
                              uVar30);
              *(undefined4 *)(lVar59 + 0x50) = 0;
            }
            puVar54 = puVar54 + 6;
            lVar52 = lVar52 + -1;
            puVar60 = puVar60 + 1;
          } while (lVar52 != 0);
        }
      }
      lVar52 = lRam00000000020973e0;
      if ((bVar28 & 1) != 0) {
        fVar64 = *(float *)((long)plVar33 + 100);
        fVar63 = *(float *)(lRam00000000020973e0 + 0xe00);
        fVar78 = *(float *)(lRam00000000020973e0 + 0xe04);
        fVar84 = *(float *)(lRam00000000020973e0 + 0xe08);
/*  if you paid for this, you were scammed  */
        fVar89 = *(float *)(lRam00000000020973e0 + 0xe0c) * *(float *)(lRam00000000020973e0 + 0xc84)
        ;
        uVar91 = 0;
        uVar93 = 0;
        uVar95 = 0x80;
        uVar97 = 0x3f;
        if (fVar63 <= 1.0) {
          uVar91 = SUB41(fVar63,0);
          uVar93 = (undefined1)((uint)fVar63 >> 8);
          uVar95 = (undefined1)((uint)fVar63 >> 0x10);
          uVar97 = (undefined1)((uint)fVar63 >> 0x18);
        }
        fVar85 = 0.5;
        if (0.0 <= fVar63) {
          fVar85 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) * 255.0 + 0.5;
        }
        fVar63 = 1.0;
        if (fVar78 <= 1.0) {
          fVar63 = fVar78;
        }
        fVar90 = 0.5;
        if (0.0 <= fVar78) {
          fVar90 = fVar63 * 255.0 + 0.5;
        }
        fVar63 = 1.0;
        if (fVar84 <= 1.0) {
          fVar63 = fVar84;
        }
        fVar78 = 0.5;
        if (0.0 <= fVar84) {
          fVar78 = fVar63 * 255.0 + 0.5;
        }
        fVar63 = 1.0;
/* wm:proprietary - see LICENSE - do not sell */
        if (fVar89 <= 1.0) {
          fVar63 = fVar89;
        }
        fVar84 = 0.5;
        if (0.0 <= fVar89) {
          fVar84 = fVar63 * 255.0 + 0.5;
        }
        uVar30 = (int)fVar85 | (int)fVar90 << 8 | (int)fVar78 << 0x10 | (int)fVar84 << 0x18;
        if (0.0 < fVar64) {
          if (*(char *)((long)plVar33 + 0x14) < '\0') {
            uVar32 = *(uint *)(plVar33 + 3);
            if ((uVar32 >> 2 & 1) != 0) {
              fVar84 = *(float *)(plVar33 + 0xc);
              fVar63 = *(float *)(plVar33 + 5) + *(float *)(plVar33 + 6) + -1.0;
              fVar78 = fVar84 + *(float *)((long)plVar33 + 0x2c);
              fVar89 = ((*(float *)((long)plVar33 + 0x2c) + *(float *)((long)plVar33 + 0x34) + -1.0)
                       - fVar84) - fVar78;
              fVar63 = (fVar63 + (fVar63 - fVar63) + 0.5) - fVar84;
              uStack_f0 = (long *)CONCAT44(fVar84 * 0.0 + fVar78 + fVar89 * 0.0 + 0.5,fVar63);
              func_0x00322648(fVar84,0xbf490fdb,0,plVar33[0x59],&uStack_f0,0);
              uStack_f0 = (long *)CONCAT44(fVar84 * 0.0 + fVar78 + fVar89 + 0.5,fVar63);
/* wm:reversing this took months of machine time */
              func_0x00322648(fVar84,0,0x3f490fdb,plVar33[0x59],&uStack_f0,0);
              lVar59 = plVar33[0x59];
              func_0x00321160(lVar59,*(undefined8 *)(lVar59 + 0x58),*(undefined4 *)(lVar59 + 0x50),
                              uVar30,0);
              *(undefined4 *)(lVar59 + 0x50) = 0;
              uVar32 = *(uint *)(plVar33 + 3);
            }
            if ((uVar32 >> 3 & 1) != 0) {
              fVar84 = *(float *)(plVar33 + 0xc);
              fVar63 = *(float *)((long)plVar33 + 0x2c) + *(float *)((long)plVar33 + 0x34) + -1.0;
              fVar78 = fVar84 + *(float *)(plVar33 + 5);
              fVar89 = ((*(float *)(plVar33 + 5) + *(float *)(plVar33 + 6) + -1.0) - fVar84) -
                       fVar78;
              fVar63 = (fVar63 + (fVar63 - fVar63) + 0.5) - fVar84;
              uStack_f0 = (long *)CONCAT44(fVar63,fVar84 * 0.0 + fVar78 + fVar89 + 0.5);
              func_0x00322648(fVar84,0x3f490fdb,0x3fc90fdb,plVar33[0x59],&uStack_f0,0);
              uStack_f0 = (long *)CONCAT44(fVar63,fVar84 * 0.0 + fVar78 + fVar89 * 0.0 + 0.5);
              func_0x00322648(fVar84,0x3fc90fdb,0x4016cbe4,plVar33[0x59],&uStack_f0,0);
              lVar59 = plVar33[0x59];
              func_0x00321160(lVar59,*(undefined8 *)(lVar59 + 0x58),*(undefined4 *)(lVar59 + 0x50),
                              uVar30,0);
              *(undefined4 *)(lVar59 + 0x50) = 0;
            }
          }
          else {
            lVar59 = plVar33[5];
            uStack_f0 = (long *)CONCAT44((float)((ulong)lVar59 >> 0x20) +
                                         (float)((ulong)plVar33[6] >> 0x20),
                                         (float)lVar59 + (float)plVar33[6]);
            func_0x003235ac((int)plVar33[0xc],fVar64,plVar33[0x59],plVar33 + 5,&uStack_f0,uVar30,0);
          }
        }
/* donate: donate/README.md - github.com/pengussy */
        bVar28 = *(byte *)((long)plVar33 + 0xd9);
        if ((*(byte *)(plVar33 + 0x1b) != 0xff) || (bVar28 != 0xff)) {
          bVar61 = *(byte *)(plVar33 + 0x1b);
          if (bVar28 != 0xff) {
            bVar61 = bVar28;
          }
          lVar59 = 0x1d0;
          if (bVar28 != 0xff) {
            lVar59 = 0x1e0;
          }
          lVar59 = lRam00000000020973e0 + lVar59;
          fVar63 = *(float *)(lVar59 + 0xdb0);
          fVar78 = *(float *)(lVar59 + 0xdb4);
          fVar84 = *(float *)(lVar59 + 0xdb8);
          fVar89 = *(float *)(lVar59 + 0xdbc) * *(float *)(lRam00000000020973e0 + 0xc84);
          uVar91 = 0;
          uVar93 = 0;
          uVar95 = 0x80;
          uVar97 = 0x3f;
          if (fVar63 <= 1.0) {
            uVar91 = SUB41(fVar63,0);
            uVar93 = (undefined1)((uint)fVar63 >> 8);
            uVar95 = (undefined1)((uint)fVar63 >> 0x10);
            uVar97 = (undefined1)((uint)fVar63 >> 0x18);
          }
          fVar85 = 0.5;
          if (0.0 <= fVar63) {
            fVar85 = (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) * 255.0 + 0.5;
          }
          fVar63 = 1.0;
          if (fVar78 <= 1.0) {
            fVar63 = fVar78;
          }
          fVar63 = fVar63 * 255.0 + 0.5;
// proprietary - see LICENSE - do not sell
          uVar91 = 0;
          uVar93 = 0;
          uVar95 = 0;
          uVar97 = 0x3f;
          if (0.0 <= fVar78) {
            uVar91 = SUB41(fVar63,0);
            uVar93 = (undefined1)((uint)fVar63 >> 8);
            uVar95 = (undefined1)((uint)fVar63 >> 0x10);
            uVar97 = (undefined1)((uint)fVar63 >> 0x18);
          }
          fVar63 = 1.0;
          if (fVar84 <= 1.0) {
            fVar63 = fVar84;
          }
          fVar78 = 0.5;
          if (0.0 <= fVar84) {
            fVar78 = fVar63 * 255.0 + 0.5;
          }
          fVar63 = 1.0;
          if (fVar89 <= 1.0) {
            fVar63 = fVar89;
          }
          fVar84 = 0.5;
          if (0.0 <= fVar89) {
            fVar84 = fVar63 * 255.0 + 0.5;
          }
          fVar106 = *(float *)(plVar33 + 0xc);
          fVar90 = *(float *)(plVar33 + 5);
          fVar80 = *(float *)((long)plVar33 + 0x2c);
          fVar86 = fVar90 + *(float *)(plVar33 + 6) + -1.0;
          fVar79 = fVar80 + *(float *)((long)plVar33 + 0x34) + -1.0;
          fVar63 = fVar106 + fVar90;
          uVar92 = SUB41(fVar63,0);
          uVar94 = (undefined1)((uint)fVar63 >> 8);
          uVar96 = (undefined1)((uint)fVar63 >> 0x10);
          uVar98 = (undefined1)((uint)fVar63 >> 0x18);
/* unlicensed copy if this notice is missing */
          fVar89 = fVar86 - fVar106;
          uVar99 = SUB41(fVar89,0);
          uVar100 = (undefined1)((uint)fVar89 >> 8);
          uVar101 = (undefined1)((uint)fVar89 >> 0x10);
          uVar102 = (undefined1)((uint)fVar89 >> 0x18);
          fVar103 = fVar79;
          if (bVar61 != 3) {
            fVar103 = 0.0;
            fVar89 = 0.0;
            fVar63 = 0.0;
          }
          fVar111 = fVar80;
          fVar81 = fVar80 + 0.0;
          if (bVar61 != 2) {
            uVar99 = SUB41(fVar89,0);
            uVar100 = (undefined1)((uint)fVar89 >> 8);
            uVar101 = (undefined1)((uint)fVar89 >> 0x10);
            uVar102 = (undefined1)((uint)fVar89 >> 0x18);
            uVar92 = SUB41(fVar63,0);
            uVar94 = (undefined1)((uint)fVar63 >> 8);
            uVar96 = (undefined1)((uint)fVar63 >> 0x10);
            uVar98 = (undefined1)((uint)fVar63 >> 0x18);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            fVar111 = fVar103;
            fVar81 = fVar103;
          }
          fVar79 = fVar79 - fVar106;
          fVar89 = fVar106 + fVar80;
          fVar63 = fVar79;
          if (bVar61 != 1) {
            fVar63 = 0.0;
            fVar86 = 0.0;
            fVar89 = 0.0;
          }
          fVar103 = fVar106 + fVar80;
          fVar80 = fVar90 + 0.0;
          if (bVar61 != 0) {
            fVar90 = fVar86;
            fVar103 = fVar89;
            fVar80 = fVar86;
            fVar79 = fVar63;
          }
          if (bVar61 < 2) {
            fVar81 = fVar79;
          }
          fVar63 = (float)CONCAT13(uVar102,CONCAT12(uVar101,CONCAT11(uVar100,uVar99)));
          if (bVar61 < 2) {
            fVar111 = fVar103;
            fVar63 = fVar80;
          }
          fVar89 = (float)CONCAT13(uVar98,CONCAT12(uVar96,CONCAT11(uVar94,uVar92)));
          if (bVar61 < 2) {
            fVar89 = fVar90;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
          }
          lVar59 = (long)(int)(char)bVar61 * 0x1c;
          fVar90 = *(float *)(&UNK_01adf718 + lVar59);
          fVar86 = *(float *)(&UNK_01adf71c + lVar59);
          uStack_f0 = (long *)CONCAT44(fVar111 + *(float *)(&UNK_01adf724 + lVar59) *
                                                 (fVar81 - fVar111) + 0.5 + fVar106 * fVar86,
                                       fVar89 + *(float *)(&UNK_01adf720 + lVar59) *
                                                (fVar63 - fVar89) + 0.5 + fVar106 * fVar90);
          fVar79 = *(float *)(&UNK_01adf730 + lVar59);
          func_0x00322648(fVar106,fVar79 + -0.7853982,fVar79,plVar33[0x59],&uStack_f0,0);
          uStack_f0 = (long *)CONCAT44(fVar106 * fVar86 +
                                       fVar111 + *(float *)(&UNK_01adf72c + lVar59) *
                                                 (fVar81 - fVar111) + 0.5,
                                       fVar106 * fVar90 +
                                       fVar89 + *(float *)(&UNK_01adf728 + lVar59) *
                                                (fVar63 - fVar89) + 0.5);
          func_0x00322648(fVar106,fVar79,fVar79 + 0.7853982,plVar33[0x59],&uStack_f0,0);
          lVar59 = plVar33[0x59];
          func_0x00321160(lVar59,*(undefined8 *)(lVar59 + 0x58),*(undefined4 *)(lVar59 + 0x50),
                          (int)fVar85 |
                          (int)(float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,uVar91))) << 8
                          | (int)fVar78 << 0x10 | (int)fVar84 << 0x18,0);
          *(undefined4 *)(lVar59 + 0x50) = 0;
        }
        if ((0.0 < *(float *)(lVar52 + 0xcd0)) && ((*(byte *)((long)plVar33 + 0x14) & 1) == 0)) {
          func_0x003232b4(*(float *)(plVar33 + 5) + fVar64 * 0.5,
/* do not claim this as your own */
                          (*(float *)(plVar33 + 5) + *(float *)(plVar33 + 6)) - fVar64 * 0.5,
                          *(float *)((long)plVar33 + 0x2c) + *(float *)(plVar33 + 0xd) + -1.0,
                          plVar33[0x59],uVar30);
        }
      }
    }
    *(undefined4 *)(plVar33 + 0x2e) = 0;
    if (bVar22) {
      plStack_108[0x59] = (long)(plStack_108 + 0x5a);
      fVar63 = *(float *)(plStack_108 + 10);
      uVar91 = SUB41(fVar63,0);
      uVar93 = (undefined1)((uint)fVar63 >> 8);
      uVar95 = (undefined1)((uint)fVar63 >> 0x10);
      uVar97 = (undefined1)((uint)fVar63 >> 0x18);
      if (fVar63 == 0.0) goto LAB_003118e0;
LAB_00311974:
      fVar78 = *(float *)((long)plStack_108 + 0x54);
      if (fVar78 != 0.0) goto LAB_00311980;
/* no support for modified copies */
LAB_0031192c:
      fVar84 = 0.0;
      if ((uVar29 >> 3 & 1) == 0) {
        fVar84 = *(float *)((long)plStack_108 + 0x44);
      }
      fVar64 = *(float *)((long)plStack_108 + 0x5c);
      fVar89 = *(float *)((long)plStack_108 + 0x74);
      fVar85 = (*(float *)((long)plStack_108 + 0x34) + fVar64 * -2.0) -
               (fVar89 + *(float *)((long)plStack_108 + 0x7c));
      if (fVar84 < fVar85) {
        fVar84 = fVar85;
      }
    }
    else {
      fVar63 = *(float *)(plStack_108 + 10);
      uVar91 = SUB41(fVar63,0);
      uVar93 = (undefined1)((uint)fVar63 >> 8);
      uVar95 = (undefined1)((uint)fVar63 >> 0x10);
      uVar97 = (undefined1)((uint)fVar63 >> 0x18);
      if (fVar63 != 0.0) goto LAB_00311974;
LAB_003118e0:
      fVar78 = 0.0;
      if ((uVar29 & 0x808) == 0x800) {
        fVar78 = *(float *)(plStack_108 + 8);
      }
      fVar84 = (*(float *)(plStack_108 + 6) + *(float *)(plStack_108 + 0xb) * -2.0) -
               (*(float *)(plStack_108 + 0xe) + *(float *)(plStack_108 + 0xf));
      uVar91 = SUB41(fVar78,0);
      uVar93 = (undefined1)((uint)fVar78 >> 8);
      uVar95 = (undefined1)((uint)fVar78 >> 0x10);
      uVar97 = (undefined1)((uint)fVar78 >> 0x18);
      if (fVar78 < fVar84) {
        uVar91 = SUB41(fVar84,0);
        uVar93 = (undefined1)((uint)fVar84 >> 8);
        uVar95 = (undefined1)((uint)fVar84 >> 0x10);
        uVar97 = (undefined1)((uint)fVar84 >> 0x18);
      }
// WM - more drops soon - github.com/pengussy
      fVar78 = *(float *)((long)plStack_108 + 0x54);
      if (fVar78 == 0.0) goto LAB_0031192c;
LAB_00311980:
      fVar64 = *(float *)((long)plStack_108 + 0x5c);
      fVar89 = *(float *)((long)plStack_108 + 0x74);
      fVar84 = fVar78;
    }
    fVar79 = *(float *)(plStack_108 + 0xb);
    fVar90 = (float)plStack_108[0x13];
    fVar86 = (float)((ulong)plStack_108[0x13] >> 0x20);
    fVar85 = *(float *)((long)plStack_108 + 100);
    uVar47 = CONCAT44(fVar64,fVar79) ^
             (CONCAT44(fVar64,fVar79) ^ CONCAT44(fVar85,fVar85)) &
             ~CONCAT44(-(uint)(fVar85 <= fVar64),-(uint)(fVar85 <= fVar79));
    lVar52 = NEON_scvtf(CONCAT44((int)(((float)((ulong)plStack_108[0x45] >> 0x20) - fVar86) +
                                      (float)(uVar47 >> 0x20)),
                                 (int)(((float)plStack_108[0x45] - fVar90) + (float)uVar47)),4);
    plStack_108[0x49] = lVar52;
    fVar84 = fVar84 + (float)((ulong)lVar52 >> 0x20);
    plStack_108[0x4a] =
         CONCAT17((char)((uint)fVar84 >> 0x18),
                  CONCAT16((char)((uint)fVar84 >> 0x10),
                           CONCAT15((char)((uint)fVar84 >> 8),
                                    CONCAT14(SUB41(fVar84,0),
                                             (float)CONCAT13(uVar97,CONCAT12(uVar95,CONCAT11(uVar93,
                                                  uVar91))) + (float)lVar52))));
    plStack_108[0x4c] = plStack_108[0x4a];
    plStack_108[0x4b] = plStack_108[0x49];
    fVar84 = *(float *)(plStack_108 + 0xe);
    fVar103 = fVar84 + fVar79 + (*(float *)(plStack_108 + 5) - fVar90);
    *(float *)(plStack_108 + 0x4f) = fVar103;
    fVar85 = fVar89 + fVar64 + (*(float *)((long)plStack_108 + 0x2c) - fVar86);
    *(float *)((long)plStack_108 + 0x27c) = fVar85;
    if (fVar63 == 0.0) {
      *(float *)(plStack_108 + 0x50) =
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
           fVar103 + ((*(float *)(plStack_108 + 6) + fVar79 * -2.0) -
                     (fVar84 + *(float *)(plStack_108 + 0xf)));
    }
    else {
      *(float *)(plStack_108 + 0x50) = fVar103 + fVar63;
    }
    if (fVar78 == 0.0) {
      fVar78 = (*(float *)((long)plStack_108 + 0x34) + fVar64 * -2.0) -
               (fVar89 + *(float *)((long)plStack_108 + 0x7c));
    }
    *(float *)((long)plStack_108 + 0x284) = fVar85 + fVar78;
    *(float *)((long)plStack_108 + 0x15c) = (fVar79 + fVar84) - fVar90;
    plStack_108[0x2c] = 0;
    fVar63 = ((fVar79 + *(float *)(plStack_108 + 5)) - fVar90) + fVar84 + 0.0;
    fVar89 = ((fVar64 + *(float *)((long)plStack_108 + 0x2c)) - fVar86) + fVar89;
    *(float *)(plStack_108 + 0x25) = fVar63;
    *(float *)((long)plStack_108 + 300) = fVar89;
    *(float *)(plStack_108 + 0x2d) = fVar63 - fVar63;
    *(float *)((long)plStack_108 + 0x16c) = fVar89 - fVar89;
    lVar52 = plStack_108[0x25];
    plStack_108[0x23] = lVar52;
    plStack_108[0x24] = lVar52;
    plStack_108[0x26] = lVar52;
    plStack_108[0x27] = lVar52;
    *(undefined4 *)(plStack_108 + 0x2e) = 0;
    plStack_108[0x29] = 0;
    plStack_108[0x2a] = 0;
    plStack_108[0x28] = 0;
    *(undefined2 *)(plStack_108 + 0x2b) = 0;
    *(undefined2 *)((long)plStack_108 + 0x174) = *(undefined2 *)((long)plStack_108 + 0x176);
/*  no support for modified copies  */
    *(undefined4 *)((long)plStack_108 + 0x176) = 0x10000;
    *(bool *)((long)plStack_108 + 0x17a) = 0.0 < *(float *)((long)plStack_108 + 0xa4);
    *(undefined1 *)((long)plStack_108 + 0x17b) = 0;
    func_0x00342634((long)plStack_108 + 0x184,uStack_168);
    *(undefined4 *)(plStack_108 + 0x35) = 0;
    plStack_108[0x34] = 0;
    func_0x00314694(plStack_108 + 0x36,0);
    plStack_108[0x38] = (long)(plStack_108 + 0x53);
    plStack_108[0x39] = 0;
    uVar67 = 1;
    *(undefined4 *)((long)plStack_108 + 0x1d4) = 1;
    if (lVar38 != 0) {
      uVar67 = *(undefined4 *)(lVar38 + 0x1d4);
    }
    *(undefined4 *)(plStack_108 + 0x3b) = uVar67;
    fVar63 = *(float *)(plStack_108 + 6);
    if ((uVar29 >> 0x18 & 1) == 0) {
      if ((0.0 < fVar63) && ((uVar29 >> 6 & 1) == 0)) goto LAB_00311bb8;
LAB_00311b68:
      fVar63 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                         lVar20);
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
      fVar78 = 16.0;
    }
    else {
      if ((fVar63 <= 0.0) || ((*(byte *)(plStack_108 + 3) & 0x50) != 0)) goto LAB_00311b68;
LAB_00311bb8:
      fVar78 = 0.65;
    }
    *(float *)((long)plStack_108 + 0x1ec) = (float)(int)(fVar63 * fVar78);
    *(float *)(plStack_108 + 0x3d) = (float)(int)(fVar63 * fVar78);
    func_0x0030d8ac(plStack_108 + 0x3f,0);
    *(undefined4 *)(plStack_108 + 0x3e) = 0xbf800000;
    func_0x0030d8ac(plStack_108 + 0x41,0);
    if ((uVar29 >> 0x1b & 1) != 0) {
      fVar78 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                         lRam00000000020973e0 + 0x10);
      fVar63 = 1.0;
      if (fVar78 <= 1.0) {
        fVar63 = fVar78;
      }
      fVar84 = 0.5;
      if (0.0 <= fVar78) {
        fVar84 = fVar63 * 255.0 + 0.5;
      }
      fVar78 = *(float *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                         lRam00000000020973e0 + 0x14);
      fVar63 = 1.0;
      if (fVar78 <= 1.0) {
        fVar63 = fVar78;
      }
      fVar89 = 0.5;
      if (0.0 <= fVar78) {
        fVar89 = fVar63 * 255.0 + 0.5;
      }
      uVar49 = *(ulong *)("/System/Library/Frameworks/MetalKit.framework/Versions/A/MetalKit" +
                         lRam00000000020973e0 + 0x18);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
      fVar63 = (float)(uVar49 >> 0x20);
      uVar47 = NEON_fmov(0x3f800000,4);
      uVar47 = uVar49 ^ (uVar49 ^ uVar47) &
                        CONCAT44(-(uint)((float)(uVar47 >> 0x20) < fVar63),
                                 -(uint)((float)uVar47 < (float)uVar49));
      fVar78 = (float)uVar47 * 255.0 + 0.5;
      fVar64 = (float)(uVar47 >> 0x20) * 255.0 + 0.5;
      uVar47 = CONCAT44(fVar64,fVar78) ^
               (CONCAT44(fVar64,fVar78) ^ 0x3f0000003f000000) &
               CONCAT44(-(uint)(fVar63 < 0.0),-(uint)((float)uVar49 < 0.0));
      uVar68 = NEON_ushl(CONCAT44((int)(float)(uVar47 >> 0x20),(int)(float)uVar47),_UNK_01adf150,4);
      *(uint *)((long)plStack_108 + 0x1dc) =
           (int)fVar84 | (int)fVar89 << 8 | (uint)uVar68 | (uint)((ulong)uVar68 >> 0x20);
    }
    if ('\0' < (char)plStack_108[0x1d]) {
      *(char *)(plStack_108 + 0x1d) = (char)plStack_108[0x1d] + -1;
    }
    if ('\0' < *(char *)((long)plStack_108 + 0xe9)) {
      *(char *)((long)plStack_108 + 0xe9) = *(char *)((long)plStack_108 + 0xe9) + -1;
    }
    if ((uVar43 != 0) &&
       (func_0x00306d20(plStack_108,2), plStack_108 == *(long **)(lVar20 + 0x1ff8))) {
      func_0x003151b8(plStack_108,0);
/*  donate: donate/README.md  */
    }
    if ((((*(char *)(lVar20 + 0x80) == '\x01') && (*(long *)(lVar20 + 0x1ff8) != 0)) &&
        (*(long **)(*(long *)(lVar20 + 0x1ff8) + 0x3c0) == plStack_108)) &&
       (*(int *)(&UNK_0000151c + lVar20) == 0)) {
      iVar24 = func_0x0030e548("/lib/libobjc.A.dylib",0,0);
      lVar52 = lRam00000000020973e0;
      if ((iVar24 != 0) && (((&UNK_000027e0)[lRam00000000020973e0] & 1) == 0)) {
        lVar59 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
        (&UNK_0000151a)[lRam00000000020973e0] = 1;
        *(undefined2 *)(&UNK_000027e0 + lVar52) = 0x101;
        *(undefined4 *)(&UNK_000027e4 + lVar52) = 8;
        *(undefined8 *)(&UNK_00002810 + lVar52) = 0;
        *(undefined8 *)(&UNK_00002808 + lVar52) = 0;
        *(long *)(&UNK_000027e8 + lVar52) = lVar59;
        *(undefined4 *)(&UNK_0000281c + lVar52) = *(undefined4 *)(lVar59 + 0x1a0);
        *(undefined4 *)(&UNK_00002820 + lVar52) = 0;
        *(undefined4 *)(&UNK_00002818 + lVar52) = 0x7f7fffff;
      }
    }
    plVar33 = plStack_108;
    fVar78 = fStack_134;
    fVar63 = fStack_13c;
    lVar52 = lRam00000000020973e0;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    if ((uVar29 & 1) == 0) {
      fVar84 = *(float *)((long)plStack_108 + 100);
      uVar30 = *(uint *)((long)plStack_108 + 0x14);
      if ((uVar30 >> 5 & 1) == 0) {
        bVar23 = *(int *)(lRam00000000020973e0 + 0xcb0) != -1;
      }
      else {
        bVar23 = false;
      }
      fVar85 = fStack_138 - fVar84;
      uVar32 = *(uint *)(&UNK_00001e40 + lRam00000000020973e0);
      *(uint *)(&UNK_00001e40 + lRam00000000020973e0) = uVar32 | 4;
      *(undefined4 *)(plStack_108 + 0x2e) = 1;
      fVar64 = *(float *)(lVar52 + 0xcc4);
      fVar90 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                         lVar52);
      uStack_d0 = 0;
      uStack_c8 = 0;
      fVar89 = fVar64;
      if (param_2 != (undefined1 *)0x0) {
        uStack_c8 = CONCAT44(fStack_13c + *(float *)(lVar52 + 0xcc8),(fVar85 - fVar64) - fVar90);
        fVar89 = fVar64 + fVar90 + *(float *)(lVar52 + 0xcdc);
      }
      fVar84 = fStack_140 + fVar84;
      if (bVar23) {
        if (*(int *)(lVar52 + 0xcb0) == 0) {
          uStack_d0 = CONCAT44(fStack_13c + *(float *)(lVar52 + 0xcc8),fVar84 + fVar64);
          fVar64 = fVar64 + fVar90 + *(float *)(lVar52 + 0xcdc);
        }
        else if (*(int *)(lVar52 + 0xcb0) == 1) {
          uStack_d0 = CONCAT44(fStack_13c + *(float *)(lVar52 + 0xcc8),(fVar85 - fVar89) - fVar90);
          fVar89 = fVar89 + fVar90 + *(float *)(lVar52 + 0xcdc);
        }
/* wm:unlicensed copy if this notice is missing */
        uVar31 = ~*(uint *)(plStack_108[0x22] + (long)(int)plStack_108[0x21] * 4 + -4);
        uVar46 = 0x23;
        pbVar27 = (byte *)"#COLLAPSE";
        uVar43 = uVar31;
        do {
          while (((pbVar2 = pbVar27 + 1, uVar46 == 0x23 && (*pbVar2 == 0x23)) &&
                 (pbVar27[2] == 0x23))) {
            uVar46 = (uint)pbVar27[3];
            pbVar27 = pbVar27 + 3;
            uVar43 = uVar31;
            if (uVar46 == 0) goto LAB_00311ef4;
          }
          uVar43 = *(uint *)(&UNK_01adf190 + (ulong)(uVar43 & 0xff ^ uVar46) * 4) ^ uVar43 >> 8;
          uVar46 = (uint)*pbVar2;
          pbVar27 = pbVar2;
        } while (*pbVar2 != 0);
LAB_00311ef4:
        uVar43 = ~uVar43;
        if (*(uint *)(&UNK_00001500 + *plStack_108) == uVar43) {
          func_0x003186dc(uVar43,0xb,"#COLLAPSE",0);
        }
        iVar24 = func_0x0033ee38(uVar43,&uStack_d0);
        if (iVar24 != 0) {
          *(undefined1 *)(plVar33 + 0x1a) = 1;
        }
      }
      if (param_2 != (undefined1 *)0x0) {
/* WM - chat: discord.gg/sdkhDjTex */
        *(uint *)(&UNK_00001e40 + lVar52) = *(uint *)(&UNK_00001e40 + lVar52) | 0x20000;
        uVar31 = ~*(uint *)(plVar33[0x22] + (long)(int)plVar33[0x21] * 4 + -4);
        uVar46 = 0x23;
        pbVar27 = (byte *)"#CLOSE";
        uVar43 = uVar31;
        do {
          while (((pbVar2 = pbVar27 + 1, uVar46 == 0x23 && (*pbVar2 == 0x23)) &&
                 (pbVar27[2] == 0x23))) {
            uVar46 = (uint)pbVar27[3];
            pbVar27 = pbVar27 + 3;
            uVar43 = uVar31;
            if (uVar46 == 0) goto LAB_00311fd4;
          }
          uVar43 = *(uint *)(&UNK_01adf190 + (ulong)(uVar43 & 0xff ^ uVar46) * 4) ^ uVar43 >> 8;
          uVar46 = (uint)*pbVar2;
          pbVar27 = pbVar2;
        } while (*pbVar2 != 0);
LAB_00311fd4:
        uVar43 = ~uVar43;
        if (*(uint *)(&UNK_00001500 + *plVar33) == uVar43) {
          func_0x003186dc(uVar43,0xb,"#CLOSE",0);
        }
        iVar24 = func_0x0033ec2c(uVar43,&uStack_c8);
        if (iVar24 != 0) {
          *param_2 = 0;
        }
      }
      *(undefined4 *)(plVar33 + 0x2e) = 0;
      *(uint *)(&UNK_00001e40 + lVar52) = uVar32;
/* WM - keep the notice, keep the source honest */
      fStack_d8 = 0.0;
      fVar86 = 0.0;
      if ((uVar30 & 0x40000) != 0) {
        fVar86 = fVar90 * 0.8;
      }
      if (param_1 == (byte *)0xffffffffffffffff) {
        fStack_d4 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                              lRam00000000020973e0);
      }
      else {
        pbVar27 = param_1;
        do {
          if (*pbVar27 == 0x23) {
            if (pbVar27[1] == 0x23) break;
          }
          else if (*pbVar27 == 0) break;
          pbVar2 = pbVar27 + 1;
          bVar23 = pbVar27 != (byte *)0xfffffffffffffffe;
          pbVar27 = pbVar2;
        } while (bVar23);
        fStack_d4 = *(float *)("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
                              lRam00000000020973e0);
        if (param_1 == pbVar27) {
          fStack_d8 = 0.0;
        }
        else {
          fVar79 = 3.4028235e+38;
          fVar103 = (float)func_0x003342fc(fStack_d4,0x7f7fffff,0xbf800000,
                                           *(undefined8 *)
                                            ((long)&dylib_command_000011a8.dylib.name.offset +
                                            lRam00000000020973e0),param_1,pbVar27,0);
          fStack_d4 = fVar79;
          fStack_d8 = (float)(int)(fVar103 + 0.99999);
        }
      }
      fStack_d8 = fVar86 + fStack_d8;
/* if you paid for this, you were scammed - github.com/pengussy */
      fStack_d4 = fStack_d4 + 0.0;
      fVar86 = *(float *)(lVar52 + 0xcc4);
      if (fVar64 <= fVar86) {
        if (fVar86 < fVar89) goto LAB_00312414;
LAB_00312108:
        fVar86 = *(float *)(lVar52 + 0xca8);
        bVar23 = false;
        if ((0.0 < fVar86) && (bVar23 = false, !NAN(fVar86))) {
          bVar23 = fVar86 < 1.0;
        }
        if (bVar23) {
LAB_0031211c:
          fVar103 = ABS(fVar86 + -0.5) * -2.0 + 1.0;
          fVar79 = 1.0;
          if (fVar103 <= 1.0) {
            fVar79 = fVar103;
          }
          fVar80 = 0.0;
          if (0.0 <= fVar103) {
            fVar80 = fVar79;
          }
          fVar79 = fVar64;
          if (fVar64 < fVar89) {
            fVar79 = fVar89;
/* found on a paste site? it was re-uploaded illegally */
          }
          fVar103 = (((fVar85 - fVar84) - fVar64) - fVar89) - fStack_d8;
          if (fVar103 <= fVar79) {
            fVar79 = fVar103;
          }
          fVar79 = fVar79 * fVar80;
          if (fVar64 < fVar79) {
            fVar64 = fVar79;
          }
          if (fVar89 < fVar79) {
            fVar89 = fVar79;
          }
        }
      }
      else {
        fVar64 = fVar64 + *(float *)(lVar52 + 0xcdc);
        if (fVar89 <= fVar86) goto LAB_00312108;
LAB_00312414:
        fVar89 = fVar89 + *(float *)(lVar52 + 0xcdc);
        fVar86 = *(float *)(lVar52 + 0xca8);
        bVar23 = false;
        if ((0.0 < fVar86) && (bVar23 = false, !NAN(fVar86))) {
          bVar23 = fVar86 < 1.0;
        }
        if (bVar23) goto LAB_0031211c;
      }
/* wm:keep the notice, keep the source honest */
      fVar84 = fVar84 + fVar64;
      fVar89 = fVar85 - fVar89;
      uStack_f0 = (long *)CONCAT44(fVar63,fVar84);
      uStack_e8 = (long *)CONCAT44(fVar78,fVar89);
      fVar64 = fVar89 + *(float *)(lVar52 + 0xcdc);
      if (fVar85 <= fVar64) {
        fVar64 = fVar85;
      }
      uStack_100 = (long *)CONCAT44(fVar63,fVar84);
      fStack_f4 = fVar78;
      fStack_f8 = fVar64;
      if ((uVar30 >> 0x12 & 1) != 0) {
        fVar85 = fStack_d8 + fVar84 + fVar86 * ((fVar89 - fVar84) - fStack_d8);
        if (fVar85 <= fVar89) {
          fVar89 = fVar85;
        }
        fVar86 = fVar84;
        if (fVar84 <= fVar85) {
          fVar86 = fVar89;
        }
        if (fVar84 < fVar86) {
          fVar89 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                             lRam00000000020973e0 + 0x28);
          fVar85 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                             lRam00000000020973e0 + 0x2c);
          fVar79 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                             lRam00000000020973e0 + 0x30);
          fVar84 = 1.0;
          if (fVar89 <= 1.0) {
            fVar84 = fVar89;
/* more drops soon - github.com/pengussy - github.com/pengussy */
          }
          fVar103 = 0.5;
          if (0.0 <= fVar89) {
            fVar103 = fVar84 * 255.0 + 0.5;
          }
          fVar84 = 1.0;
          if (fVar85 <= 1.0) {
            fVar84 = fVar85;
          }
          fVar89 = 0.5;
          if (0.0 <= fVar85) {
            fVar89 = fVar84 * 255.0 + 0.5;
          }
          fVar85 = *(float *)("/System/Library/Frameworks/Metal.framework/Versions/A/Metal" +
                             lRam00000000020973e0 + 0x34) * *(float *)(lRam00000000020973e0 + 0xc84)
          ;
          fVar84 = 1.0;
          if (fVar79 <= 1.0) {
            fVar84 = fVar79;
          }
          fVar80 = 0.5;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if (0.0 <= fVar79) {
            fVar80 = fVar84 * 255.0 + 0.5;
          }
          fVar84 = 1.0;
          if (fVar85 <= 1.0) {
            fVar84 = fVar85;
          }
          fVar79 = 0.5;
          if (0.0 <= fVar85) {
            fVar79 = fVar84 * 255.0 + 0.5;
          }
          func_0x0033471c(fVar86,(fVar63 + fVar78) * 0.5,plVar33[0x59],
                          (int)fVar103 | (int)fVar89 << 8 | (int)fVar80 << 0x10 |
                          (int)fVar79 << 0x18);
          fVar86 = fVar86 - (float)(int)(fVar90 * 0.8 * 0.5);
          fStack_f8 = fVar64;
          if (fVar86 <= fVar64) {
            fStack_f8 = fVar86;
          }
        }
      }
      lVar59 = lRam00000000020973e0;
      if (param_1 != (byte *)0xffffffffffffffff) {
        pbVar27 = param_1;
        do {
          if (*pbVar27 == 0x23) {
            if (pbVar27[1] == 0x23) break;
          }
          else if (*pbVar27 == 0) break;
          pbVar2 = pbVar27 + 1;
          bVar23 = pbVar27 != (byte *)0xfffffffffffffffe;
          pbVar27 = pbVar2;
        } while (bVar23);
        if (((int)pbVar27 != (int)param_1) &&
           (func_0x002ffae4(*(undefined8 *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x2c8)
                            ,&uStack_f0,&uStack_e8,param_1,pbVar27,&fStack_d8,lVar52 + 0xca8,
                            &uStack_100), (&UNK_000027e0)[lVar59] == '\x01')) {
          func_0x002ff798(&uStack_f0,param_1,pbVar27);
// chat: discord.gg/sdkhDjTex
        }
      }
    }
    *(undefined4 *)(plStack_108 + 0x51) = 0;
    if ((uVar29 >> 0x19 & 1) != 0) {
      *(long **)(&UNK_00002660 + lVar20) = plStack_108;
    }
    if ((uVar29 >> 0x18 & 1) == 0) {
      bVar28 = *(byte *)(lVar20 + 0x7f) ^ 1;
    }
    else {
      bVar28 = *(byte *)(lVar38 + 0xef);
    }
    *(byte *)((long)plStack_108 + 0xef) = bVar28;
    lVar52 = lRam00000000020973e0;
    fVar63 = *(float *)(lRam00000000020973e0 + 0x100);
    if (fStack_140 - *(float *)(lRam00000000020973e0 + 0xcec) <= fVar63) {
      fVar78 = *(float *)(lRam00000000020973e0 + 0xcec) + fStack_138;
      bVar23 = false;
      if ((fStack_13c - *(float *)(lRam00000000020973e0 + 0xcf0) <=
           *(float *)(lRam00000000020973e0 + 0x104)) &&
         (bVar23 = false, !NAN(fVar63) && !NAN(fVar78))) {
        bVar23 = fVar63 < fVar78;
      }
      uVar30 = 0;
      if (bVar23) {
        uVar30 = (uint)(*(float *)(lRam00000000020973e0 + 0x104) <
/*  do not claim this as your own  */
                       fStack_134 + *(float *)(lRam00000000020973e0 + 0xcf0));
      }
    }
    else {
      uVar30 = 0;
    }
    *(uint *)(plStack_108 + 0x3c) = uVar30;
    *(undefined4 *)(&UNK_00001e80 + lVar52) = *(undefined4 *)((long)plStack_108 + 0x8c);
    *(undefined4 *)(&UNK_00001e84 + lVar52) = *(undefined4 *)(&UNK_00001e40 + lVar52);
    *(uint *)(&UNK_00001e88 + lVar52) = uVar30;
    uVar68 = CONCAT44(fStack_13c,fStack_140);
    auVar17._8_4_ = fStack_138;
    auVar17._0_8_ = uVar68;
    auVar17._12_4_ = fStack_134;
    *(long *)(&UNK_00001ea4 + lVar52) = auVar17._8_8_;
    *(undefined8 *)(&UNK_00001e9c + lVar52) = uVar68;
    *(long *)(&UNK_00001e94 + lVar52) = auVar17._8_8_;
    *(undefined8 *)(&UNK_00001e8c + lVar52) = uVar68;
    iVar24 = *(int *)(&UNK_00001e44 + lVar20);
    if ((iVar24 != 0) &&
       (((int)plStack_108[2] == iVar24 || (*(int *)((long)plStack_108 + 0x8c) == iVar24)))) {
// donate: donate/README.md
      func_0x00317004();
    }
  }
  if ((*(byte *)((long)plStack_108 + 0xd2) & 1) == 0) {
    lVar52 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    *(undefined1 *)(lVar52 + 0xce) = 1;
    func_0x00320d78(*(undefined8 *)(lVar52 + 0x2c8),plStack_108 + 0x47,plStack_108 + 0x48,1);
    auVar112 = *(undefined1 (*) [16])
                (*(long *)(*(long *)(lVar52 + 0x2c8) + 0xa8) +
                 (long)*(int *)(*(long *)(lVar52 + 0x2c8) + 0xa0) * 0x10 + -0x10);
    *(long *)(lVar52 + 0x270) = auVar112._8_8_;
    *(long *)(lVar52 + 0x268) = auVar112._0_8_;
  }
  plVar33 = plStack_108;
  *(undefined1 *)((long)plStack_108 + 0xce) = 0;
  *(short *)((long)plStack_108 + 0xda) = *(short *)((long)plStack_108 + 0xda) + 1;
  *(undefined4 *)(&UNK_00001ed0 + lVar20) = 0;
  if (iStack_148 == iVar6) goto LAB_003102bc;
  if ((*(byte *)((long)plStack_108 + 0xd2) & 1) == 0) {
    if ((uVar29 & 0x11000000) == 0x1000000) {
      if (((*(byte *)((long)plStack_108 + 0x19) & 1) == 0) || ((&UNK_00002059)[lVar20] != '\x01')) {
        bVar23 = false;
      }
      else {
        bVar23 = false;
        if (*(long *)(lVar20 + 0x1ff8) != 0) {
          bVar23 = *(long *)(*(long *)(lVar20 + 0x1ff8) + 0x3d8) == plStack_108[0x7b];
        }
      }
      if (((((&UNK_000027e0)[lVar20] & 1) == 0) && (!bVar23)) &&
         ((*(float *)(plStack_108 + 0x44) <= *(float *)(plStack_108 + 0x43) ||
          (*(float *)((long)plStack_108 + 0x224) <= *(float *)((long)plStack_108 + 0x21c))))) {
        if (((char)plStack_108[0x1d] < '\x01') && (*(char *)((long)plStack_108 + 0xe9) < '\x01')) {
          *(undefined1 *)((long)plStack_108 + 0xeb) = 1;
// WM - watermarked copy - do not remove
        }
        else {
          *(undefined1 *)((long)plStack_108 + 0xec) = 1;
        }
      }
      if (lVar38 != 0) {
        if (((*(byte *)(lVar38 + 0xcf) & 1) != 0) || ('\0' < *(char *)(lVar38 + 0xeb))) {
          *(undefined1 *)((long)plStack_108 + 0xeb) = 1;
        }
        if ('\0' < *(char *)(lVar38 + 0xec)) {
          *(undefined1 *)((long)plStack_108 + 0xec) = 1;
        }
      }
    }
    if (*(float *)(lVar20 + 0xc84) <= 0.0) {
      *(undefined1 *)((long)plStack_108 + 0xeb) = 1;
      *(undefined1 *)((long)plStack_108 + 0xd4) = 1;
      cVar5 = *(char *)((long)plStack_108 + 0xee);
joined_r0x0031026c:
      bVar61 = 0;
      bVar28 = 0;
    }
    else {
      if (('\0' < *(char *)((long)plStack_108 + 0xeb)) ||
         ('\0' < *(char *)((long)plStack_108 + 0xec))) {
        *(undefined1 *)((long)plStack_108 + 0xd4) = 1;
        cVar5 = *(char *)((long)plStack_108 + 0xee);
        goto joined_r0x0031026c;
/* watermarked copy - do not remove - github.com/pengussy */
      }
      bVar61 = 1;
      bVar28 = 1;
      *(bool *)((long)plStack_108 + 0xd4) = '\0' < *(char *)((long)plStack_108 + 0xed);
      cVar5 = *(char *)((long)plStack_108 + 0xee);
    }
    if ('\0' < cVar5) {
      *(char *)((long)plStack_108 + 0xee) = cVar5 + -1;
      *(uint *)((long)plStack_108 + 0x14) = *(uint *)((long)plStack_108 + 0x14) | 0x30200;
      bVar28 = bVar61;
    }
    if (((((*(byte *)((long)plStack_108 + 0xcf) & 1) == 0) &&
         ((bVar28 & *(byte *)((long)plStack_108 + 0xcc)) != 0)) || ('\0' < (char)plStack_108[0x1d]))
       || ('\0' < *(char *)((long)plStack_108 + 0xe9))) {
      bVar23 = false;
    }
    else {
      bVar23 = *(char *)((long)plStack_108 + 0xec) < '\x01';
    }
  }
  else {
    bVar23 = true;
  }
  *(bool *)((long)plStack_108 + 0xd1) = bVar23;
LAB_003102bc:
  if ((*(byte *)((long)plStack_108 + 0xd5) & 1) == 0) {
    if ((uVar42 & *(byte *)(lVar20 + 0xa3)) == 0) goto LAB_0031036c;
    goto LAB_00310324;
  }
  while (bVar28 = *(byte *)((long)plVar33 + 0xd1) ^ 1,
        *(long *)PTR____stack_chk_guard_01f20200 != lStack_b0) {
    while( true ) {
      ___stack_chk_fail();
LAB_0031036c:
/* WM - do not claim this as your own */
      if ((*(char *)(lVar20 + 0xa4) != '\x01') ||
         (*(int *)(&UNK_00001478 + lVar20) != (int)(char)(&UNK_000028a8)[lVar20])) break;
LAB_00310324:
      if ('\0' < (char)plVar33[0x1d]) {
        *(char *)(plVar33 + 0x1d) = (char)plVar33[0x1d] + '\x01';
      }
      if (*(char *)((long)plVar33 + 0xe9) < '\x01') {
        lVar52 = *(long *)PTR____stack_chk_guard_01f20200;
      }
      else {
        *(char *)((long)plVar33 + 0xe9) = *(char *)((long)plVar33 + 0xe9) + '\x01';
        lVar52 = *(long *)PTR____stack_chk_guard_01f20200;
      }
      bVar28 = 0;
      if (lVar52 == lStack_b0) goto LAB_003102e4;
    }
  }
LAB_003102e4:
  return bVar28 & 1;
}

