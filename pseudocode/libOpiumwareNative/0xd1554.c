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
 *  file-id: 0xd1554:6854c63aa4
 *  --------------------------------------------------------------------------*/

undefined8 FUN_000d1554(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lStack_70;
  int iStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  char cStack_58;
  long **pplStack_50;
  undefined1 *puStack_48;
  undefined8 uStack_40;
  long *plStack_38;
  
  func_0x000d02b8();
  func_0x007a1f28(param_1,1,8);
  uStack_60 = 0x1f26eb8;
  cStack_58 = '\x01';
  __ZNSt3__115recursive_mutex4lockEv();
  func_0x000d042c(param_1,&uStack_60);
  if ((((lRam0000000001f26f88 != 0) && (cRam0000000001f270e8 == '\x01')) &&
      (cRam0000000002097053 == '\x01')) && (lRam0000000001f26f88 == lRam0000000002097030)) {
    lVar4 = func_0x00791618(param_1);
    lVar5 = func_0x00791618(lRam0000000001f26f88);
    if (lVar4 == lVar5) {
      __ZNSt3__15mutex4lockEv(0x1f26e70);
      plVar2 = plRam0000000001f26f08;
      for (plVar1 = plRam0000000001f26f00; plVar1 != plVar2; plVar1 = plVar1 + 2) {
/* WM - keep the notice, keep the source honest */
        func_0x00793928(param_1,0xffffd8f0,(int)plVar1[1]);
        iVar3 = func_0x00791f88(param_1,0xffffffff,1);
        if (iVar3 != 0) {
          __ZNSt3__15mutex6unlockEv(0x1f26e70);
          uVar6 = 1;
          goto LAB_000d1628;
        }
        func_0x00791660(param_1,0xfffffffe);
      }
      __ZNSt3__15mutex6unlockEv(0x1f26e70);
      iStack_68 = 0;
      LOAcquire();
      LORelease();
      lStack_70 = lRam0000000001f27140 + 1;
      lRam0000000001f27140 = lRam0000000001f27140 + 1;
      iStack_68 = func_0x00796158(param_1,1);
      if (0 < iStack_68) {
        __ZNSt3__15mutex4lockEv(0x1f26e70);
        plStack_38 = plRam0000000001f26f08;
        pplStack_50 = &plStack_38;
        uStack_40 = 0x1f26f00;
        if (plRam0000000001f26f08 < plRam0000000001f26f10) {
          plRam0000000001f26f08[1] = CONCAT44(uStack_64,iStack_68);
          *plRam0000000001f26f08 = lStack_70;
          plRam0000000001f26f08 = plRam0000000001f26f08 + 2;
          puStack_48 = (undefined1 *)&lStack_70;
        }
        else {
          puStack_48 = (undefined1 *)&lStack_70;
          func_0x0013c178(&pplStack_50);
          plRam0000000001f26f08 = plStack_38;
        }
        iVar3 = iRam0000000001f270ec;
        uVar6 = 1;
        iRam0000000001f270ec = iRam0000000001f270ec + 1;
        LORelease();
        __ZNSt3__15mutex6unlockEv(iVar3,0x1f26e70);
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
        func_0x00793928(param_1,0xffffd8f0,iStack_68);
        goto LAB_000d1628;
      }
    }
  }
  uVar6 = 0;
LAB_000d1628:
  if (cStack_58 == '\x01') {
    __ZNSt3__115recursive_mutex6unlockEv(uStack_60);
  }
  return uVar6;
}

