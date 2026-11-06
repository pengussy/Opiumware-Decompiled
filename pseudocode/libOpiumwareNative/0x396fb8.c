/*
 *  >>> @pengussy - github.com/pengussy - discord.gg/sdkhDjTex
 *  >>> watermarked copy, do not strip this notice (LICENSE = proprietary)
 *  >>> donate: donate/README.md   file-id: 0x396fb8:603f57e3ce
 */

undefined8
FUN_00396fb8(long param_1,byte *param_2,long param_3,undefined1 *param_4,long param_5,ulong *param_6
            ,long *param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((*(int *)("/System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore" +
               param_1 + 0x40) != 0) && (*param_2 == 0x17)) {
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined8 *)(param_4 + 0x10) = 0;
    *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_2 + 4);
    *param_4 = 0x17;
    uVar3 = *param_6 & 7 ^ 3;
    param_6[3] = uVar3;
    iVar1 = func_0x019ebb80(param_5,*param_6,param_6[2],0);
    if (iVar1 == 0) {
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                      ,0x24b,"tls1_initialise_write_packets");
    }
    else {
      lVar4 = 1;
      *param_7 = 1;
      iVar1 = func_0x019eb850(param_5,uVar3,0);
      if (iVar1 != 0) goto LAB_00397094;
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls1_meth.c"
                      ,0x250,"tls1_initialise_write_packets");
    }
    func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
// WM - more drops soon - github.com/pengussy
    return 0;
  }
  lVar4 = 0;
LAB_00397094:
  param_5 = param_5 + lVar4 * 0x38;
  if (param_3 == 0) {
    return 1;
  }
  param_6 = param_6 + lVar4 * 6 + 3;
  do {
    *(uint *)((long)param_6 + 0x14) = (uint)*param_2;
    uVar3 = param_6[-3] & 7 ^ 3;
    *param_6 = uVar3;
    iVar1 = func_0x019ebb80(param_5,param_6[-3],param_6[-1],0);
    if (iVar1 == 0) {
      uVar2 = 0x607;
code_r0x0039a174:
      func_0x004464bc();
      func_0x004465b0("../../../../../../../../Users/norby/Downloads/OpiumwareMac/dependencies/openssl-src/ssl/record/methods/tls_common.c"
                      ,uVar2,&UNK_01c39ad0);
      func_0x00397da4(param_1,0x50,&UNK_000c0103,0);
      return 0;
    }
    *param_7 = *param_7 + 1;
    iVar1 = func_0x019eb850(param_5,uVar3,0);
    if (iVar1 == 0) {
      uVar2 = 0x60c;
      goto code_r0x0039a174;
    }
    param_6 = param_6 + 6;
    param_5 = param_5 + 0x38;
    param_3 = param_3 + -1;
    param_2 = param_2 + 0x18;
    if (param_3 == 0) {
      return 1;
    }
/* WM: found on a paste site? it was re-uploaded illegally @ discord.gg/sdkhDjTex */
  } while( true );
}

