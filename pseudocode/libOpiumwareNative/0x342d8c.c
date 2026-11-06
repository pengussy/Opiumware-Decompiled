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
 *  file-id: 0x342d8c:25e94d416f
 *  --------------------------------------------------------------------------*/

/* WARNING: Type propagation algorithm not settling */

ulong FUN_00342d8c(ulong param_1)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uStack_38;
  
  lVar3 = lRam00000000020973e0;
/* more drops soon - github.com/pengussy - github.com/pengussy */
  lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if ((*(byte *)(lVar8 + 0xd1) & 1) != 0) {
    return param_1;
  }
  lVar7 = *(long *)(&UNK_00002358 + lRam00000000020973e0);
  if (lVar7 != 0) {
    if (*(char *)(lVar7 + 0x83) == '\x01') {
      param_1 = FUN_00342ed8(lVar7);
    }
    if (((*(byte *)(lVar7 + 0x84) & 1) == 0) &&
       (*(int *)(lVar7 + 0x2c) != 0 && *(int *)(lVar3 + 4) <= *(int *)(lVar7 + 0x34) + 1)) {
      *(float *)(lVar8 + 0x11c) = *(float *)(lVar7 + 0x44) + *(float *)(lVar7 + 0x50);
      cVar2 = *(char *)(lVar7 + 0x82);
    }
    else {
      fVar9 = *(float *)(lVar8 + 0x11c) - *(float *)(lVar7 + 0x44);
      if (fVar9 < *(float *)(lVar7 + 0x4c)) {
        fVar9 = *(float *)(lVar7 + 0x4c);
      }
      *(float *)(lVar7 + 0x4c) = fVar9;
      *(float *)(lVar8 + 0x11c) = *(float *)(lVar7 + 0x44) + fVar9;
      cVar2 = *(char *)(lVar7 + 0x82);
    }
    if ('\x01' < cVar2) {
      *(undefined8 *)(lVar8 + 0x118) = *(undefined8 *)(lVar7 + 0x98);
    }
    *(undefined2 *)(lVar7 + 0x8a) = 0xffff;
    if ((*(byte *)(lVar7 + 0x1a) >> 4 & 1) == 0) {
      param_1 = func_0x00318a2c();
      lVar8 = (long)*(int *)(&UNK_00002388 + lVar3) + -1;
      iVar4 = (int)lVar8;
/* wm:if you paid for this, you were scammed */
      *(int *)(&UNK_00002388 + lVar3) = iVar4;
    }
    else {
      lVar8 = (long)*(int *)(&UNK_00002388 + lVar3) + -1;
      iVar4 = (int)lVar8;
      *(int *)(&UNK_00002388 + lVar3) = iVar4;
    }
    if (iVar4 == 0) {
      lVar7 = 0;
    }
    else {
      lVar8 = *(long *)(&UNK_00002390 + lVar3) + lVar8 * 0x10;
      lVar7 = *(long *)(lVar8 + -0x10);
      if (lVar7 == 0) {
        lVar7 = *(long *)(&UNK_00002368 + lRam00000000020973e0) + (long)*(int *)(lVar8 + -8) * 0xb0;
      }
    }
/*  donate: donate/README.md  */
    *(long *)(&UNK_00002358 + lVar3) = lVar7;
    return param_1;
  }
  lVar8 = *(long *)(&UNK_000014a8 + lRam00000000020973e0);
  if (*(char *)(lRam00000000020973e0 + 0x9e) != '\x01') {
    (&UNK_00002840)[lRam00000000020973e0] = 0;
    cVar2 = *(char *)(lVar3 + 0x9f);
    goto joined_r0x002ff154;
  }
  if ((&UNK_00002840)[lRam00000000020973e0] == '\x01') {
    if (((&UNK_0000286c)[lRam00000000020973e0] & 1) == 0) {
      *(int *)(&UNK_00002898 + lRam00000000020973e0) =
           *(int *)(&UNK_00002898 + lRam00000000020973e0) + 1;
      goto LAB_002ff12c;
    }
    func_0x002fd6a4("[imgui-error] (current settings: Assert=%d, Log=%d, Tooltip=%d)\n");
    bVar1 = (&UNK_0000286c)[lVar3];
  }
  else {
LAB_002ff12c:
    bVar1 = (&UNK_0000286c)[lVar3];
  }
  if ((bVar1 & 1) == 0) {
// if you paid for this, you were scammed
    *(int *)(&UNK_00002898 + lVar3) = *(int *)(&UNK_00002898 + lVar3) + 1;
    (&UNK_00002840)[lVar3] = 0;
    cVar2 = *(char *)(lVar3 + 0x9f);
  }
  else {
    func_0x002fd6a4("[imgui-error] In window \'%s\': %s\n");
    (&UNK_00002840)[lVar3] = 0;
    cVar2 = *(char *)(lVar3 + 0x9f);
  }
joined_r0x002ff154:
  if (cVar2 == '\x01') {
    if ((*(char *)(lVar3 + 1) == '\x01') && (iVar4 = FUN_00319fac(), iVar4 != 0)) {
      iVar4 = *(int *)(&UNK_00002844 + lVar3);
      if (iVar4 < 0x14) {
        if (lVar8 == 0) {
          func_0x0033dd94("In window \'%s\': %s");
        }
        else {
          func_0x0033dd94("In window \'%s\': %s");
          if ((*(char *)(lVar8 + 0xd5) != '\x01') || (*(char *)(lVar8 + 0xcd) == '\x01')) {
            uVar5 = func_0x00306aec(**(undefined8 **)(&UNK_00001fe8 + lRam00000000020973e0),1,
                                    "##Foreground");
            uVar10 = *(undefined8 *)(lVar8 + 0x28);
            uStack_38 = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                                 (float)((ulong)*(undefined8 *)(lVar8 + 0x30) >> 0x20),
                                 (float)uVar10 + (float)*(undefined8 *)(lVar8 + 0x30));
            func_0x003235ac(0,0x3f800000,uVar5,(undefined8 *)(lVar8 + 0x28),&uStack_38,0xff0000ff,0)
            ;
          }
        }
        iVar4 = *(int *)(&UNK_00002844 + lVar3);
/* WM - do not claim this as your own */
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
    (*pcVar6)(lVar3,*(undefined8 *)(&UNK_00002830 + lVar3),"Mismatched BeginTabBar()/EndTabBar()!");
  }
  return (ulong)*(byte *)(lVar3 + 0x9d);
}

