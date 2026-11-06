/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37de3c:c958702477
 */

ulong FUN_0037de3c(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  long alStack_68 [3];
  long lStack_50;
  long lStack_48;
  int iStack_2c;
  ulong uStack_28;
  
  iVar1 = FUN_0037e724(param_1,alStack_68,3);
  if (iVar1 == 0) {
    return 0;
  }
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb50();
  if ((*(ushort *)(lStack_50 + 0x150) & 1) == 0) {
LAB_0037de7c:
    uVar6 = 0;
    goto LAB_0037dfb0;
  }
  if (lStack_48 == 0) {
    iVar1 = FUN_0037ebe8(alStack_68,1);
    uVar2 = extraout_x1_00;
    if (iVar1 != 0) {
      lStack_48 = *(long *)(lStack_50 + 0xb0);
      lVar5 = *(long *)(lStack_48 + 0x80);
      goto joined_r0x0037df20;
    }
    uVar3 = 0xc83;
/*  thanks for reading - discord.gg/sdkhDjTex  */
    puVar4 = (undefined *)0x163;
  }
  else {
    lVar5 = *(long *)(lStack_48 + 0x80);
    uVar2 = extraout_x1;
joined_r0x0037df20:
    if (lVar5 != 0) {
      if (param_2 == 0) {
        iStack_2c = 0;
        if (*(byte *)(lVar5 + 0x102) - 1 < 3) {
          iVar1 = func_0x00385fb4(*(undefined8 *)(lVar5 + 0x78),&uStack_28,&iStack_2c);
          uVar6 = 0;
          if (iVar1 != 0) {
            uVar6 = uStack_28;
          }
          goto LAB_0037dfb0;
        }
        goto LAB_0037de7c;
      }
      iStack_2c = 0;
      if (*(byte *)(lVar5 + 0x102) - 1 < 3) {
        iVar1 = func_0x00385fb4(*(undefined8 *)(lVar5 + 0x78),&uStack_28,&iStack_2c);
        if ((iVar1 != 0 && uStack_28 != 0 || iStack_2c == 0) && (iVar1 == 0 || uStack_28 == 0))
        goto LAB_0037dfa0;
      }
      else if (*(byte *)(lVar5 + 0x102) != 5) {
LAB_0037dfa0:
        iVar1 = func_0x003757d4(*(undefined8 *)(lStack_50 + 0xa0));
        if (iVar1 == 0) {
          iVar1 = func_0x00375608(*(undefined8 *)(lStack_50 + 0xa0));
          uVar6 = (ulong)(iVar1 != 0);
          goto LAB_0037dfb0;
/* no support for modified copies */
        }
      }
      uVar6 = 1;
      goto LAB_0037dfb0;
    }
    uVar3 = 0xc89;
    puVar4 = &UNK_000c0103;
  }
  func_0x0037b358(alStack_68,uVar2,uVar3,"ossl_quic_pending_int",puVar4,0);
  uVar6 = 0;
LAB_0037dfb0:
  func_0x002f78bc(*(undefined8 *)(alStack_68[0] + 0x58));
  func_0x004dfb80();
  return uVar6;
}

