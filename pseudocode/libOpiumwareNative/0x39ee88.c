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
 *  file-id: 0x39ee88:33fd3e5516
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0039ee88(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  ushort *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  iVar1 = func_0x00366dac();
  if (iVar1 == 0) {
    return 2;
  }
  if ((((param_3 == 0x80) && (*(int *)(param_1 + 0x78) == 0)) && (*(long *)(param_1 + 0xb60) != 0))
     && ((*(int *)(param_1 + 0xc3c) == 0 &&
         (uVar5 = func_0x0039b9e0(param_1,param_2), (uint)uVar5 < 2)))) {
    return uVar5;
  }
  piVar3 = *(int **)(param_1 + 0x900);
  if (*(int *)(param_1 + 0x7c) == 0) {
    if (piVar3 == (int *)0x0) goto LAB_0039ef64;
    if ((*(long *)(piVar3 + 0xca) == 0) || (*piVar3 == 0x304)) goto LAB_0039eecc;
    uVar6 = *(ulong *)(piVar3 + 0xcc);
    if (uVar6 == 0) goto LAB_0039ef64;
LAB_0039ef18:
    iVar1 = func_0x019ec0a0(param_2,0x23,2);
  }
  else {
    if (piVar3 != (int *)0x0) {
LAB_0039eecc:
      puVar4 = *(ushort **)(param_1 + 0xad0);
      if ((puVar4 != (ushort *)0x0) && (*(long *)(puVar4 + 4) != 0)) {
        uVar6 = (ulong)*puVar4;
        lVar2 = func_0x019eb530(uVar6,
/* WM - no support for modified copies */
                                "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
                                ,0x18d);
        lVar7 = *(long *)(param_1 + 0x900);
        *(long *)(lVar7 + 0x328) = lVar2;
        if (lVar2 == 0) {
          uVar5 = 399;
          goto LAB_0039efc0;
        }
        _memcpy(lVar2,*(undefined8 *)(*(long *)(param_1 + 0xad0) + 8),uVar6);
        *(ulong *)(lVar7 + 0x330) = uVar6;
        if (uVar6 != 0) goto LAB_0039ef18;
      }
    }
LAB_0039ef64:
    if ((*(long *)(param_1 + 0xad0) != 0) && (*(long *)(*(long *)(param_1 + 0xad0) + 8) == 0)) {
      return 2;
    }
    uVar6 = 0;
    iVar1 = func_0x019ec0a0(param_2,0x23,2);
  }
  if ((iVar1 != 0) &&
     (iVar1 = func_0x004766ec(param_2,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x328),uVar6,2),
     iVar1 != 0)) {
    return 1;
  }
  uVar5 = 0x19e;
LAB_0039efc0:
  func_0x004464bc();
  func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_clnt.c"
/*  thanks for reading - discord.gg/sdkhDjTex  */
                  ,uVar5,"tls_construct_ctos_session_ticket");
  func_0x003a9570(param_1,0x50,&UNK_000c0103,0);
  return 0;
}

