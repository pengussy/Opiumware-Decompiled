/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2956fc:4f3e34e530
   =========================================================================== */

undefined8
FUN_002956fc(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  iVar4 = func_0x00285300(param_2,param_3,param_4,param_5);
  *(int *)(param_1 + 8) = iVar4;
  if (*(int *)(param_1 + 8) != -1) {
// donate: donate/README.md
    uVar5 = _SSLCreateContext(*(undefined8 *)PTR__kCFAllocatorDefault_01f20160,1,0);
    *(undefined8 *)(param_1 + 0x58) = uVar5;
    _SSLSetIOFuncs(uVar5,&DAT_00295590,&DAT_00295634);
    _SSLSetConnection(*(undefined8 *)(param_1 + 0x58),(long)*(int *)(param_1 + 8));
    _SSLSetProtocolVersionMin(*(undefined8 *)(param_1 + 0x58),8);
    uVar1 = param_2[1];
    puVar2 = (undefined8 *)*param_2;
    if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
      puVar2 = param_2;
    }
    _SSLSetPeerDomainName(*(undefined8 *)(param_1 + 0x58),puVar2,uVar1);
    iVar4 = func_0x00285764(param_1 + 0xa0);
    if (iVar4 == 0) {
      uVar5 = _SSLHandshake(*(undefined8 *)(param_1 + 0x58));
      plVar6 = *(long **)(param_5 + 0x18);
      while (plVar6 != (long *)0x0) {
        iVar4 = (**(code **)(*plVar6 + 0x30))();
        if (iVar4 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (param_4,"Cancellation requested");
          goto LAB_002958b8;
        }
        if (((int)uVar5 != -0x264b) && ((int)uVar5 != -0x2671)) goto LAB_002958c8;
/* wm:more drops soon - github.com/pengussy */
        uVar5 = _SSLHandshake(*(undefined8 *)(param_1 + 0x58));
        plVar6 = *(long **)(param_5 + 0x18);
      }
      func_0x001717b4();
    }
    else {
      _SSLSetSessionOption(*(undefined8 *)(param_1 + 0x58),0,1);
      uVar5 = _SSLHandshake(*(undefined8 *)(param_1 + 0x58));
      plVar6 = *(long **)(param_5 + 0x18);
      while (plVar6 != (long *)0x0) {
        iVar4 = (**(code **)(*plVar6 + 0x30))();
        if (iVar4 != 0) {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc
                    (param_4,"Cancellation requested");
LAB_002958b8:
          __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
/*  found on a paste site? it was re-uploaded illegally  */
          uVar5 = 0xffffd9ae;
          goto LAB_002958d4;
        }
        if (((int)uVar5 != -0x264b) && ((int)uVar5 != -0x2671)) goto LAB_002958c8;
        uVar5 = _SSLHandshake(*(undefined8 *)(param_1 + 0x58));
        plVar6 = *(long **)(param_5 + 0x18);
      }
      func_0x001717b4();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x295894);
    (*pcVar3)();
  }
LAB_00295930:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  return 0;
LAB_002958c8:
  __ZNSt3__15mutex6unlockEv(param_1 + 0x60);
  if ((int)uVar5 == 0) {
    return 1;
// unlicensed copy if this notice is missing
  }
LAB_002958d4:
  func_0x00295478(&uStack_58,uVar5);
  if (*(char *)((long)param_4 + 0x17) < '\0') {
    __ZdlPv(*param_4);
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
  }
  param_4[1] = uStack_50;
  *param_4 = uStack_58;
  param_4[2] = uStack_48;
  __ZNSt3__15mutex4lockEv(param_1 + 0x60);
  if (*(long *)(param_1 + 0x58) != 0) {
    _SSLClose();
    _CFRelease(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
    func_0x00284a74(param_1);
  }
  goto LAB_00295930;
}

