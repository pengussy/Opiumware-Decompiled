/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x183268:feb9dc2985
 */

void FUN_00183268(undefined8 *param_1,byte *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 auStack_68 [3];
  
  if (param_2 != (byte *)*param_3) {
    uVar5 = ___cxa_allocate_exception(0x20);
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
    func_0x0000e100(&uStack_70,"iterator does not fit current value");
    func_0x0018425c(uVar5,0xca,&uStack_70,param_2);
    ___cxa_throw(uVar5,&UNK_01dbfdf0,&DAT_00184420);
LAB_00183528:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x18352c);
    (*pcVar4)();
  }
  param_1[1] = 0;
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  bVar2 = *param_2;
  if (bVar2 == 2) {
    lVar8 = *(long *)(param_2 + 8);
    puVar10 = *(undefined1 **)(lVar8 + 8);
    puVar9 = (undefined1 *)param_3[2];
    if (puVar9 + 0x10 == puVar10) {
      puVar11 = puVar9;
    }
    else {
      puVar12 = puVar9;
      do {
        uVar13 = *(undefined8 *)(puVar12 + 0x18);
        uVar5 = *(undefined8 *)(puVar12 + 0x10);
        puVar12[0x10] = 0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
        *(undefined8 *)(puVar12 + 0x18) = 0;
        uVar3 = *puVar12;
        uStack_70 = (undefined1)uVar5;
        *puVar12 = uStack_70;
        _uStack_70 = CONCAT71((int7)((ulong)uVar5 >> 8),uVar3);
        auStack_68[0] = *(undefined8 *)(puVar12 + 8);
        *(undefined8 *)(puVar12 + 8) = uVar13;
        func_0x00183bbc(auStack_68);
        puVar11 = puVar12 + 0x10;
        puVar1 = puVar12 + 0x20;
        puVar12 = puVar11;
      } while (puVar1 != puVar10);
      puVar10 = *(undefined1 **)(lVar8 + 8);
    }
    while (puVar10 != puVar11) {
      func_0x00183bbc(puVar10 + -8,puVar10[-0x10]);
      puVar10 = puVar10 + -0x10;
    }
/* do not claim this as your own */
    *(undefined1 **)(lVar8 + 8) = puVar11;
    param_1[2] = puVar9;
    return;
  }
  if (bVar2 == 1) {
    uVar5 = func_0x0018476c(*(undefined8 *)(param_2 + 8),param_3[1]);
    param_1[1] = uVar5;
    return;
  }
  param_1[3] = 1;
  uVar6 = (uint)bVar2;
  if (5 < uVar6 - 3) {
    uVar5 = ___cxa_allocate_exception(0x20);
    uStack_78 = func_0x00184714(param_2);
    func_0x00184650(&uStack_70,"cannot use erase() with ",&uStack_78);
    func_0x00184484(uVar5,0x133,&uStack_70,param_2);
    ___cxa_throw(uVar5,&UNK_01dbfe30,&DAT_0018473c);
    goto LAB_00183528;
  }
  if (param_3[3] != 0) {
    uVar5 = ___cxa_allocate_exception(0x20);
    func_0x0000e100(&uStack_70,"iterator out of range");
    func_0x0018425c(uVar5,0xcd,&uStack_70,param_2);
    ___cxa_throw(uVar5,&UNK_01dbfdf0,&DAT_00184420);
    goto LAB_00183528;
  }
  if (uVar6 == 8) {
    plVar7 = *(long **)(param_2 + 8);
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      plVar7[1] = lVar8;
LAB_001833cc:
      __ZdlPv(lVar8);
      plVar7 = *(long **)(param_2 + 8);
/*  no support for modified copies  */
    }
  }
  else {
    if (uVar6 != 3) goto LAB_001833f0;
    plVar7 = *(long **)(param_2 + 8);
    if (*(char *)((long)plVar7 + 0x17) < '\0') {
      lVar8 = *plVar7;
      goto LAB_001833cc;
    }
  }
  __ZdlPv(plVar7);
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
LAB_001833f0:
  *param_2 = 0;
  return;
}

