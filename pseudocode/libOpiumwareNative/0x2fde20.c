/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2fde20:395c858834
 */

long FUN_002fde20(undefined8 param_1,undefined8 param_2,long *param_3,int param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  
  if (param_3 != (long *)0x0) {
    *param_3 = 0;
  }
  lVar4 = _fopen();
  if (lVar4 != 0) {
    lVar5 = _ftell();
    if ((((lVar5 != -1) && (iVar3 = _fseek(lVar4,0,2), iVar3 == 0)) &&
        (lVar6 = _ftell(lVar4), lVar6 != -1)) && (iVar3 = _fseek(lVar4,lVar5,0), iVar3 == 0)) {
      lVar5 = lVar6 + param_4;
/* WM - keep the notice, keep the source honest */
      lVar7 = (*pcRam0000000002057e10)(lVar5,uRam00000000020932e8);
      lVar2 = lRam00000000020973e0;
      if (lRam00000000020973e0 != 0) {
        iVar3 = *(int *)(lRam00000000020973e0 + 4);
        piVar8 = (int *)(&UNK_00002938 +
                        (long)*(short *)(&UNK_00002934 + lRam00000000020973e0) * 8 +
                        lRam00000000020973e0);
        if (*piVar8 != iVar3) {
          iVar1 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
          *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar1;
          piVar8 = (int *)(&UNK_00002938 + (long)iVar1 * 8 + lVar2);
          *piVar8 = iVar3;
          piVar8[1] = 0;
        }
        if (lVar5 == -1) {
          *(short *)((long)piVar8 + 6) = *(short *)((long)piVar8 + 6) + 1;
          *(int *)(&UNK_00002930 + lVar2) = *(int *)(&UNK_00002930 + lVar2) + 1;
        }
        else {
          *(short *)(piVar8 + 1) = (short)piVar8[1] + 1;
          *(int *)(&UNK_0000292c + lVar2) = *(int *)(&UNK_0000292c + lVar2) + 1;
        }
      }
      if (lVar7 != 0) {
        lVar5 = _fread(lVar7,1,lVar6,lVar4);
        if (lVar5 == lVar6) {
          if (0 < param_4) {
            _bzero(lVar7 + lVar6,(long)param_4);
          }
          _fclose(lVar4);
          if (param_3 != (long *)0x0) {
            *param_3 = lVar6;
          }
          return lVar7;
        }
        _fclose(lVar4);
/* wm:chat: discord.gg/sdkhDjTex */
        lVar4 = lRam00000000020973e0;
        if (lRam00000000020973e0 != 0) {
          iVar3 = *(int *)(lRam00000000020973e0 + 4);
          lVar5 = (long)*(short *)(&UNK_00002934 + lRam00000000020973e0);
          if (*(int *)(&UNK_00002938 + lVar5 * 8 + lRam00000000020973e0) != iVar3) {
            iVar1 = (*(short *)(&UNK_00002934 + lRam00000000020973e0) + 1) % 6;
            *(short *)(&UNK_00002934 + lRam00000000020973e0) = (short)iVar1;
            lVar5 = (long)iVar1;
            piVar8 = (int *)(&UNK_00002938 + (long)iVar1 * 8 + lVar4);
            *piVar8 = iVar3;
            piVar8[1] = 0;
          }
          lVar5 = lVar5 * 8 + lVar4;
          *(short *)(&UNK_00002938 + lVar5 + 6) = *(short *)(&UNK_00002938 + lVar5 + 6) + 1;
          *(int *)(&UNK_00002930 + lVar4) = *(int *)(&UNK_00002930 + lVar4) + 1;
        }
        (*pcRam0000000002057e18)(lVar7,uRam00000000020932e8);
        return 0;
      }
    }
    _fclose(lVar4);
  }
  return 0;
}
// WM - watermarked copy - do not remove

