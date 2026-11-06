/*  +-------------------------------------------------------------------------+
 *  |  watermark - @pengussy                                                    |
 *  |  do not remove. do not sell. do not re-upload modified. do not claim.   |
 *  |  origin github.com/pengussy   chat discord.gg/sdkhDjTex   donate donate/README.md   |
 *  +-------------------------------------------------------------------------+
 *  file-id: 0x1f648:bbb23a85a2
 */

undefined8 FUN_0001f648(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined2 uVar4;
  uint auStack_64 [5];
  uint uStack_50;
  uint uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  
  lVar3 = (**(code **)(*param_1 + 0xf8))();
  if (lVar3 != -1) {
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
/* WM: watermarked copy - do not remove @ discord.gg/sdkhDjTex */
    param_3[8] = 0;
    param_3[3] = 0;
    param_3[2] = 0;
    param_3[5] = 0;
    param_3[4] = 0;
    param_3[1] = 0;
    *param_3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x40))(param_1,lVar3);
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        *(undefined2 *)((long)param_3 + 4) = 0x2000;
        return 0;
      }
      if (iVar2 != 3) {
        func_0x0174ef58("Don\'t know anything about this file type",
                        "/Users/norby/Downloads/OpiumwareMac/dependencies/DirectXShaderCompiler/tools/clang/tools/dxcompiler/dxcfilesystem.cpp"
                        ,0x2dd);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1f79c);
        (*pcVar1)();
      }
      *(undefined2 *)((long)param_3 + 4) = 0x1000;
      return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x38))(param_1,lVar3,auStack_64);
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
    if (iVar2 != 0) {
      uVar4 = 0x8000;
      if ((auStack_64[0] & 0x10) != 0) {
        uVar4 = 0x4000;
      }
      *(undefined2 *)((long)param_3 + 4) = uVar4;
      *(undefined4 *)param_3 = uStack_38;
      param_3[1] = (ulong)uStack_34;
      param_3[6] = (ulong)uStack_50;
      param_3[0xc] = (ulong)uStack_40;
      return 0;
    }
  }
  return 0xffffffff;
}

