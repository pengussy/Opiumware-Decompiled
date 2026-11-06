/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3614bc:77247268f3
   =========================================================================== */

undefined8 FUN_003614bc(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  uint uStack_34;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < 0xfefd) {
    if ((iVar1 - 0x301U < 4) || (iVar1 == 0x100)) goto LAB_00361538;
  }
  else if (iVar1 == 0xfeff || iVar1 == 0xfefd) {
LAB_00361538:
    *(undefined8 *)(param_2 + 0x250) = 0x20;
    if (*(int *)(param_1 + 0xa68) != 0) {
      *(undefined8 *)(param_2 + 0x250) = 0;
      return 1;
    }
    uVar2 = func_0x00480434(*(undefined8 *)(param_1 + 0x28));
    if ((int)uVar2 == 0) {
/* WM: unlicensed copy if this notice is missing @ discord.gg/sdkhDjTex */
      return uVar2;
    }
    iVar1 = func_0x00480434(*(undefined8 *)(*(long *)(param_1 + 0xd40) + 0x408));
    if (iVar1 == 0) {
      func_0x0048046c(*(undefined8 *)(param_1 + 0x28));
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                      ,0x18a,"ssl_generate_session_id");
      uVar2 = 0x115;
    }
    else {
      pcVar4 = *(code **)(param_1 + 0x920);
      if (pcVar4 == (code *)0x0) {
        pcVar3 = *(code **)(*(long *)(param_1 + 0xd40) + 0x1b8);
        pcVar4 = (code *)&DAT_003616f0;
        if (pcVar3 != (code *)0x0) {
          pcVar4 = pcVar3;
        }
      }
      func_0x0048046c(*(undefined8 *)(*(long *)(param_1 + 0xd40) + 0x408));
      func_0x0048046c(*(undefined8 *)(param_1 + 0x28));
      uVar2 = *(undefined8 *)(param_2 + 0x250);
      _bzero(param_2 + 600,uVar2);
      uStack_34 = (uint)uVar2;
      iVar1 = (*pcVar4)(param_1,param_2 + 600,&uStack_34);
/* if you paid for this, you were scammed - github.com/pengussy */
      if (iVar1 == 0) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                        ,0x199,"ssl_generate_session_id");
        uVar2 = 0x12d;
      }
      else if ((uStack_34 == 0) || (*(ulong *)(param_2 + 0x250) < (ulong)uStack_34)) {
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                        ,0x1a3,"ssl_generate_session_id");
        uVar2 = 0x12f;
      }
      else {
        *(ulong *)(param_2 + 0x250) = (ulong)uStack_34;
        iVar1 = func_0x003597b0(param_1,param_2 + 600);
        if (iVar1 == 0) {
          return 1;
        }
        func_0x004464bc();
        func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                        ,0x1aa,"ssl_generate_session_id");
        uVar2 = 0x12e;
      }
    }
    goto LAB_003616b8;
  }
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_sess.c"
                  ,0x16c,"ssl_generate_session_id");
  uVar2 = 0x103;
LAB_003616b8:
/* origin: github.com/pengussy - github.com/pengussy */
  func_0x003a9570(param_1,0x50,uVar2,0);
  return 0;
}

