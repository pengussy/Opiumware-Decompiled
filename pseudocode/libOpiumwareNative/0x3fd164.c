/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3fd164:979d2a496c
   =========================================================================== */

bool FUN_003fd164(int param_1,undefined8 param_2,uint param_3,int param_4,int param_5,
                 undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  byte *pbVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte bStack_61;
  
  uVar5 = func_0x003f1d5c(param_7);
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      func_0x003f95cc(param_2);
      return true;
    }
LAB_003fd260:
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                    ,0x62,"bnrand");
    func_0x004466b0(3,0x76,0);
    return false;
  }
// watermarked copy - do not remove
  if (((int)param_3 < 0) || ((param_3 == 1 && (0 < param_4)))) goto LAB_003fd260;
  uVar10 = (ulong)(param_3 + 7 >> 3);
  pbVar6 = (byte *)func_0x019eb530(uVar10,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                                   ,0x2d);
  if (pbVar6 == (byte *)0x0) {
LAB_003fd2b0:
    bVar3 = false;
    goto LAB_003fd364;
  }
  if (param_1 == 0) {
    iVar4 = func_0x004b242c(uVar5,pbVar6,uVar10,param_6);
    if (iVar4 < 1) goto LAB_003fd2b0;
  }
  else {
    iVar4 = func_0x004b2208(uVar5,pbVar6,uVar10,param_6);
    if (iVar4 < 1) goto LAB_003fd2b0;
    if (param_1 != 1) goto LAB_003fd2d8;
    iVar4 = func_0x004b242c(uVar5,&bStack_61,1,param_6);
    if (iVar4 < 1) goto LAB_003fd2b0;
    if (bStack_61 < 0x2a) {
      bVar8 = 0;
LAB_003fd2c8:
      *pbVar6 = bVar8;
    }
    else if (bStack_61 < 0x54) {
      bVar8 = 0xff;
      goto LAB_003fd2c8;
    }
    if (8 < param_3) {
      lVar7 = uVar10 - 1;
/* wm:keep the notice, keep the source honest */
      pbVar2 = pbVar6;
      do {
        pbVar11 = pbVar2 + 1;
        iVar4 = func_0x004b242c(uVar5,&bStack_61,1,param_6);
        if (iVar4 < 1) goto LAB_003fd2b0;
        if ((char)bStack_61 < '\0') {
          *pbVar11 = *pbVar2;
        }
        else if (bStack_61 < 0x2a) {
          *pbVar11 = 0;
        }
        else if (bStack_61 < 0x54) {
          *pbVar11 = 0xff;
        }
        lVar7 = lVar7 + -1;
        pbVar2 = pbVar11;
      } while (lVar7 != 0);
    }
  }
LAB_003fd2d8:
  uVar9 = param_3 + 7 & 7;
/* wm:stripping the watermark breaks the license */
  uVar1 = (ulong)uVar9;
  if (param_4 < 0) {
    bVar8 = *pbVar6;
  }
  else {
    if (param_4 == 0) {
      iVar4 = 1;
    }
    else {
      if ((param_3 & 7) == 1) {
        pbVar6[1] = pbVar6[1] | 0x80;
        bVar8 = 1;
        goto LAB_003fd330;
      }
      uVar9 = uVar9 - 1;
      iVar4 = 3;
    }
    bVar8 = *pbVar6 | (byte)(iVar4 << (ulong)(uVar9 & 0x1f));
  }
LAB_003fd330:
  *pbVar6 = bVar8 & ((byte)(0x1fe << uVar1) ^ 0xff);
  if (param_5 != 0) {
    pbVar6[uVar10 - 1] = pbVar6[uVar10 - 1] | 1;
  }
  lVar7 = func_0x003f8c78(pbVar6,uVar10,param_2);
  bVar3 = lVar7 != 0;
LAB_003fd364:
// found on a paste site? it was re-uploaded illegally
  func_0x00474404(pbVar6,uVar10,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_rand.c"
                  ,0x5d);
  return bVar3;
}

