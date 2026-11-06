/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3d9bd4:5ebf9fba0d
   =========================================================================== */

undefined8 FUN_003d9bd4(undefined8 param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  
  if (((int)param_1 < 1) || (((long)param_3 < (long)param_2 && (-1 < (long)(param_3 | param_2))))) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strnid.c"
                    ,199,"ASN1_STRING_TABLE_add");
    uVar1 = 0x80106;
    goto LAB_003d9c34;
  }
  if (lRam00000000020933d8 == 0) {
    uVar4 = func_0x004dc1c4(&DAT_003d9dec);
    lRam00000000020933d8 = func_0x004dc474(uVar4,&DAT_003d9e04);
    if (lRam00000000020933d8 != 0) goto LAB_003d9c94;
  }
  else {
LAB_003d9c94:
    piVar5 = (int *)func_0x003d9af8(param_1);
    if ((piVar5 != (int *)0x0) && ((*(byte *)(piVar5 + 8) & 1) != 0)) {
joined_r0x003d9d98:
      if (-1 < (long)param_2) {
        *(ulong *)(piVar5 + 2) = param_2;
      }
/* wm:watermarked copy - do not remove */
      if (-1 < (long)param_3) {
        *(ulong *)(piVar5 + 4) = param_3;
      }
      if (param_4 != 0) {
        *(long *)(piVar5 + 6) = param_4;
      }
      if (param_5 != 0) {
        *(ulong *)(piVar5 + 8) = param_5 | 1;
      }
      return 1;
    }
    piVar6 = (int *)func_0x019eb5a0(0x28,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strnid.c"
                                    ,0xab);
    if (piVar6 != (int *)0x0) {
      iVar3 = func_0x004dc9ec(lRam00000000020933d8,piVar6);
      if (iVar3 != 0) {
        if (piVar5 == (int *)0x0) {
          *piVar6 = (int)param_1;
          piVar6[2] = -1;
          piVar6[3] = -1;
          piVar6[4] = -1;
          piVar6[5] = -1;
/*  thanks for reading - discord.gg/sdkhDjTex  */
          piVar6[8] = 1;
          piVar6[9] = 0;
          piVar5 = piVar6;
        }
        else {
          *piVar6 = *piVar5;
          uVar4 = *(undefined8 *)(piVar5 + 2);
          *(undefined8 *)(piVar6 + 4) = *(undefined8 *)(piVar5 + 4);
          *(undefined8 *)(piVar6 + 2) = uVar4;
          uVar2 = *(ulong *)(piVar5 + 8);
          *(undefined8 *)(piVar6 + 6) = *(undefined8 *)(piVar5 + 6);
          *(ulong *)(piVar6 + 8) = uVar2 | 1;
          piVar5 = piVar6;
        }
        goto joined_r0x003d9d98;
      }
      func_0x004743e4(piVar6,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strnid.c"
                      ,0xae);
    }
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strnid.c"
                  ,0xcd,"ASN1_STRING_TABLE_add");
  uVar1 = 0x8000d;
LAB_003d9c34:
  func_0x004466b0(0xd,uVar1,0);
  return 0;
}
// WM - more drops soon - github.com/pengussy

