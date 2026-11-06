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
 *  file-id: 0x2e6014:f53b0c4d37
 *  --------------------------------------------------------------------------*/

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002e6014(long *param_1,undefined8 param_2,ulong param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
  int *piVar35;
  uint *puVar36;
  undefined1 (*pauVar37) [16];
  undefined8 *puVar38;
  uint uVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  uint uVar44;
  int iVar45;
  int iVar48;
  ulong uVar46;
  undefined8 uVar47;
  int iVar49;
  int iVar50;
  undefined1 auVar51 [16];
  int iVar52;
  int iVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  uint uVar63;
  int iVar64;
  uint uVar65;
  int iVar66;
  int iVar69;
  int iVar70;
  undefined1 auVar67 [16];
  int iVar71;
  undefined1 auVar68 [16];
  int iVar72;
// WM - watermarked copy - do not remove
  int iVar75;
  int iVar76;
  undefined1 auVar73 [16];
  int iVar77;
  undefined1 auVar74 [16];
  int iVar78;
  int iVar80;
  int iVar81;
  undefined1 auVar79 [16];
  int iVar82;
  int iVar83;
  int iVar85;
  int iVar86;
  undefined1 auVar84 [16];
  int iVar87;
  int iVar88;
  int iVar89;
  int iVar90;
  int iVar91;
  int iVar92;
  int iVar93;
  int iVar94;
  int iVar95;
  int iVar96;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
  int iVar97;
  int iVar98;
  int iVar99;
  int iVar100;
  int iVar101;
  int iVar102;
  int iVar103;
  int iVar104;
  int iVar105;
  int iVar106;
  int iVar107;
  int iVar108;
  undefined4 uStack_64;
  
  iVar45 = (int)param_1[0xc];
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((long)param_1 + 0x34) == 0) {
    if (param_3 < 9) {
      *(undefined4 *)(param_1 + 10) = 1;
    }
    lVar40 = param_1[0xb];
    if (*(int *)(lVar40 + 0x808) == 2) {
      *(undefined4 *)(param_1 + 10) = 0;
      if (iVar45 != 2) {
        lVar40 = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        do {
          iVar48 = func_0x00299d6c(param_1[0xb],lVar40);
          iVar45 = 1 << (ulong)(0xbU - iVar48 & 0x1f);
          if (iVar48 == 0) {
            iVar45 = 1;
          }
          *(int *)(*param_1 + lVar40 * 4) = iVar45;
          *(int *)(param_1 + 6) = (int)param_1[6] + iVar45;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
          lVar40 = lVar40 + 1;
        } while (lVar40 != 0x100);
        lVar40 = param_1[0xb];
      }
      lVar41 = 0;
      lVar43 = (long)(1 << (ulong)(*(ushort *)
                                    (
                                    "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                                    + lVar40 + 0x20) - 1 & 0x1f));
      if (*(ushort *)
           ("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
           lVar40 + 0x20) == 0) {
        lVar43 = 1;
      }
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      lVar42 = param_1[1];
      piVar35 = (int *)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                       + lVar40 + lVar43 * 4 + 0x28);
      do {
        iVar45 = 1 << (ulong)(10 - (*piVar35 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar35 + 0xffffU < 0x10000) {
          iVar45 = 1;
        }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        *(int *)(lVar42 + lVar41) = iVar45;
        *(int *)((long)param_1 + 0x34) = iVar45 + *(int *)((long)param_1 + 0x34);
        lVar41 = lVar41 + 4;
        piVar35 = piVar35 + 2;
      } while (lVar41 != 0x90);
      lVar41 = 0;
      lVar43 = (long)(1 << (ulong)(*(ushort *)(lVar40 + 0xb14) - 1 & 0x1f));
      if (*(ushort *)(lVar40 + 0xb14) == 0) {
        lVar43 = 1;
      }
      *(undefined4 *)(param_1 + 7) = 0;
      lVar42 = param_1[2];
      piVar35 = (int *)(lVar40 + lVar43 * 4 + 0xb1c);
      do {
        iVar45 = 1 << (ulong)(10 - (*piVar35 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar35 + 0xffffU < 0x10000) {
          iVar45 = 1;
        }
        *(int *)(lVar42 + lVar41) = iVar45;
        *(int *)(param_1 + 7) = iVar45 + (int)param_1[7];
        lVar41 = lVar41 + 4;
        piVar35 = piVar35 + 2;
      } while (lVar41 != 0xd4);
      lVar41 = 0;
      lVar43 = (long)(1 << (ulong)(*(ushort *)(lVar40 + 0x810) - 1 & 0x1f));
      if (*(ushort *)(lVar40 + 0x810) == 0) {
        lVar43 = 1;
      }
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      lVar42 = param_1[3];
      piVar35 = (int *)(lVar40 + lVar43 * 4 + 0x818);
/*  keep the notice, keep the source honest  */
      do {
        iVar45 = 1 << (ulong)(10 - (*piVar35 + 0xffffU >> 0x10) & 0x1f);
        if (*piVar35 + 0xffffU < 0x10000) {
          iVar45 = 1;
        }
        *(int *)(lVar42 + lVar41) = iVar45;
        uVar44 = iVar45 + *(int *)((long)param_1 + 0x3c);
        *(uint *)((long)param_1 + 0x3c) = uVar44;
        lVar41 = lVar41 + 4;
        piVar35 = piVar35 + 2;
      } while (lVar41 != 0x80);
      iVar45 = (int)param_1[0xc];
      goto joined_r0x002e6aa0;
    }
    if (iVar45 != 2) {
      uStack_64 = 0xff;
      func_0x002989e8(*param_1,&uStack_64,param_2,param_3);
      iVar45 = 0;
      iVar48 = 0;
      iVar49 = 0;
      iVar50 = 0;
      lVar40 = 0x100;
      iVar52 = 0;
      iVar53 = 0;
      iVar54 = 0;
/* keep the notice, keep the source honest - github.com/pengussy */
      iVar55 = 0;
      puVar36 = (uint *)(*param_1 + 0x20);
      auVar51 = ZEXT816(0);
      auVar67 = ZEXT816(0);
      do {
        uVar44 = (uint)*(undefined8 *)(puVar36 + -4);
        uVar39 = (uint)((ulong)*(undefined8 *)(puVar36 + -4) >> 0x20);
        uVar63 = (uint)*(undefined8 *)(puVar36 + -2);
        uVar65 = (uint)((ulong)*(undefined8 *)(puVar36 + -2) >> 0x20);
        iVar56 = (puVar36[-8] >> 8) + (uint)(puVar36[-8] != 0);
        iVar57 = (puVar36[-7] >> 8) + (uint)(puVar36[-7] != 0);
        auVar84._0_8_ = CONCAT44(iVar57,iVar56);
        auVar84._8_4_ = (puVar36[-6] >> 8) + (uint)(puVar36[-6] != 0);
        auVar84._12_4_ = (puVar36[-5] >> 8) + (uint)(puVar36[-5] != 0);
        iVar58 = (uVar44 >> 8) + (uint)(uVar44 != 0);
        iVar59 = (uVar39 >> 8) + (uint)(uVar39 != 0);
        iVar60 = (uVar63 >> 8) + (uint)(uVar63 != 0);
        iVar61 = (uVar65 >> 8) + (uint)(uVar65 != 0);
        iVar62 = (*puVar36 >> 8) + (uint)(*puVar36 != 0);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
        iVar64 = (puVar36[1] >> 8) + (uint)(puVar36[1] != 0);
        auVar68._0_8_ = CONCAT44(iVar64,iVar62);
        auVar68._8_4_ = (puVar36[2] >> 8) + (uint)(puVar36[2] != 0);
        auVar68._12_4_ = (puVar36[3] >> 8) + (uint)(puVar36[3] != 0);
        iVar66 = (puVar36[4] >> 8) + (uint)(puVar36[4] != 0);
        iVar69 = (puVar36[5] >> 8) + (uint)(puVar36[5] != 0);
        auVar74._0_8_ = CONCAT44(iVar69,iVar66);
        auVar74._8_4_ = (puVar36[6] >> 8) + (uint)(puVar36[6] != 0);
        auVar74._12_4_ = (puVar36[7] >> 8) + (uint)(puVar36[7] != 0);
        iVar45 = iVar56 + iVar45;
        iVar48 = iVar57 + iVar48;
        iVar49 = auVar84._8_4_ + iVar49;
        iVar50 = auVar84._12_4_ + iVar50;
        iVar52 = iVar58 + iVar52;
        iVar53 = iVar59 + iVar53;
        iVar54 = iVar60 + iVar54;
        iVar55 = iVar61 + iVar55;
        auVar73._0_4_ = iVar62 + auVar51._0_4_;
        auVar73._4_4_ = iVar64 + auVar51._4_4_;
        auVar73._8_4_ = auVar68._8_4_ + auVar51._8_4_;
        auVar73._12_4_ = auVar68._12_4_ + auVar51._12_4_;
        *(long *)(puVar36 + -6) = auVar84._8_8_;
        *(undefined8 *)(puVar36 + -8) = auVar84._0_8_;
        *(ulong *)(puVar36 + -2) = CONCAT44(iVar61,iVar60);
        *(ulong *)(puVar36 + -4) = CONCAT44(iVar59,iVar58);
        auVar79._0_4_ = iVar66 + auVar67._0_4_;
        auVar79._4_4_ = iVar69 + auVar67._4_4_;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
        auVar79._8_4_ = auVar74._8_4_ + auVar67._8_4_;
        auVar79._12_4_ = auVar74._12_4_ + auVar67._12_4_;
        *(long *)(puVar36 + 2) = auVar68._8_8_;
        *(undefined8 *)puVar36 = auVar68._0_8_;
        *(long *)(puVar36 + 6) = auVar74._8_8_;
        *(undefined8 *)(puVar36 + 4) = auVar74._0_8_;
        lVar40 = lVar40 + -0x10;
        puVar36 = puVar36 + 0x10;
        auVar51 = auVar73;
        auVar67 = auVar79;
      } while (lVar40 != 0);
      *(int *)(param_1 + 6) =
           auVar79._0_4_ + auVar73._0_4_ + iVar52 + iVar45 +
           auVar79._4_4_ + auVar73._4_4_ + iVar53 + iVar48 +
           auVar79._8_4_ + auVar73._8_4_ + iVar54 + iVar49 +
           auVar79._12_4_ + auVar73._12_4_ + iVar55 + iVar50;
    }
    uVar34 = _UNK_01ade120;
    uVar33 = _UNK_01ade118;
    uVar47 = _UNK_01ade108;
    puVar38 = (undefined8 *)param_1[1];
    puVar38[0xd] = _UNK_01ade110;
    puVar38[0xc] = uVar47;
    puVar38[0xf] = uVar34;
    puVar38[0xe] = uVar33;
    uVar47 = _UNK_01ade128;
    puVar38[0x11] = _UNK_01ade130;
    puVar38[0x10] = uVar47;
    uVar34 = _UNK_01ade0e0;
    uVar33 = _UNK_01ade0d8;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
    uVar47 = _UNK_01ade0c8;
    puVar38[5] = _UNK_01ade0d0;
    puVar38[4] = uVar47;
    puVar38[7] = uVar34;
    puVar38[6] = uVar33;
    uVar34 = _UNK_01ade100;
    uVar33 = _UNK_01ade0f8;
    uVar47 = _UNK_01ade0e8;
    puVar38[9] = _UNK_01ade0f0;
    puVar38[8] = uVar47;
    puVar38[0xb] = uVar34;
    puVar38[10] = uVar33;
    uVar34 = _UNK_01ade0c0;
    uVar33 = _UNK_01ade0b8;
    uVar47 = _UNK_01ade0a8;
    puVar38[1] = _UNK_01ade0b0;
    *puVar38 = uVar47;
    puVar38[3] = uVar34;
    puVar38[2] = uVar33;
    *(undefined4 *)((long)param_1 + 0x34) = 0x28;
    _memset_pattern16(param_1[2],&UNK_01ade2e0,0xd4);
    uVar44 = 0x35;
    *(undefined4 *)(param_1 + 7) = 0x35;
    uVar34 = _UNK_01ade190;
    uVar33 = _UNK_01ade188;
    uVar47 = _UNK_01ade178;
    puVar38 = (undefined8 *)param_1[3];
    puVar38[9] = _UNK_01ade180;
    puVar38[8] = uVar47;
    puVar38[0xb] = uVar34;
    puVar38[10] = uVar33;
    uVar34 = _UNK_01ade1b0;
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
    uVar33 = _UNK_01ade1a8;
    uVar47 = _UNK_01ade198;
    puVar38[0xd] = _UNK_01ade1a0;
    puVar38[0xc] = uVar47;
    puVar38[0xf] = uVar34;
    puVar38[0xe] = uVar33;
    uVar34 = _UNK_01ade150;
    uVar33 = _UNK_01ade148;
    uVar47 = _UNK_01ade138;
    puVar38[1] = _UNK_01ade140;
    *puVar38 = uVar47;
    puVar38[3] = uVar34;
    puVar38[2] = uVar33;
    uVar34 = _UNK_01ade170;
    uVar33 = _UNK_01ade168;
    uVar47 = _UNK_01ade158;
    puVar38[5] = _UNK_01ade160;
    puVar38[4] = uVar47;
    puVar38[7] = uVar34;
    puVar38[6] = uVar33;
  }
  else {
    if (iVar45 != 2) {
      piVar35 = (int *)*param_1;
      uVar44 = (int)*(undefined8 *)(piVar35 + 0xfc) +
               piVar35[0xec] + piVar35[0xdc] + piVar35[0xcc] + piVar35[0xbc] +
               piVar35[0xac] + piVar35[0x9c] + piVar35[0x8c] + piVar35[0x7c] +
               piVar35[0x6c] + piVar35[0x5c] + piVar35[0x4c] +
               piVar35[0x3c] + piVar35[0x2c] + piVar35[0x1c] + piVar35[0xc] +
               piVar35[0xf8] + piVar35[0xe8] + piVar35[0xd8] + piVar35[200] + piVar35[0xb8] +
               piVar35[0xa8] + piVar35[0x98] + piVar35[0x88] + piVar35[0x78] +
               piVar35[0x68] + piVar35[0x58] + piVar35[0x48] +
               piVar35[0x38] + piVar35[0x28] + piVar35[0x18] + piVar35[8] +
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
               piVar35[0xf4] +
               piVar35[0xe4] + piVar35[0xd4] + piVar35[0xc4] + (int)*(undefined8 *)(piVar35 + 0xb4)
               + piVar35[0xa4] +
                 piVar35[0x94] + piVar35[0x84] + (int)*(undefined8 *)(piVar35 + 0x74) +
                 piVar35[100] + piVar35[0x54] + (int)*(undefined8 *)(piVar35 + 0x44) +
                 piVar35[0x34] + (int)*(undefined8 *)(piVar35 + 0x24) +
                 (int)*(undefined8 *)(piVar35 + 0x14) + piVar35[4] +
               piVar35[0xf0] + piVar35[0xe0] + piVar35[0xd0] + piVar35[0xc0] + piVar35[0xb0] +
               piVar35[0xa0] + piVar35[0x90] + piVar35[0x80] + piVar35[0x70] +
               piVar35[0x60] + piVar35[0x50] + piVar35[0x40] +
               piVar35[0x30] + piVar35[0x20] + piVar35[0x10] + *piVar35 +
               (int)((ulong)*(undefined8 *)(piVar35 + 0xfc) >> 0x20) +
               piVar35[0xed] + piVar35[0xdd] + piVar35[0xcd] + piVar35[0xbd] +
               piVar35[0xad] + piVar35[0x9d] + piVar35[0x8d] + piVar35[0x7d] +
               piVar35[0x6d] + piVar35[0x5d] + piVar35[0x4d] +
               piVar35[0x3d] + piVar35[0x2d] + piVar35[0x1d] + piVar35[0xd] +
               piVar35[0xf9] + piVar35[0xe9] + piVar35[0xd9] + piVar35[0xc9] + piVar35[0xb9] +
               piVar35[0xa9] + piVar35[0x99] + piVar35[0x89] + piVar35[0x79] +
               piVar35[0x69] + piVar35[0x59] + piVar35[0x49] +
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
               piVar35[0x39] + piVar35[0x29] + piVar35[0x19] + piVar35[9] +
               piVar35[0xf5] +
               piVar35[0xe5] +
               piVar35[0xd5] + piVar35[0xc5] + (int)((ulong)*(undefined8 *)(piVar35 + 0xb4) >> 0x20)
               + piVar35[0xa5] +
                 piVar35[0x95] +
                 piVar35[0x85] + (int)((ulong)*(undefined8 *)(piVar35 + 0x74) >> 0x20) +
                 piVar35[0x65] +
                 piVar35[0x55] + (int)((ulong)*(undefined8 *)(piVar35 + 0x44) >> 0x20) +
                 piVar35[0x35] + (int)((ulong)*(undefined8 *)(piVar35 + 0x24) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar35 + 0x14) >> 0x20) + piVar35[5] +
               piVar35[0xf1] + piVar35[0xe1] + piVar35[0xd1] + piVar35[0xc1] + piVar35[0xb1] +
               piVar35[0xa1] + piVar35[0x91] + piVar35[0x81] + piVar35[0x71] +
               piVar35[0x61] + piVar35[0x51] + piVar35[0x41] +
               piVar35[0x31] + piVar35[0x21] + piVar35[0x11] + piVar35[1] +
               (int)*(undefined8 *)(piVar35 + 0xfe) +
               piVar35[0xee] + piVar35[0xde] + piVar35[0xce] + piVar35[0xbe] +
               piVar35[0xae] + piVar35[0x9e] + piVar35[0x8e] + piVar35[0x7e] +
               piVar35[0x6e] + piVar35[0x5e] + piVar35[0x4e] +
               piVar35[0x3e] + piVar35[0x2e] + piVar35[0x1e] + piVar35[0xe] +
               piVar35[0xfa] + piVar35[0xea] + piVar35[0xda] + piVar35[0xca] + piVar35[0xba] +
               piVar35[0xaa] + piVar35[0x9a] + piVar35[0x8a] + piVar35[0x7a] +
               piVar35[0x6a] + piVar35[0x5a] + piVar35[0x4a] +
               piVar35[0x3a] + piVar35[0x2a] + piVar35[0x1a] + piVar35[10] +
               piVar35[0xf6] +
               piVar35[0xe6] + piVar35[0xd6] + piVar35[0xc6] + (int)*(undefined8 *)(piVar35 + 0xb6)
               + piVar35[0xa6] +
                 piVar35[0x96] + piVar35[0x86] + (int)*(undefined8 *)(piVar35 + 0x76) +
                 piVar35[0x66] + piVar35[0x56] + (int)*(undefined8 *)(piVar35 + 0x46) +
                 piVar35[0x36] + (int)*(undefined8 *)(piVar35 + 0x26) +
                 (int)*(undefined8 *)(piVar35 + 0x16) + piVar35[6] +
               piVar35[0xf2] + piVar35[0xe2] + piVar35[0xd2] + piVar35[0xc2] + piVar35[0xb2] +
               piVar35[0xa2] + piVar35[0x92] + piVar35[0x82] + piVar35[0x72] +
               piVar35[0x62] + piVar35[0x52] + piVar35[0x42] +
               piVar35[0x32] + piVar35[0x22] + piVar35[0x12] + piVar35[2] +
               (int)((ulong)*(undefined8 *)(piVar35 + 0xfe) >> 0x20) +
               piVar35[0xef] + piVar35[0xdf] + piVar35[0xcf] + piVar35[0xbf] +
               piVar35[0xaf] + piVar35[0x9f] + piVar35[0x8f] + piVar35[0x7f] +
// found on a paste site? it was re-uploaded illegally
               piVar35[0x6f] + piVar35[0x5f] + piVar35[0x4f] +
               piVar35[0x3f] + piVar35[0x2f] + piVar35[0x1f] + piVar35[0xf] +
               piVar35[0xfb] + piVar35[0xeb] + piVar35[0xdb] + piVar35[0xcb] + piVar35[0xbb] +
               piVar35[0xab] + piVar35[0x9b] + piVar35[0x8b] + piVar35[0x7b] +
               piVar35[0x6b] + piVar35[0x5b] + piVar35[0x4b] +
               piVar35[0x3b] + piVar35[0x2b] + piVar35[0x1b] + piVar35[0xb] +
               piVar35[0xf7] +
               piVar35[0xe7] +
               piVar35[0xd7] + piVar35[199] + (int)((ulong)*(undefined8 *)(piVar35 + 0xb6) >> 0x20)
               + piVar35[0xa7] +
                 piVar35[0x97] +
                 piVar35[0x87] + (int)((ulong)*(undefined8 *)(piVar35 + 0x76) >> 0x20) +
                 piVar35[0x67] +
                 piVar35[0x57] + (int)((ulong)*(undefined8 *)(piVar35 + 0x46) >> 0x20) +
                 piVar35[0x37] + (int)((ulong)*(undefined8 *)(piVar35 + 0x26) >> 0x20) +
                 (int)((ulong)*(undefined8 *)(piVar35 + 0x16) >> 0x20) + piVar35[7] +
               piVar35[0xf3] + piVar35[0xe3] + piVar35[0xd3] + piVar35[0xc3] + piVar35[0xb3] +
               piVar35[0xa3] + piVar35[0x93] + piVar35[0x83] + piVar35[0x73] +
               piVar35[99] + piVar35[0x53] + piVar35[0x43] +
               piVar35[0x33] + piVar35[0x23] + piVar35[0x13] + piVar35[3];
      if (0x1fff < uVar44) {
        uVar44 = (uint)LZCOUNT(uVar44 >> 0xc);
        uVar46 = CONCAT44(uVar44,uVar44) ^ 0x1f0000001f;
        iVar45 = 0;
        iVar48 = 0;
        iVar49 = 0;
        iVar50 = 0;
        lVar40 = 0x100;
        auVar51._0_4_ = -(int)uVar46;
        auVar51._4_4_ = -(int)(uVar46 >> 0x20);
        auVar51._8_4_ = -(uVar44 ^ 0x1f);
        auVar51._12_4_ = -(uVar44 ^ 0x1f);
        iVar52 = 0;
        iVar53 = 0;
        iVar54 = 0;
        iVar55 = 0;
        iVar56 = 0;
/* donate: donate/README.md */
        iVar57 = 0;
        iVar58 = 0;
        iVar59 = 0;
        iVar60 = 0;
        iVar61 = 0;
        iVar62 = 0;
        iVar64 = 0;
        pauVar37 = (undefined1 (*) [16])(piVar35 + 8);
        do {
          auVar67 = NEON_ushl(pauVar37[-2],auVar51,4);
          auVar73 = NEON_ushl(pauVar37[-1],auVar51,4);
          auVar79 = NEON_ushl(*pauVar37,auVar51,4);
          auVar84 = NEON_ushl(pauVar37[1],auVar51,4);
          iVar66 = auVar67._0_4_ + 1;
          iVar69 = auVar67._4_4_ + 1;
          iVar70 = auVar67._8_4_ + 1;
          iVar71 = auVar67._12_4_ + 1;
          iVar72 = auVar73._0_4_ + 1;
          iVar75 = auVar73._4_4_ + 1;
          iVar76 = auVar73._8_4_ + 1;
          iVar77 = auVar73._12_4_ + 1;
          iVar78 = auVar79._0_4_ + 1;
          iVar80 = auVar79._4_4_ + 1;
          iVar81 = auVar79._8_4_ + 1;
          iVar82 = auVar79._12_4_ + 1;
          iVar83 = auVar84._0_4_ + 1;
          iVar85 = auVar84._4_4_ + 1;
          iVar86 = auVar84._8_4_ + 1;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          iVar87 = auVar84._12_4_ + 1;
          iVar45 = iVar66 + iVar45;
          iVar48 = iVar69 + iVar48;
          iVar49 = iVar70 + iVar49;
          iVar50 = iVar71 + iVar50;
          iVar52 = iVar72 + iVar52;
          iVar53 = iVar75 + iVar53;
          iVar54 = iVar76 + iVar54;
          iVar55 = iVar77 + iVar55;
          iVar56 = iVar78 + iVar56;
          iVar57 = iVar80 + iVar57;
          iVar58 = iVar81 + iVar58;
          iVar59 = iVar82 + iVar59;
          *(int *)(pauVar37[-2] + 8) = iVar70;
          *(int *)(pauVar37[-2] + 0xc) = iVar71;
          *(int *)pauVar37[-2] = iVar66;
          *(int *)(pauVar37[-2] + 4) = iVar69;
          *(int *)(pauVar37[-1] + 8) = iVar76;
          *(int *)(pauVar37[-1] + 0xc) = iVar77;
          *(int *)pauVar37[-1] = iVar72;
          *(int *)(pauVar37[-1] + 4) = iVar75;
          iVar60 = iVar83 + iVar60;
          iVar61 = iVar85 + iVar61;
          iVar62 = iVar86 + iVar62;
          iVar64 = iVar87 + iVar64;
          *(int *)(*pauVar37 + 8) = iVar81;
          *(int *)(*pauVar37 + 0xc) = iVar82;
          *(int *)*pauVar37 = iVar78;
          *(int *)(*pauVar37 + 4) = iVar80;
          *(int *)(pauVar37[1] + 8) = iVar86;
// reversing this took months of machine time
          *(int *)(pauVar37[1] + 0xc) = iVar87;
          *(int *)pauVar37[1] = iVar83;
          *(int *)(pauVar37[1] + 4) = iVar85;
          lVar40 = lVar40 + -0x10;
          pauVar37 = pauVar37 + 4;
        } while (lVar40 != 0);
        uVar44 = iVar60 + iVar56 + iVar52 + iVar45 + iVar61 + iVar57 + iVar53 + iVar48 +
                 iVar62 + iVar58 + iVar54 + iVar49 + iVar64 + iVar59 + iVar55 + iVar50;
      }
      *(uint *)(param_1 + 6) = uVar44;
    }
    puVar36 = (uint *)param_1[1];
    uVar44 = *puVar36 + puVar36[0x20] + puVar36[0x10] +
             puVar36[8] + (int)*(undefined8 *)(puVar36 + 0x18) +
             puVar36[4] + puVar36[0x14] + puVar36[0xc] + puVar36[0x1c] +
             puVar36[1] + puVar36[0x21] + puVar36[0x11] +
             puVar36[9] + (int)((ulong)*(undefined8 *)(puVar36 + 0x18) >> 0x20) +
             puVar36[5] + puVar36[0x15] + puVar36[0xd] + puVar36[0x1d] +
             puVar36[2] + puVar36[0x22] + puVar36[0x12] +
             puVar36[10] + (int)*(undefined8 *)(puVar36 + 0x1a) +
             puVar36[6] + puVar36[0x16] + puVar36[0xe] + puVar36[0x1e] +
/* chat: discord.gg/sdkhDjTex */
             puVar36[3] + puVar36[0x23] + puVar36[0x13] +
             puVar36[0xb] + (int)((ulong)*(undefined8 *)(puVar36 + 0x1a) >> 0x20) +
             puVar36[7] + puVar36[0x17] + puVar36[0xf] + puVar36[0x1f];
    if (0xfff < uVar44) {
      uVar32 = (uint)LZCOUNT(uVar44 >> 0xb) ^ 0x1f;
      uVar44 = (*puVar36 >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar39 = (puVar36[1] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar63 = (puVar36[2] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar65 = (puVar36[3] >> (ulong)(uVar32 & 0x1f)) + 1;
      *puVar36 = uVar44;
      puVar36[1] = uVar39;
      uVar1 = (puVar36[4] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar2 = (puVar36[5] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar3 = (puVar36[6] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[2] = uVar63;
      puVar36[3] = uVar65;
      uVar4 = (puVar36[7] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[4] = uVar1;
      puVar36[5] = uVar2;
      uVar5 = (puVar36[8] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar6 = (puVar36[9] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[6] = uVar3;
      puVar36[7] = uVar4;
      uVar7 = (puVar36[10] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[8] = uVar5;
      puVar36[9] = uVar6;
      uVar8 = (puVar36[0xb] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[10] = uVar7;
// thanks for reading - discord.gg/sdkhDjTex
      puVar36[0xb] = uVar8;
      uVar9 = (puVar36[0xc] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar10 = (puVar36[0xd] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0xc] = uVar9;
      puVar36[0xd] = uVar10;
      uVar11 = (puVar36[0xe] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar12 = (puVar36[0xf] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0xe] = uVar11;
      puVar36[0xf] = uVar12;
      uVar13 = (puVar36[0x10] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar14 = (puVar36[0x11] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x10] = uVar13;
      puVar36[0x11] = uVar14;
      uVar15 = (puVar36[0x12] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar16 = (puVar36[0x13] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x12] = uVar15;
      puVar36[0x13] = uVar16;
      uVar17 = (puVar36[0x14] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar18 = (puVar36[0x15] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x14] = uVar17;
      puVar36[0x15] = uVar18;
      uVar19 = (puVar36[0x16] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar20 = (puVar36[0x17] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x16] = uVar19;
      puVar36[0x17] = uVar20;
      uVar21 = (puVar36[0x18] >> (ulong)(uVar32 & 0x1f)) + 1;
/* wm:proprietary - see LICENSE - do not sell */
      uVar22 = (puVar36[0x19] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x18] = uVar21;
      puVar36[0x19] = uVar22;
      uVar23 = (puVar36[0x1a] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar24 = (puVar36[0x1b] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x1a] = uVar23;
      puVar36[0x1b] = uVar24;
      uVar25 = (puVar36[0x1c] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar26 = (puVar36[0x1d] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x1c] = uVar25;
      puVar36[0x1d] = uVar26;
      uVar27 = (puVar36[0x1e] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar28 = (puVar36[0x1f] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x1e] = uVar27;
      puVar36[0x1f] = uVar28;
      uVar29 = (puVar36[0x20] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar30 = (puVar36[0x21] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar31 = (puVar36[0x22] >> (ulong)(uVar32 & 0x1f)) + 1;
      puVar36[0x20] = uVar29;
      puVar36[0x21] = uVar30;
      uVar32 = (puVar36[0x23] >> (ulong)(uVar32 & 0x1f)) + 1;
      uVar44 = uVar32 + uVar31 + uVar30 + uVar29 + uVar28 + uVar27 + uVar26 +
               uVar25 + uVar24 + uVar23 + uVar22 + uVar21 + uVar20 + uVar19 +
               uVar18 + uVar17 + uVar16 + uVar15 + uVar14 + uVar13 +
/* origin: github.com/pengussy */
               uVar12 + uVar11 + uVar10 + uVar9 + uVar8 +
               uVar7 + uVar6 + uVar5 + uVar4 +
               uVar3 + uVar2 + uVar1 + uVar65 + uVar63 + uVar39 + uVar44;
      puVar36[0x22] = uVar31;
      puVar36[0x23] = uVar32;
    }
    *(uint *)((long)param_1 + 0x34) = uVar44;
    pauVar37 = (undefined1 (*) [16])param_1[2];
    uVar44 = (int)*(undefined8 *)*pauVar37 + *(int *)pauVar37[8] +
             *(int *)pauVar37[4] + *(int *)pauVar37[0xc] +
             *(int *)pauVar37[2] + *(int *)pauVar37[10] + *(int *)pauVar37[6] +
             *(int *)pauVar37[1] + *(int *)pauVar37[9] + *(int *)pauVar37[5] +
             *(int *)pauVar37[3] + *(int *)pauVar37[0xb] + *(int *)pauVar37[7] +
             (int)((ulong)*(undefined8 *)*pauVar37 >> 0x20) + *(int *)(pauVar37[8] + 4) +
             *(int *)(pauVar37[4] + 4) + *(int *)(pauVar37[0xc] + 4) +
             *(int *)(pauVar37[2] + 4) + *(int *)(pauVar37[10] + 4) + *(int *)(pauVar37[6] + 4) +
             *(int *)(pauVar37[1] + 4) + *(int *)(pauVar37[9] + 4) + *(int *)(pauVar37[5] + 4) +
             *(int *)(pauVar37[3] + 4) + *(int *)(pauVar37[0xb] + 4) + *(int *)(pauVar37[7] + 4) +
             (int)*(undefined8 *)(*pauVar37 + 8) + *(int *)(pauVar37[8] + 8) +
             *(int *)(pauVar37[4] + 8) + *(int *)(pauVar37[0xc] + 8) +
             *(int *)(pauVar37[2] + 8) + *(int *)(pauVar37[10] + 8) + *(int *)(pauVar37[6] + 8) +
             *(int *)(pauVar37[1] + 8) + *(int *)(pauVar37[9] + 8) + *(int *)(pauVar37[5] + 8) +
             *(int *)(pauVar37[3] + 8) + *(int *)(pauVar37[0xb] + 8) + *(int *)(pauVar37[7] + 8) +
             (int)((ulong)*(undefined8 *)(*pauVar37 + 8) >> 0x20) + *(int *)(pauVar37[8] + 0xc) +
             *(int *)(pauVar37[4] + 0xc) + *(int *)(pauVar37[0xc] + 0xc) +
/* wm:stripping the watermark breaks the license */
             *(int *)(pauVar37[2] + 0xc) + *(int *)(pauVar37[10] + 0xc) +
             *(int *)(pauVar37[6] + 0xc) +
             *(int *)(pauVar37[1] + 0xc) + *(int *)(pauVar37[9] + 0xc) + *(int *)(pauVar37[5] + 0xc)
             + *(int *)(pauVar37[3] + 0xc) + *(int *)(pauVar37[0xb] + 0xc) +
               *(int *)(pauVar37[7] + 0xc) + *(int *)pauVar37[0xd];
    if (0xfff < uVar44) {
      uVar39 = (uint)LZCOUNT(uVar44 >> 0xb);
      uVar44 = uVar39 ^ 0x1f;
      uVar46 = CONCAT44(uVar39,uVar39) ^ 0x1f0000001f;
      auVar67._0_4_ = -(int)uVar46;
      auVar67._4_4_ = -(int)(uVar46 >> 0x20);
      auVar67._8_4_ = -uVar44;
      auVar67._12_4_ = -uVar44;
      auVar51 = NEON_ushl(*pauVar37,auVar67,4);
      auVar73 = NEON_ushl(pauVar37[1],auVar67,4);
      auVar79 = NEON_ushl(pauVar37[2],auVar67,4);
      auVar84 = NEON_ushl(pauVar37[3],auVar67,4);
      iVar53 = auVar51._0_4_ + 1;
      iVar54 = auVar51._4_4_ + 1;
      iVar55 = auVar51._8_4_ + 1;
      iVar56 = auVar51._12_4_ + 1;
      iVar57 = auVar73._0_4_ + 1;
      iVar58 = auVar73._4_4_ + 1;
      iVar59 = auVar73._8_4_ + 1;
      iVar60 = auVar73._12_4_ + 1;
      iVar61 = auVar79._0_4_ + 1;
      iVar62 = auVar79._4_4_ + 1;
      iVar64 = auVar79._8_4_ + 1;
      iVar66 = auVar79._12_4_ + 1;
      iVar69 = auVar84._0_4_ + 1;
      iVar70 = auVar84._4_4_ + 1;
      iVar71 = auVar84._8_4_ + 1;
      iVar72 = auVar84._12_4_ + 1;
      *(int *)(*pauVar37 + 8) = iVar55;
      *(int *)(*pauVar37 + 0xc) = iVar56;
/* wm:do not claim this as your own */
      *(int *)*pauVar37 = iVar53;
      *(int *)(*pauVar37 + 4) = iVar54;
      *(int *)(pauVar37[1] + 8) = iVar59;
      *(int *)(pauVar37[1] + 0xc) = iVar60;
      *(int *)pauVar37[1] = iVar57;
      *(int *)(pauVar37[1] + 4) = iVar58;
      *(int *)(pauVar37[2] + 8) = iVar64;
      *(int *)(pauVar37[2] + 0xc) = iVar66;
      *(int *)pauVar37[2] = iVar61;
      *(int *)(pauVar37[2] + 4) = iVar62;
      *(int *)(pauVar37[3] + 8) = iVar71;
      *(int *)(pauVar37[3] + 0xc) = iVar72;
      *(int *)pauVar37[3] = iVar69;
      *(int *)(pauVar37[3] + 4) = iVar70;
      auVar51 = NEON_ushl(pauVar37[4],auVar67,4);
      auVar73 = NEON_ushl(pauVar37[5],auVar67,4);
      auVar79 = NEON_ushl(pauVar37[6],auVar67,4);
      auVar84 = NEON_ushl(pauVar37[7],auVar67,4);
      iVar75 = auVar51._0_4_ + 1;
      iVar76 = auVar51._4_4_ + 1;
      iVar77 = auVar51._8_4_ + 1;
      iVar78 = auVar51._12_4_ + 1;
      iVar80 = auVar73._0_4_ + 1;
      iVar81 = auVar73._4_4_ + 1;
      iVar82 = auVar73._8_4_ + 1;
      iVar83 = auVar73._12_4_ + 1;
      iVar85 = auVar79._0_4_ + 1;
      iVar86 = auVar79._4_4_ + 1;
      iVar87 = auVar79._8_4_ + 1;
      iVar88 = auVar79._12_4_ + 1;
      iVar89 = auVar84._0_4_ + 1;
      iVar90 = auVar84._4_4_ + 1;
      iVar91 = auVar84._8_4_ + 1;
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      iVar92 = auVar84._12_4_ + 1;
      *(int *)(pauVar37[4] + 8) = iVar77;
      *(int *)(pauVar37[4] + 0xc) = iVar78;
      *(int *)pauVar37[4] = iVar75;
      *(int *)(pauVar37[4] + 4) = iVar76;
      *(int *)(pauVar37[5] + 8) = iVar82;
      *(int *)(pauVar37[5] + 0xc) = iVar83;
      *(int *)pauVar37[5] = iVar80;
      *(int *)(pauVar37[5] + 4) = iVar81;
      *(int *)(pauVar37[6] + 8) = iVar87;
      *(int *)(pauVar37[6] + 0xc) = iVar88;
      *(int *)pauVar37[6] = iVar85;
      *(int *)(pauVar37[6] + 4) = iVar86;
      *(int *)(pauVar37[7] + 8) = iVar91;
      *(int *)(pauVar37[7] + 0xc) = iVar92;
      *(int *)pauVar37[7] = iVar89;
      *(int *)(pauVar37[7] + 4) = iVar90;
      auVar51 = NEON_ushl(pauVar37[8],auVar67,4);
      auVar73 = NEON_ushl(pauVar37[9],auVar67,4);
      auVar79 = NEON_ushl(pauVar37[10],auVar67,4);
      auVar84 = NEON_ushl(pauVar37[0xb],auVar67,4);
      iVar93 = auVar51._0_4_ + 1;
      iVar94 = auVar51._4_4_ + 1;
      iVar95 = auVar51._8_4_ + 1;
      iVar96 = auVar51._12_4_ + 1;
      iVar97 = auVar73._0_4_ + 1;
/* no support for modified copies - github.com/pengussy */
      iVar98 = auVar73._4_4_ + 1;
      iVar99 = auVar73._8_4_ + 1;
      iVar100 = auVar73._12_4_ + 1;
      iVar101 = auVar79._0_4_ + 1;
      iVar102 = auVar79._4_4_ + 1;
      iVar103 = auVar79._8_4_ + 1;
      iVar104 = auVar79._12_4_ + 1;
      iVar105 = auVar84._0_4_ + 1;
      iVar106 = auVar84._4_4_ + 1;
      iVar107 = auVar84._8_4_ + 1;
      iVar108 = auVar84._12_4_ + 1;
      *(int *)(pauVar37[8] + 8) = iVar95;
      *(int *)(pauVar37[8] + 0xc) = iVar96;
      *(int *)pauVar37[8] = iVar93;
      *(int *)(pauVar37[8] + 4) = iVar94;
      *(int *)(pauVar37[9] + 8) = iVar99;
      *(int *)(pauVar37[9] + 0xc) = iVar100;
      *(int *)pauVar37[9] = iVar97;
      *(int *)(pauVar37[9] + 4) = iVar98;
      *(int *)(pauVar37[10] + 8) = iVar103;
/* do not claim this as your own - github.com/pengussy */
      *(int *)(pauVar37[10] + 0xc) = iVar104;
      *(int *)pauVar37[10] = iVar101;
      *(int *)(pauVar37[10] + 4) = iVar102;
      *(int *)(pauVar37[0xb] + 8) = iVar107;
      *(int *)(pauVar37[0xb] + 0xc) = iVar108;
      *(int *)pauVar37[0xb] = iVar105;
      *(int *)(pauVar37[0xb] + 4) = iVar106;
      auVar51 = NEON_ushl(pauVar37[0xc],auVar67,4);
      iVar48 = auVar51._0_4_ + 1;
      iVar49 = auVar51._4_4_ + 1;
      iVar50 = auVar51._8_4_ + 1;
      iVar52 = auVar51._12_4_ + 1;
      *(int *)(pauVar37[0xc] + 8) = iVar50;
      *(int *)(pauVar37[0xc] + 0xc) = iVar52;
      *(int *)pauVar37[0xc] = iVar48;
      *(int *)(pauVar37[0xc] + 4) = iVar49;
      iVar45 = (*(uint *)pauVar37[0xd] >> (ulong)(uVar44 & 0x1f)) + 1;
      uVar44 = iVar45 + iVar48 + iVar105 + iVar89 + iVar69 +
                                 iVar101 + iVar85 + iVar61 +
                                 iVar97 + iVar80 + iVar57 + iVar93 + iVar75 + iVar53 +
                                 iVar106 + iVar90 + iVar70 +
                                 iVar102 + iVar86 + iVar62 +
                                 iVar98 + iVar81 + iVar58 + iVar94 + iVar76 + iVar54 +
                                 iVar107 + iVar91 + iVar71 +
                                 iVar103 + iVar87 + iVar64 +
                                 iVar99 + iVar82 + iVar59 + iVar95 + iVar77 + iVar55 +
                                 iVar108 + iVar92 + iVar72 +
                                 iVar104 + iVar88 + iVar66 +
                                 iVar100 + iVar83 + iVar60 + iVar96 + iVar78 + iVar56 + iVar49 +
                        iVar50 + iVar52;
      *(int *)pauVar37[0xd] = iVar45;
    }
    *(uint *)(param_1 + 7) = uVar44;
    puVar36 = (uint *)param_1[3];
    uVar44 = *puVar36 + puVar36[0x10] + puVar36[8] + puVar36[0x18] +
             puVar36[4] + puVar36[0x14] + puVar36[0xc] + (int)*(undefined8 *)(puVar36 + 0x1c) +
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
             puVar36[1] + puVar36[0x11] + puVar36[9] + puVar36[0x19] +
             puVar36[5] + puVar36[0x15] +
             puVar36[0xd] + (int)((ulong)*(undefined8 *)(puVar36 + 0x1c) >> 0x20) +
             puVar36[2] + puVar36[0x12] + puVar36[10] + puVar36[0x1a] +
             puVar36[6] + puVar36[0x16] + puVar36[0xe] + (int)*(undefined8 *)(puVar36 + 0x1e) +
             puVar36[3] + puVar36[0x13] + puVar36[0xb] + puVar36[0x1b] +
             puVar36[7] + puVar36[0x17] +
             puVar36[0xf] + (int)((ulong)*(undefined8 *)(puVar36 + 0x1e) >> 0x20);
    if (0xfff < uVar44) {
      uVar28 = (uint)LZCOUNT(uVar44 >> 0xb) ^ 0x1f;
      uVar44 = (*puVar36 >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar39 = (puVar36[1] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar63 = (puVar36[2] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar65 = (puVar36[3] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar1 = (puVar36[4] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar2 = (puVar36[5] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar3 = (puVar36[6] >> (ulong)(uVar28 & 0x1f)) + 1;
      *puVar36 = uVar44;
      puVar36[1] = uVar39;
      uVar4 = (puVar36[7] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[2] = uVar63;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      puVar36[3] = uVar65;
      uVar5 = (puVar36[8] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar6 = (puVar36[9] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[4] = uVar1;
      puVar36[5] = uVar2;
      uVar7 = (puVar36[10] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[6] = uVar3;
      puVar36[7] = uVar4;
      uVar8 = (puVar36[0xb] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[8] = uVar5;
      puVar36[9] = uVar6;
      uVar9 = (puVar36[0xc] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar10 = (puVar36[0xd] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[10] = uVar7;
      puVar36[0xb] = uVar8;
      uVar11 = (puVar36[0xe] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0xc] = uVar9;
      puVar36[0xd] = uVar10;
      uVar12 = (puVar36[0xf] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0xe] = uVar11;
      puVar36[0xf] = uVar12;
      uVar13 = (puVar36[0x10] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar14 = (puVar36[0x11] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0x10] = uVar13;
      puVar36[0x11] = uVar14;
      uVar15 = (puVar36[0x12] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar16 = (puVar36[0x13] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0x12] = uVar15;
      puVar36[0x13] = uVar16;
      uVar17 = (puVar36[0x14] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar18 = (puVar36[0x15] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0x14] = uVar17;
      puVar36[0x15] = uVar18;
      uVar19 = (puVar36[0x16] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar20 = (puVar36[0x17] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0x16] = uVar19;
      puVar36[0x17] = uVar20;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
      uVar21 = (puVar36[0x18] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar22 = (puVar36[0x19] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0x18] = uVar21;
      puVar36[0x19] = uVar22;
      uVar23 = (puVar36[0x1a] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar24 = (puVar36[0x1b] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0x1a] = uVar23;
      puVar36[0x1b] = uVar24;
      uVar25 = (puVar36[0x1c] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar26 = (puVar36[0x1d] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar27 = (puVar36[0x1e] >> (ulong)(uVar28 & 0x1f)) + 1;
      puVar36[0x1c] = uVar25;
      puVar36[0x1d] = uVar26;
      uVar28 = (puVar36[0x1f] >> (ulong)(uVar28 & 0x1f)) + 1;
      uVar44 = uVar28 + uVar27 + uVar26 +
               uVar25 + uVar24 + uVar23 + uVar22 + uVar21 + uVar20 + uVar19 +
               uVar18 + uVar17 + uVar16 + uVar15 + uVar14 + uVar13 +
               uVar12 + uVar11 + uVar10 + uVar9 + uVar8 +
               uVar7 + uVar6 + uVar5 + uVar4 +
               uVar3 + uVar2 + uVar1 + uVar65 + uVar63 + uVar39 + uVar44;
      puVar36[0x1e] = uVar27;
      puVar36[0x1f] = uVar28;
    }
  }
  *(uint *)((long)param_1 + 0x3c) = uVar44;
  iVar45 = (int)param_1[0xc];
joined_r0x002e6aa0:
  if (iVar45 != 2) {
/* found on a paste site? it was re-uploaded illegally */
    iVar45 = (int)param_1[6] + 1;
    uVar39 = (uint)LZCOUNT(iVar45);
    iVar48 = uVar39 * -0x100 + 0x1f00;
    if (param_4 != 0) {
      iVar48 = ((uint)(iVar45 * 0x100) >> (ulong)(~uVar39 & 0x1f)) + (0x1f - uVar39) * 0x100;
    }
    *(int *)(param_1 + 8) = iVar48;
  }
  iVar45 = *(int *)((long)param_1 + 0x34) + 1;
  uVar39 = (uint)LZCOUNT(iVar45);
  if (param_4 == 0) {
    iVar45 = uVar39 * -0x100 + 0x1f00;
    lVar40 = CONCAT44(LZCOUNT(uVar44 + 1) * -0x100 + 0x1f00,
                      LZCOUNT((int)param_1[7] + 1) * -0x100 + 0x1f00);
  }
  else {
    iVar45 = ((uint)(iVar45 * 0x100) >> (ulong)(~uVar39 & 0x1f)) + (0x1f - uVar39) * 0x100;
    iVar48 = (int)param_1[7] + 1;
    iVar49 = 0x1f - LZCOUNT(iVar48);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    iVar50 = 0x1f - LZCOUNT(uVar44 + 1);
    uVar47 = NEON_ushl(CONCAT44((uVar44 + 1) * 0x100,iVar48 * 0x100),CONCAT44(-iVar50,-iVar49),4);
    lVar40 = CONCAT44(iVar50 * 0x100 + (int)((ulong)uVar47 >> 0x20),iVar49 * 0x100 + (int)uVar47);
  }
  *(int *)((long)param_1 + 0x44) = iVar45;
  param_1[9] = lVar40;
  return;
}

