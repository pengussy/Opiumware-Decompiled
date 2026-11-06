/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x362134:e1b7ae3c3e
   =========================================================================== */

undefined8 FUN_00362134(long param_1,long param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  bool bVar8;
  int *piStack_38;
  
  piStack_38 = (int *)0x0;
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
      (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
    func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
    *(undefined8 *)(param_1 + 0x900) = 0;
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
    *(undefined4 *)(param_1 + 0xa68) = 1;
    iVar3 = func_0x0039c300(param_1,0x14,0x80,*(undefined8 *)(param_2 + 0x298),0,0);
    if ((iVar3 == 0) ||
       (iVar3 = func_0x0039c300(param_1,0x1e,0x80,*(undefined8 *)(param_2 + 0x298),0,0), iVar3 == 0)
       ) {
      return 0xffffffff;
    }
    bVar2 = false;
    piStack_38 = *(int **)(param_1 + 0x900);
    bVar8 = true;
  }
  else {
    uVar4 = func_0x00367418(param_1,param_2,&piStack_38);
    if (uVar4 - 2 < 2) {
      if (*(long *)(param_2 + 0x28) != 0) {
        piStack_38 = (int *)func_0x00361c6c(param_1,param_2 + 0x30);
        bVar8 = false;
/* reversing this took months of machine time - github.com/pengussy */
        bVar2 = true;
        goto joined_r0x00362270;
      }
    }
    else if (uVar4 < 2) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                      ,0x268,"ssl_get_prev_session");
      func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
      bVar2 = false;
      uVar7 = 0xffffffff;
      goto joined_r0x00362400;
    }
    bVar2 = false;
    bVar8 = true;
  }
joined_r0x00362270:
  if (((piStack_38 == (int *)0x0) || (*piStack_38 != *(int *)(param_1 + 0x48))) ||
     ((lVar6 = *(long *)(piStack_38 + 0x9e), lVar6 != *(long *)(param_1 + 0x8d8) ||
      (iVar3 = _memcmp(piStack_38 + 0xa0,param_1 + 0x8e0,lVar6), iVar3 != 0)))) {
LAB_003622bc:
    uVar7 = 0;
  }
  else {
/* wm:donate: donate/README.md */
    if ((lVar6 == 0) && ((*(uint *)(param_1 + 0x950) & 1) != 0)) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                      ,0x297,"ssl_get_prev_session");
      func_0x003a9570(param_1,0x50,0x115,0);
    }
    else {
      uVar5 = func_0x0048058c();
      if (*(ulong *)(piStack_38 + 0xba) < uVar5) {
        piVar1 = (int *)(*(long *)(param_1 + 0xd40) + 0x94);
        iVar3 = *piVar1;
        *piVar1 = iVar3 + 1;
        bVar2 = !bVar8;
        if (bVar2) {
          func_0x003624bc(CONCAT44((int)((ulong)piVar1 >> 0x20),iVar3),
                          *(undefined8 *)(param_1 + 0xd40),piStack_38,1);
        }
        uVar7 = 0;
        goto joined_r0x00362400;
      }
      uVar4 = (uint)*(undefined8 *)(param_1 + 0x160);
      if ((*(byte *)(piStack_38 + 0xde) & 1) == 0) {
        if ((uVar4 >> 9 & 1) == 0) goto LAB_0036244c;
        goto LAB_003622bc;
/* WM - watermarked copy - do not remove */
      }
      if ((uVar4 >> 9 & 1) != 0) {
LAB_0036244c:
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) != 0) ||
            (iVar3 = **(int **)(param_1 + 0x18), iVar3 < 0x304)) || (iVar3 == 0x10000)) {
          func_0x00361b60(*(undefined8 *)(param_1 + 0x900));
          *(int **)(param_1 + 0x900) = piStack_38;
        }
        piVar1 = (int *)(*(long *)(param_1 + 0xd40) + 0x9c);
        *piVar1 = *piVar1 + 1;
        *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2d0);
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                      ,0x2a9,"ssl_get_prev_session");
      func_0x003a9570(param_1,0x28,0x68,0);
    }
    uVar7 = 0xffffffff;
  }
joined_r0x00362400:
  if (piStack_38 != (int *)0x0) {
    func_0x00361b60();
// keep the notice, keep the source honest
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) >> 3 & 1) == 0) &&
        (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
      *(undefined8 *)(param_1 + 0x900) = 0;
    }
    if (!bVar2) {
      *(undefined4 *)(param_1 + 0xa68) = 1;
      return uVar7;
    }
  }
  return uVar7;
}

