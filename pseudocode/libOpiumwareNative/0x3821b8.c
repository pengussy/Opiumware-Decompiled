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
 *  file-id: 0x3821b8:5e9d061355
 *  --------------------------------------------------------------------------*/

/* WARNING: Possible PIC construction at 0x003822dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003822e0) */
/* WARNING: Removing unreachable block (ram,0x003822e4) */
/* WARNING: Removing unreachable block (ram,0x003822fc) */
/* WARNING: Removing unreachable block (ram,0x00382310) */
/* WARNING: Removing unreachable block (ram,0x00382328) */
/* WARNING: Removing unreachable block (ram,0x00382344) */
/* WARNING: Removing unreachable block (ram,0x00382350) */

char * FUN_003821b8(char *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char *unaff_x19;
/* WM - unlicensed copy if this notice is missing */
  long unaff_x20;
  undefined8 unaff_x21;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  char *pcStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  char acStack_188 [19];
  undefined1 auStack_175 [197];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined5 uStack_a0;
  undefined3 uStack_9b;
  undefined5 uStack_98;
  undefined8 uStack_93;
  undefined5 uStack_8b;
  undefined3 uStack_86;
  undefined3 uStack_83;
  undefined2 uStack_80;
/* WM - stripping the watermark breaks the license */
  undefined6 uStack_7e;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 uStack_5d;
  undefined7 uStack_5c;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_5c = 0;
  uStack_55 = 0;
  uStack_4c = 0;
  acStack_188[0] = '\0';
  acStack_188[1] = '\0';
  acStack_188[2] = '\0';
  acStack_188[3] = '\0';
  acStack_188[4] = '\0';
  acStack_188[5] = '\0';
  acStack_188[6] = '\0';
  acStack_188[7] = '\0';
  pcVar3 = param_1;
  pcStack_1a8 = unaff_x19;
  lStack_1b0 = unaff_x20;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
  uStack_1b8 = unaff_x21;
  if (((byte)param_1[0x623] >> 1 & 1) != 0) {
    param_3 = section_000005b0.segname + 2;
    lVar2 = func_0x019eb5a0(0xc5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                           );
    pcVar3 = (char *)0x0;
    pcStack_1a8 = param_1;
    uStack_1b8 = param_2;
    if (lVar2 != 0) {
      uStack_5d = 8;
      iVar1 = func_0x004b242c(*(undefined8 *)**(undefined8 **)param_1,&uStack_5c,8,0);
      lStack_1b0 = lVar2;
      if (iVar1 == 0) {
        param_3 = section_000005b0.segname + 0xe;
      }
      else {
        lStack_78 = 0;
        uStack_7e = 0;
        lStack_70 = 0;
        uStack_a8 = *(undefined8 *)(param_1 + 0x478);
        uStack_a0 = (undefined5)*(undefined8 *)(param_1 + 0x480);
        uStack_9b = (undefined3)*(undefined8 *)(param_1 + 0x485);
        uStack_98 = (undefined5)((ulong)*(undefined8 *)(param_1 + 0x485) >> 0x18);
        uStack_8b = CONCAT41(uStack_54,uStack_55);
        uStack_93 = CONCAT71(uStack_5c,uStack_5d);
        uStack_86 = (undefined3)uStack_50;
        uStack_83 = (undefined3)(CONCAT44(uStack_4c,uStack_50) >> 0x18);
        uStack_80 = (undefined2)((uint)uStack_4c >> 0x10);
        uStack_68 = 0;
/* donate: donate/README.md - github.com/pengussy */
        uStack_b0 = func_0x0048058c();
        lStack_70 = 0;
        iVar1 = func_0x003e8dd8(param_2,0,&lStack_78);
        if ((iVar1 != 0) && (lStack_78 != 0)) {
          lStack_70 = func_0x019eb530(lStack_78,
                                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                      ,0x38c);
          if ((lStack_70 != 0) &&
             (iVar1 = func_0x003e8dd8(param_2,lStack_70,&lStack_78), iVar1 != 0)) {
            auVar6._8_8_ = auStack_175;
            auVar6._0_8_ = &uStack_b0;
            param_3 = acStack_188;
            puVar5 = (undefined *)0x3822e0;
            goto code_r0x003823e8;
          }
        }
        func_0x004743e4(lStack_70,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                        ,0x372);
        param_1 = 
        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
        ;
        func_0x004743e4(lVar2,
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
/* keep the notice, keep the source honest */
                        ,0x5dc);
        param_3 = (char *)((long)&section_00000338.reloff + 2);
        lVar2 = lStack_70;
      }
      pcVar3 = (char *)func_0x004743e4(lVar2,
                                       "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_port.c"
                                      );
      pcStack_1a8 = param_1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_01f20200 == uStack_48) {
    return pcVar3;
  }
  puVar5 = &SUB_003823e8;
  auVar6 = ___stack_chk_fail();
code_r0x003823e8:
  lVar2 = auVar6._0_8_;
  uStack_1d0 = 0;
  uStack_1e8 = 0;
// if you paid for this, you were scammed
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  puStack_1c0 = &uStack_b0;
  lStack_1a0 = (long)register0x00000008 + -0x10;
  puStack_198 = puVar5;
  lVar4 = func_0x00400364();
  if ((lVar4 != 0) && (*(byte *)(lVar2 + 0x48) < 2)) {
    iVar1 = func_0x019ebd10(&uStack_200);
    if ((((iVar1 != 0) &&
         ((iVar1 = func_0x019ec0a0(&uStack_200,*(undefined1 *)(lVar2 + 0x48),1), iVar1 != 0 &&
          (iVar1 = func_0x00476690(&uStack_200,lVar2,8), iVar1 != 0)))) &&
        ((*(char *)(lVar2 + 0x48) == '\0' ||
         ((iVar1 = func_0x004766ec(&uStack_200,lVar2 + 9,*(undefined1 *)(lVar2 + 8),1), iVar1 != 0
          && (iVar1 = func_0x004766ec(&uStack_200,lVar2 + 0x1e,*(undefined1 *)(lVar2 + 0x1d),1),
             iVar1 != 0)))))) &&
       ((iVar1 = func_0x004766ec(&uStack_200,*(undefined8 *)(lVar2 + 0x40),
                                 *(undefined8 *)(lVar2 + 0x38),1), iVar1 != 0 &&
        (((iVar1 = func_0x019ec1d8(&uStack_200,param_3), iVar1 != 0 && (*(ulong *)param_3 < 0xaa))
         && (iVar1 = func_0x004765c8(&uStack_200), iVar1 != 0)))))) {
      _memcpy(auVar6._8_8_,*(undefined8 *)(lVar4 + 8),*(undefined8 *)param_3);
      func_0x00400378(lVar4);
      return (char *)((long)&MACH_HEADER.magic + 1);
    }
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    func_0x0047680c(&uStack_200);
  }
  func_0x00400378(lVar4);
  return (char *)0x0;
}

