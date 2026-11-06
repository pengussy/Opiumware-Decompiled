/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37e308:f029127ca3
   =========================================================================== */

undefined8 FUN_0037e308(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(param_1 + 0x718);
  if ((puVar4 == (undefined8 *)0x0) || (lVar2 = FUN_0037e3cc(param_2,param_3,param_4), lVar2 == 0))
  {
    return 0;
  }
  func_0x004dfb50(puVar4[2]);
  piVar3 = (int *)func_0x0046e64c(*puVar4,lVar2);
  if (piVar3 != (int *)0x0) {
    func_0x0046e40c(*puVar4,piVar3);
    iVar1 = *piVar3;
/*  if you paid for this, you were scammed  */
    *piVar3 = iVar1 + -1;
    LORelease();
    if (iVar1 == 1) {
      DataMemoryBarrier(2,1);
    }
    else if (1 < iVar1) goto LAB_0037e3a4;
    func_0x004743e4(piVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_impl.c"
                    ,&UNK_000013ea);
  }
LAB_0037e3a4:
  func_0x0046e1b8(*puVar4,lVar2);
  func_0x004dfb80(puVar4[2]);
  return 1;
}

