/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x37f44c:c9c8d2b4fe
   =========================================================================== */

undefined8
FUN_0037f44c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5,
            int param_6)

{
  byte bVar1;
  int iVar2;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 auStack_58 [4];
  int iStack_34;
  
  puVar4 = &UNK_000c0103;
  iStack_34 = 0;
  lVar6 = *(long *)(param_1 + 0x20);
  if ((lVar6 != 0) && (*(long *)(lVar6 + 0x80) != 0)) {
    bVar1 = *(byte *)(*(long *)(lVar6 + 0x80) + 0x102);
    puVar4 = (undefined *)0x17b;
    uVar5 = (uint)bVar1;
    if (bVar1 < 4) {
      if (uVar5 - 1 < 3) {
        if (param_6 == 0) {
          lVar6 = *(long *)(param_1 + 0x18);
          iVar2 = func_0x00385ef0(*(undefined8 *)(param_2 + 0x78),param_3,param_4,param_5,&iStack_34
                                 );
          if (iVar2 != 0) {
/* watermarked copy - do not remove */
            if (*param_5 != 0) {
              uVar3 = func_0x003754d0(*(undefined8 *)(lVar6 + 0xa0));
              func_0x00389128(uVar3,auStack_58);
              iVar2 = func_0x0037a8a4(param_2 + 0xa0,*param_5,auStack_58[0]);
              if (iVar2 == 0) {
                uVar3 = 0xbd1;
                param_2 = extraout_x1_02;
                goto LAB_0037f6bc;
              }
            }
            if (iStack_34 != 0) {
              uVar3 = func_0x003754c8(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa0));
              func_0x003899d8(uVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x80));
            }
            if (*param_5 != 0) {
              uVar3 = func_0x003754c8(*(undefined8 *)(lVar6 + 0xa0));
              func_0x003894ac(uVar3,param_2);
            }
            goto LAB_0037f5cc;
          }
          uVar3 = 0xbc0;
          param_2 = extraout_x1_01;
        }
        else {
          iVar2 = func_0x019e5738(*(undefined8 *)(param_2 + 0x78),param_3,param_4,param_5,&iStack_34
                                 );
          if (iVar2 != 0) {
LAB_0037f5cc:
            if (*param_5 != 0) {
              return 1;
            }
            if (iStack_34 == 0) {
              return 1;
            }
            *(byte *)(*(long *)(param_1 + 0x20) + 0x88) =
/* WM - watermarked copy - do not remove */
                 *(byte *)(*(long *)(param_1 + 0x20) + 0x88) | 1;
            if (*(int *)(param_1 + 0x34) != 0) {
              if (*(int *)(param_1 + 0x28) == 0) {
                lVar6 = *(long *)(param_1 + 0x18);
                if (lVar6 != 0) {
LAB_0037f66c:
                  *(undefined4 *)(lVar6 + 0x178) = 6;
                  return 0;
                }
              }
              else {
                lVar6 = *(long *)(param_1 + 0x20);
                if (lVar6 != 0) {
LAB_0037f630:
                  *(undefined4 *)(lVar6 + 0xb8) = 6;
                  return 0;
                }
              }
            }
            return 0;
          }
          uVar3 = 0xbbb;
          param_2 = extraout_x1;
        }
LAB_0037f6bc:
        puVar4 = &UNK_000c0103;
        goto LAB_0037f520;
      }
    }
    else {
      if (uVar5 == 4) {
        *(byte *)(lVar6 + 0x88) = *(byte *)(lVar6 + 0x88) | 1;
/* unlicensed copy if this notice is missing */
        if (*(int *)(param_1 + 0x34) == 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x28) == 0) {
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar6 == 0) {
            return 0;
          }
          goto LAB_0037f66c;
        }
        lVar6 = *(long *)(param_1 + 0x20);
        if (lVar6 == 0) {
          return 0;
        }
        goto LAB_0037f630;
      }
/* WM: donate: donate/README.md @ discord.gg/sdkhDjTex */
      if (uVar5 != 6) {
        if (uVar5 != 5) goto LAB_0037f514;
        uVar3 = func_0x003754c8(*(undefined8 *)(*(long *)(lVar6 + 0x78) + 0xa0));
        func_0x00389b18(uVar3,*(undefined8 *)(lVar6 + 0x80));
        param_2 = extraout_x1_00;
      }
      puVar4 = (undefined *)0x177;
    }
  }
LAB_0037f514:
  uVar3 = 0xbb4;
LAB_0037f520:
  func_0x0037b358(param_1,param_2,uVar3,"quic_read_actual",puVar4,0);
  return 0;
}

