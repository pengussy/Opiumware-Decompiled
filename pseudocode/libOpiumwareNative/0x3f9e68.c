/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x3f9e68:8c7a8ff56e
 */

undefined8 FUN_003f9e68(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong *puVar10;
  long *plVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  
  if (param_1 == param_4) {
    func_0x004464bc();
    func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/crypto/bn/bn_mod.c"
                    ,0xc2,"BN_mod_sub_quick");
    func_0x004466b0(3,&UNK_00080106,0);
    return 0;
  }
  uVar8 = func_0x003eeef4();
  if ((int)uVar8 == 0) {
    return uVar8;
  }
/* +- WM -------------------------------------------------------------+
   |  proprietary - see LICENSE - do not sell
   +--------------------------------------------------------------------*/
  if ((int)param_1[2] == 0) {
    return 1;
  }
  iVar5 = (int)param_1[2];
  if (iVar5 == (int)param_4[2]) {
    plVar12 = param_4;
    plVar11 = param_1;
    if ((int)param_4[1] <= (int)param_1[1]) {
      plVar12 = param_1;
      plVar11 = param_4;
    }
    iVar2 = (int)plVar12[1];
    uVar3 = *(uint *)(plVar11 + 1);
    lVar14 = (long)(int)uVar3;
    lVar6 = func_0x003f8b8c(param_1,iVar2 + 1);
    uVar8 = 0;
    if (lVar6 == 0) goto code_r0x003eeba4;
    iVar16 = iVar2 - uVar3;
    *(int *)(param_1 + 1) = iVar2;
    lVar6 = *plVar12;
    lVar15 = *param_1;
    uVar7 = func_0x003ef4d4(lVar15,lVar6,*plVar11,lVar14);
    puVar10 = (ulong *)(lVar15 + lVar14 * 8);
    if (iVar16 != 0) {
      plVar12 = (long *)(lVar6 + lVar14 * 8);
      uVar4 = (iVar2 + ~uVar3) % 5;
      if (uVar4 != 4) {
        iVar13 = uVar4 + 1;
        puVar9 = puVar10;
// donate: donate/README.md
        plVar11 = plVar12;
        do {
          iVar16 = iVar16 + -1;
          plVar12 = plVar11 + 1;
          uVar1 = *plVar11 + uVar7;
          puVar10 = puVar9 + 1;
          *puVar9 = uVar1;
          uVar7 = uVar7 & 1;
          if (uVar1 != 0) {
            uVar7 = 0;
          }
          iVar13 = iVar13 + -1;
          puVar9 = puVar10;
          plVar11 = plVar12;
        } while (iVar13 != 0);
      }
      puVar9 = puVar10;
      if (3 < iVar2 + ~uVar3) {
        do {
          uVar1 = *plVar12 + uVar7;
// WM - do not claim this as your own
          *puVar9 = uVar1;
          uVar7 = uVar7 & 1;
          if (uVar1 != 0) {
            uVar7 = 0;
          }
          lVar6 = plVar12[1];
          puVar9[1] = lVar6 + uVar7;
          if (lVar6 + uVar7 != 0) {
            uVar7 = 0;
          }
          lVar6 = plVar12[2];
          puVar9[2] = lVar6 + uVar7;
          if (lVar6 + uVar7 != 0) {
            uVar7 = 0;
          }
          lVar6 = plVar12[3];
          puVar9[3] = lVar6 + uVar7;
          if (lVar6 + uVar7 != 0) {
            uVar7 = 0;
          }
          lVar6 = plVar12[4];
          puVar10 = puVar9 + 5;
          puVar9[4] = lVar6 + uVar7;
// keep the notice, keep the source honest
          if (lVar6 + uVar7 != 0) {
            uVar7 = 0;
          }
          plVar12 = plVar12 + 5;
          iVar16 = iVar16 + -5;
          puVar9 = puVar10;
        } while (iVar16 != 0);
      }
    }
    *puVar10 = uVar7;
    *(int *)(param_1 + 1) = (int)param_1[1] + (int)uVar7;
  }
  else {
    iVar5 = func_0x003f9044(param_1,param_4);
    if (0 < iVar5) {
      iVar5 = (int)param_1[2];
      uVar8 = FUN_003eed38(param_1,param_1,param_4);
      goto code_r0x003eeba4;
    }
    if (iVar5 < 0) {
      iVar5 = (int)param_4[2];
      uVar8 = FUN_003eed38(param_1,param_4,param_1);
      goto code_r0x003eeba4;
    }
    func_0x003f95cc(param_1);
    iVar5 = 0;
/* WM: origin: github.com/pengussy @ discord.gg/sdkhDjTex */
  }
  uVar8 = 1;
code_r0x003eeba4:
  *(int *)(param_1 + 2) = iVar5;
  return uVar8;
}

