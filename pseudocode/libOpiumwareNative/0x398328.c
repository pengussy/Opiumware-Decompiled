/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x398328:e712ab3cb0
   =========================================================================== */

undefined4
FUN_00398328(long param_1,ulong param_2,ulong param_3,int param_4,int param_5,ulong *param_6)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined4 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  uVar8 = *(ulong *)(param_1 + 0x6c0);
  uVar7 = *(ulong *)(param_1 + 0x6a0);
  uVar10 = uVar7 & 7 ^ 3;
  if (param_4 == 0) {
/* WM - watermarked copy - do not remove */
    if (uVar8 == 0) {
      *(ulong *)(param_1 + 0x6b8) = uVar10;
      lVar5 = uVar7 + uVar10;
      *(long *)(param_1 + 0xff0) = lVar5;
      *(undefined8 *)(param_1 + 0xff8) = 0;
    }
    else {
      lVar5 = uVar7 + *(long *)(param_1 + 0x6b8);
      *(long *)(param_1 + 0xff0) = lVar5;
      *(undefined8 *)(param_1 + 0xff8) = 0;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0xff0);
  }
  if (lVar5 == 0) {
    func_0x019e7044(param_1);
    return 0xfffffffe;
  }
  lVar9 = *(long *)(param_1 + 0xff8);
  lVar1 = uVar7 + uVar10;
  if ((param_5 == 1) && (lVar5 != lVar1)) {
    _memmove(lVar1,lVar5,lVar9 + uVar8);
    *(long *)(param_1 + 0xff0) = lVar1;
    *(ulong *)(param_1 + 0x6b8) = lVar9 + uVar10;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((param_4 != 0) && (uVar8 == 0)) {
      return 0xffffffff;
    }
    uVar7 = param_2;
    if (uVar8 <= param_2) {
      uVar7 = uVar8;
    }
    if (uVar8 != 0) {
      param_2 = uVar7;
    }
  }
  if (uVar8 < param_2) {
    uVar7 = *(long *)(param_1 + 0x6b0) - *(long *)(param_1 + 0x6b8);
    if (uVar7 < param_2) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,0x17a,"tls_default_read_n");
      func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
      return 0xfffffffe;
    }
    if (param_3 <= param_2) {
      param_3 = param_2;
    }
    if (uVar7 <= param_3) {
      param_3 = uVar7;
    }
/* WM: more drops soon - github.com/pengussy @ discord.gg/sdkhDjTex */
    uVar7 = param_2;
    if (*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
                param_1 + 0x34) != 0 || *(int *)(param_1 + 0x10) != 0) {
      uVar7 = param_3;
    }
    do {
      while( true ) {
        lVar5 = *(long *)(param_1 + 0x38);
        if (lVar5 == 0) {
          lVar5 = *(long *)(param_1 + 0x40);
          puVar4 = (undefined4 *)___error();
          *puVar4 = 0;
          if (lVar5 == 0) {
            func_0x004464bc();
            func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                            ,0x1ab,"tls_default_read_n");
            func_0x00397da4(param_1,0x50,0xd3,0);
            uVar6 = 0xfffffffe;
            goto LAB_003985d4;
          }
        }
        else {
          puVar4 = (undefined4 *)___error();
          *puVar4 = 0;
        }
        uVar2 = func_0x003e9754(lVar5,lVar1 + lVar9 + uVar8,(int)uVar7 - (int)uVar8);
        if ((int)uVar2 < 1) break;
        uVar8 = uVar8 + uVar2;
        uVar10 = param_2;
        if (uVar8 <= param_2) {
          uVar10 = uVar8;
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          param_2 = uVar10;
        }
        lVar5 = uVar8 - param_2;
/* donate: donate/README.md */
        if (param_2 <= uVar8) goto LAB_00398544;
      }
      iVar3 = func_0x003e95a0(lVar5,8);
      if (iVar3 == 0) {
        iVar3 = func_0x003ea6e4(lVar5);
        uVar6 = 0xfffffffd;
        if (iVar3 == 0) {
          uVar6 = 0xfffffffe;
        }
LAB_003985d4:
        *(ulong *)(param_1 + 0x6c0) = uVar8;
        if ((*(byte *)(param_1 + 0x58) >> 4 & 1) == 0) {
          return uVar6;
        }
        if (*(int *)(param_1 + 0x10) != 0) {
          return uVar6;
        }
        if (lVar9 != -uVar8) {
          return uVar6;
        }
        if ((*(byte *)(param_1 + 0x50) >> 1 & 1) != 0) {
          func_0x0046eb00(*(undefined8 *)(param_1 + 0x6a0),*(undefined8 *)(param_1 + 0x6b0));
        }
        func_0x004743e4(*(undefined8 *)(param_1 + 0x6a0),
                        "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                        ,0x11c);
        *(undefined8 *)(param_1 + 0x6a0) = 0;
        *(undefined8 *)(param_1 + 0xff0) = 0;
        *(undefined8 *)(param_1 + 0xff8) = 0;
        return uVar6;
      }
/*  more drops soon - github.com/pengussy  */
      uVar6 = 0;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_003985d4;
      func_0x003e9468();
      *(undefined8 *)(param_1 + 0x38) = 0;
      lVar5 = uVar8 - param_2;
    } while (uVar8 < param_2);
LAB_00398544:
    *(ulong *)(param_1 + 0x6b8) = *(long *)(param_1 + 0x6b8) + param_2;
    *(long *)(param_1 + 0x6c0) = lVar5;
    *(ulong *)(param_1 + 0xff8) = *(long *)(param_1 + 0xff8) + param_2;
  }
  else {
    *(ulong *)(param_1 + 0xff8) = *(long *)(param_1 + 0xff8) + param_2;
    *(ulong *)(param_1 + 0x6c0) = uVar8 - param_2;
    *(ulong *)(param_1 + 0x6b8) = *(long *)(param_1 + 0x6b8) + param_2;
  }
  *param_6 = param_2;
  return 1;
}
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */

