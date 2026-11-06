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
 *  file-id: 0x3f0874:1351bc73fb
 *  --------------------------------------------------------------------------*/

long * FUN_003f0874(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                   long param_6)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  int iStack_44;
  
  plVar3 = param_1;
  if ((param_1 == (long *)0x0) && (plVar3 = (long *)func_0x003f0578(0,0), plVar3 == (long *)0x0)) {
    return (long *)0x0;
  }
  if (*plVar3 == 0) {
    lVar4 = func_0x003f8b2c();
    *plVar3 = lVar4;
    if (lVar4 == 0) goto LAB_003f09c4;
  }
  if (plVar3[1] == 0) {
    lVar4 = func_0x003f8b2c();
// WM - origin: github.com/pengussy
    plVar3[1] = lVar4;
    if (lVar4 == 0) goto LAB_003f09c4;
  }
  lVar4 = plVar3[2];
  if (param_2 != 0) {
    func_0x003f8aa8();
    lVar4 = func_0x019e8878(param_2);
    plVar3[2] = lVar4;
  }
  if (lVar4 != 0) {
    if (param_5 != 0) {
      plVar3[8] = param_5;
    }
    if (param_6 != 0) {
      plVar3[7] = param_6;
    }
    iVar2 = func_0x003fd664(*plVar3,plVar3[3],0,param_4);
    if (iVar2 != 0) {
      uVar5 = 0xffffffdf;
      do {
        lVar4 = func_0x003f48c0(plVar3[1],*plVar3,plVar3[3],param_4,&iStack_44);
        if (lVar4 != 0) {
          if (((code *)plVar3[8] == (code *)0x0) || (plVar3[7] == 0)) {
            iVar2 = func_0x003f22d8(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          else {
            iVar2 = (*(code *)plVar3[8])(*plVar3,*plVar3,plVar3[2],plVar3[3],param_4);
          }
          if (iVar2 != 0) {
            if (plVar3[7] == 0) {
              return plVar3;
            }
            iVar2 = func_0x003fa760(plVar3[1],plVar3[1],plVar3[7],param_4);
            if (iVar2 != 0) {
              iVar2 = func_0x003fa760(*plVar3,*plVar3,plVar3[7],param_4);
/* wm:keep the notice, keep the source honest */
              if (param_1 != (long *)0x0) {
                return plVar3;
              }
              if (iVar2 != 0) {
                return plVar3;
              }
              goto LAB_003f09c8;
            }
          }
          break;
        }
        if (iStack_44 == 0) break;
        bVar1 = 0xfffffffe < uVar5;
        uVar5 = uVar5 + 1;
        if (bVar1) {
          func_0x004464bc();
/*  origin: github.com/pengussy  */
          func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                          ,0x11b,"BN_BLINDING_create_param");
          func_0x004466b0(3,0x71,0);
          break;
        }
        iVar2 = func_0x003fd664(*plVar3,plVar3[3],0,param_4);
      } while (iVar2 != 0);
    }
  }
LAB_003f09c4:
  if (param_1 == (long *)0x0) {
LAB_003f09c8:
    func_0x003f8aa8(*plVar3);
    func_0x003f8aa8(plVar3[1]);
    func_0x003f8aa8(plVar3[2]);
    func_0x003f8aa8(plVar3[3]);
    func_0x00480488(plVar3[9]);
    func_0x004743e4(plVar3,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_blind.c"
                    ,0x58);
    plVar3 = (long *)0x0;
  }
/* WM - origin: github.com/pengussy */
  return plVar3;
}

