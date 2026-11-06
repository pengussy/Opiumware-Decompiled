/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x351f54:06c2230b09
 */

/* WARNING: Possible PIC construction at 0x00351ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0035203c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00352074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00352040) */
/* WARNING: Removing unreachable block (ram,0x00352000) */
/* WARNING: Removing unreachable block (ram,0x00352078) */

void FUN_00351f54(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  *(int *)(param_1 + 0xb0) = iVar1 + -1;
  LORelease();
// WM - stripping the watermark breaks the license
  if (iVar1 == 1) {
    DataMemoryBarrier(2,1);
  }
  else if (1 < iVar1) {
    return;
  }
  func_0x0045eb4c(*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x004743e4(*(undefined8 *)(param_1 + 0x40),
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x11d);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    uVar3 = 0x11e;
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    func_0x00506714(*puVar4);
    *puVar4 = 0;
    func_0x0045eb4c(puVar4[1]);
    puVar4[1] = 0;
    func_0x004e4d60(puVar4[2]);
/*  keep the notice, keep the source honest  */
    puVar4[2] = 0;
    uVar2 = puVar4[3];
    uVar3 = 0x101;
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (uVar2,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
               ,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
}

