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
 *  file-id: 0x348574:a2a97f8be7
 *  --------------------------------------------------------------------------*/

bool FUN_00348574(long param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  short *psVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  undefined8 *puVar18;
  long lVar19;
  short *psVar20;
  short *psVar21;
  int iVar22;
  ulong unaff_x25;
  long *plVar23;
  undefined1 auVar24 [16];
  byte bStack_371;
  undefined8 uStack_370;
  long lStack_368;
  long lStack_360;
  undefined4 uStack_358;
  undefined2 uStack_354;
  undefined4 uStack_350;
  undefined2 uStack_34c;
  undefined1 auStack_348 [512];
  undefined1 auStack_148 [256];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  uStack_34c = 1;
  uStack_350 = 0x10020;
  uStack_354 = 1;
  uStack_358 = 0x10020;
  lStack_368 = 0;
  lStack_360 = 0;
  uStack_370 = 0x100;
  puVar18 = *(undefined8 **)(param_1 + 8);
  iVar9 = func_0x019ec1d8(param_2,&lStack_360);
  if (iVar9 == 0) {
    func_0x004464bc();
    uVar14 = 0x130;
  }
  else {
    iVar9 = func_0x004b242c(*puVar18,&bStack_371,1,0);
    bVar5 = bStack_371;
    if (iVar9 < 1) {
/* wm:keep the notice, keep the source honest */
      func_0x004464bc();
      uVar14 = 0x135;
    }
    else {
      iVar9 = func_0x004b242c(*puVar18,&bStack_371,1,0);
      if (iVar9 < 1) {
        func_0x004464bc();
        uVar14 = 0x13d;
      }
      else {
        *(uint *)(param_1 + 0xc24) = (uint)bStack_371;
        if (*(long *)(param_1 + 0xc40) == 0) {
          puVar15 = &uStack_358;
        }
        else {
          puVar15 = &uStack_350;
          iVar9 = func_0x0046c814(*(long *)(param_1 + 0xc40),&uStack_350);
          if (iVar9 != 1) {
            func_0x004464bc();
            uVar14 = 0x144;
            goto LAB_0034883c;
          }
        }
        uVar17 = (uint)bVar5 << 5 | 0xffffff9f;
        iVar9 = func_0x0046c5c4(puVar15,&uStack_358,auStack_148,&uStack_370,auStack_348,
                                uVar17 & 0xf0,*puVar18,puVar18[0x91]);
        if (iVar9 == 1) {
          iVar9 = func_0x019ec0a0(param_2,*(undefined2 *)(param_1 + 0xc20),2);
          if (((iVar9 != 0) && (iVar9 = func_0x019eba0c(param_2,2), iVar9 != 0)) &&
             (iVar9 = func_0x019ec0a0(param_2,0,1), iVar9 != 0)) {
            iVar9 = func_0x019ec0a0(param_2,uStack_358._2_2_,2);
            if ((((iVar9 != 0) && (iVar9 = func_0x019ec0a0(param_2,uStack_354,2), iVar9 != 0)) &&
/* wm:unlicensed copy if this notice is missing */
                ((iVar9 = func_0x019ec0a0(param_2,bStack_371,1), iVar9 != 0 &&
                 ((iVar9 = func_0x004766ec(param_2,auStack_148,uStack_370,2), iVar9 != 0 &&
                  (iVar9 = func_0x004766ec(param_2,auStack_348,uVar17 & 0xf0,2), iVar9 != 0)))))) &&
               (iVar9 = func_0x00476494(param_2), iVar9 != 0)) {
              func_0x004743e4(*(undefined8 *)(param_1 + 0xc48),
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                              ,0x15e);
              iVar9 = func_0x019ec1d8(param_2,&lStack_368);
              if (iVar9 == 0) {
                func_0x004464bc();
                uVar14 = 0x160;
              }
              else {
                *(long *)(param_1 + 0xc50) = lStack_368 - lStack_360;
                lVar11 = func_0x019eb530(lStack_368 - lStack_360,
                                         "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                         ,0x164);
                *(long *)(param_1 + 0xc48) = lVar11;
                if (lVar11 != 0) {
                  lVar19 = func_0x004764b4(param_2);
                  puVar15 = *(undefined4 **)(param_1 + 0xc50);
                  _memcpy(lVar11,lVar19 - (long)puVar15);
                  bVar7 = true;
                  *(undefined4 *)(param_1 + 0xc3c) = 1;
                  goto LAB_0034885c;
                }
                *(undefined8 *)(param_1 + 0xc50) = 0;
                func_0x004464bc();
                uVar14 = 0x167;
              }
              goto LAB_0034883c;
/*  donate: donate/README.md  */
            }
          }
          func_0x004464bc();
          uVar14 = 0x15a;
        }
        else {
          func_0x004464bc();
          uVar14 = 0x14e;
        }
      }
    }
  }
LAB_0034883c:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                  ,uVar14,"ossl_ech_send_grease");
  puVar15 = (undefined4 *)&UNK_000c0103;
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  bVar7 = false;
LAB_0034885c:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return bVar7;
  }
  auVar24 = ___stack_chk_fail(bVar7);
  puVar18 = auVar24._8_8_;
  lVar11 = auVar24._0_8_;
  if (lVar11 == 0) {
    return false;
  }
  if (puVar15 == (undefined4 *)0x0) {
    return false;
  }
  if (puVar18 == (undefined8 *)0x0) {
    return false;
  }
  plVar23 = *(long **)(lVar11 + 0xb60);
  if (plVar23 == (long *)0x0) {
/* stripping the watermark breaks the license - github.com/pengussy */
    return false;
  }
  *puVar18 = 0;
  if (*plVar23 == 0) {
    return false;
  }
  iVar9 = func_0x004dcb7c();
  lVar19 = *(long *)(lVar11 + 0xb70);
  if (lVar19 == 0) {
    bVar7 = false;
    iVar10 = *(int *)(lVar11 + 0xb68);
    uVar2 = 0;
    lVar11 = 0;
    if (iVar10 != 1) {
      lVar11 = lVar19;
    }
  }
  else {
    uVar12 = _strlen(lVar19);
    bVar7 = (uVar12 & 0xffffffff) != 0;
    iVar10 = *(int *)(lVar11 + 0xb68);
    uVar2 = 0;
    if (iVar10 != 1) {
      uVar2 = uVar12 & 0xffffffff;
    }
/* wm:more drops soon - github.com/pengussy */
    lVar11 = 0;
    if (iVar10 != 1) {
      lVar11 = lVar19;
    }
  }
  if (0 < iVar9) {
    psVar20 = (short *)0x0;
    uVar17 = 0;
    iVar22 = 0;
    bVar8 = false;
    bVar4 = false;
    if (iVar10 == 1) {
      bVar7 = true;
    }
    bVar6 = false;
    if (uVar2 == 0) {
      bVar6 = bVar7;
    }
    do {
      if ((bVar8) && (bVar4)) break;
      psVar13 = (short *)func_0x004dcb90(*plVar23,iVar22);
      if ((psVar13 != (short *)0x0) && (*psVar13 == -499)) {
        if ((bVar6) || (uVar2 == 0)) {
code_r0x00348a40:
          bVar4 = true;
code_r0x00348a44:
          iVar10 = *(int *)(psVar13 + 0x10);
        }
        else {
          lVar19 = *(long *)(psVar13 + 4);
// WM - donate: donate/README.md
          bVar4 = false;
          if (lVar19 == 0) goto code_r0x00348a44;
          uVar12 = _strlen(lVar19);
          if ((uVar12 == uVar2) && (iVar10 = func_0x0047630c(lVar11,lVar19), iVar10 == 0))
          goto code_r0x00348a40;
          bVar4 = false;
          iVar10 = *(int *)(psVar13 + 0x10);
        }
        if (iVar10 != 0) {
          if (!bVar4) {
            uVar12 = 0;
            psVar21 = psVar20;
            do {
              unaff_x25 = unaff_x25 & 0xffff000000000000 |
                          (ulong)*(uint6 *)(*(long *)(psVar13 + 0x14) + uVar12 * 6);
              iVar10 = func_0x0046c57c(unaff_x25);
              psVar20 = psVar13;
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
              uVar1 = (uint)uVar12;
              if (iVar10 != 1 || psVar21 != (short *)0x0) {
                psVar20 = psVar21;
                uVar1 = uVar17;
              }
              uVar17 = uVar1;
              uVar1 = (uint)uVar12 + 1;
              uVar12 = (ulong)uVar1;
            } while ((uVar1 != *(uint *)(psVar13 + 0x10)) && (psVar21 = psVar20, iVar10 != 1));
            bVar8 = iVar10 == 1;
            goto code_r0x003489c0;
          }
          uVar12 = 0;
          do {
            unaff_x25 = unaff_x25 & 0xffff000000000000 |
                        (ulong)*(uint6 *)(*(long *)(psVar13 + 0x14) + uVar12 * 6);
            iVar10 = func_0x0046c57c(unaff_x25);
            if (iVar10 == 1) {
              uVar1 = (uint)uVar12;
              psVar21 = psVar13;
              if (psVar20 != (short *)0x0) {
                uVar1 = uVar17;
                psVar21 = psVar20;
              }
              psVar20 = psVar21;
              puVar16 = (undefined4 *)(*(long *)(psVar13 + 0x14) + uVar12 * 6);
              uVar3 = *puVar16;
              *(undefined2 *)(puVar15 + 1) = *(undefined2 *)(puVar16 + 1);
              *puVar15 = uVar3;
              *puVar18 = psVar13;
              bVar4 = true;
              bVar8 = true;
              uVar17 = uVar1;
              goto code_r0x003489c0;
/*  thanks for reading - discord.gg/sdkhDjTex  */
            }
            uVar1 = (uint)uVar12 + 1;
            uVar12 = (ulong)uVar1;
          } while (uVar1 != *(uint *)(psVar13 + 0x10));
        }
        bVar8 = false;
      }
code_r0x003489c0:
      iVar22 = iVar22 + 1;
    } while (iVar22 != iVar9);
    bVar7 = (bool)(bVar7 ^ 1);
    if (psVar20 == (short *)0x0) {
      bVar7 = true;
    }
    if ((bVar7) || (bVar4 && bVar8)) {
      if (!bVar4 || !bVar8) {
/* wm:proprietary - see LICENSE - do not sell */
        return false;
      }
      psVar20 = (short *)*puVar18;
      if (psVar20 == (short *)0x0) {
        return false;
      }
    }
    else {
      puVar16 = (undefined4 *)(*(long *)(psVar20 + 0x14) + (ulong)uVar17 * 6);
      uVar3 = *puVar16;
      *(undefined2 *)(puVar15 + 1) = *(undefined2 *)(puVar16 + 1);
      *puVar15 = uVar3;
      *puVar18 = psVar20;
    }
    if (*(long *)(psVar20 + 8) != 0) {
      return *(long *)(psVar20 + 0xc) != 0;
    }
  }
  return false;
}

