/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x29f08:9d4beaecf6
   =========================================================================== */

void FUN_00029f08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,ulong param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_78;
  undefined1 uStack_70;
  char cStack_61;
  
  pcVar7 = *(char **)(param_4 + 0x18);
  if ((ulong)(*(long *)(param_4 + 0x10) - (long)pcVar7) < param_6) {
/* WM - origin: github.com/pengussy */
    lVar6 = func_0x01770110(param_4,param_5,param_6);
    pcVar7 = *(char **)(lVar6 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x10) - (long)pcVar7) < 0x18) goto LAB_00029fd0;
LAB_00029f78:
    uVar12 = s_Resource_bind_info_for_01c22154._0_8_;
    *(undefined8 *)(pcVar7 + 8) = s_Resource_bind_info_for_01c22154._8_8_;
    *(undefined8 *)pcVar7 = uVar12;
    *(undefined8 *)(pcVar7 + 0x10) = s_Resource_bind_info_for_01c22154._16_8_;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 0x18;
  }
  else {
    if (param_6 != 0) {
      _memcpy(pcVar7,param_5,param_6);
      pcVar7 = (char *)(*(long *)(param_4 + 0x18) + param_6);
      *(char **)(param_4 + 0x18) = pcVar7;
    }
    lVar6 = param_4;
    if (0x17 < (ulong)(*(long *)(param_4 + 0x10) - (long)pcVar7)) goto LAB_00029f78;
LAB_00029fd0:
    lVar6 = func_0x01770110(lVar6," Resource bind info for ",0x18);
  }
  puVar8 = (undefined8 *)func_0x0037a47c(param_1);
  uVar16 = puVar8[1];
  puVar1 = (undefined8 *)*puVar8;
  if (-1 < (char)*(byte *)((long)puVar8 + 0x17)) {
    uVar16 = (ulong)*(byte *)((long)puVar8 + 0x17);
    puVar1 = puVar8;
  }
  lVar6 = func_0x01770110(lVar6,puVar1,uVar16);
  if (*(undefined1 **)(lVar6 + 0x10) == *(undefined1 **)(lVar6 + 0x18)) {
    func_0x01770110(lVar6,"\n",1);
    puVar9 = *(undefined2 **)(param_4 + 0x18);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar9) < param_6) goto LAB_0002a040;
LAB_0002a110:
    if (param_6 != 0) {
      _memcpy(puVar9,param_5,param_6);
      puVar9 = (undefined2 *)(*(long *)(param_4 + 0x18) + param_6);
/* origin: github.com/pengussy */
      *(undefined2 **)(param_4 + 0x18) = puVar9;
    }
    lVar6 = param_4;
    if (2 < (ulong)(*(long *)(param_4 + 0x10) - (long)puVar9)) goto LAB_0002a068;
LAB_0002a140:
    func_0x01770110(lVar6," {\n",3);
    puVar13 = *(undefined1 **)(param_4 + 0x18);
    if (param_6 <= (ulong)(*(long *)(param_4 + 0x10) - (long)puVar13)) goto LAB_0002a094;
LAB_0002a164:
    lVar6 = func_0x01770110(param_4,param_5,param_6);
    puVar13 = *(undefined1 **)(lVar6 + 0x18);
    if (*(undefined1 **)(lVar6 + 0x10) != puVar13) goto LAB_0002a0c0;
LAB_0002a188:
    func_0x01770110(lVar6,"\n",1);
    lVar6 = func_0x015bc394(param_1);
    if (*(char *)(lVar6 + 8) == '\f') goto LAB_0002a1b4;
LAB_0002a1c0:
    func_0x015bc5bc(param_1);
    do {
      lVar10 = func_0x0170875c();
    } while (*(char *)(lVar10 + 8) == '\r');
    if (*(char *)(lVar10 + 8) != '\f') {
      func_0x0174f200("cast");
    }
    lVar11 = func_0x015c3470(param_2,lVar10);
    if (lVar11 != 0) {
      uVar12 = func_0x015c2af8(lVar11,0);
      cStack_61 = '\b';
      uStack_78 = 0x746e656d656c4524;
      uStack_70 = 0;
      func_0x015c2a0c(uVar12,&uStack_78);
      if (cStack_61 < '\0') {
        __ZdlPv(uStack_78);
      }
      lVar11 = func_0x0002bde8(param_3,lVar10);
// proprietary - see LICENSE - do not sell
      uVar5 = func_0x016b16b8(param_3,lVar10);
      uVar16 = (ulong)uVar5;
      iVar4 = 0;
      if (uVar16 != 0) {
        iVar4 = (int)(((uVar16 + (lVar11 + 7U >> 3)) - 1) / uVar16);
      }
      func_0x0002b268(lVar6,uVar12,param_2,0,param_4,param_5,param_6,0,0x3200000003,iVar4 * uVar5);
      puVar13 = *(undefined1 **)(param_4 + 0x18);
      uVar16 = *(long *)(param_4 + 0x10) - (long)puVar13;
joined_r0x0002a4e0:
      if (param_6 <= uVar16) goto LAB_0002a4e4;
LAB_0002a2b8:
      lVar6 = func_0x01770110(param_4,param_5,param_6);
      puVar13 = *(undefined1 **)(lVar6 + 0x18);
      if (*(undefined1 **)(lVar6 + 0x10) != puVar13) goto LAB_0002a510;
LAB_0002a2dc:
      pcVar7 = "\n";
      uVar12 = 1;
      goto LAB_0002a2ec;
    }
    puVar14 = *(undefined4 **)(param_4 + 0x18);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar14) < param_6) {
      lVar6 = func_0x01770110(param_4,param_5,param_6);
      puVar14 = *(undefined4 **)(lVar6 + 0x18);
      if ((ulong)(*(long *)(lVar6 + 0x10) - (long)puVar14) < 4) goto LAB_0002a42c;
LAB_0002a33c:
      *puVar14 = 0x5b202020;
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 4;
    }
    else {
      if (param_6 != 0) {
        _memcpy(puVar14,param_5,param_6);
        puVar14 = (undefined4 *)(*(long *)(param_4 + 0x18) + param_6);
/*
 *  watermarked copy - do not remove
 *
 *  @pengussy
 */
        *(undefined4 **)(param_4 + 0x18) = puVar14;
      }
      lVar6 = param_4;
      if (3 < (ulong)(*(long *)(param_4 + 0x10) - (long)puVar14)) goto LAB_0002a33c;
LAB_0002a42c:
      lVar6 = func_0x01770110(lVar6,"   [",4);
    }
    lVar11 = func_0x0002bde8(param_3,lVar10);
    uVar15 = func_0x016b16b8(param_3,lVar10);
    uVar15 = uVar15 & 0xffffffff;
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = ((uVar15 + (lVar11 + 7U >> 3)) - 1) / uVar15;
    }
    lVar6 = func_0x01770430(lVar6,uVar16 * uVar15);
    uVar3 = s_x_i8___type_annotation_not_prese_01c220e1._16_8_;
    uVar12 = s_x_i8___type_annotation_not_prese_01c220e1._0_8_;
    pcVar7 = *(char **)(lVar6 + 0x18);
    if (0x24 < (ulong)(*(long *)(lVar6 + 0x10) - (long)pcVar7)) {
      uVar2 = CONCAT35(s_x_i8___type_annotation_not_prese_01c220e1._29_3_,
                       s_x_i8___type_annotation_not_prese_01c220e1._24_5_);
      *(undefined8 *)(pcVar7 + 8) = s_x_i8___type_annotation_not_prese_01c220e1._8_8_;
/* proprietary - see LICENSE - do not sell */
      *(undefined8 *)pcVar7 = uVar12;
      *(undefined8 *)(pcVar7 + 0x18) = uVar2;
      *(undefined8 *)(pcVar7 + 0x10) = uVar3;
      *(ulong *)(pcVar7 + 0x1d) =
           CONCAT53(s_x_i8___type_annotation_not_prese_01c220e1._32_5_,
                    s_x_i8___type_annotation_not_prese_01c220e1._29_3_);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 0x25;
      puVar13 = *(undefined1 **)(param_4 + 0x18);
      uVar16 = *(long *)(param_4 + 0x10) - (long)puVar13;
      goto joined_r0x0002a4e0;
    }
    func_0x01770110(lVar6," x i8] (type annotation not present)\n",0x25);
    puVar13 = *(undefined1 **)(param_4 + 0x18);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar13) < param_6) goto LAB_0002a2b8;
LAB_0002a4e4:
    if (param_6 != 0) {
      _memcpy(puVar13,param_5,param_6);
      puVar13 = (undefined1 *)(*(long *)(param_4 + 0x18) + param_6);
      *(undefined1 **)(param_4 + 0x18) = puVar13;
    }
    lVar6 = param_4;
// WM - reversing this took months of machine time
    if (*(undefined1 **)(param_4 + 0x10) == puVar13) goto LAB_0002a2dc;
LAB_0002a510:
    *puVar13 = 10;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    puVar9 = *(undefined2 **)(param_4 + 0x18);
    uVar16 = *(long *)(param_4 + 0x10) - (long)puVar9;
joined_r0x0002a3f4:
    if (param_6 <= uVar16) goto LAB_0002a6f0;
LAB_0002a534:
    lVar6 = func_0x01770110(param_4,param_5,param_6);
    puVar9 = *(undefined2 **)(lVar6 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x10) - (long)puVar9) < 3) goto LAB_0002a720;
LAB_0002a55c:
    *(undefined1 *)(puVar9 + 1) = 10;
    *puVar9 = 0x7d20;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 3;
    puVar13 = *(undefined1 **)(param_4 + 0x18);
    uVar16 = *(long *)(param_4 + 0x10) - (long)puVar13;
  }
  else {
    **(undefined1 **)(lVar6 + 0x18) = 10;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    puVar9 = *(undefined2 **)(param_4 + 0x18);
    if (param_6 <= (ulong)(*(long *)(param_4 + 0x10) - (long)puVar9)) goto LAB_0002a110;
LAB_0002a040:
    lVar6 = func_0x01770110(param_4,param_5,param_6);
    puVar9 = *(undefined2 **)(lVar6 + 0x18);
    if ((ulong)(*(long *)(lVar6 + 0x10) - (long)puVar9) < 3) goto LAB_0002a140;
LAB_0002a068:
    *(undefined1 *)(puVar9 + 1) = 10;
/*
 *  if you paid for this, you were scammed
 *
 *  @pengussy
 */
    *puVar9 = 0x7b20;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 3;
    puVar13 = *(undefined1 **)(param_4 + 0x18);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar13) < param_6) goto LAB_0002a164;
LAB_0002a094:
    if (param_6 != 0) {
      _memcpy(puVar13,param_5,param_6);
      puVar13 = (undefined1 *)(*(long *)(param_4 + 0x18) + param_6);
      *(undefined1 **)(param_4 + 0x18) = puVar13;
    }
    lVar6 = param_4;
    if (*(undefined1 **)(param_4 + 0x10) == puVar13) goto LAB_0002a188;
LAB_0002a0c0:
    *puVar13 = 10;
    *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 1;
    lVar6 = func_0x015bc394(param_1);
    if (*(char *)(lVar6 + 8) != '\f') goto LAB_0002a1c0;
LAB_0002a1b4:
    iVar4 = func_0x013f5b3c(lVar6);
    if (iVar4 != 0) goto LAB_0002a1c0;
    if (*(char *)(lVar6 + 8) != '\f') {
      func_0x0174f200("cast");
    }
    lVar10 = func_0x015c3470(param_2,lVar6);
    if (lVar10 != 0) {
      func_0x0002bde8(param_3,lVar6);
      func_0x016b16b8(param_3,lVar6);
      func_0x0002a7b8(lVar6,param_2,param_3,param_4,param_5,param_6,"$Element",8,0x300000000,0x32);
      puVar9 = *(undefined2 **)(param_4 + 0x18);
      uVar16 = *(long *)(param_4 + 0x10) - (long)puVar9;
      goto joined_r0x0002a3f4;
    }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    puVar14 = *(undefined4 **)(param_4 + 0x18);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar14) < param_6) {
      lVar10 = func_0x01770110(param_4,param_5,param_6);
      puVar14 = *(undefined4 **)(lVar10 + 0x18);
      if ((ulong)(*(long *)(lVar10 + 0x10) - (long)puVar14) < 4) goto LAB_0002a64c;
LAB_0002a600:
      *puVar14 = 0x5b202020;
      *(long *)(lVar10 + 0x18) = *(long *)(lVar10 + 0x18) + 4;
    }
    else {
      if (param_6 != 0) {
        _memcpy(puVar14,param_5,param_6);
        puVar14 = (undefined4 *)(*(long *)(param_4 + 0x18) + param_6);
        *(undefined4 **)(param_4 + 0x18) = puVar14;
      }
      lVar10 = param_4;
      if (3 < (ulong)(*(long *)(param_4 + 0x10) - (long)puVar14)) goto LAB_0002a600;
LAB_0002a64c:
      lVar10 = func_0x01770110(lVar10,"   [",4);
    }
    lVar11 = func_0x0002bde8(param_3,lVar6);
    uVar15 = func_0x016b16b8(param_3,lVar6);
    uVar15 = uVar15 & 0xffffffff;
    uVar16 = 0;
    if (uVar15 != 0) {
      uVar16 = ((uVar15 + (lVar11 + 7U >> 3)) - 1) / uVar15;
    }
    lVar6 = func_0x01770430(lVar10,uVar16 * uVar15);
    uVar3 = s_x_i8___type_annotation_not_prese_01c220e1._16_8_;
    uVar12 = s_x_i8___type_annotation_not_prese_01c220e1._0_8_;
    pcVar7 = *(char **)(lVar6 + 0x18);
    if (0x24 < (ulong)(*(long *)(lVar6 + 0x10) - (long)pcVar7)) {
      uVar2 = CONCAT35(s_x_i8___type_annotation_not_prese_01c220e1._29_3_,
                       s_x_i8___type_annotation_not_prese_01c220e1._24_5_);
/* +- WM -------------------------------------------------------------+
   |  if you paid for this, you were scammed
   +--------------------------------------------------------------------*/
      *(undefined8 *)(pcVar7 + 8) = s_x_i8___type_annotation_not_prese_01c220e1._8_8_;
      *(undefined8 *)pcVar7 = uVar12;
      *(undefined8 *)(pcVar7 + 0x18) = uVar2;
      *(undefined8 *)(pcVar7 + 0x10) = uVar3;
      *(ulong *)(pcVar7 + 0x1d) =
           CONCAT53(s_x_i8___type_annotation_not_prese_01c220e1._32_5_,
                    s_x_i8___type_annotation_not_prese_01c220e1._29_3_);
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 0x25;
      puVar9 = *(undefined2 **)(param_4 + 0x18);
      uVar16 = *(long *)(param_4 + 0x10) - (long)puVar9;
      goto joined_r0x0002a3f4;
    }
    pcVar7 = " x i8] (type annotation not present)\n";
    uVar12 = 0x25;
LAB_0002a2ec:
    func_0x01770110(lVar6,pcVar7,uVar12);
    puVar9 = *(undefined2 **)(param_4 + 0x18);
    if ((ulong)(*(long *)(param_4 + 0x10) - (long)puVar9) < param_6) goto LAB_0002a534;
LAB_0002a6f0:
    if (param_6 != 0) {
      _memcpy(puVar9,param_5,param_6);
      puVar9 = (undefined2 *)(*(long *)(param_4 + 0x18) + param_6);
      *(undefined2 **)(param_4 + 0x18) = puVar9;
    }
    lVar6 = param_4;
    if (2 < (ulong)(*(long *)(param_4 + 0x10) - (long)puVar9)) goto LAB_0002a55c;
LAB_0002a720:
    func_0x01770110(lVar6," }\n",3);
/* unlicensed copy if this notice is missing - github.com/pengussy */
    puVar13 = *(undefined1 **)(param_4 + 0x18);
    uVar16 = *(long *)(param_4 + 0x10) - (long)puVar13;
  }
  if (uVar16 < param_6) {
    param_4 = func_0x01770110(param_4,param_5,param_6);
    puVar13 = *(undefined1 **)(param_4 + 0x18);
    if (*(undefined1 **)(param_4 + 0x10) == puVar13) {
LAB_0002a768:
      func_0x01770110(param_4,"\n",1);
      return;
    }
  }
  else {
    if (param_6 != 0) {
      _memcpy(puVar13,param_5,param_6);
      puVar13 = (undefined1 *)(*(long *)(param_4 + 0x18) + param_6);
      *(undefined1 **)(param_4 + 0x18) = puVar13;
    }
    if (*(undefined1 **)(param_4 + 0x10) == puVar13) goto LAB_0002a768;
  }
  *puVar13 = 10;
  *(long *)(param_4 + 0x18) = *(long *)(param_4 + 0x18) + 1;
  return;
}

