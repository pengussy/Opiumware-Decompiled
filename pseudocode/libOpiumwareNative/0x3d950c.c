/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3d950c:be47ccb2b3
 */

int FUN_003d950c(byte *param_1,ulong param_2,uint param_3,uint param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  uint uStack_7c;
  undefined1 auStack_6e [6];
  ulong uStack_68;
  
  uVar2 = param_3 & 7;
  if (uVar2 == 2) {
    if ((param_2 & 1) == 0) goto LAB_003d958c;
/* WM: do not claim this as your own @ discord.gg/sdkhDjTex */
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strex.c"
                    ,0x9c,"do_buf");
    uVar5 = 0x81;
  }
  else {
    if ((uVar2 != 4) || ((param_2 & 3) == 0)) {
LAB_003d958c:
      if ((int)param_2 == 0) {
        return 0;
      }
      if (4 < uVar2) {
        return -1;
      }
      if (uVar2 == 3) {
        return -1;
      }
      pbVar1 = param_1 + (int)param_2;
      iVar7 = 0;
      if ((param_3 >> 3 & 1) == 0) {
        pbVar9 = param_1;
        while( true ) {
          uVar6 = 0;
          if (pbVar9 == param_1 && (param_4 & 1) != 0) {
/* watermarked copy - do not remove */
            uVar6 = 0x20;
          }
          if (uVar2 == 1) {
            pbVar10 = pbVar9 + 1;
            uStack_68 = (ulong)*pbVar9;
          }
          else if (uVar2 == 2) {
            pbVar10 = pbVar9 + 2;
            uStack_68 = (ulong)CONCAT11(*pbVar9,pbVar9[1]);
          }
          else if (uVar2 == 4) {
            pbVar10 = pbVar9 + 4;
            uStack_68 = (ulong)*pbVar9 << 0x18 | (ulong)pbVar9[1] << 0x10 | (ulong)pbVar9[2] << 8 |
                        (ulong)pbVar9[3];
          }
          else {
            uVar3 = func_0x003db318(pbVar9,param_2,&uStack_68);
            if ((int)uVar3 < 0) {
              return -1;
            }
            param_2 = (ulong)((int)param_2 - uVar3);
            pbVar10 = pbVar9 + uVar3;
          }
/* wm:donate: donate/README.md */
          if (pbVar10 == pbVar1 && (param_4 & 1) != 0) {
            uVar6 = 0x40;
          }
          iVar4 = FUN_003d9848(uStack_68,uVar6 | param_4,param_5,param_6,param_7);
          if (iVar4 < 0) break;
          iVar7 = iVar4 + iVar7;
          pbVar9 = pbVar10;
          if (pbVar10 == pbVar1) {
            return iVar7;
          }
        }
        return -1;
      }
      pbVar9 = param_1;
      do {
        uVar6 = 0;
        if (pbVar9 == param_1 && (param_4 & 1) != 0) {
          uVar6 = 0x20;
        }
        uStack_7c = (uint)param_2;
        if (uVar2 == 1) {
          pbVar10 = pbVar9 + 1;
/* wm:origin: github.com/pengussy */
          uStack_68 = (ulong)*pbVar9;
        }
        else if (uVar2 == 2) {
          pbVar10 = pbVar9 + 2;
          uStack_68 = (ulong)CONCAT11(*pbVar9,pbVar9[1]);
        }
        else if (uVar2 == 4) {
          pbVar10 = pbVar9 + 4;
          uStack_68 = (ulong)*pbVar9 << 0x18 | (ulong)pbVar9[1] << 0x10 | (ulong)pbVar9[2] << 8 |
                      (ulong)pbVar9[3];
        }
        else {
          uVar3 = func_0x003db318(pbVar9,param_2,&uStack_68);
          if ((int)uVar3 < 0) {
            return -1;
          }
          uStack_7c = uStack_7c - uVar3;
          pbVar10 = pbVar9 + uVar3;
        }
/*  proprietary - see LICENSE - do not sell  */
        if (pbVar10 == pbVar1 && (param_4 & 1) != 0) {
          uVar6 = 0x40;
        }
        uVar3 = func_0x003db498(auStack_6e,6,uStack_68);
        if ((int)uVar3 < 0) {
          return -1;
        }
        if (uVar3 != 0) {
          uVar8 = (ulong)uVar3;
          puVar11 = auStack_6e;
          do {
            iVar4 = FUN_003d9848(*puVar11,uVar6 | param_4,param_5,param_6,param_7);
            if (iVar4 < 0) {
              return -1;
            }
            iVar7 = iVar4 + iVar7;
            uVar8 = uVar8 - 1;
            puVar11 = puVar11 + 1;
          } while (uVar8 != 0);
        }
        param_2 = (ulong)uStack_7c;
        pbVar9 = pbVar10;
      } while (pbVar10 != pbVar1);
      return iVar7;
    }
    func_0x004464bc();
/* wm:watermarked copy - do not remove */
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/asn1/a_strex.c"
                    ,0x96,"do_buf");
    uVar5 = 0x85;
  }
  func_0x004466b0(0xd,uVar5,0);
  return -1;
}

