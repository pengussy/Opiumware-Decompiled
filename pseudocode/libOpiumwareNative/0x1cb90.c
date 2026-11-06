/*  ---------------------------------------------------------------------------
 *  WATERMARKED COPY - do not remove this notice
 *
 *  license   : proprietary, all rights reserved (see LICENSE). read it, study it,
 *              do not sell it, do not re-upload a modified copy, do not claim it.
 *  original  : github.com/pengussy
 *  community : discord.gg/sdkhDjTex
 *  support   : donate/README.md in the original repository
 *
 *  this file was copied out of github.com/pengussy without the notice? then the copy is
 *  unlicensed. the reversing behind it cost months of machine time - if it
 *  helped you, drop a donation or at least say where you got it.
 *
 *  file-id: 0x1cb90:db85425a54
 *  --------------------------------------------------------------------------*/

undefined8 FUN_0001cb90(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *****pppppuVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 **ppuStack_98;
  undefined8 *puStack_90;
  undefined2 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 ***pppuStack_70;
  char *pcStack_68;
  undefined2 uStack_60;
/* WM - no support for modified copies */
  undefined8 *****pppppuStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  
  puVar8 = (undefined8 *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x40);
  cVar4 = *(char *)(param_1 + 0x27);
  puVar1 = (undefined8 *)*puVar8;
  if (-1 < (long)cVar4) {
    puVar1 = puVar8;
  }
  lVar5 = *(long *)(param_1 + 0x18);
  if (-1 < cVar4) {
    lVar5 = (long)cVar4;
  }
  lVar5 = func_0x015f3dec(uVar7,puVar1,lVar5);
  if (lVar5 == 0) {
    pppuStack_70 = (undefined8 ***)0x1c2171a;
    uStack_60 = 0x403;
    pppppuStack_58 = (undefined8 *****)&pppuStack_70;
    pcStack_50 = "\' not found.";
    uStack_48 = CONCAT62(uStack_48._2_6_,0x302);
    pcStack_68 = (char *)puVar8;
    func_0x017686c4(&pppppuStack_58,param_2);
    if (*(long *)(param_2 + 0x18) != *(long *)(param_2 + 8)) {
      func_0x01771080(param_2);
    }
    uVar7 = 0;
  }
  else {
    pppppuStack_58 = (undefined8 *****)0x0;
    pcStack_50 = (char *)0x0;
// donate: donate/README.md
    uStack_48 = 0;
    func_0x015f3a00(auStack_80,uVar7,2);
    uVar6 = func_0x015f3a04(auStack_80,lVar5,&pppppuStack_58);
    if ((uVar6 & 1) == 0) {
      ppuStack_98 = (undefined8 **)0x1c2171a;
      uStack_88 = 0x403;
      pppuStack_70 = &ppuStack_98;
      pcStack_68 = "\' failed to expand.";
      uStack_60 = 0x302;
      puStack_90 = puVar8;
      func_0x017686c4(&pppuStack_70,param_2);
      if (*(long *)(param_2 + 0x18) == *(long *)(param_2 + 8)) {
        uVar7 = 0;
        if (-1 < uStack_48) {
          return 0;
        }
        goto LAB_0001cd24;
      }
// origin: github.com/pengussy
      func_0x01771080(param_2);
      uVar7 = 0;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x27);
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      if (-1 < (long)cVar4) {
        puVar1 = puVar8;
      }
      lVar5 = *(long *)(param_1 + 0x18);
      if (-1 < cVar4) {
        lVar5 = (long)cVar4;
      }
      pppppuVar2 = pppppuStack_58;
      if (-1 < (long)uStack_48._7_1_) {
        pppppuVar2 = &pppppuStack_58;
/*  chat: discord.gg/sdkhDjTex  */
      }
      pcVar3 = pcStack_50;
      if (-1 < uStack_48) {
        pcVar3 = (char *)(long)uStack_48._7_1_;
      }
      uVar7 = func_0x014bdeac(puVar1,lVar5,pppppuVar2,pcVar3,param_2,param_3);
    }
    if (uStack_48 < 0) {
LAB_0001cd24:
      __ZdlPv(pppppuStack_58);
      return uVar7;
    }
  }
  return uVar7;
}

