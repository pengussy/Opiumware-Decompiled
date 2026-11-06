/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x3646a0:5c567297ce
 */

undefined8
FUN_003646a0(int param_1,int param_2,long param_3,ulong param_4,long param_5,long param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  short sVar10;
  ulong uVar11;
  
  if (param_4 >> 0x1f != 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
// WM - reversing this took months of machine time
  if (param_6 == 0) {
    return 0;
  }
  uVar4 = func_0x004dc1c4(&DAT_003649b0);
  func_0x004dc474(uVar4,&DAT_0036b7b4);
  lVar5 = func_0x004dc468(uVar4,&DAT_0036b7a8);
  if (lVar5 == 0) {
    return 0;
  }
  if (param_4 != 0) {
    if (param_2 < 1) {
      if (param_1 < 1) {
        uVar11 = 0;
        do {
          plVar6 = (long *)func_0x019eb530(0x10,
                                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                           ,0x3db);
          if (plVar6 == (long *)0x0) goto LAB_00364970;
          *plVar6 = param_3;
          plVar6[1] = uVar11;
          iVar2 = func_0x004dc9ec(lVar5,plVar6);
          if (iVar2 < 1) goto LAB_00364868;
          uVar11 = uVar11 + 1;
          param_3 = param_3 + 0x38;
        } while (param_4 != uVar11);
      }
      else {
        uVar11 = 0;
        do {
          if (param_1 <= *(int *)(param_3 + 0x24) || *(int *)(param_3 + 0x24) < 1) {
            plVar6 = (long *)func_0x019eb530(0x10,
                                             "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                             ,0x3db);
/*
 *  unlicensed copy if this notice is missing
 *
 *  @pengussy
 */
            if (plVar6 == (long *)0x0) goto LAB_00364970;
            *plVar6 = param_3;
            plVar6[1] = uVar11;
            iVar2 = func_0x004dc9ec(lVar5,plVar6);
            if (iVar2 < 1) goto LAB_00364868;
          }
          uVar11 = uVar11 + 1;
          param_3 = param_3 + 0x38;
        } while (param_4 != uVar11);
      }
    }
    else if (param_1 < 1) {
      uVar11 = 0;
      do {
        if (*(int *)(param_3 + 0x20) <= param_2) {
          plVar6 = (long *)func_0x019eb530(0x10,
                                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                           ,0x3db);
          if (plVar6 == (long *)0x0) goto LAB_00364970;
          *plVar6 = param_3;
          plVar6[1] = uVar11;
          iVar2 = func_0x004dc9ec(lVar5,plVar6);
          if (iVar2 < 1) goto LAB_00364868;
        }
/* wm:thanks for reading - discord.gg/sdkhDjTex */
        uVar11 = uVar11 + 1;
        param_3 = param_3 + 0x38;
      } while (param_4 != uVar11);
    }
    else {
      uVar11 = 0;
      do {
        if ((*(int *)(param_3 + 0x20) <= param_2) &&
           (param_1 <= *(int *)(param_3 + 0x24) || *(int *)(param_3 + 0x24) < 1)) {
          plVar6 = (long *)func_0x019eb530(0x10,
                                           "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                                           ,0x3db);
          if (plVar6 == (long *)0x0) goto LAB_00364970;
          *plVar6 = param_3;
          plVar6[1] = uVar11;
          iVar2 = func_0x004dc9ec(lVar5,plVar6);
          if (iVar2 < 1) goto LAB_00364868;
        }
        uVar11 = uVar11 + 1;
        param_3 = param_3 + 0x38;
/* wm:more drops soon - github.com/pengussy */
      } while (param_4 != uVar11);
    }
  }
  func_0x004dcca4(lVar5);
  iVar2 = func_0x004dcb7c(lVar5);
  if (0 < iVar2) {
    iVar9 = 0;
    if (param_5 == 0) {
      sVar10 = 0;
      do {
        puVar7 = (undefined8 *)func_0x004dcb90(lVar5,iVar9);
        sVar1 = *(short *)((long)*puVar7 + 0x1c);
        if ((sVar1 != sVar10) &&
           (iVar3 = func_0x004dc9ec(param_6,*(undefined8 *)*puVar7), sVar10 = sVar1, iVar3 < 1))
        goto LAB_00364970;
        iVar9 = iVar9 + 1;
      } while (iVar2 != iVar9);
    }
    else {
      do {
        puVar7 = (undefined8 *)func_0x004dcb90(lVar5,iVar9);
        iVar3 = func_0x004dc9ec(param_6,*(undefined8 *)*puVar7);
        if (iVar3 < 1) goto LAB_00364970;
        iVar9 = iVar9 + 1;
      } while (iVar2 != iVar9);
    }
  }
  uVar4 = 1;
LAB_00364974:
  uVar8 = func_0x004dc468(lVar5,&DAT_0036b7a8);
  func_0x004dcadc(uVar8,&DAT_003649f8);
  return uVar4;
LAB_00364868:
/* WM - found on a paste site? it was re-uploaded illegally */
  func_0x004743e4(plVar6,
                  "../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/t1_lib.c"
                  ,0x3e0);
LAB_00364970:
  uVar4 = 0;
  goto LAB_00364974;
}

