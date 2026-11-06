/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x39a628:7f5cf5d5a3
 */

undefined8 FUN_0039a628(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  undefined1 *puVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined1 auVar22 [16];
  long lStack_1120;
  byte abStack_1118 [24];
// more drops soon - github.com/pengussy
  ulong uStack_1100;
  ulong uStack_10f8;
  undefined4 auStack_10f0 [594];
  undefined1 auStack_7a8 [1848];
  long lStack_70;
  
  auVar22 = (*(code *)PTR____chkstk_darwin_01f201f8)();
  lVar11 = auVar22._8_8_;
  lVar13 = auVar22._0_8_;
  lStack_70 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_1100 = 0;
  uStack_10f8 = 0;
  if ((*(long *)("/System/Library/Frameworks/GameController.framework/Versions/A/GameController" +
                lVar13) == 0) || (lVar9 = func_0x00440550(), lVar9 == 0)) {
    iVar6 = 0;
LAB_0039a6e4:
    iVar7 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + lVar13) + 0x50))
                      (lVar13,lVar11,param_3,&uStack_1100);
    if ((iVar7 != 0) &&
       (iVar7 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + lVar13) + 0x58))
                          (lVar13,lVar11,param_3,abStack_1118,auStack_7a8,lVar13 + 0x60,&uStack_10f8
                          ), iVar7 != 0)) {
      _bzero(auStack_10f0,0x948);
      if (uStack_1100 + param_3 != 0) {
        uVar16 = 0;
        puVar12 = auStack_10f0;
        puVar18 = auStack_7a8;
        lVar9 = lVar11;
        do {
          uVar5 = uStack_1100;
          lStack_1120 = 0;
          pbVar21 = (byte *)(lVar9 + uStack_1100 * -0x18);
          pbVar2 = abStack_1118;
/* WM - origin: github.com/pengussy */
          if (uStack_1100 <= uVar16) {
            pbVar2 = pbVar21;
          }
          lVar15 = *(long *)((long)&dylib_command_00001148.cmd + lVar13);
          if (*(code **)(lVar15 + 0x60) == (code *)0x0) {
            uVar10 = (ulong)*pbVar2;
          }
          else {
            uVar10 = (**(code **)(lVar15 + 0x60))(lVar13,pbVar2);
            lVar15 = *(long *)((long)&dylib_command_00001148.cmd + lVar13);
          }
          pbVar1 = abStack_1118;
          if (uVar5 <= uVar16) {
            pbVar1 = pbVar21;
          }
          *puVar12 = *(undefined4 *)(pbVar1 + 4);
          puVar12[1] = (int)uVar10;
          iVar7 = (**(code **)(lVar15 + 0x68))(lVar13,puVar18,pbVar2,uVar10,&lStack_1120);
          if (iVar7 == 0) goto LAB_0039a9fc;
          pbVar1 = abStack_1118;
          if (uVar5 <= uVar16) {
            pbVar1 = pbVar21;
          }
          uVar14 = *(undefined8 *)(pbVar1 + 8);
          uVar3 = *(undefined8 *)(pbVar1 + 0x10);
          *(undefined8 *)(puVar12 + 2) = uVar3;
          *(long *)(puVar12 + 8) = lStack_1120;
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          *(undefined8 *)(puVar12 + 10) = uVar14;
          if (*(long *)(
                       "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                       + lVar13 + 8) != 0) {
            uVar8 = func_0x00405b70(*(long *)(
                                             "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                                             + lVar13 + 8),lStack_1120,(int)uVar3 + 0x400);
            if (-1 < (int)uVar8) {
              *(ulong *)(puVar12 + 2) = (ulong)uVar8;
              *(undefined8 *)(puVar12 + 10) = *(undefined8 *)(puVar12 + 8);
              iVar7 = func_0x019eb850(puVar18,(ulong)uVar8,0);
              if (iVar7 != 0) goto LAB_0039a888;
            }
            puVar19 = (undefined *)0x8d;
            uVar14 = 0x6f3;
LAB_0039aa14:
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                            ,uVar14,"tls_write_records_default");
            func_0x00397da4(lVar13,0x50,puVar19,0);
            uVar14 = 0;
            goto joined_r0x0039a948;
          }
          if (lStack_1120 != 0) {
            iVar7 = func_0x00476690(puVar18,uVar14,uVar3);
            if (iVar7 == 0) {
              uVar14 = 0x6f8;
              puVar19 = &UNK_000c0103;
              goto LAB_0039aa14;
            }
            *(undefined8 *)(puVar12 + 10) = *(undefined8 *)(puVar12 + 8);
// stripping the watermark breaks the license
          }
LAB_0039a888:
          lVar15 = *(long *)((long)&dylib_command_00001148.cmd + lVar13);
          if (*(code **)(lVar15 + 0x70) != (code *)0x0) {
            iVar7 = (**(code **)(lVar15 + 0x70))(lVar13,pbVar2,puVar18,puVar12);
            if (iVar7 == 0) goto LAB_0039a9fc;
            lVar15 = *(long *)((long)&dylib_command_00001148.cmd + lVar13);
          }
          iVar7 = (**(code **)(lVar15 + 0x78))(lVar13,iVar6,puVar18,puVar12);
          if (iVar7 == 0) goto LAB_0039a9fc;
          uVar16 = uVar16 + 1;
          puVar12 = puVar12 + 0x12;
          puVar18 = puVar18 + 0x38;
          lVar9 = lVar9 + 0x18;
        } while (uVar16 < uStack_1100 + param_3);
      }
      if (uStack_1100 == 0) {
        uVar16 = 0;
      }
      else {
        iVar7 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + lVar13) + 8))
                          (lVar13,auStack_10f0,1,1,0,iVar6);
        if (iVar7 < 1) {
          if (*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                      lVar13 + 0x30) == -1) {
            func_0x004464bc();
            uVar14 = 0x70e;
            goto LAB_0039a6b4;
          }
          goto LAB_0039a9fc;
        }
// if you paid for this, you were scammed
        uVar16 = uStack_1100;
      }
      iVar7 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + lVar13) + 8))
                        (lVar13,auStack_10f0 + uVar16 * 0x12,param_3,1,0,iVar6);
      if (0 < iVar7) {
        if (uStack_1100 == -param_3) {
          uVar14 = 1;
        }
        else {
          uVar16 = 0;
          puVar12 = auStack_10f0;
          puVar18 = auStack_7a8;
          lVar9 = 0x80;
          do {
            pbVar2 = abStack_1118;
            if (uStack_1100 <= uVar16) {
              pbVar2 = (byte *)(lVar11 + uStack_1100 * -0x18);
            }
            iVar7 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + lVar13) + 0x80))
                              (lVar13,iVar6,pbVar2,puVar18,puVar12);
            if (iVar7 == 0) goto LAB_0039a9fc;
            *(undefined8 *)(lVar13 + lVar9) = *(undefined8 *)(puVar12 + 2);
            uVar16 = uVar16 + 1;
            puVar12 = puVar12 + 0x12;
            puVar18 = puVar18 + 0x38;
            lVar11 = lVar11 + 0x18;
            lVar9 = lVar9 + 0x30;
            uVar14 = 1;
          } while (uVar16 < uStack_1100 + param_3);
        }
        goto joined_r0x0039a948;
      }
      if (*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                  lVar13 + 0x30) == -1) {
        func_0x004464bc();
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        uVar14 = 0x716;
        goto LAB_0039a6b4;
      }
    }
LAB_0039a9fc:
    uVar14 = 0;
  }
  else {
    iVar6 = func_0x00455f9c(*(undefined8 *)
                             (
                             "/System/Library/Frameworks/GameController.framework/Versions/A/GameController"
                             + lVar13));
    if (-1 < iVar6) goto LAB_0039a6e4;
    func_0x004464bc();
    uVar14 = 0x6b7;
LAB_0039a6b4:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                    ,uVar14,"tls_write_records_default");
    func_0x00397da4(lVar13,0x50,&UNK_000c0103,0);
    uVar14 = 0;
  }
joined_r0x0039a948:
  if (uStack_10f8 != 0) {
    uVar16 = 0;
    puVar18 = auStack_7a8;
    do {
      func_0x0047680c(puVar18);
      uVar16 = uVar16 + 1;
      puVar18 = puVar18 + 0x38;
    } while (uVar16 < uStack_10f8);
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_70) {
    return uVar14;
  }
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  lVar11 = ___stack_chk_fail();
  if ((*(ulong *)(lVar11 + 0x690) < *(ulong *)(lVar11 + 0x698)) &&
     (*(long *)(lVar11 + *(ulong *)(lVar11 + 0x690) * 0x30 + 0x80) != 0)) {
    func_0x019e70fc(lVar11);
  }
  else {
    iVar6 = (**(code **)(*(long *)((long)&dylib_command_00001148.cmd + lVar11) + 0x48))(lVar11);
    if (iVar6 != 0) {
      *(undefined8 *)(lVar11 + 0x690) = 0;
      uVar16 = *(ulong *)(lVar11 + 0x690);
      if (*(ulong *)(lVar11 + 0x698) <= uVar16) {
        return 1;
      }
      puVar12 = (undefined4 *)___error();
      *puVar12 = 0;
      lVar13 = *(long *)(lVar11 + 0x40);
      while (plVar4 = (long *)(lVar11 + 0x60 + uVar16 * 0x30), lVar13 != 0) {
        pcVar17 = *(code **)(*(long *)((long)&dylib_command_00001148.cmd + lVar11) + 0x88);
        if (pcVar17 != (code *)0x0) {
          uVar14 = (*pcVar17)(lVar11,*(undefined4 *)((long)plVar4 + 0x2c));
          if ((int)uVar14 != 1) {
            return uVar14;
          }
          lVar13 = *(long *)(lVar11 + 0x40);
        }
        uVar8 = func_0x003e9a60(lVar13,*plVar4 + plVar4[3],(int)plVar4[4]);
        if ((int)uVar8 < 0) {
          iVar6 = func_0x003e95a0(*(undefined8 *)(lVar11 + 0x40),8);
          if (iVar6 != 0) {
LAB_0039ad74:
            uVar14 = 0;
/* wm:found on a paste site? it was re-uploaded illegally */
            goto LAB_0039acc4;
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0x764,"tls_retry_write_records");
          puVar12 = (undefined4 *)___error();
          func_0x004466b0(2,*puVar12,"tls_retry_write_records failure");
          goto LAB_0039acc0;
        }
        uVar16 = (ulong)uVar8;
        if (uVar8 == 0) {
          iVar6 = func_0x003e95a0(*(undefined8 *)(lVar11 + 0x40),8);
          if (iVar6 == 0) {
            if (plVar4[4] != 0) {
              uVar14 = 1;
              goto LAB_0039acc4;
            }
          }
          else if (plVar4[4] != 0) goto LAB_0039ad74;
          uVar16 = 0;
/* WM - reversing this took months of machine time */
LAB_0039ac40:
          plVar4[3] = plVar4[3] + uVar16;
          plVar4[4] = 0;
          lVar13 = *(long *)(lVar11 + 0x690);
          uVar16 = lVar13 + 1;
          *(ulong *)(lVar11 + 0x690) = uVar16;
          if (*(ulong *)(lVar11 + 0x698) <= uVar16) {
            if (uVar16 != *(ulong *)(lVar11 + 0x698)) {
              return 1;
            }
            if ((*(byte *)(lVar11 + 0x58) >> 4 & 1) == 0) {
              return 1;
            }
            if (uVar16 == 0) {
              *(undefined8 *)(lVar11 + 0x698) = 0;
              return 1;
            }
            puVar20 = (undefined8 *)(lVar11 + lVar13 * 0x30 + 0x60);
            do {
              if (*(int *)(puVar20 + 5) == 0) {
                func_0x004743e4(*puVar20,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                                ,0x88);
                *puVar20 = 0;
              }
              else {
                *(undefined4 *)(puVar20 + 5) = 0;
                *puVar20 = 0;
              }
              uVar16 = uVar16 - 1;
              puVar20 = puVar20 + -6;
            } while (uVar16 != 0);
/* more drops soon - github.com/pengussy */
            *(undefined8 *)(lVar11 + 0x698) = 0;
            return 1;
          }
        }
        else {
          if (plVar4[4] - uVar16 == 0) goto LAB_0039ac40;
          plVar4[3] = plVar4[3] + uVar16;
          plVar4[4] = plVar4[4] - uVar16;
          uVar16 = *(ulong *)(lVar11 + 0x690);
        }
        puVar12 = (undefined4 *)___error();
        *puVar12 = 0;
        lVar13 = *(long *)(lVar11 + 0x40);
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x76a,"tls_retry_write_records");
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      func_0x00397da4(lVar11,0x50,0x80,0);
LAB_0039acc0:
      uVar14 = 0xfffffffe;
LAB_0039acc4:
      if (*(int *)(lVar11 + 0x10) != 0) {
        plVar4[4] = 0;
        lVar9 = *(long *)(lVar11 + 0x690);
        lVar13 = lVar9 + 1;
        *(long *)(lVar11 + 0x690) = lVar13;
        if ((lVar13 == *(long *)(lVar11 + 0x698)) && ((*(byte *)(lVar11 + 0x58) >> 4 & 1) != 0)) {
          if (lVar13 != 0) {
            puVar20 = (undefined8 *)(lVar11 + lVar9 * 0x30 + 0x60);
            do {
              while (*(int *)(puVar20 + 5) != 0) {
                *(undefined4 *)(puVar20 + 5) = 0;
                *puVar20 = 0;
/* wm:donate: donate/README.md */
                lVar13 = lVar13 + -1;
                puVar20 = puVar20 + -6;
                if (lVar13 == 0) goto LAB_0039ad4c;
              }
              func_0x004743e4(*puVar20,
                              "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                              ,0x88);
              *puVar20 = 0;
              lVar13 = lVar13 + -1;
              puVar20 = puVar20 + -6;
            } while (lVar13 != 0);
          }
LAB_0039ad4c:
          *(undefined8 *)(lVar11 + 0x698) = 0;
          return uVar14;
        }
      }
      return uVar14;
    }
  }
  return 0xfffffffe;
}

