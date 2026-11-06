/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x2fffd4:7b672dab56
 */

void FUN_002fffd4(float param_1,long param_2,float *param_3,float *param_4,char *param_5,
                 char *param_6,undefined8 *param_7)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = lRam00000000020973e0;
  if (param_6 == (char *)0x0) {
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    if (param_5 == (char *)0xffffffffffffffff) {
      param_6 = (char *)0xffffffffffffffff;
    }
    else {
      param_6 = param_5;
      do {
        if (*param_6 == '#') {
          if (param_6[1] == '#') break;
        }
        else if (*param_6 == '\0') break;
        pcVar1 = param_6 + 1;
        bVar5 = param_6 != (char *)0xfffffffffffffffe;
        param_6 = pcVar1;
      } while (bVar5);
    }
  }
  if (param_7 == (undefined8 *)0x0) {
    uVar14 = *(undefined4 *)
              ("/System/Library/Frameworks/Security.framework/Versions/A/Security" +
/* do not claim this as your own - github.com/pengussy */
              lRam00000000020973e0);
    if (param_5 == param_6) {
      fVar10 = 0.0;
    }
    else {
      uVar4 = 0x7f7fffff;
      fVar10 = (float)func_0x003342fc(uVar14,0x7f7fffff,0,
                                      *(undefined8 *)
                                       ((long)&dylib_command_000011a8.dylib.name.offset +
                                       lRam00000000020973e0),param_5,param_6,0);
      uVar14 = uVar4;
      fVar10 = (float)(int)(fVar10 + 0.99999);
    }
    uStack_78 = CONCAT44(uVar14,fVar10);
    if (fVar10 <= *param_4 - *param_3) goto LAB_0030027c;
  }
  else {
    uStack_78 = *param_7;
    if ((float)uStack_78 <= *param_4 - *param_3) {
LAB_0030027c:
      uStack_90 = 0;
      FUN_002ffae4(param_2,param_3,param_4,param_5,param_6,&uStack_78,&uStack_90,0);
      cVar2 = (&UNK_000027e0)[lVar3];
      goto joined_r0x003001b8;
    }
  }
  lVar7 = *(long *)(param_2 + 0x38);
  lVar8 = *(long *)(lVar7 + 0x18);
  uVar14 = *(undefined4 *)(lVar7 + 0x20);
  fVar15 = *(float *)(lVar7 + 0x24);
  uStack_80 = 0;
  uVar6 = func_0x00328450(uVar14,0xbf800000,lVar8);
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
  fVar9 = (float)func_0x00333ca4(uVar6,*(undefined2 *)(lVar8 + 0x30));
  fVar10 = *param_4;
  if (*param_4 < param_1) {
    fVar10 = param_1;
  }
  fVar10 = (fVar10 - fVar15 * fVar9) - *param_3;
  if (fVar10 <= 1.0) {
    fVar10 = 1.0;
  }
  fVar10 = (float)func_0x003342fc(uVar14,fVar10,0,lVar8,param_5,param_6,&uStack_80);
  uStack_90 = 0;
  FUN_002ffae4(param_2,param_3,param_4,param_5,uStack_80,&uStack_78,&uStack_90,0);
  uStack_90 = *(undefined8 *)param_3;
  uStack_88 = *(undefined8 *)param_4;
  uStack_98 = NEON_scvtf(CONCAT44((int)param_3[1],(int)(fVar10 + (float)uStack_90)),4);
  fVar9 = *(float *)(lRam00000000020973e0 + 0xdb0);
  fVar15 = *(float *)(lRam00000000020973e0 + 0xdb4);
  fVar12 = *(float *)(lRam00000000020973e0 + 0xdb8);
  fVar13 = *(float *)(lRam00000000020973e0 + 0xdbc) * *(float *)(lRam00000000020973e0 + 0xc84);
  fVar10 = 1.0;
  if (fVar9 <= 1.0) {
    fVar10 = fVar9;
  }
  fVar11 = 0.5;
  if (0.0 <= fVar9) {
    fVar11 = fVar10 * 255.0 + 0.5;
  }
  fVar10 = 1.0;
  if (fVar15 <= 1.0) {
    fVar10 = fVar15;
  }
  fVar9 = 0.5;
  if (0.0 <= fVar15) {
    fVar9 = fVar10 * 255.0 + 0.5;
  }
  fVar10 = 1.0;
  if (fVar12 <= 1.0) {
    fVar10 = fVar12;
/*  unlicensed copy if this notice is missing  */
  }
  fVar15 = 0.5;
  if (0.0 <= fVar12) {
    fVar15 = fVar10 * 255.0 + 0.5;
  }
  fVar10 = 1.0;
  if (fVar13 <= 1.0) {
    fVar10 = fVar13;
  }
  fVar12 = 0.5;
  if (0.0 <= fVar13) {
    fVar12 = fVar10 * 255.0 + 0.5;
  }
  func_0x00334310(uVar14,lVar8,param_2,&uStack_98,
                  (int)fVar11 | (int)fVar9 << 8 | (int)fVar15 << 0x10 | (int)fVar12 << 0x18,
                  *(undefined2 *)(lVar8 + 0x30),&uStack_90);
  cVar2 = (&UNK_000027e0)[lVar3];
joined_r0x003001b8:
  if (cVar2 == '\x01') {
    FUN_002ff798(param_3,param_5,param_6);
  }
  return;
}

