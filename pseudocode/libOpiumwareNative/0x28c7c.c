/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x28c7c:ed9bdf042a
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

void FUN_00028c7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 *puStack_80;
  char *pcStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined4 uStack_68;
  undefined1 uStack_64;
  
  plVar5 = (long *)func_0x00ff17e4(param_2);
// watermarked copy - do not remove
  if (plVar5[1] == *plVar5) {
    return;
  }
  puVar10 = *(undefined1 **)(param_3 + 0x18);
  if ((ulong)(*(long *)(param_3 + 0x10) - (long)puVar10) < param_5) {
    lVar6 = func_0x01770110(param_3,param_4,param_5);
    puVar10 = *(undefined1 **)(lVar6 + 0x18);
    if (*(undefined1 **)(lVar6 + 0x10) == puVar10) goto LAB_00028d54;
LAB_00028cf0:
    *puVar10 = 10;
    puVar10 = (undefined1 *)(*(long *)(lVar6 + 0x18) + 1);
    *(undefined1 **)(lVar6 + 0x18) = puVar10;
    if (param_5 <= (ulong)(*(long *)(lVar6 + 0x10) - (long)puVar10)) goto LAB_00028d74;
LAB_00028d10:
    lVar6 = func_0x01770110(lVar6,param_4,param_5);
    puVar10 = *(undefined1 **)(lVar6 + 0x18);
  }
  else {
    if (param_5 != 0) {
      _memcpy(puVar10,param_4,param_5);
/* do not claim this as your own - github.com/pengussy */
      puVar10 = (undefined1 *)(*(long *)(param_3 + 0x18) + param_5);
      *(undefined1 **)(param_3 + 0x18) = puVar10;
    }
    lVar6 = param_3;
    if (*(undefined1 **)(param_3 + 0x10) != puVar10) goto LAB_00028cf0;
LAB_00028d54:
    lVar6 = func_0x01770110(lVar6,"\n",1);
    puVar10 = *(undefined1 **)(lVar6 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x10) - (long)puVar10) < param_5) goto LAB_00028d10;
LAB_00028d74:
    if (param_5 != 0) {
      _memcpy(puVar10,param_4,param_5);
      puVar10 = (undefined1 *)(*(long *)(lVar6 + 0x18) + param_5);
      *(undefined1 **)(lVar6 + 0x18) = puVar10;
    }
  }
  if (*(undefined1 **)(lVar6 + 0x10) == puVar10) {
    lVar6 = func_0x01770110(lVar6,&UNK_01c881b6,1);
  }
  else {
    *puVar10 = 0x20;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
  }
  if (param_1 != 0) {
    uVar12 = _strlen(param_1);
    if ((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 0x18)) < uVar12) {
      lVar6 = func_0x01770110(lVar6,param_1,uVar12);
    }
    else if (uVar12 != 0) {
      _memcpy(*(long *)(lVar6 + 0x18),param_1,uVar12);
/* keep the notice, keep the source honest - github.com/pengussy */
      *(ulong *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + uVar12;
    }
  }
  pcVar11 = *(char **)(lVar6 + 0x18);
  if ((ulong)(*(long *)(lVar6 + 0x10) - (long)pcVar11) < 0xc) {
    lVar6 = func_0x01770110(lVar6," signature:\n",0xc);
    puVar10 = *(undefined1 **)(lVar6 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x10) - (long)puVar10) < param_5) goto LAB_00028efc;
LAB_00028e60:
    if (param_5 != 0) {
      _memcpy(puVar10,param_4,param_5);
      puVar10 = (undefined1 *)(*(long *)(lVar6 + 0x18) + param_5);
      *(undefined1 **)(lVar6 + 0x18) = puVar10;
    }
    if (*(undefined1 **)(lVar6 + 0x10) == puVar10) goto LAB_00028f14;
  }
  else {
    pcVar11[8] = 'r';
    pcVar11[9] = 'e';
    pcVar11[10] = ':';
    pcVar11[0xb] = '\n';
    *(undefined8 *)pcVar11 = s_signature__01c21db5._0_8_;
    puVar10 = (undefined1 *)(*(long *)(lVar6 + 0x18) + 0xc);
// WM - if you paid for this, you were scammed
    *(undefined1 **)(lVar6 + 0x18) = puVar10;
    if (param_5 <= (ulong)(*(long *)(lVar6 + 0x10) - (long)puVar10)) goto LAB_00028e60;
LAB_00028efc:
    lVar6 = func_0x01770110(lVar6,param_4,param_5);
    puVar10 = *(undefined1 **)(lVar6 + 0x18);
    if (*(undefined1 **)(lVar6 + 0x10) == puVar10) {
LAB_00028f14:
      lVar6 = func_0x01770110(lVar6,"\n",1);
      pcVar11 = *(char **)(lVar6 + 0x18);
      uVar12 = *(long *)(lVar6 + 0x10) - (long)pcVar11;
      goto joined_r0x00028f30;
    }
  }
  *puVar10 = 10;
  pcVar11 = (char *)(*(long *)(lVar6 + 0x18) + 1);
  *(char **)(lVar6 + 0x18) = pcVar11;
  uVar12 = *(long *)(lVar6 + 0x10) - (long)pcVar11;
joined_r0x00028f30:
  if (uVar12 < param_5) {
    lVar6 = func_0x01770110(lVar6,param_4,param_5);
    pcVar11 = *(char **)(lVar6 + 0x18);
  }
  else if (param_5 != 0) {
    _memcpy(pcVar11,param_4,param_5);
    pcVar11 = (char *)(*(long *)(lVar6 + 0x18) + param_5);
    *(char **)(lVar6 + 0x18) = pcVar11;
  }
/* origin: github.com/pengussy - github.com/pengussy */
  uVar3 = s_Name_Index_InterpMode_DynIdx_01c22042._24_8_;
  uVar2 = s_Name_Index_InterpMode_DynIdx_01c22042._16_8_;
  uVar8 = s_Name_Index_InterpMode_DynIdx_01c22042._0_8_;
  if ((ulong)(*(long *)(lVar6 + 0x10) - (long)pcVar11) < 0x3a) {
    lVar6 = func_0x01770110(lVar6," Name                 Index             InterpMode DynIdx\n",0x3a
                           );
    pcVar11 = *(char **)(lVar6 + 0x18);
    uVar12 = *(long *)(lVar6 + 0x10) - (long)pcVar11;
  }
  else {
    *(undefined8 *)(pcVar11 + 8) = s_Name_Index_InterpMode_DynIdx_01c22042._8_8_;
    *(undefined8 *)pcVar11 = uVar8;
    *(undefined8 *)(pcVar11 + 0x18) = uVar3;
    *(undefined8 *)(pcVar11 + 0x10) = uVar2;
    uVar8 = s_Name_Index_InterpMode_DynIdx_01c22042._32_8_;
    *(ulong *)(pcVar11 + 0x28) =
         CONCAT62(s_Name_Index_InterpMode_DynIdx_01c22042._42_6_,
                  s_Name_Index_InterpMode_DynIdx_01c22042._40_2_);
    *(undefined8 *)(pcVar11 + 0x20) = uVar8;
    uVar8 = CONCAT26(s_Name_Index_InterpMode_DynIdx_01c22042._48_2_,
                     s_Name_Index_InterpMode_DynIdx_01c22042._42_6_);
    *(undefined8 *)(pcVar11 + 0x32) = s_Name_Index_InterpMode_DynIdx_01c22042._50_8_;
    *(undefined8 *)(pcVar11 + 0x2a) = uVar8;
    pcVar11 = (char *)(*(long *)(lVar6 + 0x18) + 0x3a);
    *(char **)(lVar6 + 0x18) = pcVar11;
    uVar12 = *(long *)(lVar6 + 0x10) - (long)pcVar11;
  }
  if (uVar12 < param_5) {
    lVar6 = func_0x01770110(lVar6,param_4,param_5);
    pcVar11 = *(char **)(lVar6 + 0x18);
    uVar12 = *(long *)(lVar6 + 0x10) - (long)pcVar11;
/*
   if you paid for this, you were scammed
   github.com/pengussy  |  discord.gg/sdkhDjTex
*/
    uVar8 = s__________________________________01c2207d._0_8_;
    uVar2 = s__________________________________01c2207d._16_8_;
    uVar3 = s__________________________________01c2207d._24_8_;
  }
  else {
    if (param_5 != 0) {
      _memcpy(pcVar11,param_4,param_5);
      pcVar11 = (char *)(*(long *)(lVar6 + 0x18) + param_5);
      *(char **)(lVar6 + 0x18) = pcVar11;
    }
    uVar12 = *(long *)(lVar6 + 0x10) - (long)pcVar11;
    uVar8 = s__________________________________01c2207d._0_8_;
    uVar2 = s__________________________________01c2207d._16_8_;
    uVar3 = s__________________________________01c2207d._24_8_;
  }
  s__________________________________01c2207d._0_8_ = uVar8;
  s__________________________________01c2207d._16_8_ = uVar2;
  s__________________________________01c2207d._24_8_ = uVar3;
  if (uVar12 < 0x3a) {
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
    func_0x01770110(lVar6," -------------------- ----- ---------------------- ------\n",0x3a);
    puVar14 = (undefined8 *)*plVar5;
    puVar15 = (undefined8 *)plVar5[1];
    if (puVar14 == puVar15) {
      return;
    }
  }
  else {
    *(undefined8 *)(pcVar11 + 8) = s__________________________________01c2207d._8_8_;
    *(undefined8 *)pcVar11 = uVar8;
    *(undefined8 *)(pcVar11 + 0x18) = uVar3;
    *(undefined8 *)(pcVar11 + 0x10) = uVar2;
    uVar8 = s__________________________________01c2207d._32_8_;
    *(ulong *)(pcVar11 + 0x28) =
         CONCAT62(s__________________________________01c2207d._42_6_,
                  s__________________________________01c2207d._40_2_);
    *(undefined8 *)(pcVar11 + 0x20) = uVar8;
    uVar8 = CONCAT26(s__________________________________01c2207d._48_2_,
                     s__________________________________01c2207d._42_6_);
    *(undefined8 *)(pcVar11 + 0x32) = s__________________________________01c2207d._50_8_;
    *(undefined8 *)(pcVar11 + 0x2a) = uVar8;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 0x3a;
    puVar14 = (undefined8 *)*plVar5;
    puVar15 = (undefined8 *)plVar5[1];
    if (puVar14 == puVar15) {
      return;
    }
  }
  do {
    puVar10 = *(undefined1 **)(param_3 + 0x18);
    if ((ulong)(*(long *)(param_3 + 0x10) - (long)puVar10) < param_5) {
      lVar6 = func_0x01770110(param_3,param_4,param_5);
/* unlicensed copy if this notice is missing */
      puVar10 = *(undefined1 **)(lVar6 + 0x18);
      if (*(undefined1 **)(lVar6 + 0x10) == puVar10) goto LAB_000291dc;
LAB_00029128:
      *puVar10 = 0x20;
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
      puVar7 = (undefined4 *)func_0x015c12e4(*puVar14);
      uVar8 = 0;
      if (puVar7 != (undefined4 *)0x0) goto LAB_00029148;
    }
    else {
      if (param_5 != 0) {
        _memcpy(puVar10,param_4,param_5);
        puVar10 = (undefined1 *)(*(long *)(param_3 + 0x18) + param_5);
        *(undefined1 **)(param_3 + 0x18) = puVar10;
      }
      lVar6 = param_3;
      if (*(undefined1 **)(param_3 + 0x10) != puVar10) goto LAB_00029128;
LAB_000291dc:
      func_0x01770110(lVar6,&UNK_01c881b6,1);
      puVar7 = (undefined4 *)func_0x015c12e4(*puVar14);
      if (puVar7 == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
LAB_00029148:
        uVar8 = _strlen(puVar7);
      }
    }
    uStack_70 = 0x14;
/* WM: if you paid for this, you were scammed @ discord.gg/sdkhDjTex */
    uStack_6c = 0;
    puStack_80 = puVar7;
    pcStack_78 = (char *)uVar8;
    func_0x01771224(param_3,&puStack_80);
    plVar5 = (long *)func_0x01386770(*puVar14);
    if (*plVar5 == plVar5[1]) {
      uVar13 = 0;
      puVar10 = *(undefined1 **)(param_3 + 0x18);
      if (puVar10 < *(undefined1 **)(param_3 + 0x10)) goto LAB_0002919c;
LAB_00029214:
      lVar6 = func_0x01771098(param_3,0x20);
    }
    else {
      puVar9 = (undefined8 *)func_0x01386770(*puVar14);
      uVar13 = *(undefined4 *)*puVar9;
      puVar10 = *(undefined1 **)(param_3 + 0x18);
      if (*(undefined1 **)(param_3 + 0x10) <= puVar10) goto LAB_00029214;
LAB_0002919c:
      *(undefined1 **)(param_3 + 0x18) = puVar10 + 1;
      *puVar10 = 0x20;
      lVar6 = param_3;
    }
    puStack_80 = (undefined4 *)&UNK_01dbddb8;
/* WM - if you paid for this, you were scammed */
    pcStack_78 = "%5u";
    uStack_70 = uVar13;
    func_0x01770ef4(lVar6,&puStack_80);
    func_0x01551ee0(*puVar14);
    func_0x015953e4();
    puVar10 = *(undefined1 **)(param_3 + 0x18);
    if (puVar10 < *(undefined1 **)(param_3 + 0x10)) {
      *(undefined1 **)(param_3 + 0x18) = puVar10 + 1;
      *puVar10 = 0x20;
      func_0x01551ee0(*puVar14);
      puVar7 = (undefined4 *)func_0x015953e4();
      lVar6 = param_3;
      if (puVar7 == (undefined4 *)0x0) {
        uVar8 = 0;
      }
      else {
LAB_000292a4:
        uVar8 = _strlen(puVar7);
      }
    }
    else {
      lVar6 = func_0x01771098(param_3,0x20);
      func_0x01551ee0(*puVar14);
      puVar7 = (undefined4 *)func_0x015953e4();
      uVar8 = 0;
      if (puVar7 != (undefined4 *)0x0) goto LAB_000292a4;
    }
    uStack_70 = 0x16;
    uStack_6c = 1;
    puStack_80 = puVar7;
    pcStack_78 = (char *)uVar8;
/* WM: keep the notice, keep the source honest @ discord.gg/sdkhDjTex */
    func_0x01771224(lVar6,&puStack_80);
    puVar1 = *(undefined2 **)(param_3 + 0x18);
    if ((ulong)(*(long *)(param_3 + 0x10) - (long)puVar1) < 3) {
      func_0x01770110(param_3,"   ",3);
      uVar4 = func_0x015ae108(*puVar14);
      if ((uVar4 & 1) == 0) goto LAB_00029340;
LAB_00029300:
      uStack_68 = 0x78;
      uVar12 = 1;
    }
    else {
      *(undefined1 *)(puVar1 + 1) = 0x20;
      *puVar1 = 0x2020;
      *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 3;
      uVar4 = func_0x015ae108(*puVar14);
      if ((uVar4 & 1) != 0) goto LAB_00029300;
LAB_00029340:
      uStack_68 = 0;
      uVar12 = 0;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      puVar10 = (undefined1 *)((ulong)&uStack_68 | uVar12);
      uVar12 = uVar12 + 1;
      *puVar10 = 0x79;
    }
    uStack_64 = 0;
    if ((uVar4 >> 2 & 1) != 0) {
      puVar10 = (undefined1 *)((ulong)&uStack_68 | uVar12);
      uVar12 = uVar12 + 1;
      *puVar10 = 0x7a;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      *(undefined1 *)((long)&uStack_68 + uVar12) = 0x77;
/* WM: stripping the watermark breaks the license @ discord.gg/sdkhDjTex */
    }
    pcStack_78 = (char *)_strlen(&uStack_68);
    uStack_70 = 4;
    uStack_6c = 1;
    puStack_80 = &uStack_68;
    func_0x01771224(param_3,&puStack_80);
    if (*(undefined1 **)(param_3 + 0x10) == *(undefined1 **)(param_3 + 0x18)) {
      func_0x01770110(param_3,"\n",1);
      puVar14 = puVar14 + 1;
      if (puVar14 == puVar15) {
        return;
      }
    }
    else {
      **(undefined1 **)(param_3 + 0x18) = 10;
      *(long *)(param_3 + 0x18) = *(long *)(param_3 + 0x18) + 1;
      puVar14 = puVar14 + 1;
      if (puVar14 == puVar15) {
        return;
      }
    }
  } while( true );
}

