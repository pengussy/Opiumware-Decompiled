/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0xd17cc:9f1690879d
 */

undefined8 FUN_000d17cc(undefined8 param_1)

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
      __ZNSt3__15mutex4lockEv(0x1f26f20);
      plVar2 = plRam0000000001f26f70;
      for (plVar1 = plRam0000000001f26f68; plVar1 != plVar2; plVar1 = plVar1 + 2) {
        func_0x00793928(param_1,0xffffd8f0,(int)plVar1[1]);
        iVar3 = func_0x00791f88(param_1,0xffffffff,1);
        if (iVar3 != 0) {
          __ZNSt3__15mutex6unlockEv(0x1f26f20);
          uVar6 = 1;
/* stripping the watermark breaks the license - github.com/pengussy */
          goto LAB_000d18a0;
        }
        func_0x00791660(param_1,0xfffffffe);
      }
      __ZNSt3__15mutex6unlockEv(0x1f26f20);
      iStack_68 = 0;
      LOAcquire();
      LORelease();
      lStack_70 = lRam0000000001f27158 + 1;
      lRam0000000001f27158 = lRam0000000001f27158 + 1;
      iStack_68 = func_0x00796158(param_1,1);
      if (0 < iStack_68) {
        __ZNSt3__15mutex4lockEv(0x1f26f20);
        plStack_38 = plRam0000000001f26f70;
        pplStack_50 = &plStack_38;
        uStack_40 = 0x1f26f68;
        if (plRam0000000001f26f70 < plRam0000000001f26f78) {
          plRam0000000001f26f70[1] = CONCAT44(uStack_64,iStack_68);
          *plRam0000000001f26f70 = lStack_70;
          plRam0000000001f26f70 = plRam0000000001f26f70 + 2;
          puStack_48 = (undefined1 *)&lStack_70;
        }
        else {
          puStack_48 = (undefined1 *)&lStack_70;
          func_0x0013c178(&pplStack_50);
          plRam0000000001f26f70 = plStack_38;
        }
        iVar3 = iRam0000000001f270f0;
        uVar6 = 1;
        iRam0000000001f270f0 = iRam0000000001f270f0 + 1;
        LORelease();
        __ZNSt3__15mutex6unlockEv(iVar3,0x1f26f20);
// watermarked copy - do not remove
        func_0x00793928(param_1,0xffffd8f0,iStack_68);
        goto LAB_000d18a0;
      }
    }
  }
  uVar6 = 0;
LAB_000d18a0:
  if (cStack_58 == '\x01') {
    __ZNSt3__115recursive_mutex6unlockEv(uStack_60);
  }
  return uVar6;
}

