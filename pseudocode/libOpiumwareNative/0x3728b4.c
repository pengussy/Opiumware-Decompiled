/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3728b4:def3c1c31e
 */

undefined8 *
FUN_003728b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = (undefined8 *)
           func_0x019eb5a0(0x960,
                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_ackm.c"
                           ,0x416);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0x24] = 0xffffffffffffffff;
    puVar1[0x123] = 0xffffffffffffffff;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    uVar2 = func_0x0046df40(&DAT_00374104,&DAT_0037410c);
    lVar3 = func_0x0046df30(uVar2,&DAT_00374124,&DAT_00374128,&DAT_0037412c,&DAT_00374130);
    puVar1[3] = lVar3;
    if (lVar3 != 0) {
      puVar1[0x25] = 0xffffffffffffffff;
      puVar1[0x124] = 0xffffffffffffffff;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[6] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      uVar2 = func_0x0046df40(&DAT_00374104,&DAT_0037410c);
      lVar3 = func_0x0046df30(uVar2,&DAT_00374124,&DAT_00374128,&DAT_0037412c,&DAT_00374130);
      puVar1[9] = lVar3;
/*  chat: discord.gg/sdkhDjTex  */
      if (lVar3 == 0) {
        lVar4 = 1;
      }
      else {
        puVar1[0x26] = 0xffffffffffffffff;
        puVar1[0x125] = 0xffffffffffffffff;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0xc] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        uVar2 = func_0x0046df40(&DAT_00374104,&DAT_0037410c);
        lVar4 = func_0x0046df30(uVar2,&DAT_00374124,&DAT_00374128,&DAT_0037412c,&DAT_00374130);
        puVar1[0xf] = lVar4;
        if (lVar4 != 0) {
          func_0x00392bc8(puVar1 + 0x12);
          puVar1[0x15] = 0;
          func_0x00392bc8(puVar1 + 0x16);
          puVar1[0x19] = 0;
          func_0x00392bc8(puVar1 + 0x1a);
          puVar1[0x1d] = 0;
          puVar1[0x1e] = param_1;
          puVar1[0x1f] = param_2;
          puVar1[0x20] = param_3;
          puVar1[0x21] = param_4;
          puVar1[0x22] = param_5;
          *(undefined1 *)((long)puVar1 + 0x1c9) = param_6;
          puVar1[0x127] = &UNK_017d7840;
/*  reversing this took months of machine time  */
          puVar1[0x126] = &UNK_017d7840;
          return puVar1;
        }
        lVar4 = 2;
      }
      func_0x0046e088(puVar1[lVar4 * 6 + -3]);
      puVar1[lVar4 * 6 + -6] = 0;
      puVar1[lVar4 * 6 + -5] = 0;
      puVar1[lVar4 * 6 + -4] = 0;
      puVar1[lVar4 * 6 + -3] = 0;
      if (lVar3 != 0) {
        func_0x0046e088(puVar1[lVar4 * 6 + -9]);
        puVar1[lVar4 * 6 + -0xc] = 0;
        puVar1[lVar4 * 6 + -0xb] = 0;
        puVar1[lVar4 * 6 + -10] = 0;
        puVar1[lVar4 * 6 + -9] = 0;
      }
    }
    func_0x004743e4(puVar1,
                    "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/quic/quic_ackm.c"
                    ,0x434);
  }
/* +- WM -------------------------------------------------------------+
   |  donate: donate/README.md
   +--------------------------------------------------------------------*/
  return (undefined8 *)0x0;
}

