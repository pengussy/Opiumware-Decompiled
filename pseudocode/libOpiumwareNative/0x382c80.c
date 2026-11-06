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
 *  file-id: 0x382c80:026847876b
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x00382cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00382dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00382cf8) */
/* WARNING: Removing unreachable block (ram,0x00382db0) */
/* WARNING: Removing unreachable block (ram,0x00382cbc) */
/* WARNING: Removing unreachable block (ram,0x00382d74) */

void FUN_00382c80(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (param_1 == 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x60);
  if (lVar6 != 0) {
    plVar3 = (long *)(lVar6 + 0x48);
    lVar9 = *plVar3;
    *(long *)(param_1 + 0x60) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x50);
    if (*(long *)(param_1 + 0x68) == lVar6) {
      *(long *)(param_1 + 0x68) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x48) = lVar9;
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x50) = lVar7;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
      *plVar3 = 0;
      *(undefined8 *)(lVar6 + 0x50) = 0;
      uVar2 = 0xe1;
      param_1 = lVar6;
      goto code_r0x004743e4;
    }
    *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + -1;
    *plVar3 = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    func_0x004743e4(lVar6,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_rx.c"
                    ,0xe1);
  }
  lVar6 = *(long *)(param_1 + 0x78);
  if (lVar6 != 0) {
    plVar3 = (long *)(lVar6 + 0x48);
    lVar9 = *plVar3;
    *(long *)(param_1 + 0x78) = lVar9;
    lVar7 = *(long *)(lVar6 + 0x50);
    if (*(long *)(param_1 + 0x80) == lVar6) {
      *(long *)(param_1 + 0x80) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x48) = lVar9;
    }
    if (lVar9 != 0) {
      *(long *)(lVar9 + 0x50) = lVar7;
      *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
      *plVar3 = 0;
      *(undefined8 *)(lVar6 + 0x50) = 0;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
      uVar2 = 0xe1;
      param_1 = lVar6;
      goto code_r0x004743e4;
    }
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + -1;
    *plVar3 = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    func_0x004743e4(lVar6,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_rx.c"
                    ,0xe1);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar4;
LAB_00382e6c:
    *(undefined8 **)(param_1 + 0x30) = puVar8;
    puVar5 = (undefined8 *)puVar4[1];
    puVar1 = puVar4;
    if (*(undefined8 **)(param_1 + 0x38) != puVar4) goto joined_r0x00382e84;
    do {
      *(undefined8 **)(param_1 + 0x38) = puVar5;
      puVar1 = puVar4;
joined_r0x00382e84:
      do {
        puVar4 = puVar8;
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = puVar4;
        }
        if (puVar4 == (undefined8 *)0x0) {
          *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
          *puVar1 = 0;
          puVar1[1] = 0;
          func_0x0037a358(*(undefined8 *)(param_1 + 0x10));
          goto LAB_00382ea4;
        }
        puVar4[1] = puVar5;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
        *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -1;
        *puVar1 = 0;
        puVar1[1] = 0;
        func_0x0037a358(*(undefined8 *)(param_1 + 0x10));
        puVar8 = (undefined8 *)*puVar4;
        if (*(undefined8 **)(param_1 + 0x30) == puVar4) goto LAB_00382e6c;
        puVar5 = (undefined8 *)puVar4[1];
        puVar1 = puVar4;
      } while (*(undefined8 **)(param_1 + 0x38) != puVar4);
    } while( true );
  }
LAB_00382ea4:
  puVar4 = *(undefined8 **)(param_1 + 0x48);
  if (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*puVar4;
LAB_00382f08:
    *(undefined8 **)(param_1 + 0x48) = puVar8;
    puVar5 = (undefined8 *)puVar4[1];
    puVar1 = puVar4;
    if (*(undefined8 **)(param_1 + 0x50) != puVar4) goto joined_r0x00382f20;
    do {
      *(undefined8 **)(param_1 + 0x50) = puVar5;
      puVar1 = puVar4;
joined_r0x00382f20:
      do {
        puVar4 = puVar8;
// WM - unlicensed copy if this notice is missing
        if (puVar5 != (undefined8 *)0x0) {
          *puVar5 = puVar4;
        }
        if (puVar4 == (undefined8 *)0x0) {
          *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
          *puVar1 = 0;
          puVar1[1] = 0;
          func_0x0037a358(*(undefined8 *)(param_1 + 0x10));
          goto LAB_00382f40;
        }
        puVar4[1] = puVar5;
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + -1;
        *puVar1 = 0;
        puVar1[1] = 0;
        func_0x0037a358(*(undefined8 *)(param_1 + 0x10));
        puVar8 = (undefined8 *)*puVar4;
        if (*(undefined8 **)(param_1 + 0x48) == puVar4) goto LAB_00382f08;
        puVar5 = (undefined8 *)puVar4[1];
        puVar1 = puVar4;
      } while (*(undefined8 **)(param_1 + 0x50) != puVar4);
    } while( true );
  }
LAB_00382f40:
/*  origin: github.com/pengussy  */
  func_0x019e4814(param_1 + 0xa8,0);
  func_0x019e4814(param_1 + 0xa8,1);
  func_0x019e4814(param_1 + 0xa8,2);
  func_0x019e4814(param_1 + 0xa8,3);
  uVar2 = 0x10b;
code_r0x004743e4:
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_record_rx.c"
               ,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

