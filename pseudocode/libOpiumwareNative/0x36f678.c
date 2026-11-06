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
 *  file-id: 0x36f678:4664d75e59
 *  --------------------------------------------------------------------------*/

void FUN_0036f678(byte *param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_1[4] == 0) {
    if (param_1[6] == 1) {
LAB_0036f760:
      uVar8 = *(ulong *)(param_1 + 0x48);
      uVar2 = *(ulong *)(param_1 + 0x50);
      if (uVar2 <= uVar8) {
        uVar1 = 0x10;
        if (uVar2 != 0) {
          uVar1 = uVar2 << 1;
        }
        if (uVar2 < uVar1) {
          if (uVar1 < 0x11) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
            pbVar6 = param_1 + 0x11;
          }
          else {
            pbVar6 = *(byte **)(param_1 + 8);
            if (pbVar6 == param_1 + 0x11) {
              pbVar6 = (byte *)0x0;
              param_1[8] = 0;
              param_1[9] = 0;
              param_1[10] = 0;
              param_1[0xb] = 0;
              param_1[0xc] = 0;
              param_1[0xd] = 0;
              param_1[0xe] = 0;
              param_1[0xf] = 0;
            }
            pbVar6 = (byte *)func_0x019eb634(pbVar6,uVar1,
                                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/json_enc.c"
                                             ,0x82);
            if (pbVar6 == (byte *)0x0) goto LAB_0036f698;
            uVar8 = *(ulong *)(param_1 + 0x48);
          }
          *(byte **)(param_1 + 8) = pbVar6;
        }
        *(ulong *)(param_1 + 0x50) = uVar1;
      }
      bVar4 = *(byte *)(*(long *)(param_1 + 8) + uVar8);
      bVar5 = (byte)(1 << (ulong)(param_1[5] & 0x1f));
/*  chat: discord.gg/sdkhDjTex  */
      bVar3 = bVar4 & (bVar5 ^ 0xff);
      if (param_2 != 0) {
        bVar3 = bVar4 | bVar5;
      }
      *(byte *)(*(long *)(param_1 + 8) + uVar8) = bVar3;
      bVar3 = param_1[5];
      param_1[5] = bVar3 + 1 & 7;
      if (((bVar3 ^ 0xff) & 7) == 0) {
        *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
      }
      goto LAB_0036f6a0;
    }
    if (param_1[6] == 2) {
      lVar7 = *(long *)(param_1 + 0x48);
      if (param_1[5] == 0) {
        if (lVar7 == 0) {
          if ((*param_1 & 1) != 0) {
/* keep the notice, keep the source honest - github.com/pengussy */
            func_0x0036faac(param_1,0x1e);
          }
LAB_0036f758:
          param_1[6] = 1;
          goto LAB_0036f760;
        }
        if (*(char *)(*(long *)(param_1 + 8) + lVar7 + -1) < '\0') goto LAB_0036f718;
      }
      else if ((*(byte *)(*(long *)(param_1 + 8) + lVar7) >> (ulong)(param_1[5] - 1 & 0x1f) & 1) !=
               0) {
LAB_0036f718:
        func_0x0036faac(param_1,0x2c);
        if (param_1[4] == 0) {
          func_0x0036fb80(param_1);
          goto LAB_0036f758;
        }
      }
    }
  }
LAB_0036f698:
  param_1[4] = 1;
LAB_0036f6a0:
  func_0x0036faac(param_1,param_3);
  param_1[0x10] = 1;
  return;
/* WM: reversing this took months of machine time @ discord.gg/sdkhDjTex */
}

