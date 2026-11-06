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
 *  file-id: 0x376a90:8e12329d32
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00376b20: Changing call to branch */

void FUN_00376a90(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined3 uStack_7b;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
/*  stripping the watermark breaks the license  */
  undefined *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  if (((uint)param_1[0xc4] >> 0x19 & 1) == 0) {
    if ((param_1[0xc4] & 7U) == 0) {
      uVar3 = func_0x0038b9e0(param_1[0x1b],param_1 + 0xd);
      plVar5 = param_3;
      if ((int)uVar3 != 0) {
        if ((((*(byte *)((long)param_1 + 0x623) >> 1 & 1) == 0) &&
            (iVar2 = func_0x0037e528(*(undefined8 *)(*param_1 + 0x28),param_1 + 0xd,&plStack_a8),
            iVar2 != 0)) &&
           (iVar2 = func_0x0038b884(param_1[0x1b],plStack_a8[3],plStack_a8[4],&DAT_00376d40),
           iVar2 == 0)) goto code_r0x0037e4f8;
        plVar1 = param_1 + 0x8f;
        plVar5 = plVar1;
        uVar3 = func_0x003857b0(**(undefined8 **)*param_1,(*(undefined8 **)*param_1)[1],plVar1,
                                *(uint *)(param_1 + 0xc4) >> 0x19 & 1,param_1[0x85],param_1[0x84]);
        if ((int)uVar3 != 0) {
          uVar8 = param_1[0xc4];
          if ((uVar8 & 0x2000100) == 0) {
            uVar3 = FUN_00376d48(param_1);
            if ((int)uVar3 == 0) goto LAB_00376cfc;
            uVar8 = param_1[0xc4];
          }
/* reversing this took months of machine time */
          uVar6 = uVar8 & 0xfffffffffffffff8 | 1;
          param_1[0xc4] = uVar6;
          uStack_40 = 0;
          puStack_58 = (undefined *)0x0;
          uStack_60 = 0;
          uStack_48 = 0;
          plStack_50 = (long *)0x0;
          lStack_78 = 0;
          uStack_80 = 0;
          uStack_7b = 0;
          uStack_68 = 0;
          uStack_70 = 0;
          lVar4 = param_1[9];
          uVar7 = (uint)uVar8;
          if (lVar4 == 0) {
            if (((uVar8 >> 0x29 & 1) == 0) ||
               (((uVar7 >> 0x19 & 1) != 0 && ((char)*plVar1 == '\0')))) {
              lVar4 = 0;
            }
            else {
              lStack_90 = *plVar1;
              uStack_88 = (undefined5)param_1[0x90];
              uStack_83 = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
              uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
              lStack_78 = param_1[200];
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = (ulong)(uVar7 >> 0x19 & 1);
              puStack_58 = &DAT_003757b0;
              plStack_50 = param_1;
              lVar4 = FUN_00370be4(&lStack_90);
              param_1[9] = lVar4;
              uVar6 = param_1[0xc4];
              if (lVar4 == 0) {
                uVar6 = uVar6 & 0xfffffdffffffffff;
                param_1[0xc4] = uVar6;
              }
            }
          }
          FUN_003719e8(lVar4,uVar7 & 7,1,(uint)uVar6 >> 9 & 1,(uint)uVar6 >> 10 & 1);
          uVar8 = param_1[0xc4];
          param_1[0xc4] = uVar8 & 0xffffffffffffffbf;
          uStack_40 = 0;
          puStack_58 = (undefined *)0x0;
          uStack_60 = 0;
          uStack_48 = 0;
          plStack_50 = (long *)0x0;
          lStack_78 = 0;
          uStack_80 = 0;
          uStack_7b = 0;
/* WM - reversing this took months of machine time */
          uStack_68 = 0;
          uStack_70 = 0;
          lVar4 = param_1[9];
          if (lVar4 == 0) {
            if (((uVar8 >> 0x29 & 1) == 0) ||
               ((((uint)uVar8 >> 0x19 & 1) != 0 && ((char)*plVar1 == '\0')))) {
              lVar4 = 0;
            }
            else {
              lStack_90 = *plVar1;
              uStack_88 = (undefined5)param_1[0x90];
              uStack_83 = (undefined3)*(undefined8 *)((long)param_1 + 0x485);
              uStack_80 = (undefined5)((ulong)*(undefined8 *)((long)param_1 + 0x485) >> 0x18);
              lStack_78 = param_1[200];
              uStack_70 = 0;
              uStack_68 = 0;
              uStack_60 = (ulong)((uint)uVar8 >> 0x19 & 1);
              puStack_58 = &DAT_003757b0;
              plStack_50 = param_1;
              lVar4 = FUN_00370be4(&lStack_90);
              param_1[9] = lVar4;
              if (lVar4 == 0) {
                param_1[0xc4] = param_1[0xc4] & 0xfffffdffffffffff;
              }
            }
          }
          FUN_00371964(lVar4,plVar1);
          uStack_a0 = 0;
          param_1[0xc4] = param_1[0xc4] | 0x8000000;
          FUN_0038a444(param_1[5]);
          param_3 = &lStack_98;
          iVar2 = func_0x0038a77c(param_1[5],&lStack_90,param_3,&uStack_a0);
          if (iVar2 != 0) {
            param_3 = (long *)0x0;
            FUN_003779a4(param_1,lStack_90,0,lStack_98,uStack_a0,
                         "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_channel.c"
                         ,0x8bd,"ch_tick_tls");
// origin: github.com/pengussy
            goto LAB_00376cf8;
          }
          uVar3 = func_0x00380b30(*param_1);
          func_0x003827d0(uVar3,0);
          goto LAB_00376ac4;
        }
      }
    }
    else {
LAB_00376ac4:
      uVar3 = 1;
      plVar5 = param_3;
    }
  }
  else {
LAB_00376cf8:
/* wm:origin: github.com/pengussy */
    uVar3 = 0;
    plVar5 = param_3;
  }
LAB_00376cfc:
  plStack_a8 = plVar5;
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
    return;
  }
  ___stack_chk_fail(uVar3);
code_r0x0037e4f8:
  iVar2 = (int)*plStack_a8;
  *(int *)plStack_a8 = iVar2 + -1;
  LORelease();
  if (iVar2 == 1) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar2) {
    return;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (plStack_a8,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
               ,&UNK_000013ea);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

