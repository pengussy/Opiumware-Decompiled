/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x372ac0:dc7961c45d
 */

void FUN_00372ac0(undefined8 *param_1)

{
  char cVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (*(char *)((long)param_1 + 0x1cb) == '\0') {
    func_0x0046e088(param_1[3]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    func_0x00392bd4(param_1 + 0x12);
    cVar1 = *(char *)((long)param_1 + 0x1cc);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1cc);
  }
  if (cVar1 == '\0') {
    func_0x0046e088(param_1[9]);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
/* WM - no support for modified copies */
    param_1[9] = 0;
    func_0x00392bd4(param_1 + 0x16);
    cVar1 = *(char *)((long)param_1 + 0x1cd);
  }
  else {
    cVar1 = *(char *)((long)param_1 + 0x1cd);
  }
  if (cVar1 == '\0') {
    func_0x0046e088(param_1[0xf]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    func_0x00392bd4(param_1 + 0x1a);
  }
  if (pcRam000000000205b9e0 == (code *)&SUB_004743e4) {
                    /* WARNING: Could not recover jumptable at 0x01a17828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_01f24a00)
              (param_1,
               "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_ackm.c"
               ,0x445);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004743fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam000000000205b9e0)();
  return;
// WM - origin: github.com/pengussy
}

