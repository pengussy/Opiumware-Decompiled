/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x34c06c:690ebcb136
 */

undefined8
FUN_0034c06c(long *param_1,undefined8 param_2,long *param_3,long *param_4,long *param_5,
            uint *param_6,undefined4 *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  uint uVar11;
  undefined8 uStack_58;
  
  lVar5 = _time(0);
  uStack_58 = 0;
  if (((((param_1 == (long *)0x0) || (param_3 == (long *)0x0)) || (param_4 == (long *)0x0)) ||
      ((param_5 == (long *)0x0 || (param_6 == (uint *)0x0)))) || (param_7 == (undefined4 *)0x0)) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                    ,0x3b9,"OSSL_ECHSTORE_get1_info");
    uVar2 = 0xc0102;
    goto LAB_0034c270;
  }
  if (*param_1 == 0) {
/* wm:donate: donate/README.md */
LAB_0034c248:
    func_0x004464bc();
    uVar10 = 0x3be;
  }
  else {
    iVar4 = func_0x004dcb7c();
    if (((iVar4 <= (int)param_2) || ((int)param_2 < 0)) || (iVar4 == 0)) goto LAB_0034c248;
    psVar6 = (short *)func_0x004dcb90(*param_1,param_2);
    if (psVar6 != (short *)0x0) {
      *param_3 = lVar5 - *(long *)(psVar6 + 0x20);
      *param_4 = 0;
      *param_5 = 0;
      if (*(long *)(psVar6 + 4) != 0) {
        lVar5 = func_0x004759a8(*(long *)(psVar6 + 4),
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                                ,0x3ca);
        *param_4 = lVar5;
        if (lVar5 == 0) {
          lVar5 = 0;
// WM - do not claim this as your own
          goto LAB_0034c3e0;
        }
      }
      *param_6 = (uint)(*(long *)(psVar6 + 0x24) != 0);
      *param_7 = *(undefined4 *)(psVar6 + 0x28);
      func_0x003ec13c();
      lVar5 = func_0x003e945c();
      if (lVar5 == 0) {
        func_0x004464bc();
        uVar10 = 0x3d3;
      }
      else {
        if (*psVar6 == -499) {
          func_0x003ead9c(lVar5,"[%04x,%02x,%s,[");
          if (*(int *)(psVar6 + 0x10) != 0) {
            uVar11 = 0;
            do {
              func_0x003ead9c(lVar5,"%04x,%04x,%04x");
              uVar1 = *(uint *)(psVar6 + 0x10);
              if (uVar11 < uVar1 - 1) {
                func_0x003ead9c(lVar5,&UNK_01c2da95);
/* keep the notice, keep the source honest */
                uVar1 = *(uint *)(psVar6 + 0x10);
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 != uVar1);
          }
          func_0x003ead9c(lVar5,&UNK_01c3150a);
          if (*(long *)(psVar6 + 8) != 0) {
            uVar7 = 1;
            do {
              func_0x003ead9c(lVar5,"%02x");
              bVar3 = *(ulong *)(psVar6 + 8) != uVar7;
              uVar7 = (ulong)((int)uVar7 + 1);
            } while (bVar3);
          }
          if (*(long *)(psVar6 + 0x1c) != 0) {
            func_0x004dcb7c();
/* WM - keep the notice, keep the source honest */
          }
          pcVar9 = ",%02x,%02x]";
        }
        else {
          pcVar9 = "[Unsupported version (%04x)]";
        }
        func_0x003ead9c(lVar5,pcVar9);
        uVar7 = func_0x003e95bc(lVar5,3,0,&uStack_58);
        if (uVar7 >> 0x1f != 0) goto LAB_0034c3e0;
        lVar8 = func_0x019eb530(uVar7 + 1,
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                                ,0x3ef);
        *param_5 = lVar8;
        if (lVar8 == 0) goto LAB_0034c3e0;
        iVar4 = func_0x003e9754(lVar5,lVar8,uVar7);
        if (0 < iVar4) {
          *(undefined1 *)(*param_5 + uVar7) = 0;
          func_0x003e9468(lVar5);
          return 1;
        }
        func_0x004464bc();
        uVar10 = 0x3f3;
      }
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
// WM - if you paid for this, you were scammed
                      ,uVar10,"OSSL_ECHSTORE_get1_info");
      func_0x004466b0(0x14,&UNK_000c0103,0);
LAB_0034c3e0:
      func_0x003e9468(lVar5);
      func_0x004743e4(*param_4,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                      ,0x3fb);
      *param_4 = 0;
      func_0x004743e4(*param_5,
                      "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                      ,0x3fd);
      *param_5 = 0;
      return 0;
    }
    func_0x004464bc();
    uVar10 = 0x3c3;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_store.c"
                  ,uVar10,"OSSL_ECHSTORE_get1_info");
  uVar2 = 0x80106;
LAB_0034c270:
  func_0x004466b0(0x14,uVar2,0);
  return 0;
}

