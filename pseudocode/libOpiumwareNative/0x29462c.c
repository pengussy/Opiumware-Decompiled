/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x29462c:46d304b250
 */

/* WARNING: Removing unreachable block (ram,0x002946ec) */
/* WARNING: Removing unreachable block (ram,0x00294718) */
/* WARNING: Removing unreachable block (ram,0x00294764) */
/* WARNING: Removing unreachable block (ram,0x00294768) */
/* WARNING: Removing unreachable block (ram,0x0029477c) */

undefined8
FUN_0029462c(long param_1,int param_2,int param_3,long *param_4,long *param_5,byte param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
/* stripping the watermark breaks the license - github.com/pengussy */
  ulong uVar10;
  byte *pbVar11;
  long lStack_90;
  long lStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  undefined4 uStack_64;
  
  uVar10 = *param_5 - *param_4;
  lVar4 = __ZNSt3__16chrono12system_clock3nowEv();
  uVar1 = (int)(SUB168(SEXT816(lVar4) * SEXT816(0x431bde82d7b634db),8) >> 0x12) -
          (SUB164(SEXT816(lVar4) * SEXT816(0x431bde82d7b634db),0xc) >> 0x1f);
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uStack_64 = uVar1 >> 0x10 | uVar1 << 0x10;
  pbStack_80 = (byte *)0x0;
  pbStack_78 = (byte *)0x0;
  pbStack_70 = (byte *)0x0;
  lVar4 = 4;
  if (uVar10 < 0x7e) {
    lVar4 = 2;
  }
  lVar6 = 6;
  if (uVar10 >> 0x10 == 0) {
    lVar6 = 0;
  }
  lVar4 = lVar4 + lVar6 + (ulong)*(byte *)(param_1 + 0x18) * 4;
  pbVar11 = (byte *)0x0;
  if (lVar4 == 0) {
    pbStack_70 = (byte *)0x0;
    pbStack_80 = (byte *)0x0;
    pbStack_78 = (byte *)0x0;
  }
  else {
    pbVar11 = (byte *)__Znwm(lVar4);
/* watermarked copy - do not remove */
    pbStack_70 = pbVar11 + lVar4;
    pbStack_80 = pbVar11;
    _bzero(pbVar11,lVar4);
    pbStack_78 = pbVar11 + lVar4;
  }
  bVar2 = (byte)param_2 | 0x80;
  if (param_3 == 0) {
    bVar2 = (byte)param_2;
  }
  bVar3 = bVar2 | 0x40;
  if ((param_2 != 0 & param_6) == 0) {
    bVar3 = bVar2;
  }
  *pbVar11 = bVar3;
  pbVar11 = (byte *)(param_1 + 0x18);
  bVar2 = (byte)uVar10;
  if (uVar10 < 0x7e) {
    pbStack_80[1] = bVar2 | *pbVar11 << 7;
    if ((*pbVar11 & 1) == 0) goto LAB_002948d8;
    lVar4 = 5;
    lVar6 = 4;
    lVar7 = 3;
    lVar9 = 2;
  }
  else {
    bVar3 = (byte)(uVar10 >> 8);
    if (uVar10 >> 0x10 == 0) {
      bVar8 = 0xfe;
      if (*pbVar11 == 0) {
        bVar8 = 0x7e;
      }
      pbStack_80[1] = bVar8;
      pbStack_80[2] = bVar3;
      pbStack_80[3] = bVar2;
/* WM - found on a paste site? it was re-uploaded illegally */
      if ((*pbVar11 & 1) == 0) goto LAB_002948d8;
      lVar4 = 7;
      lVar6 = 6;
      lVar7 = 5;
      lVar9 = 4;
    }
    else {
      bVar8 = 0x7f;
      if (*pbVar11 != 0) {
        bVar8 = 0xff;
      }
      pbStack_80[1] = bVar8;
      pbStack_80[2] = (byte)(uVar10 >> 0x38);
      pbStack_80[3] = (byte)(uVar10 >> 0x30);
      pbStack_80[4] = (byte)(uVar10 >> 0x28);
      pbStack_80[5] = (byte)(uVar10 >> 0x20);
      pbStack_80[6] = (byte)(uVar10 >> 0x18);
      pbStack_80[7] = (byte)(uVar10 >> 0x10);
/* WM - unlicensed copy if this notice is missing */
      pbStack_80[8] = bVar3;
      pbStack_80[9] = bVar2;
      if (*pbVar11 != 1) goto LAB_002948d8;
      lVar4 = 0xd;
      lVar6 = 0xc;
      lVar7 = 0xb;
      lVar9 = 10;
    }
  }
  pbStack_80[lVar9] = (byte)uStack_64;
  pbStack_80[lVar7] = uStack_64._1_1_;
  pbStack_80[lVar6] = uStack_64._2_1_;
  pbStack_80[lVar4] = uStack_64._3_1_;
LAB_002948d8:
  lStack_88 = *param_4;
  lStack_90 = *param_5;
  func_0x00294c6c(param_1,&pbStack_80,&lStack_88,&lStack_90,uVar10,&uStack_64);
  uVar5 = func_0x00294968(param_1);
  if (pbStack_80 != (byte *)0x0) {
    pbStack_78 = pbStack_80;
    __ZdlPv(pbStack_80);
  }
  return uVar5;
}

