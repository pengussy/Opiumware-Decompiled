/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x357b6c:ab4fb89acc
   =========================================================================== */

undefined8 FUN_00357b6c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  lVar2 = func_0x004759a8(param_2,
                          "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                          ,0x2a2);
  if (lVar2 == 0) {
LAB_00357c4c:
    uVar5 = 0;
  }
  else {
    puVar3 = (undefined1 *)_strchr(lVar2,0x2c);
    if (puVar3 == (undefined1 *)0x0) {
      iVar1 = func_0x00475c60(lVar2,&uStack_48,0,&uStack_38);
      if (iVar1 == 0) goto LAB_00357c4c;
      uStack_40 = uStack_38;
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_00357c3c;
LAB_00357bfc:
      iVar1 = func_0x0035972c();
      if (iVar1 == 0) {
        uVar5 = func_0x0035df14(*(undefined8 *)(param_1 + 0x18),uStack_38,uStack_40);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
        lVar4 = *(long *)(param_1 + 0x20);
      }
      else {
        uVar5 = 1;
        lVar4 = *(long *)(param_1 + 0x20);
      }
    }
    else {
      *puVar3 = 0;
      if (((puVar3[1] == '\0') ||
          (iVar1 = func_0x00475c60(puVar3 + 1,&uStack_48,0,&uStack_40), iVar1 == 0)) ||
         (iVar1 = func_0x00475c60(lVar2,&uStack_48,0,&uStack_38), iVar1 == 0)) goto LAB_00357c4c;
      if (*(long *)(param_1 + 0x18) != 0) goto LAB_00357bfc;
LAB_00357c3c:
      uVar5 = 0;
      lVar4 = *(long *)(param_1 + 0x20);
    }
    if (lVar4 != 0) {
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
      iVar1 = func_0x0035971c();
      if (iVar1 == 0) {
        uVar5 = func_0x0035e000(*(undefined8 *)(param_1 + 0x20),uStack_38,uStack_40);
      }
      else {
        uVar5 = 1;
      }
    }
  }
  func_0x004743e4(lVar2,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/ssl_conf.c"
                  ,0x2cf);
  return uVar5;
}

