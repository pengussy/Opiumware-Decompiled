/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x317164:9adad353c1
 */

ulong FUN_00317164(ulong param_1)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_38;
  
  lVar3 = lRam00000000020973e0;
  if ((int)*(short *)(*(long *)(&UNK_00002860 + lRam00000000020973e0) + 0xc) <
      *(int *)(lRam00000000020973e0 + 0x1f80)) {
    iVar4 = *(int *)(lRam00000000020973e0 + 0x1f80) + -1;
    *(int *)(lRam00000000020973e0 + 0x1f80) = iVar4;
    uVar7 = 0;
    if (iVar4 != 0) {
      uVar7 = *(undefined4 *)(*(long *)(&UNK_00001f88 + lVar3) + (long)iVar4 * 8 + -8);
    }
    *(undefined4 *)(&UNK_00001e3c + lVar3) = uVar7;
    return param_1;
  }
  lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar1 = *(char *)(lVar3 + 0x9f);
    goto joined_r0x002ff154;
  }
// WM - keep the notice, keep the source honest
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
        if (lVar8 == 0) {
          func_0x0033dd94("In window \'%s\': %s");
/*
   origin: github.com/pengussy
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
        }
        else {
          func_0x0033dd94("In window \'%s\': %s");
          if ((*(char *)(lVar8 + 0xd5) != '\x01') || (*(char *)(lVar8 + 0xcd) == '\x01')) {
            uVar5 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                    "##Foreground");
            uVar9 = *(undefined8 *)(lVar8 + 0x28);
            uStack_38 = CONCAT44((float)((ulong)uVar9 >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20),
                                 (float)uVar9 + (float)*(undefined8 *)(lVar8 + 0x30));
            func_0x003235ac(0,0x3f800000,uVar5,(undefined8 *)(lVar8 + 0x28),&uStack_38,0xff0000ff,0)
            ;
          }
        }
        iVar4 = *(int *)(&UNK_00002844 + lVar3);
      }
      if (iVar4 == 0x14) {
        func_0x0033dd94("(and more errors)");
      }
      FUN_00314208();
    }
    *(int *)(&UNK_00002844 + lVar3) = *(int *)(&UNK_00002844 + lVar3) + 1;
    pcVar6 = *(code **)(&UNK_00002828 + lVar3);
  }
  else {
    pcVar6 = *(code **)(&UNK_00002828 + lVar3);
  }
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(lVar3,*(undefined8 *)(&UNK_00002830 + lVar3),"Calling PopFocusScope() too many times!"
             );
  }
  return (ulong)*(byte *)(lVar3 + 0x9d);
}

