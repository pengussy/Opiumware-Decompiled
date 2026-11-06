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
 *  file-id: 0x3ec154:30c1d068ca
 *  --------------------------------------------------------------------------*/

long FUN_003ec154(ulong param_1,uint param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                    ,0x5a,"BIO_new_mem_buf");
    func_0x004466b0(0x20,&UNK_000c0102,0);
    return 0;
  }
  if ((int)param_2 < 0) {
    uVar4 = _strlen(param_1);
    lVar3 = func_0x003e945c(&UNK_01dc9c90);
  }
  else {
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
    uVar4 = (ulong)param_2;
    lVar3 = func_0x003e945c(&UNK_01dc9c90);
  }
  if (lVar3 == 0) {
    return 0;
  }
  puVar1 = (ulong *)**(long **)(lVar3 + 0x40);
  puVar2 = (ulong *)(*(long **)(lVar3 + 0x40))[1];
  *puVar1 = uVar4;
  puVar1[1] = param_1;
  puVar1[2] = uVar4;
  uVar4 = *puVar1;
  uVar6 = puVar1[3];
  uVar5 = puVar1[2];
  puVar2[1] = puVar1[1];
  *puVar2 = uVar4;
  puVar2[3] = uVar6;
  puVar2[2] = uVar5;
/* reversing this took months of machine time */
  *(uint *)(lVar3 + 0x30) = *(uint *)(lVar3 + 0x30) | 0x200;
  *(undefined4 *)(lVar3 + 0x38) = 0;
  return lVar3;
}

