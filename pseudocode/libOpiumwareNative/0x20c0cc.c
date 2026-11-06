/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x20c0cc:7d3f9c2815
   =========================================================================== */

undefined8 FUN_0020c0cc(undefined8 param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  long lStack_48;
  
  func_0x00793bd0(param_1,0,0);
/* wm:thanks for reading - discord.gg/sdkhDjTex */
  uStack_58 = 0;
  uStack_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  puStack_68 = (undefined8 *)0x0;
  uStack_70 = 0;
  __ZNSt3__15mutex4lockEv(0x1f26cb0);
  plVar1 = (long *)(lRam0000000002096f20 + (uRam0000000002096f38 / 0x49) * 8);
  if (lRam0000000002096f28 == lRam0000000002096f20) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lRam0000000002096f20 + (uRam0000000002096f38 / 0x49) * 8) +
            (uRam0000000002096f38 % 0x49) * 0x38;
    plVar2 = (long *)(lRam0000000002096f20 +
                     ((lRam0000000002096f40 + uRam0000000002096f38) / 0x49) * 8);
    lVar5 = *plVar2 + ((lRam0000000002096f40 + uRam0000000002096f38) % 0x49) * 0x38;
    if (lVar4 != lVar5) {
      lVar5 = ((long)plVar2 - (long)plVar1 >> 3) * 0x49 +
              (lVar5 - *plVar2 >> 3) * 0x6db6db6db6db6db7 +
              (lVar4 - *plVar1 >> 3) * -0x6db6db6db6db6db7;
      goto LAB_0020c204;
    }
  }
  lVar5 = 0;
LAB_0020c204:
  func_0x0021c0f0(&uStack_70,plVar1,lVar4,lVar5);
/* WM - if you paid for this, you were scammed */
  __ZNSt3__15mutex6unlockEv(0x1f26cb0);
  if (lStack_48 != 0) {
    iVar7 = 1;
    do {
      puVar3 = (undefined8 *)(puStack_68[uStack_50 / 0x49] + (uStack_50 % 0x49) * 0x38);
      lVar4 = (long)*(char *)((long)puVar3 + 0x17);
      puVar6 = puVar3;
      if (lVar4 < 0) {
        puVar6 = (undefined8 *)*puVar3;
        lVar4 = puVar3[1];
      }
      func_0x00792db8(param_1,puVar6,lVar4);
      func_0x00794504(param_1,0xfffffffe,iVar7);
      puVar6 = (undefined8 *)(puStack_68[uStack_50 / 0x49] + (uStack_50 % 0x49) * 0x38);
      if (*(char *)((long)puVar6 + 0x17) < '\0') {
        __ZdlPv(*puVar6);
      }
      uStack_50 = uStack_50 + 1;
      lStack_48 = lStack_48 + -1;
      if (0x91 < uStack_50) {
        __ZdlPv(*puStack_68);
        puStack_68 = puStack_68 + 1;
        uStack_50 = uStack_50 - 0x49;
      }
      iVar7 = iVar7 + 1;
    } while (lStack_48 != 0);
  }
  func_0x0016c748(&uStack_70);
  return 1;
}

