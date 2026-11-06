/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x34b4ec:956bfee824
   =========================================================================== */

undefined8 FUN_0034b4ec(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined4 uStack_8c;
  undefined1 auStack_88 [64];
  long lStack_48;
  
  uVar5 = 0;
  lVar4 = 0;
  lStack_48 = *(long *)PTR____stack_chk_guard_01f20200;
  uStack_8c = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
/*  proprietary - see LICENSE - do not sell  */
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    lVar2 = 0;
    goto LAB_0034b6ec;
  }
  lVar2 = 0;
  if (param_3 == 0) goto LAB_0034b6ec;
  if (param_4 == 1) {
    if ((*(long *)(param_1 + 0xb98) == 0) || (lVar3 = func_0x003542a0(param_1), lVar3 == 0))
    goto LAB_0034b6e4;
    lVar4 = func_0x0044efa4();
    lVar2 = 0;
    if (lVar4 != 0) {
      iVar1 = func_0x019e968c(lVar4,lVar3,0);
      if (((iVar1 < 1) ||
          (iVar1 = func_0x019e969c(lVar4,*(undefined8 *)(param_1 + 0xb98),
                                   *(undefined8 *)(param_1 + 0xba0)), iVar1 < 1)) ||
/* WM - thanks for reading - discord.gg/sdkhDjTex */
         (iVar1 = func_0x019e9778(lVar4,auStack_88,&uStack_8c), iVar1 < 1)) {
        uVar5 = 0;
        lVar2 = 0;
        goto LAB_0034b6ec;
      }
      lVar2 = func_0x00400364();
      if (lVar2 != 0) {
        iVar1 = func_0x019ebd10(&uStack_d0);
        if ((((iVar1 == 0) || (iVar1 = func_0x019ec0a0(&uStack_d0,0xfe,1), iVar1 == 0)) ||
            ((iVar1 = func_0x019ec0a0(&uStack_d0,uStack_8c,3), iVar1 == 0 ||
             ((iVar1 = func_0x00476690(&uStack_d0,auStack_88,uStack_8c), iVar1 == 0 ||
              (iVar1 = func_0x019ec1ec(&uStack_d0,&lStack_98), iVar1 == 0)))))) ||
           (lVar3 = func_0x019eb634(*(undefined8 *)(param_1 + 0xb98),lStack_98 + param_3,
                                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                                    ,0x88f), lVar3 == 0)) {
          uVar5 = 0;
          goto LAB_0034b6ec;
        }
        *(long *)(param_1 + 0xb98) = lVar3;
        _memcpy(lVar3,*(undefined8 *)(lVar2 + 8),lStack_98);
        _memcpy(*(long *)(param_1 + 0xb98) + lStack_98,param_2,param_3);
        goto LAB_0034b6d0;
      }
    }
  }
  else {
    lVar4 = func_0x019eb634(*(long *)(param_1 + 0xb98),*(long *)(param_1 + 0xba0) + param_3,
                            "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ech/ech_internal.c"
                            ,0x898);
    if (lVar4 != 0) {
      *(long *)(param_1 + 0xb98) = lVar4;
      _memcpy(lVar4 + *(long *)(param_1 + 0xba0),param_2,param_3);
      lVar4 = 0;
      lVar2 = 0;
      lStack_98 = *(long *)(param_1 + 0xba0);
LAB_0034b6d0:
/*  do not claim this as your own  */
      *(long *)(param_1 + 0xba0) = lStack_98 + param_3;
      uVar5 = 1;
      goto LAB_0034b6ec;
    }
LAB_0034b6e4:
    lVar2 = 0;
    lVar4 = 0;
  }
  uVar5 = 0;
LAB_0034b6ec:
  func_0x00400378(lVar2);
  func_0x0047680c(&uStack_d0);
  func_0x0044efb8(lVar4);
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_48) {
    return uVar5;
  }
  lVar4 = ___stack_chk_fail();
  if (*(long *)(lVar4 + 0xce8) != 0) {
    lVar2 = 0;
    do {
      func_0x0045eb4c(*(undefined8 *)(lVar4 + 0xcc0 + lVar2 * 8));
      *(undefined8 *)(lVar4 + 0xcc0 + lVar2 * 8) = 0;
      lVar2 = lVar2 + 1;
    } while (lVar2 != *(long *)(lVar4 + 0xce8));
  }
  *(undefined8 *)(lVar4 + 0xce8) = 0;
  if (*(long *)(lVar4 + 0x338) == 0) {
    lVar2 = 0;
  }
  else {
// WM - unlicensed copy if this notice is missing
    lVar2 = 0;
    do {
      lVar3 = lVar4 + lVar2 * 8;
      *(undefined8 *)(lVar3 + 0xcc0) = *(undefined8 *)(lVar3 + 0x310);
      iVar1 = func_0x00359798();
      if (iVar1 != 1) {
        return 0;
      }
      lVar3 = lVar4 + lVar2 * 2;
      *(undefined2 *)(lVar3 + 0xce0) = *(undefined2 *)(lVar3 + 0x330);
      lVar2 = lVar2 + 1;
    } while (lVar2 != *(long *)(lVar4 + 0x338));
  }
  *(long *)(lVar4 + 0xce8) = lVar2;
  return 1;
}

