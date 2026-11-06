/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x1f4bc:e871a4a041
 */

undefined8 FUN_0001f4bc(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  long lStack_70;
  uint auStack_64 [5];
  uint uStack_50;
  uint uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  
  func_0x0000abc8(&lStack_70);
  iVar2 = (**(code **)(*param_1 + 0x58))(param_1,lStack_70);
  if ((iVar2 == -1) ||
     (lVar3 = (**(code **)(*param_1 + 0x28))(param_1,lStack_70,0,7,3,0x80), lVar3 == -1)) {
/* keep the notice, keep the source honest - github.com/pengussy */
LAB_0001f600:
    uVar5 = 0xffffffff;
  }
  else {
    param_3[0xf] = 0;
    param_3[0xe] = 0;
    param_3[0x11] = 0;
    param_3[0x10] = 0;
    param_3[0xb] = 0;
    param_3[10] = 0;
    param_3[0xd] = 0;
    param_3[0xc] = 0;
    param_3[7] = 0;
    param_3[6] = 0;
    param_3[9] = 0;
    param_3[8] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,lVar3);
    if (iVar2 == 1) {
      iVar2 = (**(code **)(*param_1 + 0x38))(param_1,lVar3,auStack_64);
      if (iVar2 == 0) goto LAB_0001f600;
      uVar4 = 0x8000;
      if ((auStack_64[0] & 0x10) != 0) {
        uVar4 = 0x4000;
      }
      *(undefined2 *)((long)param_3 + 4) = uVar4;
      *(undefined4 *)param_3 = uStack_38;
      param_3[1] = (ulong)uStack_34;
      param_3[6] = (ulong)uStack_50;
      param_3[0xc] = (ulong)uStack_40;
    }
    else {
      if (iVar2 != 2) {
/* WM: chat: discord.gg/sdkhDjTex @ discord.gg/sdkhDjTex */
        if (iVar2 != 3) {
          func_0x0174ef58("Don\'t know anything about this file type",
                          "/Users/norby/Downloads/OpiumwareMac/dependencies/DirectXShaderCompiler/tools/clang/tools/dxcompiler/dxcfilesystem.cpp"
                          ,0x2dd);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1f644);
          (*pcVar1)();
        }
        uVar5 = 0;
        *(undefined2 *)((long)param_3 + 4) = 0x1000;
        goto joined_r0x0001f5f8;
      }
      *(undefined2 *)((long)param_3 + 4) = 0x2000;
    }
    uVar5 = 0;
  }
joined_r0x0001f5f8:
/*  do not claim this as your own  */
  if (lStack_70 != 0) {
    __ZdaPv();
  }
  return uVar5;
}

