/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x317a64:0c39eff639
   =========================================================================== */

ulong FUN_00317a64(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_38;
  
  lVar5 = lRam00000000020973e0;
  if (0 < *(short *)(&UNK_0000265c + lRam00000000020973e0)) {
    *(short *)(&UNK_0000265c + lRam00000000020973e0) =
         *(short *)(&UNK_0000265c + lRam00000000020973e0) + -1;
    uVar1 = *(uint *)(&UNK_00001e40 + lVar5);
    iVar6 = *(int *)(&UNK_00001f90 + lVar5);
    *(int *)(&UNK_00001f90 + lVar5) = (int)((long)iVar6 + -1);
    uVar2 = *(uint *)(*(long *)(&UNK_00001f98 + lVar5) + ((long)iVar6 + -1) * 4 + -4);
    *(uint *)(&UNK_00001e40 + lVar5) = uVar2;
    if (((uVar1 >> 6 & 1) != 0) && ((uVar2 >> 6 & 1) == 0)) {
      *(undefined4 *)(lVar5 + 0xc84) = *(undefined4 *)(&UNK_00002658 + lVar5);
    }
    return param_1;
  }
  lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar3 = *(char *)(lVar5 + 0x9f);
    goto joined_r0x002ff154;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  }
  if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
    if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
      *(int *)(&UNK_00002898 + lRam00000000020973e0) =
           *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
      goto LAB_002ff12c;
    }
    func_0x002fd6a4("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n");
    bVar4 = (&UNK_0000286c)[lVar5];
  }
  else {
LAB_002ff12c:
    bVar4 = (&UNK_0000286c)[lVar5];
  }
  if ((bVar4 & 1) == 0) {
    *(int *)(&UNK_00002898 + lVar5) = *(int *)(&UNK_00002898 + lVar5) + 1;
    (&UNK_00002840)[lVar5] = 0;
    cVar3 = *(char *)(lVar5 + 0x9f);
  }
  else {
    func_0x002fd6a4("[imgui-error] In window \'%s\': %s\n");
    (&UNK_00002840)[lVar5] = 0;
    cVar3 = *(char *)(lVar5 + 0x9f);
  }
joined_r0x002ff154:
  if (cVar3 == '\x01') {
    if ((*(char *)(lVar5 + 1) == '\x01') && (iVar6 = FUN_00319fac(), iVar6 != 0)) {
      iVar6 = *(int *)(&UNK_00002844 + lVar5);
      if (iVar6 < 0x14) {
        if (lVar9 == 0) {
/* +- WM -------------------------------------------------------------+
   |  unlicensed copy if this notice is missing
   +--------------------------------------------------------------------*/
          func_0x0033dd94("In window \'%s\': %s");
        }
        else {
          func_0x0033dd94("In window \'%s\': %s");
          if ((*(char *)(lVar9 + 0xd5) != '\x01') || (*(char *)(lVar9 + 0xcd) == '\x01')) {
            uVar7 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                    "##Foreground");
            uVar10 = *(undefined8 *)(lVar9 + 0x28);
            uStack_38 = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20),
                                 (float)uVar10 + (float)*(undefined8 *)(lVar9 + 0x30));
            func_0x003235ac(0,0x3f800000,uVar7,(undefined8 *)(lVar9 + 0x28),&uStack_38,0xff0000ff,0)
            ;
          }
        }
        iVar6 = *(int *)(&UNK_00002844 + lVar5);
      }
      if (iVar6 == 0x14) {
        func_0x0033dd94("(and more errors)");
      }
      FUN_00314208();
    }
    *(int *)(&UNK_00002844 + lVar5) = *(int *)(&UNK_00002844 + lVar5) + 1;
    pcVar8 = *(code **)(&UNK_00002828 + lVar5);
  }
  else {
    pcVar8 = *(code **)(&UNK_00002828 + lVar5);
  }
  if (pcVar8 != (code *)0x0) {
    (*pcVar8)(lVar5,*(undefined8 *)(&UNK_00002830 + lVar5),"Calling EndDisabled() too many times!");
  }
  return (ulong)*(byte *)(lVar5 + 0x9d);
/*
 *  proprietary - see LICENSE - do not sell
 *
 *  @pengussy
 */
}

