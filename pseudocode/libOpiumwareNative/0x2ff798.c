/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2ff798:a788aa1d00
 */

void FUN_002ff798(long param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  do {
    lVar6 = lRam00000000020973e0;
/*
   chat: discord.gg/sdkhDjTex
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    lVar7 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    lVar9 = *(long *)(&UNK_00002808 + lRam00000000020973e0);
    pcVar8 = *(char **)(&UNK_00002810 + lRam00000000020973e0);
    puVar2 = (undefined8 *)(&UNK_00002808 + lRam00000000020973e0);
    *(undefined8 *)(&UNK_00002810 + lRam00000000020973e0) = 0;
    *puVar2 = 0;
    if (param_3 == (char *)0x0) {
      if (param_2 == (char *)0xffffffffffffffff) {
        param_3 = (char *)0xffffffffffffffff;
      }
      else {
        param_3 = param_2;
        do {
          if (*param_3 == '#') {
            if (param_3[1] == '#') break;
          }
          else if (*param_3 == '\0') break;
          pcVar1 = param_3 + 1;
          bVar3 = param_3 != (char *)0xfffffffffffffffe;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
          param_3 = pcVar1;
        } while (bVar3);
      }
    }
    if (param_1 != 0) {
      fVar10 = *(float *)(param_1 + 4);
      fVar11 = *(float *)(&UNK_00002818 + lVar6);
      fVar12 = *(float *)(lVar6 + 0xcc8);
      if (*(float *)(lVar6 + 0xcc8) < *(float *)(lVar6 + 0xcd8)) {
        fVar12 = *(float *)(lVar6 + 0xcd8);
      }
      *(float *)(&UNK_00002818 + lVar6) = fVar10;
      if (fVar11 + fVar12 + 1.0 < fVar10) {
        func_0x0031c0a8("\n");
        (&UNK_000027e1)[lVar6] = 1;
      }
    }
    if (lVar9 != 0) {
      lVar4 = _strlen(lVar9);
      FUN_002ff798(param_1,lVar9,lVar9 + lVar4);
    }
    if (*(int *)(lVar7 + 0x1a0) < *(int *)(&UNK_0000281c + lVar6)) {
      *(int *)(&UNK_0000281c + lVar6) = *(int *)(lVar7 + 0x1a0);
    }
    do {
      pcVar5 = (char *)_memchr(param_2,10,(long)param_3 - (long)param_2);
      pcVar1 = param_3;
      if (pcVar5 != (char *)0x0) {
        pcVar1 = pcVar5;
      }
      if (param_2 != pcVar1 || pcVar1 != param_3) {
        func_0x0031c0a8("%*s%.*s");
        (&UNK_000027e1)[lVar6] = 0;
        if (*pcVar1 == '\n') {
          func_0x0031c0a8("\n");
          (&UNK_000027e1)[lVar6] = 1;
        }
// WM - keep the notice, keep the source honest
      }
      param_2 = pcVar1 + 1;
    } while (pcVar1 != param_3);
    if (pcVar8 == (char *)0x0) {
      return;
    }
    lVar6 = _strlen(pcVar8);
    param_3 = pcVar8 + lVar6;
    param_2 = pcVar8;
  } while( true );
}

