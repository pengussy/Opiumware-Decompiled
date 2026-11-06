/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37db98:a60d580803
   =========================================================================== */

uint FUN_0037db98(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined4 uStack_70;
  long alStack_68 [3];
  long lStack_50;
  long lStack_48;
  int iStack_40;
  int iStack_34;
  
  *param_4 = 0;
  iVar2 = FUN_0037e724(param_1,alStack_68,3);
// WM - keep the notice, keep the source honest
  if (iVar2 == 0) {
    return 0;
  }
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb50();
  iStack_34 = 1;
  if (iStack_40 == 0) {
    if (lStack_50 != 0) {
      *(undefined4 *)(lStack_50 + 0x178) = 0;
    }
  }
  else if (lStack_48 != 0) {
    *(undefined4 *)(lStack_48 + 0xb8) = 0;
  }
  iVar2 = FUN_0037c9cc(alStack_68);
  if (0 < iVar2) {
    if (lStack_48 == 0) {
      iVar2 = FUN_0037ebe8(alStack_68,0);
      if (iVar2 == 0) goto LAB_0037dce8;
      lStack_48 = *(long *)(lStack_50 + 0xb0);
    }
    iVar2 = func_0x0037f44c(alStack_68,*(undefined8 *)(lStack_48 + 0x80),param_2,param_3,param_4,
                            param_5);
    if (iVar2 != 0) {
      if (*param_4 != 0) {
        if (((*(ushort *)(lStack_50 + 0x150) >> 5 & 1) == 0) &&
           (iVar2 = func_0x00375608(*(undefined8 *)(lStack_50 + 0xa0)), iVar2 == 0)) {
          lVar7 = alStack_68[0];
          do {
            bVar1 = *(byte *)(lVar7 + 0x70) >> 5 & 3;
            if (bVar1 != 0) {
              if (bVar1 == 2) goto LAB_0037dd08;
              break;
            }
            lVar7 = *(long *)(lVar7 + 0x40);
          } while (lVar7 != 0);
          uVar4 = func_0x0037a47c(*(undefined8 *)(alStack_68[0] + 0x58));
          func_0x003827d0(uVar4,0);
/* do not claim this as your own */
        }
LAB_0037dd08:
        uVar3 = 1;
        goto LAB_0037dd0c;
      }
      uVar4 = extraout_x1;
      if (((*(ushort *)(lStack_50 + 0x150) >> 5 & 1) == 0) &&
         (iVar2 = func_0x00375608(*(undefined8 *)(lStack_50 + 0xa0)), uVar4 = extraout_x1_00,
         iVar2 == 0)) {
        iVar2 = func_0x003806c4(alStack_68[0]);
        if (iVar2 == 0) {
          func_0x0037c334(alStack_68[0]);
          iVar2 = func_0x0037f44c(alStack_68,*(undefined8 *)(lStack_48 + 0x80),param_2,param_3,
                                  param_4,param_5);
          if (iVar2 != 0) {
            if (*param_4 != 0) goto LAB_0037dd08;
            if (iStack_34 != 0) {
              if (iStack_40 == 0) {
                if (lStack_50 != 0) {
                  uVar3 = 0;
                  *(undefined4 *)(lStack_50 + 0x178) = 2;
                  goto LAB_0037dd0c;
                }
              }
              else if (lStack_48 != 0) {
                uVar3 = 0;
                *(undefined4 *)(lStack_48 + 0xb8) = 2;
                goto LAB_0037dd0c;
              }
            }
/* WM - if you paid for this, you were scammed */
          }
          goto LAB_0037dce8;
        }
        plStack_98 = alStack_68;
        uStack_90 = *(undefined8 *)(lStack_48 + 0x80);
        uStack_70 = (undefined4)param_5;
        uVar4 = *(undefined8 *)(alStack_68[0] + 0x58);
        uStack_88 = param_2;
        uStack_80 = param_3;
        plStack_78 = param_4;
        func_0x0037a4f4(uVar4,0);
        uVar4 = func_0x0037a47c(uVar4);
        uVar3 = func_0x00382870(uVar4,&DAT_0037f6c8,&plStack_98,0);
        if (uVar3 != 0) {
          uVar3 = ~uVar3 >> 0x1f;
          goto LAB_0037dd0c;
        }
        uVar5 = 0xc41;
        puVar6 = &UNK_000c0103;
        uVar4 = extraout_x1_01;
      }
      else {
        uVar5 = 0xc30;
        puVar6 = (undefined *)0xcf;
      }
      func_0x0037b358(alStack_68,uVar4,uVar5,"quic_read",puVar6,0);
    }
  }
LAB_0037dce8:
  uVar3 = 0;
LAB_0037dd0c:
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb80();
  return uVar3;
}

