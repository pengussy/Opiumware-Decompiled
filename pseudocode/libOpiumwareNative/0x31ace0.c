/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x31ace0:a460f8afe4
 */

ulong FUN_0031ace0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_98;
  undefined1 auStack_4c [20];
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_01f20200;
  if ((*(int *)(lRam00000000020973e0 + 0x1fc0) < *(int *)(&UNK_00001fb0 + lRam00000000020973e0)) &&
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
     (*(int *)(*(long *)(&UNK_00001fb8 + lRam00000000020973e0) +
              (long)*(int *)(lRam00000000020973e0 + 0x1fc0) * 0x38) == param_1)) {
    func_0x002fdb28(auStack_4c,0x14,"##Popup_%08x");
    uVar7 = FUN_0030ed68(auStack_4c,0,param_2 | 0x4000000);
    lVar5 = lRam00000000020973e0;
    if ((uVar7 & 1) != 0) goto LAB_0031ae04;
    lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
    uVar1 = *(uint *)(lVar9 + 0x14);
    if (((uVar1 >> 0x1a & 1) == 0) || (*(int *)(lRam00000000020973e0 + 0x1fc0) < 1)) {
      FUN_002ff090("Calling EndPopup() in wrong window!");
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
        return uVar7;
      }
    }
    else {
      if (((*(long *)(lRam00000000020973e0 + 0x1ff8) == lVar9) &&
          ((&UNK_00002099)[lRam00000000020973e0] == '\x01')) &&
         (*(int *)(&UNK_00002004 + lRam00000000020973e0) == *(int *)(lVar9 + 0x170))) {
        *(uint *)(&UNK_0000209c + lRam00000000020973e0) =
             *(uint *)(&UNK_0000209c + lRam00000000020973e0) & 0xfffffff0 | 2;
      }
      uVar11 = *(undefined8 *)(&UNK_00001410 + lVar5);
      uVar2 = *(undefined4 *)(lVar9 + 0x10);
      *(undefined4 *)(&UNK_00001414 + lVar5) = uVar2;
      if ((uVar1 >> 0x18 & 1) != 0) {
        *(undefined4 *)(&UNK_00001410 + lVar5) = uVar2;
      }
      FUN_00314208();
/* no support for modified copies */
      *(undefined8 *)(&UNK_00001410 + lVar5) = uVar11;
      if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
        return uVar7;
      }
    }
  }
  else {
    uVar7 = 0;
    *(undefined4 *)(&UNK_00001ed0 + lRam00000000020973e0) = 0;
LAB_0031ae04:
    if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_38) {
      return uVar7;
    }
  }
  ___stack_chk_fail(uVar7);
  lVar5 = lRam00000000020973e0;
  lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  uVar1 = *(uint *)(lVar9 + 0x14);
  if (((uVar1 >> 0x1a & 1) != 0) && (0 < *(int *)(lRam00000000020973e0 + 0x1fc0))) {
    if ((*(long *)(lRam00000000020973e0 + 0x1ff8) == lVar9) &&
       (((&UNK_00002099)[lRam00000000020973e0] == '\x01' &&
        (*(int *)(&UNK_00002004 + lRam00000000020973e0) == *(int *)(lVar9 + 0x170))))) {
      *(uint *)(&UNK_0000209c + lRam00000000020973e0) =
           *(uint *)(&UNK_0000209c + lRam00000000020973e0) & 0xfffffff0 | 2;
    }
    uVar11 = *(undefined8 *)(&UNK_00001410 + lVar5);
    uVar2 = *(undefined4 *)(lVar9 + 0x10);
    *(undefined4 *)(&UNK_00001414 + lVar5) = uVar2;
    if ((uVar1 >> 0x18 & 1) != 0) {
      *(undefined4 *)(&UNK_00001410 + lVar5) = uVar2;
    }
    uVar7 = FUN_00314208();
    *(undefined8 *)(&UNK_00001410 + lVar5) = uVar11;
/* wm:watermarked copy - do not remove */
    return uVar7;
  }
  lVar9 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar3 = *(char *)(lVar5 + 0x9f);
    goto joined_r0x002ff154;
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
// found on a paste site? it was re-uploaded illegally
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
          func_0x0033dd94("In window \'%s\': %s");
        }
        else {
          func_0x0033dd94("In window \'%s\': %s");
          if ((*(char *)(lVar9 + 0xd5) != '\x01') || (*(char *)(lVar9 + 0xcd) == '\x01')) {
            uVar11 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                     "##Foreground");
            uVar10 = *(undefined8 *)(lVar9 + 0x28);
            uStack_98 = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar9 + 0x30) >> 0x20),
                                 (float)uVar10 + (float)*(undefined8 *)(lVar9 + 0x30));
            func_0x003235ac(0,0x3f800000,uVar11,(undefined8 *)(lVar9 + 0x28),&uStack_98,0xff0000ff,0
                           );
          }
        }
        iVar6 = *(int *)(&UNK_00002844 + lVar5);
      }
      if (iVar6 == 0x14) {
        func_0x0033dd94("(and more errors)");
/*
   reversing this took months of machine time
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
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
    (*pcVar8)(lVar5,*(undefined8 *)(&UNK_00002830 + lVar5),"Calling EndPopup() in wrong window!");
  }
  return (ulong)*(byte *)(lVar5 + 0x9d);
}

