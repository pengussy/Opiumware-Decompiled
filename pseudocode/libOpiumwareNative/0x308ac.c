/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x308ac:3a80b34b4f
 */

/* WARNING: Removing unreachable block (ram,0x00030d10) */
/* WARNING: Removing unreachable block (ram,0x00030d0c) */
/* WARNING: Removing unreachable block (ram,0x00030d24) */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_000308ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
/* WM - chat: discord.gg/sdkhDjTex */
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  ulong uVar20;
  ulong unaff_x24;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
/* keep the notice, keep the source honest */
  
  uVar13 = (**(code **)(**(long **)(param_1 + 0x38) + 0x18))();
  auVar23 = func_0x0143405c();
  uVar20 = auVar23._8_8_;
  lVar14 = auVar23._0_8_;
  auVar24 = func_0x01434064(uVar13);
  if (auVar24 != auVar23._0_12_) {
LAB_0003091c:
    do {
      uVar21 = (ulong)*(uint *)(lVar14 + 0x20 + (uVar20 & 0xffffffff) * 4);
      piVar2 = (int *)(lVar14 + uVar21);
      iVar12 = *piVar2;
      if (iVar12 < 0x49435253) {
        if (iVar12 == 0x42444c49) {
          plStack_b0 = (long *)0x0;
          uVar21 = func_0x01728694(piVar2 + 2,piVar2[3] << 2,&plStack_b0);
          if ((int)uVar21 < 0) {
            uVar18 = 0;
          }
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
          else {
            uVar11 = (**(code **)*plStack_b0)(plStack_b0,&UNK_01ad7180,param_3);
            uVar18 = ~uVar11 >> 0x1f;
            uVar5 = (uint)unaff_x24;
            if (0x7fffffff < uVar11) {
              uVar5 = uVar11;
            }
            uVar21 = (ulong)uVar5;
          }
          unaff_x24 = uVar21;
          if (plStack_b0 != (long *)0x0) {
            (**(code **)(*plStack_b0 + 0x10))();
          }
          goto joined_r0x00030c20;
        }
        if (iVar12 == 0x48534148) {
          uVar21 = func_0x01728430(piVar2 + 2,0x14,param_1 + 0x78);
          iVar12 = (int)uVar21;
        }
        else {
          if (iVar12 != 0x49424450) goto LAB_00030b54;
          uVar21 = func_0x00031a24(param_1,piVar2 + 2,piVar2[1]);
          iVar12 = (int)uVar21;
        }
joined_r0x00030970:
        if (iVar12 < 0) {
          return uVar21;
        }
LAB_00030b54:
        uVar18 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar18;
        auVar24 = func_0x01434064(uVar13);
        lVar19 = auVar24._0_8_;
        if (uVar18 != auVar24._8_4_) goto LAB_0003091c;
      }
      else {
        if (iVar12 == 0x49435253) {
          uStack_70 = 0;
// no support for modified copies
          uStack_88 = 0;
          lStack_90 = 0;
          lStack_78 = 0;
          lStack_80 = 0;
          plStack_a8 = (long *)0x0;
          plStack_b0 = (long *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
          iVar12 = func_0x000391e8(&plStack_b0,piVar2 + 2,piVar2[1]);
          if (iVar12 == 0) {
            func_0x0003068c(param_1);
            uVar18 = 0;
            uVar16 = 0x80004005;
          }
          else {
            if ((int)((ulong)(lStack_78 - lStack_80) >> 4) * -0x55555555 != 0) {
/* stripping the watermark breaks the license - github.com/pengussy */
              lVar19 = 0;
              uVar21 = 0;
              do {
                plVar3 = (long *)(lStack_80 + lVar19);
                cVar10 = *(char *)((long)plVar3 + 0x17);
                plVar6 = (long *)*plVar3;
                if (-1 < (long)cVar10) {
                  plVar6 = plVar3;
                }
                lVar7 = plVar3[1];
                if (-1 < cVar10) {
                  lVar7 = (long)cVar10;
                }
                cVar10 = *(char *)((long)plVar3 + 0x2f);
                plVar8 = (long *)plVar3[3];
                if (-1 < (long)cVar10) {
                  plVar8 = plVar3 + 3;
                }
                lVar9 = plVar3[4];
                if (-1 < cVar10) {
                  lVar9 = (long)cVar10;
                }
/*  found on a paste site? it was re-uploaded illegally  */
                uVar16 = FUN_00031bb0(param_1,plVar6,lVar7,plVar8,lVar9);
                if ((int)uVar16 < 0) {
                  uVar18 = 0;
                  goto joined_r0x00030cd4;
                }
                uVar21 = uVar21 + 1;
                lVar19 = lVar19 + 0x30;
              } while (uVar21 < (uint)((int)((ulong)(lStack_78 - lStack_80) >> 4) * -0x55555555));
            }
            if ((lStack_90 - lStack_98 & 0x1fffffffe0U) == 0) {
              uVar18 = 1;
              uVar16 = unaff_x24;
            }
            else {
              lVar19 = 0;
              uVar21 = 0;
              do {
                puVar4 = (undefined8 *)(lStack_98 + lVar19);
                uVar16 = func_0x000322ac(param_1,*puVar4,puVar4[1],puVar4[2],puVar4[3]);
                uVar18 = ~(uint)uVar16 >> 0x1f;
                if ((int)(uint)uVar16 < 0) break;
                uVar21 = uVar21 + 1;
                lVar19 = lVar19 + 0x20;
                uVar16 = unaff_x24;
              } while (uVar21 < ((ulong)(lStack_90 - lStack_98) >> 5 & 0xffffffff));
            }
          }
joined_r0x00030cd4:
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          unaff_x24 = uVar16;
          if (lStack_80 != 0) {
            for (; lStack_80 != lStack_78; lStack_78 = lStack_78 + -0x30) {
            }
            lStack_78 = lStack_80;
            __ZdlPv(lStack_80);
          }
          if (lStack_98 != 0) {
            lStack_90 = lStack_98;
            __ZdlPv();
          }
          if (plStack_b0 != (long *)0x0) {
            plStack_a8 = plStack_b0;
            __ZdlPv();
          }
joined_r0x00030c20:
          if (uVar18 == 0) {
            return unaff_x24;
          }
          goto LAB_00030b54;
        }
        if (iVar12 == 0x4e444c49) {
          uVar15 = _strlen(piVar2 + 3);
          plStack_b0 = (long *)0x0;
          uVar21 = func_0x01727244(piVar2 + 3,uVar15,1,0,1,0xfde9,*(undefined8 *)(param_1 + 0x20),
                                   &plStack_b0);
          if (-1 < (int)uVar21) {
            uVar21 = func_0x01728ee4(plStack_b0,*(undefined8 *)(param_1 + 0x20),param_1 + 0x68);
          }
          if (plStack_b0 != (long *)0x0) {
            (**(code **)(*plStack_b0 + 0x10))(plStack_b0);
          }
          iVar12 = (int)uVar21;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
          goto joined_r0x00030970;
        }
        if (iVar12 != 0x53524556) goto LAB_00030b54;
        uVar15 = *(undefined8 *)(piVar2 + 2);
        *(undefined8 *)(param_1 + 0x91) = *(undefined8 *)(piVar2 + 4);
        *(undefined8 *)(param_1 + 0x89) = uVar15;
        *(undefined1 *)(param_1 + 0x88) = 1;
        piVar1 = piVar2 + 6;
        uVar16 = (ulong)(uint)piVar2[5];
        if (piVar2[5] == 0) {
          uVar16 = 0;
          uVar22 = 0;
        }
        else {
          uVar17 = 0;
          do {
            if (*(char *)((long)piVar1 + uVar17) == '\0') {
              uVar22 = (ulong)((int)uVar17 + 1);
              uVar16 = uVar17 & 0xffffffff;
              goto LAB_00030c3c;
            }
            uVar17 = uVar17 + 1;
          } while (uVar16 != uVar17);
          uVar22 = uVar16;
        }
LAB_00030c3c:
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                  (param_1 + 0xa0,piVar1,uVar16);
        if ((uint)uVar22 < (uint)piVar2[5]) {
// proprietary - see LICENSE - do not sell
          uVar17 = 0;
          uVar18 = piVar2[5] - (uint)uVar22;
          uVar16 = (ulong)uVar18;
          do {
            if (*(char *)(lVar14 + 0x18 + uVar22 + uVar21 + uVar17) == '\0') {
              uVar16 = uVar17;
              break;
            }
            uVar17 = uVar17 + 1;
          } while (uVar18 != (uint)uVar17);
          uVar16 = uVar16 & 0xffffffff;
        }
        else {
          uVar16 = 0;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKcm
                  (param_1 + 0xb8,(long)piVar1 + uVar22,uVar16);
        uVar18 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar18;
        auVar24 = func_0x01434064(uVar13);
        lVar19 = auVar24._0_8_;
        if (uVar18 != auVar24._8_4_) goto LAB_0003091c;
      }
    } while (lVar14 != lVar19);
  }
  return 0;
}

