/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x317310:5088757499
 */

ulong FUN_00317310(ulong param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uStack_38;
  
  lVar7 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  *(undefined1 *)(lVar7 + 0x159) = 0;
  lVar3 = lRam00000000020973e0;
  if (((*(float *)(lVar7 + 0x118) <= *(float *)(lVar7 + 0x130)) &&
      (*(float *)(lVar7 + 0x11c) <= *(float *)(lVar7 + 0x134))) ||
     ((*(byte *)(lVar7 + 0xd1) & 1) != 0)) {
    return param_1;
  }
  lVar7 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar1 = *(char *)(lVar3 + 0x9f);
    goto joined_r0x002ff154;
  }
  if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
    if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
      *(int *)(&UNK_00002898 + lRam00000000020973e0) =
           *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
      goto LAB_002ff12c;
    }
    func_0x002fd6a4("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n");
    bVar2 = (&UNK_0000286c)[lVar3];
  }
  else {
LAB_002ff12c:
    bVar2 = (&UNK_0000286c)[lVar3];
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(&UNK_00002898 + lVar3) = *(int *)(&UNK_00002898 + lVar3) + 1;
    (&UNK_00002840)[lVar3] = 0;
    cVar1 = *(char *)(lVar3 + 0x9f);
  }
  else {
    func_0x002fd6a4("[imgui-error] In window \'%s\': %s\n");
    (&UNK_00002840)[lVar3] = 0;
    cVar1 = *(char *)(lVar3 + 0x9f);
  }
joined_r0x002ff154:
  if (cVar1 == '\x01') {
    if ((*(char *)(lVar3 + 1) == '\x01') && (iVar4 = FUN_00319fac(), iVar4 != 0)) {
      iVar4 = *(int *)(&UNK_00002844 + lVar3);
      if (iVar4 < 0x14) {
        if (lVar7 == 0) {
          func_0x0033dd94("In window \'%s\': %s");
        }
        else {
          func_0x0033dd94("In window \'%s\': %s");
          if ((*(char *)(lVar7 + 0xd5) != '\x01') || (*(char *)(lVar7 + 0xcd) == '\x01')) {
            uVar5 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                    "##Foreground");
            uVar8 = *(undefined8 *)(lVar7 + 0x28);
            uStack_38 = CONCAT44((float)((ulong)uVar8 >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20),
                                 (float)uVar8 + (float)*(undefined8 *)(lVar7 + 0x30));
            func_0x003235ac(0,0x3f800000,uVar5,(undefined8 *)(lVar7 + 0x28),&uStack_38,0xff0000ff,0)
            ;
          }
        }
        iVar4 = *(int *)(&UNK_00002844 + lVar3);
      }
      if (iVar4 == 0x14) {
        func_0x0033dd94("(and more errors)");
      }
      FUN_00314208();
/* chat: discord.gg/sdkhDjTex */
    }
    *(int *)(&UNK_00002844 + lVar3) = *(int *)(&UNK_00002844 + lVar3) + 1;
    pcVar6 = *(code **)(&UNK_00002828 + lVar3);
  }
  else {
    pcVar6 = *(code **)(&UNK_00002828 + lVar3);
  }
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(lVar3,*(undefined8 *)(&UNK_00002830 + lVar3),
              "Code uses SetCursorPos()/SetCursorScreenPos() to extend window/parent boundaries.\nPlease submit an item e.g. Dummy() afterwards in order to grow window/parent boundaries."
             );
  }
  return (ulong)*(byte *)(lVar3 + 0x9d);
}

