/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2f9afc:931331060f
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

void FUN_002f9afc(long *param_1,undefined8 *param_2,ulong *param_3,ulong *param_4,ulong param_5,
                 uint param_6)

{
  long lVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  ulong uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint unaff_1000116a;
  bool bVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint uVar15;
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  ulong *puVar16;
  uint uVar17;
  uint uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong *puVar21;
  undefined8 *puVar22;
  long lVar23;
  ulong uVar24;
  undefined8 *puVar25;
  int iVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ushort *puVar30;
  ulong uVar31;
  undefined8 *puVar32;
  undefined1 *puVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  long lVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  ulong uVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined8 *puVar43;
  ulong *puVar44;
  ulong *puVar45;
  undefined8 *puVar46;
  undefined1 *puVar47;
  undefined1 *puVar48;
  int iVar49;
  ulong uVar50;
  undefined8 *puVar51;
  undefined1 *puVar52;
  undefined8 uVar53;
/*  donate: donate/README.md  */
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined1 auVar60 [16];
  ulong uStack_1b8;
  ulong *puStack_1a0;
  undefined1 *puStack_198;
  undefined1 *puStack_178;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  ulong uStack_138;
  ulong auStack_130 [24];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((int)param_1[0xed4] == 1) {
    puVar47 = (undefined1 *)param_1[0xed2];
    puStack_150 = (undefined8 *)param_1[0xeb5];
    puVar43 = (undefined8 *)param_1[0xed3];
  }
  else {
    puVar47 = (undefined1 *)
              ((long)param_2 + ((ulong)param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU)));
    puStack_150 = (undefined8 *)param_1[0xeb5];
    puVar43 = (undefined8 *)param_1[0xed3];
  }
  puVar46 = param_2;
  if (unaff_1000116a == 0) {
    puVar19 = puStack_150;
    puStack_158 = puVar43;
    if ((int)param_1[0xed4] != 2) goto LAB_002f9c38;
LAB_002f9bfc:
    puVar44 = (ulong *)((long)puVar43 - (long)puStack_150);
/*  if you paid for this, you were scammed  */
    if (puVar44 <= puVar47 + -(long)puVar46) {
      if (puVar46 != (undefined8 *)0x0) {
        param_3 = puVar44;
        _memmove(puVar46);
        puVar46 = (undefined8 *)((long)puVar46 + (long)puVar44);
      }
      puVar19 = (undefined8 *)((long)param_1 + 0x76a4);
      puStack_158 = (undefined8 *)((long)param_1 + 0x176a4);
      goto LAB_002f9c38;
    }
  }
  else {
    puVar19 = (undefined8 *)param_1[0xe99];
    lVar20 = param_1[0xe9a];
    puVar51 = (undefined8 *)param_1[0xe9b];
    *(undefined4 *)((long)param_1 + 0x7534) = 1;
    uVar17 = unaff_1000116a;
    if (7 < (int)unaff_1000116a) {
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
      uVar17 = 8;
    }
    uVar40 = (ulong)uVar17;
    if (param_5 == 0) {
LAB_002fc064:
      puVar42 = (undefined1 *)0xffffffffffffffec;
      goto LAB_002fc068;
    }
    puVar48 = (undefined1 *)(ulong)*(uint *)((long)param_1 + 0x683c);
    puStack_178 = (undefined1 *)(ulong)*(uint *)(param_1 + 0xd08);
    puStack_198 = (undefined1 *)(ulong)*(uint *)((long)param_1 + 0x6844);
    uVar35 = param_5 - 8;
    if (param_5 < 8) {
      uVar24 = (ulong)(byte)*param_4;
      if ((long)param_5 < 5) {
        if (param_5 != 2) {
          if (param_5 != 3) {
            if (param_5 != 4) goto LAB_002f9cd8;
            goto LAB_002f9cc0;
          }
          goto LAB_002f9cc8;
        }
LAB_002f9cd0:
        uVar24 = uVar24 + (ulong)*(byte *)((long)param_4 + 1) * 0x100;
      }
      else {
        if (param_5 == 5) {
LAB_002f9cb8:
          uVar24 = uVar24 + ((ulong)*(byte *)((long)param_4 + 4) << 0x20);
LAB_002f9cc0:
          uVar24 = uVar24 + (ulong)*(byte *)((long)param_4 + 3) * 0x1000000;
LAB_002f9cc8:
          uVar24 = uVar24 + (ulong)*(byte *)((long)param_4 + 2) * 0x10000;
          goto LAB_002f9cd0;
        }
        if (param_5 == 6) {
LAB_002f9cb0:
          uVar24 = uVar24 + ((ulong)*(byte *)((long)param_4 + 5) << 0x28);
/*  thanks for reading - discord.gg/sdkhDjTex  */
          goto LAB_002f9cb8;
        }
        if (param_5 == 7) {
          uVar24 = uVar24 | (ulong)*(byte *)((long)param_4 + 6) << 0x30;
          goto LAB_002f9cb0;
        }
      }
LAB_002f9cd8:
      uVar18 = (uint)*(byte *)((long)param_4 + (param_5 - 1));
      if (uVar18 == 0) goto LAB_002fc064;
      uVar35 = 0;
      iVar26 = (int)LZCOUNT(uVar18) + (int)param_5 * -8 + 0x29;
    }
    else {
      uVar24 = *(ulong *)((long)param_4 + uVar35);
      if ((uVar24 >> 0x38 == 0) || (0xffffffffffffff88 < param_5)) goto LAB_002fc064;
      iVar26 = 8 - ((uint)LZCOUNT((uint)(byte)(uVar24 >> 0x38)) ^ 0x1f);
    }
    uVar7 = *(uint *)(*param_1 + 4);
    uVar18 = uVar7 + iVar26;
    uVar15 = -uVar18;
    uStack_1b8 = uVar24;
    if (uVar18 < 0x41) {
      if ((long)uVar35 < 8) {
        puStack_1a0 = param_4;
        if (uVar35 == 0) goto LAB_002f9d5c;
        uVar29 = uVar35;
        if ((long)(ulong)(uVar18 >> 3) <= (long)uVar35) {
          uVar29 = (ulong)(uVar18 >> 3);
        }
        uVar27 = uVar29 & 0xffffffff;
        uVar18 = uVar18 + (int)uVar29 * -8;
      }
      else {
/* reversing this took months of machine time */
        uVar27 = (ulong)(uVar18 >> 3);
        uVar18 = uVar18 & 7;
      }
      puStack_1a0 = (ulong *)((long)param_4 + (uVar35 - uVar27));
      uStack_1b8 = *puStack_1a0;
    }
    else {
      puStack_1a0 = (ulong *)&UNK_01adeee8;
    }
LAB_002f9d5c:
    puVar44 = param_4 + 1;
    uVar34 = *(uint *)(param_1[2] + 4);
    uVar18 = uVar34 + uVar18;
    uVar35 = uStack_1b8 >> ((ulong)-uVar18 & 0x3f);
    iVar26 = (int)param_4;
    if (uVar18 < 0x41) {
      if (puStack_1a0 < puVar44) {
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        if (puStack_1a0 == param_4) goto LAB_002f9dd0;
        uVar36 = (int)puStack_1a0 - iVar26;
        if (param_4 <= (ulong *)((long)puStack_1a0 - (ulong)(uVar18 >> 3))) {
          uVar36 = uVar18 >> 3;
        }
        uVar18 = uVar18 + uVar36 * -8;
      }
      else {
        uVar36 = uVar18 >> 3;
        uVar18 = uVar18 & 7;
      }
      puStack_1a0 = (ulong *)((long)puStack_1a0 - (ulong)uVar36);
      uStack_1b8 = *puStack_1a0;
    }
    else {
      puStack_1a0 = (ulong *)&UNK_01adeee8;
    }
LAB_002f9dd0:
    puVar52 = (undefined1 *)((long)param_2 - (long)puVar19);
    uVar24 = uVar24 >> ((ulong)uVar15 & 0x3f) & (ulong)*(uint *)(&UNK_01adee64 + (ulong)uVar7 * 4);
    puVar14 = (undefined1 *)(uVar35 & *(uint *)(&UNK_01adee64 + (ulong)uVar34 * 4));
    uVar7 = *(uint *)(param_1[1] + 4);
    uVar18 = uVar7 + uVar18;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
    uVar35 = (ulong)uVar18;
    puStack_158 = (undefined8 *)
                  (uStack_1b8 >> ((ulong)-uVar18 & 0x3f) &
                  (ulong)*(uint *)(&UNK_01adee64 + (ulong)uVar7 * 4));
    if (uVar18 < 0x41) {
      if (puStack_1a0 < puVar44) {
        if (puStack_1a0 == param_4) goto LAB_002f9e54;
        uVar7 = (int)puStack_1a0 - iVar26;
        if (param_4 <= (ulong *)((long)puStack_1a0 - (ulong)(uVar18 >> 3))) {
          uVar7 = uVar18 >> 3;
        }
        uVar18 = uVar18 + uVar7 * -8;
      }
      else {
        uVar7 = uVar18 >> 3;
        uVar18 = uVar18 & 7;
      }
      uVar35 = (ulong)uVar18;
      puStack_1a0 = (ulong *)((long)puStack_1a0 - (ulong)uVar7);
/* WM - found on a paste site? it was re-uploaded illegally */
      uStack_1b8 = *puStack_1a0;
    }
    else {
      puStack_1a0 = (ulong *)&UNK_01adeee8;
    }
LAB_002f9e54:
    iVar49 = (int)uVar35;
    lVar12 = *param_1 + 8;
    lVar23 = param_1[2] + 8;
    lVar1 = param_1[1] + 8;
    uVar27 = (ulong)(unaff_1000116a - 1);
    if ((int)unaff_1000116a < 1) {
      uVar40 = 0;
      uVar18 = 0;
      if (0 < (int)unaff_1000116a) goto LAB_002fa150;
    }
    else {
      puVar21 = auStack_130 + 2;
      uVar29 = uVar40;
      puVar42 = puStack_178;
      uVar50 = uVar35;
      do {
        puStack_178 = puVar48;
        uVar18 = (uint)uVar50;
        puVar3 = (ushort *)(lVar12 + uVar24 * 8);
        puVar4 = (ushort *)(lVar23 + (long)puVar14 * 8);
        uVar15 = *(uint *)(puVar3 + 2);
        uVar7 = *(uint *)(puVar4 + 2);
        bVar9 = (byte)puVar4[1];
        uVar34 = (uint)bVar9;
/*  do not claim this as your own  */
        if (bVar9 < 2) {
          puVar48 = puVar42;
          if (bVar9 == 0) {
            if (uVar15 != 0) {
              puVar48 = puStack_178;
              puStack_178 = puVar42;
            }
          }
          else {
            if (uVar15 == 0) {
              uVar7 = uVar7 + 1;
            }
            uVar50 = (long)(uStack_1b8 << (uVar35 & 0x3f)) >> 0x3f;
            lVar37 = uVar7 - uVar50;
            if (lVar37 != 1) {
              if (lVar37 == 3) {
                puVar48 = puStack_178 + -1;
                puStack_198 = puVar42;
              }
              else {
                puVar48 = puStack_178;
                if (uVar7 != uVar50) {
                  puVar48 = puStack_198;
                }
                puStack_198 = puVar42;
              }
            }
            uVar18 = (int)uVar35 + 1;
            uVar35 = (ulong)uVar18;
            if (puVar48 == (undefined1 *)0x0) {
              puVar48 = (undefined1 *)0xffffffffffffffff;
            }
          }
        }
        else {
          uVar50 = uVar35 & 0x3f;
          uVar18 = (int)uVar35 + uVar34;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          uVar35 = (ulong)uVar18;
          puVar48 = (undefined1 *)
                    (((uStack_1b8 << uVar50) >> ((ulong)-uVar34 & 0x3f)) + (ulong)uVar7);
          puStack_198 = puVar42;
        }
        puVar30 = (ushort *)(lVar1 + (long)puStack_158 * 8);
        bVar9 = (byte)puVar3[1];
        bVar8 = (byte)puVar30[1];
        uVar13 = (uint)bVar8;
        uVar7 = (uint)uVar35 + uVar13;
        uVar36 = (uint)uVar35;
        if (uVar13 != 0) {
          uVar36 = uVar7;
          uVar18 = uVar7;
        }
        uVar11 = (ulong)uVar36;
        uVar31 = (ulong)*(uint *)(puVar30 + 2);
        if (uVar13 != 0) {
          uVar31 = ((uStack_1b8 << (uVar35 & 0x3f)) >> ((ulong)-(uint)bVar8 & 0x3f)) +
/* no support for modified copies - github.com/pengussy */
                   (ulong)*(uint *)(puVar30 + 2);
        }
        if (0x1e < ((uint)bVar8 + (uint)bVar9 + uVar34 & 0xff)) {
          if (uVar36 < 0x41) {
            if (puStack_1a0 < puVar44) {
              if (puStack_1a0 == param_4) goto LAB_002f9f84;
              uVar7 = (int)puStack_1a0 - iVar26;
              if (param_4 <= (ulong *)((long)puStack_1a0 - (ulong)(uVar36 >> 3))) {
                uVar7 = uVar36 >> 3;
              }
              uVar18 = uVar36 + uVar7 * -8;
            }
            else {
              uVar7 = uVar36 >> 3;
              uVar18 = uVar36 & 7;
            }
            puStack_1a0 = (ulong *)((long)puStack_1a0 - (ulong)uVar7);
            uVar11 = (ulong)uVar18;
            uStack_1b8 = *puStack_1a0;
          }
          else {
            puStack_1a0 = (ulong *)&UNK_01adeee8;
          }
        }
LAB_002f9f84:
// WM - more drops soon - github.com/pengussy
        uVar7 = (uint)uVar11 + (uint)bVar9;
        param_3 = (ulong *)(((uStack_1b8 << (uVar11 & 0x3f)) >> ((ulong)-(uint)bVar9 & 0x3f)) +
                           (long)(ulong)uVar15);
        bVar10 = bVar9 != 0;
        if (bVar10) {
          uVar18 = uVar7;
        }
        uVar50 = (ulong)uVar18;
        uVar18 = (uint)uVar11;
        if (bVar10) {
          uVar18 = uVar7;
        }
        uVar35 = (ulong)uVar18;
        puVar45 = (ulong *)(ulong)uVar15;
        if (bVar10) {
          puVar45 = param_3;
        }
        if (uVar27 != 0) {
          param_3 = (ulong *)(ulong)*puVar4;
          iVar49 = uVar18 + *(byte *)((long)puVar3 + 3);
          uVar24 = (uStack_1b8 >> ((ulong)(uint)-iVar49 & 0x3f) &
                   (ulong)*(uint *)(&UNK_01adee64 + (ulong)(uint)*(byte *)((long)puVar3 + 3) * 4)) +
                   (ulong)*puVar3;
          iVar49 = iVar49 + (uint)*(byte *)((long)puVar30 + 3);
          puStack_158 = (undefined8 *)
                        ((uStack_1b8 >> ((ulong)(uint)-iVar49 & 0x3f) &
                         (ulong)*(uint *)(&UNK_01adee64 +
                                         (ulong)(uint)*(byte *)((long)puVar30 + 3) * 4)) +
                        (ulong)*puVar30);
          uVar18 = iVar49 + (uint)*(byte *)((long)puVar4 + 3);
          uVar35 = (ulong)uVar18;
          puVar14 = (undefined1 *)
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
                    ((uStack_1b8 >> ((ulong)-uVar18 & 0x3f) &
                     (ulong)*(uint *)(&UNK_01adee64 + (ulong)(uint)*(byte *)((long)puVar4 + 3) * 4))
                    + (long)param_3);
          if (uVar18 < 0x41) {
            if (puStack_1a0 < puVar44) {
              if (puStack_1a0 == param_4) goto LAB_002fa058;
              uVar7 = (int)puStack_1a0 - iVar26;
              if (param_4 <= (ulong *)((long)puStack_1a0 - (ulong)(uVar18 >> 3))) {
                uVar7 = uVar18 >> 3;
              }
              uVar18 = uVar18 + uVar7 * -8;
            }
            else {
              uVar7 = uVar18 >> 3;
              uVar18 = uVar18 & 7;
            }
            uVar35 = (ulong)uVar18;
            puStack_1a0 = (ulong *)((long)puStack_1a0 - (ulong)uVar7);
            uStack_1b8 = *puStack_1a0;
          }
          else {
            puStack_1a0 = (ulong *)&UNK_01adeee8;
          }
LAB_002fa058:
/* keep the notice, keep the source honest */
          uVar50 = uVar35;
        }
        iVar49 = (int)uVar50;
        puVar52 = (undefined1 *)((long)puVar45 + (long)puVar52);
        puVar2 = puVar51;
        if (puVar48 <= puVar52) {
          puVar2 = puVar19;
        }
        lVar37 = (long)((long)puVar2 + (long)puVar52) - (long)puVar48;
        Hint_Prefetch(lVar37,0,0,0);
        Hint_Prefetch(lVar37 + 0x40,0,0,0);
        puVar52 = puVar52 + uVar31;
        puVar21[-2] = (ulong)puVar45;
        puVar21[-1] = uVar31;
        *puVar21 = (ulong)puVar48;
        uVar27 = uVar27 - 1;
        uVar29 = uVar29 - 1;
        puVar21 = puVar21 + 3;
        puVar42 = puStack_178;
      } while (uVar29 != 0);
      uVar35 = uVar50;
      uVar18 = uVar17;
      if ((int)uVar17 < (int)unaff_1000116a) {
LAB_002fa150:
        puVar2 = (undefined8 *)((long)param_1 + 0x76a4);
LAB_002fa1b0:
        uVar15 = (uint)uVar40;
        param_3 = auStack_130;
        puVar3 = (ushort *)(lVar12 + uVar24 * 8);
        puVar4 = (ushort *)(lVar23 + (long)puVar14 * 8);
        uVar7 = *(uint *)(puVar3 + 2);
        uVar18 = *(uint *)(puVar4 + 2);
        bVar9 = (byte)puVar4[1];
        uVar34 = (uint)bVar9;
        if (bVar9 < 2) {
          if (bVar9 == 0) {
/* wm:found on a paste site? it was re-uploaded illegally */
            puVar42 = puStack_178;
            if (uVar7 != 0) {
              puVar42 = puVar48;
              puVar48 = puStack_178;
            }
            puVar30 = (ushort *)(lVar1 + (long)puStack_158 * 8);
            uVar18 = *(uint *)(puVar30 + 2);
            bVar9 = (byte)puVar30[1];
            puStack_178 = puVar48;
          }
          else {
            if (uVar7 == 0) {
              uVar18 = uVar18 + 1;
            }
            uVar40 = (long)(uStack_1b8 << (uVar35 & 0x3f)) >> 0x3f;
            lVar37 = uVar18 - uVar40;
            if (lVar37 != 1) {
              if (lVar37 == 3) {
                puStack_198 = puStack_178;
                puStack_178 = puVar48 + -1;
              }
              else {
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
                puVar42 = puVar48;
                if (uVar18 != uVar40) {
                  puVar42 = puStack_198;
                }
                puStack_198 = puStack_178;
                puStack_178 = puVar42;
              }
            }
            uVar35 = (ulong)((int)uVar35 + 1);
            if (puStack_178 == (undefined1 *)0x0) {
              puStack_178 = (undefined1 *)0xffffffffffffffff;
            }
            puVar30 = (ushort *)(lVar1 + (long)puStack_158 * 8);
            uVar18 = *(uint *)(puVar30 + 2);
            bVar9 = (byte)puVar30[1];
            puVar42 = puStack_178;
            puStack_178 = puVar48;
          }
          uVar36 = (uint)bVar9;
          uVar40 = (ulong)uVar18;
          if (uVar36 != 0) goto LAB_002fa208;
        }
        else {
          uVar40 = uVar35 & 0x3f;
          uVar35 = (ulong)((int)uVar35 + uVar34);
          puStack_198 = puStack_178;
          puVar42 = (undefined1 *)
                    (((uStack_1b8 << uVar40) >> ((ulong)-uVar34 & 0x3f)) + (ulong)uVar18);
          puVar30 = (ushort *)(lVar1 + (long)puStack_158 * 8);
          uVar40 = (ulong)*(uint *)(puVar30 + 2);
          uVar36 = (uint)(byte)puVar30[1];
          puStack_178 = puVar48;
          if ((byte)puVar30[1] != 0) {
LAB_002fa208:
            uVar27 = uVar35 & 0x3f;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
            uVar35 = (ulong)((int)uVar35 + uVar36);
            uVar40 = ((uStack_1b8 << uVar27) >> ((ulong)-uVar36 & 0x3f)) + uVar40;
          }
        }
        puVar48 = puVar42;
        bVar9 = (byte)puVar3[1];
        if (0x1e < (uVar36 + bVar9 + uVar34 & 0xff)) {
          uVar18 = (uint)uVar35;
          if (uVar18 < 0x41) {
            if (puStack_1a0 < puVar44) {
              if (puStack_1a0 == param_4) goto LAB_002fa234;
              uVar34 = (int)puStack_1a0 - iVar26;
              if (param_4 <= (ulong *)((long)puStack_1a0 - (ulong)(uVar18 >> 3))) {
                uVar34 = uVar18 >> 3;
              }
              uVar18 = uVar18 + uVar34 * -8;
            }
            else {
              uVar34 = uVar18 >> 3;
              uVar18 = uVar18 & 7;
            }
/*  watermarked copy - do not remove  */
            uVar35 = (ulong)uVar18;
            puStack_1a0 = (ulong *)((long)puStack_1a0 - (ulong)uVar34);
            uStack_1b8 = *puStack_1a0;
          }
          else {
            puStack_1a0 = (ulong *)&UNK_01adeee8;
          }
        }
LAB_002fa234:
        uVar27 = uVar35 & 0x3f;
        uVar34 = (uint)bVar9;
        uVar18 = (uint)uVar35;
        if (uVar34 != 0) {
          uVar18 = (uint)uVar35 + uVar34;
        }
        uVar35 = (ulong)uVar18;
        uVar29 = (ulong)uVar7;
        if (uVar34 != 0) {
          uVar29 = ((uStack_1b8 << uVar27) >> ((ulong)-(uint)bVar9 & 0x3f)) + (ulong)uVar7;
        }
        if (uVar15 == unaff_1000116a - 1) {
LAB_002fa33c:
          if ((int)param_1[0xed4] == 2) goto LAB_002fa354;
LAB_002fa9e4:
          uVar50 = (ulong)(uVar15 & 7);
          uVar27 = param_3[uVar50 * 3];
          puVar21 = (ulong *)auStack_130[uVar50 * 3 + 1];
          uVar50 = auStack_130[uVar50 * 3 + 2];
          puVar22 = (undefined8 *)((long)puVar46 + uVar27);
          puVar38 = (undefined8 *)((long)puVar22 - uVar50);
          Hint_Prefetch(puVar38,0,0,0);
          puVar32 = (undefined8 *)((long)puStack_150 + uVar27);
          if ((puVar43 < puVar32) ||
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
             (puVar42 = (undefined1 *)((long)puVar21 + uVar27),
             puVar47 + -0x20 < (undefined1 *)((long)puVar46 + (long)puVar42))) {
            uStack_148 = uVar27;
            puStack_140 = puVar21;
            uStack_138 = uVar50;
            puVar42 = (undefined1 *)
                      func_0x002fc12c(puVar46,puVar47,&uStack_148,&puStack_150,puVar43,puVar19,
                                      lVar20);
          }
          else {
            uVar53 = *puStack_150;
            puVar46[1] = puStack_150[1];
            *puVar46 = uVar53;
            if (0x10 < uVar27) {
              uVar53 = puStack_150[2];
              puVar46[3] = puStack_150[3];
              puVar46[2] = uVar53;
              if (0x10 < uVar27 - 0x10) {
/* wm:donate: donate/README.md */
                puVar25 = puVar46 + 4;
                puVar28 = puStack_150 + 6;
                do {
                  uVar53 = puVar28[-2];
                  puVar25[1] = puVar28[-1];
                  *puVar25 = uVar53;
                  uVar53 = *puVar28;
                  puVar25[3] = puVar28[1];
                  puVar25[2] = uVar53;
                  puVar25 = puVar25 + 4;
                  puVar28 = puVar28 + 4;
                } while (puVar25 < puVar22);
              }
            }
            uVar27 = (long)puVar22 - (long)puVar19;
            puStack_150 = puVar32;
            if (uVar27 < uVar50) {
              if ((ulong)((long)puVar22 - lVar20) < uVar50) goto LAB_002fc064;
              lVar37 = (long)puVar38 - (long)puVar19;
              puVar45 = (ulong *)(lVar37 + (long)puVar21);
              if (puVar45 == (ulong *)0x0 || (long)puVar45 < 0 != SCARRY8(lVar37,(long)puVar21)) {
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
                _memmove(puVar22,(undefined1 *)((long)puVar51 + lVar37),puVar21);
                goto joined_r0x002fab20;
              }
              _memmove(puVar22,(undefined1 *)((long)puVar51 + lVar37),-lVar37);
              puVar22 = (undefined8 *)((long)puVar22 - lVar37);
              puVar38 = puVar19;
            }
            else {
              puVar45 = puVar21;
            }
            if (uVar50 < 0x10) {
              if (uVar50 < 8) {
                iVar49 = *(int *)(&UNK_01adef10 + uVar50 * 4);
                *(undefined1 *)puVar22 = *(undefined1 *)puVar38;
                *(undefined1 *)((long)puVar22 + 1) = *(undefined1 *)((long)puVar38 + 1);
                *(undefined1 *)((long)puVar22 + 2) = *(undefined1 *)((long)puVar38 + 2);
                *(undefined1 *)((long)puVar22 + 3) = *(undefined1 *)((long)puVar38 + 3);
                puVar5 = (undefined4 *)
                         ((long)puVar38 + (ulong)*(uint *)(&UNK_01adeef0 + uVar50 * 4));
                puVar38 = (undefined8 *)((long)puVar5 - (long)iVar49);
                *(undefined4 *)((long)puVar22 + 4) = *puVar5;
              }
              else {
                *puVar22 = *puVar38;
              }
              if ((ulong *)((long)&MACH_HEADER.cpusubtype + 1) <= puVar45) {
                puVar32 = puVar38 + 1;
                puVar25 = puVar22 + 1;
                if ((long)puVar25 - (long)puVar32 < 0x10) {
                  uVar31 = uVar50;
                  if (uVar27 <= uVar50) {
                    uVar31 = uVar27;
                  }
/* WM - do not claim this as your own */
                  uVar11 = uVar50;
                  if (uVar50 <= uVar27) {
                    uVar11 = uVar27;
                  }
                  puVar33 = (undefined1 *)((long)puVar19 + uVar11 + 0x10);
                  puVar41 = (undefined1 *)((long)puVar21 + (long)puVar19) +
                            ((uVar11 + uVar31) - uVar50);
                  if ((undefined1 *)((long)puVar21 + (long)puVar19) + ((uVar11 + uVar31) - uVar50)
                      <= puVar33) {
                    puVar41 = puVar33;
                  }
                  if ((undefined1 *)0x37 < puVar41 + (-9 - (long)(uVar11 + (long)puVar19))) {
                    if (0x3f < (ulong)((long)puVar25 - (long)puVar32)) {
                      uVar27 = ((ulong)(puVar41 + (-9 - (long)(uVar11 + (long)puVar19))) >> 3) + 1;
                      uVar31 = uVar27 & 0x3ffffffffffffff8;
                      puVar38 = puVar38 + 5;
                      puVar28 = (undefined8 *)((long)puVar19 + uVar11 + 0x28);
                      uVar50 = uVar31;
                      do {
                        uVar53 = puVar38[-4];
                        uVar55 = puVar38[-1];
                        uVar54 = puVar38[-2];
                        uVar57 = puVar38[1];
                        uVar56 = *puVar38;
                        uVar59 = puVar38[3];
                        uVar58 = puVar38[2];
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
                        puVar28[-3] = puVar38[-3];
                        puVar28[-4] = uVar53;
                        puVar28[-1] = uVar55;
                        puVar28[-2] = uVar54;
                        puVar28[1] = uVar57;
                        *puVar28 = uVar56;
                        puVar28[3] = uVar59;
                        puVar28[2] = uVar58;
                        uVar50 = uVar50 - 8;
                        puVar38 = puVar38 + 8;
                        puVar28 = puVar28 + 8;
                      } while (uVar50 != 0);
                      puVar32 = puVar32 + uVar31;
                      puVar25 = puVar25 + uVar31;
                      if (uVar27 == uVar31) goto joined_r0x002fab20;
                    }
                  }
                  do {
                    puVar38 = puVar25 + 1;
                    *puVar25 = *puVar32;
                    puVar32 = puVar32 + 1;
                    puVar25 = puVar38;
                  } while (puVar38 < (undefined8 *)((long)puVar22 + (long)puVar45));
                }
                else {
                  uVar53 = *puVar32;
                  puVar22[2] = puVar38[2];
                  *puVar25 = uVar53;
                  if (&MACH_HEADER.ncmds < puVar45 + -1) {
                    puVar32 = puVar22 + 3;
                    puVar38 = puVar38 + 5;
                    do {
                      uVar53 = puVar38[-2];
                      puVar32[1] = puVar38[-1];
                      *puVar32 = uVar53;
                      uVar53 = *puVar38;
                      puVar32[3] = puVar38[1];
                      puVar32[2] = uVar53;
/*  no support for modified copies  */
                      puVar32 = puVar32 + 4;
                      puVar38 = puVar38 + 4;
                    } while (puVar32 < (undefined8 *)((long)puVar22 + (long)puVar45));
                  }
                }
              }
            }
            else {
              uVar53 = *puVar38;
              puVar22[1] = puVar38[1];
              *puVar22 = uVar53;
              if ((ulong *)((long)&MACH_HEADER.ncmds + 1) <= puVar45) {
                puVar32 = puVar22 + 2;
                do {
                  uVar53 = puVar38[2];
                  puVar32[1] = puVar38[3];
                  *puVar32 = uVar53;
                  uVar53 = puVar38[4];
                  puVar32[3] = puVar38[5];
                  puVar32[2] = uVar53;
                  puVar32 = puVar32 + 4;
                  puVar38 = puVar38 + 4;
                } while (puVar32 < (undefined8 *)((long)puVar22 + (long)puVar45));
              }
            }
          }
        }
        else {
          iVar49 = uVar18 + *(byte *)((long)puVar3 + 3);
          uVar24 = (uStack_1b8 >> ((ulong)(uint)-iVar49 & 0x3f) &
                   (ulong)*(uint *)(&UNK_01adee64 + (ulong)(uint)*(byte *)((long)puVar3 + 3) * 4)) +
                   (ulong)*puVar3;
          iVar49 = iVar49 + (uint)*(byte *)((long)puVar30 + 3);
          puStack_158 = (undefined8 *)
                        ((uStack_1b8 >> ((ulong)(uint)-iVar49 & 0x3f) &
                         (ulong)*(uint *)(&UNK_01adee64 +
                                         (ulong)(uint)*(byte *)((long)puVar30 + 3) * 4)) +
                        (ulong)*puVar30);
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
          uVar18 = iVar49 + (uint)*(byte *)((long)puVar4 + 3);
          uVar35 = (ulong)uVar18;
          puVar14 = (undefined1 *)
                    ((uStack_1b8 >> ((ulong)-uVar18 & 0x3f) &
                     (ulong)*(uint *)(&UNK_01adee64 + (ulong)(uint)*(byte *)((long)puVar4 + 3) * 4))
                    + (ulong)*puVar4);
          if (uVar18 < 0x41) {
            if (puStack_1a0 < puVar44) {
              if (puStack_1a0 == param_4) goto LAB_002fa33c;
              uVar7 = (int)puStack_1a0 - iVar26;
              if (param_4 <= (ulong *)((long)puStack_1a0 - (ulong)(uVar18 >> 3))) {
                uVar7 = uVar18 >> 3;
              }
              uVar18 = uVar18 + uVar7 * -8;
            }
            else {
              uVar7 = uVar18 >> 3;
              uVar18 = uVar18 & 7;
            }
            uVar35 = (ulong)uVar18;
            puStack_1a0 = (ulong *)((long)puStack_1a0 - (ulong)uVar7);
            uStack_1b8 = *puStack_1a0;
            goto LAB_002fa33c;
          }
          puStack_1a0 = (ulong *)&UNK_01adeee8;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
          if ((int)param_1[0xed4] != 2) goto LAB_002fa9e4;
LAB_002fa354:
          uVar27 = (ulong)(uVar15 & 7);
          puVar21 = param_3 + uVar27 * 3;
          uVar50 = *puVar21;
          puVar32 = (undefined8 *)param_1[0xed3];
          puVar22 = (undefined8 *)((long)puStack_150 + uVar50);
          if (puVar32 < puVar22) {
            puVar42 = (undefined1 *)((long)puVar32 - (long)puStack_150);
            if (puVar42 != (undefined1 *)0x0) {
              if (puVar47 + -(long)puVar46 < puVar42) goto LAB_002f9c48;
              uVar50 = (long)puVar46 - (long)puStack_150;
              puVar43 = (undefined8 *)((long)puVar46 + (long)puVar42);
              if (((long)uVar50 < -7) && ((undefined1 *)0x7 < puVar42)) {
                if ((uVar50 < 0xfffffffffffffff0) &&
                   (puVar33 = puVar42 + -0x20, 0x1f < (long)puVar42)) {
                  uVar53 = *puStack_150;
                  puVar46[1] = puStack_150[1];
                  *puVar46 = uVar53;
                  if ((undefined1 *)0x10 < puVar33) {
                    puVar22 = puVar46 + 2;
                    puVar32 = puStack_150;
                    do {
/* wm:chat: discord.gg/sdkhDjTex */
                      uVar53 = puVar32[2];
                      puVar22[1] = puVar32[3];
                      *puVar22 = uVar53;
                      uVar53 = puVar32[4];
                      puVar22[3] = puVar32[5];
                      puVar22[2] = uVar53;
                      puVar22 = puVar22 + 4;
                      puVar32 = puVar32 + 4;
                    } while (puVar22 < (undefined8 *)((long)puVar46 + (long)puVar33));
                  }
                  puVar22 = puVar43 + -4;
                  puStack_150 = (undefined8 *)((long)puStack_150 + (long)puVar33);
                  puVar33 = (undefined1 *)((long)puVar46 + ((long)puVar42 - (long)puVar22));
                  puVar46 = puVar22;
                  if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar33) goto LAB_002fa5f8;
                }
                else {
                  puVar22 = puVar46;
                  puVar33 = puVar42;
                  if ((undefined1 *)0x7 < puVar42) {
LAB_002fa5f8:
                    puVar22 = puVar46;
                    if (0x3f < (ulong)((long)puVar46 - (long)puStack_150)) {
                      if (puVar33 < (undefined1 *)0x40) {
                        puVar39 = (undefined1 *)0x0;
                      }
                      else {
                        puVar39 = (undefined1 *)((ulong)puVar33 & 0xffffffffffffffc0);
                        puVar32 = puVar46 + 4;
                        puVar38 = puStack_150 + 4;
                        puVar41 = puVar39;
// stripping the watermark breaks the license
                        do {
                          uVar53 = puVar38[-4];
                          uVar55 = puVar38[-1];
                          uVar54 = puVar38[-2];
                          uVar57 = puVar38[1];
                          uVar56 = *puVar38;
                          uVar59 = puVar38[3];
                          uVar58 = puVar38[2];
                          puVar32[-3] = puVar38[-3];
                          puVar32[-4] = uVar53;
                          puVar32[-1] = uVar55;
                          puVar32[-2] = uVar54;
                          puVar32[1] = uVar57;
                          *puVar32 = uVar56;
                          puVar32[3] = uVar59;
                          puVar32[2] = uVar58;
                          puVar41 = puVar41 + -0x40;
                          puVar32 = puVar32 + 8;
                          puVar38 = puVar38 + 8;
                        } while (puVar41 != (undefined1 *)0x0);
                        if (puVar33 == puVar39) goto LAB_002fa740;
                        if (((ulong)puVar33 & 0x38) == 0) {
                          puStack_150 = (undefined8 *)((long)puStack_150 + (long)puVar39);
                          puVar46 = (undefined8 *)((long)puVar46 + (long)puVar39);
                          goto LAB_002fa72c;
                        }
                      }
                      puVar41 = (undefined1 *)((ulong)puVar33 & 0xfffffffffffffff8);
                      lVar37 = (long)puVar39 - (long)puVar41;
                      puVar32 = (undefined8 *)((long)puStack_150 + (long)puVar39);
                      puVar38 = (undefined8 *)((long)puVar46 + (long)puVar39);
                      do {
                        *puVar38 = *puVar32;
                        lVar37 = lVar37 + 8;
                        puVar32 = puVar32 + 1;
                        puVar38 = puVar38 + 1;
                      } while (lVar37 != 0);
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
                      puVar46 = (undefined8 *)((long)puVar46 + (long)puVar41);
                      puStack_150 = (undefined8 *)((long)puStack_150 + (long)puVar41);
                      if (puVar33 == puVar41) goto LAB_002fa740;
                    }
                  }
                }
LAB_002fa72c:
                do {
                  puVar32 = (undefined8 *)((long)puVar46 + 1);
                  *(undefined1 *)puVar46 = *(undefined1 *)puStack_150;
                  puVar46 = puVar32;
                  puStack_150 = (undefined8 *)((long)puStack_150 + 1);
                } while (puVar32 != (undefined8 *)((long)puVar22 + (long)puVar33));
              }
              else {
                puVar33 = (undefined1 *)((long)puVar46 + (long)puVar32) + -(long)puStack_150;
                if (puVar33 <= (undefined1 *)((long)puVar46 + 1U)) {
                  puVar33 = (undefined1 *)((long)puVar46 + 1);
                }
                uVar31 = (long)puVar33 - (long)puVar46;
/* chat: discord.gg/sdkhDjTex - github.com/pengussy */
                if ((7 < uVar31) && (0x3f < uVar50)) {
                  if (uVar31 < 0x40) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar31 & 0xffffffffffffffc0;
                    puVar22 = puVar46 + 4;
                    puVar32 = puStack_150 + 4;
                    uVar50 = uVar11;
                    do {
                      uVar53 = puVar32[-4];
                      uVar55 = puVar32[-1];
                      uVar54 = puVar32[-2];
                      uVar57 = puVar32[1];
                      uVar56 = *puVar32;
                      uVar59 = puVar32[3];
                      uVar58 = puVar32[2];
                      puVar22[-3] = puVar32[-3];
                      puVar22[-4] = uVar53;
                      puVar22[-1] = uVar55;
                      puVar22[-2] = uVar54;
                      puVar22[1] = uVar57;
                      *puVar22 = uVar56;
                      puVar22[3] = uVar59;
                      puVar22[2] = uVar58;
                      uVar50 = uVar50 - 0x40;
                      puVar22 = puVar22 + 8;
                      puVar32 = puVar32 + 8;
                    } while (uVar50 != 0);
                    if (uVar31 == uVar11) goto LAB_002fa740;
                    if ((uVar31 & 0x38) == 0) {
                      puVar46 = (undefined8 *)((long)puVar46 + uVar11);
                      puStack_150 = (undefined8 *)((long)puStack_150 + uVar11);
                      goto LAB_002fa6a0;
                    }
                  }
                  uVar50 = uVar31 & 0xfffffffffffffff8;
/* WM - donate: donate/README.md */
                  lVar37 = uVar11 - uVar50;
                  puVar22 = (undefined8 *)((long)puStack_150 + uVar11);
                  puVar32 = (undefined8 *)((long)puVar46 + uVar11);
                  do {
                    *puVar32 = *puVar22;
                    lVar37 = lVar37 + 8;
                    puVar22 = puVar22 + 1;
                    puVar32 = puVar32 + 1;
                  } while (lVar37 != 0);
                  puVar46 = (undefined8 *)((long)puVar46 + uVar50);
                  puStack_150 = (undefined8 *)((long)puStack_150 + uVar50);
                  if (uVar31 == uVar50) goto LAB_002fa740;
                }
LAB_002fa6a0:
                do {
                  puVar22 = (undefined8 *)((long)puVar46 + 1);
                  *(undefined1 *)puVar46 = *(undefined1 *)puStack_150;
                  puVar46 = puVar22;
                  puStack_150 = (undefined8 *)((long)puStack_150 + 1);
                } while (puVar22 < puVar43);
              }
LAB_002fa740:
              uVar50 = *puVar21 - (long)puVar42;
              *puVar21 = uVar50;
              puVar46 = puVar43;
            }
            *(undefined4 *)(param_1 + 0xed4) = 0;
            puVar45 = (ulong *)auStack_130[uVar27 * 3 + 1];
            uVar31 = auStack_130[uVar27 * 3 + 2];
            puVar43 = (undefined8 *)((long)puVar46 + uVar50);
            puVar22 = (undefined8 *)((long)puVar43 - uVar31);
            Hint_Prefetch(puVar22,0,0,0);
/* chat: discord.gg/sdkhDjTex */
            puVar42 = (undefined1 *)((long)puVar45 + uVar50);
            if ((long)uVar50 < 0x10001 &&
                (undefined1 *)((long)puVar46 + (long)puVar42) <= puVar47 + -0x20) {
              uVar53 = *puVar2;
              puVar46[1] = *(undefined8 *)((long)param_1 + 0x76ac);
              *puVar46 = uVar53;
              if (0x10 < uVar50) {
                uVar53 = *(undefined8 *)((long)param_1 + 0x76b4);
                puVar46[3] = *(undefined8 *)((long)param_1 + 0x76bc);
                puVar46[2] = uVar53;
                if (0x10 < uVar50 - 0x10) {
                  puVar32 = puVar46 + 4;
                  puVar38 = (undefined8 *)((long)param_1 + 0x76d4);
                  do {
                    uVar53 = puVar38[-2];
                    puVar32[1] = puVar38[-1];
                    *puVar32 = uVar53;
                    uVar53 = *puVar38;
                    puVar32[3] = puVar38[1];
                    puVar32[2] = uVar53;
                    puVar32 = puVar32 + 4;
                    puVar38 = puVar38 + 4;
// WM - origin: github.com/pengussy
                  } while (puVar32 < puVar43);
                }
              }
              puStack_150 = (undefined8 *)((long)puVar2 + uVar50);
              uVar50 = (long)puVar43 - (long)puVar19;
              if (uVar50 < uVar31) {
                if ((ulong)((long)puVar43 - lVar20) < uVar31) goto LAB_002fc064;
                lVar37 = (long)puVar22 - (long)puVar19;
                puVar16 = (ulong *)(lVar37 + (long)puVar45);
                if (puVar16 == (ulong *)0x0 || (long)puVar16 < 0 != SCARRY8(lVar37,(long)puVar45)) {
                  _memmove(puVar43,(undefined1 *)((long)puVar51 + lVar37),puVar45);
                  goto LAB_002fa920;
                }
                _memmove(puVar43,(undefined1 *)((long)puVar51 + lVar37),-lVar37);
                puVar43 = (undefined8 *)((long)puVar43 - lVar37);
                puVar22 = puVar19;
              }
              else {
                puVar16 = puVar45;
              }
              if (uVar31 < 0x10) {
                if (uVar31 < 8) {
                  iVar49 = *(int *)(&UNK_01adef10 + uVar31 * 4);
                  *(undefined1 *)puVar43 = *(undefined1 *)puVar22;
                  *(undefined1 *)((long)puVar43 + 1) = *(undefined1 *)((long)puVar22 + 1);
                  *(undefined1 *)((long)puVar43 + 2) = *(undefined1 *)((long)puVar22 + 2);
                  *(undefined1 *)((long)puVar43 + 3) = *(undefined1 *)((long)puVar22 + 3);
                  puVar5 = (undefined4 *)
                           ((long)puVar22 + (ulong)*(uint *)(&UNK_01adeef0 + uVar31 * 4));
                  puVar22 = (undefined8 *)((long)puVar5 - (long)iVar49);
                  *(undefined4 *)((long)puVar43 + 4) = *puVar5;
                }
                else {
                  *puVar43 = *puVar22;
                }
/* WM - reversing this took months of machine time */
                if ((ulong *)((long)&MACH_HEADER.cpusubtype + 1) <= puVar16) {
                  puVar32 = puVar22 + 1;
                  puVar38 = puVar43 + 1;
                  if ((long)puVar38 - (long)puVar32 < 0x10) {
                    uVar11 = uVar31;
                    if (uVar50 <= uVar31) {
                      uVar11 = uVar50;
                    }
                    uVar6 = uVar31;
                    if (uVar31 <= uVar50) {
                      uVar6 = uVar50;
                    }
                    puVar33 = (undefined1 *)((long)puVar19 + uVar6 + 0x10);
                    puVar41 = (undefined1 *)((long)puVar45 + (long)puVar19) +
                              ((uVar6 + uVar11) - uVar31);
                    if ((undefined1 *)((long)puVar45 + (long)puVar19) + ((uVar6 + uVar11) - uVar31)
                        <= puVar33) {
                      puVar41 = puVar33;
                    }
                    if ((undefined1 *)0x37 < puVar41 + (-9 - (long)(uVar6 + (long)puVar19))) {
                      if (0x3f < (ulong)((long)puVar38 - (long)puVar32)) {
                        uVar50 = ((ulong)(puVar41 + (-9 - (long)(uVar6 + (long)puVar19))) >> 3) + 1;
                        uVar11 = uVar50 & 0x3ffffffffffffff8;
                        puVar22 = puVar22 + 5;
                        puVar25 = (undefined8 *)((long)puVar19 + uVar6 + 0x28);
                        uVar31 = uVar11;
                        do {
                          uVar53 = puVar22[-4];
                          uVar55 = puVar22[-1];
                          uVar54 = puVar22[-2];
                          uVar57 = puVar22[1];
// unlicensed copy if this notice is missing
                          uVar56 = *puVar22;
                          uVar59 = puVar22[3];
                          uVar58 = puVar22[2];
                          puVar25[-3] = puVar22[-3];
                          puVar25[-4] = uVar53;
                          puVar25[-1] = uVar55;
                          puVar25[-2] = uVar54;
                          puVar25[1] = uVar57;
                          *puVar25 = uVar56;
                          puVar25[3] = uVar59;
                          puVar25[2] = uVar58;
                          uVar31 = uVar31 - 8;
                          puVar22 = puVar22 + 8;
                          puVar25 = puVar25 + 8;
                        } while (uVar31 != 0);
                        puVar32 = puVar32 + uVar11;
                        puVar38 = puVar38 + uVar11;
                        if (uVar50 == uVar11) goto LAB_002fa920;
                      }
                    }
                    do {
                      puVar22 = puVar38 + 1;
                      *puVar38 = *puVar32;
                      puVar32 = puVar32 + 1;
                      puVar38 = puVar22;
                    } while (puVar22 < (undefined8 *)((long)puVar43 + (long)puVar16));
                  }
                  else {
                    uVar53 = *puVar32;
                    puVar43[2] = puVar22[2];
                    *puVar38 = uVar53;
                    if (&MACH_HEADER.ncmds < puVar16 + -1) {
                      puVar32 = puVar43 + 3;
                      puVar22 = puVar22 + 5;
                      do {
                        uVar53 = puVar22[-2];
                        puVar32[1] = puVar22[-1];
                        *puVar32 = uVar53;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                        uVar53 = *puVar22;
                        puVar32[3] = puVar22[1];
                        puVar32[2] = uVar53;
                        puVar32 = puVar32 + 4;
                        puVar22 = puVar22 + 4;
                      } while (puVar32 < (undefined8 *)((long)puVar43 + (long)puVar16));
                    }
                  }
                }
              }
              else {
                uVar53 = *puVar22;
                puVar43[1] = puVar22[1];
                *puVar43 = uVar53;
                if (&MACH_HEADER.ncmds < puVar16) {
                  puVar32 = puVar43 + 2;
                  do {
                    uVar53 = puVar22[2];
                    puVar32[1] = puVar22[3];
                    *puVar32 = uVar53;
                    uVar53 = puVar22[4];
                    puVar32[3] = puVar22[5];
                    puVar32[2] = uVar53;
                    puVar32 = puVar32 + 4;
                    puVar22 = puVar22 + 4;
                  } while (puVar32 < (undefined8 *)((long)puVar43 + (long)puVar16));
                }
              }
            }
            else {
/* unlicensed copy if this notice is missing - github.com/pengussy */
              puStack_150 = puVar2;
              uStack_148 = uVar50;
              puStack_140 = puVar45;
              uStack_138 = uVar31;
              puVar42 = (undefined1 *)
                        func_0x002fc12c(puVar46,puVar47,&uStack_148,&puStack_150,
                                        (undefined8 *)((long)param_1 + 0x176a4),puVar19,lVar20,
                                        puVar51);
            }
LAB_002fa920:
            param_3 = auStack_130;
            if ((undefined1 *)0xffffffffffffff88 < puVar42) goto LAB_002fc068;
            puVar43 = puVar51;
            if (puVar48 <= puVar52 + uVar29) {
              puVar43 = puVar19;
            }
            lVar37 = (long)((long)puVar43 + (long)(puVar52 + uVar29)) - (long)puVar48;
            Hint_Prefetch(lVar37,0,0,0);
            Hint_Prefetch(lVar37 + 0x40,0,0,0);
            *puVar21 = uVar29;
            auStack_130[uVar27 * 3 + 1] = uVar40;
            auStack_130[uVar27 * 3 + 2] = (ulong)puVar48;
            puVar46 = (undefined8 *)((long)puVar46 + (long)puVar42);
            puVar43 = (undefined8 *)((long)param_1 + 0x176a4);
            goto LAB_002fa1a0;
          }
          puVar21 = (ulong *)auStack_130[uVar27 * 3 + 1];
          uVar27 = auStack_130[uVar27 * 3 + 2];
          if ((puVar22 <= puVar43) &&
             (puVar42 = (undefined1 *)((long)puVar21 + uVar50),
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
             (undefined8 *)((long)puVar46 + (long)puVar42) <= puVar22 + -4)) {
            puVar32 = (undefined8 *)((long)puVar46 + uVar50);
            uVar53 = *puStack_150;
            puVar46[1] = puStack_150[1];
            *puVar46 = uVar53;
            if (0x10 < uVar50) {
              uVar53 = puStack_150[2];
              puVar46[3] = puStack_150[3];
              puVar46[2] = uVar53;
              if (0x10 < uVar50 - 0x10) {
                puVar38 = puVar46 + 4;
                puVar25 = puStack_150 + 6;
                do {
                  uVar53 = puVar25[-2];
                  puVar38[1] = puVar25[-1];
                  *puVar38 = uVar53;
                  uVar53 = *puVar25;
                  puVar38[3] = puVar25[1];
                  puVar38[2] = uVar53;
                  puVar38 = puVar38 + 4;
                  puVar25 = puVar25 + 4;
                } while (puVar38 < puVar32);
              }
            }
            puVar38 = (undefined8 *)((long)puVar32 - uVar27);
            uVar50 = (long)puVar32 - (long)puVar19;
            param_3 = auStack_130;
            puStack_150 = puVar22;
            if (uVar50 < uVar27) {
              if ((ulong)((long)puVar32 - lVar20) < uVar27) goto LAB_002fc064;
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
              lVar37 = (long)puVar38 - (long)puVar19;
              puVar45 = (ulong *)(lVar37 + (long)puVar21);
              if (puVar45 == (ulong *)0x0 || (long)puVar45 < 0 != SCARRY8(lVar37,(long)puVar21)) {
                _memmove(puVar32,(undefined1 *)((long)puVar51 + lVar37),puVar21);
                goto joined_r0x002fab20;
              }
              _memmove(puVar32,(undefined1 *)((long)puVar51 + lVar37),-lVar37);
              puVar32 = (undefined8 *)((long)puVar32 - lVar37);
              puVar38 = puVar19;
            }
            else {
              puVar45 = puVar21;
            }
            if (uVar27 < 0x10) {
              if (uVar27 < 8) {
                iVar49 = *(int *)(&UNK_01adef10 + uVar27 * 4);
                *(undefined1 *)puVar32 = *(undefined1 *)puVar38;
                *(undefined1 *)((long)puVar32 + 1) = *(undefined1 *)((long)puVar38 + 1);
                *(undefined1 *)((long)puVar32 + 2) = *(undefined1 *)((long)puVar38 + 2);
                *(undefined1 *)((long)puVar32 + 3) = *(undefined1 *)((long)puVar38 + 3);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
                puVar5 = (undefined4 *)
                         ((long)puVar38 + (ulong)*(uint *)(&UNK_01adeef0 + uVar27 * 4));
                puVar38 = (undefined8 *)((long)puVar5 - (long)iVar49);
                *(undefined4 *)((long)puVar32 + 4) = *puVar5;
              }
              else {
                *puVar32 = *puVar38;
              }
              if (&MACH_HEADER.cpusubtype < puVar45) {
                puVar22 = puVar38 + 1;
                puVar25 = puVar32 + 1;
                if ((long)puVar25 - (long)puVar22 < 0x10) {
                  uVar31 = uVar27;
                  if (uVar50 <= uVar27) {
                    uVar31 = uVar50;
                  }
                  uVar11 = uVar27;
                  if (uVar27 <= uVar50) {
                    uVar11 = uVar50;
                  }
// donate: donate/README.md
                  puVar33 = (undefined1 *)((long)puVar19 + uVar11 + 0x10);
                  puVar41 = (undefined1 *)((long)puVar21 + (long)puVar19) +
                            ((uVar11 + uVar31) - uVar27);
                  if ((undefined1 *)((long)puVar21 + (long)puVar19) + ((uVar11 + uVar31) - uVar27)
                      <= puVar33) {
                    puVar41 = puVar33;
                  }
                  if ((undefined1 *)0x37 < puVar41 + (-9 - (long)(uVar11 + (long)puVar19))) {
                    if (0x3f < (ulong)((long)puVar25 - (long)puVar22)) {
                      uVar27 = ((ulong)(puVar41 + (-9 - (long)(uVar11 + (long)puVar19))) >> 3) + 1;
                      uVar31 = uVar27 & 0x3ffffffffffffff8;
                      puVar38 = puVar38 + 5;
                      puVar28 = (undefined8 *)((long)puVar19 + uVar11 + 0x28);
                      uVar50 = uVar31;
                      do {
                        uVar53 = puVar38[-4];
                        uVar55 = puVar38[-1];
                        uVar54 = puVar38[-2];
                        uVar57 = puVar38[1];
                        uVar56 = *puVar38;
                        uVar59 = puVar38[3];
                        uVar58 = puVar38[2];
// more drops soon - github.com/pengussy
                        puVar28[-3] = puVar38[-3];
                        puVar28[-4] = uVar53;
                        puVar28[-1] = uVar55;
                        puVar28[-2] = uVar54;
                        puVar28[1] = uVar57;
                        *puVar28 = uVar56;
                        puVar28[3] = uVar59;
                        puVar28[2] = uVar58;
                        uVar50 = uVar50 - 8;
                        puVar38 = puVar38 + 8;
                        puVar28 = puVar28 + 8;
                      } while (uVar50 != 0);
                      puVar22 = puVar22 + uVar31;
                      puVar25 = puVar25 + uVar31;
                      if (uVar27 == uVar31) goto joined_r0x002fab20;
                    }
                  }
                  do {
                    puVar38 = puVar25 + 1;
                    *puVar25 = *puVar22;
                    puVar22 = puVar22 + 1;
// WM - stripping the watermark breaks the license
                    puVar25 = puVar38;
                  } while (puVar38 < (undefined8 *)((long)puVar32 + (long)puVar45));
                }
                else {
                  uVar53 = *puVar22;
                  puVar32[2] = puVar38[2];
                  *puVar25 = uVar53;
                  if (&MACH_HEADER.ncmds < puVar45 + -1) {
                    puVar22 = puVar32 + 3;
                    puVar38 = puVar38 + 5;
                    do {
                      uVar53 = puVar38[-2];
                      puVar22[1] = puVar38[-1];
                      *puVar22 = uVar53;
                      uVar53 = *puVar38;
                      puVar22[3] = puVar38[1];
                      puVar22[2] = uVar53;
                      puVar22 = puVar22 + 4;
                      puVar38 = puVar38 + 4;
                    } while (puVar22 < (undefined8 *)((long)puVar32 + (long)puVar45));
                  }
                }
              }
            }
            else {
              uVar53 = *puVar38;
              puVar32[1] = puVar38[1];
// WM - unlicensed copy if this notice is missing
              *puVar32 = uVar53;
              if (&MACH_HEADER.ncmds < puVar45) {
                puVar22 = puVar32 + 2;
                do {
                  uVar53 = puVar38[2];
                  puVar22[1] = puVar38[3];
                  *puVar22 = uVar53;
                  uVar53 = puVar38[4];
                  puVar22[3] = puVar38[5];
                  puVar22[2] = uVar53;
                  puVar22 = puVar22 + 4;
                  puVar38 = puVar38 + 4;
                } while (puVar22 < (undefined8 *)((long)puVar32 + (long)puVar45));
              }
            }
            goto joined_r0x002fab20;
          }
          uStack_148 = uVar50;
          puStack_140 = puVar21;
          uStack_138 = uVar27;
          puVar42 = (undefined1 *)
                    func_0x002fc87c(puVar46,puVar47,puVar22 + -4,&uStack_148,&puStack_150,puVar43,
                                    puVar19,lVar20,puVar51);
        }
joined_r0x002fab20:
        param_3 = auStack_130;
/* stripping the watermark breaks the license - github.com/pengussy */
        if ((undefined1 *)0xffffffffffffff88 < puVar42) goto LAB_002fc068;
        puVar22 = puVar51;
        if (puVar48 <= puVar52 + uVar29) {
          puVar22 = puVar19;
        }
        lVar37 = (long)((long)puVar22 + (long)(puVar52 + uVar29)) - (long)puVar48;
        Hint_Prefetch(lVar37,0,0,0);
        Hint_Prefetch(lVar37 + 0x40,0,0,0);
        uVar27 = (ulong)(uVar15 & 7);
        auStack_130[uVar27 * 3] = uVar29;
        auStack_130[uVar27 * 3 + 1] = uVar40;
        auStack_130[uVar27 * 3 + 2] = (ulong)puVar48;
        puVar46 = (undefined8 *)((long)puVar46 + (long)puVar42);
LAB_002fa1a0:
        param_3 = auStack_130;
        iVar49 = (int)uVar35;
        puVar52 = puVar52 + uVar40 + uVar29;
        uVar40 = (ulong)(uVar15 + 1);
        uVar18 = param_6;
        if (uVar15 + 1 == param_6) goto joined_r0x002fb414;
        goto LAB_002fa1b0;
      }
    }
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
joined_r0x002fb414:
    puVar42 = (undefined1 *)0xffffffffffffffec;
    if (puStack_1a0 != param_4) goto LAB_002fc068;
    puVar42 = (undefined1 *)0xffffffffffffffec;
    if (iVar49 != 0x40) goto LAB_002fc068;
    uVar18 = uVar18 - uVar17;
    puStack_158 = puVar43;
    if ((int)uVar18 < (int)param_6) {
      puVar43 = (undefined8 *)((long)param_1 + 0x76a4);
      puVar2 = (undefined8 *)((long)param_1 + 0x176a4);
LAB_002fb4c8:
      uVar40 = (ulong)(uVar18 & 7);
      puVar44 = auStack_130 + uVar40 * 3;
      if ((int)param_1[0xed4] == 2) {
        uVar35 = *puVar44;
        puVar32 = (undefined8 *)param_1[0xed3];
        puVar22 = (undefined8 *)((long)puStack_150 + uVar35);
        if (puVar32 < puVar22) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          uVar24 = (long)puVar32 - (long)puStack_150;
          puVar22 = puVar46;
          if (uVar24 != 0) {
            if ((ulong)((long)puVar47 - (long)puVar46) < uVar24) goto LAB_002f9c48;
            uVar35 = (long)puVar46 - (long)puStack_150;
            puVar22 = (undefined8 *)((long)puVar46 + uVar24);
            if (((long)uVar35 < -7) && (7 < uVar24)) {
              if ((uVar35 < 0xfffffffffffffff0) && (uVar35 = uVar24 - 0x20, 0x1f < (long)uVar24)) {
                uVar53 = *puStack_150;
                puVar46[1] = puStack_150[1];
                *puVar46 = uVar53;
                if (0x10 < uVar35) {
                  puVar32 = puVar46 + 2;
                  puVar38 = puStack_150;
                  do {
                    uVar53 = puVar38[2];
                    puVar32[1] = puVar38[3];
                    *puVar32 = uVar53;
                    uVar53 = puVar38[4];
                    puVar32[3] = puVar38[5];
                    puVar32[2] = uVar53;
                    puVar32 = puVar32 + 4;
                    puVar38 = puVar38 + 4;
                  } while (puVar32 < (undefined8 *)((long)puVar46 + uVar35));
                }
                puStack_150 = (undefined8 *)((long)puStack_150 + uVar35);
                puVar32 = puVar22 + -4;
              }
              else {
                puVar32 = puVar46;
              }
              puVar52 = (undefined1 *)((long)puVar46 + (uVar24 - (long)puVar32));
              if ((puVar52 < (undefined1 *)0x8) ||
                 ((ulong)((long)puVar32 - (long)puStack_150) < 0x40)) {
                puVar46 = puVar32;
// WM - no support for modified copies
              }
              else {
                if (puVar52 < (undefined1 *)0x40) {
                  puVar42 = (undefined1 *)0x0;
                }
                else {
                  puVar42 = (undefined1 *)((ulong)puVar52 & 0xffffffffffffffc0);
                  puVar46 = puVar32 + 4;
                  puVar38 = puStack_150 + 4;
                  puVar14 = puVar42;
                  do {
                    uVar53 = puVar38[-4];
                    uVar55 = puVar38[-1];
                    uVar54 = puVar38[-2];
                    uVar57 = puVar38[1];
                    uVar56 = *puVar38;
                    uVar59 = puVar38[3];
                    uVar58 = puVar38[2];
                    puVar46[-3] = puVar38[-3];
                    puVar46[-4] = uVar53;
                    puVar46[-1] = uVar55;
                    puVar46[-2] = uVar54;
                    puVar46[1] = uVar57;
                    *puVar46 = uVar56;
                    puVar46[3] = uVar59;
                    puVar46[2] = uVar58;
                    puVar14 = puVar14 + -0x40;
                    puVar46 = puVar46 + 8;
                    puVar38 = puVar38 + 8;
                  } while (puVar14 != (undefined1 *)0x0);
                  if (puVar52 == puVar42) goto LAB_002fb954;
                  if (((ulong)puVar52 & 0x38) == 0) {
                    puStack_150 = (undefined8 *)((long)puStack_150 + (long)puVar42);
                    puVar46 = (undefined8 *)((long)puVar32 + (long)puVar42);
/* WM - thanks for reading - discord.gg/sdkhDjTex */
                    goto LAB_002fb940;
                  }
                }
                puVar14 = (undefined1 *)((ulong)puVar52 & 0xfffffffffffffff8);
                lVar12 = (long)puVar42 - (long)puVar14;
                puVar46 = (undefined8 *)((long)puStack_150 + (long)puVar42);
                puVar38 = (undefined8 *)((long)puVar32 + (long)puVar42);
                do {
                  *puVar38 = *puVar46;
                  lVar12 = lVar12 + 8;
                  puVar46 = puVar46 + 1;
                  puVar38 = puVar38 + 1;
                } while (lVar12 != 0);
                puVar46 = (undefined8 *)((long)puVar32 + (long)puVar14);
                puStack_150 = (undefined8 *)((long)puStack_150 + (long)puVar14);
                if (puVar52 == puVar14) goto LAB_002fb954;
              }
LAB_002fb940:
              do {
                puVar38 = (undefined8 *)((long)puVar46 + 1);
                *(undefined1 *)puVar46 = *(undefined1 *)puStack_150;
                puVar46 = puVar38;
                puStack_150 = (undefined8 *)((long)puStack_150 + 1);
              } while (puVar38 != (undefined8 *)((long)puVar32 + (long)puVar52));
            }
            else {
              puVar52 = (undefined1 *)((long)puVar46 + (long)puVar32) + -(long)puStack_150;
/* wm:reversing this took months of machine time */
              if (puVar52 <= (undefined1 *)((long)puVar46 + 1U)) {
                puVar52 = (undefined1 *)((long)puVar46 + 1);
              }
              uVar27 = (long)puVar52 - (long)puVar46;
              if ((7 < uVar27) && (0x3f < uVar35)) {
                if (uVar27 < 0x40) {
                  uVar29 = 0;
                }
                else {
                  uVar29 = uVar27 & 0xffffffffffffffc0;
                  puVar32 = puVar46 + 4;
                  puVar38 = puStack_150 + 4;
                  uVar35 = uVar29;
                  do {
                    uVar53 = puVar38[-4];
                    uVar55 = puVar38[-1];
                    uVar54 = puVar38[-2];
                    uVar57 = puVar38[1];
                    uVar56 = *puVar38;
                    uVar59 = puVar38[3];
                    uVar58 = puVar38[2];
                    puVar32[-3] = puVar38[-3];
                    puVar32[-4] = uVar53;
                    puVar32[-1] = uVar55;
                    puVar32[-2] = uVar54;
                    puVar32[1] = uVar57;
                    *puVar32 = uVar56;
                    puVar32[3] = uVar59;
                    puVar32[2] = uVar58;
                    uVar35 = uVar35 - 0x40;
                    puVar32 = puVar32 + 8;
                    puVar38 = puVar38 + 8;
                  } while (uVar35 != 0);
                  if (uVar27 == uVar29) goto LAB_002fb954;
                  if ((uVar27 & 0x38) == 0) {
                    puVar46 = (undefined8 *)((long)puVar46 + uVar29);
                    puStack_150 = (undefined8 *)((long)puStack_150 + uVar29);
// proprietary - see LICENSE - do not sell
                    goto LAB_002fb924;
                  }
                }
                uVar35 = uVar27 & 0xfffffffffffffff8;
                lVar12 = uVar29 - uVar35;
                puVar32 = (undefined8 *)((long)puStack_150 + uVar29);
                puVar38 = (undefined8 *)((long)puVar46 + uVar29);
                do {
                  *puVar38 = *puVar32;
                  lVar12 = lVar12 + 8;
                  puVar32 = puVar32 + 1;
                  puVar38 = puVar38 + 1;
                } while (lVar12 != 0);
                puVar46 = (undefined8 *)((long)puVar46 + uVar35);
                puStack_150 = (undefined8 *)((long)puStack_150 + uVar35);
                if (uVar27 == uVar35) goto LAB_002fb954;
              }
LAB_002fb924:
              do {
                puVar32 = (undefined8 *)((long)puVar46 + 1);
                *(undefined1 *)puVar46 = *(undefined1 *)puStack_150;
                puVar46 = puVar32;
                puStack_150 = (undefined8 *)((long)puStack_150 + 1);
              } while (puVar32 < puVar22);
            }
LAB_002fb954:
            uVar35 = *puVar44 - uVar24;
            *puVar44 = uVar35;
          }
          *(undefined4 *)(param_1 + 0xed4) = 0;
          puVar44 = (ulong *)auStack_130[uVar40 * 3 + 1];
          uVar40 = auStack_130[uVar40 * 3 + 2];
          puVar46 = (undefined8 *)((long)puVar22 + uVar35);
          puVar32 = (undefined8 *)((long)puVar46 - uVar40);
          Hint_Prefetch(puVar32,0,0,0);
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          puVar42 = (undefined1 *)((long)puVar44 + uVar35);
          if ((long)uVar35 < 0x10001 &&
              (undefined1 *)((long)puVar22 + (long)puVar42) <= puVar47 + -0x20) {
            uVar53 = *puVar43;
            puVar22[1] = *(undefined8 *)((long)param_1 + 0x76ac);
            *puVar22 = uVar53;
            if (0x10 < uVar35) {
              uVar53 = *(undefined8 *)((long)param_1 + 0x76b4);
              puVar22[3] = *(undefined8 *)((long)param_1 + 0x76bc);
              puVar22[2] = uVar53;
              if (0x10 < uVar35 - 0x10) {
                puVar38 = puVar22 + 4;
                puVar25 = (undefined8 *)((long)param_1 + 0x76d4);
                do {
                  uVar53 = puVar25[-2];
                  puVar38[1] = puVar25[-1];
                  *puVar38 = uVar53;
                  uVar53 = *puVar25;
                  puVar38[3] = puVar25[1];
                  puVar38[2] = uVar53;
                  puVar38 = puVar38 + 4;
                  puVar25 = puVar25 + 4;
                } while (puVar38 < puVar46);
              }
            }
            puStack_150 = (undefined8 *)((long)puVar43 + uVar35);
            uVar35 = (long)puVar46 - (long)puVar19;
            if (uVar35 < uVar40) {
              if ((ulong)((long)puVar46 - lVar20) < uVar40) goto LAB_002fc064;
              lVar12 = (long)puVar32 - (long)puVar19;
              puVar21 = (ulong *)(lVar12 + (long)puVar44);
              if (puVar21 == (ulong *)0x0 || (long)puVar21 < 0 != SCARRY8(lVar12,(long)puVar44)) {
/* WM - if you paid for this, you were scammed */
                _memmove(puVar46,(undefined1 *)((long)puVar51 + lVar12));
                param_3 = puVar44;
                param_6 = unaff_1000116a;
                goto joined_r0x002fc05c;
              }
              param_3 = (ulong *)-lVar12;
              _memmove(puVar46,(undefined1 *)((long)puVar51 + lVar12));
              puVar46 = (undefined8 *)((long)puVar46 - lVar12);
              puVar32 = puVar19;
              param_6 = unaff_1000116a;
            }
            else {
              puVar21 = puVar44;
            }
            if (uVar40 < 0x10) {
              if (uVar40 < 8) {
                iVar26 = *(int *)(&UNK_01adef10 + uVar40 * 4);
                *(undefined1 *)puVar46 = *(undefined1 *)puVar32;
                *(undefined1 *)((long)puVar46 + 1) = *(undefined1 *)((long)puVar32 + 1);
                *(undefined1 *)((long)puVar46 + 2) = *(undefined1 *)((long)puVar32 + 2);
                *(undefined1 *)((long)puVar46 + 3) = *(undefined1 *)((long)puVar32 + 3);
                puVar5 = (undefined4 *)
/* WM - no support for modified copies */
                         ((long)puVar32 + (ulong)*(uint *)(&UNK_01adeef0 + uVar40 * 4));
                puVar32 = (undefined8 *)((long)puVar5 - (long)iVar26);
                *(undefined4 *)((long)puVar46 + 4) = *puVar5;
              }
              else {
                *puVar46 = *puVar32;
              }
              param_6 = unaff_1000116a;
              if (&MACH_HEADER.cpusubtype < puVar21) {
                puVar38 = puVar32 + 1;
                puVar25 = puVar46 + 1;
                if ((long)puVar25 - (long)puVar38 < 0x10) {
                  uVar24 = uVar40;
                  if (uVar35 <= uVar40) {
                    uVar24 = uVar35;
                  }
                  uVar27 = uVar40;
/* WM - chat: discord.gg/sdkhDjTex */
                  if (uVar40 <= uVar35) {
                    uVar27 = uVar35;
                  }
                  puVar52 = (undefined1 *)((long)puVar19 + uVar27 + 0x10);
                  puVar14 = (undefined1 *)((long)puVar44 + (long)puVar19) +
                            ((uVar27 + uVar24) - uVar40);
                  if ((undefined1 *)((long)puVar44 + (long)puVar19) + ((uVar27 + uVar24) - uVar40)
                      <= puVar52) {
                    puVar14 = puVar52;
                  }
                  if ((undefined1 *)0x37 < puVar14 + (-9 - (long)(uVar27 + (long)puVar19))) {
                    if (0x3f < (ulong)((long)puVar25 - (long)puVar38)) {
                      uVar40 = ((ulong)(puVar14 + (-9 - (long)(uVar27 + (long)puVar19))) >> 3) + 1;
                      uVar24 = uVar40 & 0x3ffffffffffffff8;
                      puVar32 = puVar32 + 5;
                      puVar28 = (undefined8 *)((long)puVar19 + uVar27 + 0x28);
                      uVar35 = uVar24;
                      do {
                        uVar53 = puVar32[-4];
                        uVar55 = puVar32[-1];
                        uVar54 = puVar32[-2];
                        uVar57 = puVar32[1];
                        uVar56 = *puVar32;
                        uVar59 = puVar32[3];
                        uVar58 = puVar32[2];
                        puVar28[-3] = puVar32[-3];
                        puVar28[-4] = uVar53;
                        puVar28[-1] = uVar55;
                        puVar28[-2] = uVar54;
                        puVar28[1] = uVar57;
                        *puVar28 = uVar56;
                        puVar28[3] = uVar59;
                        puVar28[2] = uVar58;
                        uVar35 = uVar35 - 8;
                        puVar32 = puVar32 + 8;
                        puVar28 = puVar28 + 8;
// WM - keep the notice, keep the source honest
                      } while (uVar35 != 0);
                      puVar38 = puVar38 + uVar24;
                      puVar25 = puVar25 + uVar24;
                      if (uVar40 == uVar24) goto joined_r0x002fc05c;
                    }
                  }
                  do {
                    puVar32 = puVar25 + 1;
                    *puVar25 = *puVar38;
                    puVar38 = puVar38 + 1;
                    puVar25 = puVar32;
                  } while (puVar32 < (undefined8 *)((long)puVar46 + (long)puVar21));
                }
                else {
                  uVar53 = *puVar38;
                  puVar46[2] = puVar32[2];
                  *puVar25 = uVar53;
                  if (&MACH_HEADER.ncmds < puVar21 + -1) {
                    puVar38 = puVar46 + 3;
                    puVar32 = puVar32 + 5;
                    do {
                      uVar53 = puVar32[-2];
                      puVar38[1] = puVar32[-1];
                      *puVar38 = uVar53;
                      uVar53 = *puVar32;
                      puVar38[3] = puVar32[1];
                      puVar38[2] = uVar53;
                      puVar38 = puVar38 + 4;
                      puVar32 = puVar32 + 4;
                    } while (puVar38 < (undefined8 *)((long)puVar46 + (long)puVar21));
                  }
                }
              }
            }
/* origin: github.com/pengussy */
            else {
              uVar53 = *puVar32;
              puVar46[1] = puVar32[1];
              *puVar46 = uVar53;
              if ((ulong *)((long)&MACH_HEADER.ncmds + 1) <= puVar21) {
                puVar38 = puVar46 + 2;
                do {
                  uVar53 = puVar32[2];
                  puVar38[1] = puVar32[3];
                  *puVar38 = uVar53;
                  uVar53 = puVar32[4];
                  puVar38[3] = puVar32[5];
                  puVar38[2] = uVar53;
                  puVar38 = puVar38 + 4;
                  puVar32 = puVar32 + 4;
                } while (puVar38 < (undefined8 *)((long)puVar46 + (long)puVar21));
              }
            }
          }
          else {
            param_3 = &uStack_148;
            puStack_150 = puVar43;
            uStack_148 = uVar35;
            puStack_140 = puVar44;
            uStack_138 = uVar40;
            puVar42 = (undefined1 *)
                      func_0x002fc12c(puVar22,puVar47,param_3,&puStack_150,puVar2,puVar19,lVar20,
                                      puVar51);
            param_6 = unaff_1000116a;
// watermarked copy - do not remove
          }
joined_r0x002fc05c:
          if ((undefined1 *)0xffffffffffffff88 < puVar42) goto LAB_002fc068;
          puVar46 = (undefined8 *)((long)puVar22 + (long)puVar42);
          uVar18 = uVar18 + 1;
          puStack_158 = puVar2;
          if (uVar18 == param_6) goto LAB_002fc0a0;
          goto LAB_002fb4c8;
        }
        param_3 = puVar22 + -4;
        puVar44 = (ulong *)auStack_130[uVar40 * 3 + 1];
        uVar40 = auStack_130[uVar40 * 3 + 2];
        puVar42 = (undefined1 *)((long)puVar44 + uVar35);
        if (!(puStack_158 < puVar22 || param_3 < (ulong *)((long)puVar46 + (long)puVar42))) {
          puVar32 = (undefined8 *)((long)puVar46 + uVar35);
          uVar53 = *puStack_150;
          puVar46[1] = puStack_150[1];
          *puVar46 = uVar53;
          if (0x10 < uVar35) {
// WM - reversing this took months of machine time
            uVar53 = puStack_150[2];
            puVar46[3] = puStack_150[3];
            puVar46[2] = uVar53;
            if (0x10 < uVar35 - 0x10) {
              puVar38 = puVar46 + 4;
              puVar25 = puStack_150 + 6;
              do {
                uVar53 = puVar25[-2];
                puVar38[1] = puVar25[-1];
                *puVar38 = uVar53;
                uVar53 = *puVar25;
                puVar38[3] = puVar25[1];
                puVar38[2] = uVar53;
                puVar38 = puVar38 + 4;
                puVar25 = puVar25 + 4;
              } while (puVar38 < puVar32);
            }
          }
          puVar38 = (undefined8 *)((long)puVar32 - uVar40);
          uVar35 = (long)puVar32 - (long)puVar19;
          puStack_150 = puVar22;
          if (uVar35 < uVar40) {
            if ((ulong)((long)puVar32 - lVar20) < uVar40) goto LAB_002fc064;
            lVar12 = (long)puVar38 - (long)puVar19;
            puVar21 = (ulong *)(lVar12 + (long)puVar44);
            if (puVar21 == (ulong *)0x0 || (long)puVar21 < 0 != SCARRY8(lVar12,(long)puVar44))
            goto LAB_002fb7c4;
// WM - proprietary - see LICENSE - do not sell
            param_3 = (ulong *)-lVar12;
            _memmove(puVar32,(undefined1 *)((long)puVar51 + lVar12));
            puVar32 = (undefined8 *)((long)puVar32 - lVar12);
            puVar38 = puVar19;
            param_6 = unaff_1000116a;
          }
          else {
            puVar21 = puVar44;
          }
          if (uVar40 < 0x10) {
            if (uVar40 < 8) {
              iVar26 = *(int *)(&UNK_01adef10 + uVar40 * 4);
              *(undefined1 *)puVar32 = *(undefined1 *)puVar38;
              *(undefined1 *)((long)puVar32 + 1) = *(undefined1 *)((long)puVar38 + 1);
              *(undefined1 *)((long)puVar32 + 2) = *(undefined1 *)((long)puVar38 + 2);
              *(undefined1 *)((long)puVar32 + 3) = *(undefined1 *)((long)puVar38 + 3);
              puVar5 = (undefined4 *)((long)puVar38 + (ulong)*(uint *)(&UNK_01adeef0 + uVar40 * 4));
              puVar38 = (undefined8 *)((long)puVar5 - (long)iVar26);
              *(undefined4 *)((long)puVar32 + 4) = *puVar5;
            }
            else {
              *puVar32 = *puVar38;
            }
            if (&MACH_HEADER.cpusubtype < puVar21) {
              puVar22 = puVar38 + 1;
              puVar25 = puVar32 + 1;
              if ((long)puVar25 - (long)puVar22 < 0x10) {
                uVar24 = uVar40;
                if (uVar35 <= uVar40) {
                  uVar24 = uVar35;
                }
                uVar27 = uVar40;
                if (uVar40 <= uVar35) {
                  uVar27 = uVar35;
/* +- WM -------------------------------------------------------------+
   |  chat: discord.gg/sdkhDjTex
   +--------------------------------------------------------------------*/
                }
                puVar52 = (undefined1 *)((long)puVar19 + uVar27 + 0x10);
                puVar14 = (undefined1 *)((long)puVar44 + (long)puVar19) +
                          ((uVar27 + uVar24) - uVar40);
                if ((undefined1 *)((long)puVar44 + (long)puVar19) + ((uVar27 + uVar24) - uVar40) <=
                    puVar52) {
                  puVar14 = puVar52;
                }
                if ((undefined1 *)0x37 < puVar14 + (-9 - (long)(uVar27 + (long)puVar19))) {
                  if (0x3f < (ulong)((long)puVar25 - (long)puVar22)) {
                    uVar40 = ((ulong)(puVar14 + (-9 - (long)(uVar27 + (long)puVar19))) >> 3) + 1;
                    uVar24 = uVar40 & 0x3ffffffffffffff8;
                    puVar38 = puVar38 + 5;
                    puVar28 = (undefined8 *)((long)puVar19 + uVar27 + 0x28);
                    uVar35 = uVar24;
                    do {
                      uVar53 = puVar38[-4];
                      uVar55 = puVar38[-1];
                      uVar54 = puVar38[-2];
                      uVar57 = puVar38[1];
                      uVar56 = *puVar38;
                      uVar59 = puVar38[3];
                      uVar58 = puVar38[2];
                      puVar28[-3] = puVar38[-3];
                      puVar28[-4] = uVar53;
                      puVar28[-1] = uVar55;
                      puVar28[-2] = uVar54;
                      puVar28[1] = uVar57;
                      *puVar28 = uVar56;
/*
 *  origin: github.com/pengussy
 *
 *  @pengussy
 */
                      puVar28[3] = uVar59;
                      puVar28[2] = uVar58;
                      uVar35 = uVar35 - 8;
                      puVar38 = puVar38 + 8;
                      puVar28 = puVar28 + 8;
                    } while (uVar35 != 0);
                    puVar22 = puVar22 + uVar24;
                    puVar25 = puVar25 + uVar24;
                    if (uVar40 == uVar24) goto LAB_002fbff4;
                  }
                }
                do {
                  puVar38 = puVar25 + 1;
                  *puVar25 = *puVar22;
                  puVar22 = puVar22 + 1;
                  puVar25 = puVar38;
                } while (puVar38 < (undefined8 *)((long)puVar32 + (long)puVar21));
              }
              else {
                uVar53 = *puVar22;
                puVar32[2] = puVar38[2];
/* wm:do not claim this as your own */
                *puVar25 = uVar53;
                if (&MACH_HEADER.ncmds < puVar21 + -1) {
                  puVar22 = puVar32 + 3;
                  puVar38 = puVar38 + 5;
                  do {
                    uVar53 = puVar38[-2];
                    puVar22[1] = puVar38[-1];
                    *puVar22 = uVar53;
                    uVar53 = *puVar38;
                    puVar22[3] = puVar38[1];
                    puVar22[2] = uVar53;
                    puVar22 = puVar22 + 4;
                    puVar38 = puVar38 + 4;
                  } while (puVar22 < (undefined8 *)((long)puVar32 + (long)puVar21));
                }
              }
            }
            goto LAB_002fbff4;
          }
          uVar53 = *puVar38;
          puVar32[1] = puVar38[1];
          *puVar32 = uVar53;
          if (&MACH_HEADER.ncmds < puVar21) {
            puVar22 = puVar32 + 2;
            do {
              uVar53 = puVar38[2];
              puVar22[1] = puVar38[3];
              *puVar22 = uVar53;
              uVar53 = puVar38[4];
              puVar22[3] = puVar38[5];
// origin: github.com/pengussy
              puVar22[2] = uVar53;
              puVar22 = puVar22 + 4;
              puVar38 = puVar38 + 4;
            } while (puVar22 < (undefined8 *)((long)puVar32 + (long)puVar21));
            goto LAB_002fb7dc;
          }
LAB_002fb734:
          goto LAB_002fb7dc;
        }
        uStack_148 = uVar35;
        puStack_140 = puVar44;
        uStack_138 = uVar40;
        puVar42 = (undefined1 *)
                  func_0x002fc87c(puVar46,puVar47,param_3,&uStack_148,&puStack_150,puStack_158,
                                  puVar19,lVar20,puVar51);
        param_6 = unaff_1000116a;
      }
      else {
        uVar35 = *puVar44;
        puVar44 = (ulong *)auStack_130[uVar40 * 3 + 1];
        uVar40 = auStack_130[uVar40 * 3 + 2];
        puVar32 = (undefined8 *)((long)puVar46 + uVar35);
        puVar38 = (undefined8 *)((long)puVar32 - uVar40);
        Hint_Prefetch(puVar38,0,0,0);
        puVar42 = (undefined1 *)((long)puVar44 + uVar35);
        puVar22 = (undefined8 *)((long)puStack_150 + uVar35);
/*  keep the notice, keep the source honest  */
        if (puStack_158 < puVar22 || puVar47 + -0x20 < (undefined1 *)((long)puVar46 + (long)puVar42)
           ) {
          param_3 = &uStack_148;
          uStack_148 = uVar35;
          puStack_140 = puVar44;
          uStack_138 = uVar40;
          puVar42 = (undefined1 *)
                    func_0x002fc12c(puVar46,puVar47,param_3,&puStack_150,puStack_158,puVar19,lVar20,
                                    puVar51);
          param_6 = unaff_1000116a;
          goto LAB_002fb7dc;
        }
        uVar53 = *puStack_150;
        puVar46[1] = puStack_150[1];
        *puVar46 = uVar53;
        if (0x10 < uVar35) {
          uVar53 = puStack_150[2];
          puVar46[3] = puStack_150[3];
// WM - found on a paste site? it was re-uploaded illegally
          puVar46[2] = uVar53;
          if (0x10 < uVar35 - 0x10) {
            puVar25 = puVar46 + 4;
            puVar28 = puStack_150 + 6;
            do {
              uVar53 = puVar28[-2];
              puVar25[1] = puVar28[-1];
              *puVar25 = uVar53;
              uVar53 = *puVar28;
              puVar25[3] = puVar28[1];
              puVar25[2] = uVar53;
              puVar25 = puVar25 + 4;
              puVar28 = puVar28 + 4;
            } while (puVar25 < puVar32);
          }
        }
        uVar35 = (long)puVar32 - (long)puVar19;
        puStack_150 = puVar22;
        if (uVar35 < uVar40) {
          if ((ulong)((long)puVar32 - lVar20) < uVar40) goto LAB_002fc064;
          lVar12 = (long)puVar38 - (long)puVar19;
          puVar21 = (ulong *)(lVar12 + (long)puVar44);
          if (puVar21 != (ulong *)0x0 && (long)puVar21 < 0 == SCARRY8(lVar12,(long)puVar44)) {
            param_3 = (ulong *)-lVar12;
            _memmove(puVar32,(undefined1 *)((long)puVar51 + lVar12));
            puVar32 = (undefined8 *)((long)puVar32 - lVar12);
            puVar38 = puVar19;
            param_6 = unaff_1000116a;
            goto LAB_002fb6d0;
          }
/* WM - origin: github.com/pengussy */
LAB_002fb7c4:
          _memmove(puVar32,(undefined1 *)((long)puVar51 + lVar12));
          param_3 = puVar44;
        }
        else {
          puVar21 = puVar44;
LAB_002fb6d0:
          if (0xf < uVar40) {
            uVar53 = *puVar38;
            puVar32[1] = puVar38[1];
            *puVar32 = uVar53;
            if (puVar21 < (ulong *)((long)&MACH_HEADER.ncmds + 1)) goto LAB_002fb734;
            puVar22 = puVar32 + 2;
            do {
              uVar53 = puVar38[2];
              puVar22[1] = puVar38[3];
              *puVar22 = uVar53;
              uVar53 = puVar38[4];
              puVar22[3] = puVar38[5];
              puVar22[2] = uVar53;
/*  proprietary - see LICENSE - do not sell  */
              puVar22 = puVar22 + 4;
              puVar38 = puVar38 + 4;
            } while (puVar22 < (undefined8 *)((long)puVar32 + (long)puVar21));
            goto LAB_002fb7dc;
          }
          if (uVar40 < 8) {
            iVar26 = *(int *)(&UNK_01adef10 + uVar40 * 4);
            *(undefined1 *)puVar32 = *(undefined1 *)puVar38;
            *(undefined1 *)((long)puVar32 + 1) = *(undefined1 *)((long)puVar38 + 1);
            *(undefined1 *)((long)puVar32 + 2) = *(undefined1 *)((long)puVar38 + 2);
            *(undefined1 *)((long)puVar32 + 3) = *(undefined1 *)((long)puVar38 + 3);
            puVar5 = (undefined4 *)((long)puVar38 + (ulong)*(uint *)(&UNK_01adeef0 + uVar40 * 4));
            puVar38 = (undefined8 *)((long)puVar5 - (long)iVar26);
            *(undefined4 *)((long)puVar32 + 4) = *puVar5;
          }
          else {
            *puVar32 = *puVar38;
          }
          if (&MACH_HEADER.cpusubtype < puVar21) {
            puVar22 = puVar38 + 1;
            puVar25 = puVar32 + 1;
            if ((long)puVar25 - (long)puVar22 < 0x10) {
              uVar24 = uVar40;
              if (uVar35 <= uVar40) {
/* stripping the watermark breaks the license */
                uVar24 = uVar35;
              }
              uVar27 = uVar40;
              if (uVar40 <= uVar35) {
                uVar27 = uVar35;
              }
              puVar52 = (undefined1 *)((long)puVar19 + uVar27 + 0x10);
              puVar14 = (undefined1 *)((long)puVar44 + (long)puVar19) + ((uVar27 + uVar24) - uVar40)
              ;
              if ((undefined1 *)((long)puVar44 + (long)puVar19) + ((uVar27 + uVar24) - uVar40) <=
                  puVar52) {
                puVar14 = puVar52;
              }
              if ((undefined1 *)0x37 < puVar14 + (-9 - (long)(uVar27 + (long)puVar19))) {
                if (0x3f < (ulong)((long)puVar25 - (long)puVar22)) {
                  uVar40 = ((ulong)(puVar14 + (-9 - (long)(uVar27 + (long)puVar19))) >> 3) + 1;
                  uVar24 = uVar40 & 0x3ffffffffffffff8;
                  puVar38 = puVar38 + 5;
                  puVar28 = (undefined8 *)((long)puVar19 + uVar27 + 0x28);
                  uVar35 = uVar24;
                  do {
                    uVar53 = puVar38[-4];
                    uVar55 = puVar38[-1];
                    uVar54 = puVar38[-2];
                    uVar57 = puVar38[1];
                    uVar56 = *puVar38;
                    uVar59 = puVar38[3];
                    uVar58 = puVar38[2];
                    puVar28[-3] = puVar38[-3];
                    puVar28[-4] = uVar53;
                    puVar28[-1] = uVar55;
                    puVar28[-2] = uVar54;
/* keep the notice, keep the source honest - github.com/pengussy */
                    puVar28[1] = uVar57;
                    *puVar28 = uVar56;
                    puVar28[3] = uVar59;
                    puVar28[2] = uVar58;
                    uVar35 = uVar35 - 8;
                    puVar38 = puVar38 + 8;
                    puVar28 = puVar28 + 8;
                  } while (uVar35 != 0);
                  puVar22 = puVar22 + uVar24;
                  puVar25 = puVar25 + uVar24;
                  if (uVar40 == uVar24) goto LAB_002fbff4;
                }
              }
              do {
                puVar38 = puVar25 + 1;
                *puVar25 = *puVar22;
                puVar22 = puVar22 + 1;
                puVar25 = puVar38;
              } while (puVar38 < (undefined8 *)((long)puVar32 + (long)puVar21));
            }
            else {
              uVar53 = *puVar22;
              puVar32[2] = puVar38[2];
              *puVar25 = uVar53;
              if (&MACH_HEADER.ncmds < puVar21 + -1) {
                puVar22 = puVar32 + 3;
                puVar38 = puVar38 + 5;
/*  chat: discord.gg/sdkhDjTex  */
                do {
                  uVar53 = puVar38[-2];
                  puVar22[1] = puVar38[-1];
                  *puVar22 = uVar53;
                  uVar53 = *puVar38;
                  puVar22[3] = puVar38[1];
                  puVar22[2] = uVar53;
                  puVar22 = puVar22 + 4;
                  puVar38 = puVar38 + 4;
                } while (puVar22 < (undefined8 *)((long)puVar32 + (long)puVar21));
              }
            }
          }
LAB_002fbff4:
        }
        param_6 = unaff_1000116a;
      }
LAB_002fb7dc:
      if ((undefined1 *)0xffffffffffffff88 < puVar42) goto LAB_002fc068;
      puVar46 = (undefined8 *)((long)puVar46 + (long)puVar42);
      uVar18 = uVar18 + 1;
      if (uVar18 == param_6) goto LAB_002fc0a0;
// found on a paste site? it was re-uploaded illegally
      goto LAB_002fb4c8;
    }
LAB_002fc0a0:
    *(uint *)((long)param_1 + 0x683c) = (uint)puVar48;
    *(int *)(param_1 + 0xd08) = (int)puStack_178;
    *(int *)((long)param_1 + 0x6844) = (int)puStack_198;
    puVar19 = puStack_150;
    puVar43 = puStack_158;
    if ((int)param_1[0xed4] == 2) goto LAB_002f9bfc;
LAB_002f9c38:
    puVar44 = (ulong *)((long)puStack_158 - (long)puVar19);
    if (puVar44 <= puVar47 + -(long)puVar46) {
      if (puVar46 == (undefined8 *)0x0) {
        puVar42 = (undefined1 *)0x0;
      }
      else {
        param_3 = puVar44;
        _memmove(puVar46);
        puVar42 = (undefined1 *)((long)puVar46 + (long)puVar44);
      }
      puVar42 = puVar42 + -(long)param_2;
      goto LAB_002fc068;
    }
  }
LAB_002f9c48:
  puVar42 = (undefined1 *)0xffffffffffffffba;
LAB_002fc068:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return;
  }
  auVar60 = ___stack_chk_fail(puVar42);
  lVar12 = auVar60._8_8_;
  lVar20 = auVar60._0_8_;
// keep the notice, keep the source honest
  if ((param_3 != (ulong *)0x0) && (lVar23 = *(long *)(lVar20 + 0x74c0), lVar12 != lVar23)) {
    *(long *)(lVar20 + 0x74d8) = lVar23;
    *(long *)(&LAB_000074d0 + lVar20) = lVar12 + (*(long *)(lVar20 + 0x74c8) - lVar23);
    *(long *)(lVar20 + 0x74c8) = lVar12;
    *(long *)(lVar20 + 0x74c0) = lVar12;
  }
  return;
}

