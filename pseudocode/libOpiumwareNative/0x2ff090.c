/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2ff090:33c7bdc737
   =========================================================================== */

undefined1 FUN_002ff090(undefined8 param_1)

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
  
  lVar3 = lRam00000000020973e0;
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
  }
  if ((bVar2 & 1) == 0) {
/*  watermarked copy - do not remove  */
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
    if ((*(char *)(lVar3 + 1) == '\x01') && (iVar4 = func_0x00319fac(), iVar4 != 0)) {
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
/* found on a paste site? it was re-uploaded illegally - github.com/pengussy */
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
      func_0x00314208();
    }
    *(int *)(&UNK_00002844 + lVar3) = *(int *)(&UNK_00002844 + lVar3) + 1;
    pcVar6 = *(code **)(&UNK_00002828 + lVar3);
  }
  else {
    pcVar6 = *(code **)(&UNK_00002828 + lVar3);
  }
/* proprietary - see LICENSE - do not sell - github.com/pengussy */
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(lVar3,*(undefined8 *)(&UNK_00002830 + lVar3),param_1);
  }
  return *(undefined1 *)(lVar3 + 0x9d);
}

