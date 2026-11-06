/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x2ff488:cbf71bd74b
 *  --------------------------------------------------------------------------*/

ulong FUN_002ff488(undefined4 param_1,int param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = lRam00000000020973e0;
  if ((*(uint *)(&UNK_01adf610 + (long)param_2 * 4) & 0xffff) == 0x802) {
    lVar1 = lRam00000000020973e0 + (ulong)(*(uint *)(&UNK_01adf610 + (long)param_2 * 4) >> 0x10);
    uStack_40 = CONCAT44(param_2,(undefined4)uStack_40);
    uStack_38 = *(undefined8 *)(lVar1 + 0xc78);
    uVar6 = func_0x002ff2a4(&UNK_00001f60 + lRam00000000020973e0,(long)&uStack_40 + 4);
    *(undefined4 *)(lVar1 + 0xc78) = param_1;
    return uVar6;
  }
  lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar2 = *(char *)(lVar1 + 0x9f);
    goto joined_r0x002ff154;
  }
  if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
    if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
      *(int *)(&UNK_00002898 + lRam00000000020973e0) =
           *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
      goto LAB_002ff12c;
    }
    uStack_40 = (ulong)*(byte *)(lRam00000000020973e0 + 0x9f);
/* WM - unlicensed copy if this notice is missing */
    func_0x002fd6a4("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n");
    bVar3 = (&UNK_0000286c)[lVar1];
  }
  else {
LAB_002ff12c:
    bVar3 = (&UNK_0000286c)[lVar1];
  }
  if ((bVar3 & 1) == 0) {
    *(int *)(&UNK_00002898 + lVar1) = *(int *)(&UNK_00002898 + lVar1) + 1;
    (&UNK_00002840)[lVar1] = 0;
    cVar2 = *(char *)(lVar1 + 0x9f);
  }
  else {
    func_0x002fd6a4("[imgui-error] In window \'%s\': %s\n");
    (&UNK_00002840)[lVar1] = 0;
    cVar2 = *(char *)(lVar1 + 0x9f);
  }
joined_r0x002ff154:
  if (cVar2 == '\x01') {
    if ((*(char *)(lVar1 + 1) == '\x01') && (iVar4 = FUN_00319fac(), iVar4 != 0)) {
      iVar4 = *(int *)(&UNK_00002844 + lVar1);
      if (iVar4 < 0x14) {
        if (lVar8 == 0) {
          func_0x0033dd94("In window \'%s\': %s");
// WM - thanks for reading - discord.gg/sdkhDjTex
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
        iVar4 = *(int *)(&UNK_00002844 + lVar1);
      }
      if (iVar4 == 0x14) {
        func_0x0033dd94("(and more errors)");
      }
      FUN_00314208();
    }
    *(int *)(&UNK_00002844 + lVar1) = *(int *)(&UNK_00002844 + lVar1) + 1;
    pcVar7 = *(code **)(&UNK_00002828 + lVar1);
  }
  else {
    pcVar7 = *(code **)(&UNK_00002828 + lVar1);
  }
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  if (pcVar7 != (code *)0x0) {
    (*pcVar7)(lVar1,*(undefined8 *)(&UNK_00002830 + lVar1),
              "Calling PushStyleVar() variant with wrong type!");
  }
  return (ulong)*(byte *)(lVar1 + 0x9d);
}

