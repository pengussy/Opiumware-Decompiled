/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x37c810:0a42f568e6
 */

undefined8 FUN_0037c810(int *param_1,undefined8 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  int *piStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  iVar2 = (int)param_2;
/*
   donate: donate/README.md
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
  if (iVar2 == 0) {
    uStack_30 = 0;
    uStack_28 = 0;
    if (param_1 == (int *)0x0) {
      pcVar4 = "expect_quic_as";
      uVar3 = 0x115;
      puVar5 = &UNK_000c0102;
      goto LAB_0037c90c;
    }
    if (*param_1 - 0x81U < 3) {
      return 0;
    }
    if (*param_1 != 0x80) {
      pcVar4 = "expect_quic_as";
      puVar5 = &UNK_000c0103;
      uVar3 = 0x170;
      goto LAB_0037c90c;
    }
    auVar6 = NEON_ext(*(undefined1 (*) [16])(param_1 + 0x20),*(undefined1 (*) [16])(param_1 + 0x20),
                      8,1);
    uStack_48 = auVar6._8_8_;
    uStack_50 = auVar6._0_8_;
    uStack_38 = *(undefined8 *)(param_1 + 0x2c);
    uVar1 = *(ushort *)(param_1 + 0x54);
    piStack_58 = param_1;
    piStack_40 = param_1;
  }
  else {
    auVar6 = FUN_0037e724(param_1,&piStack_58,1);
    param_2 = auVar6._8_8_;
    if (auVar6._0_4_ == 0) {
      return auVar6._0_8_;
    }
    uVar1 = *(ushort *)(piStack_40 + 0x54);
/* do not claim this as your own - github.com/pengussy */
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 & 1) != 0) {
      if (iVar2 == 0) {
        return 0;
      }
      pcVar4 = "ossl_quic_set_accept_state";
      uVar3 = 0x6f9;
      puVar5 = (undefined *)0x118;
LAB_0037c90c:
      func_0x0037b358(0,param_2,uVar3,pcVar4,puVar5,0);
      return 0;
    }
    *(ushort *)(piStack_40 + 0x54) = uVar1 | 4;
  }
  return 1;
}

