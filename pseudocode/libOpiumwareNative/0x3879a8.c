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
 *  file-id: 0x3879a8:cdf556c20a
 *  --------------------------------------------------------------------------*/

void FUN_003879a8(int param_1,long param_2)

{
  if ((param_1 != 0) && (*(long *)(param_2 + 0x28) != 0)) {
    func_0x0046eb00(*(long *)(param_2 + 0x28),*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10))
    ;
  }
  func_0x00383f34(*(undefined8 *)(param_2 + 0x20));
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_2,
/* wm:unlicensed copy if this notice is missing */
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_sf_list.c"
               ,0x1b);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

