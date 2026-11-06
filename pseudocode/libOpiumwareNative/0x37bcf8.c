/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x37bcf8:c59ec6873c
 */

undefined8 FUN_0037bcf8(int *param_1,undefined8 param_2)

{
  if (param_1 == (int *)0x0) {
    func_0x0037b358(0,param_2,0x115,"expect_quic_as",&UNK_000c0102,0);
    return 0;
  }
  if (*param_1 - 0x80U < 3) {
    return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x38);
  }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  if (*param_1 == 0x83) {
    func_0x0037b358(0,param_2,0xe1,"wrong_type",&UNK_0008010c,0);
    return 0;
  }
  func_0x0037b358(0,param_2,0x170,"expect_quic_as",&UNK_000c0103,0);
  return 0;
}

