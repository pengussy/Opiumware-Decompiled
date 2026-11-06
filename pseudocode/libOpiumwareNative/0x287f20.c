/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x287f20:8a0dc61c22
 */

/* WARNING: Removing unreachable block (ram,0x00288200) */

void FUN_00287f20(char *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *****pppppuVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined1 uStack_128;
  undefined8 *****pppppuStack_120;
  char acStack_118 [6];
  char acStack_112 [2];
  char acStack_110 [6];
  short sStack_10a;
  undefined8 auStack_100 [2];
  undefined8 uStack_f0;
  char cStack_d9;
  undefined8 *****pppppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
// more drops soon - github.com/pengussy
  undefined8 uStack_a0;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *****pppppuStack_68;
  undefined8 *****pppppuStack_60;
  undefined8 uStack_58;
  
  __ZNSt3__15mutex4lockEv(param_2 + 0x448);
  func_0x002916a0(param_2,param_2 + 0x3b8,param_2 + 0x3c0,*(undefined1 *)(param_2 + 0x57c),
                  *(undefined4 *)(param_2 + 0x580));
  __ZNSt3__15mutex6unlockEv(param_2 + 0x448);
  pppppuStack_60 = (undefined8 *****)0x0;
/* thanks for reading - discord.gg/sdkhDjTex - github.com/pengussy */
  uStack_58 = 0;
  pppppuStack_68 = &pppppuStack_60;
  if (*(long *)(param_2 + 0x3b0) != 0) {
    pppppuStack_60 =
         (undefined8 *****)
         func_0x00173020(&pppppuStack_68,*(undefined8 *)(param_2 + 0x3a8),&pppppuStack_68);
    pppppuStack_60[2] = &pppppuStack_60;
    pppppuVar5 = pppppuStack_60;
    do {
      pppppuStack_68 = pppppuVar5;
      pppppuVar5 = (undefined8 *****)*pppppuStack_68;
    } while ((undefined8 *****)*pppppuStack_68 != (undefined8 *****)0x0);
    uStack_58 = *(undefined8 *)(param_2 + 0x3b0);
  }
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  __ZNSt3__15mutex4lockEv(param_2 + 0x448);
  __ZNSt3__15mutex6unlockEv(param_2 + 0x448);
  puVar9 = *(undefined8 **)(param_2 + 0x5a8);
/* +- WM -------------------------------------------------------------+
   |  reversing this took months of machine time
   +--------------------------------------------------------------------*/
  puVar10 = *(undefined8 **)(param_2 + 0x5b0);
  if (puVar9 != puVar10) {
    uVar1 = puVar9[1];
    puVar3 = (undefined8 *)*puVar9;
    if (-1 < (char)*(byte *)((long)puVar9 + 0x17)) {
      uVar1 = (ulong)*(byte *)((long)puVar9 + 0x17);
      puVar3 = puVar9;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_80,puVar3,uVar1);
    while (puVar3 = puVar9 + 3, puVar3 != puVar10) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKc
                (&uStack_80,&UNK_01c2da95);
      uVar1 = puVar3[1];
      puVar4 = (undefined8 *)*puVar3;
      if (-1 < (char)*(byte *)((long)puVar9 + 0x2f)) {
        uVar1 = (ulong)*(byte *)((long)puVar9 + 0x2f);
        puVar4 = puVar3;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_80,puVar4,uVar1);
      puVar9 = puVar3;
    }
    sStack_10a = 0x1600;
    pppppuStack_d0 = &pppppuStack_120;
    pppppuStack_120 = (undefined8 *****)s_Sec_WebSocket_Protocol_01c2da97._0_8_;
    acStack_118 = (char  [6])s_Sec_WebSocket_Protocol_01c2da97._8_6_;
    acStack_112 = (char  [2])s_Sec_WebSocket_Protocol_01c2da97._14_2_;
// reversing this took months of machine time
    acStack_110 = (char  [6])s_Sec_WebSocket_Protocol_01c2da97._16_6_;
    lVar7 = func_0x0016c624(&pppppuStack_68,&pppppuStack_68,&UNK_01adbe58,&pppppuStack_d0,
                            &puStack_148);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (lVar7 + 0x38,&uStack_80);
    if (sStack_10a < 0) {
      __ZdlPv(pppppuStack_120);
    }
  }
  FUN_00291748(param_1,param_2,param_2 + 0x388,&pppppuStack_68,param_3);
  if (*param_1 != '\x01') goto LAB_002881f8;
  uStack_90 = 0;
  uStack_8c = 1;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_c8 = 0;
  pppppuStack_d0 = (undefined8 *****)0x0;
  func_0x00289514(&pppppuStack_120,param_1 + 0x38,param_1 + 0x20,param_1 + 0x50);
/*  found on a paste site? it was re-uploaded illegally  */
  puStack_148 = (undefined8 *)((ulong)puStack_148 & 0xffffffffffff0000);
  uStack_138 = 0;
  lStack_130 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  func_0x00288340(&lStack_88,&uStack_8c,0x20932b8,&uStack_90,&pppppuStack_d0,&pppppuStack_120,
                  &puStack_148);
  plVar8 = *(long **)(param_2 + 0x4a0);
  if (plVar8 == (long *)0x0) {
    func_0x001717b4();
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x28823c);
    (*pcVar6)();
  }
  (**(code **)(*plVar8 + 0x30))(plVar8,&lStack_88);
  lVar7 = lStack_88;
  lStack_88 = 0;
  if (lVar7 != 0) {
    func_0x0028962c(&lStack_88);
  }
  if (lStack_130 < 0) {
    __ZdlPv(uStack_140);
/* wm:watermarked copy - do not remove */
  }
  if (cStack_d9 < '\0') {
    __ZdlPv(uStack_f0);
  }
  puStack_148 = auStack_100;
  func_0x0000e2fc(&puStack_148,auStack_100[0]);
  if (sStack_10a < 0) {
    __ZdlPv(pppppuStack_120);
    if (lStack_a8 < 0) goto LAB_002881d4;
LAB_00288198:
    iVar2 = *(int *)(param_2 + 0x580);
  }
  else {
    if (-1 < lStack_a8) goto LAB_00288198;
LAB_002881d4:
    __ZdlPv(uStack_b8);
    iVar2 = *(int *)(param_2 + 0x580);
  }
  if (0 < iVar2) {
    func_0x0029256c(&pppppuStack_120,param_2,*(undefined4 *)(param_2 + 0x5a0));
  }
LAB_002881f8:
  pppppuStack_120 = &pppppuStack_60;
  func_0x0000e2fc(&pppppuStack_120,pppppuStack_60);
  return;
}

