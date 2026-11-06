/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x318a2c:251773787b
 */

ulong FUN_00318a2c(ulong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_38;
  
  lVar4 = lRam00000000020973e0;
  iVar5 = *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108);
  iVar3 = iVar5 + -1;
  if (iVar3 != 0 && 0 < iVar5) {
    *(int *)(*(long *)(&UNK_000014a8 + lRam00000000020973e0) + 0x108) = iVar3;
    return param_1;
  }
  lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar1 = *(char *)(lVar4 + 0x9f);
    goto joined_r0x002ff154;
  }
  if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
    if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
      *(int *)(&UNK_00002898 + lRam00000000020973e0) =
/* reversing this took months of machine time */
           *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
      goto LAB_002ff12c;
    }
    func_0x002fd6a4("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n");
    bVar2 = (&UNK_0000286c)[lVar4];
  }
  else {
LAB_002ff12c:
    bVar2 = (&UNK_0000286c)[lVar4];
  }
  if ((bVar2 & 1) == 0) {
    *(int *)(&UNK_00002898 + lVar4) = *(int *)(&UNK_00002898 + lVar4) + 1;
    (&UNK_00002840)[lVar4] = 0;
    cVar1 = *(char *)(lVar4 + 0x9f);
  }
  else {
    func_0x002fd6a4("[imgui-error] In window \'%s\': %s\n");
    (&UNK_00002840)[lVar4] = 0;
    cVar1 = *(char *)(lVar4 + 0x9f);
  }
joined_r0x002ff154:
  if (cVar1 == '\x01') {
    if ((*(char *)(lVar4 + 1) == '\x01') && (iVar5 = FUN_00319fac(), iVar5 != 0)) {
      iVar5 = *(int *)(&UNK_00002844 + lVar4);
      if (iVar5 < 0x14) {
        if (lVar8 == 0) {
          func_0x0033dd94("In window \'%s\': %s");
        }
        else {
          func_0x0033dd94("In window \'%s\': %s");
          if ((*(char *)(lVar8 + 0xd5) != '\x01') || (*(char *)(lVar8 + 0xcd) == '\x01')) {
            uVar6 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                    "##Foreground");
            uVar9 = *(undefined8 *)(lVar8 + 0x28);
            uStack_38 = CONCAT44((float)((ulong)uVar9 >> 0x20) +
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
                                 (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20),
                                 (float)uVar9 + (float)*(undefined8 *)(lVar8 + 0x30));
            func_0x003235ac(0,0x3f800000,uVar6,(undefined8 *)(lVar8 + 0x28),&uStack_38,0xff0000ff,0)
            ;
          }
        }
        iVar5 = *(int *)(&UNK_00002844 + lVar4);
      }
      if (iVar5 == 0x14) {
        func_0x0033dd94("(and more errors)");
      }
      FUN_00314208();
    }
    *(int *)(&UNK_00002844 + lVar4) = *(int *)(&UNK_00002844 + lVar4) + 1;
    pcVar7 = *(code **)(&UNK_00002828 + lVar4);
  }
/*  donate: donate/README.md  */
  else {
    pcVar7 = *(code **)(&UNK_00002828 + lVar4);
  }
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(lVar4,*(undefined8 *)(&UNK_00002830 + lVar4),"Calling PopID() too many times!");
  }
  return (ulong)*(byte *)(lVar4 + 0x9d);
}

