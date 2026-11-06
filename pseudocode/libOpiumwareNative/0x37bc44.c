/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37bc44:e8c89c1811
 */

undefined8 FUN_0037bc44(int *param_1,undefined8 param_2)

{
  if (param_1 == (int *)0x0) {
    func_0x0037b358(0,param_2,0x115,"expect_quic_as",&UNK_000c0102,0);
    return 0;
  }
  if (*param_1 - 0x80U < 3) {
    return *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
  }
/* wm:stripping the watermark breaks the license */
  if (*param_1 == 0x83) {
    func_0x0037b358(0,param_2,0xe1,"wrong_type",&UNK_0008010c,0);
    return 0;
  }
  func_0x0037b358(0,param_2,0x170,"expect_quic_as",&UNK_000c0103,0);
  return 0;
}

