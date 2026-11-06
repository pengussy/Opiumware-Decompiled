/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3dd954:95dda1ee99
 */

/* WARNING: Possible PIC construction at 0x003dd984: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003dd988) */

void FUN_003dd954(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = (uint)*(undefined8 *)(param_1 + 0x10);
  if ((uVar2 >> 4 & 1) == 0) {
    param_1 = *(long *)(param_1 + 8);
    uVar1 = 0x16f;
  }
  else {
    if ((uVar2 >> 7 & 1) != 0) {
      return;
    }
    uVar1 = 0x171;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/asn1_lib.c"
               ,uVar1);
    return;
  }
/*  origin: github.com/pengussy  */
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

