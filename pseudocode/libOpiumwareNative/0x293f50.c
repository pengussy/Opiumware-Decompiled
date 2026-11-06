/* ===========================================================================
   WM :: @pengussy :: github.com/pengussy
   proprietary, all rights reserved - see LICENSE
   found without this block? unlicensed copy. origin: github.com/pengussy / discord.gg/sdkhDjTex
   donate: donate/README.md        file-id: 0x293f50:6ab803550e
   =========================================================================== */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00293f50(byte *param_1,long param_2,ulong param_3,long *param_4,ulong param_5,long param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
/* unlicensed copy if this notice is missing - github.com/pengussy */
  undefined4 uStack_68;
  int iStack_64;
  
  if ((*(int *)(param_2 + 0x118) == 3) || (*(int *)(param_2 + 0x118) == 0)) {
    uVar15 = param_4[1];
    if ((int)param_5 == 0) {
      param_4 = (long *)*param_4;
      lStack_90 = (long)param_4 + uVar15;
      uVar7 = uVar15;
    }
    else {
      plVar9 = (long *)(param_2 + 0x218);
      uVar7 = func_0x0028fbf8(*(undefined8 *)(param_2 + 0x1f0),param_4,plVar9);
      if ((uVar7 & 1) == 0) {
        param_1[0] = 0;
        param_1[1] = 1;
        goto LAB_0029429c;
      }
      uVar7 = (ulong)*(char *)(param_2 + 0x22f);
      if ((long)uVar7 < 0) {
        uVar7 = *(ulong *)(param_2 + 0x220);
      }
      param_4 = (long *)*plVar9;
      if (-1 < *(char *)(param_2 + 0x22f)) {
        param_4 = plVar9;
      }
      lStack_90 = (long)param_4 + uVar7;
    }
    __ZNSt3__15mutex4lockEv(param_2 + 0x70);
    lVar13 = *(long *)(param_2 + 0x58);
    uVar12 = param_5;
    if ((ulong)(*(long *)(param_2 + 0x68) - lVar13) < uVar7) {
      if ((long)uVar7 < 0) {
        FUN_0000abb4();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x2942c8);
        (*pcVar2)();
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
      }
      lVar11 = *(long *)(param_2 + 0x60);
      lVar8 = __Znwm(uVar7);
      _memcpy(lVar8,lVar13);
      *(long *)(param_2 + 0x58) = lVar8;
      *(long *)(param_2 + 0x60) = lVar8 + (lVar11 - lVar13);
      *(ulong *)(param_2 + 0x68) = lVar8 + uVar7;
      uVar12 = param_5 & 0xffffffff;
      param_3 = param_3 & 0xffffffff;
      if (lVar13 != 0) {
        __ZdlPv(lVar13);
      }
    }
    __ZNSt3__15mutex6unlockEv(param_2 + 0x70);
    uVar14 = uVar7 >> 0xf;
    if (uVar14 == 0) {
      lStack_78 = lStack_90;
      lStack_70 = (long)param_4;
      bVar4 = func_0x0029462c(param_2,param_3,1,&lStack_70,&lStack_78,uVar12);
      plVar9 = *(long **)(param_6 + 0x18);
      if (plVar9 != (long *)0x0) {
        uStack_68 = 1;
        iStack_64 = 0;
        (**(code **)(*plVar9 + 0x30))(plVar9,&iStack_64,&uStack_68);
      }
      goto LAB_00294228;
    }
    lStack_88 = lStack_90;
/* WM - keep the notice, keep the source honest */
    if (uVar14 != 1) {
      lStack_88 = (long)param_4 + 0x8000;
    }
    lStack_80 = (long)param_4;
    iVar6 = func_0x0029462c(param_2,param_3,uVar14 == 1,&lStack_80,&lStack_88,uVar12);
    if (iVar6 != 0) {
      plVar9 = *(long **)(param_6 + 0x18);
      if (plVar9 == (long *)0x0) {
        if (0xffff < uVar7) goto LAB_00294158;
      }
      else {
        iStack_64 = 0;
        uStack_68 = (int)uVar14;
        iVar6 = (**(code **)(*plVar9 + 0x30))(plVar9,&iStack_64,&uStack_68);
        if (iVar6 != 0 && uVar7 >> 0x10 != 0) {
LAB_00294158:
          lVar13 = (long)param_4 + 0x10000;
          lStack_88 = lStack_90;
          if (uVar14 != 2) {
            lStack_88 = lVar13;
          }
          lStack_80 = (long)param_4 + 0x8000;
          iVar6 = func_0x0029462c(param_2,0,uVar14 == 2,&lStack_80,&lStack_88,param_5 & 0xffffffff);
          if (iVar6 != 0) {
            lVar8 = (long)param_4 + 0x18000;
            uVar12 = 2;
            do {
              plVar9 = *(long **)(param_6 + 0x18);
              if (plVar9 == (long *)0x0) {
                if (uVar14 <= uVar12) goto LAB_00294224;
              }
/* watermarked copy - do not remove - github.com/pengussy */
              else {
                iStack_64 = (int)uVar12 + -1;
                uStack_68 = (int)uVar14;
                iVar6 = (**(code **)(*plVar9 + 0x30))(plVar9,&iStack_64,&uStack_68);
                if (iVar6 == 0 || uVar14 <= uVar12) goto LAB_00294224;
              }
              bVar3 = (3 - uVar14) + uVar12 == 2;
              lStack_88 = lStack_90;
              if (!bVar3) {
                lStack_88 = lVar8;
              }
              lStack_80 = lVar13;
              uVar10 = func_0x0029462c(param_2,0,bVar3,&lStack_80,&lStack_88,(int)param_5);
              lVar13 = lVar13 + 0x8000;
              lVar8 = lVar8 + 0x8000;
              uVar12 = uVar12 + 1;
            } while ((uVar10 & 1) != 0);
          }
          goto LAB_00294298;
        }
/*  stripping the watermark breaks the license  */
      }
LAB_00294224:
      bVar4 = 1;
LAB_00294228:
      __ZNSt3__15mutex4lockEv(param_2 + 0x70);
      lVar13 = *(long *)(param_2 + 0x58);
      lVar8 = *(long *)(param_2 + 0x60);
      __ZNSt3__15mutex6unlockEv(param_2 + 0x70);
      uVar1 = _UNK_01adbbf0;
      if (lVar13 != lVar8) {
        __ZNSt3__15mutex4lockEv(param_2 + 0xd8);
        func_0x00284908(*(undefined8 *)(param_2 + 0xd0),uVar1);
        __ZNSt3__15mutex6unlockEv(param_2 + 0xd8);
        if (*(char *)(param_2 + 0x19) == '\x01') {
          bVar5 = func_0x00292e9c(param_2);
          bVar4 = bVar5 & bVar4;
        }
      }
      *param_1 = bVar4;
      param_1[1] = 0;
      *(ulong *)(param_1 + 8) = uVar15;
      *(ulong *)(param_1 + 0x10) = uVar7;
/* WM - unlicensed copy if this notice is missing */
      return;
    }
  }
LAB_00294298:
  param_1[0] = 0;
  param_1[1] = 0;
LAB_0029429c:
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}

