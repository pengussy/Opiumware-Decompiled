/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0xcff6c:63cc11ca49
   =========================================================================== */

undefined8 FUN_000cff6c(long param_1,long param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined4 uStack_9c;
  long lStack_98;
  long lStack_90;
// donate: donate/README.md
  long lStack_88;
  byte *pbStack_80;
  ulong uStack_78;
  uint *puStack_70;
  undefined1 uStack_68;
  
  UNRECOVERED_JUMPTABLE = pcRam0000000001f26fd0;
  if (pcRam0000000001f26fd0 == (code *)0x0) {
    return 0;
  }
  puVar5 = (undefined1 *)(*pcRam000000000205ddf8)();
  pbVar6 = (byte *)(*pcRam000000000205de10)(*puVar5);
  if (((((extraout_x8 & 1) != 0) || ((*pbVar6 & 1) != 0)) || (cRam0000000001f270e8 != '\x01')) ||
     ((param_2 == 0 || ((bRam0000000002097053 & 1) == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000d00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
/* WM - thanks for reading - discord.gg/sdkhDjTex */
    uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return uVar7;
  }
  uVar2 = *puVar5;
  *puVar5 = 1;
  uVar3 = uRam0000000001f27158;
  uVar7 = uRam0000000001f270e0;
  if (iRam0000000001f270f0 == 0) {
    uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    goto LAB_000d0120;
  }
  uVar8 = *(uint *)(param_2 + 0x30);
  uVar11 = (ulong)uVar8;
  bVar4 = false;
  if (*(long *)(param_1 + 0xf10) != 0) {
    bVar4 = (char)(&UNK_00003c76)[*(long *)(param_1 + 0xf10)] < '\0';
  }
/* WM - donate: donate/README.md */
  if (((uVar8 != 0) && (pbVar6 = *(byte **)(param_2 + 0x38), pbVar6 != (byte *)0x0)) &&
     (uVar8 < 0x100006)) {
    if ((bVar4) && (*pbVar6 == 0xaa)) {
      if (5 < uVar8) {
        uVar11 = uVar11 - 5;
        puStack_70 = (uint *)(pbVar6 + 1);
        pbVar6 = pbVar6 + 5;
        uVar8 = 0x811c9dc5;
        pbVar9 = pbVar6;
        uVar10 = uVar11;
        do {
          uVar8 = (uVar8 ^ *pbVar9) * 0x1000193;
          uVar10 = uVar10 - 1;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
        if (uVar8 == *puStack_70) goto LAB_000d0148;
      }
    }
    else if (uVar8 < 0x100001) {
      puStack_70 = (uint *)0x0;
LAB_000d0148:
      uStack_68 = 1;
      lStack_98 = 0;
      lStack_90 = 0;
      lStack_88 = 0;
      pbStack_80 = pbVar6;
      uStack_78 = uVar11;
      if (uVar11 != 0) {
        if ((long)uVar11 < 0) {
          FUN_0000abb4();
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0xd0200);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lStack_98 = __Znwm(uVar11);
        lVar1 = lStack_98 + uVar11;
        lStack_88 = lVar1;
// no support for modified copies
        _memcpy(lStack_98,pbVar6,uVar11);
        lStack_90 = lVar1;
      }
      uStack_a0 = 0;
      uStack_a8 = 0;
      uStack_9c = 0xffffffff;
      uVar11 = func_0x000ce06c(&lStack_98,&uStack_a8,uVar3,uVar7);
      if ((uVar11 & 1) == 0) {
        func_0x000cfeac(&pbStack_80,&lStack_98);
        uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      }
      else {
        uVar7 = 0;
      }
      if (lStack_98 != 0) {
        lStack_90 = lStack_98;
        __ZdlPv(lStack_98);
// WM - chat: discord.gg/sdkhDjTex
      }
      goto LAB_000d0120;
    }
  }
  uVar7 = (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
LAB_000d0120:
  *puVar5 = uVar2;
  return uVar7;
}

