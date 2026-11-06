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
 *  file-id: 0xcfbb8:cd6a8ef664
 *  --------------------------------------------------------------------------*/

void FUN_000cfbb8(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  code *UNRECOVERED_JUMPTABLE;
  ulong extraout_x8;
  uint uVar8;
  byte *pbVar9;
  undefined *puVar10;
  undefined1 auVar11 [16];
  undefined8 uStack_88;
  short sStack_80;
  undefined4 uStack_7c;
  long lStack_78;
  long lStack_70;
/*  chat: discord.gg/sdkhDjTex  */
  byte *pbStack_60;
  undefined *puStack_58;
  uint *puStack_50;
  undefined1 uStack_48;
  
  uVar3 = uRam0000000001f27158;
  uVar2 = uRam0000000001f270e0;
  if (pcRam0000000001f26fc8 != (code *)0x0) {
    UNRECOVERED_JUMPTABLE = pcRam0000000001f26fc8;
    puVar5 = (undefined1 *)(*pcRam000000000205ddf8)();
    auVar11 = (*pcRam000000000205de10)(*puVar5);
    lVar7 = auVar11._8_8_;
    if ((((((extraout_x8 & 1) != 0) || ((*auVar11._0_8_ & 1) != 0)) ||
         (cRam0000000001f270e8 != '\x01')) || ((cRam0000000002097053 != '\x01' || (lVar7 == 0)))) ||
       (iRam0000000001f270f0 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000cfc9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1);
/*  thanks for reading - discord.gg/sdkhDjTex  */
      return;
    }
    pbStack_60 = *(byte **)(lVar7 + 0x10);
    if (*(long *)(param_1 + 0xf10) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = (char)(&UNK_00003c76)[*(long *)(param_1 + 0xf10)] < '\0';
    }
    if (((pbStack_60 != (byte *)0x0) &&
        (puStack_58 = *(undefined **)(lVar7 + 0x18), puStack_58 != (undefined *)0x0)) &&
       (puStack_58 < &UNK_00100006)) {
      if ((bVar4) && (*pbStack_60 == 0xaa)) {
        if ((undefined *)0x5 < puStack_58) {
          puStack_58 = puStack_58 + -5;
          puStack_50 = (uint *)(pbStack_60 + 1);
          pbStack_60 = pbStack_60 + 5;
          uVar8 = 0x811c9dc5;
          pbVar9 = pbStack_60;
          puVar10 = puStack_58;
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
          do {
            uVar8 = (uVar8 ^ *pbVar9) * 0x1000193;
            puVar10 = puVar10 + -1;
            pbVar9 = pbVar9 + 1;
          } while (puVar10 != (undefined *)0x0);
          if (uVar8 == *puStack_50) goto LAB_000cfd4c;
        }
      }
      else if (puStack_58 < &UNK_00100001) {
        puStack_50 = (uint *)0x0;
LAB_000cfd4c:
        uStack_48 = 1;
        uVar1 = *puVar5;
        *puVar5 = 1;
        func_0x000cfe24(&lStack_78,pbStack_60,pbStack_60 + (long)puStack_58);
        uStack_88 = 0;
        uStack_7c = 0xffffffff;
        sStack_80 = (ushort)(*(long *)(lVar7 + 0x20) == 0) << 8;
        uVar6 = func_0x000ce06c(&lStack_78,&uStack_88,uVar3,uVar2);
        if ((uVar6 & 1) == 0) {
          func_0x000cfeac(&pbStack_60,&lStack_78);
          (*UNRECOVERED_JUMPTABLE)(param_1,lVar7);
        }
        if (lStack_78 != 0) {
          lStack_70 = lStack_78;
          __ZdlPv();
        }
        *puVar5 = uVar1;
        return;
      }
    }
    (*UNRECOVERED_JUMPTABLE)(param_1);
/* WM - donate: donate/README.md */
  }
  return;
}

