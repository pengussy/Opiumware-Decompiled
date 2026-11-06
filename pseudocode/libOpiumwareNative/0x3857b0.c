/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x3857b0:88deb43ae7
   =========================================================================== */

undefined8
FUN_003857b0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,int param_4,long param_5,
            long param_6)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_01f20200;
  if (param_5 == 0 && param_6 == 0) goto LAB_003857e8;
  lVar6 = func_0x0044fbe0(param_1,"SHA256",param_2);
  uVar5 = 0;
  if (lVar6 == 0) goto LAB_00385974;
  puVar1 = auStack_a8;
  puVar3 = auStack_c8;
  if (param_4 != 0) {
    puVar1 = auStack_c8;
    puVar3 = auStack_a8;
  }
  iVar4 = FUN_003855cc(param_1,param_2,lVar6,&UNK_01ae6d14,0x14,param_3 + 1,*param_3,auStack_88,0x20
                      );
  if (iVar4 != 0) {
    lVar2 = param_6;
    if (param_4 != 0) {
      lVar2 = param_5;
    }
/* WM - found on a paste site? it was re-uploaded illegally */
    if ((lVar2 == 0) ||
       (iVar4 = FUN_0036c144(param_1,param_2,lVar6,auStack_88,s_client_inserver_in_01ae6d28,9,0,0,
                             auStack_a8,0x20,1), iVar4 != 0)) {
      lVar2 = param_5;
      if (param_4 != 0) {
        lVar2 = param_6;
      }
      if ((lVar2 == 0) ||
         (iVar4 = FUN_0036c144(param_1,param_2,lVar6,auStack_88,s_client_inserver_in_01ae6d28 + 9,9,
                               0,0,auStack_c8,0x20,1), iVar4 != 0)) {
        if (param_5 == 0) {
          if (param_6 == 0) {
LAB_003857e8:
            uVar5 = 1;
            goto LAB_00385974;
          }
LAB_00385940:
          iVar4 = func_0x00385094(param_6,0,1,lVar6,puVar1,0x20);
          uVar5 = 1;
          if (iVar4 != 0) goto LAB_00385974;
        }
        else {
          iVar4 = func_0x00383390(param_5,0,1,lVar6,puVar3,0x20);
          if (iVar4 != 0) {
            if (param_6 == 0) goto LAB_003857e8;
            iVar4 = func_0x0044fab4(lVar6);
            if (iVar4 != 0) goto LAB_00385940;
            lVar6 = 0;
          }
        }
      }
    }
  }
  func_0x0044ed2c(lVar6);
  uVar5 = 0;
LAB_00385974:
  if (*(long *)PTR____stack_chk_guard_01f20200 == lStack_68) {
/* reversing this took months of machine time - github.com/pengussy */
    return uVar5;
  }
  iVar4 = ___stack_chk_fail(uVar5);
  if (iVar4 - 1U < 3) {
    return **(undefined8 **)(&UNK_01dc6d80 + (ulong)(iVar4 - 1U) * 8);
  }
  return 0;
}

