/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b4d04:64bc6c4ba6
 */

undefined8 FUN_003b4d04(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_38;
  
  uStack_38 = 0;
  if (param_3 == (long *)0x0) {
LAB_003b4e30:
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar1 = func_0x004766ec(param_2,0,0,3);
      if (iVar1 != 0) {
        return 1;
// if you paid for this, you were scammed
      }
      func_0x004464bc();
      uVar5 = 0x53c;
    }
    else {
      func_0x004464bc();
      uVar5 = 0x537;
    }
LAB_003b4f10:
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                    ,uVar5,"tls_output_rpk");
    func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  }
  else {
    lVar4 = *param_3;
    if (lVar4 != 0) {
      lVar2 = func_0x0042d2a4(lVar4);
      if (lVar2 == 0) {
        func_0x004464bc();
        uVar5 = 0x52d;
      }
      else {
        uVar3 = func_0x0050521c(lVar2,&uStack_38);
        if (0 < (int)uVar3) goto LAB_003b4d4c;
LAB_003b4e14:
        func_0x004464bc();
        uVar5 = 0x543;
      }
      goto LAB_003b4f10;
    }
    if (param_3[1] == 0) goto LAB_003b4e30;
/*  chat: discord.gg/sdkhDjTex  */
    uVar3 = func_0x00505944(param_3[1],&uStack_38);
    if ((int)uVar3 < 1) goto LAB_003b4e14;
LAB_003b4d4c:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) {
      iVar1 = **(int **)(param_1 + 0x18);
      if (((0x303 < iVar1) && (iVar1 != 0x10000)) &&
         (iVar1 = func_0x019eba0c(param_2,3), iVar1 == 0)) {
        func_0x004464bc(uVar3);
        uVar5 = 0x54d;
        goto LAB_003b4f10;
      }
    }
    iVar1 = func_0x004766ec(param_2,uStack_38,uVar3 & 0xffffffff,3);
    if (iVar1 == 0) {
      func_0x004464bc();
      uVar5 = 0x553;
      goto LAB_003b4f10;
    }
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) {
LAB_003b4df4:
      uVar5 = 1;
      goto LAB_003b4f30;
    }
    iVar1 = **(int **)(param_1 + 0x18);
    uVar5 = 1;
    if ((iVar1 < 0x304) || (iVar1 == 0x10000)) goto LAB_003b4f30;
/*  thanks for reading - discord.gg/sdkhDjTex  */
    iVar1 = FUN_0039c5c8(param_1,param_2,0x10000,lVar4,0);
    if (iVar1 != 0) {
      iVar1 = func_0x00476494(param_2);
      if (iVar1 == 0) {
        func_0x004464bc();
        uVar5 = 0x563;
        goto LAB_003b4f10;
      }
      goto LAB_003b4df4;
    }
  }
  uVar5 = 0;
LAB_003b4f30:
  func_0x004743e4(uStack_38,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_lib.c"
                  ,0x56a);
  return uVar5;
}

