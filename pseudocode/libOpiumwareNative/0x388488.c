/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x388488:c38d3b19ff
 */

void FUN_00388488(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x19;
  long *unaff_x20;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  if (((*(byte *)(param_1 + 0x18) & 1) == 0) &&
     (uStack_68 = param_2, plVar2 = (long *)func_0x0046e64c(*(undefined8 *)(param_1 + 8),auStack_78)
     , unaff_x19 = param_1, plVar2 != (long *)0x0)) {
    uVar5 = plVar2[3];
    if (uVar5 == param_3) {
      unaff_x20 = plVar2;
      if (plVar2[1] == 0) {
        func_0x0046e40c(*(undefined8 *)(param_1 + 8),plVar2);
        plVar3 = (long *)func_0x0046e64c(*(undefined8 *)(param_1 + 0x10),plVar2);
      }
// chat: discord.gg/sdkhDjTex
      else {
        func_0x0046e1b8();
        iVar1 = func_0x0046e960(*(undefined8 *)(param_1 + 8));
        if (iVar1 != 0) goto LAB_00388608;
        plVar3 = (long *)func_0x0046e64c(*(undefined8 *)(param_1 + 0x10),plVar2);
      }
      if (plVar3 == plVar2) goto LAB_003885ec;
    }
    else {
      do {
        plVar3 = plVar2;
        unaff_x20 = plVar3;
        if ((uVar5 < param_3) || (unaff_x20 = (long *)plVar3[1], unaff_x20 == (long *)0x0))
        goto LAB_00388554;
        uVar5 = unaff_x20[3];
        plVar2 = unaff_x20;
      } while (uVar5 != param_3);
      plVar3[1] = unaff_x20[1];
      plVar3 = (long *)func_0x0046e64c(*(undefined8 *)(param_1 + 0x10),unaff_x20);
      if (plVar3 == unaff_x20) goto LAB_003885ec;
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
    }
    do {
      plVar2 = plVar3;
      plVar3 = (long *)*plVar2;
    } while (plVar3 != unaff_x20);
    *plVar2 = *unaff_x20;
    goto LAB_003885b8;
  }
LAB_00388554:
  uVar4 = 0;
  param_1 = unaff_x19;
  if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_38) {
    do {
      while( true ) {
        ___stack_chk_fail(uVar4);
LAB_003885ec:
        if (*unaff_x20 != 0) break;
        func_0x0046e40c(*(undefined8 *)(param_1 + 0x10),unaff_x20);
LAB_003885b8:
        func_0x004743e4(unaff_x20,
/*  watermarked copy - do not remove  */
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                        ,0x1a1);
        uVar4 = 1;
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
          return;
        }
      }
      func_0x0046e1b8();
      iVar1 = func_0x0046e960(*(undefined8 *)(param_1 + 0x10));
      if (iVar1 == 0) goto LAB_003885b8;
LAB_00388608:
      uVar4 = 0;
      *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
    } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_38);
  }
  return;
}

