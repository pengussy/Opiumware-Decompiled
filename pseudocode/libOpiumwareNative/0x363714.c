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
 *  file-id: 0x363714:17a838f858
 *  --------------------------------------------------------------------------*/

undefined8
FUN_00363714(long param_1,undefined8 param_2,undefined8 param_3,segment_command **param_4,
            segment_command *param_5,long param_6,ulong param_7,int param_8)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  segment_command *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  segment_command *psStack_d0;
  segment_command *apsStack_c8 [16];
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((*(byte *)(*(long *)(param_1 + 0x900) + 0x378) & 1) == 0) {
    param_4 = (segment_command **)(param_1 + 0x188);
    param_8 = (int)param_1 + 0x168;
    param_3 = 0xd;
    psVar7 = &segment_command_00000020;
    param_6 = 0;
    param_7 = 0;
    uVar4 = FUN_003633bc(param_1,"master secret",0xd,param_4);
    if ((int)uVar4 != 0) {
LAB_00363820:
      param_5->cmd = 0x30;
      param_5->cmdsize = 0;
      uVar4 = 1;
    }
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return uVar4;
    }
  }
  else {
    psVar7 = param_5;
    iVar3 = FUN_0034d670(param_1,1);
    if (iVar3 != 0) {
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
      param_4 = &psStack_d0;
      param_3 = 0x80;
      iVar3 = func_0x0035e10c(param_1,apsStack_c8,0x80,param_4);
      if (iVar3 != 0) {
        param_4 = apsStack_c8;
        param_3 = 0x16;
        param_6 = 0;
        param_7 = 0;
        param_8 = 0;
        psVar7 = psStack_d0;
        iVar3 = FUN_003633bc(param_1,"extended master secret",0x16,param_4);
        if (iVar3 != 0) {
          func_0x0046eb00(apsStack_c8,psStack_d0);
          goto LAB_00363820;
        }
      }
    }
    uVar4 = 0;
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
      return 0;
    }
  }
  auVar10 = ___stack_chk_fail(uVar4);
  lVar5 = auVar10._0_8_;
  if (0xffff < param_7) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                    ,0x1c6,"tls1_export_keying_material");
    func_0x004466b0(0x14,&UNK_00080106,0);
    return 0;
  }
  lVar2 = 0;
  if (param_8 != 0) {
    lVar2 = param_7 + 2;
  }
  plVar6 = (long *)func_0x019eb530(psVar7->segname + lVar2 + 0x38,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
// thanks for reading - discord.gg/sdkhDjTex
                                   ,0x1d4);
  if (plVar6 != (long *)0x0) {
    _memcpy(plVar6,param_4,psVar7);
    puVar1 = (undefined8 *)((long)plVar6 + (long)psVar7);
    uVar4 = *(undefined8 *)(lVar5 + 0x188);
    uVar9 = *(undefined8 *)(lVar5 + 0x1a0);
    uVar8 = *(undefined8 *)(lVar5 + 0x198);
    puVar1[1] = *(undefined8 *)(lVar5 + 400);
    *puVar1 = uVar4;
    puVar1[3] = uVar9;
    puVar1[2] = uVar8;
    uVar4 = *(undefined8 *)(lVar5 + 0x168);
    uVar9 = *(undefined8 *)(lVar5 + 0x180);
    uVar8 = *(undefined8 *)(lVar5 + 0x178);
    puVar1[5] = *(undefined8 *)(lVar5 + 0x170);
    puVar1[4] = uVar4;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    if ((param_8 != 0) &&
       ((*(ushort *)(puVar1 + 8) =
              (ushort)(param_7 >> 8) & 0xff | (ushort)(((uint)param_7 & 0xff00ff) << 8),
        param_6 != 0 || (param_7 != 0)))) {
      _memcpy((long)puVar1 + 0x42,param_6,param_7);
    }
    if ((((*plVar6 != 0x6620746e65696c63 || *(long *)((long)plVar6 + 7) != 0x64656873696e6966) &&
         (*plVar6 != 0x6620726576726573 || *(long *)((long)plVar6 + 7) != 0x64656873696e6966)) &&
        (*plVar6 != 0x732072657473616d || *(long *)((long)plVar6 + 5) != 0x7465726365732072)) &&
       (((*plVar6 != 0x6465646e65747865 || plVar6[1] != 0x2072657473616d20) ||
         *(long *)((long)plVar6 + 0xe) != 0x7465726365732072 &&
        (*plVar6 != 0x617078652079656b || *(long *)((long)plVar6 + 5) != 0x6e6f69736e617078)))) {
      uVar4 = FUN_003633bc(lVar5,plVar6,psVar7->segname + lVar2 + 0x38,0,0,0,0,0,0,
                           *(long *)(lVar5 + 0x900) + 0x50,
                           *(undefined8 *)(*(long *)(lVar5 + 0x900) + 8),auVar10._8_8_,param_3,0);
/*  no support for modified copies  */
      goto LAB_00363aec;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                    ,0x20e,"tls1_export_keying_material");
    func_0x004466b0(0x14,0x16f,0);
  }
  uVar4 = 0;
LAB_00363aec:
  func_0x00474404(plVar6,psVar7->segname + lVar2 + 0x38,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                  ,0x210);
  return uVar4;
}

