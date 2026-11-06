/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x118654:e463e24830
 */

undefined8 FUN_00118654(long param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  byte *pbVar26;
  int iVar27;
  char *pcStack_b8;
  char *pcStack_b0;
  char *pcStack_a8;
// WM - watermarked copy - do not remove
  char *pcStack_a0;
  char *pcStack_98;
  int aiStack_90 [6];
  long lStack_78;
  long *plStack_70;
  undefined1 uStack_68;
  
  iVar3 = func_0x00159078(param_1,1);
  if (((((iVar3 != 0) && (uVar4 = func_0x00792558(param_1,1), 7 < uVar4)) &&
       (plVar8 = (long *)func_0x007926a8(param_1,1), plVar8 != (long *)0x0)) &&
      ((iVar3 = func_0x0003c0e8(*plVar8), iVar3 != 0 &&
       (lVar23 = *plVar8, *(long *)(lVar23 + 0x20) != 0)))) &&
     (plVar9 = (long *)__ZNSt3__119__shared_weak_count4lockEv(), plVar9 != (long *)0x0)) {
    lVar25 = *(long *)(lVar23 + 0x18);
    lVar24 = *(long *)*plVar8;
    LOAcquire();
    lVar23 = plVar9[1];
/* reversing this took months of machine time - github.com/pengussy */
    plVar9[1] = lVar23 + -1;
    LORelease();
    if (lVar23 == 0) {
      (**(code **)(*plVar9 + 0x10))();
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
    }
    if ((lVar25 != 0) && (lVar24 != 0)) {
      pbVar10 = (byte *)(*pcRam000000000206e3a0)();
      if ((*pbVar10 & 1) == 0) {
        func_0x019c9fe0();
      }
      pcStack_98 = (char *)(*pcRam000000000206e388)();
      if (*pcStack_98 == '\x01') {
        lVar23 = 0;
        uVar20 = 0x2b001efb7e749050;
        do {
          uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
          uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
          uVar22 = uVar21 ^ uVar21 >> 0x21;
          uVar4 = (uint)(byte)pcStack_98[lVar23 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
          uVar4 = (uVar4 >> 6 & 3 | uVar4 << 2) -
                  (((uint)(uVar21 >> 0x29) | 1) + (int)(uVar22 >> 0x17));
          pcStack_98[lVar23 + 0x10] =
               ((byte)(uVar4 >> 4) & 0xf | (char)uVar4 * '\x10') ^ (byte)uVar22;
          uVar20 = lVar23 + -0x61c8864680b583eb +
                   (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_98[lVar23 + 1]) << 0x11);
          lVar23 = lVar23 + 1;
        } while (lVar23 != 0xf);
        *pcStack_98 = '\0';
      }
      pcStack_98 = pcStack_98 + 0x10;
      uVar11 = func_0x0011ab24(&pcStack_98);
      func_0x007930d0(param_1,FUN_000f1584,uVar11,0,0);
      func_0x00791ab0(param_1,1);
      iVar3 = func_0x00794a14(param_1,1,1,0);
      if (iVar3 != 0) goto LAB_00119c08;
      uVar11 = func_0x00791624(param_1,0xffffffff);
      func_0x00157ab0(param_1,lVar24,lVar25,1);
      uVar12 = func_0x00791624(param_1,0xffffffff);
      func_0x00793a78(param_1,uVar12,lVar25,0);
      iVar3 = func_0x00791be4(param_1,0xffffffff);
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
      if (iVar3 == 7) {
        func_0x00157cc8(param_1,0xffffffff);
      }
      func_0x00791660(param_1,0xfffffffe);
      func_0x00793bd0(param_1,0,0);
      uVar13 = func_0x00791624(param_1,0xffffffff);
      func_0x00791ab0(param_1,uVar13);
      func_0x007945e4(param_1,uVar12,lVar25,0);
      func_0x00791ab0(param_1,2);
      func_0x00794504(param_1,uVar13,1);
      func_0x00791ab0(param_1,1);
      func_0x00794504(param_1,uVar13,2);
      func_0x007933b8(param_1,uRam0000000001f26d30,0);
      func_0x00794504(param_1,uVar13,3);
      func_0x007932d0(param_1,1);
      func_0x00794504(param_1,uVar13,5);
      func_0x00793bd0(param_1,0,0);
      uVar5 = func_0x00791624(param_1,0xffffffff);
      func_0x00791ab0(param_1);
      func_0x00794504(param_1,uVar13,4);
      iVar3 = func_0x00792558(param_1,uVar11);
      if (0 < iVar3) {
        pcVar14 = (char *)(*pcRam000000000206e3b8)();
        pcVar15 = (char *)(*pcRam000000000206e3e8)();
        pcVar16 = (char *)(*pcRam000000000206e418)();
/* WM - keep the notice, keep the source honest */
        iVar27 = 1;
        do {
          while( true ) {
            func_0x00793928(param_1,uVar11,iVar27);
            uVar12 = func_0x00791624(param_1,0xffffffff);
            iVar6 = func_0x00791be4(param_1,uVar12);
            if ((((iVar6 == 9) && (uVar4 = func_0x00792558(param_1,uVar12), 0x17 < uVar4)) &&
                (puVar17 = (undefined8 *)func_0x007926a8(param_1,uVar12),
                puVar17 != (undefined8 *)0x0)) && (iVar6 = func_0x0003c0e8(*puVar17), iVar6 != 0))
            break;
LAB_00118ba0:
            func_0x00791660(param_1,0xfffffffe);
joined_r0x00118b98:
            iVar3 = iVar3 + -1;
            iVar27 = iVar27 + 1;
            if (iVar3 == 0) {
              return 0;
            }
          }
          func_0x000e2390(aiStack_90,*puVar17);
          if (((aiStack_90[0] == 1) && (lStack_78 != 0)) &&
             ((iVar6 = func_0x0003c0e8(*(undefined8 *)(lStack_78 + 0x28)), iVar6 != 0 &&
              (*(long *)(*(long *)(lStack_78 + 0x28) + 0x38) == *(long *)(param_1 + 0x38))))) {
            iVar6 = *(int *)(lStack_78 + 0x34);
            plVar8 = plStack_70;
            uVar2 = uStack_68;
          }
          else {
            iVar6 = 0;
            plVar8 = plStack_70;
            uVar2 = 0;
          }
          plStack_70 = plVar8;
          if (plVar8 != (long *)0x0) {
            LOAcquire();
            lVar23 = plVar8[1];
            plVar8[1] = lVar23 + -1;
            LORelease();
/* wm:watermarked copy - do not remove */
            if (lVar23 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
              __ZNSt3__119__shared_weak_count14__release_weakEv(plVar8);
            }
          }
          if (iVar6 < 1) goto LAB_00118ba0;
          func_0x00793928(param_1,0xffffd8f0,iVar6);
          iVar7 = func_0x00791be4(param_1,0xffffffff);
          if ((iVar7 != 8) || (iVar7 = func_0x00791c98(param_1,0xffffffff), iVar7 != 0)) {
            func_0x00791660(param_1,0xfffffffd);
            goto joined_r0x00118b98;
          }
          uVar18 = func_0x00791624(param_1,0xffffffff);
          func_0x00794054(param_1);
          pbVar10 = (byte *)(*pcRam000000000206e3d0)();
          if ((*pbVar10 & 1) == 0) {
            func_0x019ca01c();
            cVar1 = *pcVar14;
          }
          else {
            cVar1 = *pcVar14;
          }
          if (cVar1 == '\x01') {
/* do not claim this as your own */
            uVar4 = (byte)pcVar14[1] ^ 0xcf5a00c4;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) + 0x5386f9f;
            pcVar14[8] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') + 0x4f ^ 7;
            uVar20 = (((ulong)(byte)pcVar14[1] ^ 0xc712128158137494) << 0x11 | 0x18e24) +
                     0x9e3779b97f4a7c15;
            uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
            uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar21 ^ uVar21 >> 0x21;
            uVar4 = (uint)(byte)pcVar14[2] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar22 >> 0x17);
            pcVar14[9] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                         ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
            uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[2]) << 0x11) + 0x9e3779b97f4a7c16;
            uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
            uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar21 ^ uVar21 >> 0x21;
            uVar4 = (uint)(byte)pcVar14[3] ^ (uint)uVar22 ^ 0xffffffc3;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar22 >> 0x17);
            pcVar14[10] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                          ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
            uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[3]) << 0x11) + 0x9e3779b97f4a7c17;
            uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
            uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar21 ^ uVar21 >> 0x21;
            uVar4 = (uint)(byte)pcVar14[4] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar22 >> 0x17);
            pcVar14[0xb] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
            uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[4]) << 0x11) + 0x9e3779b97f4a7c18;
            uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
            uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar21 ^ uVar21 >> 0x21;
            uVar4 = (uint)(byte)pcVar14[5] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar22 >> 0x17);
            pcVar14[0xc] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
            uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[5]) << 0x11) + 0x9e3779b97f4a7c19;
            uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
            uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
            uVar22 = uVar21 ^ uVar21 >> 0x21;
            uVar4 = (uint)(byte)pcVar14[6] ^ (uint)uVar22 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar22 >> 0x17);
            pcVar14[0xd] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
            uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar14[6]) << 0x11) + 0x9e3779b97f4a7c1a;
            uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
            uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
            uVar21 = uVar20 ^ uVar20 >> 0x21;
            uVar4 = (uint)(byte)pcVar14[7] ^ (uint)uVar21 ^ 0xffffffc3;
            uVar4 = (uVar4 >> 5 & 7 | uVar4 << 3) - (int)(uVar21 >> 0x17);
/* if you paid for this, you were scammed - github.com/pengussy */
            pcVar14[0xe] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                           ((byte)(uVar20 >> 0x29) | 1) ^ (byte)uVar21;
            *pcVar14 = '\0';
          }
          pcStack_a0 = pcVar14 + 8;
          uVar19 = func_0x0011ab24(&pcStack_a0);
          func_0x00793714(param_1,0xffffffff,uVar19);
          iVar7 = func_0x00791efc(param_1,0xffffffff);
          if (iVar7 == 0) {
LAB_001198a0:
            func_0x00791660(param_1,0xfffffffd);
LAB_001198ac:
            func_0x00793bd0(param_1,0,0);
            uVar19 = func_0x00791624(param_1,0xffffffff);
            func_0x00792bf4(param_1,iVar6);
            func_0x00794504(param_1,uVar19,1);
            func_0x00791ab0(param_1,uVar18);
/*  no support for modified copies  */
            func_0x00794504(param_1,uVar19,2);
            func_0x00791ab0(param_1,uVar12);
            func_0x00794504(param_1,uVar19,4);
            func_0x00792bf4(param_1,iVar27);
            func_0x00794504(param_1,uVar19,5);
            func_0x007932d0(param_1,uVar2);
            func_0x00794504(param_1,uVar19,6);
            func_0x00791ab0(param_1,uVar13);
            func_0x00791ab0(param_1,uVar19);
            func_0x007930d0(param_1,&DAT_00157e90,0,2,&DAT_00159064);
            puVar17 = (undefined8 *)func_0x00790f58(param_1,0xffffffff);
            pbVar26 = (byte *)*puVar17;
            plVar8 = (long *)func_0x00790f58(param_1,uVar18);
            pbVar10 = *(byte **)(*plVar8 + 0x10);
            *(byte **)(pbVar26 + 0x10) = pbVar10;
            if (((*pbVar26 >> 2 & 1) != 0) && ((*pbVar10 & 3) != 0)) {
              func_0x0081b3dc(param_1,pbVar26);
            }
            func_0x0080dc58(param_1,pbVar26,1);
            func_0x00791ab0(param_1,0xffffffff);
            func_0x00794504(param_1,uVar19,3);
            func_0x00791ab0(param_1,uVar19);
            func_0x00794504(param_1,uVar5);
            func_0x00794504(param_1,0xffffd8f0,iVar6);
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar12 = 0xfffffffc;
          }
          else {
            pbVar10 = (byte *)(*pcRam000000000206e400)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019ca058();
              cVar1 = *pcVar15;
            }
            else {
              cVar1 = *pcVar15;
            }
            if (cVar1 == '\x01') {
              uVar4 = (byte)pcVar15[1] ^ 0xbb5d9e09;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) + 0xeeb8b377;
              pcVar15[0xb] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') + 0xaf ^ 0xca;
              uVar20 = (((ulong)(byte)pcVar15[1] ^ 0x3b6b49e6f0376c9e) << 0x11 | 0x76d6) +
                       0x9e3779b97f4a7c15;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[2] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0xc] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[3] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0xd] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[3]) << 0x11) + 0x9e3779b97f4a7c17;
/*  reversing this took months of machine time  */
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[4] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0xe] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[5] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0xf] = ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') -
                             ((byte)(uVar21 >> 0x29) | 1) ^ (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[6] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0x10] =
                   ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
                   (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[6]) << 0x11) + 0x9e3779b97f4a7c1a;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[7] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0x11] =
                   ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
                   (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[8] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0x12] =
                   ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
                   (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[8]) << 0x11) + 0x9e3779b97f4a7c1c;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[9] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17);
              pcVar15[0x13] =
                   ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') - ((byte)(uVar21 >> 0x29) | 1) ^
                   (byte)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar15[9]) << 0x11) + 0x9e3779b97f4a7c1d;
              uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
              uVar21 = uVar20 ^ uVar20 >> 0x21;
              uVar4 = (uint)(byte)pcVar15[10] ^ (uint)uVar21 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar21 >> 0x17);
              pcVar15[0x14] =
                   ((byte)(uVar4 >> 3) & 0x1f | (char)uVar4 * ' ') - ((byte)(uVar20 >> 0x29) | 1) ^
                   (byte)uVar21;
              *pcVar15 = '\0';
/* watermarked copy - do not remove - github.com/pengussy */
            }
            pcStack_a8 = pcVar15 + 0xb;
            uVar19 = func_0x0011ab24(&pcStack_a8);
            func_0x007935a0(param_1,0xffffffff,uVar19);
            lVar23 = func_0x00792368(param_1,0xffffffff,0);
            if (lVar23 == 0) {
              func_0x00791660(param_1,0xfffffffe);
              goto LAB_001198a0;
            }
            pbVar10 = (byte *)(*pcRam000000000206e430)();
            if ((*pbVar10 & 1) == 0) {
              func_0x019ca094();
              cVar1 = *pcVar16;
            }
            else {
              cVar1 = *pcVar16;
            }
            if (cVar1 == '\x01') {
              uVar4 = (byte)pcVar16[1] ^ 0x4093b657;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) + 0xe4632682 ^ 0x2406e7;
              pcVar16[0xc] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) + 0x6c;
              uVar20 = (((ulong)(byte)pcVar16[1] ^ 0xdda9d97420cbe1f3) << 0x11 | 0x1bb53) +
/* WM - reversing this took months of machine time */
                       0x9e3779b97f4a7c15;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[2] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
              pcVar16[0xd] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[2]) << 0x11) + 0x9e3779b97f4a7c16;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[3] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
              pcVar16[0xe] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[3]) << 0x11) + 0x9e3779b97f4a7c17;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[4] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
// WM - more drops soon - github.com/pengussy
              pcVar16[0xf] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[4]) << 0x11) + 0x9e3779b97f4a7c18;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[5] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
              pcVar16[0x10] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[5]) << 0x11) + 0x9e3779b97f4a7c19;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[6] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
              pcVar16[0x11] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[6]) << 0x11) + 0x9e3779b97f4a7c1a;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[7] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
              pcVar16[0x12] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[7]) << 0x11) + 0x9e3779b97f4a7c1b;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[8] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
/*  chat: discord.gg/sdkhDjTex  */
              pcVar16[0x13] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[8]) << 0x11) + 0x9e3779b97f4a7c1c;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[9] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
              pcVar16[0x14] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[9]) << 0x11) + 0x9e3779b97f4a7c1d;
              uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
              uVar22 = uVar21 ^ uVar21 >> 0x21;
              uVar4 = (uint)(byte)pcVar16[10] ^ (uint)uVar22 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar22 >> 0x17) ^
                      ((uint)(uVar21 >> 0x29) | 1);
              pcVar16[0x15] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar22;
              uVar20 = (uVar20 >> 0x2f | (uVar20 ^ (byte)pcVar16[10]) << 0x11) + 0x9e3779b97f4a7c1e;
              uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
              uVar20 = (uVar20 ^ uVar20 >> 0x21) * -0x3b314601e57a13ad;
              uVar21 = uVar20 ^ uVar20 >> 0x21;
/* WM - watermarked copy - do not remove */
              uVar4 = (uint)(byte)pcVar16[0xb] ^ (uint)uVar21 ^ 0xffffffc3;
              uVar4 = (uVar4 >> 4 & 0xf | uVar4 << 4) - (int)(uVar21 >> 0x17) ^
                      ((uint)(uVar20 >> 0x29) | 1);
              pcVar16[0x16] = ((byte)(uVar4 >> 1) & 0x7f | (byte)(uVar4 << 7)) - (char)uVar21;
              *pcVar16 = '\0';
            }
            pcStack_b0 = pcVar16 + 0xc;
            uVar19 = func_0x0011ab24(&pcStack_b0);
            iVar7 = _strcmp(lVar23,uVar19);
            func_0x00791660(param_1,0xfffffffe);
            func_0x00791660(param_1,0xfffffffd);
            if (iVar7 != 0) goto LAB_001198ac;
            uVar12 = 0xfffffffd;
          }
          func_0x00791660(param_1,uVar12);
          iVar27 = iVar27 + 1;
          iVar3 = iVar3 + -1;
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
        } while (iVar3 != 0);
      }
      return 0;
    }
  }
  pbVar10 = (byte *)(*pcRam000000000206e370)();
  if ((*pbVar10 & 1) == 0) goto LAB_00119c10;
  do {
    pcStack_b8 = (char *)(*pcRam000000000206e358)();
    if (*pcStack_b8 == '\x01') {
      lVar23 = 0;
      uVar20 = 0x254c36daacfb9bb2;
      do {
        uVar21 = (uVar20 ^ uVar20 >> 0x21) * -0xae502812aa7333;
        uVar21 = (uVar21 ^ uVar21 >> 0x21) * -0x3b314601e57a13ad;
        uVar22 = uVar21 ^ uVar21 >> 0x21;
        uVar4 = (uint)(byte)pcStack_b8[lVar23 + 1] ^ (uint)uVar22 ^ 0xffffffc3;
        uVar4 = (uVar4 >> 2 & 0x3f | uVar4 << 6) - (int)(uVar22 >> 0x17) ^
                ((uint)(uVar21 >> 0x29) | 1);
        pcStack_b8[lVar23 + 0x19] = ((byte)(uVar4 >> 7) & 1 | (byte)(uVar4 << 1)) - (char)uVar22;
        uVar20 = lVar23 + -0x61c8864680b583eb +
                 (uVar20 >> 0x2f | (uVar20 ^ (byte)pcStack_b8[lVar23 + 1]) << 0x11);
        lVar23 = lVar23 + 1;
      } while (lVar23 != 0x18);
      *pcStack_b8 = '\0';
    }
    pcStack_b8 = pcStack_b8 + 0x19;
    uVar11 = func_0x0011ab24(&pcStack_b8);
    func_0x007a1abc(param_1,1,uVar11);
LAB_00119c08:
    func_0x00791198(param_1);
LAB_00119c10:
    func_0x019ca0d0();
  } while( true );
}

