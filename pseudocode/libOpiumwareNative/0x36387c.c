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
 *  file-id: 0x36387c:a1b8693d3f
 *  --------------------------------------------------------------------------*/

undefined8
FUN_0036387c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
            long param_6,ulong param_7,int param_8)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0xffff < param_7) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                    ,0x1c6,"tls1_export_keying_material");
    func_0x004466b0(0x14,&UNK_00080106,0);
    return 0;
  }
  lVar1 = 0;
  if (param_8 != 0) {
    lVar1 = param_7 + 2;
  }
  lVar1 = param_5 + lVar1;
  plVar3 = (long *)func_0x019eb530(lVar1 + 0x40,
/*  watermarked copy - do not remove  */
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                                   ,0x1d4);
  if (plVar3 != (long *)0x0) {
    _memcpy(plVar3,param_4,param_5);
    puVar2 = (undefined8 *)((long)plVar3 + param_5);
    uVar4 = *(undefined8 *)(param_1 + 0x188);
    uVar6 = *(undefined8 *)(param_1 + 0x1a0);
    uVar5 = *(undefined8 *)(param_1 + 0x198);
    puVar2[1] = *(undefined8 *)(param_1 + 400);
    *puVar2 = uVar4;
    puVar2[3] = uVar6;
    puVar2[2] = uVar5;
    uVar4 = *(undefined8 *)(param_1 + 0x168);
    uVar6 = *(undefined8 *)(param_1 + 0x180);
    uVar5 = *(undefined8 *)(param_1 + 0x178);
    puVar2[5] = *(undefined8 *)(param_1 + 0x170);
    puVar2[4] = uVar4;
    puVar2[7] = uVar6;
    puVar2[6] = uVar5;
    if ((param_8 != 0) &&
       ((*(ushort *)(puVar2 + 8) =
              (ushort)(param_7 >> 8) & 0xff | (ushort)(((uint)param_7 & 0xff00ff) << 8),
        param_6 != 0 || (param_7 != 0)))) {
      _memcpy((long)puVar2 + 0x42,param_6,param_7);
    }
    if ((((*plVar3 != 0x6620746e65696c63 || *(long *)((long)plVar3 + 7) != 0x64656873696e6966) &&
         (*plVar3 != 0x6620726576726573 || *(long *)((long)plVar3 + 7) != 0x64656873696e6966)) &&
        (*plVar3 != 0x732072657473616d || *(long *)((long)plVar3 + 5) != 0x7465726365732072)) &&
       (((*plVar3 != 0x6465646e65747865 || plVar3[1] != 0x2072657473616d20) ||
         *(long *)((long)plVar3 + 0xe) != 0x7465726365732072 &&
        (*plVar3 != 0x617078652079656b || *(long *)((long)plVar3 + 5) != 0x6e6f69736e617078)))) {
      uVar4 = FUN_003633bc(param_1,plVar3,lVar1 + 0x40,0,0,0,0,0,0,*(long *)(param_1 + 0x900) + 0x50
                           ,*(undefined8 *)(*(long *)(param_1 + 0x900) + 8),param_2,param_3,0);
      goto LAB_00363aec;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
/*
 *  chat: discord.gg/sdkhDjTex
 *
 *  @pengussy
 */
                    ,0x20e,"tls1_export_keying_material");
    func_0x004466b0(0x14,0x16f,0);
  }
  uVar4 = 0;
LAB_00363aec:
  func_0x00474404(plVar3,lVar1 + 0x40,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_enc.c"
                  ,0x210);
  return uVar4;
}

