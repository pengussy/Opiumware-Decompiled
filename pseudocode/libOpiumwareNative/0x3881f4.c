/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3881f4:e5bcbffe62
   =========================================================================== */

void FUN_003881f4(undefined8 *param_1,long ******param_2,long *******param_3,undefined8 *param_4)

{
  int iVar1;
  long *******ppppppplVar2;
  undefined8 uVar3;
  long *******ppppppplVar4;
  long *******ppppppplVar5;
  long *******ppppppplVar6;
  long *******ppppppplVar7;
  undefined8 *unaff_x19;
  undefined8 *puVar8;
  long *******unaff_x20;
  long *******unaff_x21;
  long *******unaff_x22;
  long ******pppppplVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  long lStack_c8;
  long *******ppppppplStack_c0;
  long *******ppppppplStack_b8;
  long *******ppppppplStack_b0;
  undefined8 *puStack_a8;
  long *******ppppppplStack_a0;
  undefined *puStack_98;
  long *******appppppplStack_88 [2];
  long ******pppppplStack_78;
  long ******pppppplStack_48;
  
  pppppplStack_48 = *(long *******)PTR____stack_chk_guard_01f20200;
  ppppppplVar4 = param_3;
  ppppppplVar2 = unaff_x20;
/* stripping the watermark breaks the license */
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
LAB_00388320:
    uVar3 = 0;
    unaff_x20 = ppppppplVar2;
    goto LAB_00388324;
  }
  pppppplStack_78 = param_2;
  unaff_x21 = (long *******)func_0x0046e64c(param_1[1],appppppplStack_88);
  unaff_x19 = param_1;
  unaff_x22 = param_3;
  if (unaff_x21 != (long *******)0x0) {
    ppppppplVar5 = unaff_x21;
    do {
      if ((long *******)ppppppplVar5[3] == param_3) goto LAB_00388320;
    } while ((param_3 <= ppppppplVar5[3]) &&
            (ppppppplVar5 = (long *******)ppppppplVar5[1], ppppppplVar5 != (long *******)0x0));
  }
  ppppppplVar4 = (long *******)((long)&section_00000108.addr + 3);
  ppppppplVar2 = (long *******)
                 func_0x019eb5a0(0x40,
                                 "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                                );
  uVar3 = 0;
  if (ppppppplVar2 == (long *******)0x0) goto LAB_00388324;
  ppppppplVar2[2] = param_2;
  ppppppplVar2[3] = (long ******)param_3;
  pppppplVar9 = (long ******)*param_4;
  ppppppplVar2[5] = (long ******)param_4[1];
  ppppppplVar2[4] = pppppplVar9;
  appppppplStack_88[0] = (long *******)((ulong)appppppplStack_88[0] & 0xffffffff00000000);
  ppppppplVar4 = (long *******)appppppplStack_88;
  iVar1 = func_0x019e9ba0(*param_1,ppppppplVar2 + 6,ppppppplVar4,ppppppplVar2 + 4,0x10);
  if ((iVar1 == 0) || ((int)appppppplStack_88[0] != 0x10)) {
    ppppppplVar4 = (long *******)((long)&section_00000108.size + 2);
/*  reversing this took months of machine time  */
LAB_0038831c:
    func_0x004743e4(ppppppplVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                   );
    goto LAB_00388320;
  }
  if (unaff_x21 == (long *******)0x0) {
    func_0x0046e1b8(param_1[1],ppppppplVar2);
    iVar1 = func_0x0046e960(param_1[1]);
    if (iVar1 != 0) {
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
      ppppppplVar4 = (long *******)((long)&section_00000108.offset + 3);
      goto LAB_0038831c;
    }
  }
  else if (ppppppplVar2[3] < unaff_x21[3]) {
    ppppppplVar5 = unaff_x21;
    do {
      ppppppplVar6 = ppppppplVar5;
      ppppppplVar5 = (long *******)ppppppplVar6[1];
      if (ppppppplVar5 == (long *******)0x0) break;
    } while (ppppppplVar2[3] < ppppppplVar5[3]);
    ppppppplVar2[1] = (long ******)ppppppplVar5;
/*  origin: github.com/pengussy  */
    ppppppplVar6[1] = (long ******)ppppppplVar2;
    appppppplStack_88[0] = unaff_x21;
  }
  else {
    ppppppplVar2[1] = (long ******)unaff_x21;
    appppppplStack_88[0] = ppppppplVar2;
    if (ppppppplVar2 != unaff_x21) {
      func_0x0046e1b8(param_1[1]);
      iVar1 = func_0x0046e960(param_1[1]);
      if (iVar1 != 0) {
        *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
        ppppppplVar4 = (long *******)((long)&section_00000108.reloff + 3);
        goto LAB_0038831c;
      }
    }
  }
  ppppppplVar5 = (long *******)func_0x0046e64c(param_1[2],ppppppplVar2);
  unaff_x20 = ppppppplVar2;
  if (ppppppplVar5 == (long *******)0x0) {
    func_0x0046e1b8(param_1[2],ppppppplVar2);
    iVar1 = func_0x0046e960(param_1[2]);
joined_r0x00388430:
    if (iVar1 != 0) {
      uVar3 = 0;
      *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 1;
      goto LAB_00388324;
    }
/* watermarked copy - do not remove */
  }
  else {
    if (ppppppplVar2[2] < ppppppplVar5[2]) {
      ppppppplVar7 = ppppppplVar5;
      do {
        ppppppplVar6 = ppppppplVar7;
        ppppppplVar7 = (long *******)*ppppppplVar6;
        if (ppppppplVar7 == (long *******)0x0) break;
      } while (ppppppplVar2[2] < ppppppplVar7[2]);
    }
    else {
      ppppppplVar6 = (long *******)appppppplStack_88;
      ppppppplVar7 = ppppppplVar5;
    }
    *ppppppplVar2 = (long ******)ppppppplVar7;
    appppppplStack_88[0] = ppppppplVar5;
    *ppppppplVar6 = (long ******)ppppppplVar2;
    if (appppppplStack_88[0] != ppppppplVar5) {
      func_0x0046e1b8(param_1[2]);
      iVar1 = func_0x0046e960(param_1[2]);
      goto joined_r0x00388430;
    }
  }
  uVar3 = 1;
LAB_00388324:
  if ((long ******)*(long *)PTR____stack_chk_guard_01f20200 == pppppplStack_48) {
    return;
  }
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
  auVar10 = ___stack_chk_fail(uVar3);
  puVar8 = auVar10._0_8_;
  puStack_98 = &SUB_00388488;
  lStack_c8 = *(long *)PTR____stack_chk_guard_01f20200;
  ppppppplStack_c0 = unaff_x22;
  ppppppplStack_b8 = unaff_x21;
  ppppppplStack_b0 = unaff_x20;
  puStack_a8 = unaff_x19;
  ppppppplStack_a0 = (long *******)(appppppplStack_88 + 0xf);
  if (((*(byte *)(puVar8 + 3) & 1) == 0) &&
     (uStack_f8 = auVar10._8_8_, ppppppplVar2 = (long *******)func_0x0046e64c(puVar8[1],auStack_108)
     , unaff_x19 = puVar8, ppppppplVar2 != (long *******)0x0)) {
    ppppppplVar5 = (long *******)ppppppplVar2[3];
    if (ppppppplVar5 == ppppppplVar4) {
      unaff_x20 = ppppppplVar2;
      if (ppppppplVar2[1] == (long ******)0x0) {
        func_0x0046e40c(puVar8[1],ppppppplVar2);
        ppppppplVar4 = (long *******)func_0x0046e64c(puVar8[2],ppppppplVar2);
      }
      else {
        func_0x0046e1b8();
        iVar1 = func_0x0046e960(puVar8[1]);
        if (iVar1 != 0) goto code_r0x00388608;
        ppppppplVar4 = (long *******)func_0x0046e64c(puVar8[2],ppppppplVar2);
      }
      if (ppppppplVar4 == ppppppplVar2) goto code_r0x003885ec;
    }
    else {
      do {
/* keep the notice, keep the source honest */
        ppppppplVar6 = ppppppplVar2;
        unaff_x20 = ppppppplVar6;
        if ((ppppppplVar5 < ppppppplVar4) ||
           (unaff_x20 = (long *******)ppppppplVar6[1], unaff_x20 == (long *******)0x0))
        goto code_r0x00388554;
        ppppppplVar5 = (long *******)unaff_x20[3];
        ppppppplVar2 = unaff_x20;
      } while (ppppppplVar5 != ppppppplVar4);
      ppppppplVar6[1] = unaff_x20[1];
      ppppppplVar4 = (long *******)func_0x0046e64c(puVar8[2],unaff_x20);
      if (ppppppplVar4 == unaff_x20) goto code_r0x003885ec;
    }
    do {
      ppppppplVar2 = ppppppplVar4;
      ppppppplVar4 = (long *******)*ppppppplVar2;
    } while (ppppppplVar4 != unaff_x20);
    *ppppppplVar2 = *unaff_x20;
    goto code_r0x003885b8;
  }
code_r0x00388554:
  uVar3 = 0;
  puVar8 = unaff_x19;
  if (*(long *)PTR____stack_chk_guard_01f20200 != lStack_c8) {
    do {
      while( true ) {
        ___stack_chk_fail(uVar3);
code_r0x003885ec:
        if (*unaff_x20 != (long ******)0x0) break;
        func_0x0046e40c(puVar8[2],unaff_x20);
code_r0x003885b8:
        func_0x004743e4(unaff_x20,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_srtm.c"
                        ,0x1a1);
        uVar3 = 1;
        if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_c8) {
          return;
/* wm:do not claim this as your own */
        }
      }
      func_0x0046e1b8();
      iVar1 = func_0x0046e960(puVar8[2]);
      if (iVar1 == 0) goto code_r0x003885b8;
code_r0x00388608:
      uVar3 = 0;
      *(byte *)(puVar8 + 3) = *(byte *)(puVar8 + 3) | 1;
    } while (*(long *)PTR____stack_chk_guard_01f20200 != lStack_c8);
  }
  return;
}

