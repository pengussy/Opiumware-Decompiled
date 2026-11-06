/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x2ca04:2ae7316e3e
   =========================================================================== */

/* WARNING: Type propagation algorithm not settling */

void FUN_0002ca04(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6,ulong param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined2 *puVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
/* wm:do not claim this as your own */
  long *plVar14;
  long *plVar15;
  
  puVar9 = *(undefined1 **)(param_1 + 0x18);
  if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar9) < param_3) {
    lVar5 = func_0x01770110(param_1,param_2,param_3);
    puVar9 = *(undefined1 **)(lVar5 + 0x18);
    if (*(undefined1 **)(lVar5 + 0x10) != puVar9) {
LAB_0002ca6c:
      *puVar9 = 0x20;
      pcVar8 = (char *)(*(long *)(lVar5 + 0x18) + 1);
      *(char **)(lVar5 + 0x18) = pcVar8;
      uVar13 = *(long *)(lVar5 + 0x10) - (long)pcVar8;
      goto joined_r0x0002caec;
    }
  }
  else {
    if (param_3 != 0) {
      _memcpy(puVar9,param_2,param_3);
      puVar9 = (undefined1 *)(*(long *)(param_1 + 0x18) + param_3);
      *(undefined1 **)(param_1 + 0x18) = puVar9;
    }
    lVar5 = param_1;
    if (*(undefined1 **)(param_1 + 0x10) != puVar9) goto LAB_0002ca6c;
  }
  lVar5 = func_0x01770110(lVar5,&UNK_01c881b6,1);
  pcVar8 = *(char **)(lVar5 + 0x18);
  uVar13 = *(long *)(lVar5 + 0x10) - (long)pcVar8;
joined_r0x0002caec:
  if (uVar13 < param_5) {
// unlicensed copy if this notice is missing
    lVar5 = func_0x01770110(lVar5,param_4,param_5);
    pcVar8 = *(char **)(lVar5 + 0x18);
  }
  else if (param_5 != 0) {
    _memcpy(pcVar8,param_4,param_5);
    pcVar8 = (char *)(*(long *)(lVar5 + 0x18) + param_5);
    *(char **)(lVar5 + 0x18) = pcVar8;
  }
  uVar3 = s_contributing_to_computation_of_01c2241e._24_8_;
  uVar2 = s_contributing_to_computation_of_01c2241e._16_8_;
  uVar7 = s_contributing_to_computation_of_01c2241e._0_8_;
  if ((ulong)(*(long *)(lVar5 + 0x10) - (long)pcVar8) < 0x20) {
    lVar5 = func_0x01770110(lVar5," contributing to computation of ",0x20);
    puVar10 = *(undefined2 **)(lVar5 + 0x18);
    uVar13 = *(long *)(lVar5 + 0x10) - (long)puVar10;
  }
  else {
    *(undefined8 *)(pcVar8 + 8) = s_contributing_to_computation_of_01c2241e._8_8_;
    *(undefined8 *)pcVar8 = uVar7;
    *(undefined8 *)(pcVar8 + 0x18) = uVar3;
    *(undefined8 *)(pcVar8 + 0x10) = uVar2;
    puVar10 = (undefined2 *)(*(long *)(lVar5 + 0x18) + 0x20);
    *(undefined2 **)(lVar5 + 0x18) = puVar10;
    uVar13 = *(long *)(lVar5 + 0x10) - (long)puVar10;
  }
  if (uVar13 < param_7) {
    lVar5 = func_0x01770110(lVar5,param_6,param_7);
    puVar10 = *(undefined2 **)(lVar5 + 0x18);
    uVar13 = *(long *)(lVar5 + 0x10) - (long)puVar10;
  }
  else {
    if (param_7 != 0) {
/* keep the notice, keep the source honest */
      _memcpy(puVar10,param_6,param_7);
      puVar10 = (undefined2 *)(*(long *)(lVar5 + 0x18) + param_7);
      *(undefined2 **)(lVar5 + 0x18) = puVar10;
    }
    uVar13 = *(long *)(lVar5 + 0x10) - (long)puVar10;
  }
  if (uVar13 < 2) {
    func_0x01770110(lVar5,":\n",2);
    plVar15 = (long *)*param_8;
    if (plVar15 == param_8 + 1) {
      return;
    }
  }
  else {
    *puVar10 = 0xa3a;
    *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + 2;
    plVar15 = (long *)*param_8;
    if (plVar15 == param_8 + 1) {
      return;
    }
  }
  do {
    lVar5 = plVar15[4];
    pcVar8 = *(char **)(param_1 + 0x18);
    if ((ulong)(*(long *)(param_1 + 0x10) - (long)pcVar8) < param_3) {
      lVar6 = func_0x01770110(param_1,param_2,param_3);
      pcVar8 = *(char **)(lVar6 + 0x18);
      if ((ulong)(*(long *)(lVar6 + 0x10) - (long)pcVar8) < 10) goto LAB_0002cd00;
LAB_0002cc58:
      pcVar8[8] = 't';
      pcVar8[9] = ' ';
      *(undefined8 *)pcVar8 = s_output_01c22442._0_8_;
      *(long *)(lVar6 + 0x18) = *(long *)(lVar6 + 0x18) + 10;
      lVar5 = func_0x0176fd34(lVar6,(int)lVar5);
      pcVar8 = *(char **)(lVar5 + 0x18);
      if ((ulong)(*(long *)(lVar5 + 0x10) - (long)pcVar8) < 0x16) goto LAB_0002cd28;
LAB_0002cc94:
      uVar7 = s_depends_on_inputs____01c2244d._0_8_;
/* found on a paste site? it was re-uploaded illegally */
      *(ulong *)(pcVar8 + 8) =
           CONCAT26(s_depends_on_inputs____01c2244d._14_2_,s_depends_on_inputs____01c2244d._8_6_);
      *(undefined8 *)pcVar8 = uVar7;
      *(ulong *)(pcVar8 + 0xe) =
           CONCAT62(s_depends_on_inputs____01c2244d._16_6_,s_depends_on_inputs____01c2244d._14_2_);
      *(long *)(lVar5 + 0x18) = *(long *)(lVar5 + 0x18) + 0x16;
      plVar14 = (long *)plVar15[5];
      if (plVar14 != plVar15 + 6) {
LAB_0002cd48:
        bVar4 = true;
        do {
          uVar1 = *(undefined4 *)((long)plVar14 + 0x1c);
          if (bVar4) {
LAB_0002cd90:
            func_0x0176fd34(param_1,uVar1);
            plVar12 = (long *)plVar14[1];
            if ((long *)plVar14[1] != (long *)0x0) goto LAB_0002cda0;
LAB_0002cdd0:
            do {
              plVar11 = (long *)plVar14[2];
              bVar4 = plVar14 != (long *)*plVar11;
              plVar14 = plVar11;
            } while (bVar4);
          }
          else {
            if ((ulong)(*(long *)(param_1 + 0x10) - (long)*(undefined2 **)(param_1 + 0x18)) < 2) {
              func_0x01770110(param_1,", ",2);
              goto LAB_0002cd90;
            }
            **(undefined2 **)(param_1 + 0x18) = 0x202c;
// WM - no support for modified copies
            *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 2;
            func_0x0176fd34(param_1,uVar1);
            plVar12 = (long *)plVar14[1];
            if ((long *)plVar14[1] == (long *)0x0) goto LAB_0002cdd0;
LAB_0002cda0:
            do {
              plVar11 = plVar12;
              plVar12 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
          bVar4 = false;
          plVar14 = plVar11;
        } while (plVar11 != plVar15 + 6);
      }
    }
    else {
      if (param_3 != 0) {
        _memcpy(pcVar8,param_2,param_3);
        pcVar8 = (char *)(*(long *)(param_1 + 0x18) + param_3);
        *(char **)(param_1 + 0x18) = pcVar8;
      }
      lVar6 = param_1;
      if (9 < (ulong)(*(long *)(param_1 + 0x10) - (long)pcVar8)) goto LAB_0002cc58;
LAB_0002cd00:
      uVar7 = func_0x01770110(lVar6,"   output ",10);
      lVar5 = func_0x0176fd34(uVar7,(int)lVar5);
      pcVar8 = *(char **)(lVar5 + 0x18);
      if (0x15 < (ulong)(*(long *)(lVar5 + 0x10) - (long)pcVar8)) goto LAB_0002cc94;
LAB_0002cd28:
      func_0x01770110(lVar5," depends on inputs: { ",0x16);
      plVar14 = (long *)plVar15[5];
      if (plVar14 != plVar15 + 6) goto LAB_0002cd48;
/* WM - stripping the watermark breaks the license */
    }
    puVar10 = *(undefined2 **)(param_1 + 0x18);
    if ((ulong)(*(long *)(param_1 + 0x10) - (long)puVar10) < 3) {
      func_0x01770110(param_1," }\n",3);
      plVar14 = (long *)plVar15[1];
      if ((long *)plVar15[1] != (long *)0x0) goto LAB_0002ce3c;
LAB_0002ce4c:
      do {
        plVar12 = (long *)plVar15[2];
        bVar4 = plVar15 != (long *)*plVar12;
        plVar15 = plVar12;
      } while (bVar4);
    }
    else {
      *(undefined1 *)(puVar10 + 1) = 10;
      *puVar10 = 0x7d20;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 3;
      plVar14 = (long *)plVar15[1];
      if ((long *)plVar15[1] == (long *)0x0) goto LAB_0002ce4c;
LAB_0002ce3c:
      do {
        plVar12 = plVar14;
        plVar14 = (long *)*plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
    plVar15 = plVar12;
/*  origin: github.com/pengussy  */
    if (plVar12 == param_8 + 1) {
      return;
    }
  } while( true );
}

