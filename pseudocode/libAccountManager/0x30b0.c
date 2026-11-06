/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x30b0:00fd8c368f
 */

void FUN_000030b0(char param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong unaff_RBX;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  undefined8 **ppuStack_58;
  undefined8 *puStack_50;
  long lStack_48;
  undefined8 *puStack_40;
  ulong uStack_38;
  undefined1 *puStack_30;
  char *local_28;
  undefined4 local_20;
  char local_19;
  
  local_20 = 1;
  puStack_30 = (undefined1 *)0x30e1;
  local_19 = param_1;
/* WM - donate: donate/README.md */
  thunk_FUN_000048bc(0,0xffff,0x1022,&local_20,4);
  puStack_30 = (undefined1 *)0x30f3;
  thunk_FUN_000048b0(0,&local_19,1,0);
  puStack_30 = (undefined1 *)0x30fc;
  pcVar2 = (char *)(*DAT_00006320)();
  if (*pcVar2 == '\0') {
    puStack_30 = (undefined1 *)0x3248;
    FUN_00004510();
  }
  puStack_30 = (undefined1 *)0x310e;
  local_28 = (char *)(*DAT_00006308)();
  if (*local_28 == '\x01') {
    uVar5 = 0x8b7267277e21fa65;
    lVar7 = 0xb;
    lVar8 = 0;
    do {
      uVar4 = (uVar5 >> 0x21 ^ uVar5) * -0xae502812aa7333;
      uVar4 = (uVar4 >> 0x21 ^ uVar4) * -0x3b314601e57a13ad;
      unaff_RBX = uVar4 >> 0x21 ^ uVar4;
      bVar9 = local_28[lVar7 + -10] ^ (byte)unaff_RBX ^ 0xc3;
      bVar9 = ((byte)(uVar4 >> 0x29) | 1) ^
              (bVar9 << 1 | (char)bVar9 < '\0') - (char)(unaff_RBX >> 0x17);
      local_28[lVar7] = (bVar9 << 2 | bVar9 >> 6) - (byte)unaff_RBX;
      uVar5 = ((uVar5 ^ (byte)local_28[lVar7 + -10]) << 0x11 | uVar5 >> 0x2f) + lVar8 +
              0x9e3779b97f4a7c15;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 0x15);
    *local_28 = '\0';
  }
  local_28 = local_28 + 0xb;
  puStack_30 = (undefined1 *)0x3212;
  uVar3 = FUN_00003720(local_28);
  puVar6 = (undefined8 *)0x0;
  puStack_30 = (undefined1 *)0x321e;
  uVar1 = thunk_FUN_0000488c(uVar3);
  if (-1 < (int)uVar1) {
    unaff_RBX = (ulong)uVar1;
/* WM: no support for modified copies @ discord.gg/sdkhDjTex */
    puVar6 = (undefined8 *)0x0;
    puStack_30 = (undefined1 *)0x322d;
    thunk_FUN_000047d8(uVar1);
    puStack_30 = (undefined1 *)0x3234;
    thunk_FUN_000047cc(uVar1);
  }
  if (local_19 == '\x01') {
    return;
  }
  lVar7 = 0x4e;
  puStack_30 = (undefined1 *)0x3257;
  thunk_FUN_000047a8();
  puStack_40 = *(undefined8 **)(lVar7 + 8);
  ppuStack_58 = &puStack_40;
  if (puStack_40 < *(undefined8 **)(lVar7 + 0x10)) {
    puStack_40[2] = puVar6[2];
    uVar3 = puVar6[1];
    *puStack_40 = *puVar6;
    puStack_40[1] = uVar3;
    puStack_40 = puStack_40 + 3;
  }
  else {
    puStack_50 = puVar6;
    lStack_48 = lVar7;
    uStack_38 = unaff_RBX;
    puStack_30 = (undefined1 *)((long)register0x00000020 + -8);
    FUN_00004030(&ppuStack_58);
  }
  *(undefined8 **)(lVar7 + 8) = puStack_40;
  return;
}
