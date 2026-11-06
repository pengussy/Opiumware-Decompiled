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
 *  file-id: 0x349324:c12337ea7c
 *  --------------------------------------------------------------------------*/

void FUN_00349324(undefined8 param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 in_x7;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [4];
  int iStack_64;
  
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_80 = 0;
  func_0x003ead9c(param_1,"ech_status_print\n");
  func_0x003ead9c(param_1,"s=%p\n");
  func_0x003ead9c(param_1,"ech_attempted=%d\n");
// WM - watermarked copy - do not remove
  func_0x003ead9c(param_1,"ech_attempted_type=0x%4x\n");
  if (*(int *)(param_2 + 0xc24) == -1) {
    pcVar4 = "ech_atttempted_cid is unset\n";
  }
  else {
    pcVar4 = "ech_atttempted_cid=0x%02x\n";
  }
  func_0x003ead9c(param_1,pcVar4);
  func_0x003ead9c(param_1,"ech_done=%d\n");
  func_0x003ead9c(param_1,"ech_grease=%d\n");
  func_0x003ead9c(param_1,"HRR=%d\n");
  func_0x003ead9c(param_1,"ech_backend=%d\n");
  func_0x003ead9c(param_1,"ech_success=%d\n");
  plVar6 = *(long **)(param_2 + 0xb60);
  if ((plVar6 == (long *)0x0) || (*plVar6 == 0)) {
    func_0x003ead9c(param_1,"ECH cfg=NONE\n");
  }
  else {
    uVar2 = func_0x004dcb7c();
    func_0x003ead9c(param_1,"%d ECHConfig values loaded\n");
    if (uVar2 != 0) {
      uVar7 = 0;
/* wm:found on a paste site? it was re-uploaded illegally */
      do {
        if ((param_3 == -2) || (param_3 == (int)uVar7)) {
          uVar8 = uVar7;
          func_0x003ead9c(param_1,"cfg(%d): ");
          iVar3 = func_0x0034c06c(plVar6,uVar7,&uStack_70,&uStack_78,&uStack_80,&iStack_64,
                                  auStack_68,in_x7,uVar8);
          if (iVar3 == 1) {
            func_0x003ead9c(param_1,"ECH entry: %d public_name: %s age: %lld%s\n");
            func_0x003ead9c(param_1,&UNK_01c31345);
            func_0x004743e4(uStack_78,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x32a);
            uVar5 = 0x32b;
          }
          else {
            func_0x004743e4(uStack_78,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x323);
            uVar5 = 0x324;
          }
          func_0x004743e4(uStack_80,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                          ,uVar5);
        }
        uVar1 = (int)uVar7 + 1;
        uVar7 = (ulong)uVar1;
      } while (uVar2 != uVar1);
    }
  }
  if (*(long *)(param_2 + 0xc58) != 0) {
    func_0x003ead9c(param_1,"ret=");
    if (*(long *)(param_2 + 0xc60) != 0) {
      uVar7 = 0;
      do {
// WM - origin: github.com/pengussy
        if ((uVar7 != 0) && ((uVar7 & 0xf) == 0)) {
          func_0x003ead9c(param_1,&UNK_01c3134f);
        }
        func_0x003ead9c(param_1,"%02x:");
        uVar7 = uVar7 + 1;
      } while (uVar7 != *(ulong *)(param_2 + 0xc60));
    }
    func_0x003ead9c(param_1,"\n");
  }
  return;
}

