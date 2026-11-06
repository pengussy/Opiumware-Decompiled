/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3b0470:be846cc5bb
 */

undefined8 FUN_003b0470(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  lVar3 = func_0x00355fa4(param_1,param_2,0);
  if (lVar3 == 0) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,0x671,"set_client_ciphersuite");
    uVar8 = 0xf8;
  }
  else {
    iVar2 = func_0x00366c58(param_1,lVar3,0x10003,1);
    if (iVar2 == 0) {
      uVar4 = func_0x0035c280(param_1);
      iVar2 = func_0x004dc79c(uVar4,lVar3);
      if (iVar2 < 0) {
        func_0x004464bc();
        uVar8 = 0x681;
      }
      else {
        piVar5 = *(int **)(param_1 + 0x18);
        uVar1 = *(uint *)(*(long *)(piVar5 + 0x36) + 0x50);
        if (((((uVar1 >> 3 & 1) != 0) || (*piVar5 < 0x304)) || (*piVar5 == 0x10000)) ||
           ((*(long *)(param_1 + 0x300) == 0 ||
            (*(int *)(*(long *)(param_1 + 0x300) + 0x18) == *(int *)(lVar3 + 0x18))))) {
          lVar7 = *(long *)(param_1 + 0x900);
          if (*(long *)(lVar7 + 0x2f8) != 0) {
            *(ulong *)(lVar7 + 0x300) = (ulong)*(uint *)(*(long *)(lVar7 + 0x2f8) + 0x18);
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          }
          if ((*(int *)(param_1 + 0x508) == 0) ||
             (*(ulong *)(lVar7 + 0x300) == (ulong)*(uint *)(lVar3 + 0x18))) {
LAB_003b05a0:
            *(long *)(param_1 + 0x300) = lVar3;
            return 1;
          }
          if ((uVar1 >> 3 & 1) == 0) {
            if ((0x303 < *piVar5) && (*piVar5 != 0x10000)) {
              lVar7 = func_0x00354280(uVar8,*(undefined4 *)(lVar3 + 0x40));
              lVar6 = *(long *)(*(long *)(param_1 + 0x900) + 0x2f8);
              if (lVar6 == 0) {
                func_0x019e7614(param_1);
                return 0;
              }
              if ((lVar7 == 0) ||
                 (lVar6 = func_0x00354280(uVar8,*(undefined4 *)(lVar6 + 0x40)), lVar7 != lVar6)) {
/* WM - donate: donate/README.md */
                func_0x004464bc();
                func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                                ,0x6a2,"set_client_ciphersuite");
                uVar8 = 0xda;
                goto LAB_003b0508;
              }
              goto LAB_003b05a0;
            }
          }
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                          ,0x6ab,"set_client_ciphersuite");
          uVar8 = 0xc5;
          goto LAB_003b0508;
        }
        func_0x004464bc();
        uVar8 = 0x688;
      }
    }
    else {
      func_0x004464bc();
      uVar8 = 0x679;
    }
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/statem_clnt.c"
                    ,uVar8,"set_client_ciphersuite");
    uVar8 = 0x105;
  }
LAB_003b0508:
  func_0x003a9570(param_1,0x2f,uVar8,0);
  return 0;
}

