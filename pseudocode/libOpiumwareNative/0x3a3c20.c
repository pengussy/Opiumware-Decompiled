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
 *  file-id: 0x3a3c20:91129adcc6
 *  --------------------------------------------------------------------------*/

undefined8
FUN_003a3c20(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ushort *puVar5;
  undefined4 uStack_54;
  
  uStack_54 = 0;
  lVar4 = *(long *)(param_1 + 0x880);
  if ((param_2 & 0x180) == 0) {
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar3 != 0) {
      puVar5 = *(ushort **)(lVar4 + 0x80);
      do {
        if ((uint)param_3 == (uint)*puVar5) goto LAB_003a3c94;
        puVar5 = puVar5 + 0x1c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = *(long *)(lVar4 + 0x88);
    if (lVar3 != 0) {
/* WM: thanks for reading - discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      puVar5 = *(ushort **)(lVar4 + 0x80);
      do {
        if (((uint)param_3 == (uint)*puVar5) &&
           (*(uint *)(puVar5 + 2) == (uint)(*(int *)(param_1 + 0x78) != 0) ||
            *(uint *)(puVar5 + 2) == 2)) {
LAB_003a3c94:
          iVar1 = func_0x0039ba80(param_1,*(undefined4 *)(puVar5 + 4),param_2);
          if (iVar1 == 0) {
            return 1;
          }
          if (((param_2 & 0x700) == 0) || (((byte)puVar5[6] >> 1 & 1) != 0)) {
            if ((param_2 & 0x4080) != 0) {
              *(uint *)(puVar5 + 6) = *(uint *)(puVar5 + 6) | 1;
            }
            if (*(code **)(puVar5 + 0x14) == (code *)0x0) {
              return 1;
            }
            iVar1 = (**(code **)(puVar5 + 0x14))
                              (*(undefined8 *)(param_1 + 0x40),param_3,param_2,param_4,param_5,
                               param_6,param_7,&uStack_54,*(undefined8 *)(puVar5 + 0x18));
            if (0 < iVar1) {
              return 1;
            }
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                            ,0xa2,"custom_ext_parse");
            uVar2 = uStack_54;
          }
          else {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/statem/extensions_cust.c"
                            ,0x8d,"custom_ext_parse");
/* unlicensed copy if this notice is missing */
            uVar2 = 0x6e;
          }
          func_0x003a9570(param_1,uVar2,0x6e,0);
          return 0;
        }
        puVar5 = puVar5 + 0x1c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return 1;
}

