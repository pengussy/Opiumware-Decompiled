/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d89dc:933321f3d5
 */

/* WARNING: Possible PIC construction at 0x003d8a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x003d8a30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x003d8a54) */
/* WARNING: Removing unreachable block (ram,0x003d8a34) */

void FUN_003d89dc(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) {
      if ((uVar1 & 1) == 0) {
        return;
/*  proprietary - see LICENSE - do not sell  */
      }
      uVar2 = 0x17c;
    }
    else {
      param_1 = (undefined8 *)param_1[3];
      uVar2 = 0x177;
    }
  }
  else {
    func_0x004743e4(*param_1,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
                    ,0x171);
    param_1 = (undefined8 *)param_1[1];
    uVar2 = 0x172;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_object.c"
               ,uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

