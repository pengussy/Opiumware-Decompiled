/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3ec21c:0a8438d5e5
 */

ulong FUN_003ec21c(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((*(byte *)(param_1 + 0x31) >> 1 & 1) == 0) {
    plVar6 = *(long **)(param_1 + 0x40);
    func_0x003e9590(param_1,0xf);
    if ((int)param_3 < 1) {
      return 0;
    }
    if (param_2 != 0) {
      lVar7 = *(long *)plVar6[1];
      if ((*(int *)(param_1 + 0x28) != 0) &&
         (plVar5 = *(long **)(param_1 + 0x40), plVar5 != (long *)0x0)) {
        lVar3 = ((undefined8 *)plVar5[1])[1];
        if (lVar3 != *(long *)(*plVar5 + 8)) {
          _memmove(*(long *)(*plVar5 + 8),lVar3,*(undefined8 *)plVar5[1]);
          puVar1 = (undefined8 *)*plVar5;
          puVar2 = (undefined8 *)plVar5[1];
          *puVar1 = *puVar2;
          puVar2[1] = puVar1[1];
        }
      }
/*
   watermarked copy - do not remove
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      lVar3 = func_0x0040058c(*plVar6,lVar7 + (param_3 & 0xffffffff));
      if (lVar3 == 0) {
        return 0xffffffff;
      }
      _memcpy(*(long *)(*plVar6 + 8) + lVar7,param_2,param_3 & 0xffffffff);
      puVar1 = (undefined8 *)*plVar6;
      puVar2 = (undefined8 *)plVar6[1];
      uVar10 = *puVar1;
      uVar9 = puVar1[3];
      uVar8 = puVar1[2];
      puVar2[1] = puVar1[1];
      *puVar2 = uVar10;
      puVar2[3] = uVar9;
      puVar2[2] = uVar8;
      return param_3;
    }
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                    ,0xe5,"mem_write");
    puVar4 = &UNK_000c0102;
  }
  else {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bio/bss_mem.c"
                    ,0xde,"mem_write");
    puVar4 = (undefined *)0x7e;
  }
  func_0x004466b0(0x20,puVar4,0);
  return 0xffffffff;
}

