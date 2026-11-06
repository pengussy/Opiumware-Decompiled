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
 *  file-id: 0x351c40:daca6cb03f
 *  --------------------------------------------------------------------------*/

long * FUN_00351c40(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar2 = (long *)func_0x019eb5a0(0xb8,
                                   "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                                   ,0x61);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar3 = param_1[5];
  plVar2[5] = lVar3;
  lVar3 = func_0x0046f1f4(lVar3,0x28,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                          ,0x6b);
  plVar2[4] = lVar3;
  if (lVar3 == 0) {
    func_0x004743e4(plVar2,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                    ,0x6d);
    return (long *)0x0;
  }
  *plVar2 = lVar3 + (*param_1 - param_1[4]);
  *(undefined4 *)(plVar2 + 0x16) = 1;
  if (param_1[1] != 0) {
    iVar1 = func_0x00359798();
    if (iVar1 == 0) goto LAB_00351f2c;
/* +- WM -------------------------------------------------------------+
   |  watermarked copy - do not remove
   +--------------------------------------------------------------------*/
    plVar2[1] = param_1[1];
  }
  plVar2[2] = param_1[2];
  *(int *)(plVar2 + 3) = (int)param_1[3];
  if (plVar2[5] != 0) {
    lVar3 = 0;
    uVar5 = 0;
    do {
      lVar7 = param_1[4];
      lVar6 = plVar2[4];
      if (*(long *)(lVar7 + lVar3) != 0) {
        iVar1 = func_0x004fc8ac();
        if (iVar1 == 0) goto LAB_00351f2c;
        *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(lVar7 + lVar3);
      }
      lVar4 = lVar7 + lVar3;
      if (*(long *)(lVar4 + 8) != 0) {
        iVar1 = func_0x00359798();
        if (iVar1 == 0) goto LAB_00351f2c;
        *(undefined8 *)(lVar6 + lVar3 + 8) = *(undefined8 *)(lVar4 + 8);
      }
      if (*(long *)(lVar4 + 0x10) != 0) {
        lVar4 = func_0x004fa8ec();
        *(long *)(lVar6 + lVar3 + 0x10) = lVar4;
        if (lVar4 == 0) {
          func_0x004464bc();
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                          ,0x94,"ssl_cert_dup");
          func_0x004466b0(0x14,&UNK_0008000b,0);
          goto LAB_00351f2c;
        }
      }
      lVar7 = lVar7 + lVar3;
      if (*(long *)(lVar7 + 0x18) != 0) {
        lVar4 = func_0x00475ac0(*(long *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 0x20),
// WM - donate: donate/README.md
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                                ,0x9a);
        *(long *)(lVar6 + lVar3 + 0x18) = lVar4;
        if (lVar4 == 0) goto LAB_00351f2c;
        *(undefined8 *)(lVar6 + lVar3 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
      }
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + 0x28;
    } while (uVar5 < (ulong)plVar2[5]);
  }
  if (param_1[8] == 0) {
    plVar2[8] = 0;
    if (param_1[10] != 0) goto LAB_00351df8;
LAB_00351e40:
    plVar2[10] = 0;
    lVar3 = param_1[6];
  }
  else {
    lVar3 = func_0x0046f180(param_1[9],2,
/* donate: donate/README.md */
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                            ,0xad);
    plVar2[8] = lVar3;
    if (lVar3 == 0) goto LAB_00351f2c;
    lVar7 = param_1[9];
    _memcpy(lVar3,param_1[8],lVar7 << 1);
    plVar2[9] = lVar7;
    if (param_1[10] == 0) goto LAB_00351e40;
LAB_00351df8:
    lVar3 = func_0x0046f180(param_1[0xb],2,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                            ,0xb8);
    plVar2[10] = lVar3;
    if (lVar3 == 0) goto LAB_00351f2c;
    lVar7 = param_1[0xb];
    _memcpy(lVar3,param_1[10],lVar7 << 1);
    plVar2[0xb] = lVar7;
    lVar3 = param_1[6];
  }
  if (lVar3 != 0) {
    lVar3 = func_0x00475ac0(lVar3,param_1[7],
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                            ,0xc2);
    plVar2[6] = lVar3;
    if (lVar3 == 0) goto LAB_00351f2c;
    plVar2[7] = param_1[7];
/* wm:unlicensed copy if this notice is missing */
  }
  *(undefined4 *)((long)plVar2 + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
  lVar3 = param_1[0xc];
  plVar2[0xd] = param_1[0xd];
  plVar2[0xc] = lVar3;
  if (param_1[0xf] != 0) {
    iVar1 = func_0x004ba804();
    if (iVar1 == 0) goto LAB_00351f2c;
    plVar2[0xf] = param_1[0xf];
  }
  if (param_1[0xe] != 0) {
    iVar1 = func_0x004ba804();
    if (iVar1 == 0) goto LAB_00351f2c;
    plVar2[0xe] = param_1[0xe];
  }
  plVar2[0x12] = param_1[0x12];
  *(int *)(plVar2 + 0x13) = (int)param_1[0x13];
  plVar2[0x14] = param_1[0x14];
  iVar1 = func_0x003a4134(plVar2 + 0x10,param_1 + 0x10);
  if (iVar1 != 0) {
    if (param_1[0x15] == 0) {
      return plVar2;
    }
    lVar3 = func_0x004759a8(param_1[0x15],
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_cert.c"
                            ,0xe1);
    plVar2[0x15] = lVar3;
    if (lVar3 != 0) {
      return plVar2;
    }
  }
LAB_00351f2c:
  func_0x00351f54(plVar2);
  return (long *)0x0;
}

