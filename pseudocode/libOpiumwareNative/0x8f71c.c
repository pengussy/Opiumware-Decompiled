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
 *  file-id: 0x8f71c:917dda3287
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_0008f71c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong *******pppppppuVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  ulong *******pppppppuVar5;
  ulong *puVar6;
  ulong *******pppppppuVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
  char *pcVar19;
  char *pcVar20;
  undefined8 uVar21;
  ulong *******pppppppuVar22;
  undefined8 *puVar23;
  byte *pbVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulong uVar27;
  byte bVar28;
  uint uVar29;
  uint uVar30;
  ulong *puVar31;
  ulong uVar32;
  char **ppcVar33;
  char cVar34;
  ulong uVar35;
  uint *puVar36;
  ulong *******pppppppuVar37;
  ulong uVar38;
  ulong uVar39;
  ulong ******ppppppuVar40;
  int iVar41;
  ulong *****pppppuVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  ulong ******ppppppuVar46;
  ulong *puVar47;
  ulong uVar48;
  int *piVar49;
  long lVar50;
  ulong *puStack_2f8;
  char *pcStack_288;
  char *pcStack_280;
  char *pcStack_278;
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  char *pcStack_270;
  char *pcStack_268;
  char *pcStack_260;
  char *pcStack_258;
  char *pcStack_250;
  char *pcStack_248;
  char *pcStack_240;
  char *pcStack_238;
  char *pcStack_230;
  char *pcStack_228;
  char *pcStack_220;
  char *pcStack_218;
  char *pcStack_210;
  ulong *******pppppppuStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  ulong *******apppppppuStack_1e8 [2];
  ulong ******ppppppuStack_1d8;
  undefined4 uStack_1d0;
  ulong *******pppppppuStack_1c8;
  ulong *******pppppppuStack_1c0;
  ulong *******pppppppuStack_1b8;
  ulong *puStack_1b0;
  ulong *puStack_1a8;
// stripping the watermark breaks the license
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  ulong ******ppppppuStack_148;
  ulong ******ppppppuStack_140;
  ulong ******ppppppuStack_138;
  ulong ******ppppppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
/*  no support for modified copies  */
  ulong *****pppppuStack_108;
  ulong ******ppppppuStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  byte bStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  uint uStack_bc;
  ulong uStack_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  ulong ******ppppppuStack_a8;
  undefined4 uStack_9c;
  ulong *******pppppppuStack_98;
  undefined8 uStack_90;
  ulong *******pppppppuStack_88;
  ulong *******pppppppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_c8 = func_0x00791650();
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  uStack_d0 = param_1;
  plVar14 = (long *)func_0x00790f58(param_1,1);
  lVar45 = *plVar14;
  uStack_180 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  puStack_1a8 = (ulong *)0x0;
  puStack_1b0 = (ulong *)0x0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_178 = 0x3f800000;
  uStack_150 = 0x3f800000;
  ppppppuStack_140 = (ulong ******)0x0;
  ppppppuStack_148 = (ulong ******)0x0;
  ppppppuStack_130 = (ulong ******)0x0;
  ppppppuStack_138 = (ulong ******)0x0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_118 = 0;
  uStack_110 = 0x3f800000;
  ppppppuStack_100 = (ulong ******)0x0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0x3f800000;
  bStack_d8 = 0xd;
  pppppuStack_108 = *(ulong ******)(lVar45 + 0x10);
  lVar15 = *(long *)(lVar45 + 0x18);
  if (lVar15 == 0) {
    pbVar24 = (byte *)(*pcRam00000000020656d0)();
/* WM - reversing this took months of machine time */
    if ((*pbVar24 & 1) == 0) {
      func_0x019bf378();
    }
    pcStack_288 = (char *)(*pcRam00000000020656b8)();
    if (*pcStack_288 == '\x01') {
      lVar15 = 0;
      uVar16 = 0x748c1b4d7380ea80;
      do {
        uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
        uVar27 = uVar43 ^ uVar43 >> 0x21;
        uVar29 = (uint)(byte)pcStack_288[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
        uVar29 = (uVar29 >> 7 & 1 | uVar29 << 1) -
                 (((uint)(uVar43 >> 0x29) | 1) + (int)(uVar27 >> 0x17));
        pcStack_288[lVar15 + 0x17] =
             ((byte)(uVar29 >> 6) & 3 | (char)uVar29 * '\x04') ^ (byte)uVar27;
        uVar16 = lVar15 + -0x61c8864680b583eb +
                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_288[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x16);
      *pcStack_288 = '\0';
    }
/*  unlicensed copy if this notice is missing  */
    pcStack_288 = pcStack_288 + 0x17;
    uVar18 = func_0x0011ab24(&pcStack_288);
    func_0x001284e8(param_3,uVar18);
  }
  else if (*(char *)(lVar45 + 4) == *(char *)(lVar15 + 3)) {
    uVar16 = func_0x00135e5c(lVar15,&puStack_1b0,param_3);
    puVar6 = puStack_1a8;
    if ((uVar16 & 1) != 0) {
      if (puStack_1b0 != puStack_1a8) {
        puVar47 = puStack_1b0;
        do {
          uVar16 = *puVar47;
          puVar31 = (ulong *)(uVar16 + 0x20);
          pppppppuStack_1c8 = (ulong *******)(*puVar31 ^ (ulong)puVar31);
          if ((ulong *)*puVar31 == puVar31) {
LAB_0008f874:
            iVar44 = *(int *)(uVar16 + 0xb0);
          }
          else {
            lVar15 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_1c8);
            ppppppuVar46 = ppppppuStack_140;
            ppppppuVar40 = ppppppuStack_148;
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
            if (lVar15 != 0) goto LAB_0008f874;
            uStack_90 = (ulong *******)ppppppuStack_140;
            if (ppppppuStack_140 < ppppppuStack_138) {
              uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
              *ppppppuStack_140 = (ulong *****)pppppppuStack_1c8;
              apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
              apppppppuStack_1e8[1] = &ppppppuStack_148;
            }
            else {
              uStack_1f0 = (ulong *******)&uStack_90;
              apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
              apppppppuStack_1e8[1] = &ppppppuStack_148;
              func_0x0000aad8(&uStack_1f0);
            }
            uStack_1f0 = &ppppppuStack_130;
            ppppppuStack_140 = (ulong ******)uStack_90;
            uStack_90 = (ulong *******)&pppppppuStack_1c8;
            lVar15 = func_0x00139a64(&uStack_1f0,&pppppppuStack_1c8,&UNK_01bd2568,&uStack_90,
                                     &pppppppuStack_208);
            *(int *)(lVar15 + 0x18) =
                 (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
            iVar44 = *(int *)(uVar16 + 0xb0);
          }
          if (0 < iVar44) {
            lVar50 = 0;
            lVar15 = 0;
            do {
/* watermarked copy - do not remove */
              if (*(int *)(*(long *)(uVar16 + 0x80) + lVar50 + 0xc) == 6) {
                pppppppuStack_1c8 = *(ulong ********)(*(long *)(uVar16 + 0x80) + lVar50);
                if (pppppppuStack_1c8 != (ulong *******)0x0) {
                  lVar17 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_1c8);
                  ppppppuVar46 = ppppppuStack_140;
                  ppppppuVar40 = ppppppuStack_148;
                  if (lVar17 == 0) {
                    uStack_90 = (ulong *******)ppppppuStack_140;
                    if (ppppppuStack_140 < ppppppuStack_138) {
                      uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                      *ppppppuStack_140 = (ulong *****)pppppppuStack_1c8;
                      apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
                      apppppppuStack_1e8[1] = &ppppppuStack_148;
                    }
                    else {
                      uStack_1f0 = (ulong *******)&uStack_90;
                      apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
                      apppppppuStack_1e8[1] = &ppppppuStack_148;
                      func_0x0000aad8(&uStack_1f0);
                    }
                    uStack_1f0 = &ppppppuStack_130;
                    ppppppuStack_140 = (ulong ******)uStack_90;
                    uStack_90 = (ulong *******)&pppppppuStack_1c8;
                    lVar17 = func_0x00139a64(&uStack_1f0,&pppppppuStack_1c8,&UNK_01bd2568,&uStack_90
                                             ,&pppppppuStack_208);
                    *(int *)(lVar17 + 0x18) =
                         (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                  }
                }
                iVar44 = *(int *)(uVar16 + 0xb0);
              }
              lVar15 = lVar15 + 1;
              lVar50 = lVar50 + 0x10;
// more drops soon - github.com/pengussy
            } while (lVar15 < iVar44);
          }
          if (0 < *(int *)(uVar16 + 0xa0)) {
            lVar50 = 0;
            lVar15 = 0;
            do {
              pppppppuStack_1c8 =
                   *(ulong ********)((*(ulong *)(uVar16 + 0x60) ^ uVar16 + 0x60) + lVar50);
              if (pppppppuStack_1c8 != (ulong *******)0x0) {
                lVar17 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_1c8);
                ppppppuVar46 = ppppppuStack_140;
                ppppppuVar40 = ppppppuStack_148;
                if (lVar17 == 0) {
                  uStack_90 = (ulong *******)ppppppuStack_140;
                  if (ppppppuStack_140 < ppppppuStack_138) {
                    uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                    *ppppppuStack_140 = (ulong *****)pppppppuStack_1c8;
                    apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
                    apppppppuStack_1e8[1] = &ppppppuStack_148;
                  }
                  else {
                    uStack_1f0 = (ulong *******)&uStack_90;
                    apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
                    apppppppuStack_1e8[1] = &ppppppuStack_148;
                    func_0x0000aad8(&uStack_1f0);
                  }
                  uStack_1f0 = &ppppppuStack_130;
                  ppppppuStack_140 = (ulong ******)uStack_90;
                  uStack_90 = (ulong *******)&pppppppuStack_1c8;
                  lVar17 = func_0x00139a64(&uStack_1f0,&pppppppuStack_1c8,&UNK_01bd2568,&uStack_90,
                                           &pppppppuStack_208);
                  *(int *)(lVar17 + 0x18) =
                       (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                }
              }
              lVar15 = lVar15 + 1;
              lVar50 = lVar50 + 0x18;
/*  watermarked copy - do not remove  */
            } while (lVar15 < *(int *)(uVar16 + 0xa0));
          }
          if (0 < *(int *)(uVar16 + 0x98)) {
            lVar15 = 0;
            do {
              pppppppuStack_1c8 =
                   *(ulong ********)((long)(uVar16 + 0x10) + lVar15 * 8 + *(long *)(uVar16 + 0x10));
              if (pppppppuStack_1c8 != (ulong *******)0x0) {
                lVar50 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_1c8);
                ppppppuVar46 = ppppppuStack_140;
                ppppppuVar40 = ppppppuStack_148;
                if (lVar50 == 0) {
                  uStack_90 = (ulong *******)ppppppuStack_140;
                  if (ppppppuStack_140 < ppppppuStack_138) {
                    uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                    *ppppppuStack_140 = (ulong *****)pppppppuStack_1c8;
                    apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
                    apppppppuStack_1e8[1] = &ppppppuStack_148;
                  }
                  else {
                    uStack_1f0 = (ulong *******)&uStack_90;
                    apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_1c8;
                    apppppppuStack_1e8[1] = &ppppppuStack_148;
                    func_0x0000aad8(&uStack_1f0);
                  }
                  uStack_1f0 = &ppppppuStack_130;
                  ppppppuStack_140 = (ulong ******)uStack_90;
                  uStack_90 = (ulong *******)&pppppppuStack_1c8;
                  lVar50 = func_0x00139a64(&uStack_1f0,&pppppppuStack_1c8,&UNK_01bd2568,&uStack_90,
                                           &pppppppuStack_208);
                  *(int *)(lVar50 + 0x18) =
                       (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                }
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < *(int *)(uVar16 + 0x98));
/* wm:origin: github.com/pengussy */
          }
          puVar47 = puVar47 + 1;
        } while (puVar47 != puVar6);
        func_0x007911b0(param_1,1);
        func_0x00793bd0(param_1,0,0);
        uVar18 = func_0x00791624(param_1,0xffffffff);
        pppppppuStack_1c8 = (ulong *******)0x0;
        pppppppuStack_1c0 = (ulong *******)0x0;
        pppppppuStack_1b8 = (ulong *******)0x0;
        uVar16 = (ulong)*(byte *)(lVar45 + 4);
        if (uVar16 != 0) {
          pppppppuStack_1c8 = (ulong *******)__Znwm(uVar16 << 5);
          pppppppuStack_1b8 = pppppppuStack_1c8 + uVar16 * 4;
          pppppppuStack_1c0 = pppppppuStack_1c8;
          if (*(char *)(lVar45 + 4) != '\0') {
            uVar16 = 0;
            piVar49 = (int *)(lVar45 + 0x2c);
            do {
              apppppppuStack_1e8[0] = (ulong *******)0x0;
              uStack_1f0 = (ulong *******)0x0;
              ppppppuStack_1d8 = (ulong ******)(ulong)(*piVar49 == 0x10);
              if (*piVar49 == 0x10) {
                apppppppuStack_1e8[1] = *(ulong ********)(piVar49 + -3);
              }
              else {
                apppppppuStack_1e8[1] = (ulong *******)0x0;
              }
              uVar16 = uVar16 + 1;
              lVar15 = func_0x00795ba0(param_1,1,uVar16);
              if (lVar15 == 0) {
                pbVar24 = (byte *)(*pcRam0000000002065850)();
                if ((*pbVar24 & 1) == 0) {
                  func_0x019bf030();
                }
// WM - proprietary - see LICENSE - do not sell
                pcStack_218 = (char *)(*pcRam0000000002065838)();
                if (*pcStack_218 == '\x01') {
                  lVar15 = 0;
                  uVar16 = 0xa2fac5f64d91288a;
                  do {
                    uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                    uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                    uVar27 = uVar43 ^ uVar43 >> 0x21;
                    uVar29 = (uint)(byte)pcStack_218[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                    uVar29 = (uVar29 >> 7 & 1 | uVar29 << 1) -
                             (((uint)(uVar43 >> 0x29) | 1) + (int)(uVar27 >> 0x17));
                    pcStack_218[lVar15 + 0x20] =
                         ((byte)(uVar29 >> 7) & 1 | (char)uVar29 * '\x02') ^ (byte)uVar27;
                    uVar16 = lVar15 + -0x61c8864680b583eb +
                             (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_218[lVar15 + 1]) << 0x11);
                    lVar15 = lVar15 + 1;
                  } while (lVar15 != 0x1f);
                  *pcStack_218 = '\0';
                }
                pcStack_218 = pcStack_218 + 0x20;
                uVar18 = func_0x0011ab24(&pcStack_218);
                func_0x001284e8(param_3,uVar18);
                goto LAB_00090c18;
              }
              plVar14 = (long *)func_0x00790f58(param_1,0xffffffff);
              apppppppuStack_1e8[0] = (ulong *******)plVar14[1];
              uStack_1f0 = (ulong *******)*plVar14;
              func_0x00794504(param_1,uVar18,uVar16);
              pppppppuStack_208 = pppppppuStack_1c0;
              pppppppuStack_88 = (ulong *******)&uStack_1f0;
              uStack_90 = (ulong *******)&pppppppuStack_208;
/* WM - origin: github.com/pengussy */
              pppppppuStack_80 = (ulong *******)&pppppppuStack_1c8;
              if (pppppppuStack_1c0 < pppppppuStack_1b8) {
                pppppppuVar37 = pppppppuStack_1c0 + 4;
                pppppppuStack_1c0[1] = (ulong ******)apppppppuStack_1e8[0];
                *pppppppuStack_1c0 = (ulong ******)uStack_1f0;
                pppppppuStack_1c0[3] = ppppppuStack_1d8;
                pppppppuStack_1c0[2] = (ulong ******)apppppppuStack_1e8[1];
                iVar44 = *(int *)((long)pppppppuStack_1c0 + 0xc);
                pppppppuStack_1c0 = pppppppuVar37;
                if (iVar44 != 8) goto LAB_0008ff78;
LAB_0008feb4:
                ppppppuVar40 = pppppppuStack_1c0[-4];
                if ((((*(char *)((long)ppppppuVar40 + 3) == '\0') &&
                     (*(char *)((long)ppppppuVar40 + 4) == '\0')) &&
                    (ppppppuVar40[2] == pppppuStack_108)) &&
                   (uVar43 = func_0x00135e5c(ppppppuVar40[3],&puStack_1b0,param_3),
                   (uVar43 & 1) == 0)) goto LAB_00090c18;
              }
              else {
                func_0x00139ea0(&uStack_90);
                pppppppuStack_1c0 = pppppppuStack_208;
                iVar44 = *(int *)((long)pppppppuStack_208 + -0x14);
                if (iVar44 == 8) goto LAB_0008feb4;
LAB_0008ff78:
                if (iVar44 == 6) {
/* keep the notice, keep the source honest - github.com/pengussy */
                  ppppppuStack_a8 = pppppppuStack_1c0[-4];
                  if (ppppppuStack_a8 != (ulong ******)0x0) {
                    lVar15 = func_0x001393dc(&ppppppuStack_130,&ppppppuStack_a8);
                    ppppppuVar46 = ppppppuStack_140;
                    ppppppuVar40 = ppppppuStack_148;
                    if (lVar15 == 0) {
                      pppppppuStack_208 = (ulong *******)ppppppuStack_140;
                      pppppppuStack_88 = &ppppppuStack_a8;
                      pppppppuStack_80 = &ppppppuStack_148;
                      if (ppppppuStack_140 < ppppppuStack_138) {
                        pppppppuStack_208 = (ulong *******)(ppppppuStack_140 + 1);
                        *ppppppuStack_140 = (ulong *****)ppppppuStack_a8;
                      }
                      else {
                        uStack_90 = (ulong *******)&pppppppuStack_208;
                        func_0x0000aad8(&uStack_90);
                      }
                      ppppppuStack_140 = (ulong ******)pppppppuStack_208;
                      pppppppuStack_208 = &ppppppuStack_a8;
                      uStack_90 = &ppppppuStack_130;
                      lVar15 = func_0x00139a64(&uStack_90,&ppppppuStack_a8,&UNK_01bd2568,
                                               &pppppppuStack_208,&pppppppuStack_98);
                      *(int *)(lVar15 + 0x18) =
/* wm:chat: discord.gg/sdkhDjTex */
                           (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                    }
                  }
                }
                else if ((iVar44 == 4) && (bStack_d8 < 9)) {
                  bStack_d8 = 8;
                }
              }
              piVar49 = piVar49 + 4;
            } while (uVar16 < *(byte *)(lVar45 + 4));
          }
        }
        puVar6 = puStack_1a8;
        if (puStack_1b0 != puStack_1a8) {
          puVar47 = puStack_1b0;
          do {
            uVar16 = *puVar47;
/* chat: discord.gg/sdkhDjTex */
            puVar31 = (ulong *)(uVar16 + 0x20);
            pppppppuStack_208 = (ulong *******)(*puVar31 ^ (ulong)puVar31);
            if ((ulong *)*puVar31 == puVar31) {
LAB_000900e4:
              iVar44 = *(int *)(uVar16 + 0xb0);
            }
            else {
              lVar15 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_208);
              ppppppuVar46 = ppppppuStack_140;
              ppppppuVar40 = ppppppuStack_148;
              if (lVar15 != 0) goto LAB_000900e4;
              uStack_90 = (ulong *******)ppppppuStack_140;
              if (ppppppuStack_140 < ppppppuStack_138) {
                uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                *ppppppuStack_140 = (ulong *****)pppppppuStack_208;
                apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                apppppppuStack_1e8[1] = &ppppppuStack_148;
              }
              else {
                uStack_1f0 = (ulong *******)&uStack_90;
                apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                apppppppuStack_1e8[1] = &ppppppuStack_148;
                func_0x0000aad8(&uStack_1f0);
              }
              uStack_1f0 = &ppppppuStack_130;
              ppppppuStack_140 = (ulong ******)uStack_90;
              uStack_90 = (ulong *******)&pppppppuStack_208;
              lVar15 = func_0x00139a64(&uStack_1f0,&pppppppuStack_208,&UNK_01bd2568,&uStack_90,
                                       &ppppppuStack_a8);
/* wm:keep the notice, keep the source honest */
              *(int *)(lVar15 + 0x18) =
                   (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
              iVar44 = *(int *)(uVar16 + 0xb0);
            }
            if (0 < iVar44) {
              lVar50 = 0;
              lVar15 = 0;
              do {
                if (*(int *)(*(long *)(uVar16 + 0x80) + lVar50 + 0xc) == 6) {
                  pppppppuStack_208 = *(ulong ********)(*(long *)(uVar16 + 0x80) + lVar50);
                  if (pppppppuStack_208 != (ulong *******)0x0) {
                    lVar17 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_208);
                    ppppppuVar46 = ppppppuStack_140;
                    ppppppuVar40 = ppppppuStack_148;
                    if (lVar17 == 0) {
                      uStack_90 = (ulong *******)ppppppuStack_140;
                      if (ppppppuStack_140 < ppppppuStack_138) {
/*
 *  donate: donate/README.md
 *
 *  @pengussy
 */
                        uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                        *ppppppuStack_140 = (ulong *****)pppppppuStack_208;
                        apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                        apppppppuStack_1e8[1] = &ppppppuStack_148;
                      }
                      else {
                        uStack_1f0 = (ulong *******)&uStack_90;
                        apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                        apppppppuStack_1e8[1] = &ppppppuStack_148;
                        func_0x0000aad8(&uStack_1f0);
                      }
                      uStack_1f0 = &ppppppuStack_130;
                      ppppppuStack_140 = (ulong ******)uStack_90;
                      uStack_90 = (ulong *******)&pppppppuStack_208;
                      lVar17 = func_0x00139a64(&uStack_1f0,&pppppppuStack_208,&UNK_01bd2568,
                                               &uStack_90,&ppppppuStack_a8);
                      *(int *)(lVar17 + 0x18) =
                           (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                    }
                  }
                  iVar44 = *(int *)(uVar16 + 0xb0);
                }
                lVar15 = lVar15 + 1;
                lVar50 = lVar50 + 0x10;
              } while (lVar15 < iVar44);
            }
            if (0 < *(int *)(uVar16 + 0xa0)) {
              lVar50 = 0;
              lVar15 = 0;
              do {
                pppppppuStack_208 =
                     *(ulong ********)((*(ulong *)(uVar16 + 0x60) ^ uVar16 + 0x60) + lVar50);
                if (pppppppuStack_208 != (ulong *******)0x0) {
                  lVar17 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_208);
                  ppppppuVar46 = ppppppuStack_140;
/*  keep the notice, keep the source honest  */
                  ppppppuVar40 = ppppppuStack_148;
                  if (lVar17 == 0) {
                    uStack_90 = (ulong *******)ppppppuStack_140;
                    if (ppppppuStack_140 < ppppppuStack_138) {
                      uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                      *ppppppuStack_140 = (ulong *****)pppppppuStack_208;
                      apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                      apppppppuStack_1e8[1] = &ppppppuStack_148;
                    }
                    else {
                      uStack_1f0 = (ulong *******)&uStack_90;
                      apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                      apppppppuStack_1e8[1] = &ppppppuStack_148;
                      func_0x0000aad8(&uStack_1f0);
                    }
                    uStack_1f0 = &ppppppuStack_130;
                    ppppppuStack_140 = (ulong ******)uStack_90;
                    uStack_90 = (ulong *******)&pppppppuStack_208;
                    lVar17 = func_0x00139a64(&uStack_1f0,&pppppppuStack_208,&UNK_01bd2568,&uStack_90
                                             ,&ppppppuStack_a8);
                    *(int *)(lVar17 + 0x18) =
                         (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                  }
// reversing this took months of machine time
                }
                lVar15 = lVar15 + 1;
                lVar50 = lVar50 + 0x18;
              } while (lVar15 < *(int *)(uVar16 + 0xa0));
            }
            if (0 < *(int *)(uVar16 + 0x98)) {
              lVar15 = 0;
              do {
                pppppppuStack_208 =
                     *(ulong ********)
                      ((long)(uVar16 + 0x10) + lVar15 * 8 + *(long *)(uVar16 + 0x10));
                if (pppppppuStack_208 != (ulong *******)0x0) {
                  lVar50 = func_0x001393dc(&ppppppuStack_130,&pppppppuStack_208);
                  ppppppuVar46 = ppppppuStack_140;
                  ppppppuVar40 = ppppppuStack_148;
                  if (lVar50 == 0) {
                    uStack_90 = (ulong *******)ppppppuStack_140;
                    if (ppppppuStack_140 < ppppppuStack_138) {
                      uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                      *ppppppuStack_140 = (ulong *****)pppppppuStack_208;
                      apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                      apppppppuStack_1e8[1] = &ppppppuStack_148;
                    }
                    else {
                      uStack_1f0 = (ulong *******)&uStack_90;
                      apppppppuStack_1e8[0] = (ulong *******)&pppppppuStack_208;
                      apppppppuStack_1e8[1] = &ppppppuStack_148;
                      func_0x0000aad8(&uStack_1f0);
                    }
                    uStack_1f0 = &ppppppuStack_130;
                    ppppppuStack_140 = (ulong ******)uStack_90;
                    uStack_90 = (ulong *******)&pppppppuStack_208;
                    lVar50 = func_0x00139a64(&uStack_1f0,&pppppppuStack_208,&UNK_01bd2568,&uStack_90
                                             ,&ppppppuStack_a8);
                    *(int *)(lVar50 + 0x18) =
                         (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                  }
                }
/* wm:watermarked copy - do not remove */
                lVar15 = lVar15 + 1;
              } while (lVar15 < *(int *)(uVar16 + 0x98));
            }
            puVar47 = puVar47 + 1;
          } while (puVar47 != puVar6);
        }
        puVar6 = puStack_1a8;
        if (puStack_1b0 != puStack_1a8) {
          puVar47 = puStack_1b0;
          do {
            ppppppuStack_a8 = (ulong ******)*puVar47;
            apppppppuStack_1e8[0] = (ulong *******)0x0;
            uStack_1f0 = (ulong *******)0x0;
            ppppppuStack_1d8 = (ulong ******)0x0;
            apppppppuStack_1e8[1] = (ulong *******)0x0;
            uStack_1d0 = 0x3f800000;
            pppppppuVar37 = apppppppuStack_1e8[1];
            if (*(int *)(ppppppuStack_a8 + 0x17) < 1) {
joined_r0x00090778:
              for (; pppppppuVar5 = uStack_1f0, pppppppuVar37 != (ulong *******)0x0;
                  pppppppuVar37 = (ulong *******)*pppppppuVar37) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
                __ZdlPv();
              }
            }
            else {
              uVar16 = 0;
              do {
                iVar44 = *(int *)((long)ppppppuStack_a8[0x11] + uVar16 * 4);
                if (lRam000000000208f808 != -1) {
                  pppppppuStack_208 = (ulong *******)&uStack_90;
                  uStack_90 = (ulong *******)&pppppppuStack_98;
                  __ZNSt3__111__call_onceERVmPvPFvS2_E(0x208f808,&pppppppuStack_208,&DAT_0013c364);
                }
                bVar28 = *(char *)((ulong)(byte)iVar44 * 2 + 0x2092a88) * -0x35;
                if (0x5e < bVar28) {
                  pbVar24 = (byte *)(*pcRam0000000002065880)();
                  if ((*pbVar24 & 1) == 0) {
                    func_0x019bf0a8();
                  }
                  pcStack_228 = (char *)(*pcRam0000000002065868)();
                  if (*pcStack_228 == '\x01') {
                    lVar15 = 0;
                    uVar16 = 0xb17a4defba5c1df;
                    do {
                      uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                      uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                      uVar27 = uVar43 ^ uVar43 >> 0x21;
                      uVar29 = (uint)(byte)pcStack_228[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                      uVar29 = (uVar29 >> 5 & 7 | uVar29 << 3) - (int)(uVar27 >> 0x17);
                      pcStack_228[lVar15 + 0x22] =
                           ((byte)(uVar29 >> 3) & 0x1f | (char)uVar29 * ' ') -
                           ((byte)(uVar43 >> 0x29) | 1) ^ (byte)uVar27;
                      uVar16 = lVar15 + -0x61c8864680b583eb +
/* wm:found on a paste site? it was re-uploaded illegally */
                               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_228[lVar15 + 1]) << 0x11);
                      lVar15 = lVar15 + 1;
                    } while (lVar15 != 0x21);
                    *pcStack_228 = '\0';
                  }
                  pcStack_228 = pcStack_228 + 0x22;
                  uVar18 = func_0x0011ab24(&pcStack_228);
                  func_0x001284e8(param_3,uVar18);
LAB_00090c10:
                  func_0x00043c94(&uStack_1f0);
                  goto LAB_00090c18;
                }
                iVar11 = func_0x0009e140();
                if (iVar11 < 1) {
LAB_000907d4:
                  pbVar24 = (byte *)(*pcRam00000000020658b0)();
// WM - unlicensed copy if this notice is missing
                  if ((*pbVar24 & 1) == 0) {
                    func_0x019bf06c();
                  }
                  pcStack_220 = (char *)(*pcRam0000000002065898)();
                  if (*pcStack_220 == '\x01') {
                    lVar15 = 0;
                    uVar16 = 0x4e7a3f41dd1a2e12;
                    do {
                      uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                      uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                      uVar27 = uVar43 ^ uVar43 >> 0x21;
                      uVar29 = (uint)(byte)pcStack_220[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                      uVar29 = (uVar29 >> 7 & 1 | uVar29 << 1) - (int)(uVar27 >> 0x17) ^
                               ((uint)(uVar43 >> 0x29) | 1);
                      pcStack_220[lVar15 + 0x28] =
                           ((byte)(uVar29 >> 3) & 0x1f | (byte)(uVar29 << 5)) - (char)uVar27;
                      uVar16 = lVar15 + -0x61c8864680b583eb +
                               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_220[lVar15 + 1]) << 0x11);
                      lVar15 = lVar15 + 1;
                    } while (lVar15 != 0x27);
                    *pcStack_220 = '\0';
                  }
                  pcStack_220 = pcStack_220 + 0x28;
/* WM - donate: donate/README.md */
                  uVar18 = func_0x0011ab24(&pcStack_220);
                  func_0x001284e8(param_3,uVar18);
                  goto LAB_00090c10;
                }
                iVar13 = *(int *)(ppppppuStack_a8 + 0x17);
                iVar41 = (int)uVar16;
                uVar29 = iVar11 + iVar41;
                uVar16 = (ulong)uVar29;
                if (iVar13 < (int)uVar29) goto LAB_000907d4;
                uVar12 = (uint)bVar28;
                if (uVar12 < 0x56) {
                  if (uVar12 - 0x53 < 3) {
                    bVar9 = 8 < bStack_d8;
                    bVar10 = bStack_d8 == 9;
                    bVar28 = 9;
                    goto LAB_0009057c;
                  }
                  uVar30 = iVar41 + 1;
/* WM - found on a paste site? it was re-uploaded illegally */
                  if (uVar12 == 0xc && (int)uVar30 < iVar13) {
                    iVar44 = iVar44 >> 0x10;
                    pppppppuStack_208 = (ulong *******)CONCAT44(pppppppuStack_208._4_4_,iVar44);
                    pppppppuStack_98 =
                         (ulong *******)
                         CONCAT44(pppppppuStack_98._4_4_,
                                  *(undefined4 *)((long)ppppppuStack_a8[0x11] + (ulong)uVar30 * 4));
                    if ((-1 < iVar44) && (iVar44 < *(int *)(ppppppuStack_a8 + 0x16))) {
                      uStack_90 = (ulong *******)&uStack_1f0;
                      func_0x0013a1d0(&uStack_90,&pppppppuStack_208,&pppppppuStack_208,
                                      &pppppppuStack_98);
                      iVar13 = *(int *)(ppppppuStack_a8 + 0x17);
                    }
                  }
                }
                else {
                  if (uVar12 - 0x57 < 2) {
                    bVar9 = 10 < bStack_d8;
                    bVar10 = bStack_d8 == 0xb;
                    bVar28 = 0xb;
                  }
                  else {
                    if (uVar12 != 0x56) goto LAB_00090584;
                    bVar9 = 9 < bStack_d8;
                    bVar10 = bStack_d8 == 10;
                    bVar28 = 10;
                  }
LAB_0009057c:
                  if (!bVar9 || bVar10) {
/* stripping the watermark breaks the license - github.com/pengussy */
                    bStack_d8 = bVar28;
                  }
                }
LAB_00090584:
              } while ((int)uVar29 < iVar13);
              pppppppuVar37 = apppppppuStack_1e8[1];
              if (ppppppuStack_1d8 == (ulong ******)0x0) goto joined_r0x00090778;
              pppppppuStack_208 = &ppppppuStack_a8;
              uStack_90 = &ppppppuStack_100;
              lVar15 = func_0x0013a4c4(&uStack_90,&ppppppuStack_a8,&UNK_01bd2568,&pppppppuStack_208,
                                       &pppppppuStack_98);
              if (*(long *)(lVar15 + 0x30) != 0) {
                plVar14 = *(long **)(lVar15 + 0x28);
                while (plVar14 != (long *)0x0) {
                  plVar14 = (long *)*plVar14;
                  __ZdlPv();
                }
                *(undefined8 *)(lVar15 + 0x28) = 0;
/* WM - watermarked copy - do not remove */
                if (*(long *)(lVar15 + 0x20) != 0) {
                  _bzero(*(undefined8 *)(lVar15 + 0x18),*(long *)(lVar15 + 0x20) << 3);
                }
                *(undefined8 *)(lVar15 + 0x30) = 0;
              }
              pppppppuVar37 = uStack_1f0;
              uStack_1f0 = (ulong *******)0x0;
              lVar50 = *(long *)(lVar15 + 0x18);
              *(ulong ********)(lVar15 + 0x18) = pppppppuVar37;
              if (lVar50 != 0) {
                __ZdlPv();
              }
              pppppppuVar5 = apppppppuStack_1e8[0];
              *(undefined8 *)(lVar15 + 0x28) = apppppppuStack_1e8[1];
              *(ulong ********)(lVar15 + 0x20) = apppppppuStack_1e8[0];
              apppppppuStack_1e8[0] = (ulong *******)0x0;
/* WM - if you paid for this, you were scammed */
              *(ulong *******)(lVar15 + 0x30) = ppppppuStack_1d8;
              *(undefined4 *)(lVar15 + 0x38) = uStack_1d0;
              bVar10 = ppppppuStack_1d8 == (ulong ******)0x0;
              ppppppuStack_1d8 = (ulong ******)0x0;
              pppppppuVar37 = apppppppuStack_1e8[1];
              if (bVar10) goto joined_r0x00090778;
              pppppppuVar37 = (ulong *******)apppppppuStack_1e8[1][1];
              if (((ulong)pppppppuVar5 & (long)pppppppuVar5 - 1U) == 0) {
                pppppppuVar37 = (ulong *******)((ulong)pppppppuVar37 & (long)pppppppuVar5 - 1U);
              }
              else if (pppppppuVar5 <= pppppppuVar37) {
                uVar16 = 0;
                if (pppppppuVar5 != (ulong *******)0x0) {
                  uVar16 = (ulong)pppppppuVar37 / (ulong)pppppppuVar5;
                }
                pppppppuVar37 = (ulong *******)((long)pppppppuVar37 - uVar16 * (long)pppppppuVar5);
              }
              *(undefined8 **)(*(long *)(lVar15 + 0x18) + (long)pppppppuVar37 * 8) =
                   (undefined8 *)(lVar15 + 0x28);
              apppppppuStack_1e8[1] = (ulong *******)0x0;
              ppppppuStack_1d8 = (ulong ******)0x0;
              pppppppuVar5 = uStack_1f0;
            }
            uStack_1f0 = (ulong *******)0x0;
            if (pppppppuVar5 != (ulong *******)0x0) {
              uStack_1f0 = (ulong *******)0x0;
              __ZdlPv();
            }
            puVar47 = puVar47 + 1;
          } while (puVar47 != puVar6);
        }
        lVar15 = func_0x001393dc(&uStack_198,(long *)(lVar45 + 0x18));
        puVar47 = puStack_1a8;
        puVar6 = puStack_1b0;
// if you paid for this, you were scammed
        pppppppuVar5 = pppppppuStack_1c0;
        pppppppuVar37 = pppppppuStack_1c8;
        if (lVar15 == 0) {
          pbVar24 = (byte *)(*pcRam00000000020658e0)();
          if ((*pbVar24 & 1) == 0) {
            func_0x019bf300();
          }
          pcStack_278 = (char *)(*pcRam00000000020658c8)();
          if (*pcStack_278 == '\x01') {
            lVar15 = 0;
            uVar16 = 0xf8c1dbb3cff21fae;
            do {
              uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
              uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
              uVar27 = uVar43 ^ uVar43 >> 0x21;
              uVar29 = (uint)(byte)pcStack_278[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
              uVar29 = (uVar29 >> 6 & 3 | uVar29 << 2) - (int)(uVar27 >> 0x17) ^
                       ((uint)(uVar43 >> 0x29) | 1);
              pcStack_278[lVar15 + 0x21] =
                   ((byte)(uVar29 >> 7) & 1 | (byte)(uVar29 << 1)) - (char)uVar27;
              uVar16 = lVar15 + -0x61c8864680b583eb +
/* wm:do not claim this as your own */
                       (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_278[lVar15 + 1]) << 0x11);
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0x20);
            *pcStack_278 = '\0';
          }
          pcStack_278 = pcStack_278 + 0x21;
          uVar18 = func_0x0011ab24(&pcStack_278);
          func_0x001284e8(param_3,uVar18);
LAB_00090c18:
          uVar16 = 0;
          goto LAB_00090c1c;
        }
        pppppppuStack_208 = (ulong *******)0x0;
        uStack_200 = 0;
        lStack_1f8 = 0;
        if ((pppppppuStack_1c8 != pppppppuStack_1c0) &&
           (uVar16 = func_0x00136718(param_1,&puStack_1b0,&pppppppuStack_1c8,
                                     *(undefined4 *)(lVar15 + 0x18),&pppppppuStack_208,param_3),
/* wm:if you paid for this, you were scammed */
           (uVar16 & 1) == 0)) goto LAB_0009324c;
        if (*(char *)((long)param_2 + 0x17) < '\0') {
          *(undefined1 *)*param_2 = 0;
          param_2[1] = 0;
        }
        else {
          *(undefined1 *)param_2 = 0;
          *(undefined1 *)((long)param_2 + 0x17) = 0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE7reserveEm(param_2,0x100);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2,(long)(char)bStack_d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,3);
        uVar43 = (ulong)((long)puVar47 - (long)puVar6) >> 3;
        uVar16 = (ulong)((long)ppppppuStack_140 - (long)ppppppuStack_148) >> 3;
        do {
          uVar12 = (uint)uVar16;
          uVar29 = 0;
          if (0x7f < uVar12) {
            uVar29 = 0xffffff80;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2,uVar29 | uVar12 & 0x7f);
          ppppppuVar46 = ppppppuStack_140;
          uVar16 = uVar16 >> 7 & 0x1ffffff;
          ppppppuVar40 = ppppppuStack_148;
        } while (0x7f < uVar12);
        for (; ppppppuVar40 != ppppppuVar46; ppppppuVar40 = ppppppuVar40 + 1) {
          pppppuVar42 = *ppppppuVar40;
          uVar29 = *(uint *)((long)pppppuVar42 + 0x14);
          do {
            uVar12 = 0;
/*  chat: discord.gg/sdkhDjTex  */
            if (0x7f < uVar29) {
              uVar12 = 0xffffff80;
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,uVar12 | uVar29 & 0x7f);
            bVar10 = 0x7f < uVar29;
            uVar29 = uVar29 >> 7;
          } while (bVar10);
          uVar27 = (ulong)*(uint *)((long)pppppuVar42 + 0x14);
          bVar28 = *(byte *)((long)param_2 + 0x17);
          lVar45 = (param_2[2] & 0x7fffffffffffffff) - 1;
          uVar16 = param_2[1];
          if (-1 < (char)bVar28) {
            lVar45 = 0x16;
            uVar16 = (ulong)bVar28;
          }
          if (lVar45 - uVar16 < uVar27) {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                      (param_2,lVar45,(uVar16 + uVar27) - lVar45,uVar16,uVar16,0,uVar27,
                       pppppuVar42 + 3);
          }
          else if (*(uint *)((long)pppppuVar42 + 0x14) != 0) {
            puVar23 = (undefined8 *)*param_2;
            if (-1 < (char)bVar28) {
              puVar23 = param_2;
            }
            _memmove((undefined1 *)((long)puVar23 + uVar16),pppppuVar42 + 3,uVar27);
            lVar45 = uVar16 + uVar27;
            if (*(char *)((long)param_2 + 0x17) < '\0') {
              param_2[1] = lVar45;
            }
/* WM - thanks for reading - discord.gg/sdkhDjTex */
            else {
              *(byte *)((long)param_2 + 0x17) = (byte)lVar45 & 0x7f;
            }
            *(undefined1 *)((long)puVar23 + lVar45) = 0;
          }
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,0);
        uVar29 = (uint)uVar43;
        if (pppppppuVar37 != pppppppuVar5) {
          uVar29 = uVar29 + 1;
        }
        do {
          uVar12 = 0;
          if (0x7f < uVar29) {
            uVar12 = 0xffffff80;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2,uVar12 | uVar29 & 0x7f);
          puVar6 = puStack_1a8;
          bVar10 = 0x7f < uVar29;
          uVar29 = uVar29 >> 7;
        } while (bVar10);
        puStack_2f8 = puStack_1b0;
        if (puStack_1b0 != puStack_1a8) {
          pcVar19 = (char *)(*pcRam0000000002065b08)();
          pcVar20 = (char *)(*pcRam0000000002065ad8)();
          do {
            uVar27 = *puStack_2f8;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,(long)*(char *)(uVar27 + 7));
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,(long)*(char *)(uVar27 + 4));
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,(long)*(char *)(uVar27 + 3));
// WM - chat: discord.gg/sdkhDjTex
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,(long)*(char *)(uVar27 + 6));
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                      (param_2,(long)*(char *)(uVar27 + 5));
            plVar14 = (long *)(uVar27 + 0x40);
            if (plVar14 == (long *)*plVar14) {
              uVar29 = 0;
            }
            else {
              uVar29 = *(uint *)(uVar27 + 0xb4) &
                       ((int)*(uint *)(uVar27 + 0xb4) >> 0x1f ^ 0xffffffffU);
            }
            uVar12 = uVar29;
            do {
              uVar30 = 0;
              if (0x7f < uVar12) {
/* WM - do not claim this as your own */
                uVar30 = 0xffffff80;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,uVar30 | uVar12 & 0x7f);
              bVar10 = 0x7f < uVar12;
              uVar12 = uVar12 >> 7;
            } while (bVar10);
            if (uVar29 != 0) {
              uVar16 = (ulong)uVar29;
              lVar45 = (long)*(char *)((long)param_2 + 0x17);
              if (lVar45 < 0) {
                lVar45 = param_2[1];
                lVar50 = (param_2[2] & 0x7fffffffffffffff) - 1;
                if ((ulong)(lVar50 - lVar45) < uVar16) goto LAB_00091060;
                puVar23 = (undefined8 *)*param_2;
              }
              else {
                lVar50 = 0x16;
// chat: discord.gg/sdkhDjTex
                puVar23 = param_2;
                if (0x16U - lVar45 < uVar16) {
LAB_00091060:
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE21__grow_by_and_replaceEmmmmmmPKc
                            (param_2,lVar50,(lVar45 + uVar16) - lVar50,lVar45,lVar45,0,uVar16);
                  goto LAB_000910c0;
                }
              }
              _memmove((long)puVar23 + lVar45,(long)plVar14 - *plVar14,uVar16);
              lVar45 = lVar45 + uVar16;
              if (*(char *)((long)param_2 + 0x17) < '\0') {
                param_2[1] = lVar45;
              }
              else {
                *(byte *)((long)param_2 + 0x17) = (byte)lVar45 & 0x7f;
              }
              *(undefined1 *)((long)puVar23 + lVar45) = 0;
            }
LAB_000910c0:
            uVar29 = *(uint *)(uVar27 + 0xb8);
/*  donate: donate/README.md  */
            do {
              uVar12 = 0;
              if (0x7f < uVar29) {
                uVar12 = 0xffffff80;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,uVar12 | uVar29 & 0x7f);
              bVar10 = 0x7f < uVar29;
              uVar29 = uVar29 >> 7;
            } while (bVar10);
            if (0 < *(int *)(uVar27 + 0xb8)) {
              uVar16 = 0;
              do {
                uVar29 = *(uint *)(*(long *)(uVar27 + 0x88) + uVar16 * 4);
                if (lRam000000000208f808 != -1) {
                  uStack_1f0 = &ppppppuStack_a8;
                  uStack_90 = (ulong *******)&uStack_1f0;
                  __ZNSt3__111__call_onceERVmPvPFvS2_E(0x208f808,&uStack_90,&DAT_0013c364);
                }
                bVar28 = *(char *)((ulong)(byte)uVar29 * 2 + 0x2092a88) * -0x35;
/* do not claim this as your own - github.com/pengussy */
                if (0x5e < bVar28) {
                  pbVar24 = (byte *)(*pcRam0000000002065a90)();
                  if ((*pbVar24 & 1) == 0) {
                    func_0x019bf2c4();
                  }
                  pcStack_270 = (char *)(*pcRam0000000002065a78)();
                  if (*pcStack_270 == '\x01') {
                    lVar15 = 0;
                    uVar16 = 0x506c1f4fbd87bc49;
                    do {
                      uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                      uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                      uVar27 = uVar43 ^ uVar43 >> 0x21;
                      uVar29 = (uint)(byte)pcStack_270[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                      uVar29 = (uVar29 >> 4 & 0xf | uVar29 << 4) - (int)(uVar27 >> 0x17);
                      pcStack_270[lVar15 + 0x22] =
                           ((byte)(uVar29 >> 4) & 0xf | (char)uVar29 * '\x10') -
                           ((byte)(uVar43 >> 0x29) | 1) ^ (byte)uVar27;
                      uVar16 = lVar15 + -0x61c8864680b583eb +
                               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_270[lVar15 + 1]) << 0x11);
                      lVar15 = lVar15 + 1;
                    } while (lVar15 != 0x21);
                    *pcStack_270 = '\0';
                  }
                  pcStack_270 = pcStack_270 + 0x22;
                  ppcVar33 = &pcStack_270;
                  goto LAB_0009323c;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                }
                if (lRam000000000208f808 != -1) {
                  uStack_1f0 = &ppppppuStack_a8;
                  uStack_90 = (ulong *******)&uStack_1f0;
                  __ZNSt3__111__call_onceERVmPvPFvS2_E(0x208f808,&uStack_90,&DAT_0013c364);
                }
                bVar3 = *(byte *)(((ulong)uVar29 & 0xff) * 2 + 0x2092a88);
                uVar12 = func_0x0009e140(bVar28);
                if ((int)uVar12 < 1) {
LAB_00092c40:
                  pbVar24 = (byte *)(*pcRam0000000002065ac0)();
                  if ((*pbVar24 & 1) == 0) {
                    func_0x019bf288();
                  }
                  pcStack_268 = (char *)(*pcRam0000000002065aa8)();
                  if (*pcStack_268 == '\x01') {
                    lVar15 = 0;
                    uVar16 = 0xf6f86aab6fecdca3;
                    do {
                      uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                      uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
/*  if you paid for this, you were scammed  */
                      uVar27 = uVar43 ^ uVar43 >> 0x21;
                      uVar29 = (uint)(byte)pcStack_268[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                      uVar29 = (uVar29 >> 1 & 0x7f | uVar29 << 7) - (int)(uVar27 >> 0x17) ^
                               ((uint)(uVar43 >> 0x29) | 1);
                      pcStack_268[lVar15 + 0x28] =
                           ((byte)(uVar29 >> 5) & 7 | (byte)(uVar29 << 3)) - (char)uVar27;
                      uVar16 = lVar15 + -0x61c8864680b583eb +
                               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_268[lVar15 + 1]) << 0x11);
                      lVar15 = lVar15 + 1;
                    } while (lVar15 != 0x27);
                    *pcStack_268 = '\0';
                  }
                  pcStack_268 = pcStack_268 + 0x28;
                  ppcVar33 = &pcStack_268;
                  goto LAB_0009323c;
                }
                iVar44 = (int)uVar16;
                uVar30 = uVar12 + iVar44;
                if (*(int *)(uVar27 + 0xb8) < (int)uVar30) goto LAB_00092c40;
                uStack_1f0 = (ulong *******)
                             CONCAT44(uStack_1f0._4_4_,uVar29 & 0xffffff00 | (uint)bVar3);
                func_0x0013be80(param_2,&uStack_1f0,(long)&uStack_1f0 + 4);
                if (uVar12 != 1) {
// found on a paste site? it was re-uploaded illegally
                  lVar45 = (ulong)uVar12 - 1;
                  lVar50 = uVar16 * 4;
                  do {
                    iVar44 = iVar44 + 1;
                    lVar50 = lVar50 + 4;
                    if (*(int *)(uVar27 + 0xb8) <= iVar44) break;
                    lVar17 = *(long *)(uVar27 + 0x88) + lVar50;
                    func_0x0013be80(param_2,lVar17,lVar17 + 4);
                    lVar45 = lVar45 + -1;
                  } while (lVar45 != 0);
                }
                uVar16 = (ulong)uVar30;
              } while ((int)uVar30 < *(int *)(uVar27 + 0xb8));
            }
            uVar29 = *(uint *)(uVar27 + 0xb0);
            do {
              uVar12 = 0;
              if (0x7f < uVar29) {
                uVar12 = 0xffffff80;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
/*  stripping the watermark breaks the license  */
                        (param_2,uVar12 | uVar29 & 0x7f);
              bVar10 = 0x7f < uVar29;
              uVar29 = uVar29 >> 7;
            } while (bVar10);
            if (0 < *(int *)(uVar27 + 0xb0)) {
              uVar48 = 0;
LAB_000912f8:
              lVar50 = *(long *)(uVar27 + 0x80);
              uStack_bc = 0;
              uStack_b8 = uVar27;
              lVar45 = func_0x001393dc(&ppppppuStack_100,&uStack_b8);
              if (((lVar45 != 0) && (uVar16 = *(ulong *)(lVar45 + 0x20), uVar16 != 0)) &&
                 (*(long *)(lVar45 + 0x30) != 0)) {
                uVar38 = uVar16 - 1;
                if ((uVar16 & uVar38) == 0) {
                  uVar32 = uVar16 + 0x7fffffff & uVar48;
                }
                else {
                  uVar32 = uVar48;
                  if (uVar16 <= uVar48) {
                    uVar32 = 0;
                    if (uVar16 != 0) {
                      uVar32 = uVar48 / uVar16;
                    }
                    uVar32 = uVar48 - uVar32 * uVar16;
                  }
                }
                plVar14 = *(long **)(*(long *)(lVar45 + 0x18) + uVar32 * 8);
                if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)
                   ) {
                  if ((uVar16 & uVar38) == 0) {
                    do {
                      if (plVar14[1] == uVar48) {
                        if (uVar48 == *(uint *)(plVar14 + 2)) goto LAB_00091b90;
                      }
                      else if ((plVar14[1] & uVar38) != uVar32) break;
                      plVar14 = (long *)*plVar14;
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                    } while (plVar14 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar38 = plVar14[1];
                      if (uVar38 == uVar48) {
                        if (uVar48 == *(uint *)(plVar14 + 2)) goto LAB_00091b90;
                      }
                      else {
                        if (uVar16 <= uVar38) {
                          uVar39 = 0;
                          if (uVar16 != 0) {
                            uVar39 = uVar38 / uVar16;
                          }
                          uVar38 = uVar38 - uVar39 * uVar16;
                        }
                        if (uVar38 != uVar32) break;
                      }
                      plVar14 = (long *)*plVar14;
                    } while (plVar14 != (long *)0x0);
                  }
                }
              }
              puVar2 = (ulong *)(lVar50 + uVar48 * 0x10);
              puVar47 = (ulong *)((long)puVar2 + 0xc);
              uVar29 = *(uint *)puVar47;
              if (4 < (int)uVar29) {
                if ((int)uVar29 < 7) {
                  if (uVar29 == 5) {
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2,7);
                    func_0x0013be80(param_2,puVar2,(uint *)((long)puVar2 + 4));
                    func_0x0013be80(param_2,(uint *)((long)puVar2 + 4),puVar2 + 1);
                    func_0x0013be80(param_2,puVar2 + 1,puVar47);
                    puVar31 = puVar2 + 2;
/* WM: proprietary - see LICENSE - do not sell @ discord.gg/sdkhDjTex */
                    goto LAB_000912d8;
                  }
                  if (uVar29 != 6) goto LAB_00093274;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2,3);
                  ppppppuStack_a8 = (ulong ******)*puVar2;
                  if (ppppppuStack_a8 == (ulong ******)0x0) {
                    uVar29 = 0;
                  }
                  else {
                    lVar45 = func_0x001393dc(&ppppppuStack_130,&ppppppuStack_a8);
                    ppppppuVar46 = ppppppuStack_140;
                    ppppppuVar40 = ppppppuStack_148;
                    if (lVar45 == 0) {
                      uStack_90 = (ulong *******)ppppppuStack_140;
                      uStack_1f0 = (ulong *******)&uStack_90;
                      apppppppuStack_1e8[0] = &ppppppuStack_a8;
                      if (ppppppuStack_140 < ppppppuStack_138) {
                        uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                        *ppppppuStack_140 = (ulong *****)ppppppuStack_a8;
                        apppppppuStack_1e8[1] = &ppppppuStack_148;
                      }
                      else {
                        apppppppuStack_1e8[1] = &ppppppuStack_148;
                        func_0x0000aad8(&uStack_1f0);
                      }
                      uStack_1f0 = &ppppppuStack_130;
                      ppppppuStack_140 = (ulong ******)uStack_90;
                      uStack_90 = &ppppppuStack_a8;
                      lVar45 = func_0x00139a64(&uStack_1f0,&ppppppuStack_a8,&UNK_01bd2568,&uStack_90
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
                                               ,&pppppppuStack_98);
                      uVar29 = (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                      *(uint *)(lVar45 + 0x18) = uVar29;
                    }
                    else {
                      uVar29 = *(uint *)(lVar45 + 0x18);
                    }
                  }
                  do {
                    uVar12 = 0;
                    if (0x7f < uVar29) {
                      uVar12 = 0xffffff80;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2,uVar12 | uVar29 & 0x7f);
                    bVar10 = 0x7f < uVar29;
                    uVar29 = uVar29 >> 7;
                  } while (bVar10);
                  goto LAB_000912e4;
                }
                if (uVar29 == 7) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2,8);
                  uVar16 = uStack_b8;
                  lVar45 = *(long *)(uStack_b8 + 0x80);
                  ppppppuVar40 = (ulong ******)*puVar2;
                  uStack_90 = (ulong *******)__Znwm(0x80);
                  pppppppuStack_80 = uStack_90 + 0x10;
                  uStack_9c = 7;
                  ppppppuStack_a8 = ppppppuVar40;
                  pppppppuStack_88 = uStack_90;
                  func_0x00790fe8(param_1,&ppppppuStack_a8);
                  uVar18 = func_0x00791624(param_1,0xffffffff);
                  uVar38 = 0;
LAB_00091600:
                  uVar38 = func_0x007952a0(param_1,uVar18,uVar38);
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
                  if (-1 < (int)uVar38) {
                    uVar21 = func_0x00790f58(param_1,0xfffffffe);
                    if (0 < *(int *)(uVar16 + 0xb0)) {
                      lVar17 = 0;
                      lVar50 = 0;
                      while (iVar44 = func_0x00856808(*(long *)(uVar16 + 0x80) + lVar17,uVar21),
                            iVar44 == 0) {
                        lVar50 = lVar50 + 1;
                        lVar17 = lVar17 + 0x10;
                        if (*(int *)(uVar16 + 0xb0) <= lVar50) goto LAB_0009180c;
                      }
                      iVar44 = (int)((ulong)((long)puVar2 - lVar45) >> 4);
                      iVar11 = (int)lVar50;
                      if (iVar44 <= iVar11) goto LAB_0009180c;
                      plVar14 = (long *)func_0x00790f58(param_1,0xffffffff);
                      if (*(int *)((long)plVar14 + 0xc) != 3) {
LAB_000916c0:
                        if (0 < *(int *)(uVar16 + 0xb0)) {
                          lVar17 = 0;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                          lVar50 = 0;
                          do {
                            puVar23 = (undefined8 *)(*(long *)(uVar16 + 0x80) + lVar17);
                            if ((*(int *)((long)puVar23 + 0xc) == 3) &&
                               (*(int *)((long)plVar14 + 0xc) == 3)) {
                              uStack_1f0 = (ulong *******)*puVar23;
                              pppppppuStack_98 = (ulong *******)0x0;
                              pcVar8 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
                              (*pcVar8)(&pppppppuStack_98,&uStack_1f0,8);
                              pppppppuVar7 = pppppppuStack_98;
                              uStack_1f0 = (ulong *******)*plVar14;
                              pppppppuStack_98 = (ulong *******)0x0;
                              pcVar8 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
                              (*pcVar8)(&pppppppuStack_98,&uStack_1f0,8);
                              if (pppppppuVar7 == pppppppuStack_98) goto LAB_00091788;
                            }
                            else {
                              iVar13 = func_0x00856808(puVar23,plVar14);
                              if (iVar13 != 0) goto LAB_00091788;
                            }
/*  found on a paste site? it was re-uploaded illegally  */
                            lVar50 = lVar50 + 1;
                            lVar17 = lVar17 + 0x10;
                            if (*(int *)(uVar16 + 0xb0) <= lVar50) break;
                          } while( true );
                        }
                        goto LAB_00091998;
                      }
                      uStack_1f0 = (ulong *******)*plVar14;
                      pppppppuStack_98 = (ulong *******)0x0;
                      pcVar8 = (code *)func_0x0011ab24(PTR__memcpy_01f20368);
                      (*pcVar8)(&pppppppuStack_98,&uStack_1f0,8);
                      if (pppppppuStack_98 != (ulong *******)0x0) goto LAB_000916c0;
                      lVar50 = 0xffffffff;
                      goto LAB_000917a0;
                    }
LAB_0009180c:
                    pbVar24 = (byte *)(*pcRam0000000002065af0)();
                    if ((*pbVar24 & 1) == 0) {
                      func_0x019bf198();
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
                      cVar34 = *pcVar20;
                    }
                    else {
                      cVar34 = *pcVar20;
                    }
                    if (cVar34 == '\x01') {
                      lVar45 = 0;
                      uVar16 = 0x5733ed068b5d7bd1;
                      do {
                        uVar32 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                        uVar32 = (uVar32 ^ uVar32 >> 0x21) * -0x3b314601e57a13ad;
                        uVar39 = uVar32 ^ uVar32 >> 0x21;
                        uVar29 = (uint)(byte)pcVar20[lVar45 + 1] ^ (uint)uVar39 ^ 0xffffffc3;
                        uVar29 = (uVar29 >> 6 & 3 | uVar29 << 2) -
                                 (((uint)(uVar32 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
                        pcVar20[lVar45 + 0x2c] =
                             ((byte)(uVar29 >> 4) & 0xf | (char)uVar29 * '\x10') ^ (byte)uVar39;
                        uVar16 = lVar45 + -0x61c8864680b583eb +
                                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar20[lVar45 + 1]) << 0x11);
                        lVar45 = lVar45 + 1;
                      } while (lVar45 != 0x2b);
                      *pcVar20 = '\0';
                    }
                    pcStack_248 = pcVar20 + 0x2c;
                    uVar18 = func_0x0011ab24(&pcStack_248);
                    func_0x001284e8(param_3,uVar18);
                    func_0x00791660(param_1,0xfffffffc);
                    goto LAB_00091ad4;
                  }
                  func_0x00791660(param_1,0xfffffffe);
                  uVar16 = (ulong)((long)pppppppuStack_88 - (long)uStack_90) >> 3;
                  do {
                    uVar12 = (uint)uVar16;
                    uVar29 = 0;
                    if (0x7f < uVar12) {
                      uVar29 = 0xffffff80;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
// WM - no support for modified copies
                              (param_2,uVar29 | uVar12 & 0x7f);
                    pppppppuVar7 = pppppppuStack_88;
                    uVar16 = uVar16 >> 7 & 0x1ffffff;
                  } while (0x7f < uVar12);
                  pppppppuVar22 = uStack_90;
                  if (uStack_90 != pppppppuStack_88) {
                    do {
                      uVar29 = *(uint *)pppppppuVar22;
                      do {
                        bVar28 = 0;
                        if (0x7f < uVar29) {
                          bVar28 = 0x80;
                        }
                        bVar3 = *(byte *)((long)param_2 + 0x17);
                        if ((char)bVar3 < '\0') {
                          uVar32 = param_2[1];
/* WM - no support for modified copies */
                          uVar16 = param_2[2] & 0x7fffffffffffffff;
                          uVar39 = uVar16 - 1;
                          if (uVar32 == uVar39) {
                            if (uVar16 < 0x7ffffffffffffff7) {
                              if (uVar39 < 0x3ffffffffffffff4) goto LAB_00091f0c;
                              uVar16 = 0x7ffffffffffffff8;
                              puVar23 = (undefined8 *)__Znwm(0x7ffffffffffffff8);
LAB_00091f40:
                              puVar25 = (undefined8 *)*param_2;
                              uVar32 = uVar39;
                              goto LAB_00091f48;
                            }
                            FUN_0000aa50();
                            goto LAB_000935ac;
                          }
                          puVar23 = (undefined8 *)*param_2;
LAB_00091f84:
                          param_2[1] = uVar32 + 1;
                        }
                        else {
                          if (bVar3 == 0x16) {
                            uVar39 = 0x16;
                            uVar16 = 0x17;
LAB_00091f0c:
                            if (uVar16 <= uVar39 * 2) {
                              uVar16 = uVar39 * 2;
                            }
                            uVar32 = (uVar16 & 0x7ffffffffffffff8) + 8;
                            uVar16 = 0x19;
                            if (uVar32 != 0x18) {
                              uVar16 = uVar32;
                            }
                            puVar23 = (undefined8 *)__Znwm(uVar16);
                            puVar25 = param_2;
                            uVar32 = uVar39;
                            if ((char)bVar3 < '\0') goto LAB_00091f40;
LAB_00091f48:
                            if (uVar32 != 0) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
                              _memmove(puVar23,puVar25,uVar32);
                            }
                            if ((char)bVar3 < '\0') {
                              __ZdlPv(*param_2);
                            }
                            *param_2 = puVar23;
                            param_2[2] = uVar16 | 0x8000000000000000;
                            goto LAB_00091f84;
                          }
                          uVar32 = (ulong)bVar3;
                          *(byte *)((long)param_2 + 0x17) = bVar3 + 1 & 0x7f;
                          puVar23 = param_2;
                        }
                        *(byte *)((long)puVar23 + uVar32) = bVar28 | (byte)uVar29 & 0x7f;
                        ((byte *)((long)puVar23 + uVar32))[1] = 0;
                        bVar10 = 0x7f < uVar29;
                        uVar29 = uVar29 >> 7;
                      } while (bVar10);
                      pppppppuVar1 = pppppppuVar22 + 1;
                      func_0x0013be80(param_2,(long)pppppppuVar22 + 4,pppppppuVar1);
                      pppppppuVar22 = pppppppuVar1;
                    } while (pppppppuVar1 != pppppppuVar7);
                    goto LAB_00091ad4;
                  }
                  uVar16 = 1;
                  goto joined_r0x00091adc;
                }
                if (uVar29 != 8) goto LAB_00093274;
                if (*(char *)(*puVar2 + 3) == '\0') {
                  lVar45 = func_0x001393dc(&uStack_198,*puVar2 + 0x18);
                  if (lVar45 == 0) {
// watermarked copy - do not remove
                    pbVar24 = (byte *)(*pcRam0000000002065b80)();
                    if ((*pbVar24 & 1) == 0) {
                      func_0x019bf120();
                    }
                    pcStack_238 = (char *)(*pcRam0000000002065b68)();
                    if (*pcStack_238 == '\x01') {
                      lVar15 = 0;
                      uVar16 = 0x606688004ef616c2;
                      do {
                        uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                        uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                        uVar27 = uVar43 ^ uVar43 >> 0x21;
                        uVar29 = (uint)(byte)pcStack_238[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                        uVar29 = (uVar29 >> 1 & 0x7f | uVar29 << 7) - (int)(uVar27 >> 0x17) ^
                                 ((uint)(uVar43 >> 0x29) | 1);
                        pcStack_238[lVar15 + 0x2a] =
                             ((byte)(uVar29 >> 3) & 0x1f | (byte)(uVar29 << 5)) - (char)uVar27;
                        uVar16 = lVar15 + -0x61c8864680b583eb +
                                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_238[lVar15 + 1]) << 0x11)
                        ;
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != 0x29);
                      *pcStack_238 = '\0';
                    }
                    pcStack_238 = pcStack_238 + 0x2a;
                    ppcVar33 = &pcStack_238;
                    goto LAB_000934c8;
                  }
/* no support for modified copies - github.com/pengussy */
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2,6);
                  uVar29 = *(uint *)(lVar45 + 0x18);
                  do {
                    uVar12 = 0;
                    if (0x7f < uVar29) {
                      uVar12 = 0xffffff80;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2,uVar12 | uVar29 & 0x7f);
                    bVar10 = 0x7f < uVar29;
                    uVar29 = uVar29 >> 7;
                  } while (bVar10);
                  goto LAB_000912e4;
                }
                if (uStack_b8 == 0) {
LAB_00092ff8:
                  pbVar24 = (byte *)(*pcRam0000000002065b50)();
                  if ((*pbVar24 & 1) == 0) goto LAB_00093558;
                  goto LAB_00093010;
                }
                lVar50 = *(long *)(uStack_b8 + 0x80);
                lVar45 = func_0x001393dc(&ppppppuStack_100,&uStack_b8);
                if (((lVar45 != 0) && (uVar16 = *(ulong *)(lVar45 + 0x20), uVar16 != 0)) &&
// WM - reversing this took months of machine time
                   (*(long *)(lVar45 + 0x30) != 0)) {
                  uVar32 = (long)puVar2 - lVar50;
                  uVar38 = (long)(uVar32 * 0x10000000) >> 0x20;
                  uVar39 = uVar16 - 1;
                  if ((uVar16 & uVar39) == 0) {
                    uVar35 = uVar39 & uVar38;
                  }
                  else {
                    uVar35 = uVar38;
                    if (uVar16 <= uVar38) {
                      uVar35 = 0;
                      if (uVar16 != 0) {
                        uVar35 = uVar38 / uVar16;
                      }
                      uVar35 = uVar38 - uVar35 * uVar16;
                    }
                  }
                  plVar14 = *(long **)(*(long *)(lVar45 + 0x18) + uVar35 * 8);
                  if ((plVar14 != (long *)0x0) &&
                     (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
                    iVar44 = (int)(uVar32 >> 4);
                    if ((uVar16 & uVar39) == 0) {
                      do {
                        if (plVar14[1] == uVar38) {
                          if ((int)plVar14[2] == iVar44) goto LAB_00091fc4;
                        }
                        else if ((plVar14[1] & uVar39) != uVar35) break;
                        plVar14 = (long *)*plVar14;
/* reversing this took months of machine time */
                      } while (plVar14 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar32 = plVar14[1];
                        if (uVar32 == uVar38) {
                          if ((int)plVar14[2] == iVar44) goto LAB_00091fc4;
                        }
                        else {
                          if (uVar16 <= uVar32) {
                            uVar39 = 0;
                            if (uVar16 != 0) {
                              uVar39 = uVar32 / uVar16;
                            }
                            uVar32 = uVar32 - uVar39 * uVar16;
                          }
                          if (uVar32 != uVar35) break;
                        }
                        plVar14 = (long *)*plVar14;
                      } while (plVar14 != (long *)0x0);
                    }
                  }
                }
                uStack_1f0 = (ulong *******)((ulong)uStack_1f0 & 0xffffffffffffff00);
                apppppppuStack_1e8[1] = (ulong *******)0x0;
                ppppppuStack_1d8 = (ulong ******)0x0;
                apppppppuStack_1e8[0] = (ulong *******)0x0;
                iVar44 = func_0x0013b2f0(param_1,pppppuStack_108,puVar2,&uStack_1f0);
                if (iVar44 == 0) goto LAB_00092ff8;
                bVar28 = (byte)uStack_1f0;
                uVar16 = (ulong)uStack_1f0 & 0xff;
                uVar29 = (uint)(byte)uStack_1f0;
                pppppppuStack_88 = (ulong *******)CONCAT44(pppppppuStack_88._4_4_,0xffffffff);
/* WM - unlicensed copy if this notice is missing */
                uStack_90 = (ulong *******)0xffffffffffffffff;
                if (2 < uVar29 - 1) goto LAB_00092ff8;
                uVar38 = 0;
                do {
                  if (0 < *(int *)(uStack_b8 + 0xb0)) {
                    lVar50 = 0;
                    lVar45 = 0;
                    uVar32 = uStack_b8;
                    do {
                      puVar23 = (undefined8 *)(*(long *)(uVar32 + 0x80) + lVar50);
                      if (*(int *)((long)puVar23 + 0xc) == 6) {
                        ppppppuVar40 = (ulong ******)*puVar23;
                        if (ppppppuVar40 != (ulong ******)0x0) {
                          ppppppuVar46 = (ulong ******)apppppppuStack_1e8[uVar38];
                          if (ppppppuVar40 == ppppppuVar46) {
LAB_00091d2c:
                            *(int *)((long)&uStack_90 + uVar38 * 4) = (int)lVar45;
                            break;
                          }
                          if ((ppppppuVar46 != (ulong ******)0x0) &&
                             (*(int *)((long)ppppppuVar40 + 0x14) ==
                              *(int *)((long)ppppppuVar46 + 0x14))) {
                            pcVar8 = (code *)func_0x0011ab24(PTR__memcmp_01f20360);
                            iVar44 = (*pcVar8)(ppppppuVar40 + 3,ppppppuVar46 + 3,
                                               *(undefined4 *)((long)ppppppuVar40 + 0x14));
                            if (iVar44 == 0) goto LAB_00091d2c;
                            uVar32 = uStack_b8;
                          }
                        }
                      }
                      lVar45 = lVar45 + 1;
                      lVar50 = lVar50 + 0x10;
                    } while (lVar45 < *(int *)(uVar32 + 0xb0));
                  }
                  uVar12 = *(uint *)((long)&uStack_90 + uVar38 * 4);
                } while ((-1 < (int)uVar12) && (uVar38 = uVar38 + 1, uVar38 < uVar16));
                uVar30 = ~uVar12 >> 0x1f;
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                if ((uVar29 != 0) && (-1 < (int)uVar12)) {
                  uVar38 = 1;
                  puVar36 = (uint *)&uStack_90;
                  do {
                    uVar29 = *puVar36;
                    uVar30 = (uint)(uVar29 < 0x400);
                    bVar10 = uVar38 < uVar16;
                    uVar38 = uVar38 + 1;
                    puVar36 = puVar36 + 1;
                  } while (uVar29 < 0x400 && bVar10);
                }
                if (uVar30 == 0) goto LAB_00092ff8;
                if (bVar28 == 3) {
                  uStack_bc = (uint)uStack_90 << 0x14 | uStack_90._4_4_ << 10 |
                              (uint)pppppppuStack_88 | 0xc0000000;
                }
                else if (bVar28 == 2) {
                  uStack_bc = (uint)uStack_90 << 0x14 | uStack_90._4_4_ << 10 | 0x80000000;
                }
                else {
                  if (bVar28 != 1) goto LAB_00092ff8;
                  uStack_bc = (uint)uStack_90 << 0x14 | 0x40000000;
                }
                goto LAB_00091de8;
              }
              if (2 < (int)uVar29) {
                if (uVar29 != 3) {
                  if (uVar29 != 4) goto LAB_00093274;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2,9);
                  uVar38 = *puVar2;
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
/* WM - keep the notice, keep the source honest */
                            (param_2,uVar38 >> 0x3f);
                  uVar16 = -uVar38;
                  if (-1 < (long)uVar38) {
                    uVar16 = uVar38;
                  }
                  do {
                    uVar29 = 0;
                    if (0x7f < uVar16) {
                      uVar29 = 0xffffff80;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2,uVar29 | (uint)uVar16 & 0x7f);
                    bVar10 = 0x7f < uVar16;
                    uVar16 = uVar16 >> 7;
                  } while (bVar10);
                  goto LAB_000912e4;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_2,2);
                puVar31 = puVar2 + 1;
                puVar47 = puVar2;
                goto LAB_000912d8;
              }
              if (uVar29 == 0) {
                bVar10 = false;
              }
              else {
                if (uVar29 != 1) {
/*  proprietary - see LICENSE - do not sell  */
LAB_00093274:
                  pbVar24 = (byte *)(*pcRam0000000002065bb0)();
                  if ((*pbVar24 & 1) == 0) {
                    func_0x019bf24c();
                  }
                  pcStack_260 = (char *)(*pcRam0000000002065b98)();
                  if (*pcStack_260 == '\x01') {
                    lVar15 = 0;
                    uVar16 = 0x53408eabdea9bb05;
                    do {
                      uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                      uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                      uVar27 = uVar43 ^ uVar43 >> 0x21;
                      uVar29 = (uint)(byte)pcStack_260[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                      uVar29 = (uVar29 >> 5 & 7 | uVar29 << 3) - (int)(uVar27 >> 0x17);
                      pcStack_260[lVar15 + 0x1b] =
                           ((byte)(uVar29 >> 7) & 1 | (char)uVar29 * '\x02') -
                           ((byte)(uVar43 >> 0x29) | 1) ^ (byte)uVar27;
                      uVar16 = lVar15 + -0x61c8864680b583eb +
                               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_260[lVar15 + 1]) << 0x11);
                      lVar15 = lVar15 + 1;
                    } while (lVar15 != 0x1a);
                    *pcStack_260 = '\0';
                  }
                  pcStack_260 = pcStack_260 + 0x1b;
                  ppcVar33 = &pcStack_260;
                  goto LAB_000934c8;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_2,1);
                bVar10 = (uint)*puVar2 != 0;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,bVar10);
              goto LAB_000912e4;
            }
LAB_00092020:
            uVar29 = *(uint *)(uVar27 + 0xac);
// WM - more drops soon - github.com/pengussy
            do {
              uVar12 = 0;
              if (0x7f < uVar29) {
                uVar12 = 0xffffff80;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,uVar12 | uVar29 & 0x7f);
              bVar10 = 0x7f < uVar29;
              uVar29 = uVar29 >> 7;
            } while (bVar10);
            if (0 < *(int *)(uVar27 + 0xac)) {
              lVar45 = 0;
              do {
                lVar50 = func_0x001393dc(&uStack_198,*(long *)(uVar27 + 0x58) + lVar45 * 8);
                if (lVar50 == 0) {
                  pcVar19 = (char *)(*pcRam0000000002065bc8)();
                  pbVar24 = (byte *)(*pcRam0000000002065be0)();
                  if ((*pbVar24 & 1) == 0) {
                    func_0x019bf210();
                    cVar34 = *pcVar19;
                  }
                  else {
                    cVar34 = *pcVar19;
                  }
                  if (cVar34 == '\x01') {
/* thanks for reading - discord.gg/sdkhDjTex */
                    lVar15 = 0;
                    uVar16 = 0xbf6cd95c9add229e;
                    do {
                      uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                      uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                      uVar27 = uVar43 ^ uVar43 >> 0x21;
                      uVar29 = (uint)(byte)pcVar19[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                      uVar29 = (uVar29 >> 3 & 0x1f | uVar29 << 5) - (int)(uVar27 >> 0x17);
                      pcVar19[lVar15 + 0x22] =
                           ((byte)(uVar29 >> 6) & 3 | (char)uVar29 * '\x04') -
                           ((byte)(uVar43 >> 0x29) | 1) ^ (byte)uVar27;
                      uVar16 = lVar15 + -0x61c8864680b583eb +
                               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar19[lVar15 + 1]) << 0x11);
                      lVar15 = lVar15 + 1;
                    } while (lVar15 != 0x21);
                    *pcVar19 = '\0';
                  }
                  pcStack_258 = pcVar19 + 0x22;
                  ppcVar33 = &pcStack_258;
                  goto LAB_0009323c;
                }
                uVar29 = *(uint *)(lVar50 + 0x18);
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
                do {
                  bVar28 = 0;
                  if (0x7f < uVar29) {
                    bVar28 = 0x80;
                  }
                  bVar3 = *(byte *)((long)param_2 + 0x17);
                  if ((char)bVar3 < '\0') {
                    uVar48 = param_2[1];
                    uVar16 = param_2[2] & 0x7fffffffffffffff;
                    uVar38 = uVar16 - 1;
                    if (uVar48 == uVar38) {
                      if (uVar16 < 0x7ffffffffffffff7) {
                        if (uVar38 < 0x3ffffffffffffff4) goto LAB_00092140;
                        uVar16 = 0x7ffffffffffffff8;
                        puVar23 = (undefined8 *)__Znwm(0x7ffffffffffffff8);
LAB_00092174:
/*  reversing this took months of machine time  */
                        puVar25 = (undefined8 *)*param_2;
                        uVar48 = uVar38;
                        goto LAB_0009217c;
                      }
                      goto LAB_00093524;
                    }
                    puVar23 = (undefined8 *)*param_2;
LAB_000921b8:
                    param_2[1] = uVar48 + 1;
                  }
                  else {
                    if (bVar3 == 0x16) {
                      uVar38 = 0x16;
                      uVar16 = 0x17;
LAB_00092140:
                      if (uVar16 <= uVar38 * 2) {
                        uVar16 = uVar38 * 2;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
                      }
                      uVar48 = (uVar16 & 0x7ffffffffffffff8) + 8;
                      uVar16 = 0x19;
                      if (uVar48 != 0x18) {
                        uVar16 = uVar48;
                      }
                      puVar23 = (undefined8 *)__Znwm(uVar16);
                      puVar25 = param_2;
                      uVar48 = uVar38;
                      if ((char)bVar3 < '\0') goto LAB_00092174;
LAB_0009217c:
                      if (uVar48 != 0) {
                        _memmove(puVar23,puVar25,uVar48);
                      }
                      if ((char)bVar3 < '\0') {
                        __ZdlPv(*param_2);
                      }
                      *param_2 = puVar23;
                      param_2[2] = uVar16 | 0x8000000000000000;
                      goto LAB_000921b8;
                    }
                    uVar48 = (ulong)bVar3;
                    *(byte *)((long)param_2 + 0x17) = bVar3 + 1 & 0x7f;
                    puVar23 = param_2;
                  }
                  *(byte *)((long)puVar23 + uVar48) = bVar28 | (byte)uVar29 & 0x7f;
                  ((byte *)((long)puVar23 + uVar48))[1] = 0;
                  bVar10 = 0x7f < uVar29;
/*
   unlicensed copy if this notice is missing
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
                  uVar29 = uVar29 >> 7;
                } while (bVar10);
                lVar45 = lVar45 + 1;
              } while (lVar45 < *(int *)(uVar27 + 0xac));
            }
            uVar29 = *(uint *)(uVar27 + 0x9c);
            do {
              uVar12 = 0;
              if (0x7f < uVar29) {
                uVar12 = 0xffffff80;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,uVar12 | uVar29 & 0x7f);
              bVar10 = 0x7f < uVar29;
              uVar29 = uVar29 >> 7;
            } while (bVar10);
            puVar47 = (ulong *)(uVar27 + 0x20);
            ppppppuStack_a8 = (ulong ******)(*puVar47 ^ (ulong)puVar47);
            if ((ulong *)*puVar47 == puVar47) {
              uVar29 = 0;
            }
            else {
              lVar45 = func_0x001393dc(&ppppppuStack_130,&ppppppuStack_a8);
              ppppppuVar46 = ppppppuStack_140;
              ppppppuVar40 = ppppppuStack_148;
              if (lVar45 == 0) {
                uStack_90 = (ulong *******)ppppppuStack_140;
/* WM - more drops soon - github.com/pengussy */
                uStack_1f0 = (ulong *******)&uStack_90;
                apppppppuStack_1e8[0] = &ppppppuStack_a8;
                if (ppppppuStack_140 < ppppppuStack_138) {
                  uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                  *ppppppuStack_140 = (ulong *****)ppppppuStack_a8;
                  apppppppuStack_1e8[1] = &ppppppuStack_148;
                }
                else {
                  apppppppuStack_1e8[1] = &ppppppuStack_148;
                  func_0x0000aad8(&uStack_1f0);
                }
                uStack_1f0 = &ppppppuStack_130;
                ppppppuStack_140 = (ulong ******)uStack_90;
                uStack_90 = &ppppppuStack_a8;
                lVar45 = func_0x00139a64(&uStack_1f0,&ppppppuStack_a8,&UNK_01bd2568,&uStack_90,
                                         &pppppppuStack_98);
                uVar29 = (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                *(uint *)(lVar45 + 0x18) = uVar29;
              }
              else {
                uVar29 = *(uint *)(lVar45 + 0x18);
              }
/*
 *  reversing this took months of machine time
 *
 *  @pengussy
 */
            }
            do {
              uVar12 = 0;
              if (0x7f < uVar29) {
                uVar12 = 0xffffff80;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,uVar12 | uVar29 & 0x7f);
              bVar10 = 0x7f < uVar29;
              uVar29 = uVar29 >> 7;
            } while (bVar10);
            if (((*(int *)(uVar27 + 0xbc) < 1) ||
                (puVar47 = (ulong *)(uVar27 + 8), (ulong *)*puVar47 == puVar47)) ||
               (plVar14 = (long *)(uVar27 + 0x78), *plVar14 + (long)plVar14 == 0)) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,0);
            }
            else {
              iVar44 = *(int *)(uVar27 + 0xb8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,0 < iVar44);
              if (0 < iVar44) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
// origin: github.com/pengussy
                          (param_2,(long)*(char *)(uVar27 + 0xa8));
                iVar44 = *(int *)(uVar27 + 0xb8);
                if (0 < iVar44) {
                  lVar45 = 0;
                  cVar34 = '\0';
                  do {
                    cVar4 = *(char *)((*puVar47 ^ (ulong)puVar47) + lVar45);
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2,(int)(char)(cVar4 - cVar34));
                    lVar45 = lVar45 + 1;
                    iVar44 = *(int *)(uVar27 + 0xb8);
                    cVar34 = cVar4;
                  } while (lVar45 < iVar44);
                }
                iVar44 = iVar44 + -1 >> (*(uint *)(uVar27 + 0xa8) & 0x1f);
                if (-1 < iVar44) {
                  lVar45 = 0;
                  iVar11 = 0;
                  do {
                    iVar13 = *(int *)((long)plVar14 + lVar45 + *plVar14);
                    uStack_1f0 = (ulong *******)CONCAT44(uStack_1f0._4_4_,iVar13 - iVar11);
                    func_0x0013be80(param_2,&uStack_1f0,(long)&uStack_1f0 + 4);
                    lVar45 = lVar45 + 4;
                    iVar11 = iVar13;
                  } while ((ulong)(iVar44 + 1) * 4 != lVar45);
                }
              }
            }
            if (*(int *)(uVar27 + 0xa0) < 1) {
              cVar34 = *(char *)(uVar27 + 3);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,cVar34 != '\0');
              if (cVar34 != '\0') goto LAB_00092424;
            }
            else {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                        (param_2,1);
// thanks for reading - discord.gg/sdkhDjTex
LAB_00092424:
              uVar29 = *(uint *)(uVar27 + 0xa0);
              do {
                uVar12 = 0;
                if (0x7f < uVar29) {
                  uVar12 = 0xffffff80;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_2,uVar12 | uVar29 & 0x7f);
                bVar10 = 0x7f < uVar29;
                uVar29 = uVar29 >> 7;
              } while (bVar10);
              if (0 < *(int *)(uVar27 + 0xa0)) {
                lVar45 = 0;
                do {
                  puVar23 = (undefined8 *)
                            ((*(ulong *)(uVar27 + 0x60) ^ uVar27 + 0x60) + lVar45 * 0x18);
                  ppppppuStack_a8 = (ulong ******)*puVar23;
                  if (ppppppuStack_a8 == (ulong ******)0x0) {
                    uVar29 = 0;
                  }
                  else {
                    lVar50 = func_0x001393dc(&ppppppuStack_130,&ppppppuStack_a8);
                    ppppppuVar46 = ppppppuStack_140;
                    ppppppuVar40 = ppppppuStack_148;
                    if (lVar50 == 0) {
                      uStack_90 = (ulong *******)ppppppuStack_140;
                      uStack_1f0 = (ulong *******)&uStack_90;
                      apppppppuStack_1e8[0] = &ppppppuStack_a8;
                      if (ppppppuStack_140 < ppppppuStack_138) {
                        uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
/* if you paid for this, you were scammed */
                        *ppppppuStack_140 = (ulong *****)ppppppuStack_a8;
                        apppppppuStack_1e8[1] = &ppppppuStack_148;
                      }
                      else {
                        apppppppuStack_1e8[1] = &ppppppuStack_148;
                        func_0x0000aad8(&uStack_1f0);
                      }
                      uStack_1f0 = &ppppppuStack_130;
                      ppppppuStack_140 = (ulong ******)uStack_90;
                      uStack_90 = &ppppppuStack_a8;
                      lVar50 = func_0x00139a64(&uStack_1f0,&ppppppuStack_a8,&UNK_01bd2568,&uStack_90
                                               ,&pppppppuStack_98);
                      uVar29 = (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                      *(uint *)(lVar50 + 0x18) = uVar29;
                    }
                    else {
                      uVar29 = *(uint *)(lVar50 + 0x18);
                    }
                  }
                  do {
                    bVar28 = 0;
                    if (0x7f < uVar29) {
                      bVar28 = 0x80;
                    }
                    bVar3 = *(byte *)((long)param_2 + 0x17);
                    if ((char)bVar3 < '\0') {
                      uVar48 = param_2[1];
                      uVar16 = param_2[2] & 0x7fffffffffffffff;
                      uVar38 = uVar16 - 1;
                      if (uVar48 == uVar38) {
                        if (uVar16 < 0x7ffffffffffffff7) {
                          if (uVar38 < 0x3ffffffffffffff4) goto LAB_000925d0;
                          uVar16 = 0x7ffffffffffffff8;
                          puVar25 = (undefined8 *)__Znwm(0x7ffffffffffffff8);
LAB_00092604:
                          puVar26 = (undefined8 *)*param_2;
                          uVar48 = uVar38;
                          goto LAB_0009260c;
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                        }
                        goto LAB_00093524;
                      }
                      puVar25 = (undefined8 *)*param_2;
LAB_00092648:
                      param_2[1] = uVar48 + 1;
                    }
                    else {
                      if (bVar3 == 0x16) {
                        uVar38 = 0x16;
                        uVar16 = 0x17;
LAB_000925d0:
                        if (uVar16 <= uVar38 * 2) {
                          uVar16 = uVar38 * 2;
                        }
                        uVar48 = (uVar16 & 0x7ffffffffffffff8) + 8;
                        uVar16 = 0x19;
                        if (uVar48 != 0x18) {
                          uVar16 = uVar48;
                        }
                        puVar25 = (undefined8 *)__Znwm(uVar16);
                        puVar26 = param_2;
                        uVar48 = uVar38;
                        if ((char)bVar3 < '\0') goto LAB_00092604;
LAB_0009260c:
                        if (uVar48 != 0) {
                          _memmove(puVar25,puVar26,uVar48);
                        }
                        if ((char)bVar3 < '\0') {
                          __ZdlPv(*param_2);
                        }
// proprietary - see LICENSE - do not sell
                        *param_2 = puVar25;
                        param_2[2] = uVar16 | 0x8000000000000000;
                        goto LAB_00092648;
                      }
                      uVar48 = (ulong)bVar3;
                      *(byte *)((long)param_2 + 0x17) = bVar3 + 1 & 0x7f;
                      puVar25 = param_2;
                    }
                    *(byte *)((long)puVar25 + uVar48) = bVar28 | (byte)uVar29 & 0x7f;
                    ((byte *)((long)puVar25 + uVar48))[1] = 0;
                    bVar10 = 0x7f < uVar29;
                    uVar29 = uVar29 >> 7;
                  } while (bVar10);
                  uVar29 = *(uint *)(puVar23 + 1);
                  do {
                    bVar28 = 0;
                    if (0x7f < uVar29) {
                      bVar28 = 0x80;
                    }
// unlicensed copy if this notice is missing
                    bVar3 = *(byte *)((long)param_2 + 0x17);
                    if ((char)bVar3 < '\0') {
                      uVar48 = param_2[1];
                      uVar16 = param_2[2] & 0x7fffffffffffffff;
                      uVar38 = uVar16 - 1;
                      if (uVar48 == uVar38) {
                        if (uVar16 < 0x7ffffffffffffff7) {
                          if (uVar38 < 0x3ffffffffffffff4) goto LAB_00092704;
                          uVar16 = 0x7ffffffffffffff8;
                          puVar25 = (undefined8 *)__Znwm(0x7ffffffffffffff8);
LAB_00092738:
                          puVar26 = (undefined8 *)*param_2;
                          uVar48 = uVar38;
                          goto LAB_00092740;
                        }
                        goto LAB_00093524;
                      }
                      puVar25 = (undefined8 *)*param_2;
LAB_0009277c:
                      param_2[1] = uVar48 + 1;
                    }
                    else {
                      if (bVar3 == 0x16) {
                        uVar38 = 0x16;
                        uVar16 = 0x17;
LAB_00092704:
                        if (uVar16 <= uVar38 * 2) {
                          uVar16 = uVar38 * 2;
/* wm:more drops soon - github.com/pengussy */
                        }
                        uVar48 = (uVar16 & 0x7ffffffffffffff8) + 8;
                        uVar16 = 0x19;
                        if (uVar48 != 0x18) {
                          uVar16 = uVar48;
                        }
                        puVar25 = (undefined8 *)__Znwm(uVar16);
                        puVar26 = param_2;
                        uVar48 = uVar38;
                        if ((char)bVar3 < '\0') goto LAB_00092738;
LAB_00092740:
                        if (uVar48 != 0) {
                          _memmove(puVar25,puVar26,uVar48);
                        }
                        if ((char)bVar3 < '\0') {
                          __ZdlPv(*param_2);
                        }
                        *param_2 = puVar25;
                        param_2[2] = uVar16 | 0x8000000000000000;
                        goto LAB_0009277c;
                      }
                      uVar48 = (ulong)bVar3;
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
                      *(byte *)((long)param_2 + 0x17) = bVar3 + 1 & 0x7f;
                      puVar25 = param_2;
                    }
                    *(byte *)((long)puVar25 + uVar48) = bVar28 | (byte)uVar29 & 0x7f;
                    ((byte *)((long)puVar25 + uVar48))[1] = 0;
                    bVar10 = 0x7f < uVar29;
                    uVar29 = uVar29 >> 7;
                  } while (bVar10);
                  uVar29 = *(uint *)((long)puVar23 + 0xc);
                  do {
                    bVar28 = 0;
                    if (0x7f < uVar29) {
                      bVar28 = 0x80;
                    }
                    bVar3 = *(byte *)((long)param_2 + 0x17);
                    if ((char)bVar3 < '\0') {
// WM - stripping the watermark breaks the license
                      uVar48 = param_2[1];
                      uVar16 = param_2[2] & 0x7fffffffffffffff;
                      uVar38 = uVar16 - 1;
                      if (uVar48 == uVar38) {
                        if (uVar16 < 0x7ffffffffffffff7) {
                          if (uVar38 < 0x3ffffffffffffff4) goto LAB_0009283c;
                          uVar16 = 0x7ffffffffffffff8;
                          puVar25 = (undefined8 *)__Znwm(0x7ffffffffffffff8);
LAB_00092870:
                          puVar26 = (undefined8 *)*param_2;
                          uVar48 = uVar38;
                          goto LAB_00092878;
                        }
                        goto LAB_00093524;
                      }
                      puVar25 = (undefined8 *)*param_2;
LAB_000928b4:
// WM - origin: github.com/pengussy
                      param_2[1] = uVar48 + 1;
                    }
                    else {
                      if (bVar3 == 0x16) {
                        uVar38 = 0x16;
                        uVar16 = 0x17;
LAB_0009283c:
                        if (uVar16 <= uVar38 * 2) {
                          uVar16 = uVar38 * 2;
                        }
                        uVar48 = (uVar16 & 0x7ffffffffffffff8) + 8;
                        uVar16 = 0x19;
                        if (uVar48 != 0x18) {
                          uVar16 = uVar48;
                        }
                        puVar25 = (undefined8 *)__Znwm(uVar16);
                        puVar26 = param_2;
                        uVar48 = uVar38;
                        if ((char)bVar3 < '\0') goto LAB_00092870;
LAB_00092878:
                        if (uVar48 != 0) {
                          _memmove(puVar25,puVar26,uVar48);
                        }
                        if ((char)bVar3 < '\0') {
                          __ZdlPv(*param_2);
                        }
                        *param_2 = puVar25;
                        param_2[2] = uVar16 | 0x8000000000000000;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
                        goto LAB_000928b4;
                      }
                      uVar48 = (ulong)bVar3;
                      *(byte *)((long)param_2 + 0x17) = bVar3 + 1 & 0x7f;
                      puVar25 = param_2;
                    }
                    *(byte *)((long)puVar25 + uVar48) = bVar28 | (byte)uVar29 & 0x7f;
                    ((byte *)((long)puVar25 + uVar48))[1] = 0;
                    bVar10 = 0x7f < uVar29;
                    uVar29 = uVar29 >> 7;
                  } while (bVar10);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2,(long)*(char *)(puVar23 + 2));
                  lVar45 = lVar45 + 1;
                } while (lVar45 < *(int *)(uVar27 + 0xa0));
              }
              uVar29 = (uint)*(byte *)(uVar27 + 3);
              do {
                uVar12 = 0;
                if (0x7f < uVar29) {
                  uVar12 = 0xffffff80;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_2,uVar12 | uVar29 & 0x7f);
                bVar10 = 0x7f < uVar29;
                uVar29 = uVar29 >> 7;
              } while (bVar10);
              if (*(char *)(uVar27 + 3) != '\0') {
                uVar16 = 0;
                do {
                  if (((long)uVar16 < (long)*(int *)(uVar27 + 0x98)) &&
/* wm:donate: donate/README.md */
                     (lVar45 = *(long *)(uVar27 + 0x10) + (long)(uVar27 + 0x10), lVar45 != 0)) {
                    ppppppuStack_a8 = *(ulong *******)(lVar45 + uVar16 * 8);
                    if (ppppppuStack_a8 == (ulong ******)0x0) {
                      uVar29 = 0;
                    }
                    else {
                      lVar45 = func_0x001393dc(&ppppppuStack_130,&ppppppuStack_a8);
                      ppppppuVar46 = ppppppuStack_140;
                      ppppppuVar40 = ppppppuStack_148;
                      if (lVar45 == 0) {
                        uStack_90 = (ulong *******)ppppppuStack_140;
                        uStack_1f0 = (ulong *******)&uStack_90;
                        apppppppuStack_1e8[0] = &ppppppuStack_a8;
                        if (ppppppuStack_140 < ppppppuStack_138) {
                          uStack_90 = (ulong *******)(ppppppuStack_140 + 1);
                          *ppppppuStack_140 = (ulong *****)ppppppuStack_a8;
                          apppppppuStack_1e8[1] = &ppppppuStack_148;
                        }
                        else {
                          apppppppuStack_1e8[1] = &ppppppuStack_148;
                          func_0x0000aad8(&uStack_1f0);
                        }
                        uStack_1f0 = &ppppppuStack_130;
                        ppppppuStack_140 = (ulong ******)uStack_90;
/* unlicensed copy if this notice is missing - github.com/pengussy */
                        uStack_90 = &ppppppuStack_a8;
                        lVar45 = func_0x00139a64(&uStack_1f0,&ppppppuStack_a8,&UNK_01bd2568,
                                                 &uStack_90,&pppppppuStack_98);
                        uVar29 = (int)((ulong)((long)ppppppuVar46 - (long)ppppppuVar40) >> 3) + 1;
                        *(uint *)(lVar45 + 0x18) = uVar29;
                      }
                      else {
                        uVar29 = *(uint *)(lVar45 + 0x18);
                      }
                    }
                  }
                  else {
                    uVar29 = 0;
                  }
                  do {
                    bVar28 = 0;
                    if (0x7f < uVar29) {
                      bVar28 = 0x80;
                    }
                    bVar3 = *(byte *)((long)param_2 + 0x17);
                    if ((char)bVar3 < '\0') {
                      uVar38 = param_2[1];
                      uVar48 = param_2[2] & 0x7fffffffffffffff;
                      uVar32 = uVar48 - 1;
                      if (uVar38 == uVar32) {
                        if (0x7ffffffffffffff6 < uVar48) {
LAB_00093524:
                          FUN_0000aa50();
LAB_000935ac:
                    /* WARNING: Does not return */
                          pcVar8 = (code *)SoftwareBreakpoint(1,0x935b0);
                          (*pcVar8)();
                        }
                        if (uVar32 < 0x3ffffffffffffff4) goto LAB_00092ac8;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
                        uVar48 = 0x7ffffffffffffff8;
                        puVar23 = (undefined8 *)__Znwm(0x7ffffffffffffff8);
LAB_00092afc:
                        puVar25 = (undefined8 *)*param_2;
                        uVar38 = uVar32;
                        goto LAB_00092b04;
                      }
                      puVar23 = (undefined8 *)*param_2;
LAB_00092b40:
                      param_2[1] = uVar38 + 1;
                    }
                    else {
                      if (bVar3 == 0x16) {
                        uVar32 = 0x16;
                        uVar48 = 0x17;
LAB_00092ac8:
                        if (uVar48 <= uVar32 * 2) {
                          uVar48 = uVar32 * 2;
                        }
                        uVar38 = (uVar48 & 0x7ffffffffffffff8) + 8;
                        uVar48 = 0x19;
                        if (uVar38 != 0x18) {
                          uVar48 = uVar38;
                        }
                        puVar23 = (undefined8 *)__Znwm(uVar48);
                        puVar25 = param_2;
                        uVar38 = uVar32;
                        if ((char)bVar3 < '\0') goto LAB_00092afc;
LAB_00092b04:
                        if (uVar38 != 0) {
                          _memmove(puVar23,puVar25,uVar38);
                        }
                        if ((char)bVar3 < '\0') {
/* +- WM -------------------------------------------------------------+
   |  origin: github.com/pengussy
   +--------------------------------------------------------------------*/
                          __ZdlPv(*param_2);
                        }
                        *param_2 = puVar23;
                        param_2[2] = uVar48 | 0x8000000000000000;
                        goto LAB_00092b40;
                      }
                      uVar38 = (ulong)bVar3;
                      *(byte *)((long)param_2 + 0x17) = bVar3 + 1 & 0x7f;
                      puVar23 = param_2;
                    }
                    *(byte *)((long)puVar23 + uVar38) = bVar28 | (byte)uVar29 & 0x7f;
                    ((byte *)((long)puVar23 + uVar38))[1] = 0;
                    bVar10 = 0x7f < uVar29;
                    uVar29 = uVar29 >> 7;
                  } while (bVar10);
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *(byte *)(uVar27 + 3));
              }
            }
            if (10 < bStack_d8) {
              uVar29 = *(uint *)(uVar27 + 200);
              do {
                uVar12 = 0;
                if (0x7f < uVar29) {
                  uVar12 = 0xffffff80;
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                          (param_2,uVar12 | uVar29 & 0x7f);
                bVar10 = 0x7f < uVar29;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
                uVar29 = uVar29 >> 7;
              } while (bVar10);
              if (*(int *)(uVar27 + 200) != 0) {
                uVar16 = 0;
                do {
                  piVar49 = (int *)(*(long *)(uVar27 + 0xc0) + uVar16 * 0x10);
                  if (*piVar49 != 0) {
                    pbVar24 = (byte *)(*pcRam0000000002065c10)();
                    if ((*pbVar24 & 1) == 0) {
                      func_0x019bf1d4();
                    }
                    pcStack_250 = (char *)(*pcRam0000000002065bf8)();
                    if (*pcStack_250 == '\x01') {
                      lVar15 = 0;
                      uVar16 = 0xc87fd57564cb4c9d;
                      do {
                        uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
                        uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
                        uVar27 = uVar43 ^ uVar43 >> 0x21;
                        uVar29 = (uint)(byte)pcStack_250[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
                        uVar29 = (uVar29 >> 1 & 0x7f | uVar29 << 7) -
                                 (((uint)(uVar43 >> 0x29) | 1) + (int)(uVar27 >> 0x17));
                        pcStack_250[lVar15 + 0x2d] =
                             ((byte)(uVar29 >> 1) & 0x7f | (char)uVar29 * -0x80) ^ (byte)uVar27;
                        uVar16 = lVar15 + -0x61c8864680b583eb +
                                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_250[lVar15 + 1]) << 0x11)
                        ;
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != 0x2c);
                      *pcStack_250 = '\0';
                    }
                    pcStack_250 = pcStack_250 + 0x2d;
                    ppcVar33 = &pcStack_250;
LAB_0009323c:
                    uVar18 = func_0x0011ab24(ppcVar33);
                    func_0x001284e8(param_3,uVar18);
/* unlicensed copy if this notice is missing */
                    goto LAB_0009324c;
                  }
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                            (param_2,0);
                  uVar29 = piVar49[1];
                  do {
                    uVar12 = 0;
                    if (0x7f < uVar29) {
                      uVar12 = 0xffffff80;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                              (param_2,uVar12 | uVar29 & 0x7f);
                    bVar10 = 0x7f < uVar29;
                    uVar29 = uVar29 >> 7;
                  } while (bVar10);
                  uVar16 = uVar16 + 1;
                } while (uVar16 < *(uint *)(uVar27 + 200));
              }
            }
            puStack_2f8 = puStack_2f8 + 1;
          } while (puStack_2f8 != puVar6);
        }
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (pppppppuVar37 == pppppppuVar5) {
          uVar43 = (ulong)*(uint *)(lVar15 + 0x18);
        }
        else {
          func_0x00099358(param_2,&pppppppuStack_208);
        }
        do {
          uVar12 = (uint)uVar43;
          uVar29 = 0;
          if (0x7f < uVar12) {
            uVar29 = 0xffffff80;
          }
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                    (param_2,uVar29 | uVar12 & 0x7f);
          uVar43 = uVar43 >> 7 & 0x1ffffff;
        } while (0x7f < uVar12);
        uVar16 = 1;
        goto LAB_00093250;
      }
      pbVar24 = (byte *)(*pcRam0000000002065820)();
      if ((*pbVar24 & 1) == 0) {
        func_0x019bf33c();
      }
      pcStack_280 = (char *)(*pcRam0000000002065808)();
      if (*pcStack_280 == '\x01') {
        lVar15 = 0;
        uVar16 = 0x3ce400ba2b86af8b;
        do {
          uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
          uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
          uVar27 = uVar43 ^ uVar43 >> 0x21;
          uVar29 = (uint)(byte)pcStack_280[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
          uVar29 = (uVar29 >> 1 & 0x7f | uVar29 << 7) - (int)(uVar27 >> 0x17);
          pcStack_280[lVar15 + 0x1f] =
               ((byte)(uVar29 >> 1) & 0x7f | (char)uVar29 * -0x80) - ((byte)(uVar43 >> 0x29) | 1) ^
               (byte)uVar27;
          uVar16 = lVar15 + -0x61c8864680b583eb +
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
                   (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_280[lVar15 + 1]) << 0x11);
          lVar15 = lVar15 + 1;
        } while (lVar15 != 0x1e);
        *pcStack_280 = '\0';
      }
      pcStack_280 = pcStack_280 + 0x1f;
      uVar18 = func_0x0011ab24(&pcStack_280);
      func_0x001284e8(param_3,uVar18);
    }
  }
  else {
    pbVar24 = (byte *)(*pcRam0000000002065700)();
    if ((*pbVar24 & 1) == 0) {
      func_0x019beff4();
    }
    pcStack_210 = (char *)(*pcRam00000000020656e8)();
    if (*pcStack_210 == '\x01') {
      lVar15 = 0;
      uVar16 = 0x2e5c626a978fa79f;
      do {
        uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
        uVar27 = uVar43 ^ uVar43 >> 0x21;
        uVar29 = (uint)(byte)pcStack_210[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
        uVar29 = (uVar29 >> 6 & 3 | uVar29 << 2) - (int)(uVar27 >> 0x17) ^
                 ((uint)(uVar43 >> 0x29) | 1);
        pcStack_210[lVar15 + 0x2c] = ((byte)(uVar29 >> 6) & 3 | (byte)(uVar29 << 2)) - (char)uVar27;
        uVar16 = lVar15 + -0x61c8864680b583eb +
                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_210[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x2b);
      *pcStack_210 = '\0';
    }
    pcStack_210 = pcStack_210 + 0x2c;
/* proprietary - see LICENSE - do not sell */
    uVar18 = func_0x0011ab24(&pcStack_210);
    func_0x001284e8(param_3,uVar18);
  }
  uVar16 = 0;
  while( true ) {
    func_0x0013c8b8(&puStack_1b0);
    func_0x00791660(uStack_d0,uStack_c8);
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_78) break;
    ___stack_chk_fail();
LAB_00093558:
    func_0x019bf0e4();
LAB_00093010:
    pcStack_230 = (char *)(*pcRam0000000002065b38)();
    if (*pcStack_230 == '\x01') {
      lVar15 = 0;
      uVar16 = 0x985ce7f76bbfa6e9;
      do {
        uVar43 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
        uVar43 = (uVar43 ^ uVar43 >> 0x21) * -0x3b314601e57a13ad;
        uVar27 = uVar43 ^ uVar43 >> 0x21;
        uVar29 = (uint)(byte)pcStack_230[lVar15 + 1] ^ (uint)uVar27 ^ 0xffffffc3;
        uVar29 = (uVar29 >> 6 & 3 | uVar29 << 2) -
                 (((uint)(uVar43 >> 0x29) | 1) + (int)(uVar27 >> 0x17));
        pcStack_230[lVar15 + 0x20] =
             ((byte)(uVar29 >> 4) & 0xf | (char)uVar29 * '\x10') ^ (byte)uVar27;
        uVar16 = lVar15 + -0x61c8864680b583eb +
                 (uVar16 >> 0x2f | (uVar16 ^ (byte)pcStack_230[lVar15 + 1]) << 0x11);
        lVar15 = lVar15 + 1;
      } while (lVar15 != 0x1f);
      *pcStack_230 = '\0';
    }
    pcStack_230 = pcStack_230 + 0x20;
    ppcVar33 = &pcStack_230;
/* found on a paste site? it was re-uploaded illegally */
LAB_000934c8:
    uVar18 = func_0x0011ab24(ppcVar33);
    func_0x001284e8(param_3,uVar18);
LAB_0009324c:
    uVar16 = 0;
LAB_00093250:
    if (lStack_1f8 < 0) {
      __ZdlPv(pppppppuStack_208);
    }
LAB_00090c1c:
    if (pppppppuStack_1c8 != (ulong *******)0x0) {
      pppppppuStack_1c0 = pppppppuStack_1c8;
      __ZdlPv();
    }
  }
  return uVar16;
LAB_00091b90:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,4);
  puVar47 = (ulong *)((long)plVar14 + 0x14);
  puVar31 = (ulong *)(plVar14 + 3);
  goto LAB_000912d8;
LAB_00091788:
  if ((-1 < (int)lVar50) && ((int)lVar50 < iVar44)) {
    uVar38 = uVar38 & 0xffffffff;
LAB_000917a0:
    uStack_ac = (undefined4)lVar50;
    pppppppuStack_98 = pppppppuStack_88;
    uStack_1f0 = (ulong *******)&pppppppuStack_98;
    apppppppuStack_1e8[0] = (ulong *******)&iStack_b0;
    apppppppuStack_1e8[1] = (ulong *******)&uStack_90;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
    iStack_b0 = iVar11;
    if (pppppppuStack_88 < pppppppuStack_80) {
      *pppppppuStack_88 = (ulong ******)CONCAT44(uStack_ac,iVar11);
      pppppppuStack_88 = pppppppuStack_88 + 1;
    }
    else {
      func_0x0013c4e0(&uStack_1f0);
      pppppppuStack_88 = pppppppuStack_98;
    }
    func_0x00791660(param_1,0xfffffffd);
    goto LAB_00091600;
  }
LAB_00091998:
  pbVar24 = (byte *)(*pcRam0000000002065b20)();
  if ((*pbVar24 & 1) == 0) {
    func_0x019bf15c();
  }
  uVar38 = uVar38 & 0xffffffff;
  if (*pcVar19 == '\x01') {
    lVar45 = 0;
    uVar16 = 0x9b9d25117edb31e2;
    do {
      uVar32 = (uVar16 ^ uVar16 >> 0x21) * -0xae502812aa7333;
      uVar32 = (uVar32 ^ uVar32 >> 0x21) * -0x3b314601e57a13ad;
      uVar39 = uVar32 ^ uVar32 >> 0x21;
      uVar29 = (uint)(byte)pcVar19[lVar45 + 1] ^ (uint)uVar39 ^ 0xffffffc3;
      uVar29 = (uVar29 >> 6 & 3 | uVar29 << 2) -
// WM - watermarked copy - do not remove
               (((uint)(uVar32 >> 0x29) | 1) + (int)(uVar39 >> 0x17));
      pcVar19[lVar45 + 0x2e] = ((byte)(uVar29 >> 5) & 7 | (char)uVar29 * '\b') ^ (byte)uVar39;
      uVar16 = lVar45 + -0x61c8864680b583eb +
               (uVar16 >> 0x2f | (uVar16 ^ (byte)pcVar19[lVar45 + 1]) << 0x11);
      lVar45 = lVar45 + 1;
    } while (lVar45 != 0x2d);
    *pcVar19 = '\0';
  }
  pcStack_240 = pcVar19 + 0x2e;
  uVar18 = func_0x0011ab24(&pcStack_240);
  func_0x001284e8(param_3,uVar18);
  func_0x00791660(param_1,0xfffffffc);
LAB_00091ad4:
  uVar16 = uVar38 >> 0x1f & 1;
joined_r0x00091adc:
  if (uStack_90 != (ulong *******)0x0) {
    pppppppuStack_88 = uStack_90;
/* do not claim this as your own */
    __ZdlPv();
  }
  if ((int)uVar16 == 0) goto LAB_00093250;
  goto LAB_000912e4;
LAB_00091fc4:
  uStack_bc = *(uint *)((long)plVar14 + 0x14);
LAB_00091de8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(param_2,4);
  puVar47 = (ulong *)&uStack_bc;
  puVar31 = &uStack_b8;
LAB_000912d8:
  func_0x0013be80(param_2,puVar47,puVar31);
LAB_000912e4:
  uVar48 = uVar48 + 1;
  if ((long)*(int *)(uVar27 + 0xb0) <= (long)uVar48) goto LAB_00092020;
  goto LAB_000912f8;
}
/* no support for modified copies */

