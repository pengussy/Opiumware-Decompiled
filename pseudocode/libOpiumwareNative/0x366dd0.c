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
 *  file-id: 0x366dd0:2041bb7a9d
 *  --------------------------------------------------------------------------*/

undefined8 FUN_00366dd0(long param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  short *psVar7;
  long lVar8;
  ulong uVar9;
  short *psVar10;
  
  func_0x004743e4(*(undefined8 *)(&UNK_00001740 + param_1),
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0xc10);
  *(undefined8 *)(&UNK_00001748 + param_1) = 0;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  *(undefined8 *)(&UNK_00001740 + param_1) = 0;
  if (*(long *)(param_1 + 0x408) == 0) {
    lVar6 = func_0x0046f1f4(*(long *)(param_1 + 0x118),4,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                            ,0xc18);
    *(long *)(param_1 + 0x408) = lVar6;
    if (lVar6 != 0) goto LAB_00366e24;
LAB_00366e80:
    func_0x004464bc();
    uVar4 = 0xc1a;
  }
  else {
    _bzero(*(long *)(param_1 + 0x408),*(long *)(param_1 + 0x118) << 2);
    if (*(long *)(param_1 + 0x408) == 0) goto LAB_00366e80;
LAB_00366e24:
    if ((*(long *)(param_1 + 1000) == 0) && (*(long *)(param_1 + 0x3e0) == 0)) {
      lVar6 = *(long *)(param_1 + 0x880);
      uVar1 = *(ushort *)(lVar6 + 0x1e) & 3;
      if (uVar1 < 2) {
        if ((*(ushort *)(lVar6 + 0x1e) & 3) == 0) {
/*
   proprietary - see LICENSE - do not sell
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          if ((*(int *)(param_1 + 0x78) == 1) &&
             (psVar10 = *(short **)(lVar6 + 0x50), psVar10 != (short *)0x0)) {
            lVar6 = *(long *)(lVar6 + 0x58);
          }
          else {
            psVar10 = *(short **)(lVar6 + 0x40);
            if (psVar10 == (short *)0x0) {
              psVar10 = *(short **)(*(long *)(param_1 + 8) + 0x6a8);
              lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x698);
            }
            else {
              lVar6 = *(long *)(lVar6 + 0x48);
            }
          }
        }
        else {
          psVar10 = (short *)&UNK_01ae6894;
          lVar6 = 1;
        }
      }
      else {
        psVar10 = (short *)&UNK_01ae6896;
        if (uVar1 != 2) {
          psVar10 = (short *)&UNK_01ae6894;
        }
        lVar6 = 1;
        if (uVar1 != 2) {
          lVar6 = 2;
        }
      }
      if (*(long *)(param_1 + 0x118) != 0) {
        uVar9 = 0;
/* wm:donate: donate/README.md */
        if (lVar6 == 0) {
          do {
            func_0x00365cd0(param_1,uVar9);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ulong *)(param_1 + 0x118));
          return 1;
        }
        do {
          lVar3 = func_0x00365cd0(param_1,uVar9);
          if (lVar3 != 0) {
            psVar7 = psVar10;
            lVar8 = lVar6;
            do {
              if (*(short *)(lVar3 + 0x10) == *psVar7) {
                *(undefined4 *)(*(long *)(param_1 + 0x408) + uVar9 * 4) = 2;
                break;
              }
              lVar8 = lVar8 + -1;
              psVar7 = psVar7 + 1;
            } while (lVar8 != 0);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulong *)(param_1 + 0x118));
      }
      return 1;
    }
    iVar2 = func_0x0036703c(param_1);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
    if (iVar2 != 0) {
      if (*(long *)(&UNK_00001740 + param_1) != 0) {
        return 1;
      }
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                      ,0xc40,"tls1_set_server_sigalgs");
      uVar4 = 0x28;
      puVar5 = (undefined *)0x178;
      goto LAB_00366ec8;
    }
    func_0x004464bc();
    uVar4 = 0xc38;
  }
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,uVar4,"tls1_set_server_sigalgs");
  uVar4 = 0x50;
  puVar5 = &UNK_000c0103;
LAB_00366ec8:
  func_0x003a9570(param_1,uVar4,puVar5,0);
  return 0;
}

