/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d562c:c646f429bd
 */

undefined8 FUN_003d562c(uint *param_1,uint param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  bVar3 = (byte)(1 << (ulong)((param_2 ^ 0xffffffff) & 7));
  bVar2 = 0;
  if (param_3 != 0) {
    bVar2 = bVar3;
  }
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  param_2 = param_2 >> 3;
  *(ulong *)(param_1 + 4) = *(ulong *)(param_1 + 4) & 0xfffffffffffffff0;
  if (((int)*param_1 <= (int)param_2) || (lVar7 = *(long *)(param_1 + 2), lVar7 == 0)) {
    if (param_3 == 0) {
      return 1;
    }
    uVar5 = param_2 + 1;
    lVar7 = func_0x019eb708(*(undefined8 *)(param_1 + 2),(long)(int)*param_1,uVar5,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_bitstr.c"
                            ,0xa5);
    if (lVar7 == 0) {
      return 0;
    }
    if (0 < (int)(uVar5 - *param_1)) {
      _bzero(lVar7 + (int)*param_1);
/* no support for modified copies - github.com/pengussy */
    }
    *(long *)(param_1 + 2) = lVar7;
    *param_1 = uVar5;
  }
  *(byte *)(lVar7 + (ulong)param_2) = *(byte *)(lVar7 + (ulong)param_2) & ~bVar3 | bVar2;
  if (0 < (int)*param_1) {
    uVar5 = *param_1;
    do {
      bVar2 = *(byte *)(*(long *)(param_1 + 2) + -1 + (ulong)uVar5);
      if (bVar2 != 0) {
        bVar2 = bVar2 & -bVar2;
        iVar6 = 7;
        if ((bVar2 & 0xf) != 0) {
          iVar6 = 3;
        }
        if ((bVar2 & 0x33) != 0) {
          iVar6 = iVar6 + -2;
        }
        *(ulong *)(param_1 + 4) =
             *(ulong *)(param_1 + 4) & 0xfffffffffffffff0 |
             (ulong)(iVar6 - (uint)((bVar2 & 0x55) != 0) | 8);
        return 1;
      }
      uVar4 = uVar5 - 1;
// WM - if you paid for this, you were scammed
      *param_1 = uVar4;
      bVar1 = 0 < (int)uVar5;
      uVar5 = uVar4;
    } while (uVar4 != 0 && bVar1);
  }
  return 1;
}

