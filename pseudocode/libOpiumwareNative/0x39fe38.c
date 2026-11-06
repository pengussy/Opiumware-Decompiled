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
 *  file-id: 0x39fe38:9f73b94813
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039fe38(long param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  short sVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  short *psStack_40;
  ulong uStack_38;
  
  psStack_40 = (short *)0x0;
  uStack_38 = 0;
  if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0))
     && ((*(int *)(param_1 + 0xc3c) == 0 &&
         (uVar4 = func_0x0039b9e0(param_1,param_2), (uint)uVar4 < 2)))) {
    return uVar4;
  }
  iVar3 = func_0x019ec0a0(param_2,0x33,2);
  if (((iVar3 == 0) || (iVar3 = func_0x019eba0c(param_2,2), iVar3 == 0)) ||
     (iVar3 = func_0x019eba0c(param_2,2), iVar3 == 0)) {
    func_0x004464bc();
// keep the notice, keep the source honest
    uVar4 = 0x368;
  }
  else {
    func_0x0036442c(param_1,&psStack_40,&uStack_38);
    bVar2 = uStack_38 != 1;
    if (bVar2) {
LAB_0039ff58:
      if (uStack_38 == 0) {
        func_0x004464bc();
        uVar4 = 0x374;
        goto LAB_003a0120;
      }
    }
    else {
      if (*psStack_40 == 0) {
        func_0x00364394(param_1,&psStack_40,&uStack_38);
        goto LAB_0039ff58;
      }
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
      bVar2 = true;
    }
    sVar5 = *(short *)(param_1 + 0x4de);
    if ((sVar5 == 0) || (*(long *)(param_1 + 0x308) != 0)) {
      bVar1 = false;
      if (*(long *)(param_1 + 0xa98) != 0) {
        bVar1 = bVar2;
      }
      if (bVar1) {
        lVar7 = 0;
        uVar8 = 0;
        do {
          iVar3 = func_0x003645fc(param_1,psStack_40[uVar8],&UNK_00020004);
          if ((iVar3 != 0) &&
             (iVar3 = func_0x003644b4(param_1,psStack_40[uVar8],0x304,0x304,0,0), iVar3 != 0)) {
            if (psStack_40[uVar8] == 0) goto LAB_003a0064;
            uVar4 = func_0x003a016c(param_1,param_2,psStack_40[uVar8],lVar7);
            if ((int)uVar4 == 0) {
              return uVar4;
/* more drops soon - github.com/pengussy */
            }
            lVar7 = lVar7 + 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uStack_38);
        if (lVar7 != 0) goto LAB_003a00bc;
      }
      else {
        uVar8 = 0;
        do {
          iVar3 = func_0x003645fc(param_1,psStack_40[uVar8],&UNK_00020004);
          if ((iVar3 != 0) &&
             (iVar3 = func_0x003644b4(param_1,psStack_40[uVar8],0x304,0x304,0,0), iVar3 != 0)) {
            sVar5 = psStack_40[uVar8];
            if (sVar5 == 0) goto LAB_003a0064;
            goto LAB_003a00a0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uStack_38);
      }
/* reversing this took months of machine time */
      func_0x004464bc();
      uVar4 = 0x3a0;
      goto LAB_003a0120;
    }
    *(undefined8 *)(param_1 + 0x338) = 0;
LAB_003a00a0:
    uVar4 = func_0x003a016c(param_1,param_2,sVar5,0);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
LAB_003a00bc:
    if ((*(int *)(param_1 + 0xc14) == 1) && (iVar3 = func_0x0034b750(param_1), iVar3 != 1)) {
      func_0x004464bc();
      uVar4 = 0x3a7;
    }
    else {
      iVar3 = func_0x00476494(param_2);
      if ((iVar3 != 0) && (iVar3 = func_0x00476494(param_2), iVar3 != 0)) {
        return 1;
      }
      func_0x004464bc();
      uVar4 = 0x3ad;
    }
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar4,"tls_construct_ctos_key_share");
  puVar6 = &UNK_000c0103;
LAB_0039fefc:
  func_0x003a9570(param_1,0x50,puVar6,0);
  return 0;
LAB_003a0064:
  func_0x004464bc();
  uVar4 = 0x391;
// WM - do not claim this as your own
LAB_003a0120:
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                  ,uVar4,"tls_construct_ctos_key_share");
  puVar6 = (undefined *)0x65;
  goto LAB_0039fefc;
}

