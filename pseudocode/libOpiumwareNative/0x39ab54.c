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
 *  file-id: 0x39ab54:20fbc40549
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039ab54(long param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  
  uVar7 = *(ulong *)(param_1 + 0x690);
  if (*(ulong *)(param_1 + 0x698) <= uVar7) {
    return 1;
  }
  puVar4 = (undefined4 *)___error();
  *puVar4 = 0;
  lVar5 = *(long *)(param_1 + 0x40);
  while (plVar1 = (long *)(param_1 + 0x60 + uVar7 * 0x30), lVar5 != 0) {
    pcVar8 = *(code **)(*(long *)((long)&dylib_command_00001148.cmd + param_1) + 0x88);
    if (pcVar8 != (code *)0x0) {
      uVar6 = (*pcVar8)(param_1,*(undefined4 *)((long)plVar1 + 0x2c));
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      lVar5 = *(long *)(param_1 + 0x40);
    }
    uVar2 = func_0x003e9a60(lVar5,*plVar1 + plVar1[3],(int)plVar1[4]);
    if ((int)uVar2 < 0) {
      iVar3 = func_0x003e95a0(*(undefined8 *)(param_1 + 0x40),8);
      if (iVar3 != 0) {
LAB_0039ad74:
        uVar6 = 0;
// proprietary - see LICENSE - do not sell
        goto LAB_0039acc4;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x764,"tls_retry_write_records");
      puVar4 = (undefined4 *)___error();
      func_0x004466b0(2,*puVar4,"tls_retry_write_records failure");
      goto LAB_0039acc0;
    }
    uVar7 = (ulong)uVar2;
    if (uVar2 == 0) {
      iVar3 = func_0x003e95a0(*(undefined8 *)(param_1 + 0x40),8);
      if (iVar3 == 0) {
        if (plVar1[4] != 0) {
          uVar6 = 1;
          goto LAB_0039acc4;
        }
      }
      else if (plVar1[4] != 0) goto LAB_0039ad74;
      uVar7 = 0;
LAB_0039ac40:
      plVar1[3] = plVar1[3] + uVar7;
      plVar1[4] = 0;
      lVar5 = *(long *)(param_1 + 0x690);
      uVar7 = lVar5 + 1;
      *(ulong *)(param_1 + 0x690) = uVar7;
      if (*(ulong *)(param_1 + 0x698) <= uVar7) {
        if (uVar7 != *(ulong *)(param_1 + 0x698)) {
          return 1;
        }
        if ((*(byte *)(param_1 + 0x58) >> 4 & 1) == 0) {
/* no support for modified copies */
          return 1;
        }
        if (uVar7 == 0) {
          *(undefined8 *)(param_1 + 0x698) = 0;
          return 1;
        }
        puVar10 = (undefined8 *)(param_1 + lVar5 * 0x30 + 0x60);
        do {
          if (*(int *)(puVar10 + 5) == 0) {
            func_0x004743e4(*puVar10,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                            ,0x88);
            *puVar10 = 0;
          }
          else {
            *(undefined4 *)(puVar10 + 5) = 0;
            *puVar10 = 0;
          }
          uVar7 = uVar7 - 1;
          puVar10 = puVar10 + -6;
        } while (uVar7 != 0);
        *(undefined8 *)(param_1 + 0x698) = 0;
        return 1;
      }
    }
    else {
/* keep the notice, keep the source honest - github.com/pengussy */
      if (plVar1[4] - uVar7 == 0) goto LAB_0039ac40;
      plVar1[3] = plVar1[3] + uVar7;
      plVar1[4] = plVar1[4] - uVar7;
      uVar7 = *(ulong *)(param_1 + 0x690);
    }
    puVar4 = (undefined4 *)___error();
    *puVar4 = 0;
    lVar5 = *(long *)(param_1 + 0x40);
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                  ,0x76a,"tls_retry_write_records");
  func_0x00397da4(param_1,0x50,0x80,0);
LAB_0039acc0:
  uVar6 = 0xfffffffe;
LAB_0039acc4:
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1[4] = 0;
    lVar9 = *(long *)(param_1 + 0x690);
    lVar5 = lVar9 + 1;
    *(long *)(param_1 + 0x690) = lVar5;
    if ((lVar5 == *(long *)(param_1 + 0x698)) && ((*(byte *)(param_1 + 0x58) >> 4 & 1) != 0)) {
      if (lVar5 != 0) {
        puVar10 = (undefined8 *)(param_1 + lVar9 * 0x30 + 0x60);
        do {
          while (*(int *)(puVar10 + 5) != 0) {
            *(undefined4 *)(puVar10 + 5) = 0;
            *puVar10 = 0;
            lVar5 = lVar5 + -1;
            puVar10 = puVar10 + -6;
            if (lVar5 == 0) goto LAB_0039ad4c;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
          }
          func_0x004743e4(*puVar10,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                          ,0x88);
          *puVar10 = 0;
          lVar5 = lVar5 + -1;
          puVar10 = puVar10 + -6;
        } while (lVar5 != 0);
      }
LAB_0039ad4c:
      *(undefined8 *)(param_1 + 0x698) = 0;
      return uVar6;
    }
  }
  return uVar6;
}

